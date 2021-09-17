       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};
_Check_return_ _CRT_INSECURE_DEPRECATE(_wasctime_s)
_Success_(return != 0)
_Ret_writes_z_(26)
_ACRTIMP wchar_t* __cdecl _wasctime(
    _In_ struct tm const* _Tm
    );
_Success_(return == 0)
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wasctime_s(
    _Out_writes_z_(_SizeInWords) _Post_readable_size_(26) wchar_t* _Buffer,
    _In_range_(>=,26) size_t _SizeInWords,
    _In_ struct tm const* _Tm
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    _Success_(return == 0)
    errno_t, _wasctime_s,
    _Post_readable_size_(26) wchar_t, _Buffer,
    _In_ struct tm const*, _Time
    )
_Success_(return > 0)
_Check_return_wat_
_ACRTIMP size_t __cdecl wcsftime(
    _Out_writes_z_(_SizeInWords) wchar_t* _Buffer,
    _In_ size_t _SizeInWords,
    _In_z_ wchar_t const* _Format,
    _In_ struct tm const* _Tm
    );
_Success_(return > 0)
_Check_return_wat_
_ACRTIMP size_t __cdecl _wcsftime_l(
    _Out_writes_z_(_SizeInWords) wchar_t* _Buffer,
    _In_ size_t _SizeInWords,
    _In_z_ wchar_t const* _Format,
    _In_ struct tm const* _Tm,
    _In_opt_ _locale_t _Locale
    );
_Success_(return != 0)
_Check_return_ _CRT_INSECURE_DEPRECATE(_wctime32_s)
_ACRTIMP wchar_t* __cdecl _wctime32(
    _In_ __time32_t const* _Time
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wctime32_s(
    _Out_writes_z_(_SizeInWords) _Post_readable_size_(26) wchar_t* _Buffer,
    _In_ _In_range_(>=, 26) size_t _SizeInWords,
    _In_ __time32_t const* _Time
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, _wctime32_s,
    _Post_readable_size_(26) wchar_t, _Buffer,
    _In_ __time32_t const*, _Time
    )
_Success_(return != 0)
_Ret_writes_z_(26)
_Check_return_ _CRT_INSECURE_DEPRECATE(_wctime64_s)
_ACRTIMP wchar_t* __cdecl _wctime64(
    _In_ __time64_t const* _Time
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wctime64_s(
    _Out_writes_z_(_SizeInWords) _Post_readable_size_(26) wchar_t* _Buffer,
    _In_ _In_range_(>=, 26) size_t _SizeInWords,
    _In_ __time64_t const* _Time);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(
    errno_t, _wctime64_s,
    _Post_readable_size_(26) wchar_t, _Buffer,
    _In_ __time64_t const*, _Time
    )
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wstrdate_s(
    _Out_writes_z_(_SizeInWords) _When_(_SizeInWords >=9, _Post_readable_size_(9)) wchar_t* _Buffer,
    _In_ size_t _SizeInWords
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(
    errno_t, _wstrdate_s,
    _Post_readable_size_(9) wchar_t, _Buffer
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(
    _Success_(return != 0) _Ret_writes_z_(9) wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wstrdate,
    _Out_writes_z_(9), wchar_t, _Buffer
    )
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wstrtime_s(
    _Out_writes_z_(_SizeInWords) _When_(_SizeInWords >=9, _Post_readable_size_(9)) wchar_t* _Buffer,
    _In_ size_t _SizeInWords
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(
    errno_t, _wstrtime_s,
    _Post_readable_size_(9) wchar_t, _Buffer
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(
    _Success_(return != 0) _Ret_writes_z_(9) wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wstrtime,
    _Out_writes_z_(9), wchar_t, _Buffer
    )
    #pragma warning(push)
    #pragma warning(disable: 4996)
        _Check_return_
        static __inline wchar_t* __CRTDECL _wctime(
            _In_ time_t const* const _Time
            )
        {
            return _wctime32(_Time);
        }
        _Check_return_wat_
        static __inline errno_t __CRTDECL _wctime_s(
            _Pre_notnull_ _Post_z_ _Out_writes_z_(_SizeInWords) wchar_t* const _Buffer,
            _In_ size_t const _SizeInWords,
            _In_ time_t const* const _Time)
        {
            return _wctime32_s(_Buffer, _SizeInWords, _Time);
        }
    #pragma warning(pop)
_CRT_END_C_HEADER
