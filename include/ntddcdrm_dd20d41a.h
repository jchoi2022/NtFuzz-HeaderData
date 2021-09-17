extern "C" {
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(disable:4200)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
extern "C" {
#include <ntddstor.h>
typedef struct _CDROM_READ_TOC_EX {
    UCHAR Format : 4;
    UCHAR Reserved1 : 3;
    UCHAR Msf : 1;
    UCHAR SessionTrack;
    UCHAR Reserved2;
    UCHAR Reserved3;
} CDROM_READ_TOC_EX, *PCDROM_READ_TOC_EX;
typedef struct _TRACK_DATA {
    UCHAR Reserved;
    UCHAR Control : 4;
    UCHAR Adr : 4;
    UCHAR TrackNumber;
    UCHAR Reserved1;
    UCHAR Address[4];
} TRACK_DATA, *PTRACK_DATA;
typedef struct _CDROM_TOC {
    UCHAR Length[2];
    UCHAR FirstTrack;
    UCHAR LastTrack;
    TRACK_DATA TrackData[MAXIMUM_NUMBER_TRACKS];
} CDROM_TOC, *PCDROM_TOC;
typedef struct _CDROM_TOC_SESSION_DATA {
    UCHAR Length[2];
    UCHAR FirstCompleteSession;
    UCHAR LastCompleteSession;
    TRACK_DATA TrackData[1];
} CDROM_TOC_SESSION_DATA, *PCDROM_TOC_SESSION_DATA;
typedef struct _CDROM_TOC_FULL_TOC_DATA_BLOCK {
    UCHAR SessionNumber;
    UCHAR Control : 4;
    UCHAR Adr : 4;
    UCHAR Reserved1;
    UCHAR Point;
    UCHAR MsfExtra[3];
    UCHAR Zero;
    UCHAR Msf[3];
} CDROM_TOC_FULL_TOC_DATA_BLOCK, *PCDROM_TOC_FULL_TOC_DATA_BLOCK;
typedef struct _CDROM_TOC_FULL_TOC_DATA {
    UCHAR Length[2];
    UCHAR FirstCompleteSession;
    UCHAR LastCompleteSession;
    CDROM_TOC_FULL_TOC_DATA_BLOCK Descriptors[0];
} CDROM_TOC_FULL_TOC_DATA, *PCDROM_TOC_FULL_TOC_DATA;
typedef struct _CDROM_TOC_PMA_DATA {
    UCHAR Length[2];
    UCHAR Reserved1;
    UCHAR Reserved2;
    CDROM_TOC_FULL_TOC_DATA_BLOCK Descriptors[0];
} CDROM_TOC_PMA_DATA, *PCDROM_TOC_PMA_DATA;
typedef struct _CDROM_TOC_ATIP_DATA_BLOCK {
    UCHAR CdrwReferenceSpeed : 3;
    UCHAR Reserved3 : 1;
    UCHAR WritePower : 3;
    UCHAR True1 : 1;
    UCHAR Reserved4 : 6;
    UCHAR UnrestrictedUse : 1;
    UCHAR Reserved5 : 1;
    UCHAR A3Valid : 1;
    UCHAR A2Valid : 1;
    UCHAR A1Valid : 1;
    UCHAR DiscSubType : 3;
    UCHAR IsCdrw : 1;
    UCHAR True2 : 1;
    UCHAR Reserved7;
    UCHAR LeadInMsf[3];
    UCHAR Reserved8;
    UCHAR LeadOutMsf[3];
    UCHAR Reserved9;
    UCHAR A1Values[3];
    UCHAR Reserved10;
    UCHAR A2Values[3];
    UCHAR Reserved11;
    UCHAR A3Values[3];
    UCHAR Reserved12;
} CDROM_TOC_ATIP_DATA_BLOCK, *PCDROM_TOC_ATIP_DATA_BLOCK;
typedef struct _CDROM_TOC_ATIP_DATA {
    UCHAR Length[2];
    UCHAR Reserved1;
    UCHAR Reserved2;
    CDROM_TOC_ATIP_DATA_BLOCK Descriptors[0];
} CDROM_TOC_ATIP_DATA, *PCDROM_TOC_ATIP_DATA;
typedef struct _CDROM_TOC_CD_TEXT_DATA_BLOCK {
    UCHAR PackType;
    UCHAR TrackNumber : 7;
    UCHAR ExtensionFlag : 1;
    UCHAR SequenceNumber;
    UCHAR CharacterPosition : 4;
    UCHAR BlockNumber : 3;
    UCHAR Unicode : 1;
    union {
        UCHAR Text[12];
        WCHAR WText[6];
    };
    UCHAR CRC[2];
} CDROM_TOC_CD_TEXT_DATA_BLOCK, *PCDROM_TOC_CD_TEXT_DATA_BLOCK;
typedef struct _CDROM_TOC_CD_TEXT_DATA {
    UCHAR Length[2];
    UCHAR Reserved1;
    UCHAR Reserved2;
    CDROM_TOC_CD_TEXT_DATA_BLOCK Descriptors[0];
} CDROM_TOC_CD_TEXT_DATA, *PCDROM_TOC_CD_TEXT_DATA;
typedef struct _CDROM_PLAY_AUDIO_MSF {
    UCHAR StartingM;
    UCHAR StartingS;
    UCHAR StartingF;
    UCHAR EndingM;
    UCHAR EndingS;
    UCHAR EndingF;
} CDROM_PLAY_AUDIO_MSF, *PCDROM_PLAY_AUDIO_MSF;
typedef struct _CDROM_SEEK_AUDIO_MSF {
    UCHAR M;
    UCHAR S;
    UCHAR F;
} CDROM_SEEK_AUDIO_MSF, *PCDROM_SEEK_AUDIO_MSF;
typedef struct _CDROM_DISK_DATA {
    ULONG DiskData;
} CDROM_DISK_DATA, *PCDROM_DISK_DATA;
typedef struct _CDROM_SUB_Q_DATA_FORMAT {
    UCHAR Format;
    UCHAR Track;
} CDROM_SUB_Q_DATA_FORMAT, *PCDROM_SUB_Q_DATA_FORMAT;
typedef struct _SUB_Q_HEADER {
    UCHAR Reserved;
    UCHAR AudioStatus;
    UCHAR DataLength[2];
} SUB_Q_HEADER, *PSUB_Q_HEADER;
typedef struct _SUB_Q_CURRENT_POSITION {
    SUB_Q_HEADER Header;
    UCHAR FormatCode;
    UCHAR Control : 4;
    UCHAR ADR : 4;
    UCHAR TrackNumber;
    UCHAR IndexNumber;
    UCHAR AbsoluteAddress[4];
    UCHAR TrackRelativeAddress[4];
} SUB_Q_CURRENT_POSITION, *PSUB_Q_CURRENT_POSITION;
typedef struct _SUB_Q_MEDIA_CATALOG_NUMBER {
    SUB_Q_HEADER Header;
    UCHAR FormatCode;
    UCHAR Reserved[3];
    UCHAR Reserved1 : 7;
    UCHAR Mcval : 1;
    UCHAR MediaCatalog[15];
} SUB_Q_MEDIA_CATALOG_NUMBER, *PSUB_Q_MEDIA_CATALOG_NUMBER;
typedef struct _SUB_Q_TRACK_ISRC {
    SUB_Q_HEADER Header;
    UCHAR FormatCode;
    UCHAR Reserved0;
    UCHAR Track;
    UCHAR Reserved1;
    UCHAR Reserved2 : 7;
    UCHAR Tcval : 1;
    UCHAR TrackIsrc[15];
} SUB_Q_TRACK_ISRC, *PSUB_Q_TRACK_ISRC;
typedef union _SUB_Q_CHANNEL_DATA {
    SUB_Q_CURRENT_POSITION CurrentPosition;
    SUB_Q_MEDIA_CATALOG_NUMBER MediaCatalog;
    SUB_Q_TRACK_ISRC TrackIsrc;
} SUB_Q_CHANNEL_DATA, *PSUB_Q_CHANNEL_DATA;
typedef struct _VOLUME_CONTROL {
    UCHAR PortVolume[4];
} VOLUME_CONTROL, *PVOLUME_CONTROL;
typedef enum _TRACK_MODE_TYPE {
    YellowMode2,
    XAForm2,
    CDDA,
    RawWithC2AndSubCode,
    RawWithC2,
    RawWithSubCode
} TRACK_MODE_TYPE, *PTRACK_MODE_TYPE;
typedef struct __RAW_READ_INFO {
    LARGE_INTEGER DiskOffset;
    ULONG SectorCount;
    TRACK_MODE_TYPE TrackMode;
} RAW_READ_INFO, *PRAW_READ_INFO;
typedef enum _MEDIA_BLANK_TYPE {
    MediaBlankTypeFull = 0,
    MediaBlankTypeMinimal = 1,
    MediaBlankTypeIncompleteTrack = 2,
    MediaBlankTypeUnreserveLastTrack = 3,
    MediaBlankTypeTrackTail = 4,
    MediaBlankTypeUncloseLastSession = 5,
    MediaBlankTypeEraseLastSession = 6,
} MEDIA_BLANK_TYPE, *PMEDIA_BLANK_TYPE;
typedef enum _EXCLUSIVE_ACCESS_REQUEST_TYPE {
    ExclusiveAccessQueryState,
    ExclusiveAccessLockDevice,
    ExclusiveAccessUnlockDevice
} EXCLUSIVE_ACCESS_REQUEST_TYPE, *PEXCLUSIVE_ACCESS_REQUEST_TYPE;
typedef struct _CDROM_EXCLUSIVE_ACCESS {
    EXCLUSIVE_ACCESS_REQUEST_TYPE RequestType;
    ULONG Flags;
} CDROM_EXCLUSIVE_ACCESS, *PCDROM_EXCLUSIVE_ACCESS;
typedef struct _CDROM_EXCLUSIVE_LOCK {
    CDROM_EXCLUSIVE_ACCESS Access;
    UCHAR CallerName[CDROM_EXCLUSIVE_CALLER_LENGTH];
} CDROM_EXCLUSIVE_LOCK, *PCDROM_EXCLUSIVE_LOCK;
typedef struct _CDROM_EXCLUSIVE_LOCK_STATE {
    BOOLEAN LockState;
    UCHAR CallerName[CDROM_EXCLUSIVE_CALLER_LENGTH];
} CDROM_EXCLUSIVE_LOCK_STATE, *PCDROM_EXCLUSIVE_LOCK_STATE;
typedef enum _CDROM_SPEED_REQUEST {
    CdromSetSpeed,
    CdromSetStreaming
} CDROM_SPEED_REQUEST, *PCDROM_SPEED_REQUEST;
typedef enum _WRITE_ROTATION {
    CdromDefaultRotation,
    CdromCAVRotation
} WRITE_ROTATION, *PWRITE_ROTATION;
typedef struct _CDROM_SET_SPEED {
    CDROM_SPEED_REQUEST RequestType;
    USHORT ReadSpeed;
    USHORT WriteSpeed;
    WRITE_ROTATION RotationControl;
} CDROM_SET_SPEED, *PCDROM_SET_SPEED;
typedef struct _CDROM_SET_STREAMING {
    CDROM_SPEED_REQUEST RequestType;
    ULONG ReadSize;
    ULONG ReadTime;
    ULONG WriteSize;
    ULONG WriteTime;
    ULONG StartLba;
    ULONG EndLba;
    WRITE_ROTATION RotationControl;
    BOOLEAN RestoreDefaults;
    BOOLEAN SetExact;
    BOOLEAN RandomAccess;
    BOOLEAN Persistent;
} CDROM_SET_STREAMING, *PCDROM_SET_STREAMING;
typedef enum _STREAMING_CONTROL_REQUEST_TYPE {
    CdromStreamingDisable = 1,
    CdromStreamingEnableForReadOnly = 2,
    CdromStreamingEnableForWriteOnly = 3,
    CdromStreamingEnableForReadWrite = 4
} STREAMING_CONTROL_REQUEST_TYPE, *PSTREAMING_CONTROL_REQUEST_TYPE;
typedef struct _CDROM_STREAMING_CONTROL {
    STREAMING_CONTROL_REQUEST_TYPE RequestType;
} CDROM_STREAMING_CONTROL, *PCDROM_STREAMING_CONTROL;
typedef enum _CDROM_OPC_INFO_TYPE {
    SimpleOpcInfo = 1
} CDROM_OPC_INFO_TYPE, *PCDROM_OPC_INFO_TYPE;
typedef struct _CDROM_SIMPLE_OPC_INFO {
    CDROM_OPC_INFO_TYPE RequestType;
    BOOLEAN Exclude0;
    BOOLEAN Exclude1;
} CDROM_SIMPLE_OPC_INFO, *PCDROM_SIMPLE_OPC_INFO;
typedef enum _CDROM_PERFORMANCE_REQUEST_TYPE {
    CdromPerformanceRequest = 1,
    CdromWriteSpeedRequest = 2
} CDROM_PERFORMANCE_REQUEST_TYPE, *PCDROM_PERFORMANCE_REQUEST_TYPE;
typedef enum _CDROM_PERFORMANCE_TYPE {
    CdromReadPerformance = 1,
    CdromWritePerformance = 2
} CDROM_PERFORMANCE_TYPE, *PCDROM_PERFORMANCE_TYPE;
typedef enum _CDROM_PERFORMANCE_EXCEPTION_TYPE {
    CdromNominalPerformance = 1,
    CdromEntirePerformanceList = 2,
    CdromPerformanceExceptionsOnly = 3
} CDROM_PERFORMANCE_EXCEPTION_TYPE, *PCDROM_PERFORMANCE_EXCEPTION_TYPE;
typedef enum _CDROM_PERFORMANCE_TOLERANCE_TYPE {
    Cdrom10Nominal20Exceptions = 1
} CDROM_PERFORMANCE_TOLERANCE_TYPE, *PCDROM_PERFORMANCE_TOLERANCE_TYPE;
typedef struct _CDROM_PERFORMANCE_REQUEST {
    CDROM_PERFORMANCE_REQUEST_TYPE RequestType;
    CDROM_PERFORMANCE_TYPE PerformanceType;
    CDROM_PERFORMANCE_EXCEPTION_TYPE Exceptions;
    CDROM_PERFORMANCE_TOLERANCE_TYPE Tolerance;
    ULONG StaringLba;
} CDROM_PERFORMANCE_REQUEST, *PCDROM_PERFORMANCE_REQUEST;
typedef struct _CDROM_WRITE_SPEED_REQUEST {
    CDROM_PERFORMANCE_REQUEST_TYPE RequestType;
} CDROM_WRITE_SPEED_REQUEST, *PCDROM_WRITE_SPEED_REQUEST;
typedef struct _CDROM_PERFORMANCE_HEADER {
    UCHAR DataLength[4];
    UCHAR Except : 1;
    UCHAR Write : 1;
    UCHAR Reserved1 : 6;
    UCHAR Reserved2[3];
    UCHAR Data[0];
} CDROM_PERFORMANCE_HEADER, *PCDROM_PERFORMANCE_HEADER;
typedef struct _CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR {
    UCHAR StartLba[4];
    UCHAR StartPerformance[4];
    UCHAR EndLba[4];
    UCHAR EndPerformance[4];
} CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR, *PCDROM_NOMINAL_PERFORMANCE_DESCRIPTOR;
typedef struct _CDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR {
    UCHAR Lba[4];
    UCHAR Time[2];
} CDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR, *PCDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR;
typedef struct _CDROM_WRITE_SPEED_DESCRIPTOR {
    UCHAR MixedReadWrite : 1;
    UCHAR Exact : 1;
    UCHAR Reserved1 : 1;
    UCHAR WriteRotationControl : 2;
    UCHAR Reserved2 : 3;
    UCHAR Reserved3[3];
    UCHAR EndLba[4];
    UCHAR ReadSpeed[4];
    UCHAR WriteSpeed[4];
} CDROM_WRITE_SPEED_DESCRIPTOR, *PCDROM_WRITE_SPEED_DESCRIPTOR;
}
#pragma warning(default:4200)
#pragma warning(default:4201)
#pragma warning(default:4214)
}
#endif
#pragma endregion
