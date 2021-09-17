#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <specstrings.h>
#include <winapifamily.h>
#include <ntdef.h>
typedef unsigned __int64 size_t;
typedef _Return_type_success_(return >= 0) long NTSTATUS;
typedef unsigned long DWORD;
#pragma warning(push)
#pragma warning(disable: 28210)
C_ASSERT(NTSTRSAFE_MAX_CCH <= 2147483647);
C_ASSERT(NTSTRSAFE_MAX_CCH > 1);
C_ASSERT(NTSTRSAFE_UNICODE_STRING_MAX_CCH <= (0xffff / sizeof(wchar_t)));
C_ASSERT(NTSTRSAFE_UNICODE_STRING_MAX_CCH > 1);
typedef _Null_terminated_ char* NTSTRSAFE_PSTR;
typedef _Null_terminated_ const char* NTSTRSAFE_PCSTR;
typedef _Null_terminated_ wchar_t* NTSTRSAFE_PWSTR;
typedef _Null_terminated_ const wchar_t* NTSTRSAFE_PCWSTR;
typedef _Null_terminated_ const wchar_t UNALIGNED* NTSTRSAFE_PCUWSTR;
typedef const char* STRSAFE_PCNZCH;
typedef const wchar_t* STRSAFE_PCNZWCH;
typedef const wchar_t UNALIGNED* STRSAFE_PCUNZWCH;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringLengthWorkerA(
    _In_reads_or_z_(cchMax) STRSAFE_PCNZCH psz,
    _In_ _In_range_(<=, NTSTRSAFE_MAX_CCH) size_t cchMax,
    _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringLengthWorkerW(
    _In_reads_or_z_(cchMax) STRSAFE_PCNZWCH psz,
    _In_ _In_range_(<=, NTSTRSAFE_MAX_CCH) size_t cchMax,
    _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_When_(_Old_(*ppszSrc) != NULL, _Unchanged_(*ppszSrc))
_When_(_Old_(*ppszSrc) == NULL, _At_(*ppszSrc, _Post_z_))
NTSTRSAFEWORKERDDI
RtlStringExValidateSrcA(
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
NTSTRSAFEWORKERDDI
RtlStringExValidateSrcW(
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
NTSTRSAFEWORKERDDI
RtlStringValidateDestA(
    _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax);
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
NTSTRSAFEWORKERDDI
RtlStringValidateDestAndLengthA(
    _In_reads_opt_(cchDest) NTSTRSAFE_PCSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
    _In_ const size_t cchMax);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
NTSTRSAFEWORKERDDI
RtlStringValidateDestW(
    _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax);
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
NTSTRSAFEWORKERDDI
RtlStringValidateDestAndLengthW(
    _In_reads_opt_(cchDest) NTSTRSAFE_PCWSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
    _In_ const size_t cchMax);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringExValidateDestA(
    _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
NTSTRSAFEWORKERDDI
RtlStringExValidateDestAndLengthA(
    _In_reads_opt_(cchDest) NTSTRSAFE_PCSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringExValidateDestW(
    _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
    _In_ size_t cchDest,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
NTSTRSAFEWORKERDDI
RtlStringExValidateDestAndLengthW(
    _In_reads_opt_(cchDest) NTSTRSAFE_PCWSTR pszDest,
    _In_ size_t cchDest,
    _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
    _In_ const size_t cchMax,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringCopyWorkerA(
    _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
    _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
    _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
    _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
    _In_ _In_range_(<, NTSTRSAFE_MAX_CCH) size_t cchToCopy);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringCopyWorkerW(
    _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
    _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
    _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
    _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
    _In_ _In_range_(<, NTSTRSAFE_MAX_CCH) size_t cchToCopy);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringVPrintfWorkerA(
    _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
    _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
    _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
    _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
    _In_ va_list argList);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringVPrintfWorkerW(
        _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
        _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
        _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
        _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
        _In_ va_list argList);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringExHandleFillBehindNullA(
        _Inout_updates_bytes_(cbRemaining) NTSTRSAFE_PSTR pszDestEnd,
        _In_ size_t cbRemaining,
        _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
RtlStringExHandleFillBehindNullW(
        _Inout_updates_bytes_(cbRemaining) NTSTRSAFE_PWSTR pszDestEnd,
        _In_ size_t cbRemaining,
        _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    NTSTRSAFEWORKERDDI
    RtlStringExHandleOtherFlagsA(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH * sizeof(char)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(char)?(cbDest / sizeof(char)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_ _Deref_out_range_(0, cbDest / sizeof(char)) size_t* pcchRemaining,
            _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    NTSTRSAFEWORKERDDI
    RtlStringExHandleOtherFlagsW(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH * sizeof(wchar_t)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(wchar_t)?(cbDest / sizeof(wchar_t)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_ _Deref_out_range_(0, cbDest / sizeof(wchar_t)) size_t* pcchRemaining,
            _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_At_(DestinationString->Buffer, _Post_equal_to_(pszSrc))
_At_(DestinationString->Length, _Post_equal_to_(_String_length_(pszSrc) * sizeof(WCHAR)))
_At_(DestinationString->MaximumLength, _Post_equal_to_((_String_length_(pszSrc)+1) * sizeof(WCHAR)))
NTSTRSAFEWORKERDDI
RtlUnicodeStringInitWorker(
        _Out_ PUNICODE_STRING DestinationString,
        _In_opt_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ const size_t cchMax,
        _In_ DWORD dwFlags);
NTSTRSAFEWORKERDDI
RtlUnicodeStringValidateWorker(
        _In_opt_ PCUNICODE_STRING SourceString,
        _In_ const size_t cchMax,
        _In_ DWORD dwFlags);
_Post_satisfies_(*pcchSrcLength*sizeof(wchar_t) == SourceString->MaximumLength)
    NTSTRSAFEWORKERDDI
    RtlUnicodeStringValidateSrcWorker(
            _In_ PCUNICODE_STRING SourceString,
            _Outptr_result_buffer_(*pcchSrcLength) wchar_t** ppszSrc,
            _Out_ size_t* pcchSrcLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags);
_Post_satisfies_(*pcchDest*sizeof(wchar_t) == DestinationString->MaximumLength)
    NTSTRSAFEWORKERDDI
    RtlUnicodeStringValidateDestWorker(
            _In_ PCUNICODE_STRING DestinationString,
            _Outptr_result_buffer_(*pcchDest) wchar_t** ppszDest,
            _Out_ size_t* pcchDest,
            _Out_opt_ size_t* pcchDestLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags);
NTSTRSAFEWORKERDDI
RtlStringCopyWideCharArrayWorker(
        _Out_writes_(cchDest) NTSTRSAFE_PWSTR pszDest,
        _In_ size_t cchDest,
        _Out_opt_ size_t* pcchNewDestLength,
        _In_reads_(cchSrcLength) const wchar_t* pszSrc,
        _In_ size_t cchSrcLength);
NTSTRSAFEWORKERDDI
RtlWideCharArrayCopyStringWorker(
        _Out_writes_to_(cchDest, *pcchNewDestLength) wchar_t* pszDest,
        _In_ size_t cchDest,
        _Out_ size_t* pcchNewDestLength,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cchToCopy);
NTSTRSAFEWORKERDDI
RtlWideCharArrayCopyWorker(
        _Out_writes_to_(cchDest, *pcchNewDestLength) wchar_t* pszDest,
        _In_ size_t cchDest,
        _Out_ size_t* pcchNewDestLength,
        _In_reads_(cchSrcLength) const wchar_t* pszSrc,
        _In_ size_t cchSrcLength);
NTSTRSAFEWORKERDDI
RtlWideCharArrayVPrintfWorker(
        _Out_writes_to_(cchDest, *pcchNewDestLength) wchar_t* pszDest,
        _In_ size_t cchDest,
        _Out_ size_t* pcchNewDestLength,
        _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
        _In_ va_list argList);
NTSTRSAFEWORKERDDI
RtlUnicodeStringExHandleFill(
        _Out_writes_(cchRemaining) wchar_t* pszDestEnd,
        _In_ size_t cchRemaining,
        _In_ DWORD dwFlags);
NTSTRSAFEWORKERDDI
RtlUnicodeStringExHandleOtherFlags(
        _Inout_updates_(cchDest) wchar_t* pszDest,
        _In_ size_t cchDest,
        _In_ size_t cchOriginalDestLength,
        _Out_ size_t* pcchNewDestLength,
        _Outptr_result_buffer_(*pcchRemaining) wchar_t** ppszDestEnd,
        _Out_ size_t* pcchRemaining,
        _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable: 4616)
#pragma warning(disable : 4996)
#pragma warning(disable : 4995)
#pragma warning(disable : 4793)
#pragma warning(disable : __WARNING_CYCLOMATIC_COMPLEXITY)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCSTR pszSrc)
{
    NTSTATUS status;
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerA(pszDest,
                cchDest,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc)
{
    NTSTATUS status;
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerW(pszDest,
                cchDest,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCopyA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCSTR pszSrc)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerA(pszDest,
                cchDest,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCbCopyW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerW(pszDest,
                cchDest,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCopyExA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCbCopyExW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyNA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToCopy)
{
    NTSTATUS status;
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        if (cchToCopy > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
            *pszDest = '\0';
        }
        else
        {
            status = RtlStringCopyWorkerA(pszDest,
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyNW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToCopy)
{
    NTSTATUS status;
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        if (cchToCopy > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
            *pszDest = L'\0';
        }
        else
        {
            status = RtlStringCopyWorkerW(pszDest,
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCopyNA(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToCopy)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        size_t cchToCopy = cbToCopy / sizeof(char);
        if (cchToCopy > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
            *pszDest = '\0';
        }
        else
        {
            status = RtlStringCopyWorkerA(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchToCopy);
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
NTSTRSAFEDDI
    RtlStringCbCopyNW(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToCopy)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        size_t cchToCopy = cbToCopy / sizeof(wchar_t);
        if (cchToCopy > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
            *pszDest = L'\0';
        }
        else
        {
            status = RtlStringCopyWorkerW(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchToCopy);
        }
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyNExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToCopy,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszSrc, &cchToCopy, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCopyNExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToCopy,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszSrc, &cchToCopy, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCopyNExA(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToCopy,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchToCopy = cbToCopy / sizeof(char);
        status = RtlStringExValidateSrcA(&pszSrc, &cchToCopy, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringCopyWorkerA(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
NTSTRSAFEDDI
    RtlStringCbCopyNExW(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToCopy,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchToCopy = cbToCopy / sizeof(wchar_t);
        status = RtlStringExValidateSrcW(&pszSrc, &cchToCopy, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringCopyWorkerW(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCSTR pszSrc)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerA(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerW(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCSTR pszSrc)
{
    NTSTATUS status;
    size_t cchDestLength;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerA(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc)
{
    NTSTATUS status;
    size_t cchDestLength;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringCopyWorkerW(pszDest + cchDestLength,
                cchDest - cchDestLength,
                NULL,
                pszSrc,
                NTSTRSAFE_MAX_LENGTH);
    }
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatExA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        status = RtlStringExValidateSrcA(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != '\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatExW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        status = RtlStringExValidateSrcW(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatExA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        status = RtlStringExValidateSrcA(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != '\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatExW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ NTSTRSAFE_PCWSTR pszSrc,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        status = RtlStringExValidateSrcW(&pszSrc, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_MAX_LENGTH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatNA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToAppend)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        if (cchToAppend > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            status = RtlStringCopyWorkerA(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatNW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToAppend)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        if (cchToAppend > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            status = RtlStringCopyWorkerW(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatNA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToAppend)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    size_t cchDestLength;
    status = RtlStringValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        size_t cchToAppend = cbToAppend / sizeof(char);
        if (cchToAppend > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            status = RtlStringCopyWorkerA(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatNW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToAppend)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    size_t cchDestLength;
    status = RtlStringValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        size_t cchToAppend = cbToAppend / sizeof(wchar_t);
        if (cchToAppend > NTSTRSAFE_MAX_LENGTH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            status = RtlStringCopyWorkerW(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    NULL,
                    pszSrc,
                    cchToAppend);
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatNExA(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cchToAppend,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        status = RtlStringExValidateSrcA(&pszSrc, &cchToAppend, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != '\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchCatNExW(
            _Inout_updates_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_reads_or_z_(cchToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cchToAppend,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        status = RtlStringExValidateSrcW(&pszSrc, &cchToAppend, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbCatNExA(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZCH pszSrc,
            _In_ size_t cbToAppend,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthA(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchToAppend = cbToAppend / sizeof(char);
        status = RtlStringExValidateSrcA(&pszSrc, &cchToAppend, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != '\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerA(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
NTSTRSAFEDDI
    RtlStringCbCatNExW(
            _Inout_updates_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_reads_bytes_(cbToAppend) STRSAFE_PCNZWCH pszSrc,
            _In_ size_t cbToAppend,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    size_t cchDestLength;
    status = RtlStringExValidateDestAndLengthW(pszDest,
            cchDest,
            &cchDestLength,
            NTSTRSAFE_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchToAppend = cbToAppend / sizeof(wchar_t);
        status = RtlStringExValidateSrcW(&pszSrc, &cchToAppend, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining <= 1)
            {
                if ((cchToAppend != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWorkerW(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    cchDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCchVPrintfA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringVPrintfWorkerA(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCchVPrintfW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringVPrintfWorkerW(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = L'\0';
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbVPrintfA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringVPrintfWorkerA(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCbVPrintfW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        status = RtlStringVPrintfWorkerW(pszDest,
                cchDest,
                NULL,
                pszFormat,
                argList);
    }
    else if (cchDest > 0)
    {
        *pszDest = '\0';
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchPrintfA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            ...)
{
    NTSTATUS status;
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        va_list argList;
        va_start(argList, pszFormat);
        status = RtlStringVPrintfWorkerA(pszDest,
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCchPrintfW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            ...)
{
    NTSTATUS status;
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        va_list argList;
        va_start(argList, pszFormat);
        status = RtlStringVPrintfWorkerW(pszDest,
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEDDI
    RtlStringCbPrintfA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            ...)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        va_list argList;
        va_start(argList, pszFormat);
        status = RtlStringVPrintfWorkerA(pszDest,
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCbPrintfW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            ...)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        va_list argList;
        va_start(argList, pszFormat);
        status = RtlStringVPrintfWorkerW(pszDest,
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCchPrintfExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            ...)
{
    NTSTATUS status;
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                va_list argList;
                va_start(argList, pszFormat);
                status = RtlStringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCchPrintfExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            ...)
{
    NTSTATUS status;
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                va_list argList;
                va_start(argList, pszFormat);
                status = RtlStringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCbPrintfExA(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            ...)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
    RtlStringCbPrintfExW(
            _Out_writes_bytes_(cbDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            ...)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCchVPrintfExA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                status = RtlStringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(char);
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(char);
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable: __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCchVPrintfExW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchNewDestLength = 0;
                status = RtlStringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCbVPrintfExA(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(char);
    status = RtlStringExValidateDestA(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcA(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringVPrintfWorkerA(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(char)) + (cbDest % sizeof(char));
                    RtlStringExHandleFillBehindNullA(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsA(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
NTSTRSAFEDDI
    RtlStringCbVPrintfExW(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringExValidateDestW(pszDest, cchDest, NTSTRSAFE_MAX_CCH, dwFlags);
    if (NT_SUCCESS(status))
    {
        NTSTRSAFE_PWSTR pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlStringExValidateSrcW(&pszFormat, NULL, NTSTRSAFE_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
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
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
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
                status = RtlStringVPrintfWorkerW(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable:__WARNING_POTENTIAL_RANGE_POSTCONDITION_VIOLATION)
_Must_inspect_result_
NTSTRSAFEDDI
    RtlStringCchLengthA(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZCH psz,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    NTSTATUS status;
    if ((psz == NULL) || (cchMax > NTSTRSAFE_MAX_CCH))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else
    {
        status = RtlStringLengthWorkerA(psz, cchMax, pcchLength);
    }
    if (!NT_SUCCESS(status) && pcchLength)
    {
        *pcchLength = 0;
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable:__WARNING_POTENTIAL_RANGE_POSTCONDITION_VIOLATION)
_Must_inspect_result_
NTSTRSAFEDDI
    RtlStringCchLengthW(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZWCH psz,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    NTSTATUS status;
    if ((psz == NULL) || (cchMax > NTSTRSAFE_MAX_CCH))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else
    {
        status = RtlStringLengthWorkerW(psz, cchMax, pcchLength);
    }
    if (!NT_SUCCESS(status) && pcchLength)
    {
        *pcchLength = 0;
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
NTSTRSAFEDDI
    RtlStringCbLengthA(
            _In_reads_or_z_(cbMax) STRSAFE_PCNZCH psz,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH * sizeof(char)) size_t cbMax,
            _Out_opt_ _Deref_out_range_(<, cbMax) size_t* pcbLength)
{
    NTSTATUS status;
    size_t cchMax = cbMax / sizeof(char);
    size_t cchLength = 0;
    if ((psz == NULL) || (cchMax > NTSTRSAFE_MAX_CCH))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else
    {
        status = RtlStringLengthWorkerA(psz, cchMax, &cchLength);
    }
    if (pcbLength)
    {
        if (NT_SUCCESS(status))
        {
            *pcbLength = cchLength * sizeof(char);
        }
        else
        {
            *pcbLength = 0;
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
NTSTRSAFEDDI
    RtlStringCbLengthW(
            _In_reads_or_z_(cbMax / sizeof(wchar_t)) STRSAFE_PCNZWCH psz,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH * sizeof(wchar_t)) size_t cbMax,
            _Out_opt_ _Deref_out_range_(<, cbMax - 1) size_t* pcbLength)
{
    NTSTATUS status;
    size_t cchMax = cbMax / sizeof(wchar_t);
    size_t cchLength = 0;
    if ((psz == NULL) || (cchMax > NTSTRSAFE_MAX_CCH))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else
    {
        status = RtlStringLengthWorkerW(psz, cchMax, &cchLength);
    }
    if (pcbLength)
    {
        if (NT_SUCCESS(status))
        {
            *pcbLength = cchLength * sizeof(wchar_t);
        }
        else
        {
            *pcbLength = 0;
        }
    }
    return status;
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
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
#pragma warning(disable : __WARNING_HIGH_PRIORITY_OVERFLOW_POSTCONDITION)
_At_(DestinationString->Buffer, _Post_equal_to_(pszSrc))
_At_(DestinationString->Length, _Post_equal_to_(_String_length_(pszSrc) * sizeof(WCHAR)))
_At_(DestinationString->MaximumLength, _Post_equal_to_((_String_length_(pszSrc)+1) * sizeof(WCHAR)))
NTSTRSAFEDDI
RtlUnicodeStringInit(
        _Out_ PUNICODE_STRING DestinationString,
        _In_opt_ NTSTRSAFE_PCWSTR pszSrc)
{
    return RtlUnicodeStringInitWorker(DestinationString,
            pszSrc,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
}
_At_(DestinationString->Buffer, _Post_equal_to_(pszSrc))
_At_(DestinationString->Length, _Post_equal_to_(_String_length_(pszSrc) * sizeof(WCHAR)))
_At_(DestinationString->MaximumLength, _Post_equal_to_((_String_length_(pszSrc)+1) * sizeof(WCHAR)))
NTSTRSAFEDDI
RtlUnicodeStringInitEx(
        _Out_ PUNICODE_STRING DestinationString,
        _In_opt_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else
    {
        status = RtlUnicodeStringInitWorker(DestinationString,
                pszSrc,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
    }
    if (!NT_SUCCESS(status) && DestinationString)
    {
        DestinationString->Length = 0;
        DestinationString->MaximumLength = 0;
        DestinationString->Buffer = NULL;
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringValidate(
        _In_ PCUNICODE_STRING SourceString)
{
    return RtlUnicodeStringValidateWorker(SourceString, NTSTRSAFE_UNICODE_STRING_MAX_CCH, 0);
}
NTSTRSAFEDDI
RtlUnicodeStringValidateEx(
        _In_ PCUNICODE_STRING SourceString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else
    {
        status = RtlUnicodeStringValidateWorker(SourceString, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
    }
    return status;
}
NTSTRSAFEDDI
    RtlStringCchCopyUnicodeString(
            _Out_writes_(cchDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ PCUNICODE_STRING SourceString)
{
    NTSTATUS status;
    status = RtlStringValidateDestW(pszDest,
            cchDest,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            status = RtlStringCopyWideCharArrayWorker(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchSrcLength);
        }
        else
        {
            *pszDest = L'\0';
        }
    }
    return status;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY)
NTSTRSAFEDDI
    RtlStringCbCopyUnicodeString(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ PCUNICODE_STRING SourceString)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringValidateDestW(pszDest,
            cchDest,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            status = RtlStringCopyWideCharArrayWorker(pszDest,
                    cchDest,
                    NULL,
                    pszSrc,
                    cchSrcLength);
        }
        else
        {
            *pszDest = L'\0';
        }
    }
    return status;
}
#pragma warning(pop)
NTSTRSAFEDDI
    RtlStringCchCopyUnicodeStringEx(
            _Out_writes_(cchDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _In_ PCUNICODE_STRING SourceString,
            _Outptr_opt_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    status = RtlStringExValidateDestW(pszDest,
            cchDest,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (cchSrcLength != 0)
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWideCharArrayWorker(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchSrcLength);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND_NULL) &&
                        (cchRemaining > 1))
                {
                    size_t cbRemaining;
                    cbRemaining = cchRemaining * sizeof(wchar_t);
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cchDest != 0))
        {
            size_t cbDest;
            cbDest = cchDest * sizeof(wchar_t);
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
NTSTRSAFEDDI
    RtlStringCbCopyUnicodeStringEx(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cbDest,
            _In_ PCUNICODE_STRING SourceString,
            _Outptr_opt_result_bytebuffer_(*pcbRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
            _Out_opt_ size_t* pcbRemaining,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    size_t cchDest = cbDest / sizeof(wchar_t);
    status = RtlStringExValidateDestW(pszDest,
            cchDest,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
                if (cchDest != 0)
                {
                    *pszDest = L'\0';
                }
            }
            else if (cchDest == 0)
            {
                if (cchSrcLength != 0)
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlStringCopyWideCharArrayWorker(pszDest,
                        cchDest,
                        &cchCopied,
                        pszSrc,
                        cchSrcLength);
                pszDestEnd = pszDest + cchCopied;
                cchRemaining = cchDest - cchCopied;
                if (NT_SUCCESS(status) && (dwFlags & STRSAFE_FILL_BEHIND_NULL))
                {
                    size_t cbRemaining;
                    cbRemaining = (cchRemaining * sizeof(wchar_t)) + (cbDest % sizeof(wchar_t));
                    RtlStringExHandleFillBehindNullW(pszDestEnd, cbRemaining, dwFlags);
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
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_NULL_ON_FAILURE)) &&
                (cbDest != 0))
        {
            RtlStringExHandleOtherFlagsW(pszDest,
                    cbDest,
                    0,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
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
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCopyString(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        size_t cchNewDestLength = 0;
        status = RtlWideCharArrayCopyStringWorker(pszDest,
                cchDest,
                &cchNewDestLength,
                pszSrc,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH);
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCopy(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        size_t cchNewDestLength = 0;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            status = RtlWideCharArrayCopyWorker(pszDest,
                    cchDest,
                    &cchNewDestLength,
                    pszSrc,
                    cchSrcLength);
        }
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCopyStringEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlStringExValidateSrcW(&pszSrc, NULL, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchDest == 0)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                status = RtlWideCharArrayCopyStringWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszSrc,
                        NTSTRSAFE_UNICODE_STRING_MAX_CCH);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCopyEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchDest == 0)
            {
                if (cchSrcLength != 0)
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                status = RtlWideCharArrayCopyWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszSrc,
                        cchSrcLength);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCopyStringN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cchToCopy)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        size_t cchNewDestLength = 0;
        if (cchToCopy > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            status = RtlWideCharArrayCopyStringWorker(pszDest,
                    cchDest,
                    &cchNewDestLength,
                    pszSrc,
                    cchToCopy);
        }
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCopyStringN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cbToCopy)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        size_t cchNewDestLength = 0;
        size_t cchToCopy = cbToCopy / sizeof(wchar_t);
        if (cchToCopy > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            status = RtlWideCharArrayCopyStringWorker(pszDest,
                    cchDest,
                    &cchNewDestLength,
                    pszSrc,
                    cchToCopy);
        }
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCopyN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cchToCopy)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        size_t cchNewDestLength = 0;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            if (cchToCopy > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                if (cchSrcLength < cchToCopy)
                {
                    cchToCopy = cchSrcLength;
                }
                status = RtlWideCharArrayCopyWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszSrc,
                        cchToCopy);
            }
        }
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCopyN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cbToCopy)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        size_t cchNewDestLength = 0;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            size_t cchToCopy = cbToCopy / sizeof(wchar_t);
            if (cchToCopy > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                if (cchSrcLength < cchToCopy)
                {
                    cchToCopy = cchSrcLength;
                }
                status = RtlWideCharArrayCopyWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszSrc,
                        cchToCopy);
            }
        }
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCopyStringNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cchToCopy,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlStringExValidateSrcW(&pszSrc, &cchToCopy, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchDest == 0)
            {
                if ((cchToCopy != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                status = RtlWideCharArrayCopyStringWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCopyStringNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cbToCopy,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        size_t cchToCopy = cbToCopy / sizeof(wchar_t);
        status = RtlStringExValidateSrcW(&pszSrc, &cchToCopy, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchDest == 0)
            {
                if ((cchToCopy != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                status = RtlWideCharArrayCopyStringWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszSrc,
                        cchToCopy);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCopyNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cchToCopy,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            if (cchToCopy > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                if (cchSrcLength < cchToCopy)
                {
                    cchToCopy = cchSrcLength;
                }
                if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
                {
                    status = STATUS_INVALID_PARAMETER;
                }
                else if (cchDest == 0)
                {
                    if (cchToCopy != 0)
                    {
                        if (pszDest == NULL)
                        {
                            status = STATUS_INVALID_PARAMETER;
                        }
                        else
                        {
                            status = STATUS_BUFFER_OVERFLOW;
                        }
                    }
                }
                else
                {
                    status = RtlWideCharArrayCopyWorker(pszDest,
                            cchDest,
                            &cchNewDestLength,
                            pszSrc,
                            cchToCopy);
                    pszDestEnd = pszDest + cchNewDestLength;
                    cchRemaining = cchDest - cchNewDestLength;
                    if (NT_SUCCESS(status) &&
                            (dwFlags & STRSAFE_FILL_BEHIND) &&
                            (cchRemaining != 0))
                    {
                        RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                    }
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCopyNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cbToCopy,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            size_t cchToCopy = cbToCopy / sizeof(wchar_t);
            if (cchToCopy > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                if (cchSrcLength < cchToCopy)
                {
                    cchToCopy = cchSrcLength;
                }
                if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
                {
                    status = STATUS_INVALID_PARAMETER;
                }
                else if (cchDest == 0)
                {
                    if (cchToCopy != 0)
                    {
                        if (pszDest == NULL)
                        {
                            status = STATUS_INVALID_PARAMETER;
                        }
                        else
                        {
                            status = STATUS_BUFFER_OVERFLOW;
                        }
                    }
                }
                else
                {
                    status = RtlWideCharArrayCopyWorker(pszDest,
                            cchDest,
                            &cchNewDestLength,
                            pszSrc,
                            cchToCopy);
                    pszDestEnd = pszDest + cchNewDestLength;
                    cchRemaining = cchDest - cchNewDestLength;
                    if (NT_SUCCESS(status) &&
                            (dwFlags & STRSAFE_FILL_BEHIND) &&
                            (cchRemaining != 0))
                    {
                        RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                    }
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCatString(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        size_t cchCopied = 0;
        status = RtlWideCharArrayCopyStringWorker(pszDest + cchDestLength,
                cchDest - cchDestLength,
                &cchCopied,
                pszSrc,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH);
        DestinationString->Length = (USHORT)((cchDestLength + cchCopied) * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCat(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            size_t cchCopied = 0;
            status = RtlWideCharArrayCopyWorker(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    &cchCopied,
                    pszSrc,
                    cchSrcLength);
            DestinationString->Length = (USHORT)((cchDestLength + cchCopied) * sizeof(wchar_t));
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCatStringEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchNewDestLength = cchDestLength;
        status = RtlStringExValidateSrcW(&pszSrc, NULL, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining == 0)
            {
                if (*pszSrc != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlWideCharArrayCopyStringWorker(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        NTSTRSAFE_UNICODE_STRING_MAX_CCH);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                cchNewDestLength = cchDestLength + cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    cchDestLength,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCatEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchNewDestLength = cchDestLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining == 0)
            {
                if (cchSrcLength != 0)
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlWideCharArrayCopyWorker(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchSrcLength);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                cchNewDestLength = cchDestLength + cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    cchDestLength,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCatStringN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cchToAppend)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        if (cchToAppend > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            size_t cchCopied = 0;
            status = RtlWideCharArrayCopyStringWorker(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    &cchCopied,
                    pszSrc,
                    cchToAppend);
            DestinationString->Length = (USHORT)((cchDestLength + cchCopied) * sizeof(wchar_t));
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCatStringN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cbToAppend)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        size_t cchToAppend = cbToAppend / sizeof(wchar_t);
        if (cchToAppend > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else
        {
            size_t cchCopied = 0;
            status = RtlWideCharArrayCopyStringWorker(pszDest + cchDestLength,
                    cchDest - cchDestLength,
                    &cchCopied,
                    pszSrc,
                    cchToAppend);
            DestinationString->Length = (USHORT)((cchDestLength + cchCopied) * sizeof(wchar_t));
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCatN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cchToAppend)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            if (cchToAppend > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                size_t cchCopied = 0;
                if (cchSrcLength < cchToAppend)
                {
                    cchToAppend = cchSrcLength;
                }
                status = RtlWideCharArrayCopyWorker(pszDest + cchDestLength,
                        cchDest - cchDestLength,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                DestinationString->Length = (USHORT)((cchDestLength + cchCopied) * sizeof(wchar_t));
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCatN(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cbToAppend)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                0);
        if (NT_SUCCESS(status))
        {
            size_t cchToAppend = cbToAppend / sizeof(wchar_t);
            if (cchToAppend > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                size_t cchCopied = 0;
                if (cchSrcLength < cchToAppend)
                {
                    cchToAppend = cchSrcLength;
                }
                status = RtlWideCharArrayCopyWorker(pszDest + cchDestLength,
                        cchDest - cchDestLength,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                DestinationString->Length = (USHORT)((cchDestLength + cchCopied) * sizeof(wchar_t));
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCchCatStringNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cchToAppend,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchNewDestLength = cchDestLength;
        status = RtlStringExValidateSrcW(&pszSrc, &cchToAppend, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining == 0)
            {
                if ((cchToAppend != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlWideCharArrayCopyStringWorker(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                cchNewDestLength = cchDestLength + cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    cchDestLength,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringCbCatStringNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ NTSTRSAFE_PCWSTR pszSrc,
        _In_ size_t cbToAppend,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchNewDestLength = cchDestLength;
        size_t cchToAppend = cbToAppend / sizeof(wchar_t);
        status = RtlStringExValidateSrcW(&pszSrc, &cchToAppend, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchRemaining == 0)
            {
                if ((cchToAppend != 0) && (*pszSrc != L'\0'))
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                size_t cchCopied = 0;
                status = RtlWideCharArrayCopyStringWorker(pszDestEnd,
                        cchRemaining,
                        &cchCopied,
                        pszSrc,
                        cchToAppend);
                pszDestEnd = pszDestEnd + cchCopied;
                cchRemaining = cchRemaining - cchCopied;
                cchNewDestLength = cchDestLength + cchCopied;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    cchDestLength,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_PRECONDITION_NULLTERMINATION_VIOLATION)
NTSTRSAFEDDI
RtlUnicodeStringCchCatNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cchToAppend,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchNewDestLength = cchDestLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            if (cchToAppend > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                if (cchSrcLength < cchToAppend)
                {
                    cchToAppend = cchSrcLength;
                }
                if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
                {
                    status = STATUS_INVALID_PARAMETER;
                }
                else if (cchRemaining == 0)
                {
                    if (cchToAppend != 0)
                    {
                        if (pszDest == NULL)
                        {
                            status = STATUS_INVALID_PARAMETER;
                        }
                        else
                        {
                            status = STATUS_BUFFER_OVERFLOW;
                        }
                    }
                }
                else
                {
                    size_t cchCopied = 0;
                    status = RtlWideCharArrayCopyStringWorker(pszDestEnd,
                            cchRemaining,
                            &cchCopied,
                            pszSrc,
                            cchToAppend);
                    pszDestEnd = pszDestEnd + cchCopied;
                    cchRemaining = cchRemaining - cchCopied;
                    cchNewDestLength = cchDestLength + cchCopied;
                    if (NT_SUCCESS(status) &&
                            (dwFlags & STRSAFE_FILL_BEHIND) &&
                            (cchRemaining != 0))
                    {
                        RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                    }
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    cchDestLength,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
#pragma warning(pop)
NTSTRSAFEDDI
RtlUnicodeStringCbCatNEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ PCUNICODE_STRING SourceString,
        _In_ size_t cbToAppend,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    size_t cchDestLength;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            &cchDestLength,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszSrc;
        size_t cchSrcLength;
        wchar_t* pszDestEnd = pszDest + cchDestLength;
        size_t cchRemaining = cchDest - cchDestLength;
        size_t cchNewDestLength = cchDestLength;
        status = RtlUnicodeStringValidateSrcWorker(SourceString,
                &pszSrc,
                &cchSrcLength,
                NTSTRSAFE_UNICODE_STRING_MAX_CCH,
                dwFlags);
        if (NT_SUCCESS(status))
        {
            size_t cchToAppend = cbToAppend / sizeof(wchar_t);
            if (cchToAppend > NTSTRSAFE_UNICODE_STRING_MAX_CCH)
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else
            {
                if (cchSrcLength < cchToAppend)
                {
                    cchToAppend = cchSrcLength;
                }
                if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
                {
                    status = STATUS_INVALID_PARAMETER;
                }
                else if (cchRemaining == 0)
                {
                    if (cchToAppend != 0)
                    {
                        if (pszDest == NULL)
                        {
                            status = STATUS_INVALID_PARAMETER;
                        }
                        else
                        {
                            status = STATUS_BUFFER_OVERFLOW;
                        }
                    }
                }
                else
                {
                    size_t cchCopied = 0;
                    status = RtlWideCharArrayCopyWorker(pszDestEnd,
                            cchRemaining,
                            &cchCopied,
                            pszSrc,
                            cchToAppend);
                    pszDestEnd = pszDestEnd + cchCopied;
                    cchRemaining = cchRemaining - cchCopied;
                    cchNewDestLength = cchDestLength + cchCopied;
                    if (NT_SUCCESS(status) &&
                            (dwFlags & STRSAFE_FILL_BEHIND) &&
                            (cchRemaining != 0))
                    {
                        RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                    }
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    cchDestLength,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringVPrintf(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
        _In_ va_list argList)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        size_t cchNewDestLength = 0;
        status = RtlWideCharArrayVPrintfWorker(pszDest,
                cchDest,
                &cchNewDestLength,
                pszFormat,
                argList);
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringVPrintfEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags,
        _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
        _In_ va_list argList)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlStringExValidateSrcW(&pszFormat, NULL, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                status = RtlWideCharArrayVPrintfWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringPrintf(
        _Inout_ PUNICODE_STRING DestinationString,
        _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            0);
    if (NT_SUCCESS(status))
    {
        va_list argList;
        size_t cchNewDestLength = 0;
        va_start(argList, pszFormat);
        status = RtlWideCharArrayVPrintfWorker(pszDest,
                cchDest,
                &cchNewDestLength,
                pszFormat,
                argList);
        va_end(argList);
        DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
    }
    return status;
}
NTSTRSAFEDDI
RtlUnicodeStringPrintfEx(
        _Inout_ PUNICODE_STRING DestinationString,
        _Out_opt_ PUNICODE_STRING RemainingString,
        _In_ DWORD dwFlags,
        _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
    NTSTATUS status;
    wchar_t* pszDest;
    size_t cchDest;
    status = RtlUnicodeStringValidateDestWorker(DestinationString,
            &pszDest,
            &cchDest,
            NULL,
            NTSTRSAFE_UNICODE_STRING_MAX_CCH,
            dwFlags);
    if (NT_SUCCESS(status))
    {
        wchar_t* pszDestEnd = pszDest;
        size_t cchRemaining = cchDest;
        size_t cchNewDestLength = 0;
        status = RtlStringExValidateSrcW(&pszFormat, NULL, NTSTRSAFE_UNICODE_STRING_MAX_CCH, dwFlags);
        if (NT_SUCCESS(status))
        {
            if (dwFlags & (~STRSAFE_UNICODE_STRING_VALID_FLAGS))
            {
                status = STATUS_INVALID_PARAMETER;
            }
            else if (cchDest == 0)
            {
                if (*pszFormat != L'\0')
                {
                    if (pszDest == NULL)
                    {
                        status = STATUS_INVALID_PARAMETER;
                    }
                    else
                    {
                        status = STATUS_BUFFER_OVERFLOW;
                    }
                }
            }
            else
            {
                va_list argList;
                va_start(argList, pszFormat);
                status = RtlWideCharArrayVPrintfWorker(pszDest,
                        cchDest,
                        &cchNewDestLength,
                        pszFormat,
                        argList);
                va_end(argList);
                pszDestEnd = pszDest + cchNewDestLength;
                cchRemaining = cchDest - cchNewDestLength;
                if (NT_SUCCESS(status) &&
                        (dwFlags & STRSAFE_FILL_BEHIND) &&
                        (cchRemaining != 0))
                {
                    RtlUnicodeStringExHandleFill(pszDestEnd, cchRemaining, dwFlags);
                }
            }
        }
        if (!NT_SUCCESS(status) &&
                (dwFlags & (STRSAFE_NO_TRUNCATION | STRSAFE_FILL_ON_FAILURE | STRSAFE_ZERO_LENGTH_ON_FAILURE)) &&
                (cchDest != 0))
        {
            RtlUnicodeStringExHandleOtherFlags(pszDest,
                    cchDest,
                    0,
                    &cchNewDestLength,
                    &pszDestEnd,
                    &cchRemaining,
                    dwFlags);
        }
        if (DestinationString)
        {
            DestinationString->Length = (USHORT)(cchNewDestLength * sizeof(wchar_t));
        }
        if (NT_SUCCESS(status) || (status == STATUS_BUFFER_OVERFLOW))
        {
            if (RemainingString)
            {
                RemainingString->Length = 0;
                RemainingString->MaximumLength = (USHORT)(cchRemaining * sizeof(wchar_t));
                RemainingString->Buffer = pszDestEnd;
            }
        }
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable:__WARNING_RETURNING_BAD_RESULT)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringLengthWorkerA(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZCH psz,
            _In_ _In_range_(<=, NTSTRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    NTSTATUS status = STATUS_SUCCESS;
    size_t cchOriginalMax = cchMax;
    while (cchMax && (*psz != '\0'))
    {
        psz++;
        cchMax--;
    }
    if (cchMax == 0)
    {
        status = STATUS_INVALID_PARAMETER;
    }
    if (pcchLength)
    {
        if (NT_SUCCESS(status))
        {
            *pcchLength = cchOriginalMax - cchMax;
        }
        else
        {
            *pcchLength = 0;
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringLengthWorkerW(
            _In_reads_or_z_(cchMax) STRSAFE_PCNZWCH psz,
            _In_ _In_range_(<=, NTSTRSAFE_MAX_CCH) size_t cchMax,
            _Out_opt_ _Deref_out_range_(<, cchMax) _Deref_out_range_(<=, _String_length_(psz)) size_t* pcchLength)
{
    NTSTATUS status = STATUS_SUCCESS;
    size_t cchOriginalMax = cchMax;
    while (cchMax && (*psz != L'\0'))
    {
        psz++;
        cchMax--;
    }
    if (cchMax == 0)
    {
        status = STATUS_INVALID_PARAMETER;
    }
    if (pcchLength)
    {
        if (NT_SUCCESS(status))
        {
            *pcchLength = cchOriginalMax - cchMax;
        }
        else
        {
            *pcchLength = 0;
        }
    }
    return status;
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
    NTSTRSAFEWORKERDDI
    RtlStringExValidateSrcA(
            _Inout_ _Deref_post_notnull_ STRSAFE_PCNZCH* ppszSrc,
            _Inout_opt_
            _Deref_out_range_(<, cchMax)
            _Deref_out_range_(<=, _Old_(*pcchToRead)) size_t* pcchToRead,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status = STATUS_SUCCESS;
    if (pcchToRead && (*pcchToRead >= cchMax))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else if ((dwFlags & STRSAFE_IGNORE_NULLS) && (*ppszSrc == NULL))
    {
        *ppszSrc = "";
        if (pcchToRead)
        {
            *pcchToRead = 0;
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
    _When_(_Old_(*ppszSrc) != NULL, _Unchanged_(*ppszSrc))
_When_(_Old_(*ppszSrc) == NULL, _At_(*ppszSrc, _Post_z_))
    NTSTRSAFEWORKERDDI
    RtlStringExValidateSrcW(
            _Inout_ _Deref_post_notnull_ STRSAFE_PCNZWCH* ppszSrc,
            _Inout_opt_
            _Deref_out_range_(<, cchMax)
            _Deref_out_range_(<=, _Old_(*pcchToRead)) size_t* pcchToRead,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status = STATUS_SUCCESS;
    if (pcchToRead && (*pcchToRead >= cchMax))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    else if ((dwFlags & STRSAFE_IGNORE_NULLS) && (*ppszSrc == NULL))
    {
        *ppszSrc = L"";
        if (pcchToRead)
        {
            *pcchToRead = 0;
        }
    }
    return status;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : 4100)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    NTSTRSAFEWORKERDDI
    RtlStringValidateDestA(
            _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax)
{
    NTSTATUS status = STATUS_SUCCESS;
    if ((cchDest == 0) || (cchDest > cchMax))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    return status;
}
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
#pragma warning(disable : __WARNING_RANGE_POSTCONDITION_VIOLATION)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    NTSTRSAFEWORKERDDI
    RtlStringValidateDestAndLengthA(
            _In_reads_opt_(cchDest) NTSTRSAFE_PCSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
            _In_ const size_t cchMax)
{
    NTSTATUS status;
    status = RtlStringValidateDestA(pszDest, cchDest, cchMax);
    if (NT_SUCCESS(status))
    {
        status = RtlStringLengthWorkerA(pszDest, cchDest, pcchDestLength);
    }
    else
    {
        *pcchDestLength = 0;
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : 4100)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    NTSTRSAFEWORKERDDI
    RtlStringValidateDestW(
            _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax)
{
    NTSTATUS status = STATUS_SUCCESS;
    if ((cchDest == 0) || (cchDest > cchMax))
    {
        status = STATUS_INVALID_PARAMETER;
    }
    return status;
}
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
#pragma warning(disable : __WARNING_RANGE_POSTCONDITION_VIOLATION)
_Post_satisfies_(cchDest > 0 && cchDest <= cchMax)
    NTSTRSAFEWORKERDDI
    RtlStringValidateDestAndLengthW(
            _In_reads_opt_(cchDest) NTSTRSAFE_PCWSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, cchDest - 1) size_t* pcchDestLength,
            _In_ const size_t cchMax)
{
    NTSTATUS status;
    status = RtlStringValidateDestW(pszDest, cchDest, cchMax);
    if (NT_SUCCESS(status))
    {
        status = RtlStringLengthWorkerW(pszDest, cchDest, pcchDestLength);
    }
    else
    {
        *pcchDestLength = 0;
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringExValidateDestA(
            _In_reads_opt_(cchDest) STRSAFE_PCNZCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status = STATUS_SUCCESS;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        if (((pszDest == NULL) && (cchDest != 0)) ||
                (cchDest > cchMax))
        {
            status = STATUS_INVALID_PARAMETER;
        }
    }
    else
    {
        status = RtlStringValidateDestA(pszDest, cchDest, cchMax);
    }
    return status;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
NTSTRSAFEWORKERDDI
    RtlStringExValidateDestAndLengthA(
            _In_reads_opt_(cchDest) NTSTRSAFE_PCSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        status = RtlStringExValidateDestA(pszDest, cchDest, cchMax, dwFlags);
        if (!NT_SUCCESS(status) || (cchDest == 0))
        {
            *pcchDestLength = 0;
        }
        else
        {
            status = RtlStringLengthWorkerA(pszDest, cchDest, pcchDestLength);
        }
    }
    else
    {
        status = RtlStringValidateDestAndLengthA(pszDest,
                cchDest,
                pcchDestLength,
                cchMax);
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringExValidateDestW(
            _In_reads_opt_(cchDest) STRSAFE_PCNZWCH pszDest,
            _In_ size_t cchDest,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status = STATUS_SUCCESS;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        if (((pszDest == NULL) && (cchDest != 0)) ||
                (cchDest > cchMax))
        {
            status = STATUS_INVALID_PARAMETER;
        }
    }
    else
    {
        status = RtlStringValidateDestW(pszDest, cchDest, cchMax);
    }
    return status;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
NTSTRSAFEWORKERDDI
    RtlStringExValidateDestAndLengthW(
            _In_reads_opt_(cchDest) NTSTRSAFE_PCWSTR pszDest,
            _In_ size_t cchDest,
            _Out_ _Deref_out_range_(0, (cchDest>0?cchDest-1:0)) size_t* pcchDestLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    if (dwFlags & STRSAFE_IGNORE_NULLS)
    {
        status = RtlStringExValidateDestW(pszDest, cchDest, cchMax, dwFlags);
        if (!NT_SUCCESS(status) || (cchDest == 0))
        {
            *pcchDestLength = 0;
        }
        else
        {
            status = RtlStringLengthWorkerW(pszDest, cchDest, pcchDestLength);
        }
    }
    else
    {
        status = RtlStringValidateDestAndLengthW(pszDest,
                cchDest,
                pcchDestLength,
                cchMax);
    }
    return status;
}
#pragma warning(pop)
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable:__WARNING_RETURNING_BAD_RESULT)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringCopyWorkerA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZCH pszSrc,
            _In_ _In_range_(<, NTSTRSAFE_MAX_CCH) size_t cchToCopy)
{
    NTSTATUS status = STATUS_SUCCESS;
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
        status = STATUS_BUFFER_OVERFLOW;
    }
    *pszDest = '\0';
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringCopyWorkerW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, (cchToCopy < cchDest) ? cchToCopy : (cchDest - 1))) size_t* pcchNewDestLength,
            _In_reads_or_z_(cchToCopy) STRSAFE_PCNZWCH pszSrc,
            _In_ _In_range_(<, NTSTRSAFE_MAX_CCH) size_t cchToCopy)
{
    NTSTATUS status = STATUS_SUCCESS;
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
        status = STATUS_BUFFER_OVERFLOW;
    }
    *pszDest = L'\0';
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return status;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringVPrintfWorkerA(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
            _In_ _Printf_format_string_ NTSTRSAFE_PCSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status = STATUS_SUCCESS;
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
        status = STATUS_BUFFER_OVERFLOW;
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
    return status;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringVPrintfWorkerW(
            _Out_writes_(cchDest) _Always_(_Post_z_) NTSTRSAFE_PWSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH) size_t cchDest,
            _Always_(_Out_opt_ _Deref_out_range_(<=, cchDest - 1)) size_t* pcchNewDestLength,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status = STATUS_SUCCESS;
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
        status = STATUS_BUFFER_OVERFLOW;
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
    return status;
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringExHandleFillBehindNullA(
            _Inout_updates_bytes_(cbRemaining) NTSTRSAFE_PSTR pszDestEnd,
            _In_ size_t cbRemaining,
            _In_ DWORD dwFlags)
{
    if (cbRemaining > sizeof(char))
    {
        memset(pszDestEnd + 1, STRSAFE_GET_FILL_PATTERN(dwFlags), cbRemaining - sizeof(char));
    }
    return STATUS_SUCCESS;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTRSAFEWORKERDDI
    RtlStringExHandleFillBehindNullW(
            _Inout_updates_bytes_(cbRemaining) NTSTRSAFE_PWSTR pszDestEnd,
            _In_ size_t cbRemaining,
            _In_ DWORD dwFlags)
{
    if (cbRemaining > sizeof(wchar_t))
    {
        memset(pszDestEnd + 1, STRSAFE_GET_FILL_PATTERN(dwFlags), cbRemaining - sizeof(wchar_t));
    }
    return STATUS_SUCCESS;
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
    NTSTRSAFEWORKERDDI
    RtlStringExHandleOtherFlagsA(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH * sizeof(char)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(char)?(cbDest / sizeof(char)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) NTSTRSAFE_PSTR* ppszDestEnd,
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
    return STATUS_SUCCESS;
}
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(1)
    NTSTRSAFEWORKERDDI
    RtlStringExHandleOtherFlagsW(
            _Out_writes_bytes_(cbDest) NTSTRSAFE_PWSTR pszDest,
            _In_ _In_range_(1, NTSTRSAFE_MAX_CCH * sizeof(wchar_t)) size_t cbDest,
            _In_ _In_range_(0, cbDest>sizeof(wchar_t)?(cbDest / sizeof(wchar_t)) - 1:0) size_t cchOriginalDestLength,
            _Outptr_result_buffer_(*pcchRemaining) NTSTRSAFE_PWSTR* ppszDestEnd,
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
    return STATUS_SUCCESS;
}
#endif
#pragma endregion
#pragma warning(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(push)
#pragma warning(disable : __WARNING_INCORRECT_ANNOTATION)
#pragma warning(disable : __WARNING_HIGH_PRIORITY_OVERFLOW_POSTCONDITION)
_Use_decl_annotations_
NTSTRSAFEWORKERDDI
RtlUnicodeStringInitWorker(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        const size_t cchMax,
        DWORD dwFlags)
{
    NTSTATUS status = STATUS_SUCCESS;
    if (DestinationString || !(dwFlags & STRSAFE_IGNORE_NULLS))
    {
        memset(DestinationString, 0, sizeof(*DestinationString));
    }
    if (pszSrc)
    {
        size_t cchSrcLength;
        status = RtlStringLengthWorkerW(pszSrc, cchMax, &cchSrcLength);
        if (NT_SUCCESS(status))
        {
            if (DestinationString)
            {
                size_t cbLength;
                cbLength = cchSrcLength * sizeof(wchar_t);
                DestinationString->Length = (USHORT)cbLength;
                DestinationString->MaximumLength = (USHORT)(cbLength + sizeof(wchar_t));
                DestinationString->Buffer = (PWSTR)pszSrc;
            }
            else
            {
                status = STATUS_INVALID_PARAMETER;
            }
        }
    }
    return status;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_DEREF_NULL_PTR)
#pragma warning(disable : __WARNING_INVALID_PARAM_VALUE_1)
#pragma warning(disable : __WARNING_RETURNING_BAD_RESULT)
NTSTRSAFEWORKERDDI
RtlUnicodeStringValidateWorker(
        _In_opt_ PCUNICODE_STRING SourceString,
        _In_ const size_t cchMax,
        _In_ DWORD dwFlags)
{
    NTSTATUS status = STATUS_SUCCESS;
    if (SourceString || !(dwFlags & STRSAFE_IGNORE_NULLS))
    {
        if (((SourceString->Length % sizeof(wchar_t)) != 0) ||
                ((SourceString->MaximumLength % sizeof(wchar_t)) != 0) ||
                (SourceString->Length > SourceString->MaximumLength) ||
                (SourceString->MaximumLength > (cchMax * sizeof(wchar_t))))
        {
            status = STATUS_INVALID_PARAMETER;
        }
        else if ((SourceString->Buffer == NULL) &&
                ((SourceString->Length != 0) || (SourceString->MaximumLength != 0)))
        {
            status = STATUS_INVALID_PARAMETER;
        }
    }
    return status;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_RANGE_POSTCONDITION_VIOLATION)
_Post_satisfies_(*pcchSrcLength*sizeof(wchar_t) == SourceString->MaximumLength)
    NTSTRSAFEWORKERDDI
    RtlUnicodeStringValidateSrcWorker(
            _In_ PCUNICODE_STRING SourceString,
            _Outptr_result_buffer_(*pcchSrcLength) wchar_t** ppszSrc,
            _Out_ size_t* pcchSrcLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    *ppszSrc = NULL;
    *pcchSrcLength = 0;
    status = RtlUnicodeStringValidateWorker(SourceString, cchMax, dwFlags);
    if (NT_SUCCESS(status))
    {
        if (SourceString)
        {
            *ppszSrc = SourceString->Buffer;
            *pcchSrcLength = SourceString->Length / sizeof(wchar_t);
        }
        if ((*ppszSrc == NULL) && (dwFlags & STRSAFE_IGNORE_NULLS))
        {
            *ppszSrc = (wchar_t*)L"";
        }
    }
    return status;
}
#pragma warning(pop)
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : __WARNING_RANGE_POSTCONDITION_VIOLATION)
_Post_satisfies_(*pcchDest*sizeof(wchar_t) == DestinationString->MaximumLength)
    NTSTRSAFEWORKERDDI
    RtlUnicodeStringValidateDestWorker(
            _In_ PCUNICODE_STRING DestinationString,
            _Outptr_result_buffer_(*pcchDest) wchar_t** ppszDest,
            _Out_ size_t* pcchDest,
            _Out_opt_ size_t* pcchDestLength,
            _In_ const size_t cchMax,
            _In_ DWORD dwFlags)
{
    NTSTATUS status;
    *ppszDest = NULL;
    *pcchDest = 0;
    if (pcchDestLength)
    {
        *pcchDestLength = 0;
    }
    status = RtlUnicodeStringValidateWorker(DestinationString, cchMax, dwFlags);
    if (NT_SUCCESS(status) && DestinationString)
    {
        *ppszDest = DestinationString->Buffer;
        *pcchDest = DestinationString->MaximumLength / sizeof(wchar_t);
        if (pcchDestLength)
        {
            *pcchDestLength = DestinationString->Length / sizeof(wchar_t);
        }
    }
    return status;
}
#pragma warning(pop)
NTSTRSAFEWORKERDDI
    RtlStringCopyWideCharArrayWorker(
            _Out_writes_(cchDest) NTSTRSAFE_PWSTR pszDest,
            _In_ size_t cchDest,
            _Out_opt_ size_t* pcchNewDestLength,
            _In_reads_(cchSrcLength) const wchar_t* pszSrc,
            _In_ size_t cchSrcLength)
{
    NTSTATUS status = STATUS_SUCCESS;
    size_t cchNewDestLength = 0;
    while (cchDest && cchSrcLength)
    {
        *pszDest++ = *pszSrc++;
        cchDest--;
        cchSrcLength--;
        cchNewDestLength++;
    }
    if (cchDest == 0)
    {
        pszDest--;
        cchNewDestLength--;
        status = STATUS_BUFFER_OVERFLOW;
    }
    *pszDest = L'\0';
    if (pcchNewDestLength)
    {
        *pcchNewDestLength = cchNewDestLength;
    }
    return status;
}
NTSTRSAFEWORKERDDI
    RtlWideCharArrayCopyStringWorker(
            _Out_writes_to_(cchDest, *pcchNewDestLength) wchar_t* pszDest,
            _In_ size_t cchDest,
            _Out_ size_t* pcchNewDestLength,
            _In_ NTSTRSAFE_PCWSTR pszSrc,
            _In_ size_t cchToCopy)
{
    NTSTATUS status = STATUS_SUCCESS;
    size_t cchNewDestLength = 0;
    while (cchDest && cchToCopy && (*pszSrc != L'\0'))
    {
        *pszDest++ = *pszSrc++;
        cchDest--;
        cchToCopy--;
        cchNewDestLength++;
    }
    if ((cchDest == 0) && (cchToCopy != 0) && (*pszSrc != L'\0'))
    {
        status = STATUS_BUFFER_OVERFLOW;
    }
    *pcchNewDestLength = cchNewDestLength;
    return status;
}
NTSTRSAFEWORKERDDI
    RtlWideCharArrayCopyWorker(
            _Out_writes_to_(cchDest, *pcchNewDestLength) wchar_t* pszDest,
            _In_ size_t cchDest,
            _Out_ size_t* pcchNewDestLength,
            _In_reads_(cchSrcLength) const wchar_t* pszSrc,
            _In_ size_t cchSrcLength)
{
    NTSTATUS status = STATUS_SUCCESS;
    size_t cchNewDestLength = 0;
    while (cchDest && cchSrcLength)
    {
        *pszDest++ = *pszSrc++;
        cchDest--;
        cchSrcLength--;
        cchNewDestLength++;
    }
    if ((cchDest == 0) && (cchSrcLength != 0))
    {
        status = STATUS_BUFFER_OVERFLOW;
    }
    *pcchNewDestLength = cchNewDestLength;
    return status;
}
NTSTRSAFEWORKERDDI
    RtlWideCharArrayVPrintfWorker(
            _Out_writes_to_(cchDest, *pcchNewDestLength) wchar_t* pszDest,
            _In_ size_t cchDest,
            _Out_ size_t* pcchNewDestLength,
            _In_ _Printf_format_string_ NTSTRSAFE_PCWSTR pszFormat,
            _In_ va_list argList)
{
    NTSTATUS status = STATUS_SUCCESS;
    int iRet;
#pragma warning(push)
#pragma warning(disable: __WARNING_BANNED_API_USAGE)
    iRet = _vsnwprintf(pszDest, cchDest, pszFormat, argList);
#pragma warning(pop)
    if ((iRet < 0) || (((size_t)iRet) > cchDest))
    {
        *pcchNewDestLength = cchDest;
        status = STATUS_BUFFER_OVERFLOW;
    }
    else
    {
        *pcchNewDestLength = (size_t)iRet;
    }
    return status;
}
NTSTRSAFEWORKERDDI
    RtlUnicodeStringExHandleFill(
            _Out_writes_(cchRemaining) wchar_t* pszDestEnd,
            _In_ size_t cchRemaining,
            _In_ DWORD dwFlags)
{
    size_t cbRemaining;
    cbRemaining = cchRemaining * sizeof(wchar_t);
    memset(pszDestEnd, STRSAFE_GET_FILL_PATTERN(dwFlags), cbRemaining);
    return STATUS_SUCCESS;
}
#pragma warning(push)
#pragma warning(disable : __WARNING_USING_UNINIT_VAR)
#pragma warning(disable : __WARNING_RETURN_UNINIT_VAR)
NTSTRSAFEWORKERDDI
    RtlUnicodeStringExHandleOtherFlags(
            _Inout_updates_(cchDest) wchar_t* pszDest,
            _In_ size_t cchDest,
            _In_ size_t cchOriginalDestLength,
            _Out_ size_t* pcchNewDestLength,
            _Outptr_result_buffer_(*pcchRemaining) wchar_t** ppszDestEnd,
            _Out_ size_t* pcchRemaining,
            _In_ DWORD dwFlags)
{
    if (dwFlags & STRSAFE_NO_TRUNCATION)
    {
        *ppszDestEnd = pszDest + cchOriginalDestLength;
        *pcchRemaining = cchDest - cchOriginalDestLength;
        *pcchNewDestLength = cchOriginalDestLength;
    }
    if (dwFlags & STRSAFE_FILL_ON_FAILURE)
    {
        size_t cbDest;
        cbDest = cchDest * sizeof(wchar_t);
        memset(pszDest, STRSAFE_GET_FILL_PATTERN(dwFlags), cbDest);
        *ppszDestEnd = pszDest;
        *pcchRemaining = cchDest;
        *pcchNewDestLength = 0;
    }
    if (dwFlags & STRSAFE_ZERO_LENGTH_ON_FAILURE)
    {
        *ppszDestEnd = pszDest;
        *pcchRemaining = cchDest;
        *pcchNewDestLength = 0;
    }
    return STATUS_SUCCESS;
}
#pragma warning(pop)
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma deprecated(RtlStringLengthWorkerA)
#pragma deprecated(RtlStringLengthWorkerW)
#pragma deprecated(RtlUnalignedStringLengthWorkerW)
#pragma deprecated(RtlStringExValidateSrcA)
#pragma deprecated(RtlStringExValidateSrcW)
#pragma deprecated(RtlStringValidateDestA)
#pragma deprecated(RtlStringValidateDestAndLengthA)
#pragma deprecated(RtlStringValidateDestW)
#pragma deprecated(RtlStringValidateDestAndLengthW)
#pragma deprecated(RtlStringExValidateDestA)
#pragma deprecated(RtlStringExValidateDestAndLengthA)
#pragma deprecated(RtlStringExValidateDestW)
#pragma deprecated(RtlStringExValidateDestAndLengthW)
#pragma deprecated(RtlStringCopyWorkerA)
#pragma deprecated(RtlStringCopyWorkerW)
#pragma deprecated(RtlStringVPrintfWorkerA)
#pragma deprecated(RtlStringVPrintfWorkerW)
#pragma deprecated(RtlStringExHandleFillBehindNullA)
#pragma deprecated(RtlStringExHandleFillBehindNullW)
#pragma deprecated(RtlStringExHandleOtherFlagsA)
#pragma deprecated(RtlStringExHandleOtherFlagsW)
#pragma deprecated(RtlUnicodeStringInitWorker)
#pragma deprecated(RtlUnicodeStringValidateWorker)
#pragma deprecated(RtlUnicodeStringValidateSrcWorker)
#pragma deprecated(RtlUnicodeStringValidateDestWorker)
#pragma deprecated(RtlStringCopyWideCharArrayWorker)
#pragma deprecated(RtlWideCharArrayCopyStringWorker)
#pragma deprecated(RtlWideCharArrayCopyWorker)
#pragma deprecated(RtlWideCharArrayVPrintfWorker)
#pragma deprecated(RtlUnicodeStringExHandleFill)
#pragma deprecated(RtlUnicodeStringExHandleOtherFlags)
#endif
#pragma endregion
#pragma warning(pop)
#pragma warning(pop)
