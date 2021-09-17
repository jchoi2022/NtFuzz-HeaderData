#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
#error "eh.h is only for C++!"
typedef void (__cdecl *terminate_function)();
typedef void (__cdecl *terminate_handler)();
typedef void (__cdecl *unexpected_function)();
typedef void (__cdecl *unexpected_handler)();
typedef void (__clrcall *__terminate_function_m)();
typedef void (__clrcall *__terminate_handler_m)();
typedef void (__clrcall *__unexpected_function_m)();
typedef void (__clrcall *__unexpected_handler_m)();
struct _EXCEPTION_POINTERS;
typedef void (__cdecl *_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS*);
_CRTIMP __declspec(noreturn) void __cdecl terminate(void);
_CRTIMP void __cdecl unexpected(void);
_CRTIMP int __cdecl _is_exception_typeof(_In_ const type_info &_Type, _In_ struct _EXCEPTION_POINTERS * _ExceptionPtr);
_CRTIMP terminate_function __cdecl set_terminate(_In_opt_ terminate_function _NewPtFunc);
extern "C" _CRTIMP terminate_function __cdecl _get_terminate(void);
_CRTIMP unexpected_function __cdecl set_unexpected(_In_opt_ unexpected_function _NewPtFunc);
extern "C" _CRTIMP unexpected_function __cdecl _get_unexpected(void);
_CRTIMP _se_translator_function __cdecl _set_se_translator(_In_opt_ _se_translator_function _NewPtFunc);
_CRTIMP
bool __CRTDECL __uncaught_exception(void);
#pragma pack(pop)
