#include <crtdefs.h>
#include <ctype.h>
extern "C" {
_CRTIMP extern unsigned char _mbctype[];
_CRTIMP extern unsigned char _mbcasemap[];
_CRTIMP int __cdecl _setmbcp(_In_ int _CodePage);
_CRTIMP int __cdecl _getmbcp(void);
_Check_return_ _CRTIMP int __cdecl _ismbbkalnum( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbkalnum_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbkana( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbkana_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbkpunct( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbkpunct_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbkprint( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbkprint_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbalpha( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbalpha_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbpunct( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbpunct_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbalnum( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbalnum_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbprint( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbprint_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbbgraph( _In_ unsigned int _C );
_Check_return_ _CRTIMP int __cdecl _ismbbgraph_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbblead( _In_ unsigned int _C);
_Check_return_ _CRTIMP int __cdecl _ismbblead_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale );
_Check_return_ _CRTIMP int __cdecl _ismbbtrail( _In_ unsigned int _C);
_Check_return_ _CRTIMP int __cdecl _ismbbtrail_l(_In_ unsigned int _C, _In_opt_ _locale_t _Locale );
_Check_return_ _CRTIMP int __cdecl _ismbslead(_In_reads_z_(_Pos - _Str+1) const unsigned char * _Str, _In_z_ const unsigned char * _Pos);
_Check_return_ _CRTIMP int __cdecl _ismbslead_l(_In_reads_z_(_Pos - _Str+1) const unsigned char * _Str, _In_z_ const unsigned char * _Pos, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _ismbstrail(_In_reads_z_(_Pos - _Str+1) const unsigned char * _Str, _In_z_ const unsigned char * _Pos);
_Check_return_ _CRTIMP int __cdecl _ismbstrail_l(_In_reads_z_(_Pos - _Str+1) const unsigned char * _Str, _In_z_ const unsigned char * _Pos, _In_opt_ _locale_t _Locale);
}
