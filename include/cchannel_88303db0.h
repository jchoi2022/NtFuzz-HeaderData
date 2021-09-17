#include <pchannel.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef VOID VCAPITYPE CHANNEL_INIT_EVENT_FN(LPVOID pInitHandle,
                                             UINT event,
                                             LPVOID pData,
                                             UINT dataLength);
typedef CHANNEL_INIT_EVENT_FN FAR * PCHANNEL_INIT_EVENT_FN;
typedef VOID VCAPITYPE CHANNEL_OPEN_EVENT_FN(DWORD openHandle,
                                             UINT event,
                                             LPVOID pData,
                                             UINT32 dataLength,
                                             UINT32 totalLength,
                                             UINT32 dataFlags);
typedef CHANNEL_OPEN_EVENT_FN FAR * PCHANNEL_OPEN_EVENT_FN;
extern "C" {
typedef UINT VCAPITYPE VIRTUALCHANNELINIT(
                LPVOID FAR * ppInitHandle,
                PCHANNEL_DEF pChannel,
                INT channelCount,
                ULONG versionRequested,
                PCHANNEL_INIT_EVENT_FN pChannelInitEventProc);
typedef VIRTUALCHANNELINIT FAR * PVIRTUALCHANNELINIT;
typedef UINT VCAPITYPE VIRTUALCHANNELOPEN(
                                LPVOID pInitHandle,
                                LPDWORD pOpenHandle,
                                PCHAR pChannelName,
                                PCHANNEL_OPEN_EVENT_FN pChannelOpenEventProc);
typedef VIRTUALCHANNELOPEN FAR * PVIRTUALCHANNELOPEN;
typedef UINT VCAPITYPE VIRTUALCHANNELCLOSE(DWORD openHandle);
typedef VIRTUALCHANNELCLOSE FAR * PVIRTUALCHANNELCLOSE;
typedef UINT VCAPITYPE VIRTUALCHANNELWRITE(DWORD openHandle,
                                           LPVOID pData,
                                           ULONG dataLength,
                                           LPVOID pUserData);
typedef VIRTUALCHANNELWRITE FAR * PVIRTUALCHANNELWRITE;
typedef struct tagCHANNEL_ENTRY_POINTS
{
    DWORD cbSize;
    DWORD protocolVersion;
    PVIRTUALCHANNELINIT pVirtualChannelInit;
    PVIRTUALCHANNELOPEN pVirtualChannelOpen;
    PVIRTUALCHANNELCLOSE pVirtualChannelClose;
    PVIRTUALCHANNELWRITE pVirtualChannelWrite;
} CHANNEL_ENTRY_POINTS, FAR * PCHANNEL_ENTRY_POINTS;
typedef BOOL VCAPITYPE VIRTUALCHANNELENTRY(
                                          PCHANNEL_ENTRY_POINTS pEntryPoints);
typedef VIRTUALCHANNELENTRY FAR * PVIRTUALCHANNELENTRY;
}
#endif
#pragma endregion
