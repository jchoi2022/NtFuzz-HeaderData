#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
HANDLE
WINAPI
CreateToolhelp32Snapshot(
    DWORD dwFlags,
    DWORD th32ProcessID
    );
typedef struct tagHEAPLIST32
{
    SIZE_T dwSize;
    DWORD th32ProcessID;
    ULONG_PTR th32HeapID;
    DWORD dwFlags;
} HEAPLIST32;
typedef HEAPLIST32 * PHEAPLIST32;
typedef HEAPLIST32 * LPHEAPLIST32;
BOOL
WINAPI
Heap32ListFirst(
    HANDLE hSnapshot,
    LPHEAPLIST32 lphl
    );
BOOL
WINAPI
Heap32ListNext(
    HANDLE hSnapshot,
    LPHEAPLIST32 lphl
    );
typedef struct tagHEAPENTRY32
{
    SIZE_T dwSize;
    HANDLE hHandle;
    ULONG_PTR dwAddress;
    SIZE_T dwBlockSize;
    DWORD dwFlags;
    DWORD dwLockCount;
    DWORD dwResvd;
    DWORD th32ProcessID;
    ULONG_PTR th32HeapID;
} HEAPENTRY32;
typedef HEAPENTRY32 * PHEAPENTRY32;
typedef HEAPENTRY32 * LPHEAPENTRY32;
BOOL
WINAPI
Heap32First(
    LPHEAPENTRY32 lphe,
    DWORD th32ProcessID,
    ULONG_PTR th32HeapID
    );
BOOL
WINAPI
Heap32Next(
    LPHEAPENTRY32 lphe
    );
BOOL
WINAPI
Toolhelp32ReadProcessMemory(
    DWORD th32ProcessID,
    LPCVOID lpBaseAddress,
    LPVOID lpBuffer,
    SIZE_T cbRead,
    SIZE_T* lpNumberOfBytesRead
    );
typedef struct tagPROCESSENTRY32W
{
    DWORD dwSize;
    DWORD cntUsage;
    DWORD th32ProcessID;
    ULONG_PTR th32DefaultHeapID;
    DWORD th32ModuleID;
    DWORD cntThreads;
    DWORD th32ParentProcessID;
    LONG pcPriClassBase;
    DWORD dwFlags;
    WCHAR szExeFile[MAX_PATH];
} PROCESSENTRY32W;
typedef PROCESSENTRY32W * PPROCESSENTRY32W;
typedef PROCESSENTRY32W * LPPROCESSENTRY32W;
BOOL
WINAPI
Process32FirstW(
    HANDLE hSnapshot,
    LPPROCESSENTRY32W lppe
    );
BOOL
WINAPI
Process32NextW(
    HANDLE hSnapshot,
    LPPROCESSENTRY32W lppe
    );
typedef struct tagPROCESSENTRY32
{
    DWORD dwSize;
    DWORD cntUsage;
    DWORD th32ProcessID;
    ULONG_PTR th32DefaultHeapID;
    DWORD th32ModuleID;
    DWORD cntThreads;
    DWORD th32ParentProcessID;
    LONG pcPriClassBase;
    DWORD dwFlags;
    CHAR szExeFile[MAX_PATH];
} PROCESSENTRY32;
typedef PROCESSENTRY32 * PPROCESSENTRY32;
typedef PROCESSENTRY32 * LPPROCESSENTRY32;
BOOL
WINAPI
Process32First(
    HANDLE hSnapshot,
    LPPROCESSENTRY32 lppe
    );
BOOL
WINAPI
Process32Next(
    HANDLE hSnapshot,
    LPPROCESSENTRY32 lppe
    );
typedef struct tagTHREADENTRY32
{
    DWORD dwSize;
    DWORD cntUsage;
    DWORD th32ThreadID;
    DWORD th32OwnerProcessID;
    LONG tpBasePri;
    LONG tpDeltaPri;
    DWORD dwFlags;
} THREADENTRY32;
typedef THREADENTRY32 * PTHREADENTRY32;
typedef THREADENTRY32 * LPTHREADENTRY32;
BOOL
WINAPI
Thread32First(
    HANDLE hSnapshot,
    LPTHREADENTRY32 lpte
    );
BOOL
WINAPI
Thread32Next(
    HANDLE hSnapshot,
    LPTHREADENTRY32 lpte
    );
typedef struct tagMODULEENTRY32W
{
    DWORD dwSize;
    DWORD th32ModuleID;
    DWORD th32ProcessID;
    DWORD GlblcntUsage;
    DWORD ProccntUsage;
    BYTE * modBaseAddr;
    DWORD modBaseSize;
    HMODULE hModule;
    WCHAR szModule[MAX_MODULE_NAME32 + 1];
    WCHAR szExePath[MAX_PATH];
} MODULEENTRY32W;
typedef MODULEENTRY32W * PMODULEENTRY32W;
typedef MODULEENTRY32W * LPMODULEENTRY32W;
BOOL
WINAPI
Module32FirstW(
    HANDLE hSnapshot,
    LPMODULEENTRY32W lpme
    );
BOOL
WINAPI
Module32NextW(
    HANDLE hSnapshot,
    LPMODULEENTRY32W lpme
    );
typedef struct tagMODULEENTRY32
{
    DWORD dwSize;
    DWORD th32ModuleID;
    DWORD th32ProcessID;
    DWORD GlblcntUsage;
    DWORD ProccntUsage;
    BYTE * modBaseAddr;
    DWORD modBaseSize;
    HMODULE hModule;
    char szModule[MAX_MODULE_NAME32 + 1];
    char szExePath[MAX_PATH];
} MODULEENTRY32;
typedef MODULEENTRY32 * PMODULEENTRY32;
typedef MODULEENTRY32 * LPMODULEENTRY32;
BOOL
WINAPI
Module32First(
    HANDLE hSnapshot,
    LPMODULEENTRY32 lpme
    );
BOOL
WINAPI
Module32Next(
    HANDLE hSnapshot,
    LPMODULEENTRY32 lpme
    );
}
#endif
#pragma endregion
