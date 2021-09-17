#include <crtdefs.h>
#error ERROR: Only Win32 target supported!
#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
struct _utimbuf {
        time_t actime;
        time_t modtime;
        };
struct __utimbuf32 {
        __time32_t actime;
        __time32_t modtime;
        };
struct __utimbuf64 {
        __time64_t actime;
        __time64_t modtime;
        };
struct utimbuf {
        time_t actime;
        time_t modtime;
        };
struct utimbuf32 {
        __time32_t actime;
        __time32_t modtime;
        };
_CRTIMP int __cdecl _utime32(_In_z_ const char * _Filename, _In_opt_ struct __utimbuf32 * _Time);
_CRTIMP int __cdecl _futime32(_In_ int _FileDes, _In_opt_ struct __utimbuf32 * _Time);
_CRTIMP int __cdecl _wutime32(_In_z_ const wchar_t * _Filename, _In_opt_ struct __utimbuf32 * _Time);
_CRTIMP int __cdecl _utime64(_In_z_ const char * _Filename, _In_opt_ struct __utimbuf64 * _Time);
_CRTIMP int __cdecl _futime64(_In_ int _FileDes, _In_opt_ struct __utimbuf64 * _Time);
_CRTIMP int __cdecl _wutime64(_In_z_ const wchar_t * _Filename, _In_opt_ struct __utimbuf64 * _Time);
_CRTIMP int __cdecl _utime(_In_z_ const char *_Filename, _In_opt_ struct _utimbuf * _Time);
_CRTIMP int __cdecl _futime(_In_ int _FileDes, _In_opt_ struct _utimbuf * _Time);
_CRTIMP int __cdecl _wutime(_In_z_ const wchar_t * _Filename, _In_opt_ struct _utimbuf * _Time);
#include <sys/utime.inl>
}
#pragma pack(pop)
