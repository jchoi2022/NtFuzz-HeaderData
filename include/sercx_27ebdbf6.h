#error Include WDF.H first
       
WDF_EXTERN_C_START
typedef VOID (*SERFUNC) (VOID);
extern SERFUNC SerFunctions [];
typedef struct _WDF_DRIVER_GLOBALS SER_DRIVER_GLOBALS, *PSER_DRIVER_GLOBALS;
#include "serfuncenum.h"
typedef enum _SERCX_STATUS {
    SerCxStatusSuccess = STATUS_SUCCESS,
    SerCxStatusCancelled = STATUS_CANCELLED,
    SerCxStatusTimeout = STATUS_TIMEOUT,
} SERCX_STATUS, *PSERCX_STATUS;
typedef
_Function_class_(EVT_SERCX_FILEOPEN)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_FILEOPEN(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX_FILEOPEN *PFN_SERCX_FILEOPEN;
typedef
_Function_class_(EVT_SERCX_FILECLOSE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX_FILECLOSE(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX_FILECLOSE *PFN_SERCX_FILECLOSE;
typedef
_Function_class_(EVT_SERCX_FILECLEANUP)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX_FILECLEANUP(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX_FILECLEANUP *PFN_SERCX_FILECLEANUP;
typedef
_Function_class_(EVT_SERCX_TRANSMIT)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_TRANSMIT(
    _In_
    WDFDEVICE Device,
    _In_
    size_t Length
    );
typedef EVT_SERCX_TRANSMIT *PFN_SERCX_TRANSMIT;
typedef
_Function_class_(EVT_SERCX_RECEIVE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_RECEIVE(
    _In_
    WDFDEVICE Device,
    _In_
    size_t Length
    );
typedef EVT_SERCX_RECEIVE *PFN_SERCX_RECEIVE;
typedef
_Function_class_(EVT_SERCX_WAITMASK)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_WAITMASK(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX_WAITMASK *PFN_SERCX_WAITMASK;
typedef
_Function_class_(EVT_SERCX_PURGE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_PURGE(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG PurgeMask
    );
typedef EVT_SERCX_PURGE *PFN_SERCX_PURGE;
typedef
_Function_class_(EVT_SERCX_CONTROL)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_CONTROL(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request,
    _In_
    size_t OutputBufferLength,
    _In_
    size_t InputBufferLength,
    _In_
    ULONG IoControlCode
    );
typedef EVT_SERCX_CONTROL *PFN_SERCX_CONTROL;
typedef
_Function_class_(EVT_SERCX_TRANSMIT_CANCEL)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX_TRANSMIT_CANCEL(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX_TRANSMIT_CANCEL *PFN_SERCX_TRANSMIT_CANCEL;
typedef
_Function_class_(EVT_SERCX_RECEIVE_CANCEL)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX_RECEIVE_CANCEL(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX_RECEIVE_CANCEL *PFN_SERCX_RECEIVE_CANCEL;
typedef
_Function_class_(EVT_SERCX_APPLY_CONFIG)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX_APPLY_CONFIG(
    _In_
    WDFDEVICE Device,
    _In_
    PVOID ConnectionParameters
    );
typedef EVT_SERCX_APPLY_CONFIG *PFN_SERCX_APPLY_CONFIG;
typedef struct _SERCX_ACTIVITY
{
    ULONG Size;
    BOOLEAN Transmitting;
    BOOLEAN Receiving;
}
SERCX_ACTIVITY, *PSERCX_ACTIVITY;
VOID FORCEINLINE
SERCX_ACTIVITY_INIT(
    _Out_ SERCX_ACTIVITY *Activity
    )
{
    Activity->Size = sizeof(SERCX_ACTIVITY);
    Activity->Transmitting = FALSE;
    Activity->Receiving = FALSE;
}
typedef struct SERCX_BUFFER_DESCRIPTOR
{
    USHORT Size;
    PUCHAR Buffer;
    ULONG Length;
}
SERCX_BUFFER_DESCRIPTOR, *PSERCX_BUFFER_DESCRIPTOR;
VOID FORCEINLINE
SERCX_BUFFER_DESCRIPTOR_INIT(
    _Out_ SERCX_BUFFER_DESCRIPTOR *Descriptor
    )
{
    Descriptor->Size = sizeof(SERCX_BUFFER_DESCRIPTOR);
    Descriptor->Buffer = NULL;
    Descriptor->Length = 0;
}
typedef struct _SERCX_CONFIG
{
    ULONG Size;
    WDF_TRI_STATE PowerManaged;
    PFN_SERCX_FILEOPEN EvtSerCxFileOpen;
    PFN_SERCX_FILECLOSE EvtSerCxFileClose;
    PFN_SERCX_FILECLEANUP EvtSerCxFileCleanup;
    PFN_SERCX_TRANSMIT EvtSerCxTransmit;
    PFN_SERCX_RECEIVE EvtSerCxReceive;
    PFN_SERCX_WAITMASK EvtSerCxWaitmask;
    PFN_SERCX_PURGE EvtSerCxPurge;
    PFN_SERCX_CONTROL EvtSerCxControl;
    PFN_SERCX_APPLY_CONFIG EvtSerCxApplyConfig;
    PFN_SERCX_TRANSMIT_CANCEL EvtSerCxTransmitCancel;
    PFN_SERCX_RECEIVE_CANCEL EvtSerCxReceiveCancel;
}
SERCX_CONFIG, *PSERCX_CONFIG;
VOID FORCEINLINE
SERCX_CONFIG_INIT(
    _Out_ SERCX_CONFIG *Config
    )
{
    Config->Size = sizeof(SERCX_CONFIG);
    Config->PowerManaged = WdfUseDefault;
    Config->EvtSerCxFileOpen = NULL;
    Config->EvtSerCxFileClose = NULL;
    Config->EvtSerCxFileCleanup = NULL;
    Config->EvtSerCxTransmit = NULL;
    Config->EvtSerCxReceive = NULL;
    Config->EvtSerCxWaitmask = NULL;
    Config->EvtSerCxPurge = NULL;
    Config->EvtSerCxControl = NULL;
    Config->EvtSerCxApplyConfig = NULL;
    Config->EvtSerCxTransmitCancel = NULL;
    Config->EvtSerCxReceiveCancel = NULL;
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXDEVICEINITCONFIG)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCxDeviceInitConfig(
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_SERCXDEVICEINITCONFIG) SerFunctions[SerCxDeviceInitConfigTableIndex])(SerDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXINITIALIZE)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PSERCX_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCxInitialize(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PSERCX_CONFIG Config
    )
{
    return ((PFN_SERCXINITIALIZE) SerFunctions[SerCxInitializeTableIndex])(SerDriverGlobals, FxDevice, Config);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCXGETACTIVITY)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _Inout_
    PSERCX_ACTIVITY Activity
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCxGetActivity(
    _In_
    WDFDEVICE Device,
    _Inout_
    PSERCX_ACTIVITY Activity
    )
{
    ((PFN_SERCXGETACTIVITY) SerFunctions[SerCxGetActivityTableIndex])(SerDriverGlobals, Device, Activity);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
ULONG
(*PFN_SERCXGETWAITMASK)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
SerCxGetWaitMask(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_SERCXGETWAITMASK) SerFunctions[SerCxGetWaitMaskTableIndex])(SerDriverGlobals, Device);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXCOMPLETEWAIT)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Event
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxCompleteWait(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Event
    )
{
    return ((PFN_SERCXCOMPLETEWAIT) SerFunctions[SerCxCompleteWaitTableIndex])(SerDriverGlobals, Device, Event);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
ULONG
(*PFN_SERCXGETREADINTERVALTIMEOUT)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
SerCxGetReadIntervalTimeout(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_SERCXGETREADINTERVALTIMEOUT) SerFunctions[SerCxGetReadIntervalTimeoutTableIndex])(SerDriverGlobals, Device);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXRETRIEVETRANSMITBUFFER)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Length,
    _Inout_
    PSERCX_BUFFER_DESCRIPTOR BufferDescriptor
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxRetrieveTransmitBuffer(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Length,
    _Inout_
    PSERCX_BUFFER_DESCRIPTOR BufferDescriptor
    )
{
    return ((PFN_SERCXRETRIEVETRANSMITBUFFER) SerFunctions[SerCxRetrieveTransmitBufferTableIndex])(SerDriverGlobals, Device, Length, BufferDescriptor);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXRETRIEVERECEIVEBUFFER)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Length,
    _Inout_
    PSERCX_BUFFER_DESCRIPTOR BufferDescriptor
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxRetrieveReceiveBuffer(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Length,
    _Inout_
    PSERCX_BUFFER_DESCRIPTOR BufferDescriptor
    )
{
    return ((PFN_SERCXRETRIEVERECEIVEBUFFER) SerFunctions[SerCxRetrieveReceiveBufferTableIndex])(SerDriverGlobals, Device, Length, BufferDescriptor);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXRETRIEVETRANSMITMDL)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _Out_
    PMDL* Mdl
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxRetrieveTransmitMdl(
    _In_
    WDFDEVICE Device,
    _Out_
    PMDL* Mdl
    )
{
    return ((PFN_SERCXRETRIEVETRANSMITMDL) SerFunctions[SerCxRetrieveTransmitMdlTableIndex])(SerDriverGlobals, Device, Mdl);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXRETRIEVERECEIVEMDL)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _Out_
    PMDL* Mdl
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxRetrieveReceiveMdl(
    _In_
    WDFDEVICE Device,
    _Out_
    PMDL* Mdl
    )
{
    return ((PFN_SERCXRETRIEVERECEIVEMDL) SerFunctions[SerCxRetrieveReceiveMdlTableIndex])(SerDriverGlobals, Device, Mdl);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCXGETRINGBUFFERUTILIZATION)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _Out_opt_
    PULONG BytesUsed,
    _Out_opt_
    PULONG BufferSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCxGetRingBufferUtilization(
    _In_
    WDFDEVICE Device,
    _Out_opt_
    PULONG BytesUsed,
    _Out_opt_
    PULONG BufferSize
    )
{
    ((PFN_SERCXGETRINGBUFFERUTILIZATION) SerFunctions[SerCxGetRingBufferUtilizationTableIndex])(SerDriverGlobals, Device, BytesUsed, BufferSize);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCXGETCONNECTIONPARAMETERS)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _Out_
    PVOID* ConnectionParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCxGetConnectionParameters(
    _In_
    WDFDEVICE Device,
    _Out_
    PVOID* ConnectionParameters
    )
{
    ((PFN_SERCXGETCONNECTIONPARAMETERS) SerFunctions[SerCxGetConnectionParametersTableIndex])(SerDriverGlobals, Device, ConnectionParameters);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXPROGRESSTRANSMIT)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG BytesTransmitted,
    _In_
    SERCX_STATUS TransmitStatus
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxProgressTransmit(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG BytesTransmitted,
    _In_
    SERCX_STATUS TransmitStatus
    )
{
    return ((PFN_SERCXPROGRESSTRANSMIT) SerFunctions[SerCxProgressTransmitTableIndex])(SerDriverGlobals, Device, BytesTransmitted, TransmitStatus);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCXPROGRESSRECEIVE)(
    _In_
    PSER_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG BytesReceived,
    _In_
    SERCX_STATUS ReceiveStatus
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCxProgressReceive(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG BytesReceived,
    _In_
    SERCX_STATUS ReceiveStatus
    )
{
    return ((PFN_SERCXPROGRESSRECEIVE) SerFunctions[SerCxProgressReceiveTableIndex])(SerDriverGlobals, Device, BytesReceived, ReceiveStatus);
}
WDF_EXTERN_C_END
