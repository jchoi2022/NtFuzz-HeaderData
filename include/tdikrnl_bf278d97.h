       
#include <tdi.h>
#include <netpnp.h>
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _TDI_REQUEST_KERNEL {
    ULONG_PTR RequestFlags;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
    PTDI_CONNECTION_INFORMATION ReturnConnectionInformation;
    PVOID RequestSpecific;
} TDI_REQUEST_KERNEL, *PTDI_REQUEST_KERNEL;
typedef struct _TDI_REQUEST_KERNEL_ASSOCIATE {
    HANDLE AddressHandle;
} TDI_REQUEST_KERNEL_ASSOCIATE, *PTDI_REQUEST_KERNEL_ASSOCIATE;
typedef TDI_REQUEST_KERNEL TDI_REQUEST_KERNEL_DISASSOCIATE,
    *PTDI_REQUEST_KERNEL_DISASSOCIATE;
typedef TDI_REQUEST_KERNEL TDI_REQUEST_KERNEL_CONNECT,
    *PTDI_REQUEST_KERNEL_CONNECT;
typedef TDI_REQUEST_KERNEL TDI_REQUEST_KERNEL_DISCONNECT,
    *PTDI_REQUEST_KERNEL_DISCONNECT;
typedef TDI_REQUEST_KERNEL TDI_REQUEST_KERNEL_LISTEN,
    *PTDI_REQUEST_KERNEL_LISTEN;
typedef struct _TDI_REQUEST_KERNEL_ACCEPT {
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
    PTDI_CONNECTION_INFORMATION ReturnConnectionInformation;
} TDI_REQUEST_KERNEL_ACCEPT, *PTDI_REQUEST_KERNEL_ACCEPT;
typedef struct _TDI_REQUEST_KERNEL_SEND {
    ULONG SendLength;
    ULONG SendFlags;
} TDI_REQUEST_KERNEL_SEND, *PTDI_REQUEST_KERNEL_SEND;
typedef struct _TDI_REQUEST_KERNEL_RECEIVE {
    ULONG ReceiveLength;
    ULONG ReceiveFlags;
} TDI_REQUEST_KERNEL_RECEIVE, *PTDI_REQUEST_KERNEL_RECEIVE;
typedef struct _TDI_REQUEST_KERNEL_SENDDG {
    ULONG SendLength;
    _Field_size_bytes_(SendLength) PTDI_CONNECTION_INFORMATION SendDatagramInformation;
} TDI_REQUEST_KERNEL_SENDDG, *PTDI_REQUEST_KERNEL_SENDDG;
typedef struct _TDI_REQUEST_KERNEL_RECEIVEDG {
    ULONG ReceiveLength;
    PTDI_CONNECTION_INFORMATION ReceiveDatagramInformation;
    PTDI_CONNECTION_INFORMATION ReturnDatagramInformation;
    ULONG ReceiveFlags;
} TDI_REQUEST_KERNEL_RECEIVEDG, *PTDI_REQUEST_KERNEL_RECEIVEDG;
typedef struct _TDI_REQUEST_KERNEL_SET_EVENT {
    LONG EventType;
    PVOID EventHandler;
    PVOID EventContext;
} TDI_REQUEST_KERNEL_SET_EVENT, *PTDI_REQUEST_KERNEL_SET_EVENT;
typedef struct _TDI_REQUEST_KERNEL_QUERY_INFO {
    LONG QueryType;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
} TDI_REQUEST_KERNEL_QUERY_INFORMATION, *PTDI_REQUEST_KERNEL_QUERY_INFORMATION;
typedef struct _TDI_REQUEST_KERNEL_SET_INFO {
    LONG SetType;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
} TDI_REQUEST_KERNEL_SET_INFORMATION, *PTDI_REQUEST_KERNEL_SET_INFORMATION;
typedef
NTSTATUS
(*PTDI_IND_CONNECT)(
    _In_opt_ PVOID TdiEventContext,
    _In_ LONG RemoteAddressLength,
    _In_reads_bytes_(RemoteAddressLength) PVOID RemoteAddress,
    _In_ LONG UserDataLength,
    _In_reads_bytes_opt_(UserDataLength) PVOID UserData,
    _In_ LONG OptionsLength,
    _In_reads_bytes_opt_(OptionsLength) PVOID Options,
    _Out_ CONNECTION_CONTEXT *ConnectionContext,
    _Out_ PIRP *AcceptIrp
    );
NTSTATUS
TdiDefaultConnectHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_ LONG RemoteAddressLength,
    _In_reads_bytes_(RemoteAddressLength) PVOID RemoteAddress,
    _In_ LONG UserDataLength,
    _In_reads_bytes_opt_(UserDataLength) PVOID UserData,
    _In_ LONG OptionsLength,
    _In_reads_bytes_opt_(OptionsLength) PVOID Options,
    _Out_ CONNECTION_CONTEXT *ConnectionContext,
    _Out_ PIRP *AcceptIrp
    );
typedef
NTSTATUS
(*PTDI_IND_DISCONNECT)(
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ LONG DisconnectDataLength,
    _In_reads_bytes_opt_(DisconnectDataLength) PVOID DisconnectData,
    _In_ LONG DisconnectInformationLength,
    _In_reads_bytes_opt_(DisconnectInformationLength) PVOID DisconnectInformation,
    _In_ ULONG DisconnectFlags
    );
NTSTATUS
TdiDefaultDisconnectHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ LONG DisconnectDataLength,
    _In_reads_bytes_opt_(DisconnectDataLength) PVOID DisconnectData,
    _In_ LONG DisconnectInformationLength,
    _In_reads_bytes_opt_(DisconnectInformationLength) PVOID DisconnectInformation,
    _In_ ULONG DisconnectFlags
    );
typedef
NTSTATUS
(*PTDI_IND_ERROR)(
    _In_opt_ PVOID TdiEventContext,
    _In_ NTSTATUS Status
    );
typedef
NTSTATUS
(*PTDI_IND_ERROR_EX)(
    _In_opt_ PVOID TdiEventContext,
    _In_ NTSTATUS Status,
    _In_ PVOID Buffer
    );
NTSTATUS
TdiDefaultErrorHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_ NTSTATUS Status
    );
typedef
NTSTATUS
(*PTDI_IND_RECEIVE)(
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG BytesIndicated,
    _In_ ULONG BytesAvailable,
    _Out_ ULONG *BytesTaken,
    _In_ PVOID Tsdu,
    _Out_opt_ PIRP *IoRequestPacket
    );
NTSTATUS
TdiDefaultReceiveHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG BytesIndicated,
    _In_ ULONG BytesAvailable,
    _Out_ ULONG *BytesTaken,
    _In_ PVOID Tsdu,
    _Out_opt_ PIRP *IoRequestPacket
    );
typedef
NTSTATUS
(*PTDI_IND_RECEIVE_DATAGRAM)(
    _In_opt_ PVOID TdiEventContext,
    _In_ LONG SourceAddressLength,
    _In_reads_bytes_(SourceAddressLength) PVOID SourceAddress,
    _In_ LONG OptionsLength,
    _In_reads_bytes_opt_(OptionsLength) PVOID Options,
    _In_ ULONG ReceiveDatagramFlags,
    _In_ ULONG BytesIndicated,
    _In_ ULONG BytesAvailable,
    _Out_ ULONG *BytesTaken,
    _In_ PVOID Tsdu,
    _Out_opt_ PIRP *IoRequestPacket
    );
NTSTATUS
TdiDefaultRcvDatagramHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_ LONG SourceAddressLength,
    _In_reads_bytes_(SourceAddressLength) PVOID SourceAddress,
    _In_ LONG OptionsLength,
    _In_reads_bytes_opt_(OptionsLength) PVOID Options,
    _In_ ULONG ReceiveDatagramFlags,
    _In_ ULONG BytesIndicated,
    _In_ ULONG BytesAvailable,
    _Out_ ULONG *BytesTaken,
    _In_ PVOID Tsdu,
    _Out_opt_ PIRP *IoRequestPacket
    );
typedef
NTSTATUS
(*PTDI_IND_RECEIVE_EXPEDITED)(
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG BytesIndicated,
    _In_ ULONG BytesAvailable,
    _Out_ ULONG *BytesTaken,
    _In_ PVOID Tsdu,
    _Out_opt_ PIRP *IoRequestPacket
    );
NTSTATUS
TdiDefaultRcvExpeditedHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG BytesIndicated,
    _In_ ULONG BytesAvailable,
    _Out_ ULONG *BytesTaken,
    _In_ PVOID Tsdu,
    _Out_opt_ PIRP *IoRequestPacket
    );
typedef
NTSTATUS
(*PTDI_IND_CHAINED_RECEIVE)(
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG ReceiveLength,
    _In_ ULONG StartingOffset,
    _In_ PMDL Tsdu,
    _In_ PVOID TsduDescriptor
    );
NTSTATUS
TdiDefaultChainedReceiveHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG ReceiveLength,
    _In_ ULONG StartingOffset,
    _In_ PMDL Tsdu,
    _In_ PVOID TsduDescriptor
    );
typedef
NTSTATUS
(*PTDI_IND_CHAINED_RECEIVE_DATAGRAM)(
    _In_opt_ PVOID TdiEventContext,
    _In_ LONG SourceAddressLength,
    _In_reads_bytes_(SourceAddressLength) PVOID SourceAddress,
    _In_ LONG OptionsLength,
    _In_reads_bytes_opt_(OptionsLength) PVOID Options,
    _In_ ULONG ReceiveDatagramFlags,
    _In_ ULONG ReceiveDatagramLength,
    _In_ ULONG StartingOffset,
    _In_ PMDL Tsdu,
    _In_ PVOID TsduDescriptor
    );
NTSTATUS
TdiDefaultChainedRcvDatagramHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_ LONG SourceAddressLength,
    _In_reads_bytes_(SourceAddressLength) PVOID SourceAddress,
    _In_ LONG OptionsLength,
    _In_reads_bytes_opt_(OptionsLength) PVOID Options,
    _In_ ULONG ReceiveDatagramFlags,
    _In_ ULONG ReceiveDatagramLength,
    _In_ ULONG StartingOffset,
    _In_ PMDL Tsdu,
    _In_ PVOID TsduDescriptor
    );
typedef
NTSTATUS
(*PTDI_IND_CHAINED_RECEIVE_EXPEDITED)(
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG ReceiveLength,
    _In_ ULONG StartingOffset,
    _In_ PMDL Tsdu,
    _In_ PVOID TsduDescriptor
    );
NTSTATUS
TdiDefaultChainedRcvExpeditedHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ CONNECTION_CONTEXT ConnectionContext,
    _In_ ULONG ReceiveFlags,
    _In_ ULONG ReceiveLength,
    _In_ ULONG StartingOffset,
    _In_ PMDL Tsdu,
    _In_ PVOID TsduDescriptor
    );
typedef
NTSTATUS
(*PTDI_IND_SEND_POSSIBLE)(
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ PVOID ConnectionContext,
    _In_ ULONG BytesAvailable);
NTSTATUS
TdiDefaultSendPossibleHandler (
    _In_opt_ PVOID TdiEventContext,
    _In_opt_ PVOID ConnectionContext,
    _In_ ULONG BytesAvailable);
    { \
        PTDI_REQUEST_KERNEL_ASSOCIATE p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_ASSOCIATE_ADDRESS; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_ASSOCIATE)&_IRPSP->Parameters; \
        p->AddressHandle = (HANDLE)(AddrHandle); \
    }
    { \
        PTDI_REQUEST_KERNEL_DISASSOCIATE p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_DISASSOCIATE_ADDRESS; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_DISASSOCIATE)&_IRPSP->Parameters; \
    }
    { \
        PTDI_REQUEST_KERNEL p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_CONNECT; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL)&_IRPSP->Parameters; \
        p->RequestConnectionInformation = RequestConnectionInfo; \
        p->ReturnConnectionInformation = ReturnConnectionInfo; \
        p->RequestSpecific = (PVOID)Time; \
    }
    { \
        PTDI_REQUEST_KERNEL p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_LISTEN; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL)&_IRPSP->Parameters; \
        p->RequestFlags = Flags; \
        p->RequestConnectionInformation = RequestConnectionInfo; \
        p->ReturnConnectionInformation = ReturnConnectionInfo; \
    }
    { \
        PTDI_REQUEST_KERNEL_ACCEPT p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_ACCEPT; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_ACCEPT)&_IRPSP->Parameters; \
        p->RequestConnectionInformation = RequestConnectionInfo; \
        p->ReturnConnectionInformation = ReturnConnectionInfo; \
    }
    { \
        PTDI_REQUEST_KERNEL p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_DISCONNECT; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL)&_IRPSP->Parameters; \
        p->RequestFlags = Flags; \
        p->RequestConnectionInformation = RequestConnectionInfo; \
        p->ReturnConnectionInformation = ReturnConnectionInfo; \
        p->RequestSpecific = (PVOID)Time; \
    }
    { \
        PTDI_REQUEST_KERNEL_RECEIVE p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_RECEIVE; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_RECEIVE)&_IRPSP->Parameters; \
        p->ReceiveFlags = InFlags; \
        p->ReceiveLength = ReceiveLen; \
        Irp->MdlAddress = MdlAddr; \
    }
    { \
        PTDI_REQUEST_KERNEL_SEND p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_SEND; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_SEND)&_IRPSP->Parameters; \
        p->SendFlags = InFlags; \
        p->SendLength = SendLen; \
        Irp->MdlAddress = MdlAddr; \
    }
    { \
        PTDI_REQUEST_KERNEL_SENDDG p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_SEND_DATAGRAM; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_SENDDG)&_IRPSP->Parameters; \
        p->SendLength = SendLen; \
        p->SendDatagramInformation = SendDatagramInfo; \
        Irp->MdlAddress = MdlAddr; \
    }
    { \
        PTDI_REQUEST_KERNEL_RECEIVEDG p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_RECEIVE_DATAGRAM; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_RECEIVEDG)&_IRPSP->Parameters; \
        p->ReceiveLength = ReceiveLen; \
        p->ReceiveDatagramInformation = ReceiveDatagramInfo; \
        p->ReturnDatagramInformation = ReturnInfo; \
        p->ReceiveFlags = InFlags; \
        Irp->MdlAddress = MdlAddr; \
    }
    { \
        PTDI_REQUEST_KERNEL_SET_EVENT p; \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_SET_EVENT_HANDLER; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_SET_EVENT)&_IRPSP->Parameters; \
        p->EventType = InEventType; \
        p->EventHandler = (PVOID)InEventHandler; \
        p->EventContext = (PVOID)InEventContext; \
    }
    { \
        PTDI_REQUEST_KERNEL_QUERY_INFORMATION p; \
        PIO_STACK_LOCATION _IRPSP; \
        Irp->MdlAddress = MdlAddr; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_QUERY_INFORMATION; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_QUERY_INFORMATION)&_IRPSP->Parameters; \
        p->QueryType = (ULONG)QType; \
        p->RequestConnectionInformation = ConnInfo; \
    }
        TdiBuildQueryInformationEx(Irp, DevObj, FileObj, CompRoutine, Contxt, QType, MdlAddr, NULL);
    { \
        PTDI_REQUEST_KERNEL_SET_INFORMATION p; \
        PIO_STACK_LOCATION _IRPSP; \
        Irp->MdlAddress = MdlAddr; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_SET_INFORMATION; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        p = (PTDI_REQUEST_KERNEL_SET_INFORMATION)&_IRPSP->Parameters; \
        p->SetType = (ULONG)SType; \
        p->RequestConnectionInformation = NULL; \
    }
    { \
        PIO_STACK_LOCATION _IRPSP; \
        if ( CompRoutine != NULL) { \
            IoSetCompletionRoutine( Irp, CompRoutine, Contxt, TRUE, TRUE, TRUE);\
        } else { \
            IoSetCompletionRoutine( Irp, NULL, NULL, FALSE, FALSE, FALSE); \
        } \
        _IRPSP = IoGetNextIrpStackLocation (Irp); \
        _IRPSP->MajorFunction = IRP_MJ_INTERNAL_DEVICE_CONTROL; \
        _IRPSP->MinorFunction = TDI_ACTION; \
        _IRPSP->DeviceObject = DevObj; \
        _IRPSP->FileObject = FileObj; \
        Irp->MdlAddress = MdlAddr; \
    }
    IoBuildDeviceIoControlRequest (\
        0x00000003,\
        DeviceObject, \
        NULL, \
        0, \
        NULL, \
        0, \
        TRUE, \
        Event, \
        IoStatusBlock)
    RtlCopyMemory(_Destination,_Source,_Length)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
TdiMapUserRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ PIO_STACK_LOCATION IrpSp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
TdiCopyBufferToMdl (
    _In_ PVOID SourceBuffer,
    _In_ ULONG SourceOffset,
    _In_ ULONG SourceBytesToCopy,
    _In_ PMDL DestinationMdlChain,
    _In_ ULONG DestinationOffset,
    _Out_ PULONG BytesCopied
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
TdiCopyMdlToBuffer(
    _In_ PMDL SourceMdlChain,
    _In_ ULONG SourceOffset,
    _Out_writes_bytes_(DestinationBufferSize) PVOID DestinationBuffer,
    _In_ ULONG DestinationOffset,
    _In_ ULONG DestinationBufferSize,
    _Out_ PULONG BytesCopied
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
TdiCopyMdlChainToMdlChain(
    _In_ PMDL SourceMdlChain,
    _In_ ULONG SourceOffset,
    _In_ PMDL DestinationMdlChain,
    _In_ ULONG DestinationOffset,
    _Out_ PULONG BytesCopied
    );
VOID
TdiCopyBufferToMdlWithReservedMappingAtDpcLevel(
    _In_ PVOID SourceBuffer,
    _In_ PMDL DestinationMdl,
    _In_ ULONG DestinationOffset,
    _In_ ULONG BytesToCopy
    );
__inline
VOID
TdiCopyBufferToMdlWithReservedMapping(
    _In_ PVOID SourceBuffer,
    _In_ PMDL DestinationMdl,
    _In_ ULONG DestinationOffset,
    _In_ ULONG BytesToCopy
    )
{
    KIRQL OldIrql;
    KeRaiseIrql(DISPATCH_LEVEL, &OldIrql);
    TdiCopyBufferToMdlWithReservedMappingAtDpcLevel(SourceBuffer,
                                                    DestinationMdl,
                                                    DestinationOffset,
                                                    BytesToCopy);
    KeLowerIrql(OldIrql);
}
VOID
TdiBuildNetbiosAddress (
    _In_ PUCHAR NetbiosName,
    _In_ BOOLEAN IsGroupName,
    _Inout_ PTA_NETBIOS_ADDRESS NetworkName
    );
_At_(Buffer,
    _Out_writes_bytes_(
        sizeof(FILE_FULL_EA_INFORMATION) + TDI_TRANSPORT_ADDRESS_LENGTH +
            sizeof(TA_NETBIOS_ADDRESS)))
NTSTATUS
TdiBuildNetbiosAddressEa (
    PUCHAR Buffer,
    _In_ BOOLEAN IsGroupName,
    _In_ PUCHAR NetbiosName
    );
    (IRP)->IoStatus.Status = (STATUS); \
    IoCompleteRequest( (IRP), IO_NETWORK_INCREMENT ); \
}
typedef VOID
(*TDI_BIND_HANDLER)(
    _In_ PUNICODE_STRING DeviceName
    );
typedef VOID
(*TDI_UNBIND_HANDLER)(
    _In_ PUNICODE_STRING DeviceName
    );
typedef VOID
(*TDI_ADD_ADDRESS_HANDLER)(
    _In_ PTA_ADDRESS Address
    );
typedef VOID
(*TDI_DEL_ADDRESS_HANDLER)(
    _In_ PTA_ADDRESS Address
    );
typedef VOID
(* TDI_NET_READY_HANDLER)(
    _In_ NTSTATUS ProviderStatus
    );
typedef VOID
(* ProviderPnPPowerComplete)(
    _In_ PNET_PNP_EVENT NetEvent,
    _In_ NTSTATUS ProviderStatus
    );
__drv_preferredFunction("TdiRegisterPnPHandlers", "Obsolete")
NTSTATUS
TdiRegisterAddressChangeHandler(
    _In_ TDI_ADD_ADDRESS_HANDLER AddHandler,
    _In_ TDI_DEL_ADDRESS_HANDLER DeleteHandler,
    _Out_ HANDLE *BindingHandle
    );
__drv_preferredFunction("TdiDeregisterPnPHandlers", "Obsolete")
NTSTATUS
TdiDeregisterAddressChangeHandler(
    _In_ HANDLE BindingHandle
);
__drv_preferredFunction("TdiRegisterPnPHandlers", "Obsolete")
NTSTATUS
TdiRegisterNotificationHandler(
    _In_ TDI_BIND_HANDLER BindHandler,
    _In_ TDI_UNBIND_HANDLER UnbindHandler,
    _Out_ HANDLE *BindingHandle
);
__drv_preferredFunction("TdiDeregisterPnPHandlers", "Obsolete")
NTSTATUS
TdiDeregisterNotificationHandler(
    _In_ HANDLE BindingHandle
);
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiRegisterDeviceObject(
    _In_ PUNICODE_STRING DeviceName,
    _Out_ HANDLE *RegistrationHandle
);
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiDeregisterDeviceObject(
    _In_ HANDLE RegistrationHandle
);
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiDeregisterNetAddress(
    _In_ HANDLE RegistrationHandle
);
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
TdiInitialize(
    VOID
);
typedef enum _TDI_PNP_OPCODE {
    TDI_PNP_OP_MIN,
    TDI_PNP_OP_ADD,
    TDI_PNP_OP_DEL,
    TDI_PNP_OP_UPDATE,
    TDI_PNP_OP_PROVIDERREADY,
    TDI_PNP_OP_NETREADY,
    TDI_PNP_OP_ADD_IGNORE_BINDING,
    TDI_PNP_OP_DELETE_IGNORE_BINDING,
    TDI_PNP_OP_MAX,
} TDI_PNP_OPCODE;
typedef struct _TDI_PNP_CONTEXT_WIN2K {
    USHORT ContextSize;
    USHORT ContextType;
    UCHAR POINTER_ALIGNMENT ContextData[1];
} TDI_PNP_CONTEXT_WIN2K, *PTDI_PNP_CONTEXT_WIN2K;
typedef struct _TDI_PNP_CONTEXT_XP {
    USHORT ContextSize;
    USHORT ContextType;
    UCHAR POINTER_ALIGNMENT ContextData[1];
} TDI_PNP_CONTEXT_XP, *PTDI_PNP_CONTEXT_XP;
typedef TDI_PNP_CONTEXT_XP TDI_PNP_CONTEXT;
typedef TDI_PNP_CONTEXT* PTDI_PNP_CONTEXT;
typedef VOID
(*TDI_BINDING_HANDLER)(
    _In_ TDI_PNP_OPCODE PnPOpcode,
    _In_ PUNICODE_STRING DeviceName,
    _In_ PWSTR MultiSZBindList
    );
typedef VOID
(*TDI_ADD_ADDRESS_HANDLER_V2)(
    _In_ PTA_ADDRESS Address,
    _In_ PUNICODE_STRING DeviceName,
    _In_ PTDI_PNP_CONTEXT Context
    );
typedef VOID
(*TDI_DEL_ADDRESS_HANDLER_V2)(
    _In_ PTA_ADDRESS Address,
    _In_ PUNICODE_STRING DeviceName,
    _In_ PTDI_PNP_CONTEXT Context
    );
typedef NTSTATUS
(*TDI_PNP_POWER_HANDLER)(
    _In_ PUNICODE_STRING DeviceName,
    _In_ PNET_PNP_EVENT PowerEvent,
    _In_ PTDI_PNP_CONTEXT Context1,
    _In_ PTDI_PNP_CONTEXT Context2
    );
typedef struct _TDI_NCPA_BINDING_INFO {
    PUNICODE_STRING TdiClientName;
    PUNICODE_STRING TdiProviderName;
    PUNICODE_STRING BindList;
    PVOID ReconfigBuffer;
    unsigned int ReconfigBufferSize;
    TDI_PNP_OPCODE PnpOpcode;
} TDI_NCPA_BINDING_INFO, *PTDI_NCPA_BINDING_INFO;
typedef struct _TDI_VERSION_ {
    union {
        struct {
            UCHAR MajorTdiVersion;
            UCHAR MinorTdiVersion;
        };
        USHORT TdiVersion;
    };
} TDI_VERSION, *PTDI_VERSION;
typedef struct _TDI20_CLIENT_INTERFACE_INFO {
     union {
       struct {
          UCHAR MajorTdiVersion;
          UCHAR MinorTdiVersion;
       };
       USHORT TdiVersion;
    };
        USHORT Unused;
        PUNICODE_STRING ClientName;
        TDI_PNP_POWER_HANDLER PnPPowerHandler;
    union {
        TDI_BINDING_HANDLER BindingHandler;
        struct {
            TDI_BIND_HANDLER BindHandler;
            TDI_UNBIND_HANDLER UnBindHandler;
        };
    };
    union {
        struct {
            TDI_ADD_ADDRESS_HANDLER_V2 AddAddressHandlerV2;
            TDI_DEL_ADDRESS_HANDLER_V2 DelAddressHandlerV2;
        };
        struct {
            TDI_ADD_ADDRESS_HANDLER AddAddressHandler;
            TDI_DEL_ADDRESS_HANDLER DelAddressHandler;
        };
    };
} TDI20_CLIENT_INTERFACE_INFO, *PTDI20_CLIENT_INTERFACE_INFO;
typedef TDI20_CLIENT_INTERFACE_INFO TDI_CLIENT_INTERFACE_INFO;
                        (TDI_CURRENT_MAJOR_VERSION))
typedef TDI_CLIENT_INTERFACE_INFO *PTDI_CLIENT_INTERFACE_INFO;
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiRegisterPnPHandlers(
    _In_reads_bytes_(InterfaceInfoSize) PTDI_CLIENT_INTERFACE_INFO ClientInterfaceInfo,
    _In_ ULONG InterfaceInfoSize,
    _Out_ HANDLE *BindingHandle
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiDeregisterPnPHandlers(
    _In_ HANDLE BindingHandle
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiPnPPowerRequest(
    _In_ PUNICODE_STRING DeviceName,
    _In_ PNET_PNP_EVENT PowerEvent,
    _In_ PTDI_PNP_CONTEXT Context1,
    _In_ PTDI_PNP_CONTEXT Context2,
    _In_ ProviderPnPPowerComplete ProtocolCompletionHandler
    );
_IRQL_requires_max_(APC_LEVEL)
VOID
TdiPnPPowerComplete(
    _In_ HANDLE BindingHandle,
    _In_ PNET_PNP_EVENT PowerEvent,
    _In_ NTSTATUS Status
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiRegisterNetAddress(
    _In_ PTA_ADDRESS Address,
    _In_ PUNICODE_STRING DeviceName,
    _In_ PTDI_PNP_CONTEXT Context,
    _Out_ HANDLE *RegistrationHandle
    );
NTSTATUS
TdiMakeNCPAChanges(
    _In_ TDI_NCPA_BINDING_INFO NcpaBindingInfo
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiEnumerateAddresses(
    _In_ HANDLE BindingHandle
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiRegisterProvider(
    _In_ PUNICODE_STRING ProviderName,
    _Out_ HANDLE *ProviderHandle
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiProviderReady(
    _In_ HANDLE ProviderHandle
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
TdiDeregisterProvider(
    _In_ HANDLE ProviderHandle
    );
VOID
TdiGet9FTriageBlock(
    OUT PVOID *TriageBlockAddress
    );
typedef struct _TDI_CMSGHDR_XP {
    SIZE_T cmsg_len;
    LONG cmsg_level;
    LONG cmsg_type;
} TDI_CMSGHDR_XP, *PTDI_CMSGHDR_XP;
typedef TDI_CMSGHDR_XP TDI_CMSGHDR;
typedef TDI_CMSGHDR* PTDI_CMSGHDR;
            ( ((length) + TYPE_ALIGNMENT(TDI_CMSGHDR)-1) & \
                (~(TYPE_ALIGNMENT(TDI_CMSGHDR)-1)) ) \
            ( ((length) + MAX_NATURAL_ALIGNMENT-1) & \
                (~(MAX_NATURAL_ALIGNMENT-1)) )
            ( (UCHAR *)(cmsg) + TDI_CMSGDATA_ALIGN(sizeof(TDI_CMSGHDR)) )
        (TDI_CMSGDATA_ALIGN(sizeof(TDI_CMSGHDR) + TDI_CMSGHDR_ALIGN(length)))
        (TDI_CMSGDATA_ALIGN(sizeof(TDI_CMSGHDR)) + length)
        ((TDI_CMSGHDR *) cmsg)->cmsg_level = level; \
        ((TDI_CMSGHDR *) cmsg)->cmsg_type = type; \
        ((TDI_CMSGHDR *) cmsg)->cmsg_len = TDI_CMSG_LEN(length); \
        }
#pragma warning(pop)
