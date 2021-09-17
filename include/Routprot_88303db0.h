#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "stm.h"
#pragma warning(disable:4201)
#pragma warning(disable:4200)
#include <nldef.h>
#include <in6addr.h>
extern "C" {
    #error Router version not defined
typedef enum _ROUTING_PROTOCOL_EVENTS
{
    ROUTER_STOPPED,
    SAVE_GLOBAL_CONFIG_INFO,
    SAVE_INTERFACE_CONFIG_INFO,
    UPDATE_COMPLETE,
}ROUTING_PROTOCOL_EVENTS;
typedef enum _NET_INTERFACE_TYPE
{
    PERMANENT,
    DEMAND_DIAL,
    LOCAL_WORKSTATION_DIAL,
    REMOTE_WORKSTATION_DIAL
} NET_INTERFACE_TYPE;
typedef struct _SUPPORT_FUNCTIONS_50
{
    union
    {
        ULONGLONG _Align8;
        struct
        {
            DWORD dwVersion;
            DWORD dwReserved;
        };
    };
    OUT DWORD
    (WINAPI *DemandDialRequest)(
        IN DWORD ProtocolId,
        IN DWORD InterfaceIndex
        ) ;
    OUT DWORD
    (WINAPI *SetInterfaceReceiveType)(
        IN DWORD ProtocolId,
        IN DWORD InterfaceIndex,
        IN DWORD InterfaceReceiveType,
        IN BOOL bActivate
        );
    OUT DWORD
    (WINAPI *ValidateRoute)(
        IN DWORD ProtocolId,
        IN PVOID RouteInfo,
        IN PVOID DestAddress OPTIONAL
        );
    OUT DWORD
    (WINAPI *MIBEntryCreate)(
        IN DWORD dwRoutingPid,
        IN DWORD dwEntrySize,
        IN LPVOID lpEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryDelete)(
        IN DWORD dwRoutingPid,
        IN DWORD dwEntrySize,
        IN LPVOID lpEntry
        );
    OUT DWORD
    (WINAPI *MIBEntrySet)(
        IN DWORD dwRoutingPid,
        IN DWORD dwEntrySize,
        IN LPVOID lpEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryGet)(
        IN DWORD dwRoutingPid,
        IN DWORD dwInEntrySize,
        IN LPVOID lpInEntry,
        IN OUT LPDWORD lpOutEntrySize,
        OUT LPVOID lpOutEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryGetFirst)(
        IN DWORD dwRoutingPid,
        IN DWORD dwInEntrySize,
        IN LPVOID lpInEntry,
        IN OUT LPDWORD lpOutEntrySize,
        OUT LPVOID lpOutEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryGetNext)(
        IN DWORD dwRoutingPid,
        IN DWORD dwInEntrySize,
        IN LPVOID lpInEntry,
        IN OUT LPDWORD lpOutEntrySize,
        OUT LPVOID lpOutEntry
        );
    OUT DWORD
    (WINAPI *GetRouterId)(VOID);
    OUT BOOL
    (WINAPI *HasMulticastBoundary)(
        IN DWORD dwIfIndex,
        IN DWORD dwGroupAddress
        );
} SUPPORT_FUNCTIONS_50;
typedef struct _SUPPORT_FUNCTIONS_60
{
    union
    {
        ULONGLONG _Align8;
        struct
        {
            DWORD dwVersion;
            DWORD dwReserved;
        };
    };
    OUT DWORD
    (WINAPI *DemandDialRequest)(
        IN DWORD ProtocolId,
        IN DWORD InterfaceIndex
        ) ;
    OUT DWORD
    (WINAPI *SetInterfaceReceiveType)(
        IN DWORD ProtocolId,
        IN DWORD InterfaceIndex,
        IN DWORD InterfaceReceiveType,
        IN BOOL bActivate
        );
    OUT DWORD
    (WINAPI *ValidateRoute)(
        IN DWORD ProtocolId,
        IN PVOID RouteInfo,
        IN PVOID DestAddress OPTIONAL
        );
    OUT DWORD
    (WINAPI *MIBEntryCreate)(
        IN DWORD dwRoutingPid,
        IN DWORD dwEntrySize,
        IN LPVOID lpEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryDelete)(
        IN DWORD dwRoutingPid,
        IN DWORD dwEntrySize,
        IN LPVOID lpEntry
        );
    OUT DWORD
    (WINAPI *MIBEntrySet)(
        IN DWORD dwRoutingPid,
        IN DWORD dwEntrySize,
        IN LPVOID lpEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryGet)(
        IN DWORD dwRoutingPid,
        IN DWORD dwInEntrySize,
        IN LPVOID lpInEntry,
        IN OUT LPDWORD lpOutEntrySize,
        OUT LPVOID lpOutEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryGetFirst)(
        IN DWORD dwRoutingPid,
        IN DWORD dwInEntrySize,
        IN LPVOID lpInEntry,
        IN OUT LPDWORD lpOutEntrySize,
        OUT LPVOID lpOutEntry
        );
    OUT DWORD
    (WINAPI *MIBEntryGetNext)(
        IN DWORD dwRoutingPid,
        IN DWORD dwInEntrySize,
        IN LPVOID lpInEntry,
        IN OUT LPDWORD lpOutEntrySize,
        OUT LPVOID lpOutEntry
        );
    OUT DWORD
    (WINAPI *GetRouterId)(VOID);
    OUT BOOL
    (WINAPI *HasMulticastBoundary)(
        IN DWORD dwIfIndex,
        IN DWORD dwGroupAddress
        );
    OUT DWORD
    (WINAPI *ValidateRouteEx)(
        IN DWORD dwProtocolId,
        IN DWORD dwSubProtocolId,
        IN DWORD dwTransportId,
        IN PVOID pRouteInfo,
        IN GUID* pRoutingDomainId,
        IN PVOID pDestAddress OPTIONAL
        );
    OUT DWORD
    (WINAPI *GetRoutingDomainInfo)(
        IN GUID* pRoutingDomainId,
        IN DWORD dwRevision,
        IN DWORD dwBufSize,
        IN OUT PVOID pRoutingDomainInfo
        );
    OUT DWORD
    (WINAPI *GetInterfaceInformation)(
        IN DWORD dwInterfaceIndex,
        IN DWORD dwTransportId,
        IN DWORD dwRevision,
        IN DWORD dwBufSize,
        IN OUT PVOID pInterfaceInfo
        );
} SUPPORT_FUNCTIONS_60;
typedef SUPPORT_FUNCTIONS_50 SUPPORT_FUNCTIONS;
typedef SUPPORT_FUNCTIONS *PSUPPORT_FUNCTIONS;
    (((Type & 0x03)<<30)|((VendorId & 0x3FFF)<<16)|(ProtocolId & 0xFFFF))
    PROTOCOL_ID(PROTO_TYPE_UCAST, PROTO_VENDOR_MS0, PROTO_IPV6_DHCP)
    PROTOCOL_ID(PROTO_TYPE_UCAST, PROTO_VENDOR_MS0, PROTO_IP_BOOTP)
    PROTOCOL_ID(PROTO_TYPE_UCAST, PROTO_VENDOR_MS0, PROTO_IP_RIP)
    PROTOCOL_ID(PROTO_TYPE_UCAST, PROTO_VENDOR_MS0, PROTO_IP_OSPF)
    PROTOCOL_ID(PROTO_TYPE_UCAST, PROTO_VENDOR_MS1, PROTO_IP_BGP)
    PROTOCOL_ID(PROTO_TYPE_MCAST, PROTO_VENDOR_MS1, PROTO_IP_IGMP)
    PROTOCOL_ID(PROTO_TYPE_MCAST, PROTO_VENDOR_MS1, PROTO_IP_BGMP)
    PROTOCOL_ID(PROTO_TYPE_MCAST, PROTO_VENDOR_MS1, PROTO_IP_MSDP)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_DNS_PROXY)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_DHCP_ALLOCATOR)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_NAT)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_DIFFSERV)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_MGM)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_VRRP)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_DTP)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_H323)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_FTP)
    PROTOCOL_ID(PROTO_TYPE_MS0, PROTO_VENDOR_MS1, PROTO_IP_ALG)
typedef struct _UPDATE_COMPLETE_MESSAGE
{
    ULONG InterfaceIndex;
    ULONG UpdateType;
    ULONG UpdateStatus;
} UPDATE_COMPLETE_MESSAGE, *PUPDATE_COMPLETE_MESSAGE;
typedef union _MESSAGE
{
    UPDATE_COMPLETE_MESSAGE UpdateCompleteMessage;
    DWORD InterfaceIndex;
} MESSAGE, *PMESSAGE;
typedef struct IP_LOCAL_BINDING
{
    DWORD Address;
    DWORD Mask;
}IP_LOCAL_BINDING, *PIP_LOCAL_BINDING;
typedef struct IPV6_LOCAL_BINDING
{
    IN6_ADDR Address;
    DWORD PrefixLength;
}IPV6_LOCAL_BINDING, *PIPV6_LOCAL_BINDING;
typedef struct IP_ADAPTER_BINDING_INFO
{
    ULONG AddressCount;
    DWORD RemoteAddress;
    ULONG Mtu;
    ULONGLONG Speed;
    _Field_size_(AddressCount) IP_LOCAL_BINDING Address[0];
}IP_ADAPTER_BINDING_INFO, *PIP_ADAPTER_BINDING_INFO;
    (FIELD_OFFSET(IP_ADAPTER_BINDING_INFO,Address[0]) + \
     ((X) * sizeof(IP_LOCAL_BINDING)))
typedef struct IPV6_ADAPTER_BINDING_INFO
{
    ULONG AddressCount;
    IN6_ADDR RemoteAddress;
    ULONG Mtu;
    ULONGLONG Speed;
    _Field_size_(AddressCount) IPV6_LOCAL_BINDING Address[0];
}IPV6_ADAPTER_BINDING_INFO, *PIPV6_ADAPTER_BINDING_INFO;
    (FIELD_OFFSET(IPV6_ADAPTER_BINDING_INFO,Address[0]) + \
     ((X) * sizeof(IPV6_LOCAL_BINDING)))
typedef
DWORD
(WINAPI * PSTART_PROTOCOL) (
    IN HANDLE NotificationEvent,
    IN PSUPPORT_FUNCTIONS SupportFunctions,
    IN LPVOID GlobalInfo,
    IN ULONG StructureVersion,
    IN ULONG StructureSize,
    IN ULONG StructureCount
    );
typedef
DWORD
(WINAPI * PSTART_COMPLETE) (
    VOID
    );
typedef
DWORD
(WINAPI * PSTOP_PROTOCOL) (
    VOID
    );
typedef
DWORD
(WINAPI * PADD_INTERFACE) (
    IN LPWSTR InterfaceName,
    IN ULONG InterfaceIndex,
    IN NET_INTERFACE_TYPE InterfaceType,
    IN DWORD MediaType,
    IN WORD AccessType,
    IN WORD ConnectionType,
    IN PVOID InterfaceInfo,
    IN ULONG StructureVersion,
    IN ULONG StructureSize,
    IN ULONG StructureCount
    );
typedef
DWORD
(WINAPI * PDELETE_INTERFACE) (
    IN ULONG InterfaceIndex
    );
typedef
DWORD
(WINAPI * PGET_EVENT_MESSAGE) (
    OUT ROUTING_PROTOCOL_EVENTS *Event,
    OUT MESSAGE *Result
    );
typedef
DWORD
(WINAPI * PGET_INTERFACE_INFO) (
    IN ULONG InterfaceIndex,
    IN PVOID InterfaceInfo,
    IN OUT PULONG BufferSize,
    OUT PULONG StructureVersion,
    IN PULONG StructureSize,
    OUT PULONG StructureCount
    );
typedef
DWORD
(WINAPI * PSET_INTERFACE_INFO) (
    IN ULONG InterfaceIndex,
    IN PVOID InterfaceInfo,
    IN ULONG StructureVersion,
    IN ULONG StructureSize,
    IN ULONG StructureCount
    );
typedef
DWORD
(WINAPI * PINTERFACE_STATUS) (
    IN ULONG InterfaceIndex,
    IN BOOL InterfaceActive,
    IN DWORD StatusType,
    IN PVOID StatusInfo
    );
typedef
DWORD
(WINAPI * PQUERY_POWER) (
    IN DWORD PowerType
    );
typedef
DWORD
(WINAPI * PSET_POWER) (
    IN DWORD PowerType
    );
typedef
DWORD
(WINAPI * PGET_GLOBAL_INFO) (
    IN PVOID GlobalInfo,
    IN OUT PULONG BufferSize,
    OUT PULONG StructureVersion,
    OUT PULONG StructureSize,
    OUT PULONG StructureCount
    );
typedef
DWORD
(WINAPI * PSET_GLOBAL_INFO) (
    IN PVOID GlobalInfo,
    IN ULONG StructureVersion,
    IN ULONG StructureSize,
    IN ULONG StructureCount
    );
typedef
DWORD
(WINAPI * PDO_UPDATE_ROUTES) (
    IN ULONG InterfaceIndex
    );
typedef
DWORD
(WINAPI * PMIB_CREATE) (
    IN ULONG InputDataSize,
    IN PVOID InputData
    );
typedef
DWORD
(WINAPI * PMIB_DELETE) (
    IN ULONG InputDataSize,
    IN PVOID InputData
    );
typedef
DWORD
(WINAPI * PMIB_GET) (
    IN ULONG InputDataSize,
    IN PVOID InputData,
    OUT PULONG OutputDataSize,
    OUT PVOID OutputData
    );
typedef
DWORD
(WINAPI * PMIB_SET) (
    IN ULONG InputDataSize,
    IN PVOID InputData
    );
typedef
DWORD
(WINAPI * PMIB_GET_FIRST) (
    IN ULONG InputDataSize,
    IN PVOID InputData,
    OUT PULONG OutputDataSize,
    OUT PVOID OutputData
    );
typedef
DWORD
(WINAPI * PMIB_GET_NEXT) (
    IN ULONG InputDataSize,
    IN PVOID InputData,
    OUT PULONG OutputDataSize,
    OUT PVOID OutputData
    );
typedef
DWORD
(WINAPI * PMIB_SET_TRAP_INFO) (
    IN HANDLE Event,
    IN ULONG InputDataSize,
    IN PVOID InputData,
    OUT PULONG OutputDataSize,
    OUT PVOID OutputData
    );
typedef
DWORD
(WINAPI * PMIB_GET_TRAP_INFO) (
    IN ULONG InputDataSize,
    IN PVOID InputData,
    OUT PULONG OutputDataSize,
    OUT PVOID OutputData
    );
typedef
DWORD
(WINAPI *PCONNECT_CLIENT) (
    IN ULONG InterfaceIndex,
    IN PVOID ClientAddress
    );
typedef
DWORD
(WINAPI *PDISCONNECT_CLIENT) (
    IN ULONG InterfaceIndex,
    IN PVOID ClientAddress
    );
typedef
DWORD
(WINAPI *PGET_NEIGHBORS) (
    IN DWORD InterfaceIndex,
    IN PDWORD NeighborList,
    IN OUT PDWORD NeighborListSize,
       OUT PBYTE InterfaceFlags
    );
typedef
DWORD
(WINAPI *PGET_MFE_STATUS) (
    IN DWORD InterfaceIndex,
    IN DWORD GroupAddress,
    IN DWORD SourceAddress,
    OUT PBYTE StatusCode
    );
typedef
DWORD
(WINAPI * PPROTOCOL_ACTION) (
    IN DWORD ActionType,
    IN PVOID ActionInfo,
    IN DWORD ActionSize
    );
typedef
DWORD
(WINAPI * PGET_ROUTING_DOMAIN_GLOBAL_INFO)(
    IN GUID *pRoutingDomainId,
    IN PVOID GlobalInfo,
    IN OUT PULONG BufferSize,
    OUT PULONG StructureVersion,
    OUT PULONG StructureSize,
    OUT PULONG StructureCount
    );
typedef
DWORD
(WINAPI * PSET_ROUTING_DOMAIN_GLOBAL_INFO) (
    IN GUID *pRoutingDomainId,
    IN PVOID GlobalInfo,
    IN ULONG StructureVersion,
    IN ULONG StructureSize,
    IN ULONG StructureCount
    );
typedef
DWORD
(WINAPI * PGET_PROTOCOL_STATISTICS) (
    IN DWORD InEntryType,
    IN PVOID InEntry,
    IN DWORD InEntrySize,
    IN DWORD OutEntryType,
    OUT PVOID* OutEntry,
    OUT PDWORD OutEntrySize
    );
typedef
VOID
(WINAPI * PPROTOCOL_BUFFER_FREE) (
    IN PVOID Ptr
    );
typedef struct _MPR50_ROUTING_CHARACTERISTICS
{
    DWORD dwVersion;
    DWORD dwProtocolId;
    DWORD fSupportedFunctionality;
    PSTART_PROTOCOL pfnStartProtocol;
    PSTART_COMPLETE pfnStartComplete;
    PSTOP_PROTOCOL pfnStopProtocol;
    PGET_GLOBAL_INFO pfnGetGlobalInfo;
    PSET_GLOBAL_INFO pfnSetGlobalInfo;
    PQUERY_POWER pfnQueryPower;
    PSET_POWER pfnSetPower;
    PADD_INTERFACE pfnAddInterface;
    PDELETE_INTERFACE pfnDeleteInterface;
    PINTERFACE_STATUS pfnInterfaceStatus;
    PGET_INTERFACE_INFO pfnGetInterfaceInfo;
    PSET_INTERFACE_INFO pfnSetInterfaceInfo;
    PGET_EVENT_MESSAGE pfnGetEventMessage;
    PDO_UPDATE_ROUTES pfnUpdateRoutes;
    PCONNECT_CLIENT pfnConnectClient;
    PDISCONNECT_CLIENT pfnDisconnectClient;
    PGET_NEIGHBORS pfnGetNeighbors;
    PGET_MFE_STATUS pfnGetMfeStatus;
    PMIB_CREATE pfnMibCreateEntry;
    PMIB_DELETE pfnMibDeleteEntry;
    PMIB_GET pfnMibGetEntry;
    PMIB_SET pfnMibSetEntry;
    PMIB_GET_FIRST pfnMibGetFirstEntry;
    PMIB_GET_NEXT pfnMibGetNextEntry;
    PMIB_SET_TRAP_INFO pfnMibSetTrapInfo;
    PMIB_GET_TRAP_INFO pfnMibGetTrapInfo;
}MPR50_ROUTING_CHARACTERISTICS;
typedef struct _MPR60_ROUTING_CHARACTERISTICS
{
    DWORD dwVersion;
    DWORD dwProtocolId;
    DWORD fSupportedFunctionality;
    PSTART_PROTOCOL pfnStartProtocol;
    PSTART_COMPLETE pfnStartComplete;
    PSTOP_PROTOCOL pfnStopProtocol;
    PGET_GLOBAL_INFO pfnGetGlobalInfo;
    PSET_GLOBAL_INFO pfnSetGlobalInfo;
    PQUERY_POWER pfnQueryPower;
    PSET_POWER pfnSetPower;
    PADD_INTERFACE pfnAddInterface;
    PDELETE_INTERFACE pfnDeleteInterface;
    PINTERFACE_STATUS pfnInterfaceStatus;
    PGET_INTERFACE_INFO pfnGetInterfaceInfo;
    PSET_INTERFACE_INFO pfnSetInterfaceInfo;
    PGET_EVENT_MESSAGE pfnGetEventMessage;
    PDO_UPDATE_ROUTES pfnUpdateRoutes;
    PCONNECT_CLIENT pfnConnectClient;
    PDISCONNECT_CLIENT pfnDisconnectClient;
    PGET_NEIGHBORS pfnGetNeighbors;
    PGET_MFE_STATUS pfnGetMfeStatus;
    PMIB_CREATE pfnMibCreateEntry;
    PMIB_DELETE pfnMibDeleteEntry;
    PMIB_GET pfnMibGetEntry;
    PMIB_SET pfnMibSetEntry;
    PMIB_GET_FIRST pfnMibGetFirstEntry;
    PMIB_GET_NEXT pfnMibGetNextEntry;
    PMIB_SET_TRAP_INFO pfnMibSetTrapInfo;
    PMIB_GET_TRAP_INFO pfnMibGetTrapInfo;
    PPROTOCOL_ACTION pfnProtocolAction;
    PGET_PROTOCOL_STATISTICS pfnGetStatistics;
    PGET_ROUTING_DOMAIN_GLOBAL_INFO pfnGetRoutingDomainGlobalInfo;
    PSET_ROUTING_DOMAIN_GLOBAL_INFO pfnSetRoutingDomainGlobalInfo;
    PPROTOCOL_BUFFER_FREE pfnBufferFree;
}MPR60_ROUTING_CHARACTERISTICS;
typedef MPR_ROUTING_CHARACTERISTICS *PMPR_ROUTING_CHARACTERISTICS;
typedef
DWORD
(WINAPI * PREGISTER_PROTOCOL) (
    IN OUT PMPR_ROUTING_CHARACTERISTICS pRoutingChar,
    IN OUT PMPR_SERVICE_CHARACTERISTICS pServiceChar
    );
}
#pragma warning(default:4200)
#pragma warning(default:4201)
#endif
#pragma endregion
