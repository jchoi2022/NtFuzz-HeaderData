       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _L2_NOTIFICATION_DATA {
    DWORD NotificationSource;
    DWORD NotificationCode;
    GUID InterfaceGuid;
    DWORD dwDataSize;
    [unique, size_is(dwDataSize)] PBYTE pData;
} L2_NOTIFICATION_DATA, *PL2_NOTIFICATION_DATA;
}
#endif
#pragma endregion
