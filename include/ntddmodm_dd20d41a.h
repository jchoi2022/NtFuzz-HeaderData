#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _MODEM_MESSAGE {
    ULONG TotalSize;
    ULONG Flags;
    ULONG SessionId;
    ULONG RequestId;
    ULONG Reserved[2];
} MODEM_MESSAGE, *PMODEM_MESSAGE;
DEFINE_GUID(GUID_DEVINTERFACE_MODEM, 0x2c7089aa, 0x2e0e, 0x11d1, 0xb1, 0x14, 0x00, 0xc0, 0x4f, 0xc2, 0xaa, 0xe4);
}
#endif
#pragma endregion
