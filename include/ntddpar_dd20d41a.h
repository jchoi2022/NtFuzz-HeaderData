DEFINE_GUID(GUID_DEVINTERFACE_PARALLEL, 0x97F76EF0, 0xF883, 0x11D0, 0xAF, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x84, 0x5C);
DEFINE_GUID(GUID_DEVINTERFACE_PARCLASS, 0x811FC6A5, 0xF728, 0x11D0, 0xA5, 0x37, 0x00, 0x00, 0xF8, 0x75, 0x3E, 0xD1);
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef struct _PAR_QUERY_INFORMATION{
       UCHAR Status;
} PAR_QUERY_INFORMATION, *PPAR_QUERY_INFORMATION;
typedef struct _PAR_SET_INFORMATION{
       UCHAR Init;
} PAR_SET_INFORMATION, *PPAR_SET_INFORMATION;
typedef struct _PAR_DEVICE_ID_SIZE_INFORMATION {
    ULONG DeviceIdSize;
} PAR_DEVICE_ID_SIZE_INFORMATION, *PPAR_DEVICE_ID_SIZE_INFORMATION;
typedef struct _PARCLASS_NEGOTIATION_MASK {
 USHORT usReadMask;
 USHORT usWriteMask;
} PARCLASS_NEGOTIATION_MASK, *PPARCLASS_NEGOTIATION_MASK;
}
#endif
#pragma endregion
