#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(
    SENSGUID_PUBLISHER,
    0x5fee1bd6,
    0x5b9b,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
DEFINE_GUID(
    SENSGUID_SUBSCRIBER_LCE,
    0xd3938ab0,
    0x5b9d,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
DEFINE_GUID(
    SENSGUID_SUBSCRIBER_WININET,
    0xd3938ab5,
    0x5b9d,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
DEFINE_GUID(
    SENSGUID_EVENTCLASS_NETWORK,
    0xd5978620,
    0x5b9f,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
DEFINE_GUID(
    SENSGUID_EVENTCLASS_LOGON,
    0xd5978630,
    0x5b9f,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
DEFINE_GUID(
    SENSGUID_EVENTCLASS_ONNOW,
    0xd5978640,
    0x5b9f,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
DEFINE_GUID(
    SENSGUID_EVENTCLASS_LOGON2,
    0xd5978650,
    0x5b9f,
    0x11d1,
    0x8d, 0xd2, 0x00, 0xaa, 0x00, 0x4a, 0xbd, 0x5e
);
#endif
#pragma endregion
