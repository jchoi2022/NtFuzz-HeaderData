       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ws2tcpip.h>
#include <wspiapi.h>
#endif
#pragma endregion
