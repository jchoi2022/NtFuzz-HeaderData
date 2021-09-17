#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
DEFINE_GUID( GUID_DEVINTERFACE_MOUSE, 0x378de44c, 0x56ef, 0x11d1,
             0xbc, 0x8c, 0x00, 0xa0, 0xc9, 0x14, 0x05, 0xdd );
typedef struct _MOUSE_INPUT_DATA {
    USHORT UnitId;
    USHORT Flags;
    union {
        ULONG Buttons;
        struct {
            USHORT ButtonFlags;
            USHORT ButtonData;
        };
    };
    ULONG RawButtons;
    LONG LastX;
    LONG LastY;
    ULONG ExtraInformation;
} MOUSE_INPUT_DATA, *PMOUSE_INPUT_DATA;
typedef struct _MOUSE_ATTRIBUTES {
    USHORT MouseIdentifier;
    USHORT NumberOfButtons;
    USHORT SampleRate;
    ULONG InputDataQueueLength;
} MOUSE_ATTRIBUTES, *PMOUSE_ATTRIBUTES;
typedef struct _MOUSE_UNIT_ID_PARAMETER {
    USHORT UnitId;
} MOUSE_UNIT_ID_PARAMETER, *PMOUSE_UNIT_ID_PARAMETER;
}
#endif
#pragma endregion
