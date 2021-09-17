       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
       
       
_Success_(return != 0)
_Check_return_ _Ret_maybenull_z_
_ACRTIMP _CRTALLOCATOR wchar_t* __cdecl _wgetcwd(
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_ int _SizeInWords
    );
_Success_(return != 0)
_Check_return_ _Ret_maybenull_z_
_ACRTIMP _CRTALLOCATOR wchar_t* __cdecl _wgetdcwd(
    _In_ int _Drive,
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_ int _SizeInWords
    );
       
       
_Check_return_
_ACRTIMP int __cdecl _wchdir(
    _In_z_ wchar_t const* _Path
    );
_Check_return_
_ACRTIMP int __cdecl _wmkdir(
    _In_z_ wchar_t const* _Path
    );
_Check_return_
_ACRTIMP int __cdecl _wrmdir(
    _In_z_ wchar_t const* _Path
    );
_CRT_END_C_HEADER
