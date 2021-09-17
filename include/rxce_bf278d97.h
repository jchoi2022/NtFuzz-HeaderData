#include <nodetype.h>
#include <rxcehdlr.h>
#include <rxworkq.h>
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _RXCE_SIGNATURE_ {
    union {
        struct {
            USHORT Type;
            CSHORT Size;
        };
        ULONG Signature;
    };
} RXCE_SIGNATURE, *PRXCE_SIGNATURE;
#pragma warning(pop)
typedef struct _RXCE_TRANSPORT_ : public RXCE_SIGNATURE {
    UNICODE_STRING Name;
    PDEVICE_OBJECT pDeviceObject;
    HANDLE ControlChannel;
    PFILE_OBJECT pControlChannelFileObject;
    PRXCE_TRANSPORT_PROVIDER_INFO pProviderInfo;
    LONG ConnectionCount;
    LONG VirtualCircuitCount;
    ULONG QualityOfService;
} RXCE_TRANSPORT;
        ((pTransport)->Signature == RXCE_TRANSPORT_SIGNATURE)
extern NTSTATUS
NTAPI
RxCeBuildTransport(
    IN PRXCE_TRANSPORT pRxCeTransport,
    IN PUNICODE_STRING pTransportName,
    IN ULONG QualityOfService);
extern NTSTATUS
NTAPI
RxCeTearDownTransport(
    IN PRXCE_TRANSPORT pTransport);
#pragma warning(push)
#pragma warning(disable:4115)
extern NTSTATUS
RxCeQueryAdapterStatus(
PRXCE_TRANSPORT pTransport,
struct _ADAPTER_STATUS *pAdapterStatus);
#pragma warning(pop)
extern NTSTATUS
RxCeQueryTransportInformation(
    PRXCE_TRANSPORT pTransport,
    PRXCE_TRANSPORT_INFORMATION pTransportInformation);
typedef struct _RXCE_ADDRESS_ : public RXCE_SIGNATURE {
    PRXCE_TRANSPORT pTransport;
    PTRANSPORT_ADDRESS pTransportAddress;
    PVOID pContext;
    PRXCE_ADDRESS_EVENT_HANDLER pHandler;
    PMDL pReceiveMdl;
    HANDLE hAddress;
    PFILE_OBJECT pFileObject;
    LONG ConnectionCount;
    LONG VirtualCircuitCount;
} RXCE_ADDRESS;
        ((pAddress)->Signature == RXCE_ADDRESS_SIGNATURE)
extern NTSTATUS
NTAPI
RxCeBuildAddress(
    IN OUT PRXCE_ADDRESS pAddress,
    IN PRXCE_TRANSPORT pTransport,
    IN PTRANSPORT_ADDRESS pTransportAddress,
    IN PRXCE_ADDRESS_EVENT_HANDLER pHandler,
    IN PVOID pEventContext);
extern NTSTATUS
NTAPI
RxCeTearDownAddress(
    IN PRXCE_ADDRESS pAddress);
typedef struct _RXCE_CONNECTION_ : public RXCE_SIGNATURE {
    PRXCE_ADDRESS pAddress;
    ULONG VirtualCircuitCount;
    PVOID pContext;
    PRXCE_CONNECTION_EVENT_HANDLER pHandler;
    PRXCE_CONNECTION_INFORMATION pConnectionInformation;
} RXCE_CONNECTION;
        ((pConnection)->Signature == RXCE_CONNECTION_SIGNATURE)
typedef enum _RXCE_CONNECTION_CREATE_OPTIONS_ {
    RxCeSelectFirstSuccessfulTransport,
    RxCeSelectBestSuccessfulTransport,
    RxCeSelectAllSuccessfulTransports
} RXCE_CONNECTION_CREATE_OPTIONS,
  *PRXCE_CONNECTION_CREATE_OPTIONS;
typedef struct _RXCE_CONNECTION_COMPLETION_CONTEXT_ {
    NTSTATUS Status;
    ULONG AddressIndex;
    PRXCE_CONNECTION pConnection;
    PRXCE_VC pVc;
    RX_WORK_QUEUE_ITEM WorkQueueItem;
    PRXCE_CONNECTION_INFORMATION pConnectionInformation;
} RXCE_CONNECTION_COMPLETION_CONTEXT,
  *PRXCE_CONNECTION_COMPLETION_CONTEXT;
typedef
NTSTATUS
(*PRXCE_CONNECTION_COMPLETION_ROUTINE)(
    PRXCE_CONNECTION_COMPLETION_CONTEXT pCompletionContext);
extern NTSTATUS
NTAPI
RxCeBuildConnection(
    IN PRXCE_ADDRESS pLocalAddress,
    IN PRXCE_CONNECTION_INFORMATION pConnectionInformation,
    IN PRXCE_CONNECTION_EVENT_HANDLER pHandler,
    IN PVOID pEventContext,
    IN OUT PRXCE_CONNECTION pConnection,
    IN OUT PRXCE_VC pVc);
extern NTSTATUS
NTAPI
RxCeBuildConnectionOverMultipleTransports(
    IN OUT PRDBSS_DEVICE_OBJECT pMiniRedirectorDeviceObject,
    IN RXCE_CONNECTION_CREATE_OPTIONS CreateOption,
    IN ULONG NumberOfAddresses,
    IN PRXCE_ADDRESS *pLocalAddressPointers,
    IN PUNICODE_STRING pServerName,
    IN PRXCE_CONNECTION_INFORMATION pConnectionInformation,
    IN PRXCE_CONNECTION_EVENT_HANDLER pHandler,
    IN PVOID pEventContext,
    IN PRXCE_CONNECTION_COMPLETION_ROUTINE pCompletionRoutine,
    IN OUT PRXCE_CONNECTION_COMPLETION_CONTEXT pCompletionContext);
extern NTSTATUS
NTAPI
RxCeTearDownConnection(
    IN PRXCE_CONNECTION pConnection);
extern NTSTATUS
NTAPI
RxCeCancelConnectRequest(
    IN PRXCE_ADDRESS pLocalAddress,
    IN PUNICODE_STRING pServerName,
    IN PRXCE_CONNECTION_INFORMATION pConnectionInformation);
typedef struct _RXCE_VC_ : public RXCE_SIGNATURE {
    PRXCE_CONNECTION pConnection;
    HANDLE hEndpoint;
    PFILE_OBJECT pEndpointFileObject;
    __volatile LONG State;
    CONNECTION_CONTEXT ConnectionId;
    PMDL pReceiveMdl;
    PKEVENT pCleanUpEvent;
} RXCE_VC;
        ((pVc)->Signature == RXCE_VC_SIGNATURE)
extern NTSTATUS
NTAPI
RxCeBuildVC(
    IN OUT PRXCE_VC pVc,
    IN PRXCE_CONNECTION Connection);
extern NTSTATUS
NTAPI
RxCeTearDownVC(
    IN PRXCE_VC pVc);
extern NTSTATUS
NTAPI
RxCeInitiateVCDisconnect(
    IN PRXCE_VC pVc);
extern NTSTATUS
NTAPI
RxCeQueryInformation(
    IN PRXCE_VC pVc,
    IN RXCE_CONNECTION_INFORMATION_CLASS InformationClass,
    OUT PVOID pInformation,
    IN ULONG Length);
extern NTSTATUS
NTAPI
RxCeSend(
    IN PRXCE_VC pVc,
    IN ULONG SendOptions,
    IN PMDL pMdl,
    IN ULONG SendLength,
    IN PVOID pCompletionContext);
extern NTSTATUS
NTAPI
RxCeSendDatagram(
    IN PRXCE_ADDRESS hAddress,
    IN PRXCE_CONNECTION_INFORMATION pConnectionInformation,
    IN ULONG SendOptions,
    IN PMDL pMdl,
    IN ULONG SendLength,
    IN PVOID pCompletionContext);
extern PIRP
RxCeAllocateIrpWithMDL(
    IN CCHAR StackSize,
    IN BOOLEAN ChargeQuota,
    IN PMDL Buffer);
extern VOID
RxCeFreeIrp(PIRP pIrp);
