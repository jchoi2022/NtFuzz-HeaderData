       
#include <corecrt.h>
#include <vcruntime_string.h>
_CRT_BEGIN_C_HEADER
_Check_return_
_ACRTIMP _CRTALLOCATOR wchar_t* __cdecl _wcsdup(
    _In_z_ wchar_t const* _String
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, wcscat_s,
           wchar_t, _Destination,
    _In_z_ wchar_t const*, _Source
    )
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(
        wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, wcscat,
        _Inout_updates_z_(_String_length_(_Destination) + _String_length_(_Source) + 1), wchar_t, _Destination,
        _In_z_ wchar_t const*, _Source
        )
#pragma warning(pop)
_Check_return_
_ACRTIMP int __cdecl wcscmp(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, wcscpy_s,
           wchar_t, _Destination,
    _In_z_ wchar_t const*, _Source
    )
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, wcscpy,
    _Out_writes_z_(_String_length_(_Source) + 1), wchar_t, _Destination,
    _In_z_ wchar_t const*, _Source
    )
#pragma warning(pop)
_Check_return_
_ACRTIMP size_t __cdecl wcscspn(
    _In_z_ wchar_t const* _String,
    _In_z_ wchar_t const* _Control
    );
_Check_return_
_ACRTIMP size_t __cdecl wcslen(
    _In_z_ wchar_t const* _String
    );
_Check_return_
_When_(
    _MaxCount > _String_length_(_Source),
    _Post_satisfies_(return == _String_length_(_Source))
)
_When_(
    _MaxCount <= _String_length_(_Source),
    _Post_satisfies_(return == _MaxCount)
)
_ACRTIMP size_t __cdecl wcsnlen(
    _In_reads_or_z_(_MaxCount) wchar_t const* _Source,
    _In_ size_t _MaxCount
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(
    errno_t, wcsncat_s,
    _Prepost_z_ wchar_t, _Destination,
    _In_reads_or_z_(_Count) wchar_t const*, _Source,
    _In_ size_t, _Count
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, wcsncat, wcsncat_s,
    _Inout_updates_z_(_Size) wchar_t,
    _Inout_updates_z_(_Count), wchar_t, _Destination,
    _In_reads_or_z_(_Count) wchar_t const*, _Source,
    _In_ size_t, _Count
    )
_Check_return_
_ACRTIMP int __cdecl wcsncmp(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(
    errno_t, wcsncpy_s,
                            wchar_t, _Destination,
    _In_reads_or_z_(_Count) wchar_t const*, _Source,
    _In_ size_t, _Count
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, wcsncpy, wcsncpy_s,
    _Pre_notnull_ _Post_maybez_ wchar_t,
    _Out_writes_(_Count) _Post_maybez_, wchar_t, _Destination,
    _In_reads_or_z_(_Count) wchar_t const*, _Source,
    _In_ size_t, _Count
    )
_Check_return_
_ACRTIMP wchar_t _CONST_RETURN* __cdecl wcspbrk(
    _In_z_ wchar_t const* _String,
    _In_z_ wchar_t const* _Control
    );
_Check_return_
_ACRTIMP size_t __cdecl wcsspn(
    _In_z_ wchar_t const* _String,
    _In_z_ wchar_t const* _Control
    );
_Check_return_ _CRT_INSECURE_DEPRECATE(wcstok_s)
_ACRTIMP wchar_t* __cdecl wcstok(
    _Inout_opt_z_ wchar_t* _String,
    _In_z_ wchar_t const* _Delimiter,
    _Inout_opt_ _Deref_prepost_opt_z_ wchar_t** _Context
    );
        #define _WCSTOK_DEPRECATED _CRT_DEPRECATE_TEXT( \
                "wcstok has been changed to conform with the ISO C standard, " \
                "adding an extra context parameter. To use the legacy Microsoft " \
                "wcstok, define _CRT_NON_CONFORMING_WCSTOK.")
    #pragma warning(push)
    #pragma warning(disable: 4141 4996)
    #pragma warning(disable: 28719 28726 28727)
    _Check_return_ _CRT_INSECURE_DEPRECATE(wcstok_s)
    static __inline wchar_t* __CRTDECL _wcstok(
        _Inout_opt_z_ wchar_t* const _String,
        _In_z_ wchar_t const* const _Delimiter
        )
    {
        return wcstok(_String, _Delimiter, 0);
    }
    #pragma warning(pop)
_Ret_z_
_Check_return_ _CRT_INSECURE_DEPRECATE(_wcserror_s)
_ACRTIMP wchar_t* __cdecl _wcserror(
    _In_ int _ErrorNumber
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wcserror_s(
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _Buffer,
    _In_ size_t _SizeInWords,
    _In_ int _ErrorNumber
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, _wcserror_s,
         wchar_t, _Buffer,
    _In_ int, _Error
    )
_Ret_z_
_Success_(return != 0)
_Check_return_ _CRT_INSECURE_DEPRECATE(__wcserror_s)
_ACRTIMP wchar_t* __cdecl __wcserror(
    _In_opt_z_ wchar_t const* _String
    );
_Check_return_wat_ _ACRTIMP_ALT errno_t __cdecl __wcserror_s(
    _Out_writes_opt_z_(_SizeInWords) wchar_t* _Buffer,
    _In_ size_t _SizeInWords,
    _In_z_ wchar_t const* _ErrorMessage
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, __wcserror_s,
           wchar_t, _Buffer,
    _In_z_ wchar_t const*, _ErrorMessage
    )
_Check_return_ _ACRTIMP int __cdecl _wcsicmp(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    );
_Check_return_ _ACRTIMP int __cdecl _wcsicmp_l(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2,
    _In_opt_ _locale_t _Locale
    );
_Check_return_ _ACRTIMP int __cdecl _wcsnicmp(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount
    );
_Check_return_ _ACRTIMP int __cdecl _wcsnicmp_l(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
_Check_return_wat_ _ACRTIMP errno_t __cdecl _wcsnset_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _Destination,
    _In_ size_t _SizeInWords,
    _In_ wchar_t _Value,
    _In_ size_t _MaxCount
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(
    errno_t, _wcsnset_s,
    _Prepost_z_ wchar_t, _Destination,
    _In_ wchar_t, _Value,
    _In_ size_t, _MaxCount
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wcsnset, _wcsnset_s,
    _Inout_updates_z_(_Size) wchar_t,
    _Inout_updates_z_(_MaxCount), wchar_t, _String,
    _In_ wchar_t, _Value,
    _In_ size_t, _MaxCount
    )
_ACRTIMP wchar_t* __cdecl _wcsrev(
    _Inout_z_ wchar_t* _String
    );
_Check_return_wat_ _ACRTIMP errno_t __cdecl _wcsset_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _Destination,
    _In_ size_t _SizeInWords,
    _In_ wchar_t _Value
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, _wcsset_s,
    _Prepost_z_ wchar_t, _String,
    _In_ wchar_t, _Value
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wcsset, _wcsset_s,
    _Inout_updates_z_(_Size) wchar_t,
    _Inout_z_, wchar_t, _String,
    _In_ wchar_t, _Value
    )
_Check_return_wat_ _ACRTIMP errno_t __cdecl _wcslwr_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _String,
    _In_ size_t _SizeInWords
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(
    errno_t, _wcslwr_s,
    _Prepost_z_ wchar_t, _String
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wcslwr,
    _Inout_z_, wchar_t, _String
    )
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wcslwr_s_l(
    _Inout_updates_z_(_SizeInWords) wchar_t* _String,
    _In_ size_t _SizeInWords,
    _In_opt_ _locale_t _Locale
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, _wcslwr_s_l,
    _Prepost_z_ wchar_t, _String,
    _In_opt_ _locale_t, _Locale
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wcslwr_l, _wcslwr_s_l,
    _Inout_updates_z_(_Size) wchar_t,
    _Inout_z_, wchar_t, _String,
    _In_opt_ _locale_t, _Locale
    )
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wcsupr_s(
    _Inout_updates_z_(_Size) wchar_t* _String,
    _In_ size_t _Size
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(
    errno_t, _wcsupr_s,
    _Prepost_z_ wchar_t, _String
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wcsupr,
    _Inout_z_, wchar_t, _String
    )
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wcsupr_s_l(
    _Inout_updates_z_(_Size) wchar_t* _String,
    _In_ size_t _Size,
    _In_opt_ _locale_t _Locale
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, _wcsupr_s_l,
    _Prepost_z_ wchar_t, _String,
    _In_opt_ _locale_t, _Locale
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wcsupr_l, _wcsupr_s_l,
    _Inout_updates_z_(_Size) wchar_t,
    _Inout_z_, wchar_t, _String,
    _In_opt_ _locale_t, _Locale
    )
_Success_(return < _MaxCount)
_Check_return_opt_
_ACRTIMP size_t __cdecl wcsxfrm(
    _Out_writes_opt_(_MaxCount) _Post_maybez_ wchar_t* _Destination,
    _In_z_ wchar_t const* _Source,
    _In_ _In_range_(<= ,_CRT_INT_MAX) size_t _MaxCount
    );
_Success_(return < _MaxCount)
_Check_return_opt_
_ACRTIMP size_t __cdecl _wcsxfrm_l(
    _Out_writes_opt_(_MaxCount) _Post_maybez_ wchar_t* _Destination,
    _In_z_ wchar_t const* _Source,
    _In_ _In_range_(<= ,_CRT_INT_MAX) size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP int __cdecl wcscoll(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    );
_Check_return_
_ACRTIMP int __cdecl _wcscoll_l(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP int __cdecl _wcsicoll(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2
    );
_Check_return_
_ACRTIMP int __cdecl _wcsicoll_l(
    _In_z_ wchar_t const* _String1,
    _In_z_ wchar_t const* _String2,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP int __cdecl _wcsncoll(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount
    );
_Check_return_
_ACRTIMP int __cdecl _wcsncoll_l(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP int __cdecl _wcsnicoll(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount
    );
_Check_return_
_ACRTIMP int __cdecl _wcsnicoll_l(
    _In_reads_or_z_(_MaxCount) wchar_t const* _String1,
    _In_reads_or_z_(_MaxCount) wchar_t const* _String2,
    _In_ size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
extern "C++" {
    _Check_return_
    _When_(return != NULL, _Ret_range_(_String, _String+_String_length_(_String)-1))
    inline wchar_t* __CRTDECL wcschr(_In_z_ wchar_t* _String, wchar_t _C)
    {
        return const_cast<wchar_t*>(wcschr(static_cast<wchar_t const*>(_String), _C));
    }
    _Check_return_
    inline wchar_t* __CRTDECL wcspbrk(_In_z_ wchar_t* _String, _In_z_ wchar_t const* _Control)
    {
        return const_cast<wchar_t*>(wcspbrk(static_cast<wchar_t const*>(_String), _Control));
    }
    _Check_return_
    inline wchar_t* __CRTDECL wcsrchr(_In_z_ wchar_t* _String, _In_ wchar_t _C)
    {
        return const_cast<wchar_t*>(wcsrchr(static_cast<wchar_t const*>(_String), _C));
    }
    _Check_return_ _Ret_maybenull_
    _When_(return != NULL, _Ret_range_(_String, _String+_String_length_(_String)-1))
    inline wchar_t* __CRTDECL wcsstr(_In_z_ wchar_t* _String, _In_z_ wchar_t const*_SubStr)
    {
        return const_cast<wchar_t*>(wcsstr(static_cast<wchar_t const*>(_String), _SubStr));
    }
}
_CRT_END_C_HEADER
