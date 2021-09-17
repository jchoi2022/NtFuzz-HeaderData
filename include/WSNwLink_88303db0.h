#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _IPX_ADDRESS_DATA {
    INT adapternum;
    UCHAR netnum[4];
    UCHAR nodenum[6];
    BOOLEAN wan;
    BOOLEAN status;
    INT maxpkt;
    ULONG linkspeed;
} IPX_ADDRESS_DATA, *PIPX_ADDRESS_DATA;
typedef struct _IPX_NETNUM_DATA {
    UCHAR netnum[4];
    USHORT hopcount;
    USHORT netdelay;
    INT cardnum;
    UCHAR router[6];
} IPX_NETNUM_DATA, *PIPX_NETNUM_DATA;
typedef struct _IPX_SPXCONNSTATUS_DATA {
    UCHAR ConnectionState;
    UCHAR WatchDogActive;
    USHORT LocalConnectionId;
    USHORT RemoteConnectionId;
    USHORT LocalSequenceNumber;
    USHORT LocalAckNumber;
    USHORT LocalAllocNumber;
    USHORT RemoteAckNumber;
    USHORT RemoteAllocNumber;
    USHORT LocalSocket;
    UCHAR ImmediateAddress[6];
    UCHAR RemoteNetwork[4];
    UCHAR RemoteNode[6];
    USHORT RemoteSocket;
    USHORT RetransmissionCount;
    USHORT EstimatedRoundTripDelay;
    USHORT RetransmittedPackets;
    USHORT SuppressedPacket;
} IPX_SPXCONNSTATUS_DATA, *PIPX_SPXCONNSTATUS_DATA;
#endif
#pragma endregion
