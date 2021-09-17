#include <winapifamily.h>
extern "C" {
#include <mswsockdef.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_WINSOCK_DEPRECATED_BY("WSARecv()")
INT
PASCAL FAR
WSARecvEx(
    _In_ SOCKET s,
    _Out_writes_bytes_to_(len, return) CHAR FAR *buf,
    _In_ INT len,
    _Inout_ INT FAR *flags
    );
#endif
#pragma endregion
typedef struct _TRANSMIT_FILE_BUFFERS {
    LPVOID Head;
    DWORD HeadLength;
    LPVOID Tail;
    DWORD TailLength;
} TRANSMIT_FILE_BUFFERS, *PTRANSMIT_FILE_BUFFERS, FAR *LPTRANSMIT_FILE_BUFFERS;
BOOL
PASCAL FAR
TransmitFile (
    _In_ SOCKET hSocket,
    _In_ HANDLE hFile,
    _In_ DWORD nNumberOfBytesToWrite,
    _In_ DWORD nNumberOfBytesPerSend,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPTRANSMIT_FILE_BUFFERS lpTransmitBuffers,
    _In_ DWORD dwReserved
    );
BOOL
PASCAL FAR
AcceptEx (
    _In_ SOCKET sListenSocket,
    _In_ SOCKET sAcceptSocket,
    _Out_writes_bytes_(dwReceiveDataLength+dwLocalAddressLength+dwRemoteAddressLength) PVOID lpOutputBuffer,
    _In_ DWORD dwReceiveDataLength,
    _In_ DWORD dwLocalAddressLength,
    _In_ DWORD dwRemoteAddressLength,
    _Out_ LPDWORD lpdwBytesReceived,
    _Inout_ LPOVERLAPPED lpOverlapped
    );
VOID
PASCAL FAR
GetAcceptExSockaddrs (
    _In_reads_bytes_(dwReceiveDataLength+dwLocalAddressLength+dwRemoteAddressLength) PVOID lpOutputBuffer,
    _In_ DWORD dwReceiveDataLength,
    _In_ DWORD dwLocalAddressLength,
    _In_ DWORD dwRemoteAddressLength,
    _Outptr_result_bytebuffer_(*LocalSockaddrLength) struct sockaddr **LocalSockaddr,
    _Out_ LPINT LocalSockaddrLength,
    _Outptr_result_bytebuffer_(*RemoteSockaddrLength) struct sockaddr **RemoteSockaddr,
    _Out_ LPINT RemoteSockaddrLength
    );
typedef
BOOL
(PASCAL FAR * LPFN_TRANSMITFILE)(
    _In_ SOCKET hSocket,
    _In_ HANDLE hFile,
    _In_ DWORD nNumberOfBytesToWrite,
    _In_ DWORD nNumberOfBytesPerSend,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPTRANSMIT_FILE_BUFFERS lpTransmitBuffers,
    _In_ DWORD dwReserved
    );
        {0xb5367df0,0xcbac,0x11cf,{0x95,0xca,0x00,0x80,0x5f,0x48,0xa1,0x92}}
typedef
BOOL
(PASCAL FAR * LPFN_ACCEPTEX)(
    _In_ SOCKET sListenSocket,
    _In_ SOCKET sAcceptSocket,
    _Out_writes_bytes_(dwReceiveDataLength+dwLocalAddressLength+dwRemoteAddressLength) PVOID lpOutputBuffer,
    _In_ DWORD dwReceiveDataLength,
    _In_ DWORD dwLocalAddressLength,
    _In_ DWORD dwRemoteAddressLength,
    _Out_ LPDWORD lpdwBytesReceived,
    _Inout_ LPOVERLAPPED lpOverlapped
    );
        {0xb5367df1,0xcbac,0x11cf,{0x95,0xca,0x00,0x80,0x5f,0x48,0xa1,0x92}}
typedef
VOID
(PASCAL FAR * LPFN_GETACCEPTEXSOCKADDRS)(
    _In_reads_bytes_(dwReceiveDataLength+dwLocalAddressLength+dwRemoteAddressLength) PVOID lpOutputBuffer,
    _In_ DWORD dwReceiveDataLength,
    _In_ DWORD dwLocalAddressLength,
    _In_ DWORD dwRemoteAddressLength,
    _Outptr_result_bytebuffer_(*LocalSockaddrLength) struct sockaddr **LocalSockaddr,
    _Out_ LPINT LocalSockaddrLength,
    _Outptr_result_bytebuffer_(*RemoteSockaddrLength) struct sockaddr **RemoteSockaddr,
    _Out_ LPINT RemoteSockaddrLength
    );
        {0xb5367df2,0xcbac,0x11cf,{0x95,0xca,0x00,0x80,0x5f,0x48,0xa1,0x92}}
#pragma warning(disable:4201)
typedef struct _TRANSMIT_PACKETS_ELEMENT {
    ULONG dwElFlags;
    ULONG cLength;
    union {
        struct {
            LARGE_INTEGER nFileOffset;
            HANDLE hFile;
        };
        PVOID pBuffer;
    };
} TRANSMIT_PACKETS_ELEMENT, *PTRANSMIT_PACKETS_ELEMENT, FAR *LPTRANSMIT_PACKETS_ELEMENT;
#pragma warning(default:4201)
typedef
BOOL
(PASCAL FAR * LPFN_TRANSMITPACKETS) (
    _In_ SOCKET hSocket,
    _In_opt_ LPTRANSMIT_PACKETS_ELEMENT lpPacketArray,
    _In_ DWORD nElementCount,
    _In_ DWORD nSendSize,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_ DWORD dwFlags
    );
    {0xd9689da0,0x1f90,0x11d3,{0x99,0x71,0x00,0xc0,0x4f,0x68,0xc8,0x76}}
typedef
BOOL
(PASCAL FAR * LPFN_CONNECTEX) (
    _In_ SOCKET s,
    _In_reads_bytes_(namelen) const struct sockaddr FAR *name,
    _In_ int namelen,
    _In_reads_bytes_opt_(dwSendDataLength) PVOID lpSendBuffer,
    _In_ DWORD dwSendDataLength,
    _Out_ LPDWORD lpdwBytesSent,
    _Inout_ LPOVERLAPPED lpOverlapped
    );
    {0x25a207b9,0xddf3,0x4660,{0x8e,0xe9,0x76,0xe5,0x8c,0x74,0x06,0x3e}}
typedef
BOOL
(PASCAL FAR * LPFN_DISCONNECTEX) (
    _In_ SOCKET s,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
    );
    {0x7fda2e11,0x8630,0x436f,{0xa0, 0x31, 0xf5, 0x36, 0xa6, 0xee, 0xc1, 0x57}}
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
    {0x6642243a,0x3ba8,0x4aa6,{0xba,0xa5,0x2e,0xb,0xd7,0x1f,0xdd,0x83}}
    {0x37e515,0xb5c9,0x4a43,{0xba,0xda,0x8b,0x48,0xa8,0x7a,0xd2,0x39}}
typedef enum _NLA_BLOB_DATA_TYPE {
    NLA_RAW_DATA = 0,
    NLA_INTERFACE = 1,
    NLA_802_1X_LOCATION = 2,
    NLA_CONNECTIVITY = 3,
    NLA_ICS = 4,
} NLA_BLOB_DATA_TYPE, *PNLA_BLOB_DATA_TYPE;
typedef enum _NLA_CONNECTIVITY_TYPE {
    NLA_NETWORK_AD_HOC = 0,
    NLA_NETWORK_MANAGED = 1,
    NLA_NETWORK_UNMANAGED = 2,
    NLA_NETWORK_UNKNOWN = 3,
} NLA_CONNECTIVITY_TYPE, *PNLA_CONNECTIVITY_TYPE;
typedef enum _NLA_INTERNET {
    NLA_INTERNET_UNKNOWN = 0,
    NLA_INTERNET_NO = 1,
    NLA_INTERNET_YES = 2,
} NLA_INTERNET, *PNLA_INTERNET;
typedef struct _NLA_BLOB {
    struct {
        NLA_BLOB_DATA_TYPE type;
        DWORD dwSize;
        DWORD nextOffset;
    } header;
    union {
        CHAR rawData[1];
        struct {
            DWORD dwType;
            DWORD dwSpeed;
            CHAR adapterName[1];
        } interfaceData;
        struct {
            CHAR information[1];
        } locationData;
        struct {
            NLA_CONNECTIVITY_TYPE type;
            NLA_INTERNET internet;
        } connectivity;
        struct {
            struct {
                DWORD speed;
                DWORD type;
                DWORD state;
                WCHAR machineName[256];
                WCHAR sharedAdapterName[256];
            } remote;
        } ICS;
    } data;
} NLA_BLOB, *PNLA_BLOB, * FAR LPNLA_BLOB;
#endif
#pragma endregion
typedef
INT
(PASCAL FAR * LPFN_WSARECVMSG) (
    _In_ SOCKET s,
    _Inout_ LPWSAMSG lpMsg,
    _Out_opt_ LPDWORD lpdwNumberOfBytesRecvd,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
    {0xf689d7c8,0x6f1f,0x436b,{0x8a,0x53,0xe5,0x4f,0xe3,0x51,0xc3,0x22}}
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct {
    int result;
    ULONG fds;
    INT timeout;
    WSAPOLLFD fdArray[0];
} WSAPOLLDATA, *LPWSAPOLLDATA;
#pragma warning(pop)
typedef struct {
    LPWSAMSG lpMsg;
    DWORD dwFlags;
    LPDWORD lpNumberOfBytesSent;
    LPWSAOVERLAPPED lpOverlapped;
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine;
} WSASENDMSG, *LPWSASENDMSG;
typedef
INT
(PASCAL FAR * LPFN_WSASENDMSG) (
    _In_ SOCKET s,
    _In_ LPWSAMSG lpMsg,
    _In_ DWORD dwFlags,
    _Out_opt_ LPDWORD lpNumberOfBytesSent,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped OPTIONAL,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine OPTIONAL
    );
    {0xa441e712,0x754f,0x43ca,{0x84,0xa7,0x0d,0xee,0x44,0xcf,0x60,0x6d}}
typedef
INT
(WSAAPI *LPFN_WSAPOLL)(
    _Inout_ LPWSAPOLLFD fdarray,
    _In_ ULONG nfds,
    _In_ INT timeout
    );
        {0x18C76F85,0xDC66,0x4964,{0x97,0x2E,0x23,0xC2,0x72,0x38,0x31,0x2B}}
typedef BOOL (PASCAL FAR * LPFN_RIORECEIVE)(
    _In_ RIO_RQ SocketQueue,
    _In_reads_(DataBufferCount) PRIO_BUF pData,
    _In_ ULONG DataBufferCount,
    _In_ DWORD Flags,
    _In_ PVOID RequestContext
    );
typedef int (PASCAL FAR * LPFN_RIORECEIVEEX)(
    _In_ RIO_RQ SocketQueue,
    _In_reads_(DataBufferCount) PRIO_BUF pData,
    _In_ ULONG DataBufferCount,
    _In_opt_ PRIO_BUF pLocalAddress,
    _In_opt_ PRIO_BUF pRemoteAddress,
    _In_opt_ PRIO_BUF pControlContext,
    _In_opt_ PRIO_BUF pFlags,
    _In_ DWORD Flags,
    _In_ PVOID RequestContext
);
typedef BOOL (PASCAL FAR * LPFN_RIOSEND)(
    _In_ RIO_RQ SocketQueue,
    _In_reads_(DataBufferCount) PRIO_BUF pData,
    _In_ ULONG DataBufferCount,
    _In_ DWORD Flags,
    _In_ PVOID RequestContext
);
typedef BOOL (PASCAL FAR * LPFN_RIOSENDEX)(
    _In_ RIO_RQ SocketQueue,
    _In_reads_(DataBufferCount) PRIO_BUF pData,
    _In_ ULONG DataBufferCount,
    _In_opt_ PRIO_BUF pLocalAddress,
    _In_opt_ PRIO_BUF pRemoteAddress,
    _In_opt_ PRIO_BUF pControlContext,
    _In_opt_ PRIO_BUF pFlags,
    _In_ DWORD Flags,
    _In_ PVOID RequestContext
);
typedef VOID (PASCAL FAR * LPFN_RIOCLOSECOMPLETIONQUEUE)(
    _In_ RIO_CQ CQ
);
typedef enum _RIO_NOTIFICATION_COMPLETION_TYPE {
    RIO_EVENT_COMPLETION = 1,
    RIO_IOCP_COMPLETION = 2,
} RIO_NOTIFICATION_COMPLETION_TYPE, *PRIO_NOTIFICATION_COMPLETION_TYPE;
#pragma warning(push)
#pragma warning(disable : 4201)
typedef struct _RIO_NOTIFICATION_COMPLETION {
    RIO_NOTIFICATION_COMPLETION_TYPE Type;
    union {
        struct {
            HANDLE EventHandle;
            BOOL NotifyReset;
        } Event;
        struct {
            HANDLE IocpHandle;
            PVOID CompletionKey;
            PVOID Overlapped;
        } Iocp;
    };
} RIO_NOTIFICATION_COMPLETION, *PRIO_NOTIFICATION_COMPLETION;
#pragma warning(pop)
typedef RIO_CQ (PASCAL FAR * LPFN_RIOCREATECOMPLETIONQUEUE)(
    _In_ DWORD QueueSize,
    _In_opt_ PRIO_NOTIFICATION_COMPLETION NotificationCompletion
);
typedef RIO_RQ (PASCAL FAR * LPFN_RIOCREATEREQUESTQUEUE)(
    _In_ SOCKET Socket,
    _In_ ULONG MaxOutstandingReceive,
    _In_ ULONG MaxReceiveDataBuffers,
    _In_ ULONG MaxOutstandingSend,
    _In_ ULONG MaxSendDataBuffers,
    _In_ RIO_CQ ReceiveCQ,
    _In_ RIO_CQ SendCQ,
    _In_ PVOID SocketContext
);
typedef ULONG (PASCAL FAR * LPFN_RIODEQUEUECOMPLETION)(
    _In_ RIO_CQ CQ,
    _Out_writes_to_(ArraySize, return) PRIORESULT Array,
    _In_ ULONG ArraySize
);
typedef VOID (PASCAL FAR * LPFN_RIODEREGISTERBUFFER)(
    _In_ RIO_BUFFERID BufferId
);
typedef INT (PASCAL FAR * LPFN_RIONOTIFY)(
    _In_ RIO_CQ CQ
);
typedef RIO_BUFFERID (PASCAL FAR * LPFN_RIOREGISTERBUFFER)(
    _In_ PCHAR DataBuffer,
    _In_ DWORD DataLength
);
typedef BOOL (PASCAL FAR * LPFN_RIORESIZECOMPLETIONQUEUE) (
    _In_ RIO_CQ CQ,
    _In_ DWORD QueueSize
);
typedef BOOL (PASCAL FAR * LPFN_RIORESIZEREQUESTQUEUE) (
    _In_ RIO_RQ RQ,
    _In_ DWORD MaxOutstandingReceive,
    _In_ DWORD MaxOutstandingSend
);
typedef struct _RIO_EXTENSION_FUNCTION_TABLE {
    DWORD cbSize;
    LPFN_RIORECEIVE RIOReceive;
    LPFN_RIORECEIVEEX RIOReceiveEx;
    LPFN_RIOSEND RIOSend;
    LPFN_RIOSENDEX RIOSendEx;
    LPFN_RIOCLOSECOMPLETIONQUEUE RIOCloseCompletionQueue;
    LPFN_RIOCREATECOMPLETIONQUEUE RIOCreateCompletionQueue;
    LPFN_RIOCREATEREQUESTQUEUE RIOCreateRequestQueue;
    LPFN_RIODEQUEUECOMPLETION RIODequeueCompletion;
    LPFN_RIODEREGISTERBUFFER RIODeregisterBuffer;
    LPFN_RIONOTIFY RIONotify;
    LPFN_RIOREGISTERBUFFER RIORegisterBuffer;
    LPFN_RIORESIZECOMPLETIONQUEUE RIOResizeCompletionQueue;
    LPFN_RIORESIZEREQUESTQUEUE RIOResizeRequestQueue;
} RIO_EXTENSION_FUNCTION_TABLE, *PRIO_EXTENSION_FUNCTION_TABLE;
    {0x8509e081,0x96dd,0x4005,{0xb1,0x65,0x9e,0x2e,0xe8,0xc7,0x9e,0x3f}}
}
