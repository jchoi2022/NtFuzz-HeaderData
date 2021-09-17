#pragma warning(disable:4200)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
struct _SD_MINIPORT;
struct _SDPORT_CAPABILITIES;
struct _SDPORT_SLOT_EXTENSION;
struct _SDPORT_BUS_OPERATION;
struct _SDPORT_REQUEST;
struct _SDPORT_COMMAND;
                                              SDPORT_EVENT_CARD_RESPONSE | \
                                              SDPORT_EVENT_CARD_RW_END | \
                                              SDPORT_EVENT_BUFFER_EMPTY | \
                                              SDPORT_EVENT_BUFFER_FULL | \
                                              SDPORT_EVENT_DMA_COMPLETE | \
                                              SDPORT_EVENT_ERROR)
                                              SDPORT_EVENT_CARD_INTERRUPT | \
                                              SDPORT_EVENT_TUNING)
                                              SDPORT_EVENT_DMA_RESOURCES_ALLOCATED | \
                                              SDPORT_EVENT_DMA_TRANSFER_CANCELLED | \
                                              SDPORT_EVENT_CLOCK_STABLE | \
                                              SDPORT_EVENT_SIGNALING_VOLTAGE_STABLE)
                                SDPORT_ERROR_CMD_CRC_ERROR | \
                                SDPORT_ERROR_CMD_END_BIT_ERROR | \
                                SDPORT_ERROR_CMD_INDEX_ERROR | \
                                SDPORT_ERROR_ADMA_ERROR)
                                SDPORT_ERROR_DATA_CRC_ERROR | \
                                SDPORT_ERROR_DATA_END_BIT_ERROR | \
                                SDPORT_GENERIC_IO_ERROR | \
                                SDPORT_ERROR_ADMA_ERROR)
typedef enum _SDPORT_BUS_TYPE {
    SdBusTypeUndefined = -1,
    SdBusTypeAcpi,
    SdBusTypePci
} SDPORT_BUS_TYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
SDPORT_GET_SLOT_COUNT(
    _In_ struct _SD_MINIPORT *Miniport,
    _Out_ PUCHAR SlotCount
    );
typedef SDPORT_GET_SLOT_COUNT *PSDPORT_GET_SLOT_COUNT;
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
SDPORT_GET_SLOT_CAPABILITIES(
    _In_ PVOID PrivateExtension,
    _Out_ struct _SDPORT_CAPABILITIES *Capabilities
    );
typedef SDPORT_GET_SLOT_CAPABILITIES *PSDPORT_GET_SLOT_CAPABILITIES;
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
SDPORT_INITIALIZE(
    _In_ PVOID PrivateExtension,
    _In_ PHYSICAL_ADDRESS PhysicalBase,
    _In_ PVOID VirtualBase,
    _In_ ULONG Length,
 _In_ BOOLEAN CrashdumpMode
    );
typedef SDPORT_INITIALIZE *PSDPORT_INITIALIZE;
_IRQL_requires_max_(APC_LEVEL)
typedef
NTSTATUS
SDPORT_ISSUE_BUS_OPERATION(
    _In_ PVOID PrivateExtension,
    _In_ struct _SDPORT_BUS_OPERATION *BusOperation
    );
typedef SDPORT_ISSUE_BUS_OPERATION *PSDPORT_ISSUE_BUS_OPERATION;
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
BOOLEAN
SDPORT_GET_CARD_DETECT_STATE(
    _In_ PVOID PrivateExtension
    );
typedef SDPORT_GET_CARD_DETECT_STATE *PSDPORT_GET_CARD_DETECT_STATE;
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
BOOLEAN
SDPORT_GET_WRITE_PROTECT_STATE(
    _In_ PVOID PrivateExtension
    );
typedef SDPORT_GET_WRITE_PROTECT_STATE *PSDPORT_GET_WRITE_PROTECT_STATE;
typedef
BOOLEAN
SDPORT_INTERRUPT(
    _In_ PVOID PrivateExtension,
    _Out_ PULONG Events,
    _Out_ PULONG Errors,
    _Out_ PBOOLEAN NotifyCardChange,
    _Out_ PBOOLEAN NotifySdioInterrupt,
    _Out_ PBOOLEAN NotifyTuning
    );
typedef SDPORT_INTERRUPT *PSDPORT_INTERRUPT;
_IRQL_requires_(DISPATCH_LEVEL)
typedef
NTSTATUS
SDPORT_ISSUE_REQUEST(
    _In_ PVOID PrivateExtension,
    _In_ struct _SDPORT_REQUEST *Request
    );
typedef SDPORT_ISSUE_REQUEST *PSDPORT_ISSUE_REQUEST;
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
VOID
SDPORT_GET_RESPONSE(
    _In_ PVOID PrivateExtension,
    _In_ struct _SDPORT_COMMAND *Command,
    _Out_ PVOID ResponseBuffer
    );
typedef SDPORT_GET_RESPONSE *PSDPORT_GET_RESPONSE;
_IRQL_requires_(DISPATCH_LEVEL)
typedef
VOID
SDPORT_REQUEST_DPC(
    _In_ PVOID PrivateExtension,
    _Inout_ struct _SDPORT_REQUEST *Request,
    _In_ ULONG Events,
    _In_ ULONG Errors
    );
typedef SDPORT_REQUEST_DPC *PSDPORT_REQUEST_DPC;
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
VOID
SDPORT_SAVE_CONTEXT(
    _In_ PVOID PrivateExtension
    );
typedef SDPORT_SAVE_CONTEXT *PSDPORT_SAVE_CONTEXT;
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
VOID
SDPORT_RESTORE_CONTEXT(
    _In_ PVOID PrivateExtension
    );
typedef SDPORT_RESTORE_CONTEXT *PSDPORT_RESTORE_CONTEXT;
typedef
VOID
SDPORT_TOGGLE_EVENTS(
    _In_ PVOID PrivateExtension,
    _In_ ULONG EventMask,
    _In_ BOOLEAN Enable
    );
typedef SDPORT_TOGGLE_EVENTS *PSDPORT_TOGGLE_EVENTS;
typedef
VOID
SDPORT_CLEAR_EVENTS(
    _In_ PVOID PrivateExtension,
    _In_ ULONG EventMask
    );
typedef SDPORT_CLEAR_EVENTS *PSDPORT_CLEAR_EVENTS;
typedef
NTSTATUS
SDPORT_PO_FX_POWER_CONTROL_CALLBACK(
    _In_ struct _SD_MINIPORT *Miniport,
    _In_ LPCGUID PowerControlCode,
    _In_reads_bytes_opt_(InputBufferSize) PVOID InputBuffer,
    _In_ SIZE_T InputBufferSize,
    _Out_writes_bytes_opt_(OutputBufferSize) PVOID OutputBuffer,
    _In_ SIZE_T OutputBufferSize,
    _Out_opt_ PSIZE_T BytesReturned
    );
typedef SDPORT_PO_FX_POWER_CONTROL_CALLBACK *PSDPORT_PO_FX_POWER_CONTROL_CALLBACK;
typedef
VOID
SDPORT_CLEANUP(
    _In_ struct _SD_MINIPORT *Miniport
    );
typedef SDPORT_CLEANUP *PSDPORT_CLEANUP;
typedef UCHAR SDPORT_COMMAND_INDEX;
typedef enum {
    SdCommandTypeUndefined = 0,
    SdCommandTypeSuspend,
    SdCommandTypeResume,
    SdCommandTypeAbort
} SDPORT_COMMAND_TYPE;
typedef enum {
    SdCommandClassUndefined = 0,
    SdCommandClassStandard,
    SdCommandClassApp
} SDPORT_COMMAND_CLASS;
typedef enum {
    SdResponseTypeUndefined = 0,
    SdResponseTypeNone,
    SdResponseTypeR1,
    SdResponseTypeR1B,
    SdResponseTypeR2,
    SdResponseTypeR3,
    SdResponseTypeR4,
    SdResponseTypeR5,
    SdResponseTypeR5B,
    SdResponseTypeR6
} SDPORT_RESPONSE_TYPE;
typedef enum {
    SdTransferTypeUndefined = 0,
    SdTransferTypeNone,
    SdTransferTypeSingleBlock,
    SdTransferTypeMultiBlock,
    SdTransferTypeMultiBlockNoStop
} SDPORT_TRANSFER_TYPE;
typedef enum {
    SdTransferDirectionUndefined = 0,
    SdTransferDirectionRead,
    SdTransferDirectionWrite
} SDPORT_TRANSFER_DIRECTION;
typedef enum {
    SdTransferMethodUndefined = 0,
    SdTransferMethodPio,
    SdTransferMethodSgDma,
} SDPORT_TRANSFER_METHOD;
typedef struct _SDPORT_COMMAND {
    SDPORT_COMMAND_INDEX Index;
    SDPORT_COMMAND_TYPE Type;
    SDPORT_COMMAND_CLASS Class;
    SDPORT_RESPONSE_TYPE ResponseType;
    SDPORT_TRANSFER_TYPE TransferType;
    SDPORT_TRANSFER_DIRECTION TransferDirection;
    SDPORT_TRANSFER_METHOD TransferMethod;
    ULONG Argument;
    BOOLEAN UseAutoCmd12;
    BOOLEAN UseAutoCmd23;
    USHORT BlockSize;
    USHORT BlockCount;
    ULONG Length;
    PUCHAR DataBuffer;
    PVOID DmaVirtualAddress;
    PHYSICAL_ADDRESS DmaPhysicalAddress;
    PSCATTER_GATHER_LIST ScatterGatherList;
    ULONG ScatterGatherListSize;
} SDPORT_COMMAND, *PSDPORT_COMMAND;
typedef enum _SDPORT_REQUEST_TYPE {
    SdRequestTypeUnspecified = 0,
    SdRequestTypeCommandNoTransfer,
    SdRequestTypeCommandWithTransfer,
    SdRequestTypeStartTransfer
} SDPORT_REQUEST_TYPE, *PSDPORT_REQUEST_TYPE;
typedef struct _SDPORT_REQUEST {
    SDPORT_REQUEST_TYPE Type;
    SDPORT_COMMAND Command;
    ULONG RequiredEvents;
    NTSTATUS Status;
} SDPORT_REQUEST, *PSDPORT_REQUEST;
typedef enum _SDPORT_RESET_TYPE {
    SdResetTypeUndefined = 0,
    SdResetTypeAll,
    SdResetTypeCmd,
    SdResetTypeDat
} SDPORT_RESET_TYPE;
typedef enum _SDPORT_BUS_VOLTAGE {
    SdBusVoltageUndefined = 0,
    SdBusVoltage33,
    SdBusVoltage30,
    SdBusVoltage18,
    SdBusVoltageOff
} SDPORT_BUS_VOLTAGE;
typedef enum _SDPORT_BUS_WIDTH {
    SdBusWidthUndefined = 0,
    SdBusWidth1Bit = 1,
    SdBusWidth4Bit = 4,
    SdBusWidth8Bit = 8
} SDPORT_BUS_WIDTH;
typedef enum _SDPORT_BUS_SPEED {
    SdBusSpeedUndefined = 0,
    SdBusSpeedNormal,
    SdBusSpeedHigh,
    SdBusSpeedSDR12,
    SdBusSpeedSDR25,
    SdBusSpeedSDR50,
    SdBusSpeedDDR50,
    SdBusSpeedSDR104,
    SdBusSpeedHS200,
    SdBusSpeedHS400
} SDPORT_BUS_SPEED;
typedef enum _SDPORT_SIGNALING_VOLTAGE {
    SdignalingVoltageUndefined = 0,
    SdSignalingVoltage33,
    SdSignalingVoltage18
} SDPORT_SIGNALING_VOLTAGE;
typedef enum _SDPORT_DRIVE_STRENGTH {
    SdDriveStrengthUndefined = 0,
    SdDriveStrength200mA,
    SdDriveStrength400mA,
    SdDriveStrength600mA,
    SdDriveStrength800mA
} SDPORT_DRIVE_STRENGTH;
typedef enum _SDPORT_DRIVER_TYPE {
    SdDriverTypeUndefined = 0,
    SdDriverTypeB,
    SdDriverTypeA,
    SdDriverTypeC,
    SdDriverTypeD
} SDPORT_DRIVER_TYPE;
typedef enum _SDPORT_BUS_OPERATION_TYPE {
    SdBusOperationUndefined = 0,
    SdResetHw,
    SdResetHost,
    SdSetClock,
    SdSetVoltage,
    SdSetPower,
    SdSetBusWidth,
    SdSetBusSpeed,
    SdSetSignalingVoltage,
    SdSetDriveStrength,
    SdSetDriverType,
    SdSetPresetValue,
    SdSetBlockGapInterrupt,
    SdExecuteTuning
} SDPORT_BUS_OPERATION_TYPE;
typedef struct _SDPORT_BUS_OPERATION {
    SDPORT_BUS_OPERATION_TYPE Type;
    union {
        SDPORT_RESET_TYPE ResetType;
        ULONG FrequencyKhz;
        SDPORT_BUS_VOLTAGE Voltage;
        BOOLEAN PowerEnabled;
        SDPORT_BUS_WIDTH BusWidth;
        SDPORT_BUS_SPEED BusSpeed;
        SDPORT_SIGNALING_VOLTAGE SignalingVoltage;
        UCHAR DriveStrength;
        SDPORT_DRIVER_TYPE DriverType;
        BOOLEAN PresetValueEnabled;
        BOOLEAN BlockGapIntEnabled;
    } Parameters;
} SDPORT_BUS_OPERATION, *PSDPORT_BUS_OPERATION;
typedef struct _SDPORT_INITIALIZATION_DATA {
    ULONG StructureSize;
    PSDPORT_GET_SLOT_COUNT GetSlotCount;
    PSDPORT_GET_SLOT_CAPABILITIES GetSlotCapabilities;
    PSDPORT_INTERRUPT Interrupt;
    PSDPORT_ISSUE_REQUEST IssueRequest;
    PSDPORT_GET_RESPONSE GetResponse;
    PSDPORT_REQUEST_DPC RequestDpc;
    PSDPORT_TOGGLE_EVENTS ToggleEvents;
    PSDPORT_CLEAR_EVENTS ClearEvents;
    PSDPORT_SAVE_CONTEXT SaveContext;
    PSDPORT_RESTORE_CONTEXT RestoreContext;
    PSDPORT_INITIALIZE Initialize;
    PSDPORT_ISSUE_BUS_OPERATION IssueBusOperation;
    PSDPORT_GET_CARD_DETECT_STATE GetCardDetectState;
    PSDPORT_GET_WRITE_PROTECT_STATE GetWriteProtectState;
    PSDPORT_PO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PSDPORT_CLEANUP Cleanup;
    ULONG PrivateExtensionSize;
 BOOLEAN CrashdumpSupported;
} SDPORT_INITIALIZATION_DATA, *PSDPORT_INITIALIZATION_DATA;
typedef struct _SDPORT_SLOT_EXTENSION {
    struct _SD_MINIPORT *Miniport;
     UCHAR PrivateExtension[0];
} SDPORT_SLOT_EXTENSION, *PSDPORT_SLOT_EXTENSION;
typedef struct _SDPORT_PCI_CONFIG_INFO {
    ULONG VendorID;
    ULONG DeviceID;
    ULONG RevisionID;
    ULONG SubsysID;
} SDPORT_PCI_CONFIG_INFO, *PSDPORT_PCI_CONFIG_INFO;
typedef struct _SDPORT_CAPABILITIES {
    UCHAR SpecVersion;
    UCHAR MaximumOutstandingRequests;
    USHORT MaximumBlockSize;
    USHORT MaximumBlockCount;
    ULONG BaseClockFrequencyKhz;
    ULONG TuningTimerCountInSeconds;
    ULONG DmaDescriptorSize;
    ULONG AlignmentRequirement;
    ULONG PioTransferMaxThreshold;
    struct {
        ULONG ScatterGatherDma:1;
        ULONG Address64Bit:1;
        ULONG BusWidth8Bit:1;
        ULONG HighSpeed:1;
        ULONG SignalingVoltage18V:1;
        ULONG SDR50:1;
        ULONG DDR50:1;
        ULONG SDR104:1;
        ULONG HS200:1;
        ULONG HS400:1;
        ULONG Reserved:5;
        ULONG DriverTypeA:1;
        ULONG DriverTypeB:1;
        ULONG DriverTypeC:1;
        ULONG DriverTypeD:1;
        ULONG TuningForSDR50:1;
        ULONG SoftwareTuning:1;
        ULONG AutoCmd12:1;
        ULONG AutoCmd23:1;
        ULONG Voltage18V:1;
        ULONG Voltage30V:1;
        ULONG Voltage33V:1;
        ULONG Limit200mA:1;
        ULONG Limit400mA:1;
        ULONG Limit600mA:1;
        ULONG Limit800mA:1;
  ULONG SaveContext:1;
        ULONG Reserved1:3;
    } Supported;
    struct {
        ULONG UsePioForRead:1;
        ULONG UsePioForWrite:1;
        ULONG Reserved:30;
    } Flags;
} SDPORT_CAPABILITIES, *PSDPORT_CAPABILITIES;
typedef struct _SDPORT_PORT_CONFIG_INFO {
    PVOID DeviceObject;
    SDPORT_BUS_TYPE BusType;
    union {
        SDPORT_PCI_CONFIG_INFO PciConfigInfo;
    } BusInfo;
} SDPORT_PORT_CONFIG_INFO, *PSDPORT_PORT_CONFIG_INFO;
typedef struct _SD_MINIPORT {
    PSDPORT_INITIALIZATION_DATA InitializationData;
    SDPORT_PORT_CONFIG_INFO ConfigurationInfo;
    UCHAR SlotCount;
    PSDPORT_SLOT_EXTENSION SlotExtensionList[MAX_SD_SLOTS];
} SD_MINIPORT, *PSD_MINIPORT;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
SdPortInitialize(
    _In_ PVOID Argument1,
    _In_ PVOID Argument2,
    _In_ PSDPORT_INITIALIZATION_DATA InitializationData
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
SdPortCompleteRequest(
    _In_ PSDPORT_REQUEST Request,
    _In_ NTSTATUS Status
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
SdPortPoFxPowerControl(
    _In_ PVOID PrivateExtension,
    _In_ LPCGUID PowerControlCode,
    _In_opt_ PVOID InBuffer,
    _In_ SIZE_T InBufferSize,
    _Out_opt_ PVOID OutBuffer,
    _In_ SIZE_T OutBufferSize,
    _Out_opt_ PSIZE_T BytesReturned
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
SdPortGetPciConfigSpace(
    _In_ PSD_MINIPORT Miniport,
    _In_ UCHAR Offset,
    _Out_writes_bytes_(Length) PUCHAR Buffer,
    _In_ ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
SdPortSetPciConfigSpace(
    _In_ PSD_MINIPORT Miniport,
    _In_ UCHAR Offset,
    _In_reads_bytes_(Length) PUCHAR Buffer,
    _In_ ULONG Length
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
SdPortWait(
   _In_ ULONG Microseconds
   );
VOID
SdPortWriteRegisterUlong(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _In_ ULONG Data
    );
VOID
SdPortWriteRegisterUshort(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _In_ USHORT Data
    );
VOID
SdPortWriteRegisterUchar(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _In_ UCHAR Data
    );
ULONG
SdPortReadRegisterUlong(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register
    );
USHORT
SdPortReadRegisterUshort(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register
    );
UCHAR
SdPortReadRegisterUchar(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register
    );
VOID
SdPortReadRegisterBufferUlong(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _Out_writes_all_(Length) PULONG Buffer,
    _In_ ULONG Length
    );
VOID
SdPortReadRegisterBufferUshort(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _Out_writes_all_(Length) PUSHORT Buffer,
    _In_ ULONG Length
    );
VOID
SdPortReadRegisterBufferUchar(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _Out_writes_all_(Length) PUCHAR Buffer,
    _In_ ULONG Length
    );
VOID
SdPortWriteRegisterBufferUlong(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _In_reads_(Length) PULONG Buffer,
    _In_ ULONG Length
    );
VOID
SdPortWriteRegisterBufferUshort(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _In_reads_(Length) PUSHORT Buffer,
    _In_ ULONG Length
    );
VOID
SdPortWriteRegisterBufferUchar(
    _In_ PVOID BaseAddress,
    _In_ ULONG Register,
    _In_reads_(Length) PUCHAR Buffer,
    _In_ ULONG Length
    );
