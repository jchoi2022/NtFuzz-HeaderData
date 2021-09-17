       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef union _IN_ADDR_IPV4 {
    ULONG Addr;
    UCHAR AddrBytes[4];
} IN_ADDR_IPV4, *LPIN_ADDR_IPV4;
typedef struct _IN_ADDR_IPV6 {
    UCHAR Addr[16];
} IN_ADDR_IPV6, *LPIN_ADDR_IPV6;
typedef const IN_ADDR_IPV6 *LPCIN_ADDR_IPV6;
typedef struct _RSVP_FILTERSPEC_V4 {
    IN_ADDR_IPV4 Address;
    USHORT Unused;
    USHORT Port;
} RSVP_FILTERSPEC_V4, *LPRSVP_FILTERSPEC_V4;
typedef struct _RSVP_FILTERSPEC_V6 {
    IN_ADDR_IPV6 Address;
    USHORT UnUsed;
    USHORT Port;
} RSVP_FILTERSPEC_V6, *LPRSVP_FILTERSPEC_V6;
typedef struct _RSVP_FILTERSPEC_V6_FLOW {
    IN_ADDR_IPV6 Address;
    UCHAR UnUsed;
    UCHAR FlowLabel[3];
} RSVP_FILTERSPEC_V6_FLOW, *LPRSVP_FILTERSPEC_V6_FLOW;
typedef struct _RSVP_FILTERSPEC_V4_GPI {
    IN_ADDR_IPV4 Address;
    ULONG GeneralPortId;
} RSVP_FILTERSPEC_V4_GPI, *LPRSVP_FILTERSPEC_V4_GPI;
typedef struct _RSVP_FILTERSPEC_V6_GPI {
    IN_ADDR_IPV6 Address;
    ULONG GeneralPortId;
} RSVP_FILTERSPEC_V6_GPI, *LPRSVP_FILTERSPEC_V6_GPI;
typedef enum {
        FILTERSPECV4 = 1,
        FILTERSPECV6,
        FILTERSPECV6_FLOW,
        FILTERSPECV4_GPI,
        FILTERSPECV6_GPI,
        FILTERSPEC_END
} FilterType;
typedef struct _RSVP_FILTERSPEC {
    FilterType Type;
    union {
        RSVP_FILTERSPEC_V4 FilterSpecV4;
        RSVP_FILTERSPEC_V6 FilterSpecV6;
        RSVP_FILTERSPEC_V6_FLOW FilterSpecV6Flow;
        RSVP_FILTERSPEC_V4_GPI FilterSpecV4Gpi;
        RSVP_FILTERSPEC_V6_GPI FilterSpecV6Gpi;
    };
} RSVP_FILTERSPEC, *LPRSVP_FILTERSPEC;
typedef struct _FLOWDESCRIPTOR {
    FLOWSPEC FlowSpec;
    ULONG NumFilters;
    LPRSVP_FILTERSPEC FilterList;
} FLOWDESCRIPTOR, *LPFLOWDESCRIPTOR;
typedef struct _RSVP_POLICY {
    USHORT Len;
    USHORT Type;
    UCHAR Info[4];
} RSVP_POLICY, *LPRSVP_POLICY;
typedef const RSVP_POLICY *LPCRSVP_POLICY;
typedef struct _RSVP_POLICY_INFO {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG NumPolicyElement;
    RSVP_POLICY PolicyElement[1];
} RSVP_POLICY_INFO, *LPRSVP_POLICY_INFO;
typedef struct _RSVP_RESERVE_INFO {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG Style;
    ULONG ConfirmRequest;
    LPRSVP_POLICY_INFO PolicyElementList;
    ULONG NumFlowDesc;
    LPFLOWDESCRIPTOR FlowDescList;
} RSVP_RESERVE_INFO, *LPRSVP_RESERVE_INFO;
typedef const RSVP_RESERVE_INFO *LPCRSVP_RESERVE_INFO;
typedef struct _RSVP_STATUS_INFO {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG StatusCode;
    ULONG ExtendedStatus1;
    ULONG ExtendedStatus2;
} RSVP_STATUS_INFO, *LPRSVP_STATUS_INFO;
typedef const RSVP_STATUS_INFO *LPCRSVP_STATUS_INFO;
typedef struct _QOS_DESTADDR {
    QOS_OBJECT_HDR ObjectHdr;
    const struct sockaddr * SocketAddress;
    ULONG SocketAddressLength;
} QOS_DESTADDR, *LPQOS_DESTADDR;
typedef const QOS_DESTADDR * LPCQOS_DESTADDR;
typedef struct _AD_GENERAL_PARAMS{
    ULONG IntServAwareHopCount;
    ULONG PathBandwidthEstimate;
    ULONG MinimumLatency;
    ULONG PathMTU;
    ULONG Flags;
} AD_GENERAL_PARAMS, *LPAD_GENERAL_PARAMS;
typedef struct _AD_GUARANTEED {
    ULONG CTotal;
    ULONG DTotal;
    ULONG CSum;
    ULONG DSum;
} AD_GUARANTEED, *LPAD_GUARANTEED;
typedef struct _PARAM_BUFFER {
    ULONG ParameterId;
    ULONG Length;
    UCHAR Buffer[1];
} PARAM_BUFFER, *LPPARAM_BUFFER;
typedef struct _CONTROL_SERVICE {
    ULONG Length;
    SERVICETYPE Service;
    AD_GENERAL_PARAMS Overrides;
    union {
        AD_GUARANTEED Guaranteed;
        PARAM_BUFFER ParamBuffer[1];
    };
} CONTROL_SERVICE, *LPCONTROL_SERVICE;
typedef struct _RSVP_ADSPEC {
    QOS_OBJECT_HDR ObjectHdr;
    AD_GENERAL_PARAMS GeneralParams;
    ULONG NumberOfServices;
    CONTROL_SERVICE Services[1];
} RSVP_ADSPEC, *LPRSVP_ADSPEC;
#endif
#pragma endregion
