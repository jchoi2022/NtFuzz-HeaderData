       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
extern "C" {
HINSTANCE __stdcall LoadMUILibraryA(
    _In_ PCSTR pszFullModuleName,
    _In_ DWORD dwLangConvention,
    _In_ LANGID LangID
    );
HINSTANCE __stdcall LoadMUILibraryW(
    _In_ PCWSTR pszFullModuleName,
    _In_ DWORD dwLangConvention,
    _In_ LANGID LangID
    );
BOOL __stdcall FreeMUILibrary(
    _In_ HMODULE hResModule
    );
BOOL __stdcall GetUILanguageFallbackList(
    _Out_writes_opt_(cchFallbackList) PWSTR pFallbackList,
    _In_ ULONG cchFallbackList,
    _Out_opt_ PULONG pcchFallbackOut
    );
}
#endif
#pragma endregion
