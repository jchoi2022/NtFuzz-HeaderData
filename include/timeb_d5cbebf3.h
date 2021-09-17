#include <crtdefs.h>
#error ERROR: Only Win32 target supported!
#pragma pack(push,_CRT_PACKING)
extern "C" {
#include <crtdefs.h>
struct _timeb {
        time_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };
struct __timeb32 {
        __time32_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };
struct timeb {
        time_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };
struct __timeb64 {
        __time64_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };
#include <crtdefs.h>
_CRTIMP void __cdecl _ftime(_Out_ struct _timeb *_Time);
_CRT_INSECURE_DEPRECATE(_ftime32_s) _CRTIMP void __cdecl _ftime32(_Out_ struct __timeb32 * _Time);
_CRTIMP errno_t __cdecl _ftime32_s(_Out_ struct __timeb32 * _Time);
_CRT_INSECURE_DEPRECATE(_ftime64_s) _CRTIMP void __cdecl _ftime64(_Out_ struct __timeb64 * _Time);
_CRTIMP errno_t __cdecl _ftime64_s(_Out_ struct __timeb64 * _Time);
#include <sys/timeb.inl>
}
#pragma pack(pop)
