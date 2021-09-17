#include <winapifamily.h>
extern "C" {
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#include <inaddr.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef USHORT ADDRESS_FAMILY;
#endif
#pragma endregion
    ((int)(~SO_REUSEADDR))
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct sockaddr {
    ADDRESS_FAMILY sa_family;
    CHAR sa_data[14];
} SOCKADDR, *PSOCKADDR, FAR *LPSOCKADDR;
typedef struct _SOCKET_ADDRESS {
    _Field_size_bytes_(iSockaddrLength) LPSOCKADDR lpSockaddr;
    INT iSockaddrLength;
} SOCKET_ADDRESS, *PSOCKET_ADDRESS, *LPSOCKET_ADDRESS;
#pragma endregion
typedef struct _SOCKET_ADDRESS_LIST {
    INT iAddressCount;
    SOCKET_ADDRESS Address[1];
} SOCKET_ADDRESS_LIST, *PSOCKET_ADDRESS_LIST, FAR *LPSOCKET_ADDRESS_LIST;
    (FIELD_OFFSET(SOCKET_ADDRESS_LIST, Address) + \
     AddressCount * sizeof(SOCKET_ADDRESS))
typedef struct _CSADDR_INFO {
    SOCKET_ADDRESS LocalAddr ;
    SOCKET_ADDRESS RemoteAddr ;
    INT iSocketType ;
    INT iProtocol ;
} CSADDR_INFO, *PCSADDR_INFO, FAR * LPCSADDR_INFO ;
#endif
typedef struct sockaddr_storage {
    ADDRESS_FAMILY ss_family;
    CHAR __ss_pad1[_SS_PAD1SIZE];
    __int64 __ss_align;
    CHAR __ss_pad2[_SS_PAD2SIZE];
} SOCKADDR_STORAGE_LH, *PSOCKADDR_STORAGE_LH, FAR *LPSOCKADDR_STORAGE_LH;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct sockaddr_storage_xp {
    short ss_family;
    CHAR __ss_pad1[_SS_PAD1SIZE];
    __int64 __ss_align;
    CHAR __ss_pad2[_SS_PAD2SIZE];
} SOCKADDR_STORAGE_XP, *PSOCKADDR_STORAGE_XP, FAR *LPSOCKADDR_STORAGE_XP;
#endif
#pragma endregion
typedef SOCKADDR_STORAGE_LH SOCKADDR_STORAGE;
typedef SOCKADDR_STORAGE *PSOCKADDR_STORAGE, FAR *LPSOCKADDR_STORAGE;
typedef struct _SOCKET_PROCESSOR_AFFINITY {
    PROCESSOR_NUMBER Processor;
    USHORT NumaNodeId;
    USHORT Reserved;
} SOCKET_PROCESSOR_AFFINITY, *PSOCKET_PROCESSOR_AFFINITY;
typedef enum {
    IPPROTO_HOPOPTS = 0,
    IPPROTO_ICMP = 1,
    IPPROTO_IGMP = 2,
    IPPROTO_GGP = 3,
    IPPROTO_IPV4 = 4,
    IPPROTO_ST = 5,
    IPPROTO_TCP = 6,
    IPPROTO_CBT = 7,
    IPPROTO_EGP = 8,
    IPPROTO_IGP = 9,
    IPPROTO_PUP = 12,
    IPPROTO_UDP = 17,
    IPPROTO_IDP = 22,
    IPPROTO_RDP = 27,
    IPPROTO_IPV6 = 41,
    IPPROTO_ROUTING = 43,
    IPPROTO_FRAGMENT = 44,
    IPPROTO_ESP = 50,
    IPPROTO_AH = 51,
    IPPROTO_ICMPV6 = 58,
    IPPROTO_NONE = 59,
    IPPROTO_DSTOPTS = 60,
    IPPROTO_ND = 77,
    IPPROTO_ICLFXBM = 78,
    IPPROTO_PIM = 103,
    IPPROTO_PGM = 113,
    IPPROTO_L2TP = 115,
    IPPROTO_SCTP = 132,
    IPPROTO_RAW = 255,
    IPPROTO_MAX = 256,
    IPPROTO_RESERVED_RAW = 257,
    IPPROTO_RESERVED_IPSEC = 258,
    IPPROTO_RESERVED_IPSECOFFLOAD = 259,
    IPPROTO_RESERVED_WNV = 260,
    IPPROTO_RESERVED_MAX = 261
} IPPROTO, *PIPROTO;
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef enum {
    ScopeLevelInterface = 1,
    ScopeLevelLink = 2,
    ScopeLevelSubnet = 3,
    ScopeLevelAdmin = 4,
    ScopeLevelSite = 5,
    ScopeLevelOrganization = 8,
    ScopeLevelGlobal = 14,
    ScopeLevelCount = 16
} SCOPE_LEVEL;
typedef struct {
    union {
        struct {
            ULONG Zone : 28;
            ULONG Level : 4;
        };
        ULONG Value;
    };
} SCOPE_ID, *PSCOPE_ID;
typedef struct sockaddr_in {
    ADDRESS_FAMILY sin_family;
    USHORT sin_port;
    IN_ADDR sin_addr;
    CHAR sin_zero[8];
} SOCKADDR_IN, *PSOCKADDR_IN;
#endif
#pragma endregion
typedef struct sockaddr_dl {
    ADDRESS_FAMILY sdl_family;
    UCHAR sdl_data[8];
    UCHAR sdl_zero[4];
} SOCKADDR_DL, *PSOCKADDR_DL;
typedef struct _WSABUF {
    ULONG len;
    _Field_size_bytes_(len) CHAR FAR *buf;
} WSABUF, FAR * LPWSABUF;
typedef struct _WSAMSG {
    _Field_size_bytes_(namelen) LPSOCKADDR name;
    INT namelen;
    LPWSABUF lpBuffers;
    ULONG dwBufferCount;
    WSABUF Control;
    ULONG dwFlags;
} WSAMSG, *PWSAMSG, * FAR LPWSAMSG;
typedef struct _WSACMSGHDR {
    SIZE_T cmsg_len;
    INT cmsg_level;
    INT cmsg_type;
} WSACMSGHDR, *PWSACMSGHDR, FAR *LPWSACMSGHDR;
typedef WSACMSGHDR CMSGHDR, *PCMSGHDR;
            ( ((length) + TYPE_ALIGNMENT(WSACMSGHDR)-1) & \
                (~(TYPE_ALIGNMENT(WSACMSGHDR)-1)) ) \
            ( ((length) + MAX_NATURAL_ALIGNMENT-1) & \
                (~(MAX_NATURAL_ALIGNMENT-1)) )
    ( ((msg)->Control.len >= sizeof(WSACMSGHDR)) \
        ? (LPWSACMSGHDR)(msg)->Control.buf \
        : (LPWSACMSGHDR)NULL )
    ( ((cmsg) == NULL) \
        ? WSA_CMSG_FIRSTHDR(msg) \
        : ( ( ((PUCHAR)(cmsg) + \
                    WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len) + \
                    sizeof(WSACMSGHDR) ) > \
                (PUCHAR)((msg)->Control.buf) + \
                    (msg)->Control.len ) \
            ? (LPWSACMSGHDR)NULL \
            : (LPWSACMSGHDR)((PUCHAR)(cmsg) + \
                WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len)) ) )
            ( (PUCHAR)(cmsg) + WSA_CMSGDATA_ALIGN(sizeof(WSACMSGHDR)) )
        (WSA_CMSGDATA_ALIGN(sizeof(WSACMSGHDR) + WSA_CMSGHDR_ALIGN(length)))
         (WSA_CMSGDATA_ALIGN(sizeof(WSACMSGHDR)) + length)
typedef struct addrinfo
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    char * ai_canonname;
    _Field_size_bytes_(ai_addrlen) struct sockaddr * ai_addr;
    struct addrinfo * ai_next;
}
ADDRINFOA, *PADDRINFOA;
typedef struct addrinfoW
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    PWSTR ai_canonname;
    _Field_size_bytes_(ai_addrlen) struct sockaddr * ai_addr;
    struct addrinfoW * ai_next;
}
ADDRINFOW, *PADDRINFOW;
#pragma region App Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _WINSOCK_DEPRECATED_BY("ADDRINFOEXW") addrinfoexA
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    char *ai_canonname;
    struct sockaddr *ai_addr;
    void *ai_blob;
    size_t ai_bloblen;
    LPGUID ai_provider;
    struct addrinfoexA *ai_next;
} ADDRINFOEXA, *PADDRINFOEXA, *LPADDRINFOEXA;
#endif
#pragma endregion
typedef struct addrinfoexW
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    PWSTR ai_canonname;
    _Field_size_bytes_(ai_addrlen) struct sockaddr *ai_addr;
    _Field_size_(ai_bloblen) void *ai_blob;
    size_t ai_bloblen;
    LPGUID ai_provider;
    struct addrinfoexW *ai_next;
} ADDRINFOEXW, *PADDRINFOEXW, *LPADDRINFOEXW;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _WINSOCK_DEPRECATED_BY("ADDRINFOEX2W") addrinfoex2A
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    char *ai_canonname;
    struct sockaddr *ai_addr;
    void *ai_blob;
    size_t ai_bloblen;
    LPGUID ai_provider;
    struct addrinfoex2A *ai_next;
    int ai_version;
    char *ai_fqdn;
} ADDRINFOEX2A, *PADDRINFOEX2A, *LPADDRINFOEX2A;
#endif
#pragma endregion
typedef struct addrinfoex2W
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    PWSTR ai_canonname;
    _Field_size_bytes_(ai_addrlen) struct sockaddr *ai_addr;
    _Field_size_(ai_bloblen) void *ai_blob;
    size_t ai_bloblen;
    LPGUID ai_provider;
    struct addrinfoex2W *ai_next;
    int ai_version;
    PWSTR ai_fqdn;
} ADDRINFOEX2W, *PADDRINFOEX2W, *LPADDRINFOEX2W;
typedef struct addrinfoex3
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    PWSTR ai_canonname;
    _Field_size_bytes_(ai_addrlen) struct sockaddr *ai_addr;
    _Field_size_(ai_bloblen) void *ai_blob;
    size_t ai_bloblen;
    LPGUID ai_provider;
    struct addrinfoex3 *ai_next;
    int ai_version;
    PWSTR ai_fqdn;
    int ai_interfaceindex;
} ADDRINFOEX3, *PADDRINFOEX3, *LPADDRINFOEX3;
typedef struct addrinfoex4
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    PWSTR ai_canonname;
    _Field_size_bytes_(ai_addrlen) struct sockaddr *ai_addr;
    _Field_size_(ai_bloblen) void *ai_blob;
    size_t ai_bloblen;
    GUID *ai_provider;
    struct addrinfoex4 *ai_next;
    int ai_version;
    PWSTR ai_fqdn;
    int ai_interfaceindex;
    HANDLE ai_resolutionhandle;
} ADDRINFOEX4, *PADDRINFOEX4, *LPADDRINFOEX4;
#pragma warning(pop)
}
