#include <winapifamily.h>
#include <winsock2.h>
#include <ws2ipdef.h>
#include <limits.h>
#pragma prefast(push)
#pragma prefast(disable: 24002, "This code requires explicit usage of IPv4 address types.")
typedef ADDRINFOW ADDRINFOT, *PADDRINFOT;
typedef ADDRINFOA ADDRINFO, FAR * LPADDRINFO;
typedef ADDRINFOEXW ADDRINFOEX, *PADDRINFOEX;
extern "C" {
WINSOCK_API_LINKAGE
INT
WSAAPI
getaddrinfo(
    _In_opt_ PCSTR pNodeName,
    _In_opt_ PCSTR pServiceName,
    _In_opt_ const ADDRINFOA * pHints,
    _Outptr_ PADDRINFOA * ppResult
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
GetAddrInfoW(
    _In_opt_ PCWSTR pNodeName,
    _In_opt_ PCWSTR pServiceName,
    _In_opt_ const ADDRINFOW * pHints,
    _Outptr_ PADDRINFOW * ppResult
    );
typedef
void
(CALLBACK * LPLOOKUPSERVICE_COMPLETION_ROUTINE)(
    _In_ DWORD dwError,
    _In_ DWORD dwBytes,
    _In_ LPWSAOVERLAPPED lpOverlapped
    );
#pragma region Desktop Family or OneCore Family or Game Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_WINSOCK_DEPRECATED_BY("GetAddrInfoExW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
GetAddrInfoExA(
    _In_opt_ PCSTR pName,
    _In_opt_ PCSTR pServiceName,
    _In_ DWORD dwNameSpace,
    _In_opt_ LPGUID lpNspId,
    _In_opt_ const ADDRINFOEXA *hints,
    _Outptr_ PADDRINFOEXA * ppResult,
    _In_opt_ struct timeval *timeout,
    _In_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    _Out_opt_ LPHANDLE lpNameHandle
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
INT
WSAAPI
GetAddrInfoExW(
    _In_opt_ PCWSTR pName,
    _In_opt_ PCWSTR pServiceName,
    _In_ DWORD dwNameSpace,
    _In_opt_ LPGUID lpNspId,
    _In_opt_ const ADDRINFOEXW *hints,
    _Outptr_ PADDRINFOEXW * ppResult,
    _In_opt_ struct timeval *timeout,
    _In_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    _Out_opt_ LPHANDLE lpHandle
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
GetAddrInfoExCancel(
    _In_ LPHANDLE lpHandle
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
GetAddrInfoExOverlappedResult(
    _In_ LPOVERLAPPED lpOverlapped
    );
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_WINSOCK_DEPRECATED_BY("SetAddrInfoExW()")
WINSOCK_API_LINKAGE
INT
WSAAPI
SetAddrInfoExA(
    _In_ PCSTR pName,
    _In_opt_ PCSTR pServiceName,
    _In_opt_ SOCKET_ADDRESS *pAddresses,
    _In_ DWORD dwAddressCount,
    _In_opt_ LPBLOB lpBlob,
    _In_ DWORD dwFlags,
    _In_ DWORD dwNameSpace,
    _In_opt_ LPGUID lpNspId,
    _In_opt_ struct timeval *timeout,
    _In_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    _Out_opt_ LPHANDLE lpNameHandle
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
INT
WSAAPI
SetAddrInfoExW(
    _In_ PCWSTR pName,
    _In_opt_ PCWSTR pServiceName,
    _In_opt_ SOCKET_ADDRESS *pAddresses,
    _In_ DWORD dwAddressCount,
    _In_opt_ LPBLOB lpBlob,
    _In_ DWORD dwFlags,
    _In_ DWORD dwNameSpace,
    _In_opt_ LPGUID lpNspId,
    _In_opt_ struct timeval *timeout,
    _In_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    _Out_opt_ LPHANDLE lpNameHandle
    );
WINSOCK_API_LINKAGE
VOID
WSAAPI
freeaddrinfo(
    _In_opt_ PADDRINFOA pAddrInfo
    );
WINSOCK_API_LINKAGE
VOID
WSAAPI
FreeAddrInfoW(
    _In_opt_ PADDRINFOW pAddrInfo
    );
#pragma region App Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_WINSOCK_DEPRECATED_BY("FreeAddrInfoExW()")
WINSOCK_API_LINKAGE
void
WSAAPI
FreeAddrInfoEx(
    _In_opt_ PADDRINFOEXA pAddrInfoEx
    );
#endif
#pragma endregion
WINSOCK_API_LINKAGE
void
WSAAPI
FreeAddrInfoExW(
    _In_opt_ PADDRINFOEXW pAddrInfoEx
    );
typedef int socklen_t;
WINSOCK_API_LINKAGE
INT
WSAAPI
getnameinfo(
    _In_reads_bytes_(SockaddrLength) const SOCKADDR * pSockaddr,
    _In_ socklen_t SockaddrLength,
    _Out_writes_opt_(NodeBufferSize) PCHAR pNodeBuffer,
    _In_ DWORD NodeBufferSize,
    _Out_writes_opt_(ServiceBufferSize) PCHAR pServiceBuffer,
    _In_ DWORD ServiceBufferSize,
    _In_ INT Flags
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
GetNameInfoW(
    _In_reads_bytes_(SockaddrLength) const SOCKADDR * pSockaddr,
    _In_ socklen_t SockaddrLength,
    _Out_writes_opt_(NodeBufferSize) PWCHAR pNodeBuffer,
    _In_ DWORD NodeBufferSize,
    _Out_writes_opt_(ServiceBufferSize) PWCHAR pServiceBuffer,
    _In_ DWORD ServiceBufferSize,
    _In_ INT Flags
    );
WINSOCK_API_LINKAGE
INT
WSAAPI
inet_pton(
    _In_ INT Family,
    _In_ PCSTR pszAddrString,
    _When_(Family == AF_INET, _Out_writes_bytes_(sizeof(IN_ADDR)))
    _When_(Family == AF_INET6, _Out_writes_bytes_(sizeof(IN6_ADDR)))
                                              PVOID pAddrBuf
    );
INT
WSAAPI
InetPtonW(
    _In_ INT Family,
    _In_ PCWSTR pszAddrString,
    _When_(Family == AF_INET, _Out_writes_bytes_(sizeof(IN_ADDR)))
    _When_(Family == AF_INET6, _Out_writes_bytes_(sizeof(IN6_ADDR)))
                                              PVOID pAddrBuf
    );
PCSTR
WSAAPI
inet_ntop(
    _In_ INT Family,
    _In_ const VOID * pAddr,
    _Out_writes_(StringBufSize) PSTR pStringBuf,
    _In_ size_t StringBufSize
    );
PCWSTR
WSAAPI
InetNtopW(
    _In_ INT Family,
    _In_ const VOID * pAddr,
    _Out_writes_(StringBufSize) PWSTR pStringBuf,
    _In_ size_t StringBufSize
    );
WS2TCPIP_INLINE
int
setipv4sourcefilter(
    _In_ SOCKET Socket,
    _In_ IN_ADDR Interface,
    _In_ IN_ADDR Group,
    _In_ MULTICAST_MODE_TYPE FilterMode,
    _In_ ULONG SourceCount,
    _In_reads_(SourceCount) CONST IN_ADDR *SourceList
    )
{
    int Error;
    DWORD Size, Returned;
    PIP_MSFILTER Filter;
    if (SourceCount >
        (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList))) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Size = IP_MSFILTER_SIZE(SourceCount);
    Filter = (PIP_MSFILTER) HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Filter->imsf_multiaddr = Group;
    Filter->imsf_interface = Interface;
    Filter->imsf_fmode = FilterMode;
    Filter->imsf_numsrc = SourceCount;
    if (SourceCount > 0) {
        CopyMemory(Filter->imsf_slist, SourceList,
                   SourceCount * sizeof(*SourceList));
    }
    Error = WSAIoctl(Socket, SIOCSIPMSFILTER, Filter, Size, NULL, 0,
                     &Returned, NULL, NULL);
    HeapFree(GetProcessHeap(), 0, Filter);
    return Error;
}
_Success_(return == 0)
WS2TCPIP_INLINE
int
getipv4sourcefilter(
    _In_ SOCKET Socket,
    _In_ IN_ADDR Interface,
    _In_ IN_ADDR Group,
    _Out_ MULTICAST_MODE_TYPE *FilterMode,
    _Inout_ ULONG *SourceCount,
    _Out_writes_(*SourceCount) IN_ADDR *SourceList
    )
{
    int Error;
    DWORD Size, Returned;
    PIP_MSFILTER Filter;
    if (*SourceCount >
        (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList))) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Size = IP_MSFILTER_SIZE(*SourceCount);
    Filter = (PIP_MSFILTER) HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Filter->imsf_multiaddr = Group;
    Filter->imsf_interface = Interface;
    Filter->imsf_numsrc = *SourceCount;
    Error = WSAIoctl(Socket, SIOCGIPMSFILTER, Filter, Size, Filter, Size,
                     &Returned, NULL, NULL);
    if (Error == 0) {
        if (*SourceCount > 0) {
            CopyMemory(SourceList, Filter->imsf_slist,
                       *SourceCount * sizeof(*SourceList));
            *SourceCount = Filter->imsf_numsrc;
        }
        *FilterMode = Filter->imsf_fmode;
    }
    HeapFree(GetProcessHeap(), 0, Filter);
    return Error;
}
WS2TCPIP_INLINE
int
setsourcefilter(
    _In_ SOCKET Socket,
    _In_ ULONG Interface,
    _In_ CONST SOCKADDR *Group,
    _In_ int GroupLength,
    _In_ MULTICAST_MODE_TYPE FilterMode,
    _In_ ULONG SourceCount,
    _In_reads_(SourceCount) CONST SOCKADDR_STORAGE *SourceList
    )
{
    int Error;
    DWORD Size, Returned;
    PGROUP_FILTER Filter;
    if (SourceCount >=
        (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList))) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Size = GROUP_FILTER_SIZE(SourceCount);
    Filter = (PGROUP_FILTER) HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Filter->gf_interface = Interface;
    ZeroMemory(&Filter->gf_group, sizeof(Filter->gf_group));
    CopyMemory(&Filter->gf_group, Group, GroupLength);
    Filter->gf_fmode = FilterMode;
    Filter->gf_numsrc = SourceCount;
    if (SourceCount > 0) {
        CopyMemory(Filter->gf_slist, SourceList,
                   SourceCount * sizeof(*SourceList));
    }
    Error = WSAIoctl(Socket, SIOCSMSFILTER, Filter, Size, NULL, 0,
                     &Returned, NULL, NULL);
    HeapFree(GetProcessHeap(), 0, Filter);
    return Error;
}
_Success_(return == 0)
WS2TCPIP_INLINE
int
getsourcefilter(
    _In_ SOCKET Socket,
    _In_ ULONG Interface,
    _In_ CONST SOCKADDR *Group,
    _In_ int GroupLength,
    _Out_ MULTICAST_MODE_TYPE *FilterMode,
    _Inout_ ULONG *SourceCount,
    _Out_writes_(*SourceCount) SOCKADDR_STORAGE *SourceList
    )
{
    int Error;
    DWORD Size, Returned;
    PGROUP_FILTER Filter;
    if (*SourceCount >
        (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList))) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Size = GROUP_FILTER_SIZE(*SourceCount);
    Filter = (PGROUP_FILTER) HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL) {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }
    Filter->gf_interface = Interface;
    ZeroMemory(&Filter->gf_group, sizeof(Filter->gf_group));
    CopyMemory(&Filter->gf_group, Group, GroupLength);
    Filter->gf_numsrc = *SourceCount;
    Error = WSAIoctl(Socket, SIOCGMSFILTER, Filter, Size, Filter, Size,
                     &Returned, NULL, NULL);
    if (Error == 0) {
        if (*SourceCount > 0) {
            CopyMemory(SourceList, Filter->gf_slist,
                       *SourceCount * sizeof(*SourceList));
            *SourceCount = Filter->gf_numsrc;
        }
        *FilterMode = Filter->gf_fmode;
    }
    HeapFree(GetProcessHeap(), 0, Filter);
    return Error;
}
WS2TCPIP_INLINE
int
idealsendbacklogquery(
    _In_ SOCKET s,
    _Out_ ULONG *pISB
    )
{
    DWORD bytes;
    return WSAIoctl(s, SIO_IDEAL_SEND_BACKLOG_QUERY,
                    NULL, 0, pISB, sizeof(*pISB), &bytes, NULL, NULL);
}
WS2TCPIP_INLINE
int
idealsendbacklognotify(
    _In_ SOCKET s,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    )
{
    DWORD bytes;
    return WSAIoctl(s, SIO_IDEAL_SEND_BACKLOG_CHANGE,
                    NULL, 0, NULL, 0, &bytes,
                    lpOverlapped, lpCompletionRoutine);
}
#pragma region Desktop Family or AppRuntime Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPRUNTIME)
WINSOCK_API_LINKAGE
INT
WSAAPI
WSASetSocketSecurity (
   _In_ SOCKET Socket,
   _In_reads_bytes_opt_(SecuritySettingsLen) const SOCKET_SECURITY_SETTINGS* SecuritySettings,
   _In_ ULONG SecuritySettingsLen,
   _In_opt_ LPWSAOVERLAPPED Overlapped,
   _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAQuerySocketSecurity (
   _In_ SOCKET Socket,
   _In_reads_bytes_opt_(SecurityQueryTemplateLen) const SOCKET_SECURITY_QUERY_TEMPLATE* SecurityQueryTemplate,
   _In_ ULONG SecurityQueryTemplateLen,
   _Out_writes_bytes_to_opt_(*SecurityQueryInfoLen, *SecurityQueryInfoLen) SOCKET_SECURITY_QUERY_INFO* SecurityQueryInfo,
   _Inout_ ULONG* SecurityQueryInfoLen,
   _In_opt_ LPWSAOVERLAPPED Overlapped,
   _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);
WINSOCK_API_LINKAGE
INT
WSAAPI
WSASetSocketPeerTargetName (
   _In_ SOCKET Socket,
   _In_reads_bytes_(PeerTargetNameLen) const SOCKET_PEER_TARGET_NAME* PeerTargetName,
   _In_ ULONG PeerTargetNameLen,
   _In_opt_ LPWSAOVERLAPPED Overlapped,
   _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);
WINSOCK_API_LINKAGE
INT
WSAAPI
WSADeleteSocketPeerTargetName (
   _In_ SOCKET Socket,
   _In_reads_bytes_(PeerAddrLen) const struct sockaddr* PeerAddr,
   _In_ ULONG PeerAddrLen,
   _In_opt_ LPWSAOVERLAPPED Overlapped,
   _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);
WINSOCK_API_LINKAGE
INT
WSAAPI
WSAImpersonateSocketPeer (
   _In_ SOCKET Socket,
   _In_reads_bytes_opt_(PeerAddrLen) const struct sockaddr* PeerAddr,
   _In_ ULONG PeerAddrLen
);
WINSOCK_API_LINKAGE
INT
WSAAPI
WSARevertImpersonation ();
#endif
#pragma endregion
}
#pragma prefast(pop)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
