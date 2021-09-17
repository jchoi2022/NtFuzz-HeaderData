#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEFINE_GUID(GUID_DEVINTERFACE_DISK, 0x53f56307L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_CDROM, 0x53f56308L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_PARTITION, 0x53f5630aL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_TAPE, 0x53f5630bL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_WRITEONCEDISK, 0x53f5630cL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_VOLUME, 0x53f5630dL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_MEDIUMCHANGER, 0x53f56310L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_FLOPPY, 0x53f56311L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_CDCHANGER, 0x53f56312L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_STORAGEPORT, 0x2accfe60L, 0xc130, 0x11d2, 0xb0, 0x82, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(GUID_DEVINTERFACE_VMLUN, 0x6f416619L, 0x9f29, 0x42a5, 0xb2, 0x0b, 0x37, 0xe2, 0x19, 0xca, 0x02, 0xb0);
DEFINE_GUID(GUID_DEVINTERFACE_SES, 0x1790c9ecL, 0x47d5, 0x4df3, 0xb5, 0xaf, 0x9a, 0xdf, 0x3c, 0xf2, 0x3e, 0x48);
DEFINE_GUID(GUID_DEVINTERFACE_SERVICE_VOLUME, 0x6ead3d82L, 0x25ec, 0x46bc, 0xb7, 0xfd, 0xc1, 0xf0, 0xdf, 0x8f, 0x50, 0x37);
DEFINE_GUID(GUID_DEVINTERFACE_HIDDEN_VOLUME, 0x7f108a28L, 0x9833, 0x4b3b, 0xb7, 0x80, 0x2c, 0x6b, 0x5f, 0xa5, 0xc0, 0x62);
DEFINE_GUID(GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB, 0x27447c21L, 0xbcc3, 0x4d07, 0xa0, 0x5b, 0xa3, 0x39, 0x5b, 0xb4, 0xee, 0xe7);
DEFINE_GUID(GUID_DEVICEDUMP_STORAGE_DEVICE, 0xd8e2592f,0x1aab,0x4d56,0xa7, 0x46, 0x1f, 0x75, 0x85, 0xdf, 0x40, 0xf4);
DEFINE_GUID(GUID_DEVICEDUMP_DRIVER_STORAGE_PORT, 0xda82441d,0x7142,0x4bc1,0xb8, 0x44, 0x08, 0x07, 0xc5, 0xa4, 0xb6, 0x7f);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Portable, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 2);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Removable_Media, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 3);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_System_Critical, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 4);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Disk_Number, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 5);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Partition_Number, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 6);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Mbr_Type, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 7);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Gpt_Type, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 8);
DEFINE_DEVPROPKEY(DEVPKEY_Storage_Gpt_Name, 0x4d1ebee8, 0x803, 0x4774, 0x98, 0x42, 0xb7, 0x7d, 0xb5, 0x2, 0x65, 0xe9, 9);
typedef struct _STORAGE_HOTPLUG_INFO {
    ULONG Size;
    BOOLEAN MediaRemovable;
    BOOLEAN MediaHotplug;
    BOOLEAN DeviceHotplug;
    BOOLEAN WriteCacheEnableOverride;
} STORAGE_HOTPLUG_INFO, *PSTORAGE_HOTPLUG_INFO;
typedef struct _STORAGE_DEVICE_NUMBER {
    DEVICE_TYPE DeviceType;
    ULONG DeviceNumber;
    ULONG PartitionNumber;
} STORAGE_DEVICE_NUMBER, *PSTORAGE_DEVICE_NUMBER;
typedef struct _STORAGE_DEVICE_NUMBERS {
    ULONG Version;
    ULONG Size;
    ULONG NumberOfDevices;
    STORAGE_DEVICE_NUMBER Devices[ANYSIZE_ARRAY];
} STORAGE_DEVICE_NUMBERS, *PSTORAGE_DEVICE_NUMBERS;
typedef struct _STORAGE_DEVICE_NUMBER_EX {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    DEVICE_TYPE DeviceType;
    ULONG DeviceNumber;
    GUID DeviceGuid;
    ULONG PartitionNumber;
} STORAGE_DEVICE_NUMBER_EX, *PSTORAGE_DEVICE_NUMBER_EX;
typedef struct _STORAGE_BUS_RESET_REQUEST {
    UCHAR PathId;
} STORAGE_BUS_RESET_REQUEST, *PSTORAGE_BUS_RESET_REQUEST;
typedef struct STORAGE_BREAK_RESERVATION_REQUEST {
    ULONG Length;
    UCHAR _unused;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
} STORAGE_BREAK_RESERVATION_REQUEST, *PSTORAGE_BREAK_RESERVATION_REQUEST;
typedef struct _PREVENT_MEDIA_REMOVAL {
    BOOLEAN PreventMediaRemoval;
} PREVENT_MEDIA_REMOVAL, *PPREVENT_MEDIA_REMOVAL;
typedef struct _CLASS_MEDIA_CHANGE_CONTEXT {
    ULONG MediaChangeCount;
    ULONG NewState;
} CLASS_MEDIA_CHANGE_CONTEXT, *PCLASS_MEDIA_CHANGE_CONTEXT;
typedef struct _TAPE_STATISTICS {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER RecoveredWrites;
    LARGE_INTEGER UnrecoveredWrites;
    LARGE_INTEGER RecoveredReads;
    LARGE_INTEGER UnrecoveredReads;
    UCHAR CompressionRatioReads;
    UCHAR CompressionRatioWrites;
} TAPE_STATISTICS, *PTAPE_STATISTICS;
typedef struct _TAPE_GET_STATISTICS {
    ULONG Operation;
} TAPE_GET_STATISTICS, *PTAPE_GET_STATISTICS;
typedef enum _STORAGE_MEDIA_TYPE {
    DDS_4mm = 0x20,
    MiniQic,
    Travan,
    QIC,
    MP_8mm,
    AME_8mm,
    AIT1_8mm,
    DLT,
    NCTP,
    IBM_3480,
    IBM_3490E,
    IBM_Magstar_3590,
    IBM_Magstar_MP,
    STK_DATA_D3,
    SONY_DTF,
    DV_6mm,
    DMI,
    SONY_D2,
    CLEANER_CARTRIDGE,
    CD_ROM,
    CD_R,
    CD_RW,
    DVD_ROM,
    DVD_R,
    DVD_RW,
    MO_3_RW,
    MO_5_WO,
    MO_5_RW,
    MO_5_LIMDOW,
    PC_5_WO,
    PC_5_RW,
    PD_5_RW,
    ABL_5_WO,
    PINNACLE_APEX_5_RW,
    SONY_12_WO,
    PHILIPS_12_WO,
    HITACHI_12_WO,
    CYGNET_12_WO,
    KODAK_14_WO,
    MO_NFR_525,
    NIKON_12_RW,
    IOMEGA_ZIP,
    IOMEGA_JAZ,
    SYQUEST_EZ135,
    SYQUEST_EZFLYER,
    SYQUEST_SYJET,
    AVATAR_F2,
    MP2_8mm,
    DST_S,
    DST_M,
    DST_L,
    VXATape_1,
    VXATape_2,
    STK_9840,
    LTO_Ultrium,
    LTO_Accelis,
    DVD_RAM,
    AIT_8mm,
    ADR_1,
    ADR_2,
    STK_9940,
    SAIT,
    VXATape
}STORAGE_MEDIA_TYPE, *PSTORAGE_MEDIA_TYPE;
typedef enum __WRAPPED__ _STORAGE_BUS_TYPE {
    BusTypeUnknown = 0x00,
    BusTypeScsi,
    BusTypeAtapi,
    BusTypeAta,
    BusType1394,
    BusTypeSsa,
    BusTypeFibre,
    BusTypeUsb,
    BusTypeRAID,
    BusTypeiScsi,
    BusTypeSas,
    BusTypeSata,
    BusTypeSd,
    BusTypeMmc,
    BusTypeVirtual,
    BusTypeFileBackedVirtual,
    BusTypeSpaces,
    BusTypeNvme,
    BusTypeSCM,
    BusTypeUfs,
    BusTypeMax,
    BusTypeMaxReserved = 0x7F
} STORAGE_BUS_TYPE, *PSTORAGE_BUS_TYPE;
        (BusType == BusTypeScsi) || \
        (BusType == BusTypeFibre) || \
        (BusType == BusTypeiScsi) || \
        (BusType == BusTypeSas) || \
        (BusType == BusTypeSpaces) )
typedef struct _DEVICE_MEDIA_INFO {
    union {
        struct {
            LARGE_INTEGER Cylinders;
            STORAGE_MEDIA_TYPE MediaType;
            ULONG TracksPerCylinder;
            ULONG SectorsPerTrack;
            ULONG BytesPerSector;
            ULONG NumberMediaSides;
            ULONG MediaCharacteristics;
        } DiskInfo;
        struct {
            LARGE_INTEGER Cylinders;
            STORAGE_MEDIA_TYPE MediaType;
            ULONG TracksPerCylinder;
            ULONG SectorsPerTrack;
            ULONG BytesPerSector;
            ULONG NumberMediaSides;
            ULONG MediaCharacteristics;
        } RemovableDiskInfo;
        struct {
            STORAGE_MEDIA_TYPE MediaType;
            ULONG MediaCharacteristics;
            ULONG CurrentBlockSize;
            STORAGE_BUS_TYPE BusType;
            union {
                struct {
                    UCHAR MediumType;
                    UCHAR DensityCode;
                } ScsiInformation;
            } BusSpecificData;
        } TapeInfo;
    } DeviceSpecific;
} DEVICE_MEDIA_INFO, *PDEVICE_MEDIA_INFO;
typedef struct _GET_MEDIA_TYPES {
    ULONG DeviceType;
    ULONG MediaInfoCount;
    DEVICE_MEDIA_INFO MediaInfo[1];
} GET_MEDIA_TYPES, *PGET_MEDIA_TYPES;
typedef struct _STORAGE_PREDICT_FAILURE
{
    ULONG PredictFailure;
    UCHAR VendorSpecific[512];
} STORAGE_PREDICT_FAILURE, *PSTORAGE_PREDICT_FAILURE;
typedef struct _STORAGE_FAILURE_PREDICTION_CONFIG {
    ULONG Version;
    ULONG Size;
    BOOLEAN Set;
    BOOLEAN Enabled;
    USHORT Reserved;
} STORAGE_FAILURE_PREDICTION_CONFIG, *PSTORAGE_FAILURE_PREDICTION_CONFIG;
typedef enum _STORAGE_QUERY_TYPE {
    PropertyStandardQuery = 0,
    PropertyExistsQuery,
    PropertyMaskQuery,
    PropertyQueryMaxDefined
} STORAGE_QUERY_TYPE, *PSTORAGE_QUERY_TYPE;
typedef enum _STORAGE_SET_TYPE {
    PropertyStandardSet = 0,
    PropertyExistsSet,
    PropertySetMaxDefined
} STORAGE_SET_TYPE, *PSTORAGE_SET_TYPE;
typedef enum __WRAPPED__ _STORAGE_PROPERTY_ID {
    StorageDeviceProperty = 0,
    StorageAdapterProperty,
    StorageDeviceIdProperty,
    StorageDeviceUniqueIdProperty,
    StorageDeviceWriteCacheProperty,
    StorageMiniportProperty,
    StorageAccessAlignmentProperty,
    StorageDeviceSeekPenaltyProperty,
    StorageDeviceTrimProperty,
    StorageDeviceWriteAggregationProperty,
    StorageDeviceDeviceTelemetryProperty,
    StorageDeviceLBProvisioningProperty,
    StorageDevicePowerProperty,
    StorageDeviceCopyOffloadProperty,
    StorageDeviceResiliencyProperty,
    StorageDeviceMediumProductType,
    StorageAdapterRpmbProperty,
    StorageAdapterCryptoProperty,
    StorageDeviceTieringProperty,
    StorageDeviceFaultDomainProperty,
    StorageDeviceClusportProperty,
    StorageDeviceDependantDevicesProperty,
    StorageDeviceIoCapabilityProperty = 48,
    StorageAdapterProtocolSpecificProperty,
    StorageDeviceProtocolSpecificProperty,
    StorageAdapterTemperatureProperty,
    StorageDeviceTemperatureProperty,
    StorageAdapterPhysicalTopologyProperty,
    StorageDevicePhysicalTopologyProperty,
    StorageDeviceAttributesProperty,
    StorageDeviceManagementStatus,
    StorageAdapterSerialNumberProperty,
    StorageDeviceLocationProperty,
    StorageDeviceNumaProperty,
    StorageDeviceZonedDeviceProperty,
    StorageDeviceUnsafeShutdownCount,
    StorageDeviceEnduranceProperty,
} STORAGE_PROPERTY_ID, *PSTORAGE_PROPERTY_ID;
typedef struct _STORAGE_PROPERTY_QUERY {
    STORAGE_PROPERTY_ID PropertyId;
    STORAGE_QUERY_TYPE QueryType;
    UCHAR AdditionalParameters[1];
} STORAGE_PROPERTY_QUERY, *PSTORAGE_PROPERTY_QUERY;
typedef struct _STORAGE_PROPERTY_SET {
    STORAGE_PROPERTY_ID PropertyId;
    STORAGE_SET_TYPE SetType;
    UCHAR AdditionalParameters[1];
} STORAGE_PROPERTY_SET, *PSTORAGE_PROPERTY_SET;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_DESCRIPTOR_HEADER {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
} STORAGE_DESCRIPTOR_HEADER, *PSTORAGE_DESCRIPTOR_HEADER;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_DEVICE_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    UCHAR DeviceType;
    __WRAPPED__
    UCHAR DeviceTypeModifier;
    __WRAPPED__
    BOOLEAN RemovableMedia;
    __WRAPPED__
    BOOLEAN CommandQueueing;
    __WRAPPED__
    ULONG VendorIdOffset;
    __WRAPPED__
    ULONG ProductIdOffset;
    __WRAPPED__
    ULONG ProductRevisionOffset;
    __WRAPPED__
    ULONG SerialNumberOffset;
    __WRAPPED__
    STORAGE_BUS_TYPE BusType;
    __WRAPPED__
    ULONG RawPropertiesLength;
    __WRAPPED__
    UCHAR RawDeviceProperties[1];
} STORAGE_DEVICE_DESCRIPTOR, *PSTORAGE_DEVICE_DESCRIPTOR;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_ADAPTER_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    ULONG MaximumTransferLength;
    __WRAPPED__
    ULONG MaximumPhysicalPages;
    __WRAPPED__
    ULONG AlignmentMask;
    __WRAPPED__
    BOOLEAN AdapterUsesPio;
    __WRAPPED__
    BOOLEAN AdapterScansDown;
    __WRAPPED__
    BOOLEAN CommandQueueing;
    __WRAPPED__
    BOOLEAN AcceleratedTransfer;
    __WRAPPED__
    UCHAR BusType;
    __WRAPPED__
    USHORT BusMajorVersion;
    __WRAPPED__
    USHORT BusMinorVersion;
    __WRAPPED__
    UCHAR SrbType;
    __WRAPPED__
    UCHAR AddressType;
} STORAGE_ADAPTER_DESCRIPTOR, *PSTORAGE_ADAPTER_DESCRIPTOR;
    UFIELD_OFFSET(STORAGE_ADAPTER_DESCRIPTOR, SrbType)
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    ULONG BytesPerCacheLine;
    __WRAPPED__
    ULONG BytesOffsetForCacheAlignment;
    __WRAPPED__
    ULONG BytesPerLogicalSector;
    __WRAPPED__
    ULONG BytesPerPhysicalSector;
    __WRAPPED__
    ULONG BytesOffsetForSectorAlignment;
} STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR, *PSTORAGE_ACCESS_ALIGNMENT_DESCRIPTOR;
typedef _Struct_size_bytes_(Size) struct _STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG MediumProductType;
} STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR, *PSTORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR;
typedef enum __WRAPPED__ _STORAGE_PORT_CODE_SET {
    StoragePortCodeSetReserved = 0,
    StoragePortCodeSetStorport = 1,
    StoragePortCodeSetSCSIport = 2,
    StoragePortCodeSetSpaceport = 3,
    StoragePortCodeSetATAport = 4,
    StoragePortCodeSetUSBport = 5,
    StoragePortCodeSetSBP2port = 6,
    StoragePortCodeSetSDport = 7
} STORAGE_PORT_CODE_SET, *PSTORAGE_PORT_CODE_SET;
typedef struct __WRAPPED__ _STORAGE_MINIPORT_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    STORAGE_PORT_CODE_SET Portdriver;
    __WRAPPED__
    BOOLEAN LUNResetSupported;
    __WRAPPED__
    BOOLEAN TargetResetSupported;
    __WRAPPED__
    USHORT IoTimeoutValue;
    __WRAPPED__
    BOOLEAN ExtraIoInfoSupported;
    __WRAPPED__
    UCHAR Reserved0[3];
    __WRAPPED__
    ULONG Reserved1;
} STORAGE_MINIPORT_DESCRIPTOR, *PSTORAGE_MINIPORT_DESCRIPTOR;
typedef enum __WRAPPED__ _STORAGE_IDENTIFIER_CODE_SET {
    StorageIdCodeSetReserved = 0,
    StorageIdCodeSetBinary = 1,
    StorageIdCodeSetAscii = 2,
    StorageIdCodeSetUtf8 = 3
} STORAGE_IDENTIFIER_CODE_SET, *PSTORAGE_IDENTIFIER_CODE_SET;
typedef enum __WRAPPED__ _STORAGE_IDENTIFIER_TYPE {
    StorageIdTypeVendorSpecific = 0,
    StorageIdTypeVendorId = 1,
    StorageIdTypeEUI64 = 2,
    StorageIdTypeFCPHName = 3,
    StorageIdTypePortRelative = 4,
    StorageIdTypeTargetPortGroup = 5,
    StorageIdTypeLogicalUnitGroup = 6,
    StorageIdTypeMD5LogicalUnitIdentifier = 7,
    StorageIdTypeScsiNameString = 8
} STORAGE_IDENTIFIER_TYPE, *PSTORAGE_IDENTIFIER_TYPE;
typedef enum __WRAPPED__ _STORAGE_ID_NAA_FORMAT {
        StorageIdNAAFormatIEEEExtended = 2,
        StorageIdNAAFormatIEEERegistered = 3,
        StorageIdNAAFormatIEEEERegisteredExtended = 5
} STORAGE_ID_NAA_FORMAT, *PSTORAGE_ID_NAA_FORMAT;
typedef enum __WRAPPED__ _STORAGE_ASSOCIATION_TYPE {
    StorageIdAssocDevice = 0,
    StorageIdAssocPort = 1,
    StorageIdAssocTarget = 2
} STORAGE_ASSOCIATION_TYPE, *PSTORAGE_ASSOCIATION_TYPE;
typedef struct __WRAPPED__ _STORAGE_IDENTIFIER {
    __WRAPPED__
    STORAGE_IDENTIFIER_CODE_SET CodeSet;
    __WRAPPED__
    STORAGE_IDENTIFIER_TYPE Type;
    __WRAPPED__
    USHORT IdentifierSize;
    __WRAPPED__
    USHORT NextOffset;
    __WRAPPED__
    STORAGE_ASSOCIATION_TYPE Association;
    __WRAPPED__
    UCHAR Identifier[1];
} STORAGE_IDENTIFIER, *PSTORAGE_IDENTIFIER;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_DEVICE_ID_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    ULONG NumberOfIdentifiers;
    __WRAPPED__
    UCHAR Identifiers[1];
} STORAGE_DEVICE_ID_DESCRIPTOR, *PSTORAGE_DEVICE_ID_DESCRIPTOR;
typedef struct __WRAPPED__ _DEVICE_SEEK_PENALTY_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    BOOLEAN IncursSeekPenalty;
} DEVICE_SEEK_PENALTY_DESCRIPTOR, *PDEVICE_SEEK_PENALTY_DESCRIPTOR;
typedef struct _DEVICE_WRITE_AGGREGATION_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    BOOLEAN BenefitsFromWriteAggregation;
} DEVICE_WRITE_AGGREGATION_DESCRIPTOR, *PDEVICE_WRITE_AGGREGATION_DESCRIPTOR;
typedef struct __WRAPPED__ _DEVICE_TRIM_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    BOOLEAN TrimEnabled;
} DEVICE_TRIM_DESCRIPTOR, *PDEVICE_TRIM_DESCRIPTOR;
#pragma warning(push)
#pragma warning(disable:4214)
typedef struct __WRAPPED__ _DEVICE_LB_PROVISIONING_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    UCHAR ThinProvisioningEnabled : 1;
    __WRAPPED__
    UCHAR ThinProvisioningReadZeros : 1;
    __WRAPPED__
    UCHAR AnchorSupported : 3;
    __WRAPPED__
    UCHAR UnmapGranularityAlignmentValid : 1;
    __WRAPPED__
    UCHAR Reserved0 : 2;
    __WRAPPED__
    UCHAR Reserved1[7];
    __WRAPPED__
    ULONGLONG OptimalUnmapGranularity;
    __WRAPPED__
    ULONGLONG UnmapGranularityAlignment;
    __WRAPPED__
    ULONG MaxUnmapLbaCount;
    __WRAPPED__
    ULONG MaxUnmapBlockDescriptorCount;
} DEVICE_LB_PROVISIONING_DESCRIPTOR, *PDEVICE_LB_PROVISIONING_DESCRIPTOR;
typedef struct _STORAGE_LB_PROVISIONING_MAP_RESOURCES {
    ULONG Size;
    ULONG Version;
    UCHAR AvailableMappingResourcesValid : 1;
    UCHAR UsedMappingResourcesValid : 1;
    UCHAR Reserved0 : 6;
    UCHAR Reserved1[3];
    UCHAR AvailableMappingResourcesScope : 2;
    UCHAR UsedMappingResourcesScope : 2;
    UCHAR Reserved2 : 4;
    UCHAR Reserved3[3];
    ULONGLONG AvailableMappingResources;
    ULONGLONG UsedMappingResources;
} STORAGE_LB_PROVISIONING_MAP_RESOURCES, *PSTORAGE_LB_PROVISIONING_MAP_RESOURCES;
#pragma warning(pop)
typedef struct _DEVICE_POWER_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    BOOLEAN DeviceAttentionSupported;
    BOOLEAN AsynchronousNotificationSupported;
    BOOLEAN IdlePowerManagementEnabled;
    BOOLEAN D3ColdEnabled;
    BOOLEAN D3ColdSupported;
    BOOLEAN NoVerifyDuringIdlePower;
    UCHAR Reserved[2];
    ULONG IdleTimeoutInMS;
} DEVICE_POWER_DESCRIPTOR, *PDEVICE_POWER_DESCRIPTOR;
typedef struct _DEVICE_COPY_OFFLOAD_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG MaximumTokenLifetime;
    ULONG DefaultTokenLifetime;
    ULONGLONG MaximumTransferSize;
    ULONGLONG OptimalTransferCount;
    ULONG MaximumDataDescriptors;
    ULONG MaximumTransferLengthPerDescriptor;
    ULONG OptimalTransferLengthPerDescriptor;
    USHORT OptimalTransferLengthGranularity;
    UCHAR Reserved[2];
} DEVICE_COPY_OFFLOAD_DESCRIPTOR, *PDEVICE_COPY_OFFLOAD_DESCRIPTOR;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_DEVICE_RESILIENCY_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    ULONG NameOffset;
    __WRAPPED__
    ULONG NumberOfLogicalCopies;
    __WRAPPED__
    ULONG NumberOfPhysicalCopies;
    __WRAPPED__
    ULONG PhysicalDiskRedundancy;
    __WRAPPED__
    ULONG NumberOfColumns;
    __WRAPPED__
    ULONG Interleave;
} STORAGE_DEVICE_RESILIENCY_DESCRIPTOR, *PSTORAGE_DEVICE_RESILIENCY_DESCRIPTOR;
typedef enum _STORAGE_RPMB_FRAME_TYPE {
    StorageRpmbFrameTypeUnknown = 0,
    StorageRpmbFrameTypeStandard,
    StorageRpmbFrameTypeMax,
} STORAGE_RPMB_FRAME_TYPE, *PSTORAGE_RPMB_FRAME_TYPE;
typedef struct _STORAGE_RPMB_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG SizeInBytes;
    ULONG MaxReliableWriteSizeInBytes;
    STORAGE_RPMB_FRAME_TYPE FrameFormat;
} STORAGE_RPMB_DESCRIPTOR, *PSTORAGE_RPMB_DESCRIPTOR;
typedef enum _STORAGE_CRYPTO_ALGORITHM_ID {
    StorageCryptoAlgorithmUnknown = 0,
    StorageCryptoAlgorithmXTSAES = 1,
    StorageCryptoAlgorithmBitlockerAESCBC,
    StorageCryptoAlgorithmAESECB,
    StorageCryptoAlgorithmESSIVAESCBC,
    StorageCryptoAlgorithmMax
} STORAGE_CRYPTO_ALGORITHM_ID, *PSTORAGE_CRYPTO_ALGORITHM_ID;
typedef enum _STORAGE_CRYPTO_KEY_SIZE {
    StorageCryptoKeySizeUnknown = 0,
    StorageCryptoKeySize128Bits = 1,
    StorageCryptoKeySize192Bits,
    StorageCryptoKeySize256Bits,
    StorageCryptoKeySize512Bits
} STORAGE_CRYPTO_KEY_SIZE, *PSTORAGE_CRYPTO_KEY_SIZE;
typedef struct _STORAGE_CRYPTO_CAPABILITY {
    ULONG Version;
    ULONG Size;
    ULONG CryptoCapabilityIndex;
    STORAGE_CRYPTO_ALGORITHM_ID AlgorithmId;
    STORAGE_CRYPTO_KEY_SIZE KeySize;
    ULONG DataUnitSizeBitmask;
} STORAGE_CRYPTO_CAPABILITY, *PSTORAGE_CRYPTO_CAPABILITY;
typedef struct _STORAGE_CRYPTO_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG NumKeysSupported;
    ULONG NumCryptoCapabilities;
    _Field_size_(NumCryptoCapabilities) STORAGE_CRYPTO_CAPABILITY CryptoCapabilities[ANYSIZE_ARRAY];
} STORAGE_CRYPTO_DESCRIPTOR, *PSTORAGE_CRYPTO_DESCRIPTOR;
typedef enum _STORAGE_TIER_MEDIA_TYPE {
    StorageTierMediaTypeUnspecified = 0,
    StorageTierMediaTypeDisk = 1,
    StorageTierMediaTypeSsd = 2,
    StorageTierMediaTypeScm = 4,
    StorageTierMediaTypeMax
} STORAGE_TIER_MEDIA_TYPE, *PSTORAGE_TIER_MEDIA_TYPE;
typedef enum _STORAGE_TIER_CLASS {
    StorageTierClassUnspecified = 0,
    StorageTierClassCapacity,
    StorageTierClassPerformance,
    StorageTierClassMax
} STORAGE_TIER_CLASS, *PSTORAGE_TIER_CLASS;
typedef struct _STORAGE_TIER {
    GUID Id;
    WCHAR Name[STORAGE_TIER_NAME_LENGTH];
    WCHAR Description[STORAGE_TIER_NAME_LENGTH];
    ULONGLONG Flags;
    ULONGLONG ProvisionedCapacity;
    STORAGE_TIER_MEDIA_TYPE MediaType;
    STORAGE_TIER_CLASS Class;
} STORAGE_TIER, *PSTORAGE_TIER;
typedef _Struct_size_bytes_(Size) struct _STORAGE_DEVICE_TIERING_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG TotalNumberOfTiers;
    ULONG NumberOfTiersReturned;
    _Field_size_(NumberOfTiersReturned) STORAGE_TIER Tiers[ANYSIZE_ARRAY];
} STORAGE_DEVICE_TIERING_DESCRIPTOR, *PSTORAGE_DEVICE_TIERING_DESCRIPTOR;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    ULONG NumberOfFaultDomains;
    _Field_size_(NumberOfFaultDomains)
    __WRAPPED__
    GUID FaultDomainIds[ANYSIZE_ARRAY];
} STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR, *PSTORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR;
typedef enum _STORAGE_PROTOCOL_TYPE {
    ProtocolTypeUnknown = 0x00,
    ProtocolTypeScsi,
    ProtocolTypeAta,
    ProtocolTypeNvme,
    ProtocolTypeSd,
    ProtocolTypeUfs,
    ProtocolTypeProprietary = 0x7E,
    ProtocolTypeMaxReserved = 0x7F
} STORAGE_PROTOCOL_TYPE, *PSTORAGE_PROTOCOL_TYPE;
typedef enum _STORAGE_PROTOCOL_NVME_DATA_TYPE {
    NVMeDataTypeUnknown = 0,
    NVMeDataTypeIdentify,
    NVMeDataTypeLogPage,
    NVMeDataTypeFeature,
} STORAGE_PROTOCOL_NVME_DATA_TYPE, *PSTORAGE_PROTOCOL_NVME_DATA_TYPE;
typedef enum _STORAGE_PROTOCOL_ATA_DATA_TYPE {
    AtaDataTypeUnknown = 0,
    AtaDataTypeIdentify,
    AtaDataTypeLogPage,
} STORAGE_PROTOCOL_ATA_DATA_TYPE, *PSTORAGE_PROTOCOL_ATA_DATA_TYPE;
typedef enum _STORAGE_PROTOCOL_UFS_DATA_TYPE {
    UfsDataTypeUnknown = 0,
    UfsDataTypeQueryDescriptor,
    UfsDataTypeMax,
} STORAGE_PROTOCOL_UFS_DATA_TYPE, *PSTORAGE_PROTOCOL_UFS_DATA_TYPE;
typedef struct _STORAGE_PROTOCOL_SPECIFIC_DATA {
    STORAGE_PROTOCOL_TYPE ProtocolType;
    ULONG DataType;
    ULONG ProtocolDataRequestValue;
    ULONG ProtocolDataRequestSubValue;
    ULONG ProtocolDataOffset;
    ULONG ProtocolDataLength;
    ULONG FixedProtocolReturnData;
    ULONG ProtocolDataRequestSubValue2;
    ULONG ProtocolDataRequestSubValue3;
    ULONG Reserved;
} STORAGE_PROTOCOL_SPECIFIC_DATA, *PSTORAGE_PROTOCOL_SPECIFIC_DATA;
typedef struct _STORAGE_PROTOCOL_SPECIFIC_DATA_EXT {
    STORAGE_PROTOCOL_TYPE ProtocolType;
    ULONG DataType;
    ULONG ProtocolDataValue;
    ULONG ProtocolDataSubValue;
    ULONG ProtocolDataOffset;
    ULONG ProtocolDataLength;
    ULONG FixedProtocolReturnData;
    ULONG ProtocolDataSubValue2;
    ULONG ProtocolDataSubValue3;
    ULONG ProtocolDataSubValue4;
    ULONG ProtocolDataSubValue5;
    ULONG Reserved[5];
} STORAGE_PROTOCOL_SPECIFIC_DATA_EXT, *PSTORAGE_PROTOCOL_SPECIFIC_DATA_EXT;
typedef struct _STORAGE_PROTOCOL_DATA_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    STORAGE_PROTOCOL_SPECIFIC_DATA ProtocolSpecificData;
} STORAGE_PROTOCOL_DATA_DESCRIPTOR, *PSTORAGE_PROTOCOL_DATA_DESCRIPTOR;
typedef struct _STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT {
    ULONG Version;
    ULONG Size;
    STORAGE_PROTOCOL_SPECIFIC_DATA_EXT ProtocolSpecificData;
} STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT, *PSTORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT;
typedef struct _STORAGE_TEMPERATURE_INFO {
    USHORT Index;
    SHORT Temperature;
    SHORT OverThreshold;
    SHORT UnderThreshold;
    BOOLEAN OverThresholdChangable;
    BOOLEAN UnderThresholdChangable;
    BOOLEAN EventGenerated;
    UCHAR Reserved0;
    ULONG Reserved1;
} STORAGE_TEMPERATURE_INFO, *PSTORAGE_TEMPERATURE_INFO;
typedef struct _STORAGE_TEMPERATURE_DATA_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    SHORT CriticalTemperature;
    SHORT WarningTemperature;
    USHORT InfoCount;
    UCHAR Reserved0[2];
    ULONG Reserved1[2];
    STORAGE_TEMPERATURE_INFO TemperatureInfo[ANYSIZE_ARRAY];
} STORAGE_TEMPERATURE_DATA_DESCRIPTOR, *PSTORAGE_TEMPERATURE_DATA_DESCRIPTOR;
typedef struct _STORAGE_TEMPERATURE_THRESHOLD {
    ULONG Version;
    ULONG Size;
    USHORT Flags;
    USHORT Index;
    SHORT Threshold;
    BOOLEAN OverThreshold;
    UCHAR Reserved;
} STORAGE_TEMPERATURE_THRESHOLD, *PSTORAGE_TEMPERATURE_THRESHOLD;
typedef enum _STORAGE_DEVICE_FORM_FACTOR {
    FormFactorUnknown = 0,
    FormFactor3_5,
    FormFactor2_5,
    FormFactor1_8,
    FormFactor1_8Less,
    FormFactorEmbedded,
    FormFactorMemoryCard,
    FormFactormSata,
    FormFactorM_2,
    FormFactorPCIeBoard,
    FormFactorDimm,
} STORAGE_DEVICE_FORM_FACTOR, *PSTORAGE_DEVICE_FORM_FACTOR;
typedef enum _STORAGE_COMPONENT_HEALTH_STATUS {
    HealthStatusUnknown = 0,
    HealthStatusNormal,
    HealthStatusThrottled,
    HealthStatusWarning,
    HealthStatusDisabled,
    HealthStatusFailed,
} STORAGE_COMPONENT_HEALTH_STATUS, *PSTORAGE_COMPONENT_HEALTH_STATUS;
#pragma warning(push)
#pragma warning(disable:4201)
typedef union _STORAGE_SPEC_VERSION {
    struct {
        union {
            struct {
                UCHAR SubMinor;
                UCHAR Minor;
            } DUMMYSTRUCTNAME;
            USHORT AsUshort;
        } MinorVersion;
        USHORT MajorVersion;
    } DUMMYSTRUCTNAME;
    ULONG AsUlong;
} STORAGE_SPEC_VERSION, *PSTORAGE_SPEC_VERSION;
#pragma warning(pop)
typedef struct _STORAGE_PHYSICAL_DEVICE_DATA {
    ULONG DeviceId;
    ULONG Role;
    STORAGE_COMPONENT_HEALTH_STATUS HealthStatus;
    STORAGE_PROTOCOL_TYPE CommandProtocol;
    STORAGE_SPEC_VERSION SpecVersion;
    STORAGE_DEVICE_FORM_FACTOR FormFactor;
    UCHAR Vendor[8];
    UCHAR Model[40];
    UCHAR FirmwareRevision[16];
    ULONGLONG Capacity;
    UCHAR PhysicalLocation[32];
    ULONG Reserved[2];
} STORAGE_PHYSICAL_DEVICE_DATA, *PSTORAGE_PHYSICAL_DEVICE_DATA;
typedef struct _STORAGE_PHYSICAL_ADAPTER_DATA {
    ULONG AdapterId;
    STORAGE_COMPONENT_HEALTH_STATUS HealthStatus;
    STORAGE_PROTOCOL_TYPE CommandProtocol;
    STORAGE_SPEC_VERSION SpecVersion;
    UCHAR Vendor[8];
    UCHAR Model[40];
    UCHAR FirmwareRevision[16];
    UCHAR PhysicalLocation[32];
    BOOLEAN ExpanderConnected;
    UCHAR Reserved0[3];
    ULONG Reserved1[3];
} STORAGE_PHYSICAL_ADAPTER_DATA, *PSTORAGE_PHYSICAL_ADAPTER_DATA;
typedef struct _STORAGE_PHYSICAL_NODE_DATA {
    ULONG NodeId;
    ULONG AdapterCount;
    ULONG AdapterDataLength;
    ULONG AdapterDataOffset;
    ULONG DeviceCount;
    ULONG DeviceDataLength;
    ULONG DeviceDataOffset;
    ULONG Reserved[3];
} STORAGE_PHYSICAL_NODE_DATA, *PSTORAGE_PHYSICAL_NODE_DATA;
typedef struct _STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG NodeCount;
    ULONG Reserved;
    STORAGE_PHYSICAL_NODE_DATA Node[ANYSIZE_ARRAY];
} STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR, *PSTORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR;
typedef _Struct_size_bytes_(Size) struct _STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG LunMaxIoCount;
    ULONG AdapterMaxIoCount;
} STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR, *PSTORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR;
typedef _Struct_size_bytes_(Size) struct _STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG64 Attributes;
} STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR, *PSTORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR;
typedef enum _STORAGE_DISK_HEALTH_STATUS {
    DiskHealthUnknown = 0,
    DiskHealthUnhealthy,
    DiskHealthWarning,
    DiskHealthHealthy,
    DiskHealthMax
} STORAGE_DISK_HEALTH_STATUS, *PSTORAGE_DISK_HEALTH_STATUS;
typedef enum _STORAGE_DISK_OPERATIONAL_STATUS {
    DiskOpStatusNone = 0,
    DiskOpStatusUnknown,
    DiskOpStatusOk,
    DiskOpStatusPredictingFailure,
    DiskOpStatusInService,
    DiskOpStatusHardwareError,
    DiskOpStatusNotUsable,
    DiskOpStatusTransientError,
    DiskOpStatusMissing,
} STORAGE_DISK_OPERATIONAL_STATUS, *PSTORAGE_DISK_OPERATIONAL_STATUS;
typedef enum _STORAGE_OPERATIONAL_STATUS_REASON {
    DiskOpReasonUnknown = 0,
    DiskOpReasonScsiSenseCode,
    DiskOpReasonMedia,
    DiskOpReasonIo,
    DiskOpReasonThresholdExceeded,
    DiskOpReasonLostData,
    DiskOpReasonEnergySource,
    DiskOpReasonConfiguration,
    DiskOpReasonDeviceController,
    DiskOpReasonMediaController,
    DiskOpReasonComponent,
    DiskOpReasonNVDIMM_N,
    DiskOpReasonBackgroundOperation,
    DiskOpReasonInvalidFirmware,
    DiskOpReasonHealthCheck,
    DiskOpReasonLostDataPersistence,
    DiskOpReasonDisabledByPlatform,
    DiskOpReasonLostWritePersistence,
    DiskOpReasonDataPersistenceLossImminent,
    DiskOpReasonWritePersistenceLossImminent,
    DiskOpReasonMax
} STORAGE_OPERATIONAL_STATUS_REASON, *PSTORAGE_OPERATIONAL_STATUS_REASON;
typedef struct _STORAGE_OPERATIONAL_REASON {
    ULONG Version;
    ULONG Size;
    STORAGE_OPERATIONAL_STATUS_REASON Reason;
    union {
        struct {
            UCHAR SenseKey;
            UCHAR ASC;
            UCHAR ASCQ;
            UCHAR Reserved;
        } ScsiSenseKey;
        struct {
            UCHAR CriticalHealth;
            UCHAR ModuleHealth[2];
            UCHAR ErrorThresholdStatus;
        } NVDIMM_N;
        ULONG AsUlong;
    } RawBytes;
} STORAGE_OPERATIONAL_REASON, *PSTORAGE_OPERATIONAL_REASON;
typedef struct _STORAGE_DEVICE_MANAGEMENT_STATUS {
    ULONG Version;
    ULONG Size;
    STORAGE_DISK_HEALTH_STATUS Health;
    ULONG NumberOfOperationalStatus;
    ULONG NumberOfAdditionalReasons;
    STORAGE_DISK_OPERATIONAL_STATUS OperationalStatus[STORAGE_DEVICE_MAX_OPERATIONAL_STATUS];
    STORAGE_OPERATIONAL_REASON AdditionalReasons[ANYSIZE_ARRAY];
} STORAGE_DEVICE_MANAGEMENT_STATUS, *PSTORAGE_DEVICE_MANAGEMENT_STATUS;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_ADAPTER_SERIAL_NUMBER {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    WCHAR SerialNumber[STORAGE_ADAPTER_SERIAL_NUMBER_V1_MAX_LENGTH];
} STORAGE_ADAPTER_SERIAL_NUMBER, *PSTORAGE_ADAPTER_SERIAL_NUMBER;
typedef enum __WRAPPED__ _STORAGE_ZONED_DEVICE_TYPES {
    ZonedDeviceTypeUnknown = 0,
    ZonedDeviceTypeHostManaged,
    ZonedDeviceTypeHostAware,
    ZonedDeviceTypeDeviceManaged,
} STORAGE_ZONED_DEVICE_TYPES, *PSTORAGE_ZONED_DEVICE_TYPES;
typedef enum __WRAPPED__ _STORAGE_ZONE_TYPES {
    ZoneTypeUnknown = 0,
    ZoneTypeConventional = 1,
    ZoneTypeSequentialWriteRequired = 2,
    ZoneTypeSequentialWritePreferred = 3,
    ZoneTypeMax
} STORAGE_ZONE_TYPES, *PSTORAGE_ZONE_TYPES;
typedef struct __WRAPPED__ _STORAGE_ZONE_GROUP {
        __WRAPPED__
        ULONG ZoneCount;
        __WRAPPED__
        STORAGE_ZONE_TYPES ZoneType;
        __WRAPPED__
        ULONGLONG ZoneSize;
} STORAGE_ZONE_GROUP, *PSTORAGE_ZONE_GROUP;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_ZONED_DEVICE_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    STORAGE_ZONED_DEVICE_TYPES DeviceType;
    __WRAPPED__
    ULONG ZoneCount;
    union {
        struct {
            ULONG MaxOpenZoneCount;
            BOOLEAN UnrestrictedRead;
            UCHAR Reserved[3];
        } SequentialRequiredZone;
        struct {
            ULONG OptimalOpenZoneCount;
            ULONG Reserved;
        } SequentialPreferredZone;
    } ZoneAttributes;
    __WRAPPED__
    ULONG ZoneGroupCount;
    __WRAPPED__
    STORAGE_ZONE_GROUP ZoneGroup[ANYSIZE_ARRAY];
} STORAGE_ZONED_DEVICE_DESCRIPTOR, *PSTORAGE_ZONED_DEVICE_DESCRIPTOR;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct __WRAPPED__ _DEVICE_LOCATION {
    __WRAPPED__
    ULONG Socket;
    __WRAPPED__
    ULONG Slot;
    __WRAPPED__
    ULONG Adapter;
    __WRAPPED__
    ULONG Port;
    union {
        struct {
            ULONG Channel;
            ULONG Device;
        } DUMMYSTRUCTNAME;
        struct {
            ULONG Target;
            ULONG Lun;
        } DUMMYSTRUCTNAME2;
    } DUMMYUNIONNAME;
} DEVICE_LOCATION, *PDEVICE_LOCATION;
#pragma warning(pop)
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_DEVICE_LOCATION_DESCRIPTOR {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    DEVICE_LOCATION Location;
    __WRAPPED__
    ULONG StringOffset;
} STORAGE_DEVICE_LOCATION_DESCRIPTOR, *PSTORAGE_DEVICE_LOCATION_DESCRIPTOR;
typedef struct _STORAGE_DEVICE_NUMA_PROPERTY {
    ULONG Version;
    ULONG Size;
    ULONG NumaNode;
} STORAGE_DEVICE_NUMA_PROPERTY, *PSTORAGE_DEVICE_NUMA_PROPERTY;
typedef struct _STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT {
    ULONG Version;
    ULONG Size;
    ULONG UnsafeShutdownCount;
} STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT, *PSTORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT;
#pragma warning(push)
#pragma warning(disable:4214)
#pragma warning(disable:4201)
typedef struct _STORAGE_HW_ENDURANCE_INFO {
    ULONG ValidFields;
    ULONG GroupId;
    struct {
        ULONG Shared:1;
        ULONG Reserved:31;
    } Flags;
    ULONG LifePercentage;
    UCHAR BytesReadCount[16];
    UCHAR ByteWriteCount[16];
} STORAGE_HW_ENDURANCE_INFO, *PSTORAGE_HW_ENDURANCE_INFO;
typedef struct _STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    STORAGE_HW_ENDURANCE_INFO EnduranceInfo;
} STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR, *PSTORAGE_HW_ENDURANCE_DATA_DESCRIPTOR;
#pragma warning(pop)
typedef ULONG DEVICE_DATA_MANAGEMENT_SET_ACTION, DEVICE_DSM_ACTION;
typedef struct _DEVICE_DATA_SET_RANGE {
    LONGLONG StartingOffset;
    ULONGLONG LengthInBytes;
} DEVICE_DATA_SET_RANGE, *PDEVICE_DATA_SET_RANGE,
  DEVICE_DSM_RANGE, *PDEVICE_DSM_RANGE;
typedef struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES {
    ULONG Size;
    DEVICE_DSM_ACTION Action;
    ULONG Flags;
    ULONG ParameterBlockOffset;
    ULONG ParameterBlockLength;
    ULONG DataSetRangesOffset;
    ULONG DataSetRangesLength;
} DEVICE_MANAGE_DATA_SET_ATTRIBUTES, *PDEVICE_MANAGE_DATA_SET_ATTRIBUTES,
  DEVICE_DSM_INPUT, *PDEVICE_DSM_INPUT;
typedef struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT {
    ULONG Size;
    DEVICE_DSM_ACTION Action;
    ULONG Flags;
    ULONG OperationStatus;
    ULONG ExtendedError;
    ULONG TargetDetailedError;
    ULONG ReservedStatus;
    ULONG OutputBlockOffset;
    ULONG OutputBlockLength;
} DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT, *PDEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT,
  DEVICE_DSM_OUTPUT, *PDEVICE_DSM_OUTPUT;
typedef struct _DEVICE_DSM_DEFINITION {
    DEVICE_DSM_ACTION Action;
    BOOLEAN SingleRange;
    ULONG ParameterBlockAlignment;
    ULONG ParameterBlockLength;
    BOOLEAN HasOutput;
    ULONG OutputBlockAlignment;
    ULONG OutputBlockLength;
} DEVICE_DSM_DEFINITION, *PDEVICE_DSM_DEFINITION;
                                  FALSE, \
                                  0, \
                                  0, \
                                  FALSE, \
                                  0, \
                                  0}
                                  FALSE, \
                                  0, \
                                  0, \
                                  FALSE, \
                                  0, \
                                  0}
typedef struct _DEVICE_DSM_NOTIFICATION_PARAMETERS {
    ULONG Size;
    ULONG Flags;
    ULONG NumFileTypeIDs;
    GUID FileTypeID[ANYSIZE_ARRAY];
} DEVICE_DSM_NOTIFICATION_PARAMETERS, *PDEVICE_DSM_NOTIFICATION_PARAMETERS;
                                          FALSE, \
                                          __alignof(DEVICE_DSM_NOTIFICATION_PARAMETERS), \
                                          sizeof(DEVICE_DSM_NOTIFICATION_PARAMETERS), \
                                          FALSE, \
                                          0, \
                                          0}
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _STORAGE_OFFLOAD_TOKEN {
    UCHAR TokenType[4];
    UCHAR Reserved[2];
    UCHAR TokenIdLength[2];
    union {
        struct {
            UCHAR Reserved2[STORAGE_OFFLOAD_TOKEN_ID_LENGTH];
        } StorageOffloadZeroDataToken;
        UCHAR Token[STORAGE_OFFLOAD_TOKEN_ID_LENGTH];
    } DUMMYUNIONNAME;
} STORAGE_OFFLOAD_TOKEN, *PSTORAGE_OFFLOAD_TOKEN;
#pragma warning(pop)
    ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[0] = 0xFF, \
    ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[1] = 0xFF, \
    ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[2] = 0x00, \
    ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[3] = 0x01, \
    ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenIdLength[0] = 0x01, \
    ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenIdLength[1] = 0xF8 \
)
    (((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[0] == 0xFF && \
     ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[1] == 0xFF && \
     ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[2] == 0x00 && \
     ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenType[3] == 0x01 && \
     ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenIdLength[0] == 0x01 && \
     ((PSTORAGE_OFFLOAD_TOKEN)T)->TokenIdLength[1] == 0xF8) \
)
typedef struct _DEVICE_DSM_OFFLOAD_READ_PARAMETERS {
    ULONG Flags;
    ULONG TimeToLive;
    ULONG Reserved[2];
} DEVICE_DSM_OFFLOAD_READ_PARAMETERS, *PDEVICE_DSM_OFFLOAD_READ_PARAMETERS;
typedef struct _STORAGE_OFFLOAD_READ_OUTPUT {
    ULONG OffloadReadFlags;
    ULONG Reserved;
    ULONGLONG LengthProtected;
    ULONG TokenLength;
    STORAGE_OFFLOAD_TOKEN Token;
} STORAGE_OFFLOAD_READ_OUTPUT, *PSTORAGE_OFFLOAD_READ_OUTPUT;
                                         FALSE, \
                                         __alignof(DEVICE_DSM_OFFLOAD_READ_PARAMETERS), \
                                         sizeof(DEVICE_DSM_OFFLOAD_READ_PARAMETERS), \
                                         FALSE, \
                                         __alignof(STORAGE_OFFLOAD_READ_OUTPUT), \
                                         sizeof(STORAGE_OFFLOAD_READ_OUTPUT)}
typedef struct _DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS {
    ULONG Flags;
    ULONG Reserved;
    ULONGLONG TokenOffset;
    STORAGE_OFFLOAD_TOKEN Token;
} DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS, *PDEVICE_DSM_OFFLOAD_WRITE_PARAMETERS;
typedef struct _STORAGE_OFFLOAD_WRITE_OUTPUT {
    ULONG OffloadWriteFlags;
    ULONG Reserved;
    ULONGLONG LengthCopied;
} STORAGE_OFFLOAD_WRITE_OUTPUT, *PSTORAGE_OFFLOAD_WRITE_OUTPUT;
                                          FALSE, \
                                          __alignof(DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS), \
                                          sizeof(DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS), \
                                          FALSE, \
                                          __alignof(STORAGE_OFFLOAD_WRITE_OUTPUT), \
                                          sizeof(STORAGE_OFFLOAD_WRITE_OUTPUT)}
typedef struct _DEVICE_DATA_SET_LBP_STATE_PARAMETERS {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG OutputVersion;
} DEVICE_DATA_SET_LBP_STATE_PARAMETERS, *PDEVICE_DATA_SET_LBP_STATE_PARAMETERS,
  DEVICE_DSM_ALLOCATION_PARAMETERS, *PDEVICE_DSM_ALLOCATION_PARAMETERS;
typedef struct _DEVICE_DATA_SET_LB_PROVISIONING_STATE {
    ULONG Size;
    ULONG Version;
    ULONGLONG SlabSizeInBytes;
    ULONG SlabOffsetDeltaInBytes;
    ULONG SlabAllocationBitMapBitCount;
    ULONG SlabAllocationBitMapLength;
    ULONG SlabAllocationBitMap[ANYSIZE_ARRAY];
} DEVICE_DATA_SET_LB_PROVISIONING_STATE, *PDEVICE_DATA_SET_LB_PROVISIONING_STATE,
  DEVICE_DSM_ALLOCATION_OUTPUT, *PDEVICE_DSM_ALLOCATION_OUTPUT;
typedef struct _DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2 {
    ULONG Size;
    ULONG Version;
    ULONGLONG SlabSizeInBytes;
    ULONGLONG SlabOffsetDeltaInBytes;
    ULONG SlabAllocationBitMapBitCount;
    ULONG SlabAllocationBitMapLength;
    ULONG SlabAllocationBitMap[ANYSIZE_ARRAY];
} DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2, *PDEVICE_DATA_SET_LB_PROVISIONING_STATE_V2,
  DEVICE_DSM_ALLOCATION_OUTPUT2, *PDEVICE_DSM_ALLOCATION_OUTPUT2;
                                        TRUE, \
                                        __alignof(DEVICE_DSM_ALLOCATION_PARAMETERS), \
                                        sizeof(DEVICE_DSM_ALLOCATION_PARAMETERS), \
                                        TRUE, \
                                        __alignof(DEVICE_DSM_ALLOCATION_OUTPUT2), \
                                        sizeof(DEVICE_DSM_ALLOCATION_OUTPUT2)}
typedef struct _DEVICE_DATA_SET_REPAIR_PARAMETERS {
    ULONG NumberOfRepairCopies;
    ULONG SourceCopy;
    ULONG RepairCopies[ANYSIZE_ARRAY];
} DEVICE_DATA_SET_REPAIR_PARAMETERS, *PDEVICE_DATA_SET_REPAIR_PARAMETERS,
  DEVICE_DSM_REPAIR_PARAMETERS, *PDEVICE_DSM_REPAIR_PARAMETERS;
    RtlOffsetToPointer(R, \
                       ALIGN_UP_BY(FIELD_OFFSET(DEVICE_DATA_SET_REPAIR_PARAMETERS, RepairCopies) + \
                       sizeof(ULONG) * R->NumberOfRepairCopies, \
                       8))
typedef struct _DEVICE_DATA_SET_REPAIR_OUTPUT {
    DEVICE_DSM_RANGE ParityExtent;
} DEVICE_DATA_SET_REPAIR_OUTPUT, *PDEVICE_DATA_SET_REPAIR_OUTPUT,
  DEVICE_DSM_REPAIR_OUTPUT, *PDEVICE_DSM_REPAIR_OUTPUT;
                                    TRUE, \
                                    __alignof(DEVICE_DSM_REPAIR_PARAMETERS), \
                                    sizeof(DEVICE_DSM_REPAIR_PARAMETERS), \
                                    TRUE, \
                                    __alignof(DEVICE_DSM_REPAIR_OUTPUT), \
                                    sizeof(DEVICE_DSM_REPAIR_OUTPUT)}
typedef struct _DEVICE_DATA_SET_SCRUB_OUTPUT {
    ULONGLONG BytesProcessed;
    ULONGLONG BytesRepaired;
    ULONGLONG BytesFailed;
} DEVICE_DATA_SET_SCRUB_OUTPUT, *PDEVICE_DATA_SET_SCRUB_OUTPUT,
  DEVICE_DSM_SCRUB_OUTPUT, *PDEVICE_DSM_SCRUB_OUTPUT;
typedef struct _DEVICE_DATA_SET_SCRUB_EX_OUTPUT {
    ULONGLONG BytesProcessed;
    ULONGLONG BytesRepaired;
    ULONGLONG BytesFailed;
    DEVICE_DSM_RANGE ParityExtent;
} DEVICE_DATA_SET_SCRUB_EX_OUTPUT, *PDEVICE_DATA_SET_SCRUB_EX_OUTPUT,
  DEVICE_DSM_SCRUB_OUTPUT2, *PDEVICE_DSM_SCRUB_OUTPUT2;
                                   FALSE, \
                                   0, \
                                   0, \
                                   TRUE, \
                                   __alignof(DEVICE_DSM_SCRUB_OUTPUT2), \
                                   sizeof(DEVICE_DSM_SCRUB_OUTPUT2)}
                                      FALSE, \
                                      0, \
                                      0, \
                                      TRUE, \
                                      0, \
                                      0}
                                      FALSE, \
                                      0, \
                                      0, \
                                      FALSE, \
                                      0, \
                                      0}
                                        FALSE, \
                                        0, \
                                        0, \
                                        FALSE, \
                                        0, \
                                        0}
typedef struct _DEVICE_DSM_TIERING_QUERY_INPUT {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG NumberOfTierIds;
    GUID TierIds[ANYSIZE_ARRAY];
} DEVICE_DSM_TIERING_QUERY_INPUT, *PDEVICE_DSM_TIERING_QUERY_INPUT,
  DEVICE_DSM_TIERING_QUERY_PARAMETERS, *PDEVICE_DSM_TIERING_QUERY_PARAMETERS;
typedef struct _STORAGE_TIER_REGION {
    GUID TierId;
    ULONGLONG Offset;
    ULONGLONG Length;
} STORAGE_TIER_REGION, *PSTORAGE_TIER_REGION;
typedef struct _DEVICE_DSM_TIERING_QUERY_OUTPUT {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG Reserved;
    ULONGLONG Alignment;
    ULONG TotalNumberOfRegions;
    ULONG NumberOfRegionsReturned;
    _Field_size_(NumberOfRegionsReturned) STORAGE_TIER_REGION Regions[ANYSIZE_ARRAY];
} DEVICE_DSM_TIERING_QUERY_OUTPUT, *PDEVICE_DSM_TIERING_QUERY_OUTPUT;
                                          TRUE, \
                                          __alignof(DEVICE_DSM_TIERING_QUERY_PARAMETERS), \
                                          sizeof(DEVICE_DSM_TIERING_QUERY_PARAMETERS), \
                                          TRUE, \
                                          __alignof(DEVICE_DSM_TIERING_QUERY_OUTPUT), \
                                          sizeof(DEVICE_DSM_TIERING_QUERY_OUTPUT)}
                                 FALSE, \
                                 0, \
                                 0, \
                                 FALSE, \
                                 0, \
                                 0}
                                              FALSE, \
                                              0, \
                                              0, \
                                              FALSE, \
                                              0, \
                                              0}
typedef struct _DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS {
    ULONG Size;
    UCHAR TargetPriority;
    UCHAR Reserved[3];
} DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS, *PDEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS;
                                                     FALSE, \
                                                     __alignof(DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS), \
                                                     sizeof(DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS), \
                                                     FALSE, \
                                                     0, \
                                                     0}
                                           FALSE, \
                                           0, \
                                           0, \
                                           FALSE, \
                                           0, \
                                           0}
typedef struct _DEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT {
    ULONGLONG TopologyRangeBytes;
    UCHAR TopologyId[16];
} DEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT, *PDEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT,
  DEVICE_DSM_TOPOLOGY_ID_QUERY_OUTPUT, *PDEVICE_DSM_TOPOLOGY_ID_QUERY_OUTPUT;
                                             FALSE, \
                                             0, \
                                             0, \
                                             TRUE, \
                                             __alignof(DEVICE_DSM_TOPOLOGY_ID_QUERY_OUTPUT), \
                                             sizeof(DEVICE_DSM_TOPOLOGY_ID_QUERY_OUTPUT)}
typedef struct _DEVICE_STORAGE_ADDRESS_RANGE {
    LONGLONG StartAddress;
    ULONGLONG LengthInBytes;
} DEVICE_STORAGE_ADDRESS_RANGE, *PDEVICE_STORAGE_ADDRESS_RANGE;
typedef struct _DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT {
    ULONG Version;
    ULONG Flags;
    ULONG TotalNumberOfRanges;
    ULONG NumberOfRangesReturned;
    DEVICE_STORAGE_ADDRESS_RANGE Ranges[ANYSIZE_ARRAY];
} DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT, *PDEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT;
                                                  FALSE, \
                                                  0, \
                                                  0, \
                                                  TRUE, \
                                                  __alignof(DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT), \
                                                  sizeof(DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT)}
                                        FALSE, \
                                        0, \
                                        0, \
                                        FALSE, \
                                        0, \
                                        0}
typedef struct _DEVICE_DSM_REPORT_ZONES_PARAMETERS {
    ULONG Size;
    UCHAR ReportOption;
    UCHAR Partial;
    UCHAR Reserved[2];
} DEVICE_DSM_REPORT_ZONES_PARAMETERS, *PDEVICE_DSM_REPORT_ZONES_PARAMETERS;
typedef enum _STORAGE_ZONES_ATTRIBUTES {
    ZonesAttributeTypeAndLengthMayDifferent = 0,
    ZonesAttributeTypeSameLengthSame = 1,
    ZonesAttributeTypeSameLastZoneLengthDifferent = 2,
    ZonesAttributeTypeMayDifferentLengthSame = 3,
} STORAGE_ZONES_ATTRIBUTES, *PSTORAGE_ZONES_ATTRIBUTES;
typedef enum _STORAGE_ZONE_CONDITION {
    ZoneConditionConventional = 0x00,
    ZoneConditionEmpty = 0x01,
    ZoneConditionImplicitlyOpened = 0x02,
    ZoneConditionExplicitlyOpened = 0x03,
    ZoneConditionClosed = 0x04,
    ZoneConditionReadOnly = 0x0D,
    ZoneConditionFull = 0x0E,
    ZoneConditionOffline = 0x0F,
} STORAGE_ZONE_CONDITION, *PSTORAGE_ZONE_CONDITION;
typedef struct _STORAGE_ZONE_DESCRIPTOR {
    ULONG Size;
    STORAGE_ZONE_TYPES ZoneType;
    STORAGE_ZONE_CONDITION ZoneCondition;
    BOOLEAN ResetWritePointerRecommend;
    UCHAR Reserved0[3];
    ULONGLONG ZoneSize;
    ULONGLONG WritePointerOffset;
} STORAGE_ZONE_DESCRIPTOR, *PSTORAGE_ZONE_DESCRIPTOR;
typedef struct _DEVICE_DSM_REPORT_ZONES_DATA {
    ULONG Size;
    ULONG ZoneCount;
    STORAGE_ZONES_ATTRIBUTES Attributes;
    ULONG Reserved0;
    _Field_size_(ZoneCount) STORAGE_ZONE_DESCRIPTOR ZoneDescriptors[ANYSIZE_ARRAY];
} DEVICE_DSM_REPORT_ZONES_DATA, *PDEVICE_DSM_REPORT_ZONES_DATA,
  DEVICE_DSM_REPORT_ZONES_OUTPUT, *PDEVICE_DSM_REPORT_ZONES_OUTPUT;
                                          FALSE, \
                                          __alignof(DEVICE_DSM_REPORT_ZONES_PARAMETERS), \
                                          sizeof(DEVICE_DSM_REPORT_ZONES_PARAMETERS), \
                                          TRUE, \
                                          __alignof(DEVICE_DSM_REPORT_ZONES_OUTPUT), \
                                          sizeof(DEVICE_DSM_REPORT_ZONES_OUTPUT)}
                                      FALSE, \
                                      0, \
                                      0, \
                                      FALSE, \
                                      0, \
                                      0}
                                        FALSE, \
                                        0, \
                                        0, \
                                        FALSE, \
                                        0, \
                                        0}
                                       FALSE, \
                                       0, \
                                       0, \
                                       FALSE, \
                                       0, \
                                       0}
                                               FALSE, \
                                               0, \
                                               0, \
                                               FALSE, \
                                               0, \
                                               0}
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef struct _DEVICE_STORAGE_RANGE_ATTRIBUTES {
    ULONGLONG LengthInBytes;
    union {
        ULONG AllFlags;
        struct {
            ULONG IsRangeBad : 1;
        };
    };
    ULONG Reserved;
} DEVICE_STORAGE_RANGE_ATTRIBUTES, *PDEVICE_STORAGE_RANGE_ATTRIBUTES;
#pragma warning(pop)
typedef struct _DEVICE_DSM_RANGE_ERROR_INFO {
    ULONG Version;
    ULONG Flags;
    ULONG TotalNumberOfRanges;
    ULONG NumberOfRangesReturned;
    DEVICE_STORAGE_RANGE_ATTRIBUTES Ranges[ANYSIZE_ARRAY];
} DEVICE_DSM_RANGE_ERROR_INFO, *PDEVICE_DSM_RANGE_ERROR_INFO,
  DEVICE_DSM_RANGE_ERROR_OUTPUT, *PDEVICE_DSM_RANGE_ERROR_OUTPUT;
                                               FALSE, \
                                               0, \
                                               0, \
                                               TRUE, \
                                               __alignof(DEVICE_DSM_RANGE_ERROR_OUTPUT), \
                                               sizeof(DEVICE_DSM_RANGE_ERROR_OUTPUT)}
                                         FALSE, \
                                         0, \
                                         0, \
                                         FALSE, \
                                         0, \
                                         0}
typedef struct _DEVICE_DSM_LOST_QUERY_PARAMETERS {
    ULONG Version;
    ULONGLONG Granularity;
} DEVICE_DSM_LOST_QUERY_PARAMETERS, *PDEVICE_DSM_LOST_QUERY_PARAMETERS;
typedef struct _DEVICE_DSM_LOST_QUERY_OUTPUT {
    ULONG Version;
    ULONG Size;
    ULONGLONG Alignment;
    ULONG NumberOfBits;
    ULONG BitMap[ANYSIZE_ARRAY];
} DEVICE_DSM_LOST_QUERY_OUTPUT, *PDEVICE_DSM_LOST_QUERY_OUTPUT;
                                       TRUE, \
                                       __alignof(DEVICE_DSM_LOST_QUERY_PARAMETERS), \
                                       sizeof(DEVICE_DSM_LOST_QUERY_PARAMETERS), \
                                       TRUE, \
                                       __alignof(DEVICE_DSM_LOST_QUERY_OUTPUT), \
                                       sizeof(DEVICE_DSM_LOST_QUERY_OUTPUT)}
typedef struct _DEVICE_DSM_FREE_SPACE_OUTPUT {
    ULONG Version;
    ULONGLONG FreeSpace;
} DEVICE_DSM_FREE_SPACE_OUTPUT, *PDEVICE_DSM_FREE_SPACE_OUTPUT;
                                          FALSE, \
                                          0, \
                                          0, \
                                          TRUE, \
                                          __alignof(DEVICE_DSM_FREE_SPACE_OUTPUT), \
                                          sizeof(DEVICE_DSM_FREE_SPACE_OUTPUT)}
typedef struct _DEVICE_DSM_CONVERSION_OUTPUT {
    ULONG Version;
    GUID Source;
} DEVICE_DSM_CONVERSION_OUTPUT, *PDEVICE_DSM_CONVERSION_OUTPUT;
                                             TRUE, \
                                             0, \
                                             0, \
                                             TRUE, \
                                             __alignof(DEVICE_DSM_CONVERSION_OUTPUT), \
                                             sizeof(DEVICE_DSM_CONVERSION_OUTPUT)}
FORCEINLINE
PVOID
DeviceDsmParameterBlock (
    _In_ PDEVICE_DSM_INPUT Input
    )
{
    return (PVOID)
           ((ULONG_PTR)Input +
                       Input->ParameterBlockOffset);
}
FORCEINLINE
PDEVICE_DSM_RANGE
DeviceDsmDataSetRanges (
    _In_ PDEVICE_DSM_INPUT Input
    )
{
    return (PDEVICE_DSM_RANGE)
           ((ULONG_PTR)Input +
                       Input->DataSetRangesOffset);
}
FORCEINLINE
ULONG
DeviceDsmNumberOfDataSetRanges (
    _In_ PDEVICE_DSM_INPUT Input
    )
{
    return Input->DataSetRangesLength /
           sizeof(DEVICE_DSM_RANGE);
}
FORCEINLINE
ULONG
DeviceDsmGetInputLength (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_ ULONG ParameterBlockLength,
    _In_ ULONG NumberOfDataSetRanges
    )
{
    ULONG Bytes = sizeof(DEVICE_DSM_INPUT);
    if (ParameterBlockLength != 0) {
        Bytes = DEVICE_DSM_ROUND_UP(Bytes, Definition->ParameterBlockAlignment);
        Bytes += ParameterBlockLength;
    }
    if (NumberOfDataSetRanges != 0) {
        Bytes = DEVICE_DSM_ROUND_UP(Bytes, __alignof(DEVICE_DSM_RANGE));
        Bytes += sizeof(DEVICE_DSM_RANGE) * NumberOfDataSetRanges;
    }
    return Bytes;
}
FORCEINLINE
ULONG
DeviceDsmGetNumberOfDataSetRanges (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_ ULONG InputLength,
    _In_ ULONG ParameterBlockLength
    )
{
    ULONG Bytes = sizeof(DEVICE_DSM_INPUT);
    if (ParameterBlockLength != 0) {
        Bytes = DEVICE_DSM_ROUND_UP(Bytes, Definition->ParameterBlockAlignment);
        Bytes += ParameterBlockLength;
    }
    Bytes = DEVICE_DSM_ROUND_UP(Bytes, __alignof(DEVICE_DSM_RANGE));
    Bytes = InputLength - Bytes;
    return Bytes / sizeof(DEVICE_DSM_RANGE);
}
FORCEINLINE
VOID
DeviceDsmInitializeInput (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _Out_writes_bytes_(InputLength) PDEVICE_DSM_INPUT Input,
    _In_ ULONG InputLength,
    _In_ ULONG Flags,
    _In_reads_bytes_opt_(ParameterBlockLength) PVOID Parameters,
    _In_ ULONG ParameterBlockLength
    )
{
    ULONG Bytes = sizeof(DEVICE_DSM_INPUT);
    RtlZeroMemory(Input, InputLength);
    Input->Size = Bytes;
    Input->Action = Definition->Action;
    Input->Flags = Flags;
    if (ParameterBlockLength == 0) {
        goto Cleanup;
    }
    Bytes = DEVICE_DSM_ROUND_UP(Bytes, Definition->ParameterBlockAlignment);
    Input->ParameterBlockOffset = Bytes;
    Input->ParameterBlockLength = ParameterBlockLength;
    if (!Parameters) {
        goto Cleanup;
    }
    RtlCopyMemory(DeviceDsmParameterBlock(Input),
                  Parameters,
                  Input->ParameterBlockLength);
Cleanup:
    return;
}
FORCEINLINE
BOOLEAN
DeviceDsmAddDataSetRange (
    _Inout_updates_bytes_(InputLength) PDEVICE_DSM_INPUT Input,
    _In_ ULONG InputLength,
    _In_ LONGLONG Offset,
    _In_ ULONGLONG Length
    )
{
    ULONG Bytes = 0;
    ULONG Index = 0;
    PDEVICE_DSM_RANGE Ranges = NULL;
    BOOLEAN Return = FALSE;
    if (Input->Flags & DEVICE_DSM_FLAG_ENTIRE_DATA_SET_RANGE) {
        goto Cleanup;
    }
    if (Input->DataSetRangesLength == 0) {
        if (Input->ParameterBlockLength == 0) {
            Bytes = sizeof(DEVICE_DSM_INPUT);
        } else {
            Bytes = Input->ParameterBlockOffset +
                    Input->ParameterBlockLength;
        }
        Bytes = DEVICE_DSM_ROUND_UP(Bytes, __alignof(DEVICE_DSM_RANGE));
    } else {
        Bytes = Input->DataSetRangesOffset +
                Input->DataSetRangesLength;
    }
    if ((InputLength - Bytes) < sizeof(DEVICE_DSM_RANGE)) {
        goto Cleanup;
    }
    if (Input->DataSetRangesOffset == 0) {
        Input->DataSetRangesOffset = Bytes;
    }
    Ranges = DeviceDsmDataSetRanges(Input);
    Index = DeviceDsmNumberOfDataSetRanges(Input);
    Ranges[Index].StartingOffset = Offset;
    Ranges[Index].LengthInBytes = Length;
    Input->DataSetRangesLength += sizeof(DEVICE_DSM_RANGE);
    Return = TRUE;
Cleanup:
    return Return;
}
FORCEINLINE
BOOLEAN
DeviceDsmValidateInput (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_reads_bytes_(InputLength) PDEVICE_DSM_INPUT Input,
    _In_ _Pre_satisfies_(InputLength >= sizeof(DEVICE_DSM_INPUT)) ULONG InputLength
    )
{
    ULONG Max = 0;
    ULONG Min = 0;
    BOOLEAN Valid = FALSE;
    if (Definition->Action != Input->Action) {
        goto Cleanup;
    }
    if (Definition->ParameterBlockLength != 0) {
        Min = sizeof(*Input);
        Max = InputLength;
        if (Input->ParameterBlockOffset < Min ||
            Input->ParameterBlockOffset > Max ||
            Input->ParameterBlockOffset % Definition->ParameterBlockAlignment) {
            goto Cleanup;
        }
        Min = Definition->ParameterBlockLength;
        Max = InputLength - Input->ParameterBlockOffset;
        if (Input->ParameterBlockLength < Min ||
            Input->ParameterBlockLength > Max) {
            goto Cleanup;
        }
    }
    if (!(Input->Flags & DEVICE_DSM_FLAG_ENTIRE_DATA_SET_RANGE)) {
        Min = sizeof(*Input);
        Max = InputLength;
        if (Input->DataSetRangesOffset < Min ||
            Input->DataSetRangesOffset > Max ||
            Input->DataSetRangesOffset % __alignof(DEVICE_DSM_RANGE)) {
            goto Cleanup;
        }
        Min = sizeof(DEVICE_DSM_RANGE);
        Max = InputLength - Input->DataSetRangesOffset;
        if (Input->DataSetRangesLength < Min ||
            Input->DataSetRangesLength > Max ||
            Input->DataSetRangesLength % Min) {
            goto Cleanup;
        }
        if (Definition->SingleRange &&
            Input->DataSetRangesLength != Min) {
            goto Cleanup;
        }
    } else {
        if (Input->DataSetRangesOffset != 0 ||
            Input->DataSetRangesLength != 0) {
            goto Cleanup;
        }
    }
    if (Input->ParameterBlockOffset < Input->DataSetRangesOffset &&
        Input->ParameterBlockOffset +
        Input->ParameterBlockLength > Input->DataSetRangesOffset) {
        goto Cleanup;
    }
    if (Input->DataSetRangesOffset < Input->ParameterBlockOffset &&
        Input->DataSetRangesOffset +
        Input->DataSetRangesLength > Input->ParameterBlockOffset) {
        goto Cleanup;
    }
    Valid = TRUE;
Cleanup:
    return Valid;
}
FORCEINLINE
PVOID
DeviceDsmOutputBlock (
    _In_ PDEVICE_DSM_OUTPUT Output
    )
{
    return (PVOID)
           ((ULONG_PTR)Output + Output->OutputBlockOffset);
}
FORCEINLINE
ULONG
DeviceDsmGetOutputLength (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_ ULONG OutputBlockLength
    )
{
    ULONG Bytes = 0;
    if (!Definition->HasOutput) {
        goto Cleanup;
    }
    Bytes = sizeof(DEVICE_DSM_OUTPUT);
    if (Definition->OutputBlockLength == 0) {
        goto Cleanup;
    }
    if (Definition->OutputBlockLength > OutputBlockLength) {
        OutputBlockLength = Definition->OutputBlockLength;
    }
    Bytes = DEVICE_DSM_ROUND_UP(Bytes, Definition->OutputBlockAlignment);
    Bytes += OutputBlockLength;
Cleanup:
    return Bytes;
}
FORCEINLINE
BOOLEAN
DeviceDsmValidateOutputLength (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_ ULONG OutputLength
    )
{
    ULONG Bytes = DeviceDsmGetOutputLength(Definition,
                                           0);
    return (OutputLength >= Bytes);
}
FORCEINLINE
ULONG
DeviceDsmGetOutputBlockLength (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_ ULONG OutputLength
    )
{
    ULONG Bytes = 0;
    if (Definition->OutputBlockLength == 0) {
        goto Cleanup;
    }
    Bytes = sizeof(DEVICE_DSM_OUTPUT);
    Bytes = DEVICE_DSM_ROUND_UP(Bytes, Definition->OutputBlockAlignment);
    Bytes = OutputLength - Bytes;
Cleanup:
    return Bytes;
}
FORCEINLINE
VOID
DeviceDsmInitializeOutput (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _Out_writes_bytes_(OutputLength) PDEVICE_DSM_OUTPUT Output,
    _In_ ULONG OutputLength,
    _In_ ULONG Flags
    )
{
    ULONG Bytes = sizeof(DEVICE_DSM_OUTPUT);
    RtlZeroMemory(Output, OutputLength);
    Output->Size = Bytes;
    Output->Action = Definition->Action;
    Output->Flags = Flags;
    if (Definition->OutputBlockLength != 0) {
        Bytes = DEVICE_DSM_ROUND_UP(Bytes, Definition->OutputBlockAlignment);
        Output->OutputBlockOffset = Bytes;
        Output->OutputBlockLength = OutputLength - Bytes;
    }
    return;
}
FORCEINLINE
BOOLEAN
DeviceDsmValidateOutput (
    _In_ PDEVICE_DSM_DEFINITION Definition,
    _In_reads_bytes_(OutputLength) PDEVICE_DSM_OUTPUT Output,
    _In_ _Pre_satisfies_(OutputLength >= sizeof(DEVICE_DSM_OUTPUT)) ULONG OutputLength
    )
{
    ULONG Max = 0;
    ULONG Min = 0;
    BOOLEAN Valid = FALSE;
    if (Definition->Action != Output->Action) {
        goto Cleanup;
    }
    if (!Definition->HasOutput) {
        goto Cleanup;
    }
    if (Definition->OutputBlockLength != 0) {
        Min = sizeof(*Output);
        Max = OutputLength;
        if (Output->OutputBlockOffset < Min ||
            Output->OutputBlockOffset > Max ||
            Output->OutputBlockOffset % Definition->OutputBlockAlignment) {
            goto Cleanup;
        }
        Min = Definition->OutputBlockLength;
        Max = OutputLength - Output->OutputBlockOffset;
        if (Output->OutputBlockLength < Min ||
            Output->OutputBlockLength > Max) {
            goto Cleanup;
        }
    } else {
        if (Output->OutputBlockOffset != 0 ||
            Output->OutputBlockLength != 0) {
            goto Cleanup;
        }
    }
    Valid = TRUE;
Cleanup:
    return Valid;
}
typedef struct _STORAGE_GET_BC_PROPERTIES_OUTPUT {
    ULONG MaximumRequestsPerPeriod;
    ULONG MinimumPeriod;
    ULONGLONG MaximumRequestSize;
    ULONG EstimatedTimePerRequest;
    ULONG NumOutStandingRequests;
    ULONGLONG RequestSize;
} STORAGE_GET_BC_PROPERTIES_OUTPUT, *PSTORAGE_GET_BC_PROPERTIES_OUTPUT;
typedef struct _STORAGE_ALLOCATE_BC_STREAM_INPUT {
    ULONG Version;
    ULONG RequestsPerPeriod;
    ULONG Period;
    BOOLEAN RetryFailures;
    BOOLEAN Discardable;
    BOOLEAN Reserved1[2];
    ULONG AccessType;
    ULONG AccessMode;
} STORAGE_ALLOCATE_BC_STREAM_INPUT, *PSTORAGE_ALLOCATE_BC_STREAM_INPUT;
typedef struct _STORAGE_ALLOCATE_BC_STREAM_OUTPUT {
    ULONGLONG RequestSize;
    ULONG NumOutStandingRequests;
} STORAGE_ALLOCATE_BC_STREAM_OUTPUT, *PSTORAGE_ALLOCATE_BC_STREAM_OUTPUT;
typedef struct _STORAGE_PRIORITY_HINT_SUPPORT {
    ULONG SupportFlags;
} STORAGE_PRIORITY_HINT_SUPPORT, *PSTORAGE_PRIORITY_HINT_SUPPORT;
typedef enum _STORAGE_DIAGNOSTIC_LEVEL {
    StorageDiagnosticLevelDefault = 0,
    StorageDiagnosticLevelMax
} STORAGE_DIAGNOSTIC_LEVEL, *PSTORAGE_DIAGNOSTIC_LEVEL;
typedef enum _STORAGE_DIAGNOSTIC_TARGET_TYPE {
    StorageDiagnosticTargetTypeUndefined = 0,
    StorageDiagnosticTargetTypePort,
    StorageDiagnosticTargetTypeMiniport,
    StorageDiagnosticTargetTypeHbaFirmware,
    StorageDiagnosticTargetTypeMax
} STORAGE_DIAGNOSTIC_TARGET_TYPE, *PSTORAGE_DIAGNOSTIC_TARGET_TYPE;
typedef struct _STORAGE_DIAGNOSTIC_REQUEST {
    ULONG Version;
    ULONG Size;
    ULONG Reserved;
    STORAGE_DIAGNOSTIC_TARGET_TYPE TargetType;
    STORAGE_DIAGNOSTIC_LEVEL Level;
} STORAGE_DIAGNOSTIC_REQUEST, *PSTORAGE_DIAGNOSTIC_REQUEST;
typedef struct _STORAGE_DIAGNOSTIC_DATA {
    ULONG Version;
    ULONG Size;
    GUID ProviderId;
    ULONG BufferSize;
    ULONG Reserved;
    _Field_size_(BufferSize) UCHAR DiagnosticDataBuffer[ANYSIZE_ARRAY];
} STORAGE_DIAGNOSTIC_DATA, *PSTORAGE_DIAGNOSTIC_DATA;
typedef struct _PHYSICAL_ELEMENT_STATUS_REQUEST {
    ULONG Version;
    ULONG Size;
    ULONG StartingElement;
    UCHAR Filter;
    UCHAR ReportType;
    UCHAR Reserved[2];
} PHYSICAL_ELEMENT_STATUS_REQUEST, *PPHYSICAL_ELEMENT_STATUS_REQUEST;
typedef struct _PHYSICAL_ELEMENT_STATUS_DESCRIPTOR {
    ULONG Version;
    ULONG Size;
    ULONG ElementIdentifier;
    UCHAR PhysicalElementType;
    UCHAR PhysicalElementHealth;
    UCHAR Reserved1[2];
    ULONGLONG AssociatedCapacity;
    ULONG Reserved2[4];
} PHYSICAL_ELEMENT_STATUS_DESCRIPTOR, *PPHYSICAL_ELEMENT_STATUS_DESCRIPTOR;
typedef struct _PHYSICAL_ELEMENT_STATUS {
    ULONG Version;
    ULONG Size;
    ULONG DescriptorCount;
    ULONG ReturnedDescriptorCount;
    ULONG ElementIdentifierBeingDepoped;
    ULONG Reserved;
    PHYSICAL_ELEMENT_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} PHYSICAL_ELEMENT_STATUS, *PPHYSICAL_ELEMENT_STATUS;
typedef struct _REMOVE_ELEMENT_AND_TRUNCATE_REQUEST {
    ULONG Version;
    ULONG Size;
    ULONGLONG RequestCapacity;
    ULONG ElementIdentifier;
    ULONG Reserved;
} REMOVE_ELEMENT_AND_TRUNCATE_REQUEST, *PREMOVE_ELEMENT_AND_TRUNCATE_REQUEST;
#pragma warning(push)
#pragma warning(disable:4200)
typedef _Struct_size_bytes_(Size) struct _STORAGE_READ_CAPACITY {
    ULONG Version;
    ULONG Size;
    ULONG BlockLength;
    LARGE_INTEGER NumberOfBlocks;
    LARGE_INTEGER DiskLength;
} STORAGE_READ_CAPACITY, *PSTORAGE_READ_CAPACITY;
#pragma warning(pop)
typedef enum __WRAPPED__ _WRITE_CACHE_TYPE {
    WriteCacheTypeUnknown,
    WriteCacheTypeNone,
    WriteCacheTypeWriteBack,
    WriteCacheTypeWriteThrough
} WRITE_CACHE_TYPE;
typedef enum __WRAPPED__ _WRITE_CACHE_ENABLE {
    WriteCacheEnableUnknown,
    WriteCacheDisabled,
    WriteCacheEnabled
} WRITE_CACHE_ENABLE;
typedef enum __WRAPPED__ _WRITE_CACHE_CHANGE {
    WriteCacheChangeUnknown,
    WriteCacheNotChangeable,
    WriteCacheChangeable
} WRITE_CACHE_CHANGE;
typedef enum __WRAPPED__ _WRITE_THROUGH {
    WriteThroughUnknown,
    WriteThroughNotSupported,
    WriteThroughSupported
} WRITE_THROUGH;
typedef _Struct_size_bytes_(Size) struct __WRAPPED__ _STORAGE_WRITE_CACHE_PROPERTY {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    WRITE_CACHE_TYPE WriteCacheType;
    __WRAPPED__
    WRITE_CACHE_ENABLE WriteCacheEnabled;
    __WRAPPED__
    WRITE_CACHE_CHANGE WriteCacheChangeable;
    __WRAPPED__
    WRITE_THROUGH WriteThroughSupported;
    __WRAPPED__
    BOOLEAN FlushCacheSupported;
    __WRAPPED__
    BOOLEAN UserDefinedPowerProtection;
    __WRAPPED__
    BOOLEAN NVCacheEnabled;
} STORAGE_WRITE_CACHE_PROPERTY, *PSTORAGE_WRITE_CACHE_PROPERTY;
#pragma warning(push)
#pragma warning(disable:4200)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(pop)
#pragma warning(push)
typedef enum _DEVICEDUMP_COLLECTION_TYPE {
    TCCollectionBugCheck = 1,
    TCCollectionApplicationRequested,
    TCCollectionDeviceRequested
} DEVICEDUMP_COLLECTION_TYPEIDE_NOTIFICATION_TYPE, *PDEVICEDUMP_COLLECTION_TYPE;
#include <pshpack1.h>
typedef struct _DEVICEDUMP_SUBSECTION_POINTER {
        ULONG dwSize;
        ULONG dwFlags;
        ULONG dwOffset;
} DEVICEDUMP_SUBSECTION_POINTER,*PDEVICEDUMP_SUBSECTION_POINTER;
typedef struct _DEVICEDUMP_STRUCTURE_VERSION {
        ULONG dwSignature;
        ULONG dwVersion;
        ULONG dwSize;
} DEVICEDUMP_STRUCTURE_VERSION, *PDEVICEDUMP_STRUCTURE_VERSION;
typedef struct _DEVICEDUMP_SECTION_HEADER {
        GUID guidDeviceDataId;
        UCHAR sOrganizationID[16];
        ULONG dwFirmwareRevision;
        UCHAR sModelNumber[DEVICEDUMP_MAX_IDSTRING];
        UCHAR szDeviceManufacturingID[DEVICEDUMP_MAX_IDSTRING];
        ULONG dwFlags;
        ULONG bRestrictedPrivateDataVersion;
        ULONG dwFirmwareIssueId;
        UCHAR szIssueDescriptionString[MAX_FW_BUCKET_ID_LENGTH];
} DEVICEDUMP_SECTION_HEADER, *PDEVICEDUMP_SECTION_HEADER;
typedef struct _GP_LOG_PAGE_DESCRIPTOR {
        USHORT LogAddress;
        USHORT LogSectors;
} GP_LOG_PAGE_DESCRIPTOR,*PGP_LOG_PAGE_DESCRIPTOR;
typedef struct _DEVICEDUMP_PUBLIC_SUBSECTION {
        ULONG dwFlags;
        GP_LOG_PAGE_DESCRIPTOR GPLogTable[TC_PUBLIC_DEVICEDUMP_CONTENT_GPLOG_MAX];
        CHAR szDescription[TC_DEVICEDUMP_SUBSECTION_DESC_LENGTH];
        UCHAR bData[ANYSIZE_ARRAY];
} DEVICEDUMP_PUBLIC_SUBSECTION, *PDEVICEDUMP_PUBLIC_SUBSECTION;
typedef struct _DEVICEDUMP_RESTRICTED_SUBSECTION {
        UCHAR bData[ANYSIZE_ARRAY];
} DEVICEDUMP_RESTRICTED_SUBSECTION, *PDEVICEDUMP_RESTRICTED_SUBSECTION;
typedef struct _DEVICEDUMP_PRIVATE_SUBSECTION {
        ULONG dwFlags;
        GP_LOG_PAGE_DESCRIPTOR GPLogId;
        UCHAR bData[ANYSIZE_ARRAY];
} DEVICEDUMP_PRIVATE_SUBSECTION, *PDEVICEDUMP_PRIVATE_SUBSECTION;
typedef _Struct_size_bytes_(Descriptor.dwSize) struct _DEVICEDUMP_STORAGEDEVICE_DATA {
        DEVICEDUMP_STRUCTURE_VERSION Descriptor;
        DEVICEDUMP_SECTION_HEADER SectionHeader;
        ULONG dwBufferSize;
        ULONG dwReasonForCollection;
        DEVICEDUMP_SUBSECTION_POINTER PublicData;
        DEVICEDUMP_SUBSECTION_POINTER RestrictedData;
        DEVICEDUMP_SUBSECTION_POINTER PrivateData;
} DEVICEDUMP_STORAGEDEVICE_DATA, *PDEVICEDUMP_STORAGEDEVICE_DATA;
typedef struct _DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD {
        UCHAR Cdb[CDB_SIZE];
        UCHAR Command[TELEMETRY_COMMAND_SIZE];
        ULONGLONG StartTime;
        ULONGLONG EndTime;
        ULONG OperationStatus;
        ULONG OperationError;
        union {
         struct {
                ULONG dwReserved;
                } ExternalStack;
         struct {
                ULONG dwAtaPortSpecific;
         } AtaPort;
         struct {
                ULONG SrbTag ;
         } StorPort;
        } StackSpecific;
} DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD,*PDEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD;
typedef _Struct_size_bytes_(Descriptor.dwSize) struct _DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP {
        DEVICEDUMP_STRUCTURE_VERSION Descriptor;
        ULONG dwReasonForCollection;
        UCHAR cDriverName[16];
        ULONG uiNumRecords;
        DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD RecordArray[ANYSIZE_ARRAY];
} DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP,*PDEVICEDUMP_STORAGESTACK_PUBLIC_DUMP;
#include <poppack.h>
#pragma warning(push)
#pragma warning(disable:4214)
typedef struct _STORAGE_IDLE_POWER {
    ULONG Version;
    ULONG Size;
    ULONG WakeCapableHint : 1;
    ULONG D3ColdSupported : 1;
    ULONG Reserved : 30;
    ULONG D3IdleTimeout;
} STORAGE_IDLE_POWER, *PSTORAGE_IDLE_POWER;
#pragma warning(pop)
typedef enum _STORAGE_POWERUP_REASON_TYPE {
  StoragePowerupUnknown = 0,
  StoragePowerupIO,
  StoragePowerupDeviceAttention
} STORAGE_POWERUP_REASON_TYPE, *PSTORAGE_POWERUP_REASON_TYPE;
typedef struct _STORAGE_IDLE_POWERUP_REASON {
    ULONG Version;
    ULONG Size;
    STORAGE_POWERUP_REASON_TYPE PowerupReason;
} STORAGE_IDLE_POWERUP_REASON, *PSTORAGE_IDLE_POWERUP_REASON;
typedef enum _STORAGE_DEVICE_POWER_CAP_UNITS {
    StorageDevicePowerCapUnitsPercent,
    StorageDevicePowerCapUnitsMilliwatts
} STORAGE_DEVICE_POWER_CAP_UNITS, *PSTORAGE_DEVICE_POWER_CAP_UNITS;
typedef struct _STORAGE_DEVICE_POWER_CAP {
    ULONG Version;
    ULONG Size;
    STORAGE_DEVICE_POWER_CAP_UNITS Units;
    ULONGLONG MaxPower;
} STORAGE_DEVICE_POWER_CAP, *PSTORAGE_DEVICE_POWER_CAP;
#pragma pack(push)
#pragma pack(1)
typedef struct _STORAGE_RPMB_DATA_FRAME {
    UCHAR Stuff[196];
    UCHAR KeyOrMAC[32];
    UCHAR Data[256];
    UCHAR Nonce[16];
    UCHAR WriteCounter[4];
    UCHAR Address[2];
    UCHAR BlockCount[2];
    UCHAR OperationResult[2];
    UCHAR RequestOrResponseType[2];
} STORAGE_RPMB_DATA_FRAME, *PSTORAGE_RPMB_DATA_FRAME;
typedef enum _STORAGE_RPMB_COMMAND_TYPE {
    StorRpmbProgramAuthKey = 0x00000001,
    StorRpmbQueryWriteCounter = 0x00000002,
    StorRpmbAuthenticatedWrite = 0x00000003,
    StorRpmbAuthenticatedRead = 0x00000004,
    StorRpmbReadResultRequest = 0x00000005,
    StorRpmbAuthenticatedDeviceConfigWrite = 0x00000006,
    StorRpmbAuthenticatedDeviceConfigRead = 0x00000007,
} STORAGE_RPMB_COMMAND_TYPE, *PSTORAGE_RPMB_COMMAND_TYPE;
#pragma pack(pop)
typedef struct _STORAGE_EVENT_NOTIFICATION {
    ULONG Version;
    ULONG Size;
    ULONGLONG Events;
} STORAGE_EVENT_NOTIFICATION, *PSTORAGE_EVENT_NOTIFICATION;
#pragma warning(pop)
typedef enum _STORAGE_COUNTER_TYPE {
    StorageCounterTypeUnknown = 0,
    StorageCounterTypeTemperatureCelsius,
    StorageCounterTypeTemperatureCelsiusMax,
    StorageCounterTypeReadErrorsTotal,
    StorageCounterTypeReadErrorsCorrected,
    StorageCounterTypeReadErrorsUncorrected,
    StorageCounterTypeWriteErrorsTotal,
    StorageCounterTypeWriteErrorsCorrected,
    StorageCounterTypeWriteErrorsUncorrected,
    StorageCounterTypeManufactureDate,
    StorageCounterTypeStartStopCycleCount,
    StorageCounterTypeStartStopCycleCountMax,
    StorageCounterTypeLoadUnloadCycleCount,
    StorageCounterTypeLoadUnloadCycleCountMax,
    StorageCounterTypeWearPercentage,
    StorageCounterTypeWearPercentageWarning,
    StorageCounterTypeWearPercentageMax,
    StorageCounterTypePowerOnHours,
    StorageCounterTypeReadLatency100NSMax,
    StorageCounterTypeWriteLatency100NSMax,
    StorageCounterTypeFlushLatency100NSMax,
    StorageCounterTypeMax
} STORAGE_COUNTER_TYPE, *PSTORAGE_COUNTER_TYPE;
typedef struct _STORAGE_COUNTER {
    STORAGE_COUNTER_TYPE Type;
    union {
        struct {
            ULONG Week;
            ULONG Year;
        } ManufactureDate;
        ULONGLONG AsUlonglong;
    } Value;
} STORAGE_COUNTER, *PSTORAGE_COUNTER;
typedef _Struct_size_bytes_(Size) struct _STORAGE_COUNTERS {
    ULONG Version;
    ULONG Size;
    ULONG NumberOfCounters;
    _Field_size_(NumberOfCounters) STORAGE_COUNTER Counters[ANYSIZE_ARRAY];
} STORAGE_COUNTERS, *PSTORAGE_COUNTERS;
typedef struct _STORAGE_HW_FIRMWARE_INFO_QUERY {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG Reserved;
} STORAGE_HW_FIRMWARE_INFO_QUERY, *PSTORAGE_HW_FIRMWARE_INFO_QUERY;
#pragma warning(push)
#pragma warning(disable:4214)
typedef struct __WRAPPED__ _STORAGE_HW_FIRMWARE_SLOT_INFO {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    UCHAR SlotNumber;
    __WRAPPED__
    UCHAR ReadOnly : 1;
    __WRAPPED__
    UCHAR Reserved0 : 7;
    __WRAPPED__
    UCHAR Reserved1[6];
    __WRAPPED__
    UCHAR Revision[STORAGE_HW_FIRMWARE_REVISION_LENGTH];
} STORAGE_HW_FIRMWARE_SLOT_INFO, *PSTORAGE_HW_FIRMWARE_SLOT_INFO;
typedef struct __WRAPPED__ _STORAGE_HW_FIRMWARE_INFO {
    __WRAPPED__
    ULONG Version;
    __WRAPPED__
    ULONG Size;
    __WRAPPED__
    UCHAR SupportUpgrade : 1;
    __WRAPPED__
    UCHAR Reserved0 : 7;
    __WRAPPED__
    UCHAR SlotCount;
    __WRAPPED__
    UCHAR ActiveSlot;
    __WRAPPED__
    UCHAR PendingActivateSlot;
    __WRAPPED__
    BOOLEAN FirmwareShared;
    __WRAPPED__
    UCHAR Reserved[3];
    __WRAPPED__
    ULONG ImagePayloadAlignment;
    __WRAPPED__
    ULONG ImagePayloadMaxSize;
    __WRAPPED__
    STORAGE_HW_FIRMWARE_SLOT_INFO Slot[ANYSIZE_ARRAY];
} STORAGE_HW_FIRMWARE_INFO, *PSTORAGE_HW_FIRMWARE_INFO;
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct _STORAGE_HW_FIRMWARE_DOWNLOAD {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    UCHAR Slot;
    UCHAR Reserved[3];
    ULONGLONG Offset;
    ULONGLONG BufferSize;
    UCHAR ImageBuffer[ANYSIZE_ARRAY];
} STORAGE_HW_FIRMWARE_DOWNLOAD, *PSTORAGE_HW_FIRMWARE_DOWNLOAD;
typedef struct _STORAGE_HW_FIRMWARE_DOWNLOAD_V2 {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    UCHAR Slot;
    UCHAR Reserved[3];
    ULONGLONG Offset;
    ULONGLONG BufferSize;
    ULONG ImageSize;
    ULONG Reserved2;
    UCHAR ImageBuffer[ANYSIZE_ARRAY];
} STORAGE_HW_FIRMWARE_DOWNLOAD_V2, *PSTORAGE_HW_FIRMWARE_DOWNLOAD_V2;
#pragma warning(pop)
typedef struct _STORAGE_HW_FIRMWARE_ACTIVATE {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    UCHAR Slot;
    UCHAR Reserved0[3];
} STORAGE_HW_FIRMWARE_ACTIVATE, *PSTORAGE_HW_FIRMWARE_ACTIVATE;
typedef struct _STORAGE_PROTOCOL_COMMAND {
    ULONG Version;
    ULONG Length;
    STORAGE_PROTOCOL_TYPE ProtocolType;
    ULONG Flags;
    ULONG ReturnStatus;
    ULONG ErrorCode;
    ULONG CommandLength;
    ULONG ErrorInfoLength;
    ULONG DataToDeviceTransferLength;
    ULONG DataFromDeviceTransferLength;
    ULONG TimeOutValue;
    ULONG ErrorInfoOffset;
    ULONG DataToDeviceBufferOffset;
    ULONG DataFromDeviceBufferOffset;
    ULONG CommandSpecific;
    ULONG Reserved0;
    ULONG FixedProtocolReturnData;
    ULONG Reserved1[3];
    _Field_size_bytes_full_(CommandLength) UCHAR Command[ANYSIZE_ARRAY];
} STORAGE_PROTOCOL_COMMAND, *PSTORAGE_PROTOCOL_COMMAND;
typedef enum _STORAGE_ATTRIBUTE_MGMT_ACTION {
    StorAttributeMgmt_ClearAttribute = 0,
    StorAttributeMgmt_SetAttribute = 1,
    StorAttributeMgmt_ResetAttribute = 2
} STORAGE_ATTRIBUTE_MGMT_ACTION, *PSTORAGE_ATTRIBUTE_MGMT_ACTION;
typedef struct _STORAGE_ATTRIBUTE_MGMT {
    ULONG Version;
    ULONG Size;
    STORAGE_ATTRIBUTE_MGMT_ACTION Action;
    ULONG Attribute;
} STORAGE_ATTRIBUTE_MGMT, *PSTORAGE_ATTRIBUTE_MGMT;
#endif
#pragma endregion
