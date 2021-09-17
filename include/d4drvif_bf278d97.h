    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)
typedef struct _DOT4_DRIVER_CMD
{
    CHANNEL_HANDLE hChannelHandle;
    ULONG ulSize;
    ULONG ulOffset;
    ULONG ulTimeout;
} DOT4_DRIVER_CMD, *PDOT4_DRIVER_CMD;
typedef struct _DOT4_DC_OPEN_DATA
{
    unsigned char bHsid;
    unsigned char fAddActivity;
    CHANNEL_HANDLE hChannelHandle;
} DOT4_DC_OPEN_DATA, *PDOT4_DC_OPEN_DATA;
typedef struct _DOT4_DC_CREATE_DATA
{
    unsigned char bPsid;
    CHAR pServiceName[MAX_SERVICE_LENGTH + 1];
    unsigned char bType;
    ULONG ulBufferSize;
    USHORT usMaxHtoPPacketSize;
    USHORT usMaxPtoHPacketSize;
    unsigned char bHsid;
} DOT4_DC_CREATE_DATA, *PDOT4_DC_CREATE_DATA;
typedef struct _DOT4_DC_DESTROY_DATA
{
    unsigned char bHsid;
} DOT4_DC_DESTROY_DATA, *PDOT4_DC_DESTROY_DATA;
