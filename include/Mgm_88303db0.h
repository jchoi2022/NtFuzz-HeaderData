#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _MGM_IF_ENTRY {
    DWORD dwIfIndex;
    DWORD dwIfNextHopAddr;
    BOOL bIGMP;
    BOOL bIsEnabled;
} MGM_IF_ENTRY, *PMGM_IF_ENTRY;
typedef DWORD
(*PMGM_RPF_CALLBACK)(
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN OUT PDWORD pdwInIfIndex,
    IN OUT PDWORD pdwInIfNextHopAddr,
    IN OUT PDWORD pdwUpStreamNbr,
    IN DWORD dwHdrSize,
    IN PBYTE pbPacketHdr,
    IN OUT PBYTE pbRoute
);
typedef
DWORD (*PMGM_CREATION_ALERT_CALLBACK)(
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN DWORD dwInIfIndex,
    IN DWORD dwInIfNextHopAddr,
    IN DWORD dwIfCount,
    IN OUT PMGM_IF_ENTRY pmieOutIfList
);
typedef
DWORD (*PMGM_PRUNE_ALERT_CALLBACK)(
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr,
    IN BOOL bMemberDelete,
    IN OUT PDWORD pdwTimeout
);
typedef
DWORD (*PMGM_JOIN_ALERT_CALLBACK)(
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN BOOL bMemberUpdate
);
typedef
DWORD (*PMGM_WRONG_IF_CALLBACK)(
    IN DWORD dwSourceAddr,
    IN DWORD dwGroupAddr,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr,
    IN DWORD dwHdrSize,
    IN PBYTE pbPacketHdr
);
typedef DWORD
(*PMGM_LOCAL_JOIN_CALLBACK) (
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr
);
typedef DWORD
(*PMGM_LOCAL_LEAVE_CALLBACK) (
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr
);
typedef DWORD
(*PMGM_DISABLE_IGMP_CALLBACK) (
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr
);
typedef DWORD
(*PMGM_ENABLE_IGMP_CALLBACK) (
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr
);
typedef struct _ROUTING_PROTOCOL_CONFIG {
    DWORD dwCallbackFlags;
    PMGM_RPF_CALLBACK pfnRpfCallback;
    PMGM_CREATION_ALERT_CALLBACK pfnCreationAlertCallback;
    PMGM_PRUNE_ALERT_CALLBACK pfnPruneAlertCallback;
    PMGM_JOIN_ALERT_CALLBACK pfnJoinAlertCallback;
    PMGM_WRONG_IF_CALLBACK pfnWrongIfCallback;
    PMGM_LOCAL_JOIN_CALLBACK pfnLocalJoinCallback;
    PMGM_LOCAL_LEAVE_CALLBACK pfnLocalLeaveCallback;
    PMGM_DISABLE_IGMP_CALLBACK pfnDisableIgmpCallback;
    PMGM_ENABLE_IGMP_CALLBACK pfnEnableIgmpCallback;
} ROUTING_PROTOCOL_CONFIG, *PROUTING_PROTOCOL_CONFIG;
typedef enum _MGM_ENUM_TYPES
{
    ANY_SOURCE = 0,
    ALL_SOURCES
} MGM_ENUM_TYPES;
typedef struct _SOURCE_GROUP_ENTRY {
    DWORD dwSourceAddr;
    DWORD dwSourceMask;
    DWORD dwGroupAddr;
    DWORD dwGroupMask;
} SOURCE_GROUP_ENTRY, *PSOURCE_GROUP_ENTRY;
DWORD
MgmRegisterMProtocol(
    IN PROUTING_PROTOCOL_CONFIG prpiInfo,
    IN DWORD dwProtocolId,
    IN DWORD dwComponentId,
    OUT HANDLE * phProtocol
);
DWORD
MgmDeRegisterMProtocol(
    IN HANDLE hProtocol
);
DWORD
MgmTakeInterfaceOwnership(
    IN HANDLE hProtocol,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr
);
DWORD
MgmReleaseInterfaceOwnership(
    IN HANDLE hProtocol,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr
);
DWORD
MgmGetProtocolOnInterface(
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopAddr,
    IN OUT PDWORD pdwIfProtocolId,
    IN OUT PDWORD pdwIfComponentId
);
DWORD
MgmAddGroupMembershipEntry(
    IN HANDLE hProtocol,
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopIPAddr,
    IN DWORD dwFlags
);
DWORD
MgmDeleteGroupMembershipEntry(
    IN HANDLE hProtocol,
    IN DWORD dwSourceAddr,
    IN DWORD dwSourceMask,
    IN DWORD dwGroupAddr,
    IN DWORD dwGroupMask,
    IN DWORD dwIfIndex,
    IN DWORD dwIfNextHopIPAddr,
    IN DWORD dwFlags
);
DWORD
MgmGetMfe(
    IN PMIB_IPMCAST_MFE pimm,
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer
);
DWORD
MgmGetFirstMfe(
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer,
    IN OUT PDWORD pdwNumEntries
);
DWORD
MgmGetNextMfe(
    IN PMIB_IPMCAST_MFE pimmStart,
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer,
    IN OUT PDWORD pdwNumEntries
);
DWORD
MgmGetMfeStats(
    IN PMIB_IPMCAST_MFE pimm,
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer,
    IN DWORD dwFlags
);
DWORD
MgmGetFirstMfeStats(
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer,
    IN OUT PDWORD pdwNumEntries,
    IN DWORD dwFlags
);
DWORD
MgmGetNextMfeStats(
    IN PMIB_IPMCAST_MFE pimmStart,
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer,
    IN OUT PDWORD pdwNumEntries,
    IN DWORD dwFlags
);
DWORD
MgmGroupEnumerationStart(
    IN HANDLE hProtocol,
    IN MGM_ENUM_TYPES metEnumType,
    OUT HANDLE * phEnumHandle
);
DWORD
MgmGroupEnumerationGetNext(
    IN HANDLE hEnum,
    IN OUT PDWORD pdwBufferSize,
    IN OUT PBYTE pbBuffer,
    IN OUT PDWORD pdwNumEntries
);
DWORD
MgmGroupEnumerationEnd(
    IN HANDLE hEnum
);
DWORD
MgmSetMfe(
    IN HANDLE hProtocol,
    IN PMIB_IPMCAST_MFE pmimm
);
#endif
#pragma endregion
