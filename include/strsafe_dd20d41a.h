#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <specstrings.h>
#include <winapifamily.h>
typedef unsigned __int64 size_t;
typedef _Return_type_success_(return >= 0) long HRESULT;
typedef unsigned long DWORD;
#pragma warning(push)
#pragma warning(disable: 28210)
C_ASSERT(STRSAFE_MAX_CCH <= 2147483647);
C_ASSERT(STRSAFE_MAX_CCH > 1);
typedef _Null_terminated_ char* STRSAFE_LPSTR;
typedef _Null_terminated_ const char* STRSAFE_LPCSTR;
typedef _Null_terminated_ wchar_t* STRSAFE_LPWSTR;
typedef _Null_terminated_ const wchar_t* STRSAFE_LPCWSTR;
typedef _Null_terminated_ const wchar_t UNALIGNED* STRSAFE_LPCUWSTR;
typedef const char* STRSAFE_PCNZCH;
typedef const wchar_t* STRSAFE_PCNZWCH;
typedef const wchar_t UNALIGNED* STRSAFE_PCUNZWCH;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringLengthWorkerA(
    _In_reads_or_z_(cchMax) STRSAFE_PCNZCH psz,
    _In_ _In_range_(<=, STRSAFE_MAX_CCH) size_t cchMax,
    _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringLengthWorkerW(
    _In_reads_or_z_(cchMax) STRSAFE_PCNZWCH psz,
    _In_ _In_range_(<=, STRSAFE_MAX_CCH) size_t cchMax,
    _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_When_(_Old_(*ppszSrc) != NULL, _Unchanged_(*ppszSrc))
_When_(_Old_(*ppszSrc) == NULL, _At_(*ppszSrc, _Post_z_))
STRSAFEWORKERAPI
StringExValidateSrcA(
    _Inout_ _Deref_post_notnull_ STRSAFE_PCNZCH* ppszSrc,
    _Inout_opt_
        _Deref_out_range_(<, cchMax)
        _Deref_out_range_(<=, _Old_(*pcchToRead)) size_t* pcchToRead,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_When_(_Old_(*ppszSrc) != NULL, _Unchanged_(*ppszSrc))
_When_(_Old_(*ppszSrc) == NULL, _At_(*ppszSrc, _Post_z_))
STRSAFEWORKERAPI
StringExValidateSrcW(
    _Inout_ _Deref_post_notnull_ STRSAFE_PCNZWCH* ppszSrc,
    _Inout_opt_
        _Deref_out_range_(<, cchMax)
        _Deref_out_range_(<=, _Old_(*pcchToRead)) size_t* pcchToRead,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
STRSAFEWORKERAPI
StringValidateDestA(
    _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax);
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
STRSAFEWORKERAPI
StringValidateDestAndLengthA(
    _In_reads_opt_(cchDest) STRSAFE_LPCSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
    _In_ const size_t cchMax);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
STRSAFEWORKERAPI
StringValidateDestW(
    _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax);
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
STRSAFEWORKERAPI
StringValidateDestAndLengthW(
    _In_reads_opt_(cchDest) STRSAFE_LPCWSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
    _In_ const size_t cchMax);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringExValidateDestA(
    _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
STRSAFEWORKERAPI
StringExValidateDestAndLengthA(
    _In_reads_opt_(cchDest) STRSAFE_LPCSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringExValidateDestW(
    _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
STRSAFEWORKERAPI
StringExValidateDestAndLengthW(
    _In_reads_opt_(cchDest) STRSAFE_LPCWSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringCopyWorkerA(
    _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
    _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
    _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
    _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
    _In_ _In_range_(<, STRSAFE_MAX_CCH) size_t cchToCopy);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringCopyWorkerW(
    _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
    _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
    _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
    _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
    _In_ _In_range_(<, STRSAFE_MAX_CCH) size_t cchToCopy);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringVPrintfWorkerA(
    _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
    _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
    _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
    _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
    _In_ va_list argList);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFELOCALEWORKERAPI
StringVPrintf_lWorkerA(
    _Out_writes_(cchDest) STRSAFE_LPSTR pszDest,
    _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
    _Out_opt_ _Deref_out_range_(<=, cchDest - 1) size_t* pcchNewDestLength,
    _In_ _Printf_format_string_params_(2) STRSAFE_LPCSTR pszFormat,
    _In_ _locale_t locale,
    _In_ va_list argList);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringVPrintfWorkerW(
        _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
        _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
        _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
        _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
        _In_ va_list argList);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFELOCALEWORKERAPI
StringVPrintf_lWorkerW(
        _Out_writes_(cchDest) STRSAFE_LPWSTR pszDest,
        _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
        _Out_opt_ _Deref_out_range_(<=, cchDest - 1) size_t* pcchNewDestLength,
        _In_ _Printf_format_string_params_(2) STRSAFE_LPCWSTR pszFormat,
        _In_ _locale_t locale,
        _In_ va_list argList);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
StringGetsWorkerA(
        _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
        _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
        _Always_(_Out_opt_ _Deref_out_range_(<, cchDest>0?cchDest:1)) size_t* pcchNewDestLength);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
StringGetsWorkerW(
        _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
        _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
        _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringExHandleFillBehindNullA(
        _Inout_updates_bytes_(cbRemaining) STRSAFE_LPSTR pszDestEnd,
        _In_ size_t cbRemaining,
        _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
StringExHandleFillBehindNullW(
        _Inout_updates_bytes_(cbRemaining) STRSAFE_LPWSTR pszDestEnd,
        _In_ size_t cbRemaining,
        _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    STRSAFEWORKERAPI
    StringExHandleOtherFlagsA(
            _Out_writes_bytes_(cbDest) STRSAFE_LPSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH * sizeof(char)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(char)?(cbDest / sizeof(char)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_ _Deref_out_range_(0, cbDest / sizeof(char)) size_t* pcchRemaining,
            _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    STRSAFEWORKERAPI
    StringExHandleOtherFlagsW(
            _Out_writes_bytes_(cbDest) STRSAFE_LPWSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH * sizeof(wchar_t)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(wchar_t)?(cbDest / sizeof(wchar_t)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_ _Deref_out_range_(0, cbDest / sizeof(wchar_t)) size_t* pcchRemaining,
            _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable: 4616)
#pragma warning(disable : 4996)
#pragma warning(disable : 4995)
#pragma warning(disable : 4793)
#pragma warning(disable : __WARNING_CYCLOMATIC_COMPLEXITY)
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCSTR pszSrc)
{
    HRESULT hr;
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerA(pszDest,
                cchDest,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCWSTR pszSrc)
{
    HRESULT hr;
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerW(pszDest,
                cchDest,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCopyA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCSTR pszSrc)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerA(pszDest,
                cchDest,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCbCopyW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCWSTR pszSrc)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerW(pszDest,
                cchDest,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszSrc != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCWSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCopyExA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszSrc != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCbCopyExW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCWSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyNA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToCopy)
{
    HRESULT hr;
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        if (cchToCopy > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            *pszDest = '\0';
        }
        else
        {
            hr = StringCopyWorkerA(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchToCopy);
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyNW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToCopy)
{
    HRESULT hr;
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        if (cchToCopy > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            *pszDest = L'\0';
        }
        else
        {
            hr = StringCopyWorkerW(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchToCopy);
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCopyNA(
            _Out_writes_bytes_(cbDest) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToCopy)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        size_t cchToCopy = cbToCopy / sizeof(char);
        if (cchToCopy > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            *pszDest = '\0';
        }
        else
        {
            hr = StringCopyWorkerA(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchToCopy);
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
STRSAFEAPI
    StringCbCopyNW(
            _Out_writes_bytes_(cbDest) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToCopy)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        size_t cchToCopy = cbToCopy / sizeof(wchar_t);
        if (cchToCopy > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            *pszDest = L'\0';
        }
        else
        {
            hr = StringCopyWorkerW(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchToCopy);
        }
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyNExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToCopy,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszSrc, &cchToCopy, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if ((cchToCopy != 0) && (*pszSrc != '\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCopyNExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToCopy,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszSrc, &cchToCopy, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if ((cchToCopy != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCopyNExA(
            _Out_writes_bytes_(cbDest) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToCopy,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchToCopy = cbToCopy / sizeof(char);
        hr = StringExValidateSrcA(&pszSrc, &cchToCopy, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if ((cchToCopy != 0) && (*pszSrc != '\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
STRSAFEAPI
    StringCbCopyNExW(
            _Out_writes_bytes_(cbDest) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToCopy,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchToCopy = cbToCopy / sizeof(wchar_t);
        hr = StringExValidateSrcW(&pszSrc, &cchToCopy, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if ((cchToCopy != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCSTR pszSrc)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerA(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCWSTR pszSrc)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerW(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCSTR pszSrc)
{
    HRESULT hr;
    size_t cchDestLength;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerA(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCWSTR pszSrc)
{
    HRESULT hr;
    size_t cchDestLength;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringCopyWorkerW(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                STRSAFE_MAX_LENGTH);
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatExA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        hr = StringExValidateSrcA(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatExW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_ STRSAFE_LPCWSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        hr = StringExValidateSrcW(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatExA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        hr = StringExValidateSrcA(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatExW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_ STRSAFE_LPCWSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        hr = StringExValidateSrcW(&pszSrc, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        STRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatNA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToAppend)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        if (cchToAppend > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
        }
        else
        {
            hr = StringCopyWorkerA(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatNW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToAppend)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        if (cchToAppend > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
        }
        else
        {
            hr = StringCopyWorkerW(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatNA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToAppend)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    size_t cchDestLength;
    hr = StringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        size_t cchToAppend = cbToAppend / sizeof(char);
        if (cchToAppend > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
        }
        else
        {
            hr = StringCopyWorkerA(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatNW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToAppend)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    size_t cchDestLength;
    hr = StringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        size_t cchToAppend = cbToAppend / sizeof(wchar_t);
        if (cchToAppend > STRSAFE_MAX_LENGTH)
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
        }
        else
        {
            hr = StringCopyWorkerW(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatNExA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToAppend,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        hr = StringExValidateSrcA(&pszSrc, &cchToAppend, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != '\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchCatNExW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToAppend,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        hr = StringExValidateSrcW(&pszSrc, &cchToAppend, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbCatNExA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToAppend,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchToAppend = cbToAppend / sizeof(char);
        hr = StringExValidateSrcA(&pszSrc, &cchToAppend, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != '\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
STRSAFEAPI
    StringCbCatNExW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToAppend,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    size_t cchDestLength;
    hr = StringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            STRSAFE_MAX_CCH,
            dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchToAppend = cbToAppend / sizeof(wchar_t);
        hr = StringExValidateSrcW(&pszSrc, &cchToAppend, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                hr = StringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCchVPrintfA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringVPrintfWorkerA(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCchVPrintfW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringVPrintfWorkerW(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbVPrintfA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringVPrintfWorkerA(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCbVPrintfW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringVPrintfWorkerW(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchPrintfA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            ...)
{
    HRESULT hr;
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        va_list argList;
        va_start(argList, pszFormat);
        hr = StringVPrintfWorkerA(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
        va_end(argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchPrintfW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            ...)
{
    HRESULT hr;
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        va_list argList;
        va_start(argList, pszFormat);
        hr = StringVPrintfWorkerW(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
        va_end(argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbPrintfA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            ...)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        va_list argList;
        va_start(argList, pszFormat);
        hr = StringVPrintfWorkerA(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
        va_end(argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCbPrintfW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            ...)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        va_list argList;
        va_start(argList, pszFormat);
        hr = StringVPrintfWorkerW(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
        va_end(argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCchPrintfExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            ...)
{
    HRESULT hr;
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                va_list argList;
                va_start(argList, pszFormat);
                hr = StringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCchPrintfExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            ...)
{
    HRESULT hr;
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                va_list argList;
                va_start(argList, pszFormat);
                hr = StringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCbPrintfExA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            ...)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                va_list argList;
                va_start(argList, pszFormat);
                hr = StringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCbPrintfExW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            ...)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                va_list argList;
                va_start(argList, pszFormat);
                hr = StringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCchVPrintfExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                hr = StringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCchVPrintfExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                hr = StringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCbVPrintfExA(
            _Out_writes_bytes_(cbDest) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcA(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = '\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != '\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                hr = StringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
STRSAFEAPI
    StringCbVPrintfExW(
            _Out_writes_bytes_(cbDest) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        hr = StringExValidateSrcW(&pszFormat, NULL, STRSAFE_MAX_CCH, dwFlags);
        if (SUCCEEDED(hr))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        hr = STRSAFE_E_INVALID_PARAMETER;
                    }
                    else
                    {
                        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
                    }
                }
                else
                {
                    __analysis_assume_nullterminated(pszDest);
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                hr = StringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        else
        {
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) || (hr == STRSAFE_E_INSUFFICIENT_BUFFER))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchGetsA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest)
{
    HRESULT hr;
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringGetsWorkerA(pszDest, cchDest, NULL);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchGetsW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest)
{
    HRESULT hr;
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringGetsWorkerW(pszDest, cchDest, NULL);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbGetsA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringGetsWorkerA(pszDest, cchDest, NULL);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbGetsW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH);
    if (SUCCEEDED(hr))
    {
        hr = StringGetsWorkerW(pszDest, cchDest, NULL);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchGetsExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        if (dwFlags & (~STRSAFE_VALID_FLAGS))
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        else if (cchDest == 0)
        {
            if (pszDest == NULL)
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else
            {
                hr = STRSAFE_E_INSUFFICIENT_BUFFER;
            }
        }
        else
        {
            size_t cchNewDestLength = 0;
            hr = StringGetsWorkerA(pszDest, cchDest, &cchNewDestLength);
            pszDestEnd = pszDest + cchNewDestLength;
            cchRemaining = cchDest - cchNewDestLength;
            if (SUCCEEDED(hr) &&
                    (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                    (cchRemaining > 1))
            {
                size_t cbRemaining;
                cbRemaining = cchRemaining * sizeof(char);
                StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) ||
                (hr == STRSAFE_E_INSUFFICIENT_BUFFER) ||
                (hr == STRSAFE_E_END_OF_FILE))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCchGetsExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        if (dwFlags & (~STRSAFE_VALID_FLAGS))
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        else if (cchDest == 0)
        {
            if (pszDest == NULL)
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else
            {
                hr = STRSAFE_E_INSUFFICIENT_BUFFER;
            }
        }
        else
        {
            size_t cchNewDestLength = 0;
            hr = StringGetsWorkerW(pszDest, cchDest, &cchNewDestLength);
            pszDestEnd = pszDest + cchNewDestLength;
            cchRemaining = cchDest - cchNewDestLength;
            if (SUCCEEDED(hr) &&
                    (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                    (cchRemaining > 1))
            {
                size_t cbRemaining;
                cbRemaining = cchRemaining * sizeof(wchar_t);
                StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) ||
                (hr == STRSAFE_E_INSUFFICIENT_BUFFER) ||
                (hr == STRSAFE_E_END_OF_FILE))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcchRemaining)
            {
                *pcchRemaining = cchRemaining;
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringCbGetsExA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(char);
    hr = StringExValidateDestA(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        if (dwFlags & (~STRSAFE_VALID_FLAGS))
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            if (cchDest != 0)
            {
                *pszDest = '\0';
            }
        }
        else if (cchDest == 0)
        {
            if (pszDest == NULL)
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else
            {
                hr = STRSAFE_E_INSUFFICIENT_BUFFER;
            }
        }
        else
        {
            size_t cchNewDestLength = 0;
            hr = StringGetsWorkerA(pszDest, cchDest, &cchNewDestLength);
            pszDestEnd = pszDest + cchNewDestLength;
            cchRemaining = cchDest - cchNewDestLength;
            if (SUCCEEDED(hr) &&
                    (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                    (cchRemaining > 1))
            {
                size_t cbRemaining;
                cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                StringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) ||
                (hr == STRSAFE_E_INSUFFICIENT_BUFFER) ||
                (hr == STRSAFE_E_END_OF_FILE))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFEAPI
    StringCbGetsExW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    size_t cchDest = cbDest / sizeof(wchar_t);
    hr = StringExValidateDestW(pszDest, cchDest, STRSAFE_MAX_CCH, dwFlags);
    if (SUCCEEDED(hr))
    {
        STRSAFE_LPWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        if (dwFlags & (~STRSAFE_VALID_FLAGS))
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
            if (cchDest != 0)
            {
                *pszDest = L'\0';
            }
        }
        else if (cchDest == 0)
        {
            if (pszDest == NULL)
            {
                hr = STRSAFE_E_INVALID_PARAMETER;
            }
            else
            {
                hr = STRSAFE_E_INSUFFICIENT_BUFFER;
            }
        }
        else
        {
            size_t cchNewDestLength = 0;
            hr = StringGetsWorkerW(pszDest, cchDest, &cchNewDestLength);
            pszDestEnd = pszDest + cchNewDestLength;
            cchRemaining = cchDest - cchNewDestLength;
            if (SUCCEEDED(hr) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
            {
                size_t cbRemaining;
                cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                StringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
            }
        }
        if (FAILED(hr) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            StringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (SUCCEEDED(hr) ||
                (hr == STRSAFE_E_INSUFFICIENT_BUFFER) ||
                (hr == STRSAFE_E_END_OF_FILE))
        {
            if (ppszDestEnd)
            {
                *ppszDestEnd = pszDestEnd;
            }
            if (pcbRemaining)
            {
                *pcbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
            }
        }
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable:__WARNING_POTENTIAL_RANGE_POSTCONDITION_VIOLATION)
_Must_inspect_result_
STRSAFEAPI
    StringCchLengthA(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZCH psz,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    HRESULT hr;
    if ((psz == NULL) || (cchMax > STRSAFE_MAX_CCH))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    else
    {
        hr = StringLengthWorkerA(psz, cchMax, pcchLength);
    }
    if (FAILED(hr) && pcchLength)
    {
        *pcchLength = 0;
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable:__WARNING_POTENTIAL_RANGE_POSTCONDITION_VIOLATION)
_Must_inspect_result_
STRSAFEAPI
    StringCchLengthW(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZWCH psz,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    HRESULT hr;
    if ((psz == NULL) || (cchMax > STRSAFE_MAX_CCH))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    else
    {
        hr = StringLengthWorkerW(psz, cchMax, pcchLength);
    }
    if (FAILED(hr) && pcchLength)
    {
        *pcchLength = 0;
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
STRSAFEAPI
    StringCbLengthA(
            _In_reads_or_z_(cbMax) STRSAFE_PCNZCH psz,
            _In_ _In_range_(1, STRSAFE_MAX_CCH * sizeof(char)) size_t cbMax,
            _Out_opt_ _Deref_out_range_(<, cbMax) size_t* pcbLength)
{
    HRESULT hr;
    size_t cchMax = cbMax / sizeof(char);
    size_t cchLength = 0;
    if ((psz == NULL) || (cchMax > STRSAFE_MAX_CCH))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    else
    {
        hr = StringLengthWorkerA(psz, cchMax, &cchLength);
    }
    if (pcbLength)
    {
        if (SUCCEEDED(hr))
        {
            *pcbLength = cchLength * sizeof(char);
        }
        else
        {
            *pcbLength = 0;
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
STRSAFEAPI
    StringCbLengthW(
            _In_reads_or_z_(cbMax / sizeof(wchar_t)) STRSAFE_PCNZWCH psz,
            _In_ _In_range_(1, STRSAFE_MAX_CCH * sizeof(wchar_t)) size_t cbMax,
            _Out_opt_ _Deref_out_range_(<, cbMax - 1) size_t* pcbLength)
{
    HRESULT hr;
    size_t cchMax = cbMax / sizeof(wchar_t);
    size_t cchLength = 0;
    if ((psz == NULL) || (cchMax > STRSAFE_MAX_CCH))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    else
    {
        hr = StringLengthWorkerW(psz, cchMax, &cchLength);
    }
    if (pcbLength)
    {
        if (SUCCEEDED(hr))
        {
            *pcbLength = cchLength * sizeof(wchar_t);
        }
        else
        {
            *pcbLength = 0;
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable:__WARNING_RETURNING_BAD_RESULT)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringLengthWorkerA(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZCH psz,
            _In_ _In_range_(<=, STRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    HRESULT hr = S_OK;
    size_t cchOriginalMax = cchMax;
    while (cchMax && (*psz != '\0'))
    {
        psz++;
        cchMax--;
    }
    if (cchMax == 0)
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    if (pcchLength)
    {
        if (SUCCEEDED(hr))
        {
            *pcchLength = cchOriginalMax - cchMax;
        }
        else
        {
            *pcchLength = 0;
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringLengthWorkerW(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZWCH psz,
            _In_ _In_range_(<=, STRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    HRESULT hr = S_OK;
    size_t cchOriginalMax = cchMax;
    while (cchMax && (*psz != L'\0'))
    {
        psz++;
        cchMax--;
    }
    if (cchMax == 0)
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    if (pcchLength)
    {
        if (SUCCEEDED(hr))
        {
            *pcchLength = cchOriginalMax - cchMax;
        }
        else
        {
            *pcchLength = 0;
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_3)
#pragma warning(disable : __WARNING_RETURNING_BAD_RESULT)
#pragma warning(disable : __WARNING_MISSING_ZERO_TERMINATION2)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
    _When_(_Old_(*ppszSrc) != NULL, _Unchanged_(*ppszSrc))
_When_(_Old_(*ppszSrc) == NULL, _At_(*ppszSrc, _Post_z_))
    STRSAFEWORKERAPI
    StringExValidateSrcA(
            _Inout_ _Deref_post_notnull_ STRSAFE_PCNZCH* ppszSrc,
            _Inout_opt_
            _Deref_out_range_(<, cchMax)
            _Deref_out_range_(<=, _Old_(*pcchToRead)) size_t* pcchToRead,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    HRESULT hr = S_OK;
    if (pcchToRead && (*pcchToRead >= cchMax))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    else if ((dwFlags & STRSAFE_IGNORE_NULLS) && (*ppszSrc == NULL))
    {
        *ppszSrc = "";
        if (pcchToRead)
        {
            *pcchToRead = 0;
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
    _When_(_Old_(*ppszSrc) != NULL, _Unchanged_(*ppszSrc))
_When_(_Old_(*ppszSrc) == NULL, _At_(*ppszSrc, _Post_z_))
    STRSAFEWORKERAPI
    StringExValidateSrcW(
            _Inout_ _Deref_post_notnull_ STRSAFE_PCNZWCH* ppszSrc,
            _Inout_opt_
            _Deref_out_range_(<, cchMax)
            _Deref_out_range_(<=, _Old_(*pcchToRead)) size_t* pcchToRead,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    HRESULT hr = S_OK;
    if (pcchToRead && (*pcchToRead >= cchMax))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    else if ((dwFlags & STRSAFE_IGNORE_NULLS) && (*ppszSrc == NULL))
    {
        *ppszSrc = L"";
        if (pcchToRead)
        {
            *pcchToRead = 0;
        }
    }
    return hr;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : 4100)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    STRSAFEWORKERAPI
    StringValidateDestA(
            _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax)
{
    HRESULT hr = S_OK;
    if ((cchDest == 0) || (cchDest > cchMax))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    return hr;
}
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
#pragma warning(disable : __WARNING_RANGE_POSTCONDITION_VIOLATION)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    STRSAFEWORKERAPI
    StringValidateDestAndLengthA(
            _In_reads_opt_(cchDest) STRSAFE_LPCSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
            _In_ const size_t cchMax)
{
    HRESULT hr;
    hr = StringValidateDestA(pszDest, cchDest, cchMax);
    if (SUCCEEDED(hr))
    {
        hr = StringLengthWorkerA(pszDest, cchDest, pcchDestLength);
    }
    else
    {
        *pcchDestLength = 0;
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : 4100)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    STRSAFEWORKERAPI
    StringValidateDestW(
            _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax)
{
    HRESULT hr = S_OK;
    if ((cchDest == 0) || (cchDest > cchMax))
    {
        hr = STRSAFE_E_INVALID_PARAMETER;
    }
    return hr;
}
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
#pragma warning(disable : __WARNING_RANGE_POSTCONDITION_VIOLATION)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    STRSAFEWORKERAPI
    StringValidateDestAndLengthW(
            _In_reads_opt_(cchDest) STRSAFE_LPCWSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
            _In_ const size_t cchMax)
{
    HRESULT hr;
    hr = StringValidateDestW(pszDest, cchDest, cchMax);
    if (SUCCEEDED(hr))
    {
        hr = StringLengthWorkerW(pszDest, cchDest, pcchDestLength);
    }
    else
    {
        *pcchDestLength = 0;
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringExValidateDestA(
            _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    HRESULT hr = S_OK;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        if (((pszDest == NULL) && (cchDest != 0)) ||
                (cchDest > cchMax))
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
        }
    }
    else
    {
        hr = StringValidateDestA(pszDest, cchDest, cchMax);
    }
    return hr;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
STRSAFEWORKERAPI
    StringExValidateDestAndLengthA(
            _In_reads_opt_(cchDest) STRSAFE_LPCSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        hr = StringExValidateDestA(pszDest, cchDest, cchMax, dwFlags);
        if (FAILED(hr) || (cchDest == 0))
        {
            *pcchDestLength = 0;
        }
        else
        {
            hr = StringLengthWorkerA(pszDest, cchDest, pcchDestLength);
        }
    }
    else
    {
        hr = StringValidateDestAndLengthA(pszDest,
                cchDest,
                pcchDestLength,
                cchMax);
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringExValidateDestW(
            _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    HRESULT hr = S_OK;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        if (((pszDest == NULL) && (cchDest != 0)) ||
                (cchDest > cchMax))
        {
            hr = STRSAFE_E_INVALID_PARAMETER;
        }
    }
    else
    {
        hr = StringValidateDestW(pszDest, cchDest, cchMax);
    }
    return hr;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
STRSAFEWORKERAPI
    StringExValidateDestAndLengthW(
            _In_reads_opt_(cchDest) STRSAFE_LPCWSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    HRESULT hr;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        hr = StringExValidateDestW(pszDest, cchDest, cchMax, dwFlags);
        if (FAILED(hr) || (cchDest == 0))
        {
            *pcchDestLength = 0;
        }
        else
        {
            hr = StringLengthWorkerW(pszDest, cchDest, pcchDestLength);
        }
    }
    else
    {
        hr = StringValidateDestAndLengthW(pszDest,
                cchDest,
                pcchDestLength,
                cchMax);
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable:__WARNING_RETURNING_BAD_RESULT)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringCopyWorkerA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ _In_range_(<, STRSAFE_MAX_CCH) size_t cchToCopy)
{
    HRESULT hr = S_OK;
    size_t cchNewDestLength = 0;
    while (cchDest && cchToCopy && (*pszSrc != '\0'))
    {
        *pszDest++ = *pszSrc++;
        cchDest--;
        cchToCopy--;
        cchNewDestLength++;
    }
    if (cchDest == 0)
    {
        pszDest--;
        cchNewDestLength--;
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    *pszDest = '\0';
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringCopyWorkerW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ _In_range_(<, STRSAFE_MAX_CCH) size_t cchToCopy)
{
    HRESULT hr = S_OK;
    size_t cchNewDestLength = 0;
    while (cchDest && cchToCopy && (*pszSrc != L'\0'))
    {
        *pszDest++ = *pszSrc++;
        cchDest--;
        cchToCopy--;
        cchNewDestLength++;
    }
    if (cchDest == 0)
    {
        pszDest--;
        cchNewDestLength--;
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    *pszDest = L'\0';
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringVPrintfWorkerA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
            _In_ _Printf_format_string_ STRSAFE_LPCSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr = S_OK;
    int iRet;
    size_t cchMax;
    size_t cchNewDestLength = 0;
    cchMax = cchDest - 1;
#pragma warning(push)
#pragma warning(disable: __WARNING_BANNED_API_USAGE)
    iRet = _vsnprintf(pszDest, cchMax, pszFormat, argList);
#pragma warning(pop)
    if ((iRet < 0) || (((size_t)iRet) > cchMax))
    {
        pszDest += cchMax;
        *pszDest = '\0';
        cchNewDestLength = cchMax;
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    else if (((size_t)iRet) == cchMax)
    {
        pszDest += cchMax;
        *pszDest = '\0';
        cchNewDestLength = cchMax;
    }
    else
    {
        cchNewDestLength = (size_t)iRet;
    }
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFELOCALEWORKERAPI
    StringVPrintf_lWorkerA(
            _Out_writes_(cchDest) STRSAFE_LPSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Out_opt_ _Deref_out_range_(<=, cchDest - 1) size_t* pcchNewDestLength,
            _In_ _Printf_format_string_params_(2) STRSAFE_LPCSTR pszFormat,
            _In_ _locale_t locale,
            _In_ va_list argList)
{
    HRESULT hr = S_OK;
    int iRet;
    size_t cchMax;
    size_t cchNewDestLength = 0;
    cchMax = cchDest - 1;
    iRet = _vsnprintf_l(pszDest, cchMax, pszFormat, locale, argList);
    if ((iRet < 0) || (((size_t)iRet) > cchMax))
    {
        pszDest += cchMax;
        *pszDest = '\0';
        cchNewDestLength = cchMax;
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    else if (((size_t)iRet) == cchMax)
    {
        pszDest += cchMax;
        *pszDest = '\0';
        cchNewDestLength = cchMax;
    }
    else
    {
        cchNewDestLength = (size_t)iRet;
    }
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringVPrintfWorkerW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
            _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
            _In_ va_list argList)
{
    HRESULT hr = S_OK;
    int iRet;
    size_t cchMax;
    size_t cchNewDestLength = 0;
    cchMax = cchDest - 1;
#pragma warning(push)
#pragma warning(disable: __WARNING_BANNED_API_USAGE)
    iRet = _vsnwprintf(pszDest, cchMax, pszFormat, argList);
#pragma warning(pop)
    if ((iRet < 0) || (((size_t)iRet) > cchMax))
    {
        pszDest += cchMax;
        *pszDest = L'\0';
        cchNewDestLength = cchMax;
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    else if (((size_t)iRet) == cchMax)
    {
        pszDest += cchMax;
        *pszDest = L'\0';
        cchNewDestLength = cchMax;
    }
    else
    {
        cchNewDestLength = (size_t)iRet;
    }
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
STRSAFELOCALEWORKERAPI
    StringVPrintf_lWorkerW(
            _Out_writes_(cchDest) STRSAFE_LPWSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Out_opt_ _Deref_out_range_(<=, cchDest - 1) size_t* pcchNewDestLength,
            _In_ _Printf_format_string_params_(2) STRSAFE_LPCWSTR pszFormat,
            _In_ _locale_t locale,
            _In_ va_list argList)
{
    HRESULT hr = S_OK;
    int iRet;
    size_t cchMax;
    size_t cchNewDestLength = 0;
    cchMax = cchDest - 1;
    iRet = _vsnwprintf_l(pszDest, cchMax, pszFormat, locale, argList);
    if ((iRet < 0) || (((size_t)iRet) > cchMax))
    {
        pszDest += cchMax;
        *pszDest = L'\0';
        cchNewDestLength = cchMax;
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    else if (((size_t)iRet) == cchMax)
    {
        pszDest += cchMax;
        *pszDest = L'\0';
        cchNewDestLength = cchMax;
    }
    else
    {
        cchNewDestLength = (size_t)iRet;
    }
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringGetsWorkerA(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<, cchDest>0?cchDest:1)) size_t* pcchNewDestLength)
{
    HRESULT hr = S_OK;
    size_t cchNewDestLength = 0;
    if (cchDest == 1)
    {
        *pszDest = '\0';
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    else
    {
        while (cchDest > 1)
        {
            char ch;
            int i = getc(stdin);
            if (i == EOF)
            {
                if (cchNewDestLength == 0)
                {
                    hr = STRSAFE_E_END_OF_FILE;
                }
                break;
            }
            ch = (char)i;
            if (ch == '\n')
            {
                break;
            }
            *pszDest++ = ch;
            cchDest--;
            cchNewDestLength++;
        }
        *pszDest = '\0';
    }
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEAPI
    StringGetsWorkerW(
            _Out_writes_(cchDest) _Always_(_Post_z_) STRSAFE_LPWSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength)
{
    HRESULT hr = S_OK;
    size_t cchNewDestLength = 0;
    if (cchDest == 1)
    {
        *pszDest = '\0';
        hr = STRSAFE_E_INSUFFICIENT_BUFFER;
    }
    else
    {
        while (cchDest > 1)
        {
            wchar_t ch = getwc(stdin);
            if (ch == WEOF)
            {
                if (cchNewDestLength == 0)
                {
                    hr = STRSAFE_E_END_OF_FILE;
                }
                break;
            }
            if (ch == L'\n')
            {
                break;
            }
            *pszDest++ = ch;
            cchDest--;
            cchNewDestLength++;
        }
        *pszDest = L'\0';
    }
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return hr;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringExHandleFillBehindNullA(
            _Inout_updates_bytes_(cbRemaining) STRSAFE_LPSTR pszDestEnd,
            _In_ size_t cbRemaining,
            _In_ DWORD dwFlags)
{
    if (cbRemaining > sizeof(char))
    {
        memset(pszDestEnd + 1, STRSAFE_GET_FILL_PATTERN(dwFlags), cbRemaining - sizeof(char));
    }
    return S_OK;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STRSAFEWORKERAPI
    StringExHandleFillBehindNullW(
            _Inout_updates_bytes_(cbRemaining) STRSAFE_LPWSTR pszDestEnd,
            _In_ size_t cbRemaining,
            _In_ DWORD dwFlags)
{
    if (cbRemaining > sizeof(wchar_t))
    {
        memset(pszDestEnd + 1, STRSAFE_GET_FILL_PATTERN(dwFlags), cbRemaining - sizeof(wchar_t));
    }
    return S_OK;
}
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable : __WARNING_USING_UNINIT_VAR)
#pragma warning(disable : __WARNING_RETURN_UNINIT_VAR)
#pragma warning(disable : __WARNING_MISSING_ZERO_TERMINATION2)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
#pragma warning(disable:__WARNING_POTENTIAL_RANGE_POSTCONDITION_VIOLATION)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    STRSAFEWORKERAPI
    StringExHandleOtherFlagsA(
            _Out_writes_bytes_(cbDest) STRSAFE_LPSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH * sizeof(char)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(char)?(cbDest / sizeof(char)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) STRSAFE_LPSTR* ppszDestEnd,
            _Out_ _Deref_out_range_(0, cbDest / sizeof(char)) size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    size_t cchDest = cbDest / sizeof(char);
    _Analysis_assume_(dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE));
    if ((cchDest > 0) && (dwFlags & STRSAFE_NO_TRUNCATION))
    {
        char* pszOriginalDestEnd;
        pszOriginalDestEnd = pszDest + cchOriginalDestLength;
        *ppszDestEnd = pszOriginalDestEnd;
        *pcchRemaining = cchDest - cchOriginalDestLength;
        *pszOriginalDestEnd = '\0';
    }
    if (dwFlags & STRSAFE_FILL_ON_FAILURE)
    {
        memset(pszDest, STRSAFE_GET_FILL_PATTERN(dwFlags), cbDest);
        if (STRSAFE_GET_FILL_PATTERN(dwFlags) == 0)
        {
            *ppszDestEnd = pszDest;
            *pcchRemaining = cchDest;
            _Analysis_assume_(*pszDest == '\0');
        }
        else if (cchDest > 0)
        {
            char* pszDestEnd;
            pszDestEnd = pszDest + cchDest - 1;
            *ppszDestEnd = pszDestEnd;
            *pcchRemaining = 1;
            *pszDestEnd = L'\0';
        }
    }
    if ((cchDest > 0) && (dwFlags & STRSAFE_NULL_ON_FAILURE))
    {
        *ppszDestEnd = pszDest;
        *pcchRemaining = cchDest;
        *pszDest = '\0';
    }
    return S_OK;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    STRSAFEWORKERAPI
    StringExHandleOtherFlagsW(
            _Out_writes_bytes_(cbDest) STRSAFE_LPWSTR pszDest,
            _In_ _In_range_(1, STRSAFE_MAX_CCH * sizeof(wchar_t)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(wchar_t)?(cbDest / sizeof(wchar_t)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) STRSAFE_LPWSTR* ppszDestEnd,
            _Out_ _Deref_out_range_(0, cbDest / sizeof(wchar_t)) size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    size_t cchDest = cbDest / sizeof(wchar_t);
    _Analysis_assume_(dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE));
    if ((cchDest > 0) && (dwFlags & STRSAFE_NO_TRUNCATION))
    {
        wchar_t* pszOriginalDestEnd;
        pszOriginalDestEnd = pszDest + cchOriginalDestLength;
        *ppszDestEnd = pszOriginalDestEnd;
        *pcchRemaining = cchDest - cchOriginalDestLength;
        *pszOriginalDestEnd = L'\0';
    }
    if (dwFlags & STRSAFE_FILL_ON_FAILURE)
    {
        memset(pszDest, STRSAFE_GET_FILL_PATTERN(dwFlags), cbDest);
        if (STRSAFE_GET_FILL_PATTERN(dwFlags) == 0)
        {
            *ppszDestEnd = pszDest;
            *pcchRemaining = cchDest;
            _Analysis_assume_(cchDest == 0 || *pszDest == L'\0');
        }
        else if (cchDest > 0)
        {
            wchar_t* pszDestEnd;
            pszDestEnd = pszDest + cchDest - 1;
            *ppszDestEnd = pszDestEnd;
            *pcchRemaining = 1;
            *pszDestEnd = L'\0';
        }
    }
    if ((cchDest > 0) && (dwFlags & STRSAFE_NULL_ON_FAILURE))
    {
        *ppszDestEnd = pszDest;
        *pcchRemaining = cchDest;
        *pszDest = L'\0';
    }
    return S_OK;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma deprecated(StringLengthWorkerA)
#pragma deprecated(StringLengthWorkerW)
#pragma deprecated(UnalignedStringLengthWorkerW)
#pragma deprecated(StringExValidateSrcA)
#pragma deprecated(StringExValidateSrcW)
#pragma deprecated(StringValidateDestA)
#pragma deprecated(StringValidateDestAndLengthA)
#pragma deprecated(StringValidateDestW)
#pragma deprecated(StringValidateDestAndLengthW)
#pragma deprecated(StringExValidateDestA)
#pragma deprecated(StringExValidateDestAndLengthA)
#pragma deprecated(StringExValidateDestW)
#pragma deprecated(StringExValidateDestAndLengthW)
#pragma deprecated(StringCopyWorkerA)
#pragma deprecated(StringCopyWorkerW)
#pragma deprecated(StringVPrintfWorkerA)
#pragma deprecated(StringVPrintfWorkerW)
#pragma deprecated(StringGetsWorkerA)
#pragma deprecated(StringGetsWorkerW)
#pragma deprecated(StringExHandleFillBehindNullA)
#pragma deprecated(StringExHandleFillBehindNullW)
#pragma deprecated(StringExHandleOtherFlagsA)
#pragma deprecated(StringExHandleOtherFlagsW)
#endif
#pragma endregion
#pragma warning(pop)
#pragma warning(pop)
