#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEFINE_GUID(GUID_DEVINTERFACE_USB_HUB, 0xf18a0e88, 0xc30c, 0x11d0, 0x88, 0x15, 0x00, \
             0xa0, 0xc9, 0x06, 0xbe, 0xd8);
DEFINE_GUID(GUID_DEVINTERFACE_USB_BILLBOARD, 0x5e9adaef, 0xf879, 0x473f, 0xb8, 0x07, 0x4e, \
            0x5e, 0xa7, 0x7d, 0x1b, 0x1c);
DEFINE_GUID(GUID_DEVINTERFACE_USB_DEVICE, 0xA5DCBF10L, 0x6530, 0x11D2, 0x90, 0x1F, 0x00, \
             0xC0, 0x4F, 0xB9, 0x51, 0xED);
DEFINE_GUID(GUID_DEVINTERFACE_USB_HOST_CONTROLLER, 0x3abf6f2d, 0x71c4, 0x462a, 0x8a, 0x92, 0x1e, \
             0x68, 0x61, 0xe6, 0xaf, 0x27);
DEFINE_GUID(GUID_USB_WMI_STD_DATA, 0x4E623B20L, 0xCB14, 0x11D1, 0xB3, 0x31, 0x00,\
             0xA0, 0xC9, 0x59, 0xBB, 0xD2);
DEFINE_GUID(GUID_USB_WMI_STD_NOTIFICATION, 0x4E623B20L, 0xCB14, 0x11D1, 0xB3, 0x31, 0x00,\
             0xA0, 0xC9, 0x59, 0xBB, 0xD2);
DEFINE_GUID(GUID_USB_WMI_DEVICE_PERF_INFO, 0x66c1aa3c, 0x499f, 0x49a0, 0xa9, 0xa5, 0x61, 0xe2,\
             0x35, 0x9f, 0x64, 0x7);
DEFINE_GUID(GUID_USB_WMI_NODE_INFO,
0x9c179357, 0xdc7a, 0x4f41, 0xb6, 0x6b, 0x32, 0x3b, 0x9d, 0xdc, 0xb5, 0xb1);
DEFINE_GUID(GUID_USB_WMI_TRACING,
0x3a61881b, 0xb4e6, 0x4bf9, 0xae, 0xf, 0x3c, 0xd8, 0xf3, 0x94, 0xe5, 0x2f);
DEFINE_GUID(GUID_USB_TRANSFER_TRACING,
0x681eb8aa, 0x403d, 0x452c, 0x9f, 0x8a, 0xf0, 0x61, 0x6f, 0xac, 0x95, 0x40);
DEFINE_GUID(GUID_USB_PERFORMANCE_TRACING,
0xd5de77a6, 0x6ae9, 0x425c, 0xb1, 0xe2, 0xf5, 0x61, 0x5f, 0xd3, 0x48, 0xa9);
DEFINE_GUID(GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION,
0x9bbbf831, 0xa2f2, 0x43b4, 0x96, 0xd1, 0x86, 0x94, 0x4b, 0x59, 0x14, 0xb3);
                                      (id), \
                                      METHOD_BUFFERED, \
                                      FILE_ANY_ACCESS)
                                      (id), \
                                      METHOD_NEITHER, \
                                      FILE_ANY_ACCESS)
                                      (id), \
                                      METHOD_BUFFERED, \
                                      FILE_ANY_ACCESS)
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
(*USB_IDLE_CALLBACK)(
    _In_ PVOID Context
    );
typedef struct _USB_IDLE_CALLBACK_INFO {
    USB_IDLE_CALLBACK IdleCallback;
    PVOID IdleContext;
} USB_IDLE_CALLBACK_INFO, *PUSB_IDLE_CALLBACK_INFO;
#endif
#pragma endregion
