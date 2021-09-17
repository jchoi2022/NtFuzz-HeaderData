#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef enum
{
    NameUnknown = 0,
    NameFullyQualifiedDN = 1,
    NameSamCompatible = 2,
    NameDisplay = 3,
    NameUniqueId = 6,
    NameCanonical = 7,
    NameUserPrincipal = 8,
    NameCanonicalEx = 9,
    NameServicePrincipal = 10,
    NameDnsDomain = 12,
    NameGivenName = 13,
    NameSurname = 14
} EXTENDED_NAME_FORMAT, * PEXTENDED_NAME_FORMAT ;
_Success_(return != 0)
BOOLEAN
SEC_ENTRY
GetUserNameExA(
    _In_ EXTENDED_NAME_FORMAT NameFormat,
    _Out_writes_to_opt_(*nSize,*nSize) LPSTR lpNameBuffer,
    _Inout_ PULONG nSize
    );
_Success_(return != 0)
BOOLEAN
SEC_ENTRY
GetUserNameExW(
    _In_ EXTENDED_NAME_FORMAT NameFormat,
    _Out_writes_to_opt_(*nSize,*nSize) LPWSTR lpNameBuffer,
    _Inout_ PULONG nSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOLEAN
SEC_ENTRY
GetComputerObjectNameA(
    _In_ EXTENDED_NAME_FORMAT NameFormat,
    _Out_writes_to_opt_(*nSize,*nSize) LPSTR lpNameBuffer,
    _Inout_ PULONG nSize
    );
BOOLEAN
SEC_ENTRY
GetComputerObjectNameW(
    _In_ EXTENDED_NAME_FORMAT NameFormat,
    _Out_writes_to_opt_(*nSize,*nSize) LPWSTR lpNameBuffer,
    _Inout_ PULONG nSize
    );
BOOLEAN
SEC_ENTRY
TranslateNameA(
    _In_ LPCSTR lpAccountName,
    _In_ EXTENDED_NAME_FORMAT AccountNameFormat,
    _In_ EXTENDED_NAME_FORMAT DesiredNameFormat,
    _Out_writes_to_opt_(*nSize,*nSize) LPSTR lpTranslatedName,
    _Inout_ PULONG nSize
    );
BOOLEAN
SEC_ENTRY
TranslateNameW(
    _In_ LPCWSTR lpAccountName,
    _In_ EXTENDED_NAME_FORMAT AccountNameFormat,
    _In_ EXTENDED_NAME_FORMAT DesiredNameFormat,
    _Out_writes_to_opt_(*nSize,*nSize) LPWSTR lpTranslatedName,
    _Inout_ PULONG nSize
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
}
#endif
#pragma endregion
