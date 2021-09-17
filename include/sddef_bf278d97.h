#pragma warning(disable:4214)
extern "C" {
typedef UCHAR SD_COMMAND_CODE;
typedef enum {
    SDCC_STANDARD = 0,
    SDCC_APP_CMD
} SD_COMMAND_CLASS;
typedef enum {
    SDTD_UNSPECIFIED = 0,
    SDTD_READ,
    SDTD_WRITE
} SD_TRANSFER_DIRECTION;
typedef enum {
    SDTT_UNSPECIFIED = 0,
    SDTT_CMD_ONLY,
    SDTT_SINGLE_BLOCK,
    SDTT_MULTI_BLOCK,
    SDTT_MULTI_BLOCK_NO_CMD12
} SD_TRANSFER_TYPE;
typedef enum {
    SDRT_UNSPECIFIED = 0,
    SDRT_NONE,
    SDRT_1,
    SDRT_1B,
    SDRT_2,
    SDRT_3,
    SDRT_4,
    SDRT_5,
    SDRT_5B,
    SDRT_6
} SD_RESPONSE_TYPE;
typedef struct _SDRESP_TYPE3 {
    ULONG Reserved1:4;
    ULONG VoltageProfile:20;
    ULONG Reserved2:7;
    ULONG PowerState:1;
} SDRESP_TYPE3, *PSDRESP_TYPE3;
typedef struct _OCR_REGISTER_V2 {
    ULONG Reserved1:7;
    ULONG VoltageProfile1:1;
    ULONG Reserved2:7;
    ULONG VoltageProfile2:9;
    ULONG Reserved3:6;
    ULONG CardCapacityStatus:1;
    ULONG PowerState:1;
} OCR_REGISTER_V2, *POCR_REGISTER_V2;
typedef struct _SDCMD_DESCRIPTOR {
    SD_COMMAND_CODE Cmd;
    SD_COMMAND_CLASS CmdClass;
    SD_TRANSFER_DIRECTION TransferDirection;
    SD_TRANSFER_TYPE TransferType;
    SD_RESPONSE_TYPE ResponseType;
} SDCMD_DESCRIPTOR, *PSDCMD_DESCRIPTOR;
typedef struct _SD_RW_DIRECT_ARGUMENT {
    union {
        struct {
            ULONG Data:8;
            ULONG Reserved1:1;
            ULONG Address:17;
            ULONG Reserved2:1;
            ULONG ReadAfterWrite:1;
            ULONG Function:3;
            ULONG WriteToDevice:1;
        } bits;
        ULONG AsULONG;
    } u;
} SD_RW_DIRECT_ARGUMENT, *PSD_RW_DIRECT_ARGUMENT;
typedef struct _SD_RW_EXTENDED_ARGUMENT {
    union {
        struct {
            ULONG Count:9;
            ULONG Address:17;
            ULONG OpCode:1;
            ULONG BlockMode:1;
            ULONG Function:3;
            ULONG WriteToDevice:1;
        } bits;
        ULONG AsULONG;
    } u;
} SD_RW_EXTENDED_ARGUMENT, *PSD_RW_EXTENDED_ARGUMENT;
typedef enum {
    SDBUS_TRANSFER_METHOD_UNSPECIFIED = 0,
    SDBUS_TRANSFER_METHOD_PIO,
    SDBUS_TRANSFER_METHOD_DB_DMA,
    SDBUS_TRANSFER_METHOD_ADMA2,
    SDBUS_TRANSFER_METHOD_SYSTEM_DMA
} SDBUS_TRANSFER_METHOD;
typedef enum {
    SDBUS_SPEED_MODE_NORMAL = 0,
    SDBUS_SPEED_MODE_HIGH,
    SDBUS_SPEED_MODE_SDR50,
    SDBUS_SPEED_MODE_SDR104,
    SDBUS_SPEED_MODE_DDR50,
    SDBUS_SPEED_MODE_HS200,
    SDBUS_SPEED_MODE_HS400
} SDBUS_SPEED_MODE;
typedef struct _SD_SOCKET_DATA {
    ULONGLONG HostRegisterPhysicalBase;
    ULONGLONG HostRegisterPhysicalBaseOriginal;
    SDBUS_TRANSFER_METHOD TransferMethod;
    SDBUS_SPEED_MODE SpeedMode;
    ULONG BusClock;
    ULONG NumHpiIOs;
    USHORT SupportedSpeedModes;
    USHORT SupportedCardSpeedModes;
    BOOLEAN NonremovableDevice;
    BOOLEAN Support8BitBus;
    BOOLEAN SupportWideBus;
    BOOLEAN SupportHpi;
    BOOLEAN UseTuningForSDR50;
    BOOLEAN NeedsSoftwareRetuner;
    BOOLEAN SupportAutoCmd23;
    BOOLEAN SupportAutoCmd12;
    BOOLEAN SupportGPIOCardDetection;
    BOOLEAN SupportWriteProtect;
} SD_SOCKET_DATA, *PSD_SOCKET_DATA;
typedef struct _SDBUS_ADAPTER_SOCKET_INFO {
    SD_SOCKET_DATA SocketData[ANYSIZE_ARRAY];
} SDBUS_ADAPTER_SOCKET_INFO, *PSDBUS_ADAPTER_SOCKET_INFO;
typedef struct _SDSTOR_DEVICE_INFO {
    ULONG PackedCommandLookaheadCount;
    ULONG PackedCommandLookaheadFoundCount;
    ULONG PackedCommandReadIssuedCount;
    ULONG PackedCommandWriteIssuedCount;
    ULONG PackedCommandBackedOutCount;
    ULONG PackedCommandReadCompletedCount;
    ULONG PackedCommandWriteCompletedCount;
    ULONG PackedCommandLastPackedReadIrpsCount;
    ULONG PackedCommandLastPackedWriteIrpsCount;
    BOOLEAN SupportPacked;
    BOOLEAN HostSupportHpi;
} SDSTOR_DEVICE_INFO, *PSDSTOR_DEVICE_INFO;
}
