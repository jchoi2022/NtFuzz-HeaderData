       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
typedef int sig_atomic_t;
typedef void (__CRTDECL* _crt_signal_t)(int);
    #define SIG_DIE ((_crt_signal_t)5)
_ACRTIMP void** __cdecl __pxcptinfoptrs(void);
    _ACRTIMP _crt_signal_t __cdecl signal(_In_ int _Signal, _In_opt_ _crt_signal_t _Function);
_ACRTIMP int __cdecl raise(_In_ int _Signal);
_CRT_END_C_HEADER
