#include <initguid.h>
#pragma warning(disable:4201)
#pragma warning(disable:4214)
extern "C"
{
typedef PHYSICAL_ADDRESS IDE_PHYSICAL_ADDRESS, *PIDE_PHYSICAL_ADDRESS;
typedef struct _IDE_IO_CONTROL {
        ULONG HeaderLength;
        UCHAR Signature[8];
        ULONG Timeout;
        ULONG ControlCode;
        ULONG ReturnStatus;
        ULONG DataLength;
} IDE_IO_CONTROL, *PIDE_IO_CONTROL;
typedef enum _IDE_NOTIFICATION_TYPE {
    IdeDeviceArrival,
    IdeDeviceRemoval,
    IdePowerStateChange
} IDE_NOTIFICATION_TYPE, *PIDE_NOTIFICATION_TYPE;
typedef enum _IDE_CALLBACK_TYPE {
    IdeTimerRoutine,
    IdeWorkerRoutine,
    IdeSynchronizedRoutine,
    IdeControllerSyncRoutine,
    IdeMaxCallbackType
} IDE_CALLBACK_TYPE, *PIDE_CALLBACK_TYPE;
typedef enum {
    DeviceUnknown = 0,
    DeviceIsAta,
    DeviceIsAtapi,
    DeviceNotExist
} IDE_DEVICE_TYPE;
typedef enum {
    UnknownMode = 0,
    ChsMode,
    LbaMode,
    Lba48BitMode
}ATA_ADDRESS_TRANSLATION;
typedef enum {
    IdeStart = 0,
    IdeStop,
    IdePowerUp,
    IdePowerDown,
    IdeVendorDefined
} IDE_CONTROL_ACTION;
typedef enum {
    IdePowerUnSpecified = 0,
    IdePowerD0,
    IdePowerD3
} IDE_POWER_STATE;
typedef struct _IDE_POWER_INFO {
    IDE_POWER_STATE CurrentPowerState;
    IDE_POWER_STATE DesiredPowerState;
} IDE_POWER_INFO, *PIDE_POWER_INFO;
typedef struct _IDE_VENDOR_DEFINED_POWER_INFO {
    UCHAR TargetId;
    GUID SettingGuid;
    _Field_size_bytes_(ValueLength)
    PVOID Value;
    ULONG ValueLength;
} IDE_VENDOR_DEFINED_POWER_INFO, *PIDE_VENDOR_DEFINED_POWER_INFO;
typedef struct _IDEREGISTERS {
    UCHAR bFeaturesReg;
    UCHAR bSectorCountReg;
    UCHAR bSectorNumberReg;
    UCHAR bCylLowReg;
    UCHAR bCylHighReg;
    UCHAR bDriveHeadReg;
    UCHAR bCommandReg;
    UCHAR bReserved;
} IDEREGISTERS, *PIDEREGISTERS;
typedef struct _IDE_TASK_FILE {
    IDEREGISTERS Current;
    IDEREGISTERS Previous;
} IDE_TASK_FILE, *PIDE_TASK_FILE;
typedef UCHAR IRB_STATUS;
typedef struct _IDE_REQUEST_BLOCK {
    USHORT Function;
    UCHAR IrbStatus;
    UCHAR AtaStatus;
    UCHAR AtaError;
    UCHAR Channel;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoBufferLength;
    UCHAR SenseInfoBufferType;
    UCHAR QueueTag;
    ULONG ReservedAsUlong;
    ULONG IrbFlags;
    ULONG TimeOutValue;
    ULONG DataTransferLength;
    PVOID IrbExtension;
    _Field_size_bytes_(DataTransferLength)
    PVOID DataBuffer;
    _Field_size_bytes_(SenseInfoBufferLength)
    PVOID SenseInfoBuffer;
    PVOID NextIrb;
    PVOID Reserved;
    union {
        IDE_TASK_FILE IdeTaskFile;
        UCHAR Cdb[16];
        IDE_POWER_INFO PowerChange;
        UCHAR AsUChar[16];
    };
} IDE_REQUEST_BLOCK, *PIDE_REQUEST_BLOCK;
    (IsAtapiCommand(irb) && \
     !IsRequestSenseIrb(irb) && \
     (irb->IrbStatus == IRB_STATUS_DEVICE_ERROR) && \
     (irb->SenseInfoBuffer != NULL) && \
     (irb->SenseInfoBufferLength > 0))
    (irb->IrbFlags & (IRB_FLAGS_DATA_IN | IRB_FLAGS_DATA_OUT))
    (irb->IdeTaskFile.Current.bDriveHeadReg = ((irb->TargetId == 0x0) ? (0xA0 | val) : (0xB0 | val)))
{ \
    switch (AtaCommand) { \
    case IDE_COMMAND_IDENTIFY: \
    case IDE_COMMAND_ATAPI_IDENTIFY: \
        irbFunc = IRB_FUNCTION_ATA_IDENTIFY; \
        break; \
    case IDE_COMMAND_READ: \
    case IDE_COMMAND_READ_MULTIPLE: \
    case IDE_COMMAND_READ_DMA: \
    case IDE_COMMAND_READ_EXT: \
    case IDE_COMMAND_READ_DMA_EXT: \
    case IDE_COMMAND_READ_MULTIPLE_EXT: \
        irbFunc = IRB_FUNCTION_ATA_READ; \
        break; \
    case IDE_COMMAND_WRITE: \
    case IDE_COMMAND_WRITE_MULTIPLE: \
    case IDE_COMMAND_WRITE_DMA: \
    case IDE_COMMAND_WRITE_EXT: \
    case IDE_COMMAND_WRITE_DMA_EXT: \
    case IDE_COMMAND_WRITE_DMA_FUA_EXT: \
    case IDE_COMMAND_WRITE_MULTIPLE_EXT: \
    case IDE_COMMAND_WRITE_MULTIPLE_FUA_EXT: \
        irbFunc = IRB_FUNCTION_ATA_WRITE; \
        break; \
    case IDE_COMMAND_CHECK_POWER: \
    case IDE_COMMAND_FLUSH_CACHE: \
    case IDE_COMMAND_FLUSH_CACHE_EXT: \
        irbFunc = IRB_FUNCTION_ATA_FLUSH;\
        break; \
    case IDE_COMMAND_SMART: \
        irbFunc = IRB_FUNCTION_ATA_SMART; \
        break;\
    default:\
        irbFunc = IRB_FUNCTION_ATA_COMMAND;\
        break;\
    } \
}
typedef struct _IDE_SCATTER_GATHER_ELEMENT {
    IDE_PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} IDE_SCATTER_GATHER_ELEMENT, *PIDE_SCATTER_GATHER_ELEMENT;
typedef struct _IDE_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    _Field_size_(NumberOfElements)
    IDE_SCATTER_GATHER_ELEMENT Elements[];
} IDE_SCATTER_GATHER_LIST, *PIDE_SCATTER_GATHER_LIST;
typedef struct _IDE_REGISTERS_1 {
    PUCHAR RegistersBaseAddress;
    PUSHORT Data;
    union {
        PUCHAR Error;
        PUCHAR Features;
    };
    union {
        PUCHAR BlockCount;
        PUCHAR InterruptReason;
    };
    PUCHAR BlockNumber;
    union {
        PUCHAR CylinderLow;
        PUCHAR ByteCountLow;
    };
    union {
        PUCHAR CylinderHigh;
        PUCHAR ByteCountHigh;
    };
    PUCHAR DriveSelect;
    PUCHAR Command;
} IDE_REGISTERS_1, *PIDE_REGISTERS_1;
typedef struct _IDE_REGISTERS_2 {
    PUCHAR RegistersBaseAddress;
    PUCHAR DeviceControl;
    PUCHAR DriveAddress;
} IDE_REGISTERS_2, *PIDE_REGISTERS_2;
typedef struct _IDE_ACCESS_RANGE {
    IDE_PHYSICAL_ADDRESS RangeStart;
    IDE_PHYSICAL_ADDRESS PhysicalRangeStart;
    ULONG RangeLength;
    BOOLEAN InMemory;
    UCHAR Bar;
} IDE_ACCESS_RANGE, *PIDE_ACCESS_RANGE;
typedef struct _IDE_ERROR_LOG_ENTRY {
    UCHAR IrbStatus;
    UCHAR Channel;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR UniqueId;
    UCHAR DumpDataSize;
    UCHAR DumpData;
} IDE_ERROR_LOG_ENTRY, *PIDE_ERROR_LOG_ENTRY;
typedef struct _IDE_DEVICE_PARAMETERS {
    USHORT Version;
    IDE_DEVICE_TYPE IdeDeviceType;
    UCHAR TargetId;
    UCHAR MaximumLun;
    UCHAR NumberOfOverlappedRequests;
    UCHAR MaxBlockXfer;
    USHORT DeviceCharacteristics;
    ATA_ADDRESS_TRANSLATION AddressTranslation;
    union {
        LARGE_INTEGER MaxLba;
        struct {
            USHORT NumCylinders;
            USHORT NumHeads;
            USHORT NumSectorsPerTrack;
            USHORT Reserved;
        } Chs;
    };
    ULONG BytesPerLogicalSector;
    ULONG BytesPerPhysicalSector;
    ULONG BytesOffsetForSectorAlignment;
    ULONG TransferModeSupported;
    ULONG TransferModeSelected;
} IDE_DEVICE_PARAMETERS, *PIDE_DEVICE_PARAMETERS;
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_INITIALIZE) (
    _In_ PVOID ChannelExtension,
    _Inout_ PIDE_DEVICE_PARAMETERS DeviceParameters,
    _In_ PIDENTIFY_DEVICE_DATA IdentifyData
    );
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_STARTIO) (
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_BUILDIO) (
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );
_Must_inspect_result_
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_INTERRUPT) (
    _In_ PVOID ChannelExtension
    );
_IRQL_always_function_min_(DISPATCH_LEVEL)
_IRQL_requires_(DISPATCH_LEVEL)
typedef
VOID
(*IDE_HW_DPC) (
    _In_ PVOID ChannelExtension
    );
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_RESET) (
    _In_ PVOID ChannelExtension
    );
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_CONTROL) (
    _In_ PVOID ChannelExtension,
    _In_ IDE_CONTROL_ACTION ControlAction,
    _Inout_opt_ PVOID Parameters
    );
typedef enum _IDE_OPERATION_MODE {
    IdeModeNormal = 0,
    IdeModeDump,
    IdeModeRemovableBay
} IDE_OPERATION_MODE, *PIDE_OPERATION_MODE;
typedef struct _IDE_MINIPORT_RESOURCES{
    ULONG NumberOfAccessRanges;
    _Inout_updates_(NumberOfAccessRanges)
    PIDE_ACCESS_RANGE IdeAccessRange;
} IDE_MINIPORT_RESOURCES, *PIDE_MINIPORT_RESOURCES;
typedef struct _IDE_VENDOR_DEFINED_POWER {
    UCHAR ValidGuids;
    GUID Guid[3];
} IDE_VENDOR_DEFINED_POWER, *PIDE_VENDOR_DEFINED_POWER;
typedef union _SUPPORTED_ADVANCES {
    struct {
        USHORT AdvancedChannelConfigurationSupported :1;
        USHORT Reserved :15;
    };
    USHORT AsUshort;
} SUPPORTED_ADVANCES, *PSUPPORTED_ADVANCES;
typedef union _IDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT {
    struct {
        USHORT VendorDefinedPower :1;
        USHORT Reserved :15;
    };
    USHORT AsUshort;
} IDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT, *PIDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT;
typedef struct _IDE_ADVANCED_CHANNEL_CONFIGURATION {
    USHORT Length;
    IDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT Present;
    IDE_VENDOR_DEFINED_POWER VendorDefinedPower;
} IDE_ADVANCED_CHANNEL_CONFIGURATION, *PIDE_ADVANCED_CHANNEL_CONFIGURATION;
typedef struct _IDE_CHANNEL_CONFIGURATION {
    USHORT Version;
    UCHAR ChannelNumber;
    SUPPORTED_ADVANCES SupportedAdvances;
    IDE_OPERATION_MODE ChannelMode;
    PIDE_MINIPORT_RESOURCES ChannelResources;
    UCHAR NumberOfOverlappedRequests;
    UCHAR MaxTargetId;
    BOOLEAN SyncWithIsr;
    BOOLEAN SupportsWmi;
    PIDE_ADVANCED_CHANNEL_CONFIGURATION AdvancedChannelConfiguration;
} IDE_CHANNEL_CONFIGURATION, *PIDE_CHANNEL_CONFIGURATION;
typedef struct _IDE_CHANNEL_INTERFACE {
    USHORT Version;
    UCHAR ChannelNumber;
    UCHAR Reserved;
    ULONG ReservedUlong;
    IDE_HW_INITIALIZE IdeHwInitialize;
    IDE_HW_BUILDIO IdeHwBuildIo;
    IDE_HW_STARTIO IdeHwStartIo;
    IDE_HW_INTERRUPT IdeHwInterrupt;
    IDE_HW_RESET IdeHwReset;
    IDE_HW_CONTROL IdeHwControl;
} IDE_CHANNEL_INTERFACE, *PIDE_CHANNEL_INTERFACE;
_Must_inspect_result_
_IRQL_requires_same_
typedef BOOLEAN
    (* IDE_CHANNEL_INIT) (
        _In_ PVOID ChannelExtension,
        _Inout_ PIDE_CHANNEL_INTERFACE ChannelInterface,
        _Inout_opt_ PVOID InitContext
        );
typedef struct _IDE_TRANSFER_MODE_PARAMETERS {
    UCHAR ChannelNumber;
    IDE_DEVICE_TYPE DeviceType[MAX_IDE_DEVICE];
    BOOLEAN IoReadySupported[MAX_IDE_DEVICE];
    ULONG DeviceTransferModeSupported[MAX_IDE_DEVICE];
    ULONG DeviceTransferModeCurrent[MAX_IDE_DEVICE];
    ULONG DeviceTransferModeSelected[MAX_IDE_DEVICE];
} IDE_TRANSFER_MODE_PARAMETERS, *PIDE_TRANSFER_MODE_PARAMETERS;
_Must_inspect_result_
_IRQL_requires_same_
typedef BOOLEAN
    (*IDE_TRANSFER_MODE_SELECT) (
        _In_ PVOID ControllerExtension,
        _Inout_ PIDE_TRANSFER_MODE_PARAMETERS TransferModeSelect
        );
typedef enum {
    ChannelStateDisabled = 0,
    ChannelStateEnabled,
    ChannelStateUnKnown
} ATA_CHANNEL_STATE;
_Must_inspect_result_
_IRQL_requires_same_
typedef ATA_CHANNEL_STATE
    (*IDE_CHANNEL_ENABLED) (
        _In_ PVOID ControllerExtension,
        _In_ ULONG Channel
        );
typedef enum {
    IdeBusPata = 0,
    IdeBusSata,
    IdeBusUnknown
} IDE_BUS_TYPE, *PIDE_BUS_TYPE;
typedef struct _IDE_CONTROLLER_CONFIGURATION {
    USHORT Version;
    UCHAR NumberOfChannels;
    IDE_OPERATION_MODE ControllerMode;
    UCHAR NumberOfPhysicalBreaks;
    ULONG MaximumTransferLength;
    BOOLEAN Reserved;
    BOOLEAN NativeModeEnabled;
    BOOLEAN Dma64BitAddress;
    BOOLEAN BusMaster;
    IDE_BUS_TYPE AtaBusType;
    PIDE_MINIPORT_RESOURCES ControllerResources;
} IDE_CONTROLLER_CONFIGURATION, *PIDE_CONTROLLER_CONFIGURATION;
_Must_inspect_result_
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_ADAPTER_CONTROL) (
    _In_ PVOID ControllerExtension,
    _In_ IDE_CONTROL_ACTION ControlAction,
    _Inout_opt_ PVOID Parameters
    );
typedef struct _IDE_CONTROLLER_INTERFACE {
    USHORT Version;
    USHORT Reserved;
    ULONG ControllerExtensionSize;
    ULONG ChannelExtensionSize;
    ULONG AlignmentMask;
    IDE_CHANNEL_INIT AtaChannelInitRoutine;
    IDE_CHANNEL_ENABLED AtaControllerChannelEnabled;
    IDE_TRANSFER_MODE_SELECT AtaControllerTransferModeSelect;
    IDE_ADAPTER_CONTROL AtaAdapterControl;
} IDE_CONTROLLER_INTERFACE, *PIDE_CONTROLLER_INTERFACE;
typedef struct _IDE_LBA_RANGE {
    ULONGLONG StartSector:48;
    ULONGLONG SectorCount:16;
} IDE_LBA_RANGE, *PIDE_LBA_RANGE;
    ULONG temp=0xffffffff; \
    mode = (temp >> (31-(i)));\
}
    ULONG temp = (mode); \
    i=0; \
    while (temp) { \
        temp >>= 1; \
        i++; \
    } \
    i--; \
}
_Must_inspect_result_
_IRQL_requires_same_
ULONG
AtaPortInitializeEx(
    _In_ PVOID DriverObject,
    _In_ PVOID RegistryPath,
    _In_ PIDE_CONTROLLER_INTERFACE ControllerInterface
    );
_IRQL_requires_same_
ULONG
AtaPortGetBusData(
    _In_ PVOID ControllerExtension,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG ConfigDataOffset,
    _In_ ULONG BufferLength
    );
_IRQL_requires_same_
ULONG
AtaPortSetBusData(
    _In_ PVOID ControllerExtension,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG ConfigDataOffset,
    _In_ ULONG BufferLength
    );
_Must_inspect_result_
_IRQL_requires_same_
PIDE_SCATTER_GATHER_LIST
AtaPortGetScatterGatherList (
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );
_Must_inspect_result_
_IRQL_requires_same_
IDE_PHYSICAL_ADDRESS
AtaPortGetPhysicalAddress (
    _In_ PVOID ChannelExtension,
    _In_opt_ PIDE_REQUEST_BLOCK Irb,
    _In_opt_ PVOID VirtualAddress,
    _Out_opt_ ULONG * Length
    );
_Must_inspect_result_
_IRQL_requires_same_
PVOID
AtaPortGetDeviceBase (
    _In_ PVOID ChannelExtension,
    _In_ IDE_PHYSICAL_ADDRESS IoAddress,
    _In_ ULONG NumberOfBytes
    );
_IRQL_requires_same_
VOID
AtaPortCompleteRequest(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );
_IRQL_requires_same_
VOID
AtaPortCompleteAllActiveRequests(
    _In_ PVOID ChannelExtension,
    _In_ UCHAR Target,
    _In_ UCHAR Lun,
    _In_ UCHAR IrbStatus
    );
_IRQL_requires_same_
VOID
AtaPortNotification(
    _In_ IDE_NOTIFICATION_TYPE NotificationType,
    _In_ PVOID ChannelExtension,
    ...
    );
_IRQL_requires_same_
VOID
AtaPortMoveMemory(
    _Out_writes_bytes_(Length) PVOID WriteBuffer,
    _In_reads_bytes_(Length) PVOID ReadBuffer,
    _In_ ULONG Length
    );
_IRQL_requires_same_
VOID
AtaPortCopyMemory(
    _Out_writes_bytes_(Length) PVOID WriteBuffer,
    _In_reads_bytes_(Length) PVOID ReadBuffer,
    _In_ ULONG Length
    );
_IRQL_requires_same_
IDE_PHYSICAL_ADDRESS
AtaPortConvertUlongToPhysicalAddress(
    _In_ ULONG_PTR UlongAddress
    );
_IRQL_requires_same_
ULONG
AtaPortConvertPhysicalAddressToUlong(
    _In_ IDE_PHYSICAL_ADDRESS Address
    );
_IRQL_requires_same_
VOID
AtaPortStallExecution(
    _In_ ULONG Delay
    );
_Must_inspect_result_
_IRQL_requires_same_
PVOID
AtaPortGetUnCachedExtension (
    _In_ PVOID ChannelExtension,
    _In_ ULONG UncachedExtensionSize,
    _In_ ULONG IrbExtensionSize
    );
VOID
AtaPortDebugPrint(
    ULONG DebugPrintLevel,
    PCCHAR DebugMessage,
    ...
    );
_IRQL_requires_same_
VOID
AtaPortLogError(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_ERROR_LOG_ENTRY ErrorLogEntry
    );
_Must_inspect_result_
_IRQL_requires_same_
PIDE_REQUEST_BLOCK
AtaPortBuildRequestSenseIrb(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );
_IRQL_requires_same_
VOID
AtaPortReleaseRequestSenseIrb(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );
_IRQL_requires_same_
VOID
AtaPortDeviceStateChange (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG BusyTimeout
    );
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRequestCallback (
    _In_ IDE_CALLBACK_TYPE CallbackType,
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine,
    _In_ ULONG TimerValue
    );
_Must_inspect_result_
_IRQL_requires_same_
_Ret_maybenull_ _Post_writable_byte_size_(BufferSize)
PVOID
AtaPortRegistryAllocateBuffer (
    _In_ PVOID ChannelExtension,
    _In_ ULONG BufferSize
    );
_IRQL_requires_same_
VOID
AtaPortRegistryFreeBuffer (
    _In_ PVOID ChannelExtension,
    _In_ PVOID Buffer
    );
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortInitializeQueueTag (
    _In_ PVOID DeviceExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ UCHAR MaxQueueTag
    );
_Must_inspect_result_
_IRQL_requires_same_
UCHAR
AtaPortAllocateQueueTag (
    _In_ PVOID DeviceExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );
_IRQL_requires_same_
VOID
AtaPortReleaseQueueTag (
    _In_ PVOID DeviceExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ UCHAR QueueTag
    );
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRegistryRead (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ BOOLEAN ChannelSubKey,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _Out_writes_bytes_opt_(*BufferLength) PUCHAR Buffer,
    _Inout_ PULONG BufferLength
    );
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRegistryWrite (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ BOOLEAN ChannelSubKey,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    );
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRegistryWriteDeferred (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ BOOLEAN ChannelSubKey,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    );
VOID
__inline
AtaPortDeviceBusy (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG BusyTimeout
    )
{
    AtaPortDeviceStateChange(ChannelExtension,
                             TargetId,
                             Lun,
                             BusyTimeout
                             );
}
VOID
__inline
AtaPortDeviceReady (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    )
{
    AtaPortDeviceStateChange(ChannelExtension,
                             TargetId,
                             Lun,
                             0
                             );
}
_Must_inspect_result_
_IRQL_requires_same_
_Success_(return != FALSE)
BOOLEAN
__inline
AtaPortRegistryControllerKeyRead (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _At_(Buffer,
        _Post_notnull_
        _Pre_writable_size_(*BufferLength)
        _Post_readable_size_(*BufferLength)
        _On_failure_(_Post_maybenull_)) PUCHAR Buffer,
    _Inout_ PULONG BufferLength
    )
{
    return AtaPortRegistryRead (ChannelExtension,
                                ControllerNumber,
                                FALSE,
                                ValueName,
                                ValueType,
                                Buffer,
                                BufferLength
                                );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryControllerKeyWrite (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWrite (ChannelExtension,
                                 ControllerNumber,
                                 FALSE,
                                 ValueName,
                                 ValueType,
                                 Buffer,
                                 BufferLength
                                 );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryControllerKeyWriteDeferred (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWriteDeferred (ChannelExtension,
                                         ControllerNumber,
                                         FALSE,
                                         ValueName,
                                         ValueType,
                                         Buffer,
                                         BufferLength
                                         );
}
_Must_inspect_result_
_IRQL_requires_same_
_Success_(return != FALSE)
BOOLEAN
__inline
AtaPortRegistryChannelSubkeyRead (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _At_(Buffer,
        _Post_notnull_
        _Pre_writable_size_(*BufferLength)
        _Post_readable_size_(*BufferLength)
        _On_failure_(_Post_maybenull_)) PUCHAR Buffer,
    _Inout_ PULONG BufferLength
    )
{
    return AtaPortRegistryRead (ChannelExtension,
                                ControllerNumber,
                                TRUE,
                                ValueName,
                                ValueType,
                                Buffer,
                                BufferLength
                                );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryChannelSubkeyWrite (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWrite (ChannelExtension,
                                 ControllerNumber,
                                 TRUE,
                                 ValueName,
                                 ValueType,
                                 Buffer,
                                 BufferLength
                                 );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryChannelSubkeyWriteDeferred (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWriteDeferred (ChannelExtension,
                                         ControllerNumber,
                                         TRUE,
                                         ValueName,
                                         ValueType,
                                         Buffer,
                                         BufferLength
                                         );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRequestWorkerRoutine (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine
    )
{
    return AtaPortRequestCallback (IdeWorkerRoutine,
                                   ChannelExtension,
                                   CallBackRoutine,
                                   0
                                   );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRequestSynchronizedRoutine (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine
    )
{
    return AtaPortRequestCallback (IdeSynchronizedRoutine,
                                   ChannelExtension,
                                   CallBackRoutine,
                                   0
                                   );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortControllerSyncRoutine (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine
    )
{
    return AtaPortRequestCallback (IdeControllerSyncRoutine,
                                   ChannelExtension,
                                   CallBackRoutine,
                                   0
                                   );
}
_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRequestTimer (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine,
    _In_ ULONG TimerValue
    )
{
    return AtaPortRequestCallback(IdeTimerRoutine,
                                  ChannelExtension,
                                  CallBackRoutine,
                                  TimerValue
                                  );
}
VOID
__inline
AtaPortBusChangeDetected (
    _In_ PVOID ChannelExtension
    )
{
    AtaPortNotification(IdeDeviceArrival,
                        ChannelExtension,
                        IDE_UNTAGGED,
                        0
                        );
}
VOID
__inline
AtaPortDeviceArrived (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId
    )
{
    AtaPortNotification(IdeDeviceArrival,
                        ChannelExtension,
                        TargetId,
                        0
                        );
}
VOID
__inline
AtaPortDeviceRemoved (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId
    )
{
    AtaPortNotification(IdeDeviceRemoval,
                        ChannelExtension,
                        TargetId,
                        0
                        );
}
VOID
__inline
AtaPortRequestPowerStateChange (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ IDE_POWER_STATE DesiredPowerState
    )
{
    AtaPortNotification(IdePowerStateChange,
                        ChannelExtension,
                        TargetId,
                        Lun,
                        DesiredPowerState
                        );
}
_IRQL_requires_same_
VOID
AtaPortQuerySystemTime (
    _Out_ PLARGE_INTEGER CurrentTime
    );
VOID
AtaPortDebugBreak (
    _In_ PVOID ChannelExtension
    );
VOID
AtaPortTraceNotification(
    _In_ ULONG NotificationType,
    _In_opt_ PVOID HwDeviceExtension,
    ...
    );
UCHAR
AtaPortReadPortUchar(
    _In_ PUCHAR Port
    );
USHORT
AtaPortReadPortUshort(
    _In_ PUSHORT Port
    );
ULONG
AtaPortReadPortUlong(
    _In_ PULONG Port
    );
VOID
AtaPortReadPortBufferUchar(
    _In_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortReadPortBufferUshort(
    _In_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortReadPortBufferUlong(
    _In_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
UCHAR
AtaPortReadRegisterUchar(
    _In_ PUCHAR Register
    );
USHORT
AtaPortReadRegisterUshort(
    _In_ PUSHORT Register
    );
ULONG
AtaPortReadRegisterUlong(
    _In_ PULONG Register
    );
VOID
AtaPortReadRegisterBufferUchar(
    _In_reads_(Count) PUCHAR Register,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortReadRegisterBufferUshort(
    _In_reads_(Count) PUSHORT Register,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortReadRegisterBufferUlong(
    _In_reads_(Count) PULONG Register,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWritePortUchar(
    _In_ PUCHAR Port,
    _In_ UCHAR Value
    );
VOID
AtaPortWritePortUshort(
    _In_ PUSHORT Port,
    _In_ USHORT Value
    );
VOID
AtaPortWritePortUlong(
    _In_ PULONG Port,
    _In_ ULONG Value
    );
VOID
AtaPortWritePortBufferUchar(
    _In_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWritePortBufferUshort(
    _In_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWritePortBufferUlong(
    _In_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWriteRegisterUchar(
    _In_ PUCHAR Register,
    _In_ UCHAR Value
    );
VOID
AtaPortWriteRegisterUshort(
    _In_ PUSHORT Register,
    _In_ USHORT Value
    );
VOID
AtaPortWriteRegisterBufferUchar(
    _Out_writes_(Count) PUCHAR Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWriteRegisterBufferUshort(
    _Out_writes_(Count) PUSHORT Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWriteRegisterBufferUlong(
    _Out_writes_(Count) PULONG Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
VOID
AtaPortWriteRegisterUlong(
    _In_ PULONG Register,
    _In_ ULONG Value
    );
}
#pragma warning(default:4201)
#pragma warning(default:4214)
