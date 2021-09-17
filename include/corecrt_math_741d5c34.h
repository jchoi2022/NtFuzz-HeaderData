       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
    struct _exception
    {
        int type;
        char* name;
        double arg1;
        double arg2;
        double retval;
    };
        #define _COMPLEX_DEFINED
        struct _complex
        {
            double x, y;
        };
    typedef float float_t;
    typedef double double_t;
        extern double const _HUGE;
    #define _HUGE_ENUF 1e+300
void __cdecl _fperrraise(_In_ int _Except);
_Check_return_ _ACRTIMP short __cdecl _dclass(_In_ double _X);
_Check_return_ _ACRTIMP short __cdecl _ldclass(_In_ long double _X);
_Check_return_ _ACRTIMP short __cdecl _fdclass(_In_ float _X);
_Check_return_ _ACRTIMP int __cdecl _dsign(_In_ double _X);
_Check_return_ _ACRTIMP int __cdecl _ldsign(_In_ long double _X);
_Check_return_ _ACRTIMP int __cdecl _fdsign(_In_ float _X);
_Check_return_ _ACRTIMP int __cdecl _dpcomp(_In_ double _X, _In_ double _Y);
_Check_return_ _ACRTIMP int __cdecl _ldpcomp(_In_ long double _X, _In_ long double _Y);
_Check_return_ _ACRTIMP int __cdecl _fdpcomp(_In_ float _X, _In_ float _Y);
_Check_return_ _ACRTIMP short __cdecl _dtest(_In_ double* _Px);
_Check_return_ _ACRTIMP short __cdecl _ldtest(_In_ long double* _Px);
_Check_return_ _ACRTIMP short __cdecl _fdtest(_In_ float* _Px);
_ACRTIMP short __cdecl _d_int(_Inout_ double* _Px, _In_ short _Xexp);
_ACRTIMP short __cdecl _ld_int(_Inout_ long double* _Px, _In_ short _Xexp);
_ACRTIMP short __cdecl _fd_int(_Inout_ float* _Px, _In_ short _Xexp);
_ACRTIMP short __cdecl _dscale(_Inout_ double* _Px, _In_ long _Lexp);
_ACRTIMP short __cdecl _ldscale(_Inout_ long double* _Px, _In_ long _Lexp);
_ACRTIMP short __cdecl _fdscale(_Inout_ float* _Px, _In_ long _Lexp);
_ACRTIMP short __cdecl _dunscale(_Out_ short* _Pex, _Inout_ double* _Px);
_ACRTIMP short __cdecl _ldunscale(_Out_ short* _Pex, _Inout_ long double* _Px);
_ACRTIMP short __cdecl _fdunscale(_Out_ short* _Pex, _Inout_ float* _Px);
_Check_return_ _ACRTIMP short __cdecl _dexp(_Inout_ double* _Px, _In_ double _Y, _In_ long _Eoff);
_Check_return_ _ACRTIMP short __cdecl _ldexp(_Inout_ long double* _Px, _In_ long double _Y, _In_ long _Eoff);
_Check_return_ _ACRTIMP short __cdecl _fdexp(_Inout_ float* _Px, _In_ float _Y, _In_ long _Eoff);
_Check_return_ _ACRTIMP short __cdecl _dnorm(_Inout_updates_(4) unsigned short* _Ps);
_Check_return_ _ACRTIMP short __cdecl _fdnorm(_Inout_updates_(2) unsigned short* _Ps);
_Check_return_ _ACRTIMP double __cdecl _dpoly(_In_ double _X, _In_reads_(_N) double const* _Tab, _In_ int _N);
_Check_return_ _ACRTIMP long double __cdecl _ldpoly(_In_ long double _X, _In_reads_(_N) long double const* _Tab, _In_ int _N);
_Check_return_ _ACRTIMP float __cdecl _fdpoly(_In_ float _X, _In_reads_(_N) float const* _Tab, _In_ int _N);
_Check_return_ _ACRTIMP double __cdecl _dlog(_In_ double _X, _In_ int _Baseflag);
_Check_return_ _ACRTIMP long double __cdecl _ldlog(_In_ long double _X, _In_ int _Baseflag);
_Check_return_ _ACRTIMP float __cdecl _fdlog(_In_ float _X, _In_ int _Baseflag);
_Check_return_ _ACRTIMP double __cdecl _dsin(_In_ double _X, _In_ unsigned int _Qoff);
_Check_return_ _ACRTIMP long double __cdecl _ldsin(_In_ long double _X, _In_ unsigned int _Qoff);
_Check_return_ _ACRTIMP float __cdecl _fdsin(_In_ float _X, _In_ unsigned int _Qoff);
typedef union
{
    unsigned short _Sh[4];
    double _Val;
} _double_val;
typedef union
{
    unsigned short _Sh[2];
    float _Val;
} _float_val;
typedef union
{
    unsigned short _Sh[4];
    long double _Val;
} _ldouble_val;
typedef union
{
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_const;
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C;
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C;
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C;
extern const _float_const _Eps_C, _Rteps_C;
extern const _float_const _FEps_C, _FRteps_C;
extern const _float_const _LEps_C, _LRteps_C;
extern const double _Zero_C, _Xbig_C;
extern const float _FZero_C, _FXbig_C;
extern const long double _LZero_C, _LXbig_C;
    #define _CLASS_ARG(_Val) __pragma(warning(suppress:6334))(sizeof ((_Val) + (float)0) == sizeof (float) ? 'f' : sizeof ((_Val) + (double)0) == sizeof (double) ? 'd' : 'l')
    #define _CLASSIFY(_Val, _FFunc, _DFunc, _LDFunc) (_CLASS_ARG(_Val) == 'f' ? _FFunc((float)(_Val)) : _CLASS_ARG(_Val) == 'd' ? _DFunc((double)(_Val)) : _LDFunc((long double)(_Val)))
    #define _CLASSIFY2(_Val1, _Val2, _FFunc, _DFunc, _LDFunc) (_CLASS_ARG((_Val1) + (_Val2)) == 'f' ? _FFunc((float)(_Val1), (float)(_Val2)) : _CLASS_ARG((_Val1) + (_Val2)) == 'd' ? _DFunc((double)(_Val1), (double)(_Val2)) : _LDFunc((long double)(_Val1), (long double)(_Val2)))
    #define fpclassify(_Val) (_CLASSIFY(_Val, _fdclass, _dclass, _ldclass))
    #define _FPCOMPARE(_Val1, _Val2) (_CLASSIFY2(_Val1, _Val2, _fdpcomp, _dpcomp, _ldpcomp))
    #define isfinite(_Val) (fpclassify(_Val) <= 0)
    #define isinf(_Val) (fpclassify(_Val) == FP_INFINITE)
    #define isnan(_Val) (fpclassify(_Val) == FP_NAN)
    #define isnormal(_Val) (fpclassify(_Val) == FP_NORMAL)
    #define signbit(_Val) (_CLASSIFY(_Val, _fdsign, _dsign, _ldsign))
    #define isgreater(x, y) ((_FPCOMPARE(x, y) & _FP_GT) != 0)
    #define isgreaterequal(x, y) ((_FPCOMPARE(x, y) & (_FP_EQ | _FP_GT)) != 0)
    #define isless(x, y) ((_FPCOMPARE(x, y) & _FP_LT) != 0)
    #define islessequal(x, y) ((_FPCOMPARE(x, y) & (_FP_LT | _FP_EQ)) != 0)
    #define islessgreater(x, y) ((_FPCOMPARE(x, y) & (_FP_LT | _FP_GT)) != 0)
    #define isunordered(x, y) (_FPCOMPARE(x, y) == 0)
#pragma warning(pop)
_CRT_END_C_HEADER
