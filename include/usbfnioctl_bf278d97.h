       
typedef struct _USBFN_POWER_FILTER_STATE {
    USBFN_DEVICE_STATE DeviceState;
#pragma warning(push)
#pragma warning(disable:4201)
    union
    {
        ULONG PState;
        ULONG Reserved;
    };
#pragma warning(pop)
} USBFN_POWER_FILTER_STATE, *PUSBFN_POWER_FILTER_STATE;
DEFINE_GUID(USBFN_CLX_DEVICE_INTERFACE,
0XCEC7D47F, 0XA1E1, 0X4607, 0XA6, 0X93, 0X9A, 0X0, 0X61, 0X46, 0X5D, 0XB7);
DEFINE_GUID(USBFN_FILTER_INTERFACE_CONTROLLER_RESET,
0xe5680f62, 0x3d02, 0x4112, 0xad, 0xe6, 0x79, 0x63, 0x71, 0x08, 0x0c, 0xf7);
                                                                    0x03, \
                                                                    METHOD_IN_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x04, \
                                                                    METHOD_IN_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x05, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x06, \
                                                                    METHOD_BUFFERED, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x07, \
                                                                    METHOD_BUFFERED, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x08, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x09, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x0A, \
                                                                    METHOD_IN_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x0B, \
                                                                    METHOD_BUFFERED, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x0C, \
                                                                    METHOD_BUFFERED, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x0D, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x0E, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x0F, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x10, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x11, \
                                                                    METHOD_OUT_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x12, \
                                                                    METHOD_IN_DIRECT, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x42, \
                                                                    METHOD_BUFFERED, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
                                                                    0x43, \
                                                                    METHOD_BUFFERED, \
                                                                    FILE_READ_DATA | \
                                                                    FILE_WRITE_DATA)
