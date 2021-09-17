#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
    HRESULT hrStatus;
    void * pData;
} AM_WMT_EVENT_DATA;
#endif
#pragma endregion
