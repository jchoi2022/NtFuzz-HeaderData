DEFINE_GUID(GUID_61883_CLASS, 0x7ebefbc0, 0x3200, 0x11d2, 0xb4, 0xc2, 0x0, 0xa0, 0xc9, 0x69, 0x7d, 0x7);
                                                FILE_DEVICE_UNKNOWN, \
                                                0x91, \
                                                METHOD_IN_DIRECT, \
                                                FILE_ANY_ACCESS \
                                                )
        (Av61883)->Function = Request; \
        (Av61883)->Version = CURRENT_61883_DDI_VERSION;
enum {
    Av61883_GetUnitInfo,
    Av61883_SetUnitInfo,
    Av61883_SetPlug,
    Av61883_GetPlugHandle,
    Av61883_GetPlugState,
    Av61883_Connect,
    Av61883_Disconnect,
    Av61883_AttachFrame,
    Av61883_CancelFrame,
    Av61883_Talk,
    Av61883_Listen,
    Av61883_Stop,
    Av61883_SendFcpRequest,
    Av61883_GetFcpResponse,
    Av61883_GetFcpRequest,
    Av61883_SendFcpResponse,
    Av61883_SetFcpNotify,
    Av61883_CreatePlug,
    Av61883_DeletePlug,
    Av61883_BusResetNotify,
    Av61883_BusReset,
    Av61883_SetUnitDirectory,
    Av61883_MonitorPlugs,
    Av61883_MAX
};
typedef enum {
    CMP_PlugLocal = 0,
    CMP_PlugRemote
} CMP_PLUG_LOCATION;
typedef enum {
    CMP_PlugOut = 0,
    CMP_PlugIn
} CMP_PLUG_TYPE;
typedef enum {
    CMP_Broadcast = 0,
    CMP_PointToPoint
} CMP_CONNECT_TYPE;
typedef struct _OPCR {
    ULONG Payload:10;
    ULONG OverheadID:4;
    ULONG DataRate:2;
    ULONG Channel:6;
    ULONG Reserved:2;
    ULONG PPCCounter:6;
    ULONG BCCCounter:1;
    ULONG OnLine:1;
} OPCR, *POPCR;
typedef struct _IPCR {
    ULONG Reserved0:16;
    ULONG Channel:6;
    ULONG Reserved1:2;
    ULONG PPCCounter:6;
    ULONG BCCCounter:1;
    ULONG OnLine:1;
} IPCR, *PIPCR;
typedef struct _AV_PCR {
    union {
        OPCR oPCR;
        IPCR iPCR;
        ULONG ulongData;
    };
} AV_PCR, *PAV_PCR;
typedef struct _GET_UNIT_IDS {
    OUT LARGE_INTEGER UniqueID;
    OUT ULONG VendorID;
    OUT ULONG ModelID;
    OUT ULONG ulVendorLength;
    OUT PWSTR VendorText;
    OUT ULONG ulModelLength;
    OUT PWSTR ModelText;
    OUT ULONG UnitModelID;
    OUT ULONG ulUnitModelLength;
    OUT PWSTR UnitModelText;
} GET_UNIT_IDS, *PGET_UNIT_IDS;
typedef struct _GET_UNIT_CAPABILITIES {
    OUT ULONG NumOutputPlugs;
    OUT ULONG NumInputPlugs;
    OUT ULONG MaxDataRate;
    OUT ULONG CTSFlags;
    OUT ULONG HardwareFlags;
} GET_UNIT_CAPABILITIES, *PGET_UNIT_CAPABILITIES;
typedef struct _UNIT_ISOCH_PARAMS {
    IN OUT ULONG RX_NumPackets;
    IN OUT ULONG RX_NumDescriptors;
    IN OUT ULONG TX_NumPackets;
    IN OUT ULONG TX_NumDescriptors;
} UNIT_ISOCH_PARAMS, *PUNIT_ISOCH_PARAMS;
typedef struct _BUS_GENERATION_NODE {
    OUT ULONG GenerationCount;
    OUT NODE_ADDRESS LocalNodeAddress;
    OUT NODE_ADDRESS DeviceNodeAddress;
} BUS_GENERATION_NODE, *PBUS_GENERATION_NODE;
typedef struct _UNIT_DDI_VERSION {
    OUT ULONG Version;
} UNIT_DDI_VERSION, *PUNIT_DDI_VERSION;
typedef struct _UNIT_DIAG_LEVEL {
    IN ULONG DiagLevel;
} UNIT_DIAG_LEVEL, *PUNIT_DIAG_LEVEL;
typedef struct _GET_UNIT_INFO {
    IN ULONG nLevel;
    IN OUT PVOID Information;
} GET_UNIT_INFO, *PGET_UNIT_INFO;
typedef struct _SET_CMP_ADDRESS_TYPE {
    IN ULONG Type;
} SET_CMP_ADDRESS_TYPE, *PSET_CMP_ADDRESS_TYPE;
typedef struct _SET_UNIT_INFO {
    IN ULONG nLevel;
    IN OUT PVOID Information;
} SET_UNIT_INFO, *PSET_UNIT_INFO;
typedef struct _CMP_GET_PLUG_HANDLE {
    IN ULONG PlugNum;
    IN CMP_PLUG_TYPE Type;
    OUT HANDLE hPlug;
} CMP_GET_PLUG_HANDLE, *PCMP_GET_PLUG_HANDLE;
typedef struct _CMP_GET_PLUG_STATE {
    IN HANDLE hPlug;
    OUT ULONG State;
    OUT ULONG DataRate;
    OUT ULONG Payload;
    OUT ULONG BC_Connections;
    OUT ULONG PP_Connections;
} CMP_GET_PLUG_STATE, *PCMP_GET_PLUG_STATE;
typedef struct _CIP_DATA_FORMAT_VER3 {
    UCHAR FMT;
    UCHAR FDF_hi;
    UCHAR FDF_mid;
    UCHAR FDF_lo;
    BOOLEAN bHeader;
    UCHAR Padding;
    UCHAR BlockSize;
    UCHAR Fraction;
    IN ULONG BlockPeriod;
    IN ULONG BlockPeriodRemainder;
    IN ULONG BlocksPerPacket;
} CIP_DATA_FORMAT_VER3, *PCIP_DATA_FORMAT_VER3;
typedef struct _CIP_DATA_FORMAT_VER2 {
    UCHAR FMT;
    UCHAR FDF_hi;
    UCHAR FDF_mid;
    UCHAR FDF_lo;
    BOOLEAN bHeader;
    UCHAR Padding;
    UCHAR BlockSize;
    UCHAR Fraction;
    IN ULONG BlockPeriod;
} CIP_DATA_FORMAT_VER2, *PCIP_DATA_FORMAT_VER2;
typedef struct _CMP_CONNECT_VER3 {
    IN HANDLE hOutputPlug;
    IN HANDLE hInputPlug;
    IN CMP_CONNECT_TYPE Type;
    IN CIP_DATA_FORMAT_VER3 Format;
    OUT HANDLE hConnect;
} CMP_CONNECT_VER3, *PCMP_CONNECT_VER3;
typedef struct _CMP_CONNECT_VER2 {
    IN HANDLE hOutputPlug;
    IN HANDLE hInputPlug;
    IN CMP_CONNECT_TYPE Type;
    IN CIP_DATA_FORMAT_VER2 Format;
    OUT HANDLE hConnect;
} CMP_CONNECT_VER2, *PCMP_CONNECT_VER2;
typedef CIP_DATA_FORMAT_VER3 CIP_DATA_FORMAT, *PCIP_DATA_FORMAT;
typedef CMP_CONNECT_VER3 CMP_CONNECT, *PCMP_CONNECT;
typedef struct _CMP_DISCONNECT {
    IN HANDLE hConnect;
} CMP_DISCONNECT, *PCMP_DISCONNECT;
typedef struct _CIP_FRAME CIP_FRAME, *PCIP_FRAME;
typedef struct _CIP_VALIDATE_INFO {
    HANDLE hConnect;
    PVOID Context;
    CYCLE_TIME TimeStamp;
    PUCHAR Packet;
} CIP_VALIDATE_INFO, *PCIP_VALIDATE_INFO;
typedef struct _CIP_NOTIFY_INFO {
    HANDLE hConnect;
    PVOID Context;
    PCIP_FRAME Frame;
} CIP_NOTIFY_INFO, *PCIP_NOTIFY_INFO;
typedef
_Must_inspect_result_
_IRQL_requires_(DISPATCH_LEVEL)
ULONG
(*PCIP_VALIDATE_ROUTINE) (
    _In_ PCIP_VALIDATE_INFO ValidateInfo
    );
typedef
_Must_inspect_result_
_IRQL_requires_(DISPATCH_LEVEL)
ULONG
(*PCIP_NOTIFY_ROUTINE) (
    _In_ PCIP_NOTIFY_INFO NotifyInfo
    );
struct _CIP_FRAME {
    union {
        IN PVOID Reserved;
        IN PVOID pNext;
    };
    IN ULONG Flags;
    IN PCIP_VALIDATE_ROUTINE pfnValidate;
    IN PVOID ValidateContext;
    IN PCIP_NOTIFY_ROUTINE pfnNotify;
    IN PVOID NotifyContext;
    OUT CYCLE_TIME Timestamp;
    OUT ULONG Status;
    IN OUT PUCHAR Packet;
    OUT ULONG CompletedBytes;
};
typedef struct _CIP_ATTACH_FRAME {
    HANDLE hConnect;
    ULONG FrameLength;
    ULONG SourceLength;
    PCIP_FRAME Frame;
} CIP_ATTACH_FRAME, *PCIP_ATTACH_FRAME;
typedef struct _CIP_CANCEL_FRAME {
    IN HANDLE hConnect;
    IN PCIP_FRAME Frame;
} CIP_CANCEL_FRAME, *PCIP_CANCEL_FRAME;
typedef struct _CIP_TALK {
    IN HANDLE hConnect;
} CIP_TALK, *PCIP_TALK;
typedef struct _CIP_LISTEN {
    IN HANDLE hConnect;
} CIP_LISTEN, *PCIP_LISTEN;
typedef struct _CIP_STOP {
    IN HANDLE hConnect;
} CIP_STOP, *PCIP_STOP;
typedef struct _FCP_FRAME {
    UCHAR ctype:4;
    UCHAR cts:4;
    UCHAR payload[511];
} FCP_FRAME, *PFCP_FRAME;
typedef struct _FCP_SEND_REQUEST FCP_REQUEST, *PFCP_REQUEST;
typedef struct _FCP_GET_RESPONSE FCP_RESPONSE, *PFCP_RESPONSE;
typedef struct _FCP_SEND_REQUEST {
    IN NODE_ADDRESS NodeAddress;
    IN ULONG Length;
    IN PFCP_FRAME Frame;
} FCP_SEND_REQUEST, *PFCP_SEND_REQUEST;
typedef struct _FCP_GET_RESPONSE {
    OUT NODE_ADDRESS NodeAddress;
    IN OUT ULONG Length;
    IN OUT PFCP_FRAME Frame;
} FCP_GET_RESPONSE, *PFCP_GET_RESPONSE;
typedef struct _FCP_GET_REQUEST {
    OUT NODE_ADDRESS NodeAddress;
    IN OUT ULONG Length;
    IN OUT PFCP_FRAME Frame;
} FCP_GET_REQUEST, *PFCP_GET_REQUEST;
typedef struct _FCP_SEND_RESPONSE {
    IN NODE_ADDRESS NodeAddress;
    IN ULONG Length;
    IN PFCP_FRAME Frame;
} FCP_SEND_RESPONSE, *PFCP_SEND_RESPONSE;
typedef struct _SET_FCP_NOTIFY {
    IN ULONG Flags;
    IN NODE_ADDRESS NodeAddress;
} SET_FCP_NOTIFY, *PSET_FCP_NOTIFY;
typedef struct _CMP_NOTIFY_INFO {
    HANDLE hPlug;
    AV_PCR Pcr;
    PVOID Context;
} CMP_NOTIFY_INFO, *PCMP_NOTIFY_INFO;
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PCMP_NOTIFY_ROUTINE) (
    _In_ PCMP_NOTIFY_INFO NotifyInfo
    );
typedef struct _CMP_CREATE_PLUG {
    IN CMP_PLUG_TYPE PlugType;
    IN AV_PCR Pcr;
    IN PCMP_NOTIFY_ROUTINE pfnNotify;
    IN PVOID Context;
    OUT ULONG PlugNum;
    OUT HANDLE hPlug;
} CMP_CREATE_PLUG, *PCMP_CREATE_PLUG;
typedef struct _CMP_DELETE_PLUG {
    IN HANDLE hPlug;
} CMP_DELETE_PLUG, *PCMP_DELETE_PLUG;
typedef struct _CMP_SET_PLUG {
    IN HANDLE hPlug;
    IN AV_PCR Pcr;
} CMP_SET_PLUG, *PCMP_SET_PLUG;
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_RESET_ROUTINE) (
    _In_ PVOID Context,
    _In_ PBUS_GENERATION_NODE BusResetInfo
    );
typedef struct _BUS_RESET_NOTIFY {
    IN ULONG Flags;
    IN PBUS_RESET_ROUTINE pfnNotify;
    IN PVOID Context;
} BUS_RESET_NOTIFY, *PBUS_RESET_NOTIFY;
typedef struct _SET_UNIT_DIRECTORY {
    IN ULONG Flags;
    IN ULONG UnitSpecId;
    IN ULONG UnitSwVersion;
    IN OUT HANDLE hCromEntry;
} SET_UNIT_DIRECTORY, *PSET_UNIT_DIRECTORY;
typedef struct _CMP_MONITOR_INFO {
    ULONG State;
    ULONG PlugNum;
    ULONG PlugType;
    AV_PCR Pcr;
    PVOID Context;
} CMP_MONITOR_INFO, *PCMP_MONITOR_INFO;
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PCMP_MONITOR_ROUTINE) (
    _In_ PCMP_MONITOR_INFO MonitorInfo
    );
typedef struct _CMP_MONITOR_PLUGS {
    IN ULONG Flags;
    IN PCMP_MONITOR_ROUTINE pfnNotify;
    IN PVOID Context;
} CMP_MONITOR_PLUGS, *PCMP_MONITOR_PLUGS;
typedef struct _AV_61883_REQUEST {
    ULONG Function;
    ULONG Version;
    ULONG Flags;
    union {
        GET_UNIT_INFO GetUnitInfo;
        SET_UNIT_INFO SetUnitInfo;
        CMP_GET_PLUG_HANDLE GetPlugHandle;
        CMP_GET_PLUG_STATE GetPlugState;
        CMP_CONNECT Connect;
        CMP_DISCONNECT Disconnect;
        CIP_ATTACH_FRAME AttachFrame;
        CIP_CANCEL_FRAME CancelFrame;
        CIP_TALK Talk;
        CIP_LISTEN Listen;
        CIP_STOP Stop;
        FCP_REQUEST Request;
        FCP_RESPONSE Response;
        FCP_SEND_REQUEST SendRequest;
        FCP_GET_RESPONSE GetResponse;
        FCP_GET_REQUEST GetRequest;
        FCP_SEND_RESPONSE SendResponse;
        SET_FCP_NOTIFY SetFcpNotify;
        CMP_CREATE_PLUG CreatePlug;
        CMP_DELETE_PLUG DeletePlug;
        CMP_SET_PLUG SetPlug;
        BUS_RESET_NOTIFY BusResetNotify;
        SET_UNIT_DIRECTORY SetUnitDirectory;
        CMP_MONITOR_PLUGS MonitorPlugs;
    };
} AV_61883_REQUEST, *PAV_61883_REQUEST;
