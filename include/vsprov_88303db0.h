#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IVssSoftwareSnapshotProvider IVssSoftwareSnapshotProvider;
typedef interface IVssProviderCreateSnapshotSet IVssProviderCreateSnapshotSet;
typedef interface IVssProviderNotifications IVssProviderNotifications;
typedef interface IVssHardwareSnapshotProvider IVssHardwareSnapshotProvider;
typedef interface IVssHardwareSnapshotProviderEx IVssHardwareSnapshotProviderEx;
typedef interface IVssFileShareSnapshotProvider IVssFileShareSnapshotProvider;
#include "oaidl.h"
#include "ocidl.h"
#include "vss.h"
#include "vdslun.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef VSS_PWSZ *PVSS_PWSZ;
extern RPC_IF_HANDLE __MIDL_itf_vsprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsprov_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IVssSoftwareSnapshotProvider;
    typedef struct IVssSoftwareSnapshotProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssSoftwareSnapshotProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssSoftwareSnapshotProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *SetContext )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       LONG lContext);
                           HRESULT ( STDMETHODCALLTYPE *GetSnapshotProperties )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       VSS_ID SnapshotId,
                        __RPC__out VSS_SNAPSHOT_PROP *pProp);
                           HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       VSS_ID QueriedObjectId,
                       VSS_OBJECT_TYPE eQueriedObjectType,
                       VSS_OBJECT_TYPE eReturnedObjectsType,
                        __RPC__deref_out_opt IVssEnumObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *DeleteSnapshots )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       VSS_ID SourceObjectId,
                       VSS_OBJECT_TYPE eSourceObjectType,
                       BOOL bForceDelete,
                        __RPC__out LONG *plDeletedSnapshots,
                        __RPC__out VSS_ID *pNondeletedSnapshotID);
                           HRESULT ( STDMETHODCALLTYPE *BeginPrepareSnapshot )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       VSS_ID SnapshotSetId,
                       VSS_ID SnapshotId,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                       LONG lNewContext);
                           HRESULT ( STDMETHODCALLTYPE *IsVolumeSupported )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__out BOOL *pbSupportedByThisProvider);
                           HRESULT ( STDMETHODCALLTYPE *IsVolumeSnapshotted )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       __RPC__in VSS_PWSZ pwszVolumeName,
                        __RPC__out BOOL *pbSnapshotsPresent,
                        __RPC__out LONG *plSnapshotCompatibility);
                           HRESULT ( STDMETHODCALLTYPE *SetSnapshotProperty )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       VSS_ID SnapshotId,
                       VSS_SNAPSHOT_PROPERTY_ID eSnapshotPropertyId,
                       VARIANT vProperty);
                           HRESULT ( STDMETHODCALLTYPE *RevertToSnapshot )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       VSS_ID SnapshotId);
                           HRESULT ( STDMETHODCALLTYPE *QueryRevertStatus )(
            __RPC__in IVssSoftwareSnapshotProvider * This,
                       __RPC__in VSS_PWSZ pwszVolume,
                        __RPC__deref_out_opt IVssAsync **ppAsync);
        END_INTERFACE
    } IVssSoftwareSnapshotProviderVtbl;
    interface IVssSoftwareSnapshotProvider
    {
        CONST_VTBL struct IVssSoftwareSnapshotProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContext(This,lContext) )
    ( (This)->lpVtbl -> GetSnapshotProperties(This,SnapshotId,pProp) )
    ( (This)->lpVtbl -> Query(This,QueriedObjectId,eQueriedObjectType,eReturnedObjectsType,ppEnum) )
    ( (This)->lpVtbl -> DeleteSnapshots(This,SourceObjectId,eSourceObjectType,bForceDelete,plDeletedSnapshots,pNondeletedSnapshotID) )
    ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,pwszVolumeName,lNewContext) )
    ( (This)->lpVtbl -> IsVolumeSupported(This,pwszVolumeName,pbSupportedByThisProvider) )
    ( (This)->lpVtbl -> IsVolumeSnapshotted(This,pwszVolumeName,pbSnapshotsPresent,plSnapshotCompatibility) )
    ( (This)->lpVtbl -> SetSnapshotProperty(This,SnapshotId,eSnapshotPropertyId,vProperty) )
    ( (This)->lpVtbl -> RevertToSnapshot(This,SnapshotId) )
    ( (This)->lpVtbl -> QueryRevertStatus(This,pwszVolume,ppAsync) )
EXTERN_C const IID IID_IVssProviderCreateSnapshotSet;
    typedef struct IVssProviderCreateSnapshotSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssProviderCreateSnapshotSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssProviderCreateSnapshotSet * This);
                           HRESULT ( STDMETHODCALLTYPE *EndPrepareSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId);
                           HRESULT ( STDMETHODCALLTYPE *PreCommitSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId);
                           HRESULT ( STDMETHODCALLTYPE *CommitSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId);
                           HRESULT ( STDMETHODCALLTYPE *PostCommitSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId,
                       LONG lSnapshotsCount);
                           HRESULT ( STDMETHODCALLTYPE *PreFinalCommitSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId);
                           HRESULT ( STDMETHODCALLTYPE *PostFinalCommitSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId);
                           HRESULT ( STDMETHODCALLTYPE *AbortSnapshots )(
            __RPC__in IVssProviderCreateSnapshotSet * This,
                       VSS_ID SnapshotSetId);
        END_INTERFACE
    } IVssProviderCreateSnapshotSetVtbl;
    interface IVssProviderCreateSnapshotSet
    {
        CONST_VTBL struct IVssProviderCreateSnapshotSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EndPrepareSnapshots(This,SnapshotSetId) )
    ( (This)->lpVtbl -> PreCommitSnapshots(This,SnapshotSetId) )
    ( (This)->lpVtbl -> CommitSnapshots(This,SnapshotSetId) )
    ( (This)->lpVtbl -> PostCommitSnapshots(This,SnapshotSetId,lSnapshotsCount) )
    ( (This)->lpVtbl -> PreFinalCommitSnapshots(This,SnapshotSetId) )
    ( (This)->lpVtbl -> PostFinalCommitSnapshots(This,SnapshotSetId) )
    ( (This)->lpVtbl -> AbortSnapshots(This,SnapshotSetId) )
EXTERN_C const IID IID_IVssProviderNotifications;
    typedef struct IVssProviderNotificationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssProviderNotifications * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssProviderNotifications * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssProviderNotifications * This);
                           HRESULT ( STDMETHODCALLTYPE *OnLoad )(
            __RPC__in IVssProviderNotifications * This,
                               __RPC__in_opt IUnknown *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *OnUnload )(
            __RPC__in IVssProviderNotifications * This,
                       BOOL bForceUnload);
        END_INTERFACE
    } IVssProviderNotificationsVtbl;
    interface IVssProviderNotifications
    {
        CONST_VTBL struct IVssProviderNotificationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLoad(This,pCallback) )
    ( (This)->lpVtbl -> OnUnload(This,bForceUnload) )
EXTERN_C const IID IID_IVssHardwareSnapshotProvider;
    typedef struct IVssHardwareSnapshotProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssHardwareSnapshotProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssHardwareSnapshotProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *AreLunsSupported )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                       LONG lLunCount,
                       LONG lContext,
                                        __RPC__in_ecount_full_opt(lLunCount) VSS_PWSZ *rgwszDevices,
                                     __RPC__inout_ecount_full(lLunCount) VDS_LUN_INFORMATION *pLunInformation,
                        __RPC__out BOOL *pbIsSupported);
                           HRESULT ( STDMETHODCALLTYPE *FillInLunInfo )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                       __RPC__in VSS_PWSZ wszDeviceName,
                            __RPC__inout VDS_LUN_INFORMATION *pLunInfo,
                        __RPC__out BOOL *pbIsSupported);
                           HRESULT ( STDMETHODCALLTYPE *BeginPrepareSnapshot )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                       VSS_ID SnapshotSetId,
                       VSS_ID SnapshotId,
                       LONG lContext,
                       LONG lLunCount,
                                        __RPC__in_ecount_full_opt(lLunCount) VSS_PWSZ *rgDeviceNames,
                                     __RPC__inout_ecount_full(lLunCount) VDS_LUN_INFORMATION *rgLunInformation);
                           HRESULT ( STDMETHODCALLTYPE *GetTargetLuns )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                       LONG lLunCount,
                                        __RPC__in_ecount_full_opt(lLunCount) VSS_PWSZ *rgDeviceNames,
                                        __RPC__in_ecount_full_opt(lLunCount) VDS_LUN_INFORMATION *rgSourceLuns,
                                     __RPC__inout_ecount_full(lLunCount) VDS_LUN_INFORMATION *rgDestinationLuns);
                           HRESULT ( STDMETHODCALLTYPE *LocateLuns )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                       LONG lLunCount,
                                        __RPC__in_ecount_full_opt(lLunCount) VDS_LUN_INFORMATION *rgSourceLuns);
                           HRESULT ( STDMETHODCALLTYPE *OnLunEmpty )(
            __RPC__in IVssHardwareSnapshotProvider * This,
                               __RPC__in_opt VSS_PWSZ wszDeviceName,
                               __RPC__in_opt VDS_LUN_INFORMATION *pInformation);
        END_INTERFACE
    } IVssHardwareSnapshotProviderVtbl;
    interface IVssHardwareSnapshotProvider
    {
        CONST_VTBL struct IVssHardwareSnapshotProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AreLunsSupported(This,lLunCount,lContext,rgwszDevices,pLunInformation,pbIsSupported) )
    ( (This)->lpVtbl -> FillInLunInfo(This,wszDeviceName,pLunInfo,pbIsSupported) )
    ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,lContext,lLunCount,rgDeviceNames,rgLunInformation) )
    ( (This)->lpVtbl -> GetTargetLuns(This,lLunCount,rgDeviceNames,rgSourceLuns,rgDestinationLuns) )
    ( (This)->lpVtbl -> LocateLuns(This,lLunCount,rgSourceLuns) )
    ( (This)->lpVtbl -> OnLunEmpty(This,wszDeviceName,pInformation) )
EXTERN_C const IID IID_IVssHardwareSnapshotProviderEx;
    typedef struct IVssHardwareSnapshotProviderExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssHardwareSnapshotProviderEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssHardwareSnapshotProviderEx * This);
                           HRESULT ( STDMETHODCALLTYPE *AreLunsSupported )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                       LONG lLunCount,
                       LONG lContext,
                                        __RPC__in_ecount_full_opt(lLunCount) VSS_PWSZ *rgwszDevices,
                                     __RPC__inout_ecount_full(lLunCount) VDS_LUN_INFORMATION *pLunInformation,
                        __RPC__out BOOL *pbIsSupported);
                           HRESULT ( STDMETHODCALLTYPE *FillInLunInfo )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                       __RPC__in VSS_PWSZ wszDeviceName,
                            __RPC__inout VDS_LUN_INFORMATION *pLunInfo,
                        __RPC__out BOOL *pbIsSupported);
                           HRESULT ( STDMETHODCALLTYPE *BeginPrepareSnapshot )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                       VSS_ID SnapshotSetId,
                       VSS_ID SnapshotId,
                       LONG lContext,
                       LONG lLunCount,
                                        __RPC__in_ecount_full_opt(lLunCount) VSS_PWSZ *rgDeviceNames,
                                     __RPC__inout_ecount_full(lLunCount) VDS_LUN_INFORMATION *rgLunInformation);
                           HRESULT ( STDMETHODCALLTYPE *GetTargetLuns )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                       LONG lLunCount,
                                        __RPC__in_ecount_full_opt(lLunCount) VSS_PWSZ *rgDeviceNames,
                                        __RPC__in_ecount_full_opt(lLunCount) VDS_LUN_INFORMATION *rgSourceLuns,
                                     __RPC__inout_ecount_full(lLunCount) VDS_LUN_INFORMATION *rgDestinationLuns);
                           HRESULT ( STDMETHODCALLTYPE *LocateLuns )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                       LONG lLunCount,
                                        __RPC__in_ecount_full_opt(lLunCount) VDS_LUN_INFORMATION *rgSourceLuns);
                           HRESULT ( STDMETHODCALLTYPE *OnLunEmpty )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                               __RPC__in_opt VSS_PWSZ wszDeviceName,
                               __RPC__in_opt VDS_LUN_INFORMATION *pInformation);
                           HRESULT ( STDMETHODCALLTYPE *GetProviderCapabilities )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                        __RPC__out ULONGLONG *pllOriginalCapabilityMask);
                           HRESULT ( STDMETHODCALLTYPE *OnLunStateChange )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                                        __RPC__in_ecount_full_opt(dwCount) VDS_LUN_INFORMATION *pSnapshotLuns,
                                        __RPC__in_ecount_full_opt(dwCount) VDS_LUN_INFORMATION *pOriginalLuns,
                       DWORD dwCount,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *ResyncLuns )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                                        __RPC__in_ecount_full_opt(dwCount) VDS_LUN_INFORMATION *pSourceLuns,
                                        __RPC__in_ecount_full_opt(dwCount) VDS_LUN_INFORMATION *pTargetLuns,
                       DWORD dwCount,
                        __RPC__deref_out_opt IVssAsync **ppAsync);
                           HRESULT ( STDMETHODCALLTYPE *OnReuseLuns )(
            __RPC__in IVssHardwareSnapshotProviderEx * This,
                                        __RPC__in_ecount_full_opt(dwCount) VDS_LUN_INFORMATION *pSnapshotLuns,
                                        __RPC__in_ecount_full_opt(dwCount) VDS_LUN_INFORMATION *pOriginalLuns,
                       DWORD dwCount);
        END_INTERFACE
    } IVssHardwareSnapshotProviderExVtbl;
    interface IVssHardwareSnapshotProviderEx
    {
        CONST_VTBL struct IVssHardwareSnapshotProviderExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AreLunsSupported(This,lLunCount,lContext,rgwszDevices,pLunInformation,pbIsSupported) )
    ( (This)->lpVtbl -> FillInLunInfo(This,wszDeviceName,pLunInfo,pbIsSupported) )
    ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,lContext,lLunCount,rgDeviceNames,rgLunInformation) )
    ( (This)->lpVtbl -> GetTargetLuns(This,lLunCount,rgDeviceNames,rgSourceLuns,rgDestinationLuns) )
    ( (This)->lpVtbl -> LocateLuns(This,lLunCount,rgSourceLuns) )
    ( (This)->lpVtbl -> OnLunEmpty(This,wszDeviceName,pInformation) )
    ( (This)->lpVtbl -> GetProviderCapabilities(This,pllOriginalCapabilityMask) )
    ( (This)->lpVtbl -> OnLunStateChange(This,pSnapshotLuns,pOriginalLuns,dwCount,dwFlags) )
    ( (This)->lpVtbl -> ResyncLuns(This,pSourceLuns,pTargetLuns,dwCount,ppAsync) )
    ( (This)->lpVtbl -> OnReuseLuns(This,pSnapshotLuns,pOriginalLuns,dwCount) )
EXTERN_C const IID IID_IVssFileShareSnapshotProvider;
    typedef struct IVssFileShareSnapshotProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssFileShareSnapshotProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssFileShareSnapshotProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *SetContext )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       LONG lContext);
                           HRESULT ( STDMETHODCALLTYPE *GetSnapshotProperties )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       VSS_ID SnapshotId,
                        __RPC__out VSS_SNAPSHOT_PROP *pProp);
                           HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       VSS_ID QueriedObjectId,
                       VSS_OBJECT_TYPE eQueriedObjectType,
                       VSS_OBJECT_TYPE eReturnedObjectsType,
                        __RPC__deref_out_opt IVssEnumObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *DeleteSnapshots )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       VSS_ID SourceObjectId,
                       VSS_OBJECT_TYPE eSourceObjectType,
                       BOOL bForceDelete,
                        __RPC__out LONG *plDeletedSnapshots,
                        __RPC__out VSS_ID *pNondeletedSnapshotID);
                           HRESULT ( STDMETHODCALLTYPE *BeginPrepareSnapshot )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       VSS_ID SnapshotSetId,
                       VSS_ID SnapshotId,
                       __RPC__in VSS_PWSZ pwszSharePath,
                       LONG lNewContext,
                       VSS_ID ProviderId);
                           HRESULT ( STDMETHODCALLTYPE *IsPathSupported )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       __RPC__in VSS_PWSZ pwszSharePath,
                        __RPC__out BOOL *pbSupportedByThisProvider);
                           HRESULT ( STDMETHODCALLTYPE *IsPathSnapshotted )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       __RPC__in VSS_PWSZ pwszSharePath,
                        __RPC__out BOOL *pbSnapshotsPresent,
                        __RPC__out LONG *plSnapshotCompatibility);
                           HRESULT ( STDMETHODCALLTYPE *SetSnapshotProperty )(
            __RPC__in IVssFileShareSnapshotProvider * This,
                       VSS_ID SnapshotId,
                       VSS_SNAPSHOT_PROPERTY_ID eSnapshotPropertyId,
                       VARIANT vProperty);
        END_INTERFACE
    } IVssFileShareSnapshotProviderVtbl;
    interface IVssFileShareSnapshotProvider
    {
        CONST_VTBL struct IVssFileShareSnapshotProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContext(This,lContext) )
    ( (This)->lpVtbl -> GetSnapshotProperties(This,SnapshotId,pProp) )
    ( (This)->lpVtbl -> Query(This,QueriedObjectId,eQueriedObjectType,eReturnedObjectsType,ppEnum) )
    ( (This)->lpVtbl -> DeleteSnapshots(This,SourceObjectId,eSourceObjectType,bForceDelete,plDeletedSnapshots,pNondeletedSnapshotID) )
    ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,pwszSharePath,lNewContext,ProviderId) )
    ( (This)->lpVtbl -> IsPathSupported(This,pwszSharePath,pbSupportedByThisProvider) )
    ( (This)->lpVtbl -> IsPathSnapshotted(This,pwszSharePath,pbSnapshotsPresent,plSnapshotCompatibility) )
    ( (This)->lpVtbl -> SetSnapshotProperty(This,SnapshotId,eSnapshotPropertyId,vProperty) )
EXTERN_C const IID LIBID_VSSProvider;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vsprov_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsprov_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
