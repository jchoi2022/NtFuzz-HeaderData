#pragma warning(disable:4201)
typedef enum _ENUMERATOR_ACTION {
    ENUMERATOR_ACTION_CREATE = 0,
    ENUMERATOR_ACTION_REMOVE,
    ENUMERATOR_ACTION_DESTROY,
    ENUMERATOR_ACTION_MAX,
} ENUMERATOR_ACTION, *PENUMERATOR_ACTION;
typedef enum _ENUMERATOR_TYPE {
    ENUMERATOR_TYPE_PROTOCOL = 0,
    ENUMERATOR_TYPE_SERVICE,
    ENUMERATOR_TYPE_DEVICE,
    ENUMERATOR_TYPE_MAX,
} ENUMERATOR_TYPE, *PENUMERATOR_TYPE;
typedef struct _BTH_ENUMERATOR_INFO {
    ENUMERATOR_TYPE EnumeratorType;
    ENUMERATOR_ACTION Action;
    ULONG Port;
    ULONG Flags;
    GUID Guid;
    ULONG InstanceId;
    WCHAR InstanceIdStr[BTH_MAX_SERVICE_NAME_SIZE];
    USHORT Vid;
    USHORT Pid;
    USHORT Mfg;
    USHORT LocalMfg;
    USHORT VidType;
    WCHAR ServiceName[BTH_MAX_SERVICE_NAME_SIZE];
    CHAR SdpPriLangServiceName[BTH_MAX_SERVICE_NAME_SIZE];
    WCHAR DeviceString[BTH_MAX_SERVICE_NAME_SIZE];
} BTH_ENUMERATOR_INFO, *PBTH_ENUMERATOR_INFO;
typedef PVOID L2CAP_CHANNEL_HANDLE;
typedef PVOID L2CAP_SERVER_HANDLE;
typedef PVOID SCO_SERVER_HANDLE;
typedef enum _BRB_TYPE {
    BRB_HCI_GET_LOCAL_BD_ADDR = 0x0001,
    BRB_L2CA_REGISTER_SERVER = 0x0100,
    BRB_L2CA_UNREGISTER_SERVER = 0x0101,
    BRB_L2CA_OPEN_CHANNEL = 0x0102,
    BRB_L2CA_OPEN_CHANNEL_RESPONSE = 0x0103,
    BRB_L2CA_CLOSE_CHANNEL = 0x0104,
    BRB_L2CA_ACL_TRANSFER = 0x0105,
    BRB_L2CA_UPDATE_CHANNEL = 0x0106,
    BRB_L2CA_PING = 0x0107,
    BRB_L2CA_INFO_REQUEST = 0x0108,
    BRB_REGISTER_PSM = 0x0109,
    BRB_UNREGISTER_PSM = 0x010a,
    BRB_SCO_REGISTER_SERVER = 0x0200,
    BRB_SCO_UNREGISTER_SERVER = 0x0201,
    BRB_SCO_OPEN_CHANNEL = 0x0202,
    BRB_SCO_OPEN_CHANNEL_RESPONSE = 0x0203,
    BRB_SCO_CLOSE_CHANNEL = 0x0204,
    BRB_SCO_TRANSFER = 0x0205,
    BRB_SCO_GET_CHANNEL_INFO = 0x0207,
    BRB_SCO_GET_SYSTEM_INFO = 0x0209,
    BRB_SCO_FLUSH_CHANNEL = 0x020a,
    BRB_SCO_OPEN_UNMANAGED_CHANNEL = 0x0210,
    BRB_SCO_OPEN_UNMANAGED_CHANNEL_RESPONSE
                                        = 0x0211,
    BRB_L2CA_OPEN_ENHANCED_CHANNEL = 0x0212,
    BRB_L2CA_OPEN_ENHANCED_CHANNEL_RESPONSE
                                        = 0x0213,
    BRB_ACL_GET_MODE = 0x0300,
    BRB_ACL_ENTER_ACTIVE_MODE = 0x0301,
    BRB_STORED_LINK_KEY = 0x0310,
    BRB_GET_DEVICE_INTERFACE_STRING = 0x0320,
} BRB_TYPE;
typedef enum _BRB_VERSION {
    BLUETOOTH_V1 = 0,
    BLUETOOTH_V2
} BRB_VERSION;
typedef struct _BRB_HEADER {
    LIST_ENTRY ListEntry;
    ULONG Length;
    USHORT Version;
    USHORT Type;
    ULONG BthportFlags;
    NTSTATUS Status;
    BTHSTATUS BtStatus;
    PVOID Context[BTHPORT_CONTEXT_SIZE];
    PVOID ClientContext[BTHPORT_CONTEXT_SIZE];
    ULONG Reserved[BTHPORT_RESERVED_FIELD_SIZE];
} BRB_HEADER;
typedef struct _L2CAP_CONFIG_RANGE {
    USHORT Min;
    USHORT Max;
} L2CAP_CONFIG_RANGE, *PL2CAP_CONFIG_RANGE;
typedef struct _L2CAP_CONFIG_VALUE_RANGE {
    USHORT Min;
    USHORT Preferred;
    USHORT Max;
} L2CAP_CONFIG_VALUE_RANGE, *PL2CAP_CONFIG_VALUE_RANGE;
#include <PSHPACK1.H>
typedef struct _L2CAP_FLOWSPEC {
    UCHAR Flags;
    UCHAR ServiceType;
    ULONG TokenRate;
    ULONG TokenBucketSize;
    ULONG PeakBandwidth;
    ULONG Latency;
    ULONG DelayVariation;
} L2CAP_FLOWSPEC, *PL2CAP_FLOWSPEC;
typedef struct _L2CAP_RETRANSMISSION_AND_FLOW_CONTROL {
    UCHAR Mode;
    UCHAR TxWindowSize;
    UCHAR MaxTransmit;
    USHORT RetransmissionTO;
    USHORT MonitorTO;
    USHORT MaxPDUSize;
} L2CAP_RETRANSMISSION_AND_FLOW_CONTROL, *PL2CAP_RETRANSMISSION_AND_FLOW_CONTROL;
typedef struct _L2CAP_EXTENDED_FLOW_SPEC {
    UCHAR Identifier;
    UCHAR ServiceType;
    USHORT MaxSDUSize;
    ULONG SDUInterArrivalTime;
    ULONG AccessLatency;
    ULONG FlushTimeout;
} L2CAP_EXTENDED_FLOW_SPEC, *PL2CAP_EXTENDED_FLOW_SPEC;
#include <POPPACK.H>
typedef UCHAR CO_TYPE, *PCO_TYPE;
typedef UCHAR CO_LENGTH, *PCO_LENGTH;
typedef USHORT CO_MTU, *PCO_MTU;
typedef USHORT CO_FLUSHTO, *PCO_FLUSHTO;
typedef UCHAR CO_FCS, *PCO_FCS;
typedef USHORT CO_EXTENDED_WINDOW_SIZE, *PCO_EXTENDED_WINDOW_SIZE;
#include <pshpack1.h>
typedef struct _CO_HEADER {
    CO_TYPE Type;
    CO_LENGTH Length;
} CO_HEADER;
#include <poppack.h>
typedef USHORT CONNECTION_HANDLE, *PCONNECTION_HANDLE;
typedef PVOID SCO_CHANNEL_HANDLE, *PSCO_CHANNEL_HANDLE;
typedef enum _SCO_RETRANSMISSION_EFFORT {
    SCO_RETRANSMISSION_NONE = 0x00,
    SCO_RETRANSMISSION_MIN1_POWER = 0x01,
    SCO_RETRANSMISSION_MIN1_QUALITY = 0x02,
    SCO_RETRANSMISSION_DONT_CARE = 0xFF
} SCO_RETRANSMISSION_EFFORT, *PSCO_RETRANSMISSION_EFFORT;
typedef enum _SCO_LINK_TYPE {
    ScoLinkType = 0x00,
    eScoLinkType = 0x02,
} SCO_LINK_TYPE, *PSCO_LINK_TYPE;
typedef enum _CODING_FORMAT {
    ScoCodingFormatULaw = 0x00,
    ScoCodingFormatALaw = 0x01,
    ScoCodingFormatCVSD = 0x02,
    ScoCodingFormatTransparent = 0x03,
    ScoCodingFormatLinearPCM = 0x04,
    ScoCodingFormatMSBC = 0x05,
    ScoCodingFormatVendorSpecific = 0xFF
} CODING_FORMAT, *PCODING_FORMAT;
typedef enum _PCM_DATA_FORMAT {
    ScoPCMCFormatNA = 0x00,
    ScoPCMFormat1sComplement = 0x01,
    ScoPCMFormat2sComplement = 0x02,
    ScoPCMFormatSignMagnitude = 0x03,
    ScoPCMFormatUnsigned = 0x04
} PCM_DATA_FORMAT, *PPCM_DATA_FORMAT;
typedef enum _SCO_INDICATION_CODE {
    ScoIndicationAddReference = 0,
    ScoIndicationReleaseReference,
    ScoIndicationRemoteConnect,
    ScoIndicationRemoteDisconnect,
} SCO_INDICATION_CODE, *PSCO_INDICATION_CODE;
typedef enum _SCO_DISCONNECT_REASON {
    ScoHciDisconnect = 0,
    ScoDisconnectRequest,
    ScoRadioPoweredDown,
    ScoHardwareRemoval,
} SCO_DISCONNECT_REASON, *PSCO_DISCONNECT_REASON;
typedef struct _SCO_INDICATION_PARAMETERS {
    SCO_CHANNEL_HANDLE ConnectionHandle;
    BTH_ADDR BtAddress;
    union {
        struct {
            struct {
                SCO_LINK_TYPE LinkType;
            } Request;
        } Connect;
        struct {
            SCO_DISCONNECT_REASON Reason;
            BOOLEAN CloseNow;
        } Disconnect;
    } Parameters;
} SCO_INDICATION_PARAMETERS, *PSCO_INDICATION_PARAMETERS;
typedef
void
(*PFNSCO_INDICATION_CALLBACK)(
    IN PVOID Context,
    IN SCO_INDICATION_CODE Indication,
    IN PSCO_INDICATION_PARAMETERS Parameters
    );
                                         SCO_INDICATION_ESCO_REQUEST)
struct _BRB_SCO_REGISTER_SERVER {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    ULONG Reserved;
    ULONG IndicationFlags;
    PFNSCO_INDICATION_CALLBACK IndicationCallback;
    PVOID IndicationCallbackContext;
    PVOID ReferenceObject;
    OUT SCO_SERVER_HANDLE ServerHandle;
};
struct _BRB_SCO_UNREGISTER_SERVER {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    PVOID ServerHandle;
};
struct _BRB_SCO_OPEN_CHANNEL {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    ULONG TransmitBandwidth;
    ULONG ReceiveBandwidth;
    USHORT MaxLatency;
    USHORT PacketType;
    USHORT ContentFormat;
    USHORT Reserved;
    SCO_RETRANSMISSION_EFFORT RetransmissionEffort;
    ULONG ChannelFlags;
    ULONG CallbackFlags;
    PFNSCO_INDICATION_CALLBACK Callback;
    PVOID CallbackContext;
    PVOID ReferenceObject;
    SCO_CHANNEL_HANDLE ChannelHandle;
    UCHAR Response;
};
struct _BRB_SCO_CLOSE_CHANNEL {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    SCO_CHANNEL_HANDLE ChannelHandle;
};
struct _BRB_SCO_FLUSH_CHANNEL {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    SCO_CHANNEL_HANDLE ChannelHandle;
    ULONG FlushFlags;
};
typedef struct _BASEBAND_CHANNEL_INFO {
    UCHAR Transmission_Interval;
    UCHAR Retransmission_Window;
    UCHAR AirMode;
    USHORT Rx_Packet_Length;
    USHORT Tx_Packet_Length;
}BASEBAND_CHANNEL_INFO, *PBASEBAND_CHANNEL_INFO;
struct _BRB_SCO_GET_CHANNEL_INFO {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    SCO_CHANNEL_HANDLE ChannelHandle;
    ULONG InfoFlags;
    ULONG TransmitBandwidth;
    ULONG ReceiveBandwidth;
    USHORT MaxLatency;
    USHORT PacketType;
    USHORT ContentFormat;
    USHORT Reserved;
    SCO_RETRANSMISSION_EFFORT RetransmissionEffort;
    ULONG ChannelFlags;
    CONNECTION_HANDLE HciConnectionHandle;
    SCO_LINK_TYPE LinkType;
    BASEBAND_CHANNEL_INFO BasebandInfo;
};
struct _BRB_SCO_TRANSFER {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    SCO_CHANNEL_HANDLE ChannelHandle;
    ULONG TransferFlags;
    ULONG BufferSize;
    PVOID Buffer;
    PMDL BufferMDL;
    ULONGLONG DataTag;
};
struct _BRB_SCO_GET_SYSTEM_INFO {
    BRB_HEADER Hdr;
    ULONG Features;
    ULONG MaxChannels;
    ULONG TransferUnit;
    USHORT PacketTypes;
    USHORT DataFormats;
    ULONG Reserved;
};
    ((format >) ? FALSE : TRUE)
                                                    (0x00)
                                (0x00000002)
                                 CF_ROLE_SLAVE | \
                                 CF_ROLE_MASTER)
typedef struct _INDICATION_PARAMETERS *PINDICATION_PARAMETERS;
typedef struct _INDICATION_PARAMETERS_ENHANCED *PINDICATION_PARAMETERS_ENHANCED;
typedef enum _INDICATION_CODE
{
    IndicationAddReference = 0,
    IndicationReleaseReference,
    IndicationRemoteConnect,
    IndicationRemoteDisconnect,
    IndicationRemoteConfigRequest,
    IndicationRemoteConfigResponse,
    IndicationFreeExtraOptions,
    IndicationRecvPacket,
    IndicationPairDevice,
    IndicationUnpairDevice,
    IndicationUnpersonalizeDevice,
    IndicationRemoteConnectLE,
} INDICATION_CODE, *PINDICATION_CODE;
typedef
void
(*PFNBTHPORT_INDICATION_CALLBACK)(
    IN PVOID Context,
    IN INDICATION_CODE Indication,
    IN PINDICATION_PARAMETERS Parameters
    );
typedef
void
(*PFNBTHPORT_INDICATION_CALLBACK_ENHANCED)(
    IN PVOID Context,
    IN INDICATION_CODE Indication,
    IN PINDICATION_PARAMETERS_ENHANCED Parameters
    );
typedef struct _L2CAP_CONFIG_OPTION {
    CO_HEADER Header;
    VOID UNALIGNED *DynamicBuffer;
    UCHAR FixedBuffer[4];
    USHORT Flags;
} L2CAP_CONFIG_OPTION, *PL2CAP_CONFIG_OPTION;
typedef struct _CHANNEL_CONFIG_PARAMETERS {
    ULONG Flags;
    CO_MTU Mtu;
    CO_FLUSHTO FlushTO;
    ULONG NumExtraOptions;
    PL2CAP_CONFIG_OPTION ExtraOptions;
    L2CAP_FLOWSPEC Flow;
} CHANNEL_CONFIG_PARAMETERS, *PCHANNEL_CONFIG_PARAMETERS;
typedef struct _CHANNEL_CONFIG_PARAMETERS_ENHANCED {
    ULONG Flags;
    CO_MTU Mtu;
    CO_FLUSHTO FlushTO;
    ULONG NumExtraOptions;
    PL2CAP_CONFIG_OPTION ExtraOptions;
    L2CAP_FLOWSPEC Flow;
    L2CAP_RETRANSMISSION_AND_FLOW_CONTROL RetransmissionAndFlow;
    CO_FCS Fcs;
    L2CAP_EXTENDED_FLOW_SPEC ExtendedFlowSpec;
    CO_EXTENDED_WINDOW_SIZE ExtendedWindowSize;
} CHANNEL_CONFIG_PARAMETERS_ENHANCED, *PCHANNEL_CONFIG_PARAMETERS_ENHANCED;
typedef struct _CHANNEL_CONFIG_RESULTS_ENHANCED {
    CHANNEL_CONFIG_PARAMETERS_ENHANCED Params;
    ULONG ExtraOptionsBufferSize;
} CHANNEL_CONFIG_RESULTS_ENHANCED, *PCHANNEL_CONFIG_RESULTS_ENHANCED;
typedef struct _CHANNEL_CONFIG_RESULTS {
    CHANNEL_CONFIG_PARAMETERS Params;
    ULONG ExtraOptionsBufferSize;
} CHANNEL_CONFIG_RESULTS, *PCHANNEL_CONFIG_RESULTS;
typedef enum _L2CAP_DISCONNECT_REASON {
    HciDisconnect = 0,
    L2capDisconnectRequest,
    RadioPoweredDown,
    HardwareRemoval,
} L2CAP_DISCONNECT_REASON;
typedef struct _INDICATION_PARAMETERS {
    L2CAP_CHANNEL_HANDLE ConnectionHandle;
    IN BTH_ADDR BtAddress;
    union {
        struct {
            struct {
                OUT USHORT PSM;
            } Request;
        } Connect;
        struct {
            CHANNEL_CONFIG_PARAMETERS CurrentParams;
            CHANNEL_CONFIG_PARAMETERS RequestedParams;
            CHANNEL_CONFIG_PARAMETERS ResponseParams;
            USHORT Response;
        } ConfigRequest;
        struct {
            CHANNEL_CONFIG_PARAMETERS CurrentParams;
            CHANNEL_CONFIG_PARAMETERS RequestedParams;
            CHANNEL_CONFIG_PARAMETERS RejectedParams;
            PCO_TYPE UnknownTypes;
            ULONG NumUnknownTypes;
            CHANNEL_CONFIG_PARAMETERS NewRequestParams;
            USHORT Response;
        } ConfigResponse;
        struct {
            ULONG NumExtraOptions;
            PL2CAP_CONFIG_OPTION ExtraOptions;
        } FreeExtraOptions;
        struct {
            L2CAP_DISCONNECT_REASON Reason;
            BOOLEAN CloseNow;
        } Disconnect;
        struct {
            ULONG PacketLength;
            ULONG TotalQueueLength;
        } RecvPacket;
    } Parameters;
} INDICATION_PARAMETERS, *PINDICATION_PARAMETERS;
typedef struct _INDICATION_PARAMETERS_ENHANCED {
    L2CAP_CHANNEL_HANDLE ConnectionHandle;
    IN BTH_ADDR BtAddress;
    union {
        struct {
            struct {
                OUT USHORT PSM;
            } Request;
        } Connect;
        struct {
            CHANNEL_CONFIG_PARAMETERS_ENHANCED CurrentParams;
            CHANNEL_CONFIG_PARAMETERS_ENHANCED RequestedParams;
            CHANNEL_CONFIG_PARAMETERS_ENHANCED ResponseParams;
            USHORT Response;
        } ConfigRequest;
        struct {
            CHANNEL_CONFIG_PARAMETERS_ENHANCED CurrentParams;
            CHANNEL_CONFIG_PARAMETERS_ENHANCED RequestedParams;
            CHANNEL_CONFIG_PARAMETERS_ENHANCED RejectedParams;
            PCO_TYPE UnknownTypes;
            ULONG NumUnknownTypes;
            CHANNEL_CONFIG_PARAMETERS_ENHANCED NewRequestParams;
            USHORT Response;
        } ConfigResponse;
        struct {
            ULONG NumExtraOptions;
            PL2CAP_CONFIG_OPTION ExtraOptions;
        } FreeExtraOptions;
        struct {
            L2CAP_DISCONNECT_REASON Reason;
            BOOLEAN CloseNow;
        } Disconnect;
        struct {
            ULONG PacketLength;
            ULONG TotalQueueLength;
        } RecvPacket;
        PVOID Reserved;
    } Parameters;
} INDICATION_PARAMETERS_ENHANCED, *PINDICATION_PARAMETERS_ENHANCED;
struct _BRB_L2CA_REGISTER_SERVER {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    USHORT PSM;
    ULONG IndicationFlags;
    PFNBTHPORT_INDICATION_CALLBACK IndicationCallback;
    PVOID IndicationCallbackContext;
    PVOID ReferenceObject;
    OUT L2CAP_SERVER_HANDLE ServerHandle;
};
struct _BRB_L2CA_UNREGISTER_SERVER {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    PVOID ServerHandle;
    USHORT Psm;
};
struct _BRB_L2CA_OPEN_ENHANCED_CHANNEL {
    BRB_HEADER Hdr;
    L2CAP_CHANNEL_HANDLE ChannelHandle;
    union {
        struct {
            USHORT Response;
            USHORT ResponseStatus;
        };
        USHORT Psm;
    };
    ULONG ChannelFlags;
    BTH_ADDR BtAddress;
    struct {
        ULONG Flags;
        L2CAP_CONFIG_VALUE_RANGE Mtu;
        L2CAP_CONFIG_VALUE_RANGE FlushTO;
        L2CAP_FLOWSPEC Flow;
        USHORT LinkTO;
        ULONG NumExtraOptions;
        PL2CAP_CONFIG_OPTION ExtraOptions;
        struct {
            UCHAR ServiceType;
            ULONG Latency;
        } LocalQos;
        struct {
            ULONG Flags;
            L2CAP_RETRANSMISSION_AND_FLOW_CONTROL RetransmissionAndFlow;
        } ModeConfig;
        USHORT Fcs;
        L2CAP_EXTENDED_FLOW_SPEC ExtendedFlowSpec;
        USHORT ExtendedWindowSize;
    } ConfigOut;
    struct {
        ULONG Flags;
        L2CAP_CONFIG_VALUE_RANGE Mtu;
        L2CAP_CONFIG_RANGE FlushTO;
    } ConfigIn;
    ULONG CallbackFlags;
    PFNBTHPORT_INDICATION_CALLBACK_ENHANCED Callback;
    PVOID CallbackContext;
    PVOID ReferenceObject;
    CHANNEL_CONFIG_RESULTS_ENHANCED OutResults;
    CHANNEL_CONFIG_RESULTS_ENHANCED InResults;
    UCHAR IncomingQueueDepth;
    PVOID Reserved;
};
struct _BRB_L2CA_OPEN_CHANNEL {
    BRB_HEADER Hdr;
    L2CAP_CHANNEL_HANDLE ChannelHandle;
    union {
        struct {
            USHORT Response;
            USHORT ResponseStatus;
        };
        USHORT Psm;
    };
    ULONG ChannelFlags;
    BTH_ADDR BtAddress;
    struct {
        ULONG Flags;
        L2CAP_CONFIG_VALUE_RANGE Mtu;
        L2CAP_CONFIG_VALUE_RANGE FlushTO;
        L2CAP_FLOWSPEC Flow;
        USHORT LinkTO;
        ULONG NumExtraOptions;
        PL2CAP_CONFIG_OPTION ExtraOptions;
        struct {
            UCHAR ServiceType;
            ULONG Latency;
        } LocalQos;
    } ConfigOut;
    struct {
        ULONG Flags;
        L2CAP_CONFIG_VALUE_RANGE Mtu;
        L2CAP_CONFIG_RANGE FlushTO;
    } ConfigIn;
    ULONG CallbackFlags;
    PFNBTHPORT_INDICATION_CALLBACK Callback;
    PVOID CallbackContext;
    PVOID ReferenceObject;
    CHANNEL_CONFIG_RESULTS OutResults;
    CHANNEL_CONFIG_RESULTS InResults;
    UCHAR IncomingQueueDepth;
};
struct _BRB_L2CA_CLOSE_CHANNEL {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    L2CAP_CHANNEL_HANDLE ChannelHandle;
};
struct _BRB_L2CA_ACL_TRANSFER {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    L2CAP_CHANNEL_HANDLE ChannelHandle;
    ULONG TransferFlags;
    ULONG BufferSize;
    PVOID Buffer;
    PMDL BufferMDL;
    LONGLONG Timeout;
    ULONG RemainingBufferSize;
};
struct _BRB_GET_LOCAL_BD_ADDR {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
};
struct _BRB_GET_DEVICE_INTERFACE_STRING {
    BRB_HEADER Hdr;
    PWCHAR DeviceInterfaceString;
    ULONG DeviceInterfaceStringCbLength;
};
struct _BRB_L2CA_PING {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    UCHAR PingRequestLength;
    UCHAR PingRequestData[MAX_L2CAP_PING_DATA_LENGTH];
    UCHAR PingResponseLength;
    UCHAR PingResponseData[MAX_L2CAP_PING_DATA_LENGTH];
};
struct _BRB_L2CA_UPDATE_CHANNEL {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    L2CAP_CHANNEL_HANDLE ChannelHandle;
    ULONG NewChannelFlags;
    ULONG FailedChannelFlags;
};
struct _BRB_PSM {
    BRB_HEADER Hdr;
    USHORT Psm;
};
typedef enum _ACL_MODE {
    ACL_MODE_ACTIVE = 0x0,
    ACL_MODE_HOLD = 0x1,
    ACL_MODE_SNIFF = 0x2,
    ACL_MODE_PARK = 0x3,
    ACL_MODE_ENTER_ACTIVE = 0x4,
    ACL_MODE_ENTER_HOLD = 0x5,
    ACL_MODE_ENTER_SNIFF = 0x6,
    ACL_MODE_ENTER_PARK = 0x7,
    ACL_DISCONNECTED = 0x8,
} ACL_MODE;
struct _BRB_ACL_GET_MODE {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
    ACL_MODE AclMode;
};
struct _BRB_ACL_ENTER_ACTIVE_MODE {
    BRB_HEADER Hdr;
    BTH_ADDR BtAddress;
};
typedef struct _BRB {
    union {
        struct _BRB_HEADER BrbHeader;
        struct _BRB_GET_DEVICE_INTERFACE_STRING BrbGetDeviceInterfaceString;
        struct _BRB_L2CA_REGISTER_SERVER BrbL2caRegisterServer;
        struct _BRB_L2CA_UNREGISTER_SERVER BrbL2caUnregisterServer;
        struct _BRB_L2CA_OPEN_CHANNEL BrbL2caOpenChannel;
        struct _BRB_L2CA_CLOSE_CHANNEL BrbL2caCloseChannel;
        struct _BRB_L2CA_PING BrbL2caPing;
        struct _BRB_L2CA_ACL_TRANSFER BrbL2caAclTransfer;
        struct _BRB_GET_LOCAL_BD_ADDR BrbGetLocalBdAddress;
        struct _BRB_PSM BrbPsm;
        struct _BRB_L2CA_UPDATE_CHANNEL BrbL2caUpdateChannel;
        struct _BRB_SCO_REGISTER_SERVER BrbScoRegisterServer;
        struct _BRB_SCO_UNREGISTER_SERVER BrbScoUnregisterServer;
        struct _BRB_SCO_OPEN_CHANNEL BrbScoOpenChannel;
        struct _BRB_SCO_CLOSE_CHANNEL BrbScoCloseChannel;
        struct _BRB_SCO_FLUSH_CHANNEL BrbScoFlushChannel;
        struct _BRB_SCO_TRANSFER BrbScoTransfer;
        struct _BRB_SCO_GET_CHANNEL_INFO BrbScoGetChannelInfo;
        struct _BRB_SCO_GET_SYSTEM_INFO BrbScoGetSystemInfo;
        struct _BRB_ACL_GET_MODE BrbAclGetMode;
        struct _BRB_ACL_ENTER_ACTIVE_MODE BrbAclEnterActiveMode;
        struct _BRB_L2CA_OPEN_ENHANCED_CHANNEL BrbL2caOpenEnhancedChannel;
    };
} BRB, *PBRB;
_IRQL_requires_same_
_Must_inspect_result_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef
PBRB
(*PFNBTH_ALLOCATE_BRB)(
    _In_ BRB_TYPE brbType,
    _In_ ULONG tag);
_IRQL_requires_same_
typedef
VOID
(*PFNBTH_FREE_BRB)(
    _In_ __drv_freesMem(Mem) PBRB pBrb);
_IRQL_requires_same_
typedef
VOID
(*PFNBTH_INITIALIZE_BRB)(
    _Inout_ PBRB pBrb,
    _In_ BRB_TYPE brbType);
_IRQL_requires_same_
typedef
VOID
(*PFNBTH_REUSE_BRB)(
    _Inout_ PBRB pBrb,
    _In_ BRB_TYPE brbType);
_IRQL_requires_same_
_Must_inspect_result_
typedef
BOOLEAN
(* PFNBTH_IS_BLUETOOTH_VERSION_AVAILABLE)(_In_ UCHAR MajorVersion, _In_ UCHAR MinorVersion);
typedef struct _BTH_PROFILE_DRIVER_INTERFACE {
    INTERFACE Interface;
    OUT PFNBTH_ALLOCATE_BRB BthAllocateBrb;
    OUT PFNBTH_FREE_BRB BthFreeBrb;
    OUT PFNBTH_INITIALIZE_BRB BthInitializeBrb;
    OUT PFNBTH_REUSE_BRB BthReuseBrb;
    OUT PFNBTH_IS_BLUETOOTH_VERSION_AVAILABLE IsBluetoothVersionAvailable;
}BTH_PROFILE_DRIVER_INTERFACE, *PBTH_PROFILE_DRIVER_INTERFACE;
#pragma warning(default:4201)
