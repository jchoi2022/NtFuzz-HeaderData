#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "fwptypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or AppRuntime Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPRUNTIME)
typedef struct FWPS_FILTER_CONDITION0_
    {
    UINT16 fieldId;
    UINT16 reserved;
    FWP_MATCH_TYPE matchType;
    FWP_CONDITION_VALUE0 conditionValue;
    } FWPS_FILTER_CONDITION0;
typedef struct FWPS_ACTION0_
    {
    FWP_ACTION_TYPE type;
    UINT32 calloutId;
    } FWPS_ACTION0;
typedef struct FWPM_PROVIDER_CONTEXT0_ FWPM_PROVIDER_CONTEXT0;
typedef struct FWPS_FILTER0_
    {
    UINT64 filterId;
    FWP_VALUE0 weight;
    UINT16 subLayerWeight;
    UINT16 flags;
    UINT32 numFilterConditions;
                            FWPS_FILTER_CONDITION0 *filterCondition;
    FWPS_ACTION0 action;
    UINT64 context;
                   FWPM_PROVIDER_CONTEXT0 *providerContext;
    } FWPS_FILTER0;
typedef struct FWPM_PROVIDER_CONTEXT1_ FWPM_PROVIDER_CONTEXT1;
typedef struct FWPS_FILTER1_
    {
    UINT64 filterId;
    FWP_VALUE0 weight;
    UINT16 subLayerWeight;
    UINT16 flags;
    UINT32 numFilterConditions;
                            FWPS_FILTER_CONDITION0 *filterCondition;
    FWPS_ACTION0 action;
    UINT64 context;
                   FWPM_PROVIDER_CONTEXT1 *providerContext;
    } FWPS_FILTER1;
typedef struct FWPM_PROVIDER_CONTEXT2_ FWPM_PROVIDER_CONTEXT2;
typedef struct FWPS_FILTER2_
    {
    UINT64 filterId;
    FWP_VALUE0 weight;
    UINT16 subLayerWeight;
    UINT16 flags;
    UINT32 numFilterConditions;
                            FWPS_FILTER_CONDITION0 *filterCondition;
    FWPS_ACTION0 action;
    UINT64 context;
                   FWPM_PROVIDER_CONTEXT2 *providerContext;
    } FWPS_FILTER2;
typedef struct FWPM_PROVIDER_CONTEXT3_ FWPM_PROVIDER_CONTEXT3;
typedef struct FWPS_FILTER3_
    {
    UINT64 filterId;
    FWP_VALUE0 weight;
    UINT16 subLayerWeight;
    UINT16 flags;
    UINT32 numFilterConditions;
                            FWPS_FILTER_CONDITION0 *filterCondition;
    FWPS_ACTION0 action;
    UINT64 context;
                   FWPM_PROVIDER_CONTEXT3 *providerContext;
    } FWPS_FILTER3;
typedef struct FWPS_INCOMING_VALUE0_
    {
    FWP_VALUE0 value;
    } FWPS_INCOMING_VALUE0;
typedef struct FWPS_INCOMING_VALUES0_
    {
    UINT16 layerId;
    UINT32 valueCount;
                         FWPS_INCOMING_VALUE0 *incomingValue;
    } FWPS_INCOMING_VALUES0;
typedef
enum FWPS_DISCARD_MODULE0_
    {
        FWPS_DISCARD_MODULE_NETWORK = 0,
        FWPS_DISCARD_MODULE_TRANSPORT = ( FWPS_DISCARD_MODULE_NETWORK + 1 ) ,
        FWPS_DISCARD_MODULE_GENERAL = ( FWPS_DISCARD_MODULE_TRANSPORT + 1 ) ,
        FWPS_DISCARD_MODULE_MAX = ( FWPS_DISCARD_MODULE_GENERAL + 1 )
    } FWPS_DISCARD_MODULE0;
typedef
enum FWPS_GENERAL_DISCARD_REASON_
    {
        FWPS_DISCARD_FIREWALL_POLICY = 0,
        FWPS_DISCARD_IPSEC = ( FWPS_DISCARD_FIREWALL_POLICY + 1 ) ,
        FWPS_GENERAL_DISCARD_REASON_MAX = ( FWPS_DISCARD_IPSEC + 1 )
    } FWPS_GENERAL_DISCARD_REASON;
typedef struct FWPS_DISCARD_METADATA0_
    {
    FWPS_DISCARD_MODULE0 discardModule;
    UINT32 discardReason;
    UINT64 filterId;
    } FWPS_DISCARD_METADATA0;
typedef struct FWPS_INBOUND_FRAGMENT_METADATA0_
    {
    UINT32 fragmentIdentification;
    UINT16 fragmentOffset;
    ULONG fragmentLength;
    } FWPS_INBOUND_FRAGMENT_METADATA0;
typedef struct FWPS_CLASSIFY_OUT0_
    {
    FWP_ACTION_TYPE actionType;
    UINT64 outContext;
    UINT64 filterId;
    UINT32 rights;
    UINT32 flags;
    UINT32 reserved;
    } FWPS_CLASSIFY_OUT0;
typedef
enum FWPS_CALLOUT_NOTIFY_TYPE_
    {
        FWPS_CALLOUT_NOTIFY_ADD_FILTER = 0,
        FWPS_CALLOUT_NOTIFY_DELETE_FILTER = ( FWPS_CALLOUT_NOTIFY_ADD_FILTER + 1 ) ,
        FWPS_CALLOUT_NOTIFY_ADD_FILTER_POST_COMMIT = ( FWPS_CALLOUT_NOTIFY_DELETE_FILTER + 1 ) ,
        FWPS_CALLOUT_NOTIFY_TYPE_MAX = ( FWPS_CALLOUT_NOTIFY_ADD_FILTER_POST_COMMIT + 1 )
    } FWPS_CALLOUT_NOTIFY_TYPE;
typedef struct FWPS_ALE_ENDPOINT_PROPERTIES0_
    {
    UINT64 endpointId;
    FWP_IP_VERSION ipVersion;
                                   union
        {
                       UINT32 localV4Address;
                       UINT8 localV6Address[ 16 ];
        } ;
                                   union
        {
                       UINT32 remoteV4Address;
                       UINT8 remoteV6Address[ 16 ];
        } ;
    UINT8 ipProtocol;
    UINT16 localPort;
    UINT16 remotePort;
    UINT64 localTokenModifiedId;
    UINT64 mmSaId;
    UINT64 qmSaId;
    UINT32 ipsecStatus;
    UINT32 flags;
    FWP_BYTE_BLOB appId;
    } FWPS_ALE_ENDPOINT_PROPERTIES0;
typedef struct FWPS_ALE_ENDPOINT_ENUM_TEMPLATE0_
    {
    FWP_CONDITION_VALUE0 localSubNet;
    FWP_CONDITION_VALUE0 remoteSubNet;
    FWP_CONDITION_VALUE0 ipProtocol;
    FWP_CONDITION_VALUE0 localPort;
    FWP_CONDITION_VALUE0 remotePort;
    } FWPS_ALE_ENDPOINT_ENUM_TEMPLATE0;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fwpstypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fwpstypes_0000_0000_v0_0_s_ifspec;
}
