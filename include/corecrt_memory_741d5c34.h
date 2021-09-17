       
#include <corecrt.h>
#include <corecrt_memcpy_s.h>
#include <vcruntime_string.h>
_CRT_BEGIN_C_HEADER
_Check_return_
_ACRTIMP int __cdecl _memicmp(
    _In_reads_bytes_opt_(_Size) void const* _Buf1,
    _In_reads_bytes_opt_(_Size) void const* _Buf2,
    _In_ size_t _Size
    );
_Check_return_
_ACRTIMP int __cdecl _memicmp_l(
    _In_reads_bytes_opt_(_Size) void const* _Buf1,
    _In_reads_bytes_opt_(_Size) void const* _Buf2,
    _In_ size_t _Size,
    _In_opt_ _locale_t _Locale
    );
_CRT_END_C_HEADER
