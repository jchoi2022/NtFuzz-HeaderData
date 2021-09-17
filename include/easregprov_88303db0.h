       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
HRESULT
WINAPI
EasRegisterEncryptionProvider(
    _In_ LPCWSTR pcwzDllPath
    );
HRESULT
WINAPI
EasUnRegisterEncryptionProvider(
    );
}
#endif
#pragma endregion
