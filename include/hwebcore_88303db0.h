#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef HRESULT
(*PFN_WEB_CORE_SET_METADATA_DLL_ENTRY)
(
    IN PCWSTR pszMetadataType,
    IN PCWSTR pszValue
);
typedef HRESULT
(*PFN_WEB_CORE_ACTIVATE)
(
    IN PCWSTR pszAppHostConfigFile,
    IN PCWSTR pszRootWebConfigFile,
    IN PCWSTR pszInstanceName
);
typedef HRESULT
(*PFN_WEB_CORE_SHUTDOWN)
(
    IN DWORD fImmediate
);
#endif
#pragma endregion
