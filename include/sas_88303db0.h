       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
VOID
WINAPI
SendSAS(
    _In_ BOOL AsUser );
}
#endif
#pragma endregion
