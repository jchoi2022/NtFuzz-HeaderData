#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IVssSnapshotMgmt IVssSnapshotMgmt;
typedef interface IVssSnapshotMgmt2 IVssSnapshotMgmt2;
typedef interface IVssDifferentialSoftwareSnapshotMgmt IVssDifferentialSoftwareSnapshotMgmt;
typedef interface IVssDifferentialSoftwareSnapshotMgmt2 IVssDifferentialSoftwareSnapshotMgmt2;
typedef interface IVssDifferentialSoftwareSnapshotMgmt3 IVssDifferentialSoftwareSnapshotMgmt3;
typedef interface IVssEnumMgmtObject IVssEnumMgmtObject;
typedef class VssSnapshotMgmt VssSnapshotMgmt;
#include "oaidl.h"
#include "ocidl.h"
#include "vss.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _VSS_MGMT_OBJECT_TYPE
    {
        VSS_MGMT_OBJECT_UNKNOWN = 0,
        VSS_MGMT_OBJECT_VOLUME = ( VSS_MGMT_OBJECT_UNKNOWN + 1 ) ,
        VSS_MGMT_OBJECT_DIFF_VOLUME = ( VSS_MGMT_OBJECT_VOLUME + 1 ) ,
        VSS_MGMT_OBJECT_DIFF_AREA = ( VSS_MGMT_OBJECT_DIFF_VOLUME + 1 )
    } VSS_MGMT_OBJECT_TYPE;
typedef enum _VSS_MGMT_OBJECT_TYPE *PVSS_MGMT_OBJECT_TYPE;
typedef struct _VSS_VOLUME_PROP
    {
    VSS_PWSZ m_pwszVolumeName;
    VSS_PWSZ m_pwszVolumeDisplayName;
    } VSS_VOLUME_PROP;
typedef struct _VSS_VOLUME_PROP *PVSS_VOLUME_PROP;
typedef struct _VSS_DIFF_VOLUME_PROP
    {
    VSS_PWSZ m_pwszVolumeName;
    VSS_PWSZ m_pwszVolumeDisplayName;
    LONGLONG m_llVolumeFreeSpace;
    LONGLONG m_llVolumeTotalSpace;
    } VSS_DIFF_VOLUME_PROP;
typedef struct _VSS_DIFF_VOLUME_PROP *PVSS_DIFF_VOLUME_PROP;
typedef struct _VSS_DIFF_AREA_PROP
    {
    VSS_PWSZ m_pwszVolumeName;
    VSS_PWSZ m_pwszDiffAreaVolumeName;
    LONGLONG m_llMaximumDiffSpace;
    LONGLONG m_llAllocatedDiffSpace;
    LONGLONG m_llUsedDiffSpace;
    } VSS_DIFF_AREA_PROP;
typedef struct _VSS_DIFF_AREA_PROP *PVSS_DIFF_AREA_PROP;
typedef union __MIDL___MIDL_itf_vsmgmt_0000_0000_0001
    {
                   VSS_VOLUME_PROP Vol;
                   VSS_DIFF_VOLUME_PROP DiffVol;
                   VSS_DIFF_AREA_PROP DiffArea;
    } VSS_MGMT_OBJECT_UNION;
typedef union __MIDL___MIDL_itf_vsmgmt_0000_0000_0001 *PVSS_MGMT_OBJECT_UNION;
typedef struct _VSS_MGMT_OBJECT_PROP
    {
    VSS_MGMT_OBJECT_TYPE Type;
                      VSS_MGMT_OBJECT_UNION Obj;
    } VSS_MGMT_OBJECT_PROP;
typedef struct _VSS_MGMT_OBJECT_PROP *PVSS_MGMT_OBJECT_PROP;
typedef
enum _VSS_PROTECTION_LEVEL
    {
        VSS_PROTECTION_LEVEL_ORIGINAL_VOLUME = 0,
        VSS_PROTECTION_LEVEL_SNAPSHOT = ( VSS_PROTECTION_LEVEL_ORIGINAL_VOLUME + 1 )
    } VSS_PROTECTION_LEVEL;
typedef enum _VSS_PROTECTION_LEVEL *PVSS_PROTECTION_LEVEL;
typedef
enum _VSS_PROTECTION_FAULT
    {
        VSS_PROTECTION_FAULT_NONE = 0,
        VSS_PROTECTION_FAULT_DIFF_AREA_MISSING = ( VSS_PROTECTION_FAULT_NONE + 1 ) ,
        VSS_PROTECTION_FAULT_IO_FAILURE_DURING_ONLINE = ( VSS_PROTECTION_FAULT_DIFF_AREA_MISSING + 1 ) ,
        VSS_PROTECTION_FAULT_META_DATA_CORRUPTION = ( VSS_PROTECTION_FAULT_IO_FAILURE_DURING_ONLINE + 1 ) ,
        VSS_PROTECTION_FAULT_MEMORY_ALLOCATION_FAILURE = ( VSS_PROTECTION_FAULT_META_DATA_CORRUPTION + 1 ) ,
        VSS_PROTECTION_FAULT_MAPPED_MEMORY_FAILURE = ( VSS_PROTECTION_FAULT_MEMORY_ALLOCATION_FAILURE + 1 ) ,
        VSS_PROTECTION_FAULT_COW_READ_FAILURE = ( VSS_PROTECTION_FAULT_MAPPED_MEMORY_FAILURE + 1 ) ,
        VSS_PROTECTION_FAULT_COW_WRITE_FAILURE = ( VSS_PROTECTION_FAULT_COW_READ_FAILURE + 1 ) ,
        VSS_PROTECTION_FAULT_DIFF_AREA_FULL = ( VSS_PROTECTION_FAULT_COW_WRITE_FAILURE + 1 ) ,
        VSS_PROTECTION_FAULT_GROW_TOO_SLOW = ( VSS_PROTECTION_FAULT_DIFF_AREA_FULL + 1 ) ,
        VSS_PROTECTION_FAULT_GROW_FAILED = ( VSS_PROTECTION_FAULT_GROW_TOO_SLOW + 1 ) ,
        VSS_PROTECTION_FAULT_DESTROY_ALL_SNAPSHOTS = ( VSS_PROTECTION_FAULT_GROW_FAILED + 1 ) ,
        VSS_PROTECTION_FAULT_FILE_SYSTEM_FAILURE = ( VSS_PROTECTION_FAULT_DESTROY_ALL_SNAPSHOTS + 1 ) ,
        VSS_PROTECTION_FAULT_IO_FAILURE = ( VSS_PROTECTION_FAULT_FILE_SYSTEM_FAILURE + 1 ) ,
        VSS_PROTECTION_FAULT_DIFF_AREA_REMOVED = ( VSS_PROTECTION_FAULT_IO_FAILURE + 1 ) ,
        VSS_PROTECTION_FAULT_EXTERNAL_WRITER_TO_DIFF_AREA = ( VSS_PROTECTION_FAULT_DIFF_AREA_REMOVED + 1 ) ,
        VSS_PROTECTION_FAULT_MOUNT_DURING_CLUSTER_OFFLINE = ( VSS_PROTECTION_FAULT_EXTERNAL_WRITER_TO_DIFF_AREA + 1 )
    } VSS_PROTECTION_FAULT;
typedef enum _VSS_PROTECTION_FAULT *PVSS_PROTECTION_FAULT;
typedef struct _VSS_VOLUME_PROTECTION_INFO
    {
    VSS_PROTECTION_LEVEL m_protectionLevel;
    BOOL m_volumeIsOfflineForProtection;
    VSS_PROTECTION_FAULT m_protectionFault;
    LONG m_failureStatus;
    BOOL m_volumeHasUnusedDiffArea;
    DWORD m_reserved;
    } VSS_VOLUME_PROTECTION_INFO;
typedef struct _VSS_VOLUME_PROTECTION_INFO *PVSS_VOLUME_PROTECTION_INFO;
extern RPC_IF_HANDLE __MIDL_itf_vsmgmt_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsmgmt_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IVssSnapshotMgmt;
    typedef struct IVssSnapshotMgmtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssSnapshotMgmt * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssSnapshotMgmt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssSnapshotMgmt * This);
        HRESULT ( STDMETHODCALLTYPE *GetProviderMgmtInterface )(
            __RPC__in IVssSnapshotMgmt * This,
                       VSS_ID ProviderId,
                       __RPC__in REFIID InterfaceId,
                                __RPC__deref_out_opt IUnknown **ppItf);
        HRESULT ( STDMETHODCALLTYPE *QueryVolumesSupportedForSnapshots )(
            __RPC__in IVssSnapshotMgmt * This,
                       VSS_ID ProviderId,
                       LONG lContext,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QuerySnapshotsByVolume )(
            __RPC__in IVssSnapshotMgmt * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       VSS_ID ProviderId,
                        __RPC__deref_out_opt IVssEnumObject **ppEnum);
        END_INTERFACE
    } IVssSnapshotMgmtVtbl;
    interface IVssSnapshotMgmt
    {
        CONST_VTBL struct IVssSnapshotMgmtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProviderMgmtInterface(This,ProviderId,InterfaceId,ppItf) )
    ( (This)->lpVtbl -> QueryVolumesSupportedForSnapshots(This,ProviderId,lContext,ppEnum) )
    ( (This)->lpVtbl -> QuerySnapshotsByVolume(This,pwszVolumeName,ProviderId,ppEnum) )
EXTERN_C const IID IID_IVssSnapshotMgmt2;
    typedef struct IVssSnapshotMgmt2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssSnapshotMgmt2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssSnapshotMgmt2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssSnapshotMgmt2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetMinDiffAreaSize )(
            __RPC__in IVssSnapshotMgmt2 * This,
                        __RPC__out LONGLONG *pllMinDiffAreaSize);
        END_INTERFACE
    } IVssSnapshotMgmt2Vtbl;
    interface IVssSnapshotMgmt2
    {
        CONST_VTBL struct IVssSnapshotMgmt2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMinDiffAreaSize(This,pllMinDiffAreaSize) )
EXTERN_C const IID IID_IVssDifferentialSoftwareSnapshotMgmt;
    typedef struct IVssDifferentialSoftwareSnapshotMgmtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This);
        HRESULT ( STDMETHODCALLTYPE *AddDiffArea )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace);
        HRESULT ( STDMETHODCALLTYPE *ChangeDiffAreaMaximumSize )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace);
        HRESULT ( STDMETHODCALLTYPE *QueryVolumesSupportedForDiffAreas )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       __RPC__in VSS_PWSZ pwszOriginalVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasForVolume )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasOnVolume )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasForSnapshot )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt * This,
                       VSS_ID SnapshotId,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        END_INTERFACE
    } IVssDifferentialSoftwareSnapshotMgmtVtbl;
    interface IVssDifferentialSoftwareSnapshotMgmt
    {
        CONST_VTBL struct IVssDifferentialSoftwareSnapshotMgmtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
    ( (This)->lpVtbl -> ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
    ( (This)->lpVtbl -> QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) )
EXTERN_C const IID IID_IVssDifferentialSoftwareSnapshotMgmt2;
    typedef struct IVssDifferentialSoftwareSnapshotMgmt2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddDiffArea )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace);
        HRESULT ( STDMETHODCALLTYPE *ChangeDiffAreaMaximumSize )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace);
        HRESULT ( STDMETHODCALLTYPE *QueryVolumesSupportedForDiffAreas )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszOriginalVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasForVolume )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasOnVolume )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasForSnapshot )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       VSS_ID SnapshotId,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ChangeDiffAreaMaximumSizeEx )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace,
                       BOOL bVolatile);
        HRESULT ( STDMETHODCALLTYPE *MigrateDiffAreas )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       __RPC__in VSS_PWSZ pwszNewDiffAreaVolumeName);
        HRESULT ( STDMETHODCALLTYPE *QueryMigrationStatus )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                        __RPC__deref_out_opt IVssAsync **ppAsync);
        HRESULT ( STDMETHODCALLTYPE *SetSnapshotPriority )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt2 * This,
                       VSS_ID idSnapshot,
                       BYTE priority);
        END_INTERFACE
    } IVssDifferentialSoftwareSnapshotMgmt2Vtbl;
    interface IVssDifferentialSoftwareSnapshotMgmt2
    {
        CONST_VTBL struct IVssDifferentialSoftwareSnapshotMgmt2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
    ( (This)->lpVtbl -> ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
    ( (This)->lpVtbl -> QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) )
    ( (This)->lpVtbl -> ChangeDiffAreaMaximumSizeEx(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace,bVolatile) )
    ( (This)->lpVtbl -> MigrateDiffAreas(This,pwszVolumeName,pwszDiffAreaVolumeName,pwszNewDiffAreaVolumeName) )
    ( (This)->lpVtbl -> QueryMigrationStatus(This,pwszVolumeName,pwszDiffAreaVolumeName,ppAsync) )
    ( (This)->lpVtbl -> SetSnapshotPriority(This,idSnapshot,priority) )
EXTERN_C const IID IID_IVssDifferentialSoftwareSnapshotMgmt3;
    typedef struct IVssDifferentialSoftwareSnapshotMgmt3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddDiffArea )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace);
        HRESULT ( STDMETHODCALLTYPE *ChangeDiffAreaMaximumSize )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace);
        HRESULT ( STDMETHODCALLTYPE *QueryVolumesSupportedForDiffAreas )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszOriginalVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasForVolume )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasOnVolume )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryDiffAreasForSnapshot )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       VSS_ID SnapshotId,
                        __RPC__deref_out_opt IVssEnumMgmtObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ChangeDiffAreaMaximumSizeEx )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       LONGLONG llMaximumDiffSpace,
                       BOOL bVolatile);
        HRESULT ( STDMETHODCALLTYPE *MigrateDiffAreas )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                       __RPC__in VSS_PWSZ pwszNewDiffAreaVolumeName);
        HRESULT ( STDMETHODCALLTYPE *QueryMigrationStatus )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName,
                        __RPC__deref_out_opt IVssAsync **ppAsync);
        HRESULT ( STDMETHODCALLTYPE *SetSnapshotPriority )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       VSS_ID idSnapshot,
                       BYTE priority);
        HRESULT ( STDMETHODCALLTYPE *SetVolumeProtectLevel )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       VSS_PROTECTION_LEVEL protectionLevel);
        HRESULT ( STDMETHODCALLTYPE *GetVolumeProtectLevel )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__out VSS_VOLUME_PROTECTION_INFO *protectionLevel);
        HRESULT ( STDMETHODCALLTYPE *ClearVolumeProtectFault )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszVolumeName);
        HRESULT ( STDMETHODCALLTYPE *DeleteUnusedDiffAreas )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       __RPC__in VSS_PWSZ pwszDiffAreaVolumeName);
        HRESULT ( STDMETHODCALLTYPE *QuerySnapshotDeltaBitmap )(
            __RPC__in IVssDifferentialSoftwareSnapshotMgmt3 * This,
                       VSS_ID idSnapshotOlder,
                       VSS_ID idSnapshotYounger,
                        __RPC__out ULONG *pcBlockSizePerBit,
                        __RPC__out ULONG *pcBitmapLength,
                                          __RPC__deref_out_ecount_full_opt(*pcBitmapLength) BYTE **ppbBitmap);
        END_INTERFACE
    } IVssDifferentialSoftwareSnapshotMgmt3Vtbl;
    interface IVssDifferentialSoftwareSnapshotMgmt3
    {
        CONST_VTBL struct IVssDifferentialSoftwareSnapshotMgmt3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
    ( (This)->lpVtbl -> ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
    ( (This)->lpVtbl -> QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) )
    ( (This)->lpVtbl -> QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) )
    ( (This)->lpVtbl -> ChangeDiffAreaMaximumSizeEx(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace,bVolatile) )
    ( (This)->lpVtbl -> MigrateDiffAreas(This,pwszVolumeName,pwszDiffAreaVolumeName,pwszNewDiffAreaVolumeName) )
    ( (This)->lpVtbl -> QueryMigrationStatus(This,pwszVolumeName,pwszDiffAreaVolumeName,ppAsync) )
    ( (This)->lpVtbl -> SetSnapshotPriority(This,idSnapshot,priority) )
    ( (This)->lpVtbl -> SetVolumeProtectLevel(This,pwszVolumeName,protectionLevel) )
    ( (This)->lpVtbl -> GetVolumeProtectLevel(This,pwszVolumeName,protectionLevel) )
    ( (This)->lpVtbl -> ClearVolumeProtectFault(This,pwszVolumeName) )
    ( (This)->lpVtbl -> DeleteUnusedDiffAreas(This,pwszDiffAreaVolumeName) )
    ( (This)->lpVtbl -> QuerySnapshotDeltaBitmap(This,idSnapshotOlder,idSnapshotYounger,pcBlockSizePerBit,pcBitmapLength,ppbBitmap) )
EXTERN_C const IID IID_IVssEnumMgmtObject;
    typedef struct IVssEnumMgmtObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssEnumMgmtObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssEnumMgmtObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssEnumMgmtObject * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IVssEnumMgmtObject * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) VSS_MGMT_OBJECT_PROP *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IVssEnumMgmtObject * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IVssEnumMgmtObject * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IVssEnumMgmtObject * This,
                            __RPC__deref_inout_opt IVssEnumMgmtObject **ppenum);
        END_INTERFACE
    } IVssEnumMgmtObjectVtbl;
    interface IVssEnumMgmtObject
    {
        CONST_VTBL struct IVssEnumMgmtObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID LIBID_VSMGMT;
EXTERN_C const CLSID CLSID_VssSnapshotMgmt;
class DECLSPEC_UUID("0B5A2C52-3EB9-470a-96E2-6C6D4570E40F")
VssSnapshotMgmt;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vsmgmt_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsmgmt_0000_0007_v0_0_s_ifspec;
}
