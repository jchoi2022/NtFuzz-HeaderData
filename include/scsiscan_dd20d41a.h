#pragma warning(disable : 4200)
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _SCSISCAN_CMD {
 ULONG Reserved1;
 ULONG Size;
 ULONG SrbFlags;
 UCHAR CdbLength;
 UCHAR SenseLength;
 UCHAR Reserved2;
 UCHAR Reserved3;
 ULONG TransferLength;
 UCHAR Cdb[16];
 PUCHAR pSrbStatus;
 PUCHAR pSenseBuffer;
} SCSISCAN_CMD, *PSCSISCAN_CMD;
typedef struct _SCSISCAN_INFO{
 ULONG Size;
 ULONG Flags;
    UCHAR PortNumber;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR AdapterName[MAX_STRING];
 ULONG Reserved;
} SCSISCAN_INFO, *PSCSISCAN_INFO;
#endif
#pragma endregion
