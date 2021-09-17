       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
const DWORD VERSION_1_WINDOWS_7 = 0;
DEFINE_GUID(GUID_DEVINTERFACE_SIDESHOW, 0x152e5811, 0xfeb9, 0x4b00, 0x90, 0xf4, 0xd3, 0x29, 0x47, 0xae, 0x16, 0x81);
DEFINE_GUID(SIDESHOW_CONTENT_MISSING_EVENT, 0x5007fba8, 0xd313, 0x439f, 0xbe, 0xa2, 0xa5, 0x02, 0x01, 0xd3, 0xe9, 0xa8);
DEFINE_GUID(SIDESHOW_APPLICATION_EVENT, 0x4cb572fa, 0x1d3b, 0x49b3, 0xa1, 0x7a, 0x2e, 0x6b, 0xff, 0x05, 0x28, 0x54);
DEFINE_GUID(SIDESHOW_USER_CHANGE_REQUEST_EVENT, 0x5009673c, 0x3f7d, 0x4c7e, 0x99, 0x71, 0xea, 0xa2, 0xe9, 0x1f, 0x15, 0x75);
DEFINE_GUID(SIDESHOW_NEW_EVENT_DATA_AVAILABLE, 0x57813854, 0x2FC1, 0x411C, 0xA5, 0x9F, 0xF2, 0x49, 0x27, 0x60, 0x88, 0x04);
#pragma pack(push, WindowsSideShowEvents, 1)
typedef struct _CONTENT_MISSING_EVENT_DATA
{
    DWORD cbContentMissingEventData;
    APPLICATION_ID ApplicationId;
    ENDPOINT_ID EndpointId;
    CONTENT_ID ContentId;
} CONTENT_MISSING_EVENT_DATA, *PCONTENT_MISSING_EVENT_DATA;
typedef struct _APPLICATION_EVENT_DATA
{
    DWORD cbApplicationEventData;
    APPLICATION_ID ApplicationId;
    ENDPOINT_ID EndpointId;
    DWORD dwEventId;
    DWORD cbEventData;
    BYTE bEventData[1];
} APPLICATION_EVENT_DATA, *PAPPLICATION_EVENT_DATA;
typedef struct _DEVICE_USER_CHANGE_EVENT_DATA
{
    DWORD cbDeviceUserChangeEventData;
    WCHAR wszUser;
} DEVICE_USER_CHANGE_EVENT_DATA, *PDEVICE_USER_CHANGE_EVENT_DATA;
typedef struct _NEW_EVENT_DATA_AVAILABLE
{
    DWORD cbNewEventDataAvailable;
    DWORD dwVersion;
} NEW_EVENT_DATA_AVAILABLE, *PNEW_EVENT_DATA_AVAILABLE;
typedef struct _EVENT_DATA_HEADER
{
    DWORD cbEventDataHeader;
    GUID guidEventType;
    DWORD dwVersion;
    DWORD cbEventDataSid;
} EVENT_DATA_HEADER, *PEVENT_DATA_HEADER;
#pragma pack(pop, WindowsSideShowEvents)
#endif
#pragma endregion
