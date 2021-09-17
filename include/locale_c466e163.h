#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
struct lconv {
        char *decimal_point;
        char *thousands_sep;
        char *grouping;
        char *int_curr_symbol;
        char *currency_symbol;
        char *mon_decimal_point;
        char *mon_thousands_sep;
        char *mon_grouping;
        char *positive_sign;
        char *negative_sign;
        char int_frac_digits;
        char frac_digits;
        char p_cs_precedes;
        char p_sep_by_space;
        char n_cs_precedes;
        char n_sep_by_space;
        char p_sign_posn;
        char n_sign_posn;
        wchar_t *_W_decimal_point;
        wchar_t *_W_thousands_sep;
        wchar_t *_W_int_curr_symbol;
        wchar_t *_W_currency_symbol;
        wchar_t *_W_mon_decimal_point;
        wchar_t *_W_mon_thousands_sep;
        wchar_t *_W_positive_sign;
        wchar_t *_W_negative_sign;
        };
extern int _charmax;
extern __inline int __dummy(void) { return _charmax; }
_Check_return_opt_ _CRTIMP struct lconv * __cdecl localeconv(void);
_Check_return_opt_ _CRTIMP char * __cdecl setlocale(_In_ int _Category, _In_opt_z_ const char * _Locale);
_Check_return_opt_ _CRTIMP int __cdecl _configthreadlocale(_In_ int _Flag);
_Check_return_opt_ _CRTIMP _locale_t __cdecl _get_current_locale(void);
_Check_return_opt_ _CRTIMP _locale_t __cdecl _create_locale(_In_ int _Category, _In_z_ const char * _Locale);
_CRTIMP void __cdecl _free_locale(_In_opt_ _locale_t _Locale);
_Check_return_ _CRT_OBSOLETE(_get_current_locale) _CRTIMP _locale_t __cdecl __get_current_locale(void);
_Check_return_ _CRT_OBSOLETE(_create_locale) _CRTIMP _locale_t __cdecl __create_locale(_In_ int _Category, _In_z_ const char * _Locale);
_CRT_OBSOLETE(_free_locale) _CRTIMP void __cdecl __free_locale(_In_opt_ _locale_t _Locale);
_Check_return_opt_ _CRTIMP wchar_t * __cdecl _wsetlocale(_In_ int _Category, _In_opt_z_ const wchar_t * _Locale);
}
#pragma pack(pop)
