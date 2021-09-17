#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
   #define POLARITY __declspec( dllexport )
#endif
#pragma endregion
