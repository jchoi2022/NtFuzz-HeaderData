#include <winapifamily.h>
#include <devioctl.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEFINE_GUID(GUID_DEVINTERFACE_SCM_PHYSICAL_DEVICE, 0x4283609d, 0x4dc2, 0x43be, 0xbb, 0xb4, 0x4f, 0x15, 0xdf, 0xce, 0x2c, 0x61);
DEFINE_GUID(GUID_SCM_PD_HEALTH_NOTIFICATION, 0x9da2d386, 0x72f5, 0x4ee3, 0x81, 0x55, 0xec, 0xa0, 0x67, 0x8e, 0x3b, 0x6);
DEFINE_GUID(GUID_SCM_PD_PASSTHROUGH_INVDIMM, 0x4309AC30, 0x0D11, 0x11E4, 0x91, 0x91, 0x08, 0x00, 0x20, 0x0C, 0x9A, 0x66);
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef struct _SCM_PD_HEALTH_NOTIFICATION_DATA {
    GUID DeviceGuid;
} SCM_PD_HEALTH_NOTIFICATION_DATA, *PSCM_PD_HEALTH_NOTIFICATION_DATA;
typedef struct _SCM_LOGICAL_DEVICE_INSTANCE {
    ULONG Version;
    ULONG Size;
    GUID DeviceGuid;
    WCHAR SymbolicLink[SCM_MAX_SYMLINK_LEN_IN_CHARS];
} SCM_LOGICAL_DEVICE_INSTANCE, *PSCM_LOGICAL_DEVICE_INSTANCE;
typedef struct _SCM_LOGICAL_DEVICES {
    ULONG Version;
    ULONG Size;
    ULONG DeviceCount;
    SCM_LOGICAL_DEVICE_INSTANCE Devices[ANYSIZE_ARRAY];
} SCM_LOGICAL_DEVICES, *PSCM_LOGICAL_DEVICES;
typedef struct _SCM_PHYSICAL_DEVICE_INSTANCE {
    ULONG Version;
    ULONG Size;
    ULONG NfitHandle;
    WCHAR SymbolicLink[SCM_MAX_SYMLINK_LEN_IN_CHARS];
} SCM_PHYSICAL_DEVICE_INSTANCE, *PSCM_PHYSICAL_DEVICE_INSTANCE;
typedef struct _SCM_PHYSICAL_DEVICES {
    ULONG Version;
    ULONG Size;
    ULONG DeviceCount;
    SCM_PHYSICAL_DEVICE_INSTANCE Devices[ANYSIZE_ARRAY];
} SCM_PHYSICAL_DEVICES, *PSCM_PHYSICAL_DEVICES;
typedef enum _SCM_REGION_FLAG {
    ScmRegionFlagNone = 0x0,
    ScmRegionFlagLabel = 0x1
} SCM_REGION_FLAG, *PSCM_REGION_FLAG;
typedef struct _SCM_REGION {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG NfitHandle;
    GUID LogicalDeviceGuid;
    GUID AddressRangeType;
    ULONG AssociatedId;
    ULONG64 Length;
    ULONG64 StartingDPA;
    ULONG64 BaseSPA;
    ULONG64 SPAOffset;
    ULONG64 RegionOffset;
} SCM_REGION, *PSCM_REGION;
typedef struct _SCM_REGIONS {
    ULONG Version;
    ULONG Size;
    ULONG RegionCount;
    SCM_REGION Regions[ANYSIZE_ARRAY];
} SCM_REGIONS, *PSCM_REGIONS;
typedef struct _SCM_INTERLEAVED_PD_INFO {
    ULONG DeviceHandle;
    GUID DeviceGuid;
} SCM_INTERLEAVED_PD_INFO, *PSCM_INTERLEAVED_PD_INFO;
typedef struct _SCM_LD_INTERLEAVE_SET_INFO {
    ULONG Version;
    ULONG Size;
    ULONG InterleaveSetSize;
    SCM_INTERLEAVED_PD_INFO InterleaveSet[ANYSIZE_ARRAY];
} SCM_LD_INTERLEAVE_SET_INFO, *PSCM_LD_INTERLEAVE_SET_INFO;
typedef enum _SCM_PD_QUERY_TYPE {
    ScmPhysicalDeviceQuery_Descriptor = 0,
    ScmPhysicalDeviceQuery_IsSupported,
    ScmPhysicalDeviceQuery_Max
} SCM_PD_QUERY_TYPE, *PSCM_PD_QUERY_TYPE;
typedef enum _SCM_PD_PROPERTY_ID {
    ScmPhysicalDeviceProperty_DeviceInfo = 0,
    ScmPhysicalDeviceProperty_ManagementStatus,
    ScmPhysicalDeviceProperty_FirmwareInfo,
    ScmPhysicalDeviceProperty_LocationString,
    ScmPhysicalDeviceProperty_DeviceSpecificInfo,
    ScmPhysicalDeviceProperty_DeviceHandle,
    ScmPhysicalDeviceProperty_Max
} SCM_PD_PROPERTY_ID, *PSCM_PD_PROPERTY_ID;
typedef struct _SCM_PD_PROPERTY_QUERY {
    ULONG Version;
    ULONG Size;
    SCM_PD_PROPERTY_ID PropertyId;
    SCM_PD_QUERY_TYPE QueryType;
    UCHAR AdditionalParameters[ANYSIZE_ARRAY];
} SCM_PD_PROPERTY_QUERY, *PSCM_PD_PROPERTY_QUERY;
typedef struct _SCM_PD_DESCRIPTOR_HEADER {
    ULONG Version;
    ULONG Size;
} SCM_PD_DESCRIPTOR_HEADER, *PSCM_PD_DESCRIPTOR_HEADER;
typedef struct _SCM_PD_DEVICE_HANDLE {
    ULONG Version;
    ULONG Size;
    GUID DeviceGuid;
    ULONG DeviceHandle;
} SCM_PD_DEVICE_HANDLE, *PSCM_PD_DEVICE_HANDLE;
typedef struct _SCM_PD_DEVICE_INFO {
    ULONG Version;
    ULONG Size;
    GUID DeviceGuid;
    ULONG UnsafeShutdownCount;
    ULONG64 PersistentMemorySizeInBytes;
    ULONG64 VolatileMemorySizeInBytes;
    ULONG64 TotalMemorySizeInBytes;
    ULONG SlotNumber;
    ULONG DeviceHandle;
    USHORT PhysicalId;
    UCHAR NumberOfFormatInterfaceCodes;
    USHORT FormatInterfaceCodes[MAX_INTERFACE_CODES];
    ULONG VendorId;
    ULONG ProductId;
    ULONG SubsystemDeviceId;
    ULONG SubsystemVendorId;
    UCHAR ManufacturingLocation;
    UCHAR ManufacturingWeek;
    UCHAR ManufacturingYear;
    ULONG SerialNumber4Byte;
    ULONG SerialNumberLengthInChars;
    _Field_size_(SerialNumberLengthInChars) CHAR SerialNumber[ANYSIZE_ARRAY];
} SCM_PD_DEVICE_INFO, *PSCM_PD_DEVICE_INFO;
typedef struct _SCM_PD_DEVICE_SPECIFIC_PROPERTY {
    WCHAR Name[SCM_PD_PROPERTY_NAME_LENGTH_IN_CHARS];
    LONGLONG Value;
} SCM_PD_DEVICE_SPECIFIC_PROPERTY, *PSCM_PD_DEVICE_SPECIFIC_PROPERTY;
typedef struct _SCM_PD_DEVICE_SPECIFIC_INFO {
    ULONG Version;
    ULONG Size;
    ULONG NumberOfProperties;
    SCM_PD_DEVICE_SPECIFIC_PROPERTY DeviceSpecificProperties[ANYSIZE_ARRAY];
} SCM_PD_DEVICE_SPECIFIC_INFO, *PSCM_PD_DEVICE_SPECIFIC_INFO;
typedef struct _SCM_PD_FIRMWARE_SLOT_INFO {
    ULONG Version;
    ULONG Size;
    UCHAR SlotNumber;
    UCHAR ReadOnly : 1;
    UCHAR Reserved0 : 7;
    UCHAR Reserved1[6];
    UCHAR Revision[SCM_PD_FIRMWARE_REVISION_LENGTH_BYTES];
} SCM_PD_FIRMWARE_SLOT_INFO, *PSCM_PD_FIRMWARE_SLOT_INFO;
typedef struct _SCM_PD_FIRMWARE_INFO {
    ULONG Version;
    ULONG Size;
    UCHAR ActiveSlot;
    UCHAR NextActiveSlot;
    UCHAR SlotCount;
    _Field_size_(SlotCount) SCM_PD_FIRMWARE_SLOT_INFO Slots[ANYSIZE_ARRAY];
} SCM_PD_FIRMWARE_INFO, *PSCM_PD_FIRMWARE_INFO;
typedef enum _SCM_PD_HEALTH_STATUS {
    ScmPhysicalDeviceHealth_Unknown = 0,
    ScmPhysicalDeviceHealth_Unhealthy,
    ScmPhysicalDeviceHealth_Warning,
    ScmPhysicalDeviceHealth_Healthy,
    ScmPhysicalDeviceHealth_Max
} SCM_PD_HEALTH_STATUS, *PSCM_PD_HEALTH_STATUS;
typedef enum _SCM_PD_OPERATIONAL_STATUS {
    ScmPhysicalDeviceOpStatus_Unknown = 0,
    ScmPhysicalDeviceOpStatus_Ok,
    ScmPhysicalDeviceOpStatus_PredictingFailure,
    ScmPhysicalDeviceOpStatus_InService,
    ScmPhysicalDeviceOpStatus_HardwareError,
    ScmPhysicalDeviceOpStatus_NotUsable,
    ScmPhysicalDeviceOpStatus_TransientError,
    ScmPhysicalDeviceOpStatus_Missing,
    ScmPhysicalDeviceOpStatus_Max
} SCM_PD_OPERATIONAL_STATUS, *PSCM_PD_OPERATIONAL_STATUS;
typedef enum _SCM_PD_OPERATIONAL_STATUS_REASON {
    ScmPhysicalDeviceOpReason_Unknown = 0,
    ScmPhysicalDeviceOpReason_Media,
    ScmPhysicalDeviceOpReason_ThresholdExceeded,
    ScmPhysicalDeviceOpReason_LostData,
    ScmPhysicalDeviceOpReason_EnergySource,
    ScmPhysicalDeviceOpReason_Configuration,
    ScmPhysicalDeviceOpReason_DeviceController,
    ScmPhysicalDeviceOpReason_MediaController,
    ScmPhysicalDeviceOpReason_Component,
    ScmPhysicalDeviceOpReason_BackgroundOperation,
    ScmPhysicalDeviceOpReason_InvalidFirmware,
    ScmPhysicalDeviceOpReason_HealthCheck,
    ScmPhysicalDeviceOpReason_LostDataPersistence,
    ScmPhysicalDeviceOpReason_DisabledByPlatform,
    ScmPhysicalDeviceOpReason_PermanentError,
    ScmPhysicalDeviceOpReason_LostWritePersistence,
    ScmPhysicalDeviceOpReason_FatalError,
    ScmPhysicalDeviceOpReason_DataPersistenceLossImminent,
    ScmPhysicalDeviceOpReason_WritePersistenceLossImminent,
    ScmPhysicalDeviceOpReason_MediaRemainingSpareBlock,
    ScmPhysicalDeviceOpReason_PerformanceDegradation,
    ScmPhysicalDeviceOpReason_ExcessiveTemperature,
    ScmPhysicalDeviceOpReason_Max
} SCM_PD_OPERATIONAL_STATUS_REASON, *PSCM_PD_OPERATIONAL_STATUS_REASON;
typedef struct _SCM_PD_MANAGEMENT_STATUS {
    ULONG Version;
    ULONG Size;
    SCM_PD_HEALTH_STATUS Health;
    ULONG NumberOfOperationalStatus;
    ULONG NumberOfAdditionalReasons;
    SCM_PD_OPERATIONAL_STATUS OperationalStatus[SCM_PD_MAX_OPERATIONAL_STATUS];
    _Field_size_(NumberOfAdditionalReasons) SCM_PD_OPERATIONAL_STATUS_REASON AdditionalReasons[ANYSIZE_ARRAY];
} SCM_PD_MANAGEMENT_STATUS, *PSCM_PD_MANAGEMENT_STATUS;
typedef struct _SCM_PD_LOCATION_STRING {
    ULONG Version;
    ULONG Size;
    WCHAR Location[ANYSIZE_ARRAY];
} SCM_PD_LOCATION_STRING, *PSCM_PD_LOCATION_STRING;
typedef struct _SCM_PD_FIRMWARE_DOWNLOAD {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    UCHAR Slot;
    UCHAR Reserved[3];
    ULONG64 Offset;
    ULONG FirmwareImageSizeInBytes;
    UCHAR FirmwareImage[ANYSIZE_ARRAY];
} SCM_PD_FIRMWARE_DOWNLOAD, *PSCM_PD_FIRMWARE_DOWNLOAD;
typedef struct _SCM_PD_FIRMWARE_ACTIVATE {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    UCHAR Slot;
} SCM_PD_FIRMWARE_ACTIVATE, *PSCM_PD_FIRMWARE_ACTIVATE;
typedef struct _SCM_PD_PASSTHROUGH_INPUT {
    ULONG Version;
    ULONG Size;
    GUID ProtocolGuid;
    ULONG DataSize;
    UCHAR Data[ANYSIZE_ARRAY];
} SCM_PD_PASSTHROUGH_INPUT, *PSCM_PD_PASSTHROUGH_INPUT;
typedef struct _SCM_PD_PASSTHROUGH_OUTPUT {
    ULONG Version;
    ULONG Size;
    GUID ProtocolGuid;
    ULONG DataSize;
    UCHAR Data[ANYSIZE_ARRAY];
} SCM_PD_PASSTHROUGH_OUTPUT, *PSCM_PD_PASSTHROUGH_OUTPUT;
typedef struct _SCM_PD_PASSTHROUGH_INVDIMM_INPUT {
    ULONG Opcode;
    ULONG OpcodeParametersLength;
    UCHAR OpcodeParameters[ANYSIZE_ARRAY];
} SCM_PD_PASSTHROUGH_INVDIMM_INPUT, *PSCM_PD_PASSTHROUGH_INVDIMM_INPUT;
typedef struct _SCM_PD_PASSTHROUGH_INVDIMM_OUTPUT {
    USHORT GeneralStatus;
    USHORT ExtendedStatus;
    ULONG OutputDataLength;
    UCHAR OutputData[ANYSIZE_ARRAY];
} SCM_PD_PASSTHROUGH_INVDIMM_OUTPUT, *PSCM_PD_PASSTHROUGH_INVDIMM_OUTPUT;
typedef struct _SCM_PD_REINITIALIZE_MEDIA_INPUT {
    ULONG Version;
    ULONG Size;
    struct {
        ULONG Overwrite : 1;
    } Options;
} SCM_PD_REINITIALIZE_MEDIA_INPUT, *PSCM_PD_REINITIALIZE_MEDIA_INPUT;
typedef enum _SCM_PD_MEDIA_REINITIALIZATION_STATUS {
    ScmPhysicalDeviceReinit_Success = 0,
    ScmPhysicalDeviceReinit_RebootNeeded,
    ScmPhysicalDeviceReinit_ColdBootNeeded,
    ScmPhysicalDeviceReinit_Max
} SCM_PD_MEDIA_REINITIALIZATION_STATUS, *PSCM_PD_MEDIA_REINITIALIZATION_STATUS;
typedef struct _SCM_PD_REINITIALIZE_MEDIA_OUTPUT {
    ULONG Version;
    ULONG Size;
    SCM_PD_MEDIA_REINITIALIZATION_STATUS Status;
} SCM_PD_REINITIALIZE_MEDIA_OUTPUT, *PSCM_PD_REINITIALIZE_MEDIA_OUTPUT;
#pragma warning(pop)
#endif
#pragma endregion
}
