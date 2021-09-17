       
#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
BOOL
WINAPI
CeipIsOptedIn();
#endif
#pragma endregion
}
