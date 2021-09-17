#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
                                                FILE_DEVICE_UNKNOWN, \
                                                0x100, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS \
                                                )
typedef struct _IEEE1394_VDEV_PNP_REQUEST{
    ULONG fulFlags;
    ULONG Reserved;
    ULARGE_INTEGER InstanceId;
    UCHAR DeviceId;
} IEEE1394_VDEV_PNP_REQUEST,*PIEEE1394_VDEV_PNP_REQUEST;
typedef struct _IEEE1394_API_REQUEST {
    ULONG RequestNumber;
    ULONG Flags;
    union {
        IEEE1394_VDEV_PNP_REQUEST AddVirtualDevice;
        IEEE1394_VDEV_PNP_REQUEST RemoveVirtualDevice;
    } u;
} IEEE1394_API_REQUEST, *PIEEE1394_API_REQUEST;
}
#endif
#pragma endregion
