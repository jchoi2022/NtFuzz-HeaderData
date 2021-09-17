       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
struct __timeb32
{
    __time32_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
};
struct __timeb64
{
    __time64_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
};
    #define _timeb __timeb32
    #define _ftime _ftime32
    #define _ftime_s _ftime32_s
_CRT_INSECURE_DEPRECATE(_ftime32_s)
_ACRTIMP void __cdecl _ftime32(
    _Out_ struct __timeb32* _Time
    );
_ACRTIMP errno_t __cdecl _ftime32_s(
    _Out_ struct __timeb32* _Time
    );
_CRT_INSECURE_DEPRECATE(_ftime64_s)
_ACRTIMP void __cdecl _ftime64(
    _Out_ struct __timeb64* _Time
    );
_ACRTIMP errno_t __cdecl _ftime64_s(
    _Out_ struct __timeb64* _Time
    );
_CRT_END_C_HEADER
