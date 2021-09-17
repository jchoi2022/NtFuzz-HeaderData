       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef ULONG OFFSET;
typedef struct _FLAT_STRING {
    SHORT MaximumLength;
    SHORT Length;
    char Buffer [1];
} FLAT_STRING, *PFLAT_STRING;
typedef struct _NETWORK_NAME {
    FLAT_STRING Name;
} NETWORK_NAME, *PNETWORK_NAME;
typedef struct _HARDWARE_ADDRESS {
    UCHAR Address [HARDWARE_ADDRESS_LENGTH];
} HARDWARE_ADDRESS, *PHARDWARE_ADDRESS;
#endif
#pragma endregion
