    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _UCX_CONTROLLER_PARENT_BUS_TYPE {
    UcxControllerParentBusTypeCustom = 0,
    UcxControllerParentBusTypePci,
    UcxControllerParentBusTypeAcpi,
    UcxControllerParentBusTypeMaUsb,
} UCX_CONTROLLER_PARENT_BUS_TYPE;
typedef enum _UCX_CONTROLLER_STATE {
    UcxControllerStateLost = 0,
    UcxControllerStatePreserved,
} UCX_CONTROLLER_STATE;
DEFINE_GUID(GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL,
    0x09b76d52, 0x0a6d, 0x4e4f, 0xa9, 0x11, 0xd0, 0x36, 0xd1, 0x92, 0x94, 0x97);
typedef
_Function_class_(EVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY)
_IRQL_requires_same_
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY(
    __in
    UCXCONTROLLER UcxController,
    __in
    PGUID CapabilityType,
    __in
    ULONG OutputBufferLength,
    __out_bcount_opt(OutputBufferLength)
    PVOID OutputBuffer,
    __out
    PULONG ResultLength
    );
typedef EVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY *PFN_UCX_CONTROLLER_QUERY_USB_CAPABILITY;
typedef
_Function_class_(EVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER)
_IRQL_requires_same_
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER(
    __in
    UCXCONTROLLER UcxController,
    __out
    PULONG FrameNumber
    );
typedef EVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER *PFN_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER;
typedef struct _UCXUSBDEVICE_INFO *PUCXUSBDEVICE_INFO;
typedef
_Function_class_(EVT_UCX_CONTROLLER_USBDEVICE_ADD)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_USBDEVICE_ADD(
    __in
    UCXCONTROLLER UcxController,
    __in
    PUCXUSBDEVICE_INFO UcxUsbDeviceInfo,
    __in
    PUCXUSBDEVICE_INIT UsbDeviceInit
    );
typedef EVT_UCX_CONTROLLER_USBDEVICE_ADD *PFN_UCX_CONTROLLER_USBDEVICE_ADD;
typedef
_Function_class_(EVT_UCX_CONTROLLER_RESET)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_CONTROLLER_RESET(
    __in
    UCXCONTROLLER UcxController
    );
typedef EVT_UCX_CONTROLLER_RESET *PFN_UCX_CONTROLLER_RESET;
typedef struct _UCX_CONTROLLER_PCI_INFORMATION {
    ULONG VendorId;
    ULONG DeviceId;
    USHORT RevisionId;
    ULONG BusNumber;
    ULONG DeviceNumber;
    ULONG FunctionNumber;
} UCX_CONTROLLER_PCI_INFORMATION, *PUCX_CONTROLLER_PCI_INFORMATION;
typedef struct _UCX_CONTROLLER_ACPI_INFORMATION {
    CHAR VendorId[MAX_VENDOR_ID_STRING_LENGTH];
    CHAR DeviceId[MAX_DEVICE_ID_STRING_LENGTH];
    CHAR RevisionId[MAX_REVISION_ID_STRING_LENGTH];
} UCX_CONTROLLER_ACPI_INFORMATION, *PUCX_CONTROLLER_ACPI_INFORMATION;
typedef union _UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS_CHANGE_FLAGS {
    ULONG AsUlong32;
    struct {
        ULONG CurrentRoundtripLatencyChanged:1;
        ULONG CurrentTotalBandwidthChanged:1;
    } Flags;
} UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS_CHANGE_FLAGS;
typedef struct _UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS {
    ULONG TransportCharacteristicsFlags;
    ULONG64 CurrentRoundtripLatencyInMilliSeconds;
    ULONG64 MaxPotentialBandwidth;
} UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS, *PUCX_CONTROLLER_TRANSPORT_CHARACTERISTICS;
typedef
_Function_class_(EVT_UCX_CONTROLLER_GET_TRANSPORT_CHARACTERISTICS)
_IRQL_requires_same_
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_GET_TRANSPORT_CHARACTERISTICS(
    __in
    UCXCONTROLLER UcxController,
    __out
    PUCX_CONTROLLER_TRANSPORT_CHARACTERISTICS
                                UcxControllerTransportCharacteristics
    );
typedef EVT_UCX_CONTROLLER_GET_TRANSPORT_CHARACTERISTICS *PFN_UCX_CONTROLLER_GET_TRANSPORT_CHARACTERISTICS;
typedef
_Function_class_(EVT_UCX_CONTROLLER_SET_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_CONTROLLER_SET_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS_CHANGE_FLAGS
                                ChangeNotificationFlags
    );
typedef EVT_UCX_CONTROLLER_SET_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION *PFN_UCX_CONTROLLER_SET_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION;
typedef
_Function_class_(EVT_UCX_CONTROLLER_START_TRACKING_FOR_TIME_SYNC)
_IRQL_requires_same_
__drv_maxIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_CONTROLLER_START_TRACKING_FOR_TIME_SYNC(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST WdfRequest,
    __in
    size_t OutputBufferLength,
    __in
    size_t InputBufferLength
    );
typedef EVT_UCX_CONTROLLER_START_TRACKING_FOR_TIME_SYNC *PFN_UCX_CONTROLLER_START_TRACKING_FOR_TIME_SYNC;
typedef
_Function_class_(EVT_UCX_CONTROLLER_STOP_TRACKING_FOR_TIME_SYNC)
_IRQL_requires_same_
__drv_maxIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_CONTROLLER_STOP_TRACKING_FOR_TIME_SYNC(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST WdfRequest,
    __in
    size_t OutputBufferLength,
    __in
    size_t InputBufferLength
    );
typedef EVT_UCX_CONTROLLER_STOP_TRACKING_FOR_TIME_SYNC *PFN_UCX_CONTROLLER_STOP_TRACKING_FOR_TIME_SYNC;
typedef
_Function_class_(EVT_UCX_CONTROLLER_GET_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_CONTROLLER_GET_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST WdfRequest,
    __in
    size_t OutputBufferLength,
    __in
    size_t InputBufferLength
    );
typedef EVT_UCX_CONTROLLER_GET_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC *PFN_UCX_CONTROLLER_GET_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC;
typedef struct _UCX_CONTROLLER_CONFIG {
    ULONG Size;
    ULONG NumberOfPresentedDeviceMgmtEvtCallbacks;
    PFN_UCX_CONTROLLER_QUERY_USB_CAPABILITY EvtControllerQueryUsbCapability;
    HANDLE Reserved1;
    PFN_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER EvtControllerGetCurrentFrameNumber;
    PFN_UCX_CONTROLLER_USBDEVICE_ADD EvtControllerUsbDeviceAdd;
    PFN_UCX_CONTROLLER_RESET EvtControllerReset;
    HANDLE Reserved2;
    HANDLE Reserved3;
    HANDLE Reserved4;
    UCX_CONTROLLER_PARENT_BUS_TYPE ParentBusType;
    UCX_CONTROLLER_PCI_INFORMATION PciDeviceInfo;
    UCX_CONTROLLER_ACPI_INFORMATION AcpiDeviceInfo;
    UCHAR DeviceDescription[MAX_GENERIC_USB_CONTROLLER_NAME_SIZE];
    UNICODE_STRING ManufacturerNameString;
    UNICODE_STRING ModelNameString;
    UNICODE_STRING ModelNumberString;
    PFN_UCX_CONTROLLER_GET_TRANSPORT_CHARACTERISTICS
                                                   EvtControllerGetTransportCharacteristics;
    PFN_UCX_CONTROLLER_SET_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION
                                                   EvtControllerSetTransportCharacteristicsChangeNotification;
    HANDLE Reserved5;
    HANDLE Reserved6;
    HANDLE Reserved7;
} UCX_CONTROLLER_CONFIG, *PUCX_CONTROLLER_CONFIG;
__drv_at(Config->Size, __drv_out (__range(!=,0)))
__drv_at(Config->EvtControllerQueryUsbCapability, __drv_out (__null))
__drv_at(Config->EvtControllerGetCurrentFrameNumber, __drv_out (__null))
__drv_at(Config->EvtControllerUsbDeviceAdd, __drv_out (__null))
__drv_at(Config->EvtControllerReset, __drv_out (__null))
__drv_at(Config->Reserved1, __drv_out (__null))
__drv_at(Config->Reserved2, __drv_out (__null))
__drv_at(Config->Reserved3, __drv_out (__null))
__drv_at(Config->Reserved4, __drv_out (__null))
__drv_at(Config->EvtControllerGetTransportCharacteristics, __drv_out (__null))
__drv_at(Config->EvtControllerSetTransportCharacteristicsChangeNotification, __drv_out (__null))
VOID
FORCEINLINE
UCX_CONTROLLER_CONFIG_INIT(
    __out
        PUCX_CONTROLLER_CONFIG Config,
    __in
        LPCSTR DeviceDescription
    )
{
    RtlZeroMemory(Config, sizeof(UCX_CONTROLLER_CONFIG));
    Config->Size = sizeof(UCX_CONTROLLER_CONFIG);
    Config->NumberOfPresentedDeviceMgmtEvtCallbacks = (ULONG)-1;
    Config->ParentBusType = UcxControllerParentBusTypeCustom;
    Config->AcpiDeviceInfo.VendorId[0] = ANSI_NULL;
    Config->AcpiDeviceInfo.DeviceId[0] = ANSI_NULL;
    Config->AcpiDeviceInfo.RevisionId[0] = ANSI_NULL;
    Config->PciDeviceInfo.VendorId = LONG_MAX;
    Config->PciDeviceInfo.DeviceId = LONG_MAX;
    Config->PciDeviceInfo.RevisionId = 0;
    Config->PciDeviceInfo.BusNumber = 0;
    Config->PciDeviceInfo.DeviceNumber = 0;
    Config->PciDeviceInfo.FunctionNumber = 0;
    (VOID) RtlStringCbCopyA((LPSTR)Config->DeviceDescription,
                            sizeof(Config->DeviceDescription),
                            DeviceDescription);
    __assume(Config->EvtControllerQueryUsbCapability == NULL);
    __assume(Config->EvtControllerGetCurrentFrameNumber == NULL);
    __assume(Config->EvtControllerUsbDeviceAdd == NULL);
    __assume(Config->EvtControllerReset == NULL);
    __assume(Config->Reserved1 == NULL);
    __assume(Config->Reserved2 == NULL);
    __assume(Config->Reserved3 == NULL);
    __assume(Config->Reserved4 == NULL);
    __assume(Config->EvtControllerGetTransportCharacteristics == NULL);
    __assume(Config->EvtControllerSetTransportCharacteristicsChangeNotification == NULL);
}
VOID
FORCEINLINE
UCX_CONTROLLER_CONFIG_SET_PCI_INFO(
    __in
        PUCX_CONTROLLER_CONFIG Config,
    __in
        ULONG VendorId,
    __in
        ULONG DeviceId,
    __in
        USHORT RevisionId,
    __in
        ULONG BusNumber,
    __in
        ULONG DeviceNumber,
    __in
        ULONG FunctionNumber
    )
{
    Config->ParentBusType = UcxControllerParentBusTypePci;
    Config->PciDeviceInfo.VendorId = VendorId;
    Config->PciDeviceInfo.DeviceId = DeviceId;
    Config->PciDeviceInfo.RevisionId = RevisionId;
    Config->PciDeviceInfo.BusNumber = BusNumber;
    Config->PciDeviceInfo.DeviceNumber = DeviceNumber;
    Config->PciDeviceInfo.FunctionNumber = FunctionNumber;
}
VOID
FORCEINLINE
UCX_CONTROLLER_CONFIG_SET_ACPI_INFO(
    __in
        PUCX_CONTROLLER_CONFIG Config,
    __in_ecount(MAX_VENDOR_ID_STRING_LENGTH)
        PSTR VendorId,
    __in_ecount(MAX_DEVICE_ID_STRING_LENGTH)
        PSTR DeviceId,
    __in_ecount(MAX_REVISION_ID_STRING_LENGTH)
        PSTR RevisionId
    )
{
    Config->ParentBusType = UcxControllerParentBusTypeAcpi;
    RtlStringCchCopyA(Config->AcpiDeviceInfo.VendorId, MAX_VENDOR_ID_STRING_LENGTH, VendorId);
    RtlStringCchCopyA(Config->AcpiDeviceInfo.DeviceId, MAX_DEVICE_ID_STRING_LENGTH, DeviceId);
    RtlStringCchCopyA(Config->AcpiDeviceInfo.RevisionId, MAX_REVISION_ID_STRING_LENGTH, RevisionId);
}
typedef struct _UCX_CONTROLLER_RESET_COMPLETE_INFO {
    ULONG Size;
    UCX_CONTROLLER_STATE UcxControllerState;
    BOOLEAN UcxCoordinated;
} UCX_CONTROLLER_RESET_COMPLETE_INFO, *PUCX_CONTROLLER_RESET_COMPLETE_INFO;
FORCEINLINE
VOID
UCX_CONTROLLER_RESET_COMPLETE_INFO_INIT(
    __out
        PUCX_CONTROLLER_RESET_COMPLETE_INFO UcxControllerResetCompleteInfo,
    __in
        UCX_CONTROLLER_STATE UcxControllerState,
    __in
        BOOLEAN UcxCoordinated
    )
{
    RtlZeroMemory(UcxControllerResetCompleteInfo, sizeof(UCX_CONTROLLER_RESET_COMPLETE_INFO));
    UcxControllerResetCompleteInfo->Size = sizeof(UCX_CONTROLLER_RESET_COMPLETE_INFO);
    UcxControllerResetCompleteInfo->UcxControllerState = UcxControllerState;
    UcxControllerResetCompleteInfo->UcxCoordinated = UcxCoordinated;
}
typedef PFN_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER PEVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER;
typedef PFN_UCX_CONTROLLER_QUERY_USB_CAPABILITY PEVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY;
typedef PFN_UCX_CONTROLLER_RESET PEVT_UCX_CONTROLLER_RESET;
typedef PFN_UCX_CONTROLLER_USBDEVICE_ADD PEVT_UCX_CONTROLLER_USBDEVICE_ADD;
typedef
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
BOOLEAN
(*PFN_UCXIODEVICECONTROL)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    WDFDEVICE Device,
    __in
    WDFREQUEST Request,
    __in
    size_t OutputBufferLength,
    __in
    size_t InputBufferLength,
    __in
    ULONG IoControlCode
    );
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
FORCEINLINE
UcxIoDeviceControl(
    __in
    WDFDEVICE Device,
    __in
    WDFREQUEST Request,
    __in
    size_t OutputBufferLength,
    __in
    size_t InputBufferLength,
    __in
    ULONG IoControlCode
    )
{
    return ((PFN_UCXIODEVICECONTROL) UcxFunctions[UcxIoDeviceControlTableIndex])(UcxDriverGlobals, Device, Request, OutputBufferLength, InputBufferLength, IoControlCode);
}
typedef
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
__drv_at(Config->Size, __range(!=,0))
__drv_at(Config->EvtControllerUsbDeviceAdd, __notnull)
WDFAPI
NTSTATUS
(*PFN_UCXCONTROLLERCREATE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    WDFDEVICE Device,
    __in
    PUCX_CONTROLLER_CONFIG Config,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXCONTROLLER* Controller
    );
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
__drv_at(Config->Size, __range(!=,0))
__drv_at(Config->EvtControllerUsbDeviceAdd, __notnull)
NTSTATUS
FORCEINLINE
UcxControllerCreate(
    __in
    WDFDEVICE Device,
    __in
    PUCX_CONTROLLER_CONFIG Config,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXCONTROLLER* Controller
    )
{
    return ((PFN_UCXCONTROLLERCREATE) UcxFunctions[UcxControllerCreateTableIndex])(UcxDriverGlobals, Device, Config, Attributes, Controller);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXCONTROLLERNEEDSRESET)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXCONTROLLER Controller
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerNeedsReset(
    __in
    UCXCONTROLLER Controller
    )
{
    ((PFN_UCXCONTROLLERNEEDSRESET) UcxFunctions[UcxControllerNeedsResetTableIndex])(UcxDriverGlobals, Controller);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXCONTROLLERRESETCOMPLETE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXCONTROLLER Controller,
    __in
    PUCX_CONTROLLER_RESET_COMPLETE_INFO UcxControllerResetCompleteInfo
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerResetComplete(
    __in
    UCXCONTROLLER Controller,
    __in
    PUCX_CONTROLLER_RESET_COMPLETE_INFO UcxControllerResetCompleteInfo
    )
{
    ((PFN_UCXCONTROLLERRESETCOMPLETE) UcxFunctions[UcxControllerResetCompleteTableIndex])(UcxDriverGlobals, Controller, UcxControllerResetCompleteInfo);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXCONTROLLERSETFAILED)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXCONTROLLER Controller
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerSetFailed(
    __in
    UCXCONTROLLER Controller
    )
{
    ((PFN_UCXCONTROLLERSETFAILED) UcxFunctions[UcxControllerSetFailedTableIndex])(UcxDriverGlobals, Controller);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCXCONTROLLERSETIDSTRINGS)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXCONTROLLER Controller,
    __in
    PUNICODE_STRING ManufacturerNameString,
    __in
    PUNICODE_STRING ModelNameString,
    __in
    PUNICODE_STRING ModelNumberString
    );
__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
UcxControllerSetIdStrings(
    __in
    UCXCONTROLLER Controller,
    __in
    PUNICODE_STRING ManufacturerNameString,
    __in
    PUNICODE_STRING ModelNameString,
    __in
    PUNICODE_STRING ModelNumberString
    )
{
    return ((PFN_UCXCONTROLLERSETIDSTRINGS) UcxFunctions[UcxControllerSetIdStringsTableIndex])(UcxDriverGlobals, Controller, ManufacturerNameString, ModelNameString, ModelNumberString);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXCONTROLLERNOTIFYTRANSPORTCHARACTERISTICSCHANGE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXCONTROLLER Controller,
    __in
    PUCX_CONTROLLER_TRANSPORT_CHARACTERISTICS UcxControllerTransportCharacteristics
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerNotifyTransportCharacteristicsChange(
    __in
    UCXCONTROLLER Controller,
    __in
    PUCX_CONTROLLER_TRANSPORT_CHARACTERISTICS UcxControllerTransportCharacteristics
    )
{
    ((PFN_UCXCONTROLLERNOTIFYTRANSPORTCHARACTERISTICSCHANGE) UcxFunctions[UcxControllerNotifyTransportCharacteristicsChangeTableIndex])(UcxDriverGlobals, Controller, UcxControllerTransportCharacteristics);
}
WDF_EXTERN_C_END
