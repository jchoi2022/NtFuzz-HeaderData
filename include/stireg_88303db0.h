#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <devpropdef.h>
DEFINE_DEVPROPKEY(DEVPKEY_WIA_DeviceType, 0x6bdd1fc6, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f, 2);
#endif
#pragma endregion
