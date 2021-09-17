#include <winapifamily.h>
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern "C" {
#include <iprtrmib.h>
#include <ipexport.h>
#include <iptypes.h>
#include <tcpestats.h>
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetNumberOfInterfaces(
    _Out_ PDWORD pdwNumIf
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetIfEntry(
    _Inout_ PMIB_IFROW pIfRow
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetIfTable(
    _Out_writes_bytes_opt_(*pdwSize) PMIB_IFTABLE pIfTable,
    _Inout_ PULONG pdwSize,
    _In_ BOOL bOrder
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetIpAddrTable(
    _Out_writes_bytes_opt_(*pdwSize) PMIB_IPADDRTABLE pIpAddrTable,
    _Inout_ PULONG pdwSize,
    _In_ BOOL bOrder
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetIpNetTable(
    _Out_writes_bytes_opt_(*SizePointer) PMIB_IPNETTABLE IpNetTable,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetIpForwardTable(
    _Out_writes_bytes_opt_(*pdwSize) PMIB_IPFORWARDTABLE pIpForwardTable,
    _Inout_ PULONG pdwSize,
    _In_ BOOL bOrder
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcpTable(
    _Out_writes_bytes_opt_(*SizePointer) PMIB_TCPTABLE TcpTable,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetExtendedTcpTable(
    _Out_writes_bytes_opt_(*pdwSize) PVOID pTcpTable,
    _Inout_
    _When_(ulAf == AF_INET, _Deref_in_range_(>=, sizeof(MIB_TCPTABLE)))
    _When_(
        (TableClass == TCP_TABLE_OWNER_PID_LISTENER ||
         TableClass == TCP_TABLE_OWNER_PID_CONNECTIONS ||
         TableClass == TCP_TABLE_OWNER_PID_ALL) && ulAf == AF_INET6,
        _Deref_in_range_(>=, sizeof(MIB_TCP6TABLE_OWNER_PID)))
    _When_(
        (TableClass == TCP_TABLE_OWNER_MODULE_LISTENER ||
         TableClass == TCP_TABLE_OWNER_MODULE_CONNECTIONS ||
         TableClass == TCP_TABLE_OWNER_MODULE_ALL) && ulAf == AF_INET6,
        _Deref_in_range_(>=, sizeof(MIB_TCP6TABLE_OWNER_MODULE)))
    PDWORD pdwSize,
    _In_ BOOL bOrder,
    _In_ ULONG ulAf,
    _In_ TCP_TABLE_CLASS TableClass,
    _In_ ULONG Reserved
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetOwnerModuleFromTcpEntry(
    _In_ PMIB_TCPROW_OWNER_MODULE pTcpEntry,
    _In_ TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize) PVOID pBuffer,
    _Inout_ PDWORD pdwSize
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetUdpTable(
    _Out_writes_bytes_opt_(*SizePointer) PMIB_UDPTABLE UdpTable,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetExtendedUdpTable(
    _Out_writes_bytes_opt_(*pdwSize) PVOID pUdpTable,
    _Inout_ PDWORD pdwSize,
    _In_ BOOL bOrder,
    _In_ ULONG ulAf,
    _In_ UDP_TABLE_CLASS TableClass,
    _In_ ULONG Reserved
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetOwnerModuleFromUdpEntry(
    _In_ PMIB_UDPROW_OWNER_MODULE pUdpEntry,
    _In_ TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize) PVOID pBuffer,
    _Inout_ PDWORD pdwSize
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcpTable2(
    _Out_writes_bytes_opt_(*SizePointer) PMIB_TCPTABLE2 TcpTable,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcp6Table(
    _Out_writes_bytes_(*SizePointer) PMIB_TCP6TABLE TcpTable,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcp6Table2(
    _Out_writes_bytes_(*SizePointer) PMIB_TCP6TABLE2 TcpTable,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetPerTcpConnectionEStats(
    _In_ PMIB_TCPROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _Out_writes_bytes_opt_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _Out_writes_bytes_opt_(RosSize) PUCHAR Ros,
    _In_ ULONG RosVersion,
    _In_ ULONG RosSize,
    _Out_writes_bytes_opt_(RodSize) PUCHAR Rod,
    _In_ ULONG RodVersion,
    _In_ ULONG RodSize
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
SetPerTcpConnectionEStats(
    _In_ PMIB_TCPROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _In_reads_bytes_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _In_ ULONG Offset
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetPerTcp6ConnectionEStats(
    _In_ PMIB_TCP6ROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _Out_writes_bytes_opt_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _Out_writes_bytes_opt_(RosSize) PUCHAR Ros,
    _In_ ULONG RosVersion,
    _In_ ULONG RosSize,
    _Out_writes_bytes_opt_(RodSize) PUCHAR Rod,
    _In_ ULONG RodVersion,
    _In_ ULONG RodSize
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
SetPerTcp6ConnectionEStats(
    _In_ PMIB_TCP6ROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _In_reads_bytes_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _In_ ULONG Offset
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetOwnerModuleFromTcp6Entry(
    _In_ PMIB_TCP6ROW_OWNER_MODULE pTcpEntry,
    _In_ TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize) PVOID pBuffer,
    _Inout_ PDWORD pdwSize
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetUdp6Table(
    _Out_writes_bytes_opt_(*SizePointer) PMIB_UDP6TABLE Udp6Table,
    _Inout_ PULONG SizePointer,
    _In_ BOOL Order
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetOwnerModuleFromUdp6Entry(
    _In_ PMIB_UDP6ROW_OWNER_MODULE pUdpEntry,
    _In_ TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize) PVOID pBuffer,
    _Inout_ PDWORD pdwSize
    );
DWORD
GetOwnerModuleFromPidAndInfo(
    _In_ ULONG ulPid,
    _In_ ULONGLONG *pInfo,
    _In_ TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize) PVOID pBuffer,
    _Inout_ PDWORD pdwSize
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetIpStatistics(
    _Out_ PMIB_IPSTATS Statistics
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetIcmpStatistics(
    _Out_ PMIB_ICMP Statistics
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcpStatistics(
    _Out_ PMIB_TCPSTATS Statistics
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetUdpStatistics(
    _Out_ PMIB_UDPSTATS Stats
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
SetIpStatisticsEx(
    _In_ PMIB_IPSTATS Statistics,
    _In_ ULONG Family
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetIpStatisticsEx(
    _Out_ PMIB_IPSTATS Statistics,
    _In_ ULONG Family
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetIcmpStatisticsEx(
    _Out_ PMIB_ICMP_EX Statistics,
    _In_ ULONG Family
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcpStatisticsEx(
    _Out_ PMIB_TCPSTATS Statistics,
    _In_ ULONG Family
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetUdpStatisticsEx(
    _Out_ PMIB_UDPSTATS Statistics,
    _In_ ULONG Family
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetTcpStatisticsEx2(
    _Out_ PMIB_TCPSTATS2 Statistics,
    _In_ ULONG Family
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetUdpStatisticsEx2(
    _Out_ PMIB_UDPSTATS2 Statistics,
    _In_ ULONG Family
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SetIfEntry(
    _In_ PMIB_IFROW pIfRow
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
CreateIpForwardEntry(
    _In_ PMIB_IPFORWARDROW pRoute
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SetIpForwardEntry(
    _In_ PMIB_IPFORWARDROW pRoute
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
DeleteIpForwardEntry(
    _In_ PMIB_IPFORWARDROW pRoute
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SetIpStatistics(
    _In_ PMIB_IPSTATS pIpStats
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SetIpTTL(
    _In_ UINT nTTL
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
CreateIpNetEntry(
    _In_ PMIB_IPNETROW pArpEntry
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SetIpNetEntry(
    _In_ PMIB_IPNETROW pArpEntry
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
DeleteIpNetEntry(
    _In_ PMIB_IPNETROW pArpEntry
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
FlushIpNetTable(
    _In_ DWORD dwIfIndex
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
CreateProxyArpEntry(
    _In_ DWORD dwAddress,
    _In_ DWORD dwMask,
    _In_ DWORD dwIfIndex
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
DeleteProxyArpEntry(
    _In_ DWORD dwAddress,
    _In_ DWORD dwMask,
    _In_ DWORD dwIfIndex
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SetTcpEntry(
    _In_ PMIB_TCPROW pTcpRow
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetInterfaceInfo(
    _Out_writes_bytes_opt_(*dwOutBufLen) PIP_INTERFACE_INFO pIfTable,
    _Inout_ PULONG dwOutBufLen
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetUniDirectionalAdapterInfo(
    _Out_writes_bytes_opt_(*dwOutBufLen) PIP_UNIDIRECTIONAL_ADAPTER_ADDRESS pIPIfInfo,
    _Inout_ PULONG dwOutBufLen
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
NhpAllocateAndGetInterfaceInfoFromStack(
    _Outptr_ IP_INTERFACE_NAME_INFO **ppTable,
    _Out_ PDWORD pdwCount,
    _In_ BOOL bOrder,
    _In_ HANDLE hHeap,
    _In_ DWORD dwFlags
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetBestInterface(
    _In_ IPAddr dwDestAddr,
    _Out_ PDWORD pdwBestIfIndex
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma warning(push)
#pragma warning(disable:4115)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetBestInterfaceEx(
    _In_ struct sockaddr *pDestAddr,
    _Out_ PDWORD pdwBestIfIndex
    );
#pragma warning(pop)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetBestRoute(
    _In_ DWORD dwDestAddr,
    _In_opt_ DWORD dwSourceAddr,
    _Out_ PMIB_IPFORWARDROW pBestRoute
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
NotifyAddrChange(
    _Out_ PHANDLE Handle,
    _In_ LPOVERLAPPED overlapped
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
NotifyRouteChange(
    _Out_ PHANDLE Handle,
    _In_ LPOVERLAPPED overlapped
    );
IPHLPAPI_DLL_LINKAGE
BOOL
WINAPI
CancelIPChangeNotify(
    _In_ LPOVERLAPPED notifyOverlapped
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetAdapterIndex(
    _In_ LPWSTR AdapterName,
    _Inout_ PULONG IfIndex
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
AddIPAddress(
    _In_ IPAddr Address,
    _In_ IPMask IpMask,
    _In_ DWORD IfIndex,
    _Out_ PULONG NTEContext,
    _Out_ PULONG NTEInstance
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
DeleteIPAddress(
    _In_ ULONG NTEContext
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetNetworkParams(
    _Out_writes_bytes_opt_(*pOutBufLen) PFIXED_INFO pFixedInfo,
    _Inout_ PULONG pOutBufLen
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetAdaptersInfo(
    _Out_writes_bytes_opt_(*SizePointer) PIP_ADAPTER_INFO AdapterInfo,
    _Inout_ PULONG SizePointer
    );
IPHLPAPI_DLL_LINKAGE
PIP_ADAPTER_ORDER_MAP
WINAPI
GetAdapterOrderMap(
    VOID
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
GetAdaptersAddresses(
    _In_ ULONG Family,
    _In_ ULONG Flags,
    _Reserved_ PVOID Reserved,
    _Out_writes_bytes_opt_(*SizePointer) PIP_ADAPTER_ADDRESSES AdapterAddresses,
    _Inout_ PULONG SizePointer
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetPerAdapterInfo(
    _In_ ULONG IfIndex,
    _Out_writes_bytes_opt_(*pOutBufLen) PIP_PER_ADAPTER_INFO pPerAdapterInfo,
    _Inout_ PULONG pOutBufLen
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _INTERFACE_TIMESTAMP_CAPABILITY_FLAGS
{
    BOOLEAN PtpV2OverUdpIPv4EventMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv4AllMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv4EventMsgTransmitHw;
    BOOLEAN PtpV2OverUdpIPv4AllMsgTransmitHw;
    BOOLEAN PtpV2OverUdpIPv6EventMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv6AllMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv6EventMsgTransmitHw;
    BOOLEAN PtpV2OverUdpIPv6AllMsgTransmitHw;
    BOOLEAN AllReceiveHw;
    BOOLEAN AllTransmitHw;
    BOOLEAN TaggedTransmitHw;
    BOOLEAN AllReceiveSw;
    BOOLEAN AllTransmitSw;
    BOOLEAN TaggedTransmitSw;
} INTERFACE_TIMESTAMP_CAPABILITY_FLAGS, *PINTERFACE_TIMESTAMP_CAPABILITY_FLAGS;
typedef struct _INTERFACE_TIMESTAMP_CAPABILITIES
{
    ULONG Version;
    ULONG64 HardwareClockFrequencyHz;
    BOOLEAN CrossTimestamp;
    ULONG64 Reserved1;
    ULONG64 Reserved2;
    INTERFACE_TIMESTAMP_CAPABILITY_FLAGS TimestampFlags;
} INTERFACE_TIMESTAMP_CAPABILITIES, *PINTERFACE_TIMESTAMP_CAPABILITIES;
typedef struct _INTERFACE_HARDWARE_CROSSTIMESTAMP
{
    ULONG Version;
    ULONG Flags;
    ULONG64 SystemTimestamp1;
    ULONG64 HardwareClockTimestamp;
    ULONG64 SystemTimestamp2;
} INTERFACE_HARDWARE_CROSSTIMESTAMP, *PINTERFACE_HARDWARE_CROSSTIMESTAMP;
DECLARE_HANDLE(HIFTIMESTAMPCHANGE);
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetInterfaceCurrentTimestampCapabilities(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Inout_ PINTERFACE_TIMESTAMP_CAPABILITIES TimestampCapabilites
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetInterfaceHardwareTimestampCapabilities(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Inout_ PINTERFACE_TIMESTAMP_CAPABILITIES TimestampCapabilites
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
CaptureInterfaceHardwareCrossTimestamp(
    _In_ CONST NET_LUID *InterfaceLuid,
    _Inout_ PINTERFACE_HARDWARE_CROSSTIMESTAMP CrossTimestamp
    );
typedef
VOID
CALLBACK
INTERFACE_TIMESTAMP_CONFIG_CHANGE_CALLBACK(
    _In_ PVOID CallerContext
    );
typedef
INTERFACE_TIMESTAMP_CONFIG_CHANGE_CALLBACK *PINTERFACE_TIMESTAMP_CONFIG_CHANGE_CALLBACK;
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
NotifyIfTimestampConfigChange(
    _In_opt_ PVOID CallerContext,
    _In_ PINTERFACE_TIMESTAMP_CONFIG_CHANGE_CALLBACK Callback,
    _Out_ HIFTIMESTAMPCHANGE *NotificationHandle
    );
IPHLPAPI_DLL_LINKAGE
VOID
WINAPI
CancelIfTimestampConfigChange(
    _In_ HIFTIMESTAMPCHANGE NotificationHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
IpReleaseAddress(
    _In_ PIP_ADAPTER_INDEX_MAP AdapterInfo
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
IpRenewAddress(
    _In_ PIP_ADAPTER_INDEX_MAP AdapterInfo
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
SendARP(
    _In_ IPAddr DestIP,
    _In_ IPAddr SrcIP,
    _Out_writes_bytes_(*PhyAddrLen) PVOID pMacAddr,
    _Inout_ PULONG PhyAddrLen
    );
IPHLPAPI_DLL_LINKAGE
BOOL
WINAPI
GetRTTAndHopCount(
    _In_ IPAddr DestIpAddress,
    _Out_ PULONG HopCount,
    _In_ ULONG MaxHops,
    _Out_ PULONG RTT
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetFriendlyIfIndex(
    _In_ DWORD IfIndex
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
EnableRouter(
    _Out_ HANDLE* pHandle,
    _Out_ OVERLAPPED* pOverlapped
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
UnenableRouter(
    _In_ OVERLAPPED* pOverlapped,
    _Out_opt_ LPDWORD lpdwEnableCount
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
DisableMediaSense(
    _Out_ HANDLE *pHandle,
    _In_ OVERLAPPED *pOverLapped
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
RestoreMediaSense(
    _In_ OVERLAPPED* pOverlapped,
    _Out_opt_ LPDWORD lpdwEnableCount
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
GetIpErrorString(
    _In_ IP_STATUS ErrorCode,
    _Out_writes_opt_(*Size + 1) PWSTR Buffer,
    _Inout_ PDWORD Size
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
ResolveNeighbor(
    _In_ SOCKADDR *NetworkAddress,
    _Out_writes_bytes_(*PhysicalAddressLength) PVOID PhysicalAddress,
    _Inout_ PULONG PhysicalAddressLength
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
CreatePersistentTcpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
CreatePersistentUdpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
DeletePersistentTcpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
DeletePersistentUdpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
LookupPersistentTcpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );
IPHLPAPI_DLL_LINKAGE
ULONG
WINAPI
LookupPersistentUdpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );
                                           NET_STRING_IPV6_ADDRESS)
                                           NET_STRING_IPV6_ADDRESS_NO_SCOPE)
                                           NET_STRING_IPV6_SERVICE)
                                           NET_STRING_IPV6_SERVICE_NO_SCOPE)
                                           NET_STRING_IPV6_NETWORK)
                                           NET_STRING_IP_ADDRESS)
                                           NET_STRING_IP_ADDRESS_NO_SCOPE)
                                           NET_STRING_IP_SERVICE)
                                           NET_STRING_IP_SERVICE_NO_SCOPE)
typedef enum NET_ADDRESS_FORMAT_
{
   NET_ADDRESS_FORMAT_UNSPECIFIED = 0,
   NET_ADDRESS_DNS_NAME,
   NET_ADDRESS_IPV4,
   NET_ADDRESS_IPV6
} NET_ADDRESS_FORMAT;
#include <netioapi.h>
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
}
#endif
#pragma endregion
