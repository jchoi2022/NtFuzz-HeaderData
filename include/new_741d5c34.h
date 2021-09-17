       
#include <corecrt.h>
#include <vcruntime_new_debug.h>
        #include <new>
_CRT_BEGIN_C_HEADER
typedef int (__CRTDECL* _PNH)(size_t);
_PNH __cdecl _query_new_handler(void);
_PNH __cdecl _set_new_handler(_In_opt_ _PNH _NewHandler);
_ACRTIMP int __cdecl _query_new_mode(void);
_ACRTIMP int __cdecl _set_new_mode(_In_ int _NewMode);
_CRT_END_C_HEADER
