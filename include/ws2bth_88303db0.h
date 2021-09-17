#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
#include <bthdef.h>
#include <pshpack1.h>
typedef struct _SOCKADDR_BTH
{
    USHORT addressFamily;
    BTH_ADDR btAddr;
    GUID serviceClassId;
    ULONG port;
} SOCKADDR_BTH, *PSOCKADDR_BTH;
DEFINE_GUID(SVCID_BTH_PROVIDER, 0x6aa63e0, 0x7d60, 0x41ff, 0xaf, 0xb2, 0x3e, 0xe6, 0xd2, 0xd9, 0x39, 0x2d);
typedef struct _BTH_SET_SERVICE {
        PULONG pSdpVersion;
        HANDLE *pRecordHandle;
        ULONG fCodService;
        ULONG Reserved[5];
        ULONG ulRecordLength;
        UCHAR pRecord[1];
} BTH_SET_SERVICE, *PBTH_SET_SERVICE;
typedef struct _BTH_QUERY_DEVICE {
    ULONG LAP;
    UCHAR length;
} BTH_QUERY_DEVICE, *PBTH_QUERY_DEVICE;
typedef struct _BTH_QUERY_SERVICE {
 ULONG type;
 ULONG serviceHandle;
 SdpQueryUuid uuids[MAX_UUIDS_IN_QUERY];
 ULONG numRange;
 SdpAttributeRange pRange[1];
} BTH_QUERY_SERVICE, *PBTH_QUERY_SERVICE;
typedef struct _RFCOMM_MSC_DATA {
    UCHAR Signals;
        #define MSC_EA_BIT EA_BIT
        #define MSC_FC_BIT BIT(1)
        #define MSC_RTC_BIT BIT(2)
        #define MSC_RTR_BIT BIT(3)
        #define MSC_RESERVED (BIT(4)|BIT(5))
        #define MSC_IC_BIT BIT(6)
        #define MSC_DV_BIT BIT(7)
    UCHAR Break;
        #define MSC_BREAK_BIT BIT(1)
        #define MSC_SET_BREAK_LENGTH(b, l) ((b) = ((b)&0x3) | (((l)&0xf) << 4))
} RFCOMM_MSC_DATA, *PRFCOMM_MSC_DATA;
typedef struct _RFCOMM_RLS_DATA {
    UCHAR LineStatus;
        #define RLS_ERROR 0x01
        #define RLS_OVERRUN 0x02
        #define RLS_PARITY 0x04
        #define RLS_FRAMING 0x08
} RFCOMM_RLS_DATA, *PRFCOMM_RLS_DATA;
typedef struct _RFCOMM_RPN_DATA {
    UCHAR Baud;
        #define RPN_BAUD_2400 0
        #define RPN_BAUD_4800 1
        #define RPN_BAUD_7200 2
        #define RPN_BAUD_9600 3
        #define RPN_BAUD_19200 4
        #define RPN_BAUD_38400 5
        #define RPN_BAUD_57600 6
        #define RPN_BAUD_115200 7
        #define RPN_BAUD_230400 8
    UCHAR Data;
        #define RPN_DATA_5 0x0
        #define RPN_DATA_6 0x1
        #define RPN_DATA_7 0x2
        #define RPN_DATA_8 0x3
        #define RPN_STOP_1 0x0
        #define RPN_STOP_1_5 0x4
        #define RPN_PARITY_NONE 0x00
        #define RPN_PARITY_ODD 0x08
        #define RPN_PARITY_EVEN 0x18
        #define RPN_PARITY_MARK 0x28
        #define RPN_PARITY_SPACE 0x38
    UCHAR FlowControl;
        #define RPN_FLOW_X_IN 0x01
        #define RPN_FLOW_X_OUT 0x02
        #define RPN_FLOW_RTR_IN 0x04
        #define RPN_FLOW_RTR_OUT 0x08
        #define RPN_FLOW_RTC_IN 0x10
        #define RPN_FLOW_RTC_OUT 0x20
    UCHAR XonChar;
    UCHAR XoffChar;
    UCHAR ParameterMask1;
        #define RPN_PARAM_BAUD 0x01
        #define RPN_PARAM_DATA 0x02
        #define RPN_PARAM_STOP 0x04
        #define RPN_PARAM_PARITY 0x08
        #define RPN_PARAM_P_TYPE 0x10
        #define RPN_PARAM_XON 0x20
        #define RPN_PARAM_XOFF 0x40
    UCHAR ParameterMask2;
        #define RPN_PARAM_X_IN 0x01
        #define RPN_PARAM_X_OUT 0x02
        #define RPN_PARAM_RTR_IN 0x04
        #define RPN_PARAM_RTR_OUT 0x08
        #define RPN_PARAM_RTC_IN 0x10
        #define RPN_PARAM_RTC_OUT 0x20
} RFCOMM_RPN_DATA, *PRFCOMM_RPN_DATA;
typedef struct _RFCOMM_COMMAND
{
    ULONG CmdType;
    union
    {
        RFCOMM_MSC_DATA MSC;
        RFCOMM_RLS_DATA RLS;
        RFCOMM_RPN_DATA RPN;
    } Data;
} RFCOMM_COMMAND, *PRFCOMM_COMMAND;
typedef struct _BTH_PING_REQ {
    BTH_ADDR btAddr;
    UCHAR dataLen;
    UCHAR data[MAX_L2CAP_PING_DATA_LENGTH];
} BTH_PING_REQ, *PBTH_PING_REQ;
typedef struct _BTH_PING_RSP {
    UCHAR dataLen;
    UCHAR data[MAX_L2CAP_PING_DATA_LENGTH];
} BTH_PING_RSP, *PBTH_PING_RSP;
typedef struct _BTH_INFO_REQ {
    BTH_ADDR btAddr;
    USHORT infoType;
} BTH_INFO_REQ, *PBTH_INFO_REQ;
typedef struct _BTH_INFO_RSP {
    USHORT result;
    UCHAR dataLen;
    union {
        USHORT connectionlessMTU;
        UCHAR data[MAX_L2CAP_INFO_DATA_LENGTH];
    };
} BTH_INFO_RSP, *PBTH_INFO_RSP;
typedef struct _BTH_SET_SERVICE BTHNS_SETBLOB, *PBTHNS_SETBLOB;
typedef struct _BTH_QUERY_DEVICE BTHNS_INQUIRYBLOB, *PBTHNS_INQUIRYBLOB;
typedef struct _BTH_QUERY_SERVICE BTHNS_RESTRICTIONBLOB, *PBTHNS_RESTRICTIONBLOB;
#include <poppack.h>
#pragma warning(default:4201)
#endif
#pragma endregion
