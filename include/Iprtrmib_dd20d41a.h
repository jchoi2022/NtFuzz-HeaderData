#include <winapifamily.h>
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma warning(disable:4201)
#include <mprapidef.h>
#include <ipifcons.h>
typedef struct _MIB_OPAQUE_QUERY
{
    DWORD dwVarId;
    DWORD rgdwVarIndex[ANY_SIZE];
}MIB_OPAQUE_QUERY, *PMIB_OPAQUE_QUERY;
#include <ipmib.h>
#include <tcpmib.h>
#include <udpmib.h>
typedef enum _TCP_TABLE_CLASS {
    TCP_TABLE_BASIC_LISTENER,
    TCP_TABLE_BASIC_CONNECTIONS,
    TCP_TABLE_BASIC_ALL,
    TCP_TABLE_OWNER_PID_LISTENER,
    TCP_TABLE_OWNER_PID_CONNECTIONS,
    TCP_TABLE_OWNER_PID_ALL,
    TCP_TABLE_OWNER_MODULE_LISTENER,
    TCP_TABLE_OWNER_MODULE_CONNECTIONS,
    TCP_TABLE_OWNER_MODULE_ALL
} TCP_TABLE_CLASS, *PTCP_TABLE_CLASS;
typedef enum _UDP_TABLE_CLASS {
    UDP_TABLE_BASIC,
    UDP_TABLE_OWNER_PID,
    UDP_TABLE_OWNER_MODULE
} UDP_TABLE_CLASS, *PUDP_TABLE_CLASS;
typedef enum _TCPIP_OWNER_MODULE_INFO_CLASS {
    TCPIP_OWNER_MODULE_INFO_BASIC
} TCPIP_OWNER_MODULE_INFO_CLASS, *PTCPIP_OWNER_MODULE_INFO_CLASS;
typedef struct _TCPIP_OWNER_MODULE_BASIC_INFO {
    PWCHAR pModuleName;
    PWCHAR pModulePath;
} TCPIP_OWNER_MODULE_BASIC_INFO, *PTCPIP_OWNER_MODULE_BASIC_INFO;
typedef struct _MIB_IPMCAST_BOUNDARY
{
    DWORD dwIfIndex;
    DWORD dwGroupAddress;
    DWORD dwGroupMask;
    DWORD dwStatus;
}MIB_IPMCAST_BOUNDARY, *PMIB_IPMCAST_BOUNDARY;
typedef struct _MIB_IPMCAST_BOUNDARY_TABLE
{
    DWORD dwNumEntries;
    MIB_IPMCAST_BOUNDARY table[ANY_SIZE];
}MIB_IPMCAST_BOUNDARY_TABLE, *PMIB_IPMCAST_BOUNDARY_TABLE;
typedef struct {
    DWORD dwGroupAddress;
    DWORD dwGroupMask;
} MIB_BOUNDARYROW, *PMIB_BOUNDARYROW;
typedef struct {
    DWORD dwTtl;
    DWORD dwRateLimit;
} MIB_MCAST_LIMIT_ROW, *PMIB_MCAST_LIMIT_ROW;
typedef WCHAR SN_CHAR;
typedef SN_CHAR SCOPE_NAME_BUFFER[MAX_SCOPE_NAME_LEN+1], *SCOPE_NAME;
typedef struct _MIB_IPMCAST_SCOPE
{
    DWORD dwGroupAddress;
    DWORD dwGroupMask;
    SCOPE_NAME_BUFFER snNameBuffer;
    DWORD dwStatus;
}MIB_IPMCAST_SCOPE, *PMIB_IPMCAST_SCOPE;
typedef struct _MIB_IPDESTROW
{
    MIB_IPFORWARDROW ForwardRow;
    DWORD dwForwardPreference;
    DWORD dwForwardViewSet;
}MIB_IPDESTROW, *PMIB_IPDESTROW;
typedef struct _MIB_IPDESTTABLE
{
    DWORD dwNumEntries;
    MIB_IPDESTROW table[ANY_SIZE];
}MIB_IPDESTTABLE, *PMIB_IPDESTTABLE;
typedef struct _MIB_BEST_IF
{
    DWORD dwDestAddr;
    DWORD dwIfIndex;
}MIB_BEST_IF, *PMIB_BEST_IF;
typedef struct _MIB_PROXYARP
{
    DWORD dwAddress;
    DWORD dwMask;
    DWORD dwIfIndex;
}MIB_PROXYARP, *PMIB_PROXYARP;
typedef struct _MIB_IFSTATUS
{
    DWORD dwIfIndex;
    DWORD dwAdminStatus;
    DWORD dwOperationalStatus;
    BOOL bMHbeatActive;
    BOOL bMHbeatAlive;
}MIB_IFSTATUS, *PMIB_IFSTATUS;
typedef struct _MIB_ROUTESTATE
{
    BOOL bRoutesSetToStack;
}MIB_ROUTESTATE, *PMIB_ROUTESTATE;
typedef struct _MIB_OPAQUE_INFO
{
    DWORD dwId;
    union
    {
        ULONGLONG ullAlign;
        BYTE rgbyData[1];
    };
}MIB_OPAQUE_INFO, *PMIB_OPAQUE_INFO;
    (MAX_MIB_OFFSET + sizeof(S))
    ((MIB_INFO_SIZE(S))/sizeof(DWORD) + 1)
    DWORD __rgdwBuff[MIB_INFO_SIZE_IN_DWORDS(Y)]; \
    PMIB_OPAQUE_INFO X = (PMIB_OPAQUE_INFO)__rgdwBuff; \
    Y * Z = (Y *)(X->rgbyData)
#pragma warning(default:4201)
#endif
#pragma endregion
