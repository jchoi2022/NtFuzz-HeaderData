       
#include <initguid.h>
DEFINE_GUID(GUID_DEVINTERFACE_HPMI, 0xdedae202, 0x1d20, 0x4c40, 0xa6, 0xf3, 0x18, 0x97, 0xe3, 0x19, 0xd5, 0x4f);
typedef enum _HPMI_HINT_BOOL {
    HpmiBoolUnavailable = 0,
    HpmiBoolFalse,
    HpmiBoolTrue,
    HpmiBoolMax
} HPMI_HINT_BOOL, *PHPMI_HINT_BOOL;
typedef struct _HPMI_QUERY_CAPABILITIES {
    ULONG Version;
} HPMI_QUERY_CAPABILITIES, *PHPMI_QUERY_CAPABILITIES;
typedef struct _HPMI_QUERY_CAPABILITIES_RESPONSE {
    ULONG Version;
    ULONG RequestService;
    ULONG SdbCapabilities;
} HPMI_QUERY_CAPABILITIES_RESPONSE, *PHPMI_QUERY_CAPABILITIES_RESPONSE;
typedef struct _HPMI_BATTERY_UTILIZATION_HINT {
    ULONG Version;
    HPMI_HINT_BOOL PreserveNonHotSwappableBatteries;
} HPMI_BATTERY_UTILIZATION_HINT, *PHPMI_BATTERY_UTILIZATION_HINT;
