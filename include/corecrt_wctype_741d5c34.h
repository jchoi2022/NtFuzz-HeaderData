       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
        #define __PCTYPE_FUNC __pctype_func()
    _ACRTIMP const unsigned short* __cdecl __pctype_func(void);
    _ACRTIMP const wctype_t* __cdecl __pwctype_func(void);
        extern const unsigned short* _pctype;
        extern const wctype_t* _pwctype;
_Check_return_ _ACRTIMP int __cdecl iswalnum (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswalpha (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswascii (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswblank (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswcntrl (_In_ wint_t _C);
_When_(_Param_(1) == 0, _Post_equal_to_(0))
_Check_return_ _ACRTIMP int __cdecl iswdigit (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswgraph (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswlower (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswprint (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswpunct (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswspace (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswupper (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswxdigit (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl __iswcsymf(_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl __iswcsym (_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl _iswalnum_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswalpha_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswblank_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswcntrl_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswdigit_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswgraph_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswlower_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswprint_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswpunct_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswspace_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswupper_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswxdigit_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswcsymf_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswcsym_l (_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP wint_t __cdecl towupper(_In_ wint_t _C);
_Check_return_ _ACRTIMP wint_t __cdecl towlower(_In_ wint_t _C);
_Check_return_ _ACRTIMP int __cdecl iswctype(_In_ wint_t _C, _In_ wctype_t _Type);
_Check_return_ _ACRTIMP wint_t __cdecl _towupper_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP wint_t __cdecl _towlower_l(_In_ wint_t _C, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _iswctype_l(_In_ wint_t _C, _In_ wctype_t _Type, _In_opt_ _locale_t _Locale);
    _Check_return_ _ACRTIMP int __cdecl isleadbyte(_In_ int _C);
    _Check_return_ _ACRTIMP int __cdecl _isleadbyte_l(_In_ int _C, _In_opt_ _locale_t _Locale);
    _CRT_OBSOLETE(iswctype) _DCRTIMP int __cdecl is_wctype(_In_ wint_t _C, _In_ wctype_t _Type);
        #define iswalpha(_c) (iswctype(_c, _ALPHA))
        #define iswupper(_c) (iswctype(_c, _UPPER))
        #define iswlower(_c) (iswctype(_c, _LOWER))
        #define iswdigit(_c) (iswctype(_c, _DIGIT))
        #define iswxdigit(_c) (iswctype(_c, _HEX))
        #define iswspace(_c) (iswctype(_c, _SPACE))
        #define iswpunct(_c) (iswctype(_c, _PUNCT))
        #define iswblank(_c) (((_c) == '\t') ? _BLANK : iswctype(_c,_BLANK) )
        #define iswalnum(_c) (iswctype(_c, _ALPHA | _DIGIT))
        #define iswprint(_c) (iswctype(_c, _BLANK | _PUNCT | _ALPHA | _DIGIT))
        #define iswgraph(_c) (iswctype(_c, _PUNCT | _ALPHA | _DIGIT))
        #define iswcntrl(_c) (iswctype(_c, _CONTROL))
        #define iswascii(_c) ((unsigned)(_c) < 0x80)
        #define _iswalpha_l(_c,_p) (iswctype(_c, _ALPHA))
        #define _iswupper_l(_c,_p) (iswctype(_c, _UPPER))
        #define _iswlower_l(_c,_p) (iswctype(_c, _LOWER))
        #define _iswdigit_l(_c,_p) (iswctype(_c, _DIGIT))
        #define _iswxdigit_l(_c,_p) (iswctype(_c, _HEX))
        #define _iswspace_l(_c,_p) (iswctype(_c, _SPACE))
        #define _iswpunct_l(_c,_p) (iswctype(_c, _PUNCT))
        #define _iswblank_l(_c,_p) (iswctype(_c, _BLANK))
        #define _iswalnum_l(_c,_p) (iswctype(_c, _ALPHA | _DIGIT))
        #define _iswprint_l(_c,_p) (iswctype(_c, _BLANK | _PUNCT | _ALPHA | _DIGIT))
        #define _iswgraph_l(_c,_p) (iswctype(_c, _PUNCT | _ALPHA | _DIGIT))
        #define _iswcntrl_l(_c,_p) (iswctype(_c, _CONTROL))
            #define isleadbyte(_c) (__PCTYPE_FUNC[(unsigned char)(_c)] & _LEADBYTE)
_CRT_END_C_HEADER
