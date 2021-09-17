#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFhTarget IFhTarget;
typedef interface IFhScopeIterator IFhScopeIterator;
typedef interface IFhConfigMgr IFhConfigMgr;
typedef interface IFhReassociation IFhReassociation;
typedef class FhConfigMgr FhConfigMgr;
typedef class FhReassociation FhReassociation;
#include "ocidl.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _FH_TARGET_PROPERTY_TYPE
    {
        FH_TARGET_NAME = 0,
        FH_TARGET_URL = ( FH_TARGET_NAME + 1 ) ,
        FH_TARGET_DRIVE_TYPE = ( FH_TARGET_URL + 1 ) ,
        MAX_TARGET_PROPERTY = ( FH_TARGET_DRIVE_TYPE + 1 )
    } FH_TARGET_PROPERTY_TYPE;
typedef enum _FH_TARGET_PROPERTY_TYPE *PFH_TARGET_PROPERTY_TYPE;
typedef
enum _FH_TARGET_DRIVE_TYPES
    {
        FH_DRIVE_UNKNOWN = 0,
        FH_DRIVE_REMOVABLE = 2,
        FH_DRIVE_FIXED = 3,
        FH_DRIVE_REMOTE = 4
    } FH_TARGET_DRIVE_TYPES;
#pragma deprecated(IFhTarget)
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFhTarget;
    typedef struct IFhTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFhTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFhTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFhTarget * This);
        HRESULT ( STDMETHODCALLTYPE *GetStringProperty )(
            __RPC__in IFhTarget * This,
                       FH_TARGET_PROPERTY_TYPE PropertyType,
                        __RPC__deref_out_opt BSTR *PropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetNumericalProperty )(
            __RPC__in IFhTarget * This,
                       FH_TARGET_PROPERTY_TYPE PropertyType,
                        __RPC__out ULONGLONG *PropertyValue);
        END_INTERFACE
    } IFhTargetVtbl;
    interface IFhTarget
    {
        CONST_VTBL struct IFhTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStringProperty(This,PropertyType,PropertyValue) )
    ( (This)->lpVtbl -> GetNumericalProperty(This,PropertyType,PropertyValue) )
#pragma deprecated(IFhScopeIterator)
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IFhScopeIterator;
    typedef struct IFhScopeIteratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFhScopeIterator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFhScopeIterator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFhScopeIterator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveToNextItem )(
            __RPC__in IFhScopeIterator * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IFhScopeIterator * This,
                        __RPC__deref_out_opt BSTR *Item);
        END_INTERFACE
    } IFhScopeIteratorVtbl;
    interface IFhScopeIterator
    {
        CONST_VTBL struct IFhScopeIteratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveToNextItem(This) )
    ( (This)->lpVtbl -> GetItem(This,Item) )
typedef
enum _FH_PROTECTED_ITEM_CATEGORY
    {
        FH_FOLDER = 0,
        FH_LIBRARY = ( FH_FOLDER + 1 ) ,
        MAX_PROTECTED_ITEM_CATEGORY = ( FH_LIBRARY + 1 )
    } FH_PROTECTED_ITEM_CATEGORY;
typedef enum _FH_PROTECTED_ITEM_CATEGORY *PFH_PROTECTED_ITEM_CATEGORY;
typedef
enum _FH_LOCAL_POLICY_TYPE
    {
        FH_FREQUENCY = 0,
        FH_RETENTION_TYPE = ( FH_FREQUENCY + 1 ) ,
        FH_RETENTION_AGE = ( FH_RETENTION_TYPE + 1 ) ,
        MAX_LOCAL_POLICY = ( FH_RETENTION_AGE + 1 )
    } FH_LOCAL_POLICY_TYPE;
typedef enum _FH_LOCAL_POLICY_TYPE *PFH_LOCAL_POLICY_TYPE;
typedef
enum _FH_RETENTION_TYPES
    {
        FH_RETENTION_DISABLED = 0,
        FH_RETENTION_UNLIMITED = ( FH_RETENTION_DISABLED + 1 ) ,
        FH_RETENTION_AGE_BASED = ( FH_RETENTION_UNLIMITED + 1 ) ,
        MAX_RETENTION_TYPE = ( FH_RETENTION_AGE_BASED + 1 )
    } FH_RETENTION_TYPES;
typedef
enum _FH_BACKUP_STATUS
    {
        FH_STATUS_DISABLED = 0,
        FH_STATUS_DISABLED_BY_GP = ( FH_STATUS_DISABLED + 1 ) ,
        FH_STATUS_ENABLED = ( FH_STATUS_DISABLED_BY_GP + 1 ) ,
        FH_STATUS_REHYDRATING = ( FH_STATUS_ENABLED + 1 ) ,
        MAX_BACKUP_STATUS = ( FH_STATUS_REHYDRATING + 1 )
    } FH_BACKUP_STATUS;
typedef
enum _FH_DEVICE_VALIDATION_RESULT
    {
        FH_ACCESS_DENIED = 0,
        FH_INVALID_DRIVE_TYPE = ( FH_ACCESS_DENIED + 1 ) ,
        FH_READ_ONLY_PERMISSION = ( FH_INVALID_DRIVE_TYPE + 1 ) ,
        FH_CURRENT_DEFAULT = ( FH_READ_ONLY_PERMISSION + 1 ) ,
        FH_NAMESPACE_EXISTS = ( FH_CURRENT_DEFAULT + 1 ) ,
        FH_TARGET_PART_OF_LIBRARY = ( FH_NAMESPACE_EXISTS + 1 ) ,
        FH_VALID_TARGET = ( FH_TARGET_PART_OF_LIBRARY + 1 ) ,
        MAX_VALIDATION_RESULT = ( FH_VALID_TARGET + 1 )
    } FH_DEVICE_VALIDATION_RESULT;
typedef enum _FH_DEVICE_VALIDATION_RESULT *PFH_DEVICE_VALIDATION_RESULT;
#pragma deprecated(IFhConfigMgr)
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IFhConfigMgr;
    typedef struct IFhConfigMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFhConfigMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFhConfigMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFhConfigMgr * This);
        HRESULT ( STDMETHODCALLTYPE *LoadConfiguration )(
            __RPC__in IFhConfigMgr * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDefaultConfiguration )(
            __RPC__in IFhConfigMgr * This,
                       BOOL OverwriteIfExists);
        HRESULT ( STDMETHODCALLTYPE *SaveConfiguration )(
            __RPC__in IFhConfigMgr * This);
        HRESULT ( STDMETHODCALLTYPE *AddRemoveExcludeRule )(
            __RPC__in IFhConfigMgr * This,
                       BOOL Add,
                       FH_PROTECTED_ITEM_CATEGORY Category,
                       __RPC__in BSTR Item);
        HRESULT ( STDMETHODCALLTYPE *GetIncludeExcludeRules )(
            __RPC__in IFhConfigMgr * This,
                       BOOL Include,
                       FH_PROTECTED_ITEM_CATEGORY Category,
                        __RPC__deref_out_opt IFhScopeIterator **Iterator);
        HRESULT ( STDMETHODCALLTYPE *GetLocalPolicy )(
            __RPC__in IFhConfigMgr * This,
                       FH_LOCAL_POLICY_TYPE LocalPolicyType,
                        __RPC__out ULONGLONG *PolicyValue);
        HRESULT ( STDMETHODCALLTYPE *SetLocalPolicy )(
            __RPC__in IFhConfigMgr * This,
                       FH_LOCAL_POLICY_TYPE LocalPolicyType,
                       ULONGLONG PolicyValue);
        HRESULT ( STDMETHODCALLTYPE *GetBackupStatus )(
            __RPC__in IFhConfigMgr * This,
                        __RPC__out FH_BACKUP_STATUS *BackupStatus);
        HRESULT ( STDMETHODCALLTYPE *SetBackupStatus )(
            __RPC__in IFhConfigMgr * This,
                       FH_BACKUP_STATUS BackupStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultTarget )(
            __RPC__in IFhConfigMgr * This,
                        __RPC__deref_out_opt IFhTarget **DefaultTarget);
        HRESULT ( STDMETHODCALLTYPE *ValidateTarget )(
            __RPC__in IFhConfigMgr * This,
                       __RPC__in BSTR TargetUrl,
                        __RPC__out PFH_DEVICE_VALIDATION_RESULT ValidationResult);
        HRESULT ( STDMETHODCALLTYPE *ProvisionAndSetNewTarget )(
            __RPC__in IFhConfigMgr * This,
                       __RPC__in BSTR TargetUrl,
                       __RPC__in BSTR TargetName);
        HRESULT ( STDMETHODCALLTYPE *ChangeDefaultTargetRecommendation )(
            __RPC__in IFhConfigMgr * This,
                       BOOL Recommend);
        HRESULT ( STDMETHODCALLTYPE *QueryProtectionStatus )(
            __RPC__in IFhConfigMgr * This,
                        __RPC__out DWORD *ProtectionState,
                        __RPC__deref_out_opt BSTR *ProtectedUntilTime);
        END_INTERFACE
    } IFhConfigMgrVtbl;
    interface IFhConfigMgr
    {
        CONST_VTBL struct IFhConfigMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadConfiguration(This) )
    ( (This)->lpVtbl -> CreateDefaultConfiguration(This,OverwriteIfExists) )
    ( (This)->lpVtbl -> SaveConfiguration(This) )
    ( (This)->lpVtbl -> AddRemoveExcludeRule(This,Add,Category,Item) )
    ( (This)->lpVtbl -> GetIncludeExcludeRules(This,Include,Category,Iterator) )
    ( (This)->lpVtbl -> GetLocalPolicy(This,LocalPolicyType,PolicyValue) )
    ( (This)->lpVtbl -> SetLocalPolicy(This,LocalPolicyType,PolicyValue) )
    ( (This)->lpVtbl -> GetBackupStatus(This,BackupStatus) )
    ( (This)->lpVtbl -> SetBackupStatus(This,BackupStatus) )
    ( (This)->lpVtbl -> GetDefaultTarget(This,DefaultTarget) )
    ( (This)->lpVtbl -> ValidateTarget(This,TargetUrl,ValidationResult) )
    ( (This)->lpVtbl -> ProvisionAndSetNewTarget(This,TargetUrl,TargetName) )
    ( (This)->lpVtbl -> ChangeDefaultTargetRecommendation(This,Recommend) )
    ( (This)->lpVtbl -> QueryProtectionStatus(This,ProtectionState,ProtectedUntilTime) )
#pragma deprecated(IFhReassociation)
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IFhReassociation;
    typedef struct IFhReassociationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFhReassociation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFhReassociation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFhReassociation * This);
        HRESULT ( STDMETHODCALLTYPE *ValidateTarget )(
            __RPC__in IFhReassociation * This,
                       __RPC__in BSTR TargetUrl,
                        __RPC__out PFH_DEVICE_VALIDATION_RESULT ValidationResult);
        HRESULT ( STDMETHODCALLTYPE *ScanTargetForConfigurations )(
            __RPC__in IFhReassociation * This,
                       __RPC__in BSTR TargetUrl);
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationDetails )(
            __RPC__in IFhReassociation * This,
                       DWORD Index,
                        __RPC__deref_out_opt BSTR *UserName,
                        __RPC__deref_out_opt BSTR *PcName,
                        __RPC__out FILETIME *BackupTime);
        HRESULT ( STDMETHODCALLTYPE *SelectConfiguration )(
            __RPC__in IFhReassociation * This,
                       DWORD Index);
        HRESULT ( STDMETHODCALLTYPE *PerformReassociation )(
            __RPC__in IFhReassociation * This,
                       BOOL OverwriteIfExists);
        END_INTERFACE
    } IFhReassociationVtbl;
    interface IFhReassociation
    {
        CONST_VTBL struct IFhReassociationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ValidateTarget(This,TargetUrl,ValidationResult) )
    ( (This)->lpVtbl -> ScanTargetForConfigurations(This,TargetUrl) )
    ( (This)->lpVtbl -> GetConfigurationDetails(This,Index,UserName,PcName,BackupTime) )
    ( (This)->lpVtbl -> SelectConfiguration(This,Index) )
    ( (This)->lpVtbl -> PerformReassociation(This,OverwriteIfExists) )
EXTERN_C const IID LIBID_FhConfigMgrLib;
EXTERN_C const CLSID CLSID_FhConfigMgr;
class DECLSPEC_UUID("ED43BB3C-09E9-498a-9DF6-2177244C6DB4")
FhConfigMgr;
EXTERN_C const CLSID CLSID_FhReassociation;
class DECLSPEC_UUID("4D728E35-16FA-4320-9E8B-BFD7100A8846")
FhReassociation;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpcfg_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
