       
#include <winapifamily.h>
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern "C" {
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef enum _MIB_NOTIFICATION_TYPE {
    MibParameterNotification,
    MibAddInstance,
    MibDeleteInstance,
    MibInitialNotification,
} MIB_NOTIFICATION_TYPE, *PMIB_NOTIFICATION_TYPE;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#include <ntddndis.h>
typedef struct _MIB_IF_ROW2 {
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    GUID InterfaceGuid;
    WCHAR Alias[IF_MAX_STRING_SIZE + 1];
    WCHAR Description[IF_MAX_STRING_SIZE + 1];
    ULONG PhysicalAddressLength;
    UCHAR PhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];
    UCHAR PermanentPhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];
    ULONG Mtu;
    IFTYPE Type;
    TUNNEL_TYPE TunnelType;
    NDIS_MEDIUM MediaType;
    NDIS_PHYSICAL_MEDIUM PhysicalMediumType;
    NET_IF_ACCESS_TYPE AccessType;
    NET_IF_DIRECTION_TYPE DirectionType;
    struct {
        BOOLEAN HardwareInterface : 1;
        BOOLEAN FilterInterface : 1;
        BOOLEAN ConnectorPresent : 1;
        BOOLEAN NotAuthenticated : 1;
        BOOLEAN NotMediaConnected : 1;
        BOOLEAN Paused : 1;
        BOOLEAN LowPower : 1;
        BOOLEAN EndPointInterface : 1;
    } InterfaceAndOperStatusFlags;
    IF_OPER_STATUS OperStatus;
    NET_IF_ADMIN_STATUS AdminStatus;
    NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
    NET_IF_NETWORK_GUID NetworkGuid;
    NET_IF_CONNECTION_TYPE ConnectionType;
    ULONG64 TransmitLinkSpeed;
    ULONG64 ReceiveLinkSpeed;
    ULONG64 InOctets;
    ULONG64 InUcastPkts;
    ULONG64 InNUcastPkts;
    ULONG64 InDiscards;
    ULONG64 InErrors;
    ULONG64 InUnknownProtos;
    ULONG64 InUcastOctets;
    ULONG64 InMulticastOctets;
    ULONG64 InBroadcastOctets;
    ULONG64 OutOctets;
    ULONG64 OutUcastPkts;
    ULONG64 OutNUcastPkts;
    ULONG64 OutDiscards;
    ULONG64 OutErrors;
    ULONG64 OutUcastOctets;
    ULONG64 OutMulticastOctets;
    ULONG64 OutBroadcastOctets;
    ULONG64 OutQLen;
} MIB_IF_ROW2, *PMIB_IF_ROW2;
typedef struct _MIB_IF_TABLE2 {
    ULONG NumEntries;
    MIB_IF_ROW2 Table[ANY_SIZE];
} MIB_IF_TABLE2, *PMIB_IF_TABLE2;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIfEntry2(
    _Inout_ PMIB_IF_ROW2 Row
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef enum _MIB_IF_ENTRY_LEVEL {
    MibIfEntryNormal = 0,
    MibIfEntryNormalWithoutStatistics = 2
} MIB_IF_ENTRY_LEVEL, *PMIB_IF_ENTRY_LEVEL;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIfEntry2Ex(
    _In_ MIB_IF_ENTRY_LEVEL Level,
    _Inout_ PMIB_IF_ROW2 Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIfTable2(
    _Outptr_ PMIB_IF_TABLE2 *Table
    );
typedef enum _MIB_IF_TABLE_LEVEL {
    MibIfTableNormal,
    MibIfTableRaw,
    MibIfTableNormalWithoutStatistics
} MIB_IF_TABLE_LEVEL, *PMIB_IF_TABLE_LEVEL;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIfTable2Ex(
    _In_ MIB_IF_TABLE_LEVEL Level,
    _Outptr_ PMIB_IF_TABLE2 *Table
    );
typedef struct _MIB_IPINTERFACE_ROW {
    ADDRESS_FAMILY Family;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    ULONG MaxReassemblySize;
    ULONG64 InterfaceIdentifier;
    ULONG MinRouterAdvertisementInterval;
    ULONG MaxRouterAdvertisementInterval;
    BOOLEAN AdvertisingEnabled;
    BOOLEAN ForwardingEnabled;
    BOOLEAN WeakHostSend;
    BOOLEAN WeakHostReceive;
    BOOLEAN UseAutomaticMetric;
    BOOLEAN UseNeighborUnreachabilityDetection;
    BOOLEAN ManagedAddressConfigurationSupported;
    BOOLEAN OtherStatefulConfigurationSupported;
    BOOLEAN AdvertiseDefaultRoute;
    NL_ROUTER_DISCOVERY_BEHAVIOR RouterDiscoveryBehavior;
    ULONG DadTransmits;
    ULONG BaseReachableTime;
    ULONG RetransmitTime;
    ULONG PathMtuDiscoveryTimeout;
    NL_LINK_LOCAL_ADDRESS_BEHAVIOR LinkLocalAddressBehavior;
    ULONG LinkLocalAddressTimeout;
    ULONG ZoneIndices[ScopeLevelCount];
    ULONG SitePrefixLength;
    ULONG Metric;
    ULONG NlMtu;
    BOOLEAN Connected;
    BOOLEAN SupportsWakeUpPatterns;
    BOOLEAN SupportsNeighborDiscovery;
    BOOLEAN SupportsRouterDiscovery;
    ULONG ReachableTime;
    NL_INTERFACE_OFFLOAD_ROD TransmitOffload;
    NL_INTERFACE_OFFLOAD_ROD ReceiveOffload;
    BOOLEAN DisableDefaultRoutes;
} MIB_IPINTERFACE_ROW, *PMIB_IPINTERFACE_ROW;
typedef struct _MIB_IPINTERFACE_TABLE {
    ULONG NumEntries;
    MIB_IPINTERFACE_ROW Table[ANY_SIZE];
} MIB_IPINTERFACE_TABLE, *PMIB_IPINTERFACE_TABLE;
typedef struct _MIB_IFSTACK_ROW {
    NET_IFINDEX HigherLayerInterfaceIndex;
    NET_IFINDEX LowerLayerInterfaceIndex;
} MIB_IFSTACK_ROW, *PMIB_IFSTACK_ROW;
typedef struct _MIB_INVERTEDIFSTACK_ROW {
    NET_IFINDEX LowerLayerInterfaceIndex;
    NET_IFINDEX HigherLayerInterfaceIndex;
} MIB_INVERTEDIFSTACK_ROW, *PMIB_INVERTEDIFSTACK_ROW;
typedef struct _MIB_IFSTACK_TABLE {
    ULONG NumEntries;
    MIB_IFSTACK_ROW Table[ANY_SIZE];
} MIB_IFSTACK_TABLE, *PMIB_IFSTACK_TABLE;
typedef struct _MIB_INVERTEDIFSTACK_TABLE {
    ULONG NumEntries;
    MIB_INVERTEDIFSTACK_ROW Table[ANY_SIZE];
} MIB_INVERTEDIFSTACK_TABLE, *PMIB_INVERTEDIFSTACK_TABLE;
typedef
VOID
(NETIOAPI_API_ *PIPINTERFACE_CHANGE_CALLBACK) (
    _In_ PVOID CallerContext,
    _In_ PMIB_IPINTERFACE_ROW Row OPTIONAL,
    _In_ MIB_NOTIFICATION_TYPE NotificationType
    );
typedef struct _MIB_IP_NETWORK_CONNECTION_BANDWIDTH_ESTIMATES {
    NL_BANDWIDTH_INFORMATION InboundBandwidthInformation;
    NL_BANDWIDTH_INFORMATION OutboundBandwidthInformation;
} MIB_IP_NETWORK_CONNECTION_BANDWIDTH_ESTIMATES,
  *PMIB_IP_NETWORK_CONNECTION_BANDWIDTH_ESTIMATES;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIfStackTable(
    _Outptr_ PMIB_IFSTACK_TABLE *Table
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetInvertedIfStackTable(
    _Outptr_ PMIB_INVERTEDIFSTACK_TABLE *Table
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpInterfaceEntry(
    _Inout_ PMIB_IPINTERFACE_ROW Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpInterfaceTable(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_IPINTERFACE_TABLE *Table
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
VOID
NETIOAPI_API_
InitializeIpInterfaceEntry(
    _Inout_ PMIB_IPINTERFACE_ROW Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
NotifyIpInterfaceChange(
    _In_ ADDRESS_FAMILY Family,
    _In_ PIPINTERFACE_CHANGE_CALLBACK Callback,
    _In_opt_ PVOID CallerContext,
    _In_ BOOLEAN InitialNotification,
    _Inout_ HANDLE *NotificationHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetIpInterfaceEntry(
    _Inout_ PMIB_IPINTERFACE_ROW Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpNetworkConnectionBandwidthEstimates(
    _In_ NET_IFINDEX InterfaceIndex,
    _In_ ADDRESS_FAMILY AddressFamily,
    _Out_ PMIB_IP_NETWORK_CONNECTION_BANDWIDTH_ESTIMATES BandwidthEstimates
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _MIB_UNICASTIPADDRESS_ROW {
    SOCKADDR_INET Address;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    NL_PREFIX_ORIGIN PrefixOrigin;
    NL_SUFFIX_ORIGIN SuffixOrigin;
    ULONG ValidLifetime;
    ULONG PreferredLifetime;
    UINT8 OnLinkPrefixLength;
    BOOLEAN SkipAsSource;
    NL_DAD_STATE DadState;
    SCOPE_ID ScopeId;
    LARGE_INTEGER CreationTimeStamp;
} MIB_UNICASTIPADDRESS_ROW, *PMIB_UNICASTIPADDRESS_ROW;
typedef struct _MIB_UNICASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_UNICASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_UNICASTIPADDRESS_TABLE, *PMIB_UNICASTIPADDRESS_TABLE;
typedef
VOID
(NETIOAPI_API_ *PUNICAST_IPADDRESS_CHANGE_CALLBACK) (
    _In_ PVOID CallerContext,
    _In_opt_ PMIB_UNICASTIPADDRESS_ROW Row,
    _In_ MIB_NOTIFICATION_TYPE NotificationType
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
CreateUnicastIpAddressEntry(
    _In_ CONST MIB_UNICASTIPADDRESS_ROW *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
DeleteUnicastIpAddressEntry(
    _In_ CONST MIB_UNICASTIPADDRESS_ROW *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetUnicastIpAddressEntry(
    _Inout_ PMIB_UNICASTIPADDRESS_ROW Row
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetUnicastIpAddressTable(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_UNICASTIPADDRESS_TABLE *Table
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
VOID
NETIOAPI_API_
InitializeUnicastIpAddressEntry(
    _Out_ PMIB_UNICASTIPADDRESS_ROW Row
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
NotifyUnicastIpAddressChange(
    _In_ ADDRESS_FAMILY Family,
    _In_ PUNICAST_IPADDRESS_CHANGE_CALLBACK Callback,
    _In_opt_ PVOID CallerContext,
    _In_ BOOLEAN InitialNotification,
    _Inout_ HANDLE *NotificationHandle
    );
typedef
VOID
(NETIOAPI_API_ *PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK) (
    _In_ PVOID CallerContext,
    _In_ PMIB_UNICASTIPADDRESS_TABLE AddressTable
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
NotifyStableUnicastIpAddressTable(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_UNICASTIPADDRESS_TABLE* Table,
    _In_ PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK CallerCallback,
    _In_ PVOID CallerContext,
    _Inout_ HANDLE *NotificationHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetUnicastIpAddressEntry(
    _In_ CONST MIB_UNICASTIPADDRESS_ROW *Row
    );
typedef struct _MIB_ANYCASTIPADDRESS_ROW {
    SOCKADDR_INET Address;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    SCOPE_ID ScopeId;
} MIB_ANYCASTIPADDRESS_ROW, *PMIB_ANYCASTIPADDRESS_ROW;
typedef struct _MIB_ANYCASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_ANYCASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_ANYCASTIPADDRESS_TABLE, *PMIB_ANYCASTIPADDRESS_TABLE;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
CreateAnycastIpAddressEntry(
    _In_ CONST MIB_ANYCASTIPADDRESS_ROW *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
DeleteAnycastIpAddressEntry(
    _In_ CONST MIB_ANYCASTIPADDRESS_ROW *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetAnycastIpAddressEntry(
    _Inout_ PMIB_ANYCASTIPADDRESS_ROW Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetAnycastIpAddressTable(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_ANYCASTIPADDRESS_TABLE *Table
    );
typedef struct _MIB_MULTICASTIPADDRESS_ROW {
    SOCKADDR_INET Address;
    NET_IFINDEX InterfaceIndex;
    NET_LUID InterfaceLuid;
    SCOPE_ID ScopeId;
} MIB_MULTICASTIPADDRESS_ROW, *PMIB_MULTICASTIPADDRESS_ROW;
typedef struct _MIB_MULTICASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_MULTICASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_MULTICASTIPADDRESS_TABLE, *PMIB_MULTICASTIPADDRESS_TABLE;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetMulticastIpAddressEntry(
    _Inout_ PMIB_MULTICASTIPADDRESS_ROW Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetMulticastIpAddressTable(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_MULTICASTIPADDRESS_TABLE *Table
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _IP_ADDRESS_PREFIX {
    SOCKADDR_INET Prefix;
    UINT8 PrefixLength;
} IP_ADDRESS_PREFIX, *PIP_ADDRESS_PREFIX;
typedef struct _MIB_IPFORWARD_ROW2 {
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    IP_ADDRESS_PREFIX DestinationPrefix;
    SOCKADDR_INET NextHop;
    UCHAR SitePrefixLength;
    ULONG ValidLifetime;
    ULONG PreferredLifetime;
    ULONG Metric;
    NL_ROUTE_PROTOCOL Protocol;
    BOOLEAN Loopback;
    BOOLEAN AutoconfigureAddress;
    BOOLEAN Publish;
    BOOLEAN Immortal;
    ULONG Age;
    NL_ROUTE_ORIGIN Origin;
} MIB_IPFORWARD_ROW2, *PMIB_IPFORWARD_ROW2;
typedef struct _MIB_IPFORWARD_TABLE2 {
    ULONG NumEntries;
    MIB_IPFORWARD_ROW2 Table[ANY_SIZE];
} MIB_IPFORWARD_TABLE2, *PMIB_IPFORWARD_TABLE2;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef
VOID
(NETIOAPI_API_ *PIPFORWARD_CHANGE_CALLBACK) (
    _In_ PVOID CallerContext,
    _In_opt_ PMIB_IPFORWARD_ROW2 Row,
    _In_ MIB_NOTIFICATION_TYPE NotificationType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
CreateIpForwardEntry2(
    _In_ CONST MIB_IPFORWARD_ROW2 *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
DeleteIpForwardEntry2(
    _In_ CONST MIB_IPFORWARD_ROW2 *Row
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetBestRoute2(
    _In_opt_ NET_LUID *InterfaceLuid,
    _In_ NET_IFINDEX InterfaceIndex,
    _In_opt_ CONST SOCKADDR_INET *SourceAddress,
    _In_ CONST SOCKADDR_INET *DestinationAddress,
    _In_ ULONG AddressSortOptions,
    _Out_ PMIB_IPFORWARD_ROW2 BestRoute,
    _Out_ SOCKADDR_INET *BestSourceAddress
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpForwardEntry2(
    _Inout_ PMIB_IPFORWARD_ROW2 Row
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpForwardTable2(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_IPFORWARD_TABLE2 *Table
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
VOID
NETIOAPI_API_
InitializeIpForwardEntry(
    _Out_ PMIB_IPFORWARD_ROW2 Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
NotifyRouteChange2(
    _In_ ADDRESS_FAMILY AddressFamily,
    _In_ PIPFORWARD_CHANGE_CALLBACK Callback,
    _In_ PVOID CallerContext,
    _In_ BOOLEAN InitialNotification,
    _Inout_ HANDLE *NotificationHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetIpForwardEntry2(
    _In_ CONST MIB_IPFORWARD_ROW2 *Route
    );
typedef struct _MIB_IPPATH_ROW {
    SOCKADDR_INET Source;
    SOCKADDR_INET Destination;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    SOCKADDR_INET CurrentNextHop;
    ULONG PathMtu;
    ULONG RttMean;
    ULONG RttDeviation;
    union {
        ULONG LastReachable;
        ULONG LastUnreachable;
    };
    BOOLEAN IsReachable;
    ULONG64 LinkTransmitSpeed;
    ULONG64 LinkReceiveSpeed;
} MIB_IPPATH_ROW, *PMIB_IPPATH_ROW;
typedef struct _MIB_IPPATH_TABLE {
    ULONG NumEntries;
    MIB_IPPATH_ROW Table[ANY_SIZE];
} MIB_IPPATH_TABLE, *PMIB_IPPATH_TABLE;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
FlushIpPathTable(
    _In_ ADDRESS_FAMILY Family
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpPathEntry(
    _Inout_ PMIB_IPPATH_ROW Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpPathTable(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_IPPATH_TABLE *Table
    );
typedef struct _MIB_IPNET_ROW2 {
    SOCKADDR_INET Address;
    NET_IFINDEX InterfaceIndex;
    NET_LUID InterfaceLuid;
    UCHAR PhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];
    ULONG PhysicalAddressLength;
    NL_NEIGHBOR_STATE State;
    union {
        struct {
            BOOLEAN IsRouter : 1;
            BOOLEAN IsUnreachable : 1;
        };
        UCHAR Flags;
    };
    union {
        ULONG LastReachable;
        ULONG LastUnreachable;
    } ReachabilityTime;
} MIB_IPNET_ROW2, *PMIB_IPNET_ROW2;
typedef struct _MIB_IPNET_TABLE2 {
    ULONG NumEntries;
    MIB_IPNET_ROW2 Table[ANY_SIZE];
} MIB_IPNET_TABLE2, *PMIB_IPNET_TABLE2;
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
CreateIpNetEntry2(
    _In_ CONST MIB_IPNET_ROW2 *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
DeleteIpNetEntry2(
    _In_ CONST MIB_IPNET_ROW2 *Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
FlushIpNetTable2(
    _In_ ADDRESS_FAMILY Family,
    _In_ NET_IFINDEX InterfaceIndex
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpNetEntry2(
    _Inout_ PMIB_IPNET_ROW2 Row
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetIpNetTable2(
    _In_ ADDRESS_FAMILY Family,
    _Outptr_ PMIB_IPNET_TABLE2 *Table
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ResolveIpNetEntry2(
    _Inout_ PMIB_IPNET_ROW2 Row,
    _In_opt_ CONST SOCKADDR_INET *SourceAddress
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetIpNetEntry2(
    _In_ PMIB_IPNET_ROW2 Row
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef
VOID
(NETIOAPI_API_ *PTEREDO_PORT_CHANGE_CALLBACK) (
    _In_ PVOID CallerContext,
    _In_ USHORT Port,
    _Inout_ MIB_NOTIFICATION_TYPE NotificationType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
NotifyTeredoPortChange(
    _In_ PTEREDO_PORT_CHANGE_CALLBACK Callback,
    _In_ PVOID CallerContext,
    _In_ BOOLEAN InitialNotification,
    _Inout_ HANDLE *NotificationHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetTeredoPort(
    _Out_ USHORT *Port
    );
#pragma deprecated(NotifyTeredoPortChange)
#pragma deprecated(GetTeredoPort)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
NETIOAPI_API
CancelMibChangeNotify2(
    _In_ HANDLE NotificationHandle
    );
IPHLPAPI_DLL_LINKAGE
VOID
NETIOAPI_API_
FreeMibTable(
    _In_ PVOID Memory
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
CreateSortedAddressPairs(
    _In_opt_ const PSOCKADDR_IN6 SourceAddressList,
    _In_ ULONG SourceAddressCount,
    _In_ const PSOCKADDR_IN6 DestinationAddressList,
    _In_ ULONG DestinationAddressCount,
    _In_ ULONG AddressSortOptions,
    _Outptr_result_buffer_(*SortedAddressPairCount)
    PSOCKADDR_IN6_PAIR *SortedAddressPairList,
    _Out_ ULONG *SortedAddressPairCount
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertCompartmentGuidToId(
    _In_ CONST GUID *CompartmentGuid,
    _Out_ PNET_IF_COMPARTMENT_ID CompartmentId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertCompartmentIdToGuid(
    _In_ NET_IF_COMPARTMENT_ID CompartmentId,
    _Out_ GUID *CompartmentGuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceNameToLuidA(
    _In_z_ CONST CHAR *InterfaceName,
    _Out_ NET_LUID *InterfaceLuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceNameToLuidW(
    _In_z_ CONST WCHAR *InterfaceName,
    _Out_ NET_LUID *InterfaceLuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceLuidToNameA(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Out_writes_(Length) PSTR InterfaceName,
    _In_ SIZE_T Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceLuidToNameW(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Out_writes_(Length) PWSTR InterfaceName,
    _In_ SIZE_T Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceLuidToIndex(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Out_ PNET_IFINDEX InterfaceIndex
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceIndexToLuid(
    _In_ NET_IFINDEX InterfaceIndex,
    _Out_ PNET_LUID InterfaceLuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceLuidToAlias(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Out_writes_(Length) PWSTR InterfaceAlias,
    _In_ SIZE_T Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceAliasToLuid(
    _In_z_ CONST WCHAR *InterfaceAlias,
    _Out_ PNET_LUID InterfaceLuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceLuidToGuid(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Out_ GUID *InterfaceGuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
ConvertInterfaceGuidToLuid(
    _In_ CONST GUID *InterfaceGuid,
    _Out_ PNET_LUID InterfaceLuid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
NET_IFINDEX
NETIOAPI_API_
if_nametoindex(
    _In_ PCSTR InterfaceName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
PCHAR
NETIOAPI_API_
if_indextoname(
    _In_ NET_IFINDEX InterfaceIndex,
    _Out_writes_(IF_NAMESIZE) PCHAR InterfaceName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
NET_IF_COMPARTMENT_ID
NETIOAPI_API_
GetCurrentThreadCompartmentId(
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetCurrentThreadCompartmentId(
    _In_ NET_IF_COMPARTMENT_ID CompartmentId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
VOID
NETIOAPI_API_
GetCurrentThreadCompartmentScope(
    _Out_ PNET_IF_COMPARTMENT_SCOPE CompartmentScope,
    _Out_ PNET_IF_COMPARTMENT_ID CompartmentId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetCurrentThreadCompartmentScope(
    _In_ NET_IF_COMPARTMENT_SCOPE CompartmentScope
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
NET_IF_COMPARTMENT_ID
NETIOAPI_API_
GetJobCompartmentId(
    _In_ HANDLE JobHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetJobCompartmentId(
    _In_ HANDLE JobHandle,
    _In_ NET_IF_COMPARTMENT_ID CompartmentId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
NET_IF_COMPARTMENT_ID
NETIOAPI_API_
GetSessionCompartmentId(
    _In_ ULONG SessionId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetSessionCompartmentId(
    _In_ ULONG SessionId,
    _In_ NET_IF_COMPARTMENT_ID CompartmentId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
NET_IF_COMPARTMENT_ID
NETIOAPI_API_
GetDefaultCompartmentId(
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
GetNetworkInformation(
    _In_ CONST NET_IF_NETWORK_GUID *NetworkGuid,
    _Out_ PNET_IF_COMPARTMENT_ID CompartmentId,
    _Out_ PULONG SiteId,
    _Out_writes_(Length) PWCHAR NetworkName,
    _In_ ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
IPHLPAPI_DLL_LINKAGE
_NETIOAPI_SUCCESS_
NETIOAPI_API
SetNetworkInformation(
    _In_ CONST NET_IF_NETWORK_GUID *NetworkGuid,
    _In_ NET_IF_COMPARTMENT_ID CompartmentId,
    _In_z_ CONST WCHAR *NetworkName
    );
#pragma warning(pop)
IPHLPAPI_DLL_LINKAGE
NETIOAPI_API
ConvertLengthToIpv4Mask(
    _In_ ULONG MaskLength,
    _Out_ PULONG Mask
    );
IPHLPAPI_DLL_LINKAGE
NETIOAPI_API
ConvertIpv4MaskToLength(
    _In_ ULONG Mask,
    _Out_ PUINT8 MaskLength
    );
typedef struct _DNS_SETTINGS
{
    ULONG Version;
    ULONG64 Flags;
    PWSTR Hostname;
    PWSTR Domain;
    PWSTR SearchList;
} DNS_SETTINGS;
typedef struct _DNS_INTERFACE_SETTINGS
{
    ULONG Version;
    ULONG64 Flags;
    PWSTR Domain;
    PWSTR NameServer;
    PWSTR SearchList;
    ULONG RegistrationEnabled;
    ULONG RegisterAdapterName;
    ULONG EnableLLMNR;
    ULONG QueryAdapterName;
    PWSTR ProfileNameServer;
} DNS_INTERFACE_SETTINGS;
NETIOAPI_API
GetDnsSettings(
    _Inout_ DNS_SETTINGS *Settings
    );
VOID
NETIOAPI_API_
FreeDnsSettings(
    _Inout_ DNS_SETTINGS *Settings
    );
NETIOAPI_API
SetDnsSettings(
    _In_ const DNS_SETTINGS *Settings
    );
NETIOAPI_API
GetInterfaceDnsSettings(
    _In_ GUID Interface,
    _Inout_ DNS_INTERFACE_SETTINGS *Settings
    );
VOID
NETIOAPI_API_
FreeInterfaceDnsSettings(
    _Inout_ DNS_INTERFACE_SETTINGS *Settings
    );
NETIOAPI_API
SetInterfaceDnsSettings(
    _In_ GUID Interface,
    _In_ const DNS_INTERFACE_SETTINGS *Settings
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
}
#endif
#pragma endregion
