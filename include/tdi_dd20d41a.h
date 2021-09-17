       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <nettypes.h>
#include <ntddtdi.h>
typedef LONG TDI_STATUS;
typedef PVOID CONNECTION_CONTEXT;
typedef UNALIGNED struct _TA_ADDRESS {
    USHORT AddressLength;
    USHORT AddressType;
    UCHAR Address[1];
} TA_ADDRESS, *PTA_ADDRESS;
typedef struct _TRANSPORT_ADDRESS {
    LONG TAAddressCount;
    TA_ADDRESS Address[1];
} TRANSPORT_ADDRESS, *PTRANSPORT_ADDRESS;
#include <packon.h>
enum eNameBufferType {
    NBT_READONLY = 0,
    NBT_WRITEONLY,
    NBT_READWRITE,
    NBT_WRITTEN
};
typedef UNALIGNED struct _TDI_ADDRESS_NETBIOS_UNICODE_EX_XP {
    USHORT NetbiosNameType;
    enum eNameBufferType NameBufferType;
    UNICODE_STRING EndpointName;
    UNICODE_STRING RemoteName;
    WCHAR EndpointBuffer[17];
    WCHAR RemoteNameBuffer[1];
} TDI_ADDRESS_NETBIOS_UNICODE_EX_XP, *PTDI_ADDRESS_NETBIOS_UNICODE_EX_XP;
typedef UNALIGNED struct _TA_ADDRESS_NETBIOS_UNICODE_EX_XP {
    LONG TAAddressCount;
    struct _AddrNetbiosWCharEx {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_NETBIOS_UNICODE_EX_XP Address[1];
    } Address [1];
} TA_NETBIOS_UNICODE_EX_ADDRESS_XP, *PTA_NETBIOS_UNICODE_EX_ADDRESS_XP;
typedef TDI_ADDRESS_NETBIOS_UNICODE_EX_XP TDI_ADDRESS_NETBIOS_UNICODE_EX;
typedef TDI_ADDRESS_NETBIOS_UNICODE_EX* PTDI_ADDRESS_NETBIOS_UNICODE_EX;
typedef TA_NETBIOS_UNICODE_EX_ADDRESS_XP TA_NETBIOS_UNICODE_EX_ADDRESS;
typedef TA_NETBIOS_UNICODE_EX_ADDRESS* PTA_NETBIOS_UNICODE_EX_ADDRESS;
typedef UNALIGNED struct _TDI_ADDRESS_NETBIOS {
    USHORT NetbiosNameType;
    UCHAR NetbiosName[16];
} TDI_ADDRESS_NETBIOS, *PTDI_ADDRESS_NETBIOS;
typedef struct _TDI_ADDRESS_NETBIOS_EX {
   UCHAR EndpointName[16];
   TDI_ADDRESS_NETBIOS NetbiosAddress;
} TDI_ADDRESS_NETBIOS_EX, *PTDI_ADDRESS_NETBIOS_EX;
typedef struct _TDI_ADDRESS_NETONE {
    USHORT NetoneNameType;
    UCHAR NetoneName[20];
} TDI_ADDRESS_NETONE, *PTDI_ADDRESS_NETONE;
typedef struct _TDI_ADDRESS_APPLETALK {
    USHORT Network;
    UCHAR Node;
    UCHAR Socket;
} TDI_ADDRESS_APPLETALK, *PTDI_ADDRESS_APPLETALK;
typedef struct _TDI_ADDRESS_8022 {
    UCHAR MACAddress[6];
} TDI_ADDRESS_8022, *PTDI_ADDRESS_8022;
typedef struct _TDI_ADDRESS_IP {
    USHORT sin_port;
    ULONG in_addr;
    UCHAR sin_zero[8];
} TDI_ADDRESS_IP, *PTDI_ADDRESS_IP;
typedef struct _TDI_ADDRESS_IP6_WIN2K {
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    UCHAR sin6_addr[16];
} TDI_ADDRESS_IP6_WIN2K, *PTDI_ADDRESS_IP6_WIN2K;
typedef struct _TDI_ADDRESS_IP6_XP {
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    USHORT sin6_addr[8];
    ULONG sin6_scope_id;
} TDI_ADDRESS_IP6_XP, *PTDI_ADDRESS_IP6_XP;
typedef TDI_ADDRESS_IP6_XP TDI_ADDRESS_IP6;
typedef TDI_ADDRESS_IP6* PTDI_ADDRESS_IP6;
typedef struct _TDI_ADDRESS_IPX {
    ULONG NetworkAddress;
    UCHAR NodeAddress[6];
    USHORT Socket;
} TDI_ADDRESS_IPX, *PTDI_ADDRESS_IPX;
typedef struct _TDI_ADDRESS_NS {
    ULONG NetworkAddress;
    UCHAR NodeAddress[6];
    USHORT Socket;
} TDI_ADDRESS_NS, *PTDI_ADDRESS_NS;
typedef struct _TDI_ADDRESS_VNS {
    UCHAR net_address[4];
    UCHAR subnet_addr[2];
    UCHAR port[2];
    UCHAR hops;
    UCHAR filler[5];
} TDI_ADDRESS_VNS, *PTDI_ADDRESS_VNS;
typedef struct _TDI_ADDRESS_OSI_TSAP {
   USHORT tp_addr_type;
   USHORT tp_taddr_len;
   USHORT tp_tsel_len;
   UCHAR tp_addr[ISO_MAX_ADDR_LENGTH];
} TDI_ADDRESS_OSI_TSAP, *PTDI_ADDRESS_OSI_TSAP;
typedef struct _TA_ADDRESS_NETBIOS {
    LONG TAAddressCount;
    struct _Addr {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_NETBIOS Address[1];
    } Address [1];
} TA_NETBIOS_ADDRESS, *PTA_NETBIOS_ADDRESS;
typedef struct _TA_ADDRESS_NETBIOS_EX {
    LONG TAAddressCount;
    struct _AddrNetbiosEx {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_NETBIOS_EX Address[1];
    } Address [1];
} TA_NETBIOS_EX_ADDRESS, *PTA_NETBIOS_EX_ADDRESS;
typedef struct _TA_APPLETALK_ADDR {
    LONG TAAddressCount;
    struct _AddrAtalk {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_APPLETALK Address[1];
    } Address[1];
} TA_APPLETALK_ADDRESS, *PTA_APPLETALK_ADDRESS;
typedef struct _TA_ADDRESS_IP {
    LONG TAAddressCount;
    struct _AddrIp {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_IP Address[1];
    } Address [1];
} TA_IP_ADDRESS, *PTA_IP_ADDRESS;
typedef struct _TA_ADDRESS_IP6 {
    LONG TAAddressCount;
    struct _AddrIp6 {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_IP6 Address[1];
    } Address [1];
} TA_IP6_ADDRESS, *PTA_IP6_ADDRESS;
typedef struct _TA_ADDRESS_IPX {
    LONG TAAddressCount;
    struct _AddrIpx {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_IPX Address[1];
    } Address [1];
} TA_IPX_ADDRESS, *PTA_IPX_ADDRESS;
typedef struct _TA_ADDRESS_NS {
    LONG TAAddressCount;
    struct _AddrNs {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_NS Address[1];
    } Address [1];
} TA_NS_ADDRESS, *PTA_NS_ADDRESS;
typedef struct _TA_ADDRESS_VNS {
    LONG TAAddressCount;
    struct _AddrVns {
        USHORT AddressLength;
        USHORT AddressType;
        TDI_ADDRESS_VNS Address[1];
    } Address [1];
} TA_VNS_ADDRESS, *PTA_VNS_ADDRESS;
#include <packoff.h>
typedef struct _TDI_REQUEST {
    union {
        HANDLE AddressHandle;
        CONNECTION_CONTEXT ConnectionContext;
        HANDLE ControlChannel;
    } Handle;
    PVOID RequestNotifyObject;
    PVOID RequestContext;
    TDI_STATUS TdiStatus;
} TDI_REQUEST, *PTDI_REQUEST;
typedef struct _TDI_REQUEST_STATUS {
    TDI_STATUS Status;
    PVOID RequestContext;
    ULONG BytesTransferred;
} TDI_REQUEST_STATUS, *PTDI_REQUEST_STATUS;
typedef struct _TDI_CONNECTION_INFORMATION {
    LONG UserDataLength;
    _Field_size_bytes_(UserDataLength) PVOID UserData;
    LONG OptionsLength;
    _Field_size_bytes_(OptionsLength) PVOID Options;
    LONG RemoteAddressLength;
    _Field_size_bytes_(RemoteAddressLength) PVOID RemoteAddress;
} TDI_CONNECTION_INFORMATION, *PTDI_CONNECTION_INFORMATION;
typedef struct _TDI_REQUEST_ASSOCIATE {
    TDI_REQUEST Request;
    HANDLE AddressHandle;
} TDI_REQUEST_ASSOCIATE_ADDRESS, *PTDI_REQUEST_ASSOCIATE_ADDRESS;
typedef struct _TDI_CONNECT_REQUEST {
    TDI_REQUEST Request;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
    PTDI_CONNECTION_INFORMATION ReturnConnectionInformation;
    LARGE_INTEGER Timeout;
} TDI_REQUEST_CONNECT, *PTDI_REQUEST_CONNECT;
typedef struct _TDI_REQUEST_ACCEPT {
    TDI_REQUEST Request;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
    PTDI_CONNECTION_INFORMATION ReturnConnectionInformation;
} TDI_REQUEST_ACCEPT, *PTDI_REQUEST_ACCEPT;
typedef struct _TDI_REQUEST_LISTEN {
    TDI_REQUEST Request;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
    PTDI_CONNECTION_INFORMATION ReturnConnectionInformation;
    USHORT ListenFlags;
} TDI_REQUEST_LISTEN, *PTDI_REQUEST_LISTEN;
typedef struct _TDI_DISCONNECT_REQUEST {
    TDI_REQUEST Request;
    LARGE_INTEGER Timeout;
} TDI_REQUEST_DISCONNECT, *PTDI_REQUEST_DISCONNECT;
typedef struct _TDI_REQUEST_SEND {
    TDI_REQUEST Request;
    USHORT SendFlags;
} TDI_REQUEST_SEND, *PTDI_REQUEST_SEND;
typedef struct _TDI_REQUEST_RECEIVE {
    TDI_REQUEST Request;
    USHORT ReceiveFlags;
} TDI_REQUEST_RECEIVE, *PTDI_REQUEST_RECEIVE;
typedef struct _TDI_REQUEST_SEND_DATAGRAM {
    TDI_REQUEST Request;
    PTDI_CONNECTION_INFORMATION SendDatagramInformation;
} TDI_REQUEST_SEND_DATAGRAM, *PTDI_REQUEST_SEND_DATAGRAM;
typedef struct _TDI_REQUEST_RECEIVE_DATAGRAM {
    TDI_REQUEST Request;
    PTDI_CONNECTION_INFORMATION ReceiveDatagramInformation;
    PTDI_CONNECTION_INFORMATION ReturnInformation;
    USHORT ReceiveFlags;
} TDI_REQUEST_RECEIVE_DATAGRAM, *PTDI_REQUEST_RECEIVE_DATAGRAM;
typedef struct _TDI_REQUEST_SET_EVENT {
    TDI_REQUEST Request;
    LONG EventType;
    PVOID EventHandler;
    PVOID EventContext;
} TDI_REQUEST_SET_EVENT_HANDLER, *PTDI_REQUEST_SET_EVENT_HANDLER;
typedef struct _TDI_REQUEST_QUERY_INFORMATION {
    TDI_REQUEST Request;
    ULONG QueryType;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
} TDI_REQUEST_QUERY_INFORMATION, *PTDI_REQUEST_QUERY_INFORMATION;
typedef struct _TDI_REQUEST_SET_INFORMATION {
    TDI_REQUEST Request;
    ULONG SetType;
    PTDI_CONNECTION_INFORMATION RequestConnectionInformation;
} TDI_REQUEST_SET_INFORMATION, *PTDI_REQUEST_SET_INFORMATION;
typedef TDI_REQUEST_SET_INFORMATION TDI_REQ_SET_INFORMATION, *PTDI_REQ_SET_INFORMATION;
typedef union _TDI_REQUEST_TYPE {
    TDI_REQUEST_ACCEPT TdiAccept;
    TDI_REQUEST_CONNECT TdiConnect;
    TDI_REQUEST_DISCONNECT TdiDisconnect;
    TDI_REQUEST_LISTEN TdiListen;
    TDI_REQUEST_QUERY_INFORMATION TdiQueryInformation;
    TDI_REQUEST_RECEIVE TdiReceive;
    TDI_REQUEST_RECEIVE_DATAGRAM TdiReceiveDatagram;
    TDI_REQUEST_SEND TdiSend;
    TDI_REQUEST_SEND_DATAGRAM TdiSendDatagram;
    TDI_REQUEST_SET_EVENT_HANDLER TdiSetEventHandler;
    TDI_REQUEST_SET_INFORMATION TdiSetInformation;
} TDI_REQUEST_TYPE, *PTDI_REQUEST_TYPE;
typedef struct _TDI_ENDPOINT_INFO {
    ULONG State;
    ULONG Event;
    ULONG TransmittedTsdus;
    ULONG ReceivedTsdus;
    ULONG TransmissionErrors;
    ULONG ReceiveErrors;
    ULONG MinimumLookaheadData;
    ULONG MaximumLookaheadData;
    ULONG PriorityLevel;
    ULONG SecurityLevel;
    ULONG SecurityCompartment;
} TDI_ENDPOINT_INFO, *PTDI_ENDPOINT_INFO;
typedef struct _TDI_CONNECTION_INFO {
    ULONG State;
    ULONG Event;
    ULONG TransmittedTsdus;
    ULONG ReceivedTsdus;
    ULONG TransmissionErrors;
    ULONG ReceiveErrors;
    LARGE_INTEGER Throughput;
    LARGE_INTEGER Delay;
    ULONG SendBufferSize;
    ULONG ReceiveBufferSize;
    BOOLEAN Unreliable;
} TDI_CONNECTION_INFO, *PTDI_CONNECTION_INFO;
typedef struct _TDI_ADDRESS_INFO {
    ULONG ActivityCount;
    TRANSPORT_ADDRESS Address;
} TDI_ADDRESS_INFO, *PTDI_ADDRESS_INFO;
typedef struct _TDI_DATAGRAM_INFO {
    ULONG MaximumDatagramBytes;
    ULONG MaximumDatagramCount;
} TDI_DATAGRAM_INFO, *PTDI_DATAGRAM_INFO;
typedef struct _TDI_MAX_DATAGRAM_INFO {
    ULONG MaxDatagramSize;
} TDI_MAX_DATAGRAM_INFO, *PTDI_MAX_DATAGRAM_INFO;
typedef struct _TDI_PROVIDER_INFO {
    ULONG Version;
    ULONG MaxSendSize;
    ULONG MaxConnectionUserData;
    ULONG MaxDatagramSize;
    ULONG ServiceFlags;
    ULONG MinimumLookaheadData;
    ULONG MaximumLookaheadData;
    ULONG NumberOfResources;
    LARGE_INTEGER StartTime;
} TDI_PROVIDER_INFO, *PTDI_PROVIDER_INFO;
typedef struct _TDI_ROUTING_INFO_WS03 {
    ULONG Protocol;
    ULONG InterfaceId;
    ULONG LinkId;
    TRANSPORT_ADDRESS Address;
} TDI_ROUTING_INFO_WS03, *PTDI_ROUTING_INFO_WS03;
typedef TDI_ROUTING_INFO_WS03 TDI_ROUTING_INFO;
typedef TDI_ROUTING_INFO* PTDI_ROUTING_INFO;
typedef struct _TDI_PROVIDER_RESOURCE_STATS {
    ULONG ResourceId;
    ULONG MaximumResourceUsed;
    ULONG AverageResourceUsed;
    ULONG ResourceExhausted;
} TDI_PROVIDER_RESOURCE_STATS, *PTDI_PROVIDER_RESOURCE_STATS;
typedef struct _TDI_PROVIDER_STATISTICS {
    ULONG Version;
    ULONG OpenConnections;
    ULONG ConnectionsAfterNoRetry;
    ULONG ConnectionsAfterRetry;
    ULONG LocalDisconnects;
    ULONG RemoteDisconnects;
    ULONG LinkFailures;
    ULONG AdapterFailures;
    ULONG SessionTimeouts;
    ULONG CancelledConnections;
    ULONG RemoteResourceFailures;
    ULONG LocalResourceFailures;
    ULONG NotFoundFailures;
    ULONG NoListenFailures;
    ULONG DatagramsSent;
    LARGE_INTEGER DatagramBytesSent;
    ULONG DatagramsReceived;
    LARGE_INTEGER DatagramBytesReceived;
    ULONG PacketsSent;
    ULONG PacketsReceived;
    ULONG DataFramesSent;
    LARGE_INTEGER DataFrameBytesSent;
    ULONG DataFramesReceived;
    LARGE_INTEGER DataFrameBytesReceived;
    ULONG DataFramesResent;
    LARGE_INTEGER DataFrameBytesResent;
    ULONG DataFramesRejected;
    LARGE_INTEGER DataFrameBytesRejected;
    ULONG ResponseTimerExpirations;
    ULONG AckTimerExpirations;
    ULONG MaximumSendWindow;
    ULONG AverageSendWindow;
    ULONG PiggybackAckQueued;
    ULONG PiggybackAckTimeouts;
    LARGE_INTEGER WastedPacketSpace;
    ULONG WastedSpacePackets;
    ULONG NumberOfResources;
    TDI_PROVIDER_RESOURCE_STATS ResourceStats[1];
} TDI_PROVIDER_STATISTICS, *PTDI_PROVIDER_STATISTICS;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Success_(return==STATUS_SUCCESS)
_At_(Buffer,
    _Out_writes_bytes_(
        sizeof(FILE_FULL_EA_INFORMATION) + TDI_TRANSPORT_ADDRESS_LENGTH +
            sizeof(TA_NETBIOS_ADDRESS)))
NTSTATUS
TdiOpenNetbiosAddress (
    _Out_ PHANDLE FileHandle,
    PUCHAR Buffer,
    _In_ PVOID DeviceName,
    _In_opt_ PVOID Name
    );
typedef TDI_REQUEST_ASSOCIATE_ADDRESS TDI_REQUEST_USER_ASSOCIATE, *PTDI_REQUEST_USER_ASSOCIATE;
typedef TDI_REQUEST_CONNECT TDI_REQUEST_USER_CONNECT, *PTDI_REQUEST_USER_CONNECT;
typedef TDI_REQUEST_QUERY_INFORMATION TDI_REQUEST_USER_QUERY_INFO, *PTDI_REQUEST_USER_QUERY_INFO;
typedef struct _TDI_ACTION_HEADER {
    ULONG TransportId;
    USHORT ActionCode;
    USHORT Reserved;
} TDI_ACTION_HEADER, *PTDI_ACTION_HEADER;
typedef struct _STREAMS_TDI_ACTION {
    TDI_ACTION_HEADER Header;
    BOOLEAN DatagramOption;
    ULONG BufferLength;
    CHAR Buffer[1];
} STREAMS_TDI_ACTION, *PSTREAMS_TDI_ACTION;
#endif
#pragma endregion
