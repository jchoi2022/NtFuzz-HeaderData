       
#include <corecrt.h>
#include <math.h>
#include <vcruntime_startup.h>
_CRT_BEGIN_C_HEADER
struct _EXCEPTION_POINTERS;
_ACRTIMP int __cdecl _seh_filter_dll(
    _In_ unsigned long _ExceptionNum,
    _In_ struct _EXCEPTION_POINTERS* _ExceptionPtr
    );
_ACRTIMP int __cdecl _seh_filter_exe(
    _In_ unsigned long _ExceptionNum,
    _In_ struct _EXCEPTION_POINTERS* _ExceptionPtr
    );
typedef enum _crt_app_type
{
    _crt_unknown_app,
    _crt_console_app,
    _crt_gui_app
} _crt_app_type;
_ACRTIMP _crt_app_type __cdecl _query_app_type(void);
_ACRTIMP void __cdecl _set_app_type(
    _In_ _crt_app_type _Type
    );
typedef int (__cdecl *_UserMathErrorFunctionPointer)(struct _exception *);
_ACRTIMP void __cdecl __setusermatherr(
    _UserMathErrorFunctionPointer _UserMathErrorFunction
    );
int __cdecl _is_c_termination_complete(void);
_ACRTIMP errno_t __cdecl _configure_narrow_argv(
    _In_ _crt_argv_mode mode
    );
_ACRTIMP errno_t __cdecl _configure_wide_argv(
    _In_ _crt_argv_mode mode
    );
int __CRTDECL _initialize_narrow_environment(void);
int __CRTDECL _initialize_wide_environment(void);
_ACRTIMP char** __cdecl _get_initial_narrow_environment(void);
_ACRTIMP wchar_t** __cdecl _get_initial_wide_environment(void);
char* __CRTDECL _get_narrow_winmain_command_line(void);
wchar_t* __CRTDECL _get_wide_winmain_command_line(void);
_ACRTIMP char** __cdecl __p__acmdln(void);
_ACRTIMP wchar_t** __cdecl __p__wcmdln(void);
    extern char* _acmdln;
    extern wchar_t* _wcmdln;
typedef void (__cdecl* _PVFV)(void);
typedef int (__cdecl* _PIFV)(void);
typedef void (__cdecl* _PVFI)(int);
    _ACRTIMP void __cdecl _initterm(
        _In_reads_(_Last - _First) _In_ _PVFV* _First,
        _In_ _PVFV* _Last
        );
    _ACRTIMP int __cdecl _initterm_e(
        _In_reads_(_Last - _First) _PIFV* _First,
        _In_ _PIFV* _Last
        );
    #define _CRT_ONEXIT_T_DEFINED
    typedef int (__CRTDECL* _onexit_t)(void);
        typedef int (__clrcall* _onexit_m_t)(void);
typedef struct _onexit_table_t
{
    _PVFV* _first;
    _PVFV* _last;
    _PVFV* _end;
} _onexit_table_t;
_ACRTIMP int __cdecl _initialize_onexit_table(
    _In_opt_ _onexit_table_t* _Table
    );
_ACRTIMP int __cdecl _register_onexit_function(
    _In_opt_ _onexit_table_t* _Table,
    _In_opt_ _onexit_t _Function
    );
_ACRTIMP int __cdecl _execute_onexit_table(
    _In_opt_ _onexit_table_t* _Table
    );
_ACRTIMP int __cdecl _crt_atexit(
    _In_opt_ _PVFV _Function
    );
_ACRTIMP int __cdecl _crt_at_quick_exit(
    _In_opt_ _PVFV _Function
    );
_CRT_END_C_HEADER
