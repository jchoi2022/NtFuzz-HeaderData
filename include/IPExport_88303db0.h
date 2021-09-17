#include <winapifamily.h>
#pragma region App Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef ULONG IPAddr;
typedef ULONG IPMask;
typedef ULONG IP_STATUS;
#include <in6addr.h>
typedef struct in6_addr IPv6Addr;
#include <inaddr.h>
typedef struct ip_option_information {
    UCHAR Ttl;
    UCHAR Tos;
    UCHAR Flags;
    UCHAR OptionsSize;
    _Field_size_bytes_(OptionsSize)
    PUCHAR OptionsData;
} IP_OPTION_INFORMATION, *PIP_OPTION_INFORMATION;
typedef struct ip_option_information32 {
    UCHAR Ttl;
    UCHAR Tos;
    UCHAR Flags;
    UCHAR OptionsSize;
    UCHAR * POINTER_32 OptionsData;
} IP_OPTION_INFORMATION32, *PIP_OPTION_INFORMATION32;
typedef struct icmp_echo_reply {
    IPAddr Address;
    ULONG Status;
    ULONG RoundTripTime;
    USHORT DataSize;
    USHORT Reserved;
    _Field_size_bytes_(DataSize)
    PVOID Data;
    struct ip_option_information Options;
} ICMP_ECHO_REPLY, *PICMP_ECHO_REPLY;
typedef struct icmp_echo_reply32 {
    IPAddr Address;
    ULONG Status;
    ULONG RoundTripTime;
    USHORT DataSize;
    USHORT Reserved;
    VOID * POINTER_32 Data;
    struct ip_option_information32 Options;
} ICMP_ECHO_REPLY32, *PICMP_ECHO_REPLY32;
#include <packon.h>
typedef struct _IPV6_ADDRESS_EX {
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    USHORT sin6_addr[8];
    ULONG sin6_scope_id;
} IPV6_ADDRESS_EX, *PIPV6_ADDRESS_EX;
#include <packoff.h>
typedef struct icmpv6_echo_reply_lh {
    IPV6_ADDRESS_EX Address;
    ULONG Status;
    unsigned int RoundTripTime;
} ICMPV6_ECHO_REPLY_LH, *PICMPV6_ECHO_REPLY_LH;
typedef ICMPV6_ECHO_REPLY_LH ICMPV6_ECHO_REPLY;
typedef ICMPV6_ECHO_REPLY_LH *PICMPV6_ECHO_REPLY;
typedef struct arp_send_reply {
    IPAddr DestAddress;
    IPAddr SrcAddress;
} ARP_SEND_REPLY, *PARP_SEND_REPLY;
typedef struct tcp_reserve_port_range {
    USHORT UpperRange;
    USHORT LowerRange;
} TCP_RESERVE_PORT_RANGE, *PTCP_RESERVE_PORT_RANGE;
typedef struct _IP_ADAPTER_INDEX_MAP {
    ULONG Index;
    WCHAR Name[MAX_ADAPTER_NAME];
} IP_ADAPTER_INDEX_MAP, *PIP_ADAPTER_INDEX_MAP;
typedef struct _IP_INTERFACE_INFO {
    LONG NumAdapters;
    IP_ADAPTER_INDEX_MAP Adapter[1];
} IP_INTERFACE_INFO,*PIP_INTERFACE_INFO;
typedef struct _IP_UNIDIRECTIONAL_ADAPTER_ADDRESS {
    ULONG NumAdapters;
    IPAddr Address[1];
} IP_UNIDIRECTIONAL_ADAPTER_ADDRESS, *PIP_UNIDIRECTIONAL_ADAPTER_ADDRESS;
typedef struct _IP_ADAPTER_ORDER_MAP {
    ULONG NumAdapters;
    ULONG AdapterOrder[1];
} IP_ADAPTER_ORDER_MAP, *PIP_ADAPTER_ORDER_MAP;
typedef struct _IP_MCAST_COUNTER_INFO {
    ULONG64 InMcastOctets;
    ULONG64 OutMcastOctets;
    ULONG64 InMcastPkts;
    ULONG64 OutMcastPkts;
} IP_MCAST_COUNTER_INFO, *PIP_MCAST_COUNTER_INFO;
#endif
#pragma endregion
