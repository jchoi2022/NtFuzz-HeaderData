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
typedef interface IVdsProviderPrivate IVdsProviderPrivate;
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
typedef interface IVdsHwProviderPrivate IVdsHwProviderPrivate;
typedef interface IVdsHwProviderPrivateMpio IVdsHwProviderPrivateMpio;
typedef interface IVdsAdmin IVdsAdmin;
#include "oaidl.h"
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
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0000_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsProviderPrivate;
    typedef struct IVdsProviderPrivateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsProviderPrivate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsProviderPrivate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsProviderPrivate * This);
                           HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IVdsProviderPrivate * This,
                       VDS_OBJECT_ID ObjectId,
                       VDS_OBJECT_TYPE type,
                        __RPC__deref_out_opt IUnknown **ppObjectUnk);
                           HRESULT ( STDMETHODCALLTYPE *OnLoad )(
            __RPC__in IVdsProviderPrivate * This,
                               __RPC__in_string LPWSTR pwszMachineName,
                       __RPC__in_opt IUnknown *pCallbackObject);
                           HRESULT ( STDMETHODCALLTYPE *OnUnload )(
            __RPC__in IVdsProviderPrivate * This,
                       BOOL bForceUnload);
        END_INTERFACE
    } IVdsProviderPrivateVtbl;
    interface IVdsProviderPrivate
    {
        CONST_VTBL struct IVdsProviderPrivateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetObject(This,ObjectId,type,ppObjectUnk) )
    ( (This)->lpVtbl -> OnLoad(This,pwszMachineName,pCallbackObject) )
    ( (This)->lpVtbl -> OnUnload(This,bForceUnload) )
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
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0006_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsHwProviderPrivate;
    typedef struct IVdsHwProviderPrivateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHwProviderPrivate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHwProviderPrivate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHwProviderPrivate * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryIfCreatedLun )(
            __RPC__in IVdsHwProviderPrivate * This,
                               __RPC__in_string LPWSTR pwszDevicePath,
                       __RPC__in VDS_LUN_INFORMATION *pVdsLunInformation,
                        __RPC__out VDS_OBJECT_ID *pLunId);
        END_INTERFACE
    } IVdsHwProviderPrivateVtbl;
    interface IVdsHwProviderPrivate
    {
        CONST_VTBL struct IVdsHwProviderPrivateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryIfCreatedLun(This,pwszDevicePath,pVdsLunInformation,pLunId) )
EXTERN_C const IID IID_IVdsHwProviderPrivateMpio;
    typedef struct IVdsHwProviderPrivateMpioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsHwProviderPrivateMpio * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsHwProviderPrivateMpio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsHwProviderPrivateMpio * This);
                           HRESULT ( STDMETHODCALLTYPE *SetAllPathStatusesFromHbaPort )(
            __RPC__in IVdsHwProviderPrivateMpio * This,
                       VDS_HBAPORT_PROP hbaPortProp,
                       VDS_PATH_STATUS status);
        END_INTERFACE
    } IVdsHwProviderPrivateMpioVtbl;
    interface IVdsHwProviderPrivateMpio
    {
        CONST_VTBL struct IVdsHwProviderPrivateMpioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAllPathStatusesFromHbaPort(This,hbaPortProp,status) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_IVdsAdmin;
    typedef struct IVdsAdminVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVdsAdmin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVdsAdmin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVdsAdmin * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterProvider )(
            __RPC__in IVdsAdmin * This,
                       VDS_OBJECT_ID providerId,
                       CLSID providerClsid,
                                       __RPC__in_ecount_full_string(( 200 + 1 ) ) LPWSTR pwszName,
                       VDS_PROVIDER_TYPE type,
                                                                          __RPC__in_ecount_full_opt_string(( ( 15 - 1 ) + 1 ) ) LPWSTR pwszMachineName,
                                       __RPC__in_ecount_full_string(( 16 + 1 ) ) LPWSTR pwszVersion,
                       GUID guidVersionId);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterProvider )(
            __RPC__in IVdsAdmin * This,
                       VDS_OBJECT_ID providerId);
        END_INTERFACE
    } IVdsAdminVtbl;
    interface IVdsAdmin
    {
        CONST_VTBL struct IVdsAdminVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterProvider(This,providerId,providerClsid,pwszName,type,pwszMachineName,pwszVersion,guidVersionId) )
    ( (This)->lpVtbl -> UnregisterProvider(This,providerId) )
#endif
#pragma endregion
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0036_v0_0_s_ifspec;
}
