       
typedef enum {
    NLBHookApiInvalid = 0,
    NLBHookApiV3 = 3,
    NLBHookApiMax = 0xFFFF,
} NLB_HOOK_API_VERSION;
typedef enum {
    NLBSessionStateChange,
    NLBSYNAttackBegins,
    NLBSYNAttackEnds,
    NLBTimerStarvationBegins,
    NLBTimerStarvationEnds
} NLB_PUBLIC_CALLBACK_CODE;
#pragma pack(push)
#pragma pack()
typedef struct NLBTCPAddressInfo_v1 {
    ULONG RemoteIPAddress;
    ULONG LocalIPAddress;
    USHORT RemotePort;
    USHORT LocalPort;
} NLBTCPAddressInfo_v1;
typedef struct NLBTCPAddressInfo_v2 {
    ADDRESS_FAMILY AddressFamily;
    const UCHAR * RemoteIPAddress;
    const UCHAR * LocalIPAddress;
    USHORT RemotePort;
    USHORT LocalPort;
} NLBTCPAddressInfo_v2;
typedef NLBTCPAddressInfo_v2 NLBTCPAddressInfo;
typedef struct NLBTCPConnectionInfo {
    ULONG PreviousState;
    ULONG CurrentState;
    ULONG IPInterface;
    NLBTCPAddressInfo Address;
} NLBTCPConnectionInfo;
typedef struct NLBConnectionInfo {
    UCHAR Protocol;
    union {
        NLBTCPConnectionInfo * pTCPInfo;
    };
} NLBConnectionInfo;
#pragma pack(pop)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef VOID (* NLBHookDeregister) (
    _In_z_ const PWCHAR pHookIdentifier,
    _In_ HANDLE RegisteringEntity,
    _In_ ULONG Flags);
typedef enum {
    NLB_FILTER_HOOK_PROCEED_WITH_HASH,
    NLB_FILTER_HOOK_REVERSE_HASH,
    NLB_FILTER_HOOK_FORWARD_HASH,
    NLB_FILTER_HOOK_ACCEPT_UNCONDITIONALLY,
    NLB_FILTER_HOOK_REJECT_UNCONDITIONALLY,
    NLB_FILTER_HOOK_USE_MODIFIED_TUPLE
}NLB_FILTER_HOOK_DIRECTIVE;
typedef UCHAR HOOK_IP_ADDRESS_V4[HOOK_IPv4_ADDRESS_NUM_FIELDS];
typedef UCHAR HOOK_IP_ADDRESS_V6[HOOK_IPv6_ADDRESS_NUM_FIELDS];
typedef enum {
    IP_INVALID = 0,
    IP_v4,
    IP_v6
} HOOK_IP_ADDRESS_TYPE;
typedef struct _HOOK_IP_ADDRESS {
    HOOK_IP_ADDRESS_TYPE Type;
    union
    {
        UCHAR Address;
        HOOK_IP_ADDRESS_V4 v4;
        HOOK_IP_ADDRESS_V6 v6;
    };
} HOOK_IP_ADDRESS, * PHOOK_IP_ADDRESS;
typedef struct _NLB_HOOK_IP_TUPLE {
    struct {
        HOOK_IP_ADDRESS IP;
        USHORT Port;
    } Source;
    struct {
        HOOK_IP_ADDRESS IP;
        USHORT Port;
    } Destination;
    ULONG Flags;
} NLB_HOOK_IP_TUPLE, * PNLB_HOOK_IP_TUPLE;
typedef struct _SEND_RECEIVE_HOOK_INFO {
    _In_ NLB_HOOK_API_VERSION Version;
    _In_z_ const WCHAR * pAdapter;
    _In_ IF_INDEX IFIndex;
    _In_opt_ const NET_BUFFER * pPacket;
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR * pMediaHeader;
    _In_ ULONG cMediaHeaderLength;
    _In_reads_bytes_(cPayloadLength) const UCHAR * pPayload;
    _In_ ULONG cPayloadLength;
    _In_ ULONG Flags;
    _In_ VOID * Reserved;
    _In_ NLB_HOOK_IP_TUPLE NewTuple;
} SEND_RECEIVE_HOOK_INFO, * PSEND_RECEIVE_HOOK_INFO;
typedef struct _QUERY_HOOK_INFO {
    _In_ NLB_HOOK_API_VERSION Version;
    _In_z_ const WCHAR * pAdapter;
    _In_ IF_INDEX IFIndex;
    _In_ ADDRESS_FAMILY AddressFamily;
    _When_(AddressFamily==2, _In_reads_bytes_(4))
    _When_(AddressFamily==23, _In_reads_bytes_(16))
        const UCHAR * ServerIPAddress;
    _In_ USHORT ServerPort;
    _When_(AddressFamily==2, _In_reads_bytes_(4))
    _When_(AddressFamily==23, _In_reads_bytes_(16))
        const UCHAR * ClientIPAddress;
    _In_ USHORT ClientPort;
    _In_ USHORT Protocol;
    _In_ BOOLEAN bReceiveContext;
    _In_ ULONG Flags;
    _In_ VOID * Reserved;
    _In_ NLB_HOOK_IP_TUPLE NewTuple;
} QUERY_HOOK_INFO, * PQUERY_HOOK_INFO;
typedef struct _CLEAR_CLIENT_STICKINESS_HOOK_INFO {
    _In_ NLB_HOOK_API_VERSION Version;
    _In_z_ const WCHAR * pAdapter;
    _In_ ULONG PortRuleIndex;
    _In_ BOOLEAN BDATeaming;
} CLEAR_CLIENT_STICKINESS_HOOK_INFO, * PCLEAR_CLIENT_STICKINESS_HOOK_INFO;
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBSendFilterHook_v1) (
    _In_z_ const WCHAR * pAdapter,
    _In_opt_ const VOID * pPacket,
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR * pMediaHeader,
    _In_ ULONG cMediaHeaderLength,
    _In_reads_bytes_(cPayloadLength) const UCHAR * pPayload,
    _In_ ULONG cPayloadLength,
    _In_ ULONG Flags);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBSendFilterHook_v2) (
    _In_z_ const WCHAR * pAdapter,
    _In_opt_ const NET_BUFFER * pPacket,
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR * pMediaHeader,
    _In_ ULONG cMediaHeaderLength,
    _In_reads_bytes_(cPayloadLength) const UCHAR * pPayload,
    _In_ ULONG cPayloadLength,
    _In_ ULONG Flags);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBSendFilterHook_v3) (
    _In_ PSEND_RECEIVE_HOOK_INFO SendReceiveInfoPtr);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBReceiveFilterHook_v1) (
    _In_z_ const WCHAR * pAdapter,
    _In_opt_ const VOID * pPacket,
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR * pMediaHeader,
    _In_ ULONG cMediaHeaderLength,
    _In_reads_bytes_(cPayloadLength) const UCHAR * pPayload,
    _In_ ULONG cPayloadLength,
    _In_ ULONG Flags);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBReceiveFilterHook_v2) (
    _In_z_ const WCHAR * pAdapter,
    _In_opt_ const NET_BUFFER * pPacket,
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR * pMediaHeader,
    _In_ ULONG cMediaHeaderLength,
    _In_reads_bytes_(cPayloadLength) const UCHAR * pPayload,
    _In_ ULONG cPayloadLength,
    _In_ ULONG Flags);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBReceiveFilterHook_v3) (
    _In_ PSEND_RECEIVE_HOOK_INFO SendReceiveInfoPtr);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBQueryFilterHook_v1) (
    _In_z_ const WCHAR * pAdapter,
    _In_ ULONG ServerIPAddress,
    _In_ USHORT ServerPort,
    _In_ ULONG ClientIPAddress,
    _In_ USHORT ClientPort,
    _In_ UCHAR Protocol,
    _In_ BOOLEAN bReceiveContext,
    _In_ ULONG Flags);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBQueryFilterHook_v2) (
    _In_z_ const WCHAR * pAdapter,
    _In_ ADDRESS_FAMILY AddressFamily,
    _When_(AddressFamily==2, _In_reads_bytes_(4))
    _When_(AddressFamily==23, _In_reads_bytes_(16))
        const UCHAR * ServerIPAddress,
    _In_ USHORT ServerPort,
    _When_(AddressFamily==2, _In_reads_bytes_(4))
    _When_(AddressFamily==23, _In_reads_bytes_(16))
        const UCHAR * ClientIPAddress,
    _In_ USHORT ClientPort,
    _In_ UCHAR Protocol,
    _In_ BOOLEAN bReceiveContext,
    _In_ ULONG Flags);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBQueryFilterHook_v3) (
    _In_ PQUERY_HOOK_INFO QueryHookInfoPtr);
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef void (* NLBClearClientStickinessFilterHook_v3) (
    _In_ PCLEAR_CLIENT_STICKINESS_HOOK_INFO ClearClientStickinessHookInfoPtr);
typedef NLBSendFilterHook_v3 NLBSendFilterHook;
typedef NLBReceiveFilterHook_v3 NLBReceiveFilterHook;
typedef NLBQueryFilterHook_v3 NLBQueryFilterHook;
typedef NLBClearClientStickinessFilterHook_v3 NLBClearClientStickinessFilterHook;
#pragma pack(push)
#pragma pack()
typedef struct {
    _In_ ULONG Reserved;
    _In_ NLB_HOOK_API_VERSION Version;
    _In_ NLBSendFilterHook SendHook;
    _In_ NLBQueryFilterHook QueryHook;
    _In_ NLBReceiveFilterHook ReceiveHook;
    _In_ NLBClearClientStickinessFilterHook ClearClientStickinessHook;
} NLB_FILTER_HOOK_TABLE, * PNLB_FILTER_HOOK_TABLE;
typedef struct {
    WCHAR HookIdentifier[NLB_HOOK_IDENTIFIER_LENGTH];
    HANDLE RegisteringEntity;
    PVOID HookTable;
    NLBHookDeregister DeregisterCallback;
} NLB_IOCTL_REGISTER_HOOK_REQUEST, * PNLB_IOCTL_REGISTER_HOOK_REQUEST;
typedef struct _NLB_PUBLIC_IOCTL_INPUT
{
    WCHAR MiniportName[NLB_PUBLIC_IOCTL_MINIPORT_NAME_LENGTH];
    union
    {
        struct
        {
            USHORT RequestType;
            HOOK_IP_ADDRESS ClientIPAddress;
            USHORT Protocol;
            BOOLEAN UsePortIndex;
            union
            {
                ULONG PortIndex;
                struct
                {
                    HOOK_IP_ADDRESS IP;
                    USHORT Port;
                }
                ServerTuple;
            };
        }
        ClientStickinessNotify;
    };
} NLB_PUBLIC_IOCTL_INPUT, * PNLB_PUBLIC_IOCTL_INPUT;
#pragma pack(pop)
