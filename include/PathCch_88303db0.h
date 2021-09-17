       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum PATHCCH_OPTIONS
{
    PATHCCH_NONE = 0x0,
    PATHCCH_ALLOW_LONG_PATHS = 0x01,
    PATHCCH_FORCE_ENABLE_LONG_NAME_PROCESS = 0x02,
    PATHCCH_FORCE_DISABLE_LONG_NAME_PROCESS = 0x04,
    PATHCCH_DO_NOT_NORMALIZE_SEGMENTS = 0x08,
    PATHCCH_ENSURE_IS_EXTENDED_LENGTH_PATH = 0x10,
    PATHCCH_ENSURE_TRAILING_SLASH = 0x020,
} PATHCCH_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(PATHCCH_OPTIONS)
WINPATHCCHAPI
BOOL
APIENTRY
PathIsUNCEx(
    _In_ PCWSTR pszPath,
    _Outptr_opt_ PCWSTR* ppszServer
    );
WINPATHCCHAPI
BOOL
APIENTRY
PathCchIsRoot(
    _In_opt_ PCWSTR pszPath
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAddBackslashEx(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_opt_result_buffer_(*pcchRemaining) PWSTR* ppszEnd,
    _Out_opt_ size_t* pcchRemaining
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAddBackslash(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveBackslashEx(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_opt_result_buffer_(*pcchRemaining) PWSTR* ppszEnd,
    _Out_opt_ size_t* pcchRemaining
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveBackslash(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchSkipRoot(
    _In_ PCWSTR pszPath,
    _Outptr_ PCWSTR* ppszRootEnd
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchStripToRoot(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveFileSpec(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchFindExtension(
    _In_reads_(_Inexpressible_(cchPath)) PCWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_ PCWSTR* ppszExt
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAddExtension(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_ PCWSTR pszExt
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRenameExtension(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_ PCWSTR pszExt
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveExtension(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath
    );
                     WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCanonicalizeEx(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_ PCWSTR pszPathIn,
    _In_ ULONG dwFlags
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCanonicalize(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_ PCWSTR pszPathIn
    );
                     WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCombineEx(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_opt_ PCWSTR pszPathIn,
    _In_opt_ PCWSTR pszMore,
    _In_ ULONG dwFlags
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCombine(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_opt_ PCWSTR pszPathIn,
    _In_opt_ PCWSTR pszMore
    );
                     WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAppendEx(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_opt_ PCWSTR pszMore,
    _In_ ULONG dwFlags
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAppend(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_opt_ PCWSTR pszMore
    );
WINPATHCCHAPI
HRESULT
APIENTRY
PathCchStripPrefix(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath
    );
                     WINPATHCCHAPI
HRESULT
APIENTRY
PathAllocCombine(
    _In_opt_ PCWSTR pszPathIn,
    _In_opt_ PCWSTR pszMore,
    _In_ ULONG dwFlags,
    _Outptr_ PWSTR* ppszPathOut
    );
                     WINPATHCCHAPI
HRESULT
APIENTRY
PathAllocCanonicalize(
    _In_ PCWSTR pszPathIn,
    _In_ ULONG dwFlags,
    _Outptr_ PWSTR* ppszPathOut
    );
#pragma deprecated(PathAddBackslashA)
#pragma deprecated(PathAddBackslashW)
#pragma deprecated(PathAddExtensionA)
#pragma deprecated(PathAddExtensionW)
#pragma deprecated(PathAppendA)
#pragma deprecated(PathAppendW)
#pragma deprecated(PathCanonicalizeA)
#pragma deprecated(PathCanonicalizeW)
#pragma deprecated(PathCombineA)
#pragma deprecated(PathCombineW)
#pragma deprecated(PathRenameExtensionA)
#pragma deprecated(PathRenameExtensionW)
#endif
#pragma endregion
}
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(return != 0)
__inline BOOL PathIsUNCEx(_In_ PWSTR pszPath, _Outptr_opt_ PWSTR *ppszServer)
{
    return PathIsUNCEx(const_cast<PCWSTR>(pszPath), const_cast<PCWSTR*>(ppszServer));
}
__inline HRESULT
PathCchSkipRoot(
    _In_ PWSTR pszPath,
    _Outptr_ PWSTR *ppszRootEnd)
{
    return PathCchSkipRoot(const_cast<PCWSTR>(pszPath), const_cast<PCWSTR*>(ppszRootEnd));
}
__inline HRESULT
PathCchFindExtension(
    _In_reads_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_ PWSTR *ppszExt)
{
    return PathCchFindExtension(const_cast<PCWSTR>(pszPath), cchPath, const_cast<PCWSTR*>(ppszExt));
}
#endif
#pragma endregion
