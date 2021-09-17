#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumVdsObject IEnumVdsObject;
typedef interface IVdsAsync IVdsAsync;
typedef interface IVdsAdviseSink IVdsAdviseSink;
typedef interface IVdsProvider IVdsProvider;
typedef interface IVdsProviderSupport IVdsProviderSupport;
typedef interface IVdsSwProvider IVdsSwProvider;
typedef interface IVdsPack IVdsPack;
typedef interface IVdsPack2 IVdsPack2;
typedef interface IVdsDisk IVdsDisk;
typedef interface IVdsDisk2 IVdsDisk2;
typedef interface IVdsDiskOnline IVdsDiskOnline;
typedef interface IVdsAdvancedDisk IVdsAdvancedDisk;
typedef interface IVdsAdvancedDisk2 IVdsAdvancedDisk2;
typedef interface IVdsAdvancedDisk3 IVdsAdvancedDisk3;
typedef interface IVdsCreatePartitionEx IVdsCreatePartitionEx;
typedef interface IVdsRemovable IVdsRemovable;
typedef interface IVdsVolume IVdsVolume;
typedef interface IVdsVolume2 IVdsVolume2;
typedef interface IVdsVolumeOnline IVdsVolumeOnline;
typedef interface IVdsVolumePlex IVdsVolumePlex;
typedef interface IVdsDisk3 IVdsDisk3;
typedef interface IVdsHwProvider IVdsHwProvider;
typedef interface IVdsHwProviderType IVdsHwProviderType;
typedef interface IVdsHwProviderType2 IVdsHwProviderType2;
typedef interface IVdsHwProviderStoragePools IVdsHwProviderStoragePools;
typedef interface IVdsSubSystem IVdsSubSystem;
typedef interface IVdsSubSystem2 IVdsSubSystem2;
typedef interface IVdsSubSystemNaming IVdsSubSystemNaming;
typedef interface IVdsSubSystemIscsi IVdsSubSystemIscsi;
typedef interface IVdsSubSystemInterconnect IVdsSubSystemInterconnect;
typedef interface IVdsControllerPort IVdsControllerPort;
typedef interface IVdsController IVdsController;
typedef interface IVdsControllerControllerPort IVdsControllerControllerPort;
typedef interface IVdsDrive IVdsDrive;
typedef interface IVdsDrive2 IVdsDrive2;
typedef interface IVdsLun IVdsLun;
typedef interface IVdsLun2 IVdsLun2;
typedef interface IVdsLunNaming IVdsLunNaming;
typedef interface IVdsLunNumber IVdsLunNumber;
typedef interface IVdsLunControllerPorts IVdsLunControllerPorts;
typedef interface IVdsLunMpio IVdsLunMpio;
typedef interface IVdsLunIscsi IVdsLunIscsi;
typedef interface IVdsLunPlex IVdsLunPlex;
typedef interface IVdsIscsiPortal IVdsIscsiPortal;
typedef interface IVdsIscsiTarget IVdsIscsiTarget;
typedef interface IVdsIscsiPortalGroup IVdsIscsiPortalGroup;
typedef interface IVdsStoragePool IVdsStoragePool;
typedef interface IVdsMaintenance IVdsMaintenance;
typedef interface IVdsVdProvider IVdsVdProvider;
typedef interface IVdsVDisk IVdsVDisk;
typedef interface IVdsOpenVDisk IVdsOpenVDisk;
typedef interface IVdsServiceLoader IVdsServiceLoader;
typedef interface IVdsService IVdsService;
typedef interface IVdsServiceUninstallDisk IVdsServiceUninstallDisk;
typedef interface IVdsServiceHba IVdsServiceHba;
typedef interface IVdsServiceIscsi IVdsServiceIscsi;
typedef interface IVdsServiceInitialization IVdsServiceInitialization;
typedef interface IVdsHbaPort IVdsHbaPort;
typedef interface IVdsIscsiInitiatorAdapter IVdsIscsiInitiatorAdapter;
typedef interface IVdsIscsiInitiatorPortal IVdsIscsiInitiatorPortal;
typedef interface IVdsDiskPartitionMF IVdsDiskPartitionMF;
typedef interface IVdsVolumeMF IVdsVolumeMF;
typedef interface IVdsVolumeMF2 IVdsVolumeMF2;
typedef interface IVdsVolumeShrink IVdsVolumeShrink;
typedef interface IVdsSubSystemImportTarget IVdsSubSystemImportTarget;
typedef interface IVdsIscsiPortalLocal IVdsIscsiPortalLocal;
typedef interface IVdsServiceSAN IVdsServiceSAN;
typedef interface IVdsVolumeMF3 IVdsVolumeMF3;
typedef interface IVdsDiskPartitionMF2 IVdsDiskPartitionMF2;
typedef interface IVdsServiceSw IVdsServiceSw;
#include "oaidl.h"
#include "vdssys.h"
#include "vdserr.h"
#include "vdslun.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef GUID VDS_OBJECT_ID;
typedef
enum _VDS_OBJECT_TYPE
    {
        VDS_OT_UNKNOWN = 0,
        VDS_OT_PROVIDER = 1,
        VDS_OT_PACK = 10,
        VDS_OT_VOLUME = 11,
        VDS_OT_VOLUME_PLEX = 12,
        VDS_OT_DISK = 13,
        VDS_OT_SUB_SYSTEM = 30,
        VDS_OT_CONTROLLER = 31,
        VDS_OT_DRIVE = 32,
        VDS_OT_LUN = 33,
        VDS_OT_LUN_PLEX = 34,
        VDS_OT_PORT = 35,
        VDS_OT_PORTAL = 36,
        VDS_OT_TARGET = 37,
        VDS_OT_PORTAL_GROUP = 38,
        VDS_OT_STORAGE_POOL = 39,
        VDS_OT_HBAPORT = 90,
        VDS_OT_INIT_ADAPTER = 91,
        VDS_OT_INIT_PORTAL = 92,
        VDS_OT_ASYNC = 100,
        VDS_OT_ENUM = 101,
        VDS_OT_VDISK = 200,
        VDS_OT_OPEN_VDISK = 201
    } VDS_OBJECT_TYPE;
typedef
enum _VDS_PROVIDER_TYPE
    {
        VDS_PT_UNKNOWN = 0,
        VDS_PT_SOFTWARE = 1,
        VDS_PT_HARDWARE = 2,
        VDS_PT_VIRTUALDISK = 3,
        VDS_PT_MAX = 4
    } VDS_PROVIDER_TYPE;
typedef
enum _VDS_PROVIDER_FLAG
    {
        VDS_PF_DYNAMIC = 0x1,
        VDS_PF_INTERNAL_HARDWARE_PROVIDER = 0x2,
        VDS_PF_ONE_DISK_ONLY_PER_PACK = 0x4,
        VDS_PF_ONE_PACK_ONLINE_ONLY = 0x8,
        VDS_PF_VOLUME_SPACE_MUST_BE_CONTIGUOUS = 0x10,
        VDS_PF_SUPPORT_DYNAMIC = 0x80000000,
        VDS_PF_SUPPORT_FAULT_TOLERANT = 0x40000000,
        VDS_PF_SUPPORT_DYNAMIC_1394 = 0x20000000,
        VDS_PF_SUPPORT_MIRROR = 0x20,
        VDS_PF_SUPPORT_RAID5 = 0x40
    } VDS_PROVIDER_FLAG;
typedef
enum _VDS_RECOVER_ACTION
    {
        VDS_RA_UNKNOWN = 0,
        VDS_RA_REFRESH = 1,
        VDS_RA_RESTART = 2
    } VDS_RECOVER_ACTION;
typedef
enum _VDS_NOTIFICATION_TARGET_TYPE
    {
        VDS_NTT_UNKNOWN = 0,
        VDS_NTT_PACK = VDS_OT_PACK,
        VDS_NTT_VOLUME = VDS_OT_VOLUME,
        VDS_NTT_DISK = VDS_OT_DISK,
        VDS_NTT_PARTITION = 60,
        VDS_NTT_DRIVE_LETTER = 61,
        VDS_NTT_FILE_SYSTEM = 62,
        VDS_NTT_MOUNT_POINT = 63,
        VDS_NTT_SUB_SYSTEM = VDS_OT_SUB_SYSTEM,
        VDS_NTT_CONTROLLER = VDS_OT_CONTROLLER,
        VDS_NTT_DRIVE = VDS_OT_DRIVE,
        VDS_NTT_LUN = VDS_OT_LUN,
        VDS_NTT_PORT = VDS_OT_PORT,
        VDS_NTT_PORTAL = VDS_OT_PORTAL,
        VDS_NTT_TARGET = VDS_OT_TARGET,
        VDS_NTT_PORTAL_GROUP = VDS_OT_PORTAL_GROUP,
        VDS_NTT_SERVICE = 200
    } VDS_NOTIFICATION_TARGET_TYPE;
typedef struct _VDS_PACK_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID packId;
    } VDS_PACK_NOTIFICATION;
typedef struct _VDS_DISK_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID diskId;
    } VDS_DISK_NOTIFICATION;
typedef struct _VDS_VOLUME_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID volumeId;
    VDS_OBJECT_ID plexId;
    ULONG ulPercentCompleted;
    } VDS_VOLUME_NOTIFICATION;
typedef struct _VDS_PARTITION_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID diskId;
    ULONGLONG ullOffset;
    } VDS_PARTITION_NOTIFICATION;
typedef struct _VDS_SERVICE_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_RECOVER_ACTION action;
    } VDS_SERVICE_NOTIFICATION;
typedef struct _VDS_DRIVE_LETTER_NOTIFICATION
    {
    ULONG ulEvent;
    WCHAR wcLetter;
    VDS_OBJECT_ID volumeId;
    } VDS_DRIVE_LETTER_NOTIFICATION;
typedef struct _VDS_FILE_SYSTEM_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID volumeId;
    DWORD dwPercentCompleted;
    } VDS_FILE_SYSTEM_NOTIFICATION;
typedef struct _VDS_MOUNT_POINT_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID volumeId;
    } VDS_MOUNT_POINT_NOTIFICATION;
typedef struct _VDS_SUB_SYSTEM_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID subSystemId;
    } VDS_SUB_SYSTEM_NOTIFICATION;
typedef struct _VDS_CONTROLLER_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID controllerId;
    } VDS_CONTROLLER_NOTIFICATION;
typedef struct _VDS_DRIVE_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID driveId;
    } VDS_DRIVE_NOTIFICATION;
typedef struct _VDS_LUN_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID LunId;
    } VDS_LUN_NOTIFICATION;
typedef struct _VDS_PORT_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID portId;
    } VDS_PORT_NOTIFICATION;
typedef struct _VDS_PORTAL_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID portalId;
    } VDS_PORTAL_NOTIFICATION;
typedef struct _VDS_TARGET_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID targetId;
    } VDS_TARGET_NOTIFICATION;
typedef struct _VDS_PORTAL_GROUP_NOTIFICATION
    {
    ULONG ulEvent;
    VDS_OBJECT_ID portalGroupId;
    } VDS_PORTAL_GROUP_NOTIFICATION;
typedef struct _VDS_NOTIFICATION
    {
    VDS_NOTIFICATION_TARGET_TYPE objectType;
                                          union
        {
                       VDS_PACK_NOTIFICATION Pack;
                       VDS_DISK_NOTIFICATION Disk;
                       VDS_VOLUME_NOTIFICATION Volume;
                       VDS_PARTITION_NOTIFICATION Partition;
                       VDS_DRIVE_LETTER_NOTIFICATION Letter;
                       VDS_FILE_SYSTEM_NOTIFICATION FileSystem;
                       VDS_MOUNT_POINT_NOTIFICATION MountPoint;
                       VDS_SUB_SYSTEM_NOTIFICATION SubSystem;
                       VDS_CONTROLLER_NOTIFICATION Controller;
                       VDS_DRIVE_NOTIFICATION Drive;
                       VDS_LUN_NOTIFICATION Lun;
                       VDS_PORT_NOTIFICATION Port;
                       VDS_PORTAL_NOTIFICATION Portal;
                       VDS_TARGET_NOTIFICATION Target;
                       VDS_PORTAL_GROUP_NOTIFICATION PortalGroup;
                       VDS_SERVICE_NOTIFICATION Service;
        } ;
    } VDS_NOTIFICATION;
typedef
enum _VDS_ASYNC_OUTPUT_TYPE
    {
        VDS_ASYNCOUT_UNKNOWN = 0,
        VDS_ASYNCOUT_CREATEVOLUME = 1,
        VDS_ASYNCOUT_EXTENDVOLUME = 2,
        VDS_ASYNCOUT_SHRINKVOLUME = 3,
        VDS_ASYNCOUT_ADDVOLUMEPLEX = 4,
        VDS_ASYNCOUT_BREAKVOLUMEPLEX = 5,
        VDS_ASYNCOUT_REMOVEVOLUMEPLEX = 6,
        VDS_ASYNCOUT_REPAIRVOLUMEPLEX = 7,
        VDS_ASYNCOUT_RECOVERPACK = 8,
        VDS_ASYNCOUT_REPLACEDISK = 9,
        VDS_ASYNCOUT_CREATEPARTITION = 10,
        VDS_ASYNCOUT_CLEAN = 11,
        VDS_ASYNCOUT_CREATELUN = 50,
        VDS_ASYNCOUT_ADDLUNPLEX = 52,
        VDS_ASYNCOUT_REMOVELUNPLEX = 53,
        VDS_ASYNCOUT_EXTENDLUN = 54,
        VDS_ASYNCOUT_SHRINKLUN = 55,
        VDS_ASYNCOUT_RECOVERLUN = 56,
        VDS_ASYNCOUT_LOGINTOTARGET = 60,
        VDS_ASYNCOUT_LOGOUTFROMTARGET = 61,
        VDS_ASYNCOUT_CREATETARGET = 62,
        VDS_ASYNCOUT_CREATEPORTALGROUP = 63,
        VDS_ASYNCOUT_DELETETARGET = 64,
        VDS_ASYNCOUT_ADDPORTAL = 65,
        VDS_ASYNCOUT_REMOVEPORTAL = 66,
        VDS_ASYNCOUT_DELETEPORTALGROUP = 67,
        VDS_ASYNCOUT_FORMAT = 101,
        VDS_ASYNCOUT_CREATE_VDISK = 200,
        VDS_ASYNCOUT_ATTACH_VDISK = 201,
        VDS_ASYNCOUT_COMPACT_VDISK = 202,
        VDS_ASYNCOUT_MERGE_VDISK = 203,
        VDS_ASYNCOUT_EXPAND_VDISK = 204
    } VDS_ASYNC_OUTPUT_TYPE;
typedef struct _VDS_ASYNC_OUTPUT
    {
    VDS_ASYNC_OUTPUT_TYPE type;
                                          union
        {
                       struct _cp
            {
            ULONGLONG ullOffset;
            VDS_OBJECT_ID volumeId;
            } cp;
                       struct _cv
            {
            IUnknown *pVolumeUnk;
            } cv;
                       struct _bvp
            {
            IUnknown *pVolumeUnk;
            } bvp;
                       struct _sv
            {
            ULONGLONG ullReclaimedBytes;
            } sv;
                       struct _cl
            {
            IUnknown *pLunUnk;
            } cl;
                       struct _ct
            {
            IUnknown *pTargetUnk;
            } ct;
                       struct _cpg
            {
            IUnknown *pPortalGroupUnk;
            } cpg;
                       struct _cvd
            {
            IUnknown *pVDiskUnk;
            } cvd;
        } ;
    } VDS_ASYNC_OUTPUT;
typedef USHORT VDS_ISCSI_PORTALGROUP_TAG;
typedef
enum VDS_IPADDRESS_TYPE
    {
        VDS_IPT_TEXT = 0,
        VDS_IPT_IPV4 = 1,
        VDS_IPT_IPV6 = 2,
        VDS_IPT_EMPTY = 3
    } VDS_IPADDRESS_TYPE;
typedef
enum _VDS_HEALTH
    {
        VDS_H_UNKNOWN = 0,
        VDS_H_HEALTHY = 1,
        VDS_H_REBUILDING = 2,
        VDS_H_STALE = 3,
        VDS_H_FAILING = 4,
        VDS_H_FAILING_REDUNDANCY = 5,
        VDS_H_FAILED_REDUNDANCY = 6,
        VDS_H_FAILED_REDUNDANCY_FAILING = 7,
        VDS_H_FAILED = 8,
        VDS_H_REPLACED = 9,
        VDS_H_PENDING_FAILURE = 10,
        VDS_H_DEGRADED = 11
    } VDS_HEALTH;
typedef
enum _VDS_TRANSITION_STATE
    {
        VDS_TS_UNKNOWN = 0,
        VDS_TS_STABLE = 1,
        VDS_TS_EXTENDING = 2,
        VDS_TS_SHRINKING = 3,
        VDS_TS_RECONFIGING = 4,
        VDS_TS_RESTRIPING = 5
    } VDS_TRANSITION_STATE;
typedef
enum _VDS_FILE_SYSTEM_TYPE
    {
        VDS_FST_UNKNOWN = 0,
        VDS_FST_RAW = ( VDS_FST_UNKNOWN + 1 ) ,
        VDS_FST_FAT = ( VDS_FST_RAW + 1 ) ,
        VDS_FST_FAT32 = ( VDS_FST_FAT + 1 ) ,
        VDS_FST_NTFS = ( VDS_FST_FAT32 + 1 ) ,
        VDS_FST_CDFS = ( VDS_FST_NTFS + 1 ) ,
        VDS_FST_UDF = ( VDS_FST_CDFS + 1 ) ,
        VDS_FST_EXFAT = ( VDS_FST_UDF + 1 ) ,
        VDS_FST_CSVFS = ( VDS_FST_EXFAT + 1 ) ,
        VDS_FST_REFS = ( VDS_FST_CSVFS + 1 )
    } VDS_FILE_SYSTEM_TYPE;
typedef
enum _VDS_HBAPORT_TYPE
    {
        VDS_HPT_UNKNOWN = 1,
        VDS_HPT_OTHER = 2,
        VDS_HPT_NOTPRESENT = 3,
        VDS_HPT_NPORT = 5,
        VDS_HPT_NLPORT = 6,
        VDS_HPT_FLPORT = 7,
        VDS_HPT_FPORT = 8,
        VDS_HPT_EPORT = 9,
        VDS_HPT_GPORT = 10,
        VDS_HPT_LPORT = 20,
        VDS_HPT_PTP = 21
    } VDS_HBAPORT_TYPE;
typedef
enum _VDS_HBAPORT_STATUS
    {
        VDS_HPS_UNKNOWN = 1,
        VDS_HPS_ONLINE = 2,
        VDS_HPS_OFFLINE = 3,
        VDS_HPS_BYPASSED = 4,
        VDS_HPS_DIAGNOSTICS = 5,
        VDS_HPS_LINKDOWN = 6,
        VDS_HPS_ERROR = 7,
        VDS_HPS_LOOPBACK = 8
    } VDS_HBAPORT_STATUS;
typedef
enum _VDS_HBAPORT_SPEED_FLAG
    {
        VDS_HSF_UNKNOWN = 0,
        VDS_HSF_1GBIT = 0x1,
        VDS_HSF_2GBIT = 0x2,
        VDS_HSF_10GBIT = 0x4,
        VDS_HSF_4GBIT = 0x8,
        VDS_HSF_NOT_NEGOTIATED = ( 1 << 15 )
    } VDS_HBAPORT_SPEED_FLAG;
typedef
enum _VDS_PATH_STATUS
    {
        VDS_MPS_UNKNOWN = 0,
        VDS_MPS_ONLINE = 1,
        VDS_MPS_FAILED = 5,
        VDS_MPS_STANDBY = 7
    } VDS_PATH_STATUS;
typedef
enum _VDS_LOADBALANCE_POLICY_ENUM
    {
        VDS_LBP_UNKNOWN = 0,
        VDS_LBP_FAILOVER = 1,
        VDS_LBP_ROUND_ROBIN = 2,
        VDS_LBP_ROUND_ROBIN_WITH_SUBSET = 3,
        VDS_LBP_DYN_LEAST_QUEUE_DEPTH = 4,
        VDS_LBP_WEIGHTED_PATHS = 5,
        VDS_LBP_LEAST_BLOCKS = 6,
        VDS_LBP_VENDOR_SPECIFIC = 7
    } VDS_LOADBALANCE_POLICY_ENUM;
typedef
enum _VDS_PROVIDER_LBSUPPORT_FLAG
    {
        VDS_LBF_FAILOVER = 0x1,
        VDS_LBF_ROUND_ROBIN = 0x2,
        VDS_LBF_ROUND_ROBIN_WITH_SUBSET = 0x4,
        VDS_LBF_DYN_LEAST_QUEUE_DEPTH = 0x8,
        VDS_LBF_WEIGHTED_PATHS = 0x10,
        VDS_LBF_LEAST_BLOCKS = 0x20,
        VDS_LBF_VENDOR_SPECIFIC = 0x40
    } VDS_PROVIDER_LBSUPPORT_FLAG;
typedef
enum _VDS_VERSION_SUPPORT_FLAG
    {
        VDS_VSF_1_0 = 0x1,
        VDS_VSF_1_1 = 0x2,
        VDS_VSF_2_0 = 0x4,
        VDS_VSF_2_1 = 0x8,
        VDS_VSF_3_0 = 0x10
    } VDS_VERSION_SUPPORT_FLAG;
typedef
enum _VDS_HWPROVIDER_TYPE
    {
        VDS_HWT_UNKNOWN = 0,
        VDS_HWT_PCI_RAID = 1,
        VDS_HWT_FIBRE_CHANNEL = 2,
        VDS_HWT_ISCSI = 3,
        VDS_HWT_SAS = 4,
        VDS_HWT_HYBRID = 5
    } VDS_HWPROVIDER_TYPE;
typedef
enum _VDS_ISCSI_LOGIN_TYPE
    {
        VDS_ILT_MANUAL = 0,
        VDS_ILT_PERSISTENT = 1,
        VDS_ILT_BOOT = 2
    } VDS_ISCSI_LOGIN_TYPE;
typedef
enum _VDS_ISCSI_AUTH_TYPE
    {
        VDS_IAT_NONE = 0,
        VDS_IAT_CHAP = 1,
        VDS_IAT_MUTUAL_CHAP = 2
    } VDS_ISCSI_AUTH_TYPE;
typedef
enum _VDS_ISCSI_IPSEC_FLAG
    {
        VDS_IIF_VALID = 0x1,
        VDS_IIF_IKE = 0x2,
        VDS_IIF_MAIN_MODE = 0x4,
        VDS_IIF_AGGRESSIVE_MODE = 0x8,
        VDS_IIF_PFS_ENABLE = 0x10,
        VDS_IIF_TRANSPORT_MODE_PREFERRED = 0x20,
        VDS_IIF_TUNNEL_MODE_PREFERRED = 0x40
    } VDS_ISCSI_IPSEC_FLAG;
typedef
enum _VDS_ISCSI_LOGIN_FLAG
    {
        VDS_ILF_REQUIRE_IPSEC = 0x1,
        VDS_ILF_MULTIPATH_ENABLED = 0x2
    } VDS_ISCSI_LOGIN_FLAG;
typedef struct _VDS_PATH_ID
    {
    ULONGLONG ullSourceId;
    ULONGLONG ullPathId;
    } VDS_PATH_ID;
typedef struct _VDS_WWN
    {
    UCHAR rguchWwn[ 8 ];
    } VDS_WWN;
typedef struct _VDS_IPADDRESS
    {
    VDS_IPADDRESS_TYPE type;
    ULONG ipv4Address;
    UCHAR ipv6Address[ 16 ];
    ULONG ulIpv6FlowInfo;
    ULONG ulIpv6ScopeId;
    WCHAR wszTextAddress[ 257 ];
    ULONG ulPort;
    } VDS_IPADDRESS;
typedef struct _VDS_ISCSI_IPSEC_KEY
    {
                    UCHAR *pKey;
    ULONG ulKeySize;
    } VDS_ISCSI_IPSEC_KEY;
typedef struct _VDS_ISCSI_SHARED_SECRET
    {
                    UCHAR *pSharedSecret;
    ULONG ulSharedSecretSize;
    } VDS_ISCSI_SHARED_SECRET;
typedef struct _VDS_HBAPORT_PROP
    {
    VDS_OBJECT_ID id;
    VDS_WWN wwnNode;
    VDS_WWN wwnPort;
    VDS_HBAPORT_TYPE type;
    VDS_HBAPORT_STATUS status;
    ULONG ulPortSpeed;
    ULONG ulSupportedPortSpeed;
    } VDS_HBAPORT_PROP;
typedef struct _VDS_ISCSI_INITIATOR_ADAPTER_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszName;
    } VDS_ISCSI_INITIATOR_ADAPTER_PROP;
typedef struct _VDS_ISCSI_INITIATOR_PORTAL_PROP
    {
    VDS_OBJECT_ID id;
    VDS_IPADDRESS address;
    ULONG ulPortIndex;
    } VDS_ISCSI_INITIATOR_PORTAL_PROP;
typedef struct _VDS_PROVIDER_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszName;
    GUID guidVersionId;
                   LPWSTR pwszVersion;
    VDS_PROVIDER_TYPE type;
    ULONG ulFlags;
    ULONG ulStripeSizeFlags;
    SHORT sRebuildPriority;
    } VDS_PROVIDER_PROP;
typedef struct _VDS_PATH_INFO
    {
    VDS_PATH_ID pathId;
    VDS_HWPROVIDER_TYPE type;
    VDS_PATH_STATUS status;
                                          union
        {
                       VDS_OBJECT_ID controllerPortId;
                       VDS_OBJECT_ID targetPortalId;
        } ;
                                          union
        {
                       VDS_OBJECT_ID hbaPortId;
                       VDS_OBJECT_ID initiatorAdapterId;
        } ;
                                          union
        {
                       VDS_HBAPORT_PROP *pHbaPortProp;
                       VDS_IPADDRESS *pInitiatorPortalIpAddr;
        } ;
    } VDS_PATH_INFO;
typedef struct _VDS_PATH_POLICY
    {
    VDS_PATH_ID pathId;
    BOOL bPrimaryPath;
    ULONG ulWeight;
    } VDS_PATH_POLICY;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumVdsObject;
    typedef struct IEnumVdsObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumVdsObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumVdsObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumVdsObject * This);
                           HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumVdsObject * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pcFetched) IUnknown **ppObjectArray,
                        __RPC__out ULONG *pcFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumVdsObject * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumVdsObject * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumVdsObject * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        END_INTERFACE
    } IEnumVdsObjectVtbl;
    interface IEnumVdsObject
    {
        CONST_VTBL struct IEnumVdsObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppObjectArray,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IVdsAsync;
    typedef struct IVdsAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsAsync * This);
                           HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IVdsAsync * This);
                           HRESULT ( STDMETHODCALLTYPE *Wait )(
            __RPC__in IVdsAsync * This,
                        __RPC__out HRESULT *pHrResult,
                        __RPC__out VDS_ASYNC_OUTPUT *pAsyncOut);
                           HRESULT ( STDMETHODCALLTYPE *QueryStatus )(
            __RPC__in IVdsAsync * This,
                        __RPC__out HRESULT *pHrResult,
                        __RPC__out ULONG *pulPercentCompleted);
        END_INTERFACE
    } IVdsAsyncVtbl;
    interface IVdsAsync
    {
        CONST_VTBL struct IVdsAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Wait(This,pHrResult,pAsyncOut) )
    ( (This)->lpVtbl -> QueryStatus(This,pHrResult,pulPercentCompleted) )
EXTERN_C const IID IID_IVdsAdviseSink;
    typedef struct IVdsAdviseSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsAdviseSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsAdviseSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsAdviseSink * This);
                           HRESULT ( STDMETHODCALLTYPE *OnNotify )(
            __RPC__in IVdsAdviseSink * This,
                              __RPC__in_range(1,100) LONG lNumberOfNotifications,
                                __RPC__in_ecount_full(lNumberOfNotifications) VDS_NOTIFICATION *pNotificationArray);
        END_INTERFACE
    } IVdsAdviseSinkVtbl;
    interface IVdsAdviseSink
    {
        CONST_VTBL struct IVdsAdviseSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNotify(This,lNumberOfNotifications,pNotificationArray) )
EXTERN_C const IID IID_IVdsProvider;
    typedef struct IVdsProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsProvider * This,
                        __RPC__out VDS_PROVIDER_PROP *pProviderProp);
        END_INTERFACE
    } IVdsProviderVtbl;
    interface IVdsProvider
    {
        CONST_VTBL struct IVdsProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pProviderProp) )
EXTERN_C const IID IID_IVdsProviderSupport;
    typedef struct IVdsProviderSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsProviderSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsProviderSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsProviderSupport * This);
                           HRESULT ( STDMETHODCALLTYPE *GetVersionSupport )(
            __RPC__in IVdsProviderSupport * This,
                        __RPC__out ULONG *ulVersionSupport);
        END_INTERFACE
    } IVdsProviderSupportVtbl;
    interface IVdsProviderSupport
    {
        CONST_VTBL struct IVdsProviderSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVersionSupport(This,ulVersionSupport) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _VDS_PACK_STATUS
    {
        VDS_PS_UNKNOWN = 0,
        VDS_PS_ONLINE = 1,
        VDS_PS_OFFLINE = 4
    } VDS_PACK_STATUS;
typedef
enum _VDS_PACK_FLAG
    {
        VDS_PKF_FOREIGN = 0x1,
        VDS_PKF_NOQUORUM = 0x2,
        VDS_PKF_POLICY = 0x4,
        VDS_PKF_CORRUPTED = 0x8,
        VDS_PKF_ONLINE_ERROR = 0x10
    } VDS_PACK_FLAG;
typedef
enum _VDS_DISK_STATUS
    {
        VDS_DS_UNKNOWN = 0,
        VDS_DS_ONLINE = 1,
        VDS_DS_NOT_READY = 2,
        VDS_DS_NO_MEDIA = 3,
        VDS_DS_FAILED = 5,
        VDS_DS_MISSING = 6,
        VDS_DS_OFFLINE = 4
    } VDS_DISK_STATUS;
typedef
enum _VDS_PARTITION_STYLE
    {
        VDS_PST_UNKNOWN = 0,
        VDS_PST_MBR = 1,
        VDS_PST_GPT = 2
    } VDS_PARTITION_STYLE;
typedef
enum _VDS_DISK_FLAG
    {
        VDS_DF_AUDIO_CD = 0x1,
        VDS_DF_HOTSPARE = 0x2,
        VDS_DF_RESERVE_CAPABLE = 0x4,
        VDS_DF_MASKED = 0x8,
        VDS_DF_STYLE_CONVERTIBLE = 0x10,
        VDS_DF_CLUSTERED = 0x20,
        VDS_DF_READ_ONLY = 0x40,
        VDS_DF_SYSTEM_DISK = 0x80,
        VDS_DF_BOOT_DISK = 0x100,
        VDS_DF_PAGEFILE_DISK = 0x200,
        VDS_DF_HIBERNATIONFILE_DISK = 0x400,
        VDS_DF_CRASHDUMP_DISK = 0x800,
        VDS_DF_HAS_ARC_PATH = 0x1000,
        VDS_DF_DYNAMIC = 0x2000,
        VDS_DF_BOOT_FROM_DISK = 0x4000,
        VDS_DF_CURRENT_READ_ONLY = 0x8000,
        VDS_DF_REFS_NOT_SUPPORTED = 0x10000
    } VDS_DISK_FLAG;
typedef
enum _VDS_PARTITION_FLAG
    {
        VDS_PTF_SYSTEM = 0x1
    } VDS_PARTITION_FLAG;
typedef
enum _VDS_LUN_RESERVE_MODE
    {
        VDS_LRM_NONE = 0,
        VDS_LRM_EXCLUSIVE_RW = 1,
        VDS_LRM_EXCLUSIVE_RO = 2,
        VDS_LRM_SHARED_RO = 3,
        VDS_LRM_SHARED_RW = 4
    } VDS_LUN_RESERVE_MODE;
typedef
enum _VDS_VOLUME_STATUS
    {
        VDS_VS_UNKNOWN = 0,
        VDS_VS_ONLINE = 1,
        VDS_VS_NO_MEDIA = 3,
        VDS_VS_FAILED = 5,
        VDS_VS_OFFLINE = 4
    } VDS_VOLUME_STATUS;
typedef
enum _VDS_VOLUME_TYPE
    {
        VDS_VT_UNKNOWN = 0,
        VDS_VT_SIMPLE = 10,
        VDS_VT_SPAN = 11,
        VDS_VT_STRIPE = 12,
        VDS_VT_MIRROR = 13,
        VDS_VT_PARITY = 14
    } VDS_VOLUME_TYPE;
typedef
enum _VDS_VOLUME_FLAG
    {
        VDS_VF_SYSTEM_VOLUME = 0x1,
        VDS_VF_BOOT_VOLUME = 0x2,
        VDS_VF_ACTIVE = 0x4,
        VDS_VF_READONLY = 0x8,
        VDS_VF_HIDDEN = 0x10,
        VDS_VF_CAN_EXTEND = 0x20,
        VDS_VF_CAN_SHRINK = 0x40,
        VDS_VF_PAGEFILE = 0x80,
        VDS_VF_HIBERNATION = 0x100,
        VDS_VF_CRASHDUMP = 0x200,
        VDS_VF_INSTALLABLE = 0x400,
        VDS_VF_LBN_REMAP_ENABLED = 0x800,
        VDS_VF_FORMATTING = 0x1000,
        VDS_VF_NOT_FORMATTABLE = 0x2000,
        VDS_VF_NTFS_NOT_SUPPORTED = 0x4000,
        VDS_VF_FAT32_NOT_SUPPORTED = 0x8000,
        VDS_VF_FAT_NOT_SUPPORTED = 0x10000,
        VDS_VF_NO_DEFAULT_DRIVE_LETTER = 0x20000,
        VDS_VF_PERMANENTLY_DISMOUNTED = 0x40000,
        VDS_VF_PERMANENT_DISMOUNT_SUPPORTED = 0x80000,
        VDS_VF_SHADOW_COPY = 0x100000,
        VDS_VF_FVE_ENABLED = 0x200000,
        VDS_VF_DIRTY = 0x400000,
        VDS_VF_REFS_NOT_SUPPORTED = 0x800000,
        VDS_VF_BACKS_BOOT_VOLUME = 0x1000000,
        VDS_VF_BACKED_BY_WIM_IMAGE = 0x2000000
    } VDS_VOLUME_FLAG;
typedef
enum _VDS_VOLUME_PLEX_TYPE
    {
        VDS_VPT_UNKNOWN = 0,
        VDS_VPT_SIMPLE = VDS_VT_SIMPLE,
        VDS_VPT_SPAN = VDS_VT_SPAN,
        VDS_VPT_STRIPE = VDS_VT_STRIPE,
        VDS_VPT_PARITY = VDS_VT_PARITY
    } VDS_VOLUME_PLEX_TYPE;
typedef
enum _VDS_VOLUME_PLEX_STATUS
    {
        VDS_VPS_UNKNOWN = 0,
        VDS_VPS_ONLINE = 1,
        VDS_VPS_NO_MEDIA = 3,
        VDS_VPS_FAILED = 5
    } VDS_VOLUME_PLEX_STATUS;
typedef
enum _VDS_DISK_EXTENT_TYPE
    {
        VDS_DET_UNKNOWN = 0,
        VDS_DET_FREE = 1,
        VDS_DET_DATA = 2,
        VDS_DET_OEM = 3,
        VDS_DET_ESP = 4,
        VDS_DET_MSR = 5,
        VDS_DET_LDM = 6,
        VDS_DET_CLUSTER = 7,
        VDS_DET_UNUSABLE = 0x7fff
    } VDS_DISK_EXTENT_TYPE;
typedef struct _VDS_PACK_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszName;
    VDS_PACK_STATUS status;
    ULONG ulFlags;
    } VDS_PACK_PROP;
typedef struct _VDS_PACK_PROP *PVDS_PACK_PROP;
typedef struct _VDS_DISK_PROP
    {
    VDS_OBJECT_ID id;
    VDS_DISK_STATUS status;
    VDS_LUN_RESERVE_MODE ReserveMode;
    VDS_HEALTH health;
    DWORD dwDeviceType;
    DWORD dwMediaType;
    ULONGLONG ullSize;
    ULONG ulBytesPerSector;
    ULONG ulSectorsPerTrack;
    ULONG ulTracksPerCylinder;
    ULONG ulFlags;
    VDS_STORAGE_BUS_TYPE BusType;
    VDS_PARTITION_STYLE PartitionStyle;
                                          union
        {
                       DWORD dwSignature;
                       GUID DiskGuid;
        } ;
                   LPWSTR pwszDiskAddress;
                   LPWSTR pwszName;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszAdaptorName;
                   LPWSTR pwszDevicePath;
    } VDS_DISK_PROP;
typedef struct _VDS_DISK_PROP *PVDS_DISK_PROP;
typedef
enum _VDS_DISK_OFFLINE_REASON
    {
        VDSDiskOfflineReasonNone = 0,
        VDSDiskOfflineReasonPolicy = 1,
        VDSDiskOfflineReasonRedundantPath = 2,
        VDSDiskOfflineReasonSnapshot = 3,
        VDSDiskOfflineReasonCollision = 4,
        VDSDiskOfflineReasonResourceExhaustion = 5,
        VDSDiskOfflineReasonWriteFailure = 6,
        VDSDiskOfflineReasonDIScan = 7,
        VDSDiskOfflineReasonLostDataPersistence = 8
    } VDS_DISK_OFFLINE_REASON;
typedef struct _VDS_DISK_PROP2
    {
    VDS_OBJECT_ID id;
    VDS_DISK_STATUS status;
    VDS_DISK_OFFLINE_REASON OfflineReason;
    VDS_LUN_RESERVE_MODE ReserveMode;
    VDS_HEALTH health;
    DWORD dwDeviceType;
    DWORD dwMediaType;
    ULONGLONG ullSize;
    ULONG ulBytesPerSector;
    ULONG ulSectorsPerTrack;
    ULONG ulTracksPerCylinder;
    ULONG ulFlags;
    VDS_STORAGE_BUS_TYPE BusType;
    VDS_PARTITION_STYLE PartitionStyle;
                                          union
        {
                       DWORD dwSignature;
                       GUID DiskGuid;
        } ;
                   LPWSTR pwszDiskAddress;
                   LPWSTR pwszName;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszAdaptorName;
                   LPWSTR pwszDevicePath;
                   LPWSTR pwszLocationPath;
    } VDS_DISK_PROP2;
typedef struct _VDS_DISK_PROP2 *PVDS_DISK_PROP2;
typedef struct _VDS_ADVANCEDDISK_PROP
    {
                   LPWSTR pwszId;
                   LPWSTR pwszPathname;
                   LPWSTR pwszLocation;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pswzIdentifier;
    USHORT usIdentifierFormat;
    ULONG ulNumber;
                   LPWSTR pwszSerialNumber;
                   LPWSTR pwszFirmwareVersion;
                   LPWSTR pwszManufacturer;
                   LPWSTR pwszModel;
    ULONGLONG ullTotalSize;
    ULONGLONG ullAllocatedSize;
    ULONG ulLogicalSectorSize;
    ULONG ulPhysicalSectorSize;
    ULONG ulPartitionCount;
    VDS_DISK_STATUS status;
    VDS_HEALTH health;
    VDS_STORAGE_BUS_TYPE BusType;
    VDS_PARTITION_STYLE PartitionStyle;
                                          union
        {
                       DWORD dwSignature;
                       GUID DiskGuid;
        } ;
    ULONG ulFlags;
    DWORD dwDeviceType;
    } VDS_ADVANCEDDISK_PROP;
typedef struct _VDS_ADVANCEDDISK_PROP *PVDS_ADVANCEDDISK_PROP;
typedef struct _VDS_VOLUME_PROP
    {
    VDS_OBJECT_ID id;
    VDS_VOLUME_TYPE type;
    VDS_VOLUME_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONGLONG ullSize;
    ULONG ulFlags;
    VDS_FILE_SYSTEM_TYPE RecommendedFileSystemType;
                   LPWSTR pwszName;
    } VDS_VOLUME_PROP;
typedef struct _VDS_VOLUME_PROP *PVDS_VOLUME_PROP;
typedef struct _VDS_VOLUME_PROP2
    {
    VDS_OBJECT_ID id;
    VDS_VOLUME_TYPE type;
    VDS_VOLUME_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONGLONG ullSize;
    ULONG ulFlags;
    VDS_FILE_SYSTEM_TYPE RecommendedFileSystemType;
    ULONG cbUniqueId;
                   LPWSTR pwszName;
                    BYTE *pUniqueId;
    } VDS_VOLUME_PROP2;
typedef struct _VDS_VOLUME_PROP2 *PVDS_VOLUME_PROP2;
typedef struct _VDS_VOLUME_PLEX_PROP
    {
    VDS_OBJECT_ID id;
    VDS_VOLUME_PLEX_TYPE type;
    VDS_VOLUME_PLEX_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONGLONG ullSize;
    ULONG ulStripeSize;
    ULONG ulNumberOfMembers;
    } VDS_VOLUME_PLEX_PROP;
typedef struct _VDS_VOLUME_PLEX_PROP *PVDS_VOLUME_PLEX_PROP;
typedef struct _VDS_DISK_EXTENT
    {
    VDS_OBJECT_ID diskId;
    VDS_DISK_EXTENT_TYPE type;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
    VDS_OBJECT_ID volumeId;
    VDS_OBJECT_ID plexId;
    ULONG memberIdx;
    } VDS_DISK_EXTENT;
typedef struct _VDS_DISK_EXTENT *PVDS_DISK_EXTENT;
typedef struct _VDS_DISK_FREE_EXTENT
    {
    VDS_OBJECT_ID diskId;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
    } VDS_DISK_FREE_EXTENT;
typedef struct _VDS_DISK_FREE_EXTENT *PVDS_DISK_FREE_EXTENT;
typedef struct _VDS_INPUT_DISK
    {
    VDS_OBJECT_ID diskId;
    ULONGLONG ullSize;
    VDS_OBJECT_ID plexId;
    ULONG memberIdx;
    } VDS_INPUT_DISK;
typedef struct _VDS_PARTITION_INFO_GPT
    {
    GUID partitionType;
    GUID partitionId;
    ULONGLONG attributes;
    WCHAR name[ 36 ];
    } VDS_PARTITION_INFO_GPT;
typedef struct _VDS_PARTITION_INFO_MBR
    {
    BYTE partitionType;
    BOOLEAN bootIndicator;
    BOOLEAN recognizedPartition;
    DWORD hiddenSectors;
    } VDS_PARTITION_INFO_MBR;
typedef struct _VDS_PARTITION_PROP
    {
    VDS_PARTITION_STYLE PartitionStyle;
    ULONG ulFlags;
    ULONG ulPartitionNumber;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
                                          union
        {
                       VDS_PARTITION_INFO_MBR Mbr;
                       VDS_PARTITION_INFO_GPT Gpt;
        } ;
    } VDS_PARTITION_PROP;
typedef
enum tag_VDS_PARTITION_STYLE
    {
        VDS_PARTITION_STYLE_MBR = 0,
        VDS_PARTITION_STYLE_GPT = ( VDS_PARTITION_STYLE_MBR + 1 ) ,
        VDS_PARTITION_STYLE_RAW = ( VDS_PARTITION_STYLE_GPT + 1 )
    } __VDS_PARTITION_STYLE;
typedef struct _VDS_PARTITION_INFORMATION_EX
    {
    __VDS_PARTITION_STYLE dwPartitionStyle;
    ULONGLONG ullStartingOffset;
    ULONGLONG ullPartitionLength;
    DWORD dwPartitionNumber;
    BOOLEAN bRewritePartition;
                                          union
        {
                       VDS_PARTITION_INFO_MBR Mbr;
                       VDS_PARTITION_INFO_GPT Gpt;
        } ;
    } VDS_PARTITION_INFORMATION_EX;
typedef struct _CREATE_PARTITION_PARAMETERS
    {
    VDS_PARTITION_STYLE style;
                                          union
        {
                       struct
            {
            BYTE partitionType;
            BOOLEAN bootIndicator;
            } MbrPartInfo;
                       struct
            {
            GUID partitionType;
            GUID partitionId;
            ULONGLONG attributes;
            WCHAR name[ 36 ];
            } GptPartInfo;
        } ;
    } CREATE_PARTITION_PARAMETERS;
typedef struct _CHANGE_ATTRIBUTES_PARAMETERS
    {
    VDS_PARTITION_STYLE style;
                                          union
        {
                       struct
            {
            BOOLEAN bootIndicator;
            } MbrPartInfo;
                       struct
            {
            ULONGLONG attributes;
            } GptPartInfo;
        } ;
    } CHANGE_ATTRIBUTES_PARAMETERS;
typedef struct _CHANGE_PARTITION_TYPE_PARAMETERS
    {
    VDS_PARTITION_STYLE style;
                                          union
        {
                       struct
            {
            BYTE partitionType;
            } MbrPartInfo;
                       struct
            {
            GUID partitionType;
            } GptPartInfo;
        } ;
    } CHANGE_PARTITION_TYPE_PARAMETERS;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsSwProvider;
    typedef struct IVdsSwProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSwProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSwProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSwProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryPacks )(
            __RPC__in IVdsSwProvider * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *CreatePack )(
            __RPC__in IVdsSwProvider * This,
                        __RPC__deref_out_opt IVdsPack **ppPack);
        END_INTERFACE
    } IVdsSwProviderVtbl;
    interface IVdsSwProvider
    {
        CONST_VTBL struct IVdsSwProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryPacks(This,ppEnum) )
    ( (This)->lpVtbl -> CreatePack(This,ppPack) )
EXTERN_C const IID IID_IVdsPack;
    typedef struct IVdsPackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsPack * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsPack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsPack * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsPack * This,
                        __RPC__out VDS_PACK_PROP *pPackProp);
                           HRESULT ( STDMETHODCALLTYPE *GetProvider )(
            __RPC__in IVdsPack * This,
                        __RPC__deref_out_opt IVdsProvider **ppProvider);
                           HRESULT ( STDMETHODCALLTYPE *QueryVolumes )(
            __RPC__in IVdsPack * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryDisks )(
            __RPC__in IVdsPack * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *CreateVolume )(
            __RPC__in IVdsPack * This,
                       VDS_VOLUME_TYPE type,
                                __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
                       LONG lNumberOfDisks,
                       ULONG ulStripeSize,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *AddDisk )(
            __RPC__in IVdsPack * This,
                       VDS_OBJECT_ID DiskId,
                       VDS_PARTITION_STYLE PartitionStyle,
                       BOOL bAsHotSpare);
                           HRESULT ( STDMETHODCALLTYPE *MigrateDisks )(
            __RPC__in IVdsPack * This,
                                __RPC__in_ecount_full(lNumberOfDisks) VDS_OBJECT_ID *pDiskArray,
                       LONG lNumberOfDisks,
                       VDS_OBJECT_ID TargetPack,
                       BOOL bForce,
                       BOOL bQueryOnly,
                                 __RPC__out_ecount_full(lNumberOfDisks) HRESULT *pResults,
                        __RPC__out BOOL *pbRebootNeeded);
                           HRESULT ( STDMETHODCALLTYPE *ReplaceDisk )(
            __RPC__in IVdsPack * This,
                       VDS_OBJECT_ID OldDiskId,
                       VDS_OBJECT_ID NewDiskId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *RemoveMissingDisk )(
            __RPC__in IVdsPack * This,
                       VDS_OBJECT_ID DiskId);
                           HRESULT ( STDMETHODCALLTYPE *Recover )(
            __RPC__in IVdsPack * This,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsPackVtbl;
    interface IVdsPack
    {
        CONST_VTBL struct IVdsPackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pPackProp) )
    ( (This)->lpVtbl -> GetProvider(This,ppProvider) )
    ( (This)->lpVtbl -> QueryVolumes(This,ppEnum) )
    ( (This)->lpVtbl -> QueryDisks(This,ppEnum) )
    ( (This)->lpVtbl -> CreateVolume(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ppAsync) )
    ( (This)->lpVtbl -> AddDisk(This,DiskId,PartitionStyle,bAsHotSpare) )
    ( (This)->lpVtbl -> MigrateDisks(This,pDiskArray,lNumberOfDisks,TargetPack,bForce,bQueryOnly,pResults,pbRebootNeeded) )
    ( (This)->lpVtbl -> ReplaceDisk(This,OldDiskId,NewDiskId,ppAsync) )
    ( (This)->lpVtbl -> RemoveMissingDisk(This,DiskId) )
    ( (This)->lpVtbl -> Recover(This,ppAsync) )
EXTERN_C const IID IID_IVdsPack2;
    typedef struct IVdsPack2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsPack2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsPack2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsPack2 * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateVolume2 )(
            __RPC__in IVdsPack2 * This,
                       VDS_VOLUME_TYPE type,
                                __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
                       LONG lNumberOfDisks,
                       ULONG ulStripeSize,
                       ULONG ulAlign,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsPack2Vtbl;
    interface IVdsPack2
    {
        CONST_VTBL struct IVdsPack2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateVolume2(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ulAlign,ppAsync) )
EXTERN_C const IID IID_IVdsDisk;
    typedef struct IVdsDiskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDisk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDisk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDisk * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsDisk * This,
                        __RPC__out VDS_DISK_PROP *pDiskProperties);
                           HRESULT ( STDMETHODCALLTYPE *GetPack )(
            __RPC__in IVdsDisk * This,
                        __RPC__deref_out_opt IVdsPack **ppPack);
                           HRESULT ( STDMETHODCALLTYPE *GetIdentificationData )(
            __RPC__in IVdsDisk * This,
                        __RPC__out VDS_LUN_INFORMATION *pLunInfo);
                           HRESULT ( STDMETHODCALLTYPE *QueryExtents )(
            __RPC__in IVdsDisk * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DISK_EXTENT **ppExtentArray,
                        __RPC__out LONG *plNumberOfExtents);
                           HRESULT ( STDMETHODCALLTYPE *ConvertStyle )(
            __RPC__in IVdsDisk * This,
                       VDS_PARTITION_STYLE NewStyle);
                           HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in IVdsDisk * This,
                       ULONG ulFlags);
                           HRESULT ( STDMETHODCALLTYPE *ClearFlags )(
            __RPC__in IVdsDisk * This,
                       ULONG ulFlags);
        END_INTERFACE
    } IVdsDiskVtbl;
    interface IVdsDisk
    {
        CONST_VTBL struct IVdsDiskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pDiskProperties) )
    ( (This)->lpVtbl -> GetPack(This,ppPack) )
    ( (This)->lpVtbl -> GetIdentificationData(This,pLunInfo) )
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
    ( (This)->lpVtbl -> ConvertStyle(This,NewStyle) )
    ( (This)->lpVtbl -> SetFlags(This,ulFlags) )
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
EXTERN_C const IID IID_IVdsDisk2;
    typedef struct IVdsDisk2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDisk2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDisk2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDisk2 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetSANMode )(
            __RPC__in IVdsDisk2 * This,
                       BOOL bEnable);
        END_INTERFACE
    } IVdsDisk2Vtbl;
    interface IVdsDisk2
    {
        CONST_VTBL struct IVdsDisk2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSANMode(This,bEnable) )
EXTERN_C const IID IID_IVdsDiskOnline;
    typedef struct IVdsDiskOnlineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDiskOnline * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDiskOnline * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDiskOnline * This);
                           HRESULT ( STDMETHODCALLTYPE *Online )(
            __RPC__in IVdsDiskOnline * This);
                           HRESULT ( STDMETHODCALLTYPE *Offline )(
            __RPC__in IVdsDiskOnline * This);
        END_INTERFACE
    } IVdsDiskOnlineVtbl;
    interface IVdsDiskOnline
    {
        CONST_VTBL struct IVdsDiskOnlineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Online(This) )
    ( (This)->lpVtbl -> Offline(This) )
EXTERN_C const IID IID_IVdsAdvancedDisk;
    typedef struct IVdsAdvancedDiskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsAdvancedDisk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsAdvancedDisk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsAdvancedDisk * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPartitionProperties )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                        __RPC__out VDS_PARTITION_PROP *pPartitionProp);
                           HRESULT ( STDMETHODCALLTYPE *QueryPartitions )(
            __RPC__in IVdsAdvancedDisk * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfPartitions) VDS_PARTITION_PROP **ppPartitionPropArray,
                        __RPC__out LONG *plNumberOfPartitions);
                           HRESULT ( STDMETHODCALLTYPE *CreatePartition )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                       ULONGLONG ullSize,
                       __RPC__in CREATE_PARTITION_PARAMETERS *para,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *DeletePartition )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                       BOOL bForce,
                       BOOL bForceProtected);
                           HRESULT ( STDMETHODCALLTYPE *ChangeAttributes )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                       __RPC__in CHANGE_ATTRIBUTES_PARAMETERS *para);
                           HRESULT ( STDMETHODCALLTYPE *AssignDriveLetter )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                       WCHAR wcLetter);
                           HRESULT ( STDMETHODCALLTYPE *DeleteDriveLetter )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                       WCHAR wcLetter);
                           HRESULT ( STDMETHODCALLTYPE *GetDriveLetter )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                        __RPC__out WCHAR *pwcLetter);
                           HRESULT ( STDMETHODCALLTYPE *FormatPartition )(
            __RPC__in IVdsAdvancedDisk * This,
                       ULONGLONG ullOffset,
                       VDS_FILE_SYSTEM_TYPE type,
                               __RPC__in_string LPWSTR pwszLabel,
                       DWORD dwUnitAllocationSize,
                       BOOL bForce,
                       BOOL bQuickFormat,
                       BOOL bEnableCompression,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        HRESULT ( STDMETHODCALLTYPE *Clean )(
            __RPC__in IVdsAdvancedDisk * This,
                       BOOL bForce,
                       BOOL bForceOEM,
                       BOOL bFullClean,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsAdvancedDiskVtbl;
    interface IVdsAdvancedDisk
    {
        CONST_VTBL struct IVdsAdvancedDiskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartitionProperties(This,ullOffset,pPartitionProp) )
    ( (This)->lpVtbl -> QueryPartitions(This,ppPartitionPropArray,plNumberOfPartitions) )
    ( (This)->lpVtbl -> CreatePartition(This,ullOffset,ullSize,para,ppAsync) )
    ( (This)->lpVtbl -> DeletePartition(This,ullOffset,bForce,bForceProtected) )
    ( (This)->lpVtbl -> ChangeAttributes(This,ullOffset,para) )
    ( (This)->lpVtbl -> AssignDriveLetter(This,ullOffset,wcLetter) )
    ( (This)->lpVtbl -> DeleteDriveLetter(This,ullOffset,wcLetter) )
    ( (This)->lpVtbl -> GetDriveLetter(This,ullOffset,pwcLetter) )
    ( (This)->lpVtbl -> FormatPartition(This,ullOffset,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) )
    ( (This)->lpVtbl -> Clean(This,bForce,bForceOEM,bFullClean,ppAsync) )
EXTERN_C const IID IID_IVdsAdvancedDisk2;
    typedef struct IVdsAdvancedDisk2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsAdvancedDisk2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsAdvancedDisk2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsAdvancedDisk2 * This);
                           HRESULT ( STDMETHODCALLTYPE *ChangePartitionType )(
            __RPC__in IVdsAdvancedDisk2 * This,
                       ULONGLONG ullOffset,
                       BOOL bForce,
                       __RPC__in CHANGE_PARTITION_TYPE_PARAMETERS *para);
        END_INTERFACE
    } IVdsAdvancedDisk2Vtbl;
    interface IVdsAdvancedDisk2
    {
        CONST_VTBL struct IVdsAdvancedDisk2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ChangePartitionType(This,ullOffset,bForce,para) )
EXTERN_C const IID IID_IVdsAdvancedDisk3;
    typedef struct IVdsAdvancedDisk3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsAdvancedDisk3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsAdvancedDisk3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsAdvancedDisk3 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsAdvancedDisk3 * This,
                        __RPC__out VDS_ADVANCEDDISK_PROP *pAdvDiskProp);
                           HRESULT ( STDMETHODCALLTYPE *GetUniqueId )(
            __RPC__in IVdsAdvancedDisk3 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszId);
        END_INTERFACE
    } IVdsAdvancedDisk3Vtbl;
    interface IVdsAdvancedDisk3
    {
        CONST_VTBL struct IVdsAdvancedDisk3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pAdvDiskProp) )
    ( (This)->lpVtbl -> GetUniqueId(This,ppwszId) )
EXTERN_C const IID IID_IVdsCreatePartitionEx;
    typedef struct IVdsCreatePartitionExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsCreatePartitionEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsCreatePartitionEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsCreatePartitionEx * This);
                           HRESULT ( STDMETHODCALLTYPE *CreatePartitionEx )(
            __RPC__in IVdsCreatePartitionEx * This,
                       ULONGLONG ullOffset,
                       ULONGLONG ullSize,
                       ULONG ulAlign,
                       __RPC__in CREATE_PARTITION_PARAMETERS *para,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsCreatePartitionExVtbl;
    interface IVdsCreatePartitionEx
    {
        CONST_VTBL struct IVdsCreatePartitionExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePartitionEx(This,ullOffset,ullSize,ulAlign,para,ppAsync) )
EXTERN_C const IID IID_IVdsRemovable;
    typedef struct IVdsRemovableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsRemovable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsRemovable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsRemovable * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryMedia )(
            __RPC__in IVdsRemovable * This);
                           HRESULT ( STDMETHODCALLTYPE *Eject )(
            __RPC__in IVdsRemovable * This);
        END_INTERFACE
    } IVdsRemovableVtbl;
    interface IVdsRemovable
    {
        CONST_VTBL struct IVdsRemovableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryMedia(This) )
    ( (This)->lpVtbl -> Eject(This) )
EXTERN_C const IID IID_IVdsVolume;
    typedef struct IVdsVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolume * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolume * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsVolume * This,
                        __RPC__out VDS_VOLUME_PROP *pVolumeProperties);
                           HRESULT ( STDMETHODCALLTYPE *GetPack )(
            __RPC__in IVdsVolume * This,
                        __RPC__deref_out_opt IVdsPack **ppPack);
                           HRESULT ( STDMETHODCALLTYPE *QueryPlexes )(
            __RPC__in IVdsVolume * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *Extend )(
            __RPC__in IVdsVolume * This,
                                        __RPC__in_ecount_full_opt(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
                       LONG lNumberOfDisks,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *Shrink )(
            __RPC__in IVdsVolume * This,
                       ULONGLONG ullNumberOfBytesToRemove,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *AddPlex )(
            __RPC__in IVdsVolume * This,
                       VDS_OBJECT_ID VolumeId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *BreakPlex )(
            __RPC__in IVdsVolume * This,
                       VDS_OBJECT_ID plexId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *RemovePlex )(
            __RPC__in IVdsVolume * This,
                       VDS_OBJECT_ID plexId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IVdsVolume * This,
                       BOOL bForce);
                           HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in IVdsVolume * This,
                       ULONG ulFlags,
                       BOOL bRevertOnClose);
                           HRESULT ( STDMETHODCALLTYPE *ClearFlags )(
            __RPC__in IVdsVolume * This,
                       ULONG ulFlags);
        END_INTERFACE
    } IVdsVolumeVtbl;
    interface IVdsVolume
    {
        CONST_VTBL struct IVdsVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pVolumeProperties) )
    ( (This)->lpVtbl -> GetPack(This,ppPack) )
    ( (This)->lpVtbl -> QueryPlexes(This,ppEnum) )
    ( (This)->lpVtbl -> Extend(This,pInputDiskArray,lNumberOfDisks,ppAsync) )
    ( (This)->lpVtbl -> Shrink(This,ullNumberOfBytesToRemove,ppAsync) )
    ( (This)->lpVtbl -> AddPlex(This,VolumeId,ppAsync) )
    ( (This)->lpVtbl -> BreakPlex(This,plexId,ppAsync) )
    ( (This)->lpVtbl -> RemovePlex(This,plexId,ppAsync) )
    ( (This)->lpVtbl -> Delete(This,bForce) )
    ( (This)->lpVtbl -> SetFlags(This,ulFlags,bRevertOnClose) )
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
EXTERN_C const IID IID_IVdsVolume2;
    typedef struct IVdsVolume2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolume2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolume2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolume2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties2 )(
            __RPC__in IVdsVolume2 * This,
                        __RPC__out VDS_VOLUME_PROP2 *pVolumeProperties);
        END_INTERFACE
    } IVdsVolume2Vtbl;
    interface IVdsVolume2
    {
        CONST_VTBL struct IVdsVolume2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties2(This,pVolumeProperties) )
EXTERN_C const IID IID_IVdsVolumeOnline;
    typedef struct IVdsVolumeOnlineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolumeOnline * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolumeOnline * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolumeOnline * This);
                           HRESULT ( STDMETHODCALLTYPE *Online )(
            __RPC__in IVdsVolumeOnline * This);
        END_INTERFACE
    } IVdsVolumeOnlineVtbl;
    interface IVdsVolumeOnline
    {
        CONST_VTBL struct IVdsVolumeOnlineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Online(This) )
EXTERN_C const IID IID_IVdsVolumePlex;
    typedef struct IVdsVolumePlexVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolumePlex * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolumePlex * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolumePlex * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsVolumePlex * This,
                        __RPC__out VDS_VOLUME_PLEX_PROP *pPlexProperties);
                           HRESULT ( STDMETHODCALLTYPE *GetVolume )(
            __RPC__in IVdsVolumePlex * This,
                        __RPC__deref_out_opt IVdsVolume **ppVolume);
                           HRESULT ( STDMETHODCALLTYPE *QueryExtents )(
            __RPC__in IVdsVolumePlex * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DISK_EXTENT **ppExtentArray,
                        __RPC__out LONG *plNumberOfExtents);
                           HRESULT ( STDMETHODCALLTYPE *Repair )(
            __RPC__in IVdsVolumePlex * This,
                                __RPC__in_ecount_full(lNumberOfDisks) VDS_INPUT_DISK *pInputDiskArray,
                       LONG lNumberOfDisks,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsVolumePlexVtbl;
    interface IVdsVolumePlex
    {
        CONST_VTBL struct IVdsVolumePlexVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pPlexProperties) )
    ( (This)->lpVtbl -> GetVolume(This,ppVolume) )
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
    ( (This)->lpVtbl -> Repair(This,pInputDiskArray,lNumberOfDisks,ppAsync) )
EXTERN_C const IID IID_IVdsDisk3;
    typedef struct IVdsDisk3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDisk3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDisk3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDisk3 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties2 )(
            __RPC__in IVdsDisk3 * This,
                        __RPC__out VDS_DISK_PROP2 *pDiskProperties);
                           HRESULT ( STDMETHODCALLTYPE *QueryFreeExtents )(
            __RPC__in IVdsDisk3 * This,
                       ULONG ulAlign,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfFreeExtents) VDS_DISK_FREE_EXTENT **ppFreeExtentArray,
                        __RPC__out LONG *plNumberOfFreeExtents);
        END_INTERFACE
    } IVdsDisk3Vtbl;
    interface IVdsDisk3
    {
        CONST_VTBL struct IVdsDisk3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties2(This,pDiskProperties) )
    ( (This)->lpVtbl -> QueryFreeExtents(This,ulAlign,ppFreeExtentArray,plNumberOfFreeExtents) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _VDS_SUB_SYSTEM_STATUS
    {
        VDS_SSS_UNKNOWN = 0,
        VDS_SSS_ONLINE = 1,
        VDS_SSS_NOT_READY = 2,
        VDS_SSS_OFFLINE = 4,
        VDS_SSS_FAILED = 5,
        VDS_SSS_PARTIALLY_MANAGED = 9
    } VDS_SUB_SYSTEM_STATUS;
typedef enum _VDS_SUB_SYSTEM_STATUS *PVDS_SUB_SYSTEM_STATUS;
typedef
enum _VDS_SUB_SYSTEM_FLAG
    {
        VDS_SF_LUN_MASKING_CAPABLE = 0x1,
        VDS_SF_LUN_PLEXING_CAPABLE = 0x2,
        VDS_SF_LUN_REMAPPING_CAPABLE = 0x4,
        VDS_SF_DRIVE_EXTENT_CAPABLE = 0x8,
        VDS_SF_HARDWARE_CHECKSUM_CAPABLE = 0x10,
        VDS_SF_RADIUS_CAPABLE = 0x20,
        VDS_SF_READ_BACK_VERIFY_CAPABLE = 0x40,
        VDS_SF_WRITE_THROUGH_CACHING_CAPABLE = 0x80,
        VDS_SF_SUPPORTS_FAULT_TOLERANT_LUNS = 0x200,
        VDS_SF_SUPPORTS_NON_FAULT_TOLERANT_LUNS = 0x400,
        VDS_SF_SUPPORTS_SIMPLE_LUNS = 0x800,
        VDS_SF_SUPPORTS_SPAN_LUNS = 0x1000,
        VDS_SF_SUPPORTS_STRIPE_LUNS = 0x2000,
        VDS_SF_SUPPORTS_MIRROR_LUNS = 0x4000,
        VDS_SF_SUPPORTS_PARITY_LUNS = 0x8000,
        VDS_SF_SUPPORTS_AUTH_CHAP = 0x10000,
        VDS_SF_SUPPORTS_AUTH_MUTUAL_CHAP = 0x20000,
        VDS_SF_SUPPORTS_SIMPLE_TARGET_CONFIG = 0x40000,
        VDS_SF_SUPPORTS_LUN_NUMBER = 0x80000,
        VDS_SF_SUPPORTS_MIRRORED_CACHE = 0x100000,
        VDS_SF_READ_CACHING_CAPABLE = 0x200000,
        VDS_SF_WRITE_CACHING_CAPABLE = 0x400000,
        VDS_SF_MEDIA_SCAN_CAPABLE = 0x800000,
        VDS_SF_CONSISTENCY_CHECK_CAPABLE = 0x1000000
    } VDS_SUB_SYSTEM_FLAG;
typedef enum _VDS_SUB_SYSTEM_FLAG *PVDS_SUB_SYSTEM_FLAG;
typedef
enum _VDS_SUB_SYSTEM_SUPPORTED_RAID_TYPE_FLAG
    {
        VDS_SF_SUPPORTS_RAID2_LUNS = 0x1,
        VDS_SF_SUPPORTS_RAID3_LUNS = 0x2,
        VDS_SF_SUPPORTS_RAID4_LUNS = 0x4,
        VDS_SF_SUPPORTS_RAID5_LUNS = 0x8,
        VDS_SF_SUPPORTS_RAID6_LUNS = 0x10,
        VDS_SF_SUPPORTS_RAID01_LUNS = 0x20,
        VDS_SF_SUPPORTS_RAID03_LUNS = 0x40,
        VDS_SF_SUPPORTS_RAID05_LUNS = 0x80,
        VDS_SF_SUPPORTS_RAID10_LUNS = 0x100,
        VDS_SF_SUPPORTS_RAID15_LUNS = 0x200,
        VDS_SF_SUPPORTS_RAID30_LUNS = 0x400,
        VDS_SF_SUPPORTS_RAID50_LUNS = 0x800,
        VDS_SF_SUPPORTS_RAID51_LUNS = 0x1000,
        VDS_SF_SUPPORTS_RAID53_LUNS = 0x2000,
        VDS_SF_SUPPORTS_RAID60_LUNS = 0x4000,
        VDS_SF_SUPPORTS_RAID61_LUNS = 0x8000
    } VDS_SUB_SYSTEM_SUPPORTED_RAID_TYPE_FLAG;
typedef enum _VDS_SUB_SYSTEM_SUPPORTED_RAID_TYPE_FLAG *PVDS_SUB_SYSTEM_SUPPORTED_RAID_TYPE_FLAG;
typedef
enum _VDS_INTERCONNECT_FLAG
    {
        VDS_ITF_PCI_RAID = 0x1,
        VDS_ITF_FIBRE_CHANNEL = 0x2,
        VDS_ITF_ISCSI = 0x4,
        VDS_ITF_SAS = 0x8
    } VDS_INTERCONNECT_FLAG;
typedef enum _VDS_INTERCONNECT_FLAG *PVDS_INTERCONNECT_FLAG;
typedef
enum _VDS_CONTROLLER_STATUS
    {
        VDS_CS_UNKNOWN = 0,
        VDS_CS_ONLINE = 1,
        VDS_CS_NOT_READY = 2,
        VDS_CS_OFFLINE = 4,
        VDS_CS_FAILED = 5,
        VDS_CS_REMOVED = 8
    } VDS_CONTROLLER_STATUS;
typedef enum _VDS_CONTROLLER_STATUS *PVDS_CONTROLLER_STATUS;
typedef
enum _VDS_PORT_STATUS
    {
        VDS_PRS_UNKNOWN = 0,
        VDS_PRS_ONLINE = 1,
        VDS_PRS_NOT_READY = 2,
        VDS_PRS_OFFLINE = 4,
        VDS_PRS_FAILED = 5,
        VDS_PRS_REMOVED = 8
    } VDS_PORT_STATUS;
typedef enum _VDS_PORT_STATUS *PVDS_PORT_STATUS;
typedef
enum _VDS_DRIVE_STATUS
    {
        VDS_DRS_UNKNOWN = 0,
        VDS_DRS_ONLINE = 1,
        VDS_DRS_NOT_READY = 2,
        VDS_DRS_OFFLINE = 4,
        VDS_DRS_FAILED = 5,
        VDS_DRS_REMOVED = 8
    } VDS_DRIVE_STATUS;
typedef enum _VDS_DRIVE_STATUS *PVDS_DRIVE_STATUS;
typedef
enum _VDS_DRIVE_FLAG
    {
        VDS_DRF_HOTSPARE = 0x1,
        VDS_DRF_ASSIGNED = 0x2,
        VDS_DRF_UNASSIGNED = 0x4,
        VDS_DRF_HOTSPARE_IN_USE = 0x8,
        VDS_DRF_HOTSPARE_STANDBY = 0x10
    } VDS_DRIVE_FLAG;
typedef enum _VDS_DRIVE_FLAG *PVDS_DRIVE_FLAG;
typedef
enum _VDS_LUN_TYPE
    {
        VDS_LT_UNKNOWN = 0,
        VDS_LT_DEFAULT = 1,
        VDS_LT_FAULT_TOLERANT = 2,
        VDS_LT_NON_FAULT_TOLERANT = 3,
        VDS_LT_SIMPLE = 10,
        VDS_LT_SPAN = 11,
        VDS_LT_STRIPE = 12,
        VDS_LT_MIRROR = 13,
        VDS_LT_PARITY = 14,
        VDS_LT_RAID2 = 15,
        VDS_LT_RAID3 = 16,
        VDS_LT_RAID4 = 17,
        VDS_LT_RAID5 = 18,
        VDS_LT_RAID6 = 19,
        VDS_LT_RAID01 = 20,
        VDS_LT_RAID03 = 21,
        VDS_LT_RAID05 = 22,
        VDS_LT_RAID10 = 23,
        VDS_LT_RAID15 = 24,
        VDS_LT_RAID30 = 25,
        VDS_LT_RAID50 = 26,
        VDS_LT_RAID51 = 27,
        VDS_LT_RAID53 = 28,
        VDS_LT_RAID60 = 29,
        VDS_LT_RAID61 = 30
    } VDS_LUN_TYPE;
typedef enum _VDS_LUN_TYPE *PVDS_LUN_TYPE;
typedef
enum _VDS_LUN_STATUS
    {
        VDS_LS_UNKNOWN = 0,
        VDS_LS_ONLINE = 1,
        VDS_LS_NOT_READY = 2,
        VDS_LS_OFFLINE = 4,
        VDS_LS_FAILED = 5
    } VDS_LUN_STATUS;
typedef enum _VDS_LUN_STATUS *PVDS_LUN_STATUS;
typedef
enum _VDS_LUN_FLAG
    {
        VDS_LF_LBN_REMAP_ENABLED = 0x1,
        VDS_LF_READ_BACK_VERIFY_ENABLED = 0x2,
        VDS_LF_WRITE_THROUGH_CACHING_ENABLED = 0x4,
        VDS_LF_HARDWARE_CHECKSUM_ENABLED = 0x8,
        VDS_LF_READ_CACHE_ENABLED = 0x10,
        VDS_LF_WRITE_CACHE_ENABLED = 0x20,
        VDS_LF_MEDIA_SCAN_ENABLED = 0x40,
        VDS_LF_CONSISTENCY_CHECK_ENABLED = 0x80,
        VDS_LF_SNAPSHOT = 0x100
    } VDS_LUN_FLAG;
typedef enum _VDS_LUN_FLAG *PVDS_LUN_FLAG;
typedef
enum _VDS_LUN_PLEX_TYPE
    {
        VDS_LPT_UNKNOWN = 0,
        VDS_LPT_SIMPLE = VDS_LT_SIMPLE,
        VDS_LPT_SPAN = VDS_LT_SPAN,
        VDS_LPT_STRIPE = VDS_LT_STRIPE,
        VDS_LPT_PARITY = VDS_LT_PARITY,
        VDS_LPT_RAID2 = VDS_LT_RAID2,
        VDS_LPT_RAID3 = VDS_LT_RAID3,
        VDS_LPT_RAID4 = VDS_LT_RAID4,
        VDS_LPT_RAID5 = VDS_LT_RAID5,
        VDS_LPT_RAID6 = VDS_LT_RAID6,
        VDS_LPT_RAID03 = VDS_LT_RAID03,
        VDS_LPT_RAID05 = VDS_LT_RAID05,
        VDS_LPT_RAID10 = VDS_LT_RAID10,
        VDS_LPT_RAID15 = VDS_LT_RAID15,
        VDS_LPT_RAID30 = VDS_LT_RAID30,
        VDS_LPT_RAID50 = VDS_LT_RAID50,
        VDS_LPT_RAID53 = VDS_LT_RAID53,
        VDS_LPT_RAID60 = VDS_LT_RAID60
    } VDS_LUN_PLEX_TYPE;
typedef
enum _VDS_LUN_PLEX_STATUS
    {
        VDS_LPS_UNKNOWN = 0,
        VDS_LPS_ONLINE = 1,
        VDS_LPS_NOT_READY = 2,
        VDS_LPS_OFFLINE = 4,
        VDS_LPS_FAILED = 5
    } VDS_LUN_PLEX_STATUS;
typedef
enum _VDS_LUN_PLEX_FLAG
    {
        VDS_LPF_LBN_REMAP_ENABLED = VDS_LF_LBN_REMAP_ENABLED
    } VDS_LUN_PLEX_FLAG;
typedef
enum _VDS_ISCSI_PORTAL_STATUS
    {
        VDS_IPS_UNKNOWN = 0,
        VDS_IPS_ONLINE = 1,
        VDS_IPS_NOT_READY = 2,
        VDS_IPS_OFFLINE = 4,
        VDS_IPS_FAILED = 5
    } VDS_ISCSI_PORTAL_STATUS;
typedef
enum _VDS_STORAGE_POOL_STATUS
    {
        VDS_SPS_UNKNOWN = 0,
        VDS_SPS_ONLINE = 1,
        VDS_SPS_NOT_READY = 2,
        VDS_SPS_OFFLINE = 4
    } VDS_STORAGE_POOL_STATUS;
typedef
enum _VDS_STORAGE_POOL_TYPE
    {
        VDS_SPT_UNKNOWN = 0,
        VDS_SPT_PRIMORDIAL = 0x1,
        VDS_SPT_CONCRETE = 0x2
    } VDS_STORAGE_POOL_TYPE;
typedef
enum _VDS_MAINTENANCE_OPERATION
    {
        BlinkLight = 1,
        BeepAlarm = 2,
        SpinDown = 3,
        SpinUp = 4,
        Ping = 5
    } VDS_MAINTENANCE_OPERATION;
typedef struct _VDS_HINTS
    {
    ULONGLONG ullHintMask;
    ULONGLONG ullExpectedMaximumSize;
    ULONG ulOptimalReadSize;
    ULONG ulOptimalReadAlignment;
    ULONG ulOptimalWriteSize;
    ULONG ulOptimalWriteAlignment;
    ULONG ulMaximumDriveCount;
    ULONG ulStripeSize;
    BOOL bFastCrashRecoveryRequired;
    BOOL bMostlyReads;
    BOOL bOptimizeForSequentialReads;
    BOOL bOptimizeForSequentialWrites;
    BOOL bRemapEnabled;
    BOOL bReadBackVerifyEnabled;
    BOOL bWriteThroughCachingEnabled;
    BOOL bHardwareChecksumEnabled;
    BOOL bIsYankable;
    SHORT sRebuildPriority;
    } VDS_HINTS;
typedef struct _VDS_HINTS *PVDS_HINTS;
typedef struct _VDS_HINTS2
    {
    ULONGLONG ullHintMask;
    ULONGLONG ullExpectedMaximumSize;
    ULONG ulOptimalReadSize;
    ULONG ulOptimalReadAlignment;
    ULONG ulOptimalWriteSize;
    ULONG ulOptimalWriteAlignment;
    ULONG ulMaximumDriveCount;
    ULONG ulStripeSize;
    ULONG ulReserved1;
    ULONG ulReserved2;
    ULONG ulReserved3;
    BOOL bFastCrashRecoveryRequired;
    BOOL bMostlyReads;
    BOOL bOptimizeForSequentialReads;
    BOOL bOptimizeForSequentialWrites;
    BOOL bRemapEnabled;
    BOOL bReadBackVerifyEnabled;
    BOOL bWriteThroughCachingEnabled;
    BOOL bHardwareChecksumEnabled;
    BOOL bIsYankable;
    BOOL bAllocateHotSpare;
    BOOL bUseMirroredCache;
    BOOL bReadCachingEnabled;
    BOOL bWriteCachingEnabled;
    BOOL bMediaScanEnabled;
    BOOL bConsistencyCheckEnabled;
    VDS_STORAGE_BUS_TYPE BusType;
    BOOL bReserved1;
    BOOL bReserved2;
    BOOL bReserved3;
    SHORT sRebuildPriority;
    } VDS_HINTS2;
typedef struct _VDS_HINTS2 *PVDS_HINTS2;
typedef struct _VDS_SUB_SYSTEM_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
    ULONG ulFlags;
    ULONG ulStripeSizeFlags;
    VDS_SUB_SYSTEM_STATUS status;
    VDS_HEALTH health;
    SHORT sNumberOfInternalBuses;
    SHORT sMaxNumberOfSlotsEachBus;
    SHORT sMaxNumberOfControllers;
    SHORT sRebuildPriority;
    } VDS_SUB_SYSTEM_PROP;
typedef struct _VDS_SUB_SYSTEM_PROP *PVDS_SUB_SYSTEM_PROP;
typedef struct _VDS_SUB_SYSTEM_PROP2
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
    ULONG ulFlags;
    ULONG ulStripeSizeFlags;
    ULONG ulSupportedRaidTypeFlags;
    VDS_SUB_SYSTEM_STATUS status;
    VDS_HEALTH health;
    SHORT sNumberOfInternalBuses;
    SHORT sMaxNumberOfSlotsEachBus;
    SHORT sMaxNumberOfControllers;
    SHORT sRebuildPriority;
    ULONG ulNumberOfEnclosures;
    } VDS_SUB_SYSTEM_PROP2;
typedef struct _VDS_SUB_SYSTEM_PROP2 *PVDS_SUB_SYSTEM_PROP2;
typedef struct _VDS_CONTROLLER_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
    VDS_CONTROLLER_STATUS status;
    VDS_HEALTH health;
    SHORT sNumberOfPorts;
    } VDS_CONTROLLER_PROP;
typedef struct _VDS_CONTROLLER_PROP *PVDS_CONTROLLER_PROP;
typedef struct _VDS_DRIVE_PROP
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
    ULONG ulFlags;
    VDS_DRIVE_STATUS status;
    VDS_HEALTH health;
    SHORT sInternalBusNumber;
    SHORT sSlotNumber;
    } VDS_DRIVE_PROP;
typedef struct _VDS_DRIVE_PROP *PVDS_DRIVE_PROP;
typedef struct _VDS_DRIVE_PROP2
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
    ULONG ulFlags;
    VDS_DRIVE_STATUS status;
    VDS_HEALTH health;
    SHORT sInternalBusNumber;
    SHORT sSlotNumber;
    ULONG ulEnclosureNumber;
    VDS_STORAGE_BUS_TYPE busType;
    ULONG ulSpindleSpeed;
    } VDS_DRIVE_PROP2;
typedef struct _VDS_DRIVE_PROP2 *PVDS_DRIVE_PROP2;
typedef struct _VDS_DRIVE_EXTENT
    {
    VDS_OBJECT_ID id;
    VDS_OBJECT_ID LunId;
    ULONGLONG ullSize;
    BOOL bUsed;
    } VDS_DRIVE_EXTENT;
typedef struct _VDS_DRIVE_EXTENT *PVDS_DRIVE_EXTENT;
typedef struct _VDS_LUN_PROP
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
                   LPWSTR pwszUnmaskingList;
    ULONG ulFlags;
    VDS_LUN_TYPE type;
    VDS_LUN_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    SHORT sRebuildPriority;
    } VDS_LUN_PROP;
typedef struct _VDS_LUN_PROP *PVDS_LUN_PROP;
typedef struct _VDS_LUN_PLEX_PROP
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
    VDS_LUN_PLEX_TYPE type;
    VDS_LUN_PLEX_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONG ulFlags;
    ULONG ulStripeSize;
    SHORT sRebuildPriority;
    } VDS_LUN_PLEX_PROP;
typedef struct _VDS_LUN_PLEX_PROP *PVDS_LUN_PLEX_PROP;
typedef struct _VDS_PORT_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszFriendlyName;
                   LPWSTR pwszIdentification;
    VDS_PORT_STATUS status;
    } VDS_PORT_PROP;
typedef struct _VDS_PORT_PROP *PVDS_PORT_PROP;
typedef struct _VDS_ISCSI_PORTAL_PROP
    {
    VDS_OBJECT_ID id;
    VDS_IPADDRESS address;
    VDS_ISCSI_PORTAL_STATUS status;
    } VDS_ISCSI_PORTAL_PROP;
typedef struct _VDS_ISCSI_PORTAL_PROP *PVDS_ISCSI_PORTAL_PROP;
typedef struct _VDS_ISCSI_TARGET_PROP
    {
    VDS_OBJECT_ID id;
                   LPWSTR pwszIscsiName;
                   LPWSTR pwszFriendlyName;
    BOOL bChapEnabled;
    } VDS_ISCSI_TARGET_PROP;
typedef struct _VDS_ISCSI_TARGET_PROP *PVDS_ISCSI_TARGET_PROP;
typedef struct _VDS_ISCSI_PORTALGROUP_PROP
    {
    VDS_OBJECT_ID id;
    VDS_ISCSI_PORTALGROUP_TAG tag;
    } VDS_ISCSI_PORTALGROUP_PROP;
typedef struct _VDS_ISCSI_PORTALGROUP_PROP *PVDS_ISCSI_PORTALGROUP_PROP;
typedef
enum _VDS_RAID_TYPE
    {
        VDS_RT_UNKNOWN = 0,
        VDS_RT_RAID0 = 10,
        VDS_RT_RAID1 = 11,
        VDS_RT_RAID2 = 12,
        VDS_RT_RAID3 = 13,
        VDS_RT_RAID4 = 14,
        VDS_RT_RAID5 = 15,
        VDS_RT_RAID6 = 16,
        VDS_RT_RAID01 = 17,
        VDS_RT_RAID03 = 18,
        VDS_RT_RAID05 = 19,
        VDS_RT_RAID10 = 20,
        VDS_RT_RAID15 = 21,
        VDS_RT_RAID30 = 22,
        VDS_RT_RAID50 = 23,
        VDS_RT_RAID51 = 24,
        VDS_RT_RAID53 = 25,
        VDS_RT_RAID60 = 26,
        VDS_RT_RAID61 = 27
    } VDS_RAID_TYPE;
typedef enum _VDS_RAID_TYPE *PVDS_RAID_TYPE;
typedef struct _VDS_POOL_CUSTOM_ATTRIBUTES
    {
    LPWSTR pwszName;
    LPWSTR pwszValue;
    } VDS_POOL_CUSTOM_ATTRIBUTES;
typedef struct _VDS_POOL_CUSTOM_ATTRIBUTES *PVDS_POOL_CUSTOM_ATTRIBUTES;
typedef struct _VDS_POOL_ATTRIBUTES
    {
    ULONGLONG ullAttributeMask;
    VDS_RAID_TYPE raidType;
    VDS_STORAGE_BUS_TYPE busType;
    LPWSTR pwszIntendedUsage;
    BOOL bSpinDown;
    BOOL bIsThinProvisioned;
    ULONGLONG ullProvisionedSpace;
    BOOL bNoSinglePointOfFailure;
    ULONG ulDataRedundancyMax;
    ULONG ulDataRedundancyMin;
    ULONG ulDataRedundancyDefault;
    ULONG ulPackageRedundancyMax;
    ULONG ulPackageRedundancyMin;
    ULONG ulPackageRedundancyDefault;
    ULONG ulStripeSize;
    ULONG ulStripeSizeMax;
    ULONG ulStripeSizeMin;
    ULONG ulDefaultStripeSize;
    ULONG ulNumberOfColumns;
    ULONG ulNumberOfColumnsMax;
    ULONG ulNumberOfColumnsMin;
    ULONG ulDefaultNumberofColumns;
    ULONG ulDataAvailabilityHint;
    ULONG ulAccessRandomnessHint;
    ULONG ulAccessDirectionHint;
    ULONG ulAccessSizeHint;
    ULONG ulAccessLatencyHint;
    ULONG ulAccessBandwidthWeightHint;
    ULONG ulStorageCostHint;
    ULONG ulStorageEfficiencyHint;
    ULONG ulNumOfCustomAttributes;
                    VDS_POOL_CUSTOM_ATTRIBUTES *pPoolCustomAttributes;
    BOOL bReserved1;
    BOOL bReserved2;
    ULONG ulReserved1;
    ULONG ulReserved2;
    ULONGLONG ullReserved1;
    ULONGLONG ullReserved2;
    } VDS_POOL_ATTRIBUTES;
typedef struct _VDS_POOL_ATTRIBUTES *PVDS_POOL_ATTRIBUTES;
typedef struct _VDS_STORAGE_POOL_PROP
    {
    VDS_OBJECT_ID id;
    VDS_STORAGE_POOL_STATUS status;
    VDS_HEALTH health;
    VDS_STORAGE_POOL_TYPE type;
                   LPWSTR pwszName;
                   LPWSTR pwszDescription;
    ULONGLONG ullTotalConsumedSpace;
    ULONGLONG ullTotalManagedSpace;
    ULONGLONG ullRemainingFreeSpace;
    } VDS_STORAGE_POOL_PROP;
typedef struct _VDS_STORAGE_POOL_PROP *PVDS_STORAGE_POOL_PROP;
typedef struct _VDS_STORAGE_POOL_DRIVE_EXTENT
    {
    VDS_OBJECT_ID id;
    ULONGLONG ullSize;
    BOOL bUsed;
    } VDS_STORAGE_POOL_DRIVE_EXTENT;
typedef struct _VDS_STORAGE_POOL_DRIVE_EXTENT *PVDS_STORAGE_POOL_DRIVE_EXTENT;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsHwProvider;
    typedef struct IVdsHwProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHwProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHwProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHwProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *QuerySubSystems )(
            __RPC__in IVdsHwProvider * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *Reenumerate )(
            __RPC__in IVdsHwProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IVdsHwProvider * This);
        END_INTERFACE
    } IVdsHwProviderVtbl;
    interface IVdsHwProvider
    {
        CONST_VTBL struct IVdsHwProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QuerySubSystems(This,ppEnum) )
    ( (This)->lpVtbl -> Reenumerate(This) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID_IVdsHwProviderType;
    typedef struct IVdsHwProviderTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHwProviderType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHwProviderType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHwProviderType * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProviderType )(
            __RPC__in IVdsHwProviderType * This,
                        __RPC__out VDS_HWPROVIDER_TYPE *pType);
        END_INTERFACE
    } IVdsHwProviderTypeVtbl;
    interface IVdsHwProviderType
    {
        CONST_VTBL struct IVdsHwProviderTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProviderType(This,pType) )
EXTERN_C const IID IID_IVdsHwProviderType2;
    typedef struct IVdsHwProviderType2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHwProviderType2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHwProviderType2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHwProviderType2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProviderType2 )(
            __RPC__in IVdsHwProviderType2 * This,
                        __RPC__out VDS_HWPROVIDER_TYPE *pType);
        END_INTERFACE
    } IVdsHwProviderType2Vtbl;
    interface IVdsHwProviderType2
    {
        CONST_VTBL struct IVdsHwProviderType2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProviderType2(This,pType) )
EXTERN_C const IID IID_IVdsHwProviderStoragePools;
    typedef struct IVdsHwProviderStoragePoolsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHwProviderStoragePools * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHwProviderStoragePools * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHwProviderStoragePools * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryStoragePools )(
            __RPC__in IVdsHwProviderStoragePools * This,
                       ULONG ulFlags,
                       ULONGLONG ullRemainingFreeSpace,
                               __RPC__in_opt VDS_POOL_ATTRIBUTES *pPoolAttributes,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *CreateLunInStoragePool )(
            __RPC__in IVdsHwProviderStoragePools * This,
                       VDS_LUN_TYPE type,
                       ULONGLONG ullSizeInBytes,
                       VDS_OBJECT_ID StoragePoolId,
                               __RPC__in_string LPWSTR pwszUnmaskingList,
                               __RPC__in_opt VDS_HINTS2 *pHints2,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *QueryMaxLunCreateSizeInStoragePool )(
            __RPC__in IVdsHwProviderStoragePools * This,
                       VDS_LUN_TYPE type,
                       VDS_OBJECT_ID StoragePoolId,
                               __RPC__in_opt VDS_HINTS2 *pHints2,
                        __RPC__out ULONGLONG *pullMaxLunSize);
        END_INTERFACE
    } IVdsHwProviderStoragePoolsVtbl;
    interface IVdsHwProviderStoragePools
    {
        CONST_VTBL struct IVdsHwProviderStoragePoolsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryStoragePools(This,ulFlags,ullRemainingFreeSpace,pPoolAttributes,ppEnum) )
    ( (This)->lpVtbl -> CreateLunInStoragePool(This,type,ullSizeInBytes,StoragePoolId,pwszUnmaskingList,pHints2,ppAsync) )
    ( (This)->lpVtbl -> QueryMaxLunCreateSizeInStoragePool(This,type,StoragePoolId,pHints2,pullMaxLunSize) )
EXTERN_C const IID IID_IVdsSubSystem;
    typedef struct IVdsSubSystemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSubSystem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSubSystem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSubSystem * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsSubSystem * This,
                        __RPC__out VDS_SUB_SYSTEM_PROP *pSubSystemProp);
                           HRESULT ( STDMETHODCALLTYPE *GetProvider )(
            __RPC__in IVdsSubSystem * This,
                        __RPC__deref_out_opt IVdsProvider **ppProvider);
                           HRESULT ( STDMETHODCALLTYPE *QueryControllers )(
            __RPC__in IVdsSubSystem * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryLuns )(
            __RPC__in IVdsSubSystem * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryDrives )(
            __RPC__in IVdsSubSystem * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetDrive )(
            __RPC__in IVdsSubSystem * This,
                       SHORT sBusNumber,
                       SHORT sSlotNumber,
                        __RPC__deref_out_opt IVdsDrive **ppDrive);
                           HRESULT ( STDMETHODCALLTYPE *Reenumerate )(
            __RPC__in IVdsSubSystem * This);
                           HRESULT ( STDMETHODCALLTYPE *SetControllerStatus )(
            __RPC__in IVdsSubSystem * This,
                                __RPC__in_ecount_full(lNumberOfOnlineControllers) VDS_OBJECT_ID *pOnlineControllerIdArray,
                       LONG lNumberOfOnlineControllers,
                                __RPC__in_ecount_full(lNumberOfOfflineControllers) VDS_OBJECT_ID *pOfflineControllerIdArray,
                       LONG lNumberOfOfflineControllers);
                           HRESULT ( STDMETHODCALLTYPE *CreateLun )(
            __RPC__in IVdsSubSystem * This,
                       VDS_LUN_TYPE type,
                       ULONGLONG ullSizeInBytes,
                                        __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
                       LONG lNumberOfDrives,
                               __RPC__in_string LPWSTR pwszUnmaskingList,
                               __RPC__in_opt VDS_HINTS *pHints,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *ReplaceDrive )(
            __RPC__in IVdsSubSystem * This,
                       VDS_OBJECT_ID DriveToBeReplaced,
                       VDS_OBJECT_ID ReplacementDrive);
                           HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IVdsSubSystem * This,
                       VDS_SUB_SYSTEM_STATUS status);
                           HRESULT ( STDMETHODCALLTYPE *QueryMaxLunCreateSize )(
            __RPC__in IVdsSubSystem * This,
                       VDS_LUN_TYPE type,
                                        __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
                       LONG lNumberOfDrives,
                               __RPC__in_opt VDS_HINTS *pHints,
                        __RPC__out ULONGLONG *pullMaxLunSize);
        END_INTERFACE
    } IVdsSubSystemVtbl;
    interface IVdsSubSystem
    {
        CONST_VTBL struct IVdsSubSystemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pSubSystemProp) )
    ( (This)->lpVtbl -> GetProvider(This,ppProvider) )
    ( (This)->lpVtbl -> QueryControllers(This,ppEnum) )
    ( (This)->lpVtbl -> QueryLuns(This,ppEnum) )
    ( (This)->lpVtbl -> QueryDrives(This,ppEnum) )
    ( (This)->lpVtbl -> GetDrive(This,sBusNumber,sSlotNumber,ppDrive) )
    ( (This)->lpVtbl -> Reenumerate(This) )
    ( (This)->lpVtbl -> SetControllerStatus(This,pOnlineControllerIdArray,lNumberOfOnlineControllers,pOfflineControllerIdArray,lNumberOfOfflineControllers) )
    ( (This)->lpVtbl -> CreateLun(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints,ppAsync) )
    ( (This)->lpVtbl -> ReplaceDrive(This,DriveToBeReplaced,ReplacementDrive) )
    ( (This)->lpVtbl -> SetStatus(This,status) )
    ( (This)->lpVtbl -> QueryMaxLunCreateSize(This,type,pDriveIdArray,lNumberOfDrives,pHints,pullMaxLunSize) )
EXTERN_C const IID IID_IVdsSubSystem2;
    typedef struct IVdsSubSystem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSubSystem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSubSystem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSubSystem2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties2 )(
            __RPC__in IVdsSubSystem2 * This,
                        __RPC__out VDS_SUB_SYSTEM_PROP2 *pSubSystemProp2);
                           HRESULT ( STDMETHODCALLTYPE *GetDrive2 )(
            __RPC__in IVdsSubSystem2 * This,
                       SHORT sBusNumber,
                       SHORT sSlotNumber,
                       ULONG ulEnclosureNumber,
                        __RPC__deref_out_opt IVdsDrive **ppDrive);
                           HRESULT ( STDMETHODCALLTYPE *CreateLun2 )(
            __RPC__in IVdsSubSystem2 * This,
                       VDS_LUN_TYPE type,
                       ULONGLONG ullSizeInBytes,
                                        __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
                       LONG lNumberOfDrives,
                               __RPC__in_string LPWSTR pwszUnmaskingList,
                               __RPC__in_opt VDS_HINTS2 *pHints2,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *QueryMaxLunCreateSize2 )(
            __RPC__in IVdsSubSystem2 * This,
                       VDS_LUN_TYPE type,
                                        __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
                       LONG lNumberOfDrives,
                               __RPC__in_opt VDS_HINTS2 *pHints2,
                        __RPC__out ULONGLONG *pullMaxLunSize);
        END_INTERFACE
    } IVdsSubSystem2Vtbl;
    interface IVdsSubSystem2
    {
        CONST_VTBL struct IVdsSubSystem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties2(This,pSubSystemProp2) )
    ( (This)->lpVtbl -> GetDrive2(This,sBusNumber,sSlotNumber,ulEnclosureNumber,ppDrive) )
    ( (This)->lpVtbl -> CreateLun2(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints2,ppAsync) )
    ( (This)->lpVtbl -> QueryMaxLunCreateSize2(This,type,pDriveIdArray,lNumberOfDrives,pHints2,pullMaxLunSize) )
EXTERN_C const IID IID_IVdsSubSystemNaming;
    typedef struct IVdsSubSystemNamingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSubSystemNaming * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSubSystemNaming * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSubSystemNaming * This);
        HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )(
            __RPC__in IVdsSubSystemNaming * This,
                               __RPC__in_string LPWSTR pwszFriendlyName);
        END_INTERFACE
    } IVdsSubSystemNamingVtbl;
    interface IVdsSubSystemNaming
    {
        CONST_VTBL struct IVdsSubSystemNamingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) )
EXTERN_C const IID IID_IVdsSubSystemIscsi;
    typedef struct IVdsSubSystemIscsiVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSubSystemIscsi * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSubSystemIscsi * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSubSystemIscsi * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryTargets )(
            __RPC__in IVdsSubSystemIscsi * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryPortals )(
            __RPC__in IVdsSubSystemIscsi * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *CreateTarget )(
            __RPC__in IVdsSubSystemIscsi * This,
                                       __RPC__in_opt_string LPWSTR pwszIscsiName,
                               __RPC__in_string LPWSTR pwszFriendlyName,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecGroupPresharedKey )(
            __RPC__in IVdsSubSystemIscsi * This,
                               __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        END_INTERFACE
    } IVdsSubSystemIscsiVtbl;
    interface IVdsSubSystemIscsi
    {
        CONST_VTBL struct IVdsSubSystemIscsiVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryTargets(This,ppEnum) )
    ( (This)->lpVtbl -> QueryPortals(This,ppEnum) )
    ( (This)->lpVtbl -> CreateTarget(This,pwszIscsiName,pwszFriendlyName,ppAsync) )
    ( (This)->lpVtbl -> SetIpsecGroupPresharedKey(This,pIpsecKey) )
EXTERN_C const IID IID_IVdsSubSystemInterconnect;
    typedef struct IVdsSubSystemInterconnectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSubSystemInterconnect * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSubSystemInterconnect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSubSystemInterconnect * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedInterconnects )(
            __RPC__in IVdsSubSystemInterconnect * This,
                        __RPC__out ULONG *pulSupportedInterconnectsFlag);
        END_INTERFACE
    } IVdsSubSystemInterconnectVtbl;
    interface IVdsSubSystemInterconnect
    {
        CONST_VTBL struct IVdsSubSystemInterconnectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedInterconnects(This,pulSupportedInterconnectsFlag) )
EXTERN_C const IID IID_IVdsControllerPort;
    typedef struct IVdsControllerPortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsControllerPort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsControllerPort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsControllerPort * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsControllerPort * This,
                        __RPC__out VDS_PORT_PROP *pPortProp);
                           HRESULT ( STDMETHODCALLTYPE *GetController )(
            __RPC__in IVdsControllerPort * This,
                        __RPC__deref_out_opt IVdsController **ppController);
                           HRESULT ( STDMETHODCALLTYPE *QueryAssociatedLuns )(
            __RPC__in IVdsControllerPort * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IVdsControllerPort * This);
                           HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IVdsControllerPort * This,
                       VDS_PORT_STATUS status);
        END_INTERFACE
    } IVdsControllerPortVtbl;
    interface IVdsControllerPort
    {
        CONST_VTBL struct IVdsControllerPortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pPortProp) )
    ( (This)->lpVtbl -> GetController(This,ppController) )
    ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> SetStatus(This,status) )
EXTERN_C const IID IID_IVdsController;
    typedef struct IVdsControllerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsController * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsController * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsController * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsController * This,
                        __RPC__out VDS_CONTROLLER_PROP *pControllerProp);
                           HRESULT ( STDMETHODCALLTYPE *GetSubSystem )(
            __RPC__in IVdsController * This,
                        __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
                           HRESULT ( STDMETHODCALLTYPE *GetPortProperties )(
            __RPC__in IVdsController * This,
                       SHORT sPortNumber,
                        __RPC__out VDS_PORT_PROP *pPortProp);
                           HRESULT ( STDMETHODCALLTYPE *FlushCache )(
            __RPC__in IVdsController * This);
                           HRESULT ( STDMETHODCALLTYPE *InvalidateCache )(
            __RPC__in IVdsController * This);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IVdsController * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryAssociatedLuns )(
            __RPC__in IVdsController * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IVdsController * This,
                       VDS_CONTROLLER_STATUS status);
        END_INTERFACE
    } IVdsControllerVtbl;
    interface IVdsController
    {
        CONST_VTBL struct IVdsControllerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pControllerProp) )
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
    ( (This)->lpVtbl -> GetPortProperties(This,sPortNumber,pPortProp) )
    ( (This)->lpVtbl -> FlushCache(This) )
    ( (This)->lpVtbl -> InvalidateCache(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) )
    ( (This)->lpVtbl -> SetStatus(This,status) )
EXTERN_C const IID IID_IVdsControllerControllerPort;
    typedef struct IVdsControllerControllerPortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsControllerControllerPort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsControllerControllerPort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsControllerControllerPort * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryControllerPorts )(
            __RPC__in IVdsControllerControllerPort * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        END_INTERFACE
    } IVdsControllerControllerPortVtbl;
    interface IVdsControllerControllerPort
    {
        CONST_VTBL struct IVdsControllerControllerPortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryControllerPorts(This,ppEnum) )
EXTERN_C const IID IID_IVdsDrive;
    typedef struct IVdsDriveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDrive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDrive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDrive * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsDrive * This,
                        __RPC__out VDS_DRIVE_PROP *pDriveProp);
                           HRESULT ( STDMETHODCALLTYPE *GetSubSystem )(
            __RPC__in IVdsDrive * This,
                        __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
                           HRESULT ( STDMETHODCALLTYPE *QueryExtents )(
            __RPC__in IVdsDrive * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DRIVE_EXTENT **ppExtentArray,
                        __RPC__out LONG *plNumberOfExtents);
                           HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in IVdsDrive * This,
                       ULONG ulFlags);
                           HRESULT ( STDMETHODCALLTYPE *ClearFlags )(
            __RPC__in IVdsDrive * This,
                       ULONG ulFlags);
                           HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IVdsDrive * This,
                       VDS_DRIVE_STATUS status);
        END_INTERFACE
    } IVdsDriveVtbl;
    interface IVdsDrive
    {
        CONST_VTBL struct IVdsDriveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pDriveProp) )
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
    ( (This)->lpVtbl -> SetFlags(This,ulFlags) )
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
    ( (This)->lpVtbl -> SetStatus(This,status) )
EXTERN_C const IID IID_IVdsDrive2;
    typedef struct IVdsDrive2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDrive2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDrive2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDrive2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties2 )(
            __RPC__in IVdsDrive2 * This,
                        __RPC__out VDS_DRIVE_PROP2 *pDriveProp2);
        END_INTERFACE
    } IVdsDrive2Vtbl;
    interface IVdsDrive2
    {
        CONST_VTBL struct IVdsDrive2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties2(This,pDriveProp2) )
EXTERN_C const IID IID_IVdsLun;
    typedef struct IVdsLunVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLun * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLun * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLun * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsLun * This,
                        __RPC__out VDS_LUN_PROP *pLunProp);
                           HRESULT ( STDMETHODCALLTYPE *GetSubSystem )(
            __RPC__in IVdsLun * This,
                        __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
                           HRESULT ( STDMETHODCALLTYPE *GetIdentificationData )(
            __RPC__in IVdsLun * This,
                        __RPC__out VDS_LUN_INFORMATION *pLunInfo);
                           HRESULT ( STDMETHODCALLTYPE *QueryActiveControllers )(
            __RPC__in IVdsLun * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *Extend )(
            __RPC__in IVdsLun * This,
                       ULONGLONG ullNumberOfBytesToAdd,
                                        __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
                       LONG lNumberOfDrives,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *Shrink )(
            __RPC__in IVdsLun * This,
                       ULONGLONG ullNumberOfBytesToRemove,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *QueryPlexes )(
            __RPC__in IVdsLun * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *AddPlex )(
            __RPC__in IVdsLun * This,
                       VDS_OBJECT_ID lunId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *RemovePlex )(
            __RPC__in IVdsLun * This,
                       VDS_OBJECT_ID plexId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *Recover )(
            __RPC__in IVdsLun * This,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *SetMask )(
            __RPC__in IVdsLun * This,
                               __RPC__in_string LPWSTR pwszUnmaskingList);
                           HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IVdsLun * This);
                           HRESULT ( STDMETHODCALLTYPE *AssociateControllers )(
            __RPC__in IVdsLun * This,
                                        __RPC__in_ecount_full_opt(lNumberOfActiveControllers) VDS_OBJECT_ID *pActiveControllerIdArray,
                       LONG lNumberOfActiveControllers,
                                        __RPC__in_ecount_full_opt(lNumberOfInactiveControllers) VDS_OBJECT_ID *pInactiveControllerIdArray,
                       LONG lNumberOfInactiveControllers);
                           HRESULT ( STDMETHODCALLTYPE *QueryHints )(
            __RPC__in IVdsLun * This,
                        __RPC__out VDS_HINTS *pHints);
                           HRESULT ( STDMETHODCALLTYPE *ApplyHints )(
            __RPC__in IVdsLun * This,
                       __RPC__in VDS_HINTS *pHints);
                           HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IVdsLun * This,
                       VDS_LUN_STATUS status);
                           HRESULT ( STDMETHODCALLTYPE *QueryMaxLunExtendSize )(
            __RPC__in IVdsLun * This,
                                        __RPC__in_ecount_full_opt(lNumberOfDrives) VDS_OBJECT_ID *pDriveIdArray,
                       LONG lNumberOfDrives,
                        __RPC__out ULONGLONG *pullMaxBytesToBeAdded);
        END_INTERFACE
    } IVdsLunVtbl;
    interface IVdsLun
    {
        CONST_VTBL struct IVdsLunVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pLunProp) )
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
    ( (This)->lpVtbl -> GetIdentificationData(This,pLunInfo) )
    ( (This)->lpVtbl -> QueryActiveControllers(This,ppEnum) )
    ( (This)->lpVtbl -> Extend(This,ullNumberOfBytesToAdd,pDriveIdArray,lNumberOfDrives,ppAsync) )
    ( (This)->lpVtbl -> Shrink(This,ullNumberOfBytesToRemove,ppAsync) )
    ( (This)->lpVtbl -> QueryPlexes(This,ppEnum) )
    ( (This)->lpVtbl -> AddPlex(This,lunId,ppAsync) )
    ( (This)->lpVtbl -> RemovePlex(This,plexId,ppAsync) )
    ( (This)->lpVtbl -> Recover(This,ppAsync) )
    ( (This)->lpVtbl -> SetMask(This,pwszUnmaskingList) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> AssociateControllers(This,pActiveControllerIdArray,lNumberOfActiveControllers,pInactiveControllerIdArray,lNumberOfInactiveControllers) )
    ( (This)->lpVtbl -> QueryHints(This,pHints) )
    ( (This)->lpVtbl -> ApplyHints(This,pHints) )
    ( (This)->lpVtbl -> SetStatus(This,status) )
    ( (This)->lpVtbl -> QueryMaxLunExtendSize(This,pDriveIdArray,lNumberOfDrives,pullMaxBytesToBeAdded) )
EXTERN_C const IID IID_IVdsLun2;
    typedef struct IVdsLun2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLun2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLun2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLun2 * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryHints2 )(
            __RPC__in IVdsLun2 * This,
                        __RPC__out VDS_HINTS2 *pHints2);
                           HRESULT ( STDMETHODCALLTYPE *ApplyHints2 )(
            __RPC__in IVdsLun2 * This,
                       __RPC__in VDS_HINTS2 *pHints2);
        END_INTERFACE
    } IVdsLun2Vtbl;
    interface IVdsLun2
    {
        CONST_VTBL struct IVdsLun2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryHints2(This,pHints2) )
    ( (This)->lpVtbl -> ApplyHints2(This,pHints2) )
EXTERN_C const IID IID_IVdsLunNaming;
    typedef struct IVdsLunNamingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLunNaming * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLunNaming * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLunNaming * This);
        HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )(
            __RPC__in IVdsLunNaming * This,
                               __RPC__in_string LPWSTR pwszFriendlyName);
        END_INTERFACE
    } IVdsLunNamingVtbl;
    interface IVdsLunNaming
    {
        CONST_VTBL struct IVdsLunNamingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) )
EXTERN_C const IID IID_IVdsLunNumber;
    typedef struct IVdsLunNumberVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLunNumber * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLunNumber * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLunNumber * This);
        HRESULT ( STDMETHODCALLTYPE *GetLunNumber )(
            __RPC__in IVdsLunNumber * This,
                        __RPC__out ULONG *pulLunNumber);
        END_INTERFACE
    } IVdsLunNumberVtbl;
    interface IVdsLunNumber
    {
        CONST_VTBL struct IVdsLunNumberVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLunNumber(This,pulLunNumber) )
EXTERN_C const IID IID_IVdsLunControllerPorts;
    typedef struct IVdsLunControllerPortsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLunControllerPorts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLunControllerPorts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLunControllerPorts * This);
                           HRESULT ( STDMETHODCALLTYPE *AssociateControllerPorts )(
            __RPC__in IVdsLunControllerPorts * This,
                                        __RPC__in_ecount_full_opt(lNumberOfActiveControllerPorts) VDS_OBJECT_ID *pActiveControllerPortIdArray,
                       LONG lNumberOfActiveControllerPorts,
                                        __RPC__in_ecount_full_opt(lNumberOfInactiveControllerPorts) VDS_OBJECT_ID *pInactiveControllerPortIdArray,
                       LONG lNumberOfInactiveControllerPorts);
                           HRESULT ( STDMETHODCALLTYPE *QueryActiveControllerPorts )(
            __RPC__in IVdsLunControllerPorts * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        END_INTERFACE
    } IVdsLunControllerPortsVtbl;
    interface IVdsLunControllerPorts
    {
        CONST_VTBL struct IVdsLunControllerPortsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AssociateControllerPorts(This,pActiveControllerPortIdArray,lNumberOfActiveControllerPorts,pInactiveControllerPortIdArray,lNumberOfInactiveControllerPorts) )
    ( (This)->lpVtbl -> QueryActiveControllerPorts(This,ppEnum) )
EXTERN_C const IID IID_IVdsLunMpio;
    typedef struct IVdsLunMpioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLunMpio * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLunMpio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLunMpio * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPathInfo )(
            __RPC__in IVdsLunMpio * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfPaths) VDS_PATH_INFO **ppPaths,
                        __RPC__out LONG *plNumberOfPaths);
                           HRESULT ( STDMETHODCALLTYPE *GetLoadBalancePolicy )(
            __RPC__in IVdsLunMpio * This,
                        __RPC__out VDS_LOADBALANCE_POLICY_ENUM *pPolicy,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfPaths) VDS_PATH_POLICY **ppPaths,
                        __RPC__out LONG *plNumberOfPaths);
                           HRESULT ( STDMETHODCALLTYPE *SetLoadBalancePolicy )(
            __RPC__in IVdsLunMpio * This,
                       VDS_LOADBALANCE_POLICY_ENUM policy,
                                        __RPC__in_ecount_full_opt(lNumberOfPaths) VDS_PATH_POLICY *pPaths,
                       LONG lNumberOfPaths);
                           HRESULT ( STDMETHODCALLTYPE *GetSupportedLbPolicies )(
            __RPC__in IVdsLunMpio * This,
                        __RPC__out ULONG *pulLbFlags);
        END_INTERFACE
    } IVdsLunMpioVtbl;
    interface IVdsLunMpio
    {
        CONST_VTBL struct IVdsLunMpioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPathInfo(This,ppPaths,plNumberOfPaths) )
    ( (This)->lpVtbl -> GetLoadBalancePolicy(This,pPolicy,ppPaths,plNumberOfPaths) )
    ( (This)->lpVtbl -> SetLoadBalancePolicy(This,policy,pPaths,lNumberOfPaths) )
    ( (This)->lpVtbl -> GetSupportedLbPolicies(This,pulLbFlags) )
EXTERN_C const IID IID_IVdsLunIscsi;
    typedef struct IVdsLunIscsiVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLunIscsi * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLunIscsi * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLunIscsi * This);
                           HRESULT ( STDMETHODCALLTYPE *AssociateTargets )(
            __RPC__in IVdsLunIscsi * This,
                                        __RPC__in_ecount_full_opt(lNumberOfTargets) VDS_OBJECT_ID *pTargetIdArray,
                       LONG lNumberOfTargets);
                           HRESULT ( STDMETHODCALLTYPE *QueryAssociatedTargets )(
            __RPC__in IVdsLunIscsi * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        END_INTERFACE
    } IVdsLunIscsiVtbl;
    interface IVdsLunIscsi
    {
        CONST_VTBL struct IVdsLunIscsiVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AssociateTargets(This,pTargetIdArray,lNumberOfTargets) )
    ( (This)->lpVtbl -> QueryAssociatedTargets(This,ppEnum) )
EXTERN_C const IID IID_IVdsLunPlex;
    typedef struct IVdsLunPlexVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsLunPlex * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsLunPlex * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsLunPlex * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsLunPlex * This,
                        __RPC__out VDS_LUN_PLEX_PROP *pPlexProp);
                           HRESULT ( STDMETHODCALLTYPE *GetLun )(
            __RPC__in IVdsLunPlex * This,
                        __RPC__deref_out_opt IVdsLun **ppLun);
                           HRESULT ( STDMETHODCALLTYPE *QueryExtents )(
            __RPC__in IVdsLunPlex * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_DRIVE_EXTENT **ppExtentArray,
                        __RPC__out LONG *plNumberOfExtents);
                           HRESULT ( STDMETHODCALLTYPE *QueryHints )(
            __RPC__in IVdsLunPlex * This,
                        __RPC__out VDS_HINTS *pHints);
                           HRESULT ( STDMETHODCALLTYPE *ApplyHints )(
            __RPC__in IVdsLunPlex * This,
                       __RPC__in VDS_HINTS *pHints);
        END_INTERFACE
    } IVdsLunPlexVtbl;
    interface IVdsLunPlex
    {
        CONST_VTBL struct IVdsLunPlexVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pPlexProp) )
    ( (This)->lpVtbl -> GetLun(This,ppLun) )
    ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
    ( (This)->lpVtbl -> QueryHints(This,pHints) )
    ( (This)->lpVtbl -> ApplyHints(This,pHints) )
EXTERN_C const IID IID_IVdsIscsiPortal;
    typedef struct IVdsIscsiPortalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsIscsiPortal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsIscsiPortal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsIscsiPortal * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsIscsiPortal * This,
                        __RPC__out VDS_ISCSI_PORTAL_PROP *pPortalProp);
                           HRESULT ( STDMETHODCALLTYPE *GetSubSystem )(
            __RPC__in IVdsIscsiPortal * This,
                        __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
                           HRESULT ( STDMETHODCALLTYPE *QueryAssociatedPortalGroups )(
            __RPC__in IVdsIscsiPortal * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IVdsIscsiPortal * This,
                       VDS_ISCSI_PORTAL_STATUS status);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecTunnelAddress )(
            __RPC__in IVdsIscsiPortal * This,
                       __RPC__in VDS_IPADDRESS *pTunnelAddress,
                       __RPC__in VDS_IPADDRESS *pDestinationAddress);
                           HRESULT ( STDMETHODCALLTYPE *GetIpsecSecurity )(
            __RPC__in IVdsIscsiPortal * This,
                       __RPC__in VDS_IPADDRESS *pInitiatorPortalAddress,
                        __RPC__out ULONGLONG *pullSecurityFlags);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecSecurity )(
            __RPC__in IVdsIscsiPortal * This,
                       __RPC__in VDS_IPADDRESS *pInitiatorPortalAddress,
                       ULONGLONG ullSecurityFlags,
                               __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        END_INTERFACE
    } IVdsIscsiPortalVtbl;
    interface IVdsIscsiPortal
    {
        CONST_VTBL struct IVdsIscsiPortalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pPortalProp) )
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
    ( (This)->lpVtbl -> QueryAssociatedPortalGroups(This,ppEnum) )
    ( (This)->lpVtbl -> SetStatus(This,status) )
    ( (This)->lpVtbl -> SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) )
    ( (This)->lpVtbl -> GetIpsecSecurity(This,pInitiatorPortalAddress,pullSecurityFlags) )
    ( (This)->lpVtbl -> SetIpsecSecurity(This,pInitiatorPortalAddress,ullSecurityFlags,pIpsecKey) )
EXTERN_C const IID IID_IVdsIscsiTarget;
    typedef struct IVdsIscsiTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsIscsiTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsIscsiTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsIscsiTarget * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsIscsiTarget * This,
                        __RPC__out VDS_ISCSI_TARGET_PROP *pTargetProp);
                           HRESULT ( STDMETHODCALLTYPE *GetSubSystem )(
            __RPC__in IVdsIscsiTarget * This,
                        __RPC__deref_out_opt IVdsSubSystem **ppSubSystem);
                           HRESULT ( STDMETHODCALLTYPE *QueryPortalGroups )(
            __RPC__in IVdsIscsiTarget * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryAssociatedLuns )(
            __RPC__in IVdsIscsiTarget * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *CreatePortalGroup )(
            __RPC__in IVdsIscsiTarget * This,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IVdsIscsiTarget * This,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )(
            __RPC__in IVdsIscsiTarget * This,
                               __RPC__in_string LPWSTR pwszFriendlyName);
                           HRESULT ( STDMETHODCALLTYPE *SetSharedSecret )(
            __RPC__in IVdsIscsiTarget * This,
                               __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pTargetSharedSecret,
                                       __RPC__in_opt_string LPWSTR pwszInitiatorName);
                           HRESULT ( STDMETHODCALLTYPE *RememberInitiatorSharedSecret )(
            __RPC__in IVdsIscsiTarget * This,
                               __RPC__in_string LPWSTR pwszInitiatorName,
                               __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pInitiatorSharedSecret);
                           HRESULT ( STDMETHODCALLTYPE *GetConnectedInitiators )(
            __RPC__in IVdsIscsiTarget * This,
                                                  __RPC__deref_out_ecount_full_opt_string(*plNumberOfInitiators) LPWSTR **pppwszInitiatorList,
                        __RPC__out LONG *plNumberOfInitiators);
        END_INTERFACE
    } IVdsIscsiTargetVtbl;
    interface IVdsIscsiTarget
    {
        CONST_VTBL struct IVdsIscsiTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pTargetProp) )
    ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
    ( (This)->lpVtbl -> QueryPortalGroups(This,ppEnum) )
    ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) )
    ( (This)->lpVtbl -> CreatePortalGroup(This,ppAsync) )
    ( (This)->lpVtbl -> Delete(This,ppAsync) )
    ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) )
    ( (This)->lpVtbl -> SetSharedSecret(This,pTargetSharedSecret,pwszInitiatorName) )
    ( (This)->lpVtbl -> RememberInitiatorSharedSecret(This,pwszInitiatorName,pInitiatorSharedSecret) )
    ( (This)->lpVtbl -> GetConnectedInitiators(This,pppwszInitiatorList,plNumberOfInitiators) )
EXTERN_C const IID IID_IVdsIscsiPortalGroup;
    typedef struct IVdsIscsiPortalGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsIscsiPortalGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsIscsiPortalGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsIscsiPortalGroup * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsIscsiPortalGroup * This,
                        __RPC__out VDS_ISCSI_PORTALGROUP_PROP *pPortalGroupProp);
                           HRESULT ( STDMETHODCALLTYPE *GetTarget )(
            __RPC__in IVdsIscsiPortalGroup * This,
                        __RPC__deref_out_opt IVdsIscsiTarget **ppTarget);
                           HRESULT ( STDMETHODCALLTYPE *QueryAssociatedPortals )(
            __RPC__in IVdsIscsiPortalGroup * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *AddPortal )(
            __RPC__in IVdsIscsiPortalGroup * This,
                       VDS_OBJECT_ID portalId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *RemovePortal )(
            __RPC__in IVdsIscsiPortalGroup * This,
                       VDS_OBJECT_ID portalId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IVdsIscsiPortalGroup * This,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsIscsiPortalGroupVtbl;
    interface IVdsIscsiPortalGroup
    {
        CONST_VTBL struct IVdsIscsiPortalGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pPortalGroupProp) )
    ( (This)->lpVtbl -> GetTarget(This,ppTarget) )
    ( (This)->lpVtbl -> QueryAssociatedPortals(This,ppEnum) )
    ( (This)->lpVtbl -> AddPortal(This,portalId,ppAsync) )
    ( (This)->lpVtbl -> RemovePortal(This,portalId,ppAsync) )
    ( (This)->lpVtbl -> Delete(This,ppAsync) )
EXTERN_C const IID IID_IVdsStoragePool;
    typedef struct IVdsStoragePoolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsStoragePool * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsStoragePool * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsStoragePool * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProvider )(
            __RPC__in IVdsStoragePool * This,
                        __RPC__deref_out_opt IVdsProvider **ppProvider);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsStoragePool * This,
                        __RPC__out VDS_STORAGE_POOL_PROP *pStoragePoolProp);
                           HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IVdsStoragePool * This,
                        __RPC__out VDS_POOL_ATTRIBUTES *pStoragePoolAttributes);
                           HRESULT ( STDMETHODCALLTYPE *QueryDriveExtents )(
            __RPC__in IVdsStoragePool * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfExtents) VDS_STORAGE_POOL_DRIVE_EXTENT **ppExtentArray,
                        __RPC__out LONG *plNumberOfExtents);
                           HRESULT ( STDMETHODCALLTYPE *QueryAllocatedLuns )(
            __RPC__in IVdsStoragePool * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryAllocatedStoragePools )(
            __RPC__in IVdsStoragePool * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        END_INTERFACE
    } IVdsStoragePoolVtbl;
    interface IVdsStoragePool
    {
        CONST_VTBL struct IVdsStoragePoolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProvider(This,ppProvider) )
    ( (This)->lpVtbl -> GetProperties(This,pStoragePoolProp) )
    ( (This)->lpVtbl -> GetAttributes(This,pStoragePoolAttributes) )
    ( (This)->lpVtbl -> QueryDriveExtents(This,ppExtentArray,plNumberOfExtents) )
    ( (This)->lpVtbl -> QueryAllocatedLuns(This,ppEnum) )
    ( (This)->lpVtbl -> QueryAllocatedStoragePools(This,ppEnum) )
EXTERN_C const IID IID_IVdsMaintenance;
    typedef struct IVdsMaintenanceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsMaintenance * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsMaintenance * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsMaintenance * This);
                           HRESULT ( STDMETHODCALLTYPE *StartMaintenance )(
            __RPC__in IVdsMaintenance * This,
                       VDS_MAINTENANCE_OPERATION operation);
                           HRESULT ( STDMETHODCALLTYPE *StopMaintenance )(
            __RPC__in IVdsMaintenance * This,
                       VDS_MAINTENANCE_OPERATION operation);
                           HRESULT ( STDMETHODCALLTYPE *PulseMaintenance )(
            __RPC__in IVdsMaintenance * This,
                       VDS_MAINTENANCE_OPERATION operation,
                       ULONG ulCount);
        END_INTERFACE
    } IVdsMaintenanceVtbl;
    interface IVdsMaintenance
    {
        CONST_VTBL struct IVdsMaintenanceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartMaintenance(This,operation) )
    ( (This)->lpVtbl -> StopMaintenance(This,operation) )
    ( (This)->lpVtbl -> PulseMaintenance(This,operation,ulCount) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _VDS_CREATE_VDISK_PARAMETERS
    {
    GUID UniqueId;
    ULONGLONG MaximumSize;
    ULONG BlockSizeInBytes;
    ULONG SectorSizeInBytes;
                   LPWSTR pParentPath;
                   LPWSTR pSourcePath;
    } VDS_CREATE_VDISK_PARAMETERS;
typedef struct _VDS_CREATE_VDISK_PARAMETERS *PVDS_CREATE_VDISK_PARAMETERS;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0048_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsVdProvider;
    typedef struct IVdsVdProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVdProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVdProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVdProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryVDisks )(
            __RPC__in IVdsVdProvider * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *CreateVDisk )(
            __RPC__in IVdsVdProvider * This,
                       __RPC__in PVIRTUAL_STORAGE_TYPE VirtualDeviceType,
                               __RPC__in_string LPWSTR pPath,
                                       __RPC__in_opt_string LPWSTR pStringSecurityDescriptor,
                       CREATE_VIRTUAL_DISK_FLAG Flags,
                       ULONG ProviderSpecificFlags,
                       ULONG Reserved,
                       __RPC__in PVDS_CREATE_VDISK_PARAMETERS pCreateDiskParameters,
                                    __RPC__deref_opt_inout_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *AddVDisk )(
            __RPC__in IVdsVdProvider * This,
                       __RPC__in PVIRTUAL_STORAGE_TYPE VirtualDeviceType,
                               __RPC__in_string LPWSTR pPath,
                                    __RPC__deref_opt_inout_opt IVdsVDisk **ppVDisk);
        HRESULT ( STDMETHODCALLTYPE *GetDiskFromVDisk )(
            __RPC__in IVdsVdProvider * This,
                       __RPC__in_opt IVdsVDisk *pVDisk,
                        __RPC__deref_out_opt IVdsDisk **ppDisk);
        HRESULT ( STDMETHODCALLTYPE *GetVDiskFromDisk )(
            __RPC__in IVdsVdProvider * This,
                       __RPC__in_opt IVdsDisk *pDisk,
                        __RPC__deref_out_opt IVdsVDisk **ppVDisk);
        END_INTERFACE
    } IVdsVdProviderVtbl;
    interface IVdsVdProvider
    {
        CONST_VTBL struct IVdsVdProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryVDisks(This,ppEnum) )
    ( (This)->lpVtbl -> CreateVDisk(This,VirtualDeviceType,pPath,pStringSecurityDescriptor,Flags,ProviderSpecificFlags,Reserved,pCreateDiskParameters,ppAsync) )
    ( (This)->lpVtbl -> AddVDisk(This,VirtualDeviceType,pPath,ppVDisk) )
    ( (This)->lpVtbl -> GetDiskFromVDisk(This,pVDisk,ppDisk) )
    ( (This)->lpVtbl -> GetVDiskFromDisk(This,pDisk,ppVDisk) )
typedef
enum _VDS_VDISK_STATE
    {
        VDS_VST_UNKNOWN = 0,
        VDS_VST_ADDED = ( VDS_VST_UNKNOWN + 1 ) ,
        VDS_VST_OPEN = ( VDS_VST_ADDED + 1 ) ,
        VDS_VST_ATTACH_PENDING = ( VDS_VST_OPEN + 1 ) ,
        VDS_VST_ATTACHED_NOT_OPEN = ( VDS_VST_ATTACH_PENDING + 1 ) ,
        VDS_VST_ATTACHED = ( VDS_VST_ATTACHED_NOT_OPEN + 1 ) ,
        VDS_VST_DETACH_PENDING = ( VDS_VST_ATTACHED + 1 ) ,
        VDS_VST_COMPACTING = ( VDS_VST_DETACH_PENDING + 1 ) ,
        VDS_VST_MERGING = ( VDS_VST_COMPACTING + 1 ) ,
        VDS_VST_EXPANDING = ( VDS_VST_MERGING + 1 ) ,
        VDS_VST_DELETED = ( VDS_VST_EXPANDING + 1 ) ,
        VDS_VST_MAX = ( VDS_VST_DELETED + 1 )
    } VDS_VDISK_STATE;
typedef struct _VDS_VDISK_PROPERTIES
    {
    VDS_OBJECT_ID Id;
    VDS_VDISK_STATE State;
    VIRTUAL_STORAGE_TYPE VirtualDeviceType;
    ULONGLONG VirtualSize;
    ULONGLONG PhysicalSize;
                   LPWSTR pPath;
                   LPWSTR pDeviceName;
    DEPENDENT_DISK_FLAG DiskFlag;
    BOOL bIsChild;
                   LPWSTR pParentPath;
    } VDS_VDISK_PROPERTIES;
typedef struct _VDS_VDISK_PROPERTIES *PVDS_VDISK_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0049_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsVDisk;
    typedef struct IVdsVDiskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVDisk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVDisk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVDisk * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IVdsVDisk * This,
                       VIRTUAL_DISK_ACCESS_MASK AccessMask,
                       OPEN_VIRTUAL_DISK_FLAG Flags,
                       ULONG ReadWriteDepth,
                        __RPC__deref_out_opt IVdsOpenVDisk **ppOpenVDisk);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsVDisk * This,
                        __RPC__out PVDS_VDISK_PROPERTIES pDiskProperties);
        HRESULT ( STDMETHODCALLTYPE *GetHostVolume )(
            __RPC__in IVdsVDisk * This,
                        __RPC__deref_out_opt IVdsVolume **ppVolume);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceName )(
            __RPC__in IVdsVDisk * This,
                                __RPC__deref_out_opt_string LPWSTR *ppDeviceName);
        END_INTERFACE
    } IVdsVDiskVtbl;
    interface IVdsVDisk
    {
        CONST_VTBL struct IVdsVDiskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,AccessMask,Flags,ReadWriteDepth,ppOpenVDisk) )
    ( (This)->lpVtbl -> GetProperties(This,pDiskProperties) )
    ( (This)->lpVtbl -> GetHostVolume(This,ppVolume) )
    ( (This)->lpVtbl -> GetDeviceName(This,ppDeviceName) )
EXTERN_C const IID IID_IVdsOpenVDisk;
    typedef struct IVdsOpenVDiskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsOpenVDisk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsOpenVDisk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsOpenVDisk * This);
        HRESULT ( STDMETHODCALLTYPE *Attach )(
            __RPC__in IVdsOpenVDisk * This,
                               __RPC__in_opt LPWSTR pStringSecurityDescriptor,
                       ATTACH_VIRTUAL_DISK_FLAG Flags,
                       ULONG ProviderSpecificFlags,
                       ULONG TimeoutInMs,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            __RPC__in IVdsOpenVDisk * This,
                       DETACH_VIRTUAL_DISK_FLAG Flags,
                       ULONG ProviderSpecificFlags);
        HRESULT ( STDMETHODCALLTYPE *DetachAndDelete )(
            __RPC__in IVdsOpenVDisk * This,
                       DETACH_VIRTUAL_DISK_FLAG Flags,
                       ULONG ProviderSpecificFlags);
        HRESULT ( STDMETHODCALLTYPE *Compact )(
            __RPC__in IVdsOpenVDisk * This,
                       COMPACT_VIRTUAL_DISK_FLAG Flags,
                       ULONG Reserved,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        HRESULT ( STDMETHODCALLTYPE *Merge )(
            __RPC__in IVdsOpenVDisk * This,
                       MERGE_VIRTUAL_DISK_FLAG Flags,
                       ULONG MergeDepth,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IVdsOpenVDisk * This,
                       EXPAND_VIRTUAL_DISK_FLAG Flags,
                       ULONGLONG NewSize,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsOpenVDiskVtbl;
    interface IVdsOpenVDisk
    {
        CONST_VTBL struct IVdsOpenVDiskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Attach(This,pStringSecurityDescriptor,Flags,ProviderSpecificFlags,TimeoutInMs,ppAsync) )
    ( (This)->lpVtbl -> Detach(This,Flags,ProviderSpecificFlags) )
    ( (This)->lpVtbl -> DetachAndDelete(This,Flags,ProviderSpecificFlags) )
    ( (This)->lpVtbl -> Compact(This,Flags,Reserved,ppAsync) )
    ( (This)->lpVtbl -> Merge(This,Flags,MergeDepth,ppAsync) )
    ( (This)->lpVtbl -> Expand(This,Flags,NewSize,ppAsync) )
#endif
#pragma endregion
DEFINE_GUID(CLSID_VdsLoader,
 0X9C38ED61,0xD565,0x4728,0xAE,0xEE,0xC8,0x09,0x52,0xF0,0xEC,0xDE);
DEFINE_GUID(CLSID_VdsService,
 0x7D1933CB,0x86F6,0x4A98,0x86,0x28,0x01,0xBE,0x94,0xC9,0xA5,0x75);
typedef
enum _VDS_SERVICE_FLAG
    {
        VDS_SVF_SUPPORT_DYNAMIC = 0x1,
        VDS_SVF_SUPPORT_FAULT_TOLERANT = 0x2,
        VDS_SVF_SUPPORT_GPT = 0x4,
        VDS_SVF_SUPPORT_DYNAMIC_1394 = 0x8,
        VDS_SVF_CLUSTER_SERVICE_CONFIGURED = 0x10,
        VDS_SVF_AUTO_MOUNT_OFF = 0x20,
        VDS_SVF_OS_UNINSTALL_VALID = 0x40,
        VDS_SVF_EFI = 0x80,
        VDS_SVF_SUPPORT_MIRROR = 0x100L,
        VDS_SVF_SUPPORT_RAID5 = 0x200L,
        VDS_SVF_SUPPORT_REFS = 0x400L
    } VDS_SERVICE_FLAG;
typedef struct _VDS_SERVICE_PROP
    {
                   LPWSTR pwszVersion;
    ULONG ulFlags;
    } VDS_SERVICE_PROP;
typedef
enum _VDS_SAN_POLICY
    {
        VDS_SP_UNKNOWN = 0,
        VDS_SP_ONLINE = 0x1,
        VDS_SP_OFFLINE_SHARED = 0x2,
        VDS_SP_OFFLINE = 0x3,
        VDS_SP_OFFLINE_INTERNAL = 0x4,
        VDS_SP_MAX = 0x5
    } VDS_SAN_POLICY;
typedef struct VDS_REPARSE_POINT_PROP
    {
    VDS_OBJECT_ID SourceVolumeId;
                   LPWSTR pwszPath;
    } VDS_REPARSE_POINT_PROP;
typedef struct VDS_REPARSE_POINT_PROP *PVDS_REPARSE_POINT_PROP;
typedef
enum _VDS_DRIVE_LETTER_FLAG
    {
        VDS_DLF_NON_PERSISTENT = 0x1
    } VDS_DRIVE_LETTER_FLAG;
typedef struct _VDS_DRIVE_LETTER_PROP
    {
    WCHAR wcLetter;
    VDS_OBJECT_ID volumeId;
    ULONG ulFlags;
    BOOL bUsed;
    } VDS_DRIVE_LETTER_PROP;
typedef struct _VDS_DRIVE_LETTER_PROP *PVDS_DRIVE_LETTER_PROP;
typedef
enum _VDS_FILE_SYSTEM_FLAG
    {
        VDS_FSF_SUPPORT_FORMAT = 0x1,
        VDS_FSF_SUPPORT_QUICK_FORMAT = 0x2,
        VDS_FSF_SUPPORT_COMPRESS = 0x4,
        VDS_FSF_SUPPORT_SPECIFY_LABEL = 0x8,
        VDS_FSF_SUPPORT_MOUNT_POINT = 0x10,
        VDS_FSF_SUPPORT_REMOVABLE_MEDIA = 0x20,
        VDS_FSF_SUPPORT_EXTEND = 0x40,
        VDS_FSF_ALLOCATION_UNIT_512 = 0x10000,
        VDS_FSF_ALLOCATION_UNIT_1K = 0x20000,
        VDS_FSF_ALLOCATION_UNIT_2K = 0x40000,
        VDS_FSF_ALLOCATION_UNIT_4K = 0x80000,
        VDS_FSF_ALLOCATION_UNIT_8K = 0x100000,
        VDS_FSF_ALLOCATION_UNIT_16K = 0x200000,
        VDS_FSF_ALLOCATION_UNIT_32K = 0x400000,
        VDS_FSF_ALLOCATION_UNIT_64K = 0x800000,
        VDS_FSF_ALLOCATION_UNIT_128K = 0x1000000,
        VDS_FSF_ALLOCATION_UNIT_256K = 0x2000000
    } VDS_FILE_SYSTEM_FLAG;
typedef struct _VDS_FILE_SYSTEM_TYPE_PROP
    {
    VDS_FILE_SYSTEM_TYPE type;
    WCHAR wszName[ 8 ];
    ULONG ulFlags;
    ULONG ulCompressionFlags;
    ULONG ulMaxLableLength;
                   LPWSTR pwszIllegalLabelCharSet;
    } VDS_FILE_SYSTEM_TYPE_PROP;
typedef struct _VDS_FILE_SYSTEM_TYPE_PROP *PVDS_FILE_SYSTEM_TYPE_PROP;
typedef
enum _VDS_FILE_SYSTEM_FORMAT_SUPPORT_FLAG
    {
        VDS_FSS_DEFAULT = 0x1,
        VDS_FSS_PREVIOUS_REVISION = 0x2,
        VDS_FSS_RECOMMENDED = 0x4
    } VDS_FILE_SYSTEM_FORMAT_SUPPORT_FLAG;
typedef struct _VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP
    {
    ULONG ulFlags;
    USHORT usRevision;
    ULONG ulDefaultUnitAllocationSize;
    ULONG rgulAllowedUnitAllocationSizes[ 32 ];
    WCHAR wszName[ 32 ];
    } VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP;
typedef struct _VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP *PVDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP;
typedef
enum _VDS_FILE_SYSTEM_PROP_FLAG
    {
        VDS_FPF_COMPRESSED = 0x1
    } VDS_FILE_SYSTEM_PROP_FLAG;
typedef
enum _VDS_FORMAT_OPTION_FLAGS
    {
        VDS_FSOF_NONE = 0,
        VDS_FSOF_FORCE = 0x1,
        VDS_FSOF_QUICK = 0x2,
        VDS_FSOF_COMPRESSION = 0x4,
        VDS_FSOF_DUPLICATE_METADATA = 0x8
    } VDS_FORMAT_OPTION_FLAGS;
typedef struct _VDS_FILE_SYSTEM_PROP
    {
    VDS_FILE_SYSTEM_TYPE type;
    VDS_OBJECT_ID volumeId;
    ULONG ulFlags;
    ULONGLONG ullTotalAllocationUnits;
    ULONGLONG ullAvailableAllocationUnits;
    ULONG ulAllocationUnitSize;
                   LPWSTR pwszLabel;
    } VDS_FILE_SYSTEM_PROP;
typedef struct _VDS_FILE_SYSTEM_PROP *PVDS_FILE_SYSTEM_PROP;
typedef
enum _VDS_QUERY_PROVIDER_FLAG
    {
        VDS_QUERY_SOFTWARE_PROVIDERS = 0x1,
        VDS_QUERY_HARDWARE_PROVIDERS = 0x2,
        VDS_QUERY_VIRTUALDISK_PROVIDERS = 0x4
    } VDS_QUERY_PROVIDER_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0051_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsServiceLoader;
    typedef struct IVdsServiceLoaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceLoader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceLoader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceLoader * This);
                           HRESULT ( STDMETHODCALLTYPE *LoadService )(
            __RPC__in IVdsServiceLoader * This,
                                       __RPC__in_opt_string LPWSTR pwszMachineName,
                        __RPC__deref_out_opt IVdsService **ppService);
        END_INTERFACE
    } IVdsServiceLoaderVtbl;
    interface IVdsServiceLoader
    {
        CONST_VTBL struct IVdsServiceLoaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadService(This,pwszMachineName,ppService) )
EXTERN_C const IID IID_IVdsService;
    typedef struct IVdsServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *IsServiceReady )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *WaitForServiceReady )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsService * This,
                        __RPC__out VDS_SERVICE_PROP *pServiceProp);
                           HRESULT ( STDMETHODCALLTYPE *QueryProviders )(
            __RPC__in IVdsService * This,
                       DWORD masks,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryMaskedDisks )(
            __RPC__in IVdsService * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *QueryUnallocatedDisks )(
            __RPC__in IVdsService * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IVdsService * This,
                       VDS_OBJECT_ID ObjectId,
                       VDS_OBJECT_TYPE type,
                        __RPC__deref_out_opt IUnknown **ppObjectUnk);
                           HRESULT ( STDMETHODCALLTYPE *QueryDriveLetters )(
            __RPC__in IVdsService * This,
                       WCHAR wcFirstLetter,
                       DWORD count,
                                 __RPC__out_ecount_full(count) VDS_DRIVE_LETTER_PROP *pDriveLetterPropArray);
                           HRESULT ( STDMETHODCALLTYPE *QueryFileSystemTypes )(
            __RPC__in IVdsService * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_TYPE_PROP **ppFileSystemTypeProps,
                        __RPC__out LONG *plNumberOfFileSystems);
                           HRESULT ( STDMETHODCALLTYPE *Reenumerate )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *CleanupObsoleteMountPoints )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IVdsService * This,
                       __RPC__in_opt IVdsAdviseSink *pSink,
                        __RPC__out DWORD *pdwCookie);
                           HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IVdsService * This,
                       DWORD dwCookie);
                           HRESULT ( STDMETHODCALLTYPE *Reboot )(
            __RPC__in IVdsService * This);
                           HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in IVdsService * This,
                       ULONG ulFlags);
                           HRESULT ( STDMETHODCALLTYPE *ClearFlags )(
            __RPC__in IVdsService * This,
                       ULONG ulFlags);
        END_INTERFACE
    } IVdsServiceVtbl;
    interface IVdsService
    {
        CONST_VTBL struct IVdsServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsServiceReady(This) )
    ( (This)->lpVtbl -> WaitForServiceReady(This) )
    ( (This)->lpVtbl -> GetProperties(This,pServiceProp) )
    ( (This)->lpVtbl -> QueryProviders(This,masks,ppEnum) )
    ( (This)->lpVtbl -> QueryMaskedDisks(This,ppEnum) )
    ( (This)->lpVtbl -> QueryUnallocatedDisks(This,ppEnum) )
    ( (This)->lpVtbl -> GetObject(This,ObjectId,type,ppObjectUnk) )
    ( (This)->lpVtbl -> QueryDriveLetters(This,wcFirstLetter,count,pDriveLetterPropArray) )
    ( (This)->lpVtbl -> QueryFileSystemTypes(This,ppFileSystemTypeProps,plNumberOfFileSystems) )
    ( (This)->lpVtbl -> Reenumerate(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> CleanupObsoleteMountPoints(This) )
    ( (This)->lpVtbl -> Advise(This,pSink,pdwCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
    ( (This)->lpVtbl -> Reboot(This) )
    ( (This)->lpVtbl -> SetFlags(This,ulFlags) )
    ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
EXTERN_C const IID IID_IVdsServiceUninstallDisk;
    typedef struct IVdsServiceUninstallDiskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceUninstallDisk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceUninstallDisk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceUninstallDisk * This);
                           HRESULT ( STDMETHODCALLTYPE *GetDiskIdFromLunInfo )(
            __RPC__in IVdsServiceUninstallDisk * This,
                       __RPC__in VDS_LUN_INFORMATION *pLunInfo,
                        __RPC__out VDS_OBJECT_ID *pDiskId);
                           HRESULT ( STDMETHODCALLTYPE *UninstallDisks )(
            __RPC__in IVdsServiceUninstallDisk * This,
                                __RPC__in_ecount_full(ulCount) VDS_OBJECT_ID *pDiskIdArray,
                       ULONG ulCount,
                       BOOLEAN bForce,
                        __RPC__out BOOLEAN *pbReboot,
                                 __RPC__out_ecount_full(ulCount) HRESULT *pResults);
        END_INTERFACE
    } IVdsServiceUninstallDiskVtbl;
    interface IVdsServiceUninstallDisk
    {
        CONST_VTBL struct IVdsServiceUninstallDiskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDiskIdFromLunInfo(This,pLunInfo,pDiskId) )
    ( (This)->lpVtbl -> UninstallDisks(This,pDiskIdArray,ulCount,bForce,pbReboot,pResults) )
EXTERN_C const IID IID_IVdsServiceHba;
    typedef struct IVdsServiceHbaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceHba * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceHba * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceHba * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryHbaPorts )(
            __RPC__in IVdsServiceHba * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
        END_INTERFACE
    } IVdsServiceHbaVtbl;
    interface IVdsServiceHba
    {
        CONST_VTBL struct IVdsServiceHbaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryHbaPorts(This,ppEnum) )
EXTERN_C const IID IID_IVdsServiceIscsi;
    typedef struct IVdsServiceIscsiVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceIscsi * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceIscsi * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceIscsi * This);
                           HRESULT ( STDMETHODCALLTYPE *GetInitiatorName )(
            __RPC__in IVdsServiceIscsi * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszIscsiName);
                           HRESULT ( STDMETHODCALLTYPE *QueryInitiatorAdapters )(
            __RPC__in IVdsServiceIscsi * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecGroupPresharedKey )(
            __RPC__in IVdsServiceIscsi * This,
                               __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
                           HRESULT ( STDMETHODCALLTYPE *SetAllIpsecTunnelAddresses )(
            __RPC__in IVdsServiceIscsi * This,
                       __RPC__in VDS_IPADDRESS *pTunnelAddress,
                       __RPC__in VDS_IPADDRESS *pDestinationAddress);
                           HRESULT ( STDMETHODCALLTYPE *SetAllIpsecSecurity )(
            __RPC__in IVdsServiceIscsi * This,
                       VDS_OBJECT_ID targetPortalId,
                       ULONGLONG ullSecurityFlags,
                               __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
                           HRESULT ( STDMETHODCALLTYPE *SetInitiatorSharedSecret )(
            __RPC__in IVdsServiceIscsi * This,
                               __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pInitiatorSharedSecret,
                       VDS_OBJECT_ID targetId);
                           HRESULT ( STDMETHODCALLTYPE *RememberTargetSharedSecret )(
            __RPC__in IVdsServiceIscsi * This,
                       VDS_OBJECT_ID targetId,
                               __RPC__in_opt VDS_ISCSI_SHARED_SECRET *pTargetSharedSecret);
        END_INTERFACE
    } IVdsServiceIscsiVtbl;
    interface IVdsServiceIscsi
    {
        CONST_VTBL struct IVdsServiceIscsiVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInitiatorName(This,ppwszIscsiName) )
    ( (This)->lpVtbl -> QueryInitiatorAdapters(This,ppEnum) )
    ( (This)->lpVtbl -> SetIpsecGroupPresharedKey(This,pIpsecKey) )
    ( (This)->lpVtbl -> SetAllIpsecTunnelAddresses(This,pTunnelAddress,pDestinationAddress) )
    ( (This)->lpVtbl -> SetAllIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) )
    ( (This)->lpVtbl -> SetInitiatorSharedSecret(This,pInitiatorSharedSecret,targetId) )
    ( (This)->lpVtbl -> RememberTargetSharedSecret(This,targetId,pTargetSharedSecret) )
EXTERN_C const IID IID_IVdsServiceInitialization;
    typedef struct IVdsServiceInitializationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceInitialization * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceInitialization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceInitialization * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IVdsServiceInitialization * This,
                                       __RPC__in_opt_string LPWSTR pwszMachineName);
        END_INTERFACE
    } IVdsServiceInitializationVtbl;
    interface IVdsServiceInitialization
    {
        CONST_VTBL struct IVdsServiceInitializationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pwszMachineName) )
EXTERN_C const IID IID_IVdsHbaPort;
    typedef struct IVdsHbaPortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHbaPort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHbaPort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHbaPort * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsHbaPort * This,
                        __RPC__out VDS_HBAPORT_PROP *pHbaPortProp);
                           HRESULT ( STDMETHODCALLTYPE *SetAllPathStatuses )(
            __RPC__in IVdsHbaPort * This,
                       VDS_PATH_STATUS status);
        END_INTERFACE
    } IVdsHbaPortVtbl;
    interface IVdsHbaPort
    {
        CONST_VTBL struct IVdsHbaPortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pHbaPortProp) )
    ( (This)->lpVtbl -> SetAllPathStatuses(This,status) )
EXTERN_C const IID IID_IVdsIscsiInitiatorAdapter;
    typedef struct IVdsIscsiInitiatorAdapterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsIscsiInitiatorAdapter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsIscsiInitiatorAdapter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsIscsiInitiatorAdapter * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsIscsiInitiatorAdapter * This,
                        __RPC__out VDS_ISCSI_INITIATOR_ADAPTER_PROP *pInitiatorAdapterProp);
                           HRESULT ( STDMETHODCALLTYPE *QueryInitiatorPortals )(
            __RPC__in IVdsIscsiInitiatorAdapter * This,
                        __RPC__deref_out_opt IEnumVdsObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *LoginToTarget )(
            __RPC__in IVdsIscsiInitiatorAdapter * This,
                       VDS_ISCSI_LOGIN_TYPE loginType,
                       VDS_OBJECT_ID targetId,
                       VDS_OBJECT_ID targetPortalId,
                       VDS_OBJECT_ID initiatorPortalId,
                       ULONG ulLoginFlags,
                       BOOL bHeaderDigest,
                       BOOL bDataDigest,
                       VDS_ISCSI_AUTH_TYPE authType,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *LogoutFromTarget )(
            __RPC__in IVdsIscsiInitiatorAdapter * This,
                       VDS_OBJECT_ID targetId,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsIscsiInitiatorAdapterVtbl;
    interface IVdsIscsiInitiatorAdapter
    {
        CONST_VTBL struct IVdsIscsiInitiatorAdapterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pInitiatorAdapterProp) )
    ( (This)->lpVtbl -> QueryInitiatorPortals(This,ppEnum) )
    ( (This)->lpVtbl -> LoginToTarget(This,loginType,targetId,targetPortalId,initiatorPortalId,ulLoginFlags,bHeaderDigest,bDataDigest,authType,ppAsync) )
    ( (This)->lpVtbl -> LogoutFromTarget(This,targetId,ppAsync) )
EXTERN_C const IID IID_IVdsIscsiInitiatorPortal;
    typedef struct IVdsIscsiInitiatorPortalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsIscsiInitiatorPortal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsIscsiInitiatorPortal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsIscsiInitiatorPortal * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IVdsIscsiInitiatorPortal * This,
                        __RPC__out VDS_ISCSI_INITIATOR_PORTAL_PROP *pInitiatorPortalProp);
                           HRESULT ( STDMETHODCALLTYPE *GetInitiatorAdapter )(
            __RPC__in IVdsIscsiInitiatorPortal * This,
                        __RPC__deref_out_opt IVdsIscsiInitiatorAdapter **ppInitiatorAdapter);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecTunnelAddress )(
            __RPC__in IVdsIscsiInitiatorPortal * This,
                       __RPC__in VDS_IPADDRESS *pTunnelAddress,
                       __RPC__in VDS_IPADDRESS *pDestinationAddress);
                           HRESULT ( STDMETHODCALLTYPE *GetIpsecSecurity )(
            __RPC__in IVdsIscsiInitiatorPortal * This,
                       VDS_OBJECT_ID targetPortalId,
                        __RPC__out ULONGLONG *pullSecurityFlags);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecSecurity )(
            __RPC__in IVdsIscsiInitiatorPortal * This,
                       VDS_OBJECT_ID targetPortalId,
                       ULONGLONG ullSecurityFlags,
                               __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        END_INTERFACE
    } IVdsIscsiInitiatorPortalVtbl;
    interface IVdsIscsiInitiatorPortal
    {
        CONST_VTBL struct IVdsIscsiInitiatorPortalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperties(This,pInitiatorPortalProp) )
    ( (This)->lpVtbl -> GetInitiatorAdapter(This,ppInitiatorAdapter) )
    ( (This)->lpVtbl -> SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) )
    ( (This)->lpVtbl -> GetIpsecSecurity(This,targetPortalId,pullSecurityFlags) )
    ( (This)->lpVtbl -> SetIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) )
EXTERN_C const IID IID_IVdsDiskPartitionMF;
    typedef struct IVdsDiskPartitionMFVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDiskPartitionMF * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDiskPartitionMF * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDiskPartitionMF * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPartitionFileSystemProperties )(
            __RPC__in IVdsDiskPartitionMF * This,
                       ULONGLONG ullOffset,
                        __RPC__out VDS_FILE_SYSTEM_PROP *pFileSystemProp);
                           HRESULT ( STDMETHODCALLTYPE *GetPartitionFileSystemTypeName )(
            __RPC__in IVdsDiskPartitionMF * This,
                       ULONGLONG ullOffset,
                                __RPC__deref_out_opt_string LPWSTR *ppwszFileSystemTypeName);
                           HRESULT ( STDMETHODCALLTYPE *QueryPartitionFileSystemFormatSupport )(
            __RPC__in IVdsDiskPartitionMF * This,
                       ULONGLONG ullOffset,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP **ppFileSystemSupportProps,
                        __RPC__out LONG *plNumberOfFileSystems);
                           HRESULT ( STDMETHODCALLTYPE *FormatPartitionEx )(
            __RPC__in IVdsDiskPartitionMF * This,
                       ULONGLONG ullOffset,
                                       __RPC__in_opt_string LPWSTR pwszFileSystemTypeName,
                       USHORT usFileSystemRevision,
                       ULONG ulDesiredUnitAllocationSize,
                                       __RPC__in_opt_string LPWSTR pwszLabel,
                       BOOL bForce,
                       BOOL bQuickFormat,
                       BOOL bEnableCompression,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsDiskPartitionMFVtbl;
    interface IVdsDiskPartitionMF
    {
        CONST_VTBL struct IVdsDiskPartitionMFVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartitionFileSystemProperties(This,ullOffset,pFileSystemProp) )
    ( (This)->lpVtbl -> GetPartitionFileSystemTypeName(This,ullOffset,ppwszFileSystemTypeName) )
    ( (This)->lpVtbl -> QueryPartitionFileSystemFormatSupport(This,ullOffset,ppFileSystemSupportProps,plNumberOfFileSystems) )
    ( (This)->lpVtbl -> FormatPartitionEx(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) )
EXTERN_C const IID IID_IVdsVolumeMF;
    typedef struct IVdsVolumeMFVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolumeMF * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolumeMF * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolumeMF * This);
                           HRESULT ( STDMETHODCALLTYPE *GetFileSystemProperties )(
            __RPC__in IVdsVolumeMF * This,
                        __RPC__out VDS_FILE_SYSTEM_PROP *pFileSystemProp);
                           HRESULT ( STDMETHODCALLTYPE *Format )(
            __RPC__in IVdsVolumeMF * This,
                       VDS_FILE_SYSTEM_TYPE type,
                               __RPC__in_string LPWSTR pwszLabel,
                       DWORD dwUnitAllocationSize,
                       BOOL bForce,
                       BOOL bQuickFormat,
                       BOOL bEnableCompression,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *AddAccessPath )(
            __RPC__in IVdsVolumeMF * This,
                                       __RPC__in_ecount_full_string(( ( 260 - 1 ) + 1 ) ) LPWSTR pwszPath);
                           HRESULT ( STDMETHODCALLTYPE *QueryAccessPaths )(
            __RPC__in IVdsVolumeMF * This,
                                                  __RPC__deref_out_ecount_full_opt_string(*plNumberOfAccessPaths) LPWSTR **pwszPathArray,
                        __RPC__out LONG *plNumberOfAccessPaths);
                           HRESULT ( STDMETHODCALLTYPE *QueryReparsePoints )(
            __RPC__in IVdsVolumeMF * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfReparsePointProps) VDS_REPARSE_POINT_PROP **ppReparsePointProps,
                        __RPC__out LONG *plNumberOfReparsePointProps);
                           HRESULT ( STDMETHODCALLTYPE *DeleteAccessPath )(
            __RPC__in IVdsVolumeMF * This,
                                       __RPC__in_ecount_full_string(( ( 260 - 1 ) + 1 ) ) LPWSTR pwszPath,
                       BOOL bForce);
                           HRESULT ( STDMETHODCALLTYPE *Mount )(
            __RPC__in IVdsVolumeMF * This);
                           HRESULT ( STDMETHODCALLTYPE *Dismount )(
            __RPC__in IVdsVolumeMF * This,
                       BOOL bForce,
                       BOOL bPermanent);
                           HRESULT ( STDMETHODCALLTYPE *SetFileSystemFlags )(
            __RPC__in IVdsVolumeMF * This,
                       ULONG ulFlags);
                           HRESULT ( STDMETHODCALLTYPE *ClearFileSystemFlags )(
            __RPC__in IVdsVolumeMF * This,
                       ULONG ulFlags);
        END_INTERFACE
    } IVdsVolumeMFVtbl;
    interface IVdsVolumeMF
    {
        CONST_VTBL struct IVdsVolumeMFVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFileSystemProperties(This,pFileSystemProp) )
    ( (This)->lpVtbl -> Format(This,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) )
    ( (This)->lpVtbl -> AddAccessPath(This,pwszPath) )
    ( (This)->lpVtbl -> QueryAccessPaths(This,pwszPathArray,plNumberOfAccessPaths) )
    ( (This)->lpVtbl -> QueryReparsePoints(This,ppReparsePointProps,plNumberOfReparsePointProps) )
    ( (This)->lpVtbl -> DeleteAccessPath(This,pwszPath,bForce) )
    ( (This)->lpVtbl -> Mount(This) )
    ( (This)->lpVtbl -> Dismount(This,bForce,bPermanent) )
    ( (This)->lpVtbl -> SetFileSystemFlags(This,ulFlags) )
    ( (This)->lpVtbl -> ClearFileSystemFlags(This,ulFlags) )
EXTERN_C const IID IID_IVdsVolumeMF2;
    typedef struct IVdsVolumeMF2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolumeMF2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolumeMF2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolumeMF2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetFileSystemTypeName )(
            __RPC__in IVdsVolumeMF2 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszFileSystemTypeName);
                           HRESULT ( STDMETHODCALLTYPE *QueryFileSystemFormatSupport )(
            __RPC__in IVdsVolumeMF2 * This,
                                          __RPC__deref_out_ecount_full_opt(*plNumberOfFileSystems) VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP **ppFileSystemSupportProps,
                        __RPC__out LONG *plNumberOfFileSystems);
                           HRESULT ( STDMETHODCALLTYPE *FormatEx )(
            __RPC__in IVdsVolumeMF2 * This,
                                       __RPC__in_opt_string LPWSTR pwszFileSystemTypeName,
                       USHORT usFileSystemRevision,
                       ULONG ulDesiredUnitAllocationSize,
                                       __RPC__in_opt_string LPWSTR pwszLabel,
                       BOOL bForce,
                       BOOL bQuickFormat,
                       BOOL bEnableCompression,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsVolumeMF2Vtbl;
    interface IVdsVolumeMF2
    {
        CONST_VTBL struct IVdsVolumeMF2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFileSystemTypeName(This,ppwszFileSystemTypeName) )
    ( (This)->lpVtbl -> QueryFileSystemFormatSupport(This,ppFileSystemSupportProps,plNumberOfFileSystems) )
    ( (This)->lpVtbl -> FormatEx(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) )
EXTERN_C const IID IID_IVdsVolumeShrink;
    typedef struct IVdsVolumeShrinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolumeShrink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolumeShrink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolumeShrink * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryMaxReclaimableBytes )(
            __RPC__in IVdsVolumeShrink * This,
                        __RPC__out ULONGLONG *pullMaxNumberOfReclaimableBytes);
                           HRESULT ( STDMETHODCALLTYPE *Shrink )(
            __RPC__in IVdsVolumeShrink * This,
                       ULONGLONG ullDesiredNumberOfReclaimableBytes,
                       ULONGLONG ullMinNumberOfReclaimableBytes,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsVolumeShrinkVtbl;
    interface IVdsVolumeShrink
    {
        CONST_VTBL struct IVdsVolumeShrinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryMaxReclaimableBytes(This,pullMaxNumberOfReclaimableBytes) )
    ( (This)->lpVtbl -> Shrink(This,ullDesiredNumberOfReclaimableBytes,ullMinNumberOfReclaimableBytes,ppAsync) )
EXTERN_C const IID IID_IVdsSubSystemImportTarget;
    typedef struct IVdsSubSystemImportTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsSubSystemImportTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsSubSystemImportTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsSubSystemImportTarget * This);
                           HRESULT ( STDMETHODCALLTYPE *GetImportTarget )(
            __RPC__in IVdsSubSystemImportTarget * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszIscsiName);
                           HRESULT ( STDMETHODCALLTYPE *SetImportTarget )(
            __RPC__in IVdsSubSystemImportTarget * This,
                                       __RPC__in_opt_string LPWSTR pwszIscsiName);
        END_INTERFACE
    } IVdsSubSystemImportTargetVtbl;
    interface IVdsSubSystemImportTarget
    {
        CONST_VTBL struct IVdsSubSystemImportTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetImportTarget(This,ppwszIscsiName) )
    ( (This)->lpVtbl -> SetImportTarget(This,pwszIscsiName) )
EXTERN_C const IID IID_IVdsIscsiPortalLocal;
    typedef struct IVdsIscsiPortalLocalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsIscsiPortalLocal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsIscsiPortalLocal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsIscsiPortalLocal * This);
                           HRESULT ( STDMETHODCALLTYPE *SetIpsecSecurityLocal )(
            __RPC__in IVdsIscsiPortalLocal * This,
                       ULONGLONG ullSecurityFlags,
                               __RPC__in_opt VDS_ISCSI_IPSEC_KEY *pIpsecKey);
        END_INTERFACE
    } IVdsIscsiPortalLocalVtbl;
    interface IVdsIscsiPortalLocal
    {
        CONST_VTBL struct IVdsIscsiPortalLocalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIpsecSecurityLocal(This,ullSecurityFlags,pIpsecKey) )
EXTERN_C const IID IID_IVdsServiceSAN;
    typedef struct IVdsServiceSANVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceSAN * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceSAN * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceSAN * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSANPolicy )(
            __RPC__in IVdsServiceSAN * This,
                        __RPC__out VDS_SAN_POLICY *pSanPolicy);
                           HRESULT ( STDMETHODCALLTYPE *SetSANPolicy )(
            __RPC__in IVdsServiceSAN * This,
                       VDS_SAN_POLICY SanPolicy);
        END_INTERFACE
    } IVdsServiceSANVtbl;
    interface IVdsServiceSAN
    {
        CONST_VTBL struct IVdsServiceSANVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSANPolicy(This,pSanPolicy) )
    ( (This)->lpVtbl -> SetSANPolicy(This,SanPolicy) )
EXTERN_C const IID IID_IVdsVolumeMF3;
    typedef struct IVdsVolumeMF3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsVolumeMF3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsVolumeMF3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsVolumeMF3 * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryVolumeGuidPathnames )(
            __RPC__in IVdsVolumeMF3 * This,
                                                  __RPC__deref_out_ecount_full_opt_string(*pulNumberOfPaths) LPWSTR **pwszPathArray,
                        __RPC__out ULONG *pulNumberOfPaths);
                           HRESULT ( STDMETHODCALLTYPE *FormatEx2 )(
            __RPC__in IVdsVolumeMF3 * This,
                                       __RPC__in_opt_string LPWSTR pwszFileSystemTypeName,
                       USHORT usFileSystemRevision,
                       ULONG ulDesiredUnitAllocationSize,
                                       __RPC__in_opt_string LPWSTR pwszLabel,
                       DWORD Options,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *OfflineVolume )(
            __RPC__in IVdsVolumeMF3 * This);
        END_INTERFACE
    } IVdsVolumeMF3Vtbl;
    interface IVdsVolumeMF3
    {
        CONST_VTBL struct IVdsVolumeMF3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryVolumeGuidPathnames(This,pwszPathArray,pulNumberOfPaths) )
    ( (This)->lpVtbl -> FormatEx2(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,Options,ppAsync) )
    ( (This)->lpVtbl -> OfflineVolume(This) )
EXTERN_C const IID IID_IVdsDiskPartitionMF2;
    typedef struct IVdsDiskPartitionMF2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsDiskPartitionMF2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsDiskPartitionMF2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsDiskPartitionMF2 * This);
                           HRESULT ( STDMETHODCALLTYPE *FormatPartitionEx2 )(
            __RPC__in IVdsDiskPartitionMF2 * This,
                       ULONGLONG ullOffset,
                                       __RPC__in_opt_string LPWSTR pwszFileSystemTypeName,
                       USHORT usFileSystemRevision,
                       ULONG ulDesiredUnitAllocationSize,
                                       __RPC__in_opt_string LPWSTR pwszLabel,
                       DWORD Options,
                        __RPC__deref_out_opt IVdsAsync **ppAsync);
        END_INTERFACE
    } IVdsDiskPartitionMF2Vtbl;
    interface IVdsDiskPartitionMF2
    {
        CONST_VTBL struct IVdsDiskPartitionMF2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FormatPartitionEx2(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,Options,ppAsync) )
EXTERN_C const IID IID_IVdsServiceSw;
    typedef struct IVdsServiceSwVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsServiceSw * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsServiceSw * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsServiceSw * This);
                           HRESULT ( STDMETHODCALLTYPE *GetDiskObject )(
            __RPC__in IVdsServiceSw * This,
                               __RPC__in_string LPCWSTR pwszDeviceID,
                        __RPC__deref_out_opt IUnknown **ppDiskUnk);
        END_INTERFACE
    } IVdsServiceSwVtbl;
    interface IVdsServiceSw
    {
        CONST_VTBL struct IVdsServiceSwVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDiskObject(This,pwszDeviceID,ppDiskUnk) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0070_v0_0_s_ifspec;
}
