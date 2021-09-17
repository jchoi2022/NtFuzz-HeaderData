#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
# error WcnApi.h is only available when targeting Windows 7 and higher
#include <WcnTypes.h>
#include <WcnDevice.h>
# include <WcnFunctionDiscoveryKeys.h>
#endif
#pragma endregion
