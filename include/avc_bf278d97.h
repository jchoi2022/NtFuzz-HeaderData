extern "C" {
        
#pragma message ("CTL_CODE undefined. Include winioctl.h or wdm.h")
typedef enum _tagAvcCommandType {
    AVC_CTYPE_CONTROL = 0x00,
    AVC_CTYPE_STATUS = 0x01,
    AVC_CTYPE_SPEC_INQ = 0x02,
    AVC_CTYPE_NOTIFY = 0x03,
    AVC_CTYPE_GEN_INQ = 0x04
} AvcCommandType;
typedef enum _tagAvcResponseCode {
    AVC_RESPONSE_NOTIMPL = 0x08,
    AVC_RESPONSE_ACCEPTED = 0x09,
    AVC_RESPONSE_REJECTED = 0x0a,
    AVC_RESPONSE_IN_TRANSITION = 0x0b,
    AVC_RESPONSE_STABLE = 0x0c,
    AVC_RESPONSE_IMPLEMENTED = 0x0c,
    AVC_RESPONSE_CHANGED = 0x0d,
    AVC_RESPONSE_INTERIM = 0x0f
} AvcResponseCode;
typedef enum _tagAvcSubunitType {
    AVC_SUBUNITTYPE_VIDEO_MONITOR = 0x00,
    AVC_SUBUNITTYPE_AUDIO = 0x01,
    AVC_SUBUNITTYPE_PRINTER = 0x02,
    AVC_SUBUNITTYPE_DISC_PLAYER = 0x03,
    AVC_SUBUNITTYPE_TAPE_PLAYER = 0x04,
    AVC_SUBUNITTYPE_TUNER = 0x05,
    AVC_SUBUNITTYPE_CA = 0x06,
    AVC_SUBUNITTYPE_VIDEO_CAMERA = 0x07,
    AVC_SUBUNITTYPE_PANEL = 0x09,
    AVC_SUBUNITTYPE_BULLETINBOARD = 0x0A,
    AVC_SUBUNITTYPE_CAMERASTORAGE = 0x0B,
    AVC_SUBUNITTYPE_VENDOR_UNIQUE = 0x1c,
    AVC_SUBUNITTYPE_EXTENDED = 0x1e,
    AVC_SUBUNITTYPE_EXTENDED_FULL = 0xff,
    AVC_SUBUNITTYPE_UNIT = 0x1f
} AvcSubunitType;
    0x9D46279FL, 0x3432, 0x48F3, 0x88, 0x8A, 0xEE, 0xFF, 0x1B, 0x7E, 0xEE, 0x71
DEFINE_GUIDSTRUCT("9D46279F-3432-48F3-888A-EEFF1B7EEE71", KSMEDIUMSETID_1394SerialBus);
                                                FILE_DEVICE_UNKNOWN, \
                                                0x92, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS \
                                                )
typedef enum _tagAVC_FUNCTION {
    AVC_FUNCTION_COMMAND = 0,
    AVC_FUNCTION_GET_PIN_COUNT = 1,
    AVC_FUNCTION_GET_PIN_DESCRIPTOR = 2,
    AVC_FUNCTION_GET_CONNECTINFO = 3,
    AVC_FUNCTION_SET_CONNECTINFO = 4,
    AVC_FUNCTION_ACQUIRE = 5,
    AVC_FUNCTION_RELEASE = 6,
    AVC_FUNCTION_CLR_CONNECTINFO = 7,
    AVC_FUNCTION_GET_EXT_PLUG_COUNTS = 8,
    AVC_FUNCTION_GET_UNIQUE_ID = 9,
    AVC_FUNCTION_GET_REQUEST = 10,
    AVC_FUNCTION_SEND_RESPONSE = 11,
    AVC_FUNCTION_FIND_PEER_DO = 12,
    AVC_FUNCTION_PEER_DO_LIST = 13,
    AVC_FUNCTION_GET_SUBUNIT_INFO = 14,
} AVC_FUNCTION;
#include <pshpack8.h>
typedef struct _AVC_IRB {
    AVC_FUNCTION Function;
} AVC_IRB, *PAVC_IRB;
typedef struct _AVC_COMMAND_IRB {
    AVC_IRB Common;
    UCHAR SubunitAddrFlag : 1;
    UCHAR AlternateOpcodesFlag : 1;
    UCHAR TimeoutFlag : 1;
    UCHAR RetryFlag : 1;
    union {
        UCHAR CommandType;
        UCHAR ResponseCode;
    };
    PUCHAR SubunitAddr;
    PUCHAR AlternateOpcodes;
    LARGE_INTEGER Timeout;
    UCHAR Retries;
    UCHAR Opcode;
    ULONG OperandLength;
    UCHAR Operands[MAX_AVC_OPERAND_BYTES];
    NODE_ADDRESS NodeAddress;
    ULONG Generation;
} AVC_COMMAND_IRB, *PAVC_COMMAND_IRB;
typedef struct _AVC_PIN_COUNT {
    ULONG PinCount;
} AVC_PIN_COUNT, *PAVC_PIN_COUNT;
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
(*PFNAVCINTERSECTHANDLER)(
    _In_ PVOID Context,
    _In_ ULONG PinId,
    _In_ PKSDATARANGE DataRange,
    _In_ PKSDATARANGE MatchingDataRange,
    _In_ ULONG DataBufferSize,
    _Out_writes_bytes_opt_(DataBufferSize) PVOID Data,
    _Out_ PULONG DataSize
    );
typedef struct _AVC_PIN_DESCRIPTOR {
    ULONG PinId;
    KSPIN_DESCRIPTOR PinDescriptor;
    PFNAVCINTERSECTHANDLER IntersectHandler;
    PVOID Context;
} AVC_PIN_DESCRIPTOR, *PAVC_PIN_DESCRIPTOR;
typedef enum _KSPIN_FLAG_AVC {
    KSPIN_FLAG_AVCMASK = 0x03,
    KSPIN_FLAG_AVC_PERMANENT = 0x01,
    KSPIN_FLAG_AVC_CONNECTED = 0x02,
    KSPIN_FLAG_AVC_PCRONLY = 0x04,
    KSPIN_FLAG_AVC_FIXEDPCR = 0x08,
} KSPIN_FLAG_AVC;
typedef struct _AVCPRECONNECTINFO {
    GUID DeviceID;
    UCHAR SubunitAddress[AVCCONNECTINFO_MAX_SUBUNITADDR_LEN];
    ULONG SubunitPlugNumber;
    KSPIN_DATAFLOW DataFlow;
    ULONG Flags;
    ULONG UnitPlugNumber;
} AVCPRECONNECTINFO, *PAVCPRECONNECTINFO;
typedef struct _AVC_PRECONNECT_INFO {
    ULONG PinId;
    AVCPRECONNECTINFO ConnectInfo;
} AVC_PRECONNECT_INFO, *PAVC_PRECONNECT_INFO;
typedef struct _AVCCONNECTINFO {
    GUID DeviceID;
    UCHAR SubunitAddress[AVCCONNECTINFO_MAX_SUBUNITADDR_LEN];
    ULONG SubunitPlugNumber;
    KSPIN_DATAFLOW DataFlow;
    HANDLE hPlug;
    ULONG UnitPlugNumber;
} AVCCONNECTINFO, *PAVCCONNECTINFO;
typedef struct _AVC_SETCONNECT_INFO {
    ULONG PinId;
    AVCCONNECTINFO ConnectInfo;
} AVC_SETCONNECT_INFO, *PAVC_SETCONNECT_INFO;
typedef struct _AVC_PIN_ID {
    ULONG PinId;
} AVC_PIN_ID, *PAVC_PIN_ID;
typedef struct _AVC_EXT_PLUG_COUNTS {
    ULONG ExtInputs;
    ULONG ExtOutputs;
} AVC_EXT_PLUG_COUNTS, *PAVC_EXT_PLUG_COUNTS;
typedef struct _AVC_UNIQUE_ID {
    GUID DeviceID;
} AVC_UNIQUE_ID, *PAVC_UNIQUE_ID;
typedef struct _AVC_PEER_DO_LOCATOR {
    NODE_ADDRESS NodeAddress;
    ULONG Generation;
    PDEVICE_OBJECT DeviceObject;
} AVC_PEER_DO_LOCATOR, *PAVC_PEER_DO_LOCATOR;
typedef struct _AVC_PEER_DO_LIST {
    ULONG Count;
  _Field_size_(Count)
    PDEVICE_OBJECT *Objects;
} AVC_PEER_DO_LIST, *PAVC_PEER_DO_LIST;
typedef struct _AVC_SUBUNIT_INFO_BLOCK {
    UCHAR Info[AVC_SUBUNITINFO_BYTES];
} AVC_SUBUNIT_INFO_BLOCK, *PAVC_SUBUNIT_INFO_BLOCK;
typedef struct _AVC_MULTIFUNC_IRB {
    AVC_IRB Common;
    union {
        AVC_PIN_COUNT PinCount;
        AVC_PIN_DESCRIPTOR PinDescriptor;
        AVC_PRECONNECT_INFO PreConnectInfo;
        AVC_SETCONNECT_INFO SetConnectInfo;
        AVC_PIN_ID PinId;
        AVC_EXT_PLUG_COUNTS ExtPlugCounts;
        AVC_UNIQUE_ID UniqueID;
        AVC_PEER_DO_LOCATOR PeerLocator;
        AVC_PEER_DO_LIST PeerList;
        AVC_SUBUNIT_INFO_BLOCK Subunits;
    };
} AVC_MULTIFUNC_IRB, *PAVC_MULTIFUNC_IRB;
#include <poppack.h>
#include <pshpack8.h>
typedef struct _AVC_SUBUNIT_ADDR_SPEC {
    ULONG Flags;
    UCHAR SubunitAddress[1];
} AVC_SUBUNIT_ADDR_SPEC, *PAVC_SUBUNIT_ADDR_SPEC;
#include <poppack.h>
}
DEFINE_GUID(GUID_VIRTUAL_AVC_CLASS, 0x616ef4d0, 0x23ce, 0x446d, 0xa5, 0x68, 0xc3, 0x1e, 0xb0, 0x19, 0x13, 0xd0);
DEFINE_GUID(GUID_AVC_CLASS, 0x095780c3, 0x48a1, 0x4570, 0xbd, 0x95, 0x46, 0x70, 0x7f, 0x78, 0xc2, 0xdc);
