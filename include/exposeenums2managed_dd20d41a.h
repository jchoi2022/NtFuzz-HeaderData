#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#error "you can only generate managed enums when compiling managed code"
#endif
#pragma endregion
