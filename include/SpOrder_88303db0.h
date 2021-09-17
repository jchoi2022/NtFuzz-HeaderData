#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
int
WSPAPI
WSCWriteProviderOrder (
    IN LPDWORD lpwdCatalogEntryId,
    IN DWORD dwNumberOfEntries
    );
typedef
int
(WSPAPI * LPWSCWRITEPROVIDERORDER)(
    IN LPDWORD lpwdCatalogEntryId,
    IN DWORD dwNumberOfEntries
    );
int
WSPAPI
WSCWriteProviderOrder32 (
    IN LPDWORD lpwdCatalogEntryId,
    IN DWORD dwNumberOfEntries
    );
int
WSPAPI
WSCWriteNameSpaceOrder (
    IN LPGUID lpProviderId,
    IN DWORD dwNumberOfEntries
    );
typedef
int
(WSPAPI * LPWSCWRITENAMESPACEORDER)(
    IN LPGUID lpProviderId,
    IN DWORD dwNumberOfEntries
    );
int
WSPAPI
WSCWriteNameSpaceOrder32 (
    IN LPGUID lpProviderId,
    IN DWORD dwNumberOfEntries
    );
}
#endif
#pragma endregion
