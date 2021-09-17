       
#include <winapifamily.h>
#include <windows.h>
        ((WORD)(((BYTE)(low)) | ((WORD)((BYTE)(high))) << 8))
extern "C" {
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned __int64 u_int64;
#include <ws2def.h>
typedef UINT_PTR SOCKET;
typedef struct fd_set {
        u_int fd_count;
        SOCKET fd_array[FD_SETSIZE];
} fd_set;
extern int PASCAL FAR __WSAFDIsSet(SOCKET fd, fd_set FAR *);
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
} while(0, 0)
    u_int __i; \
    for (__i = 0; __i < ((fd_set FAR *)(set))->fd_count; __i++) { \
        if (((fd_set FAR *)(set))->fd_array[__i] == (fd)) { \
            break; \
        } \
    } \
    if (__i == ((fd_set FAR *)(set))->fd_count) { \
        if (((fd_set FAR *)(set))->fd_count < FD_SETSIZE) { \
            ((fd_set FAR *)(set))->fd_array[__i] = (fd); \
            ((fd_set FAR *)(set))->fd_count++; \
        } \
    } \
} while(0, 0)
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
struct in_addr {
        union {
                struct { u_char s_b1,s_b2,s_b3,s_b4; } S_un_b;
                struct { u_short s_w1,s_w2; } S_un_w;
                u_long S_addr;
        } S_un;
};
typedef struct WSAData {
        WORD wVersion;
        WORD wHighVersion;
        unsigned short iMaxSockets;
        unsigned short iMaxUdpDg;
        char FAR * lpVendorInfo;
        char szDescription[WSADESCRIPTION_LEN+1];
        char szSystemStatus[WSASYS_STATUS_LEN+1];
} WSADATA, FAR * LPWSADATA;
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
typedef struct _OVERLAPPED * LPWSAOVERLAPPED;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <qos.h>
typedef struct _QualityOfService
{
    FLOWSPEC SendingFlowspec;
    FLOWSPEC ReceivingFlowspec;
    WSABUF ProviderSpecific;
} QOS, FAR * LPQOS;
#endif
#pragma endregion
typedef unsigned int GROUP;
typedef struct _WSANETWORKEVENTS {
       long lNetworkEvents;
       int iErrorCode[FD_MAX_EVENTS];
} WSANETWORKEVENTS, FAR * LPWSANETWORKEVENTS;
#include <guiddef.h>
typedef struct _WSAPROTOCOLCHAIN {
    int ChainLen;
    DWORD ChainEntries[MAX_PROTOCOL_CHAIN];
} WSAPROTOCOLCHAIN, FAR * LPWSAPROTOCOLCHAIN;
typedef struct _WINSOCK_DEPRECATED_BY("WSAPROTOCOL_INFOW") _WSAPROTOCOL_INFOA {
    DWORD dwServiceFlags1;
    DWORD dwServiceFlags2;
    DWORD dwServiceFlags3;
    DWORD dwServiceFlags4;
    DWORD dwProviderFlags;
    GUID ProviderId;
    DWORD dwCatalogEntryId;
    WSAPROTOCOLCHAIN ProtocolChain;
    int iVersion;
    int iAddressFamily;
    int iMaxSockAddr;
    int iMinSockAddr;
    int iSocketType;
    int iProtocol;
    int iProtocolMaxOffset;
    int iNetworkByteOrder;
    int iSecurityScheme;
    DWORD dwMessageSize;
    DWORD dwProviderReserved;
    CHAR szProtocol[WSAPROTOCOL_LEN+1];
} WSAPROTOCOL_INFOA, FAR * LPWSAPROTOCOL_INFOA;
typedef struct _WSAPROTOCOL_INFOW {
    DWORD dwServiceFlags1;
    DWORD dwServiceFlags2;
    DWORD dwServiceFlags3;
    DWORD dwServiceFlags4;
    DWORD dwProviderFlags;
    GUID ProviderId;
    DWORD dwCatalogEntryId;
    WSAPROTOCOLCHAIN ProtocolChain;
    int iVersion;
    int iAddressFamily;
    int iMaxSockAddr;
    int iMinSockAddr;
    int iSocketType;
    int iProtocol;
    int iProtocolMaxOffset;
    int iNetworkByteOrder;
    int iSecurityScheme;
    DWORD dwMessageSize;
    DWORD dwProviderReserved;
    WCHAR szProtocol[WSAPROTOCOL_LEN+1];
} WSAPROTOCOL_INFOW, FAR * LPWSAPROTOCOL_INFOW;
typedef WSAPROTOCOL_INFOW WSAPROTOCOL_INFO;
typedef LPWSAPROTOCOL_INFOW LPWSAPROTOCOL_INFO;
typedef
int
(CALLBACK * LPCONDITIONPROC)(
    IN LPWSABUF lpCallerId,
    IN LPWSABUF lpCallerData,
    IN OUT LPQOS lpSQOS,
    IN OUT LPQOS lpGQOS,
    IN LPWSABUF lpCalleeId,
    IN LPWSABUF lpCalleeData,
    OUT GROUP FAR * g,
    IN DWORD_PTR dwCallbackData
    );
typedef
void
(CALLBACK * LPWSAOVERLAPPED_COMPLETION_ROUTINE)(
    IN DWORD dwError,
    IN DWORD cbTransferred,
    IN LPWSAOVERLAPPED lpOverlapped,
    IN DWORD dwFlags
    );
typedef enum _WSACOMPLETIONTYPE {
    NSP_NOTIFY_IMMEDIATELY = 0,
    NSP_NOTIFY_HWND,
    NSP_NOTIFY_EVENT,
    NSP_NOTIFY_PORT,
    NSP_NOTIFY_APC,
} WSACOMPLETIONTYPE, *PWSACOMPLETIONTYPE, FAR * LPWSACOMPLETIONTYPE;
typedef struct _WSACOMPLETION {
    WSACOMPLETIONTYPE Type;
    union {
        struct {
            HWND hWnd;
            UINT uMsg;
            WPARAM context;
        } WindowMessage;
        struct {
            LPWSAOVERLAPPED lpOverlapped;
        } Event;
        struct {
            LPWSAOVERLAPPED lpOverlapped;
            LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc;
        } Apc;
        struct {
            LPWSAOVERLAPPED lpOverlapped;
            HANDLE hPort;
            ULONG_PTR Key;
        } Port;
    } Parameters;
} WSACOMPLETION, *PWSACOMPLETION, FAR *LPWSACOMPLETION;
typedef struct _BLOB {
    ULONG cbSize ;
    [size_is(cbSize)] BYTE *pBlobData;
} BLOB, *LPBLOB ;
typedef struct _AFPROTOCOLS {
    INT iAddressFamily;
    INT iProtocol;
} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;
typedef enum _WSAEcomparator
{
    COMP_EQUAL = 0,
    COMP_NOTLESS
} WSAECOMPARATOR, *PWSAECOMPARATOR, *LPWSAECOMPARATOR;
typedef struct _WSAVersion
{
    DWORD dwVersion;
    WSAECOMPARATOR ecHow;
}WSAVERSION, *PWSAVERSION, *LPWSAVERSION;
typedef struct _WINSOCK_DEPRECATED_BY("WSAQUERYSETW") _WSAQuerySetA
{
    DWORD dwSize;
    LPSTR lpszServiceInstanceName;
    LPGUID lpServiceClassId;
    LPWSAVERSION lpVersion;
    LPSTR lpszComment;
    DWORD dwNameSpace;
    LPGUID lpNSProviderId;
    LPSTR lpszContext;
    DWORD dwNumberOfProtocols;
    _Field_size_(dwNumberOfProtocols) LPAFPROTOCOLS lpafpProtocols;
    LPSTR lpszQueryString;
    DWORD dwNumberOfCsAddrs;
    _Field_size_(dwNumberOfCsAddrs) LPCSADDR_INFO lpcsaBuffer;
    DWORD dwOutputFlags;
    LPBLOB lpBlob;
} WSAQUERYSETA, *PWSAQUERYSETA, *LPWSAQUERYSETA;
typedef _Struct_size_bytes_(dwSize) struct _WSAQuerySetW
{
    _Field_range_(>=,sizeof(struct _WSAQuerySetW)) DWORD dwSize;
    LPWSTR lpszServiceInstanceName;
    LPGUID lpServiceClassId;
    LPWSAVERSION lpVersion;
    LPWSTR lpszComment;
    DWORD dwNameSpace;
    LPGUID lpNSProviderId;
    LPWSTR lpszContext;
    DWORD dwNumberOfProtocols;
    _Field_size_(dwNumberOfProtocols) LPAFPROTOCOLS lpafpProtocols;
    LPWSTR lpszQueryString;
    DWORD dwNumberOfCsAddrs;
    _Field_size_(dwNumberOfCsAddrs) LPCSADDR_INFO lpcsaBuffer;
    DWORD dwOutputFlags;
    LPBLOB lpBlob;
} WSAQUERYSETW, *PWSAQUERYSETW, *LPWSAQUERYSETW;
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _WINSOCK_DEPRECATED_BY("WSAQUERYSET2W") _WSAQuerySet2A
{
    DWORD dwSize;
    LPSTR lpszServiceInstanceName;
    LPWSAVERSION lpVersion;
    LPSTR lpszComment;
    DWORD dwNameSpace;
    LPGUID lpNSProviderId;
    LPSTR lpszContext;
    DWORD dwNumberOfProtocols;
    LPAFPROTOCOLS lpafpProtocols;
    LPSTR lpszQueryString;
    DWORD dwNumberOfCsAddrs;
    LPCSADDR_INFO lpcsaBuffer;
    DWORD dwOutputFlags;
    LPBLOB lpBlob;
} WSAQUERYSET2A, *PWSAQUERYSET2A, *LPWSAQUERYSET2A;
typedef struct _WSAQuerySet2W
{
    DWORD dwSize;
    LPWSTR lpszServiceInstanceName;
    LPWSAVERSION lpVersion;
    LPWSTR lpszComment;
    DWORD dwNameSpace;
    LPGUID lpNSProviderId;
    LPWSTR lpszContext;
    DWORD dwNumberOfProtocols;
    _Field_size_(dwNumberOfProtocols) LPAFPROTOCOLS lpafpProtocols;
    LPWSTR lpszQueryString;
    DWORD dwNumberOfCsAddrs;
    _Field_size_(dwNumberOfCsAddrs) LPCSADDR_INFO lpcsaBuffer;
    DWORD dwOutputFlags;
    LPBLOB lpBlob;
} WSAQUERYSET2W, *PWSAQUERYSET2W, *LPWSAQUERYSET2W;
typedef WSAQUERYSETW WSAQUERYSET;
typedef PWSAQUERYSETW PWSAQUERYSET;
typedef LPWSAQUERYSETW LPWSAQUERYSET;
typedef WSAQUERYSET2W WSAQUERYSET2;
typedef PWSAQUERYSET2W PWSAQUERYSET2;
typedef LPWSAQUERYSET2W LPWSAQUERYSET2;
#endif
#pragma endregion
typedef enum _WSAESETSERVICEOP
{
    RNRSERVICE_REGISTER=0,
    RNRSERVICE_DEREGISTER,
    RNRSERVICE_DELETE
} WSAESETSERVICEOP, *PWSAESETSERVICEOP, *LPWSAESETSERVICEOP;
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _WINSOCK_DEPRECATED_BY("WSANSCLASSINFOW") _WSANSClassInfoA
{
    LPSTR lpszName;
    DWORD dwNameSpace;
    DWORD dwValueType;
    DWORD dwValueSize;
    LPVOID lpValue;
}WSANSCLASSINFOA, *PWSANSCLASSINFOA, *LPWSANSCLASSINFOA;
#endif
#pragma endregion
typedef struct _WSANSClassInfoW
{
    LPWSTR lpszName;
    DWORD dwNameSpace;
    DWORD dwValueType;
    DWORD dwValueSize;
    LPVOID lpValue;
}WSANSCLASSINFOW, *PWSANSCLASSINFOW, *LPWSANSCLASSINFOW;
typedef WSANSCLASSINFOW WSANSCLASSINFO;
typedef PWSANSCLASSINFOW PWSANSCLASSINFO;
typedef LPWSANSCLASSINFOW LPWSANSCLASSINFO;
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _WINSOCK_DEPRECATED_BY("WSASERVICECLASSINFOW") _WSAServiceClassInfoA
{
    LPGUID lpServiceClassId;
    LPSTR lpszServiceClassName;
    DWORD dwCount;
    LPWSANSCLASSINFOA lpClassInfos;
}WSASERVICECLASSINFOA, *PWSASERVICECLASSINFOA, *LPWSASERVICECLASSINFOA;
#endif
#pragma endregion
typedef struct _WSAServiceClassInfoW
{
    LPGUID lpServiceClassId;
    LPWSTR lpszServiceClassName;
    DWORD dwCount;
    LPWSANSCLASSINFOW lpClassInfos;
}WSASERVICECLASSINFOW, *PWSASERVICECLASSINFOW, *LPWSASERVICECLASSINFOW;
typedef WSASERVICECLASSINFOW WSASERVICECLASSINFO;
typedef PWSASERVICECLASSINFOW PWSASERVICECLASSINFO;
typedef LPWSASERVICECLASSINFOW LPWSASERVICECLASSINFO;
typedef struct _WINSOCK_DEPRECATED_BY("WSANAMESPACE_INFOW") _WSANAMESPACE_INFOA {
    GUID NSProviderId;
    DWORD dwNameSpace;
    BOOL fActive;
    DWORD dwVersion;
    LPSTR lpszIdentifier;
} WSANAMESPACE_INFOA, *PWSANAMESPACE_INFOA, *LPWSANAMESPACE_INFOA;
typedef struct _WSANAMESPACE_INFOW {
    GUID NSProviderId;
    DWORD dwNameSpace;
    BOOL fActive;
    DWORD dwVersion;
    LPWSTR lpszIdentifier;
} WSANAMESPACE_INFOW, *PWSANAMESPACE_INFOW, *LPWSANAMESPACE_INFOW;
typedef struct _WINSOCK_DEPRECATED_BY("WSANAMESPACE_INFOEXW") _WSANAMESPACE_INFOEXA {
    GUID NSProviderId;
    DWORD dwNameSpace;
    BOOL fActive;
    DWORD dwVersion;
    LPSTR lpszIdentifier;
    BLOB ProviderSpecific;
} WSANAMESPACE_INFOEXA, *PWSANAMESPACE_INFOEXA, *LPWSANAMESPACE_INFOEXA;
typedef struct _WSANAMESPACE_INFOEXW {
    GUID NSProviderId;
    DWORD dwNameSpace;
    BOOL fActive;
    DWORD dwVersion;
    LPWSTR lpszIdentifier;
    BLOB ProviderSpecific;
} WSANAMESPACE_INFOEXW, *PWSANAMESPACE_INFOEXW, *LPWSANAMESPACE_INFOEXW;
typedef WSANAMESPACE_INFOW WSANAMESPACE_INFO;
typedef PWSANAMESPACE_INFOW PWSANAMESPACE_INFO;
typedef LPWSANAMESPACE_INFOW LPWSANAMESPACE_INFO;
typedef WSANAMESPACE_INFOEXW WSANAMESPACE_INFOEX;
typedef PWSANAMESPACE_INFOEXW PWSANAMESPACE_INFOEX;
typedef LPWSANAMESPACE_INFOEXW LPWSANAMESPACE_INFOEX;
typedef struct pollfd {
    SOCKET fd;
    SHORT events;
    SHORT revents;
} WSAPOLLFD, *PWSAPOLLFD, FAR *LPWSAPOLLFD;
WINSOCK_API_LINKAGE
_Must_inspect_result_
SOCKET
WSAAPI
accept(
    _In_ SOCKET s,
    _Out_writes_bytes_opt_(*addrlen) struct sockaddr FAR * addr,
    _Inout_opt_ int FAR * addrlen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
bind(
    _In_ SOCKET s,
    _In_reads_bytes_(namelen) const struct sockaddr FAR * name,
    _In_ int namelen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
closesocket(
    _In_ SOCKET s
    );
WINSOCK_API_LINKAGE
int
WSAAPI
connect(
    _In_ SOCKET s,
    _In_reads_bytes_(namelen) const struct sockaddr FAR * name,
    _In_ int namelen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
ioctlsocket(
    _In_ SOCKET s,
    _In_ long cmd,
    _When_(cmd != FIONREAD, _Inout_)
    _When_(cmd == FIONREAD, _Out_)
    u_long FAR * argp
    );
WINSOCK_API_LINKAGE
int
WSAAPI
getpeername(
    _In_ SOCKET s,
    _Out_writes_bytes_to_(*namelen,*namelen) struct sockaddr FAR * name,
    _Inout_ int FAR * namelen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
getsockname(
    _In_ SOCKET s,
    _Out_writes_bytes_to_(*namelen,*namelen) struct sockaddr FAR * name,
    _Inout_ int FAR * namelen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
getsockopt(
    _In_ SOCKET s,
    _In_ int level,
    _In_ int optname,
    _Out_writes_bytes_(*optlen) char FAR * optval,
    _Inout_ int FAR * optlen
    );
WINSOCK_API_LINKAGE
u_long
WSAAPI
htonl(
    _In_ u_long hostlong
    );
WINSOCK_API_LINKAGE
u_short
WSAAPI
htons(
    _In_ u_short hostshort
    );
_WINSOCK_DEPRECATED_BY("inet_pton() or InetPton()")
WINSOCK_API_LINKAGE
unsigned long
WSAAPI
inet_addr(
    _In_z_ const char FAR * cp
    );
_WINSOCK_DEPRECATED_BY("inet_ntop() or InetNtop()")
WINSOCK_API_LINKAGE
char FAR *
WSAAPI
inet_ntoa(
    _In_ struct in_addr in
    );
            ( ( ((l) >> 24) & 0x000000FFL ) | \
              ( ((l) >> 8) & 0x0000FF00L ) | \
              ( ((l) << 8) & 0x00FF0000L ) | \
              ( ((l) << 24) & 0xFF000000L ) )
            ( ( ((l) >> 56) & 0x00000000000000FFLL ) | \
              ( ((l) >> 40) & 0x000000000000FF00LL ) | \
              ( ((l) >> 24) & 0x0000000000FF0000LL ) | \
              ( ((l) >> 8) & 0x00000000FF000000LL ) | \
              ( ((l) << 8) & 0x000000FF00000000LL ) | \
              ( ((l) << 24) & 0x0000FF0000000000LL ) | \
              ( ((l) << 40) & 0x00FF000000000000LL ) | \
              ( ((l) << 56) & 0xFF00000000000000LL ) )
__inline unsigned __int64 htonll ( unsigned __int64 Value )
{
 const unsigned __int64 Retval = _WS2_32_WINSOCK_SWAP_LONGLONG (Value);
 return Retval;
}
__inline unsigned __int64 ntohll ( unsigned __int64 Value )
{
 const unsigned __int64 Retval = _WS2_32_WINSOCK_SWAP_LONGLONG (Value);
 return Retval;
}
__inline unsigned __int32 htonf ( float Value )
{
 unsigned __int32 Tempval;
 unsigned __int32 Retval;
 Tempval = *(unsigned __int32*)(&Value);
 Retval = _WS2_32_WINSOCK_SWAP_LONG (Tempval);
 return Retval;
}
__inline float ntohf ( unsigned __int32 Value )
{
 const unsigned __int32 Tempval = _WS2_32_WINSOCK_SWAP_LONG (Value);
 float Retval;
 *((unsigned __int32*)&Retval) = Tempval;
 return Retval;
}
__inline unsigned __int64 htond ( double Value )
{
 unsigned __int64 Tempval;
 unsigned __int64 Retval;
 Tempval = *(unsigned __int64*)(&Value);
 Retval = _WS2_32_WINSOCK_SWAP_LONGLONG (Tempval);
 return Retval;
}
__inline double ntohd ( unsigned __int64 Value )
{
 const unsigned __int64 Tempval = _WS2_32_WINSOCK_SWAP_LONGLONG (Value);
 double Retval;
 *((unsigned __int64*)&Retval) = Tempval;
 return Retval;
}
WINSOCK_API_LINKAGE
int
WSAAPI
listen(
    _In_ SOCKET s,
    _In_ int backlog
    );
WINSOCK_API_LINKAGE
u_long
WSAAPI
ntohl(
    _In_ u_long netlong
    );
WINSOCK_API_LINKAGE
u_short
WSAAPI
ntohs(
    _In_ u_short netshort
    );
WINSOCK_API_LINKAGE
int
WSAAPI
recv(
    _In_ SOCKET s,
    _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
    _In_ int len,
    _In_ int flags
    );
WINSOCK_API_LINKAGE
int
WSAAPI
recvfrom(
    _In_ SOCKET s,
    _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
    _In_ int len,
    _In_ int flags,
    _Out_writes_bytes_to_opt_(*fromlen, *fromlen) struct sockaddr FAR * from,
    _Inout_opt_ int FAR * fromlen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
select(
    _In_ int nfds,
    _Inout_opt_ fd_set FAR * readfds,
    _Inout_opt_ fd_set FAR * writefds,
    _Inout_opt_ fd_set FAR * exceptfds,
    _In_opt_ const struct timeval FAR * timeout
    );
WINSOCK_API_LINKAGE
int
WSAAPI
send(
    _In_ SOCKET s,
    _In_reads_bytes_(len) const char FAR * buf,
    _In_ int len,
    _In_ int flags
    );
WINSOCK_API_LINKAGE
int
WSAAPI
sendto(
    _In_ SOCKET s,
    _In_reads_bytes_(len) const char FAR * buf,
    _In_ int len,
    _In_ int flags,
    _In_reads_bytes_(tolen) const struct sockaddr FAR * to,
    _In_ int tolen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
setsockopt(
    _In_ SOCKET s,
    _In_ int level,
    _In_ int optname,
    _In_reads_bytes_opt_(optlen) const char FAR * optval,
    _In_ int optlen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
shutdown(
    _In_ SOCKET s,
    _In_ int how
    );
WINSOCK_API_LINKAGE
_Must_inspect_result_
SOCKET
WSAAPI
socket(
    _In_ int af,
    _In_ int type,
    _In_ int protocol
    );
_WINSOCK_DEPRECATED_BY("getnameinfo() or GetNameInfoW()")
WINSOCK_API_LINKAGE
struct hostent FAR *
WSAAPI
gethostbyaddr(
    _In_reads_bytes_(len) const char FAR * addr,
    _In_ int len,
    _In_ int type
    );
_WINSOCK_DEPRECATED_BY("getaddrinfo() or GetAddrInfoW()")
WINSOCK_API_LINKAGE
struct hostent FAR *
WSAAPI
gethostbyname(
    _In_z_ const char FAR * name
    );
WINSOCK_API_LINKAGE
int
WSAAPI
gethostname(
    _Out_writes_bytes_(namelen) char FAR * name,
    _In_ int namelen
    );
WINSOCK_API_LINKAGE
int
WSAAPI
GetHostNameW(
    _Out_writes_(namelen) PWSTR name,
    _In_ int namelen
    );
WINSOCK_API_LINKAGE
struct servent FAR *
WSAAPI
getservbyport(
    _In_ int port,
    _In_opt_z_ const char FAR * proto
    );
WINSOCK_API_LINKAGE
struct servent FAR *
WSAAPI
getservbyname(
    _In_z_ const char FAR * name,
    _In_opt_z_ const char FAR * proto
    );
WINSOCK_API_LINKAGE
struct protoent FAR *
WSAAPI
getprotobynumber(
    _In_ int number
    );
WINSOCK_API_LINKAGE
struct protoent FAR *
WSAAPI
getprotobyname(
    _In_z_ const char FAR * name
    );
WINSOCK_API_LINKAGE
_Must_inspect_result_
int
WSAAPI
WSAStartup(
    _In_ WORD wVersionRequested,
    _Out_ LPWSADATA lpWSAData
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSACleanup(
    void
    );
WINSOCK_API_LINKAGE
void
WSAAPI
WSASetLastError(
    _In_ int iError
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAGetLastError(
    void
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED_BY("Winsock 2")
WINSOCK_API_LINKAGE
BOOL
WSAAPI
WSAIsBlocking(
    void
    );
_WINSOCK_DEPRECATED_BY("Winsock 2")
WINSOCK_API_LINKAGE
int
WSAAPI
WSAUnhookBlockingHook(
    void
    );
_WINSOCK_DEPRECATED_BY("Winsock 2")
WINSOCK_API_LINKAGE
FARPROC
WSAAPI
WSASetBlockingHook(
    _In_ FARPROC lpBlockFunc
    );
_WINSOCK_DEPRECATED_BY("Winsock 2")
WINSOCK_API_LINKAGE
int
WSAAPI
WSACancelBlockingCall(
    void
    );
_WINSOCK_DEPRECATED_BY("getservbyname()")
WINSOCK_API_LINKAGE
HANDLE
WSAAPI
WSAAsyncGetServByName(
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_z_ const char FAR * name,
    _In_z_ const char FAR * proto,
    _Out_writes_bytes_(buflen) char FAR * buf,
    _In_ int buflen
    );
_WINSOCK_DEPRECATED_BY("getservbyport()")
WINSOCK_API_LINKAGE
HANDLE
WSAAPI
WSAAsyncGetServByPort(
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_ int port,
    _In_ const char FAR * proto,
    _Out_writes_bytes_(buflen) char FAR * buf,
    _In_ int buflen
    );
_WINSOCK_DEPRECATED_BY("getprotobyname()")
WINSOCK_API_LINKAGE
HANDLE
WSAAPI
WSAAsyncGetProtoByName(
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_z_ const char FAR * name,
    _Out_writes_bytes_(buflen) char FAR * buf,
    _In_ int buflen
    );
_WINSOCK_DEPRECATED_BY("getprotobynumber()")
WINSOCK_API_LINKAGE
HANDLE
WSAAPI
WSAAsyncGetProtoByNumber(
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_ int number,
    _Out_writes_bytes_(buflen) char FAR * buf,
    _In_ int buflen
    );
_WINSOCK_DEPRECATED_BY("GetAddrInfoExW()")
WINSOCK_API_LINKAGE
HANDLE
WSAAPI
WSAAsyncGetHostByName(
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_z_ const char FAR * name,
    _Out_writes_bytes_(buflen) char FAR * buf,
    _In_ int buflen
    );
_WINSOCK_DEPRECATED_BY("getnameinfo() or GetNameInfoW()")
WINSOCK_API_LINKAGE
HANDLE
WSAAPI
WSAAsyncGetHostByAddr(
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_reads_bytes_(len) const char FAR * addr,
    _In_ int len,
    _In_ int type,
    _Out_writes_bytes_(buflen) char FAR * buf,
    _In_ int buflen
    );
_WINSOCK_DEPRECATED
WINSOCK_API_LINKAGE
int
WSAAPI
WSACancelAsyncRequest(
    _In_ HANDLE hAsyncTaskHandle
    );
_WINSOCK_DEPRECATED_BY("WSAEventSelect()")
WINSOCK_API_LINKAGE
int
WSAAPI
WSAAsyncSelect(
    _In_ SOCKET s,
    _In_ HWND hWnd,
    _In_ u_int wMsg,
    _In_ long lEvent
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
_Must_inspect_result_
SOCKET
WSAAPI
WSAAccept(
    _In_ SOCKET s,
    _Out_writes_bytes_to_opt_(*addrlen,*addrlen) struct sockaddr FAR * addr,
    _Inout_opt_ LPINT addrlen,
    _In_opt_ LPCONDITIONPROC lpfnCondition,
    _In_opt_ DWORD_PTR dwCallbackData
    );
WINSOCK_API_LINKAGE
BOOL
WSAAPI
WSACloseEvent(
    _In_ WSAEVENT hEvent
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAConnect(
    _In_ SOCKET s,
    _In_reads_bytes_(namelen) const struct sockaddr FAR * name,
    _In_ int namelen,
    _In_opt_ LPWSABUF lpCallerData,
    _Out_opt_ LPWSABUF lpCalleeData,
    _In_opt_ LPQOS lpSQOS,
    _In_opt_ LPQOS lpGQOS
    );
BOOL
PASCAL
WSAConnectByNameW(
    _In_ SOCKET s,
    _In_ LPWSTR nodename,
    _In_ LPWSTR servicename,
    _Inout_opt_ LPDWORD LocalAddressLength,
    _Out_writes_bytes_to_opt_(*LocalAddressLength,*LocalAddressLength) LPSOCKADDR LocalAddress,
    _Inout_opt_ LPDWORD RemoteAddressLength,
    _Out_writes_bytes_to_opt_(*RemoteAddressLength,*RemoteAddressLength) LPSOCKADDR RemoteAddress,
    _In_opt_ const struct timeval * timeout,
    _Reserved_ LPWSAOVERLAPPED Reserved);
_WINSOCK_DEPRECATED_BY("WSAConnectByNameW()")
BOOL
PASCAL
WSAConnectByNameA(
    _In_ SOCKET s,
    _In_ LPCSTR nodename,
    _In_ LPCSTR servicename,
    _Inout_opt_ LPDWORD LocalAddressLength,
    _Out_writes_bytes_to_opt_(*LocalAddressLength,*LocalAddressLength) LPSOCKADDR LocalAddress,
    _Inout_opt_ LPDWORD RemoteAddressLength,
    _Out_writes_bytes_to_opt_(*RemoteAddressLength,*RemoteAddressLength) LPSOCKADDR RemoteAddress,
    _In_opt_ const struct timeval * timeout,
    _Reserved_ LPWSAOVERLAPPED Reserved);
BOOL
PASCAL
WSAConnectByList(
    _In_ SOCKET s,
    _In_ PSOCKET_ADDRESS_LIST SocketAddress,
    _Inout_opt_ LPDWORD LocalAddressLength,
    _Out_writes_bytes_to_opt_(*LocalAddressLength,*LocalAddressLength) LPSOCKADDR LocalAddress,
    _Inout_opt_ LPDWORD RemoteAddressLength,
    _Out_writes_bytes_to_opt_(*RemoteAddressLength,*RemoteAddressLength) LPSOCKADDR RemoteAddress,
    _In_opt_ const struct timeval * timeout,
    _Reserved_ LPWSAOVERLAPPED Reserved);
WINSOCK_API_LINKAGE
WSAEVENT
WSAAPI
WSACreateEvent(
    void
    );
_WINSOCK_DEPRECATED_BY("WSADuplicateSocketW()")
WINSOCK_API_LINKAGE
int
WSAAPI
WSADuplicateSocketA(
    _In_ SOCKET s,
    _In_ DWORD dwProcessId,
    _Out_ LPWSAPROTOCOL_INFOA lpProtocolInfo
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSADuplicateSocketW(
    _In_ SOCKET s,
    _In_ DWORD dwProcessId,
    _Out_ LPWSAPROTOCOL_INFOW lpProtocolInfo
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAEnumNetworkEvents(
    _In_ SOCKET s,
    _In_ WSAEVENT hEventObject,
    _Out_ LPWSANETWORKEVENTS lpNetworkEvents
    );
_WINSOCK_DEPRECATED_BY("WSAEnumProtocolsW()")
WINSOCK_API_LINKAGE
int
WSAAPI
WSAEnumProtocolsA(
    _In_opt_ LPINT lpiProtocols,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength,*lpdwBufferLength) LPWSAPROTOCOL_INFOA lpProtocolBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAEnumProtocolsW(
    _In_opt_ LPINT lpiProtocols,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength,*lpdwBufferLength) LPWSAPROTOCOL_INFOW lpProtocolBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAEventSelect(
    _In_ SOCKET s,
    _In_opt_ WSAEVENT hEventObject,
    _In_ long lNetworkEvents
    );
WINSOCK_API_LINKAGE
BOOL
WSAAPI
WSAGetOverlappedResult(
    _In_ SOCKET s,
    _In_ LPWSAOVERLAPPED lpOverlapped,
    _Out_ LPDWORD lpcbTransfer,
    _In_ BOOL fWait,
    _Out_ LPDWORD lpdwFlags
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED
WINSOCK_API_LINKAGE
BOOL
WSAAPI
WSAGetQOSByName(
    _In_ SOCKET s,
    _In_ LPWSABUF lpQOSName,
    _Out_ LPQOS lpQOS
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
int
WSAAPI
WSAHtonl(
    _In_ IN SOCKET s,
    _In_ IN u_long hostlong,
    _Out_ OUT u_long FAR * lpnetlong
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAHtons(
    _In_ IN SOCKET s,
    _In_ IN u_short hostshort,
    _Out_ OUT u_short FAR * lpnetshort
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAIoctl(
    _In_ SOCKET s,
    _In_ DWORD dwIoControlCode,
    _In_reads_bytes_opt_(cbInBuffer) LPVOID lpvInBuffer,
    _In_ DWORD cbInBuffer,
    _Out_writes_bytes_to_opt_(cbOutBuffer, *lpcbBytesReturned) LPVOID lpvOutBuffer,
    _In_ DWORD cbOutBuffer,
    _Out_ LPDWORD lpcbBytesReturned,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
WINSOCK_API_LINKAGE
SOCKET
WSAAPI
WSAJoinLeaf(
    _In_ SOCKET s,
    _In_reads_bytes_(namelen) const struct sockaddr FAR * name,
    _In_ int namelen,
    _In_opt_ LPWSABUF lpCallerData,
    _Out_opt_ LPWSABUF lpCalleeData,
    _In_opt_ LPQOS lpSQOS,
    _In_opt_ LPQOS lpGQOS,
    _In_ DWORD dwFlags
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSANtohl(
    _In_ SOCKET s,
    _In_ u_long netlong,
    _Out_ u_long FAR * lphostlong
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSANtohs(
    _In_ SOCKET s,
    _In_ u_short netshort,
    _Out_ u_short FAR * lphostshort
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSARecv(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) __out_data_source(NETWORK) LPWSABUF lpBuffers,
    _In_ DWORD dwBufferCount,
    _Out_opt_ LPDWORD lpNumberOfBytesRecvd,
    _Inout_ LPDWORD lpFlags,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED_BY("WSARecv()")
WINSOCK_API_LINKAGE
int
WSAAPI
WSARecvDisconnect(
    _In_ SOCKET s,
    _In_opt_ __out_data_source(NETWORK) LPWSABUF lpInboundDisconnectData
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
int
WSAAPI
WSARecvFrom(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) __out_data_source(NETWORK) LPWSABUF lpBuffers,
    _In_ DWORD dwBufferCount,
    _Out_opt_ LPDWORD lpNumberOfBytesRecvd,
    _Inout_ LPDWORD lpFlags,
    _Out_writes_bytes_to_opt_(*lpFromlen,*lpFromlen) struct sockaddr FAR * lpFrom,
    _Inout_opt_ LPINT lpFromlen,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
WINSOCK_API_LINKAGE
BOOL
WSAAPI
WSAResetEvent(
    _In_ WSAEVENT hEvent
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSASend(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUF lpBuffers,
    _In_ DWORD dwBufferCount,
    _Out_opt_ LPDWORD lpNumberOfBytesSent,
    _In_ DWORD dwFlags,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSASendMsg(
    _In_ SOCKET Handle,
    _In_ LPWSAMSG lpMsg,
    _In_ DWORD dwFlags,
    _Out_opt_ LPDWORD lpNumberOfBytesSent,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED_BY("WSASend()")
WINSOCK_API_LINKAGE
int
WSAAPI
WSASendDisconnect(
    _In_ SOCKET s,
    _In_opt_ LPWSABUF lpOutboundDisconnectData
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
int
WSAAPI
WSASendTo(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUF lpBuffers,
    _In_ DWORD dwBufferCount,
    _Out_opt_ LPDWORD lpNumberOfBytesSent,
    _In_ DWORD dwFlags,
    _In_reads_bytes_opt_(iTolen) const struct sockaddr FAR * lpTo,
    _In_ int iTolen,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
WINSOCK_API_LINKAGE
BOOL
WSAAPI
WSASetEvent(
    _In_ WSAEVENT hEvent
    );
_WINSOCK_DEPRECATED_BY("WSASocketW()")
WINSOCK_API_LINKAGE
_Must_inspect_result_
SOCKET
WSAAPI
WSASocketA(
    _In_ int af,
    _In_ int type,
    _In_ int protocol,
    _In_opt_ LPWSAPROTOCOL_INFOA lpProtocolInfo,
    _In_ GROUP g,
    _In_ DWORD dwFlags
    );
WINSOCK_API_LINKAGE
_Must_inspect_result_
SOCKET
WSAAPI
WSASocketW(
    _In_ int af,
    _In_ int type,
    _In_ int protocol,
    _In_opt_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _In_ GROUP g,
    _In_ DWORD dwFlags
    );
WINSOCK_API_LINKAGE
DWORD
WSAAPI
WSAWaitForMultipleEvents(
    _In_ DWORD cEvents,
    _In_reads_(cEvents) const WSAEVENT FAR * lphEvents,
    _In_ BOOL fWaitAll,
    _In_ DWORD dwTimeout,
    _In_ BOOL fAlertable
    );
_WINSOCK_DEPRECATED_BY("WSAAddressToStringW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAAddressToStringA(
    _In_reads_bytes_(dwAddressLength) LPSOCKADDR lpsaAddress,
    _In_ DWORD dwAddressLength,
    _In_opt_ LPWSAPROTOCOL_INFOA lpProtocolInfo,
    _Out_writes_to_(*lpdwAddressStringLength,*lpdwAddressStringLength) LPSTR lpszAddressString,
    _Inout_ LPDWORD lpdwAddressStringLength
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAAddressToStringW(
    _In_reads_bytes_(dwAddressLength) LPSOCKADDR lpsaAddress,
    _In_ DWORD dwAddressLength,
    _In_opt_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _Out_writes_to_(*lpdwAddressStringLength,*lpdwAddressStringLength) LPWSTR lpszAddressString,
    _Inout_ LPDWORD lpdwAddressStringLength
    );
_WINSOCK_DEPRECATED_BY("WSAStringToAddressW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAStringToAddressA(
    _In_ LPSTR AddressString,
    _In_ INT AddressFamily,
    _In_opt_ LPWSAPROTOCOL_INFOA lpProtocolInfo,
    _Out_writes_bytes_to_(*lpAddressLength,*lpAddressLength) LPSOCKADDR lpAddress,
    _Inout_ LPINT lpAddressLength
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAStringToAddressW(
    _In_ LPWSTR AddressString,
    _In_ INT AddressFamily,
    _In_opt_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _Out_writes_bytes_to_(*lpAddressLength,*lpAddressLength) LPSOCKADDR lpAddress,
    _Inout_ LPINT lpAddressLength
    );
_WINSOCK_DEPRECATED_BY("WSALookupServiceBeginW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSALookupServiceBeginA(
    _In_ LPWSAQUERYSETA lpqsRestrictions,
    _In_ DWORD dwControlFlags,
    _Out_ LPHANDLE lphLookup
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSALookupServiceBeginW(
    _In_ LPWSAQUERYSETW lpqsRestrictions,
    _In_ DWORD dwControlFlags,
    _Out_ LPHANDLE lphLookup
    );
_WINSOCK_DEPRECATED_BY("WSALookupServiceNextW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSALookupServiceNextA(
    _In_ HANDLE hLookup,
    _In_ DWORD dwControlFlags,
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPWSAQUERYSETA lpqsResults
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSALookupServiceNextW(
    _In_ HANDLE hLookup,
    _In_ DWORD dwControlFlags,
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength,*lpdwBufferLength) LPWSAQUERYSETW lpqsResults
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSANSPIoctl(
    _In_ HANDLE hLookup,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(cbInBuffer) LPVOID lpvInBuffer,
    _In_ DWORD cbInBuffer,
    _Out_writes_bytes_to_opt_(cbOutBuffer, *lpcbBytesReturned) LPVOID lpvOutBuffer,
    _In_ DWORD cbOutBuffer,
    _Out_ LPDWORD lpcbBytesReturned,
    _In_opt_ LPWSACOMPLETION lpCompletion
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSALookupServiceEnd(
    _In_ HANDLE hLookup
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED_BY("WSAInstallServiceClassW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAInstallServiceClassA(
    _In_ LPWSASERVICECLASSINFOA lpServiceClassInfo
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAInstallServiceClassW(
    _In_ LPWSASERVICECLASSINFOW lpServiceClassInfo
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSARemoveServiceClass(
    _In_ LPGUID lpServiceClassId
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED_BY("WSAGetServiceClassInfoW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAGetServiceClassInfoA(
    _In_ LPGUID lpProviderId,
    _In_ LPGUID lpServiceClassId,
    _Inout_ LPDWORD lpdwBufSize,
    _Out_writes_bytes_to_(*lpdwBufSize,*lpdwBufSize) LPWSASERVICECLASSINFOA lpServiceClassInfo
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAGetServiceClassInfoW(
    _In_ LPGUID lpProviderId,
    _In_ LPGUID lpServiceClassId,
    _Inout_ LPDWORD lpdwBufSize,
    _Out_writes_bytes_to_(*lpdwBufSize,*lpdwBufSize) LPWSASERVICECLASSINFOW lpServiceClassInfo
    );
_WINSOCK_DEPRECATED_BY("WSAEnumNameSpaceProvidersW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAEnumNameSpaceProvidersA(
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPWSANAMESPACE_INFOA lpnspBuffer
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAEnumNameSpaceProvidersW(
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPWSANAMESPACE_INFOW lpnspBuffer
    );
_WINSOCK_DEPRECATED_BY("WSAEnumNameSpaceProvidersW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAEnumNameSpaceProvidersExA(
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPWSANAMESPACE_INFOEXA lpnspBuffer
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAEnumNameSpaceProvidersExW(
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPWSANAMESPACE_INFOEXW lpnspBuffer
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_WINSOCK_DEPRECATED_BY("WSAGetServiceClassNameByClassIdW()")
WINSOCK_API_LINKAGE
_Success_(return == 0) INT
WSAAPI
WSAGetServiceClassNameByClassIdA(
    _In_ LPGUID lpServiceClassId,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPSTR lpszServiceClassName,
    _Inout_ LPDWORD lpdwBufferLength
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
_Success_(return == 0) INT
WSAAPI
WSAGetServiceClassNameByClassIdW(
    _In_ LPGUID lpServiceClassId,
    _Out_writes_bytes_to_(*lpdwBufferLength,*lpdwBufferLength) LPWSTR lpszServiceClassName,
    _Inout_ LPDWORD lpdwBufferLength
    );
_WINSOCK_DEPRECATED_BY("WSASetServiceW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
WSASetServiceA(
    _In_ LPWSAQUERYSETA lpqsRegInfo,
    _In_ WSAESETSERVICEOP essoperation,
    _In_ DWORD dwControlFlags
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSASetServiceW(
    _In_ LPWSAQUERYSETW lpqsRegInfo,
    _In_ WSAESETSERVICEOP essoperation,
    _In_ DWORD dwControlFlags
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAProviderConfigChange(
    _Inout_ LPHANDLE lpNotificationHandle,
    _Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
WINSOCK_API_LINKAGE
int
WSAAPI
WSAPoll(
    _Inout_ LPWSAPOLLFD fdArray,
    _In_ ULONG fds,
    _In_ INT timeout
    );
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
}
#include <poppack.h>
#include <wsipv6ok.h>
