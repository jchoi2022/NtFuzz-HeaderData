#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    #define OUR_GUID_ENTRY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
    DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
OUR_GUID_ENTRY(MSTapeDeviceGUID,
0x8C0F6AF2, 0x0EDB, 0x44c1, 0x8A, 0xEB, 0x59, 0x04, 0x0B, 0xD8, 0x30, 0xED)
#endif
#pragma endregion
