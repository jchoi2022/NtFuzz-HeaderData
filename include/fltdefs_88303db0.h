#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef PVOID FILTER_HANDLE, *PFILTER_HANDLE;
typedef PVOID INTERFACE_HANDLE, *PINTERFACE_HANDLE;
typedef enum _GlobalFilter
{
    GF_FRAGMENTS = 2,
    GF_STRONGHOST = 8,
    GF_FRAGCACHE = 9
} GLOBAL_FILTER, *PGLOBAL_FILTER;
typedef enum _PfForwardAction
{
    PF_ACTION_FORWARD = 0,
    PF_ACTION_DROP
} PFFORWARD_ACTION, *PPFFORWARD_ACTION;
typedef enum _PfAddresType
{
    PF_IPV4,
    PF_IPV6
} PFADDRESSTYPE, *PPFADDRESSTYPE;
typedef struct _PF_FILTER_DESCRIPTOR
{
    DWORD dwFilterFlags;
    DWORD dwRule;
    PFADDRESSTYPE pfatType;
    PBYTE SrcAddr;
    PBYTE SrcMask;
    PBYTE DstAddr;
    PBYTE DstMask;
    DWORD dwProtocol;
    DWORD fLateBound;
    WORD wSrcPort;
    WORD wDstPort;
    WORD wSrcPortHighRange;
    WORD wDstPortHighRange;
}PF_FILTER_DESCRIPTOR, *PPF_FILTER_DESCRIPTOR;
typedef struct _PF_FILTER_STATS
{
    DWORD dwNumPacketsFiltered;
    PF_FILTER_DESCRIPTOR info;
}PF_FILTER_STATS, *PPF_FILTER_STATS;
typedef struct _PF_INTERFACE_STATS
{
    PVOID pvDriverContext;
    DWORD dwFlags;
    DWORD dwInDrops;
    DWORD dwOutDrops;
    PFFORWARD_ACTION eaInAction;
    PFFORWARD_ACTION eaOutAction;
    DWORD dwNumInFilters;
    DWORD dwNumOutFilters;
    DWORD dwFrag;
    DWORD dwSpoof;
    DWORD dwReserved1;
    DWORD dwReserved2;
    LARGE_INTEGER liSYN;
    LARGE_INTEGER liTotalLogged;
    DWORD dwLostLogEntries;
    PF_FILTER_STATS FilterInfo[1];
} PF_INTERFACE_STATS, *PPF_INTERFACE_STATS;
    (sizeof(PF_FILTER_DESCRIPTOR) - \
     (DWORD)(&((PPF_FILTER_DESCRIPTOR)0)->SrcAddr))
typedef struct _PF_LATEBIND_INFO
{
    PBYTE SrcAddr;
    PBYTE DstAddr;
    PBYTE Mask;
}PF_LATEBIND_INFO, *PPF_LATEBIND_INFO;
typedef enum _PfFrameType
{
    PFFT_FILTER = 1,
    PFFT_FRAG = 2,
    PFFT_SPOOF = 3
} PFFRAMETYPE, *PPFFRAMETYPE;
typedef struct _pfLogFrame
{
    LARGE_INTEGER Timestamp;
    PFFRAMETYPE pfeTypeOfFrame;
    DWORD dwTotalSizeUsed;
    DWORD dwFilterRule;
    WORD wSizeOfAdditionalData;
    WORD wSizeOfIpHeader;
    DWORD dwInterfaceName;
    DWORD dwIPIndex;
    BYTE bPacketData[1];
} PFLOGFRAME, *PPFLOGFRAME;
PFAPIENTRY
PfCreateInterface(
    DWORD dwName,
    PFFORWARD_ACTION inAction,
    PFFORWARD_ACTION outAction,
    BOOL bUseLog,
    BOOL bMustBeUnique,
    INTERFACE_HANDLE *ppInterface
    );
PFAPIENTRY
PfDeleteInterface(
    INTERFACE_HANDLE pInterface
    );
PFAPIENTRY
PfAddFiltersToInterface(
    INTERFACE_HANDLE ih,
    DWORD cInFilters,
    PPF_FILTER_DESCRIPTOR pfiltIn,
    DWORD cOutFilters,
    PPF_FILTER_DESCRIPTOR pfiltOut,
    PFILTER_HANDLE pfHandle
    );
PFAPIENTRY
PfRemoveFiltersFromInterface(
    INTERFACE_HANDLE ih,
    DWORD cInFilters,
    PPF_FILTER_DESCRIPTOR pfiltIn,
    DWORD cOutFilters,
    PPF_FILTER_DESCRIPTOR pfiltOut
    );
PFAPIENTRY
PfRemoveFilterHandles(
    INTERFACE_HANDLE pInterface,
    DWORD cFilters,
    PFILTER_HANDLE pvHandles
    );
PFAPIENTRY
PfUnBindInterface(
    INTERFACE_HANDLE pInterface
    );
PFAPIENTRY
PfBindInterfaceToIndex(
    INTERFACE_HANDLE pInterface,
    DWORD dwIndex,
    PFADDRESSTYPE pfatLinkType,
    PBYTE LinkIPAddress
    );
PFAPIENTRY
PfBindInterfaceToIPAddress(
    INTERFACE_HANDLE pInterface,
    PFADDRESSTYPE pfatType,
    PBYTE IPAddress
    );
PFAPIENTRY
PfRebindFilters(
    INTERFACE_HANDLE pInterface,
    PPF_LATEBIND_INFO pLateBindInfo
    );
PFAPIENTRY
PfAddGlobalFilterToInterface(
    INTERFACE_HANDLE pInterface,
    GLOBAL_FILTER gfFilter
    );
PFAPIENTRY
PfRemoveGlobalFilterFromInterface(
    INTERFACE_HANDLE pInterface,
    GLOBAL_FILTER gfFilter
    );
PFAPIENTRY
PfMakeLog(
    HANDLE hEvent
    );
PFAPIENTRY
PfSetLogBuffer(
    PBYTE pbBuffer,
    DWORD dwSize,
    DWORD dwThreshold,
    DWORD dwEntries,
    PDWORD pdwLoggedEntries,
    PDWORD pdwLostEntries,
    PDWORD pdwSizeUsed
    );
PFAPIENTRY
PfDeleteLog(
    VOID
    );
PFAPIENTRY
PfGetInterfaceStatistics(
    INTERFACE_HANDLE pInterface,
    PPF_INTERFACE_STATS ppfStats,
    PDWORD pdwBufferSize,
    BOOL fResetCounters
    );
PFAPIENTRY
PfTestPacket(
    INTERFACE_HANDLE pInInterface OPTIONAL,
    INTERFACE_HANDLE pOutInterface OPTIONAL,
    DWORD cBytes,
    PBYTE pbPacket,
    PPFFORWARD_ACTION ppAction
    );
#endif
#pragma endregion
