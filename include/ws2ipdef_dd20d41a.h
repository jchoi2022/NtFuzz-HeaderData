#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern "C" {
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4127)
#pragma prefast(push)
#pragma prefast(disable: 24002, "This code requires explicit usage of IPv4 address types.")
#include <in6addr.h>
struct sockaddr_in6_old {
    SHORT sin6_family;
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    IN6_ADDR sin6_addr;
};
typedef union sockaddr_gen {
    struct sockaddr Address;
    struct sockaddr_in AddressIn;
    struct sockaddr_in6_old AddressIn6;
} sockaddr_gen;
typedef struct _INTERFACE_INFO {
    ULONG iiFlags;
    sockaddr_gen iiAddress;
    sockaddr_gen iiBroadcastAddress;
    sockaddr_gen iiNetmask;
} INTERFACE_INFO, FAR *LPINTERFACE_INFO;
typedef struct _INTERFACE_INFO_EX {
    ULONG iiFlags;
    SOCKET_ADDRESS iiAddress;
    SOCKET_ADDRESS iiBroadcastAddress;
    SOCKET_ADDRESS iiNetmask;
} INTERFACE_INFO_EX, FAR *LPINTERFACE_INFO_EX;
typedef enum _PMTUD_STATE {
    IP_PMTUDISC_NOT_SET,
    IP_PMTUDISC_DO,
    IP_PMTUDISC_DONT,
    IP_PMTUDISC_PROBE,
    IP_PMTUDISC_MAX
} PMTUD_STATE, *PPMTUD_STATE;
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct sockaddr_in6 {
    ADDRESS_FAMILY sin6_family;
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    IN6_ADDR sin6_addr;
    union {
        ULONG sin6_scope_id;
        SCOPE_ID sin6_scope_struct;
    };
} SOCKADDR_IN6_LH, *PSOCKADDR_IN6_LH, FAR *LPSOCKADDR_IN6_LH;
typedef struct sockaddr_in6_w2ksp1 {
    short sin6_family;
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    struct in6_addr sin6_addr;
    ULONG sin6_scope_id;
} SOCKADDR_IN6_W2KSP1, *PSOCKADDR_IN6_W2KSP1, FAR *LPSOCKADDR_IN6_W2KSP1;
typedef SOCKADDR_IN6_LH SOCKADDR_IN6;
typedef SOCKADDR_IN6_LH *PSOCKADDR_IN6;
typedef SOCKADDR_IN6_LH FAR *LPSOCKADDR_IN6;
typedef union _SOCKADDR_INET {
    SOCKADDR_IN Ipv4;
    SOCKADDR_IN6 Ipv6;
    ADDRESS_FAMILY si_family;
} SOCKADDR_INET, *PSOCKADDR_INET;
typedef struct _sockaddr_in6_pair
{
    PSOCKADDR_IN6 SourceAddress;
    PSOCKADDR_IN6 DestinationAddress;
} SOCKADDR_IN6_PAIR, *PSOCKADDR_IN6_PAIR;
    0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 \
}
    0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 \
}
    0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 \
}
    0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 \
}
    0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe \
}
    0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 'T', 'E', 'R', 'E', 'D', 'O' \
}
    0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff \
}
    0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x01, 0xff, \
}
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0xff, 0xff, \
}
extern "C" {
extern CONST SCOPE_ID scopeid_unspecified;
extern CONST IN_ADDR in4addr_any;
extern CONST IN_ADDR in4addr_loopback;
extern CONST IN_ADDR in4addr_broadcast;
extern CONST IN_ADDR in4addr_allnodesonlink;
extern CONST IN_ADDR in4addr_allroutersonlink;
extern CONST IN_ADDR in4addr_alligmpv3routersonlink;
extern CONST IN_ADDR in4addr_allteredohostsonlink;
extern CONST IN_ADDR in4addr_linklocalprefix;
extern CONST IN_ADDR in4addr_multicastprefix;
extern CONST IN6_ADDR in6addr_any;
extern CONST IN6_ADDR in6addr_loopback;
extern CONST IN6_ADDR in6addr_allnodesonnode;
extern CONST IN6_ADDR in6addr_allnodesonlink;
extern CONST IN6_ADDR in6addr_allroutersonlink;
extern CONST IN6_ADDR in6addr_allmldv2routersonlink;
extern CONST IN6_ADDR in6addr_teredoinitiallinklocaladdress;
extern CONST IN6_ADDR in6addr_linklocalprefix;
extern CONST IN6_ADDR in6addr_multicastprefix;
extern CONST IN6_ADDR in6addr_solicitednodemulticastprefix;
extern CONST IN6_ADDR in6addr_v4mappedprefix;
extern CONST IN6_ADDR in6addr_6to4prefix;
extern CONST IN6_ADDR in6addr_teredoprefix;
extern CONST IN6_ADDR in6addr_teredoprefix_old;
}
WS2TCPIP_INLINE
BOOLEAN
IN6_ADDR_EQUAL(CONST IN6_ADDR *x, CONST IN6_ADDR *y)
{
    __int64 UNALIGNED *a;
    __int64 UNALIGNED *b;
    a = (__int64 UNALIGNED *)x;
    b = (__int64 UNALIGNED *)y;
    return (BOOLEAN)((a[1] == b[1]) && (a[0] == b[0]));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_UNSPECIFIED(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_words[0] == 0) &&
                     (a->s6_words[1] == 0) &&
                     (a->s6_words[2] == 0) &&
                     (a->s6_words[3] == 0) &&
                     (a->s6_words[4] == 0) &&
                     (a->s6_words[5] == 0) &&
                     (a->s6_words[6] == 0) &&
                     (a->s6_words[7] == 0));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_LOOPBACK(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_words[0] == 0) &&
                     (a->s6_words[1] == 0) &&
                     (a->s6_words[2] == 0) &&
                     (a->s6_words[3] == 0) &&
                     (a->s6_words[4] == 0) &&
                     (a->s6_words[5] == 0) &&
                     (a->s6_words[6] == 0) &&
                     (a->s6_words[7] == 0x0100));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_MULTICAST(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(a->s6_bytes[0] == 0xff);
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_EUI64(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(((a->s6_bytes[0] & 0xe0) != 0) &&
                     !IN6_IS_ADDR_MULTICAST(a));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_SUBNET_ROUTER_ANYCAST(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_EUI64(a) &&
                     (a->s6_words[4] == 0) &&
                     (a->s6_words[5] == 0) &&
                     (a->s6_words[6] == 0) &&
                     (a->s6_words[7] == 0));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_SUBNET_RESERVED_ANYCAST(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_EUI64(a) &&
                     (a->s6_words[4] == 0xfffd) &&
                     (a->s6_words[5] == 0xffff) &&
                     (a->s6_words[6] == 0xffff) &&
                     ((a->s6_words[7] & 0x80ff) == 0x80ff));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_ANYCAST(CONST IN6_ADDR *a)
{
    return (IN6_IS_ADDR_SUBNET_RESERVED_ANYCAST(a) ||
            IN6_IS_ADDR_SUBNET_ROUTER_ANYCAST(a));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_LINKLOCAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_bytes[0] == 0xfe) &&
                     ((a->s6_bytes[1] & 0xc0) == 0x80));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_SITELOCAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_bytes[0] == 0xfe) &&
                     ((a->s6_bytes[1] & 0xc0) == 0xc0));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_GLOBAL(CONST IN6_ADDR *a)
{
    ULONG High = (a->s6_bytes[0] & 0xf0);
    return (BOOLEAN)((High != 0) && (High != 0xf0));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_V4MAPPED(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_words[0] == 0) &&
                     (a->s6_words[1] == 0) &&
                     (a->s6_words[2] == 0) &&
                     (a->s6_words[3] == 0) &&
                     (a->s6_words[4] == 0) &&
                     (a->s6_words[5] == 0xffff));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_V4COMPAT(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_words[0] == 0) &&
                     (a->s6_words[1] == 0) &&
                     (a->s6_words[2] == 0) &&
                     (a->s6_words[3] == 0) &&
                     (a->s6_words[4] == 0) &&
                     (a->s6_words[5] == 0) &&
                     !((a->s6_words[6] == 0) &&
                       (a->s6_addr[14] == 0) &&
                       ((a->s6_addr[15] == 0) || (a->s6_addr[15] == 1))));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_V4TRANSLATED(CONST IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_words[0] == 0) &&
                     (a->s6_words[1] == 0) &&
                     (a->s6_words[2] == 0) &&
                     (a->s6_words[3] == 0) &&
                     (a->s6_words[4] == 0xffff) &&
                     (a->s6_words[5] == 0));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_MC_NODELOCAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
                     ((a->s6_bytes[1] & 0xf) == 1));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_MC_LINKLOCAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
                     ((a->s6_bytes[1] & 0xf) == 2));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_MC_SITELOCAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
                     ((a->s6_bytes[1] & 0xf) == 5));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_MC_ORGLOCAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
                     ((a->s6_bytes[1] & 0xf) == 8));
}
WS2TCPIP_INLINE
BOOLEAN
IN6_IS_ADDR_MC_GLOBAL(CONST IN6_ADDR *a)
{
    return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
                     ((a->s6_bytes[1] & 0xf) == 0xe));
}
WS2TCPIP_INLINE
VOID
IN6_SET_ADDR_UNSPECIFIED(PIN6_ADDR a)
{
    memset(a->s6_bytes, 0, sizeof(IN6_ADDR));
}
WS2TCPIP_INLINE
VOID
IN6_SET_ADDR_LOOPBACK(PIN6_ADDR a)
{
    memset(a->s6_bytes, 0, sizeof(IN6_ADDR));
    a->s6_bytes[15] = 1;
}
WS2TCPIP_INLINE
VOID
IN6ADDR_SETANY(PSOCKADDR_IN6 a)
{
    a->sin6_family = AF_INET6;
    a->sin6_port = 0;
    a->sin6_flowinfo = 0;
    IN6_SET_ADDR_UNSPECIFIED(&a->sin6_addr);
    a->sin6_scope_id = 0;
}
WS2TCPIP_INLINE
VOID
IN6ADDR_SETLOOPBACK(PSOCKADDR_IN6 a)
{
    a->sin6_family = AF_INET6;
    a->sin6_port = 0;
    a->sin6_flowinfo = 0;
    IN6_SET_ADDR_LOOPBACK(&a->sin6_addr);
    a->sin6_scope_id = 0;
}
WS2TCPIP_INLINE
BOOLEAN
IN6ADDR_ISANY(CONST SOCKADDR_IN6 *a)
{
    WS2IPDEF_ASSERT(a->sin6_family == AF_INET6);
    return IN6_IS_ADDR_UNSPECIFIED(&a->sin6_addr);
}
WS2TCPIP_INLINE
BOOLEAN
IN6ADDR_ISLOOPBACK(CONST SOCKADDR_IN6 *a)
{
    WS2IPDEF_ASSERT(a->sin6_family == AF_INET6);
    return IN6_IS_ADDR_LOOPBACK(&a->sin6_addr);
}
WS2TCPIP_INLINE
BOOLEAN
IN6ADDR_ISEQUAL(CONST SOCKADDR_IN6 *a, CONST SOCKADDR_IN6 *b)
{
    WS2IPDEF_ASSERT(a->sin6_family == AF_INET6);
    return (BOOLEAN)(a->sin6_scope_id == b->sin6_scope_id &&
                     IN6_ADDR_EQUAL(&a->sin6_addr, &b->sin6_addr));
}
WS2TCPIP_INLINE
BOOLEAN
IN6ADDR_ISUNSPECIFIED(CONST SOCKADDR_IN6 *a)
{
    WS2IPDEF_ASSERT(a->sin6_family == AF_INET6);
    return (BOOLEAN)(a->sin6_scope_id == 0 &&
                     IN6_IS_ADDR_UNSPECIFIED(&a->sin6_addr));
}
#endif
#pragma endregion
typedef enum {
    MCAST_INCLUDE = 0,
    MCAST_EXCLUDE
} MULTICAST_MODE_TYPE;
typedef struct ip_mreq {
    IN_ADDR imr_multiaddr;
    IN_ADDR imr_interface;
} IP_MREQ, *PIP_MREQ;
typedef struct ip_mreq_source {
    IN_ADDR imr_multiaddr;
    IN_ADDR imr_sourceaddr;
    IN_ADDR imr_interface;
} IP_MREQ_SOURCE, *PIP_MREQ_SOURCE;
typedef struct ip_msfilter {
    IN_ADDR imsf_multiaddr;
    IN_ADDR imsf_interface;
    MULTICAST_MODE_TYPE imsf_fmode;
    ULONG imsf_numsrc;
    IN_ADDR imsf_slist[1];
} IP_MSFILTER, *PIP_MSFILTER;
    (sizeof(IP_MSFILTER) - sizeof(IN_ADDR) + (NumSources) * sizeof(IN_ADDR))
typedef struct ipv6_mreq {
    IN6_ADDR ipv6mr_multiaddr;
    ULONG ipv6mr_interface;
} IPV6_MREQ, *PIPV6_MREQ;
typedef struct group_req {
    ULONG gr_interface;
    SOCKADDR_STORAGE gr_group;
} GROUP_REQ, *PGROUP_REQ;
typedef struct group_source_req {
    ULONG gsr_interface;
    SOCKADDR_STORAGE gsr_group;
    SOCKADDR_STORAGE gsr_source;
} GROUP_SOURCE_REQ, *PGROUP_SOURCE_REQ;
typedef struct group_filter {
    ULONG gf_interface;
    SOCKADDR_STORAGE gf_group;
    MULTICAST_MODE_TYPE gf_fmode;
    ULONG gf_numsrc;
    SOCKADDR_STORAGE gf_slist[1];
} GROUP_FILTER, *PGROUP_FILTER;
   (sizeof(GROUP_FILTER) - sizeof(SOCKADDR_STORAGE) \
   + (numsrc) * sizeof(SOCKADDR_STORAGE))
typedef struct in_pktinfo {
    IN_ADDR ipi_addr;
    ULONG ipi_ifindex;
} IN_PKTINFO, *PIN_PKTINFO;
C_ASSERT(sizeof(IN_PKTINFO) == 8);
typedef struct in6_pktinfo {
    IN6_ADDR ipi6_addr;
    ULONG ipi6_ifindex;
} IN6_PKTINFO, *PIN6_PKTINFO;
C_ASSERT(sizeof(IN6_PKTINFO) == 20);
typedef struct in_pktinfo_ex {
    IN_PKTINFO pkt_info;
    SCOPE_ID scope_id;
} IN_PKTINFO_EX, *PIN_PKTINFO_EX;
C_ASSERT(sizeof(IN_PKTINFO_EX) == 12);
typedef struct in6_pktinfo_ex {
    IN6_PKTINFO pkt_info;
    SCOPE_ID scope_id;
} IN6_PKTINFO_EX, *PIN6_PKTINFO_EX;
C_ASSERT(sizeof(IN6_PKTINFO_EX) == 24);
typedef struct in_recverr {
    IPPROTO protocol;
    ULONG info;
    UINT8 type;
    UINT8 code;
} IN_RECVERR, *PIN_RECVERR;
#pragma prefast(pop)
#pragma warning(pop)
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
}
#endif
#pragma endregion
