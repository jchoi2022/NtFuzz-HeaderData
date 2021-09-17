#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4127)
LPUWSTR
WINAPI
uaw_CharUpperW(
    _Inout_ LPUWSTR String
    );
int
APIENTRY
uaw_lstrcmpW(
    _In_ PCUWSTR String1,
    _In_ PCUWSTR String2
    );
int
APIENTRY
uaw_lstrcmpiW(
    _In_ PCUWSTR String1,
    _In_ PCUWSTR String2
    );
int
WINAPI
uaw_lstrlenW(
    _In_ LPCUWSTR String
    );
PUWSTR
__cdecl
uaw_wcschr(
    _In_ PCUWSTR String,
    _In_ WCHAR Character
    );
PUWSTR
__cdecl
uaw_wcscpy(
    _Out_writes_(_Inexpressible_("Sufficient length")) PUWSTR Destination,
    _In_ PCUWSTR Source
    );
int
__cdecl
uaw_wcsicmp(
    _In_ PCUWSTR String1,
    _In_ PCUWSTR String2
    );
size_t
__cdecl
uaw_wcslen(
    _In_ PCUWSTR String
    );
PUWSTR
__cdecl
uaw_wcsrchr(
    _In_ PCUWSTR String,
    _In_ WCHAR Character
    );
__inline
int
static
ua_wcsicmp(
    _In_ PCUWSTR String1,
    _In_ PCUWSTR String2
    )
{
    if (WSTR_ALIGNED(String1) && WSTR_ALIGNED(String2)) {
        return _wcsicmp( (LPCWSTR)String1, (LPCWSTR)String2 );
    } else {
        return uaw_wcsicmp( String1, String2 );
    }
}
#pragma warning(pop)
#endif
#pragma endregion
}
