#include <winapifamily.h>
#include <macwin32.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <apiquery2.h>
#include <processenv.h>
#include <fileapifromapp.h>
#include <debugapi.h>
#include <utilapiset.h>
#include <handleapi.h>
#include <errhandlingapi.h>
#include <fibersapi.h>
#include <namedpipeapi.h>
#include <profileapi.h>
#include <heapapi.h>
#include <ioapiset.h>
#include <synchapi.h>
#include <interlockedapi.h>
#include <processthreadsapi.h>
#include <sysinfoapi.h>
#include <memoryapi.h>
#include <enclaveapi.h>
#include <threadpoollegacyapiset.h>
#include <threadpoolapiset.h>
#include <jobapi.h>
#include <jobapi2.h>
#include <wow64apiset.h>
#include <libloaderapi.h>
#include <securitybaseapi.h>
#include <namespaceapi.h>
#include <systemtopologyapi.h>
#include <processtopologyapi.h>
#include <securityappcontainer.h>
#include <realtimeapiset.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef VOID (WINAPI *PFIBER_START_ROUTINE)(
    LPVOID lpFiberParameter
    );
typedef PFIBER_START_ROUTINE LPFIBER_START_ROUTINE;
typedef LPVOID (WINAPI *PFIBER_CALLOUT_ROUTINE)(
    LPVOID lpParameter
    );
typedef LPVOID LPLDT_ENTRY;
typedef struct _COMMPROP {
    WORD wPacketLength;
    WORD wPacketVersion;
    DWORD dwServiceMask;
    DWORD dwReserved1;
    DWORD dwMaxTxQueue;
    DWORD dwMaxRxQueue;
    DWORD dwMaxBaud;
    DWORD dwProvSubType;
    DWORD dwProvCapabilities;
    DWORD dwSettableParams;
    DWORD dwSettableBaud;
    WORD wSettableData;
    WORD wSettableStopParity;
    DWORD dwCurrentTxQueue;
    DWORD dwCurrentRxQueue;
    DWORD dwProvSpec1;
    DWORD dwProvSpec2;
    WCHAR wcProvChar[1];
} COMMPROP,*LPCOMMPROP;
typedef struct _COMSTAT {
    DWORD fCtsHold : 1;
    DWORD fDsrHold : 1;
    DWORD fRlsdHold : 1;
    DWORD fXoffHold : 1;
    DWORD fXoffSent : 1;
    DWORD fEof : 1;
    DWORD fTxim : 1;
    DWORD fReserved : 25;
    DWORD cbInQue;
    DWORD cbOutQue;
} COMSTAT, *LPCOMSTAT;
typedef struct _DCB {
    DWORD DCBlength;
    DWORD BaudRate;
    DWORD fBinary: 1;
    DWORD fParity: 1;
    DWORD fOutxCtsFlow:1;
    DWORD fOutxDsrFlow:1;
    DWORD fDtrControl:2;
    DWORD fDsrSensitivity:1;
    DWORD fTXContinueOnXoff: 1;
    DWORD fOutX: 1;
    DWORD fInX: 1;
    DWORD fErrorChar: 1;
    DWORD fNull: 1;
    DWORD fRtsControl:2;
    DWORD fAbortOnError:1;
    DWORD fDummy2:17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
} DCB, *LPDCB;
typedef struct _COMMTIMEOUTS {
    DWORD ReadIntervalTimeout;
    DWORD ReadTotalTimeoutMultiplier;
    DWORD ReadTotalTimeoutConstant;
    DWORD WriteTotalTimeoutMultiplier;
    DWORD WriteTotalTimeoutConstant;
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;
typedef struct _COMMCONFIG {
    DWORD dwSize;
    WORD wVersion;
    WORD wReserved;
    DCB dcb;
    DWORD dwProviderSubType;
    DWORD dwProviderOffset;
    DWORD dwProviderSize;
    WCHAR wcProviderData[1];
} COMMCONFIG,*LPCOMMCONFIG;
typedef struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
} MEMORYSTATUS, *LPMEMORYSTATUS;
typedef struct _JIT_DEBUG_INFO {
    DWORD dwSize;
    DWORD dwProcessorArchitecture;
    DWORD dwThreadID;
    DWORD dwReserved0;
    ULONG64 lpExceptionAddress;
    ULONG64 lpExceptionRecord;
    ULONG64 lpContextRecord;
} JIT_DEBUG_INFO, *LPJIT_DEBUG_INFO;
typedef JIT_DEBUG_INFO JIT_DEBUG_INFO32, *LPJIT_DEBUG_INFO32;
typedef JIT_DEBUG_INFO JIT_DEBUG_INFO64, *LPJIT_DEBUG_INFO64;
typedef PEXCEPTION_RECORD LPEXCEPTION_RECORD;
typedef PEXCEPTION_POINTERS LPEXCEPTION_POINTERS;
typedef struct _OFSTRUCT {
    BYTE cBytes;
    BYTE fFixedDisk;
    WORD nErrCode;
    WORD Reserved1;
    WORD Reserved2;
    CHAR szPathName[OFS_MAXPATHNAME];
} OFSTRUCT, *LPOFSTRUCT, *POFSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
int
WINAPI
WinMain (
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nShowCmd
    );
int
WINAPI
wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != NULL)
_Post_writable_byte_size_(dwBytes)
DECLSPEC_ALLOCATOR
HGLOBAL
WINAPI
GlobalAlloc(
    _In_ UINT uFlags,
    _In_ SIZE_T dwBytes
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
WINBASEAPI
_Ret_reallocated_bytes_(hMem, dwBytes)
DECLSPEC_ALLOCATOR
HGLOBAL
WINAPI
GlobalReAlloc (
    _Frees_ptr_ HGLOBAL hMem,
    _In_ SIZE_T dwBytes,
    _In_ UINT uFlags
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
SIZE_T
WINAPI
GlobalSize (
    _In_ HGLOBAL hMem
    );
WINBASEAPI
BOOL
WINAPI
GlobalUnlock(
    _In_ HGLOBAL hMem
    );
WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
GlobalLock (
    _In_ HGLOBAL hMem
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
UINT
WINAPI
GlobalFlags (
    _In_ HGLOBAL hMem
    );
WINBASEAPI
_Ret_maybenull_
HGLOBAL
WINAPI
GlobalHandle (
    _In_ LPCVOID pMem
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
_Success_(return==0)
HGLOBAL
WINAPI
GlobalFree(
    _Frees_ptr_opt_ HGLOBAL hMem
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
SIZE_T
WINAPI
GlobalCompact(
    _In_ DWORD dwMinFree
    );
WINBASEAPI
VOID
WINAPI
GlobalFix(
    _In_ HGLOBAL hMem
    );
WINBASEAPI
VOID
WINAPI
GlobalUnfix(
    _In_ HGLOBAL hMem
    );
WINBASEAPI
LPVOID
WINAPI
GlobalWire(
    _In_ HGLOBAL hMem
    );
WINBASEAPI
BOOL
WINAPI
GlobalUnWire(
    _In_ HGLOBAL hMem
    );
__drv_preferredFunction("GlobalMemoryStatusEx","Deprecated. See MSDN for details")
WINBASEAPI
VOID
WINAPI
GlobalMemoryStatus(
    _Out_ LPMEMORYSTATUS lpBuffer
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != NULL)
_Post_writable_byte_size_(uBytes)
DECLSPEC_ALLOCATOR
HLOCAL
WINAPI
LocalAlloc(
    _In_ UINT uFlags,
    _In_ SIZE_T uBytes
    );
WINBASEAPI
_Ret_reallocated_bytes_(hMem, uBytes)
DECLSPEC_ALLOCATOR
HLOCAL
WINAPI
LocalReAlloc(
    _Frees_ptr_opt_ HLOCAL hMem,
    _In_ SIZE_T uBytes,
    _In_ UINT uFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
LocalLock(
    _In_ HLOCAL hMem
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
_Ret_maybenull_
HLOCAL
WINAPI
LocalHandle(
    _In_ LPCVOID pMem
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
LocalUnlock(
    _In_ HLOCAL hMem
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
SIZE_T
WINAPI
LocalSize(
    _In_ HLOCAL hMem
    );
WINBASEAPI
UINT
WINAPI
LocalFlags(
    _In_ HLOCAL hMem
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return==0)
_Ret_maybenull_
HLOCAL
WINAPI
LocalFree(
    _Frees_ptr_opt_ HLOCAL hMem
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
SIZE_T
WINAPI
LocalShrink(
    _In_ HLOCAL hMem,
    _In_ UINT cbNewSize
    );
WINBASEAPI
SIZE_T
WINAPI
LocalCompact(
    _In_ UINT uMinFree
    );
WINBASEAPI
BOOL
WINAPI
GetBinaryTypeA(
    _In_ LPCSTR lpApplicationName,
    _Out_ LPDWORD lpBinaryType
    );
WINBASEAPI
BOOL
WINAPI
GetBinaryTypeW(
    _In_ LPCWSTR lpApplicationName,
    _Out_ LPDWORD lpBinaryType
    );
WINBASEAPI
_Success_(return != 0 && return < cchBuffer)
DWORD
WINAPI
GetShortPathNameA(
    _In_ LPCSTR lpszLongPath,
    _Out_writes_to_opt_(cchBuffer, return + 1) LPSTR lpszShortPath,
    _In_ DWORD cchBuffer
    );
WINBASEAPI
_Success_(return != 0 && return < cchBuffer)
DWORD
WINAPI
GetLongPathNameTransactedA(
    _In_ LPCSTR lpszShortPath,
    _Out_writes_to_opt_(cchBuffer, return + 1) LPSTR lpszLongPath,
    _In_ DWORD cchBuffer,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
_Success_(return != 0 && return < cchBuffer)
DWORD
WINAPI
GetLongPathNameTransactedW(
    _In_ LPCWSTR lpszShortPath,
    _Out_writes_to_opt_(cchBuffer, return + 1) LPWSTR lpszLongPath,
    _In_ DWORD cchBuffer,
    _In_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetProcessAffinityMask(
    _In_ HANDLE hProcess,
    _Out_ PDWORD_PTR lpProcessAffinityMask,
    _Out_ PDWORD_PTR lpSystemAffinityMask
    );
WINBASEAPI
BOOL
WINAPI
SetProcessAffinityMask(
    _In_ HANDLE hProcess,
    _In_ DWORD_PTR dwProcessAffinityMask
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
GetProcessIoCounters(
    _In_ HANDLE hProcess,
    _Out_ PIO_COUNTERS lpIoCounters
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetProcessWorkingSetSize(
    _In_ HANDLE hProcess,
    _Out_ PSIZE_T lpMinimumWorkingSetSize,
    _Out_ PSIZE_T lpMaximumWorkingSetSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
SetProcessWorkingSetSize(
    _In_ HANDLE hProcess,
    _In_ SIZE_T dwMinimumWorkingSetSize,
    _In_ SIZE_T dwMaximumWorkingSetSize
    );
WINBASEAPI
__analysis_noreturn
VOID
WINAPI
FatalExit(
    _In_ int ExitCode
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetEnvironmentStringsA(
    _In_ _Pre_ _NullNull_terminated_ LPCH NewEnvironment
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
VOID
WINAPI
SwitchToFiber(
    _In_ LPVOID lpFiber
    );
WINBASEAPI
VOID
WINAPI
DeleteFiber(
    _In_ LPVOID lpFiber
    );
WINBASEAPI
BOOL
WINAPI
ConvertFiberToThread(
    VOID
    );
WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
CreateFiberEx(
    _In_ SIZE_T dwStackCommitSize,
    _In_ SIZE_T dwStackReserveSize,
    _In_ DWORD dwFlags,
    _In_ LPFIBER_START_ROUTINE lpStartAddress,
    _In_opt_ LPVOID lpParameter
    );
WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
ConvertThreadToFiberEx(
    _In_opt_ LPVOID lpParameter,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
CreateFiber(
    _In_ SIZE_T dwStackSize,
    _In_ LPFIBER_START_ROUTINE lpStartAddress,
    _In_opt_ LPVOID lpParameter
    );
WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
ConvertThreadToFiber(
    _In_opt_ LPVOID lpParameter
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef void *PUMS_CONTEXT;
typedef void *PUMS_COMPLETION_LIST;
typedef enum _RTL_UMS_THREAD_INFO_CLASS UMS_THREAD_INFO_CLASS, *PUMS_THREAD_INFO_CLASS;
typedef enum _RTL_UMS_SCHEDULER_REASON UMS_SCHEDULER_REASON;
typedef PRTL_UMS_SCHEDULER_ENTRY_POINT PUMS_SCHEDULER_ENTRY_POINT;
typedef struct _UMS_SCHEDULER_STARTUP_INFO {
    ULONG UmsVersion;
    PUMS_COMPLETION_LIST CompletionList;
    PUMS_SCHEDULER_ENTRY_POINT SchedulerProc;
    PVOID SchedulerParam;
} UMS_SCHEDULER_STARTUP_INFO, *PUMS_SCHEDULER_STARTUP_INFO;
typedef struct _UMS_SYSTEM_THREAD_INFORMATION {
    ULONG UmsVersion;
    union {
        struct {
            ULONG IsUmsSchedulerThread : 1;
            ULONG IsUmsWorkerThread : 1;
        } DUMMYSTRUCTNAME;
        ULONG ThreadUmsFlags;
    } DUMMYUNIONNAME;
} UMS_SYSTEM_THREAD_INFORMATION, *PUMS_SYSTEM_THREAD_INFORMATION;
_Must_inspect_result_
WINBASEAPI
BOOL
WINAPI
CreateUmsCompletionList(
    _Outptr_ PUMS_COMPLETION_LIST* UmsCompletionList
    );
WINBASEAPI
BOOL
WINAPI
DequeueUmsCompletionListItems(
    _In_ PUMS_COMPLETION_LIST UmsCompletionList,
    _In_ DWORD WaitTimeOut,
    _Out_ PUMS_CONTEXT* UmsThreadList
    );
WINBASEAPI
BOOL
WINAPI
GetUmsCompletionListEvent(
    _In_ PUMS_COMPLETION_LIST UmsCompletionList,
    _Inout_ PHANDLE UmsCompletionEvent
    );
WINBASEAPI
BOOL
WINAPI
ExecuteUmsThread(
    _Inout_ PUMS_CONTEXT UmsThread
    );
WINBASEAPI
BOOL
WINAPI
UmsThreadYield(
    _In_ PVOID SchedulerParam
    );
WINBASEAPI
BOOL
WINAPI
DeleteUmsCompletionList(
    _In_ PUMS_COMPLETION_LIST UmsCompletionList
    );
WINBASEAPI
PUMS_CONTEXT
WINAPI
GetCurrentUmsThread(
    VOID
    );
WINBASEAPI
PUMS_CONTEXT
WINAPI
GetNextUmsListItem(
    _Inout_ PUMS_CONTEXT UmsContext
    );
WINBASEAPI
BOOL
WINAPI
QueryUmsThreadInformation(
    _In_ PUMS_CONTEXT UmsThread,
    _In_ UMS_THREAD_INFO_CLASS UmsThreadInfoClass,
    _Out_writes_bytes_to_(UmsThreadInformationLength, *ReturnLength) PVOID UmsThreadInformation,
    _In_ ULONG UmsThreadInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
WINBASEAPI
BOOL
WINAPI
SetUmsThreadInformation(
    _In_ PUMS_CONTEXT UmsThread,
    _In_ UMS_THREAD_INFO_CLASS UmsThreadInfoClass,
    _In_ PVOID UmsThreadInformation,
    _In_ ULONG UmsThreadInformationLength
    );
WINBASEAPI
BOOL
WINAPI
DeleteUmsThreadContext(
    _In_ PUMS_CONTEXT UmsThread
    );
WINBASEAPI
BOOL
WINAPI
CreateUmsThreadContext(
    _Outptr_ PUMS_CONTEXT *lpUmsThread
    );
WINBASEAPI
BOOL
WINAPI
EnterUmsSchedulingMode(
    _In_ PUMS_SCHEDULER_STARTUP_INFO SchedulerStartupInfo
    );
WINBASEAPI
BOOL
WINAPI
GetUmsSystemThreadInformation(
    _In_ HANDLE ThreadHandle,
    _Inout_ PUMS_SYSTEM_THREAD_INFORMATION SystemThreadInfo
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
DWORD_PTR
WINAPI
SetThreadAffinityMask(
    _In_ HANDLE hThread,
    _In_ DWORD_PTR dwThreadAffinityMask
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
SetProcessDEPPolicy(
    _In_ DWORD dwFlags
    );
WINBASEAPI
BOOL
WINAPI
GetProcessDEPPolicy(
    _In_ HANDLE hProcess,
    _Out_ LPDWORD lpFlags,
    _Out_ PBOOL lpPermanent
    );
WINBASEAPI
BOOL
WINAPI
RequestWakeupLatency(
    _In_ LATENCY_TIME latency
    );
WINBASEAPI
BOOL
WINAPI
IsSystemResumeAutomatic(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
GetThreadSelectorEntry(
    _In_ HANDLE hThread,
    _In_ DWORD dwSelector,
    _Out_ LPLDT_ENTRY lpSelectorEntry
    );
WINBASEAPI
EXECUTION_STATE
WINAPI
SetThreadExecutionState(
    _In_ EXECUTION_STATE esFlags
    );
typedef REASON_CONTEXT POWER_REQUEST_CONTEXT, *PPOWER_REQUEST_CONTEXT, *LPPOWER_REQUEST_CONTEXT;
WINBASEAPI
HANDLE
WINAPI
PowerCreateRequest (
    _In_ PREASON_CONTEXT Context
    );
WINBASEAPI
BOOL
WINAPI
PowerSetRequest (
    _In_ HANDLE PowerRequest,
    _In_ POWER_REQUEST_TYPE RequestType
    );
WINBASEAPI
BOOL
WINAPI
PowerClearRequest (
    _In_ HANDLE PowerRequest,
    _In_ POWER_REQUEST_TYPE RequestType
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetFileCompletionNotificationModes(
    _In_ HANDLE FileHandle,
    _In_ UCHAR Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
Wow64GetThreadContext(
    _In_ HANDLE hThread,
    _Inout_ PWOW64_CONTEXT lpContext
    );
WINBASEAPI
BOOL
WINAPI
Wow64SetThreadContext(
    _In_ HANDLE hThread,
    _In_ CONST WOW64_CONTEXT *lpContext
    );
WINBASEAPI
BOOL
WINAPI
Wow64GetThreadSelectorEntry(
    _In_ HANDLE hThread,
    _In_ DWORD dwSelector,
    _Out_ PWOW64_LDT_ENTRY lpSelectorEntry
    );
WINBASEAPI
DWORD
WINAPI
Wow64SuspendThread(
    _In_ HANDLE hThread
    );
WINBASEAPI
BOOL
WINAPI
DebugSetProcessKillOnExit(
    _In_ BOOL KillOnExit
    );
WINBASEAPI
BOOL
WINAPI
DebugBreakProcess (
    _In_ HANDLE Process
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
PulseEvent(
    _In_ HANDLE hEvent
    );
WINBASEAPI
ATOM
WINAPI
GlobalDeleteAtom(
    _In_ ATOM nAtom
    );
WINBASEAPI
BOOL
WINAPI
InitAtomTable(
    _In_ DWORD nSize
    );
WINBASEAPI
ATOM
WINAPI
DeleteAtom(
    _In_ ATOM nAtom
    );
WINBASEAPI
UINT
WINAPI
SetHandleCount(
    _In_ UINT uNumber
    );
WINBASEAPI
BOOL
WINAPI
RequestDeviceWakeup(
    _In_ HANDLE hDevice
    );
WINBASEAPI
BOOL
WINAPI
CancelDeviceWakeupRequest(
    _In_ HANDLE hDevice
    );
WINBASEAPI
BOOL
WINAPI
GetDevicePowerState(
    _In_ HANDLE hDevice,
    _Out_ BOOL *pfOn
    );
WINBASEAPI
BOOL
WINAPI
SetMessageWaitingIndicator(
    _In_ HANDLE hMsgIndicator,
    _In_ ULONG ulMsgCount
    );
WINBASEAPI
BOOL
WINAPI
SetFileShortNameA(
    _In_ HANDLE hFile,
    _In_ LPCSTR lpShortName
    );
WINBASEAPI
BOOL
WINAPI
SetFileShortNameW(
    _In_ HANDLE hFile,
    _In_ LPCWSTR lpShortName
    );
WINBASEAPI
DWORD
WINAPI
LoadModule(
    _In_ LPCSTR lpModuleName,
    _In_ LPVOID lpParameterBlock
    );
__drv_preferredFunction("CreateProcess","Deprecated. See MSDN for details")
WINBASEAPI
UINT
WINAPI
WinExec(
    _In_ LPCSTR lpCmdLine,
    _In_ UINT uCmdShow
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
WINBASEAPI
BOOL
WINAPI
ClearCommBreak(
    _In_ HANDLE hFile
    );
WINBASEAPI
BOOL
WINAPI
ClearCommError(
    _In_ HANDLE hFile,
    _Out_opt_ LPDWORD lpErrors,
    _Out_opt_ LPCOMSTAT lpStat
    );
WINBASEAPI
BOOL
WINAPI
SetupComm(
    _In_ HANDLE hFile,
    _In_ DWORD dwInQueue,
    _In_ DWORD dwOutQueue
    );
WINBASEAPI
BOOL
WINAPI
EscapeCommFunction(
    _In_ HANDLE hFile,
    _In_ DWORD dwFunc
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetCommConfig(
    _In_ HANDLE hCommDev,
    _Out_writes_bytes_opt_(*lpdwSize) LPCOMMCONFIG lpCC,
    _Inout_ LPDWORD lpdwSize
    );
WINBASEAPI
BOOL
WINAPI
GetCommMask(
    _In_ HANDLE hFile,
    _Out_ LPDWORD lpEvtMask
    );
WINBASEAPI
BOOL
WINAPI
GetCommProperties(
    _In_ HANDLE hFile,
    _Inout_ LPCOMMPROP lpCommProp
    );
WINBASEAPI
BOOL
WINAPI
GetCommModemStatus(
    _In_ HANDLE hFile,
    _Out_ LPDWORD lpModemStat
    );
WINBASEAPI
BOOL
WINAPI
GetCommState(
    _In_ HANDLE hFile,
    _Out_ LPDCB lpDCB
    );
WINBASEAPI
BOOL
WINAPI
GetCommTimeouts(
    _In_ HANDLE hFile,
    _Out_ LPCOMMTIMEOUTS lpCommTimeouts
    );
WINBASEAPI
BOOL
WINAPI
PurgeComm(
    _In_ HANDLE hFile,
    _In_ DWORD dwFlags
    );
WINBASEAPI
BOOL
WINAPI
SetCommBreak(
    _In_ HANDLE hFile
    );
WINBASEAPI
BOOL
WINAPI
SetCommConfig(
    _In_ HANDLE hCommDev,
    _In_reads_bytes_(dwSize) LPCOMMCONFIG lpCC,
    _In_ DWORD dwSize
    );
WINBASEAPI
BOOL
WINAPI
SetCommMask(
    _In_ HANDLE hFile,
    _In_ DWORD dwEvtMask
    );
WINBASEAPI
BOOL
WINAPI
SetCommState(
    _In_ HANDLE hFile,
    _In_ LPDCB lpDCB
    );
WINBASEAPI
BOOL
WINAPI
SetCommTimeouts(
    _In_ HANDLE hFile,
    _In_ LPCOMMTIMEOUTS lpCommTimeouts
    );
WINBASEAPI
BOOL
WINAPI
TransmitCommChar(
    _In_ HANDLE hFile,
    _In_ char cChar
    );
WINBASEAPI
BOOL
WINAPI
WaitCommEvent(
    _In_ HANDLE hFile,
    _Inout_ LPDWORD lpEvtMask,
    _Inout_opt_ LPOVERLAPPED lpOverlapped
    );
WINBASEAPI
HANDLE
WINAPI
OpenCommPort(
    _In_ ULONG uPortNumber,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwFlagsAndAttributes
    );
WINBASEAPI
ULONG
WINAPI
GetCommPorts(
    _Out_writes_(uPortNumbersCount) PULONG lpPortNumbers,
    _In_ ULONG uPortNumbersCount,
    _Out_ PULONG puPortNumbersFound
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
DWORD
WINAPI
SetTapePosition(
    _In_ HANDLE hDevice,
    _In_ DWORD dwPositionMethod,
    _In_ DWORD dwPartition,
    _In_ DWORD dwOffsetLow,
    _In_ DWORD dwOffsetHigh,
    _In_ BOOL bImmediate
    );
WINBASEAPI
DWORD
WINAPI
GetTapePosition(
    _In_ HANDLE hDevice,
    _In_ DWORD dwPositionType,
    _Out_ LPDWORD lpdwPartition,
    _Out_ LPDWORD lpdwOffsetLow,
    _Out_ LPDWORD lpdwOffsetHigh
    );
WINBASEAPI
DWORD
WINAPI
PrepareTape(
    _In_ HANDLE hDevice,
    _In_ DWORD dwOperation,
    _In_ BOOL bImmediate
    );
WINBASEAPI
DWORD
WINAPI
EraseTape(
    _In_ HANDLE hDevice,
    _In_ DWORD dwEraseType,
    _In_ BOOL bImmediate
    );
WINBASEAPI
DWORD
WINAPI
CreateTapePartition(
    _In_ HANDLE hDevice,
    _In_ DWORD dwPartitionMethod,
    _In_ DWORD dwCount,
    _In_ DWORD dwSize
    );
WINBASEAPI
DWORD
WINAPI
WriteTapemark(
    _In_ HANDLE hDevice,
    _In_ DWORD dwTapemarkType,
    _In_ DWORD dwTapemarkCount,
    _In_ BOOL bImmediate
    );
WINBASEAPI
DWORD
WINAPI
GetTapeStatus(
    _In_ HANDLE hDevice
    );
WINBASEAPI
DWORD
WINAPI
GetTapeParameters(
    _In_ HANDLE hDevice,
    _In_ DWORD dwOperation,
    _Inout_ LPDWORD lpdwSize,
    _Out_writes_bytes_(*lpdwSize) LPVOID lpTapeInformation
    );
WINBASEAPI
DWORD
WINAPI
SetTapeParameters(
    _In_ HANDLE hDevice,
    _In_ DWORD dwOperation,
    _In_ LPVOID lpTapeInformation
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
MulDiv(
    _In_ int nNumber,
    _In_ int nNumerator,
    _In_ int nDenominator
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _DEP_SYSTEM_POLICY_TYPE {
    DEPPolicyAlwaysOff = 0,
    DEPPolicyAlwaysOn,
    DEPPolicyOptIn,
    DEPPolicyOptOut,
    DEPTotalPolicyCount
} DEP_SYSTEM_POLICY_TYPE;
WINBASEAPI
DEP_SYSTEM_POLICY_TYPE
WINAPI
GetSystemDEPPolicy(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
GetSystemRegistryQuota(
    _Out_opt_ PDWORD pdwQuotaAllowed,
    _Out_opt_ PDWORD pdwQuotaUsed
    );
WINBASEAPI
BOOL
WINAPI
FileTimeToDosDateTime(
    _In_ CONST FILETIME *lpFileTime,
    _Out_ LPWORD lpFatDate,
    _Out_ LPWORD lpFatTime
    );
WINBASEAPI
BOOL
WINAPI
DosDateTimeToFileTime(
    _In_ WORD wFatDate,
    _In_ WORD wFatTime,
    _Out_ LPFILETIME lpFileTime
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
_Success_(return != 0)
DWORD
WINAPI
FormatMessageA(
    _In_ DWORD dwFlags,
    _In_opt_ LPCVOID lpSource,
    _In_ DWORD dwMessageId,
    _In_ DWORD dwLanguageId,
    _When_((dwFlags & FORMAT_MESSAGE_ALLOCATE_BUFFER) != 0, _At_((LPSTR*)lpBuffer, _Outptr_result_z_))
    _When_((dwFlags & FORMAT_MESSAGE_ALLOCATE_BUFFER) == 0, _Out_writes_z_(nSize))
             LPSTR lpBuffer,
    _In_ DWORD nSize,
    _In_opt_ va_list *Arguments
    );
WINBASEAPI
_Success_(return != 0)
DWORD
WINAPI
FormatMessageW(
    _In_ DWORD dwFlags,
    _In_opt_ LPCVOID lpSource,
    _In_ DWORD dwMessageId,
    _In_ DWORD dwLanguageId,
    _When_((dwFlags & FORMAT_MESSAGE_ALLOCATE_BUFFER) != 0, _At_((LPWSTR*)lpBuffer, _Outptr_result_z_))
    _When_((dwFlags & FORMAT_MESSAGE_ALLOCATE_BUFFER) == 0, _Out_writes_z_(nSize))
             LPWSTR lpBuffer,
    _In_ DWORD nSize,
    _In_opt_ va_list *Arguments
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HANDLE
WINAPI
CreateMailslotA(
    _In_ LPCSTR lpName,
    _In_ DWORD nMaxMessageSize,
    _In_ DWORD lReadTimeout,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINBASEAPI
HANDLE
WINAPI
CreateMailslotW(
    _In_ LPCWSTR lpName,
    _In_ DWORD nMaxMessageSize,
    _In_ DWORD lReadTimeout,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINBASEAPI
BOOL
WINAPI
GetMailslotInfo(
    _In_ HANDLE hMailslot,
    _Out_opt_ LPDWORD lpMaxMessageSize,
    _Out_opt_ LPDWORD lpNextSize,
    _Out_opt_ LPDWORD lpMessageCount,
    _Out_opt_ LPDWORD lpReadTimeout
    );
WINBASEAPI
BOOL
WINAPI
SetMailslotInfo(
    _In_ HANDLE hMailslot,
    _In_ DWORD lReadTimeout
    );
WINADVAPI
BOOL
WINAPI
EncryptFileA(
    _In_ LPCSTR lpFileName
    );
WINADVAPI
BOOL
WINAPI
EncryptFileW(
    _In_ LPCWSTR lpFileName
    );
WINADVAPI
BOOL
WINAPI
DecryptFileA(
    _In_ LPCSTR lpFileName,
    _Reserved_ DWORD dwReserved
    );
WINADVAPI
BOOL
WINAPI
DecryptFileW(
    _In_ LPCWSTR lpFileName,
    _Reserved_ DWORD dwReserved
    );
WINADVAPI
BOOL
WINAPI
FileEncryptionStatusA(
    _In_ LPCSTR lpFileName,
    _Out_ LPDWORD lpStatus
    );
WINADVAPI
BOOL
WINAPI
FileEncryptionStatusW(
    _In_ LPCWSTR lpFileName,
    _Out_ LPDWORD lpStatus
    );
typedef
DWORD
(WINAPI *PFE_EXPORT_FUNC)(
    _In_reads_bytes_(ulLength) PBYTE pbData,
    _In_opt_ PVOID pvCallbackContext,
    _In_ ULONG ulLength
    );
typedef
DWORD
(WINAPI *PFE_IMPORT_FUNC)(
    _Out_writes_bytes_to_(*ulLength, *ulLength) PBYTE pbData,
    _In_opt_ PVOID pvCallbackContext,
    _Inout_ PULONG ulLength
    );
WINADVAPI
DWORD
WINAPI
OpenEncryptedFileRawA(
    _In_ LPCSTR lpFileName,
    _In_ ULONG ulFlags,
    _Outptr_ PVOID *pvContext
    );
WINADVAPI
DWORD
WINAPI
OpenEncryptedFileRawW(
    _In_ LPCWSTR lpFileName,
    _In_ ULONG ulFlags,
    _Outptr_ PVOID *pvContext
    );
WINADVAPI
DWORD
WINAPI
ReadEncryptedFileRaw(
    _In_ PFE_EXPORT_FUNC pfExportCallback,
    _In_opt_ PVOID pvCallbackContext,
    _In_ PVOID pvContext
    );
WINADVAPI
DWORD
WINAPI
WriteEncryptedFileRaw(
    _In_ PFE_IMPORT_FUNC pfImportCallback,
    _In_opt_ PVOID pvCallbackContext,
    _In_ PVOID pvContext
    );
WINADVAPI
VOID
WINAPI
CloseEncryptedFileRaw(
    _In_ PVOID pvContext
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
lstrcmpA(
    _In_ LPCSTR lpString1,
    _In_ LPCSTR lpString2
    );
WINBASEAPI
int
WINAPI
lstrcmpW(
    _In_ LPCWSTR lpString1,
    _In_ LPCWSTR lpString2
    );
WINBASEAPI
int
WINAPI
lstrcmpiA(
    _In_ LPCSTR lpString1,
    _In_ LPCSTR lpString2
    );
WINBASEAPI
int
WINAPI
lstrcmpiW(
    _In_ LPCWSTR lpString1,
    _In_ LPCWSTR lpString2
    );
WINBASEAPI
_Check_return_
_Success_(return != NULL)
_Post_satisfies_(return == lpString1)
_Ret_maybenull_
LPSTR
WINAPI
lstrcpynA(
    _Out_writes_(iMaxLength) LPSTR lpString1,
    _In_ LPCSTR lpString2,
    _In_ int iMaxLength
    );
WINBASEAPI
_Check_return_
_Success_(return != NULL)
_Post_satisfies_(return == lpString1)
_Ret_maybenull_
LPWSTR
WINAPI
lstrcpynW(
    _Out_writes_(iMaxLength) LPWSTR lpString1,
    _In_ LPCWSTR lpString2,
    _In_ int iMaxLength
    );
WINBASEAPI
LPSTR
WINAPI
lstrcpyA(
    _Out_writes_(_String_length_(lpString2) + 1) LPSTR lpString1,
    _In_ LPCSTR lpString2
    );
WINBASEAPI
LPWSTR
WINAPI
lstrcpyW(
    _Out_writes_(_String_length_(lpString2) + 1) LPWSTR lpString1,
    _In_ LPCWSTR lpString2
    );
WINBASEAPI
LPSTR
WINAPI
lstrcatA(
    _Inout_updates_z_(_String_length_(lpString1) + _String_length_(lpString2) + 1) LPSTR lpString1,
    _In_ LPCSTR lpString2
    );
WINBASEAPI
LPWSTR
WINAPI
lstrcatW(
    _Inout_updates_z_(_String_length_(lpString1) + _String_length_(lpString2) + 1) LPWSTR lpString1,
    _In_ LPCWSTR lpString2
    );
WINBASEAPI
int
WINAPI
lstrlenA(
    _In_ LPCSTR lpString
    );
WINBASEAPI
int
WINAPI
lstrlenW(
    _In_ LPCWSTR lpString
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HFILE
WINAPI
OpenFile(
    _In_ LPCSTR lpFileName,
    _Inout_ LPOFSTRUCT lpReOpenBuff,
    _In_ UINT uStyle
    );
WINBASEAPI
HFILE
WINAPI
_lopen(
    _In_ LPCSTR lpPathName,
    _In_ int iReadWrite
    );
WINBASEAPI
HFILE
WINAPI
_lcreat(
    _In_ LPCSTR lpPathName,
    _In_ int iAttribute
    );
WINBASEAPI
UINT
WINAPI
_lread(
    _In_ HFILE hFile,
    _Out_writes_bytes_to_(uBytes, return) LPVOID lpBuffer,
    _In_ UINT uBytes
    );
WINBASEAPI
UINT
WINAPI
_lwrite(
    _In_ HFILE hFile,
    _In_reads_bytes_(uBytes) LPCCH lpBuffer,
    _In_ UINT uBytes
    );
WINBASEAPI
long
WINAPI
_hread(
    _In_ HFILE hFile,
    _Out_writes_bytes_to_(lBytes, return) LPVOID lpBuffer,
    _In_ long lBytes
    );
WINBASEAPI
long
WINAPI
_hwrite(
    _In_ HFILE hFile,
    _In_reads_bytes_(lBytes) LPCCH lpBuffer,
    _In_ long lBytes
    );
WINBASEAPI
HFILE
WINAPI
_lclose(
    _In_ HFILE hFile
    );
WINBASEAPI
LONG
WINAPI
_llseek(
    _In_ HFILE hFile,
    _In_ LONG lOffset,
    _In_ int iOrigin
    );
WINADVAPI
BOOL
WINAPI
IsTextUnicode(
    _In_reads_bytes_(iSize) CONST VOID* lpv,
    _In_ int iSize,
    _Inout_opt_ LPINT lpiResult
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
DWORD
WINAPI
SignalObjectAndWait(
    _In_ HANDLE hObjectToSignal,
    _In_ HANDLE hObjectToWaitOn,
    _In_ DWORD dwMilliseconds,
    _In_ BOOL bAlertable
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
BackupRead(
    _In_ HANDLE hFile,
    _Out_writes_bytes_to_(nNumberOfBytesToRead, *lpNumberOfBytesRead) LPBYTE lpBuffer,
    _In_ DWORD nNumberOfBytesToRead,
    _Out_ LPDWORD lpNumberOfBytesRead,
    _In_ BOOL bAbort,
    _In_ BOOL bProcessSecurity,
    _Inout_ LPVOID *lpContext
    );
WINBASEAPI
BOOL
WINAPI
BackupSeek(
    _In_ HANDLE hFile,
    _In_ DWORD dwLowBytesToSeek,
    _In_ DWORD dwHighBytesToSeek,
    _Out_ LPDWORD lpdwLowByteSeeked,
    _Out_ LPDWORD lpdwHighByteSeeked,
    _Inout_ LPVOID *lpContext
    );
WINBASEAPI
BOOL
WINAPI
BackupWrite(
    _In_ HANDLE hFile,
    _In_reads_bytes_(nNumberOfBytesToWrite) LPBYTE lpBuffer,
    _In_ DWORD nNumberOfBytesToWrite,
    _Out_ LPDWORD lpNumberOfBytesWritten,
    _In_ BOOL bAbort,
    _In_ BOOL bProcessSecurity,
    _Inout_ LPVOID *lpContext
    );
typedef struct _WIN32_STREAM_ID {
        DWORD dwStreamId ;
        DWORD dwStreamAttributes ;
        LARGE_INTEGER Size ;
        DWORD dwStreamNameSize ;
        WCHAR cStreamName[ ANYSIZE_ARRAY ] ;
} WIN32_STREAM_ID, *LPWIN32_STREAM_ID ;
typedef struct _STARTUPINFOEXA {
    STARTUPINFOA StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
} STARTUPINFOEXA, *LPSTARTUPINFOEXA;
typedef struct _STARTUPINFOEXW {
    STARTUPINFOW StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
} STARTUPINFOEXW, *LPSTARTUPINFOEXW;
typedef STARTUPINFOEXW STARTUPINFOEX;
typedef LPSTARTUPINFOEXW LPSTARTUPINFOEX;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenMutexA(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCSTR lpName
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateSemaphoreA(
    _In_opt_ LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
    _In_ LONG lInitialCount,
    _In_ LONG lMaximumCount,
    _In_opt_ LPCSTR lpName
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenSemaphoreA(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCSTR lpName
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateWaitableTimerA(
    _In_opt_ LPSECURITY_ATTRIBUTES lpTimerAttributes,
    _In_ BOOL bManualReset,
    _In_opt_ LPCSTR lpTimerName
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenWaitableTimerA(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCSTR lpTimerName
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateSemaphoreExA(
    _In_opt_ LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
    _In_ LONG lInitialCount,
    _In_ LONG lMaximumCount,
    _In_opt_ LPCSTR lpName,
    _Reserved_ DWORD dwFlags,
    _In_ DWORD dwDesiredAccess
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateWaitableTimerExA(
    _In_opt_ LPSECURITY_ATTRIBUTES lpTimerAttributes,
    _In_opt_ LPCSTR lpTimerName,
    _In_ DWORD dwFlags,
    _In_ DWORD dwDesiredAccess
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateFileMappingA(
    _In_ HANDLE hFile,
    _In_opt_ LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    _In_ DWORD flProtect,
    _In_ DWORD dwMaximumSizeHigh,
    _In_ DWORD dwMaximumSizeLow,
    _In_opt_ LPCSTR lpName
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateFileMappingNumaA(
    _In_ HANDLE hFile,
    _In_opt_ LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    _In_ DWORD flProtect,
    _In_ DWORD dwMaximumSizeHigh,
    _In_ DWORD dwMaximumSizeLow,
    _In_opt_ LPCSTR lpName,
    _In_ DWORD nndPreferred
    );
WINBASEAPI
HANDLE
WINAPI
OpenFileMappingA(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCSTR lpName
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != 0 && return <= nBufferLength)
DWORD
WINAPI
GetLogicalDriveStringsA(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPSTR lpBuffer
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HMODULE
WINAPI
LoadPackagedLibrary (
    _In_ LPCWSTR lpwLibFileName,
    _Reserved_ DWORD Reserved
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
QueryFullProcessImageNameA(
    _In_ HANDLE hProcess,
    _In_ DWORD dwFlags,
    _Out_writes_to_(*lpdwSize, *lpdwSize) LPSTR lpExeName,
    _Inout_ PDWORD lpdwSize
    );
WINBASEAPI
BOOL
WINAPI
QueryFullProcessImageNameW(
    _In_ HANDLE hProcess,
    _In_ DWORD dwFlags,
    _Out_writes_to_(*lpdwSize, *lpdwSize) LPWSTR lpExeName,
    _Inout_ PDWORD lpdwSize
    );
typedef enum _PROC_THREAD_ATTRIBUTE_NUM {
    ProcThreadAttributeParentProcess = 0,
    ProcThreadAttributeHandleList = 2,
    ProcThreadAttributeGroupAffinity = 3,
    ProcThreadAttributePreferredNode = 4,
    ProcThreadAttributeIdealProcessor = 5,
    ProcThreadAttributeUmsThread = 6,
    ProcThreadAttributeMitigationPolicy = 7,
    ProcThreadAttributeSecurityCapabilities = 9,
    ProcThreadAttributeProtectionLevel = 11,
    ProcThreadAttributeJobList = 13,
    ProcThreadAttributeChildProcessPolicy = 14,
    ProcThreadAttributeAllApplicationPackagesPolicy = 15,
    ProcThreadAttributeWin32kFilter = 16,
    ProcThreadAttributeSafeOpenPromptOriginClaim = 17,
    ProcThreadAttributeDesktopAppPolicy = 18,
    ProcThreadAttributePseudoConsole = 22,
} PROC_THREAD_ATTRIBUTE_NUM;
    (((Number) & PROC_THREAD_ATTRIBUTE_NUMBER) | \
     ((Thread != FALSE) ? PROC_THREAD_ATTRIBUTE_THREAD : 0) | \
     ((Input != FALSE) ? PROC_THREAD_ATTRIBUTE_INPUT : 0) | \
     ((Additive != FALSE) ? PROC_THREAD_ATTRIBUTE_ADDITIVE : 0))
    ProcThreadAttributeValue (ProcThreadAttributeParentProcess, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeHandleList, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeGroupAffinity, TRUE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributePreferredNode, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeIdealProcessor, TRUE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeUmsThread, TRUE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeMitigationPolicy, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeSecurityCapabilities, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeProtectionLevel, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributePseudoConsole, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeJobList, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeChildProcessPolicy, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeAllApplicationPackagesPolicy, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeWin32kFilter, FALSE, TRUE, FALSE)
    ProcThreadAttributeValue (ProcThreadAttributeDesktopAppPolicy, FALSE, TRUE, FALSE)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
VOID
WINAPI
GetStartupInfoA(
    _Out_ LPSTARTUPINFOA lpStartupInfo
    );
#endif
#pragma endregion
#pragma region OneCore Family or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
WINBASEAPI
DWORD
WINAPI
GetFirmwareEnvironmentVariableA(
    _In_ LPCSTR lpName,
    _In_ LPCSTR lpGuid,
    _Out_writes_bytes_to_opt_(nSize, return) PVOID pBuffer,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetFirmwareEnvironmentVariableW(
    _In_ LPCWSTR lpName,
    _In_ LPCWSTR lpGuid,
    _Out_writes_bytes_to_opt_(nSize, return) PVOID pBuffer,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetFirmwareEnvironmentVariableExA(
    _In_ LPCSTR lpName,
    _In_ LPCSTR lpGuid,
    _Out_writes_bytes_to_opt_(nSize, return) PVOID pBuffer,
    _In_ DWORD nSize,
    _Out_opt_ PDWORD pdwAttribubutes
    );
WINBASEAPI
DWORD
WINAPI
GetFirmwareEnvironmentVariableExW(
    _In_ LPCWSTR lpName,
    _In_ LPCWSTR lpGuid,
    _Out_writes_bytes_to_opt_(nSize, return) PVOID pBuffer,
    _In_ DWORD nSize,
    _Out_opt_ PDWORD pdwAttribubutes
    );
WINBASEAPI
BOOL
WINAPI
SetFirmwareEnvironmentVariableA(
    _In_ LPCSTR lpName,
    _In_ LPCSTR lpGuid,
    _In_reads_bytes_opt_(nSize) PVOID pValue,
    _In_ DWORD nSize
    );
WINBASEAPI
BOOL
WINAPI
SetFirmwareEnvironmentVariableW(
    _In_ LPCWSTR lpName,
    _In_ LPCWSTR lpGuid,
    _In_reads_bytes_opt_(nSize) PVOID pValue,
    _In_ DWORD nSize
    );
WINBASEAPI
BOOL
WINAPI
SetFirmwareEnvironmentVariableExA(
    _In_ LPCSTR lpName,
    _In_ LPCSTR lpGuid,
    _In_reads_bytes_opt_(nSize) PVOID pValue,
    _In_ DWORD nSize,
    _In_ DWORD dwAttributes
    );
WINBASEAPI
BOOL
WINAPI
SetFirmwareEnvironmentVariableExW(
    _In_ LPCWSTR lpName,
    _In_ LPCWSTR lpGuid,
    _In_reads_bytes_opt_(nSize) PVOID pValue,
    _In_ DWORD nSize,
    _In_ DWORD dwAttributes
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
GetFirmwareType (
    _Inout_ PFIRMWARE_TYPE FirmwareType
    );
WINBASEAPI
BOOL
WINAPI
IsNativeVhdBoot (
    _Out_ PBOOL NativeVhdBoot
    );
WINBASEAPI
_Ret_maybenull_
HRSRC
WINAPI
FindResourceA(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpName,
    _In_ LPCSTR lpType
    );
WINBASEAPI
_Ret_maybenull_
HRSRC
WINAPI
FindResourceExA(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ LPCSTR lpName,
    _In_ WORD wLanguage
    );
WINBASEAPI
BOOL
WINAPI
EnumResourceTypesA(
    _In_opt_ HMODULE hModule,
    _In_ ENUMRESTYPEPROCA lpEnumFunc,
    _In_ LONG_PTR lParam
    );
WINBASEAPI
BOOL
WINAPI
EnumResourceTypesW(
    _In_opt_ HMODULE hModule,
    _In_ ENUMRESTYPEPROCW lpEnumFunc,
    _In_ LONG_PTR lParam
    );
WINBASEAPI
BOOL
WINAPI
EnumResourceNamesA(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ ENUMRESNAMEPROCA lpEnumFunc,
    _In_ LONG_PTR lParam
    );
WINBASEAPI
BOOL
WINAPI
EnumResourceLanguagesA(
    _In_opt_ HMODULE hModule,
    _In_ LPCSTR lpType,
    _In_ LPCSTR lpName,
    _In_ ENUMRESLANGPROCA lpEnumFunc,
    _In_ LONG_PTR lParam
    );
WINBASEAPI
BOOL
WINAPI
EnumResourceLanguagesW(
    _In_opt_ HMODULE hModule,
    _In_ LPCWSTR lpType,
    _In_ LPCWSTR lpName,
    _In_ ENUMRESLANGPROCW lpEnumFunc,
    _In_ LONG_PTR lParam
    );
WINBASEAPI
HANDLE
WINAPI
BeginUpdateResourceA(
    _In_ LPCSTR pFileName,
    _In_ BOOL bDeleteExistingResources
    );
WINBASEAPI
HANDLE
WINAPI
BeginUpdateResourceW(
    _In_ LPCWSTR pFileName,
    _In_ BOOL bDeleteExistingResources
    );
WINBASEAPI
BOOL
WINAPI
UpdateResourceA(
    _In_ HANDLE hUpdate,
    _In_ LPCSTR lpType,
    _In_ LPCSTR lpName,
    _In_ WORD wLanguage,
    _In_reads_bytes_opt_(cb) LPVOID lpData,
    _In_ DWORD cb
    );
WINBASEAPI
BOOL
WINAPI
UpdateResourceW(
    _In_ HANDLE hUpdate,
    _In_ LPCWSTR lpType,
    _In_ LPCWSTR lpName,
    _In_ WORD wLanguage,
    _In_reads_bytes_opt_(cb) LPVOID lpData,
    _In_ DWORD cb
    );
WINBASEAPI
BOOL
WINAPI
EndUpdateResourceA(
    _In_ HANDLE hUpdate,
    _In_ BOOL fDiscard
    );
WINBASEAPI
BOOL
WINAPI
EndUpdateResourceW(
    _In_ HANDLE hUpdate,
    _In_ BOOL fDiscard
    );
WINBASEAPI
ATOM
WINAPI
GlobalAddAtomA(
    _In_opt_ LPCSTR lpString
    );
WINBASEAPI
ATOM
WINAPI
GlobalAddAtomW(
    _In_opt_ LPCWSTR lpString
    );
WINBASEAPI
ATOM
WINAPI
GlobalAddAtomExA(
    _In_opt_ LPCSTR lpString,
    _In_ DWORD Flags
    );
WINBASEAPI
ATOM
WINAPI
GlobalAddAtomExW(
    _In_opt_ LPCWSTR lpString,
    _In_ DWORD Flags
    );
WINBASEAPI
ATOM
WINAPI
GlobalFindAtomA(
    _In_opt_ LPCSTR lpString
    );
WINBASEAPI
ATOM
WINAPI
GlobalFindAtomW(
    _In_opt_ LPCWSTR lpString
    );
WINBASEAPI
UINT
WINAPI
GlobalGetAtomNameA(
    _In_ ATOM nAtom,
    _Out_writes_to_(nSize, return + 1) LPSTR lpBuffer,
    _In_ int nSize
    );
WINBASEAPI
UINT
WINAPI
GlobalGetAtomNameW(
    _In_ ATOM nAtom,
    _Out_writes_to_(nSize, return + 1) LPWSTR lpBuffer,
    _In_ int nSize
    );
WINBASEAPI
ATOM
WINAPI
AddAtomA(
    _In_opt_ LPCSTR lpString
    );
WINBASEAPI
ATOM
WINAPI
AddAtomW(
    _In_opt_ LPCWSTR lpString
    );
WINBASEAPI
ATOM
WINAPI
FindAtomA(
    _In_opt_ LPCSTR lpString
    );
WINBASEAPI
ATOM
WINAPI
FindAtomW(
    _In_opt_ LPCWSTR lpString
    );
WINBASEAPI
UINT
WINAPI
GetAtomNameA(
    _In_ ATOM nAtom,
    _Out_writes_to_(nSize, return + 1) LPSTR lpBuffer,
    _In_ int nSize
    );
WINBASEAPI
UINT
WINAPI
GetAtomNameW(
    _In_ ATOM nAtom,
    _Out_writes_to_(nSize, return + 1) LPWSTR lpBuffer,
    _In_ int nSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
UINT
WINAPI
GetProfileIntA(
    _In_ LPCSTR lpAppName,
    _In_ LPCSTR lpKeyName,
    _In_ INT nDefault
    );
WINBASEAPI
UINT
WINAPI
GetProfileIntW(
    _In_ LPCWSTR lpAppName,
    _In_ LPCWSTR lpKeyName,
    _In_ INT nDefault
    );
WINBASEAPI
DWORD
WINAPI
GetProfileStringA(
    _In_opt_ LPCSTR lpAppName,
    _In_opt_ LPCSTR lpKeyName,
    _In_opt_ LPCSTR lpDefault,
    _Out_writes_to_opt_(nSize, return + 1) LPSTR lpReturnedString,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetProfileStringW(
    _In_opt_ LPCWSTR lpAppName,
    _In_opt_ LPCWSTR lpKeyName,
    _In_opt_ LPCWSTR lpDefault,
    _Out_writes_to_opt_(nSize, return + 1) LPWSTR lpReturnedString,
    _In_ DWORD nSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
WriteProfileStringA(
    _In_opt_ LPCSTR lpAppName,
    _In_opt_ LPCSTR lpKeyName,
    _In_opt_ LPCSTR lpString
    );
WINBASEAPI
BOOL
WINAPI
WriteProfileStringW(
    _In_opt_ LPCWSTR lpAppName,
    _In_opt_ LPCWSTR lpKeyName,
    _In_opt_ LPCWSTR lpString
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
DWORD
WINAPI
GetProfileSectionA(
    _In_ LPCSTR lpAppName,
    _Out_writes_to_opt_(nSize, return + 1) LPSTR lpReturnedString,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetProfileSectionW(
    _In_ LPCWSTR lpAppName,
    _Out_writes_to_opt_(nSize, return + 1) LPWSTR lpReturnedString,
    _In_ DWORD nSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
WriteProfileSectionA(
    _In_ LPCSTR lpAppName,
    _In_ LPCSTR lpString
    );
WINBASEAPI
BOOL
WINAPI
WriteProfileSectionW(
    _In_ LPCWSTR lpAppName,
    _In_ LPCWSTR lpString
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
UINT
WINAPI
GetPrivateProfileIntA(
    _In_ LPCSTR lpAppName,
    _In_ LPCSTR lpKeyName,
    _In_ INT nDefault,
    _In_opt_ LPCSTR lpFileName
    );
WINBASEAPI
UINT
WINAPI
GetPrivateProfileIntW(
    _In_ LPCWSTR lpAppName,
    _In_ LPCWSTR lpKeyName,
    _In_ INT nDefault,
    _In_opt_ LPCWSTR lpFileName
    );
WINBASEAPI
DWORD
WINAPI
GetPrivateProfileStringA(
    _In_opt_ LPCSTR lpAppName,
    _In_opt_ LPCSTR lpKeyName,
    _In_opt_ LPCSTR lpDefault,
    _Out_writes_to_opt_(nSize, return + 1) LPSTR lpReturnedString,
    _In_ DWORD nSize,
    _In_opt_ LPCSTR lpFileName
    );
WINBASEAPI
DWORD
WINAPI
GetPrivateProfileStringW(
    _In_opt_ LPCWSTR lpAppName,
    _In_opt_ LPCWSTR lpKeyName,
    _In_opt_ LPCWSTR lpDefault,
    _Out_writes_to_opt_(nSize, return + 1) LPWSTR lpReturnedString,
    _In_ DWORD nSize,
    _In_opt_ LPCWSTR lpFileName
    );
WINBASEAPI
BOOL
WINAPI
WritePrivateProfileStringA(
    _In_opt_ LPCSTR lpAppName,
    _In_opt_ LPCSTR lpKeyName,
    _In_opt_ LPCSTR lpString,
    _In_opt_ LPCSTR lpFileName
    );
WINBASEAPI
BOOL
WINAPI
WritePrivateProfileStringW(
    _In_opt_ LPCWSTR lpAppName,
    _In_opt_ LPCWSTR lpKeyName,
    _In_opt_ LPCWSTR lpString,
    _In_opt_ LPCWSTR lpFileName
    );
WINBASEAPI
DWORD
WINAPI
GetPrivateProfileSectionA(
    _In_ LPCSTR lpAppName,
    _Out_writes_to_opt_(nSize, return + 1) LPSTR lpReturnedString,
    _In_ DWORD nSize,
    _In_opt_ LPCSTR lpFileName
    );
WINBASEAPI
DWORD
WINAPI
GetPrivateProfileSectionW(
    _In_ LPCWSTR lpAppName,
    _Out_writes_to_opt_(nSize, return + 1) LPWSTR lpReturnedString,
    _In_ DWORD nSize,
    _In_opt_ LPCWSTR lpFileName
    );
WINBASEAPI
BOOL
WINAPI
WritePrivateProfileSectionA(
    _In_opt_ LPCSTR lpAppName,
    _In_opt_ LPCSTR lpString,
    _In_opt_ LPCSTR lpFileName
    );
WINBASEAPI
BOOL
WINAPI
WritePrivateProfileSectionW(
    _In_opt_ LPCWSTR lpAppName,
    _In_opt_ LPCWSTR lpString,
    _In_opt_ LPCWSTR lpFileName
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
DWORD
WINAPI
GetPrivateProfileSectionNamesA(
    _Out_writes_to_opt_(nSize, return + 1) LPSTR lpszReturnBuffer,
    _In_ DWORD nSize,
    _In_opt_ LPCSTR lpFileName
    );
WINBASEAPI
DWORD
WINAPI
GetPrivateProfileSectionNamesW(
    _Out_writes_to_opt_(nSize, return + 1) LPWSTR lpszReturnBuffer,
    _In_ DWORD nSize,
    _In_opt_ LPCWSTR lpFileName
    );
WINBASEAPI
BOOL
WINAPI
GetPrivateProfileStructA(
    _In_ LPCSTR lpszSection,
    _In_ LPCSTR lpszKey,
    _Out_writes_bytes_opt_(uSizeStruct) LPVOID lpStruct,
    _In_ UINT uSizeStruct,
    _In_opt_ LPCSTR szFile
    );
WINBASEAPI
BOOL
WINAPI
GetPrivateProfileStructW(
    _In_ LPCWSTR lpszSection,
    _In_ LPCWSTR lpszKey,
    _Out_writes_bytes_opt_(uSizeStruct) LPVOID lpStruct,
    _In_ UINT uSizeStruct,
    _In_opt_ LPCWSTR szFile
    );
WINBASEAPI
BOOL
WINAPI
WritePrivateProfileStructA(
    _In_ LPCSTR lpszSection,
    _In_ LPCSTR lpszKey,
    _In_reads_bytes_opt_(uSizeStruct) LPVOID lpStruct,
    _In_ UINT uSizeStruct,
    _In_opt_ LPCSTR szFile
    );
WINBASEAPI
BOOL
WINAPI
WritePrivateProfileStructW(
    _In_ LPCWSTR lpszSection,
    _In_ LPCWSTR lpszKey,
    _In_reads_bytes_opt_(uSizeStruct) LPVOID lpStruct,
    _In_ UINT uSizeStruct,
    _In_opt_ LPCWSTR szFile
    );
WINBASEAPI
BOOLEAN
WINAPI
Wow64EnableWow64FsRedirection (
    _In_ BOOLEAN Wow64FsEnableRedirection
    );
typedef UINT (WINAPI* PGET_SYSTEM_WOW64_DIRECTORY_A)(_Out_writes_to_opt_(uSize, return + 1) LPSTR lpBuffer, _In_ UINT uSize);
typedef UINT (WINAPI* PGET_SYSTEM_WOW64_DIRECTORY_W)(_Out_writes_to_opt_(uSize, return + 1) LPWSTR lpBuffer, _In_ UINT uSize);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
SetDllDirectoryA(
    _In_opt_ LPCSTR lpPathName
    );
WINBASEAPI
BOOL
WINAPI
SetDllDirectoryW(
    _In_opt_ LPCWSTR lpPathName
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetDllDirectoryA(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPSTR lpBuffer
    );
WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetDllDirectoryW(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPWSTR lpBuffer
    );
WINBASEAPI
BOOL
WINAPI
SetSearchPathMode (
    _In_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
CreateDirectoryExA(
    _In_ LPCSTR lpTemplateDirectory,
    _In_ LPCSTR lpNewDirectory,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINBASEAPI
BOOL
WINAPI
CreateDirectoryExW(
    _In_ LPCWSTR lpTemplateDirectory,
    _In_ LPCWSTR lpNewDirectory,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
CreateDirectoryTransactedA(
    _In_opt_ LPCSTR lpTemplateDirectory,
    _In_ LPCSTR lpNewDirectory,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
CreateDirectoryTransactedW(
    _In_opt_ LPCWSTR lpTemplateDirectory,
    _In_ LPCWSTR lpNewDirectory,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
RemoveDirectoryTransactedA(
    _In_ LPCSTR lpPathName,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
RemoveDirectoryTransactedW(
    _In_ LPCWSTR lpPathName,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetFullPathNameTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPSTR lpBuffer,
    _Outptr_opt_ LPSTR *lpFilePart,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetFullPathNameTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPWSTR lpBuffer,
    _Outptr_opt_ LPWSTR *lpFilePart,
    _In_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
DefineDosDeviceA(
    _In_ DWORD dwFlags,
    _In_ LPCSTR lpDeviceName,
    _In_opt_ LPCSTR lpTargetPath
    );
WINBASEAPI
DWORD
WINAPI
QueryDosDeviceA(
    _In_opt_ LPCSTR lpDeviceName,
    _Out_writes_to_opt_(ucchMax, return) LPSTR lpTargetPath,
    _In_ DWORD ucchMax
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HANDLE
WINAPI
CreateFileTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ DWORD dwCreationDisposition,
    _In_ DWORD dwFlagsAndAttributes,
    _In_opt_ HANDLE hTemplateFile,
    _In_ HANDLE hTransaction,
    _In_opt_ PUSHORT pusMiniVersion,
    _Reserved_ PVOID lpExtendedParameter
    );
WINBASEAPI
HANDLE
WINAPI
CreateFileTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ DWORD dwCreationDisposition,
    _In_ DWORD dwFlagsAndAttributes,
    _In_opt_ HANDLE hTemplateFile,
    _In_ HANDLE hTransaction,
    _In_opt_ PUSHORT pusMiniVersion,
    _Reserved_ PVOID lpExtendedParameter
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HANDLE
WINAPI
ReOpenFile(
    _In_ HANDLE hOriginalFile,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwFlagsAndAttributes
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
SetFileAttributesTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ DWORD dwFileAttributes,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
SetFileAttributesTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ DWORD dwFileAttributes,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
GetFileAttributesTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ GET_FILEEX_INFO_LEVELS fInfoLevelId,
    _Out_writes_bytes_(sizeof(WIN32_FILE_ATTRIBUTE_DATA)) LPVOID lpFileInformation,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
GetFileAttributesTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ GET_FILEEX_INFO_LEVELS fInfoLevelId,
    _Out_writes_bytes_(sizeof(WIN32_FILE_ATTRIBUTE_DATA)) LPVOID lpFileInformation,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
DWORD
WINAPI
GetCompressedFileSizeTransactedA(
    _In_ LPCSTR lpFileName,
    _Out_opt_ LPDWORD lpFileSizeHigh,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
DWORD
WINAPI
GetCompressedFileSizeTransactedW(
    _In_ LPCWSTR lpFileName,
    _Out_opt_ LPDWORD lpFileSizeHigh,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
DeleteFileTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
DeleteFileTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
CheckNameLegalDOS8Dot3A(
    _In_ LPCSTR lpName,
    _Out_writes_opt_(OemNameSize) LPSTR lpOemName,
    _In_ DWORD OemNameSize,
    _Out_opt_ PBOOL pbNameContainsSpaces OPTIONAL,
    _Out_ PBOOL pbNameLegal
    );
WINBASEAPI
BOOL
WINAPI
CheckNameLegalDOS8Dot3W(
    _In_ LPCWSTR lpName,
    _Out_writes_opt_(OemNameSize) LPSTR lpOemName,
    _In_ DWORD OemNameSize,
    _Out_opt_ PBOOL pbNameContainsSpaces OPTIONAL,
    _Out_ PBOOL pbNameLegal
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HANDLE
WINAPI
FindFirstFileTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ FINDEX_INFO_LEVELS fInfoLevelId,
    _Out_writes_bytes_(sizeof(WIN32_FIND_DATAA)) LPVOID lpFindFileData,
    _In_ FINDEX_SEARCH_OPS fSearchOp,
    _Reserved_ LPVOID lpSearchFilter,
    _In_ DWORD dwAdditionalFlags,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
HANDLE
WINAPI
FindFirstFileTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ FINDEX_INFO_LEVELS fInfoLevelId,
    _Out_writes_bytes_(sizeof(WIN32_FIND_DATAW)) LPVOID lpFindFileData,
    _In_ FINDEX_SEARCH_OPS fSearchOp,
    _Reserved_ LPVOID lpSearchFilter,
    _In_ DWORD dwAdditionalFlags,
    _In_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
CopyFileA(
    _In_ LPCSTR lpExistingFileName,
    _In_ LPCSTR lpNewFileName,
    _In_ BOOL bFailIfExists
    );
WINBASEAPI
BOOL
WINAPI
CopyFileW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName,
    _In_ BOOL bFailIfExists
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef
DWORD
(WINAPI *LPPROGRESS_ROUTINE)(
    _In_ LARGE_INTEGER TotalFileSize,
    _In_ LARGE_INTEGER TotalBytesTransferred,
    _In_ LARGE_INTEGER StreamSize,
    _In_ LARGE_INTEGER StreamBytesTransferred,
    _In_ DWORD dwStreamNumber,
    _In_ DWORD dwCallbackReason,
    _In_ HANDLE hSourceFile,
    _In_ HANDLE hDestinationFile,
    _In_opt_ LPVOID lpData
    );
WINBASEAPI
BOOL
WINAPI
CopyFileExA(
    _In_ LPCSTR lpExistingFileName,
    _In_ LPCSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _When_(pbCancel != NULL, _Pre_satisfies_(*pbCancel == FALSE))
    _Inout_opt_ LPBOOL pbCancel,
    _In_ DWORD dwCopyFlags
    );
WINBASEAPI
BOOL
WINAPI
CopyFileExW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _When_(pbCancel != NULL, _Pre_satisfies_(*pbCancel == FALSE))
    _Inout_opt_ LPBOOL pbCancel,
    _In_ DWORD dwCopyFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
CopyFileTransactedA(
    _In_ LPCSTR lpExistingFileName,
    _In_ LPCSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_opt_ LPBOOL pbCancel,
    _In_ DWORD dwCopyFlags,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
CopyFileTransactedW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_opt_ LPBOOL pbCancel,
    _In_ DWORD dwCopyFlags,
    _In_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum _COPYFILE2_MESSAGE_TYPE {
     COPYFILE2_CALLBACK_NONE = 0,
     COPYFILE2_CALLBACK_CHUNK_STARTED,
     COPYFILE2_CALLBACK_CHUNK_FINISHED,
     COPYFILE2_CALLBACK_STREAM_STARTED,
     COPYFILE2_CALLBACK_STREAM_FINISHED,
     COPYFILE2_CALLBACK_POLL_CONTINUE,
     COPYFILE2_CALLBACK_ERROR,
     COPYFILE2_CALLBACK_MAX,
} COPYFILE2_MESSAGE_TYPE;
typedef enum _COPYFILE2_MESSAGE_ACTION {
    COPYFILE2_PROGRESS_CONTINUE = 0,
    COPYFILE2_PROGRESS_CANCEL,
    COPYFILE2_PROGRESS_STOP,
    COPYFILE2_PROGRESS_QUIET,
    COPYFILE2_PROGRESS_PAUSE,
} COPYFILE2_MESSAGE_ACTION;
typedef enum _COPYFILE2_COPY_PHASE {
    COPYFILE2_PHASE_NONE = 0,
    COPYFILE2_PHASE_PREPARE_SOURCE,
    COPYFILE2_PHASE_PREPARE_DEST,
    COPYFILE2_PHASE_READ_SOURCE,
    COPYFILE2_PHASE_WRITE_DESTINATION,
    COPYFILE2_PHASE_SERVER_COPY,
    COPYFILE2_PHASE_NAMEGRAFT_COPY,
    COPYFILE2_PHASE_MAX,
} COPYFILE2_COPY_PHASE;
typedef struct COPYFILE2_MESSAGE {
    COPYFILE2_MESSAGE_TYPE Type;
    DWORD dwPadding;
    union {
        struct {
            DWORD dwStreamNumber;
            DWORD dwReserved;
            HANDLE hSourceFile;
            HANDLE hDestinationFile;
            ULARGE_INTEGER uliChunkNumber;
            ULARGE_INTEGER uliChunkSize;
            ULARGE_INTEGER uliStreamSize;
            ULARGE_INTEGER uliTotalFileSize;
        } ChunkStarted;
        struct {
            DWORD dwStreamNumber;
            DWORD dwFlags;
            HANDLE hSourceFile;
            HANDLE hDestinationFile;
            ULARGE_INTEGER uliChunkNumber;
            ULARGE_INTEGER uliChunkSize;
            ULARGE_INTEGER uliStreamSize;
            ULARGE_INTEGER uliStreamBytesTransferred;
            ULARGE_INTEGER uliTotalFileSize;
            ULARGE_INTEGER uliTotalBytesTransferred;
        } ChunkFinished;
        struct {
            DWORD dwStreamNumber;
            DWORD dwReserved;
            HANDLE hSourceFile;
            HANDLE hDestinationFile;
            ULARGE_INTEGER uliStreamSize;
            ULARGE_INTEGER uliTotalFileSize;
        } StreamStarted;
        struct {
            DWORD dwStreamNumber;
            DWORD dwReserved;
            HANDLE hSourceFile;
            HANDLE hDestinationFile;
            ULARGE_INTEGER uliStreamSize;
            ULARGE_INTEGER uliStreamBytesTransferred;
            ULARGE_INTEGER uliTotalFileSize;
            ULARGE_INTEGER uliTotalBytesTransferred;
        } StreamFinished;
        struct {
            DWORD dwReserved;
        } PollContinue;
        struct {
            COPYFILE2_COPY_PHASE CopyPhase;
            DWORD dwStreamNumber;
            HRESULT hrFailure;
            DWORD dwReserved;
            ULARGE_INTEGER uliChunkNumber;
            ULARGE_INTEGER uliStreamSize;
            ULARGE_INTEGER uliStreamBytesTransferred;
            ULARGE_INTEGER uliTotalFileSize;
            ULARGE_INTEGER uliTotalBytesTransferred;
        } Error;
    } Info;
} COPYFILE2_MESSAGE;
typedef
COPYFILE2_MESSAGE_ACTION (CALLBACK *PCOPYFILE2_PROGRESS_ROUTINE)(
  _In_ const COPYFILE2_MESSAGE *pMessage,
  _In_opt_ PVOID pvCallbackContext
);
typedef struct COPYFILE2_EXTENDED_PARAMETERS {
  DWORD dwSize;
  DWORD dwCopyFlags;
  BOOL *pfCancel;
  PCOPYFILE2_PROGRESS_ROUTINE pProgressRoutine;
  PVOID pvCallbackContext;
} COPYFILE2_EXTENDED_PARAMETERS;
WINBASEAPI
HRESULT
WINAPI
CopyFile2(
  _In_ PCWSTR pwszExistingFileName,
  _In_ PCWSTR pwszNewFileName,
  _In_opt_ COPYFILE2_EXTENDED_PARAMETERS *pExtendedParameters
);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
MoveFileA(
    _In_ LPCSTR lpExistingFileName,
    _In_ LPCSTR lpNewFileName
    );
WINBASEAPI
BOOL
WINAPI
MoveFileW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
MoveFileExA(
    _In_ LPCSTR lpExistingFileName,
    _In_opt_ LPCSTR lpNewFileName,
    _In_ DWORD dwFlags
    );
WINBASEAPI
BOOL
WINAPI
MoveFileExW(
    _In_ LPCWSTR lpExistingFileName,
    _In_opt_ LPCWSTR lpNewFileName,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
MoveFileWithProgressA(
    _In_ LPCSTR lpExistingFileName,
    _In_opt_ LPCSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_ DWORD dwFlags
    );
WINBASEAPI
BOOL
WINAPI
MoveFileWithProgressW(
    _In_ LPCWSTR lpExistingFileName,
    _In_opt_ LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
MoveFileTransactedA(
    _In_ LPCSTR lpExistingFileName,
    _In_opt_ LPCSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_ DWORD dwFlags,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
MoveFileTransactedW(
    _In_ LPCWSTR lpExistingFileName,
    _In_opt_ LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_ DWORD dwFlags,
    _In_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
ReplaceFileA(
    _In_ LPCSTR lpReplacedFileName,
    _In_ LPCSTR lpReplacementFileName,
    _In_opt_ LPCSTR lpBackupFileName,
    _In_ DWORD dwReplaceFlags,
    _Reserved_ LPVOID lpExclude,
    _Reserved_ LPVOID lpReserved
    );
WINBASEAPI
BOOL
WINAPI
ReplaceFileW(
    _In_ LPCWSTR lpReplacedFileName,
    _In_ LPCWSTR lpReplacementFileName,
    _In_opt_ LPCWSTR lpBackupFileName,
    _In_ DWORD dwReplaceFlags,
    _Reserved_ LPVOID lpExclude,
    _Reserved_ LPVOID lpReserved
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
CreateHardLinkA(
    _In_ LPCSTR lpFileName,
    _In_ LPCSTR lpExistingFileName,
    _Reserved_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINBASEAPI
BOOL
WINAPI
CreateHardLinkW(
    _In_ LPCWSTR lpFileName,
    _In_ LPCWSTR lpExistingFileName,
    _Reserved_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
CreateHardLinkTransactedA(
    _In_ LPCSTR lpFileName,
    _In_ LPCSTR lpExistingFileName,
    _Reserved_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
CreateHardLinkTransactedW(
    _In_ LPCWSTR lpFileName,
    _In_ LPCWSTR lpExistingFileName,
    _Reserved_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
HANDLE
WINAPI
FindFirstStreamTransactedW (
    _In_ LPCWSTR lpFileName,
    _In_ STREAM_INFO_LEVELS InfoLevel,
    _Out_writes_bytes_(sizeof(WIN32_FIND_STREAM_DATA)) LPVOID lpFindStreamData,
    _Reserved_ DWORD dwFlags,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
HANDLE
WINAPI
FindFirstFileNameTransactedW (
    _In_ LPCWSTR lpFileName,
    _In_ DWORD dwFlags,
    _Inout_ LPDWORD StringLength,
    _Out_writes_(*StringLength) PWSTR LinkName,
    _In_opt_ HANDLE hTransaction
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HANDLE
WINAPI
CreateNamedPipeA(
    _In_ LPCSTR lpName,
    _In_ DWORD dwOpenMode,
    _In_ DWORD dwPipeMode,
    _In_ DWORD nMaxInstances,
    _In_ DWORD nOutBufferSize,
    _In_ DWORD nInBufferSize,
    _In_ DWORD nDefaultTimeOut,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetNamedPipeHandleStateA(
    _In_ HANDLE hNamedPipe,
    _Out_opt_ LPDWORD lpState,
    _Out_opt_ LPDWORD lpCurInstances,
    _Out_opt_ LPDWORD lpMaxCollectionCount,
    _Out_opt_ LPDWORD lpCollectDataTimeout,
    _Out_writes_opt_(nMaxUserNameSize) LPSTR lpUserName,
    _In_ DWORD nMaxUserNameSize
    );
WINBASEAPI
BOOL
WINAPI
CallNamedPipeA(
    _In_ LPCSTR lpNamedPipeName,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesRead) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_ LPDWORD lpBytesRead,
    _In_ DWORD nTimeOut
    );
WINBASEAPI
BOOL
WINAPI
WaitNamedPipeA(
    _In_ LPCSTR lpNamedPipeName,
    _In_ DWORD nTimeOut
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetNamedPipeClientComputerNameA(
    _In_ HANDLE Pipe,
    _Out_writes_bytes_(ClientComputerNameLength) LPSTR ClientComputerName,
    _In_ ULONG ClientComputerNameLength
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
GetNamedPipeClientProcessId(
    _In_ HANDLE Pipe,
    _Out_ PULONG ClientProcessId
    );
WINBASEAPI
BOOL
WINAPI
GetNamedPipeClientSessionId(
    _In_ HANDLE Pipe,
    _Out_ PULONG ClientSessionId
    );
WINBASEAPI
BOOL
WINAPI
GetNamedPipeServerProcessId(
    _In_ HANDLE Pipe,
    _Out_ PULONG ServerProcessId
    );
WINBASEAPI
BOOL
WINAPI
GetNamedPipeServerSessionId(
    _In_ HANDLE Pipe,
    _Out_ PULONG ServerSessionId
    );
#endif
#pragma endregion
#pragma region Application Family or Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
WINBASEAPI
BOOL
WINAPI
SetVolumeLabelA(
    _In_opt_ LPCSTR lpRootPathName,
    _In_opt_ LPCSTR lpVolumeName
    );
WINBASEAPI
BOOL
WINAPI
SetVolumeLabelW(
    _In_opt_ LPCWSTR lpRootPathName,
    _In_opt_ LPCWSTR lpVolumeName
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
SetFileBandwidthReservation(
    _In_ HANDLE hFile,
    _In_ DWORD nPeriodMilliseconds,
    _In_ DWORD nBytesPerPeriod,
    _In_ BOOL bDiscardable,
    _Out_ LPDWORD lpTransferSize,
    _Out_ LPDWORD lpNumOutstandingRequests
    );
WINBASEAPI
BOOL
WINAPI
GetFileBandwidthReservation(
    _In_ HANDLE hFile,
    _Out_ LPDWORD lpPeriodMilliseconds,
    _Out_ LPDWORD lpBytesPerPeriod,
    _Out_ LPBOOL pDiscardable,
    _Out_ LPDWORD lpTransferSize,
    _Out_ LPDWORD lpNumOutstandingRequests
    );
WINADVAPI
BOOL
WINAPI
ClearEventLogA (
    _In_ HANDLE hEventLog,
    _In_opt_ LPCSTR lpBackupFileName
    );
WINADVAPI
BOOL
WINAPI
ClearEventLogW (
    _In_ HANDLE hEventLog,
    _In_opt_ LPCWSTR lpBackupFileName
    );
WINADVAPI
BOOL
WINAPI
BackupEventLogA (
    _In_ HANDLE hEventLog,
    _In_ LPCSTR lpBackupFileName
    );
WINADVAPI
BOOL
WINAPI
BackupEventLogW (
    _In_ HANDLE hEventLog,
    _In_ LPCWSTR lpBackupFileName
    );
WINADVAPI
BOOL
WINAPI
CloseEventLog (
    _In_ HANDLE hEventLog
    );
WINADVAPI
BOOL
WINAPI
DeregisterEventSource (
    _In_ HANDLE hEventLog
    );
WINADVAPI
BOOL
WINAPI
NotifyChangeEventLog(
    _In_ HANDLE hEventLog,
    _In_ HANDLE hEvent
    );
WINADVAPI
BOOL
WINAPI
GetNumberOfEventLogRecords (
    _In_ HANDLE hEventLog,
    _Out_ PDWORD NumberOfRecords
    );
WINADVAPI
BOOL
WINAPI
GetOldestEventLogRecord (
    _In_ HANDLE hEventLog,
    _Out_ PDWORD OldestRecord
    );
WINADVAPI
HANDLE
WINAPI
OpenEventLogA (
    _In_opt_ LPCSTR lpUNCServerName,
    _In_ LPCSTR lpSourceName
    );
WINADVAPI
HANDLE
WINAPI
OpenEventLogW (
    _In_opt_ LPCWSTR lpUNCServerName,
    _In_ LPCWSTR lpSourceName
    );
WINADVAPI
HANDLE
WINAPI
RegisterEventSourceA (
    _In_opt_ LPCSTR lpUNCServerName,
    _In_ LPCSTR lpSourceName
    );
WINADVAPI
HANDLE
WINAPI
RegisterEventSourceW (
    _In_opt_ LPCWSTR lpUNCServerName,
    _In_ LPCWSTR lpSourceName
    );
WINADVAPI
HANDLE
WINAPI
OpenBackupEventLogA (
    _In_opt_ LPCSTR lpUNCServerName,
    _In_ LPCSTR lpFileName
    );
WINADVAPI
HANDLE
WINAPI
OpenBackupEventLogW (
    _In_opt_ LPCWSTR lpUNCServerName,
    _In_ LPCWSTR lpFileName
    );
WINADVAPI
BOOL
WINAPI
ReadEventLogA (
    _In_ HANDLE hEventLog,
    _In_ DWORD dwReadFlags,
    _In_ DWORD dwRecordOffset,
    _Out_writes_bytes_to_(nNumberOfBytesToRead, *pnBytesRead) LPVOID lpBuffer,
    _In_ DWORD nNumberOfBytesToRead,
    _Out_ DWORD *pnBytesRead,
    _Out_ DWORD *pnMinNumberOfBytesNeeded
    );
WINADVAPI
BOOL
WINAPI
ReadEventLogW (
    _In_ HANDLE hEventLog,
    _In_ DWORD dwReadFlags,
    _In_ DWORD dwRecordOffset,
    _Out_writes_bytes_to_(nNumberOfBytesToRead, *pnBytesRead) LPVOID lpBuffer,
    _In_ DWORD nNumberOfBytesToRead,
    _Out_ DWORD *pnBytesRead,
    _Out_ DWORD *pnMinNumberOfBytesNeeded
    );
WINADVAPI
BOOL
WINAPI
ReportEventA (
    _In_ HANDLE hEventLog,
    _In_ WORD wType,
    _In_ WORD wCategory,
    _In_ DWORD dwEventID,
    _In_opt_ PSID lpUserSid,
    _In_ WORD wNumStrings,
    _In_ DWORD dwDataSize,
    _In_reads_opt_(wNumStrings) LPCSTR *lpStrings,
    _In_reads_bytes_opt_(dwDataSize) LPVOID lpRawData
    );
WINADVAPI
BOOL
WINAPI
ReportEventW (
    _In_ HANDLE hEventLog,
    _In_ WORD wType,
    _In_ WORD wCategory,
    _In_ DWORD dwEventID,
    _In_opt_ PSID lpUserSid,
    _In_ WORD wNumStrings,
    _In_ DWORD dwDataSize,
    _In_reads_opt_(wNumStrings) LPCWSTR *lpStrings,
    _In_reads_bytes_opt_(dwDataSize) LPVOID lpRawData
    );
typedef struct _EVENTLOG_FULL_INFORMATION
{
    DWORD dwFull;
}
EVENTLOG_FULL_INFORMATION, *LPEVENTLOG_FULL_INFORMATION;
WINADVAPI
BOOL
WINAPI
GetEventLogInformation (
    _In_ HANDLE hEventLog,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_to_(cbBufSize, *pcbBytesNeeded) LPVOID lpBuffer,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
typedef ULONG OPERATION_ID;
typedef struct _OPERATION_START_PARAMETERS {
    ULONG Version;
    OPERATION_ID OperationId;
    ULONG Flags;
} OPERATION_START_PARAMETERS, *POPERATION_START_PARAMETERS;
typedef struct _OPERATION_END_PARAMETERS {
    ULONG Version;
    OPERATION_ID OperationId;
    ULONG Flags;
} OPERATION_END_PARAMETERS, *POPERATION_END_PARAMETERS;
WINADVAPI
BOOL
WINAPI
OperationStart (
    _In_ OPERATION_START_PARAMETERS* OperationStartParams
    );
WINADVAPI
BOOL
WINAPI
OperationEnd (
    _In_ OPERATION_END_PARAMETERS* OperationEndParams
    );
WINADVAPI
BOOL
WINAPI
AccessCheckAndAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_opt_ LPVOID HandleId,
    _In_ LPSTR ObjectTypeName,
    _In_opt_ LPSTR ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ DWORD DesiredAccess,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOL ObjectCreation,
    _Out_ LPDWORD GrantedAccess,
    _Out_ LPBOOL AccessStatus,
    _Out_ LPBOOL pfGenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
AccessCheckByTypeAndAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ LPCSTR ObjectTypeName,
    _In_opt_ LPCSTR ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ DWORD DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ DWORD Flags,
    _Inout_updates_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ DWORD ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOL ObjectCreation,
    _Out_ LPDWORD GrantedAccess,
    _Out_ LPBOOL AccessStatus,
    _Out_ LPBOOL pfGenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
AccessCheckByTypeResultListAndAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ LPCSTR ObjectTypeName,
    _In_opt_ LPCSTR ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ DWORD DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ DWORD Flags,
    _Inout_updates_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ DWORD ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOL ObjectCreation,
    _Out_writes_(ObjectTypeListLength) LPDWORD GrantedAccess,
    _Out_writes_(ObjectTypeListLength) LPDWORD AccessStatusList,
    _Out_ LPBOOL pfGenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
AccessCheckByTypeResultListAndAuditAlarmByHandleA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ LPCSTR ObjectTypeName,
    _In_opt_ LPCSTR ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ DWORD DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ DWORD Flags,
    _Inout_updates_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ DWORD ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOL ObjectCreation,
    _Out_writes_(ObjectTypeListLength) LPDWORD GrantedAccess,
    _Out_writes_(ObjectTypeListLength) LPDWORD AccessStatusList,
    _Out_ LPBOOL pfGenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
ObjectOpenAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ LPSTR ObjectTypeName,
    _In_opt_ LPSTR ObjectName,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_ HANDLE ClientToken,
    _In_ DWORD DesiredAccess,
    _In_ DWORD GrantedAccess,
    _In_opt_ PPRIVILEGE_SET Privileges,
    _In_ BOOL ObjectCreation,
    _In_ BOOL AccessGranted,
    _Out_ LPBOOL GenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
ObjectPrivilegeAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ DWORD DesiredAccess,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOL AccessGranted
    );
WINADVAPI
BOOL
WINAPI
ObjectCloseAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ BOOL GenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
ObjectDeleteAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPVOID HandleId,
    _In_ BOOL GenerateOnClose
    );
WINADVAPI
BOOL
WINAPI
PrivilegedServiceAuditAlarmA (
    _In_ LPCSTR SubsystemName,
    _In_ LPCSTR ServiceName,
    _In_ HANDLE ClientToken,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOL AccessGranted
    );
WINADVAPI
BOOL
WINAPI
AddConditionalAce (
    _Inout_ PACL pAcl,
    _In_ DWORD dwAceRevision,
    _In_ DWORD AceFlags,
    _In_ UCHAR AceType,
    _In_ DWORD AccessMask,
    _In_ PSID pSid,
    _In_ _Null_terminated_ PWCHAR ConditionStr,
    _Out_ DWORD *ReturnLength
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
BOOL
WINAPI
SetFileSecurityA (
    _In_ LPCSTR lpFileName,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
    );
WINADVAPI
BOOL
WINAPI
GetFileSecurityA (
    _In_ LPCSTR lpFileName,
    _In_ SECURITY_INFORMATION RequestedInformation,
    _Out_writes_bytes_to_opt_(nLength, *lpnLengthNeeded) PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpnLengthNeeded
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
ReadDirectoryChangesW(
    _In_ HANDLE hDirectory,
    _Out_writes_bytes_to_(nBufferLength, *lpBytesReturned) LPVOID lpBuffer,
    _In_ DWORD nBufferLength,
    _In_ BOOL bWatchSubtree,
    _In_ DWORD dwNotifyFilter,
    _Out_opt_ LPDWORD lpBytesReturned,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
WINBASEAPI
BOOL
WINAPI
ReadDirectoryChangesExW(
    _In_ HANDLE hDirectory,
    _Out_writes_bytes_to_(nBufferLength, *lpBytesReturned) LPVOID lpBuffer,
    _In_ DWORD nBufferLength,
    _In_ BOOL bWatchSubtree,
    _In_ DWORD dwNotifyFilter,
    _Out_opt_ LPDWORD lpBytesReturned,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ READ_DIRECTORY_NOTIFY_INFORMATION_CLASS ReadDirectoryNotifyInformationClass
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
LPVOID
WINAPI
MapViewOfFileExNuma(
    _In_ HANDLE hFileMappingObject,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwFileOffsetHigh,
    _In_ DWORD dwFileOffsetLow,
    _In_ SIZE_T dwNumberOfBytesToMap,
    _In_opt_ LPVOID lpBaseAddress,
    _In_ DWORD nndPreferred
    );
WINBASEAPI
BOOL
WINAPI
IsBadReadPtr(
    _In_opt_ CONST VOID *lp,
    _In_ UINT_PTR ucb
    );
WINBASEAPI
BOOL
WINAPI
IsBadWritePtr(
    _In_opt_ LPVOID lp,
    _In_ UINT_PTR ucb
    );
WINBASEAPI
BOOL
WINAPI
IsBadHugeReadPtr(
    _In_opt_ CONST VOID *lp,
    _In_ UINT_PTR ucb
    );
WINBASEAPI
BOOL
WINAPI
IsBadHugeWritePtr(
    _In_opt_ LPVOID lp,
    _In_ UINT_PTR ucb
    );
WINBASEAPI
BOOL
WINAPI
IsBadCodePtr(
    _In_opt_ FARPROC lpfn
    );
WINBASEAPI
BOOL
WINAPI
IsBadStringPtrA(
    _In_opt_ LPCSTR lpsz,
    _In_ UINT_PTR ucchMax
    );
WINBASEAPI
BOOL
WINAPI
IsBadStringPtrW(
    _In_opt_ LPCWSTR lpsz,
    _In_ UINT_PTR ucchMax
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountSidA(
    _In_opt_ LPCSTR lpSystemName,
    _In_ PSID Sid,
    _Out_writes_to_opt_(*cchName, *cchName + 1) LPSTR Name,
    _Inout_ LPDWORD cchName,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountSidW(
    _In_opt_ LPCWSTR lpSystemName,
    _In_ PSID Sid,
    _Out_writes_to_opt_(*cchName, *cchName + 1) LPWSTR Name,
    _Inout_ LPDWORD cchName,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPWSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountNameA(
    _In_opt_ LPCSTR lpSystemName,
    _In_ LPCSTR lpAccountName,
    _Out_writes_bytes_to_opt_(*cbSid, *cbSid) PSID Sid,
    _Inout_ LPDWORD cbSid,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountNameW(
    _In_opt_ LPCWSTR lpSystemName,
    _In_ LPCWSTR lpAccountName,
    _Out_writes_bytes_to_opt_(*cbSid, *cbSid) PSID Sid,
    _Inout_ LPDWORD cbSid,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPWSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountNameLocalA(
    _In_ LPCSTR lpAccountName,
    _Out_writes_bytes_to_opt_(*cbSid, *cbSid) PSID Sid,
    _Inout_ LPDWORD cbSid,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountNameLocalW(
    _In_ LPCWSTR lpAccountName,
    _Out_writes_bytes_to_opt_(*cbSid, *cbSid) PSID Sid,
    _Inout_ LPDWORD cbSid,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPWSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountSidLocalA(
    _In_ PSID Sid,
    _Out_writes_to_opt_(*cchName, *cchName + 1) LPSTR Name,
    _Inout_ LPDWORD cchName,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupAccountSidLocalW(
    _In_ PSID Sid,
    _Out_writes_to_opt_(*cchName, *cchName + 1) LPWSTR Name,
    _Inout_ LPDWORD cchName,
    _Out_writes_to_opt_(*cchReferencedDomainName, *cchReferencedDomainName + 1) LPWSTR ReferencedDomainName,
    _Inout_ LPDWORD cchReferencedDomainName,
    _Out_ PSID_NAME_USE peUse
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
BOOL
WINAPI
LookupPrivilegeValueA(
    _In_opt_ LPCSTR lpSystemName,
    _In_ LPCSTR lpName,
    _Out_ PLUID lpLuid
    );
WINADVAPI
BOOL
WINAPI
LookupPrivilegeValueW(
    _In_opt_ LPCWSTR lpSystemName,
    _In_ LPCWSTR lpName,
    _Out_ PLUID lpLuid
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupPrivilegeNameA(
    _In_opt_ LPCSTR lpSystemName,
    _In_ PLUID lpLuid,
    _Out_writes_to_opt_(*cchName, *cchName + 1) LPSTR lpName,
    _Inout_ LPDWORD cchName
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupPrivilegeNameW(
    _In_opt_ LPCWSTR lpSystemName,
    _In_ PLUID lpLuid,
    _Out_writes_to_opt_(*cchName, *cchName + 1) LPWSTR lpName,
    _Inout_ LPDWORD cchName
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupPrivilegeDisplayNameA(
    _In_opt_ LPCSTR lpSystemName,
    _In_ LPCSTR lpName,
    _Out_writes_to_opt_(*cchDisplayName, *cchDisplayName + 1) LPSTR lpDisplayName,
    _Inout_ LPDWORD cchDisplayName,
    _Out_ LPDWORD lpLanguageId
    );
WINADVAPI
_Success_(return != FALSE) BOOL
WINAPI
LookupPrivilegeDisplayNameW(
    _In_opt_ LPCWSTR lpSystemName,
    _In_ LPCWSTR lpName,
    _Out_writes_to_opt_(*cchDisplayName, *cchDisplayName + 1) LPWSTR lpDisplayName,
    _Inout_ LPDWORD cchDisplayName,
    _Out_ LPDWORD lpLanguageId
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
BuildCommDCBA(
    _In_ LPCSTR lpDef,
    _Out_ LPDCB lpDCB
    );
WINBASEAPI
BOOL
WINAPI
BuildCommDCBW(
    _In_ LPCWSTR lpDef,
    _Out_ LPDCB lpDCB
    );
WINBASEAPI
BOOL
WINAPI
BuildCommDCBAndTimeoutsA(
    _In_ LPCSTR lpDef,
    _Out_ LPDCB lpDCB,
    _Out_ LPCOMMTIMEOUTS lpCommTimeouts
    );
WINBASEAPI
BOOL
WINAPI
BuildCommDCBAndTimeoutsW(
    _In_ LPCWSTR lpDef,
    _Out_ LPDCB lpDCB,
    _Out_ LPCOMMTIMEOUTS lpCommTimeouts
    );
WINBASEAPI
BOOL
WINAPI
CommConfigDialogA(
    _In_ LPCSTR lpszName,
    _In_opt_ HWND hWnd,
    _Inout_ LPCOMMCONFIG lpCC
    );
WINBASEAPI
BOOL
WINAPI
CommConfigDialogW(
    _In_ LPCWSTR lpszName,
    _In_opt_ HWND hWnd,
    _Inout_ LPCOMMCONFIG lpCC
    );
WINBASEAPI
BOOL
WINAPI
GetDefaultCommConfigA(
    _In_ LPCSTR lpszName,
    _Out_writes_bytes_to_(*lpdwSize, *lpdwSize) LPCOMMCONFIG lpCC,
    _Inout_ LPDWORD lpdwSize
    );
WINBASEAPI
BOOL
WINAPI
GetDefaultCommConfigW(
    _In_ LPCWSTR lpszName,
    _Out_writes_bytes_to_(*lpdwSize, *lpdwSize) LPCOMMCONFIG lpCC,
    _Inout_ LPDWORD lpdwSize
    );
WINBASEAPI
BOOL
WINAPI
SetDefaultCommConfigA(
    _In_ LPCSTR lpszName,
    _In_reads_bytes_(dwSize) LPCOMMCONFIG lpCC,
    _In_ DWORD dwSize
    );
WINBASEAPI
BOOL
WINAPI
SetDefaultCommConfigW(
    _In_ LPCWSTR lpszName,
    _In_reads_bytes_(dwSize) LPCOMMCONFIG lpCC,
    _In_ DWORD dwSize
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != 0)
BOOL
WINAPI
GetComputerNameA (
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );
WINBASEAPI
_Success_(return != 0)
BOOL
WINAPI
GetComputerNameW (
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPWSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
DnsHostnameToComputerNameA (
    _In_ LPCSTR Hostname,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPSTR ComputerName,
    _Inout_ LPDWORD nSize
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
DnsHostnameToComputerNameW (
    _In_ LPCWSTR Hostname,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPWSTR ComputerName,
    _Inout_ LPDWORD nSize
    );
WINADVAPI
BOOL
WINAPI
GetUserNameA (
    _Out_writes_to_opt_(*pcbBuffer, *pcbBuffer) LPSTR lpBuffer,
    _Inout_ LPDWORD pcbBuffer
    );
WINADVAPI
BOOL
WINAPI
GetUserNameW (
    _Out_writes_to_opt_(*pcbBuffer, *pcbBuffer) LPWSTR lpBuffer,
    _Inout_ LPDWORD pcbBuffer
    );
WINADVAPI
BOOL
WINAPI
LogonUserA (
    _In_ LPCSTR lpszUsername,
    _In_opt_ LPCSTR lpszDomain,
    _In_opt_ LPCSTR lpszPassword,
    _In_ DWORD dwLogonType,
    _In_ DWORD dwLogonProvider,
    _Outptr_ PHANDLE phToken
    );
WINADVAPI
BOOL
WINAPI
LogonUserW (
    _In_ LPCWSTR lpszUsername,
    _In_opt_ LPCWSTR lpszDomain,
    _In_opt_ LPCWSTR lpszPassword,
    _In_ DWORD dwLogonType,
    _In_ DWORD dwLogonProvider,
    _Outptr_ PHANDLE phToken
    );
WINADVAPI
BOOL
WINAPI
LogonUserExA (
    _In_ LPCSTR lpszUsername,
    _In_opt_ LPCSTR lpszDomain,
    _In_opt_ LPCSTR lpszPassword,
    _In_ DWORD dwLogonType,
    _In_ DWORD dwLogonProvider,
    _Outptr_opt_ PHANDLE phToken,
    _Outptr_opt_ PSID *ppLogonSid,
    _Outptr_opt_result_bytebuffer_all_(*pdwProfileLength) PVOID *ppProfileBuffer,
    _Out_opt_ LPDWORD pdwProfileLength,
    _Out_opt_ PQUOTA_LIMITS pQuotaLimits
    );
WINADVAPI
BOOL
WINAPI
LogonUserExW (
    _In_ LPCWSTR lpszUsername,
    _In_opt_ LPCWSTR lpszDomain,
    _In_opt_ LPCWSTR lpszPassword,
    _In_ DWORD dwLogonType,
    _In_ DWORD dwLogonProvider,
    _Outptr_opt_ PHANDLE phToken,
    _Outptr_opt_ PSID *ppLogonSid,
    _Outptr_opt_result_bytebuffer_all_(*pdwProfileLength) PVOID *ppProfileBuffer,
    _Out_opt_ LPDWORD pdwProfileLength,
    _Out_opt_ PQUOTA_LIMITS pQuotaLimits
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
_Must_inspect_result_ BOOL
WINAPI
CreateProcessWithLogonW(
    _In_ LPCWSTR lpUsername,
    _In_opt_ LPCWSTR lpDomain,
    _In_ LPCWSTR lpPassword,
    _In_ DWORD dwLogonFlags,
    _In_opt_ LPCWSTR lpApplicationName,
    _Inout_opt_ LPWSTR lpCommandLine,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPVOID lpEnvironment,
    _In_opt_ LPCWSTR lpCurrentDirectory,
    _In_ LPSTARTUPINFOW lpStartupInfo,
    _Out_ LPPROCESS_INFORMATION lpProcessInformation
      );
WINADVAPI
_Must_inspect_result_ BOOL
WINAPI
CreateProcessWithTokenW(
    _In_ HANDLE hToken,
    _In_ DWORD dwLogonFlags,
    _In_opt_ LPCWSTR lpApplicationName,
    _Inout_opt_ LPWSTR lpCommandLine,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPVOID lpEnvironment,
    _In_opt_ LPCWSTR lpCurrentDirectory,
    _In_ LPSTARTUPINFOW lpStartupInfo,
    _Out_ LPPROCESS_INFORMATION lpProcessInformation
      );
WINADVAPI
BOOL
WINAPI
IsTokenUntrusted(
    _In_ HANDLE TokenHandle
    );
#endif
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
RegisterWaitForSingleObject(
    _Outptr_ PHANDLE phNewWaitObject,
    _In_ HANDLE hObject,
    _In_ WAITORTIMERCALLBACK Callback,
    _In_opt_ PVOID Context,
    _In_ ULONG dwMilliseconds,
    _In_ ULONG dwFlags
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
UnregisterWait(
    _In_ HANDLE WaitHandle
    );
WINBASEAPI
BOOL
WINAPI
BindIoCompletionCallback (
    _In_ HANDLE FileHandle,
    _In_ LPOVERLAPPED_COMPLETION_ROUTINE Function,
    _In_ ULONG Flags
    );
WINBASEAPI
HANDLE
WINAPI
SetTimerQueueTimer(
    _In_opt_ HANDLE TimerQueue,
    _In_ WAITORTIMERCALLBACK Callback,
    _In_opt_ PVOID Parameter,
    _In_ DWORD DueTime,
    _In_ DWORD Period,
    _In_ BOOL PreferIo
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
CancelTimerQueueTimer(
    _In_opt_ HANDLE TimerQueue,
    _In_ HANDLE Timer
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
DeleteTimerQueue(
    _In_ HANDLE TimerQueue
    );
#endif
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
FORCEINLINE
VOID
InitializeThreadpoolEnvironment(
    _Out_ PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpInitializeCallbackEnviron(pcbe);
}
FORCEINLINE
VOID
SetThreadpoolCallbackPool(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe,
    _In_ PTP_POOL ptpp
    )
{
    TpSetCallbackThreadpool(pcbe, ptpp);
}
FORCEINLINE
VOID
SetThreadpoolCallbackCleanupGroup(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe,
    _In_ PTP_CLEANUP_GROUP ptpcg,
    _In_opt_ PTP_CLEANUP_GROUP_CANCEL_CALLBACK pfng
    )
{
    TpSetCallbackCleanupGroup(pcbe, ptpcg, pfng);
}
FORCEINLINE
VOID
SetThreadpoolCallbackRunsLong(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpSetCallbackLongFunction(pcbe);
}
FORCEINLINE
VOID
SetThreadpoolCallbackLibrary(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe,
    _In_ PVOID mod
    )
{
    TpSetCallbackRaceWithDll(pcbe, mod);
}
FORCEINLINE
VOID
SetThreadpoolCallbackPriority(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe,
    _In_ TP_CALLBACK_PRIORITY Priority
    )
{
    TpSetCallbackPriority(pcbe, Priority);
}
FORCEINLINE
VOID
DestroyThreadpoolEnvironment(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpDestroyCallbackEnviron(pcbe);
}
#endif
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
FORCEINLINE
VOID
SetThreadpoolCallbackPersistent(
    _Inout_ PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpSetCallbackPersistent(pcbe);
}
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreatePrivateNamespaceA(
    _In_opt_ LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes,
    _In_ LPVOID lpBoundaryDescriptor,
    _In_ LPCSTR lpAliasPrefix
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenPrivateNamespaceA(
    _In_ LPVOID lpBoundaryDescriptor,
    _In_ LPCSTR lpAliasPrefix
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
APIENTRY
CreateBoundaryDescriptorA(
    _In_ LPCSTR Name,
    _In_ ULONG Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
AddIntegrityLabelToBoundaryDescriptor(
    _Inout_ HANDLE * BoundaryDescriptor,
    _In_ PSID IntegrityLabel
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagHW_PROFILE_INFOA {
    DWORD dwDockInfo;
    CHAR szHwProfileGuid[HW_PROFILE_GUIDLEN];
    CHAR szHwProfileName[MAX_PROFILE_LEN];
} HW_PROFILE_INFOA, *LPHW_PROFILE_INFOA;
typedef struct tagHW_PROFILE_INFOW {
    DWORD dwDockInfo;
    WCHAR szHwProfileGuid[HW_PROFILE_GUIDLEN];
    WCHAR szHwProfileName[MAX_PROFILE_LEN];
} HW_PROFILE_INFOW, *LPHW_PROFILE_INFOW;
typedef HW_PROFILE_INFOW HW_PROFILE_INFO;
typedef LPHW_PROFILE_INFOW LPHW_PROFILE_INFO;
WINADVAPI
BOOL
WINAPI
GetCurrentHwProfileA (
    _Out_ LPHW_PROFILE_INFOA lpHwProfileInfo
    );
WINADVAPI
BOOL
WINAPI
GetCurrentHwProfileW (
    _Out_ LPHW_PROFILE_INFOW lpHwProfileInfo
    );
WINBASEAPI
BOOL
WINAPI
VerifyVersionInfoA(
    _Inout_ LPOSVERSIONINFOEXA lpVersionInformation,
    _In_ DWORD dwTypeMask,
    _In_ DWORDLONG dwlConditionMask
    );
WINBASEAPI
BOOL
WINAPI
VerifyVersionInfoW(
    _Inout_ LPOSVERSIONINFOEXW lpVersionInformation,
    _In_ DWORD dwTypeMask,
    _In_ DWORDLONG dwlConditionMask
    );
#endif
#pragma endregion
#include <winerror.h>
#include <timezoneapi.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
SetSystemPowerState(
    _In_ BOOL fSuspend,
    _In_ BOOL fForce
    );
#endif
#pragma endregion
#pragma region Desktop or PC Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP)
typedef struct _SYSTEM_POWER_STATUS {
    BYTE ACLineStatus;
    BYTE BatteryFlag;
    BYTE BatteryLifePercent;
    BYTE SystemStatusFlag;
    DWORD BatteryLifeTime;
    DWORD BatteryFullLifeTime;
} SYSTEM_POWER_STATUS, *LPSYSTEM_POWER_STATUS;
WINBASEAPI
BOOL
WINAPI
GetSystemPowerStatus(
    _Out_ LPSYSTEM_POWER_STATUS lpSystemPowerStatus
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
MapUserPhysicalPagesScatter(
    _In_reads_(NumberOfPages) PVOID *VirtualAddresses,
    _In_ ULONG_PTR NumberOfPages,
    _In_reads_opt_(NumberOfPages) PULONG_PTR PageArray
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateJobObjectA(
    _In_opt_ LPSECURITY_ATTRIBUTES lpJobAttributes,
    _In_opt_ LPCSTR lpName
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenJobObjectA(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCSTR lpName
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
CreateJobSet (
    _In_ ULONG NumJob,
    _In_reads_(NumJob) PJOB_SET_ARRAY UserJobSet,
    _In_ ULONG Flags);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HANDLE
WINAPI
FindFirstVolumeA(
    _Out_writes_(cchBufferLength) LPSTR lpszVolumeName,
    _In_ DWORD cchBufferLength
    );
WINBASEAPI
BOOL
WINAPI
FindNextVolumeA(
    _Inout_ HANDLE hFindVolume,
    _Out_writes_(cchBufferLength) LPSTR lpszVolumeName,
    _In_ DWORD cchBufferLength
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HANDLE
WINAPI
FindFirstVolumeMountPointA(
    _In_ LPCSTR lpszRootPathName,
    _Out_writes_(cchBufferLength) LPSTR lpszVolumeMountPoint,
    _In_ DWORD cchBufferLength
    );
WINBASEAPI
HANDLE
WINAPI
FindFirstVolumeMountPointW(
    _In_ LPCWSTR lpszRootPathName,
    _Out_writes_(cchBufferLength) LPWSTR lpszVolumeMountPoint,
    _In_ DWORD cchBufferLength
    );
WINBASEAPI
BOOL
WINAPI
FindNextVolumeMountPointA(
    _In_ HANDLE hFindVolumeMountPoint,
    _Out_writes_(cchBufferLength) LPSTR lpszVolumeMountPoint,
    _In_ DWORD cchBufferLength
    );
WINBASEAPI
BOOL
WINAPI
FindNextVolumeMountPointW(
    _In_ HANDLE hFindVolumeMountPoint,
    _Out_writes_(cchBufferLength) LPWSTR lpszVolumeMountPoint,
    _In_ DWORD cchBufferLength
    );
WINBASEAPI
BOOL
WINAPI
FindVolumeMountPointClose(
    _In_ HANDLE hFindVolumeMountPoint
    );
WINBASEAPI
BOOL
WINAPI
SetVolumeMountPointA(
    _In_ LPCSTR lpszVolumeMountPoint,
    _In_ LPCSTR lpszVolumeName
    );
WINBASEAPI
BOOL
WINAPI
SetVolumeMountPointW(
    _In_ LPCWSTR lpszVolumeMountPoint,
    _In_ LPCWSTR lpszVolumeName
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
DeleteVolumeMountPointA(
    _In_ LPCSTR lpszVolumeMountPoint
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetVolumeNameForVolumeMountPointA(
    _In_ LPCSTR lpszVolumeMountPoint,
    _Out_writes_(cchBufferLength) LPSTR lpszVolumeName,
    _In_ DWORD cchBufferLength
);
WINBASEAPI
BOOL
WINAPI
GetVolumePathNameA(
    _In_ LPCSTR lpszFileName,
    _Out_writes_(cchBufferLength) LPSTR lpszVolumePathName,
    _In_ DWORD cchBufferLength
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetVolumePathNamesForVolumeNameA(
    _In_ LPCSTR lpszVolumeName,
    _Out_writes_to_opt_(cchBufferLength, *lpcchReturnLength) _Post_ _NullNull_terminated_ LPCH lpszVolumePathNames,
    _In_ DWORD cchBufferLength,
    _Out_ PDWORD lpcchReturnLength
    );
typedef struct tagACTCTXA {
    ULONG cbSize;
    DWORD dwFlags;
    LPCSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCSTR lpAssemblyDirectory;
    LPCSTR lpResourceName;
    LPCSTR lpApplicationName;
    HMODULE hModule;
} ACTCTXA, *PACTCTXA;
typedef struct tagACTCTXW {
    ULONG cbSize;
    DWORD dwFlags;
    LPCWSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCWSTR lpAssemblyDirectory;
    LPCWSTR lpResourceName;
    LPCWSTR lpApplicationName;
    HMODULE hModule;
} ACTCTXW, *PACTCTXW;
typedef ACTCTXW ACTCTX;
typedef PACTCTXW PACTCTX;
typedef const ACTCTXA *PCACTCTXA;
typedef const ACTCTXW *PCACTCTXW;
typedef PCACTCTXW PCACTCTX;
WINBASEAPI
HANDLE
WINAPI
CreateActCtxA(
    _In_ PCACTCTXA pActCtx
    );
WINBASEAPI
HANDLE
WINAPI
CreateActCtxW(
    _In_ PCACTCTXW pActCtx
    );
WINBASEAPI
VOID
WINAPI
AddRefActCtx(
    _Inout_ HANDLE hActCtx
    );
WINBASEAPI
VOID
WINAPI
ReleaseActCtx(
    _Inout_ HANDLE hActCtx
    );
WINBASEAPI
BOOL
WINAPI
ZombifyActCtx(
    _Inout_ HANDLE hActCtx
    );
_Success_(return)
WINBASEAPI
BOOL
WINAPI
ActivateActCtx(
    _Inout_opt_ HANDLE hActCtx,
    _Out_ ULONG_PTR *lpCookie
    );
_Success_(return)
WINBASEAPI
BOOL
WINAPI
DeactivateActCtx(
    _In_ DWORD dwFlags,
    _In_ ULONG_PTR ulCookie
    );
WINBASEAPI
BOOL
WINAPI
GetCurrentActCtx(
    _Outptr_ HANDLE *lphActCtx);
typedef struct tagACTCTX_SECTION_KEYED_DATA_2600 {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
} ACTCTX_SECTION_KEYED_DATA_2600, *PACTCTX_SECTION_KEYED_DATA_2600;
typedef const ACTCTX_SECTION_KEYED_DATA_2600 * PCACTCTX_SECTION_KEYED_DATA_2600;
typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA {
    PVOID lpInformation;
    PVOID lpSectionBase;
    ULONG ulSectionLength;
    PVOID lpSectionGlobalDataBase;
    ULONG ulSectionGlobalDataLength;
} ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
typedef const ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *PCACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
typedef struct tagACTCTX_SECTION_KEYED_DATA {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
    ULONG ulFlags;
    ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
} ACTCTX_SECTION_KEYED_DATA, *PACTCTX_SECTION_KEYED_DATA;
typedef const ACTCTX_SECTION_KEYED_DATA * PCACTCTX_SECTION_KEYED_DATA;
_Success_(return)
WINBASEAPI
BOOL
WINAPI
FindActCtxSectionStringA(
    _In_ DWORD dwFlags,
    _Reserved_ const GUID *lpExtensionGuid,
    _In_ ULONG ulSectionId,
    _In_ LPCSTR lpStringToFind,
    _Out_ PACTCTX_SECTION_KEYED_DATA ReturnedData
    );
_Success_(return)
WINBASEAPI
BOOL
WINAPI
FindActCtxSectionStringW(
    _In_ DWORD dwFlags,
    _Reserved_ const GUID *lpExtensionGuid,
    _In_ ULONG ulSectionId,
    _In_ LPCWSTR lpStringToFind,
    _Out_ PACTCTX_SECTION_KEYED_DATA ReturnedData
    );
WINBASEAPI
BOOL
WINAPI
FindActCtxSectionGuid(
    _In_ DWORD dwFlags,
    _Reserved_ const GUID *lpExtensionGuid,
    _In_ ULONG ulSectionId,
    _In_opt_ const GUID *lpGuidToFind,
    _Out_ PACTCTX_SECTION_KEYED_DATA ReturnedData
    );
typedef struct _ACTIVATION_CONTEXT_BASIC_INFORMATION {
    HANDLE hActCtx;
    DWORD dwFlags;
} ACTIVATION_CONTEXT_BASIC_INFORMATION, *PACTIVATION_CONTEXT_BASIC_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_BASIC_INFORMATION *PCACTIVATION_CONTEXT_BASIC_INFORMATION;
_Success_(return)
WINBASEAPI
BOOL
WINAPI
QueryActCtxW(
    _In_ DWORD dwFlags,
    _In_ HANDLE hActCtx,
    _In_opt_ PVOID pvSubInstance,
    _In_ ULONG ulInfoClass,
    _Out_writes_bytes_to_opt_(cbBuffer, *pcbWrittenOrRequired) PVOID pvBuffer,
    _In_ SIZE_T cbBuffer,
    _Out_opt_ SIZE_T *pcbWrittenOrRequired
    );
typedef _Success_(return) BOOL (WINAPI * PQUERYACTCTXW_FUNC)(
    _In_ DWORD dwFlags,
    _In_ HANDLE hActCtx,
    _In_opt_ PVOID pvSubInstance,
    _In_ ULONG ulInfoClass,
    _Out_writes_bytes_to_opt_(cbBuffer, *pcbWrittenOrRequired) PVOID pvBuffer,
    _In_ SIZE_T cbBuffer,
    _Out_opt_ SIZE_T *pcbWrittenOrRequired
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
DWORD
WINAPI
WTSGetActiveConsoleSessionId(
    VOID
    );
WINBASEAPI
DWORD
WINAPI
WTSGetServiceSessionId(
    VOID
    );
WINBASEAPI
BOOLEAN
WINAPI
WTSIsServerContainer(
    VOID
    );
WINBASEAPI
WORD
WINAPI
GetActiveProcessorGroupCount(
    VOID
    );
WINBASEAPI
WORD
WINAPI
GetMaximumProcessorGroupCount(
    VOID
    );
WINBASEAPI
DWORD
WINAPI
GetActiveProcessorCount(
    _In_ WORD GroupNumber
    );
WINBASEAPI
DWORD
WINAPI
GetMaximumProcessorCount(
    _In_ WORD GroupNumber
    );
WINBASEAPI
BOOL
WINAPI
GetNumaProcessorNode(
    _In_ UCHAR Processor,
    _Out_ PUCHAR NodeNumber
    );
WINBASEAPI
BOOL
WINAPI
GetNumaNodeNumberFromHandle(
    _In_ HANDLE hFile,
    _Out_ PUSHORT NodeNumber
    );
WINBASEAPI
BOOL
WINAPI
GetNumaProcessorNodeEx(
    _In_ PPROCESSOR_NUMBER Processor,
    _Out_ PUSHORT NodeNumber
    );
WINBASEAPI
BOOL
WINAPI
GetNumaNodeProcessorMask(
    _In_ UCHAR Node,
    _Out_ PULONGLONG ProcessorMask
    );
WINBASEAPI
BOOL
WINAPI
GetNumaAvailableMemoryNode(
    _In_ UCHAR Node,
    _Out_ PULONGLONG AvailableBytes
    );
WINBASEAPI
BOOL
WINAPI
GetNumaAvailableMemoryNodeEx(
    _In_ USHORT Node,
    _Out_ PULONGLONG AvailableBytes
    );
WINBASEAPI
BOOL
WINAPI
GetNumaProximityNode(
    _In_ ULONG ProximityId,
    _Out_ PUCHAR NodeNumber
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef DWORD (WINAPI *APPLICATION_RECOVERY_CALLBACK)(PVOID pvParameter);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HRESULT
WINAPI
RegisterApplicationRecoveryCallback(
    _In_ APPLICATION_RECOVERY_CALLBACK pRecoveyCallback,
    _In_opt_ PVOID pvParameter,
    _In_ DWORD dwPingInterval,
    _In_ DWORD dwFlags
    );
WINBASEAPI
HRESULT
WINAPI
UnregisterApplicationRecoveryCallback(void);
WINBASEAPI
HRESULT
WINAPI
RegisterApplicationRestart(
    _In_opt_ PCWSTR pwzCommandline,
    _In_ DWORD dwFlags
    );
WINBASEAPI
HRESULT
WINAPI
UnregisterApplicationRestart(void);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HRESULT
WINAPI
GetApplicationRecoveryCallback(
    _In_ HANDLE hProcess,
    _Out_ APPLICATION_RECOVERY_CALLBACK* pRecoveryCallback,
    _Outptr_opt_result_maybenull_ PVOID* ppvParameter,
    _Out_opt_ PDWORD pdwPingInterval,
    _Out_opt_ PDWORD pdwFlags
    );
WINBASEAPI
HRESULT
WINAPI
GetApplicationRestartSettings(
    _In_ HANDLE hProcess,
    _Out_writes_opt_(*pcchSize) PWSTR pwzCommandline,
    _Inout_ PDWORD pcchSize,
    _Out_opt_ PDWORD pdwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
HRESULT
WINAPI
ApplicationRecoveryInProgress(
    _Out_ PBOOL pbCancelled
    );
WINBASEAPI
VOID
WINAPI
ApplicationRecoveryFinished(
    _In_ BOOL bSuccess
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _FILE_BASIC_INFO {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    DWORD FileAttributes;
} FILE_BASIC_INFO, *PFILE_BASIC_INFO;
typedef struct _FILE_STANDARD_INFO {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    DWORD NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFO, *PFILE_STANDARD_INFO;
typedef struct _FILE_NAME_INFO {
    DWORD FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFO, *PFILE_NAME_INFO;
typedef struct _FILE_CASE_SENSITIVE_INFO {
    ULONG Flags;
} FILE_CASE_SENSITIVE_INFO, *PFILE_CASE_SENSITIVE_INFO;
typedef struct _FILE_RENAME_INFO {
    union {
        BOOLEAN ReplaceIfExists;
        DWORD Flags;
    } DUMMYUNIONNAME;
    HANDLE RootDirectory;
    DWORD FileNameLength;
    WCHAR FileName[1];
} FILE_RENAME_INFO, *PFILE_RENAME_INFO;
typedef struct _FILE_ALLOCATION_INFO {
    LARGE_INTEGER AllocationSize;
} FILE_ALLOCATION_INFO, *PFILE_ALLOCATION_INFO;
typedef struct _FILE_END_OF_FILE_INFO {
    LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFO, *PFILE_END_OF_FILE_INFO;
typedef struct _FILE_STREAM_INFO {
    DWORD NextEntryOffset;
    DWORD StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
} FILE_STREAM_INFO, *PFILE_STREAM_INFO;
typedef struct _FILE_COMPRESSION_INFO {
    LARGE_INTEGER CompressedFileSize;
    WORD CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
} FILE_COMPRESSION_INFO, *PFILE_COMPRESSION_INFO;
typedef struct _FILE_ATTRIBUTE_TAG_INFO {
    DWORD FileAttributes;
    DWORD ReparseTag;
} FILE_ATTRIBUTE_TAG_INFO, *PFILE_ATTRIBUTE_TAG_INFO;
typedef struct _FILE_DISPOSITION_INFO {
    BOOLEAN DeleteFile;
} FILE_DISPOSITION_INFO, *PFILE_DISPOSITION_INFO;
typedef struct _FILE_DISPOSITION_INFO_EX {
    DWORD Flags;
} FILE_DISPOSITION_INFO_EX, *PFILE_DISPOSITION_INFO_EX;
typedef struct _FILE_ID_BOTH_DIR_INFO {
    DWORD NextEntryOffset;
    DWORD FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    DWORD FileAttributes;
    DWORD FileNameLength;
    DWORD EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_BOTH_DIR_INFO, *PFILE_ID_BOTH_DIR_INFO;
typedef struct _FILE_FULL_DIR_INFO {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
} FILE_FULL_DIR_INFO, *PFILE_FULL_DIR_INFO;
typedef enum _PRIORITY_HINT {
      IoPriorityHintVeryLow = 0,
      IoPriorityHintLow,
      IoPriorityHintNormal,
      MaximumIoPriorityHintType
} PRIORITY_HINT;
typedef struct _FILE_IO_PRIORITY_HINT_INFO {
    PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFO, *PFILE_IO_PRIORITY_HINT_INFO;
typedef struct _FILE_ALIGNMENT_INFO {
    ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFO, *PFILE_ALIGNMENT_INFO;
typedef struct _FILE_STORAGE_INFO {
    ULONG LogicalBytesPerSector;
    ULONG PhysicalBytesPerSectorForAtomicity;
    ULONG PhysicalBytesPerSectorForPerformance;
    ULONG FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
    ULONG Flags;
    ULONG ByteOffsetForSectorAlignment;
    ULONG ByteOffsetForPartitionAlignment;
} FILE_STORAGE_INFO, *PFILE_STORAGE_INFO;
typedef struct _FILE_ID_INFO {
    ULONGLONG VolumeSerialNumber;
    FILE_ID_128 FileId;
} FILE_ID_INFO, *PFILE_ID_INFO;
typedef struct _FILE_ID_EXTD_DIR_INFO {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    WCHAR FileName[1];
} FILE_ID_EXTD_DIR_INFO, *PFILE_ID_EXTD_DIR_INFO;
typedef struct _FILE_REMOTE_PROTOCOL_INFO
{
    USHORT StructureVersion;
    USHORT StructureSize;
    ULONG Protocol;
    USHORT ProtocolMajorVersion;
    USHORT ProtocolMinorVersion;
    USHORT ProtocolRevision;
    USHORT Reserved;
    ULONG Flags;
    struct {
        ULONG Reserved[8];
    } GenericReserved;
    union {
        struct {
            struct {
                ULONG Capabilities;
            } Server;
            struct {
                ULONG Capabilities;
                ULONG CachingFlags;
            } Share;
        } Smb2;
        ULONG Reserved[16];
    } ProtocolSpecific;
} FILE_REMOTE_PROTOCOL_INFO, *PFILE_REMOTE_PROTOCOL_INFO;
WINBASEAPI
BOOL
WINAPI
GetFileInformationByHandleEx(
    _In_ HANDLE hFile,
    _In_ FILE_INFO_BY_HANDLE_CLASS FileInformationClass,
    _Out_writes_bytes_(dwBufferSize) LPVOID lpFileInformation,
    _In_ DWORD dwBufferSize
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _FILE_ID_TYPE {
      FileIdType,
      ObjectIdType,
      ExtendedFileIdType,
      MaximumFileIdType
} FILE_ID_TYPE, *PFILE_ID_TYPE;
typedef struct FILE_ID_DESCRIPTOR {
    DWORD dwSize;
    FILE_ID_TYPE Type;
    union {
        LARGE_INTEGER FileId;
        GUID ObjectId;
        FILE_ID_128 ExtendedFileId;
    } DUMMYUNIONNAME;
} FILE_ID_DESCRIPTOR, *LPFILE_ID_DESCRIPTOR;
WINBASEAPI
HANDLE
WINAPI
OpenFileById (
    _In_ HANDLE hVolumeHint,
    _In_ LPFILE_ID_DESCRIPTOR lpFileId,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ DWORD dwFlagsAndAttributes
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOLEAN
APIENTRY
CreateSymbolicLinkA (
    _In_ LPCSTR lpSymlinkFileName,
    _In_ LPCSTR lpTargetFileName,
    _In_ DWORD dwFlags
    );
WINBASEAPI
BOOLEAN
APIENTRY
CreateSymbolicLinkW (
    _In_ LPCWSTR lpSymlinkFileName,
    _In_ LPCWSTR lpTargetFileName,
    _In_ DWORD dwFlags
    );
WINBASEAPI
BOOL
WINAPI
QueryActCtxSettingsW(
    _In_opt_ DWORD dwFlags,
    _In_opt_ HANDLE hActCtx,
    _In_opt_ PCWSTR settingsNameSpace,
    _In_ PCWSTR settingName,
    _Out_writes_bytes_to_opt_(dwBuffer, *pdwWrittenOrRequired) PWSTR pvBuffer,
    _In_ SIZE_T dwBuffer,
    _Out_opt_ SIZE_T *pdwWrittenOrRequired
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOLEAN
APIENTRY
CreateSymbolicLinkTransactedA (
    _In_ LPCSTR lpSymlinkFileName,
    _In_ LPCSTR lpTargetFileName,
    _In_ DWORD dwFlags,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOLEAN
APIENTRY
CreateSymbolicLinkTransactedW (
    _In_ LPCWSTR lpSymlinkFileName,
    _In_ LPCWSTR lpTargetFileName,
    _In_ DWORD dwFlags,
    _In_ HANDLE hTransaction
    );
WINBASEAPI
BOOL
WINAPI
ReplacePartitionUnit (
    _In_ PWSTR TargetPartition,
    _In_ PWSTR SparePartition,
    _In_ ULONG Flags
    );
WINBASEAPI
BOOL
WINAPI
AddSecureMemoryCacheCallback(
    _In_ __callback PSECURE_MEMORY_CACHE_CALLBACK pfnCallBack
    );
WINBASEAPI
BOOL
WINAPI
RemoveSecureMemoryCacheCallback(
    _In_ __callback PSECURE_MEMORY_CACHE_CALLBACK pfnCallBack
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
WINBASEAPI
BOOL
WINAPI
CopyContext(
    _Inout_ PCONTEXT Destination,
    _In_ DWORD ContextFlags,
    _In_ PCONTEXT Source
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(return != FALSE)
WINBASEAPI
BOOL
WINAPI
InitializeContext(
    _Out_writes_bytes_opt_(*ContextLength) PVOID Buffer,
    _In_ DWORD ContextFlags,
    _Out_ PCONTEXT* Context,
    _Inout_ PDWORD ContextLength
    );
_Success_(return != FALSE)
WINBASEAPI
BOOL
WINAPI
InitializeContext2(
    _Out_writes_bytes_opt_(*ContextLength) PVOID Buffer,
    _In_ DWORD ContextFlags,
    _Out_ PCONTEXT* Context,
    _Inout_ PDWORD ContextLength,
    _In_ ULONG64 XStateCompactionMask
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
DWORD64
WINAPI
GetEnabledXStateFeatures(
    VOID
    );
_Must_inspect_result_
WINBASEAPI
BOOL
WINAPI
GetXStateFeaturesMask(
    _In_ PCONTEXT Context,
    _Out_ PDWORD64 FeatureMask
    );
_Success_(return != NULL)
WINBASEAPI
PVOID
WINAPI
LocateXStateFeature(
    _In_ PCONTEXT Context,
    _In_ DWORD FeatureId,
    _Out_opt_ PDWORD Length
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
WINBASEAPI
BOOL
WINAPI
SetXStateFeaturesMask(
    _Inout_ PCONTEXT Context,
    _In_ DWORD64 FeatureMask
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
DWORD
APIENTRY
EnableThreadProfiling(
    _In_ HANDLE ThreadHandle,
    _In_ DWORD Flags,
    _In_ DWORD64 HardwareCounters,
    _Out_ HANDLE *PerformanceDataHandle
    );
WINBASEAPI
DWORD
APIENTRY
DisableThreadProfiling(
    _In_ HANDLE PerformanceDataHandle
    );
WINBASEAPI
DWORD
APIENTRY
QueryThreadProfiling(
    _In_ HANDLE ThreadHandle,
    _Out_ PBOOLEAN Enabled
    );
WINBASEAPI
DWORD
APIENTRY
ReadThreadProfilingData(
    _In_ HANDLE PerformanceDataHandle,
    _In_ DWORD Flags,
    _Out_ PPERFORMANCE_DATA PerformanceData
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
DWORD
WINAPI
RaiseCustomSystemEventTrigger(
    _In_ PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG CustomSystemEventTriggerConfig
    );
#endif
#pragma endregion
}
