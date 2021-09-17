#include <crtdefs.h>
#include <crtwrn.h>
extern "C" {
_CRT_MANAGED_FP_DEPRECATE _CRTIMP unsigned int __cdecl _clearfp(void);
#pragma warning(push)
#pragma warning(disable: 4141)
_CRT_MANAGED_FP_DEPRECATE _CRT_INSECURE_DEPRECATE(_controlfp_s) _CRTIMP unsigned int __cdecl _controlfp(_In_ unsigned int _NewValue,_In_ unsigned int _Mask);
#pragma warning(pop)
_CRT_MANAGED_FP_DEPRECATE _CRTIMP void __cdecl _set_controlfp(_In_ unsigned int _NewValue, _In_ unsigned int _Mask);
_CRT_MANAGED_FP_DEPRECATE _CRTIMP errno_t __cdecl _controlfp_s(_Out_opt_ unsigned int *_CurrentState, _In_ unsigned int _NewValue, _In_ unsigned int _Mask);
_CRT_MANAGED_FP_DEPRECATE _CRTIMP unsigned int __cdecl _statusfp(void);
_CRT_MANAGED_FP_DEPRECATE _CRTIMP void __cdecl _fpreset(void);
_CRT_MANAGED_FP_DEPRECATE _CRTIMP unsigned int __cdecl _control87(_In_ unsigned int _NewValue,_In_ unsigned int _Mask);
extern int _fpecode;
_Check_return_ _CRTIMP double __cdecl _copysign (_In_ double _Number, _In_ double _Sign);
_Check_return_ _CRTIMP double __cdecl _chgsign (_In_ double _X);
_Check_return_ _CRTIMP double __cdecl _scalb(_In_ double _X, _In_ long _Y);
_Check_return_ _CRTIMP double __cdecl _logb(_In_ double _X);
_Check_return_ _CRTIMP double __cdecl _nextafter(_In_ double _X, _In_ double _Y);
_Check_return_ _CRTIMP int __cdecl _finite(_In_ double _X);
_Check_return_ _CRTIMP int __cdecl _isnan(_In_ double _X);
_Check_return_ _CRTIMP int __cdecl _fpclass(_In_ double _X);
_Check_return_ _CRTIMP float __cdecl _scalbf(_In_ float _X, _In_ long _Y);
_CRT_MANAGED_FP_DEPRECATE _CRTIMP void __cdecl fpreset(void);
}
