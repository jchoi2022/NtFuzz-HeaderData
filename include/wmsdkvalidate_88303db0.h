       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT STDMETHODCALLTYPE WMCheckURLExtension( LPCWSTR pwszURL );
HRESULT STDMETHODCALLTYPE WMCheckURLScheme( LPCWSTR pwszURLScheme );
HRESULT STDMETHODCALLTYPE WMValidateData(
               BYTE *pbData,
                    DWORD *pdwDataSize
    );
HRESULT STDMETHODCALLTYPE WMIsAvailableOffline(
               LPCWSTR pwszURL,
               LPCWSTR pwszLanguage,
                BOOL *pfIsAvailableOffline
    );
#endif
#pragma endregion
