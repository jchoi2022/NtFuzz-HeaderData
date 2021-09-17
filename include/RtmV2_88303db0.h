       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <in6addr.h>
extern "C"
{
typedef INT RTM_VIEW_ID, *PRTM_VIEW_ID;
typedef DWORD RTM_VIEW_SET, *PRTM_VIEW_SET;
typedef struct _RTM_REGN_PROFILE
{
    UINT MaxNextHopsInRoute;
    UINT MaxHandlesInEnum;
    RTM_VIEW_SET ViewsSupported;
    UINT NumberOfViews;
}
RTM_REGN_PROFILE, *PRTM_REGN_PROFILE;
typedef HANDLE RTM_ENTITY_HANDLE,
                   *PRTM_ENTITY_HANDLE,
                    RTM_DEST_HANDLE,
                   *PRTM_DEST_HANDLE,
                    RTM_ROUTE_HANDLE,
                   *PRTM_ROUTE_HANDLE,
                    RTM_NEXTHOP_HANDLE,
                   *PRTM_NEXTHOP_HANDLE,
                    RTM_ENUM_HANDLE,
                   *PRTM_ENUM_HANDLE,
                    RTM_ROUTE_LIST_HANDLE,
                   *PRTM_ROUTE_LIST_HANDLE,
                    RTM_NOTIFY_HANDLE,
                   *PRTM_NOTIFY_HANDLE;
typedef struct _RTM_NET_ADDRESS
{
    USHORT AddressFamily;
    USHORT NumBits;
    UCHAR AddrBits[RTM_MAX_ADDRESS_SIZE];
}
RTM_NET_ADDRESS, *PRTM_NET_ADDRESS;
        RTM_IPV4_SET_ADDR_AND_LEN(NetAddress, Addr, Len)
        if ((Value) & (1 << (N))) \
        { \
            (Len) += (N); (Value) <<= (N); \
        } \
        { \
            ULONG _Temp_ = ntohl(Mask); \
                                                                   \
            (Len) = 0; \
                                                                   \
            RTM_CHECK_NTH_BIT(_Temp_, 16, (Len)); \
            RTM_CHECK_NTH_BIT(_Temp_, 8, (Len)); \
            RTM_CHECK_NTH_BIT(_Temp_, 4, (Len)); \
                                                                   \
            while (_Temp_) \
            { \
                (Len) += 1; _Temp_ <<= 1; \
            } \
        } \
        ((Len) ? htonl(~0 << (32 - (Len))): 0); \
        (NetAddress)->AddressFamily = AF_INET; \
        (NetAddress)->NumBits = (USHORT) (Len); \
        (* (ULONG *) ((NetAddress)->AddrBits)) = (Addr); \
        (Len) = (NetAddress)->NumBits; \
        (Addr) = (* (ULONG *) ((NetAddress)->AddrBits)); \
        (NetAddress)->AddressFamily = AF_INET; \
        (* (ULONG *) ((NetAddress)->AddrBits)) = (Addr); \
        RTM_IPV4_LEN_FROM_MASK((NetAddress)->NumBits, Mask)
        (Addr) = (* (ULONG *) ((NetAddress)->AddrBits)); \
        (Mask) = RTM_IPV4_MASK_FROM_LEN((NetAddress)->NumBits); \
DWORD
RtmConvertNetAddressToIpv6AddressAndLength(
    IN PRTM_NET_ADDRESS pNetAddress,
    OUT PIN6_ADDR pAddress,
    OUT PDWORD pLength,
    IN DWORD dwAddressSize
    );
DWORD
RtmConvertIpv6AddressAndLengthToNetAddress(
    OUT PRTM_NET_ADDRESS pNetAddress,
    IN IN6_ADDR Address,
    IN DWORD dwLength,
    IN DWORD dwAddressSize
    );
        RTM_IPV6_SET_ADDR_AND_LEN(NetAddress, Addr, Len)
        (NetAddress)->AddressFamily = AF_INET6; \
        (RtmConvertIpv6AddressAndLengthToNetAddress(NetAddress, Addr, Len, IPV6_ADDRESS_LEN_IN_BYTES)) \
        (RtmConvertNetAddressToIpv6AddressAndLength(NetAddress, Addr, Len, IPV6_ADDRESS_LEN_IN_BYTES)) \
typedef struct _RTM_PREF_INFO
{
    ULONG Metric;
    ULONG Preference;
}
RTM_PREF_INFO, *PRTM_PREF_INFO;
typedef struct _RTM_NEXTHOP_LIST
{
    USHORT NumNextHops;
    RTM_NEXTHOP_HANDLE NextHops[1];
}
RTM_NEXTHOP_LIST, *PRTM_NEXTHOP_LIST;
typedef struct _RTM_DEST_INFO
{
    RTM_DEST_HANDLE DestHandle;
    RTM_NET_ADDRESS DestAddress;
    FILETIME LastChanged;
    RTM_VIEW_SET BelongsToViews;
    UINT NumberOfViews;
    struct
    {
        RTM_VIEW_ID ViewId;
        UINT NumRoutes;
        RTM_ROUTE_HANDLE Route;
        RTM_ENTITY_HANDLE Owner;
        DWORD DestFlags;
        RTM_ROUTE_HANDLE HoldRoute;
    } ViewInfo[1];
}
RTM_DEST_INFO, *PRTM_DEST_INFO;
    FIELD_OFFSET(RTM_DEST_INFO, ViewInfo)
    (sizeof(RTM_DEST_INFO) - RTM_BASIC_DEST_INFO_SIZE)
    (RTM_BASIC_DEST_INFO_SIZE + (NumViews) * RTM_DEST_VIEW_INFO_SIZE)
typedef struct _RTM_ROUTE_INFO
{
    RTM_DEST_HANDLE DestHandle;
    RTM_ENTITY_HANDLE RouteOwner;
    RTM_NEXTHOP_HANDLE Neighbour;
    UCHAR State;
    UCHAR Flags1;
    USHORT Flags;
    RTM_PREF_INFO PrefInfo;
    RTM_VIEW_SET BelongsToViews;
    PVOID EntitySpecificInfo;
    RTM_NEXTHOP_LIST NextHopsList;
}
RTM_ROUTE_INFO, *PRTM_ROUTE_INFO;
    FIELD_OFFSET(RTM_ROUTE_INFO, NextHopsList.NumNextHops)
    (RTM_BASIC_ROUTE_INFO_SIZE + (NumHops) * sizeof(RTM_NEXTHOP_HANDLE))
        (RTM_ROUTE_FLAGS_MARTIAN | \
         RTM_ROUTE_FLAGS_BLACKHOLE | \
         RTM_ROUTE_FLAGS_DISCARD | \
         RTM_ROUTE_FLAGS_INACTIVE)
        (RTM_ROUTE_FLAGS_LOCAL | \
         RTM_ROUTE_FLAGS_REMOTE | \
         RTM_ROUTE_FLAGS_MYSELF)
        (RTM_ROUTE_FLAGS_MCAST | \
         RTM_ROUTE_FLAGS_LOCAL_MCAST)
        (RTM_ROUTE_FLAGS_ONES_SUBNET_BC | \
         RTM_ROUTE_FLAGS_ZEROS_SUBNETBC)
        (RTM_ROUTE_FLAGS_ONES_NETBC | \
         RTM_ROUTE_FLAGS_ZEROS_NETBC)
        (RTM_ROUTE_FLAGS_LIMITED_BC | \
         RTM_ROUTE_FLAGS_ONES_NETBC | \
         RTM_ROUTE_FLAGS_ONES_SUBNET_BC | \
         RTM_ROUTE_FLAGS_ZEROS_NETBC | \
         RTM_ROUTE_FLAGS_ZEROS_SUBNETBC)
typedef struct _RTM_NEXTHOP_INFO
{
    RTM_NET_ADDRESS NextHopAddress;
    RTM_ENTITY_HANDLE NextHopOwner;
    ULONG InterfaceIndex;
    USHORT State;
    USHORT Flags;
    PVOID EntitySpecificInfo;
    RTM_DEST_HANDLE RemoteNextHop;
}
RTM_NEXTHOP_INFO, *PRTM_NEXTHOP_INFO;
#pragma warning(disable : 4201)
typedef struct _RTM_ENTITY_ID
{
    union
    {
        struct
        {
            ULONG EntityProtocolId;
            ULONG EntityInstanceId;
        };
        ULONGLONG EntityId;
    };
}
RTM_ENTITY_ID, *PRTM_ENTITY_ID;
#pragma warning(default : 4201)
typedef struct _RTM_ENTITY_INFO
{
    USHORT RtmInstanceId;
    USHORT AddressFamily;
    RTM_ENTITY_ID EntityId;
}
RTM_ENTITY_INFO, *PRTM_ENTITY_INFO;
typedef enum _RTM_EVENT_TYPE
{
    RTM_ENTITY_REGISTERED,
    RTM_ENTITY_DEREGISTERED,
    RTM_ROUTE_EXPIRED,
    RTM_CHANGE_NOTIFICATION
}
RTM_EVENT_TYPE, *PRTM_EVENT_TYPE;
typedef
DWORD
(WINAPI * _EVENT_CALLBACK) (
     IN RTM_ENTITY_HANDLE RtmRegHandle,
     IN RTM_EVENT_TYPE EventType,
     IN PVOID Context1,
     IN PVOID Context2
     );
typedef _EVENT_CALLBACK RTM_EVENT_CALLBACK,
                      *PRTM_EVENT_CALLBACK;
typedef DWORD RTM_ENTITY_METHOD_TYPE,
                 *PRTM_ENTITY_METHOD_TYPE;
typedef struct _RTM_ENTITY_METHOD_INPUT
{
    RTM_ENTITY_METHOD_TYPE MethodType;
    UINT InputSize;
    UCHAR InputData[1];
}
RTM_ENTITY_METHOD_INPUT, *PRTM_ENTITY_METHOD_INPUT;
typedef struct _RTM_ENTITY_METHOD_OUTPUT
{
    RTM_ENTITY_METHOD_TYPE MethodType;
    DWORD MethodStatus;
    UINT OutputSize;
    UCHAR OutputData[1];
}
RTM_ENTITY_METHOD_OUTPUT, *PRTM_ENTITY_METHOD_OUTPUT;
typedef
VOID
(WINAPI * _ENTITY_METHOD) (
    IN RTM_ENTITY_HANDLE CallerHandle,
    IN RTM_ENTITY_HANDLE CalleeHandle,
    IN RTM_ENTITY_METHOD_INPUT *Input,
    OUT RTM_ENTITY_METHOD_OUTPUT *Output
    );
typedef _ENTITY_METHOD RTM_ENTITY_EXPORT_METHOD,
                     *PRTM_ENTITY_EXPORT_METHOD;
typedef struct _RTM_ENTITY_EXPORT_METHODS
{
    UINT NumMethods;
    RTM_ENTITY_EXPORT_METHOD Methods[1];
}
RTM_ENTITY_EXPORT_METHODS, *PRTM_ENTITY_EXPORT_METHODS;
typedef DWORD RTM_ROUTE_CHANGE_FLAGS,
               *PRTM_ROUTE_CHANGE_FLAGS;
typedef DWORD RTM_NEXTHOP_CHANGE_FLAGS,
             *PRTM_NEXTHOP_CHANGE_FLAGS;
typedef DWORD RTM_MATCH_FLAGS,
                      *PRTM_MATCH_FLAGS;
typedef DWORD RTM_ENUM_FLAGS,
                       *PRTM_ENUM_FLAGS;
typedef DWORD RTM_NOTIFY_FLAGS,
                     *PRTM_NOTIFY_FLAGS;
DWORD
WINAPI
RtmRegisterEntity (
    IN PRTM_ENTITY_INFO RtmEntityInfo,
    IN PRTM_ENTITY_EXPORT_METHODS ExportMethods OPTIONAL,
    IN RTM_EVENT_CALLBACK EventCallback,
    IN BOOL ReserveOpaquePointer,
    OUT PRTM_REGN_PROFILE RtmRegProfile,
    OUT PRTM_ENTITY_HANDLE RtmRegHandle
    );
DWORD
WINAPI
RtmDeregisterEntity (
    IN RTM_ENTITY_HANDLE RtmRegHandle
    );
DWORD
WINAPI
RtmGetRegisteredEntities (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN OUT PUINT NumEntities,
    OUT PRTM_ENTITY_HANDLE EntityHandles,
    OUT PRTM_ENTITY_INFO EntityInfos OPTIONAL
    );
DWORD
WINAPI
RtmReleaseEntities (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN UINT NumEntities,
    IN PRTM_ENTITY_HANDLE EntityHandles
    );
DWORD
WINAPI
RtmLockDestination(
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_DEST_HANDLE DestHandle,
    IN BOOL Exclusive,
    IN BOOL LockDest
    );
DWORD
WINAPI
RtmGetOpaqueInformationPointer (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_DEST_HANDLE DestHandle,
    OUT PVOID *OpaqueInfoPointer
    );
DWORD
WINAPI
RtmGetEntityMethods (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENTITY_HANDLE EntityHandle,
    IN OUT PUINT NumMethods,
    OUT PRTM_ENTITY_EXPORT_METHOD ExptMethods
    );
DWORD
WINAPI
RtmInvokeMethod (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENTITY_HANDLE EntityHandle,
    IN PRTM_ENTITY_METHOD_INPUT Input,
    IN OUT PUINT OutputSize,
    OUT PRTM_ENTITY_METHOD_OUTPUT Output
    );
DWORD
WINAPI
RtmBlockMethods (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN HANDLE TargetHandle OPTIONAL,
    IN UCHAR TargetType OPTIONAL,
    IN DWORD BlockingFlag
    );
DWORD
WINAPI
RtmGetEntityInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENTITY_HANDLE EntityHandle,
    OUT PRTM_ENTITY_INFO EntityInfo
    );
DWORD
WINAPI
RtmGetDestInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_DEST_HANDLE DestHandle,
    IN ULONG ProtocolId,
    IN RTM_VIEW_SET TargetViews,
    OUT PRTM_DEST_INFO DestInfo
    );
DWORD
WINAPI
RtmGetRouteInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_HANDLE RouteHandle,
    OUT PRTM_ROUTE_INFO RouteInfo OPTIONAL,
    OUT PRTM_NET_ADDRESS DestAddress OPTIONAL
    );
DWORD
WINAPI
RtmGetNextHopInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NEXTHOP_HANDLE NextHopHandle,
    OUT PRTM_NEXTHOP_INFO NextHopInfo
    );
DWORD
WINAPI
RtmReleaseEntityInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_ENTITY_INFO EntityInfo
    );
DWORD
WINAPI
RtmReleaseDestInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_DEST_INFO DestInfo
    );
DWORD
WINAPI
RtmReleaseRouteInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_ROUTE_INFO RouteInfo
    );
DWORD
WINAPI
RtmReleaseNextHopInfo (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_NEXTHOP_INFO NextHopInfo
    );
DWORD
WINAPI
RtmAddRouteToDest (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN OUT PRTM_ROUTE_HANDLE RouteHandle OPTIONAL,
    IN PRTM_NET_ADDRESS DestAddress,
    IN PRTM_ROUTE_INFO RouteInfo,
    IN ULONG TimeToLive,
    IN RTM_ROUTE_LIST_HANDLE RouteListHandle OPTIONAL,
    IN RTM_NOTIFY_FLAGS NotifyType,
    IN RTM_NOTIFY_HANDLE NotifyHandle OPTIONAL,
    IN OUT PRTM_ROUTE_CHANGE_FLAGS ChangeFlags
    );
DWORD
WINAPI
RtmDeleteRouteToDest (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_HANDLE RouteHandle,
    OUT PRTM_ROUTE_CHANGE_FLAGS ChangeFlags
    );
DWORD
WINAPI
RtmHoldDestination (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_DEST_HANDLE DestHandle,
    IN RTM_VIEW_SET TargetViews,
    IN ULONG HoldTime
    );
DWORD
WINAPI
RtmGetRoutePointer (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_HANDLE RouteHandle,
    OUT PRTM_ROUTE_INFO *RoutePointer
    );
DWORD
WINAPI
RtmLockRoute(
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_HANDLE RouteHandle,
    IN BOOL Exclusive,
    IN BOOL LockRoute,
    OUT PRTM_ROUTE_INFO *RoutePointer OPTIONAL
    );
DWORD
WINAPI
RtmUpdateAndUnlockRoute(
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_HANDLE RouteHandle,
    IN ULONG TimeToLive,
    IN RTM_ROUTE_LIST_HANDLE RouteListHandle OPTIONAL,
    IN RTM_NOTIFY_FLAGS NotifyType,
    IN RTM_NOTIFY_HANDLE NotifyHandle OPTIONAL,
    OUT PRTM_ROUTE_CHANGE_FLAGS ChangeFlags
    );
DWORD
WINAPI
RtmGetExactMatchDestination (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_NET_ADDRESS DestAddress,
    IN ULONG ProtocolId,
    IN RTM_VIEW_SET TargetViews,
    OUT PRTM_DEST_INFO DestInfo
    );
DWORD
WINAPI
RtmGetMostSpecificDestination (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_NET_ADDRESS DestAddress,
    IN ULONG ProtocolId,
    IN RTM_VIEW_SET TargetViews,
    OUT PRTM_DEST_INFO DestInfo
    );
DWORD
WINAPI
RtmGetLessSpecificDestination (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_DEST_HANDLE DestHandle,
    IN ULONG ProtocolId,
    IN RTM_VIEW_SET TargetViews,
    OUT PRTM_DEST_INFO DestInfo
    );
DWORD
WINAPI
RtmGetExactMatchRoute (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_NET_ADDRESS DestAddress,
    IN RTM_MATCH_FLAGS MatchingFlags,
    IN OUT PRTM_ROUTE_INFO RouteInfo,
    IN ULONG InterfaceIndex,
    IN RTM_VIEW_SET TargetViews,
    OUT PRTM_ROUTE_HANDLE RouteHandle
    );
DWORD
WINAPI
RtmIsBestRoute (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_HANDLE RouteHandle,
    OUT PRTM_VIEW_SET BestInViews
    );
DWORD
WINAPI
RtmAddNextHop (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_NEXTHOP_INFO NextHopInfo,
    IN OUT PRTM_NEXTHOP_HANDLE NextHopHandle OPTIONAL,
    OUT PRTM_NEXTHOP_CHANGE_FLAGS ChangeFlags
    );
DWORD
WINAPI
RtmFindNextHop (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN PRTM_NEXTHOP_INFO NextHopInfo,
    OUT PRTM_NEXTHOP_HANDLE NextHopHandle,
    OUT PRTM_NEXTHOP_INFO *NextHopPointer OPTIONAL
    );
DWORD
WINAPI
RtmDeleteNextHop (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NEXTHOP_HANDLE NextHopHandle OPTIONAL,
    IN PRTM_NEXTHOP_INFO NextHopInfo
    );
DWORD
WINAPI
RtmGetNextHopPointer (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NEXTHOP_HANDLE NextHopHandle,
    OUT PRTM_NEXTHOP_INFO *NextHopPointer
    );
DWORD
WINAPI
RtmLockNextHop(
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NEXTHOP_HANDLE NextHopHandle,
    IN BOOL Exclusive,
    IN BOOL LockNextHop,
    OUT PRTM_NEXTHOP_INFO *NextHopPointer OPTIONAL
    );
DWORD
WINAPI
RtmCreateDestEnum (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_VIEW_SET TargetViews,
    IN RTM_ENUM_FLAGS EnumFlags,
    IN PRTM_NET_ADDRESS NetAddress,
    IN ULONG ProtocolId,
    OUT PRTM_ENUM_HANDLE RtmEnumHandle
    );
DWORD
WINAPI
RtmGetEnumDests (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENUM_HANDLE EnumHandle,
    IN OUT PUINT NumDests,
    OUT PRTM_DEST_INFO DestInfos
    );
DWORD
WINAPI
RtmReleaseDests (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN UINT NumDests,
    IN PRTM_DEST_INFO DestInfos
    );
DWORD
WINAPI
RtmCreateRouteEnum (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_DEST_HANDLE DestHandle OPTIONAL,
    IN RTM_VIEW_SET TargetViews,
    IN RTM_ENUM_FLAGS EnumFlags,
    IN PRTM_NET_ADDRESS StartDest OPTIONAL,
    IN RTM_MATCH_FLAGS MatchingFlags,
    IN PRTM_ROUTE_INFO CriteriaRoute OPTIONAL,
    IN ULONG CriteriaInterface OPTIONAL,
    OUT PRTM_ENUM_HANDLE RtmEnumHandle
    );
DWORD
WINAPI
RtmGetEnumRoutes (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENUM_HANDLE EnumHandle,
    IN OUT PUINT NumRoutes,
    OUT PRTM_ROUTE_HANDLE RouteHandles
    );
DWORD
WINAPI
RtmReleaseRoutes (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN UINT NumRoutes,
    IN PRTM_ROUTE_HANDLE RouteHandles
    );
DWORD
WINAPI
RtmCreateNextHopEnum (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENUM_FLAGS EnumFlags,
    IN PRTM_NET_ADDRESS NetAddress,
    OUT PRTM_ENUM_HANDLE RtmEnumHandle
    );
DWORD
WINAPI
RtmGetEnumNextHops (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENUM_HANDLE EnumHandle,
    IN OUT PUINT NumNextHops,
    OUT PRTM_NEXTHOP_HANDLE NextHopHandles
    );
DWORD
WINAPI
RtmReleaseNextHops (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN UINT NumNextHops,
    IN PRTM_NEXTHOP_HANDLE NextHopHandles
    );
DWORD
WINAPI
RtmDeleteEnumHandle (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENUM_HANDLE EnumHandle
    );
DWORD
WINAPI
RtmRegisterForChangeNotification (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_VIEW_SET TargetViews,
    IN RTM_NOTIFY_FLAGS NotifyFlags,
    IN PVOID NotifyContext,
    OUT PRTM_NOTIFY_HANDLE NotifyHandle
    );
DWORD
WINAPI
RtmGetChangedDests (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle,
    IN OUT PUINT NumDests,
    OUT PRTM_DEST_INFO ChangedDests
    );
DWORD
WINAPI
RtmReleaseChangedDests (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle,
    IN UINT NumDests,
    IN PRTM_DEST_INFO ChangedDests
    );
DWORD
WINAPI
RtmIgnoreChangedDests (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle,
    IN UINT NumDests,
    IN PRTM_DEST_HANDLE ChangedDests
    );
DWORD
WINAPI
RtmGetChangeStatus (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle,
    IN RTM_DEST_HANDLE DestHandle,
    OUT PBOOL ChangeStatus
    );
DWORD
WINAPI
RtmMarkDestForChangeNotification (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle,
    IN RTM_DEST_HANDLE DestHandle,
    IN BOOL MarkDest
    );
DWORD
WINAPI
RtmIsMarkedForChangeNotification (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle,
    IN RTM_DEST_HANDLE DestHandle,
    OUT PBOOL DestMarked
    );
DWORD
WINAPI
RtmDeregisterFromChangeNotification (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_NOTIFY_HANDLE NotifyHandle
    );
DWORD
WINAPI
RtmCreateRouteList (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    OUT PRTM_ROUTE_LIST_HANDLE RouteListHandle
    );
DWORD
WINAPI
RtmInsertInRouteList (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_LIST_HANDLE RouteListHandle OPTIONAL,
    IN UINT NumRoutes,
    IN PRTM_ROUTE_HANDLE RouteHandles
    );
DWORD
WINAPI
RtmCreateRouteListEnum (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_LIST_HANDLE RouteListHandle,
    OUT PRTM_ENUM_HANDLE RtmEnumHandle
    );
DWORD
WINAPI
RtmGetListEnumRoutes (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ENUM_HANDLE EnumHandle,
    IN OUT PUINT NumRoutes,
    _Out_writes_(*NumRoutes) OUT PRTM_ROUTE_HANDLE RouteHandles
    );
DWORD
WINAPI
RtmDeleteRouteList (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN RTM_ROUTE_LIST_HANDLE RouteListHandle
    );
DWORD
WINAPI
RtmReferenceHandles (
    IN RTM_ENTITY_HANDLE RtmRegHandle,
    IN UINT NumHandles,
    IN HANDLE *RtmHandles
    );
}
#endif
#pragma endregion
