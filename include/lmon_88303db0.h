#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _PORT_INFO_FFA {
    LPSTR pName;
    DWORD cbMonitorData;
    LPBYTE pMonitorData;
} PORT_INFO_FFA, *PPORT_INFO_FFA, *LPPORT_INFO_FFA;
typedef struct _PORT_INFO_FFW {
    LPWSTR pName;
    DWORD cbMonitorData;
    LPBYTE pMonitorData;
} PORT_INFO_FFW, *PPORT_INFO_FFW, *LPPORT_INFO_FFW;
#endif
#pragma endregion
