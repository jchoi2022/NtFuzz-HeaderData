#pragma warning(disable:4200)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a0, METHOD_BUFFERED, FILE_ANY_ACCESS)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a1, METHOD_BUFFERED, FILE_WRITE_ACCESS)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a2, METHOD_BUFFERED, FILE_WRITE_ACCESS)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a3, METHOD_BUFFERED, FILE_ANY_ACCESS)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a4, METHOD_BUFFERED, FILE_ANY_ACCESS)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a5, METHOD_BUFFERED, FILE_ANY_ACCESS)
            CTL_CODE( FILE_DEVICE_DISK, 0x7a6, METHOD_BUFFERED, FILE_ANY_ACCESS)
typedef struct _SFFDISK_QUERY_DEVICE_PROTOCOL_DATA {
    USHORT Size;
    USHORT Reserved;
    GUID ProtocolGUID;
} SFFDISK_QUERY_DEVICE_PROTOCOL_DATA, *PSFFDISK_QUERY_DEVICE_PROTOCOL_DATA;
typedef enum {
    SFFDISK_DC_GET_VERSION = 0,
    SFFDISK_DC_LOCK_CHANNEL,
    SFFDISK_DC_UNLOCK_CHANNEL,
    SFFDISK_DC_DEVICE_COMMAND,
} SFFDISK_DCMD;
typedef struct _SFFDISK_DEVICE_COMMAND_DATA {
    USHORT HeaderSize;
    USHORT Flags;
    SFFDISK_DCMD Command;
    USHORT ProtocolArgumentSize;
    ULONG DeviceDataBufferSize;
    ULONG_PTR Information;
    UCHAR Data[0];
} SFFDISK_DEVICE_COMMAND_DATA, *PSFFDISK_DEVICE_COMMAND_DATA;
typedef enum {
    SFFDISK_DP_IS_SUPPORTED = 0,
    SFFDISK_DP_SET_PASSWORD,
    SFFDISK_DP_LOCK_DEVICE,
    SFFDISK_DP_UNLOCK_DEVICE,
    SFFDISK_DP_RESET_DEVICE_ALL_DATA
} SFFDISK_DPCMD;
typedef struct _SFFDISK_DEVICE_PASSWORD_DATA {
    USHORT Size;
    USHORT Reserved;
    SFFDISK_DPCMD Command;
    ULONG_PTR Information;
    UCHAR PasswordLength;
    UCHAR NewPasswordLength;
    UCHAR Data[0];
} SFFDISK_DEVICE_PASSWORD_DATA, *PSFFDISK_DEVICE_PASSWORD_DATA;
typedef enum {
    SFFDISK_RPMB_IS_SUPPORTED = 0x00000000,
    SFFDISK_RPMB_PROGRAM_AUTH_KEY = 0x00000001,
    SFFDISK_RPMB_QUERY_WRITE_COUNTER = 0x00000002,
    SFFDISK_RPMB_AUTHENTICATED_WRITE = 0x00000003,
    SFFDISK_RPMB_AUTHENTICATED_READ = 0x00000004,
    SFFDISK_GPP_IS_SUPPORTED = 0x00010000,
    SFFDISK_GPP_READ = 0x00010001,
    SFFDISK_GPP_WRITE = 0x00010002,
} SFFDISK_PARTITION_ACCESS;
#pragma pack(push)
#pragma pack(1)
typedef struct _SFFDISK_DEVICE_RPMB_DATA_FRAME {
    UCHAR Stuff[196];
    UCHAR KeyOrMAC[32];
    UCHAR Data[256];
    UCHAR Nonce[16];
    UCHAR WriteCounter[4];
    UCHAR Address[2];
    UCHAR BlockCount[2];
    UCHAR OperationResult[2];
    UCHAR RequestOrResponseType[2];
} SFFDISK_DEVICE_RPMB_DATA_FRAME, *PSFFDISK_DEVICE_RPMB_DATA_FRAME;
typedef struct _SFFDISK_DEVICE_PARTITION_ACCESS_DATA {
    ULONG Size;
    SFFDISK_PARTITION_ACCESS Command;
    ULONG Reserved[2];
    union {
        struct {
            ULONG SizeInBytes;
            ULONG MaxReliableWriteSizeInBytes;
        } RpmbIsSupported;
        struct {
            ULONG Reserved[4];
            SFFDISK_DEVICE_RPMB_DATA_FRAME ResultFrame;
            SFFDISK_DEVICE_RPMB_DATA_FRAME ProgramAuthKeyFrame;
        } RpmbProgramAuthKey;
        struct {
            ULONG Reserved[4];
            SFFDISK_DEVICE_RPMB_DATA_FRAME ResultFrame;
            SFFDISK_DEVICE_RPMB_DATA_FRAME QueryWriteCounterFrame;
        } RpmbQueryWriteCounter;
        struct {
            ULONG CountToWrite;
            ULONG Reserved[3];
            SFFDISK_DEVICE_RPMB_DATA_FRAME ResultFrame;
            SFFDISK_DEVICE_RPMB_DATA_FRAME FrameDataToWrite[1];
        } RpmbAuthenticatedWrite;
        struct {
            ULONG CountToRead;
            ULONG Reserved[3];
            SFFDISK_DEVICE_RPMB_DATA_FRAME AuthenticatedReadFrame;
            SFFDISK_DEVICE_RPMB_DATA_FRAME ReturnedFrameData[1];
        } RpmbAuthenticatedRead;
        struct {
            ULONGLONG Gpp_1_SizeInBytes;
            ULONGLONG Gpp_2_SizeInBytes;
            ULONGLONG Gpp_3_SizeInBytes;
            ULONGLONG Gpp_4_SizeInBytes;
            ULONG GppBlockSize;
        } GppIsSupported;
        struct {
            ULONG GppPartitionId;
            ULONG Length;
            ULONGLONG Offset;
            UCHAR Data[1024];
        } GppReadWrite;
    } Parameters;
} SFFDISK_DEVICE_PARTITION_ACCESS_DATA, *PSFFDISK_DEVICE_PARTITION_ACCESS_DATA;
DEFINE_GUID(GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_RPMB, 0x27447c21L, 0xbcc3, 0x4d07, 0xa0, 0x5b, 0xa3, 0x39, 0x5b, 0xb4, 0xee, 0xe7);
DEFINE_GUID(GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_GPP , 0x2e0e2e39L, 0x1f19, 0x4595, 0xa9, 0x06, 0x88, 0x78, 0x82, 0xe7, 0x39, 0x03);
typedef struct __SFFDISK_BKOPS_STATUS_DATA {
    UCHAR BkopsIsSupported;
    UCHAR BkopsIsEnabled;
    UCHAR BkopsStatus;
} SFFDISK_BKOPS_STATUS_DATA, *PSFFDISK_BKOPS_STATUS_DATA;
#pragma pack(pop)
#pragma warning(default:4200)
