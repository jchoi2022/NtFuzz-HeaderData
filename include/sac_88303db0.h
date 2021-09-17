#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD HMAC;
typedef struct __MACINFO
{
 BOOL fUsed;
 BYTE abMacState[36];
} MACINFO;
#endif
#pragma endregion
