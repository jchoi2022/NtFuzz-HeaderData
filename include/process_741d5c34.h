       
#include <corecrt.h>
#include <corecrt_startup.h>
#include <corecrt_wprocess.h>
_CRT_BEGIN_C_HEADER
    int __stdcall DllMain(
        _In_ void* _DllHandle,
        _In_ unsigned long _Reason,
        _In_opt_ void* _Reserved
        );
    int __stdcall _CRT_INIT(
        _In_ void* _DllHandle,
        _In_ unsigned long _Reason,
        _In_opt_ void* _Reserved
        );
    extern int (__stdcall* const _pRawDllMain)(void*, unsigned long, void*);
typedef void (__cdecl* _beginthread_proc_type )(void*);
typedef unsigned (__stdcall* _beginthreadex_proc_type)(void*);
_ACRTIMP uintptr_t __cdecl _beginthread(
    _In_ _beginthread_proc_type _StartAddress,
    _In_ unsigned _StackSize,
    _In_opt_ void* _ArgList
    );
_ACRTIMP void __cdecl _endthread(void);
_Success_(return != 0)
_ACRTIMP uintptr_t __cdecl _beginthreadex(
    _In_opt_ void* _Security,
    _In_ unsigned _StackSize,
    _In_ _beginthreadex_proc_type _StartAddress,
    _In_opt_ void* _ArgList,
    _In_ unsigned _InitFlag,
    _Out_opt_ unsigned* _ThrdAddr
    );
_ACRTIMP void __cdecl _endthreadex(
    _In_ unsigned _ReturnCode
    );
    _ACRTIMP int __cdecl _getpid(void);
    _DCRTIMP intptr_t __cdecl _cwait(
        _Out_opt_ int* _TermStat,
        _In_ intptr_t _ProcHandle,
        _In_ int _Action
        );
    _DCRTIMP intptr_t __cdecl _execl(
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _execle(
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _execlp(
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _execlpe(
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _execv(
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments
        );
    _DCRTIMP intptr_t __cdecl _execve(
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments,
        _In_opt_z_ char const* const* _Environment
        );
    _DCRTIMP intptr_t __cdecl _execvp(
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments
        );
    _DCRTIMP intptr_t __cdecl _execvpe(
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments,
        _In_opt_z_ char const* const* _Environment
        );
    _DCRTIMP intptr_t __cdecl _spawnl(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _spawnle(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _spawnlp(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _spawnlpe(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* _Arguments,
        ...);
    _DCRTIMP intptr_t __cdecl _spawnv(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments
        );
    _DCRTIMP intptr_t __cdecl _spawnve(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments,
        _In_opt_z_ char const* const* _Environment
        );
    _DCRTIMP intptr_t __cdecl _spawnvp(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments
        );
    _DCRTIMP intptr_t __cdecl _spawnvpe(
        _In_ int _Mode,
        _In_z_ char const* _FileName,
        _In_z_ char const* const* _Arguments,
        _In_opt_z_ char const* const* _Environment
        );
    _CRT_OBSOLETE(LoadLibrary)
    _DCRTIMP intptr_t __cdecl _loaddll(
        _In_z_ char* _FileName
        );
    _CRT_OBSOLETE(FreeLibrary)
    _DCRTIMP int __cdecl _unloaddll(
        _In_ intptr_t _Handle
        );
    typedef int (__cdecl* _GetDllProcAddrProcType)(void);
    _CRT_OBSOLETE(GetProcAddress)
    _DCRTIMP _GetDllProcAddrProcType __cdecl _getdllprocaddr(
        _In_ intptr_t _Handle,
        _In_opt_z_ char* _ProcedureName,
        _In_ intptr_t _Ordinal
        );
_CRT_END_C_HEADER
