#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef LONGLONG FT_LOGICAL_DISK_ID, *PFT_LOGICAL_DISK_ID;
#endif
#pragma endregion
