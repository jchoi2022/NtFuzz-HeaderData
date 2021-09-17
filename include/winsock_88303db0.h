#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef UINT_PTR SOCKET;
typedef struct fd_set {
        u_int fd_count;
        SOCKET fd_array[FD_SETSIZE];
} fd_set;
extern "C" {
extern int PASCAL FAR __WSAFDIsSet(SOCKET, fd_set FAR *);
}
    u_int __i; \
    for (__i = 0; __i < ((fd_set FAR *)(set))->fd_count ; __i++) { \
        if (((fd_set FAR *)(set))->fd_array[__i] == fd) { \
            while (__i < ((fd_set FAR *)(set))->fd_count-1) { \
                ((fd_set FAR *)(set))->fd_array[__i] = \
                    ((fd_set FAR *)(set))->fd_array[__i+1]; \
                __i++; \
            } \
            ((fd_set FAR *)(set))->fd_count--; \
            break; \
        } \
    } \
} while(0)
    if (((fd_set FAR *)(set))->fd_count < FD_SETSIZE) \
        ((fd_set FAR *)(set))->fd_array[((fd_set FAR *)(set))->fd_count++]=(fd);\
} while(0)
struct timeval {
        long tv_sec;
        long tv_usec;
};
        ((tvp)->tv_sec cmp (uvp)->tv_sec || \
         (tvp)->tv_sec == (uvp)->tv_sec && (tvp)->tv_usec cmp (uvp)->tv_usec)
struct hostent {
        char FAR * h_name;
        char FAR * FAR * h_aliases;
        short h_addrtype;
        short h_length;
        char FAR * FAR * h_addr_list;
};
struct netent {
        char FAR * n_name;
        char FAR * FAR * n_aliases;
        short n_addrtype;
        u_long n_net;
};
struct servent {
        char FAR * s_name;
        char FAR * FAR * s_aliases;
        char FAR * s_proto;
        short s_port;
};
struct protoent {
        char FAR * p_name;
        char FAR * FAR * p_aliases;
        short p_proto;
};
#include <inaddr.h>
struct sockaddr_in {
        short sin_family;
        u_short sin_port;
        struct in_addr sin_addr;
        char sin_zero[8];
};
typedef struct WSAData {
        WORD wVersion;
        WORD wHighVersion;
        unsigned short iMaxSockets;
        unsigned short iMaxUdpDg;
        char FAR * lpVendorInfo;
        char szDescription[WSADESCRIPTION_LEN+1];
        char szSystemStatus[WSASYS_STATUS_LEN+1];
} WSADATA;
typedef WSADATA FAR *LPWSADATA;
struct ip_mreq {
        struct in_addr imr_multiaddr;
        struct in_addr imr_interface;
};
struct sockaddr {
        u_short sa_family;
        char sa_data[14];
};
struct sockproto {
        u_short sp_family;
        u_short sp_protocol;
};
struct linger {
        u_short l_onoff;
        u_short l_linger;
};
#if 0
#endif
extern "C" {
SOCKET PASCAL FAR accept (
                          _In_ SOCKET s,
                          _Out_writes_bytes_opt_(*addrlen) struct sockaddr FAR *addr,
                          _Inout_opt_ int FAR *addrlen);
int PASCAL FAR bind (
                     _In_ SOCKET s,
                     _In_reads_bytes_(namelen) const struct sockaddr FAR *addr,
                     _In_ int namelen);
int PASCAL FAR closesocket ( IN SOCKET s);
int PASCAL FAR connect (
                        _In_ SOCKET s,
                        _In_reads_bytes_(namelen) const struct sockaddr FAR *name,
                        _In_ int namelen);
int PASCAL FAR ioctlsocket (
                            _In_ SOCKET s,
                            _In_ long cmd,
                            _Inout_ u_long FAR *argp);
int PASCAL FAR getpeername (
                            _In_ SOCKET s,
                            _Out_writes_bytes_to_(*namelen, *namelen) struct sockaddr FAR *name,
                            _Inout_ int FAR * namelen);
int PASCAL FAR getsockname (
                            _In_ SOCKET s,
                            _Out_writes_bytes_to_(*namelen, *namelen) struct sockaddr FAR *name,
                            _Inout_ int FAR * namelen);
int PASCAL FAR getsockopt (
                           _In_ SOCKET s,
                           _In_ int level,
                           _In_ int optname,
                           _Out_writes_bytes_(*optlen) char FAR * optval,
                           _Inout_ int FAR *optlen);
u_long PASCAL FAR htonl ( _In_ u_long hostlong);
u_short PASCAL FAR htons (_In_ u_short hostshort);
unsigned long PASCAL FAR inet_addr (_In_z_ const char FAR * cp);
char FAR * PASCAL FAR inet_ntoa (_In_ struct in_addr in);
int PASCAL FAR listen (
                       _In_ SOCKET s,
                       _In_ int backlog);
u_long PASCAL FAR ntohl (_In_ u_long netlong);
u_short PASCAL FAR ntohs (_In_ u_short netshort);
int PASCAL FAR recv (
                     _In_ SOCKET s,
                     _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
                     _In_ int len,
                     _In_ int flags);
int PASCAL FAR recvfrom (
                         _In_ SOCKET s,
                         _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
                         _In_ int len,
                         _In_ int flags,
                         _Out_writes_bytes_to_opt_(*fromlen, *fromlen) struct sockaddr FAR * from,
                         _Inout_opt_ int FAR * fromlen);
int PASCAL FAR select (
                        _In_ int nfds,
                        _Inout_opt_ fd_set FAR *readfds,
                        _Inout_opt_ fd_set FAR *writefds,
                        _Inout_opt_ fd_set FAR *exceptfds,
                        _In_opt_ const struct timeval FAR *timeout);
int PASCAL FAR send (
                     _In_ SOCKET s,
                     _In_reads_bytes_(len) const char FAR * buf,
                     _In_ int len,
                     _In_ int flags);
int PASCAL FAR sendto (
                       _In_ SOCKET s,
                       _In_reads_bytes_(len) const char FAR * buf,
                       _In_ int len,
                       _In_ int flags,
                       _In_reads_bytes_opt_(tolen) const struct sockaddr FAR *to,
                       _In_ int tolen);
int PASCAL FAR setsockopt (
                           _In_ SOCKET s,
                           _In_ int level,
                           _In_ int optname,
                           _In_reads_bytes_opt_(optlen) const char FAR * optval,
                           _In_ int optlen);
int PASCAL FAR shutdown (
                         _In_ SOCKET s,
                         _In_ int how);
SOCKET PASCAL FAR socket (
                          _In_ int af,
                          _In_ int type,
                          _In_ int protocol);
struct hostent FAR * PASCAL FAR gethostbyaddr(
                                              _In_reads_bytes_(len) const char FAR * addr,
                                              _In_ int len,
                                              _In_ int type);
struct hostent FAR * PASCAL FAR gethostbyname(_In_z_ const char FAR * name);
int PASCAL FAR gethostname (
                            _Out_writes_bytes_to_(namelen, return) char FAR * name,
                            _In_ int namelen);
struct servent FAR * PASCAL FAR getservbyport(
                                              _In_ int port,
                                              _In_z_ const char FAR * proto);
struct servent FAR * PASCAL FAR getservbyname(
                                              _In_z_ const char FAR * name,
                                              _In_z_ const char FAR * proto);
struct protoent FAR * PASCAL FAR getprotobynumber(_In_ int proto);
struct protoent FAR * PASCAL FAR getprotobyname(_In_z_ const char FAR * name);
int PASCAL FAR WSAStartup(
                          _In_ WORD wVersionRequired,
                          _Out_ LPWSADATA lpWSAData);
int PASCAL FAR WSACleanup(void);
void PASCAL FAR WSASetLastError(_In_ int iError);
int PASCAL FAR WSAGetLastError(void);
BOOL PASCAL FAR WSAIsBlocking(void);
int PASCAL FAR WSAUnhookBlockingHook(void);
FARPROC PASCAL FAR WSASetBlockingHook(_In_ FARPROC lpBlockFunc);
int PASCAL FAR WSACancelBlockingCall(void);
HANDLE PASCAL FAR WSAAsyncGetServByName(
                                        _In_ HWND hWnd,
                                        _In_ u_int wMsg,
                                        _In_z_ const char FAR * name,
                                        _In_z_ const char FAR * proto,
                                        _Out_writes_bytes_(buflen) char FAR * buf,
                                        _In_ int buflen);
HANDLE PASCAL FAR WSAAsyncGetServByPort(
                                        _In_ HWND hWnd,
                                        _In_ u_int wMsg,
                                        _In_ int port,
                                        _In_ const char FAR * proto,
                                        _Out_writes_bytes_(buflen) char FAR * buf,
                                        _In_ int buflen);
HANDLE PASCAL FAR WSAAsyncGetProtoByName(
                                         _In_ HWND hWnd,
                                         _In_ u_int wMsg,
                                         _In_z_ const char FAR * name,
                                         _Out_writes_bytes_(buflen) char FAR * buf,
                                         _In_ int buflen);
HANDLE PASCAL FAR WSAAsyncGetProtoByNumber(
                                           _In_ HWND hWnd,
                                           _In_ u_int wMsg,
                                           _In_ int number,
                                           _Out_writes_bytes_(buflen) char FAR * buf,
                                           _In_ int buflen);
HANDLE PASCAL FAR WSAAsyncGetHostByName(
                                        _In_ HWND hWnd,
                                        _In_ u_int wMsg,
                                        _In_z_ const char FAR * name,
                                        _Out_writes_bytes_(buflen) char FAR * buf,
                                        _In_ int buflen);
HANDLE PASCAL FAR WSAAsyncGetHostByAddr(
                                        _In_ HWND hWnd,
                                        _In_ u_int wMsg,
                                        _In_ const char FAR * addr,
                                        _In_ int len,
                                        _In_ int type,
                                        _Out_writes_bytes_(buflen) char FAR * buf,
                                        _In_ int buflen);
int PASCAL FAR WSACancelAsyncRequest(_In_ HANDLE hAsyncTaskHandle);
int PASCAL FAR WSAAsyncSelect(
                              _In_ SOCKET s,
                              _In_ HWND hWnd,
                              _In_ u_int wMsg,
                              _In_ long lEvent);
int PASCAL FAR WSARecvEx (
                          _In_ SOCKET s,
                          _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
                          _In_ int len,
                          _Inout_ int FAR *flags);
typedef struct _TRANSMIT_FILE_BUFFERS {
    PVOID Head;
    DWORD HeadLength;
    PVOID Tail;
    DWORD TailLength;
} TRANSMIT_FILE_BUFFERS, *PTRANSMIT_FILE_BUFFERS, *LPTRANSMIT_FILE_BUFFERS;
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
    _Out_writes_bytes_to_(dwReceiveDataLength+dwLocalAddressLength+dwRemoteAddressLength,
       *lpdwBytesReceived) PVOID lpOutputBuffer,
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
}
typedef struct sockaddr SOCKADDR;
typedef struct sockaddr *PSOCKADDR;
typedef struct sockaddr FAR *LPSOCKADDR;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr_in *PSOCKADDR_IN;
typedef struct sockaddr_in FAR *LPSOCKADDR_IN;
typedef struct linger LINGER;
typedef struct linger *PLINGER;
typedef struct linger FAR *LPLINGER;
typedef struct fd_set FD_SET;
typedef struct fd_set *PFD_SET;
typedef struct fd_set FAR *LPFD_SET;
typedef struct hostent HOSTENT;
typedef struct hostent *PHOSTENT;
typedef struct hostent FAR *LPHOSTENT;
typedef struct servent SERVENT;
typedef struct servent *PSERVENT;
typedef struct servent FAR *LPSERVENT;
typedef struct protoent PROTOENT;
typedef struct protoent *PPROTOENT;
typedef struct protoent FAR *LPPROTOENT;
typedef struct timeval TIMEVAL;
typedef struct timeval *PTIMEVAL;
typedef struct timeval FAR *LPTIMEVAL;
#error WINSOCK2 required.
#endif
#pragma endregion
