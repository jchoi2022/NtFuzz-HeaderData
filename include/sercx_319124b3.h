    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#error Include WDF.H first
DECLARE_HANDLE(SERCX2SYSTEMDMATRANSMIT);
DECLARE_HANDLE(SERCX2SYSTEMDMARECEIVE);
DECLARE_HANDLE(SERCX2PIOTRANSMIT);
DECLARE_HANDLE(SERCX2PIORECEIVE);
DECLARE_HANDLE(SERCX2CUSTOMRECEIVE);
DECLARE_HANDLE(SERCX2CUSTOMTRANSMIT);
DECLARE_HANDLE(SERCX2CUSTOMRECEIVETRANSACTION);
DECLARE_HANDLE(SERCX2CUSTOMTRANSMITTRANSACTION);
typedef VOID (*SERCXFUNC) (VOID);
extern SERCXFUNC SercxFunctions [];
typedef struct _WDF_DRIVER_GLOBALS SERCX_DRIVER_GLOBALS, *PSERCX_DRIVER_GLOBALS;
#include "sercxfuncenum.h"
typedef enum _SERCX2_CUSTOM_RECEIVE_TRANSACTION_PROGRESS {
    SerCx2CustomReceiveTransactionNoProgress = 0,
    SerCx2CustomReceiveTransactionBytesTransferred,
} SERCX2_CUSTOM_RECEIVE_TRANSACTION_PROGRESS, *PSERCX2_CUSTOM_RECEIVE_TRANSACTION_PROGRESS;
typedef
_Function_class_(EVT_SERCX2_FILEOPEN)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX2_FILEOPEN(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX2_FILEOPEN *PFN_SERCX2_FILEOPEN;
typedef
_Function_class_(EVT_SERCX2_FILECLOSE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_FILECLOSE(
    _In_
    WDFDEVICE Device
    );
typedef EVT_SERCX2_FILECLOSE *PFN_SERCX2_FILECLOSE;
typedef
_Function_class_(EVT_SERCX2_SET_WAIT_MASK)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SET_WAIT_MASK(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request,
    _In_
    ULONG WaitMask
    );
typedef EVT_SERCX2_SET_WAIT_MASK *PFN_SERCX2_SET_WAIT_MASK;
typedef
_Function_class_(EVT_SERCX2_PURGE_FIFOS)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_SERCX2_PURGE_FIFOS(
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN PurgeRxFifo,
    _In_
    BOOLEAN PurgeTxFifo
    );
typedef EVT_SERCX2_PURGE_FIFOS *PFN_SERCX2_PURGE_FIFOS;
typedef
_Function_class_(EVT_SERCX2_CONTROL)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX2_CONTROL(
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
typedef EVT_SERCX2_CONTROL *PFN_SERCX2_CONTROL;
typedef
_Function_class_(EVT_SERCX2_APPLY_CONFIG)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_SERCX2_APPLY_CONFIG(
    _In_
    WDFDEVICE Device,
    _In_
    PVOID ConnectionParameters
    );
typedef EVT_SERCX2_APPLY_CONFIG *PFN_SERCX2_APPLY_CONFIG;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_TRANSMIT_INITIALIZE_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_TRANSMIT_INITIALIZE_TRANSACTION(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_SYSTEM_DMA_TRANSMIT_INITIALIZE_TRANSACTION *PFN_SERCX2_SYSTEM_DMA_TRANSMIT_INITIALIZE_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_RECEIVE_INITIALIZE_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_RECEIVE_INITIALIZE_TRANSACTION(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_SYSTEM_DMA_RECEIVE_INITIALIZE_TRANSACTION *PFN_SERCX2_SYSTEM_DMA_RECEIVE_INITIALIZE_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CLEANUP_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CLEANUP_TRANSACTION(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    );
typedef EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CLEANUP_TRANSACTION *PFN_SERCX2_SYSTEM_DMA_TRANSMIT_CLEANUP_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_RECEIVE_CLEANUP_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_RECEIVE_CLEANUP_TRANSACTION(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    );
typedef EVT_SERCX2_SYSTEM_DMA_RECEIVE_CLEANUP_TRANSACTION *PFN_SERCX2_SYSTEM_DMA_RECEIVE_CLEANUP_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CONFIGURE_DMA_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CONFIGURE_DMA_CHANNEL(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_opt_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CONFIGURE_DMA_CHANNEL *PFN_SERCX2_SYSTEM_DMA_TRANSMIT_CONFIGURE_DMA_CHANNEL;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_RECEIVE_CONFIGURE_DMA_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
EVT_SERCX2_SYSTEM_DMA_RECEIVE_CONFIGURE_DMA_CHANNEL(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive,
    _In_opt_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_SYSTEM_DMA_RECEIVE_CONFIGURE_DMA_CHANNEL *PFN_SERCX2_SYSTEM_DMA_RECEIVE_CONFIGURE_DMA_CHANNEL;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_RECEIVE_ENABLE_NEW_DATA_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_RECEIVE_ENABLE_NEW_DATA_NOTIFICATION(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    );
typedef EVT_SERCX2_SYSTEM_DMA_RECEIVE_ENABLE_NEW_DATA_NOTIFICATION *PFN_SERCX2_SYSTEM_DMA_RECEIVE_ENABLE_NEW_DATA_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_RECEIVE_CANCEL_NEW_DATA_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
EVT_SERCX2_SYSTEM_DMA_RECEIVE_CANCEL_NEW_DATA_NOTIFICATION(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    );
typedef EVT_SERCX2_SYSTEM_DMA_RECEIVE_CANCEL_NEW_DATA_NOTIFICATION *PFN_SERCX2_SYSTEM_DMA_RECEIVE_CANCEL_NEW_DATA_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_INITIALIZE_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_TRANSMIT_INITIALIZE_TRANSACTION(
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_PIO_TRANSMIT_INITIALIZE_TRANSACTION *PFN_SERCX2_PIO_TRANSMIT_INITIALIZE_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_PIO_RECEIVE_INITIALIZE_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_RECEIVE_INITIALIZE_TRANSACTION(
    _In_
    SERCX2PIORECEIVE PioReceive,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_PIO_RECEIVE_INITIALIZE_TRANSACTION *PFN_SERCX2_PIO_RECEIVE_INITIALIZE_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_CLEANUP_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_TRANSMIT_CLEANUP_TRANSACTION(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
typedef EVT_SERCX2_PIO_TRANSMIT_CLEANUP_TRANSACTION *PFN_SERCX2_PIO_TRANSMIT_CLEANUP_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_PIO_RECEIVE_CLEANUP_TRANSACTION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_RECEIVE_CLEANUP_TRANSACTION(
    _In_
    SERCX2PIORECEIVE PioReceive
    );
typedef EVT_SERCX2_PIO_RECEIVE_CLEANUP_TRANSACTION *PFN_SERCX2_PIO_RECEIVE_CLEANUP_TRANSACTION;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_WRITE_BUFFER)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
EVT_SERCX2_PIO_TRANSMIT_WRITE_BUFFER(
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_reads_(Length)
    PUCHAR Buffer,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_PIO_TRANSMIT_WRITE_BUFFER *PFN_SERCX2_PIO_TRANSMIT_WRITE_BUFFER;
typedef
_Function_class_(EVT_SERCX2_PIO_RECEIVE_READ_BUFFER)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
EVT_SERCX2_PIO_RECEIVE_READ_BUFFER(
    _In_
    SERCX2PIORECEIVE PioReceive,
    _Out_writes_(Length)
    PUCHAR Buffer,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_PIO_RECEIVE_READ_BUFFER *PFN_SERCX2_PIO_RECEIVE_READ_BUFFER;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_ENABLE_READY_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_TRANSMIT_ENABLE_READY_NOTIFICATION(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
typedef EVT_SERCX2_PIO_TRANSMIT_ENABLE_READY_NOTIFICATION *PFN_SERCX2_PIO_TRANSMIT_ENABLE_READY_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_PIO_RECEIVE_ENABLE_READY_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_RECEIVE_ENABLE_READY_NOTIFICATION(
    _In_
    SERCX2PIORECEIVE PioReceive
    );
typedef EVT_SERCX2_PIO_RECEIVE_ENABLE_READY_NOTIFICATION *PFN_SERCX2_PIO_RECEIVE_ENABLE_READY_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_CANCEL_READY_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
EVT_SERCX2_PIO_TRANSMIT_CANCEL_READY_NOTIFICATION(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
typedef EVT_SERCX2_PIO_TRANSMIT_CANCEL_READY_NOTIFICATION *PFN_SERCX2_PIO_TRANSMIT_CANCEL_READY_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_PIO_RECEIVE_CANCEL_READY_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
EVT_SERCX2_PIO_RECEIVE_CANCEL_READY_NOTIFICATION(
    _In_
    SERCX2PIORECEIVE PioReceive
    );
typedef EVT_SERCX2_PIO_RECEIVE_CANCEL_READY_NOTIFICATION *PFN_SERCX2_PIO_RECEIVE_CANCEL_READY_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_DRAIN_FIFO)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_TRANSMIT_DRAIN_FIFO(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
typedef EVT_SERCX2_PIO_TRANSMIT_DRAIN_FIFO *PFN_SERCX2_PIO_TRANSMIT_DRAIN_FIFO;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_CANCEL_DRAIN_FIFO)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
EVT_SERCX2_PIO_TRANSMIT_CANCEL_DRAIN_FIFO(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
typedef EVT_SERCX2_PIO_TRANSMIT_CANCEL_DRAIN_FIFO *PFN_SERCX2_PIO_TRANSMIT_CANCEL_DRAIN_FIFO;
typedef
_Function_class_(EVT_SERCX2_PIO_TRANSMIT_PURGE_FIFO)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_PIO_TRANSMIT_PURGE_FIFO(
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_
    ULONG BytesAlreadyTransmittedToHardware
    );
typedef EVT_SERCX2_PIO_TRANSMIT_PURGE_FIFO *PFN_SERCX2_PIO_TRANSMIT_PURGE_FIFO;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_TRANSMIT_DRAIN_FIFO)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_TRANSMIT_DRAIN_FIFO(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    );
typedef EVT_SERCX2_SYSTEM_DMA_TRANSMIT_DRAIN_FIFO *PFN_SERCX2_SYSTEM_DMA_TRANSMIT_DRAIN_FIFO;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CANCEL_DRAIN_FIFO)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CANCEL_DRAIN_FIFO(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    );
typedef EVT_SERCX2_SYSTEM_DMA_TRANSMIT_CANCEL_DRAIN_FIFO *PFN_SERCX2_SYSTEM_DMA_TRANSMIT_CANCEL_DRAIN_FIFO;
typedef
_Function_class_(EVT_SERCX2_SYSTEM_DMA_TRANSMIT_PURGE_FIFO)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_SYSTEM_DMA_TRANSMIT_PURGE_FIFO(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_
    ULONG BytesAlreadyTransmittedToHardware
    );
typedef EVT_SERCX2_SYSTEM_DMA_TRANSMIT_PURGE_FIFO *PFN_SERCX2_SYSTEM_DMA_TRANSMIT_PURGE_FIFO;
typedef enum _SERCX2_TRANSACTION_TYPE {
    SerCx2TransactionTypeDefault,
    SerCx2TransactionTypePio,
    SerCx2TransactionTypeSystemDma,
    SerCx2TransactionTypeCustom
} SERCX2_TRANSACTION_TYPE;
typedef
_Function_class_(EVT_SERCX2_SELECT_NEXT_RECEIVE_TRANSACTION_TYPE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
SERCX2_TRANSACTION_TYPE
EVT_SERCX2_SELECT_NEXT_RECEIVE_TRANSACTION_TYPE(
    _In_
    WDFDEVICE Device,
    _In_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG RemainingLength,
    _When_(return == SerCx2TransactionTypeCustom, _Out_)
    _When_(return != SerCx2TransactionTypeCustom, _Unreferenced_parameter_)
    SERCX2CUSTOMRECEIVE *CustomReceive,
    _When_(return != SerCx2TransactionTypeDefault, _Out_)
    _When_(return == SerCx2TransactionTypeDefault, _Unreferenced_parameter_)
    PULONG NextTransactionLength
);
typedef EVT_SERCX2_SELECT_NEXT_RECEIVE_TRANSACTION_TYPE *PFN_SERCX2_SELECT_NEXT_RECEIVE_TRANSACTION_TYPE;
typedef
_Function_class_(EVT_SERCX2_SELECT_NEXT_TRANSMIT_TRANSACTION_TYPE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
SERCX2_TRANSACTION_TYPE
EVT_SERCX2_SELECT_NEXT_TRANSMIT_TRANSACTION_TYPE(
    _In_
    WDFDEVICE Device,
    _In_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG RemainingLength,
    _When_(return == SerCx2TransactionTypeCustom, _Out_)
    _When_(return != SerCx2TransactionTypeCustom, _Unreferenced_parameter_)
    SERCX2CUSTOMTRANSMIT *CustomTransmit,
    _When_(return != SerCx2TransactionTypeDefault, _Out_)
    _When_(return == SerCx2TransactionTypeDefault, _Unreferenced_parameter_)
    PULONG NextTransactionLength
);
typedef EVT_SERCX2_SELECT_NEXT_TRANSMIT_TRANSACTION_TYPE *PFN_SERCX2_SELECT_NEXT_TRANSMIT_TRANSACTION_TYPE;
typedef struct _SERCX2_CONFIG
{
    ULONG Size;
    PFN_SERCX2_FILEOPEN EvtSerCx2FileOpen;
    PFN_SERCX2_FILECLOSE EvtSerCx2FileClose;
    PFN_SERCX2_SET_WAIT_MASK EvtSerCx2SetWaitMask;
    PFN_SERCX2_PURGE_FIFOS EvtSerCx2PurgeFifos;
    PFN_SERCX2_CONTROL EvtSerCx2Control;
    PFN_SERCX2_APPLY_CONFIG EvtSerCx2ApplyConfig;
    PFN_SERCX2_SELECT_NEXT_RECEIVE_TRANSACTION_TYPE EvtSerCx2SelectNextReceiveTransactionType;
    PFN_SERCX2_SELECT_NEXT_TRANSMIT_TRANSACTION_TYPE EvtSerCx2SelectNextTransmitTransactionType;
    PWDF_OBJECT_ATTRIBUTES RequestAttributes;
}
SERCX2_CONFIG, *PSERCX2_CONFIG;
VOID FORCEINLINE
SERCX2_CONFIG_INIT(
    _Out_ SERCX2_CONFIG *Config,
    _In_ PFN_SERCX2_APPLY_CONFIG EvtSerCx2ApplyConfig,
    _In_ PFN_SERCX2_CONTROL EvtSerCx2Control,
    _In_ PFN_SERCX2_PURGE_FIFOS EvtSerCx2PurgeFifos
    )
{
    RtlZeroMemory(Config, sizeof(SERCX2_CONFIG));
    Config->Size = sizeof(SERCX2_CONFIG);
    Config->EvtSerCx2ApplyConfig = EvtSerCx2ApplyConfig;
    Config->EvtSerCx2Control = EvtSerCx2Control;
    Config->EvtSerCx2PurgeFifos = EvtSerCx2PurgeFifos;
    Config->RequestAttributes = WDF_NO_OBJECT_ATTRIBUTES;
}
typedef struct _SERCX2_SYSTEM_DMA_TRANSMIT_CONFIG
{
    ULONG Size;
    size_t MaximumTransferLength;
    size_t MinimumTransactionLength;
    ULONG DmaAlignment;
    ULONG MaximumScatterGatherFragments;
    DMA_WIDTH DmaWidth;
    PHYSICAL_ADDRESS DeviceAddress;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor;
    ULONG MinimumTransferUnitOverride;
    BOOLEAN Exclusive;
    PFN_SERCX2_SYSTEM_DMA_TRANSMIT_INITIALIZE_TRANSACTION
                                                EvtSerCx2SystemDmaTransmitInitializeTransaction;
    PFN_SERCX2_SYSTEM_DMA_TRANSMIT_CLEANUP_TRANSACTION
                                                EvtSerCx2SystemDmaTransmitCleanupTransaction;
    PFN_SERCX2_SYSTEM_DMA_TRANSMIT_CONFIGURE_DMA_CHANNEL
                                                EvtSerCx2SystemDmaTransmitConfigureDmaChannel;
    PFN_SERCX2_SYSTEM_DMA_TRANSMIT_DRAIN_FIFO
                                                EvtSerCx2SystemDmaTransmitDrainFifo;
    PFN_SERCX2_SYSTEM_DMA_TRANSMIT_CANCEL_DRAIN_FIFO
                                                EvtSerCx2SystemDmaTransmitCancelDrainFifo;
    PFN_SERCX2_SYSTEM_DMA_TRANSMIT_PURGE_FIFO
                                                EvtSerCx2SystemDmaTransmitPurgeFifo;
}
SERCX2_SYSTEM_DMA_TRANSMIT_CONFIG, *PSERCX2_SYSTEM_DMA_TRANSMIT_CONFIG;
VOID FORCEINLINE
SERCX2_SYSTEM_DMA_TRANSMIT_CONFIG_INIT(
    _Out_ SERCX2_SYSTEM_DMA_TRANSMIT_CONFIG *Config,
    _In_ size_t MaximumTransferLength,
    _In_ PHYSICAL_ADDRESS Address,
    _In_ DMA_WIDTH DmaWidth,
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor
    )
{
    RtlZeroMemory(Config, sizeof(SERCX2_SYSTEM_DMA_TRANSMIT_CONFIG));
    Config->Size = sizeof(SERCX2_SYSTEM_DMA_TRANSMIT_CONFIG);
    Config->MaximumTransferLength = MaximumTransferLength;
    Config->DeviceAddress = Address;
    Config->DmaWidth = DmaWidth;
    Config->DmaDescriptor = DmaDescriptor;
}
typedef struct _SERCX2_SYSTEM_DMA_RECEIVE_CONFIG
{
    ULONG Size;
    size_t MaximumTransferLength;
    size_t MinimumTransactionLength;
    ULONG DmaAlignment;
    ULONG MaximumScatterGatherFragments;
    DMA_WIDTH DmaWidth;
    PHYSICAL_ADDRESS DeviceAddress;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor;
    ULONG MinimumTransferUnitOverride;
    BOOLEAN Exclusive;
    PFN_SERCX2_SYSTEM_DMA_RECEIVE_INITIALIZE_TRANSACTION
                                                EvtSerCx2SystemDmaReceiveInitializeTransaction;
    PFN_SERCX2_SYSTEM_DMA_RECEIVE_CLEANUP_TRANSACTION
                                                EvtSerCx2SystemDmaReceiveCleanupTransaction;
    PFN_SERCX2_SYSTEM_DMA_RECEIVE_CONFIGURE_DMA_CHANNEL
                                                EvtSerCx2SystemDmaReceiveConfigureDmaChannel;
    PFN_SERCX2_SYSTEM_DMA_RECEIVE_ENABLE_NEW_DATA_NOTIFICATION
                                                EvtSerCx2SystemDmaReceiveEnableNewDataNotification;
    PFN_SERCX2_SYSTEM_DMA_RECEIVE_CANCEL_NEW_DATA_NOTIFICATION
                                                EvtSerCx2SystemDmaReceiveCancelNewDataNotification;
}
SERCX2_SYSTEM_DMA_RECEIVE_CONFIG, *PSERCX2_SYSTEM_DMA_RECEIVE_CONFIG;
VOID FORCEINLINE
SERCX2_SYSTEM_DMA_RECEIVE_CONFIG_INIT(
    _Out_ SERCX2_SYSTEM_DMA_RECEIVE_CONFIG *Config,
    _In_ size_t MaximumTransferLength,
    _In_ PHYSICAL_ADDRESS Address,
    _In_ DMA_WIDTH DmaWidth,
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor
    )
{
    RtlZeroMemory(Config, sizeof(SERCX2_SYSTEM_DMA_RECEIVE_CONFIG));
    Config->Size = sizeof(SERCX2_SYSTEM_DMA_RECEIVE_CONFIG);
    Config->MaximumTransferLength = MaximumTransferLength;
    Config->DeviceAddress = Address;
    Config->DmaWidth = DmaWidth;
    Config->DmaDescriptor = DmaDescriptor;
}
VOID FORCEINLINE
SERCX2_SYSTEM_DMA_RECEIVE_CONFIG_INIT_NEW_DATA_NOTIFICATION(
    _Out_ SERCX2_SYSTEM_DMA_RECEIVE_CONFIG *Config,
    _In_ size_t MaximumTransferLength,
    _In_ PHYSICAL_ADDRESS Address,
    _In_ DMA_WIDTH DmaWidth,
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor,
    _In_ PFN_SERCX2_SYSTEM_DMA_RECEIVE_ENABLE_NEW_DATA_NOTIFICATION
                                            EvtSerCx2SystemDmaReceiveEnableNewDataNotification,
    _In_ PFN_SERCX2_SYSTEM_DMA_RECEIVE_CANCEL_NEW_DATA_NOTIFICATION
                                            EvtSerCx2SystemDmaReceiveCancelNewDataNotification
    )
{
    RtlZeroMemory(Config, sizeof(SERCX2_SYSTEM_DMA_RECEIVE_CONFIG));
    Config->Size = sizeof(SERCX2_SYSTEM_DMA_RECEIVE_CONFIG);
    Config->MaximumTransferLength = MaximumTransferLength;
    Config->DeviceAddress = Address;
    Config->DmaWidth = DmaWidth;
    Config->DmaDescriptor = DmaDescriptor;
    Config->EvtSerCx2SystemDmaReceiveEnableNewDataNotification =
        EvtSerCx2SystemDmaReceiveEnableNewDataNotification;
    Config->EvtSerCx2SystemDmaReceiveCancelNewDataNotification =
        EvtSerCx2SystemDmaReceiveCancelNewDataNotification;
}
typedef struct _SERCX2_PIO_TRANSMIT_CONFIG
{
    ULONG Size;
    PFN_SERCX2_PIO_TRANSMIT_INITIALIZE_TRANSACTION EvtSerCx2PioTransmitInitializeTransaction;
    PFN_SERCX2_PIO_TRANSMIT_CLEANUP_TRANSACTION EvtSerCx2PioTransmitCleanupTransaction;
    PFN_SERCX2_PIO_TRANSMIT_WRITE_BUFFER EvtSerCx2PioTransmitWriteBuffer;
    PFN_SERCX2_PIO_TRANSMIT_ENABLE_READY_NOTIFICATION EvtSerCx2PioTransmitEnableReadyNotification;
    PFN_SERCX2_PIO_TRANSMIT_CANCEL_READY_NOTIFICATION EvtSerCx2PioTransmitCancelReadyNotification;
    PFN_SERCX2_PIO_TRANSMIT_DRAIN_FIFO EvtSerCx2PioTransmitDrainFifo;
    PFN_SERCX2_PIO_TRANSMIT_CANCEL_DRAIN_FIFO EvtSerCx2PioTransmitCancelDrainFifo;
    PFN_SERCX2_PIO_TRANSMIT_PURGE_FIFO EvtSerCx2PioTransmitPurgeFifo;
}
SERCX2_PIO_TRANSMIT_CONFIG, *PSERCX2_PIO_TRANSMIT_CONFIG;
VOID FORCEINLINE
SERCX2_PIO_TRANSMIT_CONFIG_INIT(
    _Out_ SERCX2_PIO_TRANSMIT_CONFIG *PioTransmitConfig,
    _In_ PFN_SERCX2_PIO_TRANSMIT_WRITE_BUFFER EvtSerCx2PioTransmitWriteBuffer,
    _In_ PFN_SERCX2_PIO_TRANSMIT_ENABLE_READY_NOTIFICATION EvtSerCx2PioTransmitEnableReadyNotification,
    _In_ PFN_SERCX2_PIO_TRANSMIT_CANCEL_READY_NOTIFICATION EvtSerCx2PioTransmitCancelReadyNotification
    )
{
    RtlZeroMemory(PioTransmitConfig, sizeof(SERCX2_PIO_TRANSMIT_CONFIG));
    PioTransmitConfig->Size = sizeof(SERCX2_PIO_TRANSMIT_CONFIG);
    PioTransmitConfig->EvtSerCx2PioTransmitWriteBuffer = EvtSerCx2PioTransmitWriteBuffer;
    PioTransmitConfig->EvtSerCx2PioTransmitEnableReadyNotification =
        EvtSerCx2PioTransmitEnableReadyNotification;
    PioTransmitConfig->EvtSerCx2PioTransmitCancelReadyNotification =
        EvtSerCx2PioTransmitCancelReadyNotification;
}
typedef struct _SERCX2_PIO_RECEIVE_CONFIG
{
    ULONG Size;
    PFN_SERCX2_PIO_RECEIVE_INITIALIZE_TRANSACTION EvtSerCx2PioReceiveInitializeTransaction;
    PFN_SERCX2_PIO_RECEIVE_CLEANUP_TRANSACTION EvtSerCx2PioReceiveCleanupTransaction;
    PFN_SERCX2_PIO_RECEIVE_READ_BUFFER EvtSerCx2PioReceiveReadBuffer;
    PFN_SERCX2_PIO_RECEIVE_ENABLE_READY_NOTIFICATION EvtSerCx2PioReceiveEnableReadyNotification;
    PFN_SERCX2_PIO_RECEIVE_CANCEL_READY_NOTIFICATION EvtSerCx2PioReceiveCancelReadyNotification;
}
SERCX2_PIO_RECEIVE_CONFIG, *PSERCX2_PIO_RECEIVE_CONFIG;
VOID FORCEINLINE
SERCX2_PIO_RECEIVE_CONFIG_INIT(
    _Out_ SERCX2_PIO_RECEIVE_CONFIG *PioReceiveConfig,
    _In_ PFN_SERCX2_PIO_RECEIVE_READ_BUFFER EvtSerCx2PioReceiveReadBuffer,
    _In_ PFN_SERCX2_PIO_RECEIVE_ENABLE_READY_NOTIFICATION EvtSerCx2PioReceiveEnableReadyNotification,
    _In_ PFN_SERCX2_PIO_RECEIVE_CANCEL_READY_NOTIFICATION EvtSerCx2PioReceiveCancelReadyNotification
    )
{
    RtlZeroMemory(PioReceiveConfig, sizeof(SERCX2_PIO_RECEIVE_CONFIG));
    PioReceiveConfig->Size = sizeof(SERCX2_PIO_RECEIVE_CONFIG);
    PioReceiveConfig->EvtSerCx2PioReceiveReadBuffer = EvtSerCx2PioReceiveReadBuffer;
    PioReceiveConfig->EvtSerCx2PioReceiveEnableReadyNotification =
        EvtSerCx2PioReceiveEnableReadyNotification;
    PioReceiveConfig->EvtSerCx2PioReceiveCancelReadyNotification =
        EvtSerCx2PioReceiveCancelReadyNotification;
}
typedef
_Function_class_(EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_INITIALIZE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_INITIALIZE(
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction,
    _In_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_INITIALIZE *PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_INITIALIZE;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_INITIALIZE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_INITIALIZE(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction,
    _In_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_INITIALIZE *PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_INITIALIZE;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_START)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_START(
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction,
    _In_
    WDFREQUEST Request,
    _In_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_START *PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_START;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_START)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_START(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction,
    _In_
    WDFREQUEST Request,
    _In_
    PMDL Mdl,
    _In_
    ULONG Offset,
    _In_
    ULONG Length
    );
typedef EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_START *PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_START;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CLEANUP)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CLEANUP(
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction
    );
typedef EVT_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CLEANUP *PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CLEANUP;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_CLEANUP)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_CLEANUP(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    );
typedef EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_CLEANUP *PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_CLEANUP;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_ENABLE_NEW_DATA_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_ENABLE_NEW_DATA_NOTIFICATION(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    );
typedef EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_ENABLE_NEW_DATA_NOTIFICATION *PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_ENABLE_NEW_DATA_NOTIFICATION;
typedef
_Function_class_(EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_QUERY_PROGRESS)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_QUERY_PROGRESS(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    );
typedef EVT_SERCX2_CUSTOM_RECEIVE_TRANSACTION_QUERY_PROGRESS *PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_QUERY_PROGRESS;
typedef struct _SERCX2_CUSTOM_RECEIVE_CONFIG
{
    ULONG Size;
    ULONG Alignment;
    ULONG MinimumTransactionLength;
    ULONG MaximumTransactionLength;
    ULONG MinimumTransferUnit;
    BOOLEAN Exclusive;
}
SERCX2_CUSTOM_RECEIVE_CONFIG, *PSERCX2_CUSTOM_RECEIVE_CONFIG;
VOID FORCEINLINE
SERCX2_CUSTOM_RECEIVE_CONFIG_INIT(
    _Out_ SERCX2_CUSTOM_RECEIVE_CONFIG *Config
)
{
    RtlZeroMemory(Config, sizeof(SERCX2_CUSTOM_RECEIVE_CONFIG));
    Config->Size = sizeof(SERCX2_CUSTOM_RECEIVE_CONFIG);
}
typedef struct _SERCX2_CUSTOM_TRANSMIT_CONFIG
{
    ULONG Size;
    ULONG Alignment;
    ULONG MinimumTransactionLength;
    ULONG MaximumTransactionLength;
    ULONG MinimumTransferUnit;
    BOOLEAN Exclusive;
}
SERCX2_CUSTOM_TRANSMIT_CONFIG, *PSERCX2_CUSTOM_TRANSMIT_CONFIG;
VOID FORCEINLINE
SERCX2_CUSTOM_TRANSMIT_CONFIG_INIT(
    _Out_ SERCX2_CUSTOM_TRANSMIT_CONFIG *Config
)
{
    RtlZeroMemory(Config, sizeof(SERCX2_CUSTOM_TRANSMIT_CONFIG));
    Config->Size = sizeof(SERCX2_CUSTOM_TRANSMIT_CONFIG);
}
typedef struct _SERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG
{
    ULONG Size;
    PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_INITIALIZE
               EvtSerCx2CustomReceiveTransactionInitialize;
    PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_START
               EvtSerCx2CustomReceiveTransactionStart;
    PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_CLEANUP
               EvtSerCx2CustomReceiveTransactionCleanup;
    PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_ENABLE_NEW_DATA_NOTIFICATION
               EvtSerCx2CustomReceiveTransactionEnableNewDataNotification;
    PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_QUERY_PROGRESS
               EvtSerCx2CustomReceiveTransactionQueryProgress;
}
SERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG, *PSERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG;
VOID FORCEINLINE
SERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG_INIT(
    _Out_ SERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG
              *Config,
    _In_ PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_START
               EvtSerCx2CustomReceiveTransactionStart,
    _In_opt_ PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_ENABLE_NEW_DATA_NOTIFICATION
               EvtSerCx2CustomReceiveTransactionEnableNewDataNotification,
    _In_ PFN_SERCX2_CUSTOM_RECEIVE_TRANSACTION_QUERY_PROGRESS
               EvtSerCx2CustomReceiveTransactionQueryProgress
)
{
    RtlZeroMemory(Config, sizeof(SERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG));
    Config->Size = sizeof(SERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG);
    Config->EvtSerCx2CustomReceiveTransactionStart =
               EvtSerCx2CustomReceiveTransactionStart;
    Config->EvtSerCx2CustomReceiveTransactionEnableNewDataNotification =
               EvtSerCx2CustomReceiveTransactionEnableNewDataNotification;
    Config->EvtSerCx2CustomReceiveTransactionQueryProgress =
               EvtSerCx2CustomReceiveTransactionQueryProgress;
}
typedef struct _SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG
{
    ULONG Size;
    PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_INITIALIZE EvtSerCx2CustomTransmitTransactionInitialize;
    PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_START EvtSerCx2CustomTransmitTransactionStart;
    PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CLEANUP EvtSerCx2CustomTransmitTransactionCleanup;
}
SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG, *PSERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG;
VOID FORCEINLINE
SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG_INIT(
    _Out_ SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG *Config,
    _In_ PFN_SERCX2_CUSTOM_TRANSMIT_TRANSACTION_START EvtSerCx2CustomTransmitTransactionStart
)
{
    RtlZeroMemory(Config, sizeof(SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG));
    Config->Size = sizeof(SERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG);
    Config->EvtSerCx2CustomTransmitTransactionStart = EvtSerCx2CustomTransmitTransactionStart;
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2INITIALIZEDEVICEINIT)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2InitializeDeviceInit(
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_SERCX2INITIALIZEDEVICEINIT) SercxFunctions[SerCx2InitializeDeviceInitTableIndex])(SercxDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2INITIALIZEDEVICE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2InitializeDevice(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_CONFIG Config
    )
{
    return ((PFN_SERCX2INITIALIZEDEVICE) SercxFunctions[SerCx2InitializeDeviceTableIndex])(SercxDriverGlobals, Device, Config);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2COMPLETEWAIT)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Event
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CompleteWait(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG Event
    )
{
    ((PFN_SERCX2COMPLETEWAIT) SercxFunctions[SerCx2CompleteWaitTableIndex])(SercxDriverGlobals, Device, Event);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2PIOTRANSMITCREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_PIO_TRANSMIT_CONFIG PioTransmitConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2PIOTRANSMIT* PioTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2PioTransmitCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_PIO_TRANSMIT_CONFIG PioTransmitConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2PIOTRANSMIT* PioTransmit
    )
{
    return ((PFN_SERCX2PIOTRANSMITCREATE) SercxFunctions[SerCx2PioTransmitCreateTableIndex])(SercxDriverGlobals, Device, PioTransmitConfig, Attributes, PioTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2PIORECEIVECREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_PIO_RECEIVE_CONFIG PioReceiveConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2PIORECEIVE* PioReceive
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2PioReceiveCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_PIO_RECEIVE_CONFIG PioReceiveConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2PIORECEIVE* PioReceive
    )
{
    return ((PFN_SERCX2PIORECEIVECREATE) SercxFunctions[SerCx2PioReceiveCreateTableIndex])(SercxDriverGlobals, Device, PioReceiveConfig, Attributes, PioReceive);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2SYSTEMDMATRANSMITCREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_SYSTEM_DMA_TRANSMIT_CONFIG SystemDmaTransmitConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2SYSTEMDMATRANSMIT* SystemDmaTransmit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2SystemDmaTransmitCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_SYSTEM_DMA_TRANSMIT_CONFIG SystemDmaTransmitConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2SYSTEMDMATRANSMIT* SystemDmaTransmit
    )
{
    return ((PFN_SERCX2SYSTEMDMATRANSMITCREATE) SercxFunctions[SerCx2SystemDmaTransmitCreateTableIndex])(SercxDriverGlobals, Device, SystemDmaTransmitConfig, Attributes, SystemDmaTransmit);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2SYSTEMDMARECEIVECREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_SYSTEM_DMA_RECEIVE_CONFIG SystemDmaReceiveConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2SYSTEMDMARECEIVE* SystemDmaReceive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2SystemDmaReceiveCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_SYSTEM_DMA_RECEIVE_CONFIG SystemDmaReceiveConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2SYSTEMDMARECEIVE* SystemDmaReceive
    )
{
    return ((PFN_SERCX2SYSTEMDMARECEIVECREATE) SercxFunctions[SerCx2SystemDmaReceiveCreateTableIndex])(SercxDriverGlobals, Device, SystemDmaReceiveConfig, Attributes, SystemDmaReceive);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFDMAENABLER
(*PFN_SERCX2SYSTEMDMATRANSMITGETDMAENABLER)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFDMAENABLER
FORCEINLINE
SerCx2SystemDmaTransmitGetDmaEnabler(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    )
{
    return ((PFN_SERCX2SYSTEMDMATRANSMITGETDMAENABLER) SercxFunctions[SerCx2SystemDmaTransmitGetDmaEnablerTableIndex])(SercxDriverGlobals, SystemDmaTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFDMAENABLER
(*PFN_SERCX2SYSTEMDMARECEIVEGETDMAENABLER)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFDMAENABLER
FORCEINLINE
SerCx2SystemDmaReceiveGetDmaEnabler(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    )
{
    return ((PFN_SERCX2SYSTEMDMARECEIVEGETDMAENABLER) SercxFunctions[SerCx2SystemDmaReceiveGetDmaEnablerTableIndex])(SercxDriverGlobals, SystemDmaReceive);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMATRANSMITINITIALIZETRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_
    BOOLEAN InitSuccess
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaTransmitInitializeTransactionComplete(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_
    BOOLEAN InitSuccess
    )
{
    ((PFN_SERCX2SYSTEMDMATRANSMITINITIALIZETRANSACTIONCOMPLETE) SercxFunctions[SerCx2SystemDmaTransmitInitializeTransactionCompleteTableIndex])(SercxDriverGlobals, SystemDmaTransmit, InitSuccess);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMARECEIVEINITIALIZETRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive,
    _In_
    BOOLEAN InitSuccess
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaReceiveInitializeTransactionComplete(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive,
    _In_
    BOOLEAN InitSuccess
    )
{
    ((PFN_SERCX2SYSTEMDMARECEIVEINITIALIZETRANSACTIONCOMPLETE) SercxFunctions[SerCx2SystemDmaReceiveInitializeTransactionCompleteTableIndex])(SercxDriverGlobals, SystemDmaReceive, InitSuccess);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMATRANSMITCLEANUPTRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaTransmitCleanupTransactionComplete(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    )
{
    ((PFN_SERCX2SYSTEMDMATRANSMITCLEANUPTRANSACTIONCOMPLETE) SercxFunctions[SerCx2SystemDmaTransmitCleanupTransactionCompleteTableIndex])(SercxDriverGlobals, SystemDmaTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMARECEIVECLEANUPTRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaReceiveCleanupTransactionComplete(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    )
{
    ((PFN_SERCX2SYSTEMDMARECEIVECLEANUPTRANSACTIONCOMPLETE) SercxFunctions[SerCx2SystemDmaReceiveCleanupTransactionCompleteTableIndex])(SercxDriverGlobals, SystemDmaReceive);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMARECEIVENEWDATANOTIFICATION)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaReceiveNewDataNotification(
    _In_
    SERCX2SYSTEMDMARECEIVE SystemDmaReceive
    )
{
    ((PFN_SERCX2SYSTEMDMARECEIVENEWDATANOTIFICATION) SercxFunctions[SerCx2SystemDmaReceiveNewDataNotificationTableIndex])(SercxDriverGlobals, SystemDmaReceive);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIOTRANSMITINITIALIZETRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_
    BOOLEAN InitSuccess
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioTransmitInitializeTransactionComplete(
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_
    BOOLEAN InitSuccess
    )
{
    ((PFN_SERCX2PIOTRANSMITINITIALIZETRANSACTIONCOMPLETE) SercxFunctions[SerCx2PioTransmitInitializeTransactionCompleteTableIndex])(SercxDriverGlobals, PioTransmit, InitSuccess);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIORECEIVEINITIALIZETRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIORECEIVE PioReceive,
    _In_
    BOOLEAN InitSuccess
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioReceiveInitializeTransactionComplete(
    _In_
    SERCX2PIORECEIVE PioReceive,
    _In_
    BOOLEAN InitSuccess
    )
{
    ((PFN_SERCX2PIORECEIVEINITIALIZETRANSACTIONCOMPLETE) SercxFunctions[SerCx2PioReceiveInitializeTransactionCompleteTableIndex])(SercxDriverGlobals, PioReceive, InitSuccess);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIOTRANSMITCLEANUPTRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioTransmitCleanupTransactionComplete(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    )
{
    ((PFN_SERCX2PIOTRANSMITCLEANUPTRANSACTIONCOMPLETE) SercxFunctions[SerCx2PioTransmitCleanupTransactionCompleteTableIndex])(SercxDriverGlobals, PioTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIORECEIVECLEANUPTRANSACTIONCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIORECEIVE PioReceive
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioReceiveCleanupTransactionComplete(
    _In_
    SERCX2PIORECEIVE PioReceive
    )
{
    ((PFN_SERCX2PIORECEIVECLEANUPTRANSACTIONCOMPLETE) SercxFunctions[SerCx2PioReceiveCleanupTransactionCompleteTableIndex])(SercxDriverGlobals, PioReceive);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIOTRANSMITREADY)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioTransmitReady(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    )
{
    ((PFN_SERCX2PIOTRANSMITREADY) SercxFunctions[SerCx2PioTransmitReadyTableIndex])(SercxDriverGlobals, PioTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIORECEIVEREADY)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIORECEIVE PioReceive
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioReceiveReady(
    _In_
    SERCX2PIORECEIVE PioReceive
    )
{
    ((PFN_SERCX2PIORECEIVEREADY) SercxFunctions[SerCx2PioReceiveReadyTableIndex])(SercxDriverGlobals, PioReceive);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SAVERECEIVEFIFOOND0EXIT)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIORECEIVE PioReceive,
    _In_
    ULONG FifoSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
SerCx2SaveReceiveFifoOnD0Exit(
    _In_
    SERCX2PIORECEIVE PioReceive,
    _In_
    ULONG FifoSize
    )
{
    ((PFN_SERCX2SAVERECEIVEFIFOOND0EXIT) SercxFunctions[SerCx2SaveReceiveFifoOnD0ExitTableIndex])(SercxDriverGlobals, PioReceive, FifoSize);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIOTRANSMITDRAINFIFOCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioTransmitDrainFifoComplete(
    _In_
    SERCX2PIOTRANSMIT PioTransmit
    )
{
    ((PFN_SERCX2PIOTRANSMITDRAINFIFOCOMPLETE) SercxFunctions[SerCx2PioTransmitDrainFifoCompleteTableIndex])(SercxDriverGlobals, PioTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2PIOTRANSMITPURGEFIFOCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_
    ULONG BytesPurged
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2PioTransmitPurgeFifoComplete(
    _In_
    SERCX2PIOTRANSMIT PioTransmit,
    _In_
    ULONG BytesPurged
    )
{
    ((PFN_SERCX2PIOTRANSMITPURGEFIFOCOMPLETE) SercxFunctions[SerCx2PioTransmitPurgeFifoCompleteTableIndex])(SercxDriverGlobals, PioTransmit, BytesPurged);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMATRANSMITDRAINFIFOCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaTransmitDrainFifoComplete(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit
    )
{
    ((PFN_SERCX2SYSTEMDMATRANSMITDRAINFIFOCOMPLETE) SercxFunctions[SerCx2SystemDmaTransmitDrainFifoCompleteTableIndex])(SercxDriverGlobals, SystemDmaTransmit);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2SYSTEMDMATRANSMITPURGEFIFOCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_
    ULONG BytesPurged
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2SystemDmaTransmitPurgeFifoComplete(
    _In_
    SERCX2SYSTEMDMATRANSMIT SystemDmaTransmit,
    _In_
    ULONG BytesPurged
    )
{
    ((PFN_SERCX2SYSTEMDMATRANSMITPURGEFIFOCOMPLETE) SercxFunctions[SerCx2SystemDmaTransmitPurgeFifoCompleteTableIndex])(SercxDriverGlobals, SystemDmaTransmit, BytesPurged);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2CUSTOMTRANSMITCREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_CUSTOM_TRANSMIT_CONFIG CustomTransmitConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMTRANSMIT* CustomTransmit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2CustomTransmitCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_CUSTOM_TRANSMIT_CONFIG CustomTransmitConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMTRANSMIT* CustomTransmit
    )
{
    return ((PFN_SERCX2CUSTOMTRANSMITCREATE) SercxFunctions[SerCx2CustomTransmitCreateTableIndex])(SercxDriverGlobals, Device, CustomTransmitConfig, Attributes, CustomTransmit);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2CUSTOMRECEIVECREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_CUSTOM_RECEIVE_CONFIG CustomReceiveConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMRECEIVE* CustomReceive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2CustomReceiveCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PSERCX2_CUSTOM_RECEIVE_CONFIG CustomReceiveConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMRECEIVE* CustomReceive
    )
{
    return ((PFN_SERCX2CUSTOMRECEIVECREATE) SercxFunctions[SerCx2CustomReceiveCreateTableIndex])(SercxDriverGlobals, Device, CustomReceiveConfig, Attributes, CustomReceive);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2CUSTOMTRANSMITTRANSACTIONCREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMTRANSMIT CustomTransmit,
    _In_
    PSERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG CustomTransmitTransactionConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMTRANSMITTRANSACTION* CustomTransmitTransaction
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2CustomTransmitTransactionCreate(
    _In_
    SERCX2CUSTOMTRANSMIT CustomTransmit,
    _In_
    PSERCX2_CUSTOM_TRANSMIT_TRANSACTION_CONFIG CustomTransmitTransactionConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMTRANSMITTRANSACTION* CustomTransmitTransaction
    )
{
    return ((PFN_SERCX2CUSTOMTRANSMITTRANSACTIONCREATE) SercxFunctions[SerCx2CustomTransmitTransactionCreateTableIndex])(SercxDriverGlobals, CustomTransmit, CustomTransmitTransactionConfig, Attributes, CustomTransmitTransaction);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_SERCX2CUSTOMRECEIVETRANSACTIONCREATE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMRECEIVE CustomReceive,
    _In_
    PSERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG CustomReceiveTransactionConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMRECEIVETRANSACTION* CustomReceiveTransaction
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
SerCx2CustomReceiveTransactionCreate(
    _In_
    SERCX2CUSTOMRECEIVE CustomReceive,
    _In_
    PSERCX2_CUSTOM_RECEIVE_TRANSACTION_CONFIG CustomReceiveTransactionConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    SERCX2CUSTOMRECEIVETRANSACTION* CustomReceiveTransaction
    )
{
    return ((PFN_SERCX2CUSTOMRECEIVETRANSACTIONCREATE) SercxFunctions[SerCx2CustomReceiveTransactionCreateTableIndex])(SercxDriverGlobals, CustomReceive, CustomReceiveTransactionConfig, Attributes, CustomReceiveTransaction);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2CUSTOMTRANSMITTRANSACTIONINITIALIZECOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction,
    _In_
    BOOLEAN InitSuccess
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CustomTransmitTransactionInitializeComplete(
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction,
    _In_
    BOOLEAN InitSuccess
    )
{
    ((PFN_SERCX2CUSTOMTRANSMITTRANSACTIONINITIALIZECOMPLETE) SercxFunctions[SerCx2CustomTransmitTransactionInitializeCompleteTableIndex])(SercxDriverGlobals, CustomTransmitTransaction, InitSuccess);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2CUSTOMRECEIVETRANSACTIONINITIALIZECOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction,
    _In_
    BOOLEAN InitSuccess
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CustomReceiveTransactionInitializeComplete(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction,
    _In_
    BOOLEAN InitSuccess
    )
{
    ((PFN_SERCX2CUSTOMRECEIVETRANSACTIONINITIALIZECOMPLETE) SercxFunctions[SerCx2CustomReceiveTransactionInitializeCompleteTableIndex])(SercxDriverGlobals, CustomReceiveTransaction, InitSuccess);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2CUSTOMTRANSMITTRANSACTIONCLEANUPCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CustomTransmitTransactionCleanupComplete(
    _In_
    SERCX2CUSTOMTRANSMITTRANSACTION CustomTransmitTransaction
    )
{
    ((PFN_SERCX2CUSTOMTRANSMITTRANSACTIONCLEANUPCOMPLETE) SercxFunctions[SerCx2CustomTransmitTransactionCleanupCompleteTableIndex])(SercxDriverGlobals, CustomTransmitTransaction);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2CUSTOMRECEIVETRANSACTIONCLEANUPCOMPLETE)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CustomReceiveTransactionCleanupComplete(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    )
{
    ((PFN_SERCX2CUSTOMRECEIVETRANSACTIONCLEANUPCOMPLETE) SercxFunctions[SerCx2CustomReceiveTransactionCleanupCompleteTableIndex])(SercxDriverGlobals, CustomReceiveTransaction);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2CUSTOMRECEIVETRANSACTIONNEWDATANOTIFICATION)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CustomReceiveTransactionNewDataNotification(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction
    )
{
    ((PFN_SERCX2CUSTOMRECEIVETRANSACTIONNEWDATANOTIFICATION) SercxFunctions[SerCx2CustomReceiveTransactionNewDataNotificationTableIndex])(SercxDriverGlobals, CustomReceiveTransaction);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_SERCX2CUSTOMRECEIVETRANSACTIONREPORTPROGRESS)(
    _In_
    PSERCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction,
    _In_
    SERCX2_CUSTOM_RECEIVE_TRANSACTION_PROGRESS Progress
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
SerCx2CustomReceiveTransactionReportProgress(
    _In_
    SERCX2CUSTOMRECEIVETRANSACTION CustomReceiveTransaction,
    _In_
    SERCX2_CUSTOM_RECEIVE_TRANSACTION_PROGRESS Progress
    )
{
    ((PFN_SERCX2CUSTOMRECEIVETRANSACTIONREPORTPROGRESS) SercxFunctions[SerCx2CustomReceiveTransactionReportProgressTableIndex])(SercxDriverGlobals, CustomReceiveTransaction, Progress);
}
WDF_EXTERN_C_END
