#include <winapifamily.h>
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
#include <sspi.h>
#endif
#pragma endregion
