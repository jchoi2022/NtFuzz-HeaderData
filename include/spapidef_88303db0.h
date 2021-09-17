#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORDLONG SP_LOG_TOKEN;
typedef DWORDLONG *PSP_LOG_TOKEN;
#endif
#pragma endregion
