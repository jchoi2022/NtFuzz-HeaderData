       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
typedef unsigned short _Char16_t;
typedef unsigned int _Char32_t;
    typedef unsigned short char16_t;
    typedef unsigned int char32_t;
_Check_return_ _ACRTIMP size_t __cdecl mbrtoc16(_Out_opt_ char16_t *_Pc16, _In_reads_or_z_opt_(_N) const char *_S, _In_ size_t _N, _Inout_ mbstate_t *_Ps);
_Check_return_ _ACRTIMP size_t __cdecl c16rtomb(_Out_writes_opt_(4) char *_S, _In_ char16_t _C16, _Inout_ mbstate_t *_Ps);
_Check_return_ _ACRTIMP size_t __cdecl mbrtoc32(_Out_opt_ char32_t *_Pc32, _In_reads_or_z_opt_(_N) const char *_S, _In_ size_t _N, _Inout_ mbstate_t *_Ps);
_Check_return_ _ACRTIMP size_t __cdecl c32rtomb(_Out_writes_opt_(4) char *_S, _In_ char32_t _C32, _Inout_ mbstate_t *_Ps);
_CRT_END_C_HEADER
