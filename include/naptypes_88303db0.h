#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_naptypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_naptypes_0000_0000_v0_0_s_ifspec;
typedef
enum tagIsolationState
    {
        isolationStateNotRestricted = 1,
        isolationStateInProbation = 2,
        isolationStateRestrictedAccess = 3
    } IsolationState;
typedef
enum tagExtendedIsolationState
    {
        extendedIsolationStateNoData = 0,
        extendedIsolationStateTransition = 0x1,
        extendedIsolationStateInfected = 0x2,
        extendedIsolationStateUnknown = 0x3
    } ExtendedIsolationState;
typedef
enum tagNapTracingLevel
    {
        tracingLevelUndefined = 0,
        tracingLevelBasic = 1,
        tracingLevelAdvanced = 2,
        tracingLevelDebug = 3
    } NapTracingLevel;
typedef FILETIME ProbationTime;
typedef struct tagCountedString
    {
    UINT16 length;
                                   WCHAR *string;
    } CountedString;
typedef struct tagIsolationInfo
    {
    IsolationState isolationState;
    ProbationTime probEndTime;
    CountedString failureUrl;
    } IsolationInfo;
typedef struct tagIsolationInfoEx
    {
    IsolationState isolationState;
    ExtendedIsolationState extendedIsolationState;
    ProbationTime probEndTime;
    CountedString failureUrl;
    } IsolationInfoEx;
typedef
enum tagFailureCategory
    {
        failureCategoryNone = 0,
        failureCategoryOther = 1,
        failureCategoryClientComponent = 2,
        failureCategoryClientCommunication = 3,
        failureCategoryServerComponent = 4,
        failureCategoryServerCommunication = 5
    } FailureCategory;
typedef struct tagFailureCategoryMapping
    {
    BOOL mappingCompliance[ 5 ];
    } FailureCategoryMapping;
typedef UINT32 NapComponentId;
typedef NapComponentId SystemHealthEntityId;
typedef NapComponentId EnforcementEntityId;
typedef __RPC__range(0,maxSystemHealthEntityCount) UINT16 SystemHealthEntityCount;
typedef __RPC__range(0,maxEnforcerCount) UINT16 EnforcementEntityCount;
typedef struct tagCorrelationId
    {
    GUID connId;
    FILETIME timeStamp;
    } CorrelationId;
typedef CountedString StringCorrelationId;
typedef GUID ConnectionId;
typedef __RPC__range(0,percentageNotSupported) UINT8 Percentage;
typedef UINT32 MessageId;
typedef struct tagResultCodes
    {
                  UINT16 count;
                    HRESULT *results;
    } ResultCodes;
typedef struct tagIpv4Address
    {
    BYTE addr[ 4 ];
    } Ipv4Address;
typedef struct tagIpv6Address
    {
    BYTE addr[ 16 ];
    } Ipv6Address;
typedef
enum tagFixupState
    {
        fixupStateSuccess = 0,
        fixupStateInProgress = 1,
        fixupStateCouldNotUpdate = 2
    } FixupState;
typedef struct tagFixupInfo
    {
    FixupState state;
    Percentage percentage;
    ResultCodes resultCodes;
    MessageId fixupMsgId;
    } FixupInfo;
typedef
enum tagNapNotifyType
    {
        napNotifyTypeUnknown = 0,
        napNotifyTypeServiceState = 1,
        napNotifyTypeQuarState = 2
    } NapNotifyType;
typedef struct tagSystemHealthAgentState
    {
    SystemHealthEntityId id;
    ResultCodes shaResultCodes;
    FailureCategory failureCategory;
    FixupInfo fixupInfo;
    } SystemHealthAgentState;
typedef struct tagSoHAttribute
    {
    UINT16 type;
                  UINT16 size;
                    BYTE *value;
    } SoHAttribute;
typedef struct tagSoH
    {
                  UINT16 count;
                    SoHAttribute *attributes;
    } SoH;
typedef struct tagSoH SoHRequest;
typedef struct tagSoH SoHResponse;
typedef struct tagNetworkSoH
    {
                  UINT16 size;
                    BYTE *data;
    } NetworkSoH;
typedef struct tagNetworkSoH NetworkSoHRequest;
typedef struct tagNetworkSoH NetworkSoHResponse;
typedef struct tagPrivateData
    {
                  UINT16 size;
                    BYTE *data;
    } PrivateData;
typedef struct tagNapComponentRegistrationInfo
    {
    NapComponentId id;
    CountedString friendlyName;
    CountedString description;
    CountedString version;
    CountedString vendorName;
    CLSID infoClsid;
    CLSID configClsid;
    FILETIME registrationDate;
    UINT32 componentType;
    } NapComponentRegistrationInfo;
typedef
enum tagRemoteConfigurationType
    {
        remoteConfigTypeMachine = 1,
        remoteConfigTypeConfigBlob = ( remoteConfigTypeMachine + 1 )
    } RemoteConfigurationType;
extern RPC_IF_HANDLE INapTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE INapTypes_v0_0_s_ifspec;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_naptypes_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_naptypes_0000_0001_v0_0_s_ifspec;
}
