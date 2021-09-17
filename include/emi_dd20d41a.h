       
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(GUID_DEVICE_ENERGY_METER,
0x45bd8344, 0x7ed6, 0x49cf, 0xa4, 0x40, 0xc2, 0x76, 0xc9, 0x33, 0xb0, 0x53);
typedef enum
{
    EmiMeasurementUnitPicowattHours
} EMI_MEASUREMENT_UNIT;
typedef struct
{
    USHORT EmiVersion;
} EMI_VERSION;
typedef struct
{
    ULONG MetadataSize;
} EMI_METADATA_SIZE;
typedef struct
{
    ULONGLONG AbsoluteEnergy;
    ULONGLONG AbsoluteTime;
} EMI_CHANNEL_MEASUREMENT_DATA;
typedef struct
{
    EMI_MEASUREMENT_UNIT MeasurementUnit;
    WCHAR HardwareOEM[EMI_NAME_MAX];
    WCHAR HardwareModel[EMI_NAME_MAX];
    USHORT HardwareRevision;
    USHORT MeteredHardwareNameSize;
    WCHAR MeteredHardwareName[ANYSIZE_ARRAY];
} EMI_METADATA_V1;
typedef EMI_CHANNEL_MEASUREMENT_DATA EMI_MEASUREMENT_DATA_V1;
typedef EMI_METADATA_V1 EMI_METADATA;
typedef EMI_MEASUREMENT_DATA_V1 EMI_MEASUREMENT_DATA;
typedef struct
{
    EMI_MEASUREMENT_UNIT MeasurementUnit;
    USHORT ChannelNameSize;
    WCHAR ChannelName[ANYSIZE_ARRAY];
} EMI_CHANNEL_V2;
typedef struct
{
    WCHAR HardwareOEM[EMI_NAME_MAX];
    WCHAR HardwareModel[EMI_NAME_MAX];
    USHORT HardwareRevision;
    USHORT ChannelCount;
    EMI_CHANNEL_V2 Channels[ANYSIZE_ARRAY];
} EMI_METADATA_V2;
typedef struct
{
    EMI_CHANNEL_MEASUREMENT_DATA ChannelData[ANYSIZE_ARRAY];
} EMI_MEASUREMENT_DATA_V2;
    (FIELD_OFFSET(EMI_CHANNEL_V2, ChannelName) + (_ChannelNameSize))
    ((EMI_CHANNEL_V2*)((PUCHAR)(_Channel) + \
        EMI_CHANNEL_V2_LENGTH((_Channel)->ChannelNameSize)))
#endif
#pragma endregion
