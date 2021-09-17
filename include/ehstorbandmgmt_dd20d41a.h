       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _BAND_MANAGEMENT_CAPABILITIES
{
    ULONG StructSize;
    ULONG Capabilities;
    ULONGLONG KeyProtectionMechanism;
    ULONG MinAuthKeyLength;
    ULONG MaxAuthKeyLength;
    ULONG MaxBandCount;
    ULONG MaxSimultaneousReencryptionCount;
    ULONG BandMetadataSize;
} BAND_MANAGEMENT_CAPABILITIES, *PBAND_MANAGEMENT_CAPABILITIES;
typedef struct _ACTIVATE_REVERT_PARAMETERS
{
    ULONG StructSize;
    ULONG Flags;
    ULONG AuthKeyOffset;
} ACTIVATE_REVERT_PARAMETERS, *PACTIVATE_REVERT_PARAMETERS;
typedef struct _AUTH_KEY
{
    ULONG KeySize;
    UCHAR Key[ANYSIZE_ARRAY];
} AUTH_KEY, *PAUTH_KEY;
typedef struct _ENUMERATE_BANDS_PARAMETERS
{
    ULONG StructSize;
    ULONG Flags;
    ULONG Reserved;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    LARGE_INTEGER BandSize;
} ENUMERATE_BANDS_PARAMETERS, *PENUMERATE_BANDS_PARAMETERS;
typedef struct _BAND_LOCATION_INFO
{
    ULONG StructSize;
    ULONG Reserved;
    LARGE_INTEGER BandStart;
    LARGE_INTEGER BandSize;
    BYTE Metadata[32];
} BAND_LOCATION_INFO, *PBAND_LOCATION_INFO;
typedef enum
{
    INVALID_LOCK_STATE = 0,
    PERSISTENT_UNLOCK,
    NONPERSISTENT_UNLOCK,
    PERSISTENT_LOCK
} LOCKSTATE;
typedef enum
{
    AlgoIdTypeInvalid = 0,
    AlgoIdTypeOidString,
    AlgoIdTypeNumeric
} ALGOIDTYPE;
typedef struct _BAND_SECURITY_INFO
{
    ULONG StructSize;
    LOCKSTATE ReadLock;
    LOCKSTATE WriteLock;
    ALGOIDTYPE CryptoAlgoIdType;
    union
    {
        struct
        {
            ULONG Offset;
            ULONG Length;
        } CryptoAlgoOidString;
        ULONG CryptoAlgoNumericId;
    };
    BYTE Metadata[32];
} BAND_SECURITY_INFO, *PBAND_SECURITY_INFO;
typedef struct _BAND_TABLE_ENTRY
{
    ULONG BandId;
    BAND_LOCATION_INFO LocationInfo;
    BAND_SECURITY_INFO SecurityInfo;
} BAND_TABLE_ENTRY, *PBAND_TABLE_ENTRY;
typedef struct _BAND_TABLE
{
    ULONG StructSize;
    ULONG BandTableOffset;
    ULONG BandTableEntryCount;
    ULONG BandTableEntrySize;
} BAND_TABLE, *PBAND_TABLE;
typedef struct _CREATE_BAND_PARAMETERS
{
    ULONG StructSize;
    ULONG Flags;
    ULONG BandLocationInfoOffset;
    ULONG BandSecurityInfoOffset;
    ULONG AuthKeyOffset;
} CREATE_BAND_PARAMETERS, *PCREATE_BAND_PARAMETERS;
typedef struct _SET_BAND_LOCATION_PARAMETERS
{
    ULONG StructSize;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    ULONG AuthKeyOffset;
    ULONG BandLocationInfoOffset;
} SET_BAND_LOCATION_PARAMETERS, *PSET_BAND_LOCATION_PARAMETERS;
typedef struct _SET_BAND_SECURITY_PARAMETERS
{
    ULONG StructSize;
    ULONG Flags;
    ULONG Reserved;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    ULONG CurrentAuthKeyOffset;
    ULONG NewAuthKeyOffset;
    ULONG BandSecurityInfoOffset;
} SET_BAND_SECURITY_PARAMETERS, *PSET_BAND_SECURITY_PARAMETERS;
typedef struct _GET_BAND_METADATA_PARAMETERS
{
    ULONG StructSize;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    ULONG MetadataOffset;
    ULONG MetadataSize;
} GET_BAND_METADATA_PARAMETERS, *PGET_BAND_METADATA_PARAMETERS;
typedef struct _SET_BAND_METADATA_PARAMETERS
{
    ULONG StructSize;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    ULONG MetadataOffset;
    ULONG MetadataSize;
    ULONG BufferOffset;
    ULONG AuthKeyOffset;
} SET_BAND_METADATA_PARAMETERS, *PSET_BAND_METADATA_PARAMETERS;
typedef struct _DELETE_BAND_PARAMETERS
{
    ULONG StructSize;
    ULONG Flags;
    ULONG Reserved;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    ULONG AuthKeyOffset;
} DELETE_BAND_PARAMETERS, *PDELETE_BAND_PARAMETERS;
typedef struct _ERASE_BAND_PARAMETERS
{
    ULONG StructSize;
    ULONG Flags;
    ULONG Reserved;
    ULONG BandId;
    LARGE_INTEGER BandStart;
    ULONG NewAuthKeyOffset;
} ERASE_BAND_PARAMETERS, *PERASE_BAND_PARAMETERS;
            CTL_CODE(IOCTL_STORAGE_BASE, 0x520, METHOD_BUFFERED, \
                     FILE_ANY_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x521, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x522, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x523, METHOD_BUFFERED, \
                     FILE_ANY_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x524, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x525, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x526, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x527, METHOD_BUFFERED, \
                     FILE_ANY_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x528, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x529, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(IOCTL_STORAGE_BASE, 0x52a, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
            CTL_CODE(FILE_DEVICE_EHSTOR, 0x200, METHOD_BUFFERED, \
                     FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#endif
#pragma endregion
