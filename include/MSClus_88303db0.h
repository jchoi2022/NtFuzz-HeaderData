#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef class ClusApplication ClusApplication;
typedef class Cluster Cluster;
typedef class ClusVersion ClusVersion;
typedef class ClusResType ClusResType;
typedef class ClusProperty ClusProperty;
typedef class ClusProperties ClusProperties;
typedef class DomainNames DomainNames;
typedef class ClusNetwork ClusNetwork;
typedef class ClusNetInterface ClusNetInterface;
typedef class ClusNetInterfaces ClusNetInterfaces;
typedef class ClusResDependencies ClusResDependencies;
typedef class ClusResGroupResources ClusResGroupResources;
typedef class ClusResTypeResources ClusResTypeResources;
typedef class ClusResGroupPreferredOwnerNodes ClusResGroupPreferredOwnerNodes;
typedef class ClusResPossibleOwnerNodes ClusResPossibleOwnerNodes;
typedef class ClusNetworks ClusNetworks;
typedef class ClusNetworkNetInterfaces ClusNetworkNetInterfaces;
typedef class ClusNodeNetInterfaces ClusNodeNetInterfaces;
typedef class ClusRefObject ClusRefObject;
typedef class ClusterNames ClusterNames;
typedef class ClusNode ClusNode;
typedef class ClusNodes ClusNodes;
typedef class ClusResGroup ClusResGroup;
typedef class ClusResGroups ClusResGroups;
typedef class ClusResource ClusResource;
typedef class ClusResources ClusResources;
typedef class ClusResTypes ClusResTypes;
typedef class ClusResTypePossibleOwnerNodes ClusResTypePossibleOwnerNodes;
typedef class ClusPropertyValue ClusPropertyValue;
typedef class ClusPropertyValues ClusPropertyValues;
typedef class ClusPropertyValueData ClusPropertyValueData;
typedef class ClusPartition ClusPartition;
typedef class ClusPartitionEx ClusPartitionEx;
typedef class ClusPartitions ClusPartitions;
typedef class ClusDisk ClusDisk;
typedef class ClusDisks ClusDisks;
typedef class ClusScsiAddress ClusScsiAddress;
typedef class ClusRegistryKeys ClusRegistryKeys;
typedef class ClusCryptoKeys ClusCryptoKeys;
typedef class ClusResDependents ClusResDependents;
typedef interface ISClusApplication ISClusApplication;
typedef interface ISDomainNames ISDomainNames;
typedef interface ISClusterNames ISClusterNames;
typedef interface ISClusRefObject ISClusRefObject;
typedef interface ISClusVersion ISClusVersion;
typedef interface ISCluster ISCluster;
typedef interface ISClusNode ISClusNode;
typedef interface ISClusNodes ISClusNodes;
typedef interface ISClusNetwork ISClusNetwork;
typedef interface ISClusNetworks ISClusNetworks;
typedef interface ISClusNetInterface ISClusNetInterface;
typedef interface ISClusNetInterfaces ISClusNetInterfaces;
typedef interface ISClusNodeNetInterfaces ISClusNodeNetInterfaces;
typedef interface ISClusNetworkNetInterfaces ISClusNetworkNetInterfaces;
typedef interface ISClusResGroup ISClusResGroup;
typedef interface ISClusResGroups ISClusResGroups;
typedef interface ISClusResource ISClusResource;
typedef interface ISClusResDependencies ISClusResDependencies;
typedef interface ISClusResGroupResources ISClusResGroupResources;
typedef interface ISClusResTypeResources ISClusResTypeResources;
typedef interface ISClusResources ISClusResources;
typedef interface ISClusResGroupPreferredOwnerNodes ISClusResGroupPreferredOwnerNodes;
typedef interface ISClusResPossibleOwnerNodes ISClusResPossibleOwnerNodes;
typedef interface ISClusResTypePossibleOwnerNodes ISClusResTypePossibleOwnerNodes;
typedef interface ISClusResType ISClusResType;
typedef interface ISClusResTypes ISClusResTypes;
typedef interface ISClusProperty ISClusProperty;
typedef interface ISClusPropertyValue ISClusPropertyValue;
typedef interface ISClusPropertyValues ISClusPropertyValues;
typedef interface ISClusProperties ISClusProperties;
typedef interface ISClusPropertyValueData ISClusPropertyValueData;
typedef interface ISClusPartition ISClusPartition;
typedef interface ISClusPartitionEx ISClusPartitionEx;
typedef interface ISClusPartitions ISClusPartitions;
typedef interface ISClusDisk ISClusDisk;
typedef interface ISClusDisks ISClusDisks;
typedef interface ISClusScsiAddress ISClusScsiAddress;
typedef interface ISClusRegistryKeys ISClusRegistryKeys;
typedef interface ISClusCryptoKeys ISClusCryptoKeys;
typedef interface ISClusResDependents ISClusResDependents;
#include "basetsd.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
#pragma warning(push)
#pragma warning(disable:4668)
       
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
       
       
#pragma warning(pop)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family or FailoverCluster Package
typedef struct _HCLUSTER *HCLUSTER;
typedef struct _HNODE *HNODE;
typedef struct _HRESOURCE *HRESOURCE;
typedef struct _HGROUP *HGROUP;
typedef struct _HNETWORK *HNETWORK;
typedef struct _HNETINTERFACE *HNETINTERFACE;
typedef struct _HCHANGE *HCHANGE;
typedef struct _HCLUSENUM *HCLUSENUM;
typedef struct _HGROUPENUM *HGROUPENUM;
typedef struct _HRESENUM *HRESENUM;
typedef struct _HNETWORKENUM *HNETWORKENUM;
typedef struct _HNODEENUM *HNODEENUM;
typedef struct _HNETINTERFACEENUM *HNETINTERFACEENUM;
typedef struct _HRESTYPEENUM *HRESTYPEENUM;
typedef struct _HREGBATCH *HREGBATCH;
typedef struct _HREGBATCHPORT *HREGBATCHPORT;
typedef struct _HREGBATCHNOTIFICATION *HREGBATCHNOTIFICATION;
typedef struct _HREGREADBATCH *HREGREADBATCH;
typedef struct _HREGREADBATCHREPLY *HREGREADBATCHREPLY;
typedef struct _HNODEENUMEX *HNODEENUMEX;
typedef struct _HCLUSENUMEX *HCLUSENUMEX;
typedef struct _HGROUPENUMEX *HGROUPENUMEX;
typedef struct _HRESENUMEX *HRESENUMEX;
typedef struct _HGROUPSET *HGROUPSET;
typedef struct _HGROUPSETENUM *HGROUPSETENUM;
typedef
enum CLUSTER_QUORUM_TYPE
    {
        OperationalQuorum = 0,
        ModifyQuorum = ( OperationalQuorum + 1 )
    } CLUSTER_QUORUM_TYPE;
typedef
enum NODE_CLUSTER_STATE
    {
        ClusterStateNotInstalled = 0,
        ClusterStateNotConfigured = 0x1,
        ClusterStateNotRunning = ( 0x1 | 0x2 ) ,
        ClusterStateRunning = ( ( 0x1 | 0x2 ) | 0x10 )
    } NODE_CLUSTER_STATE;
typedef
enum CLUSTER_RESOURCE_STATE_CHANGE_REASON
    {
        eResourceStateChangeReasonUnknown = 0,
        eResourceStateChangeReasonMove = ( eResourceStateChangeReasonUnknown + 1 ) ,
        eResourceStateChangeReasonFailover = ( eResourceStateChangeReasonMove + 1 ) ,
        eResourceStateChangeReasonFailedMove = ( eResourceStateChangeReasonFailover + 1 ) ,
        eResourceStateChangeReasonShutdown = ( eResourceStateChangeReasonFailedMove + 1 ) ,
        eResourceStateChangeReasonRundown = ( eResourceStateChangeReasonShutdown + 1 )
    } CLUSTER_RESOURCE_STATE_CHANGE_REASON;
typedef
enum _CLUSTER_REG_COMMAND
    {
        CLUSREG_COMMAND_NONE = 0,
        CLUSREG_SET_VALUE = 1,
        CLUSREG_CREATE_KEY = ( CLUSREG_SET_VALUE + 1 ) ,
        CLUSREG_DELETE_KEY = ( CLUSREG_CREATE_KEY + 1 ) ,
        CLUSREG_DELETE_VALUE = ( CLUSREG_DELETE_KEY + 1 ) ,
        CLUSREG_SET_KEY_SECURITY = ( CLUSREG_DELETE_VALUE + 1 ) ,
        CLUSREG_VALUE_DELETED = ( CLUSREG_SET_KEY_SECURITY + 1 ) ,
        CLUSREG_READ_KEY = ( CLUSREG_VALUE_DELETED + 1 ) ,
        CLUSREG_READ_VALUE = ( CLUSREG_READ_KEY + 1 ) ,
        CLUSREG_READ_ERROR = ( CLUSREG_READ_VALUE + 1 ) ,
        CLUSREG_CONTROL_COMMAND = ( CLUSREG_READ_ERROR + 1 ) ,
        CLUSREG_CONDITION_EXISTS = ( CLUSREG_CONTROL_COMMAND + 1 ) ,
        CLUSREG_CONDITION_NOT_EXISTS = ( CLUSREG_CONDITION_EXISTS + 1 ) ,
        CLUSREG_CONDITION_IS_EQUAL = ( CLUSREG_CONDITION_NOT_EXISTS + 1 ) ,
        CLUSREG_CONDITION_IS_NOT_EQUAL = ( CLUSREG_CONDITION_IS_EQUAL + 1 ) ,
        CLUSREG_CONDITION_IS_GREATER_THAN = ( CLUSREG_CONDITION_IS_NOT_EQUAL + 1 ) ,
        CLUSREG_CONDITION_IS_LESS_THAN = ( CLUSREG_CONDITION_IS_GREATER_THAN + 1 ) ,
        CLUSREG_CONDITION_KEY_EXISTS = ( CLUSREG_CONDITION_IS_LESS_THAN + 1 ) ,
        CLUSREG_CONDITION_KEY_NOT_EXISTS = ( CLUSREG_CONDITION_KEY_EXISTS + 1 ) ,
        CLUSREG_LAST_COMMAND = ( CLUSREG_CONDITION_KEY_NOT_EXISTS + 1 )
    } CLUSTER_REG_COMMAND;
typedef struct _CLUSTER_ENUM_ITEM
    {
    DWORD dwVersion;
    DWORD dwType;
    DWORD cbId;
    LPWSTR lpszId;
    DWORD cbName;
    LPWSTR lpszName;
    } CLUSTER_ENUM_ITEM;
typedef struct _CLUSTER_ENUM_ITEM *PCLUSTER_ENUM_ITEM;
typedef
enum __MIDL___MIDL_itf_msclus_0000_0000_0001
    {
        ClusGroupTypeCoreCluster = 1,
        ClusGroupTypeAvailableStorage = 2,
        ClusGroupTypeTemporary = 3,
        ClusGroupTypeSharedVolume = 4,
        ClusGroupTypeStoragePool = 5,
        ClusGroupTypeFileServer = 100,
        ClusGroupTypePrintServer = 101,
        ClusGroupTypeDhcpServer = 102,
        ClusGroupTypeDtc = 103,
        ClusGroupTypeMsmq = 104,
        ClusGroupTypeWins = 105,
        ClusGroupTypeStandAloneDfs = 106,
        ClusGroupTypeGenericApplication = 107,
        ClusGroupTypeGenericService = 108,
        ClusGroupTypeGenericScript = 109,
        ClusGroupTypeIScsiNameService = 110,
        ClusGroupTypeVirtualMachine = 111,
        ClusGroupTypeTsSessionBroker = 112,
        ClusGroupTypeIScsiTarget = 113,
        ClusGroupTypeScaleoutFileServer = 114,
        ClusGroupTypeVMReplicaBroker = 115,
        ClusGroupTypeTaskScheduler = 116,
        ClusGroupTypeClusterUpdateAgent = 117,
        ClusGroupTypeScaleoutCluster = 118,
        ClusGroupTypeStorageReplica = 119,
        ClusGroupTypeVMReplicaCoordinator = 120,
        ClusGroupTypeCrossClusterOrchestrator = 121,
        ClusGroupTypeInfrastructureFileServer = 122,
        ClusGroupTypeUnknown = 9999
    } CLUSGROUP_TYPE;
typedef enum __MIDL___MIDL_itf_msclus_0000_0000_0001 *PCLUSGROUP_TYPE;
typedef struct _CLUSTER_CREATE_GROUP_INFO
    {
    DWORD dwVersion;
    CLUSGROUP_TYPE groupType;
    } CLUSTER_CREATE_GROUP_INFO;
typedef struct _CLUSTER_CREATE_GROUP_INFO *PCLUSTER_CREATE_GROUP_INFO;
typedef
enum __MIDL___MIDL_itf_msclus_0000_0000_0002
    {
        CLUSTER_MGMT_POINT_TYPE_NONE = 0,
        CLUSTER_MGMT_POINT_TYPE_CNO = ( CLUSTER_MGMT_POINT_TYPE_NONE + 1 ) ,
        CLUSTER_MGMT_POINT_TYPE_DNS_ONLY = ( CLUSTER_MGMT_POINT_TYPE_CNO + 1 ) ,
        CLUSTER_MGMT_POINT_TYPE_CNO_ONLY = ( CLUSTER_MGMT_POINT_TYPE_DNS_ONLY + 1 )
    } CLUSTER_MGMT_POINT_TYPE;
typedef
enum __MIDL___MIDL_itf_msclus_0000_0000_0003
    {
        CLUSTER_MGMT_POINT_RESTYPE_AUTO = 0,
        CLUSTER_MGMT_POINT_RESTYPE_SNN = 1,
        CLUSTER_MGMT_POINT_RESTYPE_DNN = 2
    } CLUSTER_MGMT_POINT_RESTYPE;
typedef enum __MIDL___MIDL_itf_msclus_0000_0000_0003 *PCLUSTER_MGMT_POINT_RESTYPE;
typedef
enum __MIDL___MIDL_itf_msclus_0000_0000_0004
    {
        CLUSTER_CLOUD_TYPE_NONE = 0,
        CLUSTER_CLOUD_TYPE_AZURE = 1,
        CLUSTER_CLOUD_TYPE_MIXED = 128,
        CLUSTER_CLOUD_TYPE_UNKNOWN = -1
    } CLUSTER_CLOUD_TYPE;
typedef enum __MIDL___MIDL_itf_msclus_0000_0000_0004 *PCLUSTER_CLOUD_TYPE;
typedef
enum __MIDL___MIDL_itf_msclus_0000_0000_0005
    {
        CLUS_GROUP_START_ALWAYS = 0,
        CLUS_GROUP_DO_NOT_START = 1,
        CLUS_GROUP_START_ALLOWED = 2
    } CLUS_GROUP_START_SETTING;
typedef
enum CLUSTER_QUORUM_VALUE
    {
        CLUSTER_QUORUM_MAINTAINED = 0,
        CLUSTER_QUORUM_LOST = 1
    } CLUSTER_QUORUM_VALUE;
typedef
enum CLUSTER_CHANGE
    {
        CLUSTER_CHANGE_NODE_STATE = 0x1,
        CLUSTER_CHANGE_NODE_DELETED = 0x2,
        CLUSTER_CHANGE_NODE_ADDED = 0x4,
        CLUSTER_CHANGE_NODE_PROPERTY = 0x8,
        CLUSTER_CHANGE_REGISTRY_NAME = 0x10,
        CLUSTER_CHANGE_REGISTRY_ATTRIBUTES = 0x20,
        CLUSTER_CHANGE_REGISTRY_VALUE = 0x40,
        CLUSTER_CHANGE_REGISTRY_SUBTREE = 0x80,
        CLUSTER_CHANGE_RESOURCE_STATE = 0x100,
        CLUSTER_CHANGE_RESOURCE_DELETED = 0x200,
        CLUSTER_CHANGE_RESOURCE_ADDED = 0x400,
        CLUSTER_CHANGE_RESOURCE_PROPERTY = 0x800,
        CLUSTER_CHANGE_GROUP_STATE = 0x1000,
        CLUSTER_CHANGE_GROUP_DELETED = 0x2000,
        CLUSTER_CHANGE_GROUP_ADDED = 0x4000,
        CLUSTER_CHANGE_GROUP_PROPERTY = 0x8000,
        CLUSTER_CHANGE_RESOURCE_TYPE_DELETED = 0x10000,
        CLUSTER_CHANGE_RESOURCE_TYPE_ADDED = 0x20000,
        CLUSTER_CHANGE_RESOURCE_TYPE_PROPERTY = 0x40000,
        CLUSTER_CHANGE_CLUSTER_RECONNECT = 0x80000,
        CLUSTER_CHANGE_NETWORK_STATE = 0x100000,
        CLUSTER_CHANGE_NETWORK_DELETED = 0x200000,
        CLUSTER_CHANGE_NETWORK_ADDED = 0x400000,
        CLUSTER_CHANGE_NETWORK_PROPERTY = 0x800000,
        CLUSTER_CHANGE_NETINTERFACE_STATE = 0x1000000,
        CLUSTER_CHANGE_NETINTERFACE_DELETED = 0x2000000,
        CLUSTER_CHANGE_NETINTERFACE_ADDED = 0x4000000,
        CLUSTER_CHANGE_NETINTERFACE_PROPERTY = 0x8000000,
        CLUSTER_CHANGE_QUORUM_STATE = 0x10000000,
        CLUSTER_CHANGE_CLUSTER_STATE = 0x20000000,
        CLUSTER_CHANGE_CLUSTER_PROPERTY = 0x40000000,
        CLUSTER_CHANGE_HANDLE_CLOSE = 0x80000000,
        CLUSTER_CHANGE_ALL = ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( CLUSTER_CHANGE_NODE_STATE | CLUSTER_CHANGE_NODE_DELETED ) | CLUSTER_CHANGE_NODE_ADDED ) | CLUSTER_CHANGE_NODE_PROPERTY ) | CLUSTER_CHANGE_REGISTRY_NAME ) | CLUSTER_CHANGE_REGISTRY_ATTRIBUTES ) | CLUSTER_CHANGE_REGISTRY_VALUE ) | CLUSTER_CHANGE_REGISTRY_SUBTREE ) | CLUSTER_CHANGE_RESOURCE_STATE ) | CLUSTER_CHANGE_RESOURCE_DELETED ) | CLUSTER_CHANGE_RESOURCE_ADDED ) | CLUSTER_CHANGE_RESOURCE_PROPERTY ) | CLUSTER_CHANGE_GROUP_STATE ) | CLUSTER_CHANGE_GROUP_DELETED ) | CLUSTER_CHANGE_GROUP_ADDED ) | CLUSTER_CHANGE_GROUP_PROPERTY ) | CLUSTER_CHANGE_RESOURCE_TYPE_DELETED ) | CLUSTER_CHANGE_RESOURCE_TYPE_ADDED ) | CLUSTER_CHANGE_RESOURCE_TYPE_PROPERTY ) | CLUSTER_CHANGE_NETWORK_STATE ) | CLUSTER_CHANGE_NETWORK_DELETED ) | CLUSTER_CHANGE_NETWORK_ADDED ) | CLUSTER_CHANGE_NETWORK_PROPERTY ) | CLUSTER_CHANGE_NETINTERFACE_STATE ) | CLUSTER_CHANGE_NETINTERFACE_DELETED ) | CLUSTER_CHANGE_NETINTERFACE_ADDED ) | CLUSTER_CHANGE_NETINTERFACE_PROPERTY ) | CLUSTER_CHANGE_QUORUM_STATE ) | CLUSTER_CHANGE_CLUSTER_STATE ) | CLUSTER_CHANGE_CLUSTER_PROPERTY ) | CLUSTER_CHANGE_CLUSTER_RECONNECT ) | CLUSTER_CHANGE_HANDLE_CLOSE )
    } CLUSTER_CHANGE;
typedef
enum CLUSTER_NOTIFICATIONS_VERSION
    {
        CLUSTER_NOTIFICATIONS_V1 = 0x1,
        CLUSTER_NOTIFICATIONS_V2 = 0x2
    } CLUSTER_NOTIFICATIONS_VERSION;
typedef
enum CLUSTER_CHANGE_CLUSTER_V2
    {
        CLUSTER_CHANGE_CLUSTER_RECONNECT_V2 = 0x1,
        CLUSTER_CHANGE_CLUSTER_STATE_V2 = 0x2,
        CLUSTER_CHANGE_CLUSTER_GROUP_ADDED_V2 = 0x4,
        CLUSTER_CHANGE_CLUSTER_HANDLE_CLOSE_V2 = 0x8,
        CLUSTER_CHANGE_CLUSTER_NETWORK_ADDED_V2 = 0x10,
        CLUSTER_CHANGE_CLUSTER_NODE_ADDED_V2 = 0x20,
        CLUSTER_CHANGE_CLUSTER_RESOURCE_TYPE_ADDED_V2 = 0x40,
        CLUSTER_CHANGE_CLUSTER_COMMON_PROPERTY_V2 = 0x80,
        CLUSTER_CHANGE_CLUSTER_PRIVATE_PROPERTY_V2 = 0x100,
        CLUSTER_CHANGE_CLUSTER_LOST_NOTIFICATIONS_V2 = 0x200,
        CLUSTER_CHANGE_CLUSTER_RENAME_V2 = 0x400,
        CLUSTER_CHANGE_CLUSTER_MEMBERSHIP_V2 = 0x800,
        CLUSTER_CHANGE_CLUSTER_UPGRADED_V2 = 0x1000,
        CLUSTER_CHANGE_CLUSTER_ALL_V2 = ( ( ( ( ( ( ( ( ( ( ( ( CLUSTER_CHANGE_CLUSTER_RECONNECT_V2 | CLUSTER_CHANGE_CLUSTER_STATE_V2 ) | CLUSTER_CHANGE_CLUSTER_GROUP_ADDED_V2 ) | CLUSTER_CHANGE_CLUSTER_HANDLE_CLOSE_V2 ) | CLUSTER_CHANGE_CLUSTER_NETWORK_ADDED_V2 ) | CLUSTER_CHANGE_CLUSTER_NODE_ADDED_V2 ) | CLUSTER_CHANGE_CLUSTER_RESOURCE_TYPE_ADDED_V2 ) | CLUSTER_CHANGE_CLUSTER_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_CLUSTER_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_CLUSTER_LOST_NOTIFICATIONS_V2 ) | CLUSTER_CHANGE_CLUSTER_RENAME_V2 ) | CLUSTER_CHANGE_CLUSTER_MEMBERSHIP_V2 ) | CLUSTER_CHANGE_CLUSTER_UPGRADED_V2 )
    } CLUSTER_CHANGE_CLUSTER_V2;
typedef
enum CLUSTER_CHANGE_GROUP_V2
    {
        CLUSTER_CHANGE_GROUP_DELETED_V2 = 0x1,
        CLUSTER_CHANGE_GROUP_COMMON_PROPERTY_V2 = 0x2,
        CLUSTER_CHANGE_GROUP_PRIVATE_PROPERTY_V2 = 0x4,
        CLUSTER_CHANGE_GROUP_STATE_V2 = 0x8,
        CLUSTER_CHANGE_GROUP_OWNER_NODE_V2 = 0x10,
        CLUSTER_CHANGE_GROUP_PREFERRED_OWNERS_V2 = 0x20,
        CLUSTER_CHANGE_GROUP_RESOURCE_ADDED_V2 = 0x40,
        CLUSTER_CHANGE_GROUP_RESOURCE_GAINED_V2 = 0x80,
        CLUSTER_CHANGE_GROUP_RESOURCE_LOST_V2 = 0x100,
        CLUSTER_CHANGE_GROUP_HANDLE_CLOSE_V2 = 0x200,
        CLUSTER_CHANGE_GROUP_ALL_V2 = ( ( ( ( ( ( ( ( ( CLUSTER_CHANGE_GROUP_DELETED_V2 | CLUSTER_CHANGE_GROUP_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_GROUP_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_GROUP_STATE_V2 ) | CLUSTER_CHANGE_GROUP_OWNER_NODE_V2 ) | CLUSTER_CHANGE_GROUP_PREFERRED_OWNERS_V2 ) | CLUSTER_CHANGE_GROUP_RESOURCE_ADDED_V2 ) | CLUSTER_CHANGE_GROUP_RESOURCE_GAINED_V2 ) | CLUSTER_CHANGE_GROUP_RESOURCE_LOST_V2 ) | CLUSTER_CHANGE_GROUP_HANDLE_CLOSE_V2 )
    } CLUSTER_CHANGE_GROUP_V2;
typedef
enum CLUSTER_CHANGE_GROUPSET_V2
    {
        CLUSTER_CHANGE_GROUPSET_DELETED_v2 = 0x1,
        CLUSTER_CHANGE_GROUPSET_COMMON_PROPERTY_V2 = 0x2,
        CLUSTER_CHANGE_GROUPSET_PRIVATE_PROPERTY_V2 = 0x4,
        CLUSTER_CHANGE_GROUPSET_STATE_V2 = 0x8,
        CLUSTER_CHANGE_GROUPSET_GROUP_ADDED = 0x10,
        CLUSTER_CHANGE_GROUPSET_GROUP_REMOVED = 0x20,
        CLUSTER_CHANGE_GROUPSET_DEPENDENCIES_V2 = 0x40,
        CLUSTER_CHANGE_GROUPSET_DEPENDENTS_V2 = 0x80,
        CLUSTER_CHANGE_GROUPSET_HANDLE_CLOSE_v2 = 0x100,
        CLUSTER_CHANGE_GROUPSET_ALL_V2 = ( ( ( ( ( ( ( ( CLUSTER_CHANGE_GROUPSET_DELETED_v2 | CLUSTER_CHANGE_GROUPSET_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_GROUPSET_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_GROUPSET_STATE_V2 ) | CLUSTER_CHANGE_GROUPSET_GROUP_ADDED ) | CLUSTER_CHANGE_GROUPSET_GROUP_REMOVED ) | CLUSTER_CHANGE_GROUPSET_DEPENDENCIES_V2 ) | CLUSTER_CHANGE_GROUPSET_DEPENDENTS_V2 ) | CLUSTER_CHANGE_GROUPSET_HANDLE_CLOSE_v2 )
    } CLUSTER_CHANGE_GROUPSET_V2;
typedef
enum CLUSTER_CHANGE_RESOURCE_V2
    {
        CLUSTER_CHANGE_RESOURCE_COMMON_PROPERTY_V2 = 0x1,
        CLUSTER_CHANGE_RESOURCE_PRIVATE_PROPERTY_V2 = 0x2,
        CLUSTER_CHANGE_RESOURCE_STATE_V2 = 0x4,
        CLUSTER_CHANGE_RESOURCE_OWNER_GROUP_V2 = 0x8,
        CLUSTER_CHANGE_RESOURCE_DEPENDENCIES_V2 = 0x10,
        CLUSTER_CHANGE_RESOURCE_DEPENDENTS_V2 = 0x20,
        CLUSTER_CHANGE_RESOURCE_POSSIBLE_OWNERS_V2 = 0x40,
        CLUSTER_CHANGE_RESOURCE_DELETED_V2 = 0x80,
        CLUSTER_CHANGE_RESOURCE_DLL_UPGRADED_V2 = 0x100,
        CLUSTER_CHANGE_RESOURCE_HANDLE_CLOSE_V2 = 0x200,
        CLUSTER_CHANGE_RESOURCE_TERMINAL_STATE_V2 = 0x400,
        CLUSTER_CHANGE_RESOURCE_ALL_V2 = ( ( ( ( ( ( ( ( ( ( CLUSTER_CHANGE_RESOURCE_COMMON_PROPERTY_V2 | CLUSTER_CHANGE_RESOURCE_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_RESOURCE_STATE_V2 ) | CLUSTER_CHANGE_RESOURCE_OWNER_GROUP_V2 ) | CLUSTER_CHANGE_RESOURCE_DEPENDENCIES_V2 ) | CLUSTER_CHANGE_RESOURCE_DEPENDENTS_V2 ) | CLUSTER_CHANGE_RESOURCE_POSSIBLE_OWNERS_V2 ) | CLUSTER_CHANGE_RESOURCE_DELETED_V2 ) | CLUSTER_CHANGE_RESOURCE_DLL_UPGRADED_V2 ) | CLUSTER_CHANGE_RESOURCE_HANDLE_CLOSE_V2 ) | CLUSTER_CHANGE_RESOURCE_TERMINAL_STATE_V2 )
    } CLUSTER_CHANGE_RESOURCE_V2;
typedef
enum CLUSTER_CHANGE_RESOURCE_TYPE_V2
    {
        CLUSTER_CHANGE_RESOURCE_TYPE_DELETED_V2 = 0x1,
        CLUSTER_CHANGE_RESOURCE_TYPE_COMMON_PROPERTY_V2 = 0x2,
        CLUSTER_CHANGE_RESOURCE_TYPE_PRIVATE_PROPERTY_V2 = 0x4,
        CLUSTER_CHANGE_RESOURCE_TYPE_POSSIBLE_OWNERS_V2 = 0x8,
        CLUSTER_CHANGE_RESOURCE_TYPE_DLL_UPGRADED_V2 = 0x10,
        CLUSTER_RESOURCE_TYPE_SPECIFIC_V2 = 0x20,
        CLUSTER_CHANGE_RESOURCE_TYPE_ALL_V2 = ( ( ( ( ( CLUSTER_CHANGE_RESOURCE_TYPE_DELETED_V2 | CLUSTER_CHANGE_RESOURCE_TYPE_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_RESOURCE_TYPE_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_RESOURCE_TYPE_POSSIBLE_OWNERS_V2 ) | CLUSTER_CHANGE_RESOURCE_TYPE_DLL_UPGRADED_V2 ) | CLUSTER_RESOURCE_TYPE_SPECIFIC_V2 )
    } CLUSTER_CHANGE_RESOURCE_TYPE_V2;
typedef
enum CLUSTER_CHANGE_NETINTERFACE_V2
    {
        CLUSTER_CHANGE_NETINTERFACE_DELETED_V2 = 0x1,
        CLUSTER_CHANGE_NETINTERFACE_COMMON_PROPERTY_V2 = 0x2,
        CLUSTER_CHANGE_NETINTERFACE_PRIVATE_PROPERTY_V2 = 0x4,
        CLUSTER_CHANGE_NETINTERFACE_STATE_V2 = 0x8,
        CLUSTER_CHANGE_NETINTERFACE_HANDLE_CLOSE_V2 = 0x10,
        CLUSTER_CHANGE_NETINTERFACE_ALL_V2 = ( ( ( ( CLUSTER_CHANGE_NETINTERFACE_DELETED_V2 | CLUSTER_CHANGE_NETINTERFACE_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_NETINTERFACE_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_NETINTERFACE_STATE_V2 ) | CLUSTER_CHANGE_NETINTERFACE_HANDLE_CLOSE_V2 )
    } CLUSTER_CHANGE_NETINTERFACE_V2;
typedef
enum CLUSTER_CHANGE_NETWORK_V2
    {
        CLUSTER_CHANGE_NETWORK_DELETED_V2 = 0x1,
        CLUSTER_CHANGE_NETWORK_COMMON_PROPERTY_V2 = 0x2,
        CLUSTER_CHANGE_NETWORK_PRIVATE_PROPERTY_V2 = 0x4,
        CLUSTER_CHANGE_NETWORK_STATE_V2 = 0x8,
        CLUSTER_CHANGE_NETWORK_HANDLE_CLOSE_V2 = 0x10,
        CLUSTER_CHANGE_NETWORK_ALL_V2 = ( ( ( ( CLUSTER_CHANGE_NETWORK_DELETED_V2 | CLUSTER_CHANGE_NETWORK_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_NETWORK_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_NETWORK_STATE_V2 ) | CLUSTER_CHANGE_NETWORK_HANDLE_CLOSE_V2 )
    } CLUSTER_CHANGE_NETWORK_V2;
typedef
enum CLUSTER_CHANGE_NODE_V2
    {
        CLUSTER_CHANGE_NODE_NETINTERFACE_ADDED_V2 = 0x1,
        CLUSTER_CHANGE_NODE_DELETED_V2 = 0x2,
        CLUSTER_CHANGE_NODE_COMMON_PROPERTY_V2 = 0x4,
        CLUSTER_CHANGE_NODE_PRIVATE_PROPERTY_V2 = 0x8,
        CLUSTER_CHANGE_NODE_STATE_V2 = 0x10,
        CLUSTER_CHANGE_NODE_GROUP_GAINED_V2 = 0x20,
        CLUSTER_CHANGE_NODE_GROUP_LOST_V2 = 0x40,
        CLUSTER_CHANGE_NODE_HANDLE_CLOSE_V2 = 0x80,
        CLUSTER_CHANGE_NODE_ALL_V2 = ( ( ( ( ( ( ( CLUSTER_CHANGE_NODE_NETINTERFACE_ADDED_V2 | CLUSTER_CHANGE_NODE_DELETED_V2 ) | CLUSTER_CHANGE_NODE_COMMON_PROPERTY_V2 ) | CLUSTER_CHANGE_NODE_PRIVATE_PROPERTY_V2 ) | CLUSTER_CHANGE_NODE_STATE_V2 ) | CLUSTER_CHANGE_NODE_GROUP_GAINED_V2 ) | CLUSTER_CHANGE_NODE_GROUP_LOST_V2 ) | CLUSTER_CHANGE_NODE_HANDLE_CLOSE_V2 )
    } CLUSTER_CHANGE_NODE_V2;
typedef
enum CLUSTER_CHANGE_REGISTRY_V2
    {
        CLUSTER_CHANGE_REGISTRY_ATTRIBUTES_V2 = 0x1,
        CLUSTER_CHANGE_REGISTRY_NAME_V2 = 0x2,
        CLUSTER_CHANGE_REGISTRY_SUBTREE_V2 = 0x4,
        CLUSTER_CHANGE_REGISTRY_VALUE_V2 = 0x8,
        CLUSTER_CHANGE_REGISTRY_HANDLE_CLOSE_V2 = 0x10,
        CLUSTER_CHANGE_REGISTRY_ALL_V2 = ( ( ( ( CLUSTER_CHANGE_REGISTRY_ATTRIBUTES_V2 | CLUSTER_CHANGE_REGISTRY_NAME_V2 ) | CLUSTER_CHANGE_REGISTRY_SUBTREE_V2 ) | CLUSTER_CHANGE_REGISTRY_VALUE_V2 ) | CLUSTER_CHANGE_REGISTRY_HANDLE_CLOSE_V2 )
    } CLUSTER_CHANGE_REGISTRY_V2;
typedef
enum CLUSTER_CHANGE_QUORUM_V2
    {
        CLUSTER_CHANGE_QUORUM_STATE_V2 = 0x1,
        CLUSTER_CHANGE_QUORUM_ALL_V2 = CLUSTER_CHANGE_QUORUM_STATE_V2
    } CLUSTER_CHANGE_QUORUM_V2;
typedef
enum CLUSTER_CHANGE_SHARED_VOLUME_V2
    {
        CLUSTER_CHANGE_SHARED_VOLUME_STATE_V2 = 0x1,
        CLUSTER_CHANGE_SHARED_VOLUME_ADDED_V2 = 0x2,
        CLUSTER_CHANGE_SHARED_VOLUME_REMOVED_V2 = 0x4,
        CLUSTER_CHANGE_SHARED_VOLUME_ALL_V2 = ( ( CLUSTER_CHANGE_SHARED_VOLUME_STATE_V2 | CLUSTER_CHANGE_SHARED_VOLUME_ADDED_V2 ) | CLUSTER_CHANGE_SHARED_VOLUME_REMOVED_V2 )
    } CLUSTER_CHANGE_SHARED_VOLUME_V2;
typedef
enum CLUSTER_CHANGE_SPACEPORT_V2
    {
        CLUSTER_CHANGE_SPACEPORT_CUSTOM_PNP_V2 = 0x1
    } CLUSTER_CHANGE_SPACEPORT_V2;
typedef
enum CLUSTER_CHANGE_NODE_UPGRADE_PHASE_V2
    {
        CLUSTER_CHANGE_UPGRADE_NODE_PREPARE = 0x1,
        CLUSTER_CHANGE_UPGRADE_NODE_COMMIT = 0x2,
        CLUSTER_CHANGE_UPGRADE_NODE_POSTCOMMIT = 0x4,
        CLUSTER_CHANGE_UPGRADE_ALL = ( ( CLUSTER_CHANGE_UPGRADE_NODE_PREPARE | CLUSTER_CHANGE_UPGRADE_NODE_COMMIT ) | CLUSTER_CHANGE_UPGRADE_NODE_POSTCOMMIT )
    } CLUSTER_CHANGE_NODE_UPGRADE_PHASE_V2;
typedef
enum CLUSTER_OBJECT_TYPE
    {
        CLUSTER_OBJECT_TYPE_NONE = 0,
        CLUSTER_OBJECT_TYPE_CLUSTER = 0x1,
        CLUSTER_OBJECT_TYPE_GROUP = 0x2,
        CLUSTER_OBJECT_TYPE_RESOURCE = 0x3,
        CLUSTER_OBJECT_TYPE_RESOURCE_TYPE = 0x4,
        CLUSTER_OBJECT_TYPE_NETWORK_INTERFACE = 0x5,
        CLUSTER_OBJECT_TYPE_NETWORK = 0x6,
        CLUSTER_OBJECT_TYPE_NODE = 0x7,
        CLUSTER_OBJECT_TYPE_REGISTRY = 0x8,
        CLUSTER_OBJECT_TYPE_QUORUM = 0x9,
        CLUSTER_OBJECT_TYPE_SHARED_VOLUME = 0xa,
        CLUSTER_OBJECT_TYPE_GROUPSET = 0xd
    } CLUSTER_OBJECT_TYPE;
typedef
enum CLUSTERSET_OBJECT_TYPE
    {
        CLUSTERSET_OBJECT_TYPE_NONE = 0,
        CLUSTERSET_OBJECT_TYPE_MEMBER = 0x1,
        CLUSTERSET_OBJECT_TYPE_WORKLOAD = 0x2,
        CLUSTERSET_OBJECT_TYPE_DATABASE = 0x3
    } CLUSTERSET_OBJECT_TYPE;
typedef struct _NOTIFY_FILTER_AND_TYPE
    {
    DWORD dwObjectType;
    LONGLONG FilterFlags;
    } NOTIFY_FILTER_AND_TYPE;
typedef struct _NOTIFY_FILTER_AND_TYPE *PNOTIFY_FILTER_AND_TYPE;
typedef struct _CLUSTER_MEMBERSHIP_INFO
    {
    BOOL HasQuorum;
    DWORD UpnodesSize;
    BYTE Upnodes[ 1 ];
    } CLUSTER_MEMBERSHIP_INFO;
typedef struct _CLUSTER_MEMBERSHIP_INFO *PCLUSTER_MEMBERSHIP_INFO;
typedef
enum CLUSTER_ENUM
    {
        CLUSTER_ENUM_NODE = 0x1,
        CLUSTER_ENUM_RESTYPE = 0x2,
        CLUSTER_ENUM_RESOURCE = 0x4,
        CLUSTER_ENUM_GROUP = 0x8,
        CLUSTER_ENUM_NETWORK = 0x10,
        CLUSTER_ENUM_NETINTERFACE = 0x20,
        CLUSTER_ENUM_SHARED_VOLUME_GROUP = 0x20000000,
        CLUSTER_ENUM_SHARED_VOLUME_RESOURCE = 0x40000000,
        CLUSTER_ENUM_INTERNAL_NETWORK = 0x80000000,
        CLUSTER_ENUM_ALL = ( ( ( ( ( CLUSTER_ENUM_NODE | CLUSTER_ENUM_RESTYPE ) | CLUSTER_ENUM_RESOURCE ) | CLUSTER_ENUM_GROUP ) | CLUSTER_ENUM_NETWORK ) | CLUSTER_ENUM_NETINTERFACE )
    } CLUSTER_ENUM;
typedef
enum CLUSTER_NODE_ENUM
    {
        CLUSTER_NODE_ENUM_NETINTERFACES = 0x1,
        CLUSTER_NODE_ENUM_GROUPS = 0x2,
        CLUSTER_NODE_ENUM_PREFERRED_GROUPS = 0x4,
        CLUSTER_NODE_ENUM_ALL = ( CLUSTER_NODE_ENUM_NETINTERFACES | CLUSTER_NODE_ENUM_GROUPS )
    } CLUSTER_NODE_ENUM;
typedef
enum CLUSTER_NODE_STATE
    {
        ClusterNodeStateUnknown = -1,
        ClusterNodeUp = ( ClusterNodeStateUnknown + 1 ) ,
        ClusterNodeDown = ( ClusterNodeUp + 1 ) ,
        ClusterNodePaused = ( ClusterNodeDown + 1 ) ,
        ClusterNodeJoining = ( ClusterNodePaused + 1 )
    } CLUSTER_NODE_STATE;
typedef
enum CLUSTER_STORAGENODE_STATE
    {
        ClusterStorageNodeStateUnknown = 0,
        ClusterStorageNodeUp = ( ClusterStorageNodeStateUnknown + 1 ) ,
        ClusterStorageNodeDown = ( ClusterStorageNodeUp + 1 ) ,
        ClusterStorageNodePaused = ( ClusterStorageNodeDown + 1 ) ,
        ClusterStorageNodeStarting = ( ClusterStorageNodePaused + 1 ) ,
        ClusterStorageNodeStopping = ( ClusterStorageNodeStarting + 1 )
    } CLUSTER_STORAGENODE_STATE;
typedef
enum CLUSTER_NODE_DRAIN_STATUS
    {
        NodeDrainStatusNotInitiated = 0,
        NodeDrainStatusInProgress = ( NodeDrainStatusNotInitiated + 1 ) ,
        NodeDrainStatusCompleted = ( NodeDrainStatusInProgress + 1 ) ,
        NodeDrainStatusFailed = ( NodeDrainStatusCompleted + 1 ) ,
        ClusterNodeDrainStatusCount = ( NodeDrainStatusFailed + 1 )
    } CLUSTER_NODE_DRAIN_STATUS;
typedef
enum CLUSTER_NODE_STATUS
    {
        NodeStatusNormal = 0,
        NodeStatusIsolated = 0x1,
        NodeStatusQuarantined = 0x2,
        NodeStatusDrainInProgress = 0x4,
        NodeStatusDrainCompleted = 0x8,
        NodeStatusDrainFailed = 0x10,
        NodeStatusAvoidPlacement = 0x20,
        NodeStatusMax = ( ( ( NodeStatusIsolated | NodeStatusQuarantined ) | NodeStatusDrainFailed ) | NodeStatusAvoidPlacement )
    } CLUSTER_NODE_STATUS;
typedef
enum CLUSTER_GROUP_ENUM
    {
        CLUSTER_GROUP_ENUM_CONTAINS = 0x1,
        CLUSTER_GROUP_ENUM_NODES = 0x2,
        CLUSTER_GROUP_ENUM_ALL = ( CLUSTER_GROUP_ENUM_CONTAINS | CLUSTER_GROUP_ENUM_NODES )
    } CLUSTER_GROUP_ENUM;
typedef
enum CLUSTER_GROUP_STATE
    {
        ClusterGroupStateUnknown = -1,
        ClusterGroupOnline = ( ClusterGroupStateUnknown + 1 ) ,
        ClusterGroupOffline = ( ClusterGroupOnline + 1 ) ,
        ClusterGroupFailed = ( ClusterGroupOffline + 1 ) ,
        ClusterGroupPartialOnline = ( ClusterGroupFailed + 1 ) ,
        ClusterGroupPending = ( ClusterGroupPartialOnline + 1 )
    } CLUSTER_GROUP_STATE;
typedef
enum CLUSTER_GROUP_PRIORITY
    {
        PriorityDisabled = 0,
        PriorityLow = 1000,
        PriorityMedium = 2000,
        PriorityHigh = 3000
    } CLUSTER_GROUP_PRIORITY;
typedef
enum CLUSTER_GROUP_AUTOFAILBACK_TYPE
    {
        ClusterGroupPreventFailback = 0,
        ClusterGroupAllowFailback = ( ClusterGroupPreventFailback + 1 ) ,
        ClusterGroupFailbackTypeCount = ( ClusterGroupAllowFailback + 1 )
    } CLUSTER_GROUP_AUTOFAILBACK_TYPE;
typedef enum CLUSTER_GROUP_AUTOFAILBACK_TYPE CGAFT;
typedef struct _CLUSTER_GROUP_ENUM_ITEM
    {
    DWORD dwVersion;
    DWORD cbId;
    LPWSTR lpszId;
    DWORD cbName;
    LPWSTR lpszName;
    CLUSTER_GROUP_STATE state;
    DWORD cbOwnerNode;
    LPWSTR lpszOwnerNode;
    DWORD dwFlags;
    DWORD cbProperties;
    PVOID pProperties;
    DWORD cbRoProperties;
    PVOID pRoProperties;
    } CLUSTER_GROUP_ENUM_ITEM;
typedef struct _CLUSTER_GROUP_ENUM_ITEM *PCLUSTER_GROUP_ENUM_ITEM;
typedef struct _CLUSTER_RESOURCE_ENUM_ITEM
    {
    DWORD dwVersion;
    DWORD cbId;
    LPWSTR lpszId;
    DWORD cbName;
    LPWSTR lpszName;
    DWORD cbOwnerGroupName;
    LPWSTR lpszOwnerGroupName;
    DWORD cbOwnerGroupId;
    LPWSTR lpszOwnerGroupId;
    DWORD cbProperties;
    PVOID pProperties;
    DWORD cbRoProperties;
    PVOID pRoProperties;
    } CLUSTER_RESOURCE_ENUM_ITEM;
typedef struct _CLUSTER_RESOURCE_ENUM_ITEM *PCLUSTER_RESOURCE_ENUM_ITEM;
typedef
enum CLUSTER_RESOURCE_STATE
    {
        ClusterResourceStateUnknown = -1,
        ClusterResourceInherited = ( ClusterResourceStateUnknown + 1 ) ,
        ClusterResourceInitializing = ( ClusterResourceInherited + 1 ) ,
        ClusterResourceOnline = ( ClusterResourceInitializing + 1 ) ,
        ClusterResourceOffline = ( ClusterResourceOnline + 1 ) ,
        ClusterResourceFailed = ( ClusterResourceOffline + 1 ) ,
        ClusterResourcePending = 128,
        ClusterResourceOnlinePending = ( ClusterResourcePending + 1 ) ,
        ClusterResourceOfflinePending = ( ClusterResourceOnlinePending + 1 )
    } CLUSTER_RESOURCE_STATE;
typedef
enum CLUSTER_RESOURCE_RESTART_ACTION
    {
        ClusterResourceDontRestart = 0,
        ClusterResourceRestartNoNotify = ( ClusterResourceDontRestart + 1 ) ,
        ClusterResourceRestartNotify = ( ClusterResourceRestartNoNotify + 1 ) ,
        ClusterResourceRestartActionCount = ( ClusterResourceRestartNotify + 1 )
    } CLUSTER_RESOURCE_RESTART_ACTION;
typedef enum CLUSTER_RESOURCE_RESTART_ACTION CRRA;
typedef
enum CLUSTER_RESOURCE_EMBEDDED_FAILURE_ACTION
    {
        ClusterResourceEmbeddedFailureActionNone = 0,
        ClusterResourceEmbeddedFailureActionLogOnly = 1,
        ClusterResourceEmbeddedFailureActionRecover = ( ClusterResourceEmbeddedFailureActionLogOnly + 1 )
    } CLUSTER_RESOURCE_EMBEDDED_FAILURE_ACTION;
typedef
enum CLUSTER_RESOURCE_CREATE_FLAGS
    {
        CLUSTER_RESOURCE_DEFAULT_MONITOR = 0,
        CLUSTER_RESOURCE_SEPARATE_MONITOR = 1,
        CLUSTER_RESOURCE_VALID_FLAGS = CLUSTER_RESOURCE_SEPARATE_MONITOR
    } CLUSTER_RESOURCE_CREATE_FLAGS;
typedef
enum CLUSTER_SHARED_VOLUME_SNAPSHOT_STATE
    {
        ClusterSharedVolumeSnapshotStateUnknown = 0,
        ClusterSharedVolumePrepareForHWSnapshot = ( ClusterSharedVolumeSnapshotStateUnknown + 1 ) ,
        ClusterSharedVolumeHWSnapshotCompleted = ( ClusterSharedVolumePrepareForHWSnapshot + 1 ) ,
        ClusterSharedVolumePrepareForFreeze = ( ClusterSharedVolumeHWSnapshotCompleted + 1 )
    } CLUSTER_SHARED_VOLUME_SNAPSHOT_STATE;
typedef
enum CLUSTER_PROPERTY_TYPE
    {
        CLUSPROP_TYPE_UNKNOWN = -1,
        CLUSPROP_TYPE_ENDMARK = 0,
        CLUSPROP_TYPE_LIST_VALUE = ( CLUSPROP_TYPE_ENDMARK + 1 ) ,
        CLUSPROP_TYPE_RESCLASS = ( CLUSPROP_TYPE_LIST_VALUE + 1 ) ,
        CLUSPROP_TYPE_RESERVED1 = ( CLUSPROP_TYPE_RESCLASS + 1 ) ,
        CLUSPROP_TYPE_NAME = ( CLUSPROP_TYPE_RESERVED1 + 1 ) ,
        CLUSPROP_TYPE_SIGNATURE = ( CLUSPROP_TYPE_NAME + 1 ) ,
        CLUSPROP_TYPE_SCSI_ADDRESS = ( CLUSPROP_TYPE_SIGNATURE + 1 ) ,
        CLUSPROP_TYPE_DISK_NUMBER = ( CLUSPROP_TYPE_SCSI_ADDRESS + 1 ) ,
        CLUSPROP_TYPE_PARTITION_INFO = ( CLUSPROP_TYPE_DISK_NUMBER + 1 ) ,
        CLUSPROP_TYPE_FTSET_INFO = ( CLUSPROP_TYPE_PARTITION_INFO + 1 ) ,
        CLUSPROP_TYPE_DISK_SERIALNUMBER = ( CLUSPROP_TYPE_FTSET_INFO + 1 ) ,
        CLUSPROP_TYPE_DISK_GUID = ( CLUSPROP_TYPE_DISK_SERIALNUMBER + 1 ) ,
        CLUSPROP_TYPE_DISK_SIZE = ( CLUSPROP_TYPE_DISK_GUID + 1 ) ,
        CLUSPROP_TYPE_PARTITION_INFO_EX = ( CLUSPROP_TYPE_DISK_SIZE + 1 ) ,
        CLUSPROP_TYPE_PARTITION_INFO_EX2 = ( CLUSPROP_TYPE_PARTITION_INFO_EX + 1 ) ,
        CLUSPROP_TYPE_STORAGE_DEVICE_ID_DESCRIPTOR = ( CLUSPROP_TYPE_PARTITION_INFO_EX2 + 1 ) ,
        CLUSPROP_TYPE_USER = 32768
    } CLUSTER_PROPERTY_TYPE;
typedef
enum CLUSTER_PROPERTY_FORMAT
    {
        CLUSPROP_FORMAT_UNKNOWN = 0,
        CLUSPROP_FORMAT_BINARY = ( CLUSPROP_FORMAT_UNKNOWN + 1 ) ,
        CLUSPROP_FORMAT_DWORD = ( CLUSPROP_FORMAT_BINARY + 1 ) ,
        CLUSPROP_FORMAT_SZ = ( CLUSPROP_FORMAT_DWORD + 1 ) ,
        CLUSPROP_FORMAT_EXPAND_SZ = ( CLUSPROP_FORMAT_SZ + 1 ) ,
        CLUSPROP_FORMAT_MULTI_SZ = ( CLUSPROP_FORMAT_EXPAND_SZ + 1 ) ,
        CLUSPROP_FORMAT_ULARGE_INTEGER = ( CLUSPROP_FORMAT_MULTI_SZ + 1 ) ,
        CLUSPROP_FORMAT_LONG = ( CLUSPROP_FORMAT_ULARGE_INTEGER + 1 ) ,
        CLUSPROP_FORMAT_EXPANDED_SZ = ( CLUSPROP_FORMAT_LONG + 1 ) ,
        CLUSPROP_FORMAT_SECURITY_DESCRIPTOR = ( CLUSPROP_FORMAT_EXPANDED_SZ + 1 ) ,
        CLUSPROP_FORMAT_LARGE_INTEGER = ( CLUSPROP_FORMAT_SECURITY_DESCRIPTOR + 1 ) ,
        CLUSPROP_FORMAT_WORD = ( CLUSPROP_FORMAT_LARGE_INTEGER + 1 ) ,
        CLUSPROP_FORMAT_FILETIME = ( CLUSPROP_FORMAT_WORD + 1 ) ,
        CLUSPROP_FORMAT_VALUE_LIST = ( CLUSPROP_FORMAT_FILETIME + 1 ) ,
        CLUSPROP_FORMAT_PROPERTY_LIST = ( CLUSPROP_FORMAT_VALUE_LIST + 1 ) ,
        CLUSPROP_FORMAT_USER = 32768
    } CLUSTER_PROPERTY_FORMAT;
typedef
enum CLUSTER_PROPERTY_SYNTAX
    {
        CLUSPROP_SYNTAX_ENDMARK = ( DWORD )(( ( CLUSPROP_TYPE_ENDMARK << 16 ) | CLUSPROP_FORMAT_UNKNOWN ) ),
        CLUSPROP_SYNTAX_NAME = ( DWORD )(( ( CLUSPROP_TYPE_NAME << 16 ) | CLUSPROP_FORMAT_SZ ) ),
        CLUSPROP_SYNTAX_RESCLASS = ( DWORD )(( ( CLUSPROP_TYPE_RESCLASS << 16 ) | CLUSPROP_FORMAT_DWORD ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_SZ = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_SZ ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_EXPAND_SZ = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_EXPAND_SZ ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_DWORD = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_DWORD ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_BINARY = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_BINARY ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_MULTI_SZ = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_MULTI_SZ ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_LONG = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_LONG ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_EXPANDED_SZ = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_EXPANDED_SZ ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_SECURITY_DESCRIPTOR = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_SECURITY_DESCRIPTOR ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_LARGE_INTEGER = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_LARGE_INTEGER ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_ULARGE_INTEGER = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_ULARGE_INTEGER ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_WORD = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_WORD ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_PROPERTY_LIST = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_PROPERTY_LIST ) ),
        CLUSPROP_SYNTAX_LIST_VALUE_FILETIME = ( DWORD )(( ( CLUSPROP_TYPE_LIST_VALUE << 16 ) | CLUSPROP_FORMAT_FILETIME ) ),
        CLUSPROP_SYNTAX_DISK_SIGNATURE = ( DWORD )(( ( CLUSPROP_TYPE_SIGNATURE << 16 ) | CLUSPROP_FORMAT_DWORD ) ),
        CLUSPROP_SYNTAX_SCSI_ADDRESS = ( DWORD )(( ( CLUSPROP_TYPE_SCSI_ADDRESS << 16 ) | CLUSPROP_FORMAT_DWORD ) ),
        CLUSPROP_SYNTAX_DISK_NUMBER = ( DWORD )(( ( CLUSPROP_TYPE_DISK_NUMBER << 16 ) | CLUSPROP_FORMAT_DWORD ) ),
        CLUSPROP_SYNTAX_PARTITION_INFO = ( DWORD )(( ( CLUSPROP_TYPE_PARTITION_INFO << 16 ) | CLUSPROP_FORMAT_BINARY ) ),
        CLUSPROP_SYNTAX_FTSET_INFO = ( DWORD )(( ( CLUSPROP_TYPE_FTSET_INFO << 16 ) | CLUSPROP_FORMAT_BINARY ) ),
        CLUSPROP_SYNTAX_DISK_SERIALNUMBER = ( DWORD )(( ( CLUSPROP_TYPE_DISK_SERIALNUMBER << 16 ) | CLUSPROP_FORMAT_SZ ) ),
        CLUSPROP_SYNTAX_DISK_GUID = ( DWORD )(( ( CLUSPROP_TYPE_DISK_GUID << 16 ) | CLUSPROP_FORMAT_SZ ) ),
        CLUSPROP_SYNTAX_DISK_SIZE = ( DWORD )(( ( CLUSPROP_TYPE_DISK_SIZE << 16 ) | CLUSPROP_FORMAT_ULARGE_INTEGER ) ),
        CLUSPROP_SYNTAX_PARTITION_INFO_EX = ( DWORD )(( ( CLUSPROP_TYPE_PARTITION_INFO_EX << 16 ) | CLUSPROP_FORMAT_BINARY ) ),
        CLUSPROP_SYNTAX_PARTITION_INFO_EX2 = ( DWORD )(( ( CLUSPROP_TYPE_PARTITION_INFO_EX2 << 16 ) | CLUSPROP_FORMAT_BINARY ) ),
        CLUSPROP_SYNTAX_STORAGE_DEVICE_ID_DESCRIPTOR = ( DWORD )(( ( CLUSPROP_TYPE_STORAGE_DEVICE_ID_DESCRIPTOR << 16 ) | CLUSPROP_FORMAT_BINARY ) )
    } CLUSTER_PROPERTY_SYNTAX;
typedef struct GROUP_FAILURE_INFO
    {
    DWORD dwFailoverAttemptsRemaining;
    DWORD dwFailoverPeriodRemaining;
    } GROUP_FAILURE_INFO;
typedef struct GROUP_FAILURE_INFO *PGROUP_FAILURE_INFO;
typedef struct GROUP_FAILURE_INFO_BUFFER
    {
    DWORD dwVersion;
    GROUP_FAILURE_INFO Info;
    } GROUP_FAILURE_INFO_BUFFER;
typedef struct GROUP_FAILURE_INFO_BUFFER *PGROUP_FAILURE_INFO_BUFFER;
typedef struct RESOURCE_FAILURE_INFO
    {
    DWORD dwRestartAttemptsRemaining;
    DWORD dwRestartPeriodRemaining;
    } RESOURCE_FAILURE_INFO;
typedef struct RESOURCE_FAILURE_INFO *PRESOURCE_FAILURE_INFO;
typedef struct RESOURCE_FAILURE_INFO_BUFFER
    {
    DWORD dwVersion;
    RESOURCE_FAILURE_INFO Info;
    } RESOURCE_FAILURE_INFO_BUFFER;
typedef struct RESOURCE_FAILURE_INFO_BUFFER *PRESOURCE_FAILURE_INFO_BUFFER;
typedef struct RESOURCE_TERMINAL_FAILURE_INFO_BUFFER
    {
    BOOL isTerminalFailure;
    DWORD restartPeriodRemaining;
    } RESOURCE_TERMINAL_FAILURE_INFO_BUFFER;
typedef struct RESOURCE_TERMINAL_FAILURE_INFO_BUFFER *PRESOURCE_TERMINAL_FAILURE_INFO_BUFFER;
typedef
enum CLUSTER_CONTROL_OBJECT
    {
        CLUS_OBJECT_INVALID = 0,
        CLUS_OBJECT_RESOURCE = ( CLUS_OBJECT_INVALID + 1 ) ,
        CLUS_OBJECT_RESOURCE_TYPE = ( CLUS_OBJECT_RESOURCE + 1 ) ,
        CLUS_OBJECT_GROUP = ( CLUS_OBJECT_RESOURCE_TYPE + 1 ) ,
        CLUS_OBJECT_NODE = ( CLUS_OBJECT_GROUP + 1 ) ,
        CLUS_OBJECT_NETWORK = ( CLUS_OBJECT_NODE + 1 ) ,
        CLUS_OBJECT_NETINTERFACE = ( CLUS_OBJECT_NETWORK + 1 ) ,
        CLUS_OBJECT_CLUSTER = ( CLUS_OBJECT_NETINTERFACE + 1 ) ,
        CLUS_OBJECT_GROUPSET = ( CLUS_OBJECT_CLUSTER + 1 ) ,
        CLUS_OBJECT_USER = 128
    } CLUSTER_CONTROL_OBJECT;
typedef
enum CLCTL_CODES
    {
        CLCTL_UNKNOWN = ( ( ( 0 << 0 ) | ( ( 0 + 0 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_CHARACTERISTICS = ( ( ( 0x1 << 0 ) | ( ( 0 + 1 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_FLAGS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_CLASS_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 3 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_REQUIRED_DEPENDENCIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 4 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_ARB_TIMEOUT = ( ( ( 0x1 << 0 ) | ( ( 0 + 5 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_FAILURE_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 6 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_NAME = ( ( ( 0x1 << 0 ) | ( ( 0 + 10 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_RESOURCE_TYPE = ( ( ( 0x1 << 0 ) | ( ( 0 + 11 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_NODE = ( ( ( 0x1 << 0 ) | ( ( 0 + 12 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_NETWORK = ( ( ( 0x1 << 0 ) | ( ( 0 + 13 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_ID = ( ( ( 0x1 << 0 ) | ( ( 0 + 14 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_FQDN = ( ( ( 0x1 << 0 ) | ( ( 0 + 15 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_CLUSTER_SERVICE_ACCOUNT_NAME = ( ( ( 0x1 << 0 ) | ( ( 0 + 16 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_CHECK_VOTER_EVICT = ( ( ( 0x1 << 0 ) | ( ( 0 + 17 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_CHECK_VOTER_DOWN = ( ( ( 0x1 << 0 ) | ( ( 0 + 18 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SHUTDOWN = ( ( ( 0x1 << 0 ) | ( ( 0 + 19 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_ENUM_COMMON_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 20 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_RO_COMMON_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 21 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_COMMON_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 22 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_COMMON_PROPERTIES = ( ( ( 0x2 << 0 ) | ( ( 0 + 23 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_VALIDATE_COMMON_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 24 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_COMMON_PROPERTY_FMTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 25 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_COMMON_RESOURCE_PROPERTY_FMTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 26 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_ENUM_PRIVATE_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 30 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_RO_PRIVATE_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 31 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_PRIVATE_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 32 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_PRIVATE_PROPERTIES = ( ( ( 0x2 << 0 ) | ( ( 0 + 33 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_VALIDATE_PRIVATE_PROPERTIES = ( ( ( 0x1 << 0 ) | ( ( 0 + 34 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_PRIVATE_PROPERTY_FMTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 35 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_PRIVATE_RESOURCE_PROPERTY_FMTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 36 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_ADD_REGISTRY_CHECKPOINT = ( ( ( 0x2 << 0 ) | ( ( 0 + 40 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_DELETE_REGISTRY_CHECKPOINT = ( ( ( 0x2 << 0 ) | ( ( 0 + 41 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_REGISTRY_CHECKPOINTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 42 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_ADD_CRYPTO_CHECKPOINT = ( ( ( 0x2 << 0 ) | ( ( 0 + 43 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_DELETE_CRYPTO_CHECKPOINT = ( ( ( 0x2 << 0 ) | ( ( 0 + 44 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_CRYPTO_CHECKPOINTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 45 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_RESOURCE_UPGRADE_DLL = ( ( ( 0x2 << 0 ) | ( ( 0 + 46 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_ADD_REGISTRY_CHECKPOINT_64BIT = ( ( ( 0x2 << 0 ) | ( ( 0 + 47 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_ADD_REGISTRY_CHECKPOINT_32BIT = ( ( ( 0x2 << 0 ) | ( ( 0 + 48 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_LOADBAL_PROCESS_LIST = ( ( ( 0x1 << 0 ) | ( ( 0 + 50 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_ACCOUNT_ACCESS = ( ( ( 0x2 << 0 ) | ( ( 0 + 60 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_NETWORK_NAME = ( ( ( 0x1 << 0 ) | ( ( 0 + 90 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_GET_VIRTUAL_SERVER_TOKEN = ( ( ( 0x1 << 0 ) | ( ( 0 + 91 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_REGISTER_DNS_RECORDS = ( ( ( 0x2 << 0 ) | ( ( 0 + 92 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_DNS_NAME = ( ( ( 0x1 << 0 ) | ( ( 0 + 93 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_SET_PWD_INFO = ( ( ( 0x2 << 0 ) | ( ( 0 + 94 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_DELETE_CO = ( ( ( 0x2 << 0 ) | ( ( 0 + 95 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_VALIDATE_VCO = ( ( ( 0x1 << 0 ) | ( ( 0 + 96 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_RESET_VCO = ( ( ( 0x1 << 0 ) | ( ( 0 + 97 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_REPAIR_VCO = ( ( ( 0x1 << 0 ) | ( ( 0 + 99 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_DISK_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 100 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_AVAILABLE_DISKS = ( ( ( 0x1 << 0 ) | ( ( 0 + 101 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_IS_PATH_VALID = ( ( ( 0x1 << 0 ) | ( ( 0 + 102 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_SYNC_CLUSDISK_DB = ( ( ( 0x2 << 0 ) | ( ( 0 + 103 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STORAGE_GET_DISK_NUMBER_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 104 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_QUERY_DELETE = ( ( ( 0x1 << 0 ) | ( ( 0 + 110 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_IPADDRESS_RENEW_LEASE = ( ( ( 0x2 << 0 ) | ( ( 0 + 111 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_IPADDRESS_RELEASE_LEASE = ( ( ( 0x2 << 0 ) | ( ( 0 + 112 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_QUERY_MAINTENANCE_MODE = ( ( ( 0x1 << 0 ) | ( ( 0 + 120 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_MAINTENANCE_MODE = ( ( ( 0x2 << 0 ) | ( ( 0 + 121 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STORAGE_SET_DRIVELETTER = ( ( ( 0x2 << 0 ) | ( ( 0 + 122 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STORAGE_GET_DRIVELETTERS = ( ( ( 0x1 << 0 ) | ( ( 0 + 123 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_DISK_INFO_EX = ( ( ( 0x1 << 0 ) | ( ( 0 + 124 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_AVAILABLE_DISKS_EX = ( ( ( 0x1 << 0 ) | ( ( 0 + 125 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_DISK_INFO_EX2 = ( ( ( 0x1 << 0 ) | ( ( 0 + 126 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_CLUSPORT_DISK_COUNT = ( ( ( 0x1 << 0 ) | ( ( 0 + 127 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_REMAP_DRIVELETTER = ( ( ( 0x1 << 0 ) | ( ( 0 + 128 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_DISKID = ( ( ( 0x1 << 0 ) | ( ( 0 + 129 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_IS_CLUSTERABLE = ( ( ( 0x1 << 0 ) | ( ( 0 + 130 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_REMOVE_VM_OWNERSHIP = ( ( ( 0x2 << 0 ) | ( ( 0 + 131 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STORAGE_GET_MOUNTPOINTS = ( ( ( 0x1 << 0 ) | ( ( 0 + 132 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_DIRTY = ( ( ( 0x1 << 0 ) | ( ( 0 + 134 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_SHARED_VOLUME_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 137 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_IS_CSV_FILE = ( ( ( 0x1 << 0 ) | ( ( 0 + 138 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_RESOURCEID = ( ( ( 0x1 << 0 ) | ( ( 0 + 139 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_VALIDATE_PATH = ( ( ( 0x1 << 0 ) | ( ( 0 + 140 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_VALIDATE_NETNAME = ( ( ( 0x1 << 0 ) | ( ( 0 + 141 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_VALIDATE_DIRECTORY = ( ( ( 0x1 << 0 ) | ( ( 0 + 142 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_BATCH_BLOCK_KEY = ( ( ( 0x2 << 0 ) | ( ( 0 + 143 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_BATCH_UNBLOCK_KEY = ( ( ( 0x1 << 0 ) | ( ( 0 + 144 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_FILESERVER_SHARE_ADD = ( ( ( 0x2 << 0 ) | ( ( 0 + 145 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FILESERVER_SHARE_DEL = ( ( ( 0x2 << 0 ) | ( ( 0 + 146 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FILESERVER_SHARE_MODIFY = ( ( ( 0x2 << 0 ) | ( ( 0 + 147 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FILESERVER_SHARE_REPORT = ( ( ( 0x1 << 0 ) | ( ( 0 + 148 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NETNAME_GET_OU_FOR_VCO = ( ( ( 0x2 << 0 ) | ( ( 0 + 155 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_ENABLE_SHARED_VOLUME_DIRECTIO = ( ( ( 0x2 << 0 ) | ( ( 0 + 162 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_DISABLE_SHARED_VOLUME_DIRECTIO = ( ( ( 0x2 << 0 ) | ( ( 0 + 163 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_SHARED_VOLUME_ID = ( ( ( 0x1 << 0 ) | ( ( 0 + 164 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_CSV_MAINTENANCE_MODE = ( ( ( 0x2 << 0 ) | ( ( 0 + 165 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SET_SHARED_VOLUME_BACKUP_MODE = ( ( ( 0x2 << 0 ) | ( ( 0 + 166 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STORAGE_GET_SHARED_VOLUME_PARTITION_NAMES = ( ( ( 0x1 << 0 ) | ( ( 0 + 167 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_SHARED_VOLUME_STATES = ( ( ( 0x2 << 0 ) | ( ( 0 + 168 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STORAGE_IS_SHARED_VOLUME = ( ( ( 0x1 << 0 ) | ( ( 0 + 169 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_CLUSDB_TIMESTAMP = ( ( ( 0x1 << 0 ) | ( ( 0 + 170 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_RW_MODIFY_NOOP = ( ( ( 0x2 << 0 ) | ( ( 0 + 171 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_IS_QUORUM_BLOCKED = ( ( ( 0x1 << 0 ) | ( ( 0 + 172 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_POOL_GET_DRIVE_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 173 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_GUM_LOCK_OWNER = ( ( ( 0x1 << 0 ) | ( ( 0 + 174 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_STUCK_NODES = ( ( ( 0x1 << 0 ) | ( ( 0 + 175 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_INJECT_GEM_FAULT = ( ( ( 0x1 << 0 ) | ( ( 0 + 176 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_INTRODUCE_GEM_REPAIR_DELAY = ( ( ( 0x1 << 0 ) | ( ( 0 + 177 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SEND_DUMMY_GEM_MESSAGES = ( ( ( 0x1 << 0 ) | ( ( 0 + 178 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_BLOCK_GEM_SEND_RECV = ( ( ( 0x1 << 0 ) | ( ( 0 + 179 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_GEMID_VECTOR = ( ( ( 0x1 << 0 ) | ( ( 0 + 180 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_ADD_CRYPTO_CHECKPOINT_EX = ( ( ( 0x2 << 0 ) | ( ( 0 + 181 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GROUP_GET_LAST_MOVE_TIME = ( ( ( 0x1 << 0 ) | ( ( 0 + 182 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_STORAGE_CONFIGURATION = ( ( ( 0x2 << 0 ) | ( ( 0 + 184 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_STORAGE_CONFIGURATION = ( ( ( 0x1 << 0 ) | ( ( 0 + 185 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_STORAGE_CONFIG_ATTRIBUTES = ( ( ( 0x1 << 0 ) | ( ( 0 + 186 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REMOVE_NODE = ( ( ( 0x2 << 0 ) | ( ( 0 + 187 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_IS_FEATURE_INSTALLED = ( ( ( 0x1 << 0 ) | ( ( 0 + 188 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_IS_S2D_FEATURE_SUPPORTED = ( ( ( 0x1 << 0 ) | ( ( 0 + 189 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_PHYSICAL_DISK_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 190 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_CLUSBFLT_PATHS = ( ( ( 0x1 << 0 ) | ( ( 0 + 191 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_CLUSBFLT_PATHINFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 192 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_CLEAR_NODE_CONNECTION_INFO = ( ( ( 0x2 << 0 ) | ( ( 0 + 193 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SET_DNS_DOMAIN = ( ( ( 0x2 << 0 ) | ( ( 0 + 194 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CTCTL_GET_ROUTESTATUS_BASIC = ( ( ( 0x1 << 0 ) | ( ( 0 + 195 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CTCTL_GET_ROUTESTATUS_EXTENDED = ( ( ( 0x1 << 0 ) | ( ( 0 + 196 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CTCTL_GET_FAULT_DOMAIN_STATE = ( ( ( 0x1 << 0 ) | ( ( 0 + 197 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_GET_AVAILABLE_DISKS_EX2_INT = ( ( ( 0x1 << 0 ) | ( ( 0 + 2040 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_CLOUD_WITNESS_RESOURCE_TYPE_VALIDATE_CREDENTIALS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2104 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_CLOUD_WITNESS_RESOURCE_UPDATE_TOKEN = ( ( ( 0x2 << 0 ) | ( ( 0 + 2105 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_RESOURCE_PREPARE_UPGRADE = ( ( ( 0x2 << 0 ) | ( ( 0 + 2106 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_RESOURCE_UPGRADE_COMPLETED = ( ( ( 0x2 << 0 ) | ( ( 0 + 2107 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_CLOUD_WITNESS_RESOURCE_TYPE_VALIDATE_CREDENTIALS_WITH_KEY = ( ( ( 0x1 << 0 ) | ( ( 0 + 2108 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_CLOUD_WITNESS_RESOURCE_UPDATE_KEY = ( ( ( 0x2 << 0 ) | ( ( 0 + 2109 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_REPLICATION_GET_LOG_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 2129 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_ELIGIBLE_LOGDISKS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2130 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_ELIGIBLE_TARGET_DATADISKS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2131 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_ELIGIBLE_SOURCE_DATADISKS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2132 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_REPLICATED_DISKS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2133 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_REPLICA_VOLUMES = ( ( ( 0x1 << 0 ) | ( ( 0 + 2134 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_LOG_VOLUME = ( ( ( 0x1 << 0 ) | ( ( 0 + 2135 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_RESOURCE_GROUP = ( ( ( 0x1 << 0 ) | ( ( 0 + 2136 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_REPLICATION_GET_REPLICATED_PARTITION_INFO = ( ( ( 0x1 << 0 ) | ( ( 0 + 2137 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_STATE_CHANGE_TIME = ( ( ( 0x1 << 0 ) | ( ( 0 + 2903 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_CLUSTER_S2D_ENABLED = ( ( ( 0x2 << 0 ) | ( ( 0 + 2904 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SET_CLUSTER_S2D_CACHE_METADATA_RESERVE_BYTES = ( ( ( 0x2 << 0 ) | ( ( 0 + 2907 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GROUPSET_GET_GROUPS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2908 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GROUPSET_GET_PROVIDER_GROUPS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2909 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GROUPSET_GET_PROVIDER_GROUPSETS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2910 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GROUP_GET_PROVIDER_GROUPS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2911 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GROUP_GET_PROVIDER_GROUPSETS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2912 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GROUP_SET_CCF_FROM_MASTER = ( ( ( 0x2 << 0 ) | ( ( 0 + 2913 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_GET_INFRASTRUCTURE_SOFS_BUFFER = ( ( ( 0x1 << 0 ) | ( ( 0 + 2914 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_SET_INFRASTRUCTURE_SOFS_BUFFER = ( ( ( 0x2 << 0 ) | ( ( 0 + 2915 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_NOTIFY_INFRASTRUCTURE_SOFS_CHANGED = ( ( ( 0x2 << 0 ) | ( ( 0 + 2916 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SCALEOUT_COMMAND = ( ( ( 0x2 << 0 ) | ( ( 0 + 2917 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SCALEOUT_CONTROL = ( ( ( 0x2 << 0 ) | ( ( 0 + 2918 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SCALEOUT_GET_CLUSTERS = ( ( ( 0x1 << 0 ) | ( ( 0 + 2919 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_RELOAD_AUTOLOGGER_CONFIG = ( ( ( 0x2 << 0 ) | ( ( 0 + 2932 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_RENAME_SHARED_VOLUME = ( ( ( 0x2 << 0 ) | ( ( 0 + 2933 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_STORAGE_RENAME_SHARED_VOLUME_GUID = ( ( ( 0x2 << 0 ) | ( ( 0 + 2934 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_DELETE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 1 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_INSTALL_NODE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 2 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_EVICT_NODE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 3 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_ADD_DEPENDENCY = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 4 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_REMOVE_DEPENDENCY = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 5 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_ADD_OWNER = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 6 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_REMOVE_OWNER = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 7 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_SET_NAME = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 9 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_CLUSTER_NAME_CHANGED = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 10 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_CLUSTER_VERSION_CHANGED = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 11 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FIXUP_ON_UPGRADE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 12 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STARTING_PHASE1 = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 13 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STARTING_PHASE2 = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 14 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_HOLD_IO = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 15 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_RESUME_IO = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 16 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FORCE_QUORUM = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 17 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_INITIALIZE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 18 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_STATE_CHANGE_REASON = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 19 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_PROVIDER_STATE_CHANGE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 20 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_LEAVING_GROUP = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 21 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_JOINING_GROUP = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 22 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FSWITNESS_GET_EPOCH_INFO = ( ( ( ( 0x1 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 23 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_FSWITNESS_SET_EPOCH_INFO = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 24 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_FSWITNESS_RELEASE_LOCK = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 25 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_NETNAME_CREDS_NOTIFYCAM = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 26 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_NOTIFY_QUORUM_STATUS = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 31 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_NOTIFY_MONITOR_SHUTTING_DOWN = ( ( ( ( 0x1 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 32 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_GET_OPERATION_CONTEXT = ( ( ( ( 0x1 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 2106 ) << 2 ) ) | ( 0 << 22 ) ) ,
        CLCTL_NOTIFY_OWNER_CHANGE = ( ( ( ( 0x2 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 2120 ) << 2 ) ) | ( 0x1 << 22 ) ) ,
        CLCTL_VALIDATE_CHANGE_GROUP = ( ( ( ( 0x1 << 0 ) | ( 1 << 20 ) ) | ( ( 0 + 2121 ) << 2 ) ) | ( 0 << 22 ) )
    } CLCTL_CODES;
typedef
enum CLUSCTL_RESOURCE_CODES
    {
        CLUSCTL_RESOURCE_UNKNOWN = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_RESOURCE_GET_CHARACTERISTICS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_CHARACTERISTICS ) ,
        CLUSCTL_RESOURCE_GET_FLAGS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_FLAGS ) ,
        CLUSCTL_RESOURCE_GET_CLASS_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_CLASS_INFO ) ,
        CLUSCTL_RESOURCE_GET_REQUIRED_DEPENDENCIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_REQUIRED_DEPENDENCIES ) ,
        CLUSCTL_RESOURCE_GET_NAME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_NAME ) ,
        CLUSCTL_RESOURCE_GET_ID = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_ID ) ,
        CLUSCTL_RESOURCE_GET_RESOURCE_TYPE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_RESOURCE_TYPE ) ,
        CLUSCTL_RESOURCE_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_RESOURCE_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS ) ,
        CLUSCTL_RESOURCE_ADD_REGISTRY_CHECKPOINT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_REGISTRY_CHECKPOINT ) ,
        CLUSCTL_RESOURCE_DELETE_REGISTRY_CHECKPOINT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_DELETE_REGISTRY_CHECKPOINT ) ,
        CLUSCTL_RESOURCE_GET_REGISTRY_CHECKPOINTS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_REGISTRY_CHECKPOINTS ) ,
        CLUSCTL_RESOURCE_ADD_CRYPTO_CHECKPOINT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_CRYPTO_CHECKPOINT ) ,
        CLUSCTL_RESOURCE_DELETE_CRYPTO_CHECKPOINT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_DELETE_CRYPTO_CHECKPOINT ) ,
        CLUSCTL_RESOURCE_ADD_CRYPTO_CHECKPOINT_EX = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_CRYPTO_CHECKPOINT_EX ) ,
        CLUSCTL_RESOURCE_GET_CRYPTO_CHECKPOINTS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_CRYPTO_CHECKPOINTS ) ,
        CLUSCTL_RESOURCE_GET_LOADBAL_PROCESS_LIST = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_LOADBAL_PROCESS_LIST ) ,
        CLUSCTL_RESOURCE_GET_NETWORK_NAME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_NETWORK_NAME ) ,
        CLUSCTL_RESOURCE_NETNAME_GET_VIRTUAL_SERVER_TOKEN = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_GET_VIRTUAL_SERVER_TOKEN ) ,
        CLUSCTL_RESOURCE_NETNAME_SET_PWD_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_SET_PWD_INFO ) ,
        CLUSCTL_RESOURCE_NETNAME_DELETE_CO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_DELETE_CO ) ,
        CLUSCTL_RESOURCE_NETNAME_VALIDATE_VCO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_VALIDATE_VCO ) ,
        CLUSCTL_RESOURCE_NETNAME_RESET_VCO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_RESET_VCO ) ,
        CLUSCTL_RESOURCE_NETNAME_REPAIR_VCO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_REPAIR_VCO ) ,
        CLUSCTL_RESOURCE_NETNAME_REGISTER_DNS_RECORDS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_REGISTER_DNS_RECORDS ) ,
        CLUSCTL_RESOURCE_GET_DNS_NAME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_DNS_NAME ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_DISK_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_DISK_INFO ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_DISK_NUMBER_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_DISK_NUMBER_INFO ) ,
        CLUSCTL_RESOURCE_STORAGE_IS_PATH_VALID = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_IS_PATH_VALID ) ,
        CLUSCTL_RESOURCE_QUERY_DELETE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_QUERY_DELETE ) ,
        CLUSCTL_RESOURCE_UPGRADE_DLL = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_RESOURCE_UPGRADE_DLL ) ,
        CLUSCTL_RESOURCE_IPADDRESS_RENEW_LEASE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_IPADDRESS_RENEW_LEASE ) ,
        CLUSCTL_RESOURCE_IPADDRESS_RELEASE_LEASE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_IPADDRESS_RELEASE_LEASE ) ,
        CLUSCTL_RESOURCE_ADD_REGISTRY_CHECKPOINT_64BIT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_REGISTRY_CHECKPOINT_64BIT ) ,
        CLUSCTL_RESOURCE_ADD_REGISTRY_CHECKPOINT_32BIT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_REGISTRY_CHECKPOINT_32BIT ) ,
        CLUSCTL_RESOURCE_QUERY_MAINTENANCE_MODE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_QUERY_MAINTENANCE_MODE ) ,
        CLUSCTL_RESOURCE_SET_MAINTENANCE_MODE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_MAINTENANCE_MODE ) ,
        CLUSCTL_RESOURCE_STORAGE_SET_DRIVELETTER = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_SET_DRIVELETTER ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_DISK_INFO_EX = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_DISK_INFO_EX ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_DISK_INFO_EX2 = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_DISK_INFO_EX2 ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_MOUNTPOINTS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_MOUNTPOINTS ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_DIRTY = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_DIRTY ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_SHARED_VOLUME_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_SHARED_VOLUME_INFO ) ,
        CLUSCTL_RESOURCE_SET_CSV_MAINTENANCE_MODE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_CSV_MAINTENANCE_MODE ) ,
        CLUSCTL_RESOURCE_ENABLE_SHARED_VOLUME_DIRECTIO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ENABLE_SHARED_VOLUME_DIRECTIO ) ,
        CLUSCTL_RESOURCE_DISABLE_SHARED_VOLUME_DIRECTIO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_DISABLE_SHARED_VOLUME_DIRECTIO ) ,
        CLUSCTL_RESOURCE_SET_SHARED_VOLUME_BACKUP_MODE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_SHARED_VOLUME_BACKUP_MODE ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_SHARED_VOLUME_PARTITION_NAMES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_SHARED_VOLUME_PARTITION_NAMES ) ,
        CLUSCTL_RESOURCE_GET_FAILURE_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_FAILURE_INFO ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_DISKID = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_DISKID ) ,
        CLUSCTL_RESOURCE_STORAGE_GET_SHARED_VOLUME_STATES = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_GET_SHARED_VOLUME_STATES ) ,
        CLUSCTL_RESOURCE_STORAGE_IS_SHARED_VOLUME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_IS_SHARED_VOLUME ) ,
        CLUSCTL_RESOURCE_IS_QUORUM_BLOCKED = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_IS_QUORUM_BLOCKED ) ,
        CLUSCTL_RESOURCE_POOL_GET_DRIVE_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_POOL_GET_DRIVE_INFO ) ,
        CLUSCTL_RESOURCE_RLUA_GET_VIRTUAL_SERVER_TOKEN = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_GET_VIRTUAL_SERVER_TOKEN ) ,
        CLUSCTL_RESOURCE_RLUA_SET_PWD_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_SET_PWD_INFO ) ,
        CLUSCTL_RESOURCE_DELETE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_DELETE ) ,
        CLUSCTL_RESOURCE_INSTALL_NODE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_INSTALL_NODE ) ,
        CLUSCTL_RESOURCE_EVICT_NODE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_EVICT_NODE ) ,
        CLUSCTL_RESOURCE_ADD_DEPENDENCY = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_DEPENDENCY ) ,
        CLUSCTL_RESOURCE_REMOVE_DEPENDENCY = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_REMOVE_DEPENDENCY ) ,
        CLUSCTL_RESOURCE_ADD_OWNER = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_ADD_OWNER ) ,
        CLUSCTL_RESOURCE_REMOVE_OWNER = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_REMOVE_OWNER ) ,
        CLUSCTL_RESOURCE_SET_NAME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_NAME ) ,
        CLUSCTL_RESOURCE_CLUSTER_NAME_CHANGED = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_CLUSTER_NAME_CHANGED ) ,
        CLUSCTL_RESOURCE_CLUSTER_VERSION_CHANGED = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_CLUSTER_VERSION_CHANGED ) ,
        CLUSCTL_RESOURCE_FORCE_QUORUM = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_FORCE_QUORUM ) ,
        CLUSCTL_RESOURCE_INITIALIZE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_INITIALIZE ) ,
        CLUSCTL_RESOURCE_STATE_CHANGE_REASON = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STATE_CHANGE_REASON ) ,
        CLUSCTL_RESOURCE_PROVIDER_STATE_CHANGE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_PROVIDER_STATE_CHANGE ) ,
        CLUSCTL_RESOURCE_LEAVING_GROUP = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_LEAVING_GROUP ) ,
        CLUSCTL_RESOURCE_JOINING_GROUP = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_JOINING_GROUP ) ,
        CLUSCTL_RESOURCE_FSWITNESS_GET_EPOCH_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_FSWITNESS_GET_EPOCH_INFO ) ,
        CLUSCTL_RESOURCE_FSWITNESS_SET_EPOCH_INFO = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_FSWITNESS_SET_EPOCH_INFO ) ,
        CLUSCTL_RESOURCE_FSWITNESS_RELEASE_LOCK = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_FSWITNESS_RELEASE_LOCK ) ,
        CLUSCTL_RESOURCE_NETNAME_CREDS_NOTIFYCAM = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NETNAME_CREDS_NOTIFYCAM ) ,
        CLUSCTL_RESOURCE_GET_OPERATION_CONTEXT = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_OPERATION_CONTEXT ) ,
        CLUSCTL_RESOURCE_RW_MODIFY_NOOP = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_RW_MODIFY_NOOP ) ,
        CLUSCTL_RESOURCE_NOTIFY_QUORUM_STATUS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NOTIFY_QUORUM_STATUS ) ,
        CLUSCTL_RESOURCE_NOTIFY_OWNER_CHANGE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_NOTIFY_OWNER_CHANGE ) ,
        CLUSCTL_RESOURCE_VALIDATE_CHANGE_GROUP = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_VALIDATE_CHANGE_GROUP ) ,
        CLUSCTL_RESOURCE_STORAGE_RENAME_SHARED_VOLUME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_RENAME_SHARED_VOLUME ) ,
        CLUSCTL_RESOURCE_STORAGE_RENAME_SHARED_VOLUME_GUID = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_RENAME_SHARED_VOLUME_GUID ) ,
        CLUSCTL_CLOUD_WITNESS_RESOURCE_UPDATE_TOKEN = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_CLOUD_WITNESS_RESOURCE_UPDATE_TOKEN ) ,
        CLUSCTL_CLOUD_WITNESS_RESOURCE_UPDATE_KEY = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_CLOUD_WITNESS_RESOURCE_UPDATE_KEY ) ,
        CLUSCTL_RESOURCE_PREPARE_UPGRADE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_RESOURCE_PREPARE_UPGRADE ) ,
        CLUSCTL_RESOURCE_UPGRADE_COMPLETED = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_RESOURCE_UPGRADE_COMPLETED ) ,
        CLUSCTL_RESOURCE_GET_STATE_CHANGE_TIME = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_STATE_CHANGE_TIME ) ,
        CLUSCTL_RESOURCE_GET_INFRASTRUCTURE_SOFS_BUFFER = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_GET_INFRASTRUCTURE_SOFS_BUFFER ) ,
        CLUSCTL_RESOURCE_SET_INFRASTRUCTURE_SOFS_BUFFER = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SET_INFRASTRUCTURE_SOFS_BUFFER ) ,
        CLUSCTL_RESOURCE_SCALEOUT_COMMAND = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SCALEOUT_COMMAND ) ,
        CLUSCTL_RESOURCE_SCALEOUT_CONTROL = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SCALEOUT_CONTROL ) ,
        CLUSCTL_RESOURCE_SCALEOUT_GET_CLUSTERS = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_SCALEOUT_GET_CLUSTERS )
    } CLUSCTL_RESOURCE_CODES;
typedef
enum CLUSCTL_RESOURCE_TYPE_CODES
    {
        CLUSCTL_RESOURCE_TYPE_UNKNOWN = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_RESOURCE_TYPE_GET_CHARACTERISTICS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_CHARACTERISTICS ) ,
        CLUSCTL_RESOURCE_TYPE_GET_FLAGS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_FLAGS ) ,
        CLUSCTL_RESOURCE_TYPE_GET_CLASS_INFO = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_CLASS_INFO ) ,
        CLUSCTL_RESOURCE_TYPE_GET_REQUIRED_DEPENDENCIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_REQUIRED_DEPENDENCIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_ARB_TIMEOUT = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_ARB_TIMEOUT ) ,
        CLUSCTL_RESOURCE_TYPE_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_RESOURCE_TYPE_GET_COMMON_RESOURCE_PROPERTY_FMTS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_COMMON_RESOURCE_PROPERTY_FMTS ) ,
        CLUSCTL_RESOURCE_TYPE_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_RESOURCE_TYPE_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS ) ,
        CLUSCTL_RESOURCE_TYPE_GET_PRIVATE_RESOURCE_PROPERTY_FMTS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_PRIVATE_RESOURCE_PROPERTY_FMTS ) ,
        CLUSCTL_RESOURCE_TYPE_GET_REGISTRY_CHECKPOINTS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_REGISTRY_CHECKPOINTS ) ,
        CLUSCTL_RESOURCE_TYPE_GET_CRYPTO_CHECKPOINTS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_GET_CRYPTO_CHECKPOINTS ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_GET_AVAILABLE_DISKS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_GET_AVAILABLE_DISKS ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_SYNC_CLUSDISK_DB = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_SYNC_CLUSDISK_DB ) ,
        CLUSCTL_RESOURCE_TYPE_NETNAME_VALIDATE_NETNAME = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_NETNAME ) ,
        CLUSCTL_RESOURCE_TYPE_NETNAME_GET_OU_FOR_VCO = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_NETNAME_GET_OU_FOR_VCO ) ,
        CLUSCTL_RESOURCE_TYPE_GEN_APP_VALIDATE_PATH = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_PATH ) ,
        CLUSCTL_RESOURCE_TYPE_GEN_APP_VALIDATE_DIRECTORY = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_DIRECTORY ) ,
        CLUSCTL_RESOURCE_TYPE_GEN_SCRIPT_VALIDATE_PATH = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_PATH ) ,
        CLUSCTL_RESOURCE_TYPE_QUERY_DELETE = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_QUERY_DELETE ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_GET_DRIVELETTERS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_GET_DRIVELETTERS ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_GET_AVAILABLE_DISKS_EX = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_GET_AVAILABLE_DISKS_EX ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_REMAP_DRIVELETTER = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_REMAP_DRIVELETTER ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_GET_DISKID = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_GET_DISKID ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_GET_RESOURCEID = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_GET_RESOURCEID ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_IS_CLUSTERABLE = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_IS_CLUSTERABLE ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_REMOVE_VM_OWNERSHIP = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_REMOVE_VM_OWNERSHIP ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_IS_CSV_FILE = ( ( CLUS_OBJECT_RESOURCE << 24 ) | CLCTL_STORAGE_IS_CSV_FILE ) ,
        CLUSCTL_RESOURCE_TYPE_WITNESS_VALIDATE_PATH = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_VALIDATE_PATH ) ,
        CLUSCTL_RESOURCE_TYPE_INSTALL_NODE = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_INSTALL_NODE ) ,
        CLUSCTL_RESOURCE_TYPE_EVICT_NODE = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_EVICT_NODE ) ,
        CLUSCTL_RESOURCE_TYPE_CLUSTER_VERSION_CHANGED = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_CLUSTER_VERSION_CHANGED ) ,
        CLUSCTL_RESOURCE_TYPE_FIXUP_ON_UPGRADE = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_FIXUP_ON_UPGRADE ) ,
        CLUSCTL_RESOURCE_TYPE_STARTING_PHASE1 = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STARTING_PHASE1 ) ,
        CLUSCTL_RESOURCE_TYPE_STARTING_PHASE2 = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STARTING_PHASE2 ) ,
        CLUSCTL_RESOURCE_TYPE_HOLD_IO = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_HOLD_IO ) ,
        CLUSCTL_RESOURCE_TYPE_RESUME_IO = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_RESUME_IO ) ,
        CLUSCTL_RESOURCE_TYPE_STORAGE_GET_AVAILABLE_DISKS_EX2_INT = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_STORAGE_GET_AVAILABLE_DISKS_EX2_INT ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_ELIGIBLE_LOGDISKS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_ELIGIBLE_LOGDISKS ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_ELIGIBLE_TARGET_DATADISKS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_ELIGIBLE_TARGET_DATADISKS ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_ELIGIBLE_SOURCE_DATADISKS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_ELIGIBLE_SOURCE_DATADISKS ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_REPLICATED_DISKS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_REPLICATED_DISKS ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_REPLICA_VOLUMES = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_REPLICA_VOLUMES ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_LOG_VOLUME = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_LOG_VOLUME ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_RESOURCE_GROUP = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_RESOURCE_GROUP ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_REPLICATED_PARTITION_INFO = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_REPLICATED_PARTITION_INFO ) ,
        CLUSCTL_RESOURCE_TYPE_REPLICATION_GET_LOG_INFO = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_REPLICATION_GET_LOG_INFO ) ,
        CLUSCTL_CLOUD_WITNESS_RESOURCE_TYPE_VALIDATE_CREDENTIALS = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_CLOUD_WITNESS_RESOURCE_TYPE_VALIDATE_CREDENTIALS ) ,
        CLUSCTL_CLOUD_WITNESS_RESOURCE_TYPE_VALIDATE_CREDENTIALS_WITH_KEY = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_CLOUD_WITNESS_RESOURCE_TYPE_VALIDATE_CREDENTIALS_WITH_KEY ) ,
        CLUSCTL_RESOURCE_TYPE_PREPARE_UPGRADE = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_RESOURCE_PREPARE_UPGRADE ) ,
        CLUSCTL_RESOURCE_TYPE_UPGRADE_COMPLETED = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_RESOURCE_UPGRADE_COMPLETED ) ,
        CLUSCTL_RESOURCE_TYPE_NOTIFY_MONITOR_SHUTTING_DOWN = ( ( CLUS_OBJECT_RESOURCE_TYPE << 24 ) | CLCTL_NOTIFY_MONITOR_SHUTTING_DOWN )
    } CLUSCTL_RESOURCE_TYPE_CODES;
typedef
enum CLUSCTL_GROUP_CODES
    {
        CLUSCTL_GROUP_UNKNOWN = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_GROUP_GET_CHARACTERISTICS = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_CHARACTERISTICS ) ,
        CLUSCTL_GROUP_GET_FLAGS = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_FLAGS ) ,
        CLUSCTL_GROUP_GET_NAME = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_NAME ) ,
        CLUSCTL_GROUP_GET_ID = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_ID ) ,
        CLUSCTL_GROUP_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUP_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUP_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUP_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUP_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUP_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_GROUP_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_GROUP_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_GROUP_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_GROUP_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_GROUP_QUERY_DELETE = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_QUERY_DELETE ) ,
        CLUSCTL_GROUP_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_GROUP_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS ) ,
        CLUSCTL_GROUP_GET_FAILURE_INFO = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GET_FAILURE_INFO ) ,
        CLUSCTL_GROUP_GET_LAST_MOVE_TIME = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GROUP_GET_LAST_MOVE_TIME ) ,
        CLUSCTL_GROUP_SET_CCF_FROM_MASTER = ( ( CLUS_OBJECT_GROUP << 24 ) | CLCTL_GROUP_SET_CCF_FROM_MASTER )
    } CLUSCTL_GROUP_CODES;
typedef
enum CLUSCTL_NODE_CODES
    {
        CLUSCTL_NODE_UNKNOWN = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_NODE_GET_CHARACTERISTICS = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_CHARACTERISTICS ) ,
        CLUSCTL_NODE_GET_FLAGS = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_FLAGS ) ,
        CLUSCTL_NODE_GET_NAME = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_NAME ) ,
        CLUSCTL_NODE_GET_ID = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_ID ) ,
        CLUSCTL_NODE_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_NODE_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_NODE_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_NODE_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_NODE_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_NODE_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NODE_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NODE_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NODE_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NODE_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NODE_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_NODE_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS ) ,
        CLUSCTL_NODE_GET_CLUSTER_SERVICE_ACCOUNT_NAME = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_CLUSTER_SERVICE_ACCOUNT_NAME ) ,
        CLUSCTL_NODE_GET_STUCK_NODES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_STUCK_NODES ) ,
        CLUSCTL_NODE_INJECT_GEM_FAULT = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_INJECT_GEM_FAULT ) ,
        CLUSCTL_NODE_INTRODUCE_GEM_REPAIR_DELAY = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_INTRODUCE_GEM_REPAIR_DELAY ) ,
        CLUSCTL_NODE_SEND_DUMMY_GEM_MESSAGES = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_SEND_DUMMY_GEM_MESSAGES ) ,
        CLUSCTL_NODE_BLOCK_GEM_SEND_RECV = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_BLOCK_GEM_SEND_RECV ) ,
        CLUSCTL_NODE_GET_GEMID_VECTOR = ( ( CLUS_OBJECT_NODE << 24 ) | CLCTL_GET_GEMID_VECTOR )
    } CLUSCTL_NODE_CODES;
typedef
enum CLUSCTL_NETWORK_CODES
    {
        CLUSCTL_NETWORK_UNKNOWN = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_NETWORK_GET_CHARACTERISTICS = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_CHARACTERISTICS ) ,
        CLUSCTL_NETWORK_GET_FLAGS = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_FLAGS ) ,
        CLUSCTL_NETWORK_GET_NAME = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_NAME ) ,
        CLUSCTL_NETWORK_GET_ID = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_ID ) ,
        CLUSCTL_NETWORK_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_NETWORK_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_NETWORK_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_NETWORK_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_NETWORK_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_NETWORK_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETWORK_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETWORK_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETWORK_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETWORK_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETWORK_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_NETWORK_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_NETWORK << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS )
    } CLUSCTL_NETWORK_CODES;
typedef
enum CLUSCTL_NETINTERFACE_CODES
    {
        CLUSCTL_NETINTERFACE_UNKNOWN = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_NETINTERFACE_GET_CHARACTERISTICS = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_CHARACTERISTICS ) ,
        CLUSCTL_NETINTERFACE_GET_FLAGS = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_FLAGS ) ,
        CLUSCTL_NETINTERFACE_GET_NAME = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_NAME ) ,
        CLUSCTL_NETINTERFACE_GET_ID = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_ID ) ,
        CLUSCTL_NETINTERFACE_GET_NODE = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_NODE ) ,
        CLUSCTL_NETINTERFACE_GET_NETWORK = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_NETWORK ) ,
        CLUSCTL_NETINTERFACE_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_NETINTERFACE_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_NETINTERFACE_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_NETINTERFACE << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS )
    } CLUSCTL_NETINTERFACE_CODES;
typedef
enum CLUSCTL_CLUSTER_CODES
    {
        CLUSCTL_CLUSTER_UNKNOWN = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_UNKNOWN ) ,
        CLUSCTL_CLUSTER_GET_FQDN = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_FQDN ) ,
        CLUSCTL_CLUSTER_SET_STORAGE_CONFIGURATION = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_STORAGE_CONFIGURATION ) ,
        CLUSCTL_CLUSTER_GET_STORAGE_CONFIGURATION = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_STORAGE_CONFIGURATION ) ,
        CLUSCTL_CLUSTER_GET_STORAGE_CONFIG_ATTRIBUTES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_STORAGE_CONFIG_ATTRIBUTES ) ,
        CLUSCTL_CLUSTER_ENUM_COMMON_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_ENUM_COMMON_PROPERTIES ) ,
        CLUSCTL_CLUSTER_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_CLUSTER_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_CLUSTER_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_CLUSTER_VALIDATE_COMMON_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_VALIDATE_COMMON_PROPERTIES ) ,
        CLUSCTL_CLUSTER_ENUM_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_ENUM_PRIVATE_PROPERTIES ) ,
        CLUSCTL_CLUSTER_GET_RO_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_RO_PRIVATE_PROPERTIES ) ,
        CLUSCTL_CLUSTER_GET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_CLUSTER_SET_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_PRIVATE_PROPERTIES ) ,
        CLUSCTL_CLUSTER_VALIDATE_PRIVATE_PROPERTIES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_VALIDATE_PRIVATE_PROPERTIES ) ,
        CLUSCTL_CLUSTER_GET_COMMON_PROPERTY_FMTS = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_COMMON_PROPERTY_FMTS ) ,
        CLUSCTL_CLUSTER_GET_PRIVATE_PROPERTY_FMTS = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_PRIVATE_PROPERTY_FMTS ) ,
        CLUSCTL_CLUSTER_CHECK_VOTER_EVICT = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_CHECK_VOTER_EVICT ) ,
        CLUSCTL_CLUSTER_CHECK_VOTER_DOWN = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_CHECK_VOTER_DOWN ) ,
        CLUSCTL_CLUSTER_SHUTDOWN = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SHUTDOWN ) ,
        CLUSCTL_CLUSTER_BATCH_BLOCK_KEY = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_BATCH_BLOCK_KEY ) ,
        CLUSCTL_CLUSTER_BATCH_UNBLOCK_KEY = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_BATCH_UNBLOCK_KEY ) ,
        CLUSCTL_CLUSTER_GET_SHARED_VOLUME_ID = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_SHARED_VOLUME_ID ) ,
        CLUSCTL_CLUSTER_GET_CLUSDB_TIMESTAMP = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_CLUSDB_TIMESTAMP ) ,
        CLUSCTL_CLUSTER_GET_GUM_LOCK_OWNER = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_GET_GUM_LOCK_OWNER ) ,
        CLUSCTL_CLUSTER_REMOVE_NODE = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_REMOVE_NODE ) ,
        CLUSCTL_CLUSTER_SET_ACCOUNT_ACCESS = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_ACCOUNT_ACCESS ) ,
        CLUSCTL_CLUSTER_CLEAR_NODE_CONNECTION_INFO = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_CLEAR_NODE_CONNECTION_INFO ) ,
        CLUSCTL_CLUSTER_SET_DNS_DOMAIN = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_DNS_DOMAIN ) ,
        CLUSCTL_CLUSTER_SET_CLUSTER_S2D_ENABLED = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_CLUSTER_S2D_ENABLED ) ,
        CLUSCTL_CLUSTER_SET_CLUSTER_S2D_CACHE_METADATA_RESERVE_BYTES = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_SET_CLUSTER_S2D_CACHE_METADATA_RESERVE_BYTES ) ,
        CLUSCTL_CLUSTER_STORAGE_RENAME_SHARED_VOLUME = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_STORAGE_RENAME_SHARED_VOLUME ) ,
        CLUSCTL_CLUSTER_STORAGE_RENAME_SHARED_VOLUME_GUID = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_STORAGE_RENAME_SHARED_VOLUME_GUID ) ,
        CLUSCTL_CLUSTER_RELOAD_AUTOLOGGER_CONFIG = ( ( CLUS_OBJECT_CLUSTER << 24 ) | CLCTL_RELOAD_AUTOLOGGER_CONFIG )
    } CLUSCTL_CLUSTER_CODES;
typedef
enum CLUSCTL_GROUPSET_CODES
    {
        CLUSCTL_GROUPSET_GET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GET_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUPSET_GET_RO_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GET_RO_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUPSET_SET_COMMON_PROPERTIES = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_SET_COMMON_PROPERTIES ) ,
        CLUSCTL_GROUPSET_GET_GROUPS = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GROUPSET_GET_GROUPS ) ,
        CLUSCTL_GROUPSET_GET_PROVIDER_GROUPS = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GROUPSET_GET_PROVIDER_GROUPS ) ,
        CLUSCTL_GROUPSET_GET_PROVIDER_GROUPSETS = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GROUPSET_GET_PROVIDER_GROUPSETS ) ,
        CLUSCTL_GROUP_GET_PROVIDER_GROUPS = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GROUP_GET_PROVIDER_GROUPS ) ,
        CLUSCTL_GROUP_GET_PROVIDER_GROUPSETS = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GROUP_GET_PROVIDER_GROUPSETS ) ,
        CLUSCTL_GROUPSET_GET_ID = ( ( CLUS_OBJECT_GROUPSET << 24 ) | CLCTL_GET_ID )
    } CLUSCTL_GROUPSET_CODES;
typedef
enum CLUSTER_RESOURCE_CLASS
    {
        CLUS_RESCLASS_UNKNOWN = 0,
        CLUS_RESCLASS_STORAGE = ( CLUS_RESCLASS_UNKNOWN + 1 ) ,
        CLUS_RESCLASS_NETWORK = ( CLUS_RESCLASS_STORAGE + 1 ) ,
        CLUS_RESCLASS_USER = 32768
    } CLUSTER_RESOURCE_CLASS;
typedef
enum CLUS_RESSUBCLASS
    {
        CLUS_RESSUBCLASS_SHARED = 0x80000000
    } CLUS_RESSUBCLASS;
typedef
enum CLUS_RESSUBCLASS_STORAGE
    {
        CLUS_RESSUBCLASS_STORAGE_SHARED_BUS = 0x80000000,
        CLUS_RESSUBCLASS_STORAGE_DISK = 0x40000000,
        CLUS_RESSUBCLASS_STORAGE_REPLICATION = 0x10000000
    } CLUS_RESSUBCLASS_STORAGE;
typedef
enum CLUS_RESSUBCLASS_NETWORK
    {
        CLUS_RESSUBCLASS_NETWORK_INTERNET_PROTOCOL = 0x80000000
    } CLUS_RESSUBCLASS_NETWORK;
typedef
enum CLUS_CHARACTERISTICS
    {
        CLUS_CHAR_UNKNOWN = 0,
        CLUS_CHAR_QUORUM = 0x1,
        CLUS_CHAR_DELETE_REQUIRES_ALL_NODES = 0x2,
        CLUS_CHAR_LOCAL_QUORUM = 0x4,
        CLUS_CHAR_LOCAL_QUORUM_DEBUG = 0x8,
        CLUS_CHAR_REQUIRES_STATE_CHANGE_REASON = 0x10,
        CLUS_CHAR_BROADCAST_DELETE = 0x20,
        CLUS_CHAR_SINGLE_CLUSTER_INSTANCE = 0x40,
        CLUS_CHAR_SINGLE_GROUP_INSTANCE = 0x80,
        CLUS_CHAR_COEXIST_IN_SHARED_VOLUME_GROUP = 0x100,
        CLUS_CHAR_PLACEMENT_DATA = 0x200,
        CLUS_CHAR_MONITOR_DETACH = 0x400,
        CLUS_CHAR_MONITOR_REATTACH = 0x800,
        CLUS_CHAR_OPERATION_CONTEXT = 0x1000,
        CLUS_CHAR_CLONES = 0x2000,
        CLUS_CHAR_NOT_PREEMPTABLE = 0x4000,
        CLUS_CHAR_NOTIFY_NEW_OWNER = 0x8000,
        CLUS_CHAR_SUPPORTS_UNMONITORED_STATE = 0x10000,
        CLUS_CHAR_INFRASTRUCTURE = 0x20000
    } CLUS_CHARACTERISTICS;
typedef
enum CLUS_FLAGS
    {
        CLUS_FLAG_CORE = 0x1
    } CLUS_FLAGS;
typedef
enum CLUSPROP_PIFLAGS
    {
        CLUSPROP_PIFLAG_STICKY = 0x1,
        CLUSPROP_PIFLAG_REMOVABLE = 0x2,
        CLUSPROP_PIFLAG_USABLE = 0x4,
        CLUSPROP_PIFLAG_DEFAULT_QUORUM = 0x8,
        CLUSPROP_PIFLAG_USABLE_FOR_CSV = 0x10,
        CLUSPROP_PIFLAG_ENCRYPTION_ENABLED = 0x20,
        CLUSPROP_PIFLAG_RAW = 0x40,
        CLUSPROP_PIFLAG_UNKNOWN = 0x80000000
    } CLUSPROP_PIFLAGS;
typedef
enum CLUSTER_RESOURCE_ENUM
    {
        CLUSTER_RESOURCE_ENUM_DEPENDS = 0x1,
        CLUSTER_RESOURCE_ENUM_PROVIDES = 0x2,
        CLUSTER_RESOURCE_ENUM_NODES = 0x4,
        CLUSTER_RESOURCE_ENUM_ALL = ( ( CLUSTER_RESOURCE_ENUM_DEPENDS | CLUSTER_RESOURCE_ENUM_PROVIDES ) | CLUSTER_RESOURCE_ENUM_NODES )
    } CLUSTER_RESOURCE_ENUM;
typedef
enum CLUSTER_RESOURCE_TYPE_ENUM
    {
        CLUSTER_RESOURCE_TYPE_ENUM_NODES = 0x1,
        CLUSTER_RESOURCE_TYPE_ENUM_RESOURCES = 0x2,
        CLUSTER_RESOURCE_TYPE_ENUM_ALL = ( CLUSTER_RESOURCE_TYPE_ENUM_NODES | CLUSTER_RESOURCE_TYPE_ENUM_RESOURCES )
    } CLUSTER_RESOURCE_TYPE_ENUM;
typedef
enum CLUSTER_NETWORK_ENUM
    {
        CLUSTER_NETWORK_ENUM_NETINTERFACES = 0x1,
        CLUSTER_NETWORK_ENUM_ALL = CLUSTER_NETWORK_ENUM_NETINTERFACES
    } CLUSTER_NETWORK_ENUM;
typedef
enum CLUSTER_NETWORK_STATE
    {
        ClusterNetworkStateUnknown = -1,
        ClusterNetworkUnavailable = ( ClusterNetworkStateUnknown + 1 ) ,
        ClusterNetworkDown = ( ClusterNetworkUnavailable + 1 ) ,
        ClusterNetworkPartitioned = ( ClusterNetworkDown + 1 ) ,
        ClusterNetworkUp = ( ClusterNetworkPartitioned + 1 )
    } CLUSTER_NETWORK_STATE;
typedef
enum CLUSTER_NETWORK_ROLE
    {
        ClusterNetworkRoleNone = 0,
        ClusterNetworkRoleInternalUse = 0x1,
        ClusterNetworkRoleClientAccess = 0x2,
        ClusterNetworkRoleInternalAndClient = 0x3
    } CLUSTER_NETWORK_ROLE;
typedef
enum CLUSTER_NETINTERFACE_STATE
    {
        ClusterNetInterfaceStateUnknown = -1,
        ClusterNetInterfaceUnavailable = ( ClusterNetInterfaceStateUnknown + 1 ) ,
        ClusterNetInterfaceFailed = ( ClusterNetInterfaceUnavailable + 1 ) ,
        ClusterNetInterfaceUnreachable = ( ClusterNetInterfaceFailed + 1 ) ,
        ClusterNetInterfaceUp = ( ClusterNetInterfaceUnreachable + 1 )
    } CLUSTER_NETINTERFACE_STATE;
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msclus_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msclus_0000_0000_v0_0_s_ifspec;
typedef CLUSTER_QUORUM_TYPE _CLUSTER_QUORUM_TYPE;
typedef NODE_CLUSTER_STATE _NODE_CLUSTER_STATE;
typedef CLUSTER_RESOURCE_STATE_CHANGE_REASON _CLUSTER_RESOURCE_STATE_CHANGE_REASON;
typedef CLUSTER_CHANGE _CLUSTER_CHANGE;
typedef CLUSTER_ENUM _CLUSTER_ENUM;
typedef CLUSTER_NODE_ENUM _CLUSTER_NODE_ENUM;
typedef CLUSTER_NODE_STATE _CLUSTER_NODE_STATE;
typedef CLUSTER_GROUP_ENUM _CLUSTER_GROUP_ENUM;
typedef CLUSTER_GROUP_STATE _CLUSTER_GROUP_STATE;
typedef CLUSTER_GROUP_AUTOFAILBACK_TYPE _CLUSTER_GROUP_AUTOFAILBACK_TYPE;
typedef CLUSTER_RESOURCE_STATE _CLUSTER_RESOURCE_STATE;
typedef CLUSTER_RESOURCE_RESTART_ACTION _CLUSTER_RESOURCE_RESTART_ACTION;
typedef CLUSTER_RESOURCE_CREATE_FLAGS _CLUSTER_RESOURCE_CREATE_FLAGS;
typedef CLUSTER_PROPERTY_TYPE _CLUSTER_PROPERTY_TYPE;
typedef CLUSTER_PROPERTY_FORMAT _CLUSTER_PROPERTY_FORMAT;
typedef CLUSTER_PROPERTY_SYNTAX _CLUSTER_PROPERTY_SYNTAX;
typedef CLUSTER_CONTROL_OBJECT _CLUSTER_CONTROL_OBJECT;
typedef CLCTL_CODES _CLCTL_CODES;
typedef CLUSCTL_RESOURCE_CODES _CLUSCTL_RESOURCE_CODES;
typedef CLUSCTL_RESOURCE_TYPE_CODES _CLUSCTL_RESOURCE_TYPE_CODES;
typedef CLUSCTL_GROUP_CODES _CLUSCTL_GROUP_CODES;
typedef CLUSCTL_NODE_CODES _CLUSCTL_NODE_CODES;
typedef CLUSCTL_NETWORK_CODES _CLUSCTL_NETWORK_CODES;
typedef CLUSCTL_NETINTERFACE_CODES _CLUSCTL_NETINTERFACE_CODES;
typedef CLUSCTL_CLUSTER_CODES _CLUSCTL_CLUSTER_CODES;
typedef CLUSTER_RESOURCE_CLASS _CLUSTER_RESOURCE_CLASS;
typedef CLUS_RESSUBCLASS _CLUS_RESSUBCLASS;
typedef CLUS_CHARACTERISTICS _CLUS_CHARACTERISTICS;
typedef CLUS_FLAGS _CLUS_FLAGS;
typedef CLUSPROP_PIFLAGS _CLUSPROP_PIFLAGS;
typedef CLUSTER_RESOURCE_ENUM _CLUSTER_RESOURCE_ENUM;
typedef CLUSTER_RESOURCE_TYPE_ENUM _CLUSTER_RESOURCE_TYPE_ENUM;
typedef CLUSTER_NETWORK_ENUM _CLUSTER_NETWORK_ENUM;
typedef CLUSTER_NETWORK_STATE _CLUSTER_NETWORK_STATE;
typedef CLUSTER_NETWORK_ROLE _CLUSTER_NETWORK_ROLE;
typedef CLUSTER_NETINTERFACE_STATE _CLUSTER_NETINTERFACE_STATE;
EXTERN_C const IID LIBID_MSClusterLib;
EXTERN_C const CLSID CLSID_ClusApplication;
class DECLSPEC_UUID("f2e606e5-2631-11d1-89f1-00a0c90d061e")
ClusApplication;
EXTERN_C const CLSID CLSID_Cluster;
class DECLSPEC_UUID("f2e606e3-2631-11d1-89f1-00a0c90d061e")
Cluster;
EXTERN_C const CLSID CLSID_ClusVersion;
class DECLSPEC_UUID("f2e60715-2631-11d1-89f1-00a0c90d061e")
ClusVersion;
EXTERN_C const CLSID CLSID_ClusResType;
class DECLSPEC_UUID("f2e6070f-2631-11d1-89f1-00a0c90d061e")
ClusResType;
EXTERN_C const CLSID CLSID_ClusProperty;
class DECLSPEC_UUID("f2e606fd-2631-11d1-89f1-00a0c90d061e")
ClusProperty;
EXTERN_C const CLSID CLSID_ClusProperties;
class DECLSPEC_UUID("f2e606ff-2631-11d1-89f1-00a0c90d061e")
ClusProperties;
EXTERN_C const CLSID CLSID_DomainNames;
class DECLSPEC_UUID("f2e606e1-2631-11d1-89f1-00a0c90d061e")
DomainNames;
EXTERN_C const CLSID CLSID_ClusNetwork;
class DECLSPEC_UUID("f2e606f1-2631-11d1-89f1-00a0c90d061e")
ClusNetwork;
EXTERN_C const CLSID CLSID_ClusNetInterface;
class DECLSPEC_UUID("f2e606ed-2631-11d1-89f1-00a0c90d061e")
ClusNetInterface;
EXTERN_C const CLSID CLSID_ClusNetInterfaces;
class DECLSPEC_UUID("f2e606ef-2631-11d1-89f1-00a0c90d061e")
ClusNetInterfaces;
EXTERN_C const CLSID CLSID_ClusResDependencies;
class DECLSPEC_UUID("f2e60703-2631-11d1-89f1-00a0c90d061e")
ClusResDependencies;
EXTERN_C const CLSID CLSID_ClusResGroupResources;
class DECLSPEC_UUID("f2e606e9-2631-11d1-89f1-00a0c90d061e")
ClusResGroupResources;
EXTERN_C const CLSID CLSID_ClusResTypeResources;
class DECLSPEC_UUID("f2e60713-2631-11d1-89f1-00a0c90d061e")
ClusResTypeResources;
EXTERN_C const CLSID CLSID_ClusResGroupPreferredOwnerNodes;
class DECLSPEC_UUID("f2e606e7-2631-11d1-89f1-00a0c90d061e")
ClusResGroupPreferredOwnerNodes;
EXTERN_C const CLSID CLSID_ClusResPossibleOwnerNodes;
class DECLSPEC_UUID("f2e6070d-2631-11d1-89f1-00a0c90d061e")
ClusResPossibleOwnerNodes;
EXTERN_C const CLSID CLSID_ClusNetworks;
class DECLSPEC_UUID("f2e606f3-2631-11d1-89f1-00a0c90d061e")
ClusNetworks;
EXTERN_C const CLSID CLSID_ClusNetworkNetInterfaces;
class DECLSPEC_UUID("f2e606f5-2631-11d1-89f1-00a0c90d061e")
ClusNetworkNetInterfaces;
EXTERN_C const CLSID CLSID_ClusNodeNetInterfaces;
class DECLSPEC_UUID("f2e606fb-2631-11d1-89f1-00a0c90d061e")
ClusNodeNetInterfaces;
EXTERN_C const CLSID CLSID_ClusRefObject;
class DECLSPEC_UUID("f2e60701-2631-11d1-89f1-00a0c90d061e")
ClusRefObject;
EXTERN_C const CLSID CLSID_ClusterNames;
class DECLSPEC_UUID("f2e606eb-2631-11d1-89f1-00a0c90d061e")
ClusterNames;
EXTERN_C const CLSID CLSID_ClusNode;
class DECLSPEC_UUID("f2e606f7-2631-11d1-89f1-00a0c90d061e")
ClusNode;
EXTERN_C const CLSID CLSID_ClusNodes;
class DECLSPEC_UUID("f2e606f9-2631-11d1-89f1-00a0c90d061e")
ClusNodes;
EXTERN_C const CLSID CLSID_ClusResGroup;
class DECLSPEC_UUID("f2e60705-2631-11d1-89f1-00a0c90d061e")
ClusResGroup;
EXTERN_C const CLSID CLSID_ClusResGroups;
class DECLSPEC_UUID("f2e60707-2631-11d1-89f1-00a0c90d061e")
ClusResGroups;
EXTERN_C const CLSID CLSID_ClusResource;
class DECLSPEC_UUID("f2e60709-2631-11d1-89f1-00a0c90d061e")
ClusResource;
EXTERN_C const CLSID CLSID_ClusResources;
class DECLSPEC_UUID("f2e6070b-2631-11d1-89f1-00a0c90d061e")
ClusResources;
EXTERN_C const CLSID CLSID_ClusResTypes;
class DECLSPEC_UUID("f2e60711-2631-11d1-89f1-00a0c90d061e")
ClusResTypes;
EXTERN_C const CLSID CLSID_ClusResTypePossibleOwnerNodes;
class DECLSPEC_UUID("f2e60717-2631-11d1-89f1-00a0c90d061e")
ClusResTypePossibleOwnerNodes;
EXTERN_C const CLSID CLSID_ClusPropertyValue;
class DECLSPEC_UUID("f2e60719-2631-11d1-89f1-00a0c90d061e")
ClusPropertyValue;
EXTERN_C const CLSID CLSID_ClusPropertyValues;
class DECLSPEC_UUID("f2e6071b-2631-11d1-89f1-00a0c90d061e")
ClusPropertyValues;
EXTERN_C const CLSID CLSID_ClusPropertyValueData;
class DECLSPEC_UUID("f2e6071d-2631-11d1-89f1-00a0c90d061e")
ClusPropertyValueData;
EXTERN_C const CLSID CLSID_ClusPartition;
class DECLSPEC_UUID("f2e6071f-2631-11d1-89f1-00a0c90d061e")
ClusPartition;
EXTERN_C const CLSID CLSID_ClusPartitionEx;
class DECLSPEC_UUID("53d51d26-b51b-4a79-b2c3-5048d93a98fc")
ClusPartitionEx;
EXTERN_C const CLSID CLSID_ClusPartitions;
class DECLSPEC_UUID("f2e60721-2631-11d1-89f1-00a0c90d061e")
ClusPartitions;
EXTERN_C const CLSID CLSID_ClusDisk;
class DECLSPEC_UUID("f2e60723-2631-11d1-89f1-00a0c90d061e")
ClusDisk;
EXTERN_C const CLSID CLSID_ClusDisks;
class DECLSPEC_UUID("f2e60725-2631-11d1-89f1-00a0c90d061e")
ClusDisks;
EXTERN_C const CLSID CLSID_ClusScsiAddress;
class DECLSPEC_UUID("f2e60727-2631-11d1-89f1-00a0c90d061e")
ClusScsiAddress;
EXTERN_C const CLSID CLSID_ClusRegistryKeys;
class DECLSPEC_UUID("f2e60729-2631-11d1-89f1-00a0c90d061e")
ClusRegistryKeys;
EXTERN_C const CLSID CLSID_ClusCryptoKeys;
class DECLSPEC_UUID("f2e6072b-2631-11d1-89f1-00a0c90d061e")
ClusCryptoKeys;
EXTERN_C const CLSID CLSID_ClusResDependents;
class DECLSPEC_UUID("f2e6072d-2631-11d1-89f1-00a0c90d061e")
ClusResDependents;
EXTERN_C const IID IID_ISClusApplication;
    typedef struct ISClusApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusApplication * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusApplication * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusApplication * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusApplication * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainNames )(
            __RPC__in ISClusApplication * This,
                                __RPC__deref_out_opt ISDomainNames **ppDomains);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClusterNames )(
            __RPC__in ISClusApplication * This,
                       __RPC__in BSTR bstrDomainName,
                                __RPC__deref_out_opt ISClusterNames **ppClusters);
                               HRESULT ( STDMETHODCALLTYPE *OpenCluster )(
            __RPC__in ISClusApplication * This,
                       __RPC__in BSTR bstrClusterName,
                                __RPC__deref_out_opt ISCluster **pCluster);
        END_INTERFACE
    } ISClusApplicationVtbl;
    interface ISClusApplication
    {
        CONST_VTBL struct ISClusApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DomainNames(This,ppDomains) )
    ( (This)->lpVtbl -> get_ClusterNames(This,bstrDomainName,ppClusters) )
    ( (This)->lpVtbl -> OpenCluster(This,bstrClusterName,pCluster) )
EXTERN_C const IID IID_ISDomainNames;
    typedef struct ISDomainNamesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISDomainNames * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISDomainNames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISDomainNames * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISDomainNames * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISDomainNames * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISDomainNames * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISDomainNames * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISDomainNames * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISDomainNames * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISDomainNames * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISDomainNames * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt BSTR *pbstrDomainName);
        END_INTERFACE
    } ISDomainNamesVtbl;
    interface ISDomainNames
    {
        CONST_VTBL struct ISDomainNamesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,pbstrDomainName) )
EXTERN_C const IID IID_ISClusterNames;
    typedef struct ISClusterNamesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusterNames * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusterNames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusterNames * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusterNames * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusterNames * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusterNames * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusterNames * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusterNames * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusterNames * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusterNames * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusterNames * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt BSTR *pbstrClusterName);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
            __RPC__in ISClusterNames * This,
                                __RPC__deref_out_opt BSTR *pbstrDomainName);
        END_INTERFACE
    } ISClusterNamesVtbl;
    interface ISClusterNames
    {
        CONST_VTBL struct ISClusterNamesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,pbstrClusterName) )
    ( (This)->lpVtbl -> get_DomainName(This,pbstrDomainName) )
EXTERN_C const IID IID_ISClusRefObject;
    typedef struct ISClusRefObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusRefObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusRefObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusRefObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusRefObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusRefObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusRefObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusRefObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISClusRefObject * This,
                                __RPC__out ULONG_PTR *phandle);
        END_INTERFACE
    } ISClusRefObjectVtbl;
    interface ISClusRefObject
    {
        CONST_VTBL struct ISClusRefObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
EXTERN_C const IID IID_ISClusVersion;
    typedef struct ISClusVersionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusVersion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusVersion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusVersion * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusVersion * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusVersion * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusVersion * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusVersion * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusVersion * This,
                                __RPC__deref_out_opt BSTR *pbstrClusterName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in ISClusVersion * This,
                                __RPC__out long *pnMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in ISClusVersion * This,
                                __RPC__out long *pnMinorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_BuildNumber )(
            __RPC__in ISClusVersion * This,
                                __RPC__out SHORT *pnBuildNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
            __RPC__in ISClusVersion * This,
                                __RPC__deref_out_opt BSTR *pbstrVendorId);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSDVersion )(
            __RPC__in ISClusVersion * This,
                                __RPC__deref_out_opt BSTR *pbstrCSDVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClusterHighestVersion )(
            __RPC__in ISClusVersion * This,
                                __RPC__out long *pnClusterHighestVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClusterLowestVersion )(
            __RPC__in ISClusVersion * This,
                                __RPC__out long *pnClusterLowestVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in ISClusVersion * This,
                                __RPC__out long *pnFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_MixedVersion )(
            __RPC__in ISClusVersion * This,
                                __RPC__out VARIANT *pvarMixedVersion);
        END_INTERFACE
    } ISClusVersionVtbl;
    interface ISClusVersion
    {
        CONST_VTBL struct ISClusVersionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrClusterName) )
    ( (This)->lpVtbl -> get_MajorVersion(This,pnMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,pnMinorVersion) )
    ( (This)->lpVtbl -> get_BuildNumber(This,pnBuildNumber) )
    ( (This)->lpVtbl -> get_VendorId(This,pbstrVendorId) )
    ( (This)->lpVtbl -> get_CSDVersion(This,pbstrCSDVersion) )
    ( (This)->lpVtbl -> get_ClusterHighestVersion(This,pnClusterHighestVersion) )
    ( (This)->lpVtbl -> get_ClusterLowestVersion(This,pnClusterLowestVersion) )
    ( (This)->lpVtbl -> get_Flags(This,pnFlags) )
    ( (This)->lpVtbl -> get_MixedVersion(This,pvarMixedVersion) )
EXTERN_C const IID IID_ISCluster;
    typedef struct ISClusterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCluster * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCluster * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCluster * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISCluster * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISCluster * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISCluster * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISCluster * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                                HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISCluster * This,
                                __RPC__out ULONG_PTR *phandle);
                               HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ISCluster * This,
                       __RPC__in BSTR bstrClusterName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ISCluster * This,
                       __RPC__in BSTR bstrClusterName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusVersion **ppClusVersion);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuorumResource )(
            __RPC__in ISCluster * This,
                       __RPC__in_opt ISClusResource *pClusterResource);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuorumResource )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusResource **pClusterResource);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuorumLogSize )(
            __RPC__in ISCluster * This,
                                __RPC__out long *pnLogSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuorumLogSize )(
            __RPC__in ISCluster * This,
                       long nLogSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuorumPath )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt BSTR *ppPath);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuorumPath )(
            __RPC__in ISCluster * This,
            __RPC__in BSTR pPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Nodes )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusNodes **ppNodes);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResourceGroups )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusResGroups **ppClusterResourceGroups);
                                        HRESULT ( STDMETHODCALLTYPE *get_Resources )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusResources **ppClusterResources);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResourceTypes )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusResTypes **ppResourceTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_Networks )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusNetworks **ppNetworks);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetInterfaces )(
            __RPC__in ISCluster * This,
                                __RPC__deref_out_opt ISClusNetInterfaces **ppNetInterfaces);
        END_INTERFACE
    } ISClusterVtbl;
    interface ISCluster
    {
        CONST_VTBL struct ISClusterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
    ( (This)->lpVtbl -> Open(This,bstrClusterName) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrClusterName) )
    ( (This)->lpVtbl -> get_Version(This,ppClusVersion) )
    ( (This)->lpVtbl -> put_QuorumResource(This,pClusterResource) )
    ( (This)->lpVtbl -> get_QuorumResource(This,pClusterResource) )
    ( (This)->lpVtbl -> get_QuorumLogSize(This,pnLogSize) )
    ( (This)->lpVtbl -> put_QuorumLogSize(This,nLogSize) )
    ( (This)->lpVtbl -> get_QuorumPath(This,ppPath) )
    ( (This)->lpVtbl -> put_QuorumPath(This,pPath) )
    ( (This)->lpVtbl -> get_Nodes(This,ppNodes) )
    ( (This)->lpVtbl -> get_ResourceGroups(This,ppClusterResourceGroups) )
    ( (This)->lpVtbl -> get_Resources(This,ppClusterResources) )
    ( (This)->lpVtbl -> get_ResourceTypes(This,ppResourceTypes) )
    ( (This)->lpVtbl -> get_Networks(This,ppNetworks) )
    ( (This)->lpVtbl -> get_NetInterfaces(This,ppNetInterfaces) )
EXTERN_C const IID IID_ISClusNode;
    typedef struct ISClusNodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNode * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNode * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNode * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNode * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNode * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                                HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISClusNode * This,
                                __RPC__out ULONG_PTR *phandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_NodeID )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt BSTR *pbstrNodeID);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISClusNode * This,
                                __RPC__out CLUSTER_NODE_STATE *dwState);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in ISClusNode * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in ISClusNode * This);
                               HRESULT ( STDMETHODCALLTYPE *Evict )(
            __RPC__in ISClusNode * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResourceGroups )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISClusResGroups **ppResourceGroups);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cluster )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISCluster **ppCluster);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetInterfaces )(
            __RPC__in ISClusNode * This,
                                __RPC__deref_out_opt ISClusNodeNetInterfaces **ppClusNetInterfaces);
        END_INTERFACE
    } ISClusNodeVtbl;
    interface ISClusNode
    {
        CONST_VTBL struct ISClusNodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
    ( (This)->lpVtbl -> get_NodeID(This,pbstrNodeID) )
    ( (This)->lpVtbl -> get_State(This,dwState) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Evict(This) )
    ( (This)->lpVtbl -> get_ResourceGroups(This,ppResourceGroups) )
    ( (This)->lpVtbl -> get_Cluster(This,ppCluster) )
    ( (This)->lpVtbl -> get_NetInterfaces(This,ppClusNetInterfaces) )
EXTERN_C const IID IID_ISClusNodes;
    typedef struct ISClusNodesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNodes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNodes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNodes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNodes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNodes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNodes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNodes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusNodes * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusNodes * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusNodes * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusNodes * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNode **ppNode);
        END_INTERFACE
    } ISClusNodesVtbl;
    interface ISClusNodes
    {
        CONST_VTBL struct ISClusNodesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppNode) )
EXTERN_C const IID IID_ISClusNetwork;
    typedef struct ISClusNetworkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNetwork * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNetwork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNetwork * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNetwork * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNetwork * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNetwork * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNetwork * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                                HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISClusNetwork * This,
                                __RPC__out ULONG_PTR *phandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ISClusNetwork * This,
                       __RPC__in BSTR bstrNetworkName);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkID )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt BSTR *pbstrNetworkID);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISClusNetwork * This,
                                __RPC__out CLUSTER_NETWORK_STATE *dwState);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetInterfaces )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt ISClusNetworkNetInterfaces **ppClusNetInterfaces);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cluster )(
            __RPC__in ISClusNetwork * This,
                                __RPC__deref_out_opt ISCluster **ppCluster);
        END_INTERFACE
    } ISClusNetworkVtbl;
    interface ISClusNetwork
    {
        CONST_VTBL struct ISClusNetworkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrNetworkName) )
    ( (This)->lpVtbl -> get_NetworkID(This,pbstrNetworkID) )
    ( (This)->lpVtbl -> get_State(This,dwState) )
    ( (This)->lpVtbl -> get_NetInterfaces(This,ppClusNetInterfaces) )
    ( (This)->lpVtbl -> get_Cluster(This,ppCluster) )
EXTERN_C const IID IID_ISClusNetworks;
    typedef struct ISClusNetworksVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNetworks * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNetworks * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNetworks * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNetworks * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNetworks * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNetworks * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNetworks * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusNetworks * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusNetworks * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusNetworks * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusNetworks * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNetwork **ppClusNetwork);
        END_INTERFACE
    } ISClusNetworksVtbl;
    interface ISClusNetworks
    {
        CONST_VTBL struct ISClusNetworksVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusNetwork) )
EXTERN_C const IID IID_ISClusNetInterface;
    typedef struct ISClusNetInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNetInterface * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNetInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNetInterface * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNetInterface * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNetInterface * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNetInterface * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNetInterface * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                                HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__out ULONG_PTR *phandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__out CLUSTER_NETINTERFACE_STATE *dwState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cluster )(
            __RPC__in ISClusNetInterface * This,
                                __RPC__deref_out_opt ISCluster **ppCluster);
        END_INTERFACE
    } ISClusNetInterfaceVtbl;
    interface ISClusNetInterface
    {
        CONST_VTBL struct ISClusNetInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
    ( (This)->lpVtbl -> get_State(This,dwState) )
    ( (This)->lpVtbl -> get_Cluster(This,ppCluster) )
EXTERN_C const IID IID_ISClusNetInterfaces;
    typedef struct ISClusNetInterfacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNetInterfaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNetInterfaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNetInterfaces * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNetInterfaces * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNetInterfaces * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNetInterfaces * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNetInterfaces * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusNetInterfaces * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusNetInterfaces * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusNetInterfaces * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusNetInterfaces * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNetInterface **ppClusNetInterface);
        END_INTERFACE
    } ISClusNetInterfacesVtbl;
    interface ISClusNetInterfaces
    {
        CONST_VTBL struct ISClusNetInterfacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusNetInterface) )
EXTERN_C const IID IID_ISClusNodeNetInterfaces;
    typedef struct ISClusNodeNetInterfacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNodeNetInterfaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNodeNetInterfaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNodeNetInterfaces * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNodeNetInterfaces * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNodeNetInterfaces * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNodeNetInterfaces * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNodeNetInterfaces * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusNodeNetInterfaces * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusNodeNetInterfaces * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusNodeNetInterfaces * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusNodeNetInterfaces * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNetInterface **ppClusNetInterface);
        END_INTERFACE
    } ISClusNodeNetInterfacesVtbl;
    interface ISClusNodeNetInterfaces
    {
        CONST_VTBL struct ISClusNodeNetInterfacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusNetInterface) )
EXTERN_C const IID IID_ISClusNetworkNetInterfaces;
    typedef struct ISClusNetworkNetInterfacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusNetworkNetInterfaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusNetworkNetInterfaces * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusNetworkNetInterfaces * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusNetworkNetInterfaces * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusNetworkNetInterfaces * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNetInterface **ppClusNetInterface);
        END_INTERFACE
    } ISClusNetworkNetInterfacesVtbl;
    interface ISClusNetworkNetInterfaces
    {
        CONST_VTBL struct ISClusNetworkNetInterfacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusNetInterface) )
EXTERN_C const IID IID_ISClusResGroup;
    typedef struct ISClusResGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                                HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISClusResGroup * This,
                                __RPC__out ULONG_PTR *phandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ISClusResGroup * This,
                       __RPC__in BSTR bstrGroupName);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISClusResGroup * This,
                                __RPC__out CLUSTER_GROUP_STATE *dwState);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerNode )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusNode **ppOwnerNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Resources )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusResGroupResources **ppClusterGroupResources);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreferredOwnerNodes )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISClusResGroupPreferredOwnerNodes **ppOwnerNodes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ISClusResGroup * This);
                               HRESULT ( STDMETHODCALLTYPE *Online )(
            __RPC__in ISClusResGroup * This,
                       VARIANT varTimeout,
                                 VARIANT varNode,
                                __RPC__out VARIANT *pvarPending);
                               HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ISClusResGroup * This,
                       VARIANT varTimeout,
                                 VARIANT varNode,
                                __RPC__out VARIANT *pvarPending);
                               HRESULT ( STDMETHODCALLTYPE *Offline )(
            __RPC__in ISClusResGroup * This,
                       VARIANT varTimeout,
                                __RPC__out VARIANT *pvarPending);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cluster )(
            __RPC__in ISClusResGroup * This,
                                __RPC__deref_out_opt ISCluster **ppCluster);
        END_INTERFACE
    } ISClusResGroupVtbl;
    interface ISClusResGroup
    {
        CONST_VTBL struct ISClusResGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrGroupName) )
    ( (This)->lpVtbl -> get_State(This,dwState) )
    ( (This)->lpVtbl -> get_OwnerNode(This,ppOwnerNode) )
    ( (This)->lpVtbl -> get_Resources(This,ppClusterGroupResources) )
    ( (This)->lpVtbl -> get_PreferredOwnerNodes(This,ppOwnerNodes) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Online(This,varTimeout,varNode,pvarPending) )
    ( (This)->lpVtbl -> Move(This,varTimeout,varNode,pvarPending) )
    ( (This)->lpVtbl -> Offline(This,varTimeout,pvarPending) )
    ( (This)->lpVtbl -> get_Cluster(This,ppCluster) )
EXTERN_C const IID IID_ISClusResGroups;
    typedef struct ISClusResGroupsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResGroups * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResGroups * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResGroups * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResGroups * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResGroups * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResGroups * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResGroups * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResGroups * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResGroups * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResGroups * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResGroups * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResGroup **ppClusResGroup);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResGroups * This,
                       __RPC__in BSTR bstrResourceGroupName,
                                __RPC__deref_out_opt ISClusResGroup **ppResourceGroup);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResGroups * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResGroupsVtbl;
    interface ISClusResGroups
    {
        CONST_VTBL struct ISClusResGroupsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResGroup) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceGroupName,ppResourceGroup) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
EXTERN_C const IID IID_ISClusResource;
    typedef struct ISClusResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResource * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResource * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResource * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResource * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                                HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in ISClusResource * This,
                                __RPC__out ULONG_PTR *phandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ISClusResource * This,
                       __RPC__in BSTR bstrResourceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISClusResource * This,
                                __RPC__out CLUSTER_RESOURCE_STATE *dwState);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoreFlag )(
            __RPC__in ISClusResource * This,
                                __RPC__out CLUS_FLAGS *dwCoreFlag);
                               HRESULT ( STDMETHODCALLTYPE *BecomeQuorumResource )(
            __RPC__in ISClusResource * This,
                       __RPC__in BSTR bstrDevicePath,
                       long lMaxLogSize);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ISClusResource * This);
                               HRESULT ( STDMETHODCALLTYPE *Fail )(
            __RPC__in ISClusResource * This);
                               HRESULT ( STDMETHODCALLTYPE *Online )(
            __RPC__in ISClusResource * This,
                       long nTimeout,
                                __RPC__out VARIANT *pvarPending);
                               HRESULT ( STDMETHODCALLTYPE *Offline )(
            __RPC__in ISClusResource * This,
                       long nTimeout,
                                __RPC__out VARIANT *pvarPending);
                               HRESULT ( STDMETHODCALLTYPE *ChangeResourceGroup )(
            __RPC__in ISClusResource * This,
                       __RPC__in_opt ISClusResGroup *pResourceGroup);
                               HRESULT ( STDMETHODCALLTYPE *AddResourceNode )(
            __RPC__in ISClusResource * This,
                       __RPC__in_opt ISClusNode *pNode);
                               HRESULT ( STDMETHODCALLTYPE *RemoveResourceNode )(
            __RPC__in ISClusResource * This,
                       __RPC__in_opt ISClusNode *pNode);
                               HRESULT ( STDMETHODCALLTYPE *CanResourceBeDependent )(
            __RPC__in ISClusResource * This,
                       __RPC__in_opt ISClusResource *pResource,
                                __RPC__out VARIANT *pvarDependent);
                                        HRESULT ( STDMETHODCALLTYPE *get_PossibleOwnerNodes )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusResPossibleOwnerNodes **ppOwnerNodes);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dependencies )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusResDependencies **ppResDependencies);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dependents )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusResDependents **ppResDependents);
                                        HRESULT ( STDMETHODCALLTYPE *get_Group )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusResGroup **ppResGroup);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerNode )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusNode **ppOwnerNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cluster )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISCluster **ppCluster);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassInfo )(
            __RPC__in ISClusResource * This,
                                __RPC__out CLUSTER_RESOURCE_CLASS *prcClassInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_Disk )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusDisk **ppDisk);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegistryKeys )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusRegistryKeys **ppRegistryKeys);
                                        HRESULT ( STDMETHODCALLTYPE *get_CryptoKeys )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusCryptoKeys **ppCryptoKeys);
                                        HRESULT ( STDMETHODCALLTYPE *get_TypeName )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt BSTR *pbstrTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISClusResource * This,
                                __RPC__deref_out_opt ISClusResType **ppResourceType);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaintenanceMode )(
            __RPC__in ISClusResource * This,
                                __RPC__out BOOL *pbMaintenanceMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaintenanceMode )(
            __RPC__in ISClusResource * This,
                       BOOL bMaintenanceMode);
        END_INTERFACE
    } ISClusResourceVtbl;
    interface ISClusResource
    {
        CONST_VTBL struct ISClusResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Handle(This,phandle) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrResourceName) )
    ( (This)->lpVtbl -> get_State(This,dwState) )
    ( (This)->lpVtbl -> get_CoreFlag(This,dwCoreFlag) )
    ( (This)->lpVtbl -> BecomeQuorumResource(This,bstrDevicePath,lMaxLogSize) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Fail(This) )
    ( (This)->lpVtbl -> Online(This,nTimeout,pvarPending) )
    ( (This)->lpVtbl -> Offline(This,nTimeout,pvarPending) )
    ( (This)->lpVtbl -> ChangeResourceGroup(This,pResourceGroup) )
    ( (This)->lpVtbl -> AddResourceNode(This,pNode) )
    ( (This)->lpVtbl -> RemoveResourceNode(This,pNode) )
    ( (This)->lpVtbl -> CanResourceBeDependent(This,pResource,pvarDependent) )
    ( (This)->lpVtbl -> get_PossibleOwnerNodes(This,ppOwnerNodes) )
    ( (This)->lpVtbl -> get_Dependencies(This,ppResDependencies) )
    ( (This)->lpVtbl -> get_Dependents(This,ppResDependents) )
    ( (This)->lpVtbl -> get_Group(This,ppResGroup) )
    ( (This)->lpVtbl -> get_OwnerNode(This,ppOwnerNode) )
    ( (This)->lpVtbl -> get_Cluster(This,ppCluster) )
    ( (This)->lpVtbl -> get_ClassInfo(This,prcClassInfo) )
    ( (This)->lpVtbl -> get_Disk(This,ppDisk) )
    ( (This)->lpVtbl -> get_RegistryKeys(This,ppRegistryKeys) )
    ( (This)->lpVtbl -> get_CryptoKeys(This,ppCryptoKeys) )
    ( (This)->lpVtbl -> get_TypeName(This,pbstrTypeName) )
    ( (This)->lpVtbl -> get_Type(This,ppResourceType) )
    ( (This)->lpVtbl -> get_MaintenanceMode(This,pbMaintenanceMode) )
    ( (This)->lpVtbl -> put_MaintenanceMode(This,bMaintenanceMode) )
EXTERN_C const IID IID_ISClusResDependencies;
    typedef struct ISClusResDependenciesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResDependencies * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResDependencies * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResDependencies * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResDependencies * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResDependencies * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResDependencies * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResDependencies * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResDependencies * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResDependencies * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResDependencies * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResDependencies * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResource **ppClusResource);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResDependencies * This,
                       __RPC__in BSTR bstrResourceName,
                       __RPC__in BSTR bstrResourceType,
                       CLUSTER_RESOURCE_CREATE_FLAGS dwFlags,
                                __RPC__deref_out_opt ISClusResource **ppClusterResource);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResDependencies * This,
                       VARIANT varIndex);
                               HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ISClusResDependencies * This,
                       __RPC__in_opt ISClusResource *pResource);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusResDependencies * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResDependenciesVtbl;
    interface ISClusResDependencies
    {
        CONST_VTBL struct ISClusResDependenciesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResource) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceName,bstrResourceType,dwFlags,ppClusterResource) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
    ( (This)->lpVtbl -> AddItem(This,pResource) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
EXTERN_C const IID IID_ISClusResGroupResources;
    typedef struct ISClusResGroupResourcesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResGroupResources * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResGroupResources * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResGroupResources * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResGroupResources * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResGroupResources * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResGroupResources * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResGroupResources * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResGroupResources * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResGroupResources * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResGroupResources * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResGroupResources * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResource **ppClusResource);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResGroupResources * This,
                       __RPC__in BSTR bstrResourceName,
                       __RPC__in BSTR bstrResourceType,
                       CLUSTER_RESOURCE_CREATE_FLAGS dwFlags,
                                __RPC__deref_out_opt ISClusResource **ppClusterResource);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResGroupResources * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResGroupResourcesVtbl;
    interface ISClusResGroupResources
    {
        CONST_VTBL struct ISClusResGroupResourcesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResource) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceName,bstrResourceType,dwFlags,ppClusterResource) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
EXTERN_C const IID IID_ISClusResTypeResources;
    typedef struct ISClusResTypeResourcesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResTypeResources * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResTypeResources * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResTypeResources * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResTypeResources * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResTypeResources * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResTypeResources * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResTypeResources * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResTypeResources * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResTypeResources * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResTypeResources * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResTypeResources * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResource **ppClusResource);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResTypeResources * This,
                       __RPC__in BSTR bstrResourceName,
                       __RPC__in BSTR bstrGroupName,
                       CLUSTER_RESOURCE_CREATE_FLAGS dwFlags,
                                __RPC__deref_out_opt ISClusResource **ppClusterResource);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResTypeResources * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResTypeResourcesVtbl;
    interface ISClusResTypeResources
    {
        CONST_VTBL struct ISClusResTypeResourcesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResource) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceName,bstrGroupName,dwFlags,ppClusterResource) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
EXTERN_C const IID IID_ISClusResources;
    typedef struct ISClusResourcesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResources * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResources * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResources * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResources * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResources * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResources * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResources * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResources * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResources * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResources * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResources * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResource **ppClusResource);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResources * This,
                       __RPC__in BSTR bstrResourceName,
                       __RPC__in BSTR bstrResourceType,
                       __RPC__in BSTR bstrGroupName,
                       CLUSTER_RESOURCE_CREATE_FLAGS dwFlags,
                                __RPC__deref_out_opt ISClusResource **ppClusterResource);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResources * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResourcesVtbl;
    interface ISClusResources
    {
        CONST_VTBL struct ISClusResourcesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResource) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceName,bstrResourceType,bstrGroupName,dwFlags,ppClusterResource) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
EXTERN_C const IID IID_ISClusResGroupPreferredOwnerNodes;
    typedef struct ISClusResGroupPreferredOwnerNodesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResGroupPreferredOwnerNodes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNode **ppNode);
                               HRESULT ( STDMETHODCALLTYPE *InsertItem )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       __RPC__in_opt ISClusNode *pNode,
                       long nPosition);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       VARIANT varIndex);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                                __RPC__out VARIANT *pvarModified);
                               HRESULT ( STDMETHODCALLTYPE *SaveChanges )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This);
                               HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ISClusResGroupPreferredOwnerNodes * This,
                       __RPC__in_opt ISClusNode *pNode);
        END_INTERFACE
    } ISClusResGroupPreferredOwnerNodesVtbl;
    interface ISClusResGroupPreferredOwnerNodes
    {
        CONST_VTBL struct ISClusResGroupPreferredOwnerNodesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppNode) )
    ( (This)->lpVtbl -> InsertItem(This,pNode,nPosition) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
    ( (This)->lpVtbl -> get_Modified(This,pvarModified) )
    ( (This)->lpVtbl -> SaveChanges(This) )
    ( (This)->lpVtbl -> AddItem(This,pNode) )
EXTERN_C const IID IID_ISClusResPossibleOwnerNodes;
    typedef struct ISClusResPossibleOwnerNodesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResPossibleOwnerNodes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResPossibleOwnerNodes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResPossibleOwnerNodes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResPossibleOwnerNodes * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNode **ppNode);
                               HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                       __RPC__in_opt ISClusNode *pNode);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                       VARIANT varIndex);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in ISClusResPossibleOwnerNodes * This,
                                __RPC__out VARIANT *pvarModified);
        END_INTERFACE
    } ISClusResPossibleOwnerNodesVtbl;
    interface ISClusResPossibleOwnerNodes
    {
        CONST_VTBL struct ISClusResPossibleOwnerNodesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppNode) )
    ( (This)->lpVtbl -> AddItem(This,pNode) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
    ( (This)->lpVtbl -> get_Modified(This,pvarModified) )
EXTERN_C const IID IID_ISClusResTypePossibleOwnerNodes;
    typedef struct ISClusResTypePossibleOwnerNodesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResTypePossibleOwnerNodes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResTypePossibleOwnerNodes * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusNode **ppNode);
        END_INTERFACE
    } ISClusResTypePossibleOwnerNodesVtbl;
    interface ISClusResTypePossibleOwnerNodes
    {
        CONST_VTBL struct ISClusResTypePossibleOwnerNodesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppNode) )
EXTERN_C const IID IID_ISClusResType;
    typedef struct ISClusResTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResType * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResType * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResType * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonProperties )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateProperties )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_CommonROProperties )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateROProperties )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusProperties **ppProperties);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ISClusResType * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cluster )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISCluster **ppCluster);
                                        HRESULT ( STDMETHODCALLTYPE *get_Resources )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusResTypeResources **ppClusterResTypeResources);
                                        HRESULT ( STDMETHODCALLTYPE *get_PossibleOwnerNodes )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusResTypePossibleOwnerNodes **ppOwnerNodes);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvailableDisks )(
            __RPC__in ISClusResType * This,
                                __RPC__deref_out_opt ISClusDisks **ppAvailableDisks);
        END_INTERFACE
    } ISClusResTypeVtbl;
    interface ISClusResType
    {
        CONST_VTBL struct ISClusResTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CommonProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_CommonROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_PrivateROProperties(This,ppProperties) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_Cluster(This,ppCluster) )
    ( (This)->lpVtbl -> get_Resources(This,ppClusterResTypeResources) )
    ( (This)->lpVtbl -> get_PossibleOwnerNodes(This,ppOwnerNodes) )
    ( (This)->lpVtbl -> get_AvailableDisks(This,ppAvailableDisks) )
EXTERN_C const IID IID_ISClusResTypes;
    typedef struct ISClusResTypesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResTypes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResTypes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResTypes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResTypes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResTypes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResTypes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResTypes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResTypes * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResTypes * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResTypes * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResTypes * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResType **ppClusResType);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResTypes * This,
                       __RPC__in BSTR bstrResourceTypeName,
                       __RPC__in BSTR bstrDisplayName,
                       __RPC__in BSTR bstrResourceTypeDll,
                       long dwLooksAlivePollInterval,
                       long dwIsAlivePollInterval,
                                __RPC__deref_out_opt ISClusResType **ppResourceType);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResTypes * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResTypesVtbl;
    interface ISClusResTypes
    {
        CONST_VTBL struct ISClusResTypesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResType) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceTypeName,bstrDisplayName,bstrResourceTypeDll,dwLooksAlivePollInterval,dwIsAlivePollInterval,ppResourceType) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
EXTERN_C const IID IID_ISClusProperty;
    typedef struct ISClusPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISClusProperty * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in ISClusProperty * This,
                                __RPC__out long *pLength);
                                        HRESULT ( STDMETHODCALLTYPE *get_ValueCount )(
            __RPC__in ISClusProperty * This,
                                __RPC__out long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Values )(
            __RPC__in ISClusProperty * This,
                                __RPC__deref_out_opt ISClusPropertyValues **ppClusterPropertyValues);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ISClusProperty * This,
                                __RPC__out VARIANT *pvarValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ISClusProperty * This,
                       VARIANT varValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISClusProperty * This,
                                __RPC__out CLUSTER_PROPERTY_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in ISClusProperty * This,
                       CLUSTER_PROPERTY_TYPE Type);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISClusProperty * This,
                                __RPC__out CLUSTER_PROPERTY_FORMAT *pFormat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Format )(
            __RPC__in ISClusProperty * This,
                       CLUSTER_PROPERTY_FORMAT Format);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in ISClusProperty * This,
                                __RPC__out VARIANT *pvarReadOnly);
                                        HRESULT ( STDMETHODCALLTYPE *get_Private )(
            __RPC__in ISClusProperty * This,
                                __RPC__out VARIANT *pvarPrivate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Common )(
            __RPC__in ISClusProperty * This,
                                __RPC__out VARIANT *pvarCommon);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in ISClusProperty * This,
                                __RPC__out VARIANT *pvarModified);
                               HRESULT ( STDMETHODCALLTYPE *UseDefaultValue )(
            __RPC__in ISClusProperty * This);
        END_INTERFACE
    } ISClusPropertyVtbl;
    interface ISClusProperty
    {
        CONST_VTBL struct ISClusPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Length(This,pLength) )
    ( (This)->lpVtbl -> get_ValueCount(This,pCount) )
    ( (This)->lpVtbl -> get_Values(This,ppClusterPropertyValues) )
    ( (This)->lpVtbl -> get_Value(This,pvarValue) )
    ( (This)->lpVtbl -> put_Value(This,varValue) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> put_Type(This,Type) )
    ( (This)->lpVtbl -> get_Format(This,pFormat) )
    ( (This)->lpVtbl -> put_Format(This,Format) )
    ( (This)->lpVtbl -> get_ReadOnly(This,pvarReadOnly) )
    ( (This)->lpVtbl -> get_Private(This,pvarPrivate) )
    ( (This)->lpVtbl -> get_Common(This,pvarCommon) )
    ( (This)->lpVtbl -> get_Modified(This,pvarModified) )
    ( (This)->lpVtbl -> UseDefaultValue(This) )
EXTERN_C const IID IID_ISClusPropertyValue;
    typedef struct ISClusPropertyValueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusPropertyValue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusPropertyValue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusPropertyValue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusPropertyValue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusPropertyValue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusPropertyValue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusPropertyValue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ISClusPropertyValue * This,
                                __RPC__out VARIANT *pvarValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ISClusPropertyValue * This,
                       VARIANT varValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISClusPropertyValue * This,
                                __RPC__out CLUSTER_PROPERTY_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in ISClusPropertyValue * This,
                       CLUSTER_PROPERTY_TYPE Type);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISClusPropertyValue * This,
                                __RPC__out CLUSTER_PROPERTY_FORMAT *pFormat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Format )(
            __RPC__in ISClusPropertyValue * This,
                       CLUSTER_PROPERTY_FORMAT Format);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in ISClusPropertyValue * This,
                                __RPC__out long *pLength);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataCount )(
            __RPC__in ISClusPropertyValue * This,
                                __RPC__out long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in ISClusPropertyValue * This,
                                __RPC__deref_out_opt ISClusPropertyValueData **ppClusterPropertyValueData);
        END_INTERFACE
    } ISClusPropertyValueVtbl;
    interface ISClusPropertyValue
    {
        CONST_VTBL struct ISClusPropertyValueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,pvarValue) )
    ( (This)->lpVtbl -> put_Value(This,varValue) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> put_Type(This,Type) )
    ( (This)->lpVtbl -> get_Format(This,pFormat) )
    ( (This)->lpVtbl -> put_Format(This,Format) )
    ( (This)->lpVtbl -> get_Length(This,pLength) )
    ( (This)->lpVtbl -> get_DataCount(This,pCount) )
    ( (This)->lpVtbl -> get_Data(This,ppClusterPropertyValueData) )
EXTERN_C const IID IID_ISClusPropertyValues;
    typedef struct ISClusPropertyValuesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusPropertyValues * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusPropertyValues * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusPropertyValues * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusPropertyValues * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusPropertyValues * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusPropertyValues * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusPropertyValues * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusPropertyValues * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusPropertyValues * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusPropertyValues * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusPropertyValue **ppPropertyValue);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusPropertyValues * This,
                       __RPC__in BSTR bstrName,
                       VARIANT varValue,
                                __RPC__deref_out_opt ISClusPropertyValue **ppPropertyValue);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusPropertyValues * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusPropertyValuesVtbl;
    interface ISClusPropertyValues
    {
        CONST_VTBL struct ISClusPropertyValuesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppPropertyValue) )
    ( (This)->lpVtbl -> CreateItem(This,bstrName,varValue,ppPropertyValue) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
EXTERN_C const IID IID_ISClusProperties;
    typedef struct ISClusPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusProperties * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusProperties * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusProperties * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusProperties * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusProperty **ppClusProperty);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusProperties * This,
                       __RPC__in BSTR bstrName,
                       VARIANT varValue,
                                __RPC__deref_out_opt ISClusProperty **pProperty);
                               HRESULT ( STDMETHODCALLTYPE *UseDefaultValue )(
            __RPC__in ISClusProperties * This,
                       VARIANT varIndex);
                               HRESULT ( STDMETHODCALLTYPE *SaveChanges )(
            __RPC__in ISClusProperties * This,
                                      __RPC__out VARIANT *pvarStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in ISClusProperties * This,
                                __RPC__out VARIANT *pvarReadOnly);
                                        HRESULT ( STDMETHODCALLTYPE *get_Private )(
            __RPC__in ISClusProperties * This,
                                __RPC__out VARIANT *pvarPrivate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Common )(
            __RPC__in ISClusProperties * This,
                                __RPC__out VARIANT *pvarCommon);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in ISClusProperties * This,
                                __RPC__out VARIANT *pvarModified);
        END_INTERFACE
    } ISClusPropertiesVtbl;
    interface ISClusProperties
    {
        CONST_VTBL struct ISClusPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusProperty) )
    ( (This)->lpVtbl -> CreateItem(This,bstrName,varValue,pProperty) )
    ( (This)->lpVtbl -> UseDefaultValue(This,varIndex) )
    ( (This)->lpVtbl -> SaveChanges(This,pvarStatusCode) )
    ( (This)->lpVtbl -> get_ReadOnly(This,pvarReadOnly) )
    ( (This)->lpVtbl -> get_Private(This,pvarPrivate) )
    ( (This)->lpVtbl -> get_Common(This,pvarCommon) )
    ( (This)->lpVtbl -> get_Modified(This,pvarModified) )
EXTERN_C const IID IID_ISClusPropertyValueData;
    typedef struct ISClusPropertyValueDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusPropertyValueData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusPropertyValueData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusPropertyValueData * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusPropertyValueData * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusPropertyValueData * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusPropertyValueData * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusPropertyValueData * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusPropertyValueData * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusPropertyValueData * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusPropertyValueData * This,
                       VARIANT varIndex,
                                __RPC__out VARIANT *pvarValue);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusPropertyValueData * This,
                       VARIANT varValue,
                                __RPC__out VARIANT *pvarData);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusPropertyValueData * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusPropertyValueDataVtbl;
    interface ISClusPropertyValueData
    {
        CONST_VTBL struct ISClusPropertyValueDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,pvarValue) )
    ( (This)->lpVtbl -> CreateItem(This,varValue,pvarData) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
EXTERN_C const IID IID_ISClusPartition;
    typedef struct ISClusPartitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusPartition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusPartition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusPartition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusPartition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusPartition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusPartition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusPartition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in ISClusPartition * This,
                                __RPC__out long *plFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in ISClusPartition * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeLabel )(
            __RPC__in ISClusPartition * This,
                                __RPC__deref_out_opt BSTR *pbstrVolumeLabel);
                                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in ISClusPartition * This,
                                __RPC__out long *plSerialNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaximumComponentLength )(
            __RPC__in ISClusPartition * This,
                                __RPC__out long *plMaximumComponentLength);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemFlags )(
            __RPC__in ISClusPartition * This,
                                __RPC__out long *plFileSystemFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystem )(
            __RPC__in ISClusPartition * This,
                                __RPC__deref_out_opt BSTR *pbstrFileSystem);
        END_INTERFACE
    } ISClusPartitionVtbl;
    interface ISClusPartition
    {
        CONST_VTBL struct ISClusPartitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Flags(This,plFlags) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_VolumeLabel(This,pbstrVolumeLabel) )
    ( (This)->lpVtbl -> get_SerialNumber(This,plSerialNumber) )
    ( (This)->lpVtbl -> get_MaximumComponentLength(This,plMaximumComponentLength) )
    ( (This)->lpVtbl -> get_FileSystemFlags(This,plFileSystemFlags) )
    ( (This)->lpVtbl -> get_FileSystem(This,pbstrFileSystem) )
EXTERN_C const IID IID_ISClusPartitionEx;
    typedef struct ISClusPartitionExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusPartitionEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusPartitionEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusPartitionEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusPartitionEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusPartitionEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusPartitionEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusPartitionEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeLabel )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__deref_out_opt BSTR *pbstrVolumeLabel);
                                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plSerialNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaximumComponentLength )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plMaximumComponentLength);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemFlags )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plFileSystemFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystem )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__deref_out_opt BSTR *pbstrFileSystem);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSize )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plTotalSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSpace )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plFreeSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceNumber )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plDeviceNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_PartitionNumber )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__out long *plPartitionNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeGuid )(
            __RPC__in ISClusPartitionEx * This,
                                __RPC__deref_out_opt BSTR *pbstrVolumeGuid);
        END_INTERFACE
    } ISClusPartitionExVtbl;
    interface ISClusPartitionEx
    {
        CONST_VTBL struct ISClusPartitionExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Flags(This,plFlags) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_VolumeLabel(This,pbstrVolumeLabel) )
    ( (This)->lpVtbl -> get_SerialNumber(This,plSerialNumber) )
    ( (This)->lpVtbl -> get_MaximumComponentLength(This,plMaximumComponentLength) )
    ( (This)->lpVtbl -> get_FileSystemFlags(This,plFileSystemFlags) )
    ( (This)->lpVtbl -> get_FileSystem(This,pbstrFileSystem) )
    ( (This)->lpVtbl -> get_TotalSize(This,plTotalSize) )
    ( (This)->lpVtbl -> get_FreeSpace(This,plFreeSpace) )
    ( (This)->lpVtbl -> get_DeviceNumber(This,plDeviceNumber) )
    ( (This)->lpVtbl -> get_PartitionNumber(This,plPartitionNumber) )
    ( (This)->lpVtbl -> get_VolumeGuid(This,pbstrVolumeGuid) )
EXTERN_C const IID IID_ISClusPartitions;
    typedef struct ISClusPartitionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusPartitions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusPartitions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusPartitions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusPartitions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusPartitions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusPartitions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusPartitions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusPartitions * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusPartitions * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusPartitions * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusPartition **ppPartition);
        END_INTERFACE
    } ISClusPartitionsVtbl;
    interface ISClusPartitions
    {
        CONST_VTBL struct ISClusPartitionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppPartition) )
EXTERN_C const IID IID_ISClusDisk;
    typedef struct ISClusDiskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusDisk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusDisk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusDisk * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusDisk * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusDisk * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusDisk * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusDisk * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in ISClusDisk * This,
                                __RPC__out long *plSignature);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScsiAddress )(
            __RPC__in ISClusDisk * This,
                                __RPC__deref_out_opt ISClusScsiAddress **ppScsiAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiskNumber )(
            __RPC__in ISClusDisk * This,
                                __RPC__out long *plDiskNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_Partitions )(
            __RPC__in ISClusDisk * This,
                                __RPC__deref_out_opt ISClusPartitions **ppPartitions);
        END_INTERFACE
    } ISClusDiskVtbl;
    interface ISClusDisk
    {
        CONST_VTBL struct ISClusDiskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Signature(This,plSignature) )
    ( (This)->lpVtbl -> get_ScsiAddress(This,ppScsiAddress) )
    ( (This)->lpVtbl -> get_DiskNumber(This,plDiskNumber) )
    ( (This)->lpVtbl -> get_Partitions(This,ppPartitions) )
EXTERN_C const IID IID_ISClusDisks;
    typedef struct ISClusDisksVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusDisks * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusDisks * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusDisks * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusDisks * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusDisks * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusDisks * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusDisks * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusDisks * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusDisks * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusDisks * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusDisk **ppDisk);
        END_INTERFACE
    } ISClusDisksVtbl;
    interface ISClusDisks
    {
        CONST_VTBL struct ISClusDisksVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppDisk) )
EXTERN_C const IID IID_ISClusScsiAddress;
    typedef struct ISClusScsiAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusScsiAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusScsiAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusScsiAddress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusScsiAddress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusScsiAddress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusScsiAddress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusScsiAddress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PortNumber )(
            __RPC__in ISClusScsiAddress * This,
                                __RPC__out VARIANT *pvarPortNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_PathId )(
            __RPC__in ISClusScsiAddress * This,
                                __RPC__out VARIANT *pvarPathId);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetId )(
            __RPC__in ISClusScsiAddress * This,
                                __RPC__out VARIANT *pvarTargetId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Lun )(
            __RPC__in ISClusScsiAddress * This,
                                __RPC__out VARIANT *pvarLun);
        END_INTERFACE
    } ISClusScsiAddressVtbl;
    interface ISClusScsiAddress
    {
        CONST_VTBL struct ISClusScsiAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PortNumber(This,pvarPortNumber) )
    ( (This)->lpVtbl -> get_PathId(This,pvarPathId) )
    ( (This)->lpVtbl -> get_TargetId(This,pvarTargetId) )
    ( (This)->lpVtbl -> get_Lun(This,pvarLun) )
EXTERN_C const IID IID_ISClusRegistryKeys;
    typedef struct ISClusRegistryKeysVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusRegistryKeys * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusRegistryKeys * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusRegistryKeys * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusRegistryKeys * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusRegistryKeys * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusRegistryKeys * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusRegistryKeys * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusRegistryKeys * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusRegistryKeys * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusRegistryKeys * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusRegistryKeys * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt BSTR *pbstrRegistryKey);
                               HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ISClusRegistryKeys * This,
                       __RPC__in BSTR bstrRegistryKey);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusRegistryKeys * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusRegistryKeysVtbl;
    interface ISClusRegistryKeys
    {
        CONST_VTBL struct ISClusRegistryKeysVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,pbstrRegistryKey) )
    ( (This)->lpVtbl -> AddItem(This,bstrRegistryKey) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
EXTERN_C const IID IID_ISClusCryptoKeys;
    typedef struct ISClusCryptoKeysVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusCryptoKeys * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusCryptoKeys * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusCryptoKeys * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusCryptoKeys * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusCryptoKeys * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusCryptoKeys * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusCryptoKeys * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusCryptoKeys * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusCryptoKeys * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusCryptoKeys * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusCryptoKeys * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt BSTR *pbstrCyrptoKey);
                               HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ISClusCryptoKeys * This,
                       __RPC__in BSTR bstrCryptoKey);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusCryptoKeys * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusCryptoKeysVtbl;
    interface ISClusCryptoKeys
    {
        CONST_VTBL struct ISClusCryptoKeysVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,pbstrCyrptoKey) )
    ( (This)->lpVtbl -> AddItem(This,bstrCryptoKey) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
EXTERN_C const IID IID_ISClusResDependents;
    typedef struct ISClusResDependentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISClusResDependents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISClusResDependents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISClusResDependents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISClusResDependents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISClusResDependents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISClusResDependents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISClusResDependents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISClusResDependents * This,
                                __RPC__out long *plCount);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISClusResDependents * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ISClusResDependents * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISClusResDependents * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ISClusResource **ppClusResource);
                               HRESULT ( STDMETHODCALLTYPE *CreateItem )(
            __RPC__in ISClusResDependents * This,
                       __RPC__in BSTR bstrResourceName,
                       __RPC__in BSTR bstrResourceType,
                       CLUSTER_RESOURCE_CREATE_FLAGS dwFlags,
                                __RPC__deref_out_opt ISClusResource **ppClusterResource);
                               HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in ISClusResDependents * This,
                       VARIANT varIndex);
                               HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ISClusResDependents * This,
                       __RPC__in_opt ISClusResource *pResource);
                               HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ISClusResDependents * This,
                       VARIANT varIndex);
        END_INTERFACE
    } ISClusResDependentsVtbl;
    interface ISClusResDependents
    {
        CONST_VTBL struct ISClusResDependentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppClusResource) )
    ( (This)->lpVtbl -> CreateItem(This,bstrResourceName,bstrResourceType,dwFlags,ppClusterResource) )
    ( (This)->lpVtbl -> DeleteItem(This,varIndex) )
    ( (This)->lpVtbl -> AddItem(This,pResource) )
    ( (This)->lpVtbl -> RemoveItem(This,varIndex) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msclus_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msclus_0000_0041_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
