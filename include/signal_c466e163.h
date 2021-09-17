#include <crtdefs.h>
extern "C" {
typedef int sig_atomic_t;
extern void * _pxcptinfoptrs;
_CRTIMP void (__cdecl * __cdecl signal(_In_ int _SigNum, _In_opt_ void (__cdecl * _Func)(int)))(int);
_CRTIMP int __cdecl raise(_In_ int _SigNum);
}
