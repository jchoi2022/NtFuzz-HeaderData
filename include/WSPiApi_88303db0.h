       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
typedef int (WINAPI *WSPIAPI_PGETADDRINFO) (
    _In_ const char *nodename,
    _In_ const char *servname,
    _In_ const struct addrinfo *hints,
    _Out_ struct addrinfo **res);
typedef int (WINAPI *WSPIAPI_PGETNAMEINFO) (
    _In_reads_bytes_(salen) const struct sockaddr *sa,
    _In_ socklen_t salen,
    _Out_writes_bytes_(hostlen) char *host,
    _In_ size_t hostlen,
    _Out_writes_bytes_(servlen) char *serv,
    _In_ size_t servlen,
    _In_ int flags);
typedef void (WINAPI *WSPIAPI_PFREEADDRINFO) (
    _In_ struct addrinfo *ai);
extern "C" {
__inline
char *
WINAPI
WspiapiStrdup (
        _In_z_ const char * pszString)
{
    char *pszMemory;
    size_t cchMemory;
    if (!pszString)
        return(NULL);
    cchMemory = strlen(pszString) + 1;
    pszMemory = (char *) WspiapiMalloc(cchMemory);
    if (!pszMemory)
        return(NULL);
    _WSPIAPI_STRCPY_S(pszMemory, cchMemory, pszString);
    return pszMemory;
}
__inline
BOOL
WINAPI
WspiapiParseV4Address (
    _In_z_ const char * pszAddress,
    _Out_ PDWORD pdwAddress)
{
    DWORD dwAddress = 0;
    const char *pcNext = NULL;
    int iCount = 0;
    for (pcNext = pszAddress; *pcNext != '\0'; pcNext++)
        if (*pcNext == '.')
            iCount++;
    if (iCount != 3)
        return FALSE;
#pragma warning(suppress: 4996)
    dwAddress = inet_addr(pszAddress);
    if (dwAddress == INADDR_NONE)
        return FALSE;
    *pdwAddress = dwAddress;
    return TRUE;
}
__inline
struct addrinfo *
WINAPI
WspiapiNewAddrInfo (
    _In_ int iSocketType,
    _In_ int iProtocol,
    _In_ WORD wPort,
    _In_ DWORD dwAddress)
{
    struct addrinfo *ptNew;
    struct sockaddr_in *ptAddress;
    ptNew =
        (struct addrinfo *) WspiapiMalloc(sizeof(struct addrinfo));
    if (!ptNew)
        return NULL;
    ptAddress =
        (struct sockaddr_in *) WspiapiMalloc(sizeof(struct sockaddr_in));
    if (!ptAddress)
    {
#pragma warning(suppress: 6280)
        WspiapiFree(ptNew);
        return NULL;
    }
    ptAddress->sin_family = AF_INET;
    ptAddress->sin_port = wPort;
    ptAddress->sin_addr.s_addr = dwAddress;
    ptNew->ai_family = PF_INET;
    ptNew->ai_socktype = iSocketType;
    ptNew->ai_protocol = iProtocol;
    ptNew->ai_addrlen = sizeof(struct sockaddr_in);
    ptNew->ai_addr = (struct sockaddr *) ptAddress;
    return ptNew;
}
__inline
int
WINAPI
WspiapiQueryDNS(
    _In_z_ const char *pszNodeName,
    _In_ int iSocketType,
    _In_ int iProtocol,
    _In_ WORD wPort,
    _Out_writes_bytes_(NI_MAXHOST) char pszAlias[NI_MAXHOST],
    _Outptr_ struct addrinfo **pptResult)
{
    struct addrinfo **pptNext = pptResult;
    struct hostent *ptHost = NULL;
    char **ppAddresses;
    *pptNext = NULL;
    pszAlias[0] = '\0';
#pragma warning(suppress: 4996 38026)
    ptHost = gethostbyname(pszNodeName);
    if (ptHost)
    {
        if ((ptHost->h_addrtype == AF_INET) &&
            (ptHost->h_length == sizeof(struct in_addr)))
        {
            for (ppAddresses = ptHost->h_addr_list;
                 *ppAddresses != NULL;
                 ppAddresses++)
            {
                *pptNext = WspiapiNewAddrInfo(
                    iSocketType,
                    iProtocol,
                    wPort,
                    ((struct in_addr *) *ppAddresses)->s_addr);
                if (!*pptNext)
                    return EAI_MEMORY;
                pptNext = &((*pptNext)->ai_next);
            }
        }
        _WSPIAPI_STRNCPY_S(pszAlias, NI_MAXHOST, ptHost->h_name, NI_MAXHOST - 1);
        return 0;
    }
    switch (WSAGetLastError())
    {
        case WSAHOST_NOT_FOUND: return EAI_NONAME;
        case WSATRY_AGAIN: return EAI_AGAIN;
        case WSANO_RECOVERY: return EAI_FAIL;
        case WSANO_DATA: return EAI_NODATA;
        default: return EAI_NONAME;
    }
}
__inline
int
WINAPI
WspiapiLookupNode(
    _In_z_ const char *pszNodeName,
    _In_ int iSocketType,
    _In_ int iProtocol,
    _In_ WORD wPort,
    _In_ BOOL bAI_CANONNAME,
    _Outptr_ struct addrinfo **pptResult)
{
    int iError = 0;
    int iAliasCount = 0;
    char szFQDN1[NI_MAXHOST] = "";
    char szFQDN2[NI_MAXHOST] = "";
    char *pszName = szFQDN1;
    char *pszAlias = szFQDN2;
    char *pszScratch = NULL;
    _WSPIAPI_STRNCPY_S(pszName, NI_MAXHOST, pszNodeName, NI_MAXHOST - 1);
    for (;;)
    {
        iError = WspiapiQueryDNS(pszNodeName,
                                 iSocketType,
                                 iProtocol,
                                 wPort,
                                 pszAlias,
                                 pptResult);
        if (iError)
            break;
        if (*pptResult)
            break;
        if ((!strlen(pszAlias)) ||
            (!strcmp(pszName, pszAlias)) ||
            (++iAliasCount == 16))
        {
            iError = EAI_FAIL;
            break;
        }
        WspiapiSwap(pszName, pszAlias, pszScratch);
    }
    if (!iError && bAI_CANONNAME)
    {
        (*pptResult)->ai_canonname = WspiapiStrdup(pszAlias);
        if (!(*pptResult)->ai_canonname)
            iError = EAI_MEMORY;
    }
    return iError;
}
__inline
int
WINAPI
WspiapiClone (
    _In_ WORD wPort,
    _In_ struct addrinfo *ptResult)
{
    struct addrinfo *ptNext = NULL;
    struct addrinfo *ptNew = NULL;
    for (ptNext = ptResult; ptNext != NULL; )
    {
        ptNew = WspiapiNewAddrInfo(
            SOCK_DGRAM,
            ptNext->ai_protocol,
            wPort,
            ((struct sockaddr_in *) ptNext->ai_addr)->sin_addr.s_addr);
        if (!ptNew)
            break;
        ptNew->ai_next = ptNext->ai_next;
        ptNext->ai_next = ptNew;
        ptNext = ptNew->ai_next;
    }
    if (ptNext != NULL)
        return EAI_MEMORY;
    return 0;
}
__inline
void
WINAPI
WspiapiLegacyFreeAddrInfo (
    _In_ struct addrinfo *ptHead)
{
    struct addrinfo *ptNext;
    for (ptNext = ptHead; ptNext != NULL; ptNext = ptHead)
    {
        if (ptNext->ai_canonname)
            WspiapiFree(ptNext->ai_canonname);
        if (ptNext->ai_addr)
            WspiapiFree(ptNext->ai_addr);
        ptHead = ptNext->ai_next;
        WspiapiFree(ptNext);
    }
}
__inline
int
WINAPI
WspiapiLegacyGetAddrInfo(
    _In_ const char *pszNodeName,
    _In_ const char *pszServiceName,
    _In_ const struct addrinfo *ptHints,
    _Outptr_ struct addrinfo **pptResult)
{
    int iError = 0;
    int iFlags = 0;
    int iFamily = PF_UNSPEC;
    int iSocketType = 0;
    int iProtocol = 0;
    WORD wPort = 0;
    DWORD dwAddress = 0;
    struct servent *ptService = NULL;
    char *pc = NULL;
    BOOL bClone = FALSE;
    WORD wTcpPort = 0;
    WORD wUdpPort = 0;
    *pptResult = NULL;
    if ((!pszNodeName) && (!pszServiceName))
        return EAI_NONAME;
    if (ptHints)
    {
        if ((ptHints->ai_addrlen != 0) ||
            (ptHints->ai_canonname != NULL) ||
            (ptHints->ai_addr != NULL) ||
            (ptHints->ai_next != NULL))
        {
            return EAI_FAIL;
        }
        iFlags = ptHints->ai_flags;
        if ((iFlags & AI_CANONNAME) && !pszNodeName)
            return EAI_BADFLAGS;
        iFamily = ptHints->ai_family;
        if ((iFamily != PF_UNSPEC) && (iFamily != PF_INET))
            return EAI_FAMILY;
        iSocketType = ptHints->ai_socktype;
        if ((iSocketType != 0) &&
            (iSocketType != SOCK_STREAM) &&
            (iSocketType != SOCK_DGRAM) &&
            (iSocketType != SOCK_RAW))
            return EAI_SOCKTYPE;
        iProtocol = ptHints->ai_protocol;
    }
    if (pszServiceName)
    {
        wPort = (WORD) strtoul(pszServiceName, &pc, 10);
        if (*pc == '\0')
        {
            wPort = wTcpPort = wUdpPort = htons(wPort);
            if (iSocketType == 0)
            {
                bClone = TRUE;
                iSocketType = SOCK_STREAM;
            }
        }
        else
        {
            if ((iSocketType == 0) || (iSocketType == SOCK_DGRAM))
            {
                ptService = getservbyname(pszServiceName, "udp");
                if (ptService)
                    wPort = wUdpPort = ptService->s_port;
            }
            if ((iSocketType == 0) || (iSocketType == SOCK_STREAM))
            {
                ptService = getservbyname(pszServiceName, "tcp");
                if (ptService)
                    wPort = wTcpPort = ptService->s_port;
            }
            if (wPort == 0)
                return (iSocketType ? EAI_SERVICE : EAI_NONAME);
            if (iSocketType == 0)
            {
                iSocketType = (wTcpPort) ? SOCK_STREAM : SOCK_DGRAM;
                bClone = (wTcpPort && wUdpPort);
            }
        }
    }
    if ((!pszNodeName) || (WspiapiParseV4Address(pszNodeName, &dwAddress)))
    {
        if (!pszNodeName)
        {
            dwAddress = htonl((iFlags & AI_PASSIVE)
                              ? INADDR_ANY
                              : INADDR_LOOPBACK);
        }
        *pptResult =
            WspiapiNewAddrInfo(iSocketType, iProtocol, wPort, dwAddress);
        if (!(*pptResult))
            iError = EAI_MEMORY;
        if (!iError && pszNodeName)
        {
            (*pptResult)->ai_flags |= AI_NUMERICHOST;
            if (iFlags & AI_CANONNAME)
            {
                (*pptResult)->ai_canonname =
#pragma warning(suppress: 4996)
                    WspiapiStrdup(inet_ntoa(*((struct in_addr *) &dwAddress)));
                if (!(*pptResult)->ai_canonname)
                    iError = EAI_MEMORY;
            }
        }
    }
    else if (iFlags & AI_NUMERICHOST)
    {
        iError = EAI_NONAME;
    }
    else
    {
        iError = WspiapiLookupNode(pszNodeName,
                                   iSocketType,
                                   iProtocol,
                                   wPort,
                                   (iFlags & AI_CANONNAME),
                                   pptResult);
    }
    if (!iError && bClone)
    {
        iError = WspiapiClone(wUdpPort, *pptResult);
    }
    if (iError)
    {
        WspiapiLegacyFreeAddrInfo(*pptResult);
        *pptResult = NULL;
    }
    return (iError);
}
__inline
int
WINAPI
WspiapiLegacyGetNameInfo(
    _In_reads_bytes_(tSocketLength) const struct sockaddr *ptSocketAddress,
    _In_ socklen_t tSocketLength,
    _Out_writes_bytes_(tNodeLength) char *pszNodeName,
    _In_ size_t tNodeLength,
    _Out_writes_bytes_(tServiceLength) char *pszServiceName,
    _In_ size_t tServiceLength,
    _In_ int iFlags)
{
    struct servent *ptService;
    WORD wPort;
    char szBuffer[] = "65535";
    char *pszService = szBuffer;
    struct hostent *ptHost;
    struct in_addr tAddress;
    char *pszNode = NULL;
    char *pc = NULL;
    if ((!ptSocketAddress) || (tSocketLength < sizeof(struct sockaddr)))
        return EAI_FAIL;
    if (ptSocketAddress->sa_family != AF_INET)
        return EAI_FAMILY;
    if (tSocketLength < sizeof(struct sockaddr_in))
        return EAI_FAIL;
    if (!(pszNodeName && tNodeLength) &&
        !(pszServiceName && tServiceLength))
    {
        return EAI_NONAME;
    }
    if ((iFlags & NI_NUMERICHOST) && (iFlags & NI_NAMEREQD))
    {
        return EAI_BADFLAGS;
    }
    if (pszServiceName && tServiceLength)
    {
        wPort = ((struct sockaddr_in *) ptSocketAddress)->sin_port;
        if (iFlags & NI_NUMERICSERV)
        {
            _WSPIAPI_SPRINTF_S_1(szBuffer, _WSPIAPI_COUNTOF(szBuffer), "%u", ntohs(wPort));
        }
        else
        {
            ptService = getservbyport(wPort,
                                      (iFlags & NI_DGRAM) ? "udp" : NULL);
            if (ptService && ptService->s_name)
            {
                pszService = ptService->s_name;
            }
            else
            {
                _WSPIAPI_SPRINTF_S_1(szBuffer, _WSPIAPI_COUNTOF(szBuffer), "%u", ntohs(wPort));
            }
        }
        if (tServiceLength > strlen(pszService))
            _WSPIAPI_STRCPY_S(pszServiceName, tServiceLength, pszService);
        else
            return EAI_FAIL;
    }
    if (pszNodeName && tNodeLength)
    {
        tAddress = ((struct sockaddr_in *) ptSocketAddress)->sin_addr;
        if (iFlags & NI_NUMERICHOST)
        {
#pragma warning(suppress: 4996)
            pszNode = inet_ntoa(tAddress);
        }
        else
        {
#pragma warning(suppress: 4996 38026)
            ptHost = gethostbyaddr((char *) &tAddress, sizeof(struct in_addr), AF_INET);
            if (ptHost && ptHost->h_name)
            {
                pszNode = ptHost->h_name;
                if ((iFlags & NI_NOFQDN) &&
                    ((pc = strchr(pszNode, '.')) != NULL))
                    *pc = '\0';
            }
            else
            {
                if (iFlags & NI_NAMEREQD)
                {
                    switch (WSAGetLastError())
                    {
                        case WSAHOST_NOT_FOUND: return EAI_NONAME;
                        case WSATRY_AGAIN: return EAI_AGAIN;
                        case WSANO_RECOVERY: return EAI_FAIL;
                        default: return EAI_NONAME;
                    }
                }
                else
#pragma warning(suppress: 4996)
                    pszNode = inet_ntoa(tAddress);
            }
        }
        if (tNodeLength > strlen(pszNode))
            _WSPIAPI_STRCPY_S(pszNodeName, tNodeLength, pszNode);
        else
            return EAI_FAIL;
    }
    return 0;
}
typedef struct
{
    char const *pszName;
    FARPROC pfAddress;
} WSPIAPI_FUNCTION;
{ \
    "getaddrinfo", (FARPROC) WspiapiLegacyGetAddrInfo, \
    "getnameinfo", (FARPROC) WspiapiLegacyGetNameInfo, \
    "freeaddrinfo", (FARPROC) WspiapiLegacyFreeAddrInfo, \
}
__inline
FARPROC
WINAPI
WspiapiLoad(
    _In_ WORD wFunction)
{
    HMODULE hLibrary = NULL;
    static BOOL bInitialized = FALSE;
    static WSPIAPI_FUNCTION rgtGlobal[] = WSPIAPI_FUNCTION_ARRAY;
    static const int iNumGlobal = (sizeof(rgtGlobal) /
                                               sizeof(WSPIAPI_FUNCTION));
    WSPIAPI_FUNCTION rgtLocal[] = WSPIAPI_FUNCTION_ARRAY;
    __analysis_assume((sizeof(rgtLocal)/sizeof(WSPIAPI_FUNCTION)) == iNumGlobal);
    FARPROC fScratch = NULL;
    int i = 0;
    if (bInitialized)
        return (rgtGlobal[wFunction].pfAddress);
    for (;;)
    {
        CHAR SystemDir[MAX_PATH + 1];
        CHAR Path[MAX_PATH + 8];
        if (GetSystemDirectoryA(SystemDir, MAX_PATH) == 0)
        {
            break;
        }
        _WSPIAPI_STRCPY_S(Path, _WSPIAPI_COUNTOF(Path), SystemDir);
        _WSPIAPI_STRCAT_S(Path, _WSPIAPI_COUNTOF(Path), "\\ws2_32");
        hLibrary = LoadLibraryA(Path);
        if (hLibrary != NULL)
        {
            fScratch = GetProcAddress(hLibrary, "getaddrinfo");
            if (fScratch == NULL)
            {
                FreeLibrary(hLibrary);
                hLibrary = NULL;
            }
        }
        if (hLibrary != NULL)
            break;
        _WSPIAPI_STRCPY_S(Path, _WSPIAPI_COUNTOF(Path), SystemDir);
        _WSPIAPI_STRCAT_S(Path, _WSPIAPI_COUNTOF(Path), "\\wship6");
        hLibrary = LoadLibraryA(Path);
        if (hLibrary != NULL)
        {
            fScratch = GetProcAddress(hLibrary, "getaddrinfo");
            if (fScratch == NULL)
            {
                FreeLibrary(hLibrary);
                hLibrary = NULL;
            }
        }
        break;
    }
    if (hLibrary != NULL)
    {
        for (i = 0; i < iNumGlobal; i++)
        {
            rgtLocal[i].pfAddress
                = GetProcAddress(hLibrary, rgtLocal[i].pszName);
            if (rgtLocal[i].pfAddress == NULL)
            {
                FreeLibrary(hLibrary);
                hLibrary = NULL;
                break;
            }
        }
        if (hLibrary != NULL)
        {
            for (i = 0; i < iNumGlobal; i++)
                rgtGlobal[i].pfAddress = rgtLocal[i].pfAddress;
        }
    }
    bInitialized = TRUE;
    return (rgtGlobal[wFunction].pfAddress);
}
__inline
int
WINAPI
WspiapiGetAddrInfo(
    _In_opt_ const char *nodename,
    _In_opt_ const char *servname,
    _In_opt_ const struct addrinfo *hints,
    _Outptr_ struct addrinfo **res)
{
    int iError;
    static WSPIAPI_PGETADDRINFO pfGetAddrInfo = NULL;
    if (!pfGetAddrInfo)
        pfGetAddrInfo = (WSPIAPI_PGETADDRINFO) WspiapiLoad(0);
    iError = (*pfGetAddrInfo)(nodename, servname, hints, res);
    WSASetLastError(iError);
    return iError;
}
__inline
int
WINAPI
WspiapiGetNameInfo (
    _In_reads_bytes_(salen) const struct sockaddr *sa,
    _In_ socklen_t salen,
    _Out_writes_bytes_(hostlen) char *host,
    _In_ size_t hostlen,
    _Out_writes_bytes_(servlen) char *serv,
    _In_ size_t servlen,
    _In_ int flags)
{
    int iError;
    static WSPIAPI_PGETNAMEINFO pfGetNameInfo = NULL;
    if (!pfGetNameInfo)
        pfGetNameInfo = (WSPIAPI_PGETNAMEINFO) WspiapiLoad(1);
    iError = (*pfGetNameInfo)(sa, salen, host, hostlen, serv, servlen, flags);
    WSASetLastError(iError);
    return iError;
}
__inline
void
WINAPI
WspiapiFreeAddrInfo (
    _In_ struct addrinfo *ai)
{
    static WSPIAPI_PFREEADDRINFO pfFreeAddrInfo = NULL;
    if (!pfFreeAddrInfo)
        pfFreeAddrInfo = (WSPIAPI_PFREEADDRINFO) WspiapiLoad(2);
    (*pfFreeAddrInfo)(ai);
}
}
#endif
#pragma endregion
