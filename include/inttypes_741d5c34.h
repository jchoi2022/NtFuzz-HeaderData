       
#include <corecrt.h>
#include <stdint.h>
_CRT_BEGIN_C_HEADER
typedef struct
{
    intmax_t quot;
    intmax_t rem;
} _Lldiv_t;
typedef _Lldiv_t imaxdiv_t;
_Check_return_
_ACRTIMP intmax_t __cdecl imaxabs(
    _In_ intmax_t _Number
    );
_Check_return_
_ACRTIMP imaxdiv_t __cdecl imaxdiv(
    _In_ intmax_t _Numerator,
    _In_ intmax_t _Denominator
    );
_ACRTIMP intmax_t __cdecl strtoimax(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_ACRTIMP intmax_t __cdecl _strtoimax_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_ACRTIMP uintmax_t __cdecl strtoumax(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_ACRTIMP uintmax_t __cdecl _strtoumax_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_ACRTIMP intmax_t __cdecl wcstoimax(
    _In_z_ wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t** _EndPtr,
    _In_ int _Radix
    );
_ACRTIMP intmax_t __cdecl _wcstoimax_l(
    _In_z_ wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_ACRTIMP uintmax_t __cdecl wcstoumax(
    _In_z_ wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t** _EndPtr,
    _In_ int _Radix
    );
_ACRTIMP uintmax_t __cdecl _wcstoumax_l(
    _In_z_ wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
    #define PRIdPTR PRId64
    #define PRIiPTR PRIi64
    #define PRIoPTR PRIo64
    #define PRIuPTR PRIu64
    #define PRIxPTR PRIx64
    #define PRIXPTR PRIX64
    #define SCNdPTR SCNd64
    #define SCNiPTR SCNi64
    #define SCNoPTR SCNo64
    #define SCNuPTR SCNu64
    #define SCNxPTR SCNx64
_CRT_END_C_HEADER
