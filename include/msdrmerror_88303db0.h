       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
  #define E_DRM_INSUFFICIENT_BUFFER __HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)
#endif
#pragma endregion
