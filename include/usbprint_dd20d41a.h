#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(GUID_DEVINTERFACE_USBPRINT, 0x28d78fad, 0x5a12, 0x11d1, 0xae, 0x5b, 0x0, 0x0, 0xf8, 0x3, 0xa8, 0xc2);
DEFINE_GUID(GUID_DEVINTERFACE_IPPUSB_PRINT, 0xf2f40381, 0xf46d, 0x4e51, 0xbc, 0xe7, 0x62, 0xde, 0x6c, 0xf2, 0xd0, 0x98);
                                                   USBPRINT_IOCTL_INDEX+12,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                   USBPRINT_IOCTL_INDEX+13,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                   USBPRINT_IOCTL_INDEX+14,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                   USBPRINT_IOCTL_INDEX+15,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                   USBPRINT_IOCTL_INDEX+16,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                   USBPRINT_IOCTL_INDEX+17,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                   USBPRINT_IOCTL_INDEX+18,\
                                                   METHOD_BUFFERED, \
                                                   FILE_ANY_ACCESS)
                                                      USBPRINT_IOCTL_INDEX+19,\
                                                      METHOD_BUFFERED, \
                                                      FILE_ANY_ACCESS)
                                                      USBPRINT_IOCTL_INDEX+20,\
                                                      METHOD_BUFFERED, \
                                                      FILE_ANY_ACCESS)
#endif
#pragma endregion
