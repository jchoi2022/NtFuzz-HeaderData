DEFINE_GUID(ScsiRawInterfaceGuid, 0x53f56309L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(WmiScsiAddressGuid, 0x53f5630fL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef struct _SCSI_PASS_THROUGH {
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG_PTR DataBufferOffset;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH, *PSCSI_PASS_THROUGH;
typedef struct _SCSI_PASS_THROUGH_DIRECT {
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH_DIRECT, *PSCSI_PASS_THROUGH_DIRECT;
typedef struct _SCSI_PASS_THROUGH32 {
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG32 DataBufferOffset;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH32, *PSCSI_PASS_THROUGH32;
typedef struct _SCSI_PASS_THROUGH_DIRECT32 {
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    VOID * POINTER_32 DataBuffer;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH_DIRECT32, *PSCSI_PASS_THROUGH_DIRECT32;
typedef struct _SCSI_PASS_THROUGH_EX {
    ULONG Version;
    ULONG Length;
    ULONG CdbLength;
    ULONG StorAddressLength;
    UCHAR ScsiStatus;
    UCHAR SenseInfoLength;
    UCHAR DataDirection;
    UCHAR Reserved;
    ULONG TimeOutValue;
    ULONG StorAddressOffset;
    ULONG SenseInfoOffset;
    ULONG DataOutTransferLength;
    ULONG DataInTransferLength;
    ULONG_PTR DataOutBufferOffset;
    ULONG_PTR DataInBufferOffset;
    _Field_size_bytes_full_(CdbLength) UCHAR Cdb[ANYSIZE_ARRAY];
} SCSI_PASS_THROUGH_EX, *PSCSI_PASS_THROUGH_EX;
typedef struct _SCSI_PASS_THROUGH_DIRECT_EX {
    ULONG Version;
    ULONG Length;
    ULONG CdbLength;
    ULONG StorAddressLength;
    UCHAR ScsiStatus;
    UCHAR SenseInfoLength;
    UCHAR DataDirection;
    UCHAR Reserved;
    ULONG TimeOutValue;
    ULONG StorAddressOffset;
    ULONG SenseInfoOffset;
    ULONG DataOutTransferLength;
    ULONG DataInTransferLength;
    _Field_size_bytes_full_(DataOutTransferLength) VOID * DataOutBuffer;
    _Field_size_bytes_full_opt_(DataInTransferLength) VOID * DataInBuffer;
    _Field_size_bytes_full_(CdbLength) UCHAR Cdb[ANYSIZE_ARRAY];
} SCSI_PASS_THROUGH_DIRECT_EX, *PSCSI_PASS_THROUGH_DIRECT_EX;
typedef struct _SCSI_PASS_THROUGH32_EX {
    ULONG Version;
    ULONG Length;
    ULONG CdbLength;
    ULONG StorAddressLength;
    UCHAR ScsiStatus;
    UCHAR SenseInfoLength;
    UCHAR DataDirection;
    UCHAR Reserved;
    ULONG TimeOutValue;
    ULONG StorAddressOffset;
    ULONG SenseInfoOffset;
    ULONG DataOutTransferLength;
    ULONG DataInTransferLength;
    ULONG32 DataOutBufferOffset;
    ULONG32 DataInBufferOffset;
    _Field_size_bytes_full_(CdbLength) UCHAR Cdb[ANYSIZE_ARRAY];
} SCSI_PASS_THROUGH32_EX, *PSCSI_PASS_THROUGH32_EX;
typedef struct _SCSI_PASS_THROUGH_DIRECT32_EX {
    ULONG Version;
    ULONG Length;
    ULONG CdbLength;
    ULONG StorAddressLength;
    UCHAR ScsiStatus;
    UCHAR SenseInfoLength;
    UCHAR DataDirection;
    UCHAR Reserved;
    ULONG TimeOutValue;
    ULONG StorAddressOffset;
    ULONG SenseInfoOffset;
    ULONG DataOutTransferLength;
    ULONG DataInTransferLength;
    _Field_size_bytes_full_(DataOutTransferLength) VOID * POINTER_32 DataOutBuffer;
    _Field_size_bytes_full_opt_(DataInTransferLength) VOID * POINTER_32 DataInBuffer;
    _Field_size_bytes_full_(CdbLength) UCHAR Cdb[ANYSIZE_ARRAY];
} SCSI_PASS_THROUGH_DIRECT32_EX, *PSCSI_PASS_THROUGH_DIRECT32_EX;
typedef struct _ATA_PASS_THROUGH_EX {
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    ULONG_PTR DataBufferOffset;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_EX, *PATA_PASS_THROUGH_EX;
typedef struct _ATA_PASS_THROUGH_DIRECT {
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    PVOID DataBuffer;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_DIRECT, *PATA_PASS_THROUGH_DIRECT;
typedef struct _ATA_PASS_THROUGH_EX32 {
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    ULONG32 DataBufferOffset;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_EX32, *PATA_PASS_THROUGH_EX32;
typedef struct _ATA_PASS_THROUGH_DIRECT32 {
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    VOID * POINTER_32 DataBuffer;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_DIRECT32, *PATA_PASS_THROUGH_DIRECT32;
typedef struct _IDE_IO_CONTROL {
        ULONG HeaderLength;
        UCHAR Signature[8];
        ULONG Timeout;
        ULONG ControlCode;
        ULONG ReturnStatus;
        ULONG DataLength;
} IDE_IO_CONTROL, *PIDE_IO_CONTROL;
typedef struct _MPIO_PASS_THROUGH_PATH {
        SCSI_PASS_THROUGH PassThrough;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH, *PMPIO_PASS_THROUGH_PATH;
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT {
        SCSI_PASS_THROUGH_DIRECT PassThrough;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT, *PMPIO_PASS_THROUGH_PATH_DIRECT;
typedef struct _MPIO_PASS_THROUGH_PATH_EX {
        ULONG PassThroughOffset;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_EX, *PMPIO_PASS_THROUGH_PATH_EX;
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT_EX {
        ULONG PassThroughOffset;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT_EX, *PMPIO_PASS_THROUGH_PATH_DIRECT_EX;
typedef struct _MPIO_PASS_THROUGH_PATH32 {
        SCSI_PASS_THROUGH32 PassThrough;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH32, *PMPIO_PASS_THROUGH_PATH32;
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT32 {
        SCSI_PASS_THROUGH_DIRECT32 PassThrough;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT32, *PMPIO_PASS_THROUGH_PATH_DIRECT32;
typedef struct _MPIO_PASS_THROUGH_PATH32_EX {
        ULONG PassThroughOffset;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH32_EX, *PMPIO_PASS_THROUGH_PATH32_EX;
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT32_EX {
        ULONG PassThroughOffset;
        ULONG Version;
        USHORT Length;
        UCHAR Flags;
        UCHAR PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT32_EX, *PMPIO_PASS_THROUGH_PATH_DIRECT32_EX;
typedef struct _SCSI_BUS_DATA {
    UCHAR NumberOfLogicalUnits;
    UCHAR InitiatorBusId;
    ULONG InquiryDataOffset;
}SCSI_BUS_DATA, *PSCSI_BUS_DATA;
typedef struct _SCSI_ADAPTER_BUS_INFO {
    UCHAR NumberOfBuses;
    SCSI_BUS_DATA BusData[1];
} SCSI_ADAPTER_BUS_INFO, *PSCSI_ADAPTER_BUS_INFO;
typedef struct _SCSI_INQUIRY_DATA {
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    BOOLEAN DeviceClaimed;
    ULONG InquiryDataLength;
    ULONG NextInquiryDataOffset;
    UCHAR InquiryData[1];
}SCSI_INQUIRY_DATA, *PSCSI_INQUIRY_DATA;
typedef struct _SRB_IO_CONTROL {
        ULONG HeaderLength;
        UCHAR Signature[8];
        ULONG Timeout;
        ULONG ControlCode;
        ULONG ReturnCode;
        ULONG Length;
} SRB_IO_CONTROL, *PSRB_IO_CONTROL;
typedef struct _NVCACHE_REQUEST_BLOCK {
    ULONG NRBSize;
    USHORT Function;
    ULONG NRBFlags;
    ULONG NRBStatus;
    ULONG Count;
    ULONGLONG LBA;
    ULONG DataBufSize;
    ULONG NVCacheStatus;
    ULONG NVCacheSubStatus;
} NVCACHE_REQUEST_BLOCK, *PNVCACHE_REQUEST_BLOCK;
typedef struct _NV_FEATURE_PARAMETER{
        USHORT NVPowerModeEnabled;
        USHORT NVParameterReserv1;
        USHORT NVCmdEnabled;
        USHORT NVParameterReserv2;
        USHORT NVPowerModeVer;
        USHORT NVCmdVer;
        ULONG NVSize;
        USHORT NVReadSpeed;
        USHORT NVWrtSpeed;
        ULONG DeviceSpinUpTime;
} NV_FEATURE_PARAMETER, *PNV_FEATURE_PARAMETER;
#pragma warning(push)
#pragma warning(disable:4214)
#pragma warning(disable:4201)
#pragma pack(push, nvcachehintpayload, 1)
typedef struct _NVCACHE_HINT_PAYLOAD {
    UCHAR Command;
    UCHAR Feature7_0;
    UCHAR Feature15_8;
    UCHAR Count15_8;
    UCHAR LBA7_0;
    UCHAR LBA15_8;
    UCHAR LBA23_16;
    UCHAR LBA31_24;
    UCHAR LBA39_32;
    UCHAR LBA47_40;
    UCHAR Auxiliary7_0;
    UCHAR Auxiliary23_16;
    UCHAR Reserved[4];
} NVCACHE_HINT_PAYLOAD, *PNVCACHE_HINT_PAYLOAD;
#pragma pack(pop, nvcachehintpayload)
typedef struct _NV_SEP_CACHE_PARAMETER{
        ULONG Version;
        ULONG Size;
        union {
            struct {
                UCHAR WriteCacheEnabled : 1;
                UCHAR WriteCacheChangeable: 1;
                UCHAR WriteThroughIOSupported :1;
                UCHAR FlushCacheSupported :1;
                UCHAR ReservedBits: 4;
            } CacheFlags;
            UCHAR CacheFlagsSet;
        } Flags;
        UCHAR WriteCacheType;
        UCHAR WriteCacheTypeEffective;
        UCHAR ParameterReserve1[3];
} NV_SEP_CACHE_PARAMETER, *PNV_SEP_CACHE_PARAMETER;
typedef enum _NV_SEP_WRITE_CACHE_TYPE {
    NVSEPWriteCacheTypeUnknown = 0,
    NVSEPWriteCacheTypeNone = 1,
    NVSEPWriteCacheTypeWriteBack = 2,
    NVSEPWriteCacheTypeWriteThrough = 3
} NV_SEP_WRITE_CACHE_TYPE, *PNV_SEP_WRITE_CACHE_TYPE;
#pragma warning(pop)
typedef enum _MP_STORAGE_DIAGNOSTIC_LEVEL {
    MpStorageDiagnosticLevelDefault = 0,
    MpStorageDiagnosticLevelMax
} MP_STORAGE_DIAGNOSTIC_LEVEL, *PMP_STORAGE_DIAGNOSTIC_LEVEL;
typedef enum _MP_STORAGE_DIAGNOSTIC_TARGET_TYPE {
    MpStorageDiagnosticTargetTypeUndefined = 0,
    MpStorageDiagnosticTargetTypeMiniport = 2,
    MpStorageDiagnosticTargetTypeHbaFirmware,
    MpStorageDiagnosticTargetTypeMax
} MP_STORAGE_DIAGNOSTIC_TARGET_TYPE, *PMP_STORAGE_DIAGNOSTIC_TARGET_TYPE;
typedef struct _STORAGE_DIAGNOSTIC_MP_REQUEST {
    ULONG Version;
    ULONG Size;
    MP_STORAGE_DIAGNOSTIC_TARGET_TYPE TargetType;
    MP_STORAGE_DIAGNOSTIC_LEVEL Level;
    GUID ProviderId;
    ULONG BufferSize;
    ULONG Reserved;
    _Field_size_(BufferSize) UCHAR DataBuffer[ANYSIZE_ARRAY];
} STORAGE_DIAGNOSTIC_MP_REQUEST, *PSTORAGE_DIAGNOSTIC_MP_REQUEST;
typedef struct _MP_DEVICE_DATA_SET_RANGE {
    LONGLONG StartingOffset;
    ULONGLONG LengthInBytes;
} MP_DEVICE_DATA_SET_RANGE, *PMP_DEVICE_DATA_SET_RANGE;
typedef struct _DSM_NOTIFICATION_REQUEST_BLOCK {
        ULONG Size;
        ULONG Version;
        ULONG NotifyFlags;
        ULONG DataSetProfile;
        ULONG Reserved[3];
        ULONG DataSetRangesCount;
        MP_DEVICE_DATA_SET_RANGE DataSetRanges[ANYSIZE_ARRAY];
} DSM_NOTIFICATION_REQUEST_BLOCK,*PDSM_NOTIFICATION_REQUEST_BLOCK;
typedef struct _HYBRID_REQUEST_BLOCK {
    ULONG Version;
    ULONG Size;
    ULONG Function;
    ULONG Flags;
    ULONG DataBufferOffset;
    ULONG DataBufferLength;
} HYBRID_REQUEST_BLOCK, *PHYBRID_REQUEST_BLOCK;
typedef enum _NVCACHE_TYPE {
    NvCacheTypeUnknown = 0,
    NvCacheTypeNone = 1,
    NvCacheTypeWriteBack = 2,
    NvCacheTypeWriteThrough = 3
} NVCACHE_TYPE;
typedef enum _NVCACHE_STATUS {
    NvCacheStatusUnknown = 0,
    NvCacheStatusDisabling = 1,
    NvCacheStatusDisabled = 2,
    NvCacheStatusEnabled = 3
} NVCACHE_STATUS;
typedef struct _NVCACHE_PRIORITY_LEVEL_DESCRIPTOR {
    UCHAR PriorityLevel;
    UCHAR Reserved0[3];
    ULONG ConsumedNVMSizeFraction;
    ULONG ConsumedMappingResourcesFraction;
    ULONG ConsumedNVMSizeForDirtyDataFraction;
    ULONG ConsumedMappingResourcesForDirtyDataFraction;
    ULONG Reserved1;
} NVCACHE_PRIORITY_LEVEL_DESCRIPTOR, *PNVCACHE_PRIORITY_LEVEL_DESCRIPTOR;
#pragma warning(push)
#pragma warning(disable:4214)
#pragma warning(disable:4200)
typedef struct _HYBRID_INFORMATION {
    ULONG Version;
    ULONG Size;
    BOOLEAN HybridSupported;
    NVCACHE_STATUS Status;
    NVCACHE_TYPE CacheTypeEffective;
    NVCACHE_TYPE CacheTypeDefault;
    ULONG FractionBase;
    ULONGLONG CacheSize;
    struct {
        ULONG WriteCacheChangeable : 1;
        ULONG WriteThroughIoSupported : 1;
        ULONG FlushCacheSupported : 1;
        ULONG Removable : 1;
        ULONG ReservedBits : 28;
    } Attributes;
    struct {
        UCHAR PriorityLevelCount;
        BOOLEAN MaxPriorityBehavior;
        UCHAR OptimalWriteGranularity;
        UCHAR Reserved;
        ULONG DirtyThresholdLow;
        ULONG DirtyThresholdHigh;
        struct {
            ULONG CacheDisable : 1;
            ULONG SetDirtyThreshold : 1;
            ULONG PriorityDemoteBySize : 1;
            ULONG PriorityChangeByLbaRange : 1;
            ULONG Evict : 1;
            ULONG ReservedBits : 27;
            ULONG MaxEvictCommands;
            ULONG MaxLbaRangeCountForEvict;
            ULONG MaxLbaRangeCountForChangeLba;
        } SupportedCommands;
        NVCACHE_PRIORITY_LEVEL_DESCRIPTOR Priority[0];
    } Priorities;
} HYBRID_INFORMATION, *PHYBRID_INFORMATION;
#pragma warning(pop)
typedef struct _HYBRID_DIRTY_THRESHOLDS {
    ULONG Version;
    ULONG Size;
    ULONG DirtyLowThreshold;
    ULONG DirtyHighThreshold;
} HYBRID_DIRTY_THRESHOLDS, *PHYBRID_DIRTY_THRESHOLDS;
typedef struct _HYBRID_DEMOTE_BY_SIZE {
    ULONG Version;
    ULONG Size;
    UCHAR SourcePriority;
    UCHAR TargetPriority;
    USHORT Reserved0;
    ULONG Reserved1;
    ULONGLONG LbaCount;
} HYBRID_DEMOTE_BY_SIZE, *PHYBRID_DEMOTE_BY_SIZE;
typedef struct _FIRMWARE_REQUEST_BLOCK {
    ULONG Version;
    ULONG Size;
    ULONG Function;
    ULONG Flags;
    ULONG DataBufferOffset;
    ULONG DataBufferLength;
} FIRMWARE_REQUEST_BLOCK, *PFIRMWARE_REQUEST_BLOCK;
typedef struct _STORAGE_FIRMWARE_SLOT_INFO {
    UCHAR SlotNumber;
    BOOLEAN ReadOnly;
    UCHAR Reserved[6];
    union {
        UCHAR Info[8];
        ULONGLONG AsUlonglong;
    } Revision;
} STORAGE_FIRMWARE_SLOT_INFO, *PSTORAGE_FIRMWARE_SLOT_INFO;
typedef struct _STORAGE_FIRMWARE_SLOT_INFO_V2 {
    UCHAR SlotNumber;
    BOOLEAN ReadOnly;
    UCHAR Reserved[6];
    UCHAR Revision[STORAGE_FIRMWARE_SLOT_INFO_V2_REVISION_LENGTH];
} STORAGE_FIRMWARE_SLOT_INFO_V2, *PSTORAGE_FIRMWARE_SLOT_INFO_V2;
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct _STORAGE_FIRMWARE_INFO {
    ULONG Version;
    ULONG Size;
    BOOLEAN UpgradeSupport;
    UCHAR SlotCount;
    UCHAR ActiveSlot;
    UCHAR PendingActivateSlot;
    ULONG Reserved;
    STORAGE_FIRMWARE_SLOT_INFO Slot[0];
} STORAGE_FIRMWARE_INFO, *PSTORAGE_FIRMWARE_INFO;
typedef struct _STORAGE_FIRMWARE_INFO_V2 {
    ULONG Version;
    ULONG Size;
    BOOLEAN UpgradeSupport;
    UCHAR SlotCount;
    UCHAR ActiveSlot;
    UCHAR PendingActivateSlot;
    BOOLEAN FirmwareShared;
    UCHAR Reserved[3];
    ULONG ImagePayloadAlignment;
    ULONG ImagePayloadMaxSize;
    STORAGE_FIRMWARE_SLOT_INFO_V2 Slot[0];
} STORAGE_FIRMWARE_INFO_V2, *PSTORAGE_FIRMWARE_INFO_V2;
typedef struct _STORAGE_FIRMWARE_DOWNLOAD {
    ULONG Version;
    ULONG Size;
    ULONGLONG Offset;
    ULONGLONG BufferSize;
    UCHAR ImageBuffer[0];
} STORAGE_FIRMWARE_DOWNLOAD, *PSTORAGE_FIRMWARE_DOWNLOAD;
typedef struct _STORAGE_FIRMWARE_DOWNLOAD_V2 {
    ULONG Version;
    ULONG Size;
    ULONGLONG Offset;
    ULONGLONG BufferSize;
    UCHAR Slot;
    UCHAR Reserved[3];
    ULONG ImageSize;
    UCHAR ImageBuffer[0];
} STORAGE_FIRMWARE_DOWNLOAD_V2, *PSTORAGE_FIRMWARE_DOWNLOAD_V2;
#pragma warning(pop)
typedef struct _STORAGE_FIRMWARE_ACTIVATE {
    ULONG Version;
    ULONG Size;
    UCHAR SlotToActivate;
    UCHAR Reserved0[3];
} STORAGE_FIRMWARE_ACTIVATE, *PSTORAGE_FIRMWARE_ACTIVATE;
typedef struct _IO_SCSI_CAPABILITIES {
    ULONG Length;
    ULONG MaximumTransferLength;
    ULONG MaximumPhysicalPages;
    ULONG SupportedAsynchronousEvents;
    ULONG AlignmentMask;
    BOOLEAN TaggedQueuing;
    BOOLEAN AdapterScansDown;
    BOOLEAN AdapterUsesPio;
} IO_SCSI_CAPABILITIES, *PIO_SCSI_CAPABILITIES;
typedef struct _SCSI_ADDRESS {
    ULONG Length;
    UCHAR PortNumber;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
} SCSI_ADDRESS, *PSCSI_ADDRESS;
struct _ADAPTER_OBJECT;
typedef
LONG
DUMP_DEVICE_POWERON_ROUTINE(
    _In_ PVOID Context
    );
typedef DUMP_DEVICE_POWERON_ROUTINE *PDUMP_DEVICE_POWERON_ROUTINE;
typedef struct _DUMP_POINTERS_VERSION {
    ULONG Version;
    ULONG Size;
} DUMP_POINTERS_VERSION, *PDUMP_POINTERS_VERSION;
typedef struct _DUMP_POINTERS {
    struct _ADAPTER_OBJECT *AdapterObject;
    PVOID MappedRegisterBase;
    PVOID DumpData;
    PVOID CommonBufferVa;
    LARGE_INTEGER CommonBufferPa;
    ULONG CommonBufferSize;
    BOOLEAN AllocateCommonBuffers;
    BOOLEAN UseDiskDump;
    UCHAR Spare1[2];
    PVOID DeviceObject;
} DUMP_POINTERS, *PDUMP_POINTERS;
typedef struct _DUMP_POINTERS_EX {
    DUMP_POINTERS_VERSION Header;
    PVOID DumpData;
    PVOID CommonBufferVa;
    ULONG CommonBufferSize;
    BOOLEAN AllocateCommonBuffers;
    PVOID DeviceObject;
    PVOID DriverList;
    ULONG dwPortFlags;
    ULONG MaxDeviceDumpSectionSize;
    ULONG MaxDeviceDumpLevel;
    ULONG MaxTransferSize;
    PVOID AdapterObject;
    PVOID MappedRegisterBase;
    PBOOLEAN DeviceReady;
    PDUMP_DEVICE_POWERON_ROUTINE DumpDevicePowerOn;
    PVOID DumpDevicePowerOnContext;
} DUMP_POINTERS_EX, *PDUMP_POINTERS_EX;
typedef struct _DUMP_DRIVER {
    PVOID DumpDriverList;
    WCHAR DriverName[DUMP_DRIVER_NAME_LENGTH];
    WCHAR BaseName[DUMP_DRIVER_NAME_LENGTH];
} DUMP_DRIVER, *PDUMP_DRIVER;
typedef struct _NTSCSI_UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    [size_is(MaximumLength / 2), length_is((Length) / 2) ] USHORT * Buffer;
} NTSCSI_UNICODE_STRING;
typedef NTSCSI_UNICODE_STRING *PNTSCSI_UNICODE_STRING;
typedef struct _DUMP_DRIVER_EX {
    PVOID DumpDriverList;
    WCHAR DriverName[DUMP_DRIVER_NAME_LENGTH];
    WCHAR BaseName[DUMP_DRIVER_NAME_LENGTH];
    NTSCSI_UNICODE_STRING DriverFullPath;
} DUMP_DRIVER_EX, *PDUMP_DRIVER_EX;
#pragma warning(push)
#pragma warning(disable:4214)
#pragma warning(disable:4201)
typedef struct _STORAGE_ENDURANCE_INFO {
    ULONG ValidFields;
    ULONG GroupId;
    struct {
        ULONG Shared:1;
        ULONG Reserved:31;
    } Flags;
    ULONG LifePercentage;
    UCHAR BytesReadCount[16];
    UCHAR ByteWriteCount[16];
} STORAGE_ENDURANCE_INFO, *PSTORAGE_ENDURANCE_INFO;
typedef struct _STORAGE_ENDURANCE_DATA_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    STORAGE_ENDURANCE_INFO EnduranceInfo;
} STORAGE_ENDURANCE_DATA_DESCRIPTOR, *PSTORAGE_ENDURANCE_DATA_DESCRIPTOR;
#pragma warning(pop)
}
#endif
#pragma endregion
