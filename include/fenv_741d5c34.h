       
#include <corecrt.h>
#include <float.h>
_CRT_BEGIN_C_HEADER
_ACRTIMP int __cdecl fegetround(void);
_ACRTIMP int __cdecl fesetround(_In_ int _Round);
    typedef unsigned long fexcept_t;
    typedef struct fenv_t
    {
        unsigned long _Fe_ctl, _Fe_stat;
    } fenv_t;
    #define FE_INEXACT _SW_INEXACT
    #define FE_UNDERFLOW _SW_UNDERFLOW
    #define FE_OVERFLOW _SW_OVERFLOW
    #define FE_DIVBYZERO _SW_ZERODIVIDE
    #define FE_INVALID _SW_INVALID
    #define FE_ALL_EXCEPT (FE_DIVBYZERO | FE_INEXACT | FE_INVALID | FE_OVERFLOW | FE_UNDERFLOW)
    _ACRTIMP int __cdecl fegetenv(_Out_ fenv_t* _Env);
    _ACRTIMP int __cdecl fesetenv(_In_ fenv_t const* _Env);
    _ACRTIMP int __cdecl feclearexcept(_In_ int _Flags);
    _ACRTIMP _Success_(return == 0) int __cdecl feholdexcept(_Out_ fenv_t* _Env);
    _ACRTIMP int __cdecl fetestexcept(_In_ int _Flags);
    _ACRTIMP int __cdecl fegetexceptflag(_Out_ fexcept_t* _Except, _In_ int _TestFlags);
    _ACRTIMP int __cdecl fesetexceptflag(_In_ fexcept_t const* _Except, _In_ int _SetFlags);
            __declspec(selectany) extern const fenv_t _Fenv1 = { 0x0000003f, 0 };
    #define FE_DFL_ENV (&_Fenv1)
_CRT_END_C_HEADER
