#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum napi_provider_type_tag
{
    ProviderType_Application = 1,
    ProviderType_Service,
} NAPI_PROVIDER_TYPE;
typedef enum napi_provider_level_tag
{
    ProviderLevel_None = 0,
    ProviderLevel_Secondary,
    ProviderLevel_Primary
} NAPI_PROVIDER_LEVEL;
typedef struct napi_domain_description_blob_tag
{
    DWORD AuthLevel;
    DWORD cchDomainName;
    DWORD OffsetNextDomainDescription;
    DWORD OffsetThisDomainName;
} NAPI_DOMAIN_DESCRIPTION_BLOB;
typedef struct napi_provider_installation_blob_tag
{
    DWORD dwVersion;
    DWORD dwProviderType;
    DWORD fSupportsWildCard;
    ULONG cDomains;
    ULONG OffsetFirstDomain;
} NAPI_PROVIDER_INSTALLATION_BLOB;
#endif
#pragma endregion
