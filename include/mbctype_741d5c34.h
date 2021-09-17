       
#include <corecrt.h>
#include <ctype.h>
_CRT_BEGIN_C_HEADER
_Check_return_ _ACRTIMP unsigned char* __cdecl __p__mbctype(void);
_Check_return_ _ACRTIMP unsigned char* __cdecl __p__mbcasemap(void);
        extern unsigned char _mbctype[];
        extern unsigned char _mbcasemap[];
_ACRTIMP int __cdecl _setmbcp(_In_ int _CodePage);
_ACRTIMP int __cdecl _getmbcp(void);
_CRT_END_C_HEADER
