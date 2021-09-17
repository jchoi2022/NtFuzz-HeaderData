#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef enum {
    Mirror,
    Stripe,
    StripeWithParity,
    VolumeSet,
    NotAnFtMember,
    WholeDisk
} FT_TYPE;
typedef enum _FT_PARTITION_STATE {
    Healthy,
    Orphaned,
    Regenerating,
    Initializing,
    SyncRedundantCopy
} FT_PARTITION_STATE, *PFT_PARTITION_STATE;
#include "pshpack4.h"
typedef struct _DISK_PARTITION {
    FT_TYPE FtType;
    FT_PARTITION_STATE FtState;
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER Length;
    LARGE_INTEGER FtLength;
    ULONG ReservedTwoLongs[2];
    UCHAR DriveLetter;
    BOOLEAN AssignDriveLetter;
    USHORT LogicalNumber;
    USHORT FtGroup;
    USHORT FtMember;
    BOOLEAN Modified;
    UCHAR ReservedChars[3];
} DISK_PARTITION, *PDISK_PARTITION;
typedef struct _DISK_DESCRIPTION {
    USHORT NumberOfPartitions;
    USHORT ReservedShort;
    ULONG Signature;
    DISK_PARTITION Partitions[1];
} DISK_DESCRIPTION, *PDISK_DESCRIPTION;
typedef struct _DISK_REGISTRY {
    USHORT NumberOfDisks;
    USHORT ReservedShort;
    DISK_DESCRIPTION Disks[1];
} DISK_REGISTRY, *PDISK_REGISTRY;
#include "poppack.h"
}
#endif
#pragma endregion
