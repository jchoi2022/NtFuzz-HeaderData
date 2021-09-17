#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
DEFINE_GUID(GUID_DEVINTERFACE_NFP, 0xFB3842CD, 0x9E2A, 0x4F83, 0x8F, 0xCC, 0x4B, 0x07, 0x61, 0x13, 0x9A, 0xE9);
DEFINE_DEVPROPKEY(DEVPKEY_NFP_Capabilities, 0xFB3842CD, 0x9E2A, 0x4F83, 0x8F, 0xCC, 0x4B, 0x07, 0x61, 0x13, 0x9A, 0xE9, 2);
typedef struct _SUBSCRIBED_MESSAGE
{
    DWORD cbPayloadHint;
    BYTE payload[1];
} SUBSCRIBED_MESSAGE;
#endif
#pragma endregion
