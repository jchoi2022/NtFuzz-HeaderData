extern "C" {
typedef struct _PCMCIA_SOCKET_REQUEST {
   USHORT Socket;
} PCMCIA_SOCKET_REQUEST, *PPCMCIA_SOCKET_REQUEST;
typedef struct _TUPLE_REQUEST {
   USHORT Socket;
} TUPLE_REQUEST, *PTUPLE_REQUEST;
typedef enum _PCMCIA_CONTROLLER_CLASS {
   PcmciaInvalidControllerClass = -1,
   PcmciaIntelCompatible,
   PcmciaCardBusCompatible,
   PcmciaElcController,
   PcmciaDatabook,
   PcmciaPciPcmciaBridge,
   PcmciaCirrusLogic,
   PcmciaTI,
   PcmciaTopic,
   PcmciaRicoh,
   PcmciaDatabookCB,
   PcmciaOpti,
   PcmciaTrid,
   PcmciaO2Micro,
   PcmciaNEC,
   PcmciaNEC_98
} PCMCIA_CONTROLLER_CLASS, *PPCMCIA_CONTROLLER_CLASS;
typedef struct _PCMCIA_SOCKET_INFORMATION {
   USHORT Socket;
   USHORT TupleCrc;
   UCHAR Manufacturer[MANUFACTURER_NAME_LENGTH];
   UCHAR Identifier[DEVICE_IDENTIFIER_LENGTH];
   UCHAR DriverName[DRIVER_NAME_LENGTH];
   UCHAR DeviceFunctionId;
   UCHAR Reserved;
   UCHAR CardInSocket;
   UCHAR CardEnabled;
   ULONG ControllerType;
} PCMCIA_SOCKET_INFORMATION, *PPCMCIA_SOCKET_INFORMATION;
DEFINE_GUID( GUID_PCMCIA_INTERFACE_STANDARD, 0xbed5dadfL, 0x38fb, 0x11d1, 0x94, 0x62, 0x00, 0xc0, 0x4f, 0xb9, 0x60, 0xee);
typedef
_Function_class_(PCMCIA_MODIFY_MEMORY_WINDOW)
BOOLEAN
PCMCIA_MODIFY_MEMORY_WINDOW(
    _In_opt_ PVOID Context,
    _In_ ULONGLONG HostBase,
    _In_ ULONGLONG CardBase,
    _In_ BOOLEAN Enable,
    _In_opt_ ULONG WindowSize,
    _In_opt_ UCHAR AccessSpeed,
    _In_opt_ UCHAR BusWidth,
    _In_opt_ BOOLEAN IsAttributeMemory
    );
typedef PCMCIA_MODIFY_MEMORY_WINDOW *PPCMCIA_MODIFY_MEMORY_WINDOW;
typedef
_Function_class_(PCMCIA_SET_VPP)
BOOLEAN
PCMCIA_SET_VPP(
    _In_opt_ PVOID Context,
    _In_ UCHAR VppLevel
    );
typedef PCMCIA_SET_VPP *PPCMCIA_SET_VPP;
typedef
_Function_class_(PCMCIA_IS_WRITE_PROTECTED)
BOOLEAN
PCMCIA_IS_WRITE_PROTECTED(
    _In_opt_ PVOID Context
    );
typedef PCMCIA_IS_WRITE_PROTECTED *PPCMCIA_IS_WRITE_PROTECTED;
typedef struct _PCMCIA_INTERFACE_STANDARD {
   USHORT Size;
   USHORT Version;
   PINTERFACE_REFERENCE InterfaceReference;
   PINTERFACE_DEREFERENCE InterfaceDereference;
   PVOID Context;
   PPCMCIA_MODIFY_MEMORY_WINDOW ModifyMemoryWindow;
   PPCMCIA_SET_VPP SetVpp;
   PPCMCIA_IS_WRITE_PROTECTED IsWriteProtected;
} PCMCIA_INTERFACE_STANDARD, *PPCMCIA_INTERFACE_STANDARD;
typedef
_Function_class_(PCMCIA_READ_CONFIG)
ULONG
PCMCIA_READ_CONFIG(
    _In_opt_ PVOID Context,
    _In_ ULONG WhichSpace,
    _Out_writes_bytes_all_(Length) PUCHAR Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef PCMCIA_READ_CONFIG *PPCMCIA_READ_CONFIG;
typedef
_Function_class_(PCMCIA_WRITE_CONFIG)
ULONG
PCMCIA_WRITE_CONFIG(
    _In_opt_ PVOID Context,
    _In_ ULONG WhichSpace,
    _In_reads_bytes_(Length) PUCHAR Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef PCMCIA_WRITE_CONFIG *PPCMCIA_WRITE_CONFIG;
typedef ULONG MEMORY_SPACE;
typedef struct _PCMCIA_BUS_INTERFACE_STANDARD {
   USHORT Size;
   USHORT Version;
   PVOID Context;
   PINTERFACE_REFERENCE InterfaceReference;
   PINTERFACE_DEREFERENCE InterfaceDereference;
   PPCMCIA_READ_CONFIG ReadConfig;
   PPCMCIA_WRITE_CONFIG WriteConfig;
} PCMCIA_BUS_INTERFACE_STANDARD, *PPCMCIA_BUS_INTERFACE_STANDARD;
}
