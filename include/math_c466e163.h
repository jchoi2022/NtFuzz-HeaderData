#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
struct _exception {
        int type;
        char *name;
        double arg1;
        double arg2;
        double retval;
        } ;
struct _complex {
        double x,y;
        } ;
#pragma warning(suppress:4091)
_CRTIMP extern double _HUGE;
        int __cdecl abs(_In_ int _X);
        long __cdecl labs(_In_ long _X);
        double __cdecl acos(_In_ double _X);
        double __cdecl asin(_In_ double _X);
        double __cdecl atan(_In_ double _X);
        double __cdecl atan2(_In_ double _Y, _In_ double _X);
_Check_return_ _CRTIMP double __cdecl _copysign (_In_ double _Number, _In_ double _Sign);
_Check_return_ _CRTIMP double __cdecl _chgsign (_In_ double _X);
        double __cdecl cos(_In_ double _X);
        double __cdecl cosh(_In_ double _X);
        double __cdecl exp(_In_ double _X);
_CRT_JIT_INTRINSIC double __cdecl fabs(_In_ double _X);
        double __cdecl fmod(_In_ double _X, _In_ double _Y);
        double __cdecl log(_In_ double _X);
        double __cdecl log10(_In_ double _X);
        double __cdecl pow(_In_ double _X, _In_ double _Y);
        double __cdecl sin(_In_ double _X);
        double __cdecl sinh(_In_ double _X);
        double __cdecl tan(_In_ double _X);
        double __cdecl tanh(_In_ double _X);
        double __cdecl sqrt(_In_ double _X);
_Check_return_ _CRTIMP double __cdecl atof(_In_z_ const char *_String);
_Check_return_ _CRTIMP double __cdecl _atof_l(_In_z_ const char *_String, _In_opt_ _locale_t _Locale);
_CRTIMP double __cdecl _cabs(_In_ struct _complex _Complex_value);
_CRTIMP double __cdecl ceil(_In_ double _X);
_CRTIMP double __cdecl floor(_In_ double _X);
_CRTIMP double __cdecl frexp(_In_ double _X, _Out_ int * _Y);
_CRTIMP double __cdecl _hypot(_In_ double _X, _In_ double _Y);
_CRTIMP float __cdecl _hypotf(_In_ float _X, _In_ float _Y);
_CRTIMP double __cdecl _j0(_In_ double _X );
_CRTIMP double __cdecl _j1(_In_ double _X );
_CRTIMP double __cdecl _jn(int _X, _In_ double _Y);
_CRTIMP double __cdecl ldexp(_In_ double _X, _In_ int _Y);
        int __cdecl _matherr(_Inout_ struct _exception * _Except);
_CRTIMP double __cdecl modf(_In_ double _X, _Out_ double * _Y);
_CRTIMP double __cdecl _y0(_In_ double _X);
_CRTIMP double __cdecl _y1(_In_ double _X);
_CRTIMP double __cdecl _yn(_In_ int _X, _In_ double _Y);
static __inline double __CRTDECL hypot(_In_ double _X, _In_ double _Y)
{
    return _hypot(_X, _Y);
}
static __inline float __CRTDECL hypotf(_In_ float _X, _In_ float _Y)
{
    return _hypotf(_X, _Y);
}
#pragma warning(suppress:4091)
_CRTIMP extern double HUGE;
_CRT_NONSTDC_DEPRECATE(_cabs) _CRTIMP double __cdecl cabs(_In_ struct _complex _X);
_CRT_NONSTDC_DEPRECATE(_j0) _CRTIMP double __cdecl j0(_In_ double _X);
_CRT_NONSTDC_DEPRECATE(_j1) _CRTIMP double __cdecl j1(_In_ double _X);
_CRT_NONSTDC_DEPRECATE(_jn) _CRTIMP double __cdecl jn(_In_ int _X, _In_ double _Y);
_CRT_NONSTDC_DEPRECATE(_y0) _CRTIMP double __cdecl y0(_In_ double _X);
_CRT_NONSTDC_DEPRECATE(_y1) _CRTIMP double __cdecl y1(_In_ double _X);
_CRT_NONSTDC_DEPRECATE(_yn) _CRTIMP double __cdecl yn(_In_ int _X, _In_ double _Y);
}
extern "C++" {
template<class _Ty> inline
        _Ty _Pow_int(_Ty _X, int _Y)
        {unsigned int _N;
        if (_Y >= 0)
                _N = (unsigned int)_Y;
        else
                _N = (unsigned int)(-_Y);
        for (_Ty _Z = _Ty(1); ; _X *= _X)
                {if ((_N & 1) != 0)
                        _Z *= _X;
                if ((_N >>= 1) == 0)
                        return (_Y < 0 ? _Ty(1) / _Z : _Z); }}
inline long __CRTDECL abs(_In_ long _X)
        {return (labs(_X)); }
inline double __CRTDECL abs(_In_ double _X)
        {return (fabs(_X)); }
inline double __CRTDECL pow(_In_ double _X, _In_ int _Y)
        {return (_Pow_int(_X, _Y)); }
inline float __CRTDECL abs(_In_ float _X)
        {return (fabsf(_X)); }
inline float __CRTDECL acos(_In_ float _X)
        {return (acosf(_X)); }
inline float __CRTDECL asin(_In_ float _X)
        {return (asinf(_X)); }
inline float __CRTDECL atan(_In_ float _X)
        {return (atanf(_X)); }
inline float __CRTDECL atan2(_In_ float _Y, _In_ float _X)
        {return (atan2f(_Y, _X)); }
inline float __CRTDECL ceil(_In_ float _X)
        {return (ceilf(_X)); }
inline float __CRTDECL cos(_In_ float _X)
        {return (cosf(_X)); }
inline float __CRTDECL cosh(_In_ float _X)
        {return (coshf(_X)); }
inline float __CRTDECL exp(_In_ float _X)
        {return (expf(_X)); }
inline float __CRTDECL fabs(_In_ float _X)
        {return (fabsf(_X)); }
inline float __CRTDECL floor(_In_ float _X)
        {return (floorf(_X)); }
inline float __CRTDECL fmod(_In_ float _X, _In_ float _Y)
        {return (fmodf(_X, _Y)); }
inline float __CRTDECL frexp(_In_ float _X, _Out_ int * _Y)
        {return (frexpf(_X, _Y)); }
inline float __CRTDECL ldexp(_In_ float _X, _In_ int _Y)
        {return (ldexpf(_X, _Y)); }
inline float __CRTDECL log(_In_ float _X)
        {return (logf(_X)); }
inline float __CRTDECL log10(_In_ float _X)
        {return (log10f(_X)); }
inline float __CRTDECL modf(_In_ float _X, _Out_ float * _Y)
        {return (modff(_X, _Y)); }
inline float __CRTDECL pow(_In_ float _X, _In_ float _Y)
        {return (powf(_X, _Y)); }
inline float __CRTDECL pow(_In_ float _X, _In_ int _Y)
        {return (_Pow_int(_X, _Y)); }
inline float __CRTDECL sin(_In_ float _X)
        {return (sinf(_X)); }
inline float __CRTDECL sinh(_In_ float _X)
        {return (sinhf(_X)); }
inline float __CRTDECL sqrt(_In_ float _X)
        {return (sqrtf(_X)); }
inline float __CRTDECL tan(_In_ float _X)
        {return (tanf(_X)); }
inline float __CRTDECL tanh(_In_ float _X)
        {return (tanhf(_X)); }
inline long double __CRTDECL abs(_In_ long double _X)
        {return (fabsl(_X)); }
inline long double __CRTDECL acos(_In_ long double _X)
        {return (acosl(_X)); }
inline long double __CRTDECL asin(_In_ long double _X)
        {return (asinl(_X)); }
inline long double __CRTDECL atan(_In_ long double _X)
        {return (atanl(_X)); }
inline long double __CRTDECL atan2(_In_ long double _Y, _In_ long double _X)
        {return (atan2l(_Y, _X)); }
inline long double __CRTDECL ceil(_In_ long double _X)
        {return (ceill(_X)); }
inline long double __CRTDECL cos(_In_ long double _X)
        {return (cosl(_X)); }
inline long double __CRTDECL cosh(_In_ long double _X)
        {return (coshl(_X)); }
inline long double __CRTDECL exp(_In_ long double _X)
        {return (expl(_X)); }
inline long double __CRTDECL fabs(_In_ long double _X)
        {return (fabsl(_X)); }
inline long double __CRTDECL floor(_In_ long double _X)
        {return (floorl(_X)); }
inline long double __CRTDECL fmod(_In_ long double _X, _In_ long double _Y)
        {return (fmodl(_X, _Y)); }
inline long double __CRTDECL frexp(_In_ long double _X, _Out_ int * _Y)
        {return (frexpl(_X, _Y)); }
inline long double __CRTDECL ldexp(_In_ long double _X, _In_ int _Y)
        {return (ldexpl(_X, _Y)); }
inline long double __CRTDECL log(_In_ long double _X)
        {return (logl(_X)); }
inline long double __CRTDECL log10(_In_ long double _X)
        {return (log10l(_X)); }
inline long double __CRTDECL modf(_In_ long double _X, _Out_ long double * _Y)
        {return (modfl(_X, _Y)); }
inline long double __CRTDECL pow(_In_ long double _X, _In_ long double _Y)
        {return (powl(_X, _Y)); }
inline long double __CRTDECL pow(_In_ long double _X, _In_ int _Y)
        {return (_Pow_int(_X, _Y)); }
inline long double __CRTDECL sin(_In_ long double _X)
        {return (sinl(_X)); }
inline long double __CRTDECL sinh(_In_ long double _X)
        {return (sinhl(_X)); }
inline long double __CRTDECL sqrt(_In_ long double _X)
        {return (sqrtl(_X)); }
inline long double __CRTDECL tan(_In_ long double _X)
        {return (tanl(_X)); }
inline long double __CRTDECL tanh(_In_ long double _X)
        {return (tanhl(_X)); }
}
#pragma pack(pop)
