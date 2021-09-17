    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#error Include WDF.H first
typedef struct _NFCCX_DRIVER_GLOBALS {
    ULONG Reserved;
} NFCCX_DRIVER_GLOBALS, *PNFCCX_DRIVER_GLOBALS;
typedef VOID (*PFN_NFC_CX)(VOID);
extern PFN_NFC_CX NfccxFunctions[];
#include "NfcCxFuncEnum.h"
#include "NfcCxBugCodes.h"
typedef enum _NFC_CX_DRIVER_FLAGS {
    NFC_CX_DRIVER_DISABLE_WTD_TIMER = 0x00000001,
    NFC_CX_DRIVER_DISABLE_NFCEE_DISCOVERY = 0x00000002,
    NFC_CX_DRIVER_DISABLE_RECOVERY_MODE = 0x00000004,
    NFC_CX_DRIVER_DISABLE_HOST_CARD_EMULATION = 0x000000010,
    NFC_CX_DRIVER_HCI_NETWORK_PER_NFCEE = 0x000000020,
    NFC_CX_DRIVER_DISABLE_NFCEE_ACTION_NTF = 0x000000040,
    NFC_CX_DRIVER_ENABLE_EEPROM_WRITE_PROTECTION = 0x000000080,
    NFC_CX_DRIVER_ISODEP_RNAK_PRESENCE_CHK_SUPPORTED = 0x000000100,
    NFC_CX_DRIVER_RF_ROUTING_POWER_SUB_STATES_SUPPORTED = 0x000000200,
    NFC_CX_DRIVER_SKIP_DEVICE_STOP_IDLE = 0x000000400,
    NFC_CX_DRIVER_POWER_AND_LINK_CONTROL_SUPPORTED = 0x000000800,
} NFC_CX_DRIVER_FLAGS, *PNFC_CX_DRIVER_FLAGS;
typedef enum _NFC_CX_TRANSPORT_TYPE {
    NFC_CX_TRANSPORT_I2C = 0x00,
    NFC_CX_TRANSPORT_SPI = 0x01,
    NFC_CX_TRANSPORT_UART = 0x02,
    NFC_CX_TRANSPORT_CUSTOM = 0xFF,
} NFC_CX_TRANSPORT_TYPE, *PNFC_CX_TRANSPORT_TYPE;
typedef enum _NFC_CX_DEVICE_MODE {
    NFC_CX_DEVICE_MODE_NCI = 0x00000000,
    NFC_CX_DEVICE_MODE_DTA = 0x00000001,
    NFC_CX_DEVICE_MODE_RAW = 0x00000002,
} NFC_CX_DEVICE_MODE, *PNFC_CX_DEVICE_MODE;
typedef enum _NFC_CX_HOST_ACTION {
    HostActionStart = 0,
    HostActionStop,
    HostActionRestart,
    HostActionUnload,
} NFC_CX_HOST_ACTION, *PNFC_CX_HOST_ACTION;
typedef enum _NFC_CX_POLL_MODE_CONFIG {
    NFC_CX_POLL_NFC_A = 0x00000001,
    NFC_CX_POLL_NFC_B = 0x00000002,
    NFC_CX_POLL_NFC_F_212 = 0x00000004,
    NFC_CX_POLL_NFC_F_424 = 0x00000008,
    NFC_CX_POLL_NFC_15693 = 0x00000010,
    NFC_CX_POLL_NFC_ACTIVE = 0x00000020,
    NFC_CX_POLL_NFC_A_KOVIO = 0x00000040,
    NFC_CX_POLL_DEFAULT = NFC_CX_POLL_NFC_A | NFC_CX_POLL_NFC_B | NFC_CX_POLL_NFC_F_212 | NFC_CX_POLL_NFC_F_424,
} NFC_CX_POLL_MODE_CONFIG, *PNFC_CX_POLL_MODE_CONFIG;
typedef enum _NFC_CX_NFCIP_MODE_CONFIG {
    NFC_CX_NFCIP_NFC_A = 0x01,
    NFC_CX_NFCIP_NFC_F_212 = 0x02,
    NFC_CX_NFCIP_NFC_F_424 = 0x04,
    NFC_CX_NFCIP_NFC_ACTIVE = 0x08,
    NFC_CX_NFCIP_NFC_ACTIVE_A = 0x10,
    NFC_CX_NFCIP_NFC_ACTIVE_F_212 = 0x20,
    NFC_CX_NFCIP_NFC_ACTIVE_F_424 = 0x40,
    NFC_CX_NFCIP_DEFAULT = NFC_CX_NFCIP_NFC_A | NFC_CX_NFCIP_NFC_F_212 | NFC_CX_NFCIP_NFC_F_424,
} NFC_CX_NFCIP_MODE_CONFIG, *PNFC_CX_NFCIP_MODE_CONFIG;
typedef enum _NFC_CX_NFCIP_TGT_MODE_CONFIG {
    NFC_CX_NFCIP_TGT_NFC_A = 0x01,
    NFC_CX_NFCIP_TGT_NFC_F = 0x02,
    NFC_CX_NFCIP_TGT_NFC_ACTIVE_A = 0x04,
    NFC_CX_NFCIP_TGT_NFC_ACTIVE_F = 0x08,
    NFC_CX_NFCIP_TGT_DEFAULT = NFC_CX_NFCIP_TGT_NFC_A | NFC_CX_NFCIP_TGT_NFC_F,
} NFC_CX_NFCIP_TGT_MODE_CONFIG, *PNFC_CX_NFCIP_TGT_MODE_CONFIG;
typedef enum _NFC_CX_CE_MODE_CONFIG {
    NFC_CX_CE_NFC_A = 0x01,
    NFC_CX_CE_NFC_B = 0x02,
    NFC_CX_CE_NFC_F = 0x04,
    NFC_CX_CE_DEFAULT = NFC_CX_CE_NFC_A | NFC_CX_CE_NFC_B | NFC_CX_CE_NFC_F,
} NFC_CX_CE_MODE_CONFIG, *PNFC_CX_CE_MODE_CONFIG;
typedef enum _NFC_CX_POLL_BAILOUT_CONFIG {
    NFC_CX_POLL_BAILOUT_DEFAULT = 0x00,
    NFC_CX_POLL_BAILOUT_NFC_A = 0x01,
    NFC_CX_POLL_BAILOUT_NFC_B = 0x02,
} NFC_CX_POLL_BAILOUT_CONFIG, *PNFC_CX_POLL_BAILOUT_CONFIG;
typedef enum _NFC_CX_SEQUENCE {
    SequencePreInit = 0,
    SequenceInitComplete,
    SequencePreRfDiscStart,
    SequenceRfDiscStartComplete,
    SequencePreRfDiscStop,
    SequenceRfDiscStopComplete,
    SequencePreNfceeDisc,
    SequenceNfceeDiscComplete,
    SequencePreShutdown,
    SequenceShutdownComplete,
    SequencePreRecovery,
    SequenceRecoveryComplete,
    SequenceMaximum,
} NFC_CX_SEQUENCE, *PNFC_CX_SEQUENCE;
typedef
_Function_class_(EVT_NFC_CX_WRITE_NCI_PACKET)
_IRQL_requires_same_
VOID
EVT_NFC_CX_WRITE_NCI_PACKET(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request
    );
typedef EVT_NFC_CX_WRITE_NCI_PACKET *PFN_NFC_CX_WRITE_NCI_PACKET;
typedef
_Function_class_(EVT_NFC_CX_DEVICE_IO_CONTROL)
_IRQL_requires_same_
VOID
EVT_NFC_CX_DEVICE_IO_CONTROL(
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
typedef EVT_NFC_CX_DEVICE_IO_CONTROL *PFN_NFC_CX_DEVICE_IO_CONTROL;
typedef struct _NFC_CX_CLIENT_CONFIG {
    ULONG Size;
    WDF_TRI_STATE IsPowerPolicyOwner;
    ULONG PowerIdleTimeout;
    WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE PowerIdleType;
    NFC_CX_TRANSPORT_TYPE BusType;
    ULONG DriverFlags;
    NFC_CX_DEVICE_MODE DeviceMode;
    PFN_NFC_CX_WRITE_NCI_PACKET EvtNfcCxWriteNciPacket;
    PFN_NFC_CX_DEVICE_IO_CONTROL EvtNfcCxDeviceIoControl;
} NFC_CX_CLIENT_CONFIG, *PNFC_CX_CLIENT_CONFIG;
VOID
FORCEINLINE
NFC_CX_CLIENT_CONFIG_INIT(
    _Out_ PNFC_CX_CLIENT_CONFIG Config,
    _In_ NFC_CX_TRANSPORT_TYPE BusType
    )
{
    RtlZeroMemory(Config, sizeof(NFC_CX_CLIENT_CONFIG));
    Config->Size = sizeof(NFC_CX_CLIENT_CONFIG);
    Config->IsPowerPolicyOwner = WdfUseDefault;
    Config->PowerIdleTimeout = NFC_CX_POWER_IDLE_TIMEOUT_DEFAULT;
    Config->PowerIdleType = DriverManagedIdleTimeout;
    Config->BusType = BusType;
    Config->DriverFlags = 0;
    Config->DeviceMode = NFC_CX_DEVICE_MODE_NCI;
}
typedef struct _NFC_CX_HARDWARE_EVENT {
    NTSTATUS HardwareStatus;
    NFC_CX_HOST_ACTION HostAction;
} NFC_CX_HARDWARE_EVENT, *PNFC_CX_HARDWARE_EVENT;
typedef struct _NFC_CX_RF_DISCOVERY_CONFIG {
    ULONG Size;
    USHORT TotalDuration;
    ULONG PollConfig;
    UCHAR NfcIPMode;
    UCHAR NfcIPTgtMode;
    UCHAR NfcCEMode;
    UCHAR BailoutConfig;
} NFC_CX_RF_DISCOVERY_CONFIG, *PNFC_CX_RF_DISCOVERY_CONFIG;
typedef const NFC_CX_RF_DISCOVERY_CONFIG* PCNFC_CX_RF_DISCOVERY_CONFIG;
VOID
FORCEINLINE
NFC_CX_RF_DISCOVERY_CONFIG_INIT(
    _Out_ PNFC_CX_RF_DISCOVERY_CONFIG Config
    )
{
    RtlZeroMemory(Config, sizeof(NFC_CX_RF_DISCOVERY_CONFIG));
    Config->Size = sizeof(NFC_CX_RF_DISCOVERY_CONFIG);
    Config->TotalDuration = NFC_CX_TOTAL_DURATION_DEFAULT;
    Config->PollConfig = NFC_CX_POLL_DEFAULT;
    Config->NfcIPMode = NFC_CX_NFCIP_DEFAULT;
    Config->NfcIPTgtMode = NFC_CX_NFCIP_TGT_DEFAULT;
    Config->NfcCEMode = NFC_CX_CE_DEFAULT;
    Config->BailoutConfig = NFC_CX_POLL_BAILOUT_DEFAULT;
}
typedef struct _NFC_CX_LLCP_CONFIG {
    ULONG Size;
    USHORT Miu;
    UCHAR LinkTimeout;
    UCHAR RecvWindowSize;
} NFC_CX_LLCP_CONFIG, *PNFC_CX_LLCP_CONFIG;
typedef const NFC_CX_LLCP_CONFIG* PCNFC_CX_LLCP_CONFIG;
VOID
FORCEINLINE
NFC_CX_LLCP_CONFIG_INIT(
    _Out_ PNFC_CX_LLCP_CONFIG Config
    )
{
    RtlZeroMemory(Config, sizeof(NFC_CX_LLCP_CONFIG));
    Config->Size = sizeof(NFC_CX_LLCP_CONFIG);
    Config->Miu = NFC_CX_LLCP_MIU_DEFAULT;
    Config->LinkTimeout = NFC_CX_LLCP_LTO_DEFAULT;
    Config->RecvWindowSize = NFC_CX_LLCP_RECV_WINDOW_SIZE;
}
typedef
_Function_class_(EVT_NFC_CX_SEQUENCE_COMPLETION_ROUTINE)
_IRQL_requires_same_
VOID
EVT_NFC_CX_SEQUENCE_COMPLETION_ROUTINE(
    _In_
     WDFDEVICE Device,
    _In_
    NTSTATUS Status,
    _In_
    ULONG Flags,
    _In_opt_
    WDFCONTEXT Context
    );
typedef EVT_NFC_CX_SEQUENCE_COMPLETION_ROUTINE *PFN_NFC_CX_SEQUENCE_COMPLETION_ROUTINE;
typedef
_Function_class_(EVT_NFC_CX_SEQUENCE_HANDLER)
_IRQL_requires_same_
VOID
EVT_NFC_CX_SEQUENCE_HANDLER(
    _In_
    WDFDEVICE Device,
    _In_
    NFC_CX_SEQUENCE Sequence,
    _In_
    PFN_NFC_CX_SEQUENCE_COMPLETION_ROUTINE CompletionRoutine,
    _In_opt_
    WDFCONTEXT CompletionContext
    );
typedef EVT_NFC_CX_SEQUENCE_HANDLER *PFN_NFC_CX_SEQUENCE_HANDLER;
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXDEVICEINITCONFIG)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PNFC_CX_CLIENT_CONFIG Config
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxDeviceInitConfig(
    _Inout_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PNFC_CX_CLIENT_CONFIG Config
    )
{
    return ((PFN_NFCCXDEVICEINITCONFIG) NfccxFunctions[NfcCxDeviceInitConfigTableIndex])(NfccxDriverGlobals, DeviceInit, Config);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXDEVICEINITIALIZE)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxDeviceInitialize(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_NFCCXDEVICEINITIALIZE) NfccxFunctions[NfcCxDeviceInitializeTableIndex])(NfccxDriverGlobals, Device);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXDEVICEDEINITIALIZE)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxDeviceDeinitialize(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_NFCCXDEVICEDEINITIALIZE) NfccxFunctions[NfcCxDeviceDeinitializeTableIndex])(NfccxDriverGlobals, Device);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXHARDWAREEVENT)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PNFC_CX_HARDWARE_EVENT HardwareEvent
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxHardwareEvent(
    _In_
    WDFDEVICE Device,
    _In_
    PNFC_CX_HARDWARE_EVENT HardwareEvent
    )
{
    return ((PFN_NFCCXHARDWAREEVENT) NfccxFunctions[NfcCxHardwareEventTableIndex])(NfccxDriverGlobals, Device, HardwareEvent);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXNCIREADNOTIFICATION)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    WDFMEMORY Memory
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxNciReadNotification(
    _In_
    WDFDEVICE Device,
    _In_
    WDFMEMORY Memory
    )
{
    return ((PFN_NFCCXNCIREADNOTIFICATION) NfccxFunctions[NfcCxNciReadNotificationTableIndex])(NfccxDriverGlobals, Device, Memory);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXSETRFDISCOVERYCONFIG)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PCNFC_CX_RF_DISCOVERY_CONFIG Config
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxSetRfDiscoveryConfig(
    _In_
    WDFDEVICE Device,
    _In_
    PCNFC_CX_RF_DISCOVERY_CONFIG Config
    )
{
    return ((PFN_NFCCXSETRFDISCOVERYCONFIG) NfccxFunctions[NfcCxSetRfDiscoveryConfigTableIndex])(NfccxDriverGlobals, Device, Config);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXSETLLCPCONFIG)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PCNFC_CX_LLCP_CONFIG Config
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxSetLlcpConfig(
    _In_
    WDFDEVICE Device,
    _In_
    PCNFC_CX_LLCP_CONFIG Config
    )
{
    return ((PFN_NFCCXSETLLCPCONFIG) NfccxFunctions[NfcCxSetLlcpConfigTableIndex])(NfccxDriverGlobals, Device, Config);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXREGISTERSEQUENCEHANDLER)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    NFC_CX_SEQUENCE Sequence,
    _In_
    PFN_NFC_CX_SEQUENCE_HANDLER EvtNfcCxSequenceHandler
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxRegisterSequenceHandler(
    _In_
    WDFDEVICE Device,
    _In_
    NFC_CX_SEQUENCE Sequence,
    _In_
    PFN_NFC_CX_SEQUENCE_HANDLER EvtNfcCxSequenceHandler
    )
{
    return ((PFN_NFCCXREGISTERSEQUENCEHANDLER) NfccxFunctions[NfcCxRegisterSequenceHandlerTableIndex])(NfccxDriverGlobals, Device, Sequence, EvtNfcCxSequenceHandler);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXUNREGISTERSEQUENCEHANDLER)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    NFC_CX_SEQUENCE Sequence
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxUnregisterSequenceHandler(
    _In_
    WDFDEVICE Device,
    _In_
    NFC_CX_SEQUENCE Sequence
    )
{
    return ((PFN_NFCCXUNREGISTERSEQUENCEHANDLER) NfccxFunctions[NfcCxUnregisterSequenceHandlerTableIndex])(NfccxDriverGlobals, Device, Sequence);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXRELEASEHARDWARECONTROL)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxReleaseHardwareControl(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_NFCCXRELEASEHARDWARECONTROL) NfccxFunctions[NfcCxReleaseHardwareControlTableIndex])(NfccxDriverGlobals, Device);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_NFCCXREACQUIREHARDWARECONTROL)(
    _In_
    PNFCCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
NfcCxReacquireHardwareControl(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_NFCCXREACQUIREHARDWARECONTROL) NfccxFunctions[NfcCxReacquireHardwareControlTableIndex])(NfccxDriverGlobals, Device);
}
WDF_EXTERN_C_END
