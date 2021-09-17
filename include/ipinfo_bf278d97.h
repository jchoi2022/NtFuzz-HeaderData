#pragma warning(push)
#pragma warning(disable:4201)
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned int uint;
typedef struct IPSNMPInfo {
    ulong ipsi_forwarding;
    ulong ipsi_defaultttl;
    ulong ipsi_inreceives;
    ulong ipsi_inhdrerrors;
    ulong ipsi_inaddrerrors;
    ulong ipsi_forwdatagrams;
    ulong ipsi_inunknownprotos;
    ulong ipsi_indiscards;
    ulong ipsi_indelivers;
    ulong ipsi_outrequests;
    ulong ipsi_routingdiscards;
    ulong ipsi_outdiscards;
    ulong ipsi_outnoroutes;
    ulong ipsi_reasmtimeout;
    ulong ipsi_reasmreqds;
    ulong ipsi_reasmoks;
    ulong ipsi_reasmfails;
    ulong ipsi_fragoks;
    ulong ipsi_fragfails;
    ulong ipsi_fragcreates;
    ulong ipsi_numif;
    ulong ipsi_numaddr;
    ulong ipsi_numroutes;
} IPSNMPInfo;
typedef struct ICMPStats {
    ulong icmps_msgs;
    ulong icmps_errors;
    ulong icmps_destunreachs;
    ulong icmps_timeexcds;
    ulong icmps_parmprobs;
    ulong icmps_srcquenchs;
    ulong icmps_redirects;
    ulong icmps_echos;
    ulong icmps_echoreps;
    ulong icmps_timestamps;
    ulong icmps_timestampreps;
    ulong icmps_addrmasks;
    ulong icmps_addrmaskreps;
} ICMPStats;
typedef struct ICMPSNMPInfo {
    ICMPStats icsi_instats;
    ICMPStats icsi_outstats;
} ICMPSNMPInfo;
typedef struct ICMPv6Stats {
    ulong icmps_msgs;
    ulong icmps_errors;
    ulong icmps_typecount[256];
} ICMPv6Stats;
typedef struct ICMPv6SNMPInfo {
    ICMPv6Stats icsi_instats;
    ICMPv6Stats icsi_outstats;
} ICMPv6SNMPInfo;
typedef struct IPAddrEntry {
    ulong iae_addr;
    ulong iae_index;
    ulong iae_mask;
    ulong iae_bcastaddr;
    ulong iae_reasmsize;
    ushort iae_context;
    ushort iae_pad;
} IPAddrEntry;
typedef struct IPRouteEntry_V1 {
    ulong ire_dest;
    ulong ire_index;
    ulong ire_metric1;
    ulong ire_metric2;
    ulong ire_metric3;
    ulong ire_metric4;
    ulong ire_nexthop;
    ulong ire_type;
    ulong ire_proto;
    ulong ire_age;
    ulong ire_mask;
    ulong ire_metric5;
    void *ire_context;
} IPRouteEntry_V1;
typedef struct IPRouteEntry_V2 {
    ulong ire_dest;
    ulong ire_index;
    ulong ire_metric1;
    ulong ire_metric2;
    ulong ire_metric3;
    ulong ire_metric4;
    ulong ire_nexthop;
    ulong ire_type;
    ulong ire_proto;
    ulong ire_age;
    ulong ire_mask;
    ulong ire_metric5;
    void *ire_context;
} IPRouteEntry_V2;
typedef struct IPRouteEntry_V3 {
    ulong ire_dest;
    ulong ire_index;
    ulong ire_metric1;
    ulong ire_metric2;
    ulong ire_metric3;
    ulong ire_metric4;
    ulong ire_nexthop;
    ulong ire_type;
    ulong ire_proto;
    ulong ire_age;
    ulong ire_mask;
    ulong ire_metric5;
    ulong ire_context;
} IPRouteEntry_V3;
typedef IPRouteEntry_V3 IPRouteEntry;
typedef struct IPRouteBlock {
    ulong numofroutes;
    IPRouteEntry route[1];
} IPRouteBlock;
typedef struct IPRouteNextHopEntry_V1 {
    ulong ine_iretype;
    ulong ine_nexthop;
    ulong ine_ifindex;
    void *ine_context;
} IPRouteNextHopEntry_V1;
typedef struct IPRouteNextHopEntry_V2 {
    ulong ine_iretype;
    ulong ine_nexthop;
    ulong ine_ifindex;
    ulong ine_context;
} IPRouteNextHopEntry_V2;
typedef IPRouteNextHopEntry_V2 IPRouteNextHopEntry;
typedef struct IPMultihopRouteEntry_V1 {
    ulong imre_numnexthops;
    IPRouteEntry imre_routeinfo;
    _Field_size_(imre_numnexthops) IPRouteNextHopEntry imre_morenexthops[1];
} IPMultihopRouteEntry_V1;
typedef struct IPMultihopRouteEntry_V2 {
    ulong imre_numnexthops;
    ulong imre_flags;
    IPRouteEntry imre_routeinfo;
    _Field_size_(imre_numnexthops) IPRouteNextHopEntry imre_morenexthops[1];
} IPMultihopRouteEntry_V2;
typedef IPMultihopRouteEntry_V2 IPMultihopRouteEntry;
typedef enum {
    IPNotifyNotification = 0,
    IPNotifySynchronization,
    IPNotifyMaximumVersion
} IPNotifyVersion;
typedef struct IPNotifyData {
    ulong Version;
    ulong Add;
    char Info[1];
} IPNotifyData, *PIPNotifyData;
typedef struct IPNotifyOutput {
    ulong ino_addr;
    ulong ino_mask;
    ulong ino_info[6];
} IPNotifyOutput, *PIPNotifyOutput;
typedef union IPRouteNotifyOutput {
    IPNotifyOutput irno_info;
    struct {
        ulong irno_dest;
        ulong irno_mask;
        ulong irno_nexthop;
        ulong irno_proto;
        ulong irno_ifindex;
        ulong irno_metric;
        ulong irno_flags;
    };
} IPRouteNotifyOutput, *PIPRouteNotifyOutput;
typedef struct IPRouteLookupData {
    ulong Version;
    ulong DestAdd;
    ulong SrcAdd;
    char Info[1];
} IPRouteLookupData, *PIPRouteLookupData;
typedef struct AddrXlatInfo {
    ulong axi_count;
    ulong axi_index;
} AddrXlatInfo;
typedef struct IPInterfaceInfo {
    ulong iii_flags;
    ulong iii_mtu;
    ulong iii_speed;
    ulong iii_addrlength;
    uchar iii_addr[1];
} IPInterfaceInfo;
#include <in6addr.h>
typedef struct IP6RouteEntry_V1 {
    ulong ire_Length;
    struct in6_addr ire_Source;
    ulong ire_ScopeId;
    ulong ire_IfIndex;
} IP6RouteEntry_V1;
typedef struct IP6RouteEntry_V2 {
    ulong ire_Length;
    ulong ire_Type;
    ulong ire_IfIndex;
    ulong ire_SourceScopeId;
    ulong ire_NextHopScopeId;
    struct in6_addr ire_Source;
    struct in6_addr ire_NextHop;
} IP6RouteEntry_V2;
typedef IP6RouteEntry_V1 IP6RouteEntry;
#pragma warning(pop)
