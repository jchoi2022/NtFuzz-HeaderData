       
#include <corecrt.h>
#pragma warning(disable:4514)
#pragma warning(push)
#pragma warning(disable:4995)
extern "C" {
#pragma deprecated("_ftcscat")
#pragma deprecated("_ftcschr")
#pragma deprecated("_ftcscpy")
#pragma deprecated("_ftcscspn")
#pragma deprecated("_ftcslen")
#pragma deprecated("_ftcsncat")
#pragma deprecated("_ftcsncpy")
#pragma deprecated("_ftcspbrk")
#pragma deprecated("_ftcsrchr")
#pragma deprecated("_ftcsspn")
#pragma deprecated("_ftcsstr")
#pragma deprecated("_ftcstok")
#pragma deprecated("_ftcsdup")
#pragma deprecated("_ftcsnset")
#pragma deprecated("_ftcsrev")
#pragma deprecated("_ftcsset")
#pragma deprecated("_ftcscmp")
#pragma deprecated("_ftcsicmp")
#pragma deprecated("_ftcsnccmp")
#pragma deprecated("_ftcsncmp")
#pragma deprecated("_ftcsncicmp")
#pragma deprecated("_ftcsnicmp")
#pragma deprecated("_ftcscoll")
#pragma deprecated("_ftcsicoll")
#pragma deprecated("_ftcsnccoll")
#pragma deprecated("_ftcsncoll")
#pragma deprecated("_ftcsncicoll")
#pragma deprecated("_ftcsnicoll")
#pragma deprecated("_ftcsclen")
#pragma deprecated("_ftcsnccat")
#pragma deprecated("_ftcsnccpy")
#pragma deprecated("_ftcsncset")
#pragma deprecated("_ftcsdec")
#pragma deprecated("_ftcsinc")
#pragma deprecated("_ftcsnbcnt")
#pragma deprecated("_ftcsnccnt")
#pragma deprecated("_ftcsnextc")
#pragma deprecated("_ftcsninc")
#pragma deprecated("_ftcsspnp")
#pragma deprecated("_ftcslwr")
#pragma deprecated("_ftcsupr")
#pragma deprecated("_ftclen")
#pragma deprecated("_ftccpy")
#pragma deprecated("_ftccmp")
}
#include <wchar.h>
extern "C" {
typedef wchar_t _TCHAR;
typedef wchar_t _TSCHAR;
typedef wchar_t _TUCHAR;
typedef wchar_t _TXCHAR;
typedef wint_t _TINT;
_Check_return_ __inline size_t __CRTDECL _tclen(_In_z_ const wchar_t *_Cpc)
{
    (void *)_Cpc;
    return 1;
}
__inline void __CRTDECL _tccpy(_Out_ wchar_t *_Pc1, _In_z_ const wchar_t *_Cpc2) { *_Pc1 = (wchar_t)*_Cpc2; }
__inline void __CRTDECL _tccpy_l(_Out_ wchar_t *_Pc1, _In_z_ const wchar_t *_Cpc2, _In_opt_ _locale_t _Locale)
{
    _CRT_UNUSED(_Locale);
#pragma warning( push )
#pragma warning( disable : 28719 )
    _tccpy(_Pc1, _Cpc2);
#pragma warning( pop )
}
_Check_return_ __inline int __CRTDECL _tccmp(_In_z_ const wchar_t *_Cpc1, _In_z_ const wchar_t *_Cpc2) { return (int) ((*_Cpc1)-(*_Cpc2)); }
_Check_return_ __inline wchar_t * __CRTDECL _wcsdec(_In_z_ const wchar_t * _Cpc1, _In_z_ const wchar_t * _Cpc2) { return (wchar_t *)((_Cpc1)>=(_Cpc2) ? NULL : ((_Cpc2)-1)); }
_Check_return_ __inline wchar_t * __CRTDECL _wcsinc(_In_z_ const wchar_t * _Pc) { return (wchar_t *)(_Pc+1); }
_Check_return_ __inline unsigned int __CRTDECL _wcsnextc(_In_z_ const wchar_t * _Cpc) { return (unsigned int)*_Cpc; }
_Check_return_ __inline wchar_t * __CRTDECL _wcsninc(_In_z_ const wchar_t * _Pc, _In_ size_t _Sz) { return (wchar_t *)(_Pc+_Sz); }
_Check_return_ __inline size_t __CRTDECL _wcsncnt( _In_reads_or_z_(_Cnt) const wchar_t * _String, _In_ size_t _Cnt)
{
        size_t n = _Cnt;
        wchar_t *cp = (wchar_t *)_String;
        while (n-- && *cp)
                cp++;
        return _Cnt - n - 1;
}
_Check_return_ __inline wchar_t * __CRTDECL _wcsspnp
(
    _In_z_ const wchar_t * _Cpc1,
    _In_z_ const wchar_t * _Cpc2
)
{
    return _Cpc1==NULL ? NULL : ((*(_Cpc1 += wcsspn(_Cpc1,_Cpc2))!='\0') ? (wchar_t*)_Cpc1 : NULL);
}
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(errno_t, _wcsncpy_s_l, wchar_t, _Dest, _In_z_ const wchar_t *, _Source, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
__DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(wchar_t *, __RETURN_POLICY_DST, _wcsncpy_l, _wcsncpy_s_l, _Out_writes_z_(_Size) wchar_t, _Out_writes_(_Count) wchar_t, _Dst, _In_z_ const wchar_t *, _Source, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
{
    _CRT_UNUSED(_Locale);
#pragma warning( push )
#pragma warning( disable : 4996 6054 28719)
    return wcsncpy(_Dst, _Source, _Count);
#pragma warning( pop )
}
__DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(wchar_t *, __RETURN_POLICY_DST, _wcsncpy_l, _wcsncpy_s_l, _Out_writes_z_(_Size) wchar_t, _Out_writes_(_Count), wchar_t, _Dst, _In_z_ const wchar_t *, _Source, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(errno_t, _wcsncat_s_l, wchar_t, _Dest, _In_z_ const wchar_t *, _Source, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
__DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(wchar_t *, __RETURN_POLICY_DST, _wcsncat_l, _wcsncat_s_l, _Inout_updates_z_(_Size) wchar_t, _Inout_z_ wchar_t, _Dst, _In_z_ const wchar_t *, _Source, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
{
    _CRT_UNUSED(_Locale);
#pragma warning( push )
#pragma warning( disable : 4996 6054 6059 28719 )
    return wcsncat(_Dst, _Source, _Count);
#pragma warning( pop )
}
__DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(wchar_t *, __RETURN_POLICY_DST, _wcsncat_l, _wcsncat_s_l, _Inout_updates_z_(_Size) wchar_t, _Inout_z_, wchar_t, _Dst, _In_z_ const wchar_t *, _Source, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
_CRT_INSECURE_DEPRECATE(_wcstok_s_l) __inline wchar_t * _wcstok_l(_Inout_opt_z_ wchar_t * _String, _In_z_ const wchar_t * _Delimiters, _In_opt_ _locale_t _Locale)
{
    _CRT_UNUSED(_Locale);
#pragma warning(push)
#pragma warning(disable:4996 28727)
        return wcstok(_String,_Delimiters);
#pragma warning(pop)
}
_Check_return_wat_ __inline errno_t _wcsnset_s_l(_Inout_updates_z_(_Destination_size_chars) wchar_t * _Destination, _In_ size_t _Destination_size_chars, _In_ wchar_t _Value, _In_ size_t _Count, _In_opt_ _locale_t _Locale)
{
    _CRT_UNUSED(_Locale);
    return _wcsnset_s(_Destination, _Destination_size_chars, _Value, _Count);
}
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(errno_t, _wcsnset_s_l, _Prepost_z_ wchar_t, _Dest, _In_ wchar_t, _Value, _In_ size_t, _Count, _In_opt_ _locale_t, _Locale)
__DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(wchar_t *, __RETURN_POLICY_DST, _wcsnset_l, _wcsnset_s_l, _Inout_updates_z_(_Size) wchar_t, _Inout_updates_z_(_MaxCount) wchar_t, _Dst, _In_ wchar_t, _Value, _In_ size_t, _MaxCount, _In_opt_ _locale_t, _Locale)
{
    _CRT_UNUSED(_Locale);
#pragma warning( push )
#pragma warning( disable : 4996 )
    return _wcsnset(_Dst, _Value, _MaxCount);
#pragma warning( pop )
}
__DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(wchar_t *, __RETURN_POLICY_DST, _wcsnset_l, _wcsnset_s_l, _Inout_updates_z_(_Size) wchar_t, _Inout_updates_z_(_MaxCount), wchar_t, _Dst, _In_ wchar_t, _Value, _In_ size_t, _MaxCount, _In_opt_ _locale_t, _Locale)
_Check_return_wat_ __inline errno_t _wcsset_s_l(_Inout_updates_z_(_Destination_size_chars) wchar_t * _Destination, _In_ size_t _Destination_size_chars, _In_ wchar_t _Value, _In_opt_ _locale_t _Locale)
{
    _CRT_UNUSED(_Locale);
    return _wcsset_s(_Destination, _Destination_size_chars, _Value);
}
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, _wcsset_s_l, _Prepost_z_ wchar_t, _Dest, _In_ wchar_t, _Value, _In_opt_ _locale_t, _Locale)
__DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(wchar_t *, __RETURN_POLICY_DST, _wcsset_l, _wcsset_s_l, _Inout_updates_z_(_Size) wchar_t, _Inout_z_ wchar_t, _Dst, _In_ wchar_t, _Value, _In_opt_ _locale_t, _Locale)
{
    _CRT_UNUSED(_Locale);
#pragma warning( push )
#pragma warning( disable : 4996 )
    return _wcsset(_Dst, _Value);
#pragma warning( pop )
}
__DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(wchar_t *, __RETURN_POLICY_DST, _wcsset_l, _wcsset_s_l, _Inout_updates_z_(_Size) wchar_t, _Inout_z_, wchar_t, _Dst, _In_ wchar_t, _Value, _In_opt_ _locale_t, _Locale)
}
#pragma warning(pop)
