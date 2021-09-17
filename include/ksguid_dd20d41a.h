#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <guiddef.h>
    #define STATICGUIDOF(guid) STATIC_##guid
#endif
#pragma endregion
