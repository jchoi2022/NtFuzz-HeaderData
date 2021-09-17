#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiset.h>
#include <apisetcconv.h>
#include <hstring.h>
#include <restrictedErrorInfo.h>
#include <rpc.h>
#include <sdkddkver.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum {
        RO_ERROR_REPORTING_NONE = 0x00000000,
        RO_ERROR_REPORTING_SUPPRESSEXCEPTIONS = 0x00000001,
        RO_ERROR_REPORTING_FORCEEXCEPTIONS = 0x00000002,
        RO_ERROR_REPORTING_USESETERRORINFO = 0x00000004,
        RO_ERROR_REPORTING_SUPPRESSSETERRORINFO = 0x00000008,
}RO_ERROR_REPORTING_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(RO_ERROR_REPORTING_FLAGS);
STDAPI
RoGetErrorReportingFlags(
    _Out_ UINT32* pflags
    );
STDAPI
RoSetErrorReportingFlags(
    _In_ UINT32 flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
STDAPI
RoResolveRestrictedErrorInfoReference(
    _In_ PCWSTR reference,
    _Outptr_ IRestrictedErrorInfo** ppRestrictedErrorInfo
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI
SetRestrictedErrorInfo(
    _In_ IRestrictedErrorInfo* pRestrictedErrorInfo
    );
STDAPI
GetRestrictedErrorInfo(
    _Outptr_result_maybenull_ IRestrictedErrorInfo** ppRestrictedErrorInfo
    );
STDAPI_(BOOL)
RoOriginateErrorW(
    _In_ HRESULT error,
    _In_ UINT cchMax,
    _When_(cchMax == 0, _In_reads_or_z_opt_(MAX_ERROR_MESSAGE_CHARS) )
             _When_(cchMax > 0 && cchMax < MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(cchMax) )
             _When_(cchMax >= MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(MAX_ERROR_MESSAGE_CHARS) ) PCWSTR message
    );
STDAPI_(BOOL)
RoOriginateError(
    _In_ HRESULT error,
    _In_opt_ HSTRING message
    );
STDAPI_(BOOL)
RoTransformErrorW(
    _In_ HRESULT oldError,
    _In_ HRESULT newError,
    _In_ UINT cchMax,
    _When_(cchMax == 0, _In_reads_or_z_opt_(MAX_ERROR_MESSAGE_CHARS))
             _When_(cchMax > 0 && cchMax < MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(cchMax) )
             _When_(cchMax >= MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(MAX_ERROR_MESSAGE_CHARS) ) PCWSTR message
    );
STDAPI_(BOOL)
RoTransformError(
    _In_ HRESULT oldError,
    _In_ HRESULT newError,
    _In_opt_ HSTRING message
    );
STDAPI
RoCaptureErrorContext(
    HRESULT hr
    );
STDAPI_(void)
RoFailFastWithErrorContext(
    HRESULT hrError
    );
namespace Windows
{
    namespace Foundation
    {
        namespace Diagnostics
        {
            typedef enum {
                None = RO_ERROR_REPORTING_NONE,
                SuppressExceptions = RO_ERROR_REPORTING_SUPPRESSEXCEPTIONS,
                ForceExceptions = RO_ERROR_REPORTING_FORCEEXCEPTIONS,
                UseSetErrorInfo = RO_ERROR_REPORTING_USESETERRORINFO,
                SuppressSetErrorInfo = RO_ERROR_REPORTING_SUPPRESSSETERRORINFO,
            } RoErrorReportingFlags;
            DEFINE_ENUM_FLAG_OPERATORS(RoErrorReportingFlags);
            inline HRESULT GetErrorReportingFlags(_Out_ UINT32 *pflags)
            {
                return ::RoGetErrorReportingFlags(pflags);
            }
            inline HRESULT SetErrorReportingFlags(_In_ UINT32 flags)
            {
                return ::RoSetErrorReportingFlags(flags);
            }
            inline BOOL OriginateError(_In_ HRESULT error, _In_ UINT cchMax,
                _When_(cchMax == 0, _In_reads_or_z_opt_(MAX_ERROR_MESSAGE_CHARS) )
                _When_(cchMax > 0 && cchMax < MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(cchMax) )
                _When_(cchMax >= MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(MAX_ERROR_MESSAGE_CHARS) )
                 PCWSTR message)
            {
                if (SUCCEEDED(error))
                {
                    return FALSE;
                }
                return ::RoOriginateErrorW(error, cchMax, message);
            }
            inline BOOL OriginateError(_In_ HRESULT error, _In_ HSTRING message)
            {
                if (SUCCEEDED(error))
                {
                    return FALSE;
                }
                return ::RoOriginateError(error, message);
            }
            inline BOOL TransformError(_In_ HRESULT oldError, _In_ HRESULT newError, _In_ UINT cchMax,
             _When_(cchMax == 0, _In_reads_or_z_opt_(MAX_ERROR_MESSAGE_CHARS))
             _When_(cchMax > 0 && cchMax < MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(cchMax) )
             _When_(cchMax >= MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(MAX_ERROR_MESSAGE_CHARS) ) PCWSTR message)
            {
                if ((oldError == newError) ||
                    (SUCCEEDED(oldError) && SUCCEEDED(newError)))
                {
                    return FALSE;
                }
                return ::RoTransformErrorW(oldError, newError, cchMax, message);
            }
            inline BOOL TransformError(_In_ HRESULT oldError, _In_ HRESULT newError, _In_ HSTRING message)
            {
                if ((oldError == newError) ||
                    (SUCCEEDED(oldError) && SUCCEEDED(newError)))
                {
                    return FALSE;
                }
                return ::RoTransformError(oldError, newError, message);
            }
        }
    }
}
namespace ABI
{
    namespace Windows
    {
        namespace Foundation
        {
            namespace Diagnostics
            {
                typedef enum {
                    None = RO_ERROR_REPORTING_NONE,
                    SuppressExceptions = RO_ERROR_REPORTING_SUPPRESSEXCEPTIONS,
                    ForceExceptions = RO_ERROR_REPORTING_FORCEEXCEPTIONS,
                    UseSetErrorInfo = RO_ERROR_REPORTING_USESETERRORINFO,
                    SuppressSetErrorInfo = RO_ERROR_REPORTING_SUPPRESSSETERRORINFO,
                } RoErrorReportingFlags;
                DEFINE_ENUM_FLAG_OPERATORS(RoErrorReportingFlags);
                inline HRESULT GetErrorReportingFlags(_Out_ UINT32 *pflags)
                {
                    return ::RoGetErrorReportingFlags(pflags);
                }
                inline HRESULT SetErrorReportingFlags(_In_ UINT32 flags)
                {
                    return ::RoSetErrorReportingFlags(flags);
                }
                inline BOOL OriginateError(_In_ HRESULT error, _In_ UINT cchMax,
                    _When_(cchMax == 0, _In_reads_or_z_opt_(MAX_ERROR_MESSAGE_CHARS) )
                    _When_(cchMax > 0 && cchMax < MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(cchMax) )
                    _When_(cchMax >= MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(MAX_ERROR_MESSAGE_CHARS) )
                    PCWSTR message)
                {
                    return ::RoOriginateErrorW(error, cchMax, message);
                }
                inline BOOL OriginateError(_In_ HRESULT error, _In_ HSTRING message)
                {
                    return ::RoOriginateError(error, message);
                }
                inline BOOL TransformError(_In_ HRESULT oldError, _In_ HRESULT newError, _In_ UINT cchMax,
                    _When_(cchMax == 0, _In_reads_or_z_opt_(MAX_ERROR_MESSAGE_CHARS))
                    _When_(cchMax > 0 && cchMax < MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(cchMax) )
                    _When_(cchMax >= MAX_ERROR_MESSAGE_CHARS, _In_reads_or_z_(MAX_ERROR_MESSAGE_CHARS) ) PCWSTR message)
                {
                    return ::RoTransformErrorW(oldError, newError, cchMax, message);
                }
                inline BOOL TransformError(_In_ HRESULT oldError, _In_ HRESULT newError, _In_ HSTRING message)
                {
                    return ::RoTransformError(oldError, newError, message);
                }
            }
        }
    }
}
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI_(BOOL)
RoOriginateLanguageException(
    _In_ HRESULT error,
    _In_opt_ HSTRING message,
    _In_opt_ IUnknown* languageException
    );
STDAPI_(void)
RoClearError(
    void
    );
STDAPI
RoReportUnhandledError(
    _In_ IRestrictedErrorInfo* pRestrictedErrorInfo
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef HRESULT (WINAPI *PINSPECT_MEMORY_CALLBACK)(
    _In_opt_ void* context,
    UINT_PTR readAddress,
    UINT32 length,
    _Out_writes_(length) BYTE* buffer);
STDAPI
RoInspectThreadErrorInfo(
    _In_ UINT_PTR targetTebAddress,
    USHORT machine,
    PINSPECT_MEMORY_CALLBACK readMemoryCallback,
    _In_opt_ PVOID context,
    _Out_ UINT_PTR* targetErrorInfoAddress
    );
STDAPI
RoInspectCapturedStackBackTrace(
    _In_ UINT_PTR targetErrorInfoAddress,
    USHORT machine,
    PINSPECT_MEMORY_CALLBACK readMemoryCallback,
    _In_opt_ PVOID context,
    _Out_ UINT32* frameCount,
    _Out_ UINT_PTR* targetBackTraceAddress
    );
STDAPI
RoGetMatchingRestrictedErrorInfo(
    _In_ HRESULT hrIn,
    _COM_Outptr_ IRestrictedErrorInfo** ppRestrictedErrorInfo
    );
STDAPI
RoReportFailedDelegate(
    _In_ IUnknown* punkDelegate,
    _In_ IRestrictedErrorInfo* pRestrictedErrorInfo
    );
STDAPI_(BOOL)
IsErrorPropagationEnabled(
    void
    );
#endif
#pragma endregion
