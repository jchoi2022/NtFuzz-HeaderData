       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINMMAPI
BOOL
WINAPI
sndPlaySoundA(
    _In_opt_ LPCSTR pszSound,
    _In_ UINT fuSound
    );
WINMMAPI
BOOL
WINAPI
sndPlaySoundW(
    _In_opt_ LPCWSTR pszSound,
    _In_ UINT fuSound
    );
WINMMAPI
BOOL
WINAPI
PlaySoundA(
    _In_opt_ LPCSTR pszSound,
    _In_opt_ HMODULE hmod,
    _In_ DWORD fdwSound
    );
WINMMAPI
BOOL
WINAPI
PlaySoundW(
    _In_opt_ LPCWSTR pszSound,
    _In_opt_ HMODULE hmod,
    _In_ DWORD fdwSound
    );
#endif
#pragma endregion
}
