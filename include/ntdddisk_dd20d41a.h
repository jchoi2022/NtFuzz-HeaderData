#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <diskguid.h>
typedef enum _DISK_CACHE_STATE {
    DiskCacheNormal,
    DiskCacheWriteThroughNotSupported,
    DiskCacheModifyUnsuccessful
} DISK_CACHE_STATE, *PDISK_CACHE_STATE;
typedef struct _DISK_CACHE_SETTING {
    ULONG Version;
    DISK_CACHE_STATE State;
    BOOLEAN IsPowerProtected;
} DISK_CACHE_SETTING, *PDISK_CACHE_SETTING;
typedef struct _DISK_COPY_DATA_PARAMETERS {
    LARGE_INTEGER SourceOffset;
    LARGE_INTEGER DestinationOffset;
    LARGE_INTEGER CopyLength;
    ULONGLONG Reserved;
} DISK_COPY_DATA_PARAMETERS, *PDISK_COPY_DATA_PARAMETERS;
#include <ntddstor.h>
    ((PartitionType) == PARTITION_BSP) || \
    ((PartitionType) == PARTITION_DPP) || \
    ((PartitionType) == PARTITION_FAT_12) || \
    ((PartitionType) == PARTITION_FAT_16) || \
    ((PartitionType) == PARTITION_FAT32) || \
    ((PartitionType) == PARTITION_FAT32_XINT13) || \
    ((PartitionType) == PARTITION_HUGE) || \
    ((PartitionType) == PARTITION_IFS) || \
    ((PartitionType) == PARTITION_MAIN_OS) || \
    ((PartitionType) == PARTITION_MSFT_RECOVERY) || \
    ((PartitionType) == PARTIITON_OS_DATA) || \
    ((PartitionType) == PARTITION_PRE_INSTALLED) || \
    ((PartitionType) == PARTITION_SYSTEM) || \
    ((PartitionType) == PARTITION_WINDOWS_SYSTEM) || \
    ((PartitionType) == PARTITION_XINT13) )
    ((PartitionType == PARTITION_EXTENDED) || (PartitionType == PARTITION_XINT13_EXTENDED))
    ((PartitionType & PARTITION_NTFT) && (((PartitionType & ~0xC0) == PARTITION_HUGE) || \
                                          ((PartitionType & ~0xC0) == PARTITION_IFS) || \
                                          ((PartitionType & ~0xC0) == PARTITION_FAT32) || \
                                          ((PartitionType & ~0xC0) == PARTITION_FAT32_XINT13)))
typedef enum __WRAPPED__ _MEDIA_TYPE {
    Unknown,
    F5_1Pt2_512,
    F3_1Pt44_512,
    F3_2Pt88_512,
    F3_20Pt8_512,
    F3_720_512,
    F5_360_512,
    F5_320_512,
    F5_320_1024,
    F5_180_512,
    F5_160_512,
    RemovableMedia,
    FixedMedia,
    F3_120M_512,
    F3_640_512,
    F5_640_512,
    F5_720_512,
    F3_1Pt2_512,
    F3_1Pt23_1024,
    F5_1Pt23_1024,
    F3_128Mb_512,
    F3_230Mb_512,
    F8_256_128,
    F3_200Mb_512,
    F3_240M_512,
    F3_32M_512
} MEDIA_TYPE, *PMEDIA_TYPE;
typedef struct _FORMAT_PARAMETERS {
   MEDIA_TYPE MediaType;
   ULONG StartCylinderNumber;
   ULONG EndCylinderNumber;
   ULONG StartHeadNumber;
   ULONG EndHeadNumber;
} FORMAT_PARAMETERS, *PFORMAT_PARAMETERS;
typedef USHORT BAD_TRACK_NUMBER;
typedef USHORT *PBAD_TRACK_NUMBER;
typedef struct _FORMAT_EX_PARAMETERS {
   MEDIA_TYPE MediaType;
   ULONG StartCylinderNumber;
   ULONG EndCylinderNumber;
   ULONG StartHeadNumber;
   ULONG EndHeadNumber;
   USHORT FormatGapLength;
   USHORT SectorsPerTrack;
   USHORT SectorNumber[1];
} FORMAT_EX_PARAMETERS, *PFORMAT_EX_PARAMETERS;
typedef struct __WRAPPED__ _DISK_GEOMETRY {
    __WRAPPED__
    LARGE_INTEGER Cylinders;
    __WRAPPED__
    MEDIA_TYPE MediaType;
    __WRAPPED__
    ULONG TracksPerCylinder;
    __WRAPPED__
    ULONG SectorsPerTrack;
    __WRAPPED__
    ULONG BytesPerSector;
} DISK_GEOMETRY, *PDISK_GEOMETRY;
typedef struct _PARTITION_INFORMATION {
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER PartitionLength;
    ULONG HiddenSectors;
    ULONG PartitionNumber;
    UCHAR PartitionType;
    BOOLEAN BootIndicator;
    BOOLEAN RecognizedPartition;
    BOOLEAN RewritePartition;
} PARTITION_INFORMATION, *PPARTITION_INFORMATION;
typedef struct _SET_PARTITION_INFORMATION {
    UCHAR PartitionType;
} SET_PARTITION_INFORMATION, *PSET_PARTITION_INFORMATION;
typedef struct _DRIVE_LAYOUT_INFORMATION {
    ULONG PartitionCount;
    ULONG Signature;
    PARTITION_INFORMATION PartitionEntry[1];
} DRIVE_LAYOUT_INFORMATION, *PDRIVE_LAYOUT_INFORMATION;
typedef struct _VERIFY_INFORMATION {
    LARGE_INTEGER StartingOffset;
    ULONG Length;
} VERIFY_INFORMATION, *PVERIFY_INFORMATION;
typedef struct _REASSIGN_BLOCKS {
    USHORT Reserved;
    USHORT Count;
    ULONG BlockNumber[1];
} REASSIGN_BLOCKS, *PREASSIGN_BLOCKS;
#include <pshpack1.h>
typedef struct _REASSIGN_BLOCKS_EX {
    USHORT Reserved;
    USHORT Count;
    LARGE_INTEGER BlockNumber[1];
} REASSIGN_BLOCKS_EX, *PREASSIGN_BLOCKS_EX;
#include <poppack.h>
typedef enum __WRAPPED__ _PARTITION_STYLE {
    PARTITION_STYLE_MBR,
    PARTITION_STYLE_GPT,
    PARTITION_STYLE_RAW
} PARTITION_STYLE;
typedef struct __WRAPPED__ _PARTITION_INFORMATION_GPT {
    __WRAPPED__
    GUID PartitionType;
    __WRAPPED__
    GUID PartitionId;
    __WRAPPED__
    ULONG64 Attributes;
    __WRAPPED__
    WCHAR Name [36];
} PARTITION_INFORMATION_GPT, *PPARTITION_INFORMATION_GPT;
typedef struct __WRAPPED__ _PARTITION_INFORMATION_MBR {
    __WRAPPED__
    UCHAR PartitionType;
    __WRAPPED__
    BOOLEAN BootIndicator;
    __WRAPPED__
    BOOLEAN RecognizedPartition;
    __WRAPPED__
    ULONG HiddenSectors;
    __WRAPPED__
    GUID PartitionId;
} PARTITION_INFORMATION_MBR, *PPARTITION_INFORMATION_MBR;
typedef SET_PARTITION_INFORMATION SET_PARTITION_INFORMATION_MBR;
typedef PARTITION_INFORMATION_GPT SET_PARTITION_INFORMATION_GPT;
typedef struct _SET_PARTITION_INFORMATION_EX {
    PARTITION_STYLE PartitionStyle;
    union {
        SET_PARTITION_INFORMATION_MBR Mbr;
        SET_PARTITION_INFORMATION_GPT Gpt;
    } DUMMYUNIONNAME;
} SET_PARTITION_INFORMATION_EX, *PSET_PARTITION_INFORMATION_EX;
typedef struct _CREATE_DISK_GPT {
    GUID DiskId;
    ULONG MaxPartitionCount;
} CREATE_DISK_GPT, *PCREATE_DISK_GPT;
typedef struct _CREATE_DISK_MBR {
    ULONG Signature;
} CREATE_DISK_MBR, *PCREATE_DISK_MBR;
typedef struct _CREATE_DISK {
    PARTITION_STYLE PartitionStyle;
    union {
        CREATE_DISK_MBR Mbr;
        CREATE_DISK_GPT Gpt;
    } DUMMYUNIONNAME;
} CREATE_DISK, *PCREATE_DISK;
typedef struct _GET_LENGTH_INFORMATION {
    LARGE_INTEGER Length;
} GET_LENGTH_INFORMATION, *PGET_LENGTH_INFORMATION;
typedef struct __WRAPPED__ _PARTITION_INFORMATION_EX {
    __WRAPPED__
    PARTITION_STYLE PartitionStyle;
    __WRAPPED__
    LARGE_INTEGER StartingOffset;
    __WRAPPED__
    LARGE_INTEGER PartitionLength;
    __WRAPPED__
    ULONG PartitionNumber;
    __WRAPPED__
    BOOLEAN RewritePartition;
    __WRAPPED__
    BOOLEAN IsServicePartition;
    union {
        __WRAPPED__
        PARTITION_INFORMATION_MBR Mbr;
        __WRAPPED__
        PARTITION_INFORMATION_GPT Gpt;
    } DUMMYUNIONNAME;
} PARTITION_INFORMATION_EX, *PPARTITION_INFORMATION_EX;
typedef struct __WRAPPED__ _DRIVE_LAYOUT_INFORMATION_GPT {
    __WRAPPED__
    GUID DiskId;
    __WRAPPED__
    LARGE_INTEGER StartingUsableOffset;
    __WRAPPED__
    LARGE_INTEGER UsableLength;
    __WRAPPED__
    ULONG MaxPartitionCount;
} DRIVE_LAYOUT_INFORMATION_GPT, *PDRIVE_LAYOUT_INFORMATION_GPT;
typedef struct __WRAPPED__ _DRIVE_LAYOUT_INFORMATION_MBR {
    __WRAPPED__
    ULONG Signature;
    ULONG CheckSum;
} DRIVE_LAYOUT_INFORMATION_MBR, *PDRIVE_LAYOUT_INFORMATION_MBR;
typedef struct __WRAPPED__ _DRIVE_LAYOUT_INFORMATION_EX {
    __WRAPPED__
    ULONG PartitionStyle;
    __WRAPPED__
    ULONG PartitionCount;
    union {
        __WRAPPED__
        DRIVE_LAYOUT_INFORMATION_MBR Mbr;
        __WRAPPED__
        DRIVE_LAYOUT_INFORMATION_GPT Gpt;
    } DUMMYUNIONNAME;
    __WRAPPED__
    PARTITION_INFORMATION_EX PartitionEntry[1];
} DRIVE_LAYOUT_INFORMATION_EX, *PDRIVE_LAYOUT_INFORMATION_EX;
typedef enum _DETECTION_TYPE {
        DetectNone,
        DetectInt13,
        DetectExInt13
} DETECTION_TYPE;
typedef struct _DISK_INT13_INFO {
        USHORT DriveSelect;
        ULONG MaxCylinders;
        USHORT SectorsPerTrack;
        USHORT MaxHeads;
        USHORT NumberDrives;
} DISK_INT13_INFO, *PDISK_INT13_INFO;
typedef struct _DISK_EX_INT13_INFO {
        USHORT ExBufferSize;
        USHORT ExFlags;
        ULONG ExCylinders;
        ULONG ExHeads;
        ULONG ExSectorsPerTrack;
        ULONG64 ExSectorsPerDrive;
        USHORT ExSectorSize;
        USHORT ExReserved;
} DISK_EX_INT13_INFO, *PDISK_EX_INT13_INFO;
typedef struct _DISK_DETECTION_INFO {
        ULONG SizeOfDetectInfo;
        DETECTION_TYPE DetectionType;
        union {
                struct {
                        DISK_INT13_INFO Int13;
                        DISK_EX_INT13_INFO ExInt13;
                } DUMMYSTRUCTNAME;
        } DUMMYUNIONNAME;
} DISK_DETECTION_INFO, *PDISK_DETECTION_INFO;
typedef struct _DISK_PARTITION_INFO {
        ULONG SizeOfPartitionInfo;
        PARTITION_STYLE PartitionStyle;
        union {
                struct {
                        ULONG Signature;
                        ULONG CheckSum;
                } Mbr;
                struct {
                        GUID DiskId;
                } Gpt;
        } DUMMYUNIONNAME;
} DISK_PARTITION_INFO, *PDISK_PARTITION_INFO;
                        ((PDISK_PARTITION_INFO)((Geometry)->Data))
                        ((PDISK_DETECTION_INFO)(((ULONG_PTR)DiskGeometryGetPartition(Geometry)+\
                                        DiskGeometryGetPartition(Geometry)->SizeOfPartitionInfo)))
typedef struct _DISK_GEOMETRY_EX {
        DISK_GEOMETRY Geometry;
        LARGE_INTEGER DiskSize;
        UCHAR Data[1];
} DISK_GEOMETRY_EX, *PDISK_GEOMETRY_EX;
typedef struct _DISK_CONTROLLER_NUMBER {
    ULONG ControllerNumber;
    ULONG DiskNumber;
} DISK_CONTROLLER_NUMBER, *PDISK_CONTROLLER_NUMBER;
typedef enum {
    EqualPriority,
    KeepPrefetchedData,
    KeepReadData
} DISK_CACHE_RETENTION_PRIORITY;
#if (OSVER(NTDDI_VERSION) == NTDDI_WINXP)
typedef enum _DISK_WRITE_CACHE_STATE {
    DiskWriteCacheNormal,
    DiskWriteCacheForceDisable,
    DiskWriteCacheDisableNotSupported
} DISK_WRITE_CACHE_STATE, *PDISK_WRITE_CACHE_STATE;
#endif
typedef struct _DISK_CACHE_INFORMATION {
    BOOLEAN ParametersSavable;
    BOOLEAN ReadCacheEnabled;
    BOOLEAN WriteCacheEnabled;
    DISK_CACHE_RETENTION_PRIORITY ReadRetentionPriority;
    DISK_CACHE_RETENTION_PRIORITY WriteRetentionPriority;
    USHORT DisablePrefetchTransferLength;
    BOOLEAN PrefetchScalar;
    union {
        struct {
            USHORT Minimum;
            USHORT Maximum;
            USHORT MaximumBlocks;
        } ScalarPrefetch;
        struct {
            USHORT Minimum;
            USHORT Maximum;
        } BlockPrefetch;
    } DUMMYUNIONNAME;
} DISK_CACHE_INFORMATION, *PDISK_CACHE_INFORMATION;
typedef struct _DISK_GROW_PARTITION {
    ULONG PartitionNumber;
    LARGE_INTEGER BytesToGrow;
} DISK_GROW_PARTITION, *PDISK_GROW_PARTITION;
typedef struct _HISTOGRAM_BUCKET {
    ULONG Reads;
    ULONG Writes;
} HISTOGRAM_BUCKET, *PHISTOGRAM_BUCKET;
typedef struct _DISK_HISTOGRAM {
    LARGE_INTEGER DiskSize;
    LARGE_INTEGER Start;
    LARGE_INTEGER End;
    LARGE_INTEGER Average;
    LARGE_INTEGER AverageRead;
    LARGE_INTEGER AverageWrite;
    ULONG Granularity;
    ULONG Size;
    ULONG ReadCount;
    ULONG WriteCount;
    PHISTOGRAM_BUCKET Histogram;
} DISK_HISTOGRAM, *PDISK_HISTOGRAM;
typedef struct _DISK_PERFORMANCE {
        LARGE_INTEGER BytesRead;
        LARGE_INTEGER BytesWritten;
        LARGE_INTEGER ReadTime;
        LARGE_INTEGER WriteTime;
        LARGE_INTEGER IdleTime;
        ULONG ReadCount;
        ULONG WriteCount;
        ULONG QueueDepth;
        ULONG SplitCount;
        LARGE_INTEGER QueryTime;
        ULONG StorageDeviceNumber;
        WCHAR StorageManagerName[8];
} DISK_PERFORMANCE, *PDISK_PERFORMANCE;
typedef struct _DISK_RECORD {
   LARGE_INTEGER ByteOffset;
   LARGE_INTEGER StartTime;
   LARGE_INTEGER EndTime;
   PVOID VirtualAddress;
   ULONG NumberOfBytes;
   UCHAR DeviceNumber;
   BOOLEAN ReadRequest;
} DISK_RECORD, *PDISK_RECORD;
typedef struct _DISK_LOGGING {
    UCHAR Function;
    PVOID BufferAddress;
    ULONG BufferSize;
} DISK_LOGGING, *PDISK_LOGGING;
typedef enum _BIN_TYPES {
    RequestSize,
    RequestLocation
} BIN_TYPES;
typedef struct _BIN_RANGE {
    LARGE_INTEGER StartValue;
    LARGE_INTEGER Length;
} BIN_RANGE, *PBIN_RANGE;
typedef struct _PERF_BIN {
    ULONG NumberOfBins;
    ULONG TypeOfBin;
    BIN_RANGE BinsRanges[1];
} PERF_BIN, *PPERF_BIN ;
typedef struct _BIN_COUNT {
    BIN_RANGE BinRange;
    ULONG BinCount;
} BIN_COUNT, *PBIN_COUNT;
typedef struct _BIN_RESULTS {
    ULONG NumberOfBins;
    BIN_COUNT BinCounts[1];
} BIN_RESULTS, *PBIN_RESULTS;
#include <pshpack1.h>
typedef struct _GETVERSIONINPARAMS {
        UCHAR bVersion;
        UCHAR bRevision;
        UCHAR bReserved;
        UCHAR bIDEDeviceMap;
        ULONG fCapabilities;
        ULONG dwReserved[4];
} GETVERSIONINPARAMS, *PGETVERSIONINPARAMS, *LPGETVERSIONINPARAMS;
#include <poppack.h>
#include <pshpack1.h>
typedef struct _IDEREGS {
        UCHAR bFeaturesReg;
        UCHAR bSectorCountReg;
        UCHAR bSectorNumberReg;
        UCHAR bCylLowReg;
        UCHAR bCylHighReg;
        UCHAR bDriveHeadReg;
        UCHAR bCommandReg;
        UCHAR bReserved;
} IDEREGS, *PIDEREGS, *LPIDEREGS;
#include <poppack.h>
#include <pshpack1.h>
typedef struct _SENDCMDINPARAMS {
        ULONG cBufferSize;
        IDEREGS irDriveRegs;
        UCHAR bDriveNumber;
        UCHAR bReserved[3];
        ULONG dwReserved[4];
        UCHAR bBuffer[1];
} SENDCMDINPARAMS, *PSENDCMDINPARAMS, *LPSENDCMDINPARAMS;
#include <poppack.h>
#include <pshpack1.h>
typedef struct _DRIVERSTATUS {
        UCHAR bDriverError;
        UCHAR bIDEError;
        UCHAR bReserved[2];
        ULONG dwReserved[2];
} DRIVERSTATUS, *PDRIVERSTATUS, *LPDRIVERSTATUS;
#include <poppack.h>
#include <pshpack1.h>
typedef struct _SENDCMDOUTPARAMS {
        ULONG cBufferSize;
        DRIVERSTATUS DriverStatus;
        UCHAR bBuffer[1];
} SENDCMDOUTPARAMS, *PSENDCMDOUTPARAMS, *LPSENDCMDOUTPARAMS;
#include <poppack.h>
typedef struct _GET_PARTITION_ATTRIBUTES {
    ULONG Version;
    ULONG Reserved1;
    ULONGLONG Attributes;
} GET_PARTITION_ATTRIBUTES, *PGET_PARTITION_ATTRIBUTES;
typedef struct _SET_PARTITION_ATTRIBUTES {
    ULONG Version;
    BOOLEAN Persist;
    BOOLEAN Reserved1[3];
    ULONGLONG Attributes;
    ULONGLONG AttributesMask;
} SET_PARTITION_ATTRIBUTES, *PSET_PARTITION_ATTRIBUTES;
typedef struct _GET_DISK_ATTRIBUTES {
    ULONG Version;
    ULONG Reserved1;
    ULONGLONG Attributes;
} GET_DISK_ATTRIBUTES, *PGET_DISK_ATTRIBUTES;
typedef struct _SET_DISK_ATTRIBUTES {
    ULONG Version;
    BOOLEAN Persist;
    BOOLEAN RelinquishOwnership;
    BOOLEAN Reserved1[2];
    ULONGLONG Attributes;
    ULONGLONG AttributesMask;
    GUID Owner;
} SET_DISK_ATTRIBUTES, *PSET_DISK_ATTRIBUTES;
typedef enum _DISK_SAN_POLICY {
    DiskSanPolicyUnknown,
    DiskSanPolicyOnline,
    DiskSanPolicyOfflineShared,
    DiskSanPolicyOffline,
    DiskSanPolicyOfflineInternal,
    DiskSanPolicyMax
} DISK_SAN_POLICY, *PDISK_SAN_POLICY;
typedef struct _DISK_SAN_SETTINGS {
    ULONG Version;
    DISK_SAN_POLICY SanPolicy;
} DISK_SAN_SETTINGS, *PDISK_SAN_SETTINGS;
typedef enum _DISK_SNAPSHOT_STATE {
    DiskSnapshotNormalDisk,
    DiskSnapshotSnapshotCheckRequired,
    DiskSnapshotPreSnapshot,
    DiskSnapshotSnapshotDisk
} DISK_SNAPSHOT_STATE, *PDISK_SNAPSHOT_STATE;
typedef struct _DISK_SNAPSHOT_INFO {
    ULONG Version;
    DISK_SNAPSHOT_STATE State;
    GUID SnapshotSetId;
    GUID SnapshotId;
    GUID LunId;
    LARGE_INTEGER CreationTimeStamp;
    ULONG ImportCount;
    ULONG Flags;
    ULONG AdditionalDataSize;
    UCHAR AdditionalData[ANYSIZE_ARRAY];
} DISK_SNAPSHOT_INFO, *PDISK_SNAPSHOT_INFO;
typedef struct _DISK_CLUSTER_INFO {
    ULONG Version;
    ULONGLONG Flags;
    ULONGLONG FlagsMask;
    BOOLEAN Notify;
} DISK_CLUSTER_INFO, *PDISK_CLUSTER_INFO;
typedef enum _DISK_PERFORMANCE_TYPE {
    DiskPerformanceTypeAllPriority,
    DiskPerformanceTypeNonLowPriority,
    DiskPerformanceTypeMax
} DISK_PERFORMANCE_TYPE, *PDISK_PERFORMANCE_TYPE;
typedef struct _DISK_PERFORMANCE_PARAMETERS {
    ULONG Version;
    DISK_PERFORMANCE_TYPE Type;
} DISK_PERFORMANCE_PARAMETERS, *PDISK_PERFORMANCE_PARAMETERS;
typedef struct _DISK_PERFORMANCE_INFO {
    ULONG Version;
    DISK_PERFORMANCE_TYPE Type;
    LARGE_INTEGER QueryTime;
    LARGE_INTEGER BytesRead;
    LARGE_INTEGER BytesWritten;
    LARGE_INTEGER ReadTime;
    LARGE_INTEGER WriteTime;
    LARGE_INTEGER FlushTime;
    LARGE_INTEGER IdleTime;
    ULONG ReadCount;
    ULONG WriteCount;
    ULONG FlushCount;
    ULONG QueueDepth;
    ULONG SplitCount;
} DISK_PERFORMANCE_INFO, *PDISK_PERFORMANCE_INFO;
typedef struct _MAPPED_ADDRESS {
    struct _MAPPED_ADDRESS *NextMappedAddress;
    PVOID MappedAddress;
    ULONG NumberOfBytes;
    LARGE_INTEGER IoAddress;
    ULONG BusNumber;
} MAPPED_ADDRESS, *PMAPPED_ADDRESS;
#endif
#pragma endregion
