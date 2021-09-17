#include <crtdefs.h>
extern "C" {
_CRTIMP const unsigned short * __cdecl __pctype_func(void);
_CRTDATA(extern const unsigned short *_pctype;)
_CRTDATA(extern const unsigned short _wctype[];)
_CRTIMP const wctype_t * __cdecl __pwctype_func(void);
_CRTDATA(extern const wctype_t *_pwctype;)
_Check_return_ _CRTIMP int __cdecl _isctype(_In_ int _C, _In_ int _Type);
_Check_return_ _CRTIMP int __cdecl _isctype_l(_In_ int _C, _In_ int _Type, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl isalpha(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isalpha_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl isupper(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isupper_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl islower(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _islower_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl isdigit(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isdigit_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl isxdigit(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isxdigit_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl isspace(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isspace_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl ispunct(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _ispunct_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl isalnum(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isalnum_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl isprint(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isprint_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl isgraph(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isgraph_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iscntrl(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _iscntrl_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl toupper(_In_ int _C);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl tolower(_In_ int _C);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl _tolower(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _tolower_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRT_JIT_INTRINSIC _CRTIMP int __cdecl _toupper(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _toupper_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl __isascii(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl __toascii(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl __iscsymf(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl __iscsym(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl iswalpha(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswalpha_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswupper(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswupper_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswlower(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswlower_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswdigit(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswdigit_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswxdigit(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswxdigit_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswspace(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswspace_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswpunct(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswpunct_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswalnum(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswalnum_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswprint(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswprint_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswgraph(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswgraph_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswcntrl(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswcntrl_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswascii(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl isleadbyte(_In_ int _C);
_Check_return_ _CRTIMP int __cdecl _isleadbyte_l(_In_ int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP wint_t __cdecl towupper(_In_ wint_t _C);
_Check_return_ _CRTIMP wint_t __cdecl _towupper_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP wint_t __cdecl towlower(_In_ wint_t _C);
_Check_return_ _CRTIMP wint_t __cdecl _towlower_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl iswctype(_In_ wint_t _C, _In_ wctype_t _Type);
_Check_return_ _CRTIMP int __cdecl _iswctype_l(_In_ wint_t _C, _In_ wctype_t _Type, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl __iswcsymf(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswcsymf_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl __iswcsym(_In_ wint_t _C);
_Check_return_ _CRTIMP int __cdecl _iswcsym_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_CRT_OBSOLETE(iswctype) _CRTIMP int __cdecl is_wctype(_In_ wint_t _C, _In_ wctype_t _Type);
 #define MB_CUR_MAX __mb_cur_max
_CRTDATA(extern int __mb_cur_max;)
_CRTIMP int __cdecl ___mb_cur_max_func(void);
_CRTIMP int __cdecl ___mb_cur_max_l_func(_locale_t);
_CRTIMP int __cdecl _chvalidator(int, int);
_Check_return_ inline int isalpha(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_ALPHA) : __chvalidchk(_C, _ALPHA)); }
_Check_return_ inline int isupper(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_UPPER) : __chvalidchk(_C, _UPPER)); }
_Check_return_ inline int islower(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_LOWER) : __chvalidchk(_C, _LOWER)); }
_Check_return_ inline int isdigit(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_DIGIT) : __chvalidchk(_C, _DIGIT)); }
_Check_return_ inline int isxdigit(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_HEX) : __chvalidchk(_C, _HEX)); }
_Check_return_ inline int isspace(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_SPACE) : __chvalidchk(_C, _SPACE)); }
_Check_return_ inline int ispunct(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_PUNCT) : __chvalidchk(_C, _PUNCT)); }
_Check_return_ inline int isalnum(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_ALPHA|_DIGIT)
                : __chvalidchk(_C , (_ALPHA|_DIGIT)); }
_Check_return_ inline int isprint(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_BLANK|_PUNCT|_ALPHA|_DIGIT)
                : __chvalidchk(_C , (_BLANK|_PUNCT|_ALPHA|_DIGIT))); }
_Check_return_ inline int isgraph(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_PUNCT|_ALPHA|_DIGIT)
                : __chvalidchk(_C , (_PUNCT|_ALPHA|_DIGIT))); }
_Check_return_ inline int iscntrl(_In_ int _C)
        {return (MB_CUR_MAX > 1 ? _isctype(_C,_CONTROL)
                : __chvalidchk(_C , _CONTROL)); }
int __cdecl _chvalidator_l(_locale_t, int, int);
}
