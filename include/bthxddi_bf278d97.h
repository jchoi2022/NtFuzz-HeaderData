typedef enum _BTHX_HCI_PACKET_TYPE {
    HciPacketCommand = 0x01,
    HciPacketAclData = 0x02,
    HciPacketEvent = 0x04
} BTHX_HCI_PACKET_TYPE;
                                     (id), \
                                     METHOD_NEITHER, \
                                     FILE_ANY_ACCESS)
typedef struct _BTHX_VERSION {
    ULONG Version;
} BTHX_VERSION, *PBTHX_VERSION;
__declspec(selectany)
BTHX_VERSION Microsoft_BTHX_DDI_Version = { BTHX_DDI_VERSION_1 };
typedef enum _BTHX_SCO_SUPPORT {
    ScoSupportNone = 0,
    ScoSupportHCI = 1,
    ScoSupportHCIBypass = 2,
} BTHX_SCO_SUPPORT, *PBTHX_SCO_SUPPORT;
typedef struct _BTHX_CAPABILITIES {
    ULONG MaxAclTransferInSize;
    BTHX_SCO_SUPPORT ScoSupport;
    ULONG MaxScoChannels;
    BOOLEAN IsDeviceIdleCapable;
    BOOLEAN IsDeviceWakeCapable;
} BTHX_CAPABILITIES, *PBTHX_CAPABILITIES;
#include <PSHPACK1.H>
typedef struct _BTHX_HCI_READ_WRITE_CONTEXT {
    ULONG DataLen;
    UCHAR Type;
    _Field_size_bytes_(DataLen) UCHAR Data[1];
} BTHX_HCI_READ_WRITE_CONTEXT, *PBTHX_HCI_READ_WRITE_CONTEXT;
#include <POPPACK.H>
