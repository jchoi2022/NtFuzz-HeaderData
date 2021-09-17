       
extern "C"
{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
HRESULT WINAPI SetSocketMediaStreamingMode(_In_ BOOL value);
#endif
#pragma endregion
}
