#error Include WDF.H first
       
#include "spb.h"
struct SPBTARGET__ : WDFFILEOBJECT__ { };
typedef struct SPBTARGET__ *SPBTARGET;
struct SPBREQUEST__ : WDFREQUEST__ { };
typedef struct SPBREQUEST__ *SPBREQUEST;
WDF_EXTERN_C_START
typedef VOID (*SPBFUNC) (VOID);
extern SPBFUNC SpbFunctions [];
typedef struct _WDF_DRIVER_GLOBALS SPB_DRIVER_GLOBALS, *PSPB_DRIVER_GLOBALS;
typedef struct WDFDEVICE_INIT WDFDEVICE_INIT;
#include "spbfuncenum.h"
typedef enum _SPB_REQUEST_TYPE {
    SpbRequestTypeUndefined = 0,
    SpbRequestTypeRead,
    SpbRequestTypeWrite,
    SpbRequestTypeSequence,
    SpbRequestTypeLockController,
    SpbRequestTypeUnlockController,
    SpbRequestTypeLockConnection,
    SpbRequestTypeUnlockConnection,
    SpbRequestTypeOther,
    SpbRequestTypeMax,
} SPB_REQUEST_TYPE, *PSPB_REQUEST_TYPE;
typedef enum _SPB_REQUEST_SEQUENCE_POSITION {
    SpbRequestSequencePositionInvalid = 0,
    SpbRequestSequencePositionSingle,
    SpbRequestSequencePositionFirst,
    SpbRequestSequencePositionContinue,
    SpbRequestSequencePositionLast,
    SpbRequestSequencePositionMax,
} SPB_REQUEST_SEQUENCE_POSITION, *PSPB_REQUEST_SEQUENCE_POSITION;
typedef
_Function_class_(EVT_SPB_TARGET_CONNECT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_SPB_TARGET_CONNECT(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target
    );
typedef EVT_SPB_TARGET_CONNECT *PFN_SPB_TARGET_CONNECT;
typedef
_Function_class_(EVT_SPB_TARGET_DISCONNECT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_SPB_TARGET_DISCONNECT(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target
    );
typedef EVT_SPB_TARGET_DISCONNECT *PFN_SPB_TARGET_DISCONNECT;
typedef
_Function_class_(EVT_SPB_CONTROLLER_LOCK)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SPB_CONTROLLER_LOCK(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target,
    _In_
    SPBREQUEST LockRequest
    );
typedef EVT_SPB_CONTROLLER_LOCK *PFN_SPB_CONTROLLER_LOCK;
typedef
_Function_class_(EVT_SPB_CONTROLLER_UNLOCK)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SPB_CONTROLLER_UNLOCK(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target,
    _In_
    SPBREQUEST UnlockRequest
    );
typedef EVT_SPB_CONTROLLER_UNLOCK *PFN_SPB_CONTROLLER_UNLOCK;
typedef
_Function_class_(EVT_SPB_CONTROLLER_READ)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SPB_CONTROLLER_READ(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target,
    _In_
    SPBREQUEST Request,
    _In_
    size_t Length
    );
typedef EVT_SPB_CONTROLLER_READ *PFN_SPB_CONTROLLER_READ;
typedef
_Function_class_(EVT_SPB_CONTROLLER_WRITE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SPB_CONTROLLER_WRITE(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target,
    _In_
    SPBREQUEST Request,
    _In_
    size_t Length
    );
typedef EVT_SPB_CONTROLLER_WRITE *PFN_SPB_CONTROLLER_WRITE;
typedef
_Function_class_(EVT_SPB_CONTROLLER_SEQUENCE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SPB_CONTROLLER_SEQUENCE(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target,
    _In_
    SPBREQUEST Request,
    _In_
    ULONG TransferCount
    );
typedef EVT_SPB_CONTROLLER_SEQUENCE *PFN_SPB_CONTROLLER_SEQUENCE;
typedef
_Function_class_(EVT_SPB_CONTROLLER_OTHER)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SPB_CONTROLLER_OTHER(
    _In_
    WDFDEVICE Controller,
    _In_
    SPBTARGET Target,
    _In_
    SPBREQUEST Request,
    _In_
    size_t OutputBufferLength,
    _In_
    size_t InputBufferLength,
    _In_
    ULONG IoControlCode
    );
typedef EVT_SPB_CONTROLLER_OTHER *PFN_SPB_CONTROLLER_OTHER;
typedef struct _SPB_CONTROLLER_CONFIG {
    ULONG Size;
    WDF_IO_QUEUE_DISPATCH_TYPE ControllerDispatchType;
    WDF_TRI_STATE PowerManaged;
    PFN_SPB_TARGET_CONNECT EvtSpbTargetConnect;
    PFN_SPB_TARGET_DISCONNECT EvtSpbTargetDisconnect;
    PFN_SPB_CONTROLLER_LOCK EvtSpbControllerLock;
    PFN_SPB_CONTROLLER_UNLOCK EvtSpbControllerUnlock;
    PFN_SPB_CONTROLLER_READ EvtSpbIoRead;
    PFN_SPB_CONTROLLER_WRITE EvtSpbIoWrite;
    PFN_SPB_CONTROLLER_SEQUENCE EvtSpbIoSequence;
} SPB_CONTROLLER_CONFIG,
  *PSPB_CONTROLLER_CONFIG;
VOID
FORCEINLINE
SPB_CONTROLLER_CONFIG_INIT(
    _Out_ SPB_CONTROLLER_CONFIG *Config
    )
{
    RtlZeroMemory(Config, sizeof(SPB_CONTROLLER_CONFIG));
    Config->Size = sizeof(SPB_CONTROLLER_CONFIG);
    Config->ControllerDispatchType = WdfIoQueueDispatchSequential;
    Config->PowerManaged = WdfUseDefault;
}
typedef struct _SPB_CONNECTION_PARAMETERS
{
    USHORT Size;
    PCWSTR ConnectionTag;
    PVOID ConnectionParameters;
}
SPB_CONNECTION_PARAMETERS, *PSPB_CONNECTION_PARAMETERS;
VOID
FORCEINLINE
SPB_CONNECTION_PARAMETERS_INIT(
    _Out_ SPB_CONNECTION_PARAMETERS *Parameters
    )
{
    RtlZeroMemory(Parameters, sizeof(*Parameters));
    Parameters->Size = sizeof(*Parameters);
}
typedef struct _SPB_REQUEST_PARAMETERS
{
    USHORT Size;
    SPB_REQUEST_TYPE Type;
    SPB_REQUEST_SEQUENCE_POSITION Position;
    SPB_TRANSFER_DIRECTION PreviousTransferDirection;
    size_t Length;
    ULONG SequenceTransferCount;
}
SPB_REQUEST_PARAMETERS, *PSPB_REQUEST_PARAMETERS;
VOID
FORCEINLINE
SPB_REQUEST_PARAMETERS_INIT(
    _Out_ SPB_REQUEST_PARAMETERS *Parameters
    )
{
    RtlZeroMemory(Parameters, sizeof(*Parameters));
    Parameters->Size = sizeof(*Parameters);
}
typedef struct SPB_TRANSFER_DESCRIPTOR
{
    USHORT Size;
    SPB_TRANSFER_DIRECTION Direction;
    size_t TransferLength;
    ULONG DelayInUs;
}
SPB_TRANSFER_DESCRIPTOR, *PSPB_TRANSFER_DESCRIPTOR;
VOID FORCEINLINE
SPB_TRANSFER_DESCRIPTOR_INIT(
    _Out_ SPB_TRANSFER_DESCRIPTOR *Descriptor
    )
{
    RtlZeroMemory(Descriptor, sizeof(*Descriptor));
    Descriptor->Size = sizeof(*Descriptor);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SPBDEVICEINITCONFIG)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    WDFDEVICE_INIT* DeviceInit
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SpbDeviceInitConfig(
    _Inout_
    WDFDEVICE_INIT* DeviceInit
    )
{
    return ((PFN_SPBDEVICEINITCONFIG) SpbFunctions[SpbDeviceInitConfigTableIndex])(SpbDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SPBDEVICEINITIALIZE)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PSPB_CONTROLLER_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SpbDeviceInitialize(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PSPB_CONTROLLER_CONFIG Config
    )
{
    return ((PFN_SPBDEVICEINITIALIZE) SpbFunctions[SpbDeviceInitializeTableIndex])(SpbDriverGlobals, FxDevice, Config);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_SPBCONTROLLERSETIOOTHERCALLBACK)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PFN_SPB_CONTROLLER_OTHER EvtSpbControllerIoOther,
    _In_opt_
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
SpbControllerSetIoOtherCallback(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PFN_SPB_CONTROLLER_OTHER EvtSpbControllerIoOther,
    _In_opt_
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    )
{
    ((PFN_SPBCONTROLLERSETIOOTHERCALLBACK) SpbFunctions[SpbControllerSetIoOtherCallbackTableIndex])(SpbDriverGlobals, FxDevice, EvtSpbControllerIoOther, EvtIoInCallerContext);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_SPBCONTROLLERSETREQUESTATTRIBUTES)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
SpbControllerSetRequestAttributes(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    )
{
    ((PFN_SPBCONTROLLERSETREQUESTATTRIBUTES) SpbFunctions[SpbControllerSetRequestAttributesTableIndex])(SpbDriverGlobals, FxDevice, RequestAttributes);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_SPBCONTROLLERSETTARGETATTRIBUTES)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PWDF_OBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
SpbControllerSetTargetAttributes(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PWDF_OBJECT_ATTRIBUTES ObjectAttributes
    )
{
    ((PFN_SPBCONTROLLERSETTARGETATTRIBUTES) SpbFunctions[SpbControllerSetTargetAttributesTableIndex])(SpbDriverGlobals, FxDevice, ObjectAttributes);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SPBTARGETGETCONNECTIONPARAMETERS)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBTARGET Target,
    _Out_
    SPB_CONNECTION_PARAMETERS* ConnectionParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SpbTargetGetConnectionParameters(
    _In_
    SPBTARGET Target,
    _Out_
    SPB_CONNECTION_PARAMETERS* ConnectionParameters
    )
{
    ((PFN_SPBTARGETGETCONNECTIONPARAMETERS) SpbFunctions[SpbTargetGetConnectionParametersTableIndex])(SpbDriverGlobals, Target, ConnectionParameters);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFFILEOBJECT
(*PFN_SPBTARGETGETFILEOBJECT)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBTARGET Target
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFFILEOBJECT
FORCEINLINE
SpbTargetGetFileObject(
    _In_
    SPBTARGET Target
    )
{
    return ((PFN_SPBTARGETGETFILEOBJECT) SpbFunctions[SpbTargetGetFileObjectTableIndex])(SpbDriverGlobals, Target);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
SPBTARGET
(*PFN_SPBREQUESTGETTARGET)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBREQUEST SpbRequest
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
SPBTARGET
FORCEINLINE
SpbRequestGetTarget(
    _In_
    SPBREQUEST SpbRequest
    )
{
    return ((PFN_SPBREQUESTGETTARGET) SpbFunctions[SpbRequestGetTargetTableIndex])(SpbDriverGlobals, SpbRequest);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFDEVICE
(*PFN_SPBREQUESTGETCONTROLLER)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBREQUEST SpbRequest
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFDEVICE
FORCEINLINE
SpbRequestGetController(
    _In_
    SPBREQUEST SpbRequest
    )
{
    return ((PFN_SPBREQUESTGETCONTROLLER) SpbFunctions[SpbRequestGetControllerTableIndex])(SpbDriverGlobals, SpbRequest);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SPBREQUESTGETPARAMETERS)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBREQUEST SpbRequest,
    _Out_
    SPB_REQUEST_PARAMETERS* Parameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SpbRequestGetParameters(
    _In_
    SPBREQUEST SpbRequest,
    _Out_
    SPB_REQUEST_PARAMETERS* Parameters
    )
{
    ((PFN_SPBREQUESTGETPARAMETERS) SpbFunctions[SpbRequestGetParametersTableIndex])(SpbDriverGlobals, SpbRequest, Parameters);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SPBREQUESTGETTRANSFERPARAMETERS)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBREQUEST SpbRequest,
    _In_
    ULONG Index,
    _Out_opt_
    SPB_TRANSFER_DESCRIPTOR* TransferDescriptor,
    _Out_opt_
    PMDL* TransferBuffer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SpbRequestGetTransferParameters(
    _In_
    SPBREQUEST SpbRequest,
    _In_
    ULONG Index,
    _Out_opt_
    SPB_TRANSFER_DESCRIPTOR* TransferDescriptor,
    _Out_opt_
    PMDL* TransferBuffer
    )
{
    ((PFN_SPBREQUESTGETTRANSFERPARAMETERS) SpbFunctions[SpbRequestGetTransferParametersTableIndex])(SpbDriverGlobals, SpbRequest, Index, TransferDescriptor, TransferBuffer);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SPBREQUESTCOMPLETE)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBREQUEST Request,
    _In_
    NTSTATUS CompletionStatus
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SpbRequestComplete(
    _In_
    SPBREQUEST Request,
    _In_
    NTSTATUS CompletionStatus
    )
{
    ((PFN_SPBREQUESTCOMPLETE) SpbFunctions[SpbRequestCompleteTableIndex])(SpbDriverGlobals, Request, CompletionStatus);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SPBREQUESTCAPTUREIOOTHERTRANSFERLIST)(
    _In_
    PSPB_DRIVER_GLOBALS DriverGlobals,
    _In_
    SPBREQUEST Request
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SpbRequestCaptureIoOtherTransferList(
    _In_
    SPBREQUEST Request
    )
{
    return ((PFN_SPBREQUESTCAPTUREIOOTHERTRANSFERLIST) SpbFunctions[SpbRequestCaptureIoOtherTransferListTableIndex])(SpbDriverGlobals, Request);
}
WDF_EXTERN_C_END
