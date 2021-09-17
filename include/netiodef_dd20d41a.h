       
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4200)
#pragma warning(disable:4214)
#pragma warning(disable:4201)
#include <ws2def.h>
#include <ws2ipdef.h>
#include <mswsockdef.h>
#include <mstcpip.h>
#include <nldef.h>
typedef UINT8 HANDLE8, *PHANDLE8;
typedef UINT16 HANDLE16, *PHANDLE16;
typedef UINT32 HANDLE32, *PHANDLE32;
typedef UINT64 HANDLE64, *PHANDLE64;
#include <ifdef.h>
    (sizeof(ETHERNET_HEADER) + sizeof(SNAP_HEADER))
    max(sizeof(IPV4_HEADER), sizeof(IPV6_HEADER))
typedef enum {
    DlUnicast,
    DlMulticast,
    DlBroadcast
} DL_ADDRESS_TYPE, *PDL_ADDRESS_TYPE;
union _DL_OUI {
    UINT8 Byte[3];
    struct {
        UINT8 Group : 1;
        UINT8 Local : 1;
    };
};
typedef union _DL_OUI DL_OUI, *PDL_OUI;
union _DL_EI48 {
    UINT8 Byte[3];
};
typedef union _DL_EI48 DL_EI48, *PDL_EI48;
union _DL_EUI48 {
    UINT8 Byte[6];
    struct {
        DL_OUI Oui;
        DL_EI48 Ei48;
    };
};
typedef union _DL_EUI48 DL_EUI48, *PDL_EUI48;
C_ASSERT(DL_ADDRESS_LENGTH_MAXIMUM >= sizeof(DL_EUI48));
extern CONST DL_EUI48 eui48_broadcast;
union _DL_EI64 {
    UINT8 Byte[5];
};
typedef union _DL_EI64 DL_EI64, *PDL_EI64;
union _DL_EUI64 {
    UINT8 Byte[8];
    UINT64 Value;
    struct {
        DL_OUI Oui;
        union {
            DL_EI64 Ei64;
            struct {
                UINT8 Type;
                UINT8 Tse;
                DL_EI48 Ei48;
            };
        };
    };
};
typedef union _DL_EUI64 DL_EUI64, *PDL_EUI64;
typedef struct _SNAP_HEADER {
    UINT8 Dsap;
    UINT8 Ssap;
    UINT8 Control;
    UINT8 Oui[3];
    UINT16 Type;
} SNAP_HEADER, *PSNAP_HEADER;
typedef struct _ETHERNET_HEADER {
    DL_EUI48 Destination;
    DL_EUI48 Source;
    union {
        UINT16 Type;
        UINT16 Length;
    };
} ETHERNET_HEADER, *PETHERNET_HEADER;
C_ASSERT(ETH_LENGTH_OF_HEADER == sizeof(ETHERNET_HEADER));
C_ASSERT(ETH_LENGTH_OF_SNAP_HEADER == sizeof(SNAP_HEADER));
typedef struct _VLAN_TAG {
    union {
        UINT16 Tag;
        struct {
            UINT16 VID:12;
            UINT16 CFI:1;
            UINT16 User_Priority:3;
        };
    };
    UINT16 Type;
} VLAN_TAG;
C_ASSERT(ETH_LENGTH_OF_VLAN_HEADER == sizeof(VLAN_TAG));
__inline
DL_ADDRESS_TYPE
EthernetAddressType(
    _In_reads_(sizeof(DL_EUI48)) CONST UCHAR *Address
    )
{
    if (((PDL_EUI48) Address)->Oui.Group) {
        if (RtlEqualMemory(Address, &eui48_broadcast, sizeof(DL_EUI48))) {
            return DlBroadcast;
        }
        return DlMulticast;
    } else {
        return DlUnicast;
    }
}
typedef struct _ICMP_HEADER {
    UINT8 Type;
    UINT8 Code;
    UINT16 Checksum;
} ICMP_HEADER, *PICMP_HEADER;
typedef struct _ICMP_MESSAGE {
    ICMP_HEADER Header;
    union {
        UINT32 Data32[1];
        UINT16 Data16[2];
        UINT8 Data8[4];
    } Data;
} ICMP_MESSAGE, *PICMP_MESSAGE;
typedef struct _IPV4_HEADER {
    union {
        UINT8 VersionAndHeaderLength;
        struct {
            UINT8 HeaderLength : 4;
            UINT8 Version : 4;
        };
    };
    union {
        UINT8 TypeOfServiceAndEcnField;
        struct {
            UINT8 EcnField : 2;
            UINT8 TypeOfService : 6;
        };
    };
    UINT16 TotalLength;
    UINT16 Identification;
    union {
        UINT16 FlagsAndOffset;
        struct {
            UINT16 DontUse1 : 5;
            UINT16 MoreFragments : 1;
            UINT16 DontFragment : 1;
            UINT16 Reserved : 1;
            UINT16 DontUse2 : 8;
        };
    };
    UINT8 TimeToLive;
    UINT8 Protocol;
    UINT16 HeaderChecksum;
    IN_ADDR SourceAddress;
    IN_ADDR DestinationAddress;
} IPV4_HEADER, *PIPV4_HEADER;
C_ASSERT(sizeof(IPV4_HEADER) == 20);
                              (sizeof(IPV4_HEADER) / sizeof(UINT32)))
__inline
UCHAR
Ip4HeaderLengthInBytes(
    _In_ CONST UNALIGNED IPV4_HEADER *Header
    )
{
    return (Header->HeaderLength << 2);
}
typedef struct _IPV4_OPTION_HEADER {
    union {
        UINT8 OptionType;
        struct {
            UINT8 OptionNumber : 5;
            UINT8 OptionClass : 2;
            UINT8 CopiedFlag : 1;
        };
    };
    UINT8 OptionLength;
} IPV4_OPTION_HEADER, *PIPV4_OPTION_HEADER;
C_ASSERT(sizeof(IPV4_OPTION_HEADER) == 2);
typedef enum {
    IP_OPT_EOL = 0x00,
    IP_OPT_NOP = 0x01,
    IP_OPT_SECURITY = 0x82,
    IP_OPT_LSRR = 0x83,
    IP_OPT_TS = 0x44,
    IP_OPT_RR = 0x07,
    IP_OPT_SSRR = 0x89,
    IP_OPT_SID = 0x88,
    IP_OPT_ROUTER_ALERT = 0x94,
    IP_OPT_MULTIDEST = 0x95,
} IPV4_OPTION_TYPE;
typedef struct _IPV4_TIMESTAMP_OPTION {
    IPV4_OPTION_HEADER OptionHeader;
    UINT8 Pointer;
    union {
        UINT8 FlagsOverflow;
        struct {
           UINT8 Flags : 4;
           UINT8 Overflow : 4;
        };
    };
} IPV4_TIMESTAMP_OPTION, *PIPV4_TIMESTAMP_OPTION;
typedef enum {
    IP_OPTION_TIMESTAMP_ONLY = 0,
    IP_OPTION_TIMESTAMP_ADDRESS = 1,
    IP_OPTION_TIMESTAMP_SPECIFIC_ADDRESS = 3
} IP_OPTION_TIMESTAMP_FLAGS;
typedef struct _IPV4_ROUTING_HEADER {
    IPV4_OPTION_HEADER OptionHeader;
    UINT8 Pointer;
#pragma warning(push)
#pragma warning(disable: 4228)
} IPV4_ROUTING_HEADER, UNALIGNED *PIPV4_ROUTING_HEADER;
#pragma warning(pop)
typedef ICMP_HEADER ICMPV4_HEADER, *PICMPV4_HEADER;
typedef ICMP_MESSAGE ICMPV4_MESSAGE, *PICMPV4_MESSAGE;
typedef enum {
    ICMP4_UNREACH_NET = 0,
    ICMP4_UNREACH_HOST = 1,
    ICMP4_UNREACH_PROTOCOL = 2,
    ICMP4_UNREACH_PORT = 3,
    ICMP4_UNREACH_FRAG_NEEDED = 4,
    ICMP4_UNREACH_SOURCEROUTE_FAILED = 5,
    ICMP4_UNREACH_NET_UNKNOWN = 6,
    ICMP4_UNREACH_HOST_UNKNOWN = 7,
    ICMP4_UNREACH_ISOLATED = 8,
    ICMP4_UNREACH_NET_ADMIN = 9,
    ICMP4_UNREACH_HOST_ADMIN = 10,
    ICMP4_UNREACH_NET_TOS = 11,
    ICMP4_UNREACH_HOST_TOS = 12,
    ICMP4_UNREACH_ADMIN = 13,
} ICMP4_UNREACH_CODE, *PICMP4_UNREACH_CODE;
typedef enum {
    ICMP4_TIME_EXCEED_TRANSIT = 0,
    ICMP4_TIME_EXCEED_REASSEMBLY = 1,
} ICMP4_TIME_EXCEED_CODE, *PICMP4_TIME_EXCEED_CODE;
typedef struct _ICMPV4_ROUTER_SOLICIT {
    ICMPV4_MESSAGE RsHeader;
} ICMPV4_ROUTER_SOLICIT, *PICMPV4_ROUTER_SOLICIT;
typedef struct _ICMPV4_ROUTER_ADVERT_HEADER {
    ICMPV4_MESSAGE RaHeader;
} ICMPV4_ROUTER_ADVERT_HEADER, *PICMPV4_ROUTER_ADVERT_HEADER;
typedef struct _ICMPV4_ROUTER_ADVERT_ENTRY {
    IN_ADDR RouterAdvertAddr;
    LONG PreferenceLevel;
} ICMPV4_ROUTER_ADVERT_ENTRY, *PICMPV4_ROUTER_ADVERT_ENTRY;
typedef struct _ICMPV4_TIMESTAMP_MESSAGE {
    ICMPV4_MESSAGE Header;
    UINT32 OriginateTimestamp;
    UINT32 ReceiveTimestamp;
    UINT32 TransmitTimestamp;
} ICMPV4_TIMESTAMP_MESSAGE, *PICMPV4_TIMESTAMP_MESSAGE;
typedef struct _ICMPV4_ADDRESS_MASK_MESSAGE {
    ICMPV4_MESSAGE Header;
    UINT32 AddressMask;
} ICMPV4_ADDRESS_MASK_MESSAGE, *PICMPV4_ADDRESS_MASK_MESSAGE;
typedef struct _ARP_HEADER {
    USHORT HardwareAddressSpace;
    USHORT ProtocolAddressSpace;
    UCHAR HardwareAddressLength;
    UCHAR ProtocolAddressLength;
    USHORT Opcode;
    UCHAR SenderHardwareAddress[0];
} ARP_HEADER, *PARP_HEADER;
typedef enum {
    ARP_REQUEST = 1,
    ARP_RESPONSE = 2
} ARP_OPCODE;
typedef enum {
    ARP_HW_ENET = 1,
    ARP_HW_802 = 6
} ARP_HARDWARE_TYPE;
typedef struct _IGMP_HEADER {
    union {
        struct {
            UINT8 Type : 4;
            UINT8 Version : 4;
        };
        UINT8 VersionType;
    };
    union {
        UINT8 Reserved;
        UINT8 MaxRespTime;
        UINT8 Code;
    };
    UINT16 Checksum;
    IN_ADDR MulticastAddress;
} IGMP_HEADER, *PIGMP_HEADER;
typedef enum {
    IGMP_MAX_RESP_CODE_TYPE_NORMAL = 0,
    IGMP_MAX_RESP_CODE_TYPE_FLOAT
} IGMP_MAX_RESP_CODE_TYPE;
typedef struct _IGMPV3_QUERY_HEADER {
    UINT8 Type;
    union {
        UINT8 MaxRespCode;
        struct {
            UINT8 MaxRespCodeMantissa : 4;
            UINT8 MaxRespCodeExponent : 3;
            UINT8 MaxRespCodeType : 1;
        };
    };
    UINT16 Checksum;
    IN_ADDR MulticastAddress;
    UINT8 QuerierRobustnessVariable : 3;
    UINT8 SuppressRouterSideProcessing : 1;
    UINT8 Reserved : 4;
    union {
        UINT8 QueriersQueryInterfaceCode;
        struct {
            UINT8 QQCMantissa : 4;
            UINT8 QQCExponent : 3;
            UINT8 QQCType : 1;
        };
    };
    UINT16 SourceCount;
} IGMPV3_QUERY_HEADER, *PIGMPV3_QUERY_HEADER;
typedef struct _IGMPV3_REPORT_RECORD_HEADER {
    UINT8 Type;
    UINT8 AuxillaryDataLength;
    UINT16 SourceCount;
    IN_ADDR MulticastAddress;
} IGMPV3_REPORT_RECORD_HEADER, *PIGMPV3_REPORT_RECORD_HEADER;
typedef struct _IGMPV3_REPORT_HEADER_ {
    UINT8 Type;
    UINT8 Reserved;
    UINT16 Checksum;
    UINT16 Reserved2;
    UINT16 RecordCount;
} IGMPV3_REPORT_HEADER, *PIGMPV3_REPORT_HEADER;
typedef struct _IPV6_HEADER {
    UINT32 VersionClassFlow;
    UINT16 PayloadLength;
    UINT8 NextHeader;
    UINT8 HopLimit;
    IN6_ADDR SourceAddress;
    IN6_ADDR DestinationAddress;
} IPV6_HEADER, *PIPV6_HEADER;
    ((UCHAR)((((VersionClassFlow) & IPV6_TRAFFIC_CLASS_MASK) >> 12) + \
             (((VersionClassFlow) & IPV6_TRAFFIC_CLASS_MASK) << 4)))
    ((UCHAR)((((VersionClassFlow) & IPV6_FULL_TRAFFIC_CLASS_MASK) >> 12) + \
             (((VersionClassFlow) & IPV6_FULL_TRAFFIC_CLASS_MASK) << 4)))
typedef struct _IPV6_FRAGMENT_HEADER {
    UINT8 NextHeader;
    UINT8 Reserved;
    union {
        struct {
            UINT16 DontUse1 : 8;
            UINT16 MoreFragments : 1;
            UINT16 ReservedBits : 2;
            UINT16 DontUse2 : 5;
        };
        UINT16 OffsetAndFlags;
    };
    UINT32 Id;
} IPV6_FRAGMENT_HEADER, *PIPV6_FRAGMENT_HEADER;
C_ASSERT(sizeof(IPV6_FRAGMENT_HEADER) == 8);
typedef struct _IPV6_EXTENSION_HEADER {
    UINT8 NextHeader;
    UINT8 Length;
} IPV6_EXTENSION_HEADER, *PIPV6_EXTENSION_HEADER;
    (((Length + sizeof(AUTHENTICATION_HEADER)) / 4) - 2)
typedef struct _IPV6_OPTION_HEADER {
    UINT8 Type;
    UINT8 DataLength;
} IPV6_OPTION_HEADER, *PIPV6_OPTION_HEADER;
typedef enum {
    IP6OPT_PAD1 = 0x00,
    IP6OPT_PADN = 0x01,
    IP6OPT_TUNNEL_LIMIT = 0x04,
    IP6OPT_ROUTER_ALERT = 0x05,
    IP6OPT_JUMBO = 0xc2,
    IP6OPT_NSAP_ADDR = 0xc3,
} IPV6_OPTION_TYPE, *PIPV6_OPTION_TYPE;
typedef struct _IPV6_OPTION_JUMBOGRAM {
    IPV6_OPTION_HEADER Header;
    UINT8 JumbogramLength[4];
} IPV6_OPTION_JUMBOGRAM, *PIPV6_OPTION_JUMBOGRAM;
typedef struct _IPV6_OPTION_ROUTER_ALERT {
    IPV6_OPTION_HEADER Header;
    UINT8 Value[2];
} IPV6_OPTION_ROUTER_ALERT, *PIPV6_OPTION_ROUTER_ALERT;
typedef _Struct_size_bytes_(_Inexpressible_(Length)) struct _IPV6_ROUTING_HEADER {
    UCHAR NextHeader;
    UCHAR Length;
    UCHAR RoutingType;
    UCHAR SegmentsLeft;
    UCHAR Reserved[4];
} IPV6_ROUTING_HEADER, *PIPV6_ROUTING_HEADER;
typedef ICMP_HEADER ICMPV6_HEADER, *PICMPV6_HEADER;
typedef ICMP_MESSAGE ICMPV6_MESSAGE, *PICMPV6_MESSAGE;
typedef struct nd_router_solicit {
    ICMPV6_MESSAGE nd_rs_hdr;
} ND_ROUTER_SOLICIT_HEADER, *PND_ROUTER_SOLICIT_HEADER;
typedef struct nd_router_advert {
    ICMPV6_MESSAGE nd_ra_hdr;
    UINT32 nd_ra_reachable;
    UINT32 nd_ra_retransmit;
} ND_ROUTER_ADVERT_HEADER, *PND_ROUTER_ADVERT_HEADER;
typedef union _IPV6_ROUTER_ADVERTISEMENT_FLAGS {
    struct {
        UINT8 Reserved : 3;
        UINT8 Preference : 2;
        UINT8 HomeAgent : 1;
        UINT8 OtherStatefulConfiguration : 1;
        UINT8 ManagedAddressConfiguration : 1;
    };
    UINT8 Value;
} IPV6_ROUTER_ADVERTISEMENT_FLAGS, *PIPV6_ROUTER_ADVERTISEMENT_FLAGS;
typedef struct nd_neighbor_solicit {
    ICMPV6_MESSAGE nd_ns_hdr;
    IN6_ADDR nd_ns_target;
} ND_NEIGHBOR_SOLICIT_HEADER, *PND_NEIGHBOR_SOLICIT_HEADER;
typedef struct nd_neighbor_advert {
    ICMPV6_MESSAGE nd_na_hdr;
    IN6_ADDR nd_na_target;
} ND_NEIGHBOR_ADVERT_HEADER, *PND_NEIGHBOR_ADVERT_HEADER;
typedef union _IPV6_NEIGHBOR_ADVERTISEMENT_FLAGS {
    struct {
        UINT8 Reserved1 : 5;
        UINT8 Override : 1;
        UINT8 Solicited : 1;
        UINT8 Router : 1;
        UINT8 Reserved2[3];
    };
    UINT32 Value;
} IPV6_NEIGHBOR_ADVERTISEMENT_FLAGS, *PIPV6_NEIGHBOR_ADVERTISEMENT_FLAGS;
typedef struct nd_redirect {
    ICMPV6_MESSAGE nd_rd_hdr;
    IN6_ADDR nd_rd_target;
    IN6_ADDR nd_rd_dst;
} ND_REDIRECT_HEADER, *PND_REDIRECT_HEADER;
typedef struct nd_opt_hdr {
    UINT8 nd_opt_type;
    UINT8 nd_opt_len;
} ND_OPTION_HDR, *PND_OPTION_HDR;
typedef enum {
    ND_OPT_SOURCE_LINKADDR = 1,
    ND_OPT_TARGET_LINKADDR = 2,
    ND_OPT_PREFIX_INFORMATION = 3,
    ND_OPT_REDIRECTED_HEADER = 4,
    ND_OPT_MTU = 5,
    ND_OPT_NBMA_SHORTCUT_LIMIT = 6,
    ND_OPT_ADVERTISEMENT_INTERVAL = 7,
    ND_OPT_HOME_AGENT_INFORMATION = 8,
    ND_OPT_SOURCE_ADDR_LIST = 9,
    ND_OPT_TARGET_ADDR_LIST = 10,
    ND_OPT_ROUTE_INFO = 24,
    ND_OPT_RDNSS = 25,
    ND_OPT_DNSSL = 31,
} ND_OPTION_TYPE, *PND_OPTION_TYPE;
typedef struct nd_opt_prefix_info {
    UINT8 nd_opt_pi_type;
    UINT8 nd_opt_pi_len;
    UINT8 nd_opt_pi_prefix_len;
    union {
        UINT8 nd_opt_pi_flags_reserved;
        struct {
            UINT8 Route : 1;
            UINT8 Reserved1 : 3;
            UINT8 SitePrefix : 1;
            UINT8 RouterAddress : 1;
            UINT8 Autonomous : 1;
            UINT8 OnLink : 1;
        } Flags;
    };
    UINT32 nd_opt_pi_valid_time;
    UINT32 nd_opt_pi_preferred_time;
    union {
        UINT32 nd_opt_pi_reserved2;
        struct {
            UINT8 nd_opt_pi_reserved3[3];
            UINT8 nd_opt_pi_site_prefix_len;
        };
    };
    IN6_ADDR nd_opt_pi_prefix;
} ND_OPTION_PREFIX_INFO, *PND_OPTION_PREFIX_INFO;
typedef struct nd_opt_rd_hdr {
    UINT8 nd_opt_rh_type;
    UINT8 nd_opt_rh_len;
    UINT16 nd_opt_rh_reserved1;
    UINT32 nd_opt_rh_reserved2;
} ND_OPTION_RD_HDR, *PND_OPTION_RD_HDR;
typedef struct nd_opt_mtu {
    UINT8 nd_opt_mtu_type;
    UINT8 nd_opt_mtu_len;
    UINT16 nd_opt_mtu_reserved;
    UINT32 nd_opt_mtu_mtu;
} ND_OPTION_MTU, *PND_OPTION_MTU;
typedef struct nd_opt_route_info {
    UINT8 nd_opt_ri_type;
    UINT8 nd_opt_ri_len;
    UINT8 nd_opt_ri_prefix_len;
    union {
        UINT8 nd_opt_ri_flags_reserved;
        struct {
            UINT8 Reserved : 3;
            UINT8 Preference : 2;
        } Flags;
    };
    UINT32 nd_opt_ri_route_lifetime;
    IN6_ADDR nd_opt_ri_prefix;
} ND_OPTION_ROUTE_INFO, *PND_OPTION_ROUTE_INFO;
typedef struct nd_opt_rdnss {
    UINT8 nd_opt_rdnss_type;
    UINT8 nd_opt_rdnss_len;
    UINT16 nd_opt_rdnss_reserved;
    UINT32 nd_opt_rdnss_lifetime;
} ND_OPTION_RDNSS, *PND_OPTION_RDNSS;
typedef struct nd_opt_dnssl {
    UINT8 nd_opt_dnssl_type;
    UINT8 nd_opt_dnssl_len;
    UINT16 nd_opt_dnssl_reserved;
    UINT32 nd_opt_dnssl_lifetime;
} ND_OPTION_DNSSL, *PND_OPTION_DNSSL;
typedef struct _MLD_HEADER {
    ICMPV6_HEADER IcmpHeader;
    UINT16 MaxRespTime;
    UINT16 Reserved;
    IN6_ADDR MulticastAddress;
} MLD_HEADER, *PMLD_HEADER;
typedef enum {
    MLD_MAX_RESP_CODE_TYPE_NORMAL = 0,
    MLD_MAX_RESP_CODE_TYPE_FLOAT
} MLD_MAX_RESP_CODE_TYPE;
typedef struct _MLDV2_QUERY_HEADER {
    ICMPV6_HEADER IcmpHeader;
    union {
        UINT16 MaxRespCode;
        struct {
            UINT16 MaxRespCodeMantissaHi : 4;
            UINT16 MaxRespCodeExponent : 3;
            UINT16 MaxRespCodeType : 1;
            UINT16 MaxRespCodeMantissaLo : 8;
        };
    };
    UINT16 Reserved;
    IN6_ADDR MulticastAddress;
    UINT8 QuerierRobustnessVariable : 3;
    UINT8 SuppressRouterSideProcessing : 1;
    UINT8 QueryReserved : 4;
    union {
        UINT8 QueriersQueryInterfaceCode;
        struct {
            UINT8 QQCMantissa : 4;
            UINT8 QQCExponent : 3;
            UINT8 QQCType : 1;
        };
    };
    UINT16 SourceCount;
} MLDV2_QUERY_HEADER, *PMLDV2_QUERY_HEADER;
typedef struct _MLDV2_REPORT_RECORD_HEADER {
    UINT8 Type;
    UINT8 AuxillaryDataLength;
    UINT16 SourceCount;
    IN6_ADDR MulticastAddress;
} MLDV2_REPORT_RECORD_HEADER, *PMLDV2_REPORT_RECORD_HEADER;
typedef struct _MLDV2_REPORT_HEADER {
    ICMPV6_HEADER IcmpHeader;
    UINT16 Reserved;
    UINT16 RecordCount;
} MLDV2_REPORT_HEADER, *PMLDV2_REPORT_HEADER;
__inline
UINT32
In6IsEmbeddedV4AddrPrefixLengthValid(
    _In_ ULONG PrefixLength
    )
{
    if ((PrefixLength % IN6_EMBEDDEDV4_BITS_IN_BYTE) != 0) {
        return FALSE;
    }
    if ((PrefixLength != 32) &&
        (PrefixLength != 40) &&
        (PrefixLength != 48) &&
        (PrefixLength != 56) &&
        (PrefixLength != 64) &&
        (PrefixLength != 96)) {
        return FALSE;
    }
    return TRUE;
}
_Success_(return)
__inline
UINT32
In6ExtractEmbeddedV4AddrFromV6(
    _In_ const IN6_ADDR *Ipv6Address,
    _In_ ULONG PrefixLength,
    _Out_ IN_ADDR *Ipv4Address
    )
{
    IN6_ADDR TmpAddress;
    if (!In6IsEmbeddedV4AddrPrefixLengthValid(PrefixLength)) {
        return FALSE;
    }
    if (PrefixLength < 96) {
        RtlCopyMemory(
            &TmpAddress,
            Ipv6Address,
            sizeof(IN6_ADDR));
        RtlMoveMemory(
            (((PUCHAR)&TmpAddress) + IN6_EMBEDDEDV4_UOCTET_POSITION),
            (((PUCHAR)&TmpAddress) + IN6_EMBEDDEDV4_UOCTET_POSITION + 1),
            sizeof(IN6_ADDR) - (IN6_EMBEDDEDV4_UOCTET_POSITION + 1));
        RtlCopyMemory(
            Ipv4Address,
            (((PUCHAR) &TmpAddress) + PrefixLength / IN6_EMBEDDEDV4_BITS_IN_BYTE),
            sizeof(IN_ADDR));
    } else {
        RtlCopyMemory(
            Ipv4Address,
            (((PUCHAR) Ipv6Address) + PrefixLength / IN6_EMBEDDEDV4_BITS_IN_BYTE),
            sizeof(IN_ADDR));
    }
    return TRUE;
}
_Success_(return)
__inline
UINT32
In6SetAddrV4Embedded(
    _In_ const IN6_ADDR *Prefix,
    _In_ ULONG PrefixLength,
    _In_ IN_ADDR *Ipv4Address,
    _Out_ IN6_ADDR *Ipv6Address
    )
{
    ULONG PrefixByteLength;
    if (!In6IsEmbeddedV4AddrPrefixLengthValid(PrefixLength)) {
        return FALSE;
    }
    PrefixByteLength = PrefixLength / IN6_EMBEDDEDV4_BITS_IN_BYTE;
    RtlCopyMemory(Ipv6Address, Prefix, PrefixByteLength);
    RtlCopyMemory(
        (((PUCHAR)Ipv6Address) + PrefixByteLength),
        Ipv4Address,
        sizeof(IN_ADDR));
    if (PrefixLength < 96) {
        RtlZeroMemory(
            (((PUCHAR)Ipv6Address) + PrefixByteLength + sizeof(IN_ADDR)),
            sizeof(IN6_ADDR) - (PrefixByteLength + sizeof(IN_ADDR)));
        RtlMoveMemory(
            (((PUCHAR)Ipv6Address) + IN6_EMBEDDEDV4_UOCTET_POSITION + 1),
            (((PUCHAR)Ipv6Address) + IN6_EMBEDDEDV4_UOCTET_POSITION),
            sizeof(IN6_ADDR) - (IN6_EMBEDDEDV4_UOCTET_POSITION + 1));
        *(((PUCHAR)Ipv6Address) + IN6_EMBEDDEDV4_UOCTET_POSITION) = 0;
    }
    return TRUE;
}
typedef UINT32 SEQ_NUM, *PSEQ_NUM;
#pragma pack(push, 1)
typedef struct tcp_hdr {
    UINT16 th_sport;
    UINT16 th_dport;
    SEQ_NUM th_seq;
    SEQ_NUM th_ack;
    UINT8 th_x2 : 4;
    UINT8 th_len : 4;
    UINT8 th_flags;
    UINT16 th_win;
    UINT16 th_sum;
    UINT16 th_urp;
} TCP_HDR
    , *PTCP_HDR;
#pragma pack(pop)
    (TH_FIN | TH_SYN | TH_RST | TH_PSH | TH_ACK | TH_URG | TH_ECE | TH_CWR)
    (TH_FIN | TH_SYN | TH_RST | TH_ACK)
#pragma pack(push, 1)
typedef struct tcp_opt_mss {
    UINT8 Kind;
    UINT8 Length;
    UINT16 Mss;
} TCP_OPT_MSS;
typedef struct tcp_opt_ws {
    UINT8 Kind;
    UINT8 Length;
    UINT8 ShiftCnt;
} TCP_OPT_WS;
typedef struct tcp_opt_sack_permitted {
    UINT8 Kind;
    UINT8 Length;
} TCP_OPT_SACK_PERMITTED;
typedef struct tcp_opt_sack {
    UINT8 Kind;
    UINT8 Length;
    struct tcp_opt_sack_block {
        SEQ_NUM Left;
        SEQ_NUM Right;
    } Block[0];
} TCP_OPT_SACK;
typedef struct tcp_opt_ts {
    UINT8 Kind;
    UINT8 Length;
    UINT32 Val;
    UINT32 EcR;
} TCP_OPT_TS;
typedef struct tcp_opt_unknown {
    UINT8 Kind;
    UINT8 Length;
} TCP_OPT_UNKNOWN;
typedef struct tcp_opt_fastopen {
    UINT8 Kind;
    UINT8 Length;
    UINT8 Cookie[0];
} TCP_OPT_FASTOPEN;
#pragma pack(pop)
#include <ifdef.h>
typedef struct DL_TUNNEL_ADDRESS {
    COMPARTMENT_ID CompartmentId;
    SCOPE_ID ScopeId;
    UCHAR IpAddress[0];
} DL_TUNNEL_ADDRESS, *PDL_TUNNEL_ADDRESS;
    (FIELD_OFFSET(DL_TUNNEL_ADDRESS, IpAddress) + (AddressBytes))
    DL_SIZEOF_TUNNEL_ADDRESS(sizeof(IN_ADDR))
    DL_SIZEOF_TUNNEL_ADDRESS(sizeof(IN6_ADDR))
C_ASSERT(DL_ADDRESS_LENGTH_MAXIMUM >= DL_SIZEOF_IPV4_TUNNEL_ADDRESS);
C_ASSERT(DL_ADDRESS_LENGTH_MAXIMUM >= DL_SIZEOF_IPV6_TUNNEL_ADDRESS);
typedef enum _TUNNEL_SUB_TYPE {
    TUNNEL_SUB_TYPE_NONE = 0,
    TUNNEL_SUB_TYPE_CP = 1,
    TUNNEL_SUB_TYPE_IPTLS = 2,
    TUNNEL_SUB_TYPE_HA = 3
} TUNNEL_SUB_TYPE, *PTUNNEL_SUB_TYPE;
#pragma pack(push, 1)
typedef struct DL_TEREDO_ADDRESS {
    UINT8 Reserved[6];
    union {
        DL_EUI64 Eui64;
        struct {
            USHORT Flags;
            USHORT MappedPort;
            IN_ADDR MappedAddress;
        };
    };
} DL_TEREDO_ADDRESS, *PDL_TEREDO_ADDRESS;
typedef struct DL_TEREDO_ADDRESS_PRV {
    UINT8 Reserved[6];
    union {
        DL_EUI64 Eui64;
        struct {
            USHORT Flags;
            USHORT MappedPort;
            IN_ADDR MappedAddress;
            IN_ADDR LocalAddress;
            IF_INDEX InterfaceIndex;
            USHORT LocalPort;
            DL_EUI48 DlDestination;
        };
    };
} DL_TEREDO_ADDRESS_PRV, *PDL_TEREDO_ADDRESS_PRV;
#pragma pack(pop)
#pragma pack(push, 1)
typedef struct _IPTLS_METADATA {
    ULONGLONG SequenceNumber;
} IPTLS_METADATA,*PIPTLS_METADATA;
#pragma pack(pop)
C_ASSERT(DL_ADDRESS_LENGTH_MAXIMUM >= sizeof(DL_TEREDO_ADDRESS));
#include <ifdef.h>
typedef enum _NPI_MODULEID_TYPE {
    MIT_GUID = 1,
    MIT_IF_LUID,
} NPI_MODULEID_TYPE;
typedef struct _NPI_MODULEID {
    USHORT Length;
    NPI_MODULEID_TYPE Type;
    [switch_type(NPI_MODULEID_TYPE), switch_is(Type)]
    union
    {
        [case(MIT_GUID)]
        GUID Guid;
        [case(MIT_IF_LUID)]
        LUID IfLuid;
        [default];
    };
} NPI_MODULEID;
typedef CONST NPI_MODULEID *PNPI_MODULEID;
__inline
BOOLEAN
NmrIsEqualNpiModuleId(
    _In_ PNPI_MODULEID ModuleId1,
    _In_ PNPI_MODULEID ModuleId2
    )
{
    if (ModuleId1->Type == ModuleId2->Type) {
        if (ModuleId1->Type == MIT_GUID) {
            return !!InlineIsEqualGUID(ModuleId1->Guid, ModuleId2->Guid);
        } else if (ModuleId1->Type == MIT_IF_LUID) {
            return (BOOLEAN)RtlEqualMemory(&ModuleId1->IfLuid,
                                           &ModuleId2->IfLuid,
                                           sizeof(LUID));
        }
    }
    return FALSE;
}
typedef GUID NPIID;
typedef CONST NPIID *PNPIID;
extern CONST NPI_MODULEID NPI_MS_NMR_MODULEID;
    (NDIS_PACKET_TYPE_ALL_MULTICAST | NDIS_PACKET_TYPE_PROMISCUOUS)
extern CONST NPIID NPI_FRAMING_LAYER_ID;
extern CONST NPI_MODULEID NPI_MS_TUN_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL48_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL68_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL4L_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL6L_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL4T_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL6T_MODULEID;
extern CONST NPI_MODULEID NPI_MS_WANARPV4_MODULEID;
extern CONST NPI_MODULEID NPI_MS_WANARPV6_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FL_WANARP_MODULEID;
extern CONST NPI_MODULEID NPI_MS_FLRDMA_MODULEID;
extern CONST NPI_MODULEID NPI_MS_NDIS_MODULEID;
extern CONST NPIID NPI_NETWORK_LAYER_ID;
extern CONST NPI_MODULEID NPI_MS_IPV6_MODULEID;
extern CONST NPI_MODULEID NPI_MS_IPV4_MODULEID;
typedef enum {
    FallbackIndexTcpFastopen,
    FallbackIndexMax
} FALLBACK_INDEX;
#pragma warning(pop)
#endif
#pragma endregion
}
