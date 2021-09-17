#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#error KSMEDIA.H must be included before BDAMEDIA.H
#error BDAMEDIA.H must be included before ATSCMEDIA.H
    0x71985f51, 0x1ca1, 0x11d3, 0x9c, 0xc8, 0x0, 0xc0, 0x4f, 0x79, 0x71, 0xe0
DEFINE_GUIDSTRUCT("71985F51-1CA1-11d3-9CC8-00C04F7971E0", BDANETWORKTYPE_ATSC);
#endif
#pragma endregion
