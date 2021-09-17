#include "tdi.h"
typedef TDI_PROVIDER_INFO RXCE_TRANSPORT_PROVIDER_INFO;
typedef RXCE_TRANSPORT_PROVIDER_INFO* PRXCE_TRANSPORT_PROVIDER_INFO;
typedef TDI_CONNECTION_INFORMATION RXCE_CONNECTION_INFORMATION;
typedef RXCE_CONNECTION_INFORMATION* PRXCE_CONNECTION_INFORMATION;
typedef TDI_CONNECTION_INFORMATION RXCE_CONNECTION_INFORMATION;
typedef RXCE_CONNECTION_INFORMATION* PRXCE_CONNECTION_INFORMATION;
typedef TDI_CONNECTION_INFO RXCE_CONNECTION_INFO;
typedef RXCE_CONNECTION_INFO* PRXCE_CONNECTION_INFO;
typedef struct _RXCE_TRANSPORT_INFORMATION_ : public RXCE_TRANSPORT_PROVIDER_INFO {
   ULONG ConnectionCount;
   ULONG QualityOfService;
} RXCE_TRANSPORT_INFORMATION, *PRXCE_TRANSPORT_INFORMATION;
typedef enum _RXCE_CONNECTION_INFORMATION_CLASS_ {
    RxCeTransportProviderInformation = 1,
    RxCeConnectionInformation,
    RxCeConnectionEndpointInformation,
    RxCeRemoteAddressInformation
} RXCE_CONNECTION_INFORMATION_CLASS,
  *PRXCE_CONNECTION_INFORMATION_CLASS;
typedef struct _RXCE_VC_ *PRXCE_VC;
typedef struct _RXCE_CONNECTION_ *PRXCE_CONNECTION;
typedef struct _RXCE_ADDRESS_ *PRXCE_ADDRESS;
typedef struct _RXCE_TRANSPORT_ *PRXCE_TRANSPORT;
typedef
NTSTATUS
(*PRXCE_IND_DISCONNECT)(
    IN PVOID pRxCeEventContext,
    IN PRXCE_VC pVc,
    IN int DisconnectDataLength,
    IN PVOID DisconnectData,
    IN int DisconnectInformationLength,
    IN PVOID DisconnectInformation,
    IN ULONG DisconnectFlags
    );
typedef
NTSTATUS
(*PRXCE_IND_ENDPOINT_ERROR)(
    IN PVOID pRxCeEventContext,
    IN NTSTATUS Status
    );
typedef
NTSTATUS
(*PRXCE_IND_CONNECTION_ERROR)(
    IN PVOID pRxCeEventContext,
    PRXCE_VC pVc,
    IN NTSTATUS Status
    );
typedef
NTSTATUS
(*PRXCE_IND_RECEIVE)(
    IN PVOID pRxCeEventContext,
    IN PRXCE_VC pVc,
    IN ULONG ReceiveFlags,
    IN ULONG BytesIndicated,
    IN ULONG BytesAvailable,
    OUT ULONG *BytesTaken,
    IN PVOID Tsdu,
    OUT PMDL *pDataBufferPointer,
    OUT PULONG pDataBufferSize
    );
typedef
NTSTATUS
(*PRXCE_IND_RECEIVE_DATAGRAM)(
    IN PVOID pRxCeEventContext,
    IN int SourceAddressLength,
    IN PVOID SourceAddress,
    IN int OptionsLength,
    IN PVOID Options,
    IN ULONG ReceiveDatagramFlags,
    IN ULONG BytesIndicated,
    IN ULONG BytesAvailable,
    OUT ULONG *BytesTaken,
    IN PVOID Tsdu,
    OUT PMDL *pDataBufferPointer,
    OUT PULONG pDataBufferSize
    );
typedef
NTSTATUS
(*PRXCE_IND_RECEIVE_EXPEDITED)(
    IN PVOID pRxCeEventContext,
    IN PRXCE_VC pVc,
    IN ULONG ReceiveFlags,
    IN ULONG BytesIndicated,
    IN ULONG BytesAvailable,
    OUT ULONG *BytesTaken,
    IN PVOID Tsdu,
    OUT PMDL *pDataBufferPointer,
    OUT PULONG pDataBufferSize
    );
typedef
NTSTATUS
(*PRXCE_IND_SEND_POSSIBLE)(
    IN PVOID pRxCeEventContext,
    IN PRXCE_VC pVc,
    IN ULONG BytesAvailable);
typedef
NTSTATUS
(*PRXCE_IND_DATA_READY)(
   IN PVOID pEventContext,
   IN PMDL pBuffer,
   IN ULONG CopiedDataSize,
   IN NTSTATUS CopyDataStatus);
typedef
NTSTATUS
(*PRXCE_IND_SEND_COMPLETE)(
   IN PVOID pEventContext,
   IN PVOID pCompletionContext,
   IN NTSTATUS Status);
typedef
NTSTATUS
(*PRXCE_IND_CONNECTION_SEND_COMPLETE)(
   IN PVOID pEventContext,
   IN PRXCE_VC pVc,
   IN PVOID pCompletionContext,
   IN NTSTATUS Status);
typedef
NTSTATUS
(*PRXCE_IND_CONNECTION_SEND_SUBMITTED)(
   IN PVOID pEventContext,
   IN PRXCE_VC pVc,
   IN PVOID pCompletionContext,
   IN NTSTATUS Status);
typedef struct _RXCE_ADDRESS_EVENT_HANDLER_ {
   PRXCE_IND_ENDPOINT_ERROR RxCeErrorEventHandler;
   PRXCE_IND_RECEIVE_DATAGRAM RxCeReceiveDatagramEventHandler;
   PRXCE_IND_DATA_READY RxCeDataReadyEventHandler;
   PRXCE_IND_SEND_POSSIBLE RxCeSendPossibleEventHandler;
   PRXCE_IND_SEND_COMPLETE RxCeSendCompleteEventHandler;
} RXCE_ADDRESS_EVENT_HANDLER, *PRXCE_ADDRESS_EVENT_HANDLER;
typedef struct _RXCE_CONNECTION_EVENT_HANDLER_ {
   PRXCE_IND_DISCONNECT RxCeDisconnectEventHandler;
   PRXCE_IND_CONNECTION_ERROR RxCeErrorEventHandler;
   PRXCE_IND_RECEIVE RxCeReceiveEventHandler;
   PRXCE_IND_RECEIVE_DATAGRAM RxCeReceiveDatagramEventHandler;
   PRXCE_IND_RECEIVE_EXPEDITED RxCeReceiveExpeditedEventHandler;
   PRXCE_IND_SEND_POSSIBLE RxCeSendPossibleEventHandler;
   PRXCE_IND_DATA_READY RxCeDataReadyEventHandler;
   PRXCE_IND_CONNECTION_SEND_COMPLETE RxCeSendCompleteEventHandler;
   PRXCE_IND_CONNECTION_SEND_SUBMITTED RxCeSendSubmittedEventHandler;
} RXCE_CONNECTION_EVENT_HANDLER, *PRXCE_CONNECTION_EVENT_HANDLER;
