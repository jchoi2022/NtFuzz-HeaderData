#error "STORPORT.H must be included instead of SCSI.H"
#error "STORPORT.H must be included instead of SRB.H"
#pragma warning(disable:4200)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
    ((((UCHAR) (Target)) & ~(0x20 - 1)) << 8) | \
    (((UCHAR) (Bus)) << 5) | \
    (((UCHAR) (Target)) & (0x20 - 1)))
    Bus = (UCHAR) ((Value) >> 5), \
    Target = (UCHAR) ((((Value) >> 8) & ~(0x20 - 1)) | ((Value) & (0x20 - 1))))
typedef struct _SCSI_REQUEST_BLOCK {
    USHORT Length;
    UCHAR Function;
    UCHAR SrbStatus;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR QueueTag;
    UCHAR QueueAction;
    UCHAR CdbLength;
    UCHAR SenseInfoBufferLength;
    ULONG SrbFlags;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    _Field_size_bytes_(DataTransferLength)
    PVOID DataBuffer;
    PVOID SenseInfoBuffer;
    struct _SCSI_REQUEST_BLOCK *NextSrb;
    PVOID OriginalRequest;
    PVOID SrbExtension;
    union {
        ULONG InternalStatus;
        ULONG QueueSortKey;
        ULONG LinkTimeoutValue;
    };
    ULONG Reserved;
    UCHAR Cdb[16];
} SCSI_REQUEST_BLOCK, *PSCSI_REQUEST_BLOCK;
typedef struct _SCSI_WMI_REQUEST_BLOCK {
    USHORT Length;
    UCHAR Function;
    UCHAR SrbStatus;
    UCHAR WMISubFunction;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR Reserved1;
    UCHAR WMIFlags;
    UCHAR Reserved2[2];
    ULONG SrbFlags;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    PVOID DataPath;
    PVOID Reserved3;
    PVOID OriginalRequest;
    PVOID SrbExtension;
    ULONG Reserved4;
    ULONG Reserved6;
    UCHAR Reserved5[16];
} SCSI_WMI_REQUEST_BLOCK, *PSCSI_WMI_REQUEST_BLOCK;
typedef enum _STOR_DEVICE_POWER_STATE {
    StorPowerDeviceUnspecified = 0,
    StorPowerDeviceD0,
    StorPowerDeviceD1,
    StorPowerDeviceD2,
    StorPowerDeviceD3,
    StorPowerDeviceMaximum
} STOR_DEVICE_POWER_STATE, *PSTOR_DEVICE_POWER_STATE;
typedef enum {
    StorPowerActionNone = 0,
    StorPowerActionReserved,
    StorPowerActionSleep,
    StorPowerActionHibernate,
    StorPowerActionShutdown,
    StorPowerActionShutdownReset,
    StorPowerActionShutdownOff,
    StorPowerActionWarmEject
} STOR_POWER_ACTION, *PSTOR_POWER_ACTION;
typedef struct _SCSI_POWER_REQUEST_BLOCK {
    USHORT Length;
    UCHAR Function;
    UCHAR SrbStatus;
    UCHAR SrbPowerFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    STOR_DEVICE_POWER_STATE DevicePowerState;
    ULONG SrbFlags;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    PVOID SenseInfoBuffer;
    struct _SCSI_REQUEST_BLOCK *NextSrb;
    PVOID OriginalRequest;
    PVOID SrbExtension;
    STOR_POWER_ACTION PowerAction;
    ULONG Reserved;
    UCHAR Reserved5[16];
} SCSI_POWER_REQUEST_BLOCK, *PSCSI_POWER_REQUEST_BLOCK;
typedef enum {
    StorStartDevice = 0x0,
    StorRemoveDevice = 0x2,
    StorStopDevice = 0x4,
    StorQueryCapabilities = 0x9,
    StorQueryResourceRequirements = 0xB,
    StorFilterResourceRequirements = 0xD,
    StorSurpriseRemoval = 0x17
} STOR_PNP_ACTION, *PSTOR_PNP_ACTION;
typedef struct _STOR_DEVICE_CAPABILITIES {
    USHORT Version;
    ULONG DeviceD1:1;
    ULONG DeviceD2:1;
    ULONG LockSupported:1;
    ULONG EjectSupported:1;
    ULONG Removable:1;
    ULONG DockDevice:1;
    ULONG UniqueID:1;
    ULONG SilentInstall:1;
    ULONG SurpriseRemovalOK:1;
    ULONG NoDisplayInUI:1;
} STOR_DEVICE_CAPABILITIES, *PSTOR_DEVICE_CAPABILITIES;
typedef struct _STOR_DEVICE_CAPABILITIES_EX {
    USHORT Version;
    USHORT Size;
    ULONG DeviceD1:1;
    ULONG DeviceD2:1;
    ULONG LockSupported:1;
    ULONG EjectSupported:1;
    ULONG Removable:1;
    ULONG DockDevice:1;
    ULONG UniqueID:1;
    ULONG SilentInstall:1;
    ULONG RawDeviceOK:1;
    ULONG SurpriseRemovalOK:1;
    ULONG NoDisplayInUI:1;
    ULONG DefaultWriteCacheEnabled:1;
    ULONG Reserved0:20;
    ULONG Address;
    ULONG UINumber;
    ULONG Reserved1[2];
} STOR_DEVICE_CAPABILITIES_EX, *PSTOR_DEVICE_CAPABILITIES_EX;
typedef struct _SCSI_PNP_REQUEST_BLOCK {
    USHORT Length;
    UCHAR Function;
    UCHAR SrbStatus;
    UCHAR PnPSubFunction;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    STOR_PNP_ACTION PnPAction;
    ULONG SrbFlags;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    PVOID SenseInfoBuffer;
    struct _SCSI_REQUEST_BLOCK *NextSrb;
    PVOID OriginalRequest;
    PVOID SrbExtension;
    ULONG SrbPnPFlags;
    ULONG Reserved;
        UCHAR Reserved4[16];
} SCSI_PNP_REQUEST_BLOCK, *PSCSI_PNP_REQUEST_BLOCK;
typedef enum _SRBEXDATATYPE {
    SrbExDataTypeUnknown = 0,
    SrbExDataTypeBidirectional,
    SrbExDataTypeScsiCdb16 = 0x40,
    SrbExDataTypeScsiCdb32,
    SrbExDataTypeScsiCdbVar,
    SrbExDataTypeWmi = 0x60,
    SrbExDataTypePower,
    SrbExDataTypePnP,
    SrbExDataTypeIoInfo = 0x80,
    SrbExDataTypeMSReservedStart = 0xf0000000,
    SrbExDataTypeReserved = 0xffffffff
} SRBEXDATATYPE, *PSRBEXDATATYPE;
typedef struct SRB_ALIGN _SRBEX_DATA {
    SRBEXDATATYPE Type;
    ULONG Length;
    _Field_size_bytes_(Length) UCHAR Data[ANYSIZE_ARRAY];
} SRBEX_DATA, *PSRBEX_DATA;
typedef struct SRB_ALIGN _SRBEX_DATA_BIDIRECTIONAL {
    _Field_range_(SrbExDataTypeBidirectional, SrbExDataTypeBidirectional)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_BIDIRECTIONAL_LENGTH, SRBEX_DATA_BIDIRECTIONAL_LENGTH)
    ULONG Length;
    ULONG DataInTransferLength;
    ULONG Reserved1;
    _Field_size_bytes_full_(DataInTransferLength)
    PVOID POINTER_ALIGN DataInBuffer;
} SRBEX_DATA_BIDIRECTIONAL, *PSRBEX_DATA_BIDIRECTIONAL;
typedef struct SRB_ALIGN _SRBEX_DATA_SCSI_CDB16 {
    _Field_range_(SrbExDataTypeScsiCdb16, SrbExDataTypeScsiCdb16)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_SCSI_CDB16_LENGTH, SRBEX_DATA_SCSI_CDB16_LENGTH)
    ULONG Length;
    UCHAR ScsiStatus;
    UCHAR SenseInfoBufferLength;
    UCHAR CdbLength;
    UCHAR Reserved;
    ULONG Reserved1;
    _Field_size_bytes_full_(SenseInfoBufferLength)
    PVOID POINTER_ALIGN SenseInfoBuffer;
    UCHAR POINTER_ALIGN Cdb[16];
} SRBEX_DATA_SCSI_CDB16, *PSRBEX_DATA_SCSI_CDB16;
typedef struct SRB_ALIGN _SRBEX_DATA_SCSI_CDB32 {
    _Field_range_(SrbExDataTypeScsiCdb32, SrbExDataTypeScsiCdb32)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_SCSI_CDB32_LENGTH, SRBEX_DATA_SCSI_CDB32_LENGTH)
    ULONG Length;
    UCHAR ScsiStatus;
    UCHAR SenseInfoBufferLength;
    UCHAR CdbLength;
    UCHAR Reserved;
    ULONG Reserved1;
    _Field_size_bytes_full_(SenseInfoBufferLength)
    PVOID POINTER_ALIGN SenseInfoBuffer;
    UCHAR POINTER_ALIGN Cdb[32];
} SRBEX_DATA_SCSI_CDB32, *PSRBEX_DATA_SCSI_CDB32;
typedef struct SRB_ALIGN _SRBEX_DATA_SCSI_CDB_VAR {
    _Field_range_(SrbExDataTypeScsiCdbVar, SrbExDataTypeScsiCdbVar)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_SCSI_CDB_VAR_LENGTH_MIN, SRBEX_DATA_SCSI_CDB_VAR_LENGTH_MAX)
    ULONG Length;
    UCHAR ScsiStatus;
    UCHAR SenseInfoBufferLength;
    UCHAR Reserved[2];
    ULONG CdbLength;
    ULONG Reserved1[2];
    _Field_size_bytes_full_(SenseInfoBufferLength)
    PVOID POINTER_ALIGN SenseInfoBuffer;
    _Field_size_bytes_full_(CdbLength)
    UCHAR POINTER_ALIGN Cdb[ANYSIZE_ARRAY];
} SRBEX_DATA_SCSI_CDB_VAR, *PSRBEX_DATA_SCSI_CDB_VAR;
typedef struct SRB_ALIGN _SRBEX_DATA_WMI {
    _Field_range_(SrbExDataTypeWmi, SrbExDataTypeWmi)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_WMI_LENGTH, SRBEX_DATA_WMI_LENGTH)
    ULONG Length;
    UCHAR WMISubFunction;
    UCHAR WMIFlags;
    UCHAR Reserved[2];
    ULONG Reserved1;
    PVOID POINTER_ALIGN DataPath;
} SRBEX_DATA_WMI, *PSRBEX_DATA_WMI;
typedef struct SRB_ALIGN _SRBEX_DATA_POWER {
    _Field_range_(SrbExDataTypePower, SrbExDataTypePower)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_POWER_LENGTH, SRBEX_DATA_POWER_LENGTH)
    ULONG Length;
    UCHAR SrbPowerFlags;
    UCHAR Reserved[3];
    STOR_DEVICE_POWER_STATE DevicePowerState;
    STOR_POWER_ACTION PowerAction;
} SRBEX_DATA_POWER, *PSRBEX_DATA_POWER;
typedef struct SRB_ALIGN _SRBEX_DATA_PNP {
    _Field_range_(SrbExDataTypePnP, SrbExDataTypePnP)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_PNP_LENGTH, SRBEX_DATA_PNP_LENGTH)
    ULONG Length;
    UCHAR PnPSubFunction;
    UCHAR Reserved[3];
    STOR_PNP_ACTION PnPAction;
    ULONG SrbPnPFlags;
    ULONG Reserved1;
} SRBEX_DATA_PNP, *PSRBEX_DATA_PNP;
typedef struct SRB_ALIGN _SRBEX_DATA_IO_INFO {
    _Field_range_(SrbExDataTypeIoInfo, SrbExDataTypeIoInfo)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_IO_INFO_LENGTH, SRBEX_DATA_IO_INFO_LENGTH)
    ULONG Length;
    ULONG Flags;
    ULONG Key;
    ULONG RWLength;
    BOOLEAN IsWriteRequest;
    UCHAR CachePriority;
    UCHAR Reserved[2];
    ULONG Reserved1[2];
} SRBEX_DATA_IO_INFO, *PSRBEX_DATA_IO_INFO;
typedef struct SRB_ALIGN _STORAGE_REQUEST_BLOCK_HEADER {
    USHORT Length;
    _Field_range_(SRB_FUNCTION_STORAGE_REQUEST_BLOCK, SRB_FUNCTION_STORAGE_REQUEST_BLOCK)
    UCHAR Function;
    UCHAR SrbStatus;
} STORAGE_REQUEST_BLOCK_HEADER, *PSTORAGE_REQUEST_BLOCK_HEADER;
typedef _Struct_size_bytes_(SrbLength) struct SRB_ALIGN _STORAGE_REQUEST_BLOCK {
    USHORT Length;
    _Field_range_(SRB_FUNCTION_STORAGE_REQUEST_BLOCK, SRB_FUNCTION_STORAGE_REQUEST_BLOCK)
    UCHAR Function;
    UCHAR SrbStatus;
    ULONG ReservedUlong1;
    _Field_range_(SRB_SIGNATURE, SRB_SIGNATURE)
    ULONG Signature;
    _Field_range_(STORAGE_REQUEST_BLOCK_VERSION_1, STORAGE_REQUEST_BLOCK_VERSION_1)
    ULONG Version;
    ULONG SrbLength;
    ULONG SrbFunction;
    ULONG SrbFlags;
    ULONG ReservedUlong2;
    ULONG RequestTag;
    USHORT RequestPriority;
    USHORT RequestAttribute;
    ULONG TimeOutValue;
    ULONG SystemStatus;
    ULONG ZeroGuard1;
    _Field_range_(sizeof(STORAGE_REQUEST_BLOCK), SrbLength - sizeof(STOR_ADDRESS))
    ULONG AddressOffset;
    ULONG NumSrbExData;
    ULONG DataTransferLength;
    _Field_size_bytes_full_(DataTransferLength)
    PVOID POINTER_ALIGN DataBuffer;
    PVOID POINTER_ALIGN ZeroGuard2;
    PVOID POINTER_ALIGN OriginalRequest;
    PVOID POINTER_ALIGN ClassContext;
    PVOID POINTER_ALIGN PortContext;
    PVOID POINTER_ALIGN MiniportContext;
    struct _STORAGE_REQUEST_BLOCK POINTER_ALIGN *NextSrb;
    _At_buffer_(SrbExDataOffset, _Iter_, NumSrbExData, _Field_range_(0, SrbLength - sizeof(SRBEX_DATA)))
    _Field_size_(NumSrbExData)
    ULONG SrbExDataOffset[ANYSIZE_ARRAY];
} STORAGE_REQUEST_BLOCK, *PSTORAGE_REQUEST_BLOCK;
    (FIELD_OFFSET(type, field) + RTL_FIELD_SIZE(type, field))
    ( (((PCHAR)(&(Struct)->Field)) + sizeof((Struct)->Field)) <= (((PCHAR)(Struct))+(Size)) )
#pragma pack(push, cdb, 1)
typedef union _CDB {
    struct _CDB6GENERIC {
       UCHAR OperationCode;
       UCHAR Immediate : 1;
       UCHAR CommandUniqueBits : 4;
       UCHAR LogicalUnitNumber : 3;
       UCHAR CommandUniqueBytes[3];
       UCHAR Link : 1;
       UCHAR Flag : 1;
       UCHAR Reserved : 4;
       UCHAR VendorUnique : 2;
    } CDB6GENERIC;
    struct _CDB6READWRITE {
        UCHAR OperationCode;
        UCHAR LogicalBlockMsb1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlockMsb0;
        UCHAR LogicalBlockLsb;
        UCHAR TransferBlocks;
        UCHAR Control;
    } CDB6READWRITE;
    struct _CDB6INQUIRY {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR PageCode;
        UCHAR IReserved;
        UCHAR AllocationLength;
        UCHAR Control;
    } CDB6INQUIRY;
    struct _CDB6INQUIRY3 {
        UCHAR OperationCode;
        UCHAR EnableVitalProductData : 1;
        UCHAR CommandSupportData : 1;
        UCHAR Reserved1 : 6;
        UCHAR PageCode;
        UCHAR Reserved2;
        UCHAR AllocationLength;
        UCHAR Control;
    } CDB6INQUIRY3;
    struct _CDB6VERIFY {
        UCHAR OperationCode;
        UCHAR Fixed : 1;
        UCHAR ByteCompare : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved : 2;
        UCHAR LogicalUnitNumber : 3;
        UCHAR VerificationLength[3];
        UCHAR Control;
    } CDB6VERIFY;
    struct _RECEIVE_DIAGNOSTIC {
        UCHAR OperationCode;
        UCHAR PageCodeValid : 1;
        UCHAR Reserved : 7;
        UCHAR PageCode;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } RECEIVE_DIAGNOSTIC;
    struct _SEND_DIAGNOSTIC {
        UCHAR OperationCode;
        UCHAR UnitOffline : 1;
        UCHAR DeviceOffline : 1;
        UCHAR SelfTest : 1;
        UCHAR Reserved1 : 1;
        UCHAR PageFormat : 1;
        UCHAR SelfTestCode: 3;
        UCHAR Reserved2;
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } SEND_DIAGNOSTIC;
    struct _CDB6FORMAT {
        UCHAR OperationCode;
        UCHAR FormatControl : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR FReserved1;
        UCHAR InterleaveMsb;
        UCHAR InterleaveLsb;
        UCHAR FReserved2;
    } CDB6FORMAT;
    struct _CDB10 {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 2;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlockByte0;
        UCHAR LogicalBlockByte1;
        UCHAR LogicalBlockByte2;
        UCHAR LogicalBlockByte3;
        UCHAR Reserved2;
        UCHAR TransferBlocksMsb;
        UCHAR TransferBlocksLsb;
        UCHAR Control;
    } CDB10;
    struct _CDB12 {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 2;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlock[4];
        UCHAR TransferLength[4];
        UCHAR Reserved2;
        UCHAR Control;
    } CDB12;
    struct _CDB16 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 3;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR Protection : 3;
        UCHAR LogicalBlock[8];
        UCHAR TransferLength[4];
        UCHAR Reserved2;
        UCHAR Control;
    } CDB16;
    struct _READ_BUFFER_10 {
        UCHAR OperationCode;
        UCHAR Mode : 5;
        UCHAR ModeSpecific : 3;
        UCHAR BufferId;
        UCHAR BufferOffset[3];
        UCHAR AllocationLength[3];
        UCHAR Control;
    } READ_BUFFER_10;
    struct _READ_BUFFER_16 {
        UCHAR OperationCode;
        UCHAR Mode : 5;
        UCHAR ModeSpecific : 3;
        UCHAR BufferOffset[8];
        UCHAR AllocationLength[4];
        UCHAR BufferId;
        UCHAR Control;
    } READ_BUFFER_16;
    struct _SECURITY_PROTOCOL_IN {
        UCHAR OperationCode;
        UCHAR SecurityProtocol;
        UCHAR SecurityProtocolSpecific[2];
        UCHAR Reserved1 : 7;
        UCHAR INC_512 : 1;
        UCHAR Reserved2;
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;
    } SECURITY_PROTOCOL_IN;
    struct _SECURITY_PROTOCOL_OUT {
        UCHAR OperationCode;
        UCHAR SecurityProtocol;
        UCHAR SecurityProtocolSpecific[2];
        UCHAR Reserved1 : 7;
        UCHAR INC_512 : 1;
        UCHAR Reserved2;
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;
    } SECURITY_PROTOCOL_OUT;
    struct _UNMAP {
        UCHAR OperationCode;
        UCHAR Anchor : 1;
        UCHAR Reserved1 : 7;
        UCHAR Reserved2[4];
        UCHAR GroupNumber : 5;
        UCHAR Reserved3 : 3;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } UNMAP;
    struct _SANITIZE {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR AUSE : 1;
        UCHAR Reserved1 : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved2[5];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } SANITIZE;
    struct _PAUSE_RESUME {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[6];
        UCHAR Action;
        UCHAR Control;
    } PAUSE_RESUME;
    struct _READ_TOC {
        UCHAR OperationCode;
        UCHAR Reserved0 : 1;
        UCHAR Msf : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Format2 : 4;
        UCHAR Reserved2 : 4;
        UCHAR Reserved3[3];
        UCHAR StartingTrack;
        UCHAR AllocationLength[2];
        UCHAR Control : 6;
        UCHAR Format : 2;
    } READ_TOC;
    struct _READ_DISK_INFORMATION {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_DISK_INFORMATION, READ_DISC_INFORMATION;
    struct _READ_TRACK_INFORMATION {
        UCHAR OperationCode;
        UCHAR Track : 2;
        UCHAR Reserved4 : 3;
        UCHAR Lun : 3;
        UCHAR BlockAddress[4];
        UCHAR Reserved3;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_TRACK_INFORMATION;
    struct _RESERVE_TRACK_RZONE {
        UCHAR OperationCode;
        UCHAR Reserved1[4];
        UCHAR ReservationSize[4];
        UCHAR Control;
    } RESERVE_TRACK_RZONE;
    struct _SEND_OPC_INFORMATION {
        UCHAR OperationCode;
        UCHAR DoOpc : 1;
        UCHAR Reserved1 : 7;
        UCHAR Exclude0 : 1;
        UCHAR Exclude1 : 1;
        UCHAR Reserved2 : 6;
        UCHAR Reserved3[4];
        UCHAR ParameterListLength[2];
        UCHAR Reserved4;
    } SEND_OPC_INFORMATION;
    struct _REPAIR_TRACK {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 7;
        UCHAR Reserved2[2];
        UCHAR TrackNumber[2];
        UCHAR Reserved3[3];
        UCHAR Control;
    } REPAIR_TRACK;
    struct _CLOSE_TRACK {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 7;
        UCHAR Track : 1;
        UCHAR Session : 1;
        UCHAR Reserved2 : 6;
        UCHAR Reserved3;
        UCHAR TrackNumber[2];
        UCHAR Reserved4[3];
        UCHAR Control;
    } CLOSE_TRACK;
    struct _READ_BUFFER_CAPACITY {
        UCHAR OperationCode;
        UCHAR BlockInfo : 1;
        UCHAR Reserved1 : 7;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_BUFFER_CAPACITY;
    struct _SEND_CUE_SHEET {
        UCHAR OperationCode;
        UCHAR Reserved[5];
        UCHAR CueSheetSize[3];
        UCHAR Control;
    } SEND_CUE_SHEET;
    struct _READ_HEADER {
        UCHAR OperationCode;
        UCHAR Reserved1 : 1;
        UCHAR Msf : 1;
        UCHAR Reserved2 : 3;
        UCHAR Lun : 3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved3;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_HEADER;
    struct _PLAY_AUDIO {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingBlockAddress[4];
        UCHAR Reserved2;
        UCHAR PlayLength[2];
        UCHAR Control;
    } PLAY_AUDIO;
    struct _PLAY_AUDIO_MSF {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2;
        UCHAR StartingM;
        UCHAR StartingS;
        UCHAR StartingF;
        UCHAR EndingM;
        UCHAR EndingS;
        UCHAR EndingF;
        UCHAR Control;
    } PLAY_AUDIO_MSF;
    struct _BLANK_MEDIA {
        UCHAR OperationCode;
        UCHAR BlankType : 3;
        UCHAR Reserved1 : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved2 : 3;
        UCHAR AddressOrTrack[4];
        UCHAR Reserved3[5];
        UCHAR Control;
    } BLANK_MEDIA;
    struct _PLAY_CD {
        UCHAR OperationCode;
        UCHAR Reserved1 : 1;
        UCHAR CMSF : 1;
        UCHAR ExpectedSectorType : 3;
        UCHAR Lun : 3;
        union {
            struct _LBA {
                UCHAR StartingBlockAddress[4];
                UCHAR PlayLength[4];
            } LBA;
            struct _MSF {
                UCHAR Reserved1;
                UCHAR StartingM;
                UCHAR StartingS;
                UCHAR StartingF;
                UCHAR EndingM;
                UCHAR EndingS;
                UCHAR EndingF;
                UCHAR Reserved2;
            } MSF;
        };
        UCHAR Audio : 1;
        UCHAR Composite : 1;
        UCHAR Port1 : 1;
        UCHAR Port2 : 1;
        UCHAR Reserved2 : 3;
        UCHAR Speed : 1;
        UCHAR Control;
    } PLAY_CD;
    struct _SCAN_CD {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 3;
        UCHAR Direct : 1;
        UCHAR Lun : 3;
        UCHAR StartingAddress[4];
        UCHAR Reserved2[3];
        UCHAR Reserved3 : 6;
        UCHAR Type : 2;
        UCHAR Reserved4;
        UCHAR Control;
    } SCAN_CD;
    struct _STOP_PLAY_SCAN {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[7];
        UCHAR Control;
    } STOP_PLAY_SCAN;
    struct _SUBCHANNEL {
        UCHAR OperationCode;
        UCHAR Reserved0 : 1;
        UCHAR Msf : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2 : 6;
        UCHAR SubQ : 1;
        UCHAR Reserved3 : 1;
        UCHAR Format;
        UCHAR Reserved4[2];
        UCHAR TrackNumber;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } SUBCHANNEL;
    struct _READ_CD {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved0 : 1;
        UCHAR ExpectedSectorType : 3;
        UCHAR Lun : 3;
        UCHAR StartingLBA[4];
        UCHAR TransferBlocks[3];
        UCHAR Reserved2 : 1;
        UCHAR ErrorFlags : 2;
        UCHAR IncludeEDC : 1;
        UCHAR IncludeUserData : 1;
        UCHAR HeaderCode : 2;
        UCHAR IncludeSyncData : 1;
        UCHAR SubChannelSelection : 3;
        UCHAR Reserved3 : 5;
        UCHAR Control;
    } READ_CD;
    struct _READ_CD_MSF {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 1;
        UCHAR ExpectedSectorType : 3;
        UCHAR Lun : 3;
        UCHAR Reserved2;
        UCHAR StartingM;
        UCHAR StartingS;
        UCHAR StartingF;
        UCHAR EndingM;
        UCHAR EndingS;
        UCHAR EndingF;
        UCHAR Reserved4 : 1;
        UCHAR ErrorFlags : 2;
        UCHAR IncludeEDC : 1;
        UCHAR IncludeUserData : 1;
        UCHAR HeaderCode : 2;
        UCHAR IncludeSyncData : 1;
        UCHAR SubChannelSelection : 3;
        UCHAR Reserved5 : 5;
        UCHAR Control;
    } READ_CD_MSF;
    struct _PLXTR_READ_CDDA {
        UCHAR OperationCode;
        UCHAR Reserved0 : 5;
        UCHAR LogicalUnitNumber :3;
        UCHAR LogicalBlockByte0;
        UCHAR LogicalBlockByte1;
        UCHAR LogicalBlockByte2;
        UCHAR LogicalBlockByte3;
        UCHAR TransferBlockByte0;
        UCHAR TransferBlockByte1;
        UCHAR TransferBlockByte2;
        UCHAR TransferBlockByte3;
        UCHAR SubCode;
        UCHAR Control;
    } PLXTR_READ_CDDA;
    struct _NEC_READ_CDDA {
        UCHAR OperationCode;
        UCHAR Reserved0;
        UCHAR LogicalBlockByte0;
        UCHAR LogicalBlockByte1;
        UCHAR LogicalBlockByte2;
        UCHAR LogicalBlockByte3;
        UCHAR Reserved1;
        UCHAR TransferBlockByte0;
        UCHAR TransferBlockByte1;
        UCHAR Control;
    } NEC_READ_CDDA;
    struct _MODE_SENSE {
        UCHAR OperationCode;
        UCHAR Reserved1 : 3;
        UCHAR Dbd : 1;
        UCHAR Reserved2 : 4;
        UCHAR PageCode : 6;
        UCHAR Pc : 2;
        UCHAR SubPageCode;
        UCHAR AllocationLength;
        UCHAR Control;
    } MODE_SENSE;
    struct _MODE_SENSE10 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 3;
        UCHAR Dbd : 1;
        UCHAR LongLBAAccepted : 1;
        UCHAR Reserved2 : 3;
        UCHAR PageCode : 6;
        UCHAR Pc : 2;
        UCHAR SubPageCode;
        UCHAR Reserved3[3];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } MODE_SENSE10;
    struct _MODE_SELECT {
        UCHAR OperationCode;
        UCHAR SPBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR PFBit : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[2];
        UCHAR ParameterListLength;
        UCHAR Control;
    } MODE_SELECT;
    struct _MODE_SELECT10 {
        UCHAR OperationCode;
        UCHAR SPBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR PFBit : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[5];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } MODE_SELECT10;
    struct _LOCATE {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR CPBit : 1;
        UCHAR BTBit : 1;
        UCHAR Reserved1 : 2;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved4;
        UCHAR Partition;
        UCHAR Control;
    } LOCATE;
    struct _LOGSENSE {
        UCHAR OperationCode;
        UCHAR SPBit : 1;
        UCHAR PPCBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR PageCode : 6;
        UCHAR PCBit : 2;
        union {
            UCHAR SubPageCode;
            UCHAR Reserved2;
        };
        UCHAR Reserved3;
        UCHAR ParameterPointer[2];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } LOGSENSE;
    struct _LOGSELECT {
        UCHAR OperationCode;
        UCHAR SPBit : 1;
        UCHAR PCRBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved : 6;
        UCHAR PCBit : 2;
        UCHAR Reserved2[4];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } LOGSELECT;
    struct _PRINT {
        UCHAR OperationCode;
        UCHAR Reserved : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransferLength[3];
        UCHAR Control;
    } PRINT;
    struct _SEEK {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved2[3];
        UCHAR Control;
    } SEEK;
    struct _ERASE {
        UCHAR OperationCode;
        UCHAR Long : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[3];
        UCHAR Control;
    } ERASE;
    struct _START_STOP {
        UCHAR OperationCode;
        UCHAR Immediate: 1;
        UCHAR Reserved1 : 4;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[2];
        UCHAR Start : 1;
        UCHAR LoadEject : 1;
        UCHAR Reserved3 : 6;
        UCHAR Control;
    } START_STOP;
    struct _MEDIA_REMOVAL {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[2];
        UCHAR Prevent : 1;
        UCHAR Persistant : 1;
        UCHAR Reserved3 : 6;
        UCHAR Control;
    } MEDIA_REMOVAL;
    struct _SEEK_BLOCK {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 7;
        UCHAR BlockAddress[3];
        UCHAR Link : 1;
        UCHAR Flag : 1;
        UCHAR Reserved2 : 4;
        UCHAR VendorUnique : 2;
    } SEEK_BLOCK;
    struct _REQUEST_BLOCK_ADDRESS {
        UCHAR OperationCode;
        UCHAR Reserved1[3];
        UCHAR AllocationLength;
        UCHAR Link : 1;
        UCHAR Flag : 1;
        UCHAR Reserved2 : 4;
        UCHAR VendorUnique : 2;
    } REQUEST_BLOCK_ADDRESS;
    struct _PARTITION {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR Sel: 1;
        UCHAR PartitionSelect : 6;
        UCHAR Reserved1[3];
        UCHAR Control;
    } PARTITION;
    struct _WRITE_TAPE_MARKS {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR WriteSetMarks: 1;
        UCHAR Reserved : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransferLength[3];
        UCHAR Control;
    } WRITE_TAPE_MARKS;
    struct _SPACE_TAPE_MARKS {
        UCHAR OperationCode;
        UCHAR Code : 3;
        UCHAR Reserved : 2;
        UCHAR LogicalUnitNumber : 3;
        UCHAR NumMarksMSB ;
        UCHAR NumMarks;
        UCHAR NumMarksLSB;
        union {
            UCHAR value;
            struct {
                UCHAR Link : 1;
                UCHAR Flag : 1;
                UCHAR Reserved : 4;
                UCHAR VendorUnique : 2;
            } Fields;
        } Byte6;
    } SPACE_TAPE_MARKS;
    struct _READ_POSITION {
        UCHAR Operation;
        UCHAR BlockType:1;
        UCHAR Reserved1:4;
        UCHAR Lun:3;
        UCHAR Reserved2[7];
        UCHAR Control;
    } READ_POSITION;
    struct _CDB6READWRITETAPE {
        UCHAR OperationCode;
        UCHAR VendorSpecific : 5;
        UCHAR Reserved : 3;
        UCHAR TransferLenMSB;
        UCHAR TransferLen;
        UCHAR TransferLenLSB;
        UCHAR Link : 1;
        UCHAR Flag : 1;
        UCHAR Reserved1 : 4;
        UCHAR VendorUnique : 2;
    } CDB6READWRITETAPE;
    struct _INIT_ELEMENT_STATUS {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNubmer : 3;
        UCHAR Reserved2[3];
        UCHAR Reserved3 : 7;
        UCHAR NoBarCode : 1;
    } INIT_ELEMENT_STATUS;
    struct _INITIALIZE_ELEMENT_RANGE {
        UCHAR OperationCode;
        UCHAR Range : 1;
        UCHAR Reserved1 : 4;
        UCHAR LogicalUnitNubmer : 3;
        UCHAR FirstElementAddress[2];
        UCHAR Reserved2[2];
        UCHAR NumberOfElements[2];
        UCHAR Reserved3;
        UCHAR Reserved4 : 7;
        UCHAR NoBarCode : 1;
    } INITIALIZE_ELEMENT_RANGE;
    struct _POSITION_TO_ELEMENT {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransportElementAddress[2];
        UCHAR DestinationElementAddress[2];
        UCHAR Reserved2[2];
        UCHAR Flip : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } POSITION_TO_ELEMENT;
    struct _MOVE_MEDIUM {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransportElementAddress[2];
        UCHAR SourceElementAddress[2];
        UCHAR DestinationElementAddress[2];
        UCHAR Reserved2[2];
        UCHAR Flip : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } MOVE_MEDIUM;
    struct _EXCHANGE_MEDIUM {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransportElementAddress[2];
        UCHAR SourceElementAddress[2];
        UCHAR Destination1ElementAddress[2];
        UCHAR Destination2ElementAddress[2];
        UCHAR Flip1 : 1;
        UCHAR Flip2 : 1;
        UCHAR Reserved3 : 6;
        UCHAR Control;
    } EXCHANGE_MEDIUM;
    struct _READ_ELEMENT_STATUS {
        UCHAR OperationCode;
        UCHAR ElementType : 4;
        UCHAR VolTag : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingElementAddress[2];
        UCHAR NumberOfElements[2];
        UCHAR Reserved1;
        UCHAR AllocationLength[3];
        UCHAR Reserved2;
        UCHAR Control;
    } READ_ELEMENT_STATUS;
    struct _SEND_VOLUME_TAG {
        UCHAR OperationCode;
        UCHAR ElementType : 4;
        UCHAR Reserved1 : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingElementAddress[2];
        UCHAR Reserved2;
        UCHAR ActionCode : 5;
        UCHAR Reserved3 : 3;
        UCHAR Reserved4[2];
        UCHAR ParameterListLength[2];
        UCHAR Reserved5;
        UCHAR Control;
    } SEND_VOLUME_TAG;
    struct _REQUEST_VOLUME_ELEMENT_ADDRESS {
        UCHAR OperationCode;
        UCHAR ElementType : 4;
        UCHAR VolTag : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingElementAddress[2];
        UCHAR NumberElements[2];
        UCHAR Reserved1;
        UCHAR AllocationLength[3];
        UCHAR Reserved2;
        UCHAR Control;
    } REQUEST_VOLUME_ELEMENT_ADDRESS;
    struct _LOAD_UNLOAD {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 4;
        UCHAR Lun : 3;
        UCHAR Reserved2[2];
        UCHAR Start : 1;
        UCHAR LoadEject : 1;
        UCHAR Reserved3: 6;
        UCHAR Reserved4[3];
        UCHAR Slot;
        UCHAR Reserved5[3];
    } LOAD_UNLOAD;
    struct _MECH_STATUS {
        UCHAR OperationCode;
        UCHAR Reserved : 5;
        UCHAR Lun : 3;
        UCHAR Reserved1[6];
        UCHAR AllocationLength[2];
        UCHAR Reserved2[1];
        UCHAR Control;
    } MECH_STATUS;
    struct _SYNCHRONIZE_CACHE10 {
        UCHAR OperationCode;
        UCHAR RelAddr : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved : 3;
        UCHAR Lun : 3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved2;
        UCHAR BlockCount[2];
        UCHAR Control;
    } SYNCHRONIZE_CACHE10;
    struct _GET_EVENT_STATUS_NOTIFICATION {
        UCHAR OperationCode;
        UCHAR Immediate : 1;
        UCHAR Reserved : 4;
        UCHAR Lun : 3;
        UCHAR Reserved2[2];
        UCHAR NotificationClassRequest;
        UCHAR Reserved3[2];
        UCHAR EventListLength[2];
        UCHAR Control;
    } GET_EVENT_STATUS_NOTIFICATION;
    struct _GET_PERFORMANCE {
        UCHAR OperationCode;
        UCHAR Except : 2;
        UCHAR Write : 1;
        UCHAR Tolerance : 2;
        UCHAR Reserved0 : 3;
        UCHAR StartingLBA[4];
        UCHAR Reserved1[2];
        UCHAR MaximumNumberOfDescriptors[2];
        UCHAR Type;
        UCHAR Control;
    } GET_PERFORMANCE;
    struct _READ_DVD_STRUCTURE {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR RMDBlockNumber[4];
        UCHAR LayerNumber;
        UCHAR Format;
        UCHAR AllocationLength[2];
        UCHAR Reserved3 : 6;
        UCHAR AGID : 2;
        UCHAR Control;
    } READ_DVD_STRUCTURE;
    struct _SET_STREAMING {
        UCHAR OperationCode;
        UCHAR Reserved[8];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } SET_STREAMING;
    struct _SEND_DVD_STRUCTURE {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[5];
        UCHAR Format;
        UCHAR ParameterListLength[2];
        UCHAR Reserved3;
        UCHAR Control;
    } SEND_DVD_STRUCTURE;
    struct _SEND_KEY {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[6];
        UCHAR ParameterListLength[2];
        UCHAR KeyFormat : 6;
        UCHAR AGID : 2;
        UCHAR Control;
    } SEND_KEY;
    struct _REPORT_KEY {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved2[2];
        UCHAR AllocationLength[2];
        UCHAR KeyFormat : 6;
        UCHAR AGID : 2;
        UCHAR Control;
    } REPORT_KEY;
    struct _SET_READ_AHEAD {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR TriggerLBA[4];
        UCHAR ReadAheadLBA[4];
        UCHAR Reserved2;
        UCHAR Control;
    } SET_READ_AHEAD;
    struct _READ_FORMATTED_CAPACITIES {
        UCHAR OperationCode;
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_FORMATTED_CAPACITIES;
    struct _REPORT_LUNS {
        UCHAR OperationCode;
        UCHAR Reserved1[5];
        UCHAR AllocationLength[4];
        UCHAR Reserved2[1];
        UCHAR Control;
    } REPORT_LUNS;
    struct _PERSISTENT_RESERVE_IN {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } PERSISTENT_RESERVE_IN;
    struct _PERSISTENT_RESERVE_OUT {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Type : 4;
        UCHAR Scope : 4;
        UCHAR Reserved2[4];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } PERSISTENT_RESERVE_OUT;
    struct _REPORT_TIMESTAMP {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Reserved2[4];
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;
    } REPORT_TIMESTAMP;
    struct _SET_TIMESTAMP {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Reserved2[4];
        UCHAR ParameterListLength[4];
        UCHAR Reserved3;
        UCHAR Control;
    } SET_TIMESTAMP;
    struct _GET_CONFIGURATION {
        UCHAR OperationCode;
        UCHAR RequestType : 2;
        UCHAR Reserved1 : 6;
        UCHAR StartingFeature[2];
        UCHAR Reserved2[3];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } GET_CONFIGURATION;
    struct _SET_CD_SPEED {
        UCHAR OperationCode;
        union {
            UCHAR Reserved1;
            struct {
                UCHAR RotationControl : 2;
                UCHAR Reserved3 : 6;
            };
        };
        UCHAR ReadSpeed[2];
        UCHAR WriteSpeed[2];
        UCHAR Reserved2[5];
        UCHAR Control;
    } SET_CD_SPEED;
    struct _READ12 {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 2;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlock[4];
        UCHAR TransferLength[4];
        UCHAR Reserved2 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } READ12;
    struct _WRITE12 {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 1;
        UCHAR EBP : 1;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlock[4];
        UCHAR TransferLength[4];
        UCHAR Reserved2 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } WRITE12;
    struct _ATA_PASSTHROUGH12 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 1;
        UCHAR Protocol : 4;
        UCHAR MultipleCount : 3;
        UCHAR TLength : 2;
        UCHAR ByteBlock : 1;
        UCHAR TDir : 1;
        UCHAR Reserved2 : 1;
        UCHAR CkCond : 1;
        UCHAR Offline : 2;
        UCHAR Features;
        UCHAR SectorCount;
        UCHAR LbaLow;
        UCHAR LbaMid;
        UCHAR LbaHigh;
        UCHAR Device;
        UCHAR Command;
        UCHAR Reserved3;
        UCHAR Control;
    } ATA_PASSTHROUGH12;
    struct _READ16 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 3;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR ReadProtect : 3;
        UCHAR LogicalBlock[8];
        UCHAR TransferLength[4];
        UCHAR Reserved2 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } READ16;
    struct _WRITE16 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 3;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR WriteProtect : 3;
        UCHAR LogicalBlock[8];
        UCHAR TransferLength[4];
        UCHAR Reserved2 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } WRITE16;
    struct _VERIFY16 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 1;
        UCHAR ByteCheck : 1;
        UCHAR BlockVerify : 1;
        UCHAR Reserved2 : 1;
        UCHAR DisablePageOut : 1;
        UCHAR VerifyProtect : 3;
        UCHAR LogicalBlock[8];
        UCHAR VerificationLength[4];
        UCHAR Reserved3 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } VERIFY16;
    struct _SYNCHRONIZE_CACHE16 {
        UCHAR OperationCode;
        UCHAR Reserved1 : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved2 : 6;
        UCHAR LogicalBlock[8];
        UCHAR BlockCount[4];
        UCHAR Reserved3;
        UCHAR Control;
    } SYNCHRONIZE_CACHE16;
    struct _READ_CAPACITY16 {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR LogicalBlock[8];
        UCHAR AllocationLength[4];
        UCHAR PMI : 1;
        UCHAR Reserved2 : 7;
        UCHAR Control;
    } READ_CAPACITY16;
    struct _ATA_PASSTHROUGH16 {
        UCHAR OperationCode;
        UCHAR Extend : 1;
        UCHAR Protocol : 4;
        UCHAR MultipleCount : 3;
        UCHAR TLength : 2;
        UCHAR ByteBlock : 1;
        UCHAR TDir : 1;
        UCHAR Reserved1 : 1;
        UCHAR CkCond : 1;
        UCHAR Offline : 2;
        UCHAR Features15_8;
        UCHAR Features7_0;
        UCHAR SectorCount15_8;
        UCHAR SectorCount7_0;
        UCHAR LbaLow15_8;
        UCHAR LbaLow7_0;
        UCHAR LbaMid15_8;
        UCHAR LbaMid7_0;
        UCHAR LbaHigh15_8;
        UCHAR LbaHigh7_0;
        UCHAR Device;
        UCHAR Command;
        UCHAR Control;
    } ATA_PASSTHROUGH16;
    struct _GET_LBA_STATUS {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR StartingLBA[8];
        UCHAR AllocationLength[4];
        UCHAR Reserved2;
        UCHAR Control;
    } GET_LBA_STATUS;
    struct _TOKEN_OPERATION {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Reserved2[4];
        UCHAR ListIdentifier[4];
        UCHAR ParameterListLength[4];
        UCHAR GroupNumber : 5;
        UCHAR Reserved3 : 3;
        UCHAR Control;
    } TOKEN_OPERATION;
    struct _RECEIVE_TOKEN_INFORMATION {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR ListIdentifier[4];
        UCHAR Reserved2[4];
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;
    } RECEIVE_TOKEN_INFORMATION;
    struct _WRITE_BUFFER {
        UCHAR OperationCode;
        UCHAR Mode : 5;
        UCHAR ModeSpecific : 3;
        UCHAR BufferID;
        UCHAR BufferOffset[3];
        UCHAR ParameterListLength[3];
        UCHAR Control;
    } WRITE_BUFFER;
    struct _CLOSE_ZONE {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR ZoneId[8];
        UCHAR Reserved2[4];
        UCHAR All : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } CLOSE_ZONE;
    struct _FINISH_ZONE {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR ZoneId[8];
        UCHAR Reserved2[4];
        UCHAR All : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } FINISH_ZONE;
    struct _OPEN_ZONE {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR ZoneId[8];
        UCHAR Reserved2[4];
        UCHAR All : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } OPEN_ZONE;
    struct _RESET_WRITE_POINTER {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR ZoneId[8];
        UCHAR Reserved2[4];
        UCHAR All : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } RESET_WRITE_POINTER;
    struct _REPORT_ZONES {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR ZoneStartLBA[8];
        UCHAR AllocationLength[4];
        UCHAR ReportingOptions : 6;
        UCHAR Reserved3 : 1;
        UCHAR Partial : 1;
        UCHAR Control;
    } REPORT_ZONES;
    struct _GET_PHYSICAL_ELEMENT_STATUS {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Reserved2[4];
        UCHAR StartingElement[4];
        UCHAR AllocationLength[4];
        UCHAR ReportType : 4;
        UCHAR Reserved3 : 2;
        UCHAR Filter : 2;
        UCHAR Control;
    } GET_PHYSICAL_ELEMENT_STATUS;
    struct _REMOVE_ELEMENT_AND_TRUNCATE {
        UCHAR OperationCode;
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR RequestedCapacity[8];
        UCHAR ElementIdentifier[4];
        UCHAR Reserved2;
        UCHAR Control;
    } REMOVE_ELEMENT_AND_TRUNCATE;
    ULONG AsUlong[4];
    UCHAR AsByte[16];
} CDB, *PCDB;
typedef union _CDB32 {
    struct _CDB32GENERIC {
        UCHAR OperationCode;
        UCHAR Control;
        UCHAR Reserved1[4];
        UCHAR Group : 5;
        UCHAR Reserved2 : 3;
        UCHAR AdditionalCDBLength;
        UCHAR ServiceAction[2];
        UCHAR Reserved3[2];
        UCHAR LogicalBlock[8];
        UCHAR Reserved4[8];
        UCHAR TransferLength[4];
    } CDB32GENERIC;
    ULONG AsUlong[8];
    UCHAR AsByte[32];
} CDB32, *PCDB32;
#pragma pack(pop, cdb)
#pragma pack(push, not_header, 1)
typedef struct _NOTIFICATION_EVENT_STATUS_HEADER {
    UCHAR EventDataLength[2];
    UCHAR NotificationClass : 3;
    UCHAR Reserved : 4;
    UCHAR NEA : 1;
    UCHAR SupportedEventClasses;
    UCHAR ClassEventData[0];
} NOTIFICATION_EVENT_STATUS_HEADER, *PNOTIFICATION_EVENT_STATUS_HEADER;
#pragma pack(pop, not_header)
#pragma pack(push, not_op, 1)
typedef struct _NOTIFICATION_OPERATIONAL_STATUS {
    UCHAR OperationalEvent : 4;
    UCHAR Reserved1 : 4;
    UCHAR OperationalStatus : 4;
    UCHAR Reserved2 : 3;
    UCHAR PersistentPrevented : 1;
    UCHAR Operation[2];
} NOTIFICATION_OPERATIONAL_STATUS, *PNOTIFICATION_OPERATIONAL_STATUS;
#pragma pack(pop, not_op)
#pragma pack(push, not_power, 1)
typedef struct _NOTIFICATION_POWER_STATUS {
    UCHAR PowerEvent : 4;
    UCHAR Reserved : 4;
    UCHAR PowerStatus;
    UCHAR Reserved2[2];
} NOTIFICATION_POWER_STATUS, *PNOTIFICATION_POWER_STATUS;
#pragma pack(pop, not_power)
#pragma pack(push, not_extern, 1)
typedef struct _NOTIFICATION_EXTERNAL_STATUS {
    UCHAR ExternalEvent : 4;
    UCHAR Reserved1 : 4;
    UCHAR ExternalStatus : 4;
    UCHAR Reserved2 : 3;
    UCHAR PersistentPrevented : 1;
    UCHAR Request[2];
} NOTIFICATION_EXTERNAL_STATUS, *PNOTIFICATION_EXTERNAL_STATUS;
#pragma pack(pop, not_extern)
#pragma pack(push, not_media, 1)
typedef struct _NOTIFICATION_MEDIA_STATUS {
    UCHAR MediaEvent : 4;
    UCHAR Reserved : 4;
    union {
        UCHAR PowerStatus;
        UCHAR MediaStatus;
        struct {
            UCHAR DoorTrayOpen : 1;
            UCHAR MediaPresent : 1;
            UCHAR ReservedX : 6;
        };
    };
    UCHAR StartSlot;
    UCHAR EndSlot;
} NOTIFICATION_MEDIA_STATUS, *PNOTIFICATION_MEDIA_STATUS;
#pragma pack(pop, not_media)
#pragma pack(push, not_multi, 1)
typedef struct _NOTIFICATION_MULTI_HOST_STATUS {
    UCHAR MultiHostEvent : 4;
    UCHAR Reserved1 : 4;
    UCHAR MultiHostStatus : 4;
    UCHAR Reserved2 : 3;
    UCHAR PersistentPrevented : 1;
    UCHAR Priority[2];
} NOTIFICATION_MULTI_HOST_STATUS, *PNOTIFICATION_MULTI_HOST_STATUS;
#pragma pack(pop, not_multi)
#pragma pack(push, not_busy, 1)
typedef struct _NOTIFICATION_BUSY_STATUS {
    UCHAR DeviceBusyEvent : 4;
    UCHAR Reserved : 4;
    UCHAR DeviceBusyStatus;
    UCHAR Time[2];
} NOTIFICATION_BUSY_STATUS, *PNOTIFICATION_BUSY_STATUS;
#pragma pack(pop, not_busy)
#pragma pack(push, spin_prot_params, 1)
typedef struct _SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA {
    UCHAR Reserved1[6];
    UCHAR SupportedSecurityListLength[2];
    UCHAR SupportedSecurityProtocol[0];
} SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA, *PSUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA;
#pragma pack(pop, spin_prot_params)
#pragma pack(push, dvd_struct_header, 1)
typedef struct _READ_DVD_STRUCTURES_HEADER {
    UCHAR Length[2];
    UCHAR Reserved[2];
    UCHAR Data[0];
} READ_DVD_STRUCTURES_HEADER, *PREAD_DVD_STRUCTURES_HEADER;
#pragma pack(pop, dvd_struct_header)
#pragma pack(push, dvdstuff, 1)
typedef struct _CDVD_KEY_HEADER {
    UCHAR DataLength[2];
    UCHAR Reserved[2];
    UCHAR Data[0];
} CDVD_KEY_HEADER, *PCDVD_KEY_HEADER;
typedef struct _CDVD_REPORT_AGID_DATA {
    UCHAR Reserved1[3];
    UCHAR Reserved2 : 6;
    UCHAR AGID : 2;
} CDVD_REPORT_AGID_DATA, *PCDVD_REPORT_AGID_DATA;
typedef struct _CDVD_CHALLENGE_KEY_DATA {
    UCHAR ChallengeKeyValue[10];
    UCHAR Reserved[2];
} CDVD_CHALLENGE_KEY_DATA, *PCDVD_CHALLENGE_KEY_DATA;
typedef struct _CDVD_KEY_DATA {
    UCHAR Key[5];
    UCHAR Reserved[3];
} CDVD_KEY_DATA, *PCDVD_KEY_DATA;
typedef struct _CDVD_REPORT_ASF_DATA {
    UCHAR Reserved1[3];
    UCHAR Success : 1;
    UCHAR Reserved2 : 7;
} CDVD_REPORT_ASF_DATA, *PCDVD_REPORT_ASF_DATA;
typedef struct _CDVD_TITLE_KEY_HEADER {
    UCHAR DataLength[2];
    UCHAR Reserved1[1];
    UCHAR Reserved2 : 3;
    UCHAR CGMS : 2;
    UCHAR CP_SEC : 1;
    UCHAR CPM : 1;
    UCHAR Zero : 1;
    CDVD_KEY_DATA TitleKey;
} CDVD_TITLE_KEY_HEADER, *PCDVD_TITLE_KEY_HEADER;
#pragma pack(pop, dvdstuff)
#pragma pack(push, format_unit, 1)
typedef struct _FORMAT_DESCRIPTOR {
    UCHAR NumberOfBlocks[4];
    UCHAR FormatSubType : 2;
    UCHAR FormatType : 6;
    UCHAR BlockLength[3];
} FORMAT_DESCRIPTOR, *PFORMAT_DESCRIPTOR;
typedef struct _FORMAT_LIST_HEADER {
    UCHAR Reserved;
    UCHAR VendorSpecific : 1;
    UCHAR Immediate : 1;
    UCHAR TryOut : 1;
    UCHAR IP : 1;
    UCHAR STPF : 1;
    UCHAR DCRT : 1;
    UCHAR DPRY : 1;
    UCHAR FOV : 1;
    UCHAR FormatDescriptorLength[2];
    FORMAT_DESCRIPTOR Descriptors[0];
} FORMAT_LIST_HEADER, *PFORMAT_LIST_HEADER;
#pragma pack(pop, format_unit)
#pragma pack(push, formatted_capacity, 1)
typedef struct _FORMATTED_CAPACITY_DESCRIPTOR {
    UCHAR NumberOfBlocks[4];
    UCHAR Maximum : 1;
    UCHAR Valid : 1;
    UCHAR FormatType : 6;
    UCHAR BlockLength[3];
} FORMATTED_CAPACITY_DESCRIPTOR, *PFORMATTED_CAPACITY_DESCRIPTOR;
typedef struct _FORMATTED_CAPACITY_LIST {
    UCHAR Reserved[3];
    UCHAR CapacityListLength;
    FORMATTED_CAPACITY_DESCRIPTOR Descriptors[0];
} FORMATTED_CAPACITY_LIST, *PFORMATTED_CAPACITY_LIST;
#pragma pack(pop, formatted_capacity)
#pragma pack(push, discinfo, 1)
typedef struct _OPC_TABLE_ENTRY {
    UCHAR Speed[2];
    UCHAR OPCValue[6];
} OPC_TABLE_ENTRY, *POPC_TABLE_ENTRY;
typedef struct _DISC_INFORMATION {
    UCHAR Length[2];
    UCHAR DiscStatus : 2;
    UCHAR LastSessionStatus : 2;
    UCHAR Erasable : 1;
    UCHAR Reserved1 : 3;
    UCHAR FirstTrackNumber;
    UCHAR NumberOfSessionsLsb;
    UCHAR LastSessionFirstTrackLsb;
    UCHAR LastSessionLastTrackLsb;
    UCHAR MrwStatus : 2;
    UCHAR MrwDirtyBit : 1;
    UCHAR Reserved2 : 2;
    UCHAR URU : 1;
    UCHAR DBC_V : 1;
    UCHAR DID_V : 1;
    UCHAR DiscType;
    UCHAR NumberOfSessionsMsb;
    UCHAR LastSessionFirstTrackMsb;
    UCHAR LastSessionLastTrackMsb;
    UCHAR DiskIdentification[4];
    UCHAR LastSessionLeadIn[4];
    UCHAR LastPossibleLeadOutStartTime[4];
    UCHAR DiskBarCode[8];
    UCHAR Reserved4;
    UCHAR NumberOPCEntries;
    OPC_TABLE_ENTRY OPCTable[ 1 ];
} DISC_INFORMATION, *PDISC_INFORMATION;
typedef struct _DISK_INFORMATION {
    UCHAR Length[2];
    UCHAR DiskStatus : 2;
    UCHAR LastSessionStatus : 2;
    UCHAR Erasable : 1;
    UCHAR Reserved1 : 3;
    UCHAR FirstTrackNumber;
    UCHAR NumberOfSessions;
    UCHAR LastSessionFirstTrack;
    UCHAR LastSessionLastTrack;
    UCHAR Reserved2 : 5;
    UCHAR GEN : 1;
    UCHAR DBC_V : 1;
    UCHAR DID_V : 1;
    UCHAR DiskType;
    UCHAR Reserved3[3];
    UCHAR DiskIdentification[4];
    UCHAR LastSessionLeadIn[4];
    UCHAR LastPossibleStartTime[4];
    UCHAR DiskBarCode[8];
    UCHAR Reserved4;
    UCHAR NumberOPCEntries;
    OPC_TABLE_ENTRY OPCTable[0];
} DISK_INFORMATION, *PDISK_INFORMATION;
#pragma pack(pop, discinfo)
#pragma pack(push, cdheader, 1)
typedef struct _DATA_BLOCK_HEADER {
    UCHAR DataMode;
    UCHAR Reserved[4];
    union {
        UCHAR LogicalBlockAddress[4];
        struct {
            UCHAR Reserved;
            UCHAR M;
            UCHAR S;
            UCHAR F;
        } MSF;
    };
} DATA_BLOCK_HEADER, *PDATA_BLOCK_HEADER;
#pragma pack(pop, cdheader)
#pragma pack(push, track_info, 1)
typedef struct _TRACK_INFORMATION {
    UCHAR Length[2];
    UCHAR TrackNumber;
    UCHAR SessionNumber;
    UCHAR Reserved1;
    UCHAR TrackMode : 4;
    UCHAR Copy : 1;
    UCHAR Damage : 1;
    UCHAR Reserved2 : 2;
    UCHAR DataMode : 4;
    UCHAR FP : 1;
    UCHAR Packet : 1;
    UCHAR Blank : 1;
    UCHAR RT : 1;
    UCHAR NWA_V : 1;
    UCHAR Reserved3 : 7;
    UCHAR TrackStartAddress[4];
    UCHAR NextWritableAddress[4];
    UCHAR FreeBlocks[4];
    UCHAR FixedPacketSize[4];
} TRACK_INFORMATION, *PTRACK_INFORMATION;
typedef struct _TRACK_INFORMATION2 {
    UCHAR Length[2];
    UCHAR TrackNumberLsb;
    UCHAR SessionNumberLsb;
    UCHAR Reserved4;
    UCHAR TrackMode : 4;
    UCHAR Copy : 1;
    UCHAR Damage : 1;
    UCHAR Reserved5 : 2;
    UCHAR DataMode : 4;
    UCHAR FixedPacket : 1;
    UCHAR Packet : 1;
    UCHAR Blank : 1;
    UCHAR ReservedTrack : 1;
    UCHAR NWA_V : 1;
    UCHAR LRA_V : 1;
    UCHAR Reserved6 : 6;
    UCHAR TrackStartAddress[4];
    UCHAR NextWritableAddress[4];
    UCHAR FreeBlocks[4];
    UCHAR FixedPacketSize[4];
    UCHAR TrackSize[4];
    UCHAR LastRecordedAddress[4];
    UCHAR TrackNumberMsb;
    UCHAR SessionNumberMsb;
    UCHAR Reserved7[2];
} TRACK_INFORMATION2, *PTRACK_INFORMATION2;
typedef struct _TRACK_INFORMATION3 {
    UCHAR Length[2];
    UCHAR TrackNumberLsb;
    UCHAR SessionNumberLsb;
    UCHAR Reserved4;
    UCHAR TrackMode : 4;
    UCHAR Copy : 1;
    UCHAR Damage : 1;
    UCHAR Reserved5 : 2;
    UCHAR DataMode : 4;
    UCHAR FixedPacket : 1;
    UCHAR Packet : 1;
    UCHAR Blank : 1;
    UCHAR ReservedTrack : 1;
    UCHAR NWA_V : 1;
    UCHAR LRA_V : 1;
    UCHAR Reserved6 : 6;
    UCHAR TrackStartAddress[4];
    UCHAR NextWritableAddress[4];
    UCHAR FreeBlocks[4];
    UCHAR FixedPacketSize[4];
    UCHAR TrackSize[4];
    UCHAR LastRecordedAddress[4];
    UCHAR TrackNumberMsb;
    UCHAR SessionNumberMsb;
    UCHAR Reserved7[2];
    UCHAR ReadCompatibilityLba[4];
} TRACK_INFORMATION3, *PTRACK_INFORMATION3;
#pragma pack(pop, track_info)
#pragma pack(push, perf_descriptor, 1)
typedef struct _PERFORMANCE_DESCRIPTOR {
    UCHAR RandomAccess : 1;
    UCHAR Exact : 1;
    UCHAR RestoreDefaults : 1;
    UCHAR WriteRotationControl : 2;
    UCHAR Reserved1 : 3;
    UCHAR Reserved[3];
    UCHAR StartLba[4];
    UCHAR EndLba[4];
    UCHAR ReadSize[4];
    UCHAR ReadTime[4];
    UCHAR WriteSize[4];
    UCHAR WriteTime[4];
} PERFORMANCE_DESCRIPTOR, *PPERFORMANCE_DESCRIPTOR;
#pragma pack(pop, perf_descriptor)
#pragma pack(push, scsi_mess, 1)
typedef struct _SCSI_EXTENDED_MESSAGE {
    UCHAR InitialMessageCode;
    UCHAR MessageLength;
    UCHAR MessageType;
    union _EXTENDED_ARGUMENTS {
        struct {
            UCHAR Modifier[4];
        } Modify;
        struct {
            UCHAR TransferPeriod;
            UCHAR ReqAckOffset;
        } Synchronous;
        struct{
            UCHAR Width;
        } Wide;
    }ExtendedArguments;
}SCSI_EXTENDED_MESSAGE, *PSCSI_EXTENDED_MESSAGE;
#pragma pack(pop, scsi_mess)
typedef USHORT VERSION_DESCRIPTOR, *PVERSION_DESCRIPTOR;
#pragma pack(push, inquiry, 1)
typedef struct _INQUIRYDATA {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR DeviceTypeModifier : 7;
    UCHAR RemovableMedia : 1;
    union {
        UCHAR Versions;
        struct {
            UCHAR ANSIVersion : 3;
            UCHAR ECMAVersion : 3;
            UCHAR ISOVersion : 2;
        };
    };
    UCHAR ResponseDataFormat : 4;
    UCHAR HiSupport : 1;
    UCHAR NormACA : 1;
    UCHAR TerminateTask : 1;
    UCHAR AERC : 1;
    UCHAR AdditionalLength;
    union {
        UCHAR Reserved;
        struct {
            UCHAR PROTECT : 1;
            UCHAR Reserved_1 : 2;
            UCHAR ThirdPartyCoppy : 1;
            UCHAR TPGS : 2;
            UCHAR ACC : 1;
            UCHAR SCCS : 1;
       };
    };
    UCHAR Addr16 : 1;
    UCHAR Addr32 : 1;
    UCHAR AckReqQ: 1;
    UCHAR MediumChanger : 1;
    UCHAR MultiPort : 1;
    UCHAR ReservedBit2 : 1;
    UCHAR EnclosureServices : 1;
    UCHAR ReservedBit3 : 1;
    UCHAR SoftReset : 1;
    UCHAR CommandQueue : 1;
    UCHAR TransferDisable : 1;
    UCHAR LinkedCommands : 1;
    UCHAR Synchronous : 1;
    UCHAR Wide16Bit : 1;
    UCHAR Wide32Bit : 1;
    UCHAR RelativeAddressing : 1;
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR VendorSpecific[20];
    UCHAR Reserved3[2];
    VERSION_DESCRIPTOR VersionDescriptors[8];
    UCHAR Reserved4[30];
} INQUIRYDATA, *PINQUIRYDATA;
#pragma pack(pop, inquiry)
#pragma pack(push, vpd_media_sn, 1)
typedef struct _VPD_MEDIA_SERIAL_NUMBER_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
    UCHAR SerialNumber[0];
} VPD_MEDIA_SERIAL_NUMBER_PAGE, *PVPD_MEDIA_SERIAL_NUMBER_PAGE;
#pragma pack(pop, vpd_media_sn)
#pragma pack(push, vpd_sn, 1)
typedef struct _VPD_SERIAL_NUMBER_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
    UCHAR SerialNumber[0];
} VPD_SERIAL_NUMBER_PAGE, *PVPD_SERIAL_NUMBER_PAGE;
#pragma pack(pop, vpd_sn)
#pragma pack(push, vpd_stuff, 1)
typedef enum _VPD_CODE_SET {
    VpdCodeSetReserved = 0,
    VpdCodeSetBinary = 1,
    VpdCodeSetAscii = 2,
    VpdCodeSetUTF8 = 3
} VPD_CODE_SET, *PVPD_CODE_SET;
typedef enum _VPD_ASSOCIATION {
    VpdAssocDevice = 0,
    VpdAssocPort = 1,
    VpdAssocTarget = 2,
    VpdAssocReserved1 = 3,
    VpdAssocReserved2 = 4
} VPD_ASSOCIATION, *PVPD_ASSOCIATION;
typedef enum _VPD_IDENTIFIER_TYPE {
    VpdIdentifierTypeVendorSpecific = 0,
    VpdIdentifierTypeVendorId = 1,
    VpdIdentifierTypeEUI64 = 2,
    VpdIdentifierTypeFCPHName = 3,
    VpdIdentifierTypePortRelative = 4,
    VpdIdentifierTypeTargetPortGroup = 5,
    VpdIdentifierTypeLogicalUnitGroup = 6,
    VpdIdentifierTypeMD5LogicalUnitId = 7,
    VpdIdentifierTypeSCSINameString = 8
} VPD_IDENTIFIER_TYPE, *PVPD_IDENTIFIER_TYPE;
typedef struct _VPD_IDENTIFICATION_DESCRIPTOR {
    UCHAR CodeSet : 4;
    UCHAR Reserved : 4;
    UCHAR IdentifierType : 4;
    UCHAR Association : 2;
    UCHAR Reserved2 : 2;
    UCHAR Reserved3;
    UCHAR IdentifierLength;
    UCHAR Identifier[0];
} VPD_IDENTIFICATION_DESCRIPTOR, *PVPD_IDENTIFICATION_DESCRIPTOR;
typedef struct _VPD_IDENTIFICATION_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
    UCHAR Descriptors[0];
} VPD_IDENTIFICATION_PAGE, *PVPD_IDENTIFICATION_PAGE;
typedef struct _VPD_EXTENDED_INQUIRY_DATA_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR PageLength[2];
    UCHAR RefChk : 1;
    UCHAR AppChk : 1;
    UCHAR GrdChk : 1;
    UCHAR Spt : 3;
    UCHAR ActivateMicrocode : 2;
    UCHAR SimpSup : 1;
    UCHAR OrdSup : 1;
    UCHAR HeadSup : 1;
    UCHAR PriorSup : 1;
    UCHAR GroupSup : 1;
    UCHAR UaskSup : 1;
    UCHAR Reserved0 : 2;
    UCHAR VSup : 1;
    UCHAR NvSup : 1;
    UCHAR Obsolete0 : 1;
    UCHAR WuSup : 1;
    UCHAR Reserved1 : 4;
    UCHAR LuiClr : 1;
    UCHAR Reserved2 : 3;
    UCHAR PiiSup : 1;
    UCHAR NoPiChk : 1;
    UCHAR Reserved3 : 2;
    UCHAR Obsolete1 : 1;
    UCHAR HssRelef : 1;
    UCHAR Reserved4 : 1;
    UCHAR RtdSup : 1;
    UCHAR RSup : 1;
    UCHAR LuCollectionType : 3;
    UCHAR Multi_i_t_Nexus_Microcode_Download : 4;
    UCHAR Reserved5 : 4;
    UCHAR ExtendedSelfTestCompletionMinutes[2];
    UCHAR Reserved6 : 5;
    UCHAR VsaSup : 1;
    UCHAR HraSup : 1;
    UCHAR PoaSup : 1;
    UCHAR MaxSupportedSenseDataLength;
    UCHAR Nrd0 : 1;
    UCHAR Nrd1 : 1;
    UCHAR Sac : 1;
    UCHAR Reserved7 : 3;
    UCHAR Ias : 1;
    UCHAR Ibs : 1;
    UCHAR MaxInquiryChangeLogs[2];
    UCHAR MaxModePageChangeLogs[2];
    UCHAR Reserved8[45];
} VPD_EXTENDED_INQUIRY_DATA_PAGE, *PVPD_EXTENDED_INQUIRY_DATA_PAGE;
typedef struct _VPD_ATA_INFORMATION_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR PageLength[2];
    UCHAR Reserved0[4];
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR DeviceSignature[20];
    UCHAR CommandCode;
    UCHAR Reserved1[3];
    UCHAR IdentifyDeviceData[512];
} VPD_ATA_INFORMATION_PAGE, *PVPD_ATA_INFORMATION_PAGE;
typedef struct _VPD_THIRD_PARTY_COPY_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR PageLength[2];
    UCHAR ThirdPartyCopyDescriptors[ANYSIZE_ARRAY];
} VPD_THIRD_PARTY_COPY_PAGE, *PVPD_THIRD_PARTY_COPY_PAGE;
typedef struct _WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR {
    UCHAR DescriptorType[2];
    UCHAR DescriptorLength[2];
    UCHAR VendorSpecific[6];
    UCHAR MaximumRangeDescriptors[2];
    UCHAR MaximumInactivityTimer[4];
    UCHAR DefaultInactivityTimer[4];
    UCHAR MaximumTokenTransferSize[8];
    UCHAR OptimalTransferCount[8];
} WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR, *PWINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR;
typedef struct _VPD_BLOCK_LIMITS_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR PageLength[2];
    union {
        struct {
            UCHAR Reserved0;
            UCHAR MaximumCompareAndWriteLength;
            UCHAR OptimalTransferLengthGranularity[2];
            UCHAR MaximumTransferLength[4];
            UCHAR OptimalTransferLength[4];
            UCHAR MaxPrefetchXDReadXDWriteTransferLength[4];
            UCHAR MaximumUnmapLBACount[4];
            UCHAR MaximumUnmapBlockDescriptorCount[4];
            UCHAR OptimalUnmapGranularity[4];
            union {
                struct {
                    UCHAR UnmapGranularityAlignmentByte3 : 7;
                    UCHAR UGAValid : 1;
                    UCHAR UnmapGranularityAlignmentByte2;
                    UCHAR UnmapGranularityAlignmentByte1;
                    UCHAR UnmapGranularityAlignmentByte0;
                };
                UCHAR UnmapGranularityAlignment[4];
            };
            UCHAR Reserved1[28];
        };
        UCHAR Descriptors[0];
    };
} VPD_BLOCK_LIMITS_PAGE, *PVPD_BLOCK_LIMITS_PAGE;
typedef struct _VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved0;
    UCHAR PageLength;
    UCHAR MediumRotationRateMsb;
    UCHAR MediumRotationRateLsb;
    UCHAR MediumProductType;
    UCHAR NominalFormFactor : 4;
    UCHAR WACEREQ : 2;
    UCHAR WABEREQ : 2;
    UCHAR VBULS : 1;
    UCHAR FUAB : 1;
    UCHAR BOCS : 1;
    UCHAR Reserved1 : 1;
    UCHAR ZONED : 2;
    UCHAR Reserved2 : 2;
    UCHAR Reserved3[3];
    UCHAR DepopulationTime[4];
    UCHAR Reserved4[48];
} VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE, *PVPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE;
typedef struct _VPD_LOGICAL_BLOCK_PROVISIONING_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR PageLength[2];
    UCHAR ThresholdExponent;
    UCHAR DP : 1;
    UCHAR ANC_SUP : 1;
    UCHAR LBPRZ : 1;
    UCHAR Reserved0 : 2;
    UCHAR LBPWS10 : 1;
    UCHAR LBPWS : 1;
    UCHAR LBPU : 1;
    UCHAR ProvisioningType : 3;
    UCHAR Reserved1 : 5;
    UCHAR Reserved2;
    UCHAR ProvisioningGroupDescr[0];
} VPD_LOGICAL_BLOCK_PROVISIONING_PAGE, *PVPD_LOGICAL_BLOCK_PROVISIONING_PAGE;
typedef struct _VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR PageLength[2];
    UCHAR URSWRZ : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2[3];
    UCHAR OptimalNumberOfOpenSequentialWritePreferredZone[4];
    UCHAR OptimalNumberOfNonSequentiallyWrittenSequentialWritePreferredZone[4];
    UCHAR MaxNumberOfOpenSequentialWriteRequiredZone[4];
    UCHAR Reserved3[44];
} VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE, *PVPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE;
typedef struct _VPD_SUPPORTED_PAGES_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
    UCHAR SupportedPageList[0];
} VPD_SUPPORTED_PAGES_PAGE, *PVPD_SUPPORTED_PAGES_PAGE;
#pragma pack(pop, vpd_stuff)
#pragma pack(push, log_page, 1)
typedef struct _LOG_PARAMETER_HEADER {
    UCHAR ParameterCode[2];
    union {
        UCHAR ControlByte;
        struct {
            UCHAR FormatAndLinking : 2;
            UCHAR TMC : 2;
            UCHAR ETC : 1;
            UCHAR TSD : 1;
            UCHAR Obsolete : 1;
            UCHAR DU : 1;
        };
    };
    UCHAR ParameterLength;
} LOG_PARAMETER_HEADER, *PLOG_PARAMETER_HEADER;
typedef struct _LOG_PARAMETER {
    LOG_PARAMETER_HEADER Header;
    union {
        UCHAR AsByte[0];
        struct _THRESHOLD_RESOURCE_COUNT {
            UCHAR ResourceCount[4];
            UCHAR Scope : 2;
            UCHAR Reserved1 : 6;
            UCHAR Reserved2[3];
        } THRESHOLD_RESOURCE_COUNT;
        struct _TEMPERATURE {
            UCHAR Reserved;
            UCHAR Temperature;
        } TEMPERATURE;
        struct _DATE_OF_MANUFACTURE {
            UCHAR Year[4];
            UCHAR Week[2];
        } DATE_OF_MANUFACTURE;
        struct _SELF_TEST_RESULTS {
            UCHAR SelfTestResults : 4;
            UCHAR Reserved1 : 1;
            UCHAR SelfTestCode : 3;
            UCHAR SelfTestNumber;
            UCHAR PowerOnHours[2];
            UCHAR AddressOfFirstFailure[8];
            UCHAR SenseKey : 4;
            UCHAR Reserved2 : 4;
            UCHAR AdditionalSenseCode;
            UCHAR AdditionalSenseCodeQualifier;
            UCHAR VendorSpecific;
        } SELF_TEST_RESULTS;
        struct _SOLID_STATE_MEDIA {
            UCHAR Reserved[3];
            UCHAR PercentageUsed;
        } SOLID_STATE_MEDIA;
        struct _BACKGROUND_SCAN_STATUS {
            UCHAR PowerOnMinutes[4];
            UCHAR Reserved;
            UCHAR ScanStatus;
            UCHAR ScansPerformed[2];
            UCHAR ScanProgress[2];
            UCHAR MediumScansPerformed[2];
        } BACKGROUND_SCAN_STATUS;
        struct _INFORMATIONAL_EXCEPTIONS {
            UCHAR ASC;
            UCHAR ASCQ;
            UCHAR MostRecentTemperature;
            UCHAR VendorSpecific[ANYSIZE_ARRAY];
        } INFORMATIONAL_EXCEPTIONS;
    };
} LOG_PARAMETER, *PLOG_PARAMETER;
typedef struct _LOG_PAGE {
    UCHAR PageCode : 6;
    UCHAR SPF : 1;
    UCHAR DS : 1;
    UCHAR SubPageCode;
    UCHAR PageLength[2];
    LOG_PARAMETER Parameters[0];
} LOG_PAGE, *PLOG_PAGE;
#pragma pack(pop, log_page)
typedef struct _LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT {
    LOG_PARAMETER_HEADER Header;
    UCHAR ResourceCount[4];
    UCHAR Scope :2;
    UCHAR Reserved0 :6;
    UCHAR Reserved1[3];
} LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT, *PLOG_PARAMETER_THRESHOLD_RESOURCE_COUNT;
typedef struct _LOG_PAGE_LOGICAL_BLOCK_PROVISIONING {
    UCHAR PageCode : 6;
    UCHAR SPF : 1;
    UCHAR DS : 1;
    UCHAR SubPageCode;
    UCHAR PageLength[2];
    LOG_PARAMETER_HEADER Parameters[0];
} LOG_PAGE_LOGICAL_BLOCK_PROVISIONING, *PLOG_PAGE_LOGICAL_BLOCK_PROVISIONING;
#pragma pack(push, reserve_in_stuff, 1)
typedef struct {
    UCHAR Generation[4];
    UCHAR AdditionalLength[4];
    UCHAR ReservationKeyList[0][8];
} PRI_REGISTRATION_LIST, *PPRI_REGISTRATION_LIST;
typedef struct {
    UCHAR ReservationKey[8];
    UCHAR ScopeSpecificAddress[4];
    UCHAR Reserved;
    UCHAR Type : 4;
    UCHAR Scope : 4;
    UCHAR Obsolete[2];
} PRI_RESERVATION_DESCRIPTOR, *PPRI_RESERVATION_DESCRIPTOR;
typedef struct {
    UCHAR Generation[4];
    UCHAR AdditionalLength[4];
    PRI_RESERVATION_DESCRIPTOR Reservations[0];
} PRI_RESERVATION_LIST, *PPRI_RESERVATION_LIST;
#pragma pack(pop, reserve_in_stuff)
#pragma pack(push, reserve_out_stuff, 1)
typedef struct {
    UCHAR ReservationKey[8];
    UCHAR ServiceActionReservationKey[8];
    UCHAR ScopeSpecificAddress[4];
    UCHAR ActivatePersistThroughPowerLoss : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2;
    UCHAR Obsolete[2];
} PRO_PARAMETER_LIST, *PPRO_PARAMETER_LIST;
#pragma pack(pop, reserve_out_stuff)
#pragma pack(push, report_timestamp_stuff, 1)
typedef struct {
    UCHAR ParameterDataLength[2];
    UCHAR Origin : 3;
    UCHAR Reserved1 : 5;
    UCHAR Reserved2;
    UCHAR Timestamp[6];
    UCHAR Reserved3[2];
} RT_PARAMETER_DATA, *PRT_PARAMETER_DATA;
#pragma pack(pop, report_timestamp_stuff)
#pragma pack(push, set_timestamp_stuff, 1)
typedef struct {
    UCHAR Reserved1[4];
    UCHAR Timestamp[6];
    UCHAR Reserved2[2];
} ST_PARAMETER_DATA, *PST_PARAMETER_DATA;
#pragma pack(pop, set_timestamp_stuff)
#pragma pack(push, windows_token_operation, 1)
typedef struct {
    UCHAR LogicalBlockAddress[8];
    UCHAR TransferLength[4];
    UCHAR Reserved[4];
} BLOCK_DEVICE_RANGE_DESCRIPTOR, *PBLOCK_DEVICE_RANGE_DESCRIPTOR;
typedef struct {
    UCHAR PopulateTokenDataLength[2];
    UCHAR Immediate : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2;
    UCHAR InactivityTimeout[4];
    UCHAR Reserved3[6];
    UCHAR BlockDeviceRangeDescriptorListLength[2];
    UCHAR BlockDeviceRangeDescriptor[ANYSIZE_ARRAY];
} POPULATE_TOKEN_HEADER, *PPOPULATE_TOKEN_HEADER;
typedef struct {
    UCHAR WriteUsingTokenDataLength[2];
    UCHAR Immediate : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2[5];
    UCHAR BlockOffsetIntoToken[8];
    UCHAR Token[BLOCK_DEVICE_TOKEN_SIZE];
    UCHAR Reserved3[6];
    UCHAR BlockDeviceRangeDescriptorListLength[2];
    UCHAR BlockDeviceRangeDescriptor[ANYSIZE_ARRAY];
} WRITE_USING_TOKEN_HEADER, *PWRITE_USING_TOKEN_HEADER;
typedef struct {
    UCHAR AvailableData[4];
    UCHAR ResponseToServiceAction : 5;
    UCHAR Reserved1 : 3;
    UCHAR OperationStatus : 7;
    UCHAR Reserved2 : 1;
    UCHAR OperationCounter[2];
    UCHAR EstimatedStatusUpdateDelay[4];
    UCHAR CompletionStatus;
    UCHAR SenseDataFieldLength;
    UCHAR SenseDataLength;
    UCHAR TransferCountUnits;
    UCHAR TransferCount[8];
    UCHAR SegmentsProcessed[2];
    UCHAR Reserved3[6];
    UCHAR SenseData[ANYSIZE_ARRAY];
} RECEIVE_TOKEN_INFORMATION_HEADER, *PRECEIVE_TOKEN_INFORMATION_HEADER;
typedef struct {
    UCHAR TokenDescriptorsLength[4];
    UCHAR TokenDescriptor[ANYSIZE_ARRAY];
} RECEIVE_TOKEN_INFORMATION_RESPONSE_HEADER, *PRECEIVE_TOKEN_INFORMATION_RESPONSE_HEADER;
typedef struct {
    UCHAR TokenIdentifier[2];
    UCHAR Token[BLOCK_DEVICE_TOKEN_SIZE];
} BLOCK_DEVICE_TOKEN_DESCRIPTOR, *PBLOCK_DEVICE_TOKEN_DESCRIPTOR;
typedef enum _OPERATION_STATUS {
    OPERATION_COMPLETED_WITH_SUCCESS = 0x01,
    OPERATION_COMPLETED_WITH_ERROR = 0x02,
    OPERATION_COMPLETED_WITH_RESIDUAL_DATA = 0x03,
    OPERATION_IN_PROGRESS_IN_FOREGROUND = 0x11,
    OPERATION_IN_PROGRESS_IN_BACKGROUND = 0x12,
    OPERATION_TERMINATED = 0x60
} OPERATION_STATUS, *POPERATION_STATUS;
typedef enum _TRANSFER_COUNT_UNITS {
    TRANSFER_COUNT_UNITS_BYTES = 0,
    TRANSFER_COUNT_UNITS_KIBIBYTES = 1,
    TRANSFER_COUNT_UNITS_MEBIBYTES = 2,
    TRANSFER_COUNT_UNITS_GIBIBYTES = 3,
    TRANSFER_COUNT_UNITS_TEBIBYTES = 4,
    TRANSFER_COUNT_UNITS_PEBIBYTES = 5,
    TRANSFER_COUNT_UNITS_EXBIBYTES = 6,
    TRANSFER_COUNT_UNITS_NUMBER_BLOCKS = 0xF1
} TRANSFER_COUNT_UNITS, *PTRANSFER_COUNT_UNITS;
#pragma pack(pop, windows_token_operation)
#pragma pack(push, sanitize, 1)
typedef struct _OVERWRITE_PARAMETER_LIST {
    UCHAR OverWriteCount : 5;
    UCHAR Test : 2;
    UCHAR Invert : 1;
    UCHAR Reserved1;
    UCHAR InitializationPatternLength[2];
    UCHAR InitializationPattern[ANYSIZE_ARRAY];
} OVERWRITE_PARAMETER_LIST, *POVERWRITE_PARAMETER_LIST;
#pragma pack(pop, sanitize)
#pragma pack(push, sensedata, 1)
typedef struct _SENSE_DATA {
    UCHAR ErrorCode:7;
    UCHAR Valid:1;
    UCHAR SegmentNumber;
    UCHAR SenseKey:4;
    UCHAR Reserved:1;
    UCHAR IncorrectLength:1;
    UCHAR EndOfMedia:1;
    UCHAR FileMark:1;
    UCHAR Information[4];
    UCHAR AdditionalSenseLength;
    UCHAR CommandSpecificInformation[4];
    UCHAR AdditionalSenseCode;
    UCHAR AdditionalSenseCodeQualifier;
    UCHAR FieldReplaceableUnitCode;
    UCHAR SenseKeySpecific[3];
} SENSE_DATA, *PSENSE_DATA;
#pragma pack(pop, sensedata)
#pragma pack(push, sensedata_ex, 1)
typedef struct _SCSI_SENSE_DESCRIPTOR_HEADER {
    UCHAR DescriptorType;
    UCHAR AdditionalLength;
} SCSI_SENSE_DESCRIPTOR_HEADER, *PSCSI_SENSE_DESCRIPTOR_HEADER;
typedef struct _SCSI_SENSE_DESCRIPTOR_INFORMATION {
    SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Valid:1;
    UCHAR Reserved1:7;
    UCHAR Reserved2;
    UCHAR Information[8];
} SCSI_SENSE_DESCRIPTOR_INFORMATION, *PSCSI_SENSE_DESCRIPTOR_INFORMATION;
typedef struct _SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND {
    SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Reserved1;
    UCHAR Reserved2:5;
    UCHAR IncorrectLength:1;
    UCHAR Reserved3:2;
} SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND, *PSCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND;
typedef struct _SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN {
    SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Extend:1;
    UCHAR Reserved1:7;
    UCHAR Error;
    UCHAR SectorCount15_8;
    UCHAR SectorCount7_0;
    UCHAR LbaLow15_8;
    UCHAR LbaLow7_0;
    UCHAR LbaMid15_8;
    UCHAR LbaMid7_0;
    UCHAR LbaHigh15_8;
    UCHAR LbaHigh7_0;
    UCHAR Device;
    UCHAR Status;
} SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN, *PSCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN;
typedef struct _SENSE_DATA FIXED_SENSE_DATA, *PFIXED_SENSE_DATA;
typedef struct _DESCRIPTOR_SENSE_DATA {
    UCHAR ErrorCode:7;
    UCHAR Reserved1:1;
    UCHAR SenseKey:4;
    UCHAR Reserved2:4;
    UCHAR AdditionalSenseCode;
    UCHAR AdditionalSenseCodeQualifier;
    UCHAR Reserved3[3];
    UCHAR AdditionalSenseLength;
    UCHAR DescriptorBuffer[ANYSIZE_ARRAY];
} DESCRIPTOR_SENSE_DATA, *PDESCRIPTOR_SENSE_DATA;
typedef union _SENSE_DATA_EX {
    FIXED_SENSE_DATA FixedData;
    DESCRIPTOR_SENSE_DATA DescriptorData;
} SENSE_DATA_EX, *PSENSE_DATA_EX;
#pragma pack(pop, sensedata_ex)
#pragma pack(push, read_capacity, 1)
typedef struct _READ_CAPACITY_DATA {
    ULONG LogicalBlockAddress;
    ULONG BytesPerBlock;
} READ_CAPACITY_DATA, *PREAD_CAPACITY_DATA;
#pragma pack(pop, read_capacity)
#pragma pack(push, read_capacity_ex, 1)
typedef struct _READ_CAPACITY_DATA_EX {
    LARGE_INTEGER LogicalBlockAddress;
    ULONG BytesPerBlock;
} READ_CAPACITY_DATA_EX, *PREAD_CAPACITY_DATA_EX;
#pragma pack(pop, read_capacity_ex)
#pragma pack(push, read_capacity16, 1)
typedef struct _READ_CAPACITY16_DATA {
    LARGE_INTEGER LogicalBlockAddress;
    ULONG BytesPerBlock;
    UCHAR ProtectionEnable : 1;
    UCHAR ProtectionType : 3;
    UCHAR RcBasis : 2;
    UCHAR Reserved : 2;
    UCHAR LogicalPerPhysicalExponent : 4;
    UCHAR ProtectionInfoExponent : 4;
    UCHAR LowestAlignedBlock_MSB : 6;
    UCHAR LBPRZ : 1;
    UCHAR LBPME : 1;
    UCHAR LowestAlignedBlock_LSB;
    UCHAR Reserved3[16];
} READ_CAPACITY16_DATA, *PREAD_CAPACITY16_DATA;
#pragma pack(pop, read_capacity16)
#pragma pack(push, get_lba_status, 1)
typedef struct _LBA_STATUS_DESCRIPTOR {
    ULONGLONG StartingLBA;
    ULONG LogicalBlockCount;
    UCHAR ProvisioningStatus : 4;
    UCHAR Reserved1 : 4;
    UCHAR Reserved2[3];
} LBA_STATUS_DESCRIPTOR, *PLBA_STATUS_DESCRIPTOR;
typedef struct _LBA_STATUS_LIST_HEADER {
    ULONG ParameterLength;
    ULONG Reserved;
    LBA_STATUS_DESCRIPTOR Descriptors[0];
} LBA_STATUS_LIST_HEADER, *PLBA_STATUS_LIST_HEADER;
#pragma pack(pop, get_lba_status)
#pragma pack(push, read_block_limits, 1)
typedef struct _READ_BLOCK_LIMITS {
    UCHAR Reserved;
    UCHAR BlockMaximumSize[3];
    UCHAR BlockMinimumSize[2];
} READ_BLOCK_LIMITS_DATA, *PREAD_BLOCK_LIMITS_DATA;
#pragma pack(pop, read_block_limits)
#pragma pack(push, read_buffer_capacity, 1)
typedef struct _READ_BUFFER_CAPACITY_DATA {
    UCHAR DataLength[2];
    UCHAR Reserved1;
    UCHAR BlockDataReturned : 1;
    UCHAR Reserved4 : 7;
    UCHAR TotalBufferSize[4];
    UCHAR AvailableBufferSize[4];
} READ_BUFFER_CAPACITY_DATA, *PREAD_BUFFER_CAPACITY_DATA;
#pragma pack(pop, read_buffer_capacity)
#pragma pack(push, zone_descriptors, 1)
typedef struct _ZONE_DESCRIPTIOR {
    UCHAR ZoneType : 4;
    UCHAR Reserved1 : 4;
    UCHAR Reset : 1;
    UCHAR Non_Seq : 1;
    UCHAR Reserved2 : 2;
    UCHAR ZoneCondition : 4;
    UCHAR Reserved3[6];
    UCHAR ZoneLength[8];
    UCHAR ZoneStartLBA[8];
    UCHAR WritePointerLBA[8];
    UCHAR Reserved4[32];
} ZONE_DESCRIPTIOR, *PZONE_DESCRIPTIOR;
#pragma pack(pop, zone_descriptors)
#pragma pack(push, report_zones, 1)
typedef struct _REPORT_ZONES_DATA {
    UCHAR ZoneListLength[4];
    UCHAR Same : 4;
    UCHAR Reserved1 : 4;
    UCHAR Reserved2[3];
    UCHAR MaxLBA[8];
    UCHAR Reserved3[48];
    ZONE_DESCRIPTIOR ZoneDescriptors[ANYSIZE_ARRAY];
} REPORT_ZONES_DATA, *PREPORT_ZONES_DATA;
#pragma pack(pop, report_zones)
#pragma pack(push, mode_params, 1)
typedef struct _MODE_PARAMETER_HEADER {
    UCHAR ModeDataLength;
    UCHAR MediumType;
    UCHAR DeviceSpecificParameter;
    UCHAR BlockDescriptorLength;
}MODE_PARAMETER_HEADER, *PMODE_PARAMETER_HEADER;
typedef struct _MODE_PARAMETER_HEADER10 {
    UCHAR ModeDataLength[2];
    UCHAR MediumType;
    UCHAR DeviceSpecificParameter;
    UCHAR Reserved[2];
    UCHAR BlockDescriptorLength[2];
}MODE_PARAMETER_HEADER10, *PMODE_PARAMETER_HEADER10;
#pragma pack(pop, mode_params)
#pragma pack(push, mode_params_block, 1)
typedef struct _MODE_PARAMETER_BLOCK {
    UCHAR DensityCode;
    UCHAR NumberOfBlocks[3];
    UCHAR Reserved;
    UCHAR BlockLength[3];
}MODE_PARAMETER_BLOCK, *PMODE_PARAMETER_BLOCK;
#pragma pack(pop, mode_params_block)
#pragma pack(push, mode_page_disconnect, 1)
typedef struct _MODE_DISCONNECT_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR BufferFullRatio;
    UCHAR BufferEmptyRatio;
    UCHAR BusInactivityLimit[2];
    UCHAR BusDisconnectTime[2];
    UCHAR BusConnectTime[2];
    UCHAR MaximumBurstSize[2];
    UCHAR DataTransferDisconnect : 2;
    UCHAR Reserved2[3];
}MODE_DISCONNECT_PAGE, *PMODE_DISCONNECT_PAGE;
#pragma pack(pop, mode_page_disconnect)
#pragma pack(push, mode_page_caching, 1)
typedef struct _MODE_CACHING_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR ReadDisableCache : 1;
    UCHAR MultiplicationFactor : 1;
    UCHAR WriteCacheEnable : 1;
    UCHAR Reserved2 : 5;
    UCHAR WriteRetensionPriority : 4;
    UCHAR ReadRetensionPriority : 4;
    UCHAR DisablePrefetchTransfer[2];
    UCHAR MinimumPrefetch[2];
    UCHAR MaximumPrefetch[2];
    UCHAR MaximumPrefetchCeiling[2];
}MODE_CACHING_PAGE, *PMODE_CACHING_PAGE;
#pragma pack(pop, mode_page_caching)
#pragma pack(push, mode_page_caching_ex, 1)
typedef struct _MODE_CACHING_PAGE_EX {
    UCHAR PageCode : 6;
    UCHAR SubPageFormat : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR ReadDisableCache : 1;
    UCHAR MultiplicationFactor : 1;
    UCHAR WriteCacheEnable : 1;
    UCHAR SizeEnable : 1;
    UCHAR Discontinuity : 1;
    UCHAR CachingAnalysisPermitted : 1;
    UCHAR AbortPreFetch : 1;
    UCHAR InitiatorControl : 1;
    UCHAR WriteRetensionPriority : 4;
    UCHAR ReadRetensionPriority : 4;
    UCHAR DisablePrefetchTransfer[2];
    UCHAR MinimumPrefetch[2];
    UCHAR MaximumPrefetch[2];
    UCHAR MaximumPrefetchCeiling[2];
    UCHAR NvCacheDisable : 1;
    UCHAR SyncCacheProgress : 2;
    UCHAR VendorSpecific : 2;
    UCHAR DisableReadAhead : 1;
    UCHAR LogicalBlockCacheSegmentSize : 1;
    UCHAR ForceSequentialWrite : 1;
    UCHAR NumberOfCacheSegments;
    UCHAR CacheSegmentSize[2];
    UCHAR Reserved[4];
}MODE_CACHING_PAGE_EX, *PMODE_CACHING_PAGE_EX;
#pragma pack(pop, mode_page_caching_ex)
#pragma pack(push, mode_page_control, 1)
typedef struct _MODE_CONTROL_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR RLEC : 1;
    UCHAR GLTSD : 1;
    UCHAR D_SENSE : 1;
    UCHAR DPICZ : 1;
    UCHAR TMF_ONLY : 1;
    UCHAR TST : 3;
    UCHAR Obsolete1 : 1;
    UCHAR QERR : 2;
    UCHAR NUAR : 1;
    UCHAR QueueAlgorithmModifier : 4;
    UCHAR Obsolete2 : 3;
    UCHAR SWP : 1;
    UCHAR UA_INTLCK_CTRL : 2;
    UCHAR RAC : 1;
    UCHAR VS : 1;
    UCHAR AutoloadMode : 3;
    UCHAR Reserved2 : 1;
    UCHAR RWWP : 1;
    UCHAR ATMPE : 1;
    UCHAR TAS : 1;
    UCHAR ATO : 1;
    UCHAR Obsolete3[2];
    UCHAR BusyTimeoutPeriod[2];
    UCHAR ExtendeSelfTestCompletionTime[2];
}MODE_CONTROL_PAGE, *PMODE_CONTROL_PAGE;
#pragma pack(pop, mode_page_control)
#pragma pack(push, mode_page_wp2, 1)
typedef struct _MODE_CDROM_WRITE_PARAMETERS_PAGE2 {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR WriteType : 4;
    UCHAR TestWrite : 1;
    UCHAR LinkSizeValid : 1;
    UCHAR BufferUnderrunFreeEnabled : 1;
    UCHAR Reserved2 : 1;
    UCHAR TrackMode : 4;
    UCHAR Copy : 1;
    UCHAR FixedPacket : 1;
    UCHAR MultiSession : 2;
    UCHAR DataBlockType : 4;
    UCHAR Reserved3 : 4;
    UCHAR LinkSize;
    UCHAR Reserved4;
    UCHAR HostApplicationCode : 6;
    UCHAR Reserved5 : 2;
    UCHAR SessionFormat;
    UCHAR Reserved6;
    UCHAR PacketSize[4];
    UCHAR AudioPauseLength[2];
    UCHAR MediaCatalogNumber[16];
    UCHAR ISRC[16];
    UCHAR SubHeaderData[4];
} MODE_CDROM_WRITE_PARAMETERS_PAGE2, *PMODE_CDROM_WRITE_PARAMETERS_PAGE2;
#pragma pack(pop, mode_page_wp2)
#pragma pack(push, mode_page_wp, 1)
typedef struct _MODE_CDROM_WRITE_PARAMETERS_PAGE {
    UCHAR PageLength;
    UCHAR WriteType : 4;
    UCHAR TestWrite : 1;
    UCHAR LinkSizeValid : 1;
    UCHAR BufferUnderrunFreeEnabled : 1;
    UCHAR Reserved2 : 1;
    UCHAR TrackMode : 4;
    UCHAR Copy : 1;
    UCHAR FixedPacket : 1;
    UCHAR MultiSession : 2;
    UCHAR DataBlockType : 4;
    UCHAR Reserved3 : 4;
    UCHAR LinkSize;
    UCHAR Reserved4;
    UCHAR HostApplicationCode : 6;
    UCHAR Reserved5 : 2;
    UCHAR SessionFormat;
    UCHAR Reserved6;
    UCHAR PacketSize[4];
    UCHAR AudioPauseLength[2];
    UCHAR Reserved7 : 7;
    UCHAR MediaCatalogNumberValid : 1;
    UCHAR MediaCatalogNumber[13];
    UCHAR MediaCatalogNumberZero;
    UCHAR MediaCatalogNumberAFrame;
    UCHAR Reserved8 : 7;
    UCHAR ISRCValid : 1;
    UCHAR ISRCCountry[2];
    UCHAR ISRCOwner[3];
    UCHAR ISRCRecordingYear[2];
    UCHAR ISRCSerialNumber[5];
    UCHAR ISRCZero;
    UCHAR ISRCAFrame;
    UCHAR ISRCReserved;
    UCHAR SubHeaderData[4];
} MODE_CDROM_WRITE_PARAMETERS_PAGE, *PMODE_CDROM_WRITE_PARAMETERS_PAGE;
#pragma pack(pop, mode_page_wp)
#pragma pack(push, mode_page_mrw, 1)
typedef struct _MODE_MRW_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR Reserved1;
    UCHAR LbaSpace : 1;
    UCHAR Reserved2 : 7;
    UCHAR Reserved3[4];
} MODE_MRW_PAGE, *PMODE_MRW_PAGE;
#pragma pack(pop, mode_page_mrw)
#pragma pack(push, mode_page_flex, 1)
typedef struct _MODE_FLEXIBLE_DISK_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR TransferRate[2];
    UCHAR NumberOfHeads;
    UCHAR SectorsPerTrack;
    UCHAR BytesPerSector[2];
    UCHAR NumberOfCylinders[2];
    UCHAR StartWritePrecom[2];
    UCHAR StartReducedCurrent[2];
    UCHAR StepRate[2];
    UCHAR StepPluseWidth;
    UCHAR HeadSettleDelay[2];
    UCHAR MotorOnDelay;
    UCHAR MotorOffDelay;
    UCHAR Reserved2 : 5;
    UCHAR MotorOnAsserted : 1;
    UCHAR StartSectorNumber : 1;
    UCHAR TrueReadySignal : 1;
    UCHAR StepPlusePerCyclynder : 4;
    UCHAR Reserved3 : 4;
    UCHAR WriteCompenstation;
    UCHAR HeadLoadDelay;
    UCHAR HeadUnloadDelay;
    UCHAR Pin2Usage : 4;
    UCHAR Pin34Usage : 4;
    UCHAR Pin1Usage : 4;
    UCHAR Pin4Usage : 4;
    UCHAR MediumRotationRate[2];
    UCHAR Reserved4[2];
} MODE_FLEXIBLE_DISK_PAGE, *PMODE_FLEXIBLE_DISK_PAGE;
#pragma pack(pop, mode_page_flex)
#pragma pack(push, mode_page_format, 1)
typedef struct _MODE_FORMAT_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR TracksPerZone[2];
    UCHAR AlternateSectorsPerZone[2];
    UCHAR AlternateTracksPerZone[2];
    UCHAR AlternateTracksPerLogicalUnit[2];
    UCHAR SectorsPerTrack[2];
    UCHAR BytesPerPhysicalSector[2];
    UCHAR Interleave[2];
    UCHAR TrackSkewFactor[2];
    UCHAR CylinderSkewFactor[2];
    UCHAR Reserved2 : 4;
    UCHAR SurfaceFirst : 1;
    UCHAR RemovableMedia : 1;
    UCHAR HardSectorFormating : 1;
    UCHAR SoftSectorFormating : 1;
    UCHAR Reserved3[3];
} MODE_FORMAT_PAGE, *PMODE_FORMAT_PAGE;
#pragma pack(pop, mode_page_format)
#pragma pack(push, mode_page_geometry, 1)
typedef struct _MODE_RIGID_GEOMETRY_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR NumberOfCylinders[3];
    UCHAR NumberOfHeads;
    UCHAR StartWritePrecom[3];
    UCHAR StartReducedCurrent[3];
    UCHAR DriveStepRate[2];
    UCHAR LandZoneCyclinder[3];
    UCHAR RotationalPositionLock : 2;
    UCHAR Reserved2 : 6;
    UCHAR RotationOffset;
    UCHAR Reserved3;
    UCHAR RoataionRate[2];
    UCHAR Reserved4[2];
}MODE_RIGID_GEOMETRY_PAGE, *PMODE_RIGID_GEOMETRY_PAGE;
#pragma pack(pop, mode_page_geometry)
#pragma pack(push, mode_page_rw_recovery, 1)
typedef struct _MODE_READ_WRITE_RECOVERY_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR DCRBit : 1;
    UCHAR DTEBit : 1;
    UCHAR PERBit : 1;
    UCHAR EERBit : 1;
    UCHAR RCBit : 1;
    UCHAR TBBit : 1;
    UCHAR ARRE : 1;
    UCHAR AWRE : 1;
    UCHAR ReadRetryCount;
    UCHAR Reserved4[4];
    UCHAR WriteRetryCount;
    UCHAR Reserved5[3];
} MODE_READ_WRITE_RECOVERY_PAGE, *PMODE_READ_WRITE_RECOVERY_PAGE;
#pragma pack(pop, mode_page_rw_recovery)
#pragma pack(push, mode_page_r_recovery, 1)
typedef struct _MODE_READ_RECOVERY_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR DCRBit : 1;
    UCHAR DTEBit : 1;
    UCHAR PERBit : 1;
    UCHAR Reserved2 : 1;
    UCHAR RCBit : 1;
    UCHAR TBBit : 1;
    UCHAR Reserved3 : 2;
    UCHAR ReadRetryCount;
    UCHAR Reserved4[4];
} MODE_READ_RECOVERY_PAGE, *PMODE_READ_RECOVERY_PAGE;
#pragma pack(pop, mode_page_r_recovery)
#pragma pack(push, mode_page_xcpt, 1)
typedef struct _MODE_INFO_EXCEPTIONS
{
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    union
    {
        UCHAR Flags;
        struct
        {
            UCHAR LogErr : 1;
            UCHAR Reserved2 : 1;
            UCHAR Test : 1;
            UCHAR Dexcpt : 1;
            UCHAR Reserved3 : 3;
            UCHAR Perf : 1;
        };
    };
    UCHAR ReportMethod : 4;
    UCHAR Reserved4 : 4;
    UCHAR IntervalTimer[4];
    UCHAR ReportCount[4];
} MODE_INFO_EXCEPTIONS, *PMODE_INFO_EXCEPTIONS;
#pragma pack(pop, mode_page_xcpt)
#pragma pack(push, mode_page_power, 1)
typedef struct _POWER_CONDITION_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR Reserved2;
    UCHAR Standby : 1;
    UCHAR Idle : 1;
    UCHAR Reserved3 : 6;
    UCHAR IdleTimer[4];
    UCHAR StandbyTimer[4];
} POWER_CONDITION_PAGE, *PPOWER_CONDITION_PAGE;
#pragma pack(pop, mode_page_power)
#pragma pack(push, mode_page_cdaudio, 1)
typedef struct _CDDA_OUTPUT_PORT {
    UCHAR ChannelSelection : 4;
    UCHAR Reserved : 4;
    UCHAR Volume;
} CDDA_OUTPUT_PORT, *PCDDA_OUTPUT_PORT;
typedef struct _CDAUDIO_CONTROL_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR Reserved2 : 1;
    UCHAR StopOnTrackCrossing : 1;
    UCHAR Immediate : 1;
    UCHAR Reserved3 : 5;
    UCHAR Reserved4[3];
    UCHAR Obsolete[2];
    CDDA_OUTPUT_PORT CDDAOutputPorts[4];
} CDAUDIO_CONTROL_PAGE, *PCDAUDIO_CONTROL_PAGE;
#pragma pack(pop, mode_page_cdaudio)
#pragma pack(push, mode_page_features, 1)
typedef struct _CDVD_FEATURE_SET_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR CDAudio[2];
    UCHAR EmbeddedChanger[2];
    UCHAR PacketSMART[2];
    UCHAR PersistantPrevent[2];
    UCHAR EventStatusNotification[2];
    UCHAR DigitalOutput[2];
    UCHAR CDSequentialRecordable[2];
    UCHAR DVDSequentialRecordable[2];
    UCHAR RandomRecordable[2];
    UCHAR KeyExchange[2];
    UCHAR Reserved2[2];
} CDVD_FEATURE_SET_PAGE, *PCDVD_FEATURE_SET_PAGE;
#pragma pack(pop, mode_page_features)
#pragma pack(push, mode_page_timeout, 1)
typedef struct _CDVD_INACTIVITY_TIMEOUT_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR Reserved2[2];
    UCHAR SWPP : 1;
    UCHAR DISP : 1;
    UCHAR Reserved3 : 6;
    UCHAR Reserved4;
    UCHAR GroupOneMinimumTimeout[2];
    UCHAR GroupTwoMinimumTimeout[2];
} CDVD_INACTIVITY_TIMEOUT_PAGE, *PCDVD_INACTIVITY_TIMEOUT_PAGE;
#pragma pack(pop, mode_page_timeout)
#pragma pack(push, mode_page_capabilities, 1)
typedef struct _CDVD_CAPABILITIES_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR CDRRead : 1;
    UCHAR CDERead : 1;
    UCHAR Method2 : 1;
    UCHAR DVDROMRead : 1;
    UCHAR DVDRRead : 1;
    UCHAR DVDRAMRead : 1;
    UCHAR Reserved2 : 2;
    UCHAR CDRWrite : 1;
    UCHAR CDEWrite : 1;
    UCHAR TestWrite : 1;
    UCHAR Reserved3 : 1;
    UCHAR DVDRWrite : 1;
    UCHAR DVDRAMWrite : 1;
    UCHAR Reserved4 : 2;
    UCHAR AudioPlay : 1;
    UCHAR Composite : 1;
    UCHAR DigitalPortOne : 1;
    UCHAR DigitalPortTwo : 1;
    UCHAR Mode2Form1 : 1;
    UCHAR Mode2Form2 : 1;
    UCHAR MultiSession : 1;
    UCHAR BufferUnderrunFree : 1;
    UCHAR CDDA : 1;
    UCHAR CDDAAccurate : 1;
    UCHAR RWSupported : 1;
    UCHAR RWDeinterleaved : 1;
    UCHAR C2Pointers : 1;
    UCHAR ISRC : 1;
    UCHAR UPC : 1;
    UCHAR ReadBarCodeCapable : 1;
    UCHAR Lock : 1;
    UCHAR LockState : 1;
    UCHAR PreventJumper : 1;
    UCHAR Eject : 1;
    UCHAR Reserved6 : 1;
    UCHAR LoadingMechanismType : 3;
    UCHAR SeparateVolume : 1;
    UCHAR SeperateChannelMute : 1;
    UCHAR SupportsDiskPresent : 1;
    UCHAR SWSlotSelection : 1;
    UCHAR SideChangeCapable : 1;
    UCHAR RWInLeadInReadable : 1;
    UCHAR Reserved7 : 2;
    union {
        UCHAR ReadSpeedMaximum[2];
        UCHAR ObsoleteReserved[2];
    };
    UCHAR NumberVolumeLevels[2];
    UCHAR BufferSize[2];
    union {
        UCHAR ReadSpeedCurrent[2];
        UCHAR ObsoleteReserved2[2];
    };
    UCHAR ObsoleteReserved3;
    UCHAR Reserved8 : 1;
    UCHAR BCK : 1;
    UCHAR RCK : 1;
    UCHAR LSBF : 1;
    UCHAR Length : 2;
    UCHAR Reserved9 : 2;
    union {
        UCHAR WriteSpeedMaximum[2];
        UCHAR ObsoleteReserved4[2];
    };
    union {
        UCHAR WriteSpeedCurrent[2];
        UCHAR ObsoleteReserved11[2];
    };
    union {
        UCHAR CopyManagementRevision[2];
        UCHAR Reserved10[2];
    };
} CDVD_CAPABILITIES_PAGE, *PCDVD_CAPABILITIES_PAGE;
#pragma pack(pop, mode_page_capabilities)
#pragma pack(push, lun_list, 1)
typedef struct _LUN_LIST {
    UCHAR LunListLength[4];
    UCHAR Reserved[4];
    UCHAR Lun[0][8];
} LUN_LIST, *PLUN_LIST;
#pragma pack(pop, lun_list)
#pragma pack(push, mode_parm_rw, 1)
typedef struct _MODE_PARM_READ_WRITE {
   MODE_PARAMETER_HEADER ParameterListHeader;
   MODE_PARAMETER_BLOCK ParameterListBlock;
} MODE_PARM_READ_WRITE_DATA, *PMODE_PARM_READ_WRITE_DATA;
#pragma pack(pop, mode_parm_rw)
#pragma pack(push, audio_output, 1)
typedef struct _PORT_OUTPUT {
    UCHAR ChannelSelection;
    UCHAR Volume;
} PORT_OUTPUT, *PPORT_OUTPUT;
typedef struct _AUDIO_OUTPUT {
    UCHAR CodePage;
    UCHAR ParameterLength;
    UCHAR Immediate;
    UCHAR Reserved[2];
    UCHAR LbaFormat;
    UCHAR LogicalBlocksPerSecond[2];
    PORT_OUTPUT PortOutput[4];
} AUDIO_OUTPUT, *PAUDIO_OUTPUT;
#pragma pack(pop, audio_output)
#pragma pack(push, chgr_stuff, 1)
typedef struct _MECHANICAL_STATUS_INFORMATION_HEADER {
    UCHAR CurrentSlot : 5;
    UCHAR ChangerState : 2;
    UCHAR Fault : 1;
    UCHAR Reserved : 5;
    UCHAR MechanismState : 3;
    UCHAR CurrentLogicalBlockAddress[3];
    UCHAR NumberAvailableSlots;
    UCHAR SlotTableLength[2];
} MECHANICAL_STATUS_INFORMATION_HEADER, *PMECHANICAL_STATUS_INFORMATION_HEADER;
typedef struct _SLOT_TABLE_INFORMATION {
    UCHAR DiscChanged : 1;
    UCHAR Reserved : 6;
    UCHAR DiscPresent : 1;
    UCHAR Reserved2[3];
} SLOT_TABLE_INFORMATION, *PSLOT_TABLE_INFORMATION;
typedef struct _MECHANICAL_STATUS {
    MECHANICAL_STATUS_INFORMATION_HEADER MechanicalStatusHeader;
    SLOT_TABLE_INFORMATION SlotTableInfo[1];
} MECHANICAL_STATUS, *PMECHANICAL_STATUS;
#pragma pack(pop, chgr_stuff)
#pragma pack(push, unmap, 1)
typedef struct _UNMAP_BLOCK_DESCRIPTOR {
    UCHAR StartingLba[8];
    UCHAR LbaCount[4];
    UCHAR Reserved[4];
} UNMAP_BLOCK_DESCRIPTOR, *PUNMAP_BLOCK_DESCRIPTOR;
typedef struct _UNMAP_LIST_HEADER {
    UCHAR DataLength[2];
    UCHAR BlockDescrDataLength[2];
    UCHAR Reserved[4];
    UNMAP_BLOCK_DESCRIPTOR Descriptors[0];
} UNMAP_LIST_HEADER, *PUNMAP_LIST_HEADER;
#pragma pack(pop, unmap)
#pragma pack(push, tape_position, 1)
typedef struct _TAPE_POSITION_DATA {
    UCHAR Reserved1:2;
    UCHAR BlockPositionUnsupported:1;
    UCHAR Reserved2:3;
    UCHAR EndOfPartition:1;
    UCHAR BeginningOfPartition:1;
    UCHAR PartitionNumber;
    USHORT Reserved3;
    UCHAR FirstBlock[4];
    UCHAR LastBlock[4];
    UCHAR Reserved4;
    UCHAR NumberOfBlocks[3];
    UCHAR NumberOfBytes[4];
} TAPE_POSITION_DATA, *PTAPE_POSITION_DATA;
#pragma pack(pop, tape_position)
#pragma pack(push, byte_stuff, 1)
typedef union _EIGHT_BYTE {
    struct {
        UCHAR Byte0;
        UCHAR Byte1;
        UCHAR Byte2;
        UCHAR Byte3;
        UCHAR Byte4;
        UCHAR Byte5;
        UCHAR Byte6;
        UCHAR Byte7;
    };
    ULONGLONG AsULongLong;
} EIGHT_BYTE, *PEIGHT_BYTE;
typedef union _FOUR_BYTE {
    struct {
        UCHAR Byte0;
        UCHAR Byte1;
        UCHAR Byte2;
        UCHAR Byte3;
    };
    ULONG AsULong;
} FOUR_BYTE, *PFOUR_BYTE;
typedef union _TWO_BYTE {
    struct {
        UCHAR Byte0;
        UCHAR Byte1;
    };
    USHORT AsUShort;
} TWO_BYTE, *PTWO_BYTE;
#pragma pack(pop, byte_stuff)
    PEIGHT_BYTE d = (PEIGHT_BYTE)(Destination); \
    PEIGHT_BYTE s = (PEIGHT_BYTE)(Source); \
    d->Byte7 = s->Byte0; \
    d->Byte6 = s->Byte1; \
    d->Byte5 = s->Byte2; \
    d->Byte4 = s->Byte3; \
    d->Byte3 = s->Byte4; \
    d->Byte2 = s->Byte5; \
    d->Byte1 = s->Byte6; \
    d->Byte0 = s->Byte7; \
}
    PEIGHT_BYTE d = (PEIGHT_BYTE)(Destination); \
    PEIGHT_BYTE s = (PEIGHT_BYTE)(Source); \
    d->Byte5 = s->Byte0; \
    d->Byte4 = s->Byte1; \
    d->Byte3 = s->Byte2; \
    d->Byte2 = s->Byte3; \
    d->Byte1 = s->Byte4; \
    d->Byte0 = s->Byte5; \
}
    PFOUR_BYTE d = (PFOUR_BYTE)(Destination); \
    PFOUR_BYTE s = (PFOUR_BYTE)(Source); \
    d->Byte3 = s->Byte0; \
    d->Byte2 = s->Byte1; \
    d->Byte1 = s->Byte2; \
    d->Byte0 = s->Byte3; \
}
    PTWO_BYTE d = (PTWO_BYTE)(Destination); \
    PTWO_BYTE s = (PTWO_BYTE)(Source); \
    d->Byte1 = s->Byte0; \
    d->Byte0 = s->Byte1; \
}
    UCHAR tmp; \
    PTWO_BYTE w = (PTWO_BYTE)(Short); \
    tmp = w->Byte0; \
    w->Byte0 = w->Byte1; \
    w->Byte1 = tmp; \
    }
    UCHAR tmp; \
    PFOUR_BYTE l = (PFOUR_BYTE)(Long); \
    tmp = l->Byte3; \
    l->Byte3 = l->Byte0; \
    l->Byte0 = tmp; \
    tmp = l->Byte2; \
    l->Byte2 = l->Byte1; \
    l->Byte1 = tmp; \
    }
    UCHAR tmp; \
    PEIGHT_BYTE q = (PEIGHT_BYTE)(Longlong); \
    tmp = q->Byte7; \
    q->Byte7 = q->Byte0; \
    q->Byte0 = tmp; \
    tmp = q->Byte6; \
    q->Byte6 = q->Byte1; \
    q->Byte1 = tmp; \
    tmp = q->Byte5; \
    q->Byte5 = q->Byte2; \
    q->Byte2 = tmp; \
    tmp = q->Byte4; \
    q->Byte4 = q->Byte3; \
    q->Byte3 = tmp; \
    }
    ULONG idx; \
    BitScanReverse(&idx, (Data)); \
    (Bit) = (UCHAR)idx; \
    }
typedef struct STOR_ADDRESS_ALIGN _STOR_ADDRESS {
    USHORT Type;
    USHORT Port;
    ULONG AddressLength;
    _Field_size_bytes_(AddressLength) UCHAR AddressData[ANYSIZE_ARRAY];
} STOR_ADDRESS, *PSTOR_ADDRESS;
typedef struct STOR_ADDRESS_ALIGN _STOR_ADDR_BTL8 {
    _Field_range_(STOR_ADDRESS_TYPE_BTL8, STOR_ADDRESS_TYPE_BTL8)
    USHORT Type;
    USHORT Port;
    _Field_range_(STOR_ADDR_BTL8_ADDRESS_LENGTH, STOR_ADDR_BTL8_ADDRESS_LENGTH)
    ULONG AddressLength;
    UCHAR Path;
    UCHAR Target;
    UCHAR Lun;
    UCHAR Reserved;
} STOR_ADDR_BTL8, *PSTOR_ADDR_BTL8;
typedef enum _SES_ELEMENT_TYPE {
    SesElementTypeUnknown = 0,
    SesElementTypeDeviceSlot,
    SesElementTypePowerSupply,
    SesElementTypeCooling,
    SesElementTypeTemperatureSensor,
    SesElementTypeDoor,
    SesElementTypeAudibleAlarm,
    SesElementTypeController,
    SesElementTypeScsiController,
    SesElementTypeNonVolatileCache,
    SesElementTypeInvalidOperationReason,
    SesElementTypeUps,
    SesElementTypeDisplay,
    SesElementTypeKeypad,
    SesElementTypeEnclosure,
    SesElementTypeScsiPort,
    SesElementTypeLanguage,
    SesElementTypeCommunicationPort,
    SesElementTypeVoltageSensor,
    SesElementTypeCurrentSensor,
    SesElementTypeScsiTargetPort,
    SesElementTypeScsiInitiatorPort,
    SesElementTypeSubEnclosure,
    SesElementTypeArrayDeviceSlot,
    SesElementTypeSasExpander,
    SesElementTypeSasConnector,
    SesElementTypeMax
} SES_ELEMENT_TYPE, *PSES_ELEMENT_TYPE;
typedef enum _SES_ELEMENT_STATE {
    SesElementStateNotReported = 0,
    SesElementStateOkay,
    SesElementStateCritical,
    SesElementStateNonCritical,
    SesElementStateUnrecoverable,
    SesElementStateNotInstalled,
    SesElementStateUnknown,
    SesElementStateNotAvailable,
    SesElementStateNoAccessAllowed,
    SesElementStateMax
} SES_ELEMENT_STATE, *PSES_ELEMENT_STATE;
typedef enum _SES_DOWNLOAD_MICROCODE_STATE {
    SesDownloadMcStateNoneInProgress = 0x00,
    SesDownloadMcStateInProgress = 0x01,
    SesDownloadMcStateCompletedPendingReset = 0x11,
    SesDownloadMcStateCompletedPendingPowerOn = 0x12,
    SesDownloadMcStateCompletedPendingActivation = 0x13
} SES_DOWNLOAD_MICROCODE_STATE, *PSES_DOWNLOAD_MICROCODE_STATE;
#pragma pack(push, ses, 1)
typedef struct _SES_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength[2];
    UCHAR PageData[ANYSIZE_ARRAY];
} SES_DIAGNOSTIC_PAGE, *PSES_DIAGNOSTIC_PAGE;
typedef struct _SES_TYPE_DESCRIPTOR_HEADER {
    UCHAR ElementType;
    UCHAR NumberOfPossibleElements;
    UCHAR SubEnclosureId;
    UCHAR TypeDescriptorTextLength;
} SES_TYPE_DESCRIPTOR_HEADER, *PSES_TYPE_DESCRIPTOR_HEADER;
typedef struct _SES_ENCLOSURE_DESCRIPTOR {
    UCHAR NumberOfEnclosureServices : 3;
    UCHAR Reserved1 : 1;
    UCHAR RelativeEnclosureServicesId : 3;
    UCHAR Reserved2 : 1;
    UCHAR SubEnclosureId;
    UCHAR NumberOfTypeDescriptorHeaders;
    UCHAR EnclosureDescriptorLength;
    UCHAR Identifier[8];
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR VendorSpecific[ANYSIZE_ARRAY];
} SES_ENCLOSURE_DESCRIPTOR, *PSES_ENCLOSURE_DESCRIPTOR;
typedef struct _SES_CONFIGURATION_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR NumberOfSecondarySubEnclosures;
    UCHAR PageLength[2];
    UCHAR GenerationCode[4];
    SES_ENCLOSURE_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} SES_CONFIGURATION_DIAGNOSTIC_PAGE, *PSES_CONFIGURATION_DIAGNOSTIC_PAGE;
typedef struct _SES_CONTROL_DESCRIPTOR {
    UCHAR Reserved : 4;
    UCHAR ResetSwap : 1;
    UCHAR Disable : 1;
    UCHAR PredictFailure : 1;
    UCHAR Select : 1;
    union {
        struct {
            UCHAR Reserved1;
            UCHAR Reserved2 : 1;
            UCHAR RequestIdentify : 1;
            UCHAR RequestRemove : 1;
            UCHAR RequestInsert : 1;
            UCHAR RequestMissing : 1;
            UCHAR Reserved3 : 1;
            UCHAR DoNotRemove : 1;
            UCHAR RequestActive : 1;
            UCHAR Reserved4 : 2;
            UCHAR EnableBypassB : 1;
            UCHAR EnableBypassA : 1;
            UCHAR DeviceOff : 1;
            UCHAR RequestFault : 1;
            UCHAR Reserved5 : 2;
        } DeviceSlot;
        struct {
            UCHAR Reserved1 : 7;
            UCHAR RequestIdentify : 1;
            UCHAR Reserved2;
            UCHAR Reserved3 : 5;
            UCHAR RequestOn : 1;
            UCHAR RequestFail : 1;
            UCHAR Reserved4 : 1;
        } PowerSupply;
        struct {
            UCHAR Reserved1 : 7;
            UCHAR RequestIdentify : 1;
            UCHAR Reserved2;
            UCHAR RequestSpeedCode : 3;
            UCHAR Reserved3 : 2;
            UCHAR RequestOn : 1;
            UCHAR RequestFail : 1;
            UCHAR Reserved4 : 1;
        } Cooling;
        struct {
            UCHAR Reserved1 : 6;
            UCHAR RequestFail : 1;
            UCHAR RequestIdentify : 1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } TemperatureSensor;
        struct {
            UCHAR Reserved1 : 6;
            UCHAR RequestFail : 1;
            UCHAR RequestIdentify : 1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } VoltageSensor;
        struct {
            UCHAR Reserved1 : 6;
            UCHAR RequestFail : 1;
            UCHAR RequestIdentify : 1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } CurrentSensor;
        struct {
            UCHAR Reserved1 : 7;
            UCHAR RequestIdentify : 1;
            UCHAR PowerCycleDelay : 6;
            UCHAR PowerCycleRequest : 2;
            UCHAR RequestWarning : 1;
            UCHAR RequestFailure : 1;
            UCHAR PowerOffDuration : 6;
        } Enclosure;
        struct {
            UCHAR RequestRebuildAbort : 1;
            UCHAR RequestRebuild : 1;
            UCHAR RequestInFailedArray : 1;
            UCHAR RequestInCriticalArray : 1;
            UCHAR RequestConsistencyArray : 1;
            UCHAR RequestHotSpare : 1;
            UCHAR RequestReservedDevice : 1;
            UCHAR RequestOK : 1;
            UCHAR Reserved1 : 1;
            UCHAR RequestIdentify : 1;
            UCHAR RequestRemove : 1;
            UCHAR RequestInsert : 1;
            UCHAR RequestMissing : 1;
            UCHAR Reserved2 : 1;
            UCHAR DoNotRemove : 1;
            UCHAR RequestActive : 1;
            UCHAR Reserved3 : 2;
            UCHAR EnableBypassB : 1;
            UCHAR EnableBypassA : 1;
            UCHAR DeviceOff : 1;
            UCHAR RequestFault : 1;
            UCHAR Reserved4 : 2;
        } ArrayDeviceSlot;
    };
} SES_CONTROL_DESCRIPTOR, *PSES_CONTROL_DESCRIPTOR;
typedef struct _SES_CONTROL_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR Unrecoverable : 1;
    UCHAR Critical : 1;
    UCHAR NonCritical : 1;
    UCHAR Informational : 1;
    UCHAR Reserved : 4;
    UCHAR PageLength[2];
    UCHAR ExpectedGenerationCode[4];
    SES_CONTROL_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} SES_CONTROL_DIAGNOSTIC_PAGE, *PSES_CONTROL_DIAGNOSTIC_PAGE;
typedef struct _SES_STATUS_DESCRIPTOR {
    UCHAR ElementStatus : 4;
    UCHAR Swap : 1;
    UCHAR Disabled : 1;
    UCHAR PredictedFailure : 1;
    UCHAR Reserved1 : 1;
    union {
        struct {
            UCHAR SlotAddress;
            UCHAR Report : 1;
            UCHAR Identify : 1;
            UCHAR Remove : 1;
            UCHAR ReadyToInsert : 1;
            UCHAR EnclosureBypassedB : 1;
            UCHAR EnclosureBypassedA : 1;
            UCHAR DoNotRemove : 1;
            UCHAR AppBypassedA : 1;
            UCHAR DeviceBypassedB : 1;
            UCHAR DeviceBypassedA : 1;
            UCHAR BypassedB : 1;
            UCHAR BypassedA : 1;
            UCHAR DeviceOff : 1;
            UCHAR FaultRequested : 1;
            UCHAR FaultSensed : 1;
            UCHAR AppBypassedB : 1;
        } DeviceSlot;
        struct {
            UCHAR Reserved1 : 7;
            UCHAR Identify : 1;
            UCHAR Reserved2 : 1;
            UCHAR DCOverCurrent : 1;
            UCHAR DCUnderVoltage : 1;
            UCHAR DCOverVoltage : 1;
            UCHAR Reserved3 : 4;
            UCHAR DCFail : 1;
            UCHAR ACFail : 1;
            UCHAR TemperatureWarning : 1;
            UCHAR OverTemperatureFail : 1;
            UCHAR Off : 1;
            UCHAR RequestedOn : 1;
            UCHAR Fail : 1;
            UCHAR HotSwap : 1;
        } PowerSupply;
        struct {
            UCHAR ActualFanSpeedMSB : 3;
            UCHAR Reserved1 : 4;
            UCHAR Identify : 1;
            UCHAR ActualFanSpeedLSB;
            UCHAR ActualSpeedCode : 3;
            UCHAR Reserved2 : 1;
            UCHAR Off : 1;
            UCHAR RequestedOn : 1;
            UCHAR Fail : 1;
            UCHAR HotSwap : 1;
        } Cooling;
        struct {
            UCHAR Reserved1 : 6;
            UCHAR Fail : 1;
            UCHAR Identify : 1;
            UCHAR Temperature;
            UCHAR UnderTemperatureWarning : 1;
            UCHAR UnderTemperatureFailure : 1;
            UCHAR OverTemperatureWarning : 1;
            UCHAR OverTemperatureFailure : 1;
            UCHAR Reserved2 : 4;
        } TemperatureSensor;
        struct {
            UCHAR CritUnder : 1;
            UCHAR CritOver : 1;
            UCHAR WarnUnder : 1;
            UCHAR WarnOver : 1;
            UCHAR Reserved1 : 2;
            UCHAR Fail : 1;
            UCHAR Identify : 1;
            UCHAR VoltageMSB;
            UCHAR VoltageLSB;
        } VoltageSensor;
        struct {
            UCHAR Reserved1 : 1;
            UCHAR CritOver : 1;
            UCHAR Reserved2 : 1;
            UCHAR WarnOver : 1;
            UCHAR Reserved3 : 2;
            UCHAR Fail : 1;
            UCHAR Identify : 1;
            UCHAR CurrentMSB;
            UCHAR CurrentLSB;
        } CurrentSensor;
        struct {
            UCHAR Reserved1 : 7;
            UCHAR Identify : 1;
            UCHAR WarningIndication : 1;
            UCHAR FailureIndication : 1;
            UCHAR TimeUntilPowerCycle : 6;
            UCHAR WarningRequested : 1;
            UCHAR FailureRequested : 1;
            UCHAR RequestedPowerOffTime : 6;
        } Enclosure;
        struct {
            UCHAR RebuildAbort : 1;
            UCHAR Rebuild : 1;
            UCHAR InFailedArray : 1;
            UCHAR InCriticalArray : 1;
            UCHAR ConsistencyCheck : 1;
            UCHAR HotSpare : 1;
            UCHAR ReservedDevice : 1;
            UCHAR OK : 1;
            UCHAR Report : 1;
            UCHAR Identify : 1;
            UCHAR Remove : 1;
            UCHAR ReadyToInsert : 1;
            UCHAR EnclosureBypassedB : 1;
            UCHAR EnclosureBypassedA : 1;
            UCHAR DoNotRemove : 1;
            UCHAR AppBypassedA : 1;
            UCHAR DeviceBypassedB : 1;
            UCHAR DeviceBypassedA : 1;
            UCHAR BypassedB : 1;
            UCHAR BypassedA : 1;
            UCHAR DeviceOff : 1;
            UCHAR FaultRequested : 1;
            UCHAR FaultSensed : 1;
            UCHAR AppBypassedB : 1;
        } ArrayDeviceSlot;
    };
} SES_STATUS_DESCRIPTOR, *PSES_STATUS_DESCRIPTOR;
typedef struct _SES_STATUS_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR Unrecoverable : 1;
    UCHAR Critical : 1;
    UCHAR NonCritical : 1;
    UCHAR Informational : 1;
    UCHAR InvalidOperation : 1;
    UCHAR Reserved : 3;
    UCHAR PageLength[2];
    UCHAR GenerationCode[4];
    SES_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} SES_STATUS_DIAGNOSTIC_PAGE, *PSES_STATUS_DIAGNOSTIC_PAGE;
typedef struct _SES_PHY_DESCRIPTOR {
    UCHAR Reserved1 : 4;
    UCHAR DeviceType : 3;
    UCHAR Reserved3 : 1;
    UCHAR Reserved4;
    UCHAR Reserved5 : 1;
    UCHAR SmpInitiatorPort : 1;
    UCHAR StpInitiatorPort : 1;
    UCHAR SspInitiatorPort : 1;
    UCHAR Reserved6 : 4;
    UCHAR SataDevice : 1;
    UCHAR SmpTargetPort : 1;
    UCHAR StpTargetPort : 1;
    UCHAR SspTargetPort : 1;
    UCHAR Reserved7 : 3;
    UCHAR SataPortSelector : 1;
    UCHAR AttachedSASAddress[8];
    UCHAR SASAddress[8];
    UCHAR PhyIdentifier;
    UCHAR Reserved2[7];
} SES_PHY_DESCRIPTOR, *PSES_PHY_DESCRIPTOR;
typedef struct _SES_SAS_SLOT_INFORMATION {
    UCHAR NumberOfPhyDescriptors;
    UCHAR NotAllPhys : 1;
    UCHAR Reserved1 : 5;
    UCHAR Type : 2;
    UCHAR Reserved2;
    UCHAR DeviceSlotNumber;
    SES_PHY_DESCRIPTOR PhyDescriptors[ANYSIZE_ARRAY];
} SES_SAS_SLOT_INFORMATION, *PSES_SAS_SLOT_INFORMATION;
typedef union _SES_PROTOCOL_INFORMATION {
    SES_SAS_SLOT_INFORMATION SasSlot;
} SES_PROTOCOL_INFORMATION, *PSES_PROTOCOL_INFORMATION;
typedef struct _SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR {
    UCHAR ProtocolIdentifier : 4;
    UCHAR EIP : 1;
    UCHAR Reserved1 : 2;
    UCHAR Invalid : 1;
    UCHAR Length;
    UCHAR Reserved2;
    UCHAR ElementIndex;
    SES_PROTOCOL_INFORMATION ProtocolInfo;
} SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR, *PSES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR;
typedef struct _SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength[2];
    UCHAR GenerationCode[4];
    SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE, *PSES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE;
typedef struct _SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR {
    UCHAR Reserved1;
    UCHAR SubEnclosureId;
    UCHAR Status;
    UCHAR AdditionalStatus;
    UCHAR MaximumImageSize[4];
    UCHAR Reserved2[3];
    UCHAR ExpectedBufferId;
    UCHAR ExpectedBufferOffset;
} SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR, *PSES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR;
typedef struct _SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR NumberOfSecondarySubEnclosures;
    UCHAR PageLength[2];
    UCHAR GenerationCode[4];
    SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE, *PSES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE;
typedef struct _SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE {
    UCHAR PageCode;
    UCHAR SubEnclosureId;
    UCHAR PageLength[2];
    UCHAR ExpectedGenerationCode[4];
    UCHAR Mode;
    UCHAR Reserved[2];
    UCHAR BufferID;
    UCHAR BufferOffset[4];
    UCHAR ImageLength[4];
    UCHAR DataLength[4];
    UCHAR Data[ANYSIZE_ARRAY];
} SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE, *PSES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE;
#pragma pack(pop, ses)
#pragma pack(push, physical_element_status, 1)
typedef struct _PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR {
    UCHAR Reserved1[4];
    UCHAR ElementIdentifier[4];
    UCHAR Reserved2[6];
    UCHAR PhysicalElementType;
    UCHAR PhysicalElementHealth;
    UCHAR AssociatedCapacity[8];
    UCHAR Reserved3[8];
} PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR, *PPHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR;
typedef struct _PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA {
    UCHAR DescriptorCount[4];
    UCHAR ReturnedDescriptorCount[4];
    UCHAR ElementIdentifierBeingDepoped[4];
    UCHAR Reserved[20];
    PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA, *PPHYSICAL_ELEMENT_STATUS_PARAMETER_DATA;
#pragma pack(pop, physical_element_status)
#pragma pack(push, error_history, 1)
typedef struct _ERROR_HISTORY_DIRECTORY_ENTRY {
    UCHAR SupportedBufferId;
    UCHAR BufferFormat;
    UCHAR BufferSource : 4;
    UCHAR Reserved0 : 4;
    UCHAR Reserved1;
    UCHAR MaxAvailableLength[4];
} ERROR_HISTORY_DIRECTORY_ENTRY, *PERROR_HISTORY_DIRECTORY_ENTRY;
typedef struct _ERROR_HISTORY_DIRECTORY {
    UCHAR T10VendorId[8];
    UCHAR ErrorHistoryVersion;
    UCHAR ClearSupport : 1;
    UCHAR ErrorHistorySource : 2;
    UCHAR ErrorHistoryRetrieved : 2;
    UCHAR Reserved0 : 3;
    UCHAR Reserved1[20];
    UCHAR DirectoryLength[2];
    ERROR_HISTORY_DIRECTORY_ENTRY ErrorHistoryDirectoryList[ANYSIZE_ARRAY];
} ERROR_HISTORY_DIRECTORY, *PERROR_HISTORY_DIRECTORY;
typedef struct _CURRENT_INTERNAL_STATUS_PARAMETER_DATA {
    UCHAR Reserved0[4];
    UCHAR IEEECompanyId[4];
    UCHAR CurrentInternalStatusDataSetOneLength[2];
    UCHAR CurrentInternalStatusDataSetTwoLength[2];
    UCHAR CurrentInternalStatusDataSetThreeLength[2];
    UCHAR CurrentInternalStatusDataSetFourLength[4];
    UCHAR Reserved1[364];
    UCHAR NewSavedDataAvailable;
    UCHAR SavedDataGenerationNumber;
    UCHAR CurrentReasonIdentifier[128];
    UCHAR CurrentInternalStatusData[ANYSIZE_ARRAY];
} CURRENT_INTERNAL_STATUS_PARAMETER_DATA, *PCURRENT_INTERNAL_STATUS_PARAMETER_DATA;
typedef struct _SAVED_INTERNAL_STATUS_PARAMETER_DATA {
    UCHAR Reserved0[4];
    UCHAR IEEECompanyId[4];
    UCHAR SavedInternalStatusDataSetOneLength[2];
    UCHAR SavedInternalStatusDataSetTwoLength[2];
    UCHAR SavedInternalStatusDataSetThreeLength[2];
    UCHAR SavedInternalStatusDataSetFourLength[4];
    UCHAR Reserved1[364];
    UCHAR NewSavedDataAvailable;
    UCHAR SavedDataGenerationNumber;
    UCHAR SavedReasonIdentifier[128];
    UCHAR SavedInternalStatusData[ANYSIZE_ARRAY];
} SAVED_INTERNAL_STATUS_PARAMETER_DATA, *PSAVED_INTERNAL_STATUS_PARAMETER_DATA;
#pragma pack(pop, error_history)
            (sizeof(SCSI_SENSE_DESCRIPTOR_HEADER) + ((PSCSI_SENSE_DESCRIPTOR_HEADER)(DescriptorBuffer))->AdditionalLength)
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_CURRENT || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_DEFERRED)
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_CURRENT || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_DEFERRED)
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_CURRENT || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_CURRENT)
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_DEFERRED || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_DEFERRED)
            (IsFixedSenseDataFormat(SenseInfoBuffer) || IsDescriptorSenseDataFormat(SenseInfoBuffer))
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetTotalSenseByteCountIndicated (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Out_ UCHAR *TotalByteCountIndicated
   )
{
    BOOLEAN succeed = FALSE;
    UCHAR byteCount = 0;
    PFIXED_SENSE_DATA senseInfoBuffer = NULL;
    if (SenseInfoBuffer == NULL ||
        SenseInfoBufferLength == 0 ||
        TotalByteCountIndicated == NULL) {
        return FALSE;
    }
    senseInfoBuffer = (PFIXED_SENSE_DATA)SenseInfoBuffer;
    if (RTL_CONTAINS_FIELD(senseInfoBuffer,
                           SenseInfoBufferLength,
                           AdditionalSenseLength)) {
        if (senseInfoBuffer->AdditionalSenseLength <=
            (MAX_SENSE_BUFFER_SIZE - RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength))) {
            byteCount = senseInfoBuffer->AdditionalSenseLength
                        + RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength);
            *TotalByteCountIndicated = byteCount;
            succeed = TRUE;
        }
    }
    return succeed;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetFixedSenseKeyAndCodes (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Out_opt_ PUCHAR SenseKey,
   _Out_opt_ PUCHAR AdditionalSenseCode,
   _Out_opt_ PUCHAR AdditionalSenseCodeQualifier
   )
{
    PFIXED_SENSE_DATA fixedSenseData = (PFIXED_SENSE_DATA)SenseInfoBuffer;
    BOOLEAN succeed = FALSE;
    ULONG dataLength = 0;
    if (SenseInfoBuffer == NULL || SenseInfoBufferLength == 0) {
        return FALSE;
    }
    if (RTL_CONTAINS_FIELD(fixedSenseData, SenseInfoBufferLength, AdditionalSenseLength)) {
        dataLength = fixedSenseData->AdditionalSenseLength + RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength);
        if (dataLength > SenseInfoBufferLength) {
            dataLength = SenseInfoBufferLength;
        }
        if (SenseKey != NULL) {
           *SenseKey = fixedSenseData->SenseKey;
        }
        if (AdditionalSenseCode != NULL) {
           *AdditionalSenseCode = RTL_CONTAINS_FIELD(fixedSenseData, dataLength, AdditionalSenseCode) ?
                                  fixedSenseData->AdditionalSenseCode : 0;
        }
        if (AdditionalSenseCodeQualifier != NULL) {
           *AdditionalSenseCodeQualifier = RTL_CONTAINS_FIELD(fixedSenseData, dataLength, AdditionalSenseCodeQualifier) ?
                                           fixedSenseData->AdditionalSenseCodeQualifier : 0;
        }
        succeed = TRUE;
    }
    return succeed;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetDescriptorSenseKeyAndCodes (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Out_opt_ PUCHAR SenseKey,
   _Out_opt_ PUCHAR AdditionalSenseCode,
   _Out_opt_ PUCHAR AdditionalSenseCodeQualifier
   )
{
    PDESCRIPTOR_SENSE_DATA descriptorSenseData = (PDESCRIPTOR_SENSE_DATA)SenseInfoBuffer;
    BOOLEAN succeed = FALSE;
    if (SenseInfoBuffer == NULL || SenseInfoBufferLength == 0) {
        return FALSE;
    }
    if (RTL_CONTAINS_FIELD(descriptorSenseData, SenseInfoBufferLength, AdditionalSenseLength)) {
        if (SenseKey) {
            *SenseKey = descriptorSenseData->SenseKey;
        }
        if (AdditionalSenseCode != NULL) {
            *AdditionalSenseCode = descriptorSenseData->AdditionalSenseCode;
        }
        if (AdditionalSenseCodeQualifier != NULL) {
            *AdditionalSenseCodeQualifier = descriptorSenseData->AdditionalSenseCodeQualifier;
        }
        succeed = TRUE;
    }
    return succeed;
}
typedef ULONG SCSI_SENSE_OPTIONS;
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetSenseKeyAndCodes (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _In_ SCSI_SENSE_OPTIONS Options,
   _Out_opt_ PUCHAR SenseKey,
   _Out_opt_ PUCHAR AdditionalSenseCode,
   _Out_opt_ PUCHAR AdditionalSenseCodeQualifier
   )
{
    BOOLEAN succeed = FALSE;
    if (SenseInfoBuffer == NULL || SenseInfoBufferLength == 0) {
        return FALSE;
    }
    if (IsDescriptorSenseDataFormat(SenseInfoBuffer)) {
        succeed = ScsiGetDescriptorSenseKeyAndCodes( SenseInfoBuffer,
                                                     SenseInfoBufferLength,
                                                     SenseKey,
                                                     AdditionalSenseCode,
                                                     AdditionalSenseCodeQualifier );
    } else {
        if ((Options & SCSI_SENSE_OPTIONS_FIXED_FORMAT_IF_UNKNOWN_FORMAT_INDICATED) ||
            IsFixedSenseDataFormat(SenseInfoBuffer)) {
            succeed = ScsiGetFixedSenseKeyAndCodes( SenseInfoBuffer,
                                                    SenseInfoBufferLength,
                                                    SenseKey,
                                                    AdditionalSenseCode,
                                                    AdditionalSenseCodeQualifier );
        }
    }
    return succeed;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetSenseDescriptor(
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Outptr_result_bytebuffer_(*DescriptorBufferLength) PVOID *DescriptorBuffer,
   _Out_ UCHAR *DescriptorBufferLength
   )
{
    PDESCRIPTOR_SENSE_DATA descriptorSenseData;
    BOOLEAN succeed = FALSE;
    UCHAR dataLength = 0;
    if (SenseInfoBuffer == NULL ||
        SenseInfoBufferLength == 0 ||
        DescriptorBuffer == NULL ||
        DescriptorBufferLength == NULL) {
        return FALSE;
    }
    *DescriptorBuffer = NULL;
    *DescriptorBufferLength = 0;
    if (!IsDescriptorSenseDataFormat(SenseInfoBuffer)) {
        return FALSE;
    }
    descriptorSenseData = (PDESCRIPTOR_SENSE_DATA)SenseInfoBuffer;
    if (RTL_CONTAINS_FIELD(descriptorSenseData, SenseInfoBufferLength, AdditionalSenseLength)) {
        if (descriptorSenseData->AdditionalSenseLength <= (MAX_SENSE_BUFFER_SIZE - RTL_SIZEOF_THROUGH_FIELD(DESCRIPTOR_SENSE_DATA, AdditionalSenseLength))) {
            dataLength = descriptorSenseData->AdditionalSenseLength + RTL_SIZEOF_THROUGH_FIELD(DESCRIPTOR_SENSE_DATA, AdditionalSenseLength);
            if (dataLength > SenseInfoBufferLength) {
                dataLength = SenseInfoBufferLength;
            }
            *DescriptorBufferLength = dataLength - RTL_SIZEOF_THROUGH_FIELD(DESCRIPTOR_SENSE_DATA, AdditionalSenseLength);
            if (*DescriptorBufferLength > 0) {
                *DescriptorBuffer = (PVOID)(descriptorSenseData->DescriptorBuffer);
                succeed = TRUE;
            }
        }
    }
    return succeed;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiValidateInformationSenseDescriptor(
    _In_reads_bytes_(DescriptorBufferLength) PVOID DescriptorBuffer,
    _In_ UCHAR DescriptorBufferLength
    )
{
    PSCSI_SENSE_DESCRIPTOR_INFORMATION descriptor;
    UCHAR additionalLength;
    if (DescriptorBuffer == NULL || DescriptorBufferLength < sizeof(SCSI_SENSE_DESCRIPTOR_INFORMATION)) {
        return FALSE;
    }
    descriptor = (PSCSI_SENSE_DESCRIPTOR_INFORMATION)DescriptorBuffer;
    if (descriptor->Header.DescriptorType != SCSI_SENSE_DESCRIPTOR_TYPE_INFORMATION) {
        return FALSE;
    }
    additionalLength = sizeof(SCSI_SENSE_DESCRIPTOR_INFORMATION) - RTL_SIZEOF_THROUGH_FIELD(SCSI_SENSE_DESCRIPTOR_INFORMATION, Header);
    if (descriptor->Header.AdditionalLength != additionalLength) {
        return FALSE;
    }
    if (descriptor->Valid == 0) {
        return FALSE;
    }
   return TRUE;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiValidateBlockCommandSenseDescriptor(
    _In_reads_bytes_(DescriptorBufferLength) PVOID DescriptorBuffer,
    _In_ UCHAR DescriptorBufferLength
    )
{
    PSCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND descriptor;
    UCHAR additionalLength;
    if (DescriptorBuffer == NULL || DescriptorBufferLength < sizeof(SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND)) {
        return FALSE;
    }
    descriptor = (PSCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND)DescriptorBuffer;
    if (descriptor->Header.DescriptorType != SCSI_SENSE_DESCRIPTOR_TYPE_BLOCK_COMMAND) {
        return FALSE;
    }
    additionalLength = sizeof(SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND) - RTL_SIZEOF_THROUGH_FIELD(SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND, Header);
    if (descriptor->Header.AdditionalLength != additionalLength) {
        return FALSE;
    }
   return TRUE;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiConvertToFixedSenseFormat(
    _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
    _In_ UCHAR SenseInfoBufferLength,
    _Out_writes_bytes_(OutBufferLength) PVOID OutBuffer,
    _In_ UCHAR OutBufferLength
    )
{
    BOOLEAN succeed = FALSE;
    BOOLEAN validSense = FALSE;
    UCHAR senseKey = 0;
    UCHAR additionalSenseCode = 0;
    UCHAR additionalSenseCodeQualifier = 0;
    PFIXED_SENSE_DATA outBuffer = (PFIXED_SENSE_DATA)OutBuffer;
    if (SenseInfoBuffer == NULL ||
        SenseInfoBufferLength == 0 ||
        OutBuffer == NULL ||
        OutBufferLength < sizeof(FIXED_SENSE_DATA)) {
        return FALSE;
    }
    if (IsDescriptorSenseDataFormat(SenseInfoBuffer)) {
        RtlZeroMemory(OutBuffer, OutBufferLength);
        validSense = ScsiGetSenseKeyAndCodes(SenseInfoBuffer,
                                             SenseInfoBufferLength,
                                             SCSI_SENSE_OPTIONS_NONE,
                                             &senseKey,
                                             &additionalSenseCode,
                                             &additionalSenseCodeQualifier);
        if (validSense) {
            if (IsSenseDataCurrentError(SenseInfoBuffer)) {
                outBuffer->ErrorCode = SCSI_SENSE_ERRORCODE_FIXED_CURRENT;
            } else {
                outBuffer->ErrorCode = SCSI_SENSE_ERRORCODE_FIXED_DEFERRED;
            }
            outBuffer->AdditionalSenseLength = sizeof(FIXED_SENSE_DATA) - RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength);
            outBuffer->SenseKey = senseKey;
            outBuffer->AdditionalSenseCode = additionalSenseCode;
            outBuffer->AdditionalSenseCodeQualifier = additionalSenseCodeQualifier;
            succeed = TRUE;
        }
    }
    return succeed;
}
_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetNextSenseDescriptorByType (
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ UCHAR BufferLength,
    _In_reads_(TypeListCount) PUCHAR TypeList,
    _In_ ULONG TypeListCount,
    _Out_ PUCHAR OutType,
    _Outptr_result_bytebuffer_(*OutBufferLength) PVOID *OutBuffer,
    _Out_ UCHAR *OutBufferLength
)
{
    PUCHAR remainingBuffer;
    UCHAR remainingBufferLength;
    UCHAR type;
    ULONG i;
    UCHAR descriptorLength;
    if (Buffer == NULL ||
        BufferLength == 0 ||
        TypeList == NULL ||
        TypeListCount == 0 ||
        OutType == NULL ||
        OutBuffer == NULL ||
        OutBufferLength == NULL) {
        return FALSE;
    }
    *OutBuffer = NULL;
    *OutBufferLength = 0;
    *OutType = 0;
    remainingBuffer = (PUCHAR)Buffer;
    remainingBufferLength = BufferLength;
    while (remainingBufferLength >= sizeof(SCSI_SENSE_DESCRIPTOR_HEADER)) {
        for (i = 0; i < TypeListCount; i++) {
            type = TypeList[i];
            if (((PSCSI_SENSE_DESCRIPTOR_HEADER)remainingBuffer)->DescriptorType == type) {
                *OutBuffer = (PVOID)remainingBuffer;
                *OutBufferLength = remainingBufferLength;
                *OutType = type;
                return TRUE;
            }
        }
        descriptorLength = ScsiGetSenseDescriptorLength(remainingBuffer);
        if (remainingBufferLength > descriptorLength) {
            remainingBuffer += descriptorLength;
            remainingBufferLength -= descriptorLength;
        } else {
            break;
        }
    }
    return FALSE;
}
typedef PHYSICAL_ADDRESS STOR_PHYSICAL_ADDRESS, *PSTOR_PHYSICAL_ADDRESS;
typedef struct _ACCESS_RANGE {
    STOR_PHYSICAL_ADDRESS RangeStart;
    ULONG RangeLength;
    BOOLEAN RangeInMemory;
} ACCESS_RANGE, *PACCESS_RANGE;
typedef struct _MEMORY_REGION {
    PUCHAR VirtualBase;
    PHYSICAL_ADDRESS PhysicalBase;
    ULONG Length;
} MEMORY_REGION, *PMEMORY_REGION;
typedef enum _STOR_SYNCHRONIZATION_MODEL {
    StorSynchronizeHalfDuplex,
    StorSynchronizeFullDuplex
} STOR_SYNCHRONIZATION_MODEL;
typedef enum _INTERRUPT_SYNCHRONIZATION_MODE {
    InterruptSupportNone,
    InterruptSynchronizeAll,
    InterruptSynchronizePerMessage
} INTERRUPT_SYNCHRONIZATION_MODE;
typedef
BOOLEAN
HW_MESSAGE_SIGNALED_INTERRUPT_ROUTINE (
    IN PVOID HwDeviceExtension,
    IN ULONG MessageId
    );
typedef HW_MESSAGE_SIGNALED_INTERRUPT_ROUTINE *PHW_MESSAGE_SIGNALED_INTERRUPT_ROUTINE;
typedef struct _MESSAGE_INTERRUPT_INFORMATION {
    ULONG MessageId;
    ULONG MessageData;
    STOR_PHYSICAL_ADDRESS MessageAddress;
    ULONG InterruptVector;
    ULONG InterruptLevel;
    KINTERRUPT_MODE InterruptMode;
} MESSAGE_INTERRUPT_INFORMATION, *PMESSAGE_INTERRUPT_INFORMATION;
BOOLEAN
StorPortGetMessageInterruptInformation(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageId,
    _Out_ PMESSAGE_INTERRUPT_INFORMATION InterruptInfo
    );
typedef struct _PORT_CONFIGURATION_INFORMATION {
    ULONG Length;
    ULONG SystemIoBusNumber;
    INTERFACE_TYPE AdapterInterfaceType;
    ULONG BusInterruptLevel;
    ULONG BusInterruptVector;
    KINTERRUPT_MODE InterruptMode;
    ULONG MaximumTransferLength;
    ULONG NumberOfPhysicalBreaks;
    ULONG DmaChannel;
    ULONG DmaPort;
    DMA_WIDTH DmaWidth;
    DMA_SPEED DmaSpeed;
    ULONG AlignmentMask;
    ULONG NumberOfAccessRanges;
    ACCESS_RANGE (*AccessRanges)[];
    PVOID MiniportDumpData;
    UCHAR NumberOfBuses;
    CCHAR InitiatorBusId[8];
    BOOLEAN ScatterGather;
    BOOLEAN Master;
    BOOLEAN CachesData;
    BOOLEAN AdapterScansDown;
    BOOLEAN AtdiskPrimaryClaimed;
    BOOLEAN AtdiskSecondaryClaimed;
    BOOLEAN Dma32BitAddresses;
    BOOLEAN DemandMode;
    UCHAR MapBuffers;
    BOOLEAN NeedPhysicalAddresses;
    BOOLEAN TaggedQueuing;
    BOOLEAN AutoRequestSense;
    BOOLEAN MultipleRequestPerLu;
    BOOLEAN ReceiveEvent;
    BOOLEAN RealModeInitialized;
    BOOLEAN BufferAccessScsiPortControlled;
    UCHAR MaximumNumberOfTargets;
    UCHAR SrbType;
    UCHAR AddressType;
    ULONG SlotNumber;
    ULONG BusInterruptLevel2;
    ULONG BusInterruptVector2;
    KINTERRUPT_MODE InterruptMode2;
    ULONG DmaChannel2;
    ULONG DmaPort2;
    DMA_WIDTH DmaWidth2;
    DMA_SPEED DmaSpeed2;
    ULONG DeviceExtensionSize;
    ULONG SpecificLuExtensionSize;
    ULONG SrbExtensionSize;
    UCHAR Dma64BitAddresses;
    BOOLEAN ResetTargetSupported;
    UCHAR MaximumNumberOfLogicalUnits;
    BOOLEAN WmiDataProvider;
    STOR_SYNCHRONIZATION_MODEL SynchronizationModel;
    PHW_MESSAGE_SIGNALED_INTERRUPT_ROUTINE HwMSInterruptRoutine;
    INTERRUPT_SYNCHRONIZATION_MODE InterruptSynchronizationMode;
    MEMORY_REGION DumpRegion;
    ULONG RequestedDumpBufferSize;
    BOOLEAN VirtualDevice;
    UCHAR DumpMode;
    ULONG ExtendedFlags1;
    ULONG MaxNumberOfIO;
    ULONG MaxIOsPerLun;
    ULONG InitialLunQueueDepth;
    ULONG BusResetHoldTime;
    ULONG FeatureSupport;
} PORT_CONFIGURATION_INFORMATION, *PPORT_CONFIGURATION_INFORMATION;
typedef struct _STOR_SCATTER_GATHER_ELEMENT {
    STOR_PHYSICAL_ADDRESS PhysicalAddress;
    ULONG Length;
    ULONG_PTR Reserved;
} STOR_SCATTER_GATHER_ELEMENT, *PSTOR_SCATTER_GATHER_ELEMENT;
typedef struct _STOR_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    STOR_SCATTER_GATHER_ELEMENT List[];
} STOR_SCATTER_GATHER_LIST, *PSTOR_SCATTER_GATHER_LIST;
typedef enum _GETSGSTATUS{
    SG_ALLOCATED = 0,
    SG_BUFFER_TOO_SMALL
} GETSGSTATUS, *PGETSGSTATUS;
typedef enum _SCSI_ADAPTER_CONTROL_TYPE {
    ScsiQuerySupportedControlTypes = 0,
    ScsiStopAdapter,
    ScsiRestartAdapter,
    ScsiSetBootConfig,
    ScsiSetRunningConfig,
    ScsiPowerSettingNotification,
    ScsiAdapterPower,
    ScsiAdapterPoFxPowerRequired,
    ScsiAdapterPoFxPowerActive,
    ScsiAdapterPoFxPowerSetFState,
    ScsiAdapterPoFxPowerControl,
    ScsiAdapterPrepareForBusReScan,
    ScsiAdapterSystemPowerHints,
    ScsiAdapterFilterResourceRequirements,
    ScsiAdapterPoFxMaxOperationalPower,
    ScsiAdapterPoFxSetPerfState,
    ScsiAdapterSurpriseRemoval,
    ScsiAdapterSerialNumber,
    ScsiAdapterCryptoOperation,
    ScsiAdapterControlMax,
    MakeAdapterControlTypeSizeOfUlong = 0xffffffff
} SCSI_ADAPTER_CONTROL_TYPE, *PSCSI_ADAPTER_CONTROL_TYPE;
typedef struct _STOR_POWER_CONTROL_HEADER {
    ULONG Version;
    ULONG Size;
    PSTOR_ADDRESS Address;
} STOR_POWER_CONTROL_HEADER, *PSTOR_POWER_CONTROL_HEADER;
typedef enum _SCSI_ADAPTER_CONTROL_STATUS {
    ScsiAdapterControlSuccess = 0,
    ScsiAdapterControlUnsuccessful
} SCSI_ADAPTER_CONTROL_STATUS, *PSCSI_ADAPTER_CONTROL_STATUS;
typedef struct _STOR_POWER_SETTING_INFO {
    GUID PowerSettingGuid;
    _Field_size_bytes_(ValueLength) PVOID Value;
    ULONG ValueLength;
} STOR_POWER_SETTING_INFO, *PSTOR_POWER_SETTING_INFO;
typedef struct _STOR_ADAPTER_CONTROL_POWER {
    STOR_POWER_CONTROL_HEADER Header;
    STOR_POWER_ACTION PowerAction;
    STOR_DEVICE_POWER_STATE PowerState;
} STOR_ADAPTER_CONTROL_POWER, *PSTOR_ADAPTER_CONTROL_POWER;
typedef enum _RAID_SYSTEM_POWER {
    RaidSystemPowerUnknown = 0,
    RaidSystemPowerLowest,
    RaidSystemPowerLow,
    RaidSystemPowerMedium,
    RaidSystemPowerHigh
} RAID_SYSTEM_POWER, *PRAID_SYSTEM_POWER;
typedef struct _STOR_SYSTEM_POWER_HINTS {
    ULONG Version;
    ULONG Size;
    RAID_SYSTEM_POWER SystemPower;
    ULONG ResumeLatencyMSec;
} STOR_SYSTEM_POWER_HINTS, *PSTOR_SYSTEM_POWER_HINTS;
typedef struct _STOR_FILTER_RESOURCE_REQUIREMENTS {
    ULONG Version;
    ULONG Size;
    PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementsList;
} STOR_FILTER_RESOURCE_REQUIREMENTS, *PSTOR_FILTER_RESOURCE_REQUIREMENTS;
typedef struct _STOR_MAX_OPERATIONAL_POWER {
    ULONG Version;
    ULONG Size;
    ULONGLONG Value;
} STOR_MAX_OPERATIONAL_POWER, *PSTOR_MAX_OPERATIONAL_POWER;
typedef struct _STOR_POFX_PERF_STATE_CONTEXT {
    ULONG Version;
    ULONG Size;
    ULONG ComponentIndex;
    BOOLEAN Succeeded;
    PVOID Context;
} STOR_POFX_PERF_STATE_CONTEXT, *PSTOR_POFX_PERF_STATE_CONTEXT;
typedef struct _STOR_SERIAL_NUMBER {
    ULONG Version;
    ULONG Size;
    BOOLEAN Unicode;
    UCHAR SerialNumber[STOR_SERIAL_NUMBER_MAX_SIZE];
} STOR_SERIAL_NUMBER, *PSTOR_SERIAL_NUMBER;
typedef enum _SCSI_UNIT_CONTROL_TYPE {
    ScsiQuerySupportedUnitControlTypes = 0,
    ScsiUnitUsage,
    ScsiUnitStart,
    ScsiUnitPower,
    ScsiUnitPoFxPowerInfo,
    ScsiUnitPoFxPowerRequired,
    ScsiUnitPoFxPowerActive,
    ScsiUnitPoFxPowerSetFState,
    ScsiUnitPoFxPowerControl,
    ScsiUnitRemove,
    ScsiUnitSurpriseRemoval,
    ScsiUnitRichDescription,
    ScsiUnitControlMax,
    MakeUnitControlTypeSizeOfUlong = 0xffffffff
} SCSI_UNIT_CONTROL_TYPE, *PSCSI_UNIT_CONTROL_TYPE;
typedef enum _SCSI_UNIT_CONTROL_STATUS {
    ScsiUnitControlSuccess = 0,
    ScsiUnitControlUnsuccessful
} SCSI_UNIT_CONTROL_STATUS, *PSCSI_UNIT_CONTROL_STATUS;
typedef enum _SCSI_UC_DEVICE_USAGE_TYPE {
    ScsiDeviceUsageTypeUndefined,
    ScsiDeviceUsageTypePaging,
    ScsiDeviceUsageTypeHibernation,
    ScsiDeviceUsageTypeDumpFile,
    ScsiDeviceUsageTypeBoot
} SCSI_UC_DEVICE_USAGE_TYPE;
typedef struct _STOR_UC_DEVICE_USAGE {
    PSTOR_ADDRESS Address;
    SCSI_UC_DEVICE_USAGE_TYPE UsageType;
    BOOLEAN InUse;
} STOR_UC_DEVICE_USAGE, *PSTOR_UC_DEVICE_USAGE;
typedef struct _STOR_UNIT_CONTROL_POWER {
    PSTOR_ADDRESS Address;
    STOR_POWER_ACTION PowerAction;
    STOR_DEVICE_POWER_STATE PowerState;
} STOR_UNIT_CONTROL_POWER, *PSTOR_UNIT_CONTROL_POWER;
typedef struct _STOR_POFX_UNIT_POWER_INFO {
    STOR_POWER_CONTROL_HEADER Header;
    BOOLEAN IdlePowerEnabled;
} STOR_POFX_UNIT_POWER_INFO, *PSTOR_POFX_UNIT_POWER_INFO;
typedef struct _STOR_POFX_POWER_REQUIRED_CONTEXT {
    STOR_POWER_CONTROL_HEADER Header;
    BOOLEAN PowerRequired;
} STOR_POFX_POWER_REQUIRED_CONTEXT, *PSTOR_POFX_POWER_REQUIRED_CONTEXT;
typedef struct _STOR_POFX_ACTIVE_CONTEXT {
    STOR_POWER_CONTROL_HEADER Header;
    ULONG ComponentIndex;
    BOOLEAN Active;
} STOR_POFX_ACTIVE_CONTEXT, *PSTOR_POFX_ACTIVE_CONTEXT;
typedef struct _STOR_POFX_FSTATE_CONTEXT {
    STOR_POWER_CONTROL_HEADER Header;
    ULONG ComponentIndex;
    ULONG FState;
} STOR_POFX_FSTATE_CONTEXT, *PSTOR_POFX_FSTATE_CONTEXT;
typedef struct _STOR_POFX_POWER_CONTROL {
    STOR_POWER_CONTROL_HEADER Header;
    LPCGUID PowerControlCode;
    SIZE_T InBufferSize;
    SIZE_T OutBufferSize;
    PVOID InBuffer;
    PVOID OutBuffer;
    PSIZE_T BytesReturned;
} STOR_POFX_POWER_CONTROL, *PSTOR_POFX_POWER_CONTROL;
typedef struct _STOR_RICH_DEVICE_DESCRIPTION {
    ULONG Version;
    ULONG Size;
    CHAR VendorId[STOR_VENDOR_ID_LENGTH + 1];
    CHAR ModelNumber[STOR_MODEL_NUMBER_LENGTH + 1];
    CHAR FirmwareRevision[STOR_FIRMWARE_REVISION_LENGTH + 1];
} STOR_RICH_DEVICE_DESCRIPTION, *PSTOR_RICH_DEVICE_DESCRIPTION;
typedef struct _STOR_RICH_DEVICE_DESCRIPTION_V2 {
    ULONG Version;
    ULONG Size;
    CHAR VendorId[STOR_VENDOR_ID_LENGTH + 1];
    CHAR ModelNumber[STOR_MODEL_NUMBER_LENGTH + 1];
    CHAR FirmwareRevision[STOR_FIRMWARE_REVISION_LENGTH + 1];
    PSTOR_ADDRESS Address;
} STOR_RICH_DEVICE_DESCRIPTION_V2, *PSTOR_RICH_DEVICE_DESCRIPTION_V2;
typedef enum _STOR_CRYPTO_OPERATION_TYPE {
    StorCryptoOperationInsertKey = 1,
    StorCryptoOperationMax,
} STOR_CRYPTO_OPERATION_TYPE, *PSTOR_CRYPTO_OPERATION_TYPE;
typedef struct _STOR_CRYPTO_OPERATION {
    STOR_CRYPTO_OPERATION_TYPE OperationType;
    ULONG OperationBufferLength;
    PVOID OperationBuffer;
} STOR_CRYPTO_OPERATION, *PSTOR_CRYPTO_OPERATION;
typedef struct _STOR_CRYPTO_OPERATION_INSERT_KEY {
    USHORT Version;
    USHORT Size;
    ULONG KeyIndex;
    ULONG CryptoCapabilityIndex;
    ULONG DataUnitSizeBitmask;
    ULONG KeySize;
    ULONG Reserved;
    PVOID KeyVirtualAddress;
    PHYSICAL_ADDRESS KeyPhysicalAddress;
} STOR_CRYPTO_OPERATION_INSERT_KEY, *PSTOR_CRYPTO_OPERATION_INSERT_KEY;
typedef struct _SCSI_SUPPORTED_CONTROL_TYPE_LIST {
    ULONG MaxControlType;
    BOOLEAN SupportedTypeList[0];
} SCSI_SUPPORTED_CONTROL_TYPE_LIST, *PSCSI_SUPPORTED_CONTROL_TYPE_LIST;
typedef struct _DPC_BUFFER {
    CSHORT Type;
    UCHAR Number;
    UCHAR Importance;
    struct {
        PVOID F;
        PVOID B;
    };
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
} DPC_BUFFER;
typedef struct _STOR_DPC {
    DPC_BUFFER Dpc;
    ULONG_PTR Lock;
} STOR_DPC, *PSTOR_DPC;
typedef enum _STOR_SPINLOCK {
    DpcLock = 1,
    StartIoLock,
    InterruptLock,
    ThreadedDpcLock,
    DpcLevelLock
} STOR_SPINLOCK;
typedef enum _STOR_IMPORTANCE {
    StorLowImportance,
    StorMediumImportance,
    StorHighImportance,
    StorMediumHighImportance
} STOR_IMPORTANCE;
typedef struct _STOR_LOCK_HANDLE {
    STOR_SPINLOCK Lock;
    struct {
        struct {
            PVOID Next;
            PVOID Lock;
        } LockQueue;
        KIRQL OldIrql;
    } Context;
} STOR_LOCK_HANDLE, *PSTOR_LOCK_HANDLE;
typedef struct _STOR_EXT_SET_PARAMETERS {
    ULONG Version;
    ULONG Reserved;
    LONGLONG NoWakeTolerance;
} STOR_EXT_SET_PARAMETERS, *PSTOR_EXT_SET_PARAMETERS;
typedef VOID STOR_EXT_DELETE_CALLBACK (
    _In_opt_ PVOID Context);
typedef STOR_EXT_DELETE_CALLBACK *PSTOR_EXT_DELETE_CALLBACK;
typedef struct _STOR_EXT_DELETE_PARAMETERS {
    ULONG Version;
    ULONG Reserved;
    PSTOR_EXT_DELETE_CALLBACK DeleteCallback;
    PVOID DeleteContext;
} STOR_EXT_DELETE_PARAMETERS, *PSTOR_EXT_DELETE_PARAMETERS;
typedef struct _PERF_CONFIGURATION_DATA {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG ConcurrentChannels;
    ULONG FirstRedirectionMessageNumber, LastRedirectionMessageNumber;
    ULONG DeviceNode;
    ULONG Reserved;
    PGROUP_AFFINITY MessageTargets;
} PERF_CONFIGURATION_DATA, *PPERF_CONFIGURATION_DATA;
typedef struct _STARTIO_PERFORMANCE_PARAMETERS {
    ULONG Version;
    ULONG Size;
    ULONG MessageNumber;
    ULONG ChannelNumber;
} STARTIO_PERFORMANCE_PARAMETERS, *PSTARTIO_PERFORMANCE_PARAMETERS;
typedef struct _STARTIO_PERFORMANCE_PARAMETERS_V2 {
    ULONG Version;
    ULONG Size;
    ULONG MessageNumber;
    ULONG ChannelNumber;
    PROCESSOR_NUMBER InitiatingProcessor;
} STARTIO_PERFORMANCE_PARAMETERS_V2, *PSTARTIO_PERFORMANCE_PARAMETERS_V2;
typedef struct _STOR_UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    [size_is(MaximumLength / 2), length_is((Length) / 2) ] USHORT * Buffer;
} STOR_UNICODE_STRING, *PSTOR_UNICODE_STRING;
typedef enum _STOR_IO_PRIORITY_HINT {
    StorIoPriorityVeryLow = 0,
    StorIoPriorityLow,
    StorIoPriorityNormal,
    StorIoPriorityHigh,
    StorIoPriorityCritical,
    StorIoMaxPriorityTypes,
    StorIoMaxPriorityValue = 0xffff
} STOR_IO_PRIORITY_HINT, *PSTOR_IO_PRIORITY_HINT;
typedef struct _STOR_REQUEST_INFO_V1 {
    USHORT Version;
    USHORT Size;
    STOR_IO_PRIORITY_HINT PriorityHint;
    ULONG Flags;
    ULONG Key;
    ULONG Length;
    BOOLEAN IsWriteRequest;
    UCHAR Reserved[3];
} STOR_REQUEST_INFO_V1, *PSTOR_REQUEST_INFO_V1;
typedef struct _STOR_REQUEST_INFO_V2 {
    USHORT Version;
    USHORT Size;
    STOR_IO_PRIORITY_HINT PriorityHint;
    ULONG Flags;
    ULONG Key;
    ULONG Length;
    BOOLEAN IsWriteRequest;
    UCHAR Reserved[3];
    PSTOR_UNICODE_STRING FileName;
    ULONG ProcessId;
} STOR_REQUEST_INFO_V2, *PSTOR_REQUEST_INFO_V2;
typedef STOR_REQUEST_INFO_V2 STOR_REQUEST_INFO, *PSTOR_REQUEST_INFO;
typedef enum _STOR_RPMB_FRAME_TYPE {
    StorRpmbFrameTypeUnknown = 0,
    StorRpmbFrameTypeStandard,
    StorRpmbFrameTypeMax,
} STOR_RPMB_FRAME_TYPE, *PSTOR_RPMB_FRAME_TYPE;
typedef struct _STOR_RPMB_CAPABILITIES_DATA {
    ULONG Version;
    ULONG Size;
    ULONG RpmbSize;
    ULONG MaxReliableRpmbWriteSize;
    UCHAR SecurityProtocol;
    USHORT SecurityProtocolSpecifier;
    STOR_ADDRESS RpmbTarget;
    STOR_RPMB_FRAME_TYPE FrameFormat;
} STOR_RPMB_CAPABILITIES_DATA, *PSTOR_RPMB_CAPABILITIES_DATA;
typedef enum _STOR_CRYPTO_ALGORITHM_ID {
    StorCryptoAlgorithmUnknown = 0,
    StorCryptoAlgorithmXTSAES = 1,
    StorCryptoAlgorithmBitlockerAESCBC,
    StorCryptoAlgorithmAESECB,
    StorCryptoAlgorithmESSIVAESCBC,
    StorCryptoAlgorithmMax
} STOR_CRYPTO_ALGORITHM_ID, *PSTOR_CRYPTO_ALGORITHM_ID;
typedef enum _STOR_CRYPTO_KEY_SIZE {
    StorCryptoKeySizeUnknown = 0,
    StorCryptoKeySize128Bits = 1,
    StorCryptoKeySize192Bits,
    StorCryptoKeySize256Bits,
    StorCryptoKeySize512Bits,
    StorCryptoKeySizeMax
} STOR_CRYPTO_KEY_SIZE, *PSTOR_CRYPTO_KEY_SIZE;
typedef struct _STOR_CRYPTO_CAPABILITY {
    ULONG Version;
    ULONG Size;
    USHORT CryptoCapabilityIndex;
    USHORT DataUnitSizeBitmask;
    STOR_CRYPTO_ALGORITHM_ID AlgorithmId;
    STOR_CRYPTO_KEY_SIZE KeySize;
} STOR_CRYPTO_CAPABILITY, *PSTOR_CRYPTO_CAPABILITY;
typedef struct _STOR_CRYPTO_CAPABILITIES_DATA {
    ULONG Version;
    ULONG Size;
    USHORT NumKeysSupported;
    USHORT NumCryptoCapabilities;
    _Field_size_(NumCryptoCapabilities) STOR_CRYPTO_CAPABILITY CryptoCapabilities[ANYSIZE_ARRAY];
} STOR_CRYPTO_CAPABILITIES_DATA, *PSTOR_CRYPTO_CAPABILITIES_DATA;
typedef struct _STOR_CRYPTO_KEY_INFO {
    ULONG Version;
    ULONG Size;
    ULONG KeyIndex;
    ULONGLONG Tweak;
} STOR_CRYPTO_KEY_INFO, *PSTOR_CRYPTO_KEY_INFO;
                                           RAID_ASYNC_NOTIFY_FLAG_DEVICE_STATUS | \
                                           RAID_ASYNC_NOTIFY_FLAG_DEVICE_OPERATION)
#pragma warning(push)
#pragma warning(disable:4324)
typedef struct  _STOR_SLIST_ENTRY *PSTOR_SLIST_ENTRY;
typedef struct  _STOR_SLIST_ENTRY {
    PSTOR_SLIST_ENTRY Next;
} STOR_SLIST_ENTRY;
#pragma warning(pop)
typedef union  _STOR_SLIST_HEADER {
    struct {
        ULONGLONG Alignment;
        ULONGLONG Region;
    } DUMMYSTRUCTNAME;
    struct {
        ULONGLONG Depth:16;
        ULONGLONG Sequence:9;
        ULONGLONG NextEntry:39;
        ULONGLONG HeaderType:1;
        ULONGLONG Init:1;
        ULONGLONG Reserved:59;
        ULONGLONG Region:3;
    } Header8;
    struct {
        ULONGLONG Depth:16;
        ULONGLONG Sequence:48;
        ULONGLONG HeaderType:1;
        ULONGLONG Init:1;
        ULONGLONG Reserved:2;
        ULONGLONG NextEntry:60;
    } Header16;
    struct {
        ULONGLONG Depth:16;
        ULONGLONG Sequence:48;
        ULONGLONG HeaderType:1;
        ULONGLONG Reserved:3;
        ULONGLONG NextEntry:60;
    } HeaderX64;
} STOR_SLIST_HEADER, *PSTOR_SLIST_HEADER;
typedef struct _STOR_LIST_ENTRY {
    struct _STOR_LIST_ENTRY *Flink;
    struct _STOR_LIST_ENTRY *Blink;
} STOR_LIST_ENTRY, *PSTOR_LIST_ENTRY;
typedef ULONG_PTR STOR_KSPIN_LOCK;
typedef STOR_KSPIN_LOCK *PSTOR_KSPIN_LOCK;
typedef
ULONG
sp_DRIVER_INITIALIZE (
    _In_ PVOID DriverObject,
    _In_ PVOID RegistryPath
    );
typedef sp_DRIVER_INITIALIZE *sp_PDRIVER_INITIALIZE;
typedef
BOOLEAN
HW_INITIALIZE (
    _In_ PVOID DeviceExtension
    );
typedef HW_INITIALIZE *PHW_INITIALIZE;
typedef
BOOLEAN
HW_BUILDIO (
    _In_ PVOID DeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    );
typedef HW_BUILDIO *PHW_BUILDIO;
typedef
BOOLEAN
HW_STARTIO (
    _In_ PVOID DeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    );
typedef HW_STARTIO *PHW_STARTIO;
typedef
BOOLEAN
HW_INTERRUPT (
    _In_ PVOID DeviceExtension
    );
typedef HW_INTERRUPT *PHW_INTERRUPT;
typedef
VOID
HW_TIMER (
    _In_ PVOID DeviceExtension
    );
typedef HW_TIMER *PHW_TIMER;
typedef
VOID
HW_TIMER_EX (
    _In_ PVOID DeviceExtension,
    _In_opt_ PVOID Context
    );
typedef HW_TIMER_EX *PHW_TIMER_EX;
typedef
VOID
HW_DMA_STARTED (
    _In_ PVOID DeviceExtension
    );
typedef HW_DMA_STARTED *PHW_DMA_STARTED;
typedef
ULONG
HW_FIND_ADAPTER (
    _In_ PVOID DeviceExtension,
    _In_ PVOID HwContext,
    _In_ PVOID BusInformation,
    _In_z_ PCHAR ArgumentString,
    _Inout_ PPORT_CONFIGURATION_INFORMATION ConfigInfo,
    _In_ PBOOLEAN Reserved3
    );
typedef HW_FIND_ADAPTER *PHW_FIND_ADAPTER;
typedef
BOOLEAN
HW_RESET_BUS (
    _In_ PVOID DeviceExtension,
    _In_ ULONG PathId
    );
typedef HW_RESET_BUS *PHW_RESET_BUS;
typedef
BOOLEAN
HW_ADAPTER_STATE (
    _In_ PVOID DeviceExtension,
    _In_ PVOID Context,
    _In_ BOOLEAN SaveState
    );
typedef HW_ADAPTER_STATE *PHW_ADAPTER_STATE;
typedef
SCSI_ADAPTER_CONTROL_STATUS
HW_ADAPTER_CONTROL (
    _In_ PVOID DeviceExtension,
    _In_ SCSI_ADAPTER_CONTROL_TYPE ControlType,
    _In_ PVOID Parameters
    );
typedef HW_ADAPTER_CONTROL *PHW_ADAPTER_CONTROL;
typedef
BOOLEAN
HW_PASSIVE_INITIALIZE_ROUTINE (
    _In_ PVOID DeviceExtension
    );
typedef HW_PASSIVE_INITIALIZE_ROUTINE *PHW_PASSIVE_INITIALIZE_ROUTINE;
typedef
VOID
HW_DPC_ROUTINE(
    _In_ PSTOR_DPC Dpc,
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PVOID SystemArgument1,
    _In_opt_ PVOID SystemArgument2
    );
typedef HW_DPC_ROUTINE *PHW_DPC_ROUTINE;
typedef
VOID
HW_WORKITEM (
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PVOID Context,
    _In_ PVOID Worker
    );
typedef HW_WORKITEM *PHW_WORKITEM;
typedef
VOID
HW_STATE_CHANGE (
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PVOID Context,
    _In_ SHORT AddressType,
    _In_ PVOID Address,
    _In_ ULONG Status
    );
typedef HW_STATE_CHANGE *PHW_STATE_CHANGE;
typedef
VOID
HW_TRACING_ENABLED (
    _In_ PVOID HwDeviceExtension,
    _In_ BOOLEAN Enabled
    );
typedef HW_TRACING_ENABLED *PHW_TRACING_ENABLED;
typedef
SCSI_UNIT_CONTROL_STATUS
HW_UNIT_CONTROL (
    _In_ PVOID DeviceExtension,
    _In_ SCSI_UNIT_CONTROL_TYPE ControlType,
    _In_ PVOID Parameters
    );
typedef HW_UNIT_CONTROL *PHW_UNIT_CONTROL;
typedef
BOOLEAN
(*PStorPortGetMessageInterruptInformation)(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageId,
    _Out_ PMESSAGE_INTERRUPT_INFORMATION InterruptInfo
    );
typedef
VOID
(*PStorPortPutScatterGatherList) (
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_SCATTER_GATHER_LIST ScatterGatherList,
    _In_ BOOLEAN WriteToDevice
    );
typedef
VOID
POST_SCATTER_GATHER_EXECUTE (
    _In_ PVOID *DeviceObject,
    _In_ PVOID *Irp,
    _In_ PSTOR_SCATTER_GATHER_LIST ScatterGather,
    _In_ PVOID Context
    );
typedef POST_SCATTER_GATHER_EXECUTE *PPOST_SCATTER_GATHER_EXECUTE;
typedef
GETSGSTATUS
(*PStorPortBuildScatterGatherList) (
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Mdl,
    _In_reads_bytes_(Length) PVOID CurrentVa,
    _In_ ULONG Length,
    _In_ PPOST_SCATTER_GATHER_EXECUTE ExecutionRoutine,
    _In_ PVOID Context,
    _In_ BOOLEAN WriteToDevice,
    _Inout_updates_bytes_(ScatterGatherBufferLength) PVOID ScatterGatherBuffer,
    _In_ ULONG ScatterGatherBufferLength
    );
typedef
VOID
(*PStorPortFreePool)(
    _In_ __drv_freesMem(Mem) PVOID PMemory,
    _In_ PVOID HwDeviceExtension,
    _In_opt_ __drv_freesMem(Mem) PVOID PMdl
    );
typedef
__drv_allocatesMem(Mem)
_Post_writable_byte_size_(NumberOfBytes)
PVOID
(*PStorPortAllocatePool)(
    _In_ ULONG NumberOfBytes,
    _In_ ULONG Tag,
    _In_ PVOID HwDeviceExtension,
    _Out_ _At_(*PMdl, _When_(return==0, _Post_null_))
    _At_(*PMdl, _When_(return!=0, __drv_aliasesMem __drv_allocatesMem(Mem) _Post_notnull_))
        PVOID *PMdl
    );
typedef
PVOID
(*PStorPortGetSystemAddress)(
    _In_ PSCSI_REQUEST_BLOCK Srb
    );
typedef
ULONG
(*PStorPortAcquireMSISpinLock)(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageID
    );
typedef
VOID
(*PStorPortReleaseMSISpinLock)(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageID,
    _In_ ULONG OldIrql
    );
typedef
VOID
(*PStorPortCompleteServiceIrp)(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Irp
    );
typedef
PVOID
(*PStorPortGetOriginalMdl)(
    _In_ PSCSI_REQUEST_BLOCK Srb
    );
typedef struct _STORPORT_EXTENDED_FUNCTIONS {
    ULONG Version;
    PStorPortGetMessageInterruptInformation GetMessageInterruptInformation;
    PStorPortPutScatterGatherList PutScatterGatherList;
    PStorPortBuildScatterGatherList BuildScatterGatherList;
    PStorPortFreePool FreePool;
    PStorPortAllocatePool AllocatePool;
    PStorPortGetSystemAddress GetSystemAddress;
    PStorPortAcquireMSISpinLock AcquireMSISpinLock;
    PStorPortReleaseMSISpinLock ReleaseMSISpinLock;
    PStorPortCompleteServiceIrp CompleteServiceIrp;
    PStorPortGetOriginalMdl GetOriginalMdl;
} STORPORT_EXTENDED_FUNCTIONS, *PSTORPORT_EXTENDED_FUNCTIONS;
typedef enum _STORPORT_FUNCTION_CODE {
    ExtFunctionAllocatePool,
    ExtFunctionFreePool,
    ExtFunctionAllocateMdl,
    ExtFunctionFreeMdl,
    ExtFunctionBuildMdlForNonPagedPool,
    ExtFunctionGetSystemAddress,
    ExtFunctionGetOriginalMdl,
    ExtFunctionCompleteServiceIrp,
    ExtFunctionGetDeviceObjects,
    ExtFunctionBuildScatterGatherList,
    ExtFunctionPutScatterGatherList,
    ExtFunctionAcquireMSISpinLock,
    ExtFunctionReleaseMSISpinLock,
    ExtFunctionGetMessageInterruptInformation,
    ExtFunctionInitializePerformanceOptimizations,
    ExtFunctionGetStartIoPerformanceParameters,
    ExtFunctionLogSystemEvent,
    ExtFunctionGetCurrentProcessorNumber,
    ExtFunctionGetActiveGroupCount,
    ExtFunctionGetGroupAffinity,
    ExtFunctionGetActiveNodeCount,
    ExtFunctionGetNodeAffinity,
    ExtFunctionGetHighestNodeNumber,
    ExtFunctionGetLogicalProcessorRelationship,
    ExtFunctionAllocateContiguousMemorySpecifyCacheNode,
    ExtFunctionFreeContiguousMemorySpecifyCache,
    ExtFunctionSetPowerSettingNotificationGuids,
    ExtFunctionInvokeAcpiMethod,
    ExtFunctionGetRequestInfo,
    ExtFunctionInitializeWorker,
    ExtFunctionQueueWorkItem,
    ExtFunctionFreeWorker,
    ExtFunctionInitializeTimer,
    ExtFunctionRequestTimer,
    ExtFunctionFreeTimer,
    ExtFunctionInitializeSListHead,
    ExtFunctionInterlockedFlushSList,
    ExtFunctionInterlockedPopEntrySList,
    ExtFunctionInterlockedPushEntrySList,
    ExtFunctionQueryDepthSList,
    ExtFunctionGetActivityId,
    ExtFunctionGetSystemPortNumber,
    ExtFunctionGetDataInBufferMdl,
    ExtFunctionGetDataInBufferSystemAddress,
    ExtFunctionGetDataInBufferScatterGatherList,
    ExtFunctionMarkDumpMemory,
    ExtFunctionSetUnitAttributes,
    ExtFunctionQueryPerformanceCounter,
    ExtFunctionInitializePoFxPower,
    ExtFunctionPoFxActivateComponent,
    ExtFunctionPoFxIdleComponent,
    ExtFunctionPoFxSetComponentLatency,
    ExtFunctionPoFxSetComponentResidency,
    ExtFunctionPoFxPowerControl,
    ExtFunctionFlushDataBufferMdl,
    ExtFunctionDeviceOperationAllowed,
    ExtFunctionGetProcessorIndexFromNumber,
    ExtFunctionPoFxSetIdleTimeout,
    ExtFunctionMiniportEtwEvent2,
    ExtFunctionMiniportEtwEvent4,
    ExtFunctionMiniportEtwEvent8,
    ExtFunctionCurrentOsInstallationUpgrade,
    ExtFunctionRegistryReadAdapterKey,
    ExtFunctionRegistryWriteAdapterKey,
    ExtFunctionSetAdapterBusType,
    ExtFunctionPoFxRegisterPerfStates,
    ExtFunctionPoFxSetPerfState,
    ExtFunctionGetD3ColdSupport,
    ExtFunctionInitializeRpmb,
    ExtFunctionAllocateHmb,
    ExtFunctionFreeHmb,
    ExtFunctionPropagateIrpExtension,
    ExtFunctionInterlockedInsertHeadList,
    ExtFunctionInterlockedInsertTailList,
    ExtFunctionInterlockedRemoveHeadList,
    ExtFunctionInitializeSpinlock,
    ExtFunctionGetPfns,
    ExtFunctionInitializeCryptoEngine,
    ExtFunctionGetRequestCryptoInfo,
    ExtFunctionMiniportTelemetry,
    ExtFunctionUpdateAdapterMaxIO,
    ExtFunctionDelayExecution,
    ExtFunctionAllocateDmaMemory,
    ExtFunctionFreeDmaMemory,
    ExtFunctionUpdateAdapterMaxIOInfo,
    ExtFunctionMiniportChannelEtwEvent2,
    ExtFunctionMiniportChannelEtwEvent4,
    ExtFunctionMiniportChannelEtwEvent8,
    ExtFunctionInitializeHighResolutionTimer,
    ExtFunctionRequestHighResolutionTimer,
    ExtFunctionCancelHighResolutionTimer,
    ExtFunctionFreeHighResolutionTimer,
    ExtFunctionGetCurrentProcessorIndex,
    ExtFunctionAcquireSpinLock,
    ExtFunctionGetProcessorCount,
    ExtFunctionCancelDpc,
    ExtFunctionMiniportTelemetryEx,
    ExtFunctionQueryConfiguration,
    ExtFunctionLogHardwareError
} STORPORT_FUNCTION_CODE, *PSTORPORT_FUNCTION_CODE;
typedef enum _SCSI_NOTIFICATION_TYPE {
    RequestComplete,
    NextRequest,
    NextLuRequest,
    ResetDetected,
    _obsolete1,
    _obsolete2,
    RequestTimerCall,
    BusChangeDetected,
    WMIEvent,
    WMIReregister,
    LinkUp,
    LinkDown,
    QueryTickCount,
    BufferOverrunDetected,
    TraceNotification,
    GetExtendedFunctionTable,
    EnablePassiveInitialization = 0x1000,
    InitializeDpc,
    IssueDpc,
    AcquireSpinLock,
    ReleaseSpinLock,
    StateChangeDetectedCall,
    IoTargetRequestServiceTime,
    AsyncNotificationDetected,
    RequestDirectComplete,
    InitializeDpcWithContext,
    InitializeThreadedDpc,
    SetTargetProcessorDpc,
    MarkDeviceFailed
} SCSI_NOTIFICATION_TYPE, *PSCSI_NOTIFICATION_TYPE;
typedef enum _STOR_TELEMETRY_CATEGORY {
    StorTelemetryCategory,
    StorMeasuresCategory
} STOR_TELEMETRY_CATEGORY, *PSTOR_TELEMETRY_CATEGORY;
typedef
VOID
HW_FREE_ADAPTER_RESOURCES (
    _In_ PVOID DeviceExtension
    );
typedef HW_FREE_ADAPTER_RESOURCES *PHW_FREE_ADAPTER_RESOURCES;
typedef
VOID
HW_PROCESS_SERVICE_REQUEST (
    _In_ PVOID DeviceExtension,
    _In_ PVOID Irp
    );
typedef HW_PROCESS_SERVICE_REQUEST *PHW_PROCESS_SERVICE_REQUEST;
typedef
VOID
HW_COMPLETE_SERVICE_IRP (
    _In_ PVOID DeviceExtension
    );
typedef HW_COMPLETE_SERVICE_IRP *PHW_COMPLETE_SERVICE_IRP;
typedef
VOID
HW_INITIALIZE_TRACING (
    _In_ PVOID Arg1,
    _In_ PVOID Arg2
    );
typedef HW_INITIALIZE_TRACING *PHW_INITIALIZE_TRACING;
typedef
VOID
HW_CLEANUP_TRACING (
    _In_ PVOID Arg1
    );
typedef HW_CLEANUP_TRACING *PHW_CLEANUP_TRACING;
typedef
ULONG
VIRTUAL_HW_FIND_ADAPTER (
    _In_ PVOID DeviceExtension,
    _In_ PVOID HwContext,
    _In_ PVOID BusInformation,
    _In_ PVOID LowerDevice,
    _In_ PCHAR ArgumentString,
    _Inout_ PPORT_CONFIGURATION_INFORMATION ConfigInfo,
    _In_ PBOOLEAN Again
    );
typedef VIRTUAL_HW_FIND_ADAPTER *PVIRTUAL_HW_FIND_ADAPTER;
typedef struct _VIRTUAL_HW_INITIALIZATION_DATA {
    ULONG HwInitializationDataSize;
    INTERFACE_TYPE AdapterInterfaceType;
    PHW_INITIALIZE HwInitialize;
    PHW_STARTIO HwStartIo;
    PHW_INTERRUPT HwInterrupt;
    PVIRTUAL_HW_FIND_ADAPTER HwFindAdapter;
    PHW_RESET_BUS HwResetBus;
    PHW_DMA_STARTED HwDmaStarted;
    PHW_ADAPTER_STATE HwAdapterState;
    ULONG DeviceExtensionSize;
    ULONG SpecificLuExtensionSize;
    ULONG SrbExtensionSize;
    ULONG NumberOfAccessRanges;
    PVOID Reserved;
    UCHAR MapBuffers;
    BOOLEAN NeedPhysicalAddresses;
    BOOLEAN TaggedQueuing;
    BOOLEAN AutoRequestSense;
    BOOLEAN MultipleRequestPerLu;
    BOOLEAN ReceiveEvent;
    USHORT VendorIdLength;
    PVOID VendorId;
    union {
        USHORT ReservedUshort;
        USHORT PortVersionFlags;
    };
    USHORT DeviceIdLength;
    PVOID DeviceId;
    PHW_ADAPTER_CONTROL HwAdapterControl;
    PHW_BUILDIO HwBuildIo;
    PHW_FREE_ADAPTER_RESOURCES HwFreeAdapterResources;
    PHW_PROCESS_SERVICE_REQUEST HwProcessServiceRequest;
    PHW_COMPLETE_SERVICE_IRP HwCompleteServiceIrp;
    PHW_INITIALIZE_TRACING HwInitializeTracing;
    PHW_CLEANUP_TRACING HwCleanupTracing;
} VIRTUAL_HW_INITIALIZATION_DATA, *PVIRTUAL_HW_INITIALIZATION_DATA;
typedef struct _HW_INITIALIZATION_DATA {
  ULONG HwInitializationDataSize;
  INTERFACE_TYPE AdapterInterfaceType;
  PHW_INITIALIZE HwInitialize;
  PHW_STARTIO HwStartIo;
  PHW_INTERRUPT HwInterrupt;
  PVOID HwFindAdapter;
  PHW_RESET_BUS HwResetBus;
  PHW_DMA_STARTED HwDmaStarted;
  PHW_ADAPTER_STATE HwAdapterState;
  ULONG DeviceExtensionSize;
  ULONG SpecificLuExtensionSize;
  ULONG SrbExtensionSize;
  ULONG NumberOfAccessRanges;
  PVOID Reserved;
  UCHAR MapBuffers;
  BOOLEAN NeedPhysicalAddresses;
  BOOLEAN TaggedQueuing;
  BOOLEAN AutoRequestSense;
  BOOLEAN MultipleRequestPerLu;
  BOOLEAN ReceiveEvent;
  USHORT VendorIdLength;
  PVOID VendorId;
  union {
    USHORT ReservedUshort;
    USHORT PortVersionFlags;
  } ;
  USHORT DeviceIdLength;
  PVOID DeviceId;
  PHW_ADAPTER_CONTROL HwAdapterControl;
  PHW_BUILDIO HwBuildIo;
  PHW_FREE_ADAPTER_RESOURCES HwFreeAdapterResources;
  PHW_PROCESS_SERVICE_REQUEST HwProcessServiceRequest;
  PHW_COMPLETE_SERVICE_IRP HwCompleteServiceIrp;
  PHW_INITIALIZE_TRACING HwInitializeTracing;
  PHW_CLEANUP_TRACING HwCleanupTracing;
  PHW_TRACING_ENABLED HwTracingEnabled;
  ULONG FeatureSupport;
  ULONG SrbTypeFlags;
  ULONG AddressTypeFlags;
  ULONG Reserved1;
  PHW_UNIT_CONTROL HwUnitControl;
} HW_INITIALIZATION_DATA, *PHW_INITIALIZATION_DATA;
    FIELD_OFFSET(HW_INITIALIZATION_DATA, HwFreeAdapterResources)
    FIELD_OFFSET(HW_INITIALIZATION_DATA, HwTracingEnabled)
typedef struct _MINIPORT_MAPPINGS {
    USHORT Version;
    PVOID IBFTable;
    PVOID Nic0Map;
    PVOID Nic1Map;
    ULONG NumberOfAdditionalNic;
   PVOID NicMap[];
} MINIPORT_MAPPINGS, *PMINIPORT_MAPPINGS;
typedef struct _MINIPORT_DUMP_POINTERS {
    USHORT Version;
    USHORT Size;
    WCHAR DriverName[DUMP_MINIPORT_NAME_LENGTH];
    struct _ADAPTER_OBJECT *AdapterObject;
    PVOID MappedRegisterBase;
    ULONG CommonBufferSize;
    PVOID MiniportPrivateDumpData;
    ULONG SystemIoBusNumber;
    INTERFACE_TYPE AdapterInterfaceType;
    ULONG MaximumTransferLength;
    ULONG NumberOfPhysicalBreaks;
    ULONG AlignmentMask;
    ULONG NumberOfAccessRanges;
    ACCESS_RANGE (*AccessRanges)[];
    UCHAR NumberOfBuses;
    BOOLEAN Master;
    BOOLEAN MapBuffers;
    UCHAR MaximumNumberOfTargets;
} MINIPORT_DUMP_POINTERS, *PMINIPORT_DUMP_POINTERS;
typedef enum _STOR_EVENT_ASSOCIATION_ENUM {
    StorEventAdapterAssociation = 0,
    StorEventLunAssociation,
    StorEventTargetAssociation,
    StorEventInvalidAssociation
} STOR_EVENT_ASSOCIATION_ENUM;
typedef struct _STOR_LOG_EVENT_DETAILS {
    ULONG InterfaceRevision;
    ULONG Size;
    ULONG Flags;
    STOR_EVENT_ASSOCIATION_ENUM EventAssociation;
    ULONG PathId;
    ULONG TargetId;
    ULONG LunId;
    BOOLEAN StorportSpecificErrorCode;
    ULONG ErrorCode;
    ULONG UniqueId;
    ULONG DumpDataSize;
    PVOID DumpData;
    ULONG StringCount;
    PWSTR * StringList;
} STOR_LOG_EVENT_DETAILS, *PSTOR_LOG_EVENT_DETAILS;
typedef struct _STOR_UNIT_ATTRIBUTES {
    ULONG DeviceAttentionSupported : 1;
    ULONG AsyncNotificationSupported: 1;
    ULONG D3ColdNotSupported : 1;
    ULONG Reserved : 29;
} STOR_UNIT_ATTRIBUTES, *PSTOR_UNIT_ATTRIBUTES;
typedef
BOOLEAN
STOR_SYNCHRONIZED_ACCESS(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Context
    );
typedef STOR_SYNCHRONIZED_ACCESS *PSTOR_SYNCHRONIZED_ACCESS;
STORPORT_API
ULONG
StorPortInitialize(
    _In_ PVOID Argument1,
    _In_ PVOID Argument2,
    _In_ struct _HW_INITIALIZATION_DATA *HwInitializationData,
    _In_opt_ PVOID HwContext
    );
STORPORT_API
VOID
StorPortFreeDeviceBase(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID MappedAddress
    );
STORPORT_API
ULONG
StorPortGetBusData(
    _In_ PVOID DeviceExtension,
    _In_ ULONG BusDataType,
    _In_ ULONG SystemIoBusNumber,
    _In_ ULONG SlotNumber,
    _Out_ _When_(Length!=0, _Out_writes_bytes_(Length))
    PVOID Buffer,
    _In_ ULONG Length
    );
STORPORT_API
ULONG
StorPortSetBusDataByOffset(
    _In_ PVOID DeviceExtension,
    _In_ ULONG BusDataType,
    _In_ ULONG SystemIoBusNumber,
    _In_ ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
STORPORT_API
PVOID
StorPortGetDeviceBase(
    _In_ PVOID HwDeviceExtension,
    _In_ INTERFACE_TYPE BusType,
    _In_ ULONG SystemIoBusNumber,
    _In_ STOR_PHYSICAL_ADDRESS IoAddress,
    _In_ ULONG NumberOfBytes,
    _In_ BOOLEAN InIoSpace
    );
STORPORT_API
PVOID
StorPortGetLogicalUnit(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );
STORPORT_API
PSTOR_SCATTER_GATHER_LIST
StorPortGetScatterGatherList(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    );
STORPORT_API
STOR_PHYSICAL_ADDRESS
StorPortGetPhysicalAddress(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_ PVOID VirtualAddress,
    _Out_ ULONG *Length
    );
STORPORT_API
PVOID
StorPortGetVirtualAddress(
    _In_ PVOID HwDeviceExtension,
    _In_ STOR_PHYSICAL_ADDRESS PhysicalAddress
    );
STORPORT_API
PVOID
StorPortGetUncachedExtension(
    _In_ PVOID HwDeviceExtension,
    _In_ PPORT_CONFIGURATION_INFORMATION ConfigInfo,
    _In_ ULONG NumberOfBytes
    );
STORPORT_API
BOOLEAN
StorPortPauseDevice(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG Timeout
    );
STORPORT_API
BOOLEAN
StorPortResumeDevice(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );
STORPORT_API
BOOLEAN
StorPortPause(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG Timeout
    );
STORPORT_API
BOOLEAN
StorPortResume(
    _In_ PVOID HwDeviceExtension
    );
STORPORT_API
BOOLEAN
StorPortDeviceBusy(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG RequestsToComplete
    );
STORPORT_API
BOOLEAN
StorPortDeviceReady(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );
STORPORT_API
BOOLEAN
StorPortBusy(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG RequestsToComplete
    );
STORPORT_API
BOOLEAN
StorPortReady(
    _In_ PVOID HwDeviceExtension
    );
STORPORT_API
BOOLEAN
StorPortSetDeviceQueueDepth(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG Depth
    );
STORPORT_API
VOID
StorPortNotification(
    _In_ SCSI_NOTIFICATION_TYPE NotificationType,
    _In_ PVOID HwDeviceExtension,
    ...
    );
STORPORT_API
VOID
StorPortLogError(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG ErrorCode,
    _In_ ULONG UniqueId
    );
STORPORT_API
VOID
StorPortCompleteRequest(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ UCHAR SrbStatus
    );
STORPORT_API
VOID
StorPortStallExecution(
    _In_ ULONG Delay
    );
STORPORT_API
BOOLEAN
StorPortSynchronizeAccess(
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_SYNCHRONIZED_ACCESS SynchronizedAccessRoutine,
    _In_opt_ PVOID Context
    );
STORPORT_API
UCHAR
StorPortReadPortUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Port
    );
STORPORT_API
USHORT
StorPortReadPortUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Port
    );
STORPORT_API
ULONG
StorPortReadPortUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Port
    );
STORPORT_API
VOID
StorPortReadPortBufferUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortReadPortBufferUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortReadPortBufferUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
STORPORT_API
UCHAR
StorPortReadRegisterUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Register
    );
STORPORT_API
USHORT
StorPortReadRegisterUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Register
    );
STORPORT_API
ULONG
StorPortReadRegisterUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Register
    );
STORPORT_API
VOID
StorPortReadRegisterBufferUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortReadRegisterBufferUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortReadRegisterBufferUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortWritePortUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Port,
    _In_ UCHAR Value
    );
STORPORT_API
VOID
StorPortWritePortUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Port,
    _In_ USHORT Value
    );
STORPORT_API
VOID
StorPortWritePortUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Port,
    _In_ ULONG Value
    );
STORPORT_API
VOID
StorPortWritePortBufferUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortWritePortBufferUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortWritePortBufferUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortWriteRegisterUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Register,
    _In_ UCHAR Value
    );
STORPORT_API
VOID
StorPortWriteRegisterUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Register,
    _In_ USHORT Value
    );
STORPORT_API
VOID
StorPortWriteRegisterUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Register,
    _In_ ULONG Value
    );
STORPORT_API
VOID
StorPortWriteRegisterBufferUchar(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortWriteRegisterBufferUshort(
    _In_ PVOID HwDeviceExtension,
    _In_ PUSHORT Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortWriteRegisterBufferUlong(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );
STORPORT_API
VOID
StorPortMoveMemory(
    _Out_writes_bytes_(Length) PVOID WriteBuffer,
    _In_reads_bytes_(Length) PVOID ReadBuffer,
    _In_ ULONG Length
    );
#pragma intrinsic (memcpy)
STORPORT_API
STOR_PHYSICAL_ADDRESS
StorPortConvertUlongToPhysicalAddress(
    _In_ ULONG_PTR UlongAddress
    );
STORPORT_API
ULONG
StorPortConvertPhysicalAddressToUlong(
    _In_ STOR_PHYSICAL_ADDRESS Address
    );
STORPORT_API
VOID
StorPortQuerySystemTime(
    _Out_ PLARGE_INTEGER CurrentTime
    );
__drv_allocatesMem(Mem)
_Ret_maybenull_
_Post_writable_byte_size_(*Length)
STORPORT_API
PUCHAR
StorPortAllocateRegistryBuffer(
    _In_ PVOID HwDeviceExtension,
    _In_ PULONG Length
    );
STORPORT_API
VOID
StorPortFreeRegistryBuffer(
    _In_ PVOID HwDeviceExtension,
    _In_ __drv_freesMem(Mem) PUCHAR Buffer
    );
BOOLEAN
StorPortRegistryRead(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR ValueName,
    _In_ ULONG Global,
    _In_ ULONG Type,
    _Out_ PUCHAR Buffer,
    _Inout_ PULONG BufferLength
    );
STORPORT_API
BOOLEAN
StorPortRegistryWrite(
    _In_ PVOID HwDeviceExtension,
    _In_ PUCHAR ValueName,
    _In_ ULONG Global,
    _In_ ULONG Type,
    _In_reads_bytes_(BufferLength) PUCHAR Buffer,
    _In_ ULONG BufferLength
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
STORPORT_API
BOOLEAN
StorPortValidateRange(
    _In_ PVOID HwDeviceExtension,
    _In_ INTERFACE_TYPE BusType,
    _In_ ULONG SystemIoBusNumber,
    _In_ STOR_PHYSICAL_ADDRESS IoAddress,
    _In_ ULONG NumberOfBytes,
    _In_ BOOLEAN InIoSpace
    );
STORPORT_API
VOID
StorPortDebugPrint(
    _In_ ULONG DebugPrintLevel,
    _In_ PSTR DebugMessage,
    ...
    );
BOOLEAN
FORCEINLINE
StorPortEnablePassiveInitialization(
    _In_ PVOID DeviceExtension,
    _In_ PHW_PASSIVE_INITIALIZE_ROUTINE HwPassiveInitializeRoutine
    )
{
    LONG Succ;
    Succ = FALSE;
    StorPortNotification (EnablePassiveInitialization,
                          DeviceExtension,
                          HwPassiveInitializeRoutine,
                          &Succ);
    return (BOOLEAN)Succ;
}
VOID
FORCEINLINE
StorPortInitializeDpc(
    _In_ PVOID DeviceExtension,
    _Out_ PSTOR_DPC Dpc,
    _In_ PHW_DPC_ROUTINE HwDpcRoutine
    )
{
    StorPortNotification (InitializeDpc,
                          DeviceExtension,
                          Dpc,
                          HwDpcRoutine);
}
VOID
FORCEINLINE
StorPortInitializeDpcWithContext(
    _In_ PVOID DeviceExtension,
    _Out_ PSTOR_DPC Dpc,
    _In_ PHW_DPC_ROUTINE HwDpcRoutine,
    _In_ PVOID Context,
    _In_ ULONG Importance
    )
{
    StorPortNotification (InitializeDpcWithContext,
                          DeviceExtension,
                          Dpc,
                          HwDpcRoutine,
                          Context,
                          Importance);
}
VOID
FORCEINLINE
StorPortInitializeThreadedDpc(
    _In_ PVOID DeviceExtension,
    _Out_ PSTOR_DPC Dpc,
    _In_ PHW_DPC_ROUTINE HwDpcRoutine,
    _In_ PVOID Context,
    _In_ BOOLEAN Importance
    )
{
    StorPortNotification (InitializeThreadedDpc,
                          DeviceExtension,
                          Dpc,
                          HwDpcRoutine,
                          Context,
                          Importance);
}
BOOLEAN
FORCEINLINE
StorPortIssueDpc(
    _In_ PVOID DeviceExtension,
    _In_ PSTOR_DPC Dpc,
    _In_opt_ PVOID SystemArgument1,
    _In_opt_ PVOID SystemArgument2
    )
{
    LONG Succ;
    Succ = FALSE;
    StorPortNotification (IssueDpc,
                          DeviceExtension,
                          Dpc,
                          SystemArgument1,
                          SystemArgument2,
                          &Succ);
    return (BOOLEAN)Succ;
}
_Acquires_nonreentrant_lock_(*LockHandle)
VOID
FORCEINLINE
#pragma warning(suppress: 26166)
StorPortAcquireSpinLock(
    _In_ PVOID DeviceExtension,
    _In_ STOR_SPINLOCK SpinLock,
    _In_opt_ PVOID LockContext,
    _Inout_ PSTOR_LOCK_HANDLE LockHandle
    )
#pragma warning (suppress: 28104 26166)
{
    StorPortNotification (AcquireSpinLock,
                          DeviceExtension,
                          SpinLock,
                          LockContext,
                          LockHandle);
}
_Releases_nonreentrant_lock_(*LockHandle)
VOID
FORCEINLINE
#pragma warning(suppress: 26165)
StorPortReleaseSpinLock(
    _In_ PVOID DeviceExtension,
    _Inout_ PSTOR_LOCK_HANDLE LockHandle
    )
#pragma warning (suppress: 26165)
{
    StorPortNotification (ReleaseSpinLock,
                          DeviceExtension,
                          LockHandle);
}
STORPORT_API
ULONG
StorPortExtendedFunction(
    _In_ STORPORT_FUNCTION_CODE FunctionCode,
    _In_ PVOID HwDeviceExtension,
    ...
    );
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
#pragma warning(suppress: 6001 6101 6388 28194 28195)
StorPortAllocatePool(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG NumberOfBytes,
    _In_ ULONG Tag,
    _Out_ _At_(*BufferPointer,
        _When_(return!=STOR_STATUS_SUCCESS, _Post_null_)
        _When_(return==STOR_STATUS_SUCCESS, __drv_aliasesMem __drv_allocatesMem(Mem) _Post_notnull_
        _Post_writable_byte_size_(NumberOfBytes)))
    PVOID *BufferPointer
    )
{
    return StorPortExtendedFunction(ExtFunctionAllocatePool,
                                    HwDeviceExtension,
                                    NumberOfBytes,
                                    Tag,
                                    BufferPointer);
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
#pragma warning (suppress: 6014)
StorPortFreePool(
    _In_ PVOID HwDeviceExtension,
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID BufferPointer
    )
{
    return StorPortExtendedFunction(ExtFunctionFreePool,
                                    HwDeviceExtension,
                                    BufferPointer);
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
#pragma warning(suppress: 6001 6101 6388 28194 28195)
StorPortAllocateMdl(
    _In_ PVOID HwDeviceExtension,
    _In_reads_bytes_(NumberOfBytes) PVOID BufferPointer,
    _In_ ULONG NumberOfBytes,
    _Out_ _At_(*Mdl,
        _When_(return!=STOR_STATUS_SUCCESS, _Post_null_)
        _When_(return==STOR_STATUS_SUCCESS, __drv_aliasesMem __drv_allocatesMem(Mem) _Post_notnull_))
    PVOID *Mdl
    )
{
    return StorPortExtendedFunction(ExtFunctionAllocateMdl,
                                    HwDeviceExtension,
                                    BufferPointer,
                                    NumberOfBytes,
                                    Mdl);
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
#pragma warning (suppress: 6014)
StorPortFreeMdl(
    _In_ PVOID HwDeviceExtension,
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Mdl
    )
{
    return StorPortExtendedFunction(ExtFunctionFreeMdl,
                                    HwDeviceExtension,
                                    Mdl);
}
ULONG
FORCEINLINE
StorPortBuildMdlForNonPagedPool(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PVOID Mdl
    )
{
    return StorPortExtendedFunction(ExtFunctionBuildMdlForNonPagedPool,
                                    HwDeviceExtension,
                                    Mdl);
}
ULONG
FORCEINLINE
StorPortGetSystemAddress(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Outptr_ PVOID *SystemAddress
    )
{
    return StorPortExtendedFunction(ExtFunctionGetSystemAddress,
                                    HwDeviceExtension,
                                    Srb,
                                    SystemAddress);
}
ULONG
FORCEINLINE
StorPortGetOriginalMdl(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Outptr_ PVOID *Mdl
    )
{
    return StorPortExtendedFunction(ExtFunctionGetOriginalMdl,
                                    HwDeviceExtension,
                                    Srb,
                                    Mdl);
}
ULONG
FORCEINLINE
StorPortCompleteServiceIrp(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Irp
    )
{
    return StorPortExtendedFunction(ExtFunctionCompleteServiceIrp,
                                    HwDeviceExtension,
                                    Irp);
}
ULONG
FORCEINLINE
#pragma warning(suppress: 6001 6101)
StorPortGetDeviceObjects(
    _In_ PVOID HwDeviceExtension,
    _Outptr_ PVOID *AdapterDeviceObject,
    _Outptr_ PVOID *PhysicalDeviceObject,
    _Outptr_ PVOID *LowerDeviceObject
    )
{
    return StorPortExtendedFunction(ExtFunctionGetDeviceObjects,
                                    HwDeviceExtension,
                                    AdapterDeviceObject,
                                    PhysicalDeviceObject,
                                    LowerDeviceObject);
}
ULONG
FORCEINLINE
StorPortBuildScatterGatherList(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Mdl,
    _In_reads_bytes_(Length) PVOID CurrentVa,
    _In_ ULONG Length,
    _In_ PPOST_SCATTER_GATHER_EXECUTE ExecutionRoutine,
    _In_ PVOID Context,
    _In_ BOOLEAN WriteToDevice,
    _Inout_updates_bytes_(ScatterGatherBufferLength) PVOID ScatterGatherBuffer,
    _In_ ULONG ScatterGatherBufferLength
    )
{
    return StorPortExtendedFunction(ExtFunctionBuildScatterGatherList,
                                    HwDeviceExtension,
                                    Mdl,
                                    CurrentVa,
                                    Length,
                                    ExecutionRoutine,
                                    Context,
                                    WriteToDevice,
                                    ScatterGatherBuffer,
                                    ScatterGatherBufferLength);
}
ULONG
FORCEINLINE
StorPortPutScatterGatherList(
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_SCATTER_GATHER_LIST ScatterGatherList,
    _In_ BOOLEAN WriteToDevice
    )
{
    return StorPortExtendedFunction(ExtFunctionPutScatterGatherList,
                                    HwDeviceExtension,
                                    ScatterGatherList,
                                    WriteToDevice);
}
ULONG
FORCEINLINE
StorPortAcquireMSISpinLock(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageId,
    _In_ PULONG OldIrql
    )
{
    return StorPortExtendedFunction(ExtFunctionAcquireMSISpinLock,
                                    HwDeviceExtension,
                                    MessageId,
                                    OldIrql);
}
ULONG
FORCEINLINE
StorPortReleaseMSISpinLock(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageId,
    _In_ ULONG OldIrql
    )
{
    return StorPortExtendedFunction(ExtFunctionReleaseMSISpinLock,
                                    HwDeviceExtension,
                                    MessageId,
                                    OldIrql);
}
ULONG
FORCEINLINE
StorPortGetMSIInfo(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MessageId,
    _Out_ PMESSAGE_INTERRUPT_INFORMATION InterruptInfo
    )
{
    return StorPortExtendedFunction(ExtFunctionGetMessageInterruptInformation,
                                    HwDeviceExtension,
                                    MessageId,
                                    InterruptInfo);
}
ULONG
FORCEINLINE
StorPortInitializePerfOpts(
    _In_ PVOID HwDeviceExtension,
    _In_ BOOLEAN Query,
    _Inout_ PPERF_CONFIGURATION_DATA PerfConfigData
    )
{
    return StorPortExtendedFunction(ExtFunctionInitializePerformanceOptimizations,
                                    HwDeviceExtension,
                                    Query,
                                    PerfConfigData);
}
ULONG
FORCEINLINE
StorPortInitializeRpmb(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS StorAddress,
    _Inout_ PSTOR_RPMB_CAPABILITIES_DATA RpmbCapabilitiesData
    )
{
    return StorPortExtendedFunction(ExtFunctionInitializeRpmb,
                                    HwDeviceExtension,
                                    StorAddress,
                                    RpmbCapabilitiesData);
}
ULONG
FORCEINLINE
StorPortGetStartIoPerfParams(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Inout_ PSTARTIO_PERFORMANCE_PARAMETERS StartIoPerfParams
    )
{
    return StorPortExtendedFunction(ExtFunctionGetStartIoPerformanceParameters,
                                    HwDeviceExtension,
                                    Srb,
                                    StartIoPerfParams);
}
ULONG
FORCEINLINE
StorPortLogSystemEvent(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_LOG_EVENT_DETAILS LogDetails,
    _Inout_ PULONG MaximumSize
    )
{
    return StorPortExtendedFunction(ExtFunctionLogSystemEvent,
                                    HwDeviceExtension,
                                    LogDetails,
                                    MaximumSize);
}
ULONG
FORCEINLINE
StorPortGetCurrentProcessorNumber (
    _In_ PVOID HwDeviceExtension,
    _Out_ PPROCESSOR_NUMBER ProcNumber
    )
{
    return StorPortExtendedFunction(ExtFunctionGetCurrentProcessorNumber,
                                    HwDeviceExtension,
                                    ProcNumber);
}
ULONG
FORCEINLINE
StorPortGetGroupAffinity (
    _In_ PVOID HwDeviceExtension,
    _In_ USHORT GroupNumber,
    _Out_ PKAFFINITY GroupAffinityMask
    )
{
    return StorPortExtendedFunction(ExtFunctionGetGroupAffinity,
                                    HwDeviceExtension,
                                    GroupNumber,
                                    GroupAffinityMask);
}
ULONG
FORCEINLINE
StorPortGetActiveGroupCount (
    _In_ PVOID HwDeviceExtension,
    _Out_ PUSHORT NumberGroups
    )
{
    return StorPortExtendedFunction(ExtFunctionGetActiveGroupCount,
                                    HwDeviceExtension,
                                    NumberGroups);
}
ULONG
FORCEINLINE
StorPortGetNodeAffinity (
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG NodeNumber,
    _Out_ PGROUP_AFFINITY NodeAffinityMask
    )
{
     return StorPortExtendedFunction(ExtFunctionGetNodeAffinity,
                                    HwDeviceExtension,
                                    NodeNumber,
                                    NodeAffinityMask);
}
ULONG
FORCEINLINE
StorPortGetActiveNodeCount (
    _In_ PVOID HwDeviceExtension,
    _Out_ PULONG NumberNodes
    )
{
    return StorPortExtendedFunction(ExtFunctionGetActiveNodeCount,
                                    HwDeviceExtension,
                                    NumberNodes);
}
ULONG
FORCEINLINE
StorPortGetHighestNodeNumber (
    _In_ PVOID HwDeviceExtension,
    _Out_ PULONG HighestNode
    )
{
    return StorPortExtendedFunction(ExtFunctionGetHighestNodeNumber,
                                    HwDeviceExtension,
                                    HighestNode);
}
ULONG
FORCEINLINE
StorPortGetProcessorIndexFromNumber (
    _In_ PVOID HwDeviceExtension,
    _In_ PPROCESSOR_NUMBER ProcessorNumber,
    _Out_ PULONG ProcessorIndex
    )
{
    return StorPortExtendedFunction(ExtFunctionGetProcessorIndexFromNumber,
                                    HwDeviceExtension,
                                    ProcessorNumber,
                                    ProcessorIndex);
}
ULONG
FORCEINLINE
StorPortGetCurrentProcessorIndex (
    _In_ PVOID HwDeviceExtension,
    _Out_ PULONG ProcessorIndex
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionGetCurrentProcessorIndex,
                                       HwDeviceExtension,
                                       ProcessorIndex);
    return Status;
}
ULONG
FORCEINLINE
StorPortGetProcessorCount (
    _In_ PVOID HwDeviceExtension,
    _Out_ PULONG ProcessorCount
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionGetProcessorCount,
                                      HwDeviceExtension,
                                      ProcessorCount);
    return Status;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortGetLogicalProcessorRelationship (
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PPROCESSOR_NUMBER ProcessorNumber,
    _In_ LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
    _Out_writes_bytes_(*Length) PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
    _Inout_ PULONG Length
    )
{
#pragma warning(push)
#pragma warning(disable: 26045)
    return StorPortExtendedFunction(ExtFunctionGetLogicalProcessorRelationship,
                                    HwDeviceExtension,
                                    ProcessorNumber,
                                    RelationshipType,
                                    Information,
                                    Length);
#pragma warning(pop)
}
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortAllocateContiguousMemorySpecifyCacheNode (
    _In_ PVOID HwDeviceExtension,
    _In_ SIZE_T NumberOfBytes,
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress,
    _In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ NODE_REQUIREMENT PreferredNode,
    _Out_ _At_(*BufferPointer,
        _When_(return!=STOR_STATUS_SUCCESS, _Post_null_)
        _When_(return==STOR_STATUS_SUCCESS, _Post_notnull_ _Post_writable_byte_size_(NumberOfBytes)))
         PVOID* BufferPointer
    )
{
    return StorPortExtendedFunction(ExtFunctionAllocateContiguousMemorySpecifyCacheNode,
                                    HwDeviceExtension,
                                    NumberOfBytes,
                                    LowestAcceptableAddress,
                                    HighestAcceptableAddress,
                                    BoundaryAddressMultiple,
                                    CacheType,
                                    PreferredNode,
                                    BufferPointer);
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortFreeContiguousMemorySpecifyCache (
    _In_ PVOID HwDeviceExtension,
    _In_reads_bytes_(NumberOfBytes) _Post_invalid_ PVOID BaseAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType
    )
{
    return StorPortExtendedFunction(ExtFunctionFreeContiguousMemorySpecifyCache,
                                    HwDeviceExtension,
                                    BaseAddress,
                                    NumberOfBytes,
                                    CacheType);
}
ULONG
FORCEINLINE
StorPortSetPowerSettingNotificationGuids (
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG GuidCount,
    _In_reads_(GuidCount) LPGUID Guid
    )
{
    return StorPortExtendedFunction(ExtFunctionSetPowerSettingNotificationGuids,
                                    HwDeviceExtension,
                                    GuidCount,
                                    Guid);
}
ULONG
FORCEINLINE
StorPortInvokeAcpiMethod (
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG MethodName,
    _In_opt_ PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_opt_ PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_opt_ PULONG BytesReturned
    )
{
    return StorPortExtendedFunction(ExtFunctionInvokeAcpiMethod,
                                    HwDeviceExtension,
                                    Address,
                                    MethodName,
                                    InputBuffer,
                                    InputBufferLength,
                                    OutputBuffer,
                                    OutputBufferLength,
                                    BytesReturned);
}
ULONG
FORCEINLINE
StorPortGetActivityIdSrb(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Out_ LPGUID ActivityId
    )
{
    return StorPortExtendedFunction(ExtFunctionGetActivityId,
                                    HwDeviceExtension,
                                    Srb,
                                    ActivityId);
}
ULONG
FORCEINLINE
StorPortGetDataInBufferMdl(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Outptr_ PVOID* Mdl
    )
{
    return StorPortExtendedFunction(ExtFunctionGetDataInBufferMdl,
                                    HwDeviceExtension,
                                    Srb,
                                    Mdl);
}
ULONG
FORCEINLINE
StorPortGetDataInBufferSystemAddress(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Outptr_ PVOID* SystemAddress
    )
{
    return StorPortExtendedFunction(ExtFunctionGetDataInBufferSystemAddress,
                                    HwDeviceExtension,
                                    Srb,
                                    SystemAddress);
}
ULONG
FORCEINLINE
StorPortGetDataInBufferScatterGatherList(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Outptr_ PSTOR_SCATTER_GATHER_LIST* SgList
    )
{
    return StorPortExtendedFunction(ExtFunctionGetDataInBufferScatterGatherList,
                                    HwDeviceExtension,
                                    Srb,
                                    SgList);
}
ULONG
FORCEINLINE
StorPortFlushDataBufferMdl(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    )
{
    UNREFERENCED_PARAMETER(HwDeviceExtension);
    UNREFERENCED_PARAMETER(Srb);
    return STOR_STATUS_SUCCESS;
}
ULONG
FORCEINLINE
StorPortRegistryReadAdapterKey(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PUCHAR SubKeyName,
    _In_ PUCHAR ValueName,
    _In_ ULONG ValueType,
    _Inout_ PVOID *ValueData,
    _Inout_ PULONG ValueDataLength
    )
{
    return StorPortExtendedFunction(ExtFunctionRegistryReadAdapterKey,
                                    HwDeviceExtension,
                                    SubKeyName,
                                    ValueName,
                                    ValueType,
                                    ValueData,
                                    ValueDataLength);
}
ULONG
FORCEINLINE
StorPortRegistryWriteAdapterKey(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PUCHAR SubKeyName,
    _In_ PUCHAR ValueName,
    _In_ ULONG ValueType,
    _In_ PVOID ValueData,
    _In_ ULONG ValueDataLength
    )
{
    return StorPortExtendedFunction(ExtFunctionRegistryWriteAdapterKey,
                                    HwDeviceExtension,
                                    SubKeyName,
                                    ValueName,
                                    ValueType,
                                    ValueData,
                                    ValueDataLength);
}
ULONG
FORCEINLINE
StorPortMarkDumpMemory(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Address,
    _In_ ULONG_PTR Length,
    _In_ ULONG Flags
    )
{
    return StorPortExtendedFunction(ExtFunctionMarkDumpMemory,
                                    HwDeviceExtension,
                                    Address,
                                    Length,
                                    Flags);
}
ULONG
FORCEINLINE
StorPortSetUnitAttributes(
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_ADDRESS Address,
    _In_ STOR_UNIT_ATTRIBUTES Attributes
    )
{
    return StorPortExtendedFunction(ExtFunctionSetUnitAttributes,
                                    HwDeviceExtension,
                                    Address,
                                    Attributes);
}
ULONG
FORCEINLINE
StorPortQueryPerformanceCounter(
    _In_ PVOID HwDeviceExtension,
    _Out_opt_ PLARGE_INTEGER PerformanceFrequency,
    _Out_ PLARGE_INTEGER PerformanceCounter
    )
{
    return StorPortExtendedFunction(ExtFunctionQueryPerformanceCounter,
                                    HwDeviceExtension,
                                    PerformanceFrequency,
                                    PerformanceCounter);
}
ULONG
FORCEINLINE
StorPortGetSystemPortNumber(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_ADDRESS Address
    )
{
#pragma warning(push)
#pragma warning(disable: 26045)
    return StorPortExtendedFunction(ExtFunctionGetSystemPortNumber,
                                    HwDeviceExtension,
                                    Address);
#pragma warning(pop)
}
ULONG
FORCEINLINE
StorPortSetAdapterBusType(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG BusType
    )
{
    return StorPortExtendedFunction(ExtFunctionSetAdapterBusType,
                                    HwDeviceExtension,
                                    BusType);
}
ULONG
FORCEINLINE
StorPortGetRequestInfo (
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Out_ PSTOR_REQUEST_INFO RequestInfo
    )
{
    return StorPortExtendedFunction(ExtFunctionGetRequestInfo,
                                    HwDeviceExtension,
                                    Srb,
                                    RequestInfo);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortInitializeWorker(
    _In_ PVOID HwDeviceExtension,
    _Out_ PVOID *Worker
    )
{
    return StorPortExtendedFunction(ExtFunctionInitializeWorker,
                                    HwDeviceExtension,
                                    Worker);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortQueueWorkItem(
    _In_ PVOID HwDeviceExtension,
    _In_ PHW_WORKITEM WorkItemCallback,
    _In_ PVOID Worker,
    _In_opt_ PVOID Context
    )
{
    return StorPortExtendedFunction(ExtFunctionQueueWorkItem,
                                    HwDeviceExtension,
                                    WorkItemCallback,
                                    Worker,
                                    Context);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortFreeWorker(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID Worker
    )
{
    return StorPortExtendedFunction(ExtFunctionFreeWorker,
                                    HwDeviceExtension,
                                    Worker);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortInitializeTimer(
    _In_ PVOID HwDeviceExtension,
    _Out_ PVOID *TimerHandle
    )
{
    return StorPortExtendedFunction(ExtFunctionInitializeTimer,
                                    HwDeviceExtension,
                                    TimerHandle);
}
ULONG
FORCEINLINE
StorPortRequestTimer(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID TimerHandle,
    _In_ PHW_TIMER_EX TimerCallback,
    _In_opt_ PVOID CallbackContext,
    _In_ ULONGLONG TimerValue,
    _In_ ULONGLONG TolerableDelay
    )
{
    return StorPortExtendedFunction(ExtFunctionRequestTimer,
                                    HwDeviceExtension,
                                    TimerHandle,
                                    TimerCallback,
                                    CallbackContext,
                                    TimerValue,
                                    TolerableDelay);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortFreeTimer(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID TimerHandle
    )
{
    return StorPortExtendedFunction(ExtFunctionFreeTimer,
                                    HwDeviceExtension,
                                    TimerHandle);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortInitializeHighResolutionTimer(
    _In_ PVOID HwDeviceExtension,
    _In_ PHW_TIMER_EX Callback,
    _In_ PVOID Context,
    _Out_ PVOID *TimerHandle
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionInitializeHighResolutionTimer,
                                       HwDeviceExtension,
                                       Callback,
                                       Context,
                                       TimerHandle);
    return Status;
}
ULONG
FORCEINLINE
StorPortRequestHighResolutionTimer(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID TimerHandle,
    _In_ LONGLONG DueTime,
    _In_ LONGLONG Period,
    _In_ PSTOR_EXT_SET_PARAMETERS Parameters,
    _Out_ BOOLEAN *ReturnValue
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionRequestHighResolutionTimer,
                                    HwDeviceExtension,
                                    TimerHandle,
                                    DueTime,
                                    Period,
                                    Parameters,
                                    ReturnValue);
    return Status;
}
ULONG
FORCEINLINE
StorPortCancelHighResolutionTimer(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID TimerHandle,
    _In_ PVOID Parameters,
    _Out_ BOOLEAN *ReturnValue
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionCancelHighResolutionTimer,
                                      HwDeviceExtension,
                                      TimerHandle,
                                      Parameters,
                                      ReturnValue);
    return Status;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortFreeHighResolutionTimer(
    _In_ PVOID HwDeviceExtension,
    _In_ PVOID TimerHandle,
    _In_ BOOLEAN Cancel,
    _In_ BOOLEAN Wait,
    _In_ PSTOR_EXT_DELETE_PARAMETERS Parameters,
    _Out_ BOOLEAN *ReturnValue
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionFreeHighResolutionTimer,
                                    HwDeviceExtension,
                                    TimerHandle,
                                    Cancel,
                                    Wait,
                                    Parameters,
                                    ReturnValue);
    return Status;
}
_Acquires_nonreentrant_lock_(*LockHandle)
ULONG
FORCEINLINE
StorPortAcquireSpinLockEx(
    _In_ PVOID HwDeviceExtension,
    _In_ STOR_SPINLOCK SpinLock,
    _In_opt_ PVOID LockContext,
    _Inout_ PSTOR_LOCK_HANDLE LockHandle
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction (ExtFunctionAcquireSpinLock,
                                       HwDeviceExtension,
                                       SpinLock,
                                       LockContext,
                                       LockHandle);
    return Status;
}
ULONG
FORCEINLINE
StorPortCancelDpc(
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_DPC Dpc,
    _Out_ BOOLEAN *ReturnValue
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    Status = StorPortExtendedFunction(ExtFunctionCancelDpc,
                                      HwDeviceExtension,
                                      Dpc,
                                      ReturnValue);
    return Status;
}
ULONG
FORCEINLINE
StorPortStateChangeDetected(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG ChangedEntity,
    _In_ PSTOR_ADDRESS Address,
    _In_ ULONG Attributes,
    _In_ PHW_STATE_CHANGE HwStateChange,
    _In_opt_ PVOID HwStateChangeContext
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    StorPortNotification (StateChangeDetectedCall,
                          HwDeviceExtension,
                          ChangedEntity,
                          Address,
                          Attributes,
                          HwStateChange,
                          HwStateChangeContext,
                          &Status);
    return Status;
}
ULONG
FORCEINLINE
StorPortAsyncNotificationDetected(
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_ADDRESS Address,
    _In_ ULONGLONG Flags
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    StorPortNotification (AsyncNotificationDetected,
                          HwDeviceExtension,
                          Address,
                          Flags,
                          &Status);
    return Status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInitializeSListHead(
    _In_ PVOID HwDeviceExtension,
    _Out_ PSTOR_SLIST_HEADER SListHead
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    if (SListHead) {
        Status = StorPortExtendedFunction(ExtFunctionInitializeSListHead,
                                          HwDeviceExtension,
                                          SListHead);
    } else {
        Status = STOR_STATUS_INVALID_PARAMETER;
    }
    return Status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInterlockedFlushSList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_SLIST_HEADER SListHead,
    _Out_ PSTOR_SLIST_ENTRY *Result
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((Result) && (SListHead)) {
        Status = StorPortExtendedFunction(ExtFunctionInterlockedFlushSList,
                                          HwDeviceExtension,
                                          SListHead,
                                          Result);
    } else {
        Status = STOR_STATUS_INVALID_PARAMETER;
    }
    return Status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInterlockedPopEntrySList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_SLIST_HEADER SListHead,
    _Out_ PSTOR_SLIST_ENTRY *Result
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((Result) && (SListHead)) {
        Status = StorPortExtendedFunction(ExtFunctionInterlockedPopEntrySList,
                                          HwDeviceExtension,
                                          SListHead,
                                          Result);
    } else {
        Status = STOR_STATUS_INVALID_PARAMETER;
    }
    return Status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInterlockedPushEntrySList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_SLIST_HEADER SListHead,
    _Inout_ __drv_aliasesMem PSTOR_SLIST_ENTRY SListEntry,
    _Out_ PSTOR_SLIST_ENTRY *Result
    )
#pragma warning (suppress: 28194)
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((Result) && (SListHead) && (SListEntry)) {
        Status = StorPortExtendedFunction(ExtFunctionInterlockedPushEntrySList,
                                          HwDeviceExtension,
                                          SListHead,
                                          SListEntry,
                                          Result);
    } else {
        Status = STOR_STATUS_INVALID_PARAMETER;
    }
    return Status;
}
_Success_(return == STOR_STATUS_SUCCESS)
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortQueryDepthSList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_SLIST_HEADER SListHead,
    _Out_ PSHORT Result
    )
{
    ULONG Status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((Result) && (SListHead)) {
        Status = StorPortExtendedFunction(ExtFunctionQueryDepthSList,
                                          HwDeviceExtension,
                                          SListHead,
                                          Result);
    } else {
        Status = STOR_STATUS_INVALID_PARAMETER;
    }
    return Status;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortAllocateHostMemoryBuffer(
    _In_ PVOID HwDeviceExtension,
    _In_ SIZE_T MinimumBytes,
    _In_ SIZE_T PreferredBytes,
    _In_ ULONGLONG UtilizationBytes,
    _In_ ULONG AlignmentBytes,
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress,
    _In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
    _Out_writes_to_(*PhysicalAddressRangeCount, *PhysicalAddressRangeCount) PACCESS_RANGE PhysicalAddressRanges,
    _Inout_ PULONG PhysicalAddressRangeCount
    )
{
    return StorPortExtendedFunction(ExtFunctionAllocateHmb,
                                    HwDeviceExtension,
                                    MinimumBytes,
                                    PreferredBytes,
                                    UtilizationBytes,
                                    AlignmentBytes,
                                    LowestAcceptableAddress,
                                    HighestAcceptableAddress,
                                    BoundaryAddressMultiple,
                                    PhysicalAddressRanges,
                                    PhysicalAddressRangeCount);
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortFreeHostMemoryBuffer(
    _In_ PVOID HwDeviceExtension,
    _In_reads_(PhysicalAddressRangeCount) PACCESS_RANGE PhysicalAddressRanges,
    _In_ ULONG PhysicalAddressRangeCount
    )
{
    return StorPortExtendedFunction(ExtFunctionFreeHmb,
                                    HwDeviceExtension,
                                    PhysicalAddressRanges,
                                    PhysicalAddressRangeCount);
}
typedef struct _STOR_POFX_COMPONENT_IDLE_STATE {
    ULONG Version;
    ULONG Size;
    ULONGLONG TransitionLatency;
    ULONGLONG ResidencyRequirement;
    ULONG NominalPower;
} STOR_POFX_COMPONENT_IDLE_STATE, *PSTOR_POFX_COMPONENT_IDLE_STATE;
typedef struct _STOR_POFX_COMPONENT {
    ULONG Version;
    ULONG Size;
    ULONG FStateCount;
    ULONG DeepestWakeableFState;
    GUID Id;
    _Field_size_full_(FStateCount) STOR_POFX_COMPONENT_IDLE_STATE FStates[ANYSIZE_ARRAY];
} STOR_POFX_COMPONENT, *PSTOR_POFX_COMPONENT;
typedef struct _STOR_POFX_COMPONENT_V2 {
    ULONG Version;
    ULONG Size;
    ULONG FStateCount;
    ULONG DeepestWakeableFState;
    GUID Id;
    ULONG DeepestAdapterPowerRequiredFState;
    ULONG DeepestCrashDumpReadyFState;
    _Field_size_full_(FStateCount) STOR_POFX_COMPONENT_IDLE_STATE FStates[ANYSIZE_ARRAY];
} STOR_POFX_COMPONENT_V2, *PSTOR_POFX_COMPONENT_V2;
typedef enum _STOR_POFX_PERF_STATE_UNIT {
    StorPoFxPerfStateUnitOther,
    StorPoFxPerfStateUnitFrequency,
    StorPoFxPerfStateUnitBandwidth,
    StorPoFxPerfStateUnitMilliwatts,
    StorPoFxPerfStateUnitMaximum
} STOR_POFX_PERF_STATE_UNIT, *PSTOR_POFX_PERF_STATE_UNIT;
typedef enum _STOR_POFX_PERF_STATE_TYPE {
    StorPoFxPerfStateTypeDiscrete,
    StorPoFxPerfStateTypeRange,
    StorPoFxPerfStateTypeMaximum
} STOR_POFX_PERF_STATE_TYPE, *PSTOR_POFX_PERF_STATE_TYPE;
typedef struct _STOR_POFX_PERF_STATE {
    ULONG Version;
    ULONG Size;
    ULONGLONG Value;
    PVOID Context;
} STOR_POFX_PERF_STATE, *PSTOR_POFX_PERF_STATE;
typedef struct _STOR_POFX_COMPONENT_PERF_SET {
    ULONG Version;
    ULONG Size;
    ULONGLONG Flags;
    STOR_POFX_PERF_STATE_UNIT PStateUnit;
    STOR_POFX_PERF_STATE_TYPE PStateType;
    union {
        struct {
            ULONG Count;
            ULONG Offset;
        } Discrete;
        struct {
            ULONGLONG Minimum;
            ULONGLONG Maximum;
        } Range;
    } PStates;
} STOR_POFX_COMPONENT_PERF_SET, *PSTOR_POFX_COMPONENT_PERF_SET;
static const GUID STORPORT_POFX_ADAPTER_GUID = { 0xdcaf9c10, 0x895f, 0x481f, { 0xa4, 0x92, 0xd4, 0xce, 0xd2, 0xf5, 0x56, 0x33 } };
static const GUID STORPORT_POFX_LUN_GUID = { 0x585d326b, 0xb3a, 0x4088, { 0x89, 0x39, 0x88, 0xb0, 0xf, 0x69, 0x58, 0xbe } };
typedef struct _STOR_POFX_DEVICE {
    ULONG Version;
    ULONG Size;
    ULONG ComponentCount;
    ULONG Flags;
    _Field_size_full_(ComponentCount) STOR_POFX_COMPONENT Components[ANYSIZE_ARRAY];
} STOR_POFX_DEVICE, *PSTOR_POFX_DEVICE;
typedef struct _STOR_POFX_DEVICE_V2 {
    ULONG Version;
    ULONG Size;
    ULONG ComponentCount;
    ULONG Flags;
    union {
        ULONG UnitMinIdleTimeoutInMS;
        ULONG AdapterIdleTimeoutInMS;
    };
    _Field_size_full_(ComponentCount) STOR_POFX_COMPONENT Components[ANYSIZE_ARRAY];
} STOR_POFX_DEVICE_V2, *PSTOR_POFX_DEVICE_V2;
typedef struct _STOR_POFX_DEVICE_V3 {
    ULONG Version;
    ULONG Size;
    ULONG ComponentCount;
    ULONG Flags;
    union {
        ULONG UnitMinIdleTimeoutInMS;
        ULONG AdapterIdleTimeoutInMS;
    };
    ULONG MinimumPowerCyclePeriodInMS;
    _Field_size_full_(ComponentCount) STOR_POFX_COMPONENT Components[ANYSIZE_ARRAY];
} STOR_POFX_DEVICE_V3, *PSTOR_POFX_DEVICE_V3;
_IRQL_requires_max_(PASSIVE_LEVEL)
ULONG
FORCEINLINE
StorPortInitializePoFxPower(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ PSTOR_POFX_DEVICE Device,
    _Inout_ PBOOLEAN D3ColdEnabled
)
{
    return StorPortExtendedFunction(ExtFunctionInitializePoFxPower,
                                    HwDeviceExtension,
                                    Address,
                                    Device,
                                    D3ColdEnabled);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxActivateComponent(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_ ULONG Component,
    _In_ ULONG Flags
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionPoFxActivateComponent,
                                        HwDeviceExtension,
                                        Address,
                                        Srb,
                                        Component,
                                        Flags);
    return status;
}
ULONG
FORCEINLINE
StorPortPoFxIdleComponent(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_ ULONG Component,
    _In_ ULONG Flags
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionPoFxIdleComponent,
                                        HwDeviceExtension,
                                        Address,
                                        Srb,
                                        Component,
                                        Flags);
    return status;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxSetComponentLatency(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG Component,
    _In_ ULONGLONG Latency
)
{
    return StorPortExtendedFunction(ExtFunctionPoFxSetComponentLatency,
                                    HwDeviceExtension,
                                    Address,
                                    Component,
                                    Latency);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxSetComponentResidency(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG Component,
    _In_ ULONGLONG Residency
)
{
    return StorPortExtendedFunction(ExtFunctionPoFxSetComponentResidency,
                                    HwDeviceExtension,
                                    Address,
                                    Component,
                                    Residency);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxPowerControl(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ LPCGUID PowerControlCode,
    _In_opt_ PVOID InBuffer,
    _In_ SIZE_T InBufferSize,
    _Out_opt_ PVOID OutBuffer,
    _In_ SIZE_T OutBufferSize,
    _Out_opt_ PSIZE_T BytesReturned
)
{
    return StorPortExtendedFunction(ExtFunctionPoFxPowerControl,
                                    HwDeviceExtension,
                                    Address,
                                    PowerControlCode,
                                    InBuffer,
                                    InBufferSize,
                                    OutBuffer,
                                    OutBufferSize,
                                    BytesReturned);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxSetIdleTimeout(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG IdleTimeoutInMS
)
{
    return StorPortExtendedFunction(ExtFunctionPoFxSetIdleTimeout,
                                    HwDeviceExtension,
                                    Address,
                                    IdleTimeoutInMS);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxRegisterPerfStates(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG Component,
    _In_ ULONGLONG Flags,
    _In_ ULONG PerfSetCount,
    _In_ PSTOR_POFX_COMPONENT_PERF_SET PerfSets
)
{
    return StorPortExtendedFunction(ExtFunctionPoFxRegisterPerfStates,
                                    HwDeviceExtension,
                                    Address,
                                    Component,
                                    Flags,
                                    PerfSetCount,
                                    PerfSets);
}
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
StorPortPoFxSetPerfState(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG Component,
    _In_ ULONG Flags,
    _In_ ULONG SetIndex,
    _In_ ULONG State,
    _In_ PVOID Context
)
{
    return StorPortExtendedFunction(ExtFunctionPoFxSetPerfState,
                                    HwDeviceExtension,
                                    Address,
                                    Component,
                                    Flags,
                                    SetIndex,
                                    State,
                                    Context);
}
static const GUID STORPORT_DEVICEOPERATION_SECURE_REPROVISION_GUID = { 0xdcaf9c10, 0x895f, 0x481f, { 0xa4, 0x92, 0xd4, 0xce, 0xd2, 0xf5, 0x56, 0x33 } };
static const GUID STORPORT_DEVICEOPERATION_USE_INLINE_CRYPTO_ENGINE_GUID = { 0xd52ce820, 0x2b37, 0x444b, { 0xa6, 0x33, 0x00, 0x92, 0xe5, 0x91, 0xd0, 0x7b } };
static const GUID STORPORT_DEVICEOPERATION_CACHED_SETTINGS_INIT_GUID = { 0x2b9443ac, 0xf89b, 0x48e8, { 0xb2, 0x92, 0x2c, 0xb6, 0xc9, 0x6e, 0xfd, 0x5a } };
ULONG
FORCEINLINE
StorPortIsDeviceOperationAllowed(
    _In_ PVOID HwDeviceExtension,
    _In_ PSTOR_ADDRESS Address,
    _In_ LPCGUID DeviceOperation,
    _Out_ ULONG *AllowedFlag
)
{
    return StorPortExtendedFunction(ExtFunctionDeviceOperationAllowed,
                                    HwDeviceExtension,
                                    Address,
                                    DeviceOperation,
                                    AllowedFlag);
}
ULONG
FORCEINLINE
StorPortIsCurrentOsInstallationUpgrade(
    _In_ PVOID HwDeviceExtension,
    _Out_ BOOLEAN *Upgraded
)
{
    return StorPortExtendedFunction(ExtFunctionCurrentOsInstallationUpgrade,
                                    HwDeviceExtension,
                                    Upgraded);
}
ULONG
FORCEINLINE
StorPortGetD3ColdSupport(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PVOID Address,
    _Out_ PBOOLEAN Supported
)
{
    return StorPortExtendedFunction(ExtFunctionGetD3ColdSupport,
                                    HwDeviceExtension,
                                    Address,
                                    Supported);
}
ULONG
FORCEINLINE
StorPortPropagateIrpExtension(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ PVOID TargetIrp,
    _In_ ULONG Flags
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionPropagateIrpExtension,
                                      HwDeviceExtension,
                                      Srb,
                                      TargetIrp,
                                      Flags);
    return status;
}
VOID
FORCEINLINE
StorPortInitializeListHead(
    _In_ PVOID HwDeviceExtension,
    _Out_ PSTOR_LIST_ENTRY ListHead
    )
{
    UNREFERENCED_PARAMETER(HwDeviceExtension);
    if ( ListHead ) {
        ListHead->Flink = ListHead->Blink = ListHead;
    }
    return;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInterlockedInsertHeadList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_LIST_ENTRY ListHead,
    _Inout_ PSTOR_LIST_ENTRY ListEntry,
    _Inout_ PSTOR_LIST_ENTRY *Result,
    _Inout_ PSTOR_KSPIN_LOCK Lock
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((ListHead) && (ListEntry) && (Result) && (Lock)) {
        status = StorPortExtendedFunction(ExtFunctionInterlockedInsertHeadList,
                                          HwDeviceExtension,
                                          ListHead,
                                          ListEntry,
                                          Result,
                                          Lock);
    } else {
        status = STOR_STATUS_INVALID_PARAMETER;
    }
    return status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInterlockedInsertTailList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_LIST_ENTRY ListHead,
    _Inout_ PSTOR_LIST_ENTRY ListEntry,
    _Inout_ PSTOR_LIST_ENTRY *Result,
    _Inout_ PSTOR_KSPIN_LOCK Lock
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((ListHead) && (ListEntry) && (Result) && (Lock)) {
        status = StorPortExtendedFunction(ExtFunctionInterlockedInsertTailList,
                                          HwDeviceExtension,
                                          ListHead,
                                          ListEntry,
                                          Result,
                                          Lock);
    } else {
        status = STOR_STATUS_INVALID_PARAMETER;
    }
    return status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInterlockedRemoveHeadList(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_LIST_ENTRY ListHead,
    _Inout_ PSTOR_LIST_ENTRY *Result,
    _Inout_ PSTOR_KSPIN_LOCK Lock
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    if ((ListHead) && (Result) && (Lock)) {
        status = StorPortExtendedFunction(ExtFunctionInterlockedRemoveHeadList,
                                          HwDeviceExtension,
                                          ListHead,
                                          Result,
                                          Lock);
    } else {
        status = STOR_STATUS_INVALID_PARAMETER;
    }
    return status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortInitializeSpinlock(
    _In_ PVOID HwDeviceExtension,
    _Out_ PSTOR_KSPIN_LOCK Lock
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    if (Lock) {
        status = StorPortExtendedFunction(ExtFunctionInitializeSpinlock,
                                          HwDeviceExtension,
                                          Lock);
    } else {
        status = STOR_STATUS_INVALID_PARAMETER;
    }
    return status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortGetPfns(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ PVOID Mdl,
    _Outptr_result_buffer_(*PfnCount) PVOID* Pfns,
    _Out_ ULONG* PfnCount,
    _Out_ ULONG* StartingOffset
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionGetPfns,
                                      HwDeviceExtension,
                                      Srb,
                                      Mdl,
                                      Pfns,
                                      PfnCount,
                                      StartingOffset);
    return status;
}
ULONG
FORCEINLINE
StorPortInitializeCryptoEngine(
    _In_ PVOID HwDeviceExtension,
    _Inout_ PSTOR_CRYPTO_CAPABILITIES_DATA CryptoCapabilitiesData
    )
{
    return StorPortExtendedFunction(ExtFunctionInitializeCryptoEngine,
                                    HwDeviceExtension,
                                    CryptoCapabilitiesData);
}
ULONG
FORCEINLINE
StorPortGetRequestCryptoInfo(
    _In_ PVOID HwDeviceExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Out_ PSTOR_CRYPTO_KEY_INFO CryptoKeyInfo
    )
{
    return StorPortExtendedFunction(ExtFunctionGetRequestCryptoInfo,
                                    HwDeviceExtension,
                                    Srb,
                                    CryptoKeyInfo);
}
typedef enum _STORPORT_ETW_LEVEL {
    StorportEtwLevelLogAlways = 0,
    StorportEtwLevelCritical = 1,
    StorportEtwLevelError = 2,
    StorportEtwLevelWarning = 3,
    StorportEtwLevelInformational = 4,
    StorportEtwLevelVerbose = 5,
    StorportEtwLevelMax = StorportEtwLevelVerbose
} STORPORT_ETW_LEVEL, *PSTORPORT_ETW_LEVEL;
typedef enum _STORPORT_ETW_EVENT_OPCODE {
    StorportEtwEventOpcodeInfo = 0,
    StorportEtwEventOpcodeStart = 1,
    StorportEtwEventOpcodeStop = 2,
    StorportEtwEventOpcodeDC_Start = 3,
    StorportEtwEventOpcodeDC_Stop = 4,
    StorportEtwEventOpcodeExtension = 5,
    StorportEtwEventOpcodeReply = 6,
    StorportEtwEventOpcodeResume = 7,
    StorportEtwEventOpcodeSuspend = 8,
    StorportEtwEventOpcodeSend = 9,
    StorportEtwEventOpcodeReceive = 240
} STORPORT_ETW_EVENT_OPCODE, *PSTORPORT_ETW_EVENT_OPCODE;
typedef enum _STORPORT_ETW_EVENT_CHANNEL{
    StorportEtwEventDiagnostic = 0,
    StorportEtwEventOperational = 1,
    StorportEtwEventHealth = 2
} STORPORT_ETW_EVENT_CHANNEL, *PSTORPORT_ETW_EVENT_CHANNEL;
ULONG
FORCEINLINE
StorPortEtwEvent2(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG EventId,
    _In_reads_or_z_(STORPORT_ETW_MAX_DESCRIPTION_LENGTH) PWSTR EventDescription,
    _In_ ULONGLONG EventKeywords,
    _In_ STORPORT_ETW_LEVEL EventLevel,
    _In_ STORPORT_ETW_EVENT_OPCODE EventOpcode,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter1Name,
    _In_ ULONGLONG Parameter1Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter2Name,
    _In_ ULONGLONG Parameter2Value
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportChannelEtwEvent2,
                                        HwDeviceExtension,
                                        Address,
                                        StorportEtwEventDiagnostic,
                                        EventId,
                                        EventDescription,
                                        EventKeywords,
                                        EventLevel,
                                        EventOpcode,
                                        Srb,
                                        Parameter1Name,
                                        Parameter1Value,
                                        Parameter2Name,
                                        Parameter2Value);
    return status;
}
ULONG
FORCEINLINE
StorPortEtwEvent4(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG EventId,
    _In_reads_or_z_(STORPORT_ETW_MAX_DESCRIPTION_LENGTH) PWSTR EventDescription,
    _In_ ULONGLONG EventKeywords,
    _In_ STORPORT_ETW_LEVEL EventLevel,
    _In_ STORPORT_ETW_EVENT_OPCODE EventOpcode,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter1Name,
    _In_ ULONGLONG Parameter1Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter2Name,
    _In_ ULONGLONG Parameter2Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter3Name,
    _In_ ULONGLONG Parameter3Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter4Name,
    _In_ ULONGLONG Parameter4Value
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportChannelEtwEvent4,
                                        HwDeviceExtension,
                                        Address,
                                        StorportEtwEventDiagnostic,
                                        EventId,
                                        EventDescription,
                                        EventKeywords,
                                        EventLevel,
                                        EventOpcode,
                                        Srb,
                                        Parameter1Name,
                                        Parameter1Value,
                                        Parameter2Name,
                                        Parameter2Value,
                                        Parameter3Name,
                                        Parameter3Value,
                                        Parameter4Name,
                                        Parameter4Value);
    return status;
}
ULONG
FORCEINLINE
StorPortEtwEvent8(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG EventId,
    _In_reads_or_z_(STORPORT_ETW_MAX_DESCRIPTION_LENGTH) PWSTR EventDescription,
    _In_ ULONGLONG EventKeywords,
    _In_ STORPORT_ETW_LEVEL EventLevel,
    _In_ STORPORT_ETW_EVENT_OPCODE EventOpcode,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter1Name,
    _In_ ULONGLONG Parameter1Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter2Name,
    _In_ ULONGLONG Parameter2Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter3Name,
    _In_ ULONGLONG Parameter3Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter4Name,
    _In_ ULONGLONG Parameter4Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter5Name,
    _In_ ULONGLONG Parameter5Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter6Name,
    _In_ ULONGLONG Parameter6Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter7Name,
    _In_ ULONGLONG Parameter7Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter8Name,
    _In_ ULONGLONG Parameter8Value
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportChannelEtwEvent8,
                                    HwDeviceExtension,
                                    Address,
                                    StorportEtwEventDiagnostic,
                                    EventId,
                                    EventDescription,
                                    EventKeywords,
                                    EventLevel,
                                    EventOpcode,
                                    Srb,
                                    Parameter1Name,
                                    Parameter1Value,
                                    Parameter2Name,
                                    Parameter2Value,
                                    Parameter3Name,
                                    Parameter3Value,
                                    Parameter4Name,
                                    Parameter4Value,
                                    Parameter5Name,
                                    Parameter5Value,
                                    Parameter6Name,
                                    Parameter6Value,
                                    Parameter7Name,
                                    Parameter7Value,
                                    Parameter8Name,
                                    Parameter8Value);
    return status;
}
ULONG
FORCEINLINE
StorPortEtwChannelEvent2(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ STORPORT_ETW_EVENT_CHANNEL EventChannel,
    _In_ ULONG EventId,
    _In_reads_or_z_(STORPORT_ETW_MAX_DESCRIPTION_LENGTH) PWSTR EventDescription,
    _In_ ULONGLONG EventKeywords,
    _In_ STORPORT_ETW_LEVEL EventLevel,
    _In_ STORPORT_ETW_EVENT_OPCODE EventOpcode,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter1Name,
    _In_ ULONGLONG Parameter1Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter2Name,
    _In_ ULONGLONG Parameter2Value
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportChannelEtwEvent2,
                                        HwDeviceExtension,
                                        Address,
                                        EventChannel,
                                        EventId,
                                        EventDescription,
                                        EventKeywords,
                                        EventLevel,
                                        EventOpcode,
                                        Srb,
                                        Parameter1Name,
                                        Parameter1Value,
                                        Parameter2Name,
                                        Parameter2Value);
    return status;
}
ULONG
FORCEINLINE
StorPortEtwChannelEvent4(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ STORPORT_ETW_EVENT_CHANNEL EventChannel,
    _In_ ULONG EventId,
    _In_reads_or_z_(STORPORT_ETW_MAX_DESCRIPTION_LENGTH) PWSTR EventDescription,
    _In_ ULONGLONG EventKeywords,
    _In_ STORPORT_ETW_LEVEL EventLevel,
    _In_ STORPORT_ETW_EVENT_OPCODE EventOpcode,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter1Name,
    _In_ ULONGLONG Parameter1Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter2Name,
    _In_ ULONGLONG Parameter2Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter3Name,
    _In_ ULONGLONG Parameter3Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter4Name,
    _In_ ULONGLONG Parameter4Value
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportChannelEtwEvent4,
                                        HwDeviceExtension,
                                        Address,
                                        EventChannel,
                                        EventId,
                                        EventDescription,
                                        EventKeywords,
                                        EventLevel,
                                        EventOpcode,
                                        Srb,
                                        Parameter1Name,
                                        Parameter1Value,
                                        Parameter2Name,
                                        Parameter2Value,
                                        Parameter3Name,
                                        Parameter3Value,
                                        Parameter4Name,
                                        Parameter4Value);
    return status;
}
ULONG
FORCEINLINE
StorPortEtwChannelEvent8(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ STORPORT_ETW_EVENT_CHANNEL EventChannel,
    _In_ ULONG EventId,
    _In_reads_or_z_(STORPORT_ETW_MAX_DESCRIPTION_LENGTH) PWSTR EventDescription,
    _In_ ULONGLONG EventKeywords,
    _In_ STORPORT_ETW_LEVEL EventLevel,
    _In_ STORPORT_ETW_EVENT_OPCODE EventOpcode,
    _In_opt_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter1Name,
    _In_ ULONGLONG Parameter1Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter2Name,
    _In_ ULONGLONG Parameter2Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter3Name,
    _In_ ULONGLONG Parameter3Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter4Name,
    _In_ ULONGLONG Parameter4Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter5Name,
    _In_ ULONGLONG Parameter5Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter6Name,
    _In_ ULONGLONG Parameter6Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter7Name,
    _In_ ULONGLONG Parameter7Value,
    _In_reads_or_z_opt_(STORPORT_ETW_MAX_PARAM_NAME_LENGTH) PWSTR Parameter8Name,
    _In_ ULONGLONG Parameter8Value
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportChannelEtwEvent8,
                                    HwDeviceExtension,
                                    Address,
                                    EventChannel,
                                    EventId,
                                    EventDescription,
                                    EventKeywords,
                                    EventLevel,
                                    EventOpcode,
                                    Srb,
                                    Parameter1Name,
                                    Parameter1Value,
                                    Parameter2Name,
                                    Parameter2Value,
                                    Parameter3Name,
                                    Parameter3Value,
                                    Parameter4Name,
                                    Parameter4Value,
                                    Parameter5Name,
                                    Parameter5Value,
                                    Parameter6Name,
                                    Parameter6Value,
                                    Parameter7Name,
                                    Parameter7Value,
                                    Parameter8Name,
                                    Parameter8Value);
    return status;
}
typedef struct _STORPORT_TELEMETRY_EVENT {
    ULONG DriverVersion;
    ULONG EventId;
    UCHAR EventName[EVENT_NAME_MAX_LENGTH];
    ULONG EventVersion;
    ULONG Flags;
    _Field_range_(0, EVENT_BUFFER_MAX_LENGTH)
    ULONG EventBufferLength;
    _Field_size_bytes_(EventBufferLength)
    PUCHAR EventBuffer;
    UCHAR ParameterName0[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue0;
    UCHAR ParameterName1[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue1;
    UCHAR ParameterName2[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue2;
    UCHAR ParameterName3[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue3;
    UCHAR ParameterName4[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue4;
    UCHAR ParameterName5[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue5;
    UCHAR ParameterName6[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue6;
    UCHAR ParameterName7[EVENT_MAX_PARAM_NAME_LEN];
    ULONGLONG ParameterValue7;
} STORPORT_TELEMETRY_EVENT, *PSTORPORT_TELEMETRY_EVENT;
ULONG
FORCEINLINE
StorPortLogTelemetry(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS StorAddress,
    _In_ PSTORPORT_TELEMETRY_EVENT Event
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportTelemetry,
                                      HwDeviceExtension,
                                      StorAddress,
                                      Event);
    return status;
}
ULONG
FORCEINLINE
StorPortLogTelemetryEx(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS StorAddress,
    _In_ PSTORPORT_TELEMETRY_EVENT Event,
    _In_ STOR_TELEMETRY_CATEGORY Category
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionMiniportTelemetryEx,
                                      HwDeviceExtension,
                                      StorAddress,
                                      Event,
                                      Category);
    return status;
}
ULONG
FORCEINLINE
StorPortUpdateAdapterMaxIO(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MaxIoCount
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionUpdateAdapterMaxIO,
                                      HwDeviceExtension,
                                      MaxIoCount);
    return status;
}
ULONG
FORCEINLINE
StorPortUpdatePortConfigMaxIOInfo(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG MaxIoCount,
    _In_ ULONG MaxIosPerLun
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionUpdateAdapterMaxIOInfo,
                                      HwDeviceExtension,
                                      MaxIoCount,
                                      MaxIosPerLun);
    return status;
}
ULONG
FORCEINLINE
StorPortDelayExecution(
    _In_ PVOID HwDeviceExtension,
    _In_ ULONG DelayInMicroseconds
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionDelayExecution,
                                      HwDeviceExtension,
                                      DelayInMicroseconds);
    return status;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortAllocateDmaMemory(
    _In_ PVOID HwDeviceExtension,
    _In_ SIZE_T NumberOfBytes,
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress,
    _In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ NODE_REQUIREMENT PreferredNode,
    _Out_ _At_(*BufferPointer,
        _When_(return!=STOR_STATUS_SUCCESS, _Post_null_)
        _When_(return==STOR_STATUS_SUCCESS, _Post_notnull_ _Post_writable_byte_size_(NumberOfBytes)))
         PVOID* BufferPointer,
    _Out_ PPHYSICAL_ADDRESS PhysicalAddress
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionAllocateDmaMemory,
                                      HwDeviceExtension,
                                      NumberOfBytes,
                                      LowestAcceptableAddress,
                                      HighestAcceptableAddress,
                                      BoundaryAddressMultiple,
                                      CacheType,
                                      PreferredNode,
                                      BufferPointer,
                                      PhysicalAddress);
    return status;
}
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortFreeDmaMemory(
    _In_ PVOID HwDeviceExtension,
    _In_reads_bytes_(NumberOfBytes) _Post_invalid_ PVOID BaseAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_opt_ PHYSICAL_ADDRESS PhysicalAddress
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionFreeDmaMemory,
                                      HwDeviceExtension,
                                      BaseAddress,
                                      NumberOfBytes,
                                      CacheType,
                                      PhysicalAddress);
    return status;
}
typedef enum _STORPORT_QUERY_CONFIGURATION_TYPE {
    StorportQueryConfigurationD3 = 0,
    StorportQueryConfigurationMax
} STORPORT_QUERY_CONFIGURATION_TYPE, *PSTORPORT_QUERY_CONFIGURATION_TYPE;
_Success_(return == STOR_STATUS_SUCCESS)
ULONG
FORCEINLINE
StorPortQueryConfiguration(
    _In_ PVOID HwDeviceExtension,
    _In_ STORPORT_QUERY_CONFIGURATION_TYPE Type,
    _Out_ PBOOLEAN Enabled
    )
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionQueryConfiguration,
                                      HwDeviceExtension,
                                      Type,
                                      Enabled);
    return status;
}
VOID
FORCEINLINE
StorPortMarkDeviceFailed(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS StorAddress,
    _In_ ULONG Flags,
    _In_ PWSTR FailReason
    )
{
    StorPortNotification(MarkDeviceFailed,
                         HwDeviceExtension,
                         StorAddress,
                         Flags,
                         FailReason);
}
ULONG
FORCEINLINE
StorPortEtwLogError(
    _In_ PVOID HwDeviceExtension,
    _In_opt_ PSTOR_ADDRESS Address,
    _In_ ULONG Id,
    _In_ PWSTR Description,
    _In_ ULONG DataBufferLength,
    _In_reads_bytes_(DataBufferLength) PVOID DataBuffer
)
{
    ULONG status = STOR_STATUS_NOT_IMPLEMENTED;
    status = StorPortExtendedFunction(ExtFunctionLogHardwareError,
                                      HwDeviceExtension,
                                      Address,
                                      Id,
                                      Description,
                                      DataBufferLength,
                                      DataBuffer);
    return status;
}
#pragma warning(default:4200)
#pragma warning(default:4201)
#pragma warning(default:4214)
