       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
typedef void (__CRTDECL* terminate_handler )();
typedef void (__CRTDECL* terminate_function)();
    typedef void (__clrcall* __terminate_function_m)();
    typedef void (__clrcall* __terminate_handler_m )();
    _ACRTIMP __declspec(noreturn) void __cdecl abort();
    _ACRTIMP __declspec(noreturn) void __cdecl terminate() throw();
        _ACRTIMP terminate_handler __cdecl set_terminate(
            _In_opt_ terminate_handler _NewTerminateHandler
            ) throw();
        _ACRTIMP terminate_handler __cdecl _get_terminate();
_CRT_END_C_HEADER
