#include <crtdefs.h>
extern "C" {
_MCRTIMP uintptr_t __cdecl _beginthread (_In_ void (__cdecl * _StartAddress) (void *),
        _In_ unsigned _StackSize, _In_opt_ void * _ArgList);
_CRTIMP void __cdecl _endthread(void);
_MCRTIMP uintptr_t __cdecl _beginthreadex(_In_opt_ void * _Security, _In_ unsigned _StackSize,
        _In_ unsigned (__stdcall * _StartAddress) (void *), _In_opt_ void * _ArgList,
        _In_ unsigned _InitFlag, _Out_opt_ unsigned * _ThrdAddr);
_CRTIMP void __cdecl _endthreadex(_In_ unsigned _Retval);
_CRTIMP __declspec(noreturn) void __cdecl exit(_In_ int _Code);
_CRTIMP __declspec(noreturn) void __cdecl _exit(_In_ int _Code);
_CRTIMP __declspec(noreturn) void __cdecl abort(void);
__analysis_noreturn
_CRTIMP void __cdecl _cexit(void);
__analysis_noreturn
_CRTIMP void __cdecl _c_exit(void);
_CRTIMP int __cdecl _getpid(void);
_CRTIMP intptr_t __cdecl _cwait(_Out_opt_ int * _TermStat, _In_ intptr_t _ProcHandle, _In_ int _Action);
_CRTIMP intptr_t __cdecl _execl(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _execle(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _execlp(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _execlpe(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _execv(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRTIMP intptr_t __cdecl _execve(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList, _In_opt_z_ const char * const * _Env);
_CRTIMP intptr_t __cdecl _execvp(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRTIMP intptr_t __cdecl _execvpe(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList, _In_opt_z_ const char * const * _Env);
_CRTIMP intptr_t __cdecl _spawnl(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _spawnle(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _spawnlp(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _spawnlpe(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRTIMP intptr_t __cdecl _spawnv(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRTIMP intptr_t __cdecl _spawnve(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList,
        _In_opt_z_ const char * const * _Env);
_CRTIMP intptr_t __cdecl _spawnvp(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRTIMP intptr_t __cdecl _spawnvpe(_In_ int _Mode, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList,
        _In_opt_z_ const char * const * _Env);
_CRTIMP int __cdecl system(_In_opt_z_ const char * _Command);
_CRTIMP intptr_t __cdecl _wexecl(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wexecle(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wexeclp(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wexeclpe(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wexecv(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList);
_CRTIMP intptr_t __cdecl _wexecve(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList,
        _In_opt_z_ const wchar_t * const * _Env);
_CRTIMP intptr_t __cdecl _wexecvp(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList);
_CRTIMP intptr_t __cdecl _wexecvpe(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList,
        _In_opt_z_ const wchar_t * const * _Env);
_CRTIMP intptr_t __cdecl _wspawnl(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wspawnle(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wspawnlp(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wspawnlpe(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _ArgList, ...);
_CRTIMP intptr_t __cdecl _wspawnv(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList);
_CRTIMP intptr_t __cdecl _wspawnve(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList,
        _In_opt_z_ const wchar_t * const * _Env);
_CRTIMP intptr_t __cdecl _wspawnvp(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList);
_CRTIMP intptr_t __cdecl _wspawnvpe(_In_ int _Mode, _In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * const * _ArgList,
        _In_opt_z_ const wchar_t * const * _Env);
_CRTIMP int __cdecl _wsystem(_In_opt_z_ const wchar_t * _Command);
void __cdecl __security_init_cookie(void);
void __fastcall __security_check_cookie(_In_ uintptr_t _StackCookie);
__declspec(noreturn) void __cdecl __report_gsfailure(void);
extern uintptr_t __security_cookie;
_CRT_OBSOLETE(LoadLibrary) intptr_t __cdecl _loaddll(_In_z_ char * _Filename);
_CRT_OBSOLETE(FreeLibrary) int __cdecl _unloaddll(_In_ intptr_t _Handle);
_CRT_OBSOLETE(GetProcAddress) int (__cdecl * __cdecl _getdllprocaddr(_In_ intptr_t _Handle, _In_opt_z_ char * _ProcedureName, _In_ intptr_t _Ordinal))(void);
BOOL WINAPI DllMain(_In_ HANDLE _HDllHandle, _In_ DWORD _Reason, _In_opt_ LPVOID _Reserved);
BOOL WINAPI _CRT_INIT(_In_ HANDLE _HDllHandle, _In_ DWORD _Reason, _In_opt_ LPVOID _Reserved);
BOOL WINAPI _wCRT_INIT(_In_ HANDLE _HDllHandle, _In_ DWORD _Reason, _In_opt_ LPVOID _Reserved);
extern BOOL (WINAPI * _pRawDllMain)(HANDLE, DWORD, LPVOID);
_CRT_NONSTDC_DEPRECATE(_cwait) _CRTIMP intptr_t __cdecl cwait(_Out_opt_ int * _TermStat, _In_ intptr_t _ProcHandle, _In_ int _Action);
_CRT_NONSTDC_DEPRECATE(_execl) _CRTIMP intptr_t __cdecl execl(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_execle) _CRTIMP intptr_t __cdecl execle(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_execlp) _CRTIMP intptr_t __cdecl execlp(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_execlpe) _CRTIMP intptr_t __cdecl execlpe(_In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_execv) _CRTIMP intptr_t __cdecl execv(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRT_NONSTDC_DEPRECATE(_execve) _CRTIMP intptr_t __cdecl execve(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList, _In_opt_z_ const char * const * _Env);
_CRT_NONSTDC_DEPRECATE(_execvp) _CRTIMP intptr_t __cdecl execvp(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRT_NONSTDC_DEPRECATE(_execvpe) _CRTIMP intptr_t __cdecl execvpe(_In_z_ const char * _Filename, _In_z_ const char * const * _ArgList, _In_opt_z_ const char * const * _Env);
_CRT_NONSTDC_DEPRECATE(_spawnl) _CRTIMP intptr_t __cdecl spawnl(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_spawnle) _CRTIMP intptr_t __cdecl spawnle(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_spawnlp) _CRTIMP intptr_t __cdecl spawnlp(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_spawnlpe) _CRTIMP intptr_t __cdecl spawnlpe(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * _ArgList, ...);
_CRT_NONSTDC_DEPRECATE(_spawnv) _CRTIMP intptr_t __cdecl spawnv(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRT_NONSTDC_DEPRECATE(_spawnve) _CRTIMP intptr_t __cdecl spawnve(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList,
        _In_opt_z_ const char * const * _Env);
_CRT_NONSTDC_DEPRECATE(_spawnvp) _CRTIMP intptr_t __cdecl spawnvp(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList);
_CRT_NONSTDC_DEPRECATE(_spawnvpe) _CRTIMP intptr_t __cdecl spawnvpe(_In_ int, _In_z_ const char * _Filename, _In_z_ const char * const * _ArgList,
        _In_opt_z_ const char * const * _Env);
_CRT_NONSTDC_DEPRECATE(_getpid) _CRTIMP int __cdecl getpid(void);
}
