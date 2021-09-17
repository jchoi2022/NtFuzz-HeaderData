extern "C" {
#include <winapifamily.h>
#include <time.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
enum {
    MCAST_API_VERSION_0 = 0,
    MCAST_API_VERSION_1
};
typedef unsigned short IP_ADDR_FAMILY;
typedef union _IPNG_ADDRESS {
    DWORD IpAddrV4;
    BYTE IpAddrV6[16];
} IPNG_ADDRESS, *PIPNG_ADDRESS;
typedef struct _MCAST_CLIENT_UID {
    LPBYTE ClientUID;
    DWORD ClientUIDLength;
} MCAST_CLIENT_UID, *LPMCAST_CLIENT_UID;
typedef struct _MCAST_SCOPE_CTX {
    IPNG_ADDRESS ScopeID;
    IPNG_ADDRESS Interface;
    IPNG_ADDRESS ServerID;
} MCAST_SCOPE_CTX, *PMCAST_SCOPE_CTX;
typedef struct _MCAST_SCOPE_ENTRY {
    MCAST_SCOPE_CTX ScopeCtx;
    IPNG_ADDRESS LastAddr;
    DWORD TTL;
    UNICODE_STRING ScopeDesc;
} MCAST_SCOPE_ENTRY, *PMCAST_SCOPE_ENTRY;
typedef struct _MCAST_LEASE_REQUEST {
    LONG LeaseStartTime;
    LONG MaxLeaseStartTime;
    DWORD LeaseDuration;
    DWORD MinLeaseDuration;
    IPNG_ADDRESS ServerAddress;
    WORD MinAddrCount;
    WORD AddrCount;
    PBYTE pAddrBuf;
} MCAST_LEASE_REQUEST, *PMCAST_LEASE_REQUEST;
typedef struct _MCAST_LEASE_RESPONSE {
    LONG LeaseStartTime;
    LONG LeaseEndTime;
    IPNG_ADDRESS ServerAddress;
    WORD AddrCount;
    PBYTE pAddrBuf;
} MCAST_LEASE_RESPONSE, *PMCAST_LEASE_RESPONSE;
DWORD
APIENTRY
McastApiStartup(
    IN OUT PDWORD Version
    );
VOID
APIENTRY
McastApiCleanup(
    VOID
    );
DWORD
APIENTRY
McastGenUID(
    IN OUT LPMCAST_CLIENT_UID pRequestID
    );
DWORD
APIENTRY
McastEnumerateScopes(
    IN IP_ADDR_FAMILY AddrFamily,
    IN BOOL ReQuery,
    IN OUT PMCAST_SCOPE_ENTRY pScopeList,
    IN OUT PDWORD pScopeLen,
    OUT PDWORD pScopeCount
    );
DWORD
APIENTRY
McastRequestAddress(
    IN IP_ADDR_FAMILY AddrFamily,
    IN LPMCAST_CLIENT_UID pRequestID,
    IN PMCAST_SCOPE_CTX pScopeCtx,
    IN PMCAST_LEASE_REQUEST pAddrRequest,
    IN OUT PMCAST_LEASE_RESPONSE pAddrResponse
    );
DWORD
APIENTRY
McastRenewAddress(
    IN IP_ADDR_FAMILY AddrFamily,
    IN LPMCAST_CLIENT_UID pRequestID,
    IN PMCAST_LEASE_REQUEST pRenewRequest,
    IN OUT PMCAST_LEASE_RESPONSE pRenewResponse
    );
DWORD
APIENTRY
McastReleaseAddress(
    IN IP_ADDR_FAMILY AddrFamily,
    IN LPMCAST_CLIENT_UID pRequestID,
    IN PMCAST_LEASE_REQUEST pReleaseRequest
    );
#endif
#pragma endregion
}
