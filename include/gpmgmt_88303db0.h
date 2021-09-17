#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IGPM IGPM;
typedef interface IGPMDomain IGPMDomain;
typedef interface IGPMBackupDir IGPMBackupDir;
typedef interface IGPMSitesContainer IGPMSitesContainer;
typedef interface IGPMSearchCriteria IGPMSearchCriteria;
typedef interface IGPMTrustee IGPMTrustee;
typedef interface IGPMPermission IGPMPermission;
typedef interface IGPMSecurityInfo IGPMSecurityInfo;
typedef interface IGPMBackup IGPMBackup;
typedef interface IGPMBackupCollection IGPMBackupCollection;
typedef interface IGPMSOM IGPMSOM;
typedef interface IGPMSOMCollection IGPMSOMCollection;
typedef interface IGPMWMIFilter IGPMWMIFilter;
typedef interface IGPMWMIFilterCollection IGPMWMIFilterCollection;
typedef interface IGPMRSOP IGPMRSOP;
typedef interface IGPMGPO IGPMGPO;
typedef interface IGPMGPOCollection IGPMGPOCollection;
typedef interface IGPMGPOLink IGPMGPOLink;
typedef interface IGPMGPOLinksCollection IGPMGPOLinksCollection;
typedef interface IGPMCSECollection IGPMCSECollection;
typedef interface IGPMClientSideExtension IGPMClientSideExtension;
typedef interface IGPMAsyncCancel IGPMAsyncCancel;
typedef interface IGPMAsyncProgress IGPMAsyncProgress;
typedef interface IGPMStatusMsgCollection IGPMStatusMsgCollection;
typedef interface IGPMStatusMessage IGPMStatusMessage;
typedef interface IGPMConstants IGPMConstants;
typedef interface IGPMResult IGPMResult;
typedef interface IGPMMapEntryCollection IGPMMapEntryCollection;
typedef interface IGPMMapEntry IGPMMapEntry;
typedef interface IGPMMigrationTable IGPMMigrationTable;
typedef interface IGPMBackupDirEx IGPMBackupDirEx;
typedef interface IGPMStarterGPOBackupCollection IGPMStarterGPOBackupCollection;
typedef interface IGPMStarterGPOBackup IGPMStarterGPOBackup;
typedef interface IGPM2 IGPM2;
typedef interface IGPMStarterGPO IGPMStarterGPO;
typedef interface IGPMStarterGPOCollection IGPMStarterGPOCollection;
typedef interface IGPMDomain2 IGPMDomain2;
typedef interface IGPMConstants2 IGPMConstants2;
typedef interface IGPMGPO2 IGPMGPO2;
typedef interface IGPMDomain3 IGPMDomain3;
typedef interface IGPMGPO3 IGPMGPO3;
typedef class GPM GPM;
typedef class GPMDomain GPMDomain;
typedef class GPMSitesContainer GPMSitesContainer;
typedef class GPMBackupDir GPMBackupDir;
typedef class GPMSOM GPMSOM;
typedef class GPMSearchCriteria GPMSearchCriteria;
typedef class GPMPermission GPMPermission;
typedef class GPMSecurityInfo GPMSecurityInfo;
typedef class GPMBackup GPMBackup;
typedef class GPMBackupCollection GPMBackupCollection;
typedef class GPMSOMCollection GPMSOMCollection;
typedef class GPMWMIFilter GPMWMIFilter;
typedef class GPMWMIFilterCollection GPMWMIFilterCollection;
typedef class GPMRSOP GPMRSOP;
typedef class GPMGPO GPMGPO;
typedef class GPMGPOCollection GPMGPOCollection;
typedef class GPMGPOLink GPMGPOLink;
typedef class GPMGPOLinksCollection GPMGPOLinksCollection;
typedef class GPMAsyncCancel GPMAsyncCancel;
typedef class GPMStatusMsgCollection GPMStatusMsgCollection;
typedef class GPMStatusMessage GPMStatusMessage;
typedef class GPMTrustee GPMTrustee;
typedef class GPMClientSideExtension GPMClientSideExtension;
typedef class GPMCSECollection GPMCSECollection;
typedef class GPMConstants GPMConstants;
typedef class GPMResult GPMResult;
typedef class GPMMapEntryCollection GPMMapEntryCollection;
typedef class GPMMapEntry GPMMapEntry;
typedef class GPMMigrationTable GPMMigrationTable;
typedef class GPMBackupDirEx GPMBackupDirEx;
typedef class GPMStarterGPOBackupCollection GPMStarterGPOBackupCollection;
typedef class GPMStarterGPOBackup GPMStarterGPOBackup;
typedef class GPMTemplate GPMTemplate;
typedef class GPMStarterGPOCollection GPMStarterGPOCollection;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0001
    {
        rsopUnknown = 0,
        rsopPlanning = ( rsopUnknown + 1 ) ,
        rsopLogging = ( rsopPlanning + 1 )
    } GPMRSOPMode;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0002
    {
        permGPOApply = 0x10000,
        permGPORead = 0x10100,
        permGPOEdit = 0x10101,
        permGPOEditSecurityAndDelete = 0x10102,
        permGPOCustom = 0x10103,
        permWMIFilterEdit = 0x20000,
        permWMIFilterFullControl = 0x20001,
        permWMIFilterCustom = 0x20002,
        permSOMLink = 0x1c0000,
        permSOMLogging = 0x180100,
        permSOMPlanning = 0x180200,
        permSOMWMICreate = 0x100300,
        permSOMWMIFullControl = 0x100301,
        permSOMGPOCreate = 0x100400,
        permStarterGPORead = 0x30500,
        permStarterGPOEdit = 0x30501,
        permStarterGPOFullControl = 0x30502,
        permStarterGPOCustom = 0x30503,
        permSOMStarterGPOCreate = 0x100500
    } GPMPermissionType;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0003
    {
        gpoPermissions = 0,
        gpoEffectivePermissions = ( gpoPermissions + 1 ) ,
        gpoDisplayName = ( gpoEffectivePermissions + 1 ) ,
        gpoWMIFilter = ( gpoDisplayName + 1 ) ,
        gpoID = ( gpoWMIFilter + 1 ) ,
        gpoComputerExtensions = ( gpoID + 1 ) ,
        gpoUserExtensions = ( gpoComputerExtensions + 1 ) ,
        somLinks = ( gpoUserExtensions + 1 ) ,
        gpoDomain = ( somLinks + 1 ) ,
        backupMostRecent = ( gpoDomain + 1 ) ,
        starterGPOPermissions = ( backupMostRecent + 1 ) ,
        starterGPOEffectivePermissions = ( starterGPOPermissions + 1 ) ,
        starterGPODisplayName = ( starterGPOEffectivePermissions + 1 ) ,
        starterGPOID = ( starterGPODisplayName + 1 ) ,
        starterGPODomain = ( starterGPOID + 1 )
    } GPMSearchProperty;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0004
    {
        opEquals = 0,
        opContains = ( opEquals + 1 ) ,
        opNotContains = ( opContains + 1 ) ,
        opNotEquals = ( opNotContains + 1 )
    } GPMSearchOperation;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0005
    {
        repXML = 0,
        repHTML = ( repXML + 1 ) ,
        repInfraXML = ( repHTML + 1 ) ,
        repInfraRefreshXML = ( repInfraXML + 1 ) ,
        repClientHealthXML = ( repInfraRefreshXML + 1 ) ,
        repClientHealthRefreshXML = ( repClientHealthXML + 1 )
    } GPMReportType;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0006
    {
        typeUser = 0,
        typeComputer = ( typeUser + 1 ) ,
        typeLocalGroup = ( typeComputer + 1 ) ,
        typeGlobalGroup = ( typeLocalGroup + 1 ) ,
        typeUniversalGroup = ( typeGlobalGroup + 1 ) ,
        typeUNCPath = ( typeUniversalGroup + 1 ) ,
        typeUnknown = ( typeUNCPath + 1 )
    } GPMEntryType;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0007
    {
        opDestinationSameAsSource = 0,
        opDestinationNone = ( opDestinationSameAsSource + 1 ) ,
        opDestinationByRelativeName = ( opDestinationNone + 1 ) ,
        opDestinationSet = ( opDestinationByRelativeName + 1 )
    } GPMDestinationOption;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0008
    {
        opReportLegacy = 0,
        opReportComments = 1
    } GPMReportingOptions;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IGPM;
    typedef struct IGPMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPM * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPM * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPM * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPM * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPM * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPM * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetDomain )(
            __RPC__in IGPM * This,
                       __RPC__in BSTR bstrDomain,
                               __RPC__in_opt BSTR bstrDomainController,
                       long lDCFlags,
                                __RPC__deref_out_opt IGPMDomain **pIGPMDomain);
                               HRESULT ( STDMETHODCALLTYPE *GetBackupDir )(
            __RPC__in IGPM * This,
                       __RPC__in BSTR bstrBackupDir,
                                __RPC__deref_out_opt IGPMBackupDir **pIGPMBackupDir);
                               HRESULT ( STDMETHODCALLTYPE *GetSitesContainer )(
            __RPC__in IGPM * This,
                       __RPC__in BSTR bstrForest,
                               __RPC__in_opt BSTR bstrDomain,
                               __RPC__in_opt BSTR bstrDomainController,
                       long lDCFlags,
                                __RPC__deref_out_opt IGPMSitesContainer **ppIGPMSitesContainer);
                               HRESULT ( STDMETHODCALLTYPE *GetRSOP )(
            __RPC__in IGPM * This,
                       GPMRSOPMode gpmRSoPMode,
                       __RPC__in BSTR bstrNamespace,
                       long lFlags,
                                __RPC__deref_out_opt IGPMRSOP **ppIGPMRSOP);
                               HRESULT ( STDMETHODCALLTYPE *CreatePermission )(
            __RPC__in IGPM * This,
                       __RPC__in BSTR bstrTrustee,
                       GPMPermissionType perm,
                       VARIANT_BOOL bInheritable,
                                __RPC__deref_out_opt IGPMPermission **ppPerm);
                               HRESULT ( STDMETHODCALLTYPE *CreateSearchCriteria )(
            __RPC__in IGPM * This,
                                __RPC__deref_out_opt IGPMSearchCriteria **ppIGPMSearchCriteria);
                               HRESULT ( STDMETHODCALLTYPE *CreateTrustee )(
            __RPC__in IGPM * This,
                       __RPC__in BSTR bstrTrustee,
                                __RPC__deref_out_opt IGPMTrustee **ppIGPMTrustee);
                               HRESULT ( STDMETHODCALLTYPE *GetClientSideExtensions )(
            __RPC__in IGPM * This,
                                __RPC__deref_out_opt IGPMCSECollection **ppIGPMCSECollection);
                               HRESULT ( STDMETHODCALLTYPE *GetConstants )(
            __RPC__in IGPM * This,
                                __RPC__deref_out_opt IGPMConstants **ppIGPMConstants);
                               HRESULT ( STDMETHODCALLTYPE *GetMigrationTable )(
            __RPC__in IGPM * This,
                       __RPC__in BSTR bstrMigrationTablePath,
                                __RPC__deref_out_opt IGPMMigrationTable **ppMigrationTable);
                               HRESULT ( STDMETHODCALLTYPE *CreateMigrationTable )(
            __RPC__in IGPM * This,
                                __RPC__deref_out_opt IGPMMigrationTable **ppMigrationTable);
                               HRESULT ( STDMETHODCALLTYPE *InitializeReporting )(
            __RPC__in IGPM * This,
                               __RPC__in_opt BSTR bstrAdmPath);
        END_INTERFACE
    } IGPMVtbl;
    interface IGPM
    {
        CONST_VTBL struct IGPMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDomain(This,bstrDomain,bstrDomainController,lDCFlags,pIGPMDomain) )
    ( (This)->lpVtbl -> GetBackupDir(This,bstrBackupDir,pIGPMBackupDir) )
    ( (This)->lpVtbl -> GetSitesContainer(This,bstrForest,bstrDomain,bstrDomainController,lDCFlags,ppIGPMSitesContainer) )
    ( (This)->lpVtbl -> GetRSOP(This,gpmRSoPMode,bstrNamespace,lFlags,ppIGPMRSOP) )
    ( (This)->lpVtbl -> CreatePermission(This,bstrTrustee,perm,bInheritable,ppPerm) )
    ( (This)->lpVtbl -> CreateSearchCriteria(This,ppIGPMSearchCriteria) )
    ( (This)->lpVtbl -> CreateTrustee(This,bstrTrustee,ppIGPMTrustee) )
    ( (This)->lpVtbl -> GetClientSideExtensions(This,ppIGPMCSECollection) )
    ( (This)->lpVtbl -> GetConstants(This,ppIGPMConstants) )
    ( (This)->lpVtbl -> GetMigrationTable(This,bstrMigrationTablePath,ppMigrationTable) )
    ( (This)->lpVtbl -> CreateMigrationTable(This,ppMigrationTable) )
    ( (This)->lpVtbl -> InitializeReporting(This,bstrAdmPath) )
EXTERN_C const IID IID_IGPMDomain;
    typedef struct IGPMDomainVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMDomain * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMDomain * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMDomain * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMDomain * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMDomain * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMDomain * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMDomain * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainController )(
            __RPC__in IGPMDomain * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in IGPMDomain * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateGPO )(
            __RPC__in IGPMDomain * This,
                                __RPC__deref_out_opt IGPMGPO **ppNewGPO);
                               HRESULT ( STDMETHODCALLTYPE *GetGPO )(
            __RPC__in IGPMDomain * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt IGPMGPO **ppGPO);
                               HRESULT ( STDMETHODCALLTYPE *SearchGPOs )(
            __RPC__in IGPMDomain * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMGPOCollection **ppIGPMGPOCollection);
                               HRESULT ( STDMETHODCALLTYPE *RestoreGPO )(
            __RPC__in IGPMDomain * This,
                       __RPC__in_opt IGPMBackup *pIGPMBackup,
                       long lDCFlags,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GetSOM )(
            __RPC__in IGPMDomain * This,
                               __RPC__in_opt BSTR bstrPath,
                                __RPC__deref_out_opt IGPMSOM **ppSOM);
                               HRESULT ( STDMETHODCALLTYPE *SearchSOMs )(
            __RPC__in IGPMDomain * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMSOMCollection **ppIGPMSOMCollection);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIFilter )(
            __RPC__in IGPMDomain * This,
                       __RPC__in BSTR bstrPath,
                                __RPC__deref_out_opt IGPMWMIFilter **ppWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SearchWMIFilters )(
            __RPC__in IGPMDomain * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMWMIFilterCollection **ppIGPMWMIFilterCollection);
        END_INTERFACE
    } IGPMDomainVtbl;
    interface IGPMDomain
    {
        CONST_VTBL struct IGPMDomainVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DomainController(This,pVal) )
    ( (This)->lpVtbl -> get_Domain(This,pVal) )
    ( (This)->lpVtbl -> CreateGPO(This,ppNewGPO) )
    ( (This)->lpVtbl -> GetGPO(This,bstrGuid,ppGPO) )
    ( (This)->lpVtbl -> SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection) )
    ( (This)->lpVtbl -> RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GetSOM(This,bstrPath,ppSOM) )
    ( (This)->lpVtbl -> SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
    ( (This)->lpVtbl -> GetWMIFilter(This,bstrPath,ppWMIFilter) )
    ( (This)->lpVtbl -> SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection) )
EXTERN_C const IID IID_IGPMBackupDir;
    typedef struct IGPMBackupDirVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMBackupDir * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMBackupDir * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMBackupDir * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMBackupDir * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMBackupDir * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMBackupDir * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMBackupDir * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupDirectory )(
            __RPC__in IGPMBackupDir * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetBackup )(
            __RPC__in IGPMBackupDir * This,
                       __RPC__in BSTR bstrID,
                                __RPC__deref_out_opt IGPMBackup **ppBackup);
                               HRESULT ( STDMETHODCALLTYPE *SearchBackups )(
            __RPC__in IGPMBackupDir * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMBackupCollection **ppIGPMBackupCollection);
        END_INTERFACE
    } IGPMBackupDirVtbl;
    interface IGPMBackupDir
    {
        CONST_VTBL struct IGPMBackupDirVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BackupDirectory(This,pVal) )
    ( (This)->lpVtbl -> GetBackup(This,bstrID,ppBackup) )
    ( (This)->lpVtbl -> SearchBackups(This,pIGPMSearchCriteria,ppIGPMBackupCollection) )
EXTERN_C const IID IID_IGPMSitesContainer;
    typedef struct IGPMSitesContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMSitesContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMSitesContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMSitesContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMSitesContainer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMSitesContainer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMSitesContainer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMSitesContainer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainController )(
            __RPC__in IGPMSitesContainer * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in IGPMSitesContainer * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Forest )(
            __RPC__in IGPMSitesContainer * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetSite )(
            __RPC__in IGPMSitesContainer * This,
                       __RPC__in BSTR bstrSiteName,
                                __RPC__deref_out_opt IGPMSOM **ppSOM);
                               HRESULT ( STDMETHODCALLTYPE *SearchSites )(
            __RPC__in IGPMSitesContainer * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMSOMCollection **ppIGPMSOMCollection);
        END_INTERFACE
    } IGPMSitesContainerVtbl;
    interface IGPMSitesContainer
    {
        CONST_VTBL struct IGPMSitesContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DomainController(This,pVal) )
    ( (This)->lpVtbl -> get_Domain(This,pVal) )
    ( (This)->lpVtbl -> get_Forest(This,pVal) )
    ( (This)->lpVtbl -> GetSite(This,bstrSiteName,ppSOM) )
    ( (This)->lpVtbl -> SearchSites(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
EXTERN_C const IID IID_IGPMSearchCriteria;
    typedef struct IGPMSearchCriteriaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMSearchCriteria * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMSearchCriteria * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMSearchCriteria * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMSearchCriteria * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMSearchCriteria * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMSearchCriteria * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMSearchCriteria * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IGPMSearchCriteria * This,
                       GPMSearchProperty searchProperty,
                       GPMSearchOperation searchOperation,
                       VARIANT varValue);
        END_INTERFACE
    } IGPMSearchCriteriaVtbl;
    interface IGPMSearchCriteria
    {
        CONST_VTBL struct IGPMSearchCriteriaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Add(This,searchProperty,searchOperation,varValue) )
EXTERN_C const IID IID_IGPMTrustee;
    typedef struct IGPMTrusteeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMTrustee * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMTrustee * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMTrustee * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMTrustee * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMTrustee * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMTrustee * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMTrustee * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrusteeSid )(
            __RPC__in IGPMTrustee * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrusteeName )(
            __RPC__in IGPMTrustee * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrusteeDomain )(
            __RPC__in IGPMTrustee * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrusteeDSPath )(
            __RPC__in IGPMTrustee * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrusteeType )(
            __RPC__in IGPMTrustee * This,
                                __RPC__out long *lVal);
        END_INTERFACE
    } IGPMTrusteeVtbl;
    interface IGPMTrustee
    {
        CONST_VTBL struct IGPMTrusteeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TrusteeSid(This,bstrVal) )
    ( (This)->lpVtbl -> get_TrusteeName(This,bstrVal) )
    ( (This)->lpVtbl -> get_TrusteeDomain(This,bstrVal) )
    ( (This)->lpVtbl -> get_TrusteeDSPath(This,pVal) )
    ( (This)->lpVtbl -> get_TrusteeType(This,lVal) )
EXTERN_C const IID IID_IGPMPermission;
    typedef struct IGPMPermissionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMPermission * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMPermission * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMPermission * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMPermission * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMPermission * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMPermission * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMPermission * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Inherited )(
            __RPC__in IGPMPermission * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Inheritable )(
            __RPC__in IGPMPermission * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Denied )(
            __RPC__in IGPMPermission * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Permission )(
            __RPC__in IGPMPermission * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Trustee )(
            __RPC__in IGPMPermission * This,
                                __RPC__deref_out_opt IGPMTrustee **ppIGPMTrustee);
        END_INTERFACE
    } IGPMPermissionVtbl;
    interface IGPMPermission
    {
        CONST_VTBL struct IGPMPermissionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Inherited(This,pVal) )
    ( (This)->lpVtbl -> get_Inheritable(This,pVal) )
    ( (This)->lpVtbl -> get_Denied(This,pVal) )
    ( (This)->lpVtbl -> get_Permission(This,pVal) )
    ( (This)->lpVtbl -> get_Trustee(This,ppIGPMTrustee) )
EXTERN_C const IID IID_IGPMSecurityInfo;
    typedef struct IGPMSecurityInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMSecurityInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMSecurityInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMSecurityInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMSecurityInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMSecurityInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMSecurityInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMSecurityInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMSecurityInfo * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMSecurityInfo * This,
            long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMSecurityInfo * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppEnum);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IGPMSecurityInfo * This,
                       __RPC__in_opt IGPMPermission *pPerm);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IGPMSecurityInfo * This,
                       __RPC__in_opt IGPMPermission *pPerm);
                               HRESULT ( STDMETHODCALLTYPE *RemoveTrustee )(
            __RPC__in IGPMSecurityInfo * This,
                       __RPC__in BSTR bstrTrustee);
        END_INTERFACE
    } IGPMSecurityInfoVtbl;
    interface IGPMSecurityInfo
    {
        CONST_VTBL struct IGPMSecurityInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> Add(This,pPerm) )
    ( (This)->lpVtbl -> Remove(This,pPerm) )
    ( (This)->lpVtbl -> RemoveTrustee(This,bstrTrustee) )
EXTERN_C const IID IID_IGPMBackup;
    typedef struct IGPMBackupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMBackup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMBackup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMBackup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMBackup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMBackup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMBackup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMBackup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMBackup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPOID )(
            __RPC__in IGPMBackup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPODomain )(
            __RPC__in IGPMBackup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPODisplayName )(
            __RPC__in IGPMBackup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
            __RPC__in IGPMBackup * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Comment )(
            __RPC__in IGPMBackup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupDir )(
            __RPC__in IGPMBackup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMBackup * This);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMBackup * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMBackup * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
        END_INTERFACE
    } IGPMBackupVtbl;
    interface IGPMBackup
    {
        CONST_VTBL struct IGPMBackupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ID(This,pVal) )
    ( (This)->lpVtbl -> get_GPOID(This,pVal) )
    ( (This)->lpVtbl -> get_GPODomain(This,pVal) )
    ( (This)->lpVtbl -> get_GPODisplayName(This,pVal) )
    ( (This)->lpVtbl -> get_Timestamp(This,pVal) )
    ( (This)->lpVtbl -> get_Comment(This,pVal) )
    ( (This)->lpVtbl -> get_BackupDir(This,pVal) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
EXTERN_C const IID IID_IGPMBackupCollection;
    typedef struct IGPMBackupCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMBackupCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMBackupCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMBackupCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMBackupCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMBackupCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMBackupCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMBackupCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMBackupCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMBackupCollection * This,
            long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMBackupCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMBackup);
        END_INTERFACE
    } IGPMBackupCollectionVtbl;
    interface IGPMBackupCollection
    {
        CONST_VTBL struct IGPMBackupCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMBackup) )
typedef
enum __MIDL_IGPMSOM_0001
    {
        somSite = 0,
        somDomain = ( somSite + 1 ) ,
        somOU = ( somDomain + 1 )
    } GPMSOMType;
EXTERN_C const IID IID_IGPMSOM;
    typedef struct IGPMSOMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMSOM * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMSOM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMSOM * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMSOM * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMSOM * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMSOM * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMSOM * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPOInheritanceBlocked )(
            __RPC__in IGPMSOM * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_GPOInheritanceBlocked )(
            __RPC__in IGPMSOM * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IGPMSOM * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IGPMSOM * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateGPOLink )(
            __RPC__in IGPMSOM * This,
                       long lLinkPos,
                       __RPC__in_opt IGPMGPO *pGPO,
                                __RPC__deref_out_opt IGPMGPOLink **ppNewGPOLink);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IGPMSOM * This,
                                __RPC__out GPMSOMType *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetGPOLinks )(
            __RPC__in IGPMSOM * This,
                                __RPC__deref_out_opt IGPMGPOLinksCollection **ppGPOLinks);
                               HRESULT ( STDMETHODCALLTYPE *GetInheritedGPOLinks )(
            __RPC__in IGPMSOM * This,
                                __RPC__deref_out_opt IGPMGPOLinksCollection **ppGPOLinks);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityInfo )(
            __RPC__in IGPMSOM * This,
                                __RPC__deref_out_opt IGPMSecurityInfo **ppSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityInfo )(
            __RPC__in IGPMSOM * This,
                       __RPC__in_opt IGPMSecurityInfo *pSecurityInfo);
        END_INTERFACE
    } IGPMSOMVtbl;
    interface IGPMSOM
    {
        CONST_VTBL struct IGPMSOMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_GPOInheritanceBlocked(This,pVal) )
    ( (This)->lpVtbl -> put_GPOInheritanceBlocked(This,newVal) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_Path(This,pVal) )
    ( (This)->lpVtbl -> CreateGPOLink(This,lLinkPos,pGPO,ppNewGPOLink) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> GetGPOLinks(This,ppGPOLinks) )
    ( (This)->lpVtbl -> GetInheritedGPOLinks(This,ppGPOLinks) )
    ( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
    ( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
EXTERN_C const IID IID_IGPMSOMCollection;
    typedef struct IGPMSOMCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMSOMCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMSOMCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMSOMCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMSOMCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMSOMCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMSOMCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMSOMCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMSOMCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMSOMCollection * This,
            long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMSOMCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMSOM);
        END_INTERFACE
    } IGPMSOMCollectionVtbl;
    interface IGPMSOMCollection
    {
        CONST_VTBL struct IGPMSOMCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMSOM) )
EXTERN_C const IID IID_IGPMWMIFilter;
    typedef struct IGPMWMIFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMWMIFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMWMIFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMWMIFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMWMIFilter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMWMIFilter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMWMIFilter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMWMIFilter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IGPMWMIFilter * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IGPMWMIFilter * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IGPMWMIFilter * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IGPMWMIFilter * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IGPMWMIFilter * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetQueryList )(
            __RPC__in IGPMWMIFilter * This,
                                __RPC__out VARIANT *pQryList);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityInfo )(
            __RPC__in IGPMWMIFilter * This,
                                __RPC__deref_out_opt IGPMSecurityInfo **ppSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityInfo )(
            __RPC__in IGPMWMIFilter * This,
                       __RPC__in_opt IGPMSecurityInfo *pSecurityInfo);
        END_INTERFACE
    } IGPMWMIFilterVtbl;
    interface IGPMWMIFilter
    {
        CONST_VTBL struct IGPMWMIFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Path(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Description(This,newVal) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> GetQueryList(This,pQryList) )
    ( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
    ( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
EXTERN_C const IID IID_IGPMWMIFilterCollection;
    typedef struct IGPMWMIFilterCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMWMIFilterCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMWMIFilterCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMWMIFilterCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMWMIFilterCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMWMIFilterCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMWMIFilterCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMWMIFilterCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMWMIFilterCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMWMIFilterCollection * This,
            long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMWMIFilterCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **pVal);
        END_INTERFACE
    } IGPMWMIFilterCollectionVtbl;
    interface IGPMWMIFilterCollection
    {
        CONST_VTBL struct IGPMWMIFilterCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
EXTERN_C const IID IID_IGPMRSOP;
    typedef struct IGPMRSOPVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMRSOP * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMRSOP * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMRSOP * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMRSOP * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMRSOP * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LoggingComputer )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoggingComputer )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LoggingUser )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoggingUser )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LoggingFlags )(
            __RPC__in IGPMRSOP * This,
                       long lVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoggingFlags )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out long *lVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningFlags )(
            __RPC__in IGPMRSOP * This,
                       long lVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningFlags )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out long *lVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningDomainController )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningDomainController )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningSiteName )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningSiteName )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningUser )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningUser )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningUserSOM )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningUserSOM )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningUserWMIFilters )(
            __RPC__in IGPMRSOP * This,
                       VARIANT varVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningUserWMIFilters )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out VARIANT *varVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningUserSecurityGroups )(
            __RPC__in IGPMRSOP * This,
                       VARIANT varVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningUserSecurityGroups )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out VARIANT *varVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningComputer )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningComputer )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningComputerSOM )(
            __RPC__in IGPMRSOP * This,
                       __RPC__in BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningComputerSOM )(
            __RPC__in IGPMRSOP * This,
                                __RPC__deref_out_opt BSTR *bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningComputerWMIFilters )(
            __RPC__in IGPMRSOP * This,
                       VARIANT varVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningComputerWMIFilters )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out VARIANT *varVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlanningComputerSecurityGroups )(
            __RPC__in IGPMRSOP * This,
                       VARIANT varVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlanningComputerSecurityGroups )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out VARIANT *varVal);
                               HRESULT ( STDMETHODCALLTYPE *LoggingEnumerateUsers )(
            __RPC__in IGPMRSOP * This,
                                __RPC__out VARIANT *varVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateQueryResults )(
            __RPC__in IGPMRSOP * This);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseQueryResults )(
            __RPC__in IGPMRSOP * This);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMRSOP * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMRSOP * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
        END_INTERFACE
    } IGPMRSOPVtbl;
    interface IGPMRSOP
    {
        CONST_VTBL struct IGPMRSOPVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Mode(This,pVal) )
    ( (This)->lpVtbl -> get_Namespace(This,bstrVal) )
    ( (This)->lpVtbl -> put_LoggingComputer(This,bstrVal) )
    ( (This)->lpVtbl -> get_LoggingComputer(This,bstrVal) )
    ( (This)->lpVtbl -> put_LoggingUser(This,bstrVal) )
    ( (This)->lpVtbl -> get_LoggingUser(This,bstrVal) )
    ( (This)->lpVtbl -> put_LoggingFlags(This,lVal) )
    ( (This)->lpVtbl -> get_LoggingFlags(This,lVal) )
    ( (This)->lpVtbl -> put_PlanningFlags(This,lVal) )
    ( (This)->lpVtbl -> get_PlanningFlags(This,lVal) )
    ( (This)->lpVtbl -> put_PlanningDomainController(This,bstrVal) )
    ( (This)->lpVtbl -> get_PlanningDomainController(This,bstrVal) )
    ( (This)->lpVtbl -> put_PlanningSiteName(This,bstrVal) )
    ( (This)->lpVtbl -> get_PlanningSiteName(This,bstrVal) )
    ( (This)->lpVtbl -> put_PlanningUser(This,bstrVal) )
    ( (This)->lpVtbl -> get_PlanningUser(This,bstrVal) )
    ( (This)->lpVtbl -> put_PlanningUserSOM(This,bstrVal) )
    ( (This)->lpVtbl -> get_PlanningUserSOM(This,bstrVal) )
    ( (This)->lpVtbl -> put_PlanningUserWMIFilters(This,varVal) )
    ( (This)->lpVtbl -> get_PlanningUserWMIFilters(This,varVal) )
    ( (This)->lpVtbl -> put_PlanningUserSecurityGroups(This,varVal) )
    ( (This)->lpVtbl -> get_PlanningUserSecurityGroups(This,varVal) )
    ( (This)->lpVtbl -> put_PlanningComputer(This,bstrVal) )
    ( (This)->lpVtbl -> get_PlanningComputer(This,bstrVal) )
    ( (This)->lpVtbl -> put_PlanningComputerSOM(This,bstrVal) )
    ( (This)->lpVtbl -> get_PlanningComputerSOM(This,bstrVal) )
    ( (This)->lpVtbl -> put_PlanningComputerWMIFilters(This,varVal) )
    ( (This)->lpVtbl -> get_PlanningComputerWMIFilters(This,varVal) )
    ( (This)->lpVtbl -> put_PlanningComputerSecurityGroups(This,varVal) )
    ( (This)->lpVtbl -> get_PlanningComputerSecurityGroups(This,varVal) )
    ( (This)->lpVtbl -> LoggingEnumerateUsers(This,varVal) )
    ( (This)->lpVtbl -> CreateQueryResults(This) )
    ( (This)->lpVtbl -> ReleaseQueryResults(This) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
EXTERN_C const IID IID_IGPMGPO;
    typedef struct IGPMGPOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMGPO * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMGPO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMGPO * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMGPO * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMGPO * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMGPO * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMGPO * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IGPMGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IGPMGPO * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IGPMGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
            __RPC__in IGPMGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IGPMGPO * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModificationTime )(
            __RPC__in IGPMGPO * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserDSVersionNumber )(
            __RPC__in IGPMGPO * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerDSVersionNumber )(
            __RPC__in IGPMGPO * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSysvolVersionNumber )(
            __RPC__in IGPMGPO * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerSysvolVersionNumber )(
            __RPC__in IGPMGPO * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIFilter )(
            __RPC__in IGPMGPO * This,
                                __RPC__deref_out_opt IGPMWMIFilter **ppIGPMWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetWMIFilter )(
            __RPC__in IGPMGPO * This,
                       __RPC__in_opt IGPMWMIFilter *pIGPMWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetUserEnabled )(
            __RPC__in IGPMGPO * This,
                       VARIANT_BOOL vbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *SetComputerEnabled )(
            __RPC__in IGPMGPO * This,
                       VARIANT_BOOL vbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsUserEnabled )(
            __RPC__in IGPMGPO * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsComputerEnabled )(
            __RPC__in IGPMGPO * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityInfo )(
            __RPC__in IGPMGPO * This,
                                __RPC__deref_out_opt IGPMSecurityInfo **ppSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityInfo )(
            __RPC__in IGPMGPO * This,
                       __RPC__in_opt IGPMSecurityInfo *pSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMGPO * This);
                               HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IGPMGPO * This,
                       __RPC__in BSTR bstrBackupDir,
                       __RPC__in BSTR bstrComment,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IGPMGPO * This,
                       long lFlags,
                       __RPC__in_opt IGPMBackup *pIGPMBackup,
                                 __RPC__in VARIANT *pvarMigrationTable,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMGPO * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMGPO * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            __RPC__in IGPMGPO * This,
                       long lFlags,
                       __RPC__in_opt IGPMDomain *pIGPMDomain,
                                 __RPC__in VARIANT *pvarNewDisplayName,
                                 __RPC__in VARIANT *pvarMigrationTable,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityDescriptor )(
            __RPC__in IGPMGPO * This,
                       long lFlags,
                       __RPC__in_opt IDispatch *pSD);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IGPMGPO * This,
                       long lFlags,
                                __RPC__deref_out_opt IDispatch **ppSD);
                               HRESULT ( STDMETHODCALLTYPE *IsACLConsistent )(
            __RPC__in IGPMGPO * This,
                                __RPC__out VARIANT_BOOL *pvbConsistent);
                               HRESULT ( STDMETHODCALLTYPE *MakeACLConsistent )(
            __RPC__in IGPMGPO * This);
        END_INTERFACE
    } IGPMGPOVtbl;
    interface IGPMGPO
    {
        CONST_VTBL struct IGPMGPOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> put_DisplayName(This,newVal) )
    ( (This)->lpVtbl -> get_Path(This,pVal) )
    ( (This)->lpVtbl -> get_ID(This,pVal) )
    ( (This)->lpVtbl -> get_DomainName(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pDate) )
    ( (This)->lpVtbl -> get_ModificationTime(This,pDate) )
    ( (This)->lpVtbl -> get_UserDSVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerDSVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_UserSysvolVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerSysvolVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> GetWMIFilter(This,ppIGPMWMIFilter) )
    ( (This)->lpVtbl -> SetWMIFilter(This,pIGPMWMIFilter) )
    ( (This)->lpVtbl -> SetUserEnabled(This,vbEnabled) )
    ( (This)->lpVtbl -> SetComputerEnabled(This,vbEnabled) )
    ( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
    ( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
    ( (This)->lpVtbl -> CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> SetSecurityDescriptor(This,lFlags,pSD) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,lFlags,ppSD) )
    ( (This)->lpVtbl -> IsACLConsistent(This,pvbConsistent) )
    ( (This)->lpVtbl -> MakeACLConsistent(This) )
EXTERN_C const IID IID_IGPMGPOCollection;
    typedef struct IGPMGPOCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMGPOCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMGPOCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMGPOCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMGPOCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMGPOCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMGPOCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMGPOCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMGPOCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMGPOCollection * This,
                       long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMGPOCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMGPOs);
        END_INTERFACE
    } IGPMGPOCollectionVtbl;
    interface IGPMGPOCollection
    {
        CONST_VTBL struct IGPMGPOCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMGPOs) )
EXTERN_C const IID IID_IGPMGPOLink;
    typedef struct IGPMGPOLinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMGPOLink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMGPOLink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMGPOLink * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMGPOLink * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMGPOLink * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMGPOLink * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMGPOLink * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPOID )(
            __RPC__in IGPMGPOLink * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPODomain )(
            __RPC__in IGPMGPOLink * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IGPMGPOLink * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IGPMGPOLink * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enforced )(
            __RPC__in IGPMGPOLink * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enforced )(
            __RPC__in IGPMGPOLink * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMLinkOrder )(
            __RPC__in IGPMGPOLink * This,
                                __RPC__out long *lVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOM )(
            __RPC__in IGPMGPOLink * This,
                                __RPC__deref_out_opt IGPMSOM **ppIGPMSOM);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMGPOLink * This);
        END_INTERFACE
    } IGPMGPOLinkVtbl;
    interface IGPMGPOLink
    {
        CONST_VTBL struct IGPMGPOLinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_GPOID(This,pVal) )
    ( (This)->lpVtbl -> get_GPODomain(This,pVal) )
    ( (This)->lpVtbl -> get_Enabled(This,pVal) )
    ( (This)->lpVtbl -> put_Enabled(This,newVal) )
    ( (This)->lpVtbl -> get_Enforced(This,pVal) )
    ( (This)->lpVtbl -> put_Enforced(This,newVal) )
    ( (This)->lpVtbl -> get_SOMLinkOrder(This,lVal) )
    ( (This)->lpVtbl -> get_SOM(This,ppIGPMSOM) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IGPMGPOLinksCollection;
    typedef struct IGPMGPOLinksCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMGPOLinksCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMGPOLinksCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMGPOLinksCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMGPOLinksCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMGPOLinksCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMGPOLinksCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMGPOLinksCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMGPOLinksCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMGPOLinksCollection * This,
                       long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMGPOLinksCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMLinks);
        END_INTERFACE
    } IGPMGPOLinksCollectionVtbl;
    interface IGPMGPOLinksCollection
    {
        CONST_VTBL struct IGPMGPOLinksCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMLinks) )
EXTERN_C const IID IID_IGPMCSECollection;
    typedef struct IGPMCSECollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMCSECollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMCSECollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMCSECollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMCSECollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMCSECollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMCSECollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMCSECollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMCSECollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMCSECollection * This,
                       long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMCSECollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMCSEs);
        END_INTERFACE
    } IGPMCSECollectionVtbl;
    interface IGPMCSECollection
    {
        CONST_VTBL struct IGPMCSECollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMCSEs) )
EXTERN_C const IID IID_IGPMClientSideExtension;
    typedef struct IGPMClientSideExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMClientSideExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMClientSideExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMClientSideExtension * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMClientSideExtension * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMClientSideExtension * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMClientSideExtension * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMClientSideExtension * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMClientSideExtension * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IGPMClientSideExtension * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *IsUserEnabled )(
            __RPC__in IGPMClientSideExtension * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsComputerEnabled )(
            __RPC__in IGPMClientSideExtension * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
        END_INTERFACE
    } IGPMClientSideExtensionVtbl;
    interface IGPMClientSideExtension
    {
        CONST_VTBL struct IGPMClientSideExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ID(This,pVal) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
EXTERN_C const IID IID_IGPMAsyncCancel;
    typedef struct IGPMAsyncCancelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMAsyncCancel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMAsyncCancel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMAsyncCancel * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMAsyncCancel * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMAsyncCancel * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMAsyncCancel * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMAsyncCancel * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IGPMAsyncCancel * This);
        END_INTERFACE
    } IGPMAsyncCancelVtbl;
    interface IGPMAsyncCancel
    {
        CONST_VTBL struct IGPMAsyncCancelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IGPMAsyncProgress;
    typedef struct IGPMAsyncProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMAsyncProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMAsyncProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMAsyncProgress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMAsyncProgress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMAsyncProgress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMAsyncProgress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMAsyncProgress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Status )(
            __RPC__in IGPMAsyncProgress * This,
                       long lProgressNumerator,
                       long lProgressDenominator,
                       HRESULT hrStatus,
                       __RPC__in VARIANT *pResult,
                       __RPC__in_opt IGPMStatusMsgCollection *ppIGPMStatusMsgCollection);
        END_INTERFACE
    } IGPMAsyncProgressVtbl;
    interface IGPMAsyncProgress
    {
        CONST_VTBL struct IGPMAsyncProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Status(This,lProgressNumerator,lProgressDenominator,hrStatus,pResult,ppIGPMStatusMsgCollection) )
EXTERN_C const IID IID_IGPMStatusMsgCollection;
    typedef struct IGPMStatusMsgCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMStatusMsgCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMStatusMsgCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMStatusMsgCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMStatusMsgCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMStatusMsgCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMStatusMsgCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMStatusMsgCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMStatusMsgCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMStatusMsgCollection * This,
                       long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMStatusMsgCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **pVal);
        END_INTERFACE
    } IGPMStatusMsgCollectionVtbl;
    interface IGPMStatusMsgCollection
    {
        CONST_VTBL struct IGPMStatusMsgCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
EXTERN_C const IID IID_IGPMStatusMessage;
    typedef struct IGPMStatusMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMStatusMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMStatusMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMStatusMessage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMStatusMessage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMStatusMessage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMStatusMessage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMStatusMessage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ObjectPath )(
            __RPC__in IGPMStatusMessage * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *ErrorCode )(
            __RPC__in IGPMStatusMessage * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtensionName )(
            __RPC__in IGPMStatusMessage * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SettingsName )(
            __RPC__in IGPMStatusMessage * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *OperationCode )(
            __RPC__in IGPMStatusMessage * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IGPMStatusMessage * This,
                                __RPC__deref_out_opt BSTR *pVal);
        END_INTERFACE
    } IGPMStatusMessageVtbl;
    interface IGPMStatusMessage
    {
        CONST_VTBL struct IGPMStatusMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ObjectPath(This,pVal) )
    ( (This)->lpVtbl -> ErrorCode(This) )
    ( (This)->lpVtbl -> get_ExtensionName(This,pVal) )
    ( (This)->lpVtbl -> get_SettingsName(This,pVal) )
    ( (This)->lpVtbl -> OperationCode(This) )
    ( (This)->lpVtbl -> get_Message(This,pVal) )
EXTERN_C const IID IID_IGPMConstants;
    typedef struct IGPMConstantsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMConstants * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMConstants * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMConstants * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMConstants * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMConstants * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMConstants * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMConstants * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOApply )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPORead )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOEdit )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOEditSecurityAndDelete )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOCustom )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermWMIFilterEdit )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermWMIFilterFullControl )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermWMIFilterCustom )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMLink )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMLogging )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMPlanning )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMGPOCreate )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMWMICreate )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMWMIFullControl )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOPermissions )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOEffectivePermissions )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPODisplayName )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOWMIFilter )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOID )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOComputerExtensions )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOUserExtensions )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertySOMLinks )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPODomain )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyBackupMostRecent )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpEquals )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpContains )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpNotContains )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpNotEquals )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsePDC )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseAnyDC )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotUseW2KDC )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMSite )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSOMType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMDomain )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSOMType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMOU )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMSOMType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityFlags )(
            __RPC__in IGPMConstants * This,
                       VARIANT_BOOL vbOwner,
                       VARIANT_BOOL vbGroup,
                       VARIANT_BOOL vbDACL,
                       VARIANT_BOOL vbSACL,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotValidateDC )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportHTML )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMReportType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportXML )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMReportType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RSOPModeUnknown )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RSOPModePlanning )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RSOPModeLogging )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUser )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeComputer )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeLocalGroup )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeGlobalGroup )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUniversalGroup )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUNCPath )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUnknown )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionSameAsSource )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionNone )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionByRelativeName )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionSet )(
            __RPC__in IGPMConstants * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MigrationTableOnly )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProcessSecurity )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopLoggingNoComputer )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopLoggingNoUser )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningAssumeSlowLink )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningLoopbackOption )(
            __RPC__in IGPMConstants * This,
                       VARIANT_BOOL vbMerge,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningAssumeUserWQLFilterTrue )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningAssumeCompWQLFilterTrue )(
            __RPC__in IGPMConstants * This,
                                __RPC__out long *pVal);
        END_INTERFACE
    } IGPMConstantsVtbl;
    interface IGPMConstants
    {
        CONST_VTBL struct IGPMConstantsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PermGPOApply(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPORead(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPOEdit(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPOEditSecurityAndDelete(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPOCustom(This,pVal) )
    ( (This)->lpVtbl -> get_PermWMIFilterEdit(This,pVal) )
    ( (This)->lpVtbl -> get_PermWMIFilterFullControl(This,pVal) )
    ( (This)->lpVtbl -> get_PermWMIFilterCustom(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMLink(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMLogging(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMPlanning(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMGPOCreate(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMWMICreate(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMWMIFullControl(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOPermissions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOEffectivePermissions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPODisplayName(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOWMIFilter(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOID(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOComputerExtensions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOUserExtensions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertySOMLinks(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPODomain(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyBackupMostRecent(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpEquals(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpContains(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpNotContains(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpNotEquals(This,pVal) )
    ( (This)->lpVtbl -> get_UsePDC(This,pVal) )
    ( (This)->lpVtbl -> get_UseAnyDC(This,pVal) )
    ( (This)->lpVtbl -> get_DoNotUseW2KDC(This,pVal) )
    ( (This)->lpVtbl -> get_SOMSite(This,pVal) )
    ( (This)->lpVtbl -> get_SOMDomain(This,pVal) )
    ( (This)->lpVtbl -> get_SOMOU(This,pVal) )
    ( (This)->lpVtbl -> get_SecurityFlags(This,vbOwner,vbGroup,vbDACL,vbSACL,pVal) )
    ( (This)->lpVtbl -> get_DoNotValidateDC(This,pVal) )
    ( (This)->lpVtbl -> get_ReportHTML(This,pVal) )
    ( (This)->lpVtbl -> get_ReportXML(This,pVal) )
    ( (This)->lpVtbl -> get_RSOPModeUnknown(This,pVal) )
    ( (This)->lpVtbl -> get_RSOPModePlanning(This,pVal) )
    ( (This)->lpVtbl -> get_RSOPModeLogging(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUser(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeComputer(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeLocalGroup(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeGlobalGroup(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUniversalGroup(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUNCPath(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUnknown(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionSameAsSource(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionNone(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionByRelativeName(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionSet(This,pVal) )
    ( (This)->lpVtbl -> get_MigrationTableOnly(This,pVal) )
    ( (This)->lpVtbl -> get_ProcessSecurity(This,pVal) )
    ( (This)->lpVtbl -> get_RsopLoggingNoComputer(This,pVal) )
    ( (This)->lpVtbl -> get_RsopLoggingNoUser(This,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningAssumeSlowLink(This,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningLoopbackOption(This,vbMerge,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningAssumeUserWQLFilterTrue(This,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningAssumeCompWQLFilterTrue(This,pVal) )
EXTERN_C const IID IID_IGPMResult;
    typedef struct IGPMResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IGPMResult * This,
                                __RPC__deref_out_opt IGPMStatusMsgCollection **ppIGPMStatusMsgCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_Result )(
            __RPC__in IGPMResult * This,
                                __RPC__out VARIANT *pvarResult);
                               HRESULT ( STDMETHODCALLTYPE *OverallStatus )(
            __RPC__in IGPMResult * This);
        END_INTERFACE
    } IGPMResultVtbl;
    interface IGPMResult
    {
        CONST_VTBL struct IGPMResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Status(This,ppIGPMStatusMsgCollection) )
    ( (This)->lpVtbl -> get_Result(This,pvarResult) )
    ( (This)->lpVtbl -> OverallStatus(This) )
EXTERN_C const IID IID_IGPMMapEntryCollection;
    typedef struct IGPMMapEntryCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMMapEntryCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMMapEntryCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMMapEntryCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMMapEntryCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMMapEntryCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMMapEntryCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMMapEntryCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMMapEntryCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMMapEntryCollection * This,
                       long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMMapEntryCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **pVal);
        END_INTERFACE
    } IGPMMapEntryCollectionVtbl;
    interface IGPMMapEntryCollection
    {
        CONST_VTBL struct IGPMMapEntryCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
EXTERN_C const IID IID_IGPMMapEntry;
    typedef struct IGPMMapEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMMapEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMMapEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMMapEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMMapEntry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMMapEntry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMMapEntry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMMapEntry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in IGPMMapEntry * This,
                                __RPC__deref_out_opt BSTR *pbstrSource);
                                        HRESULT ( STDMETHODCALLTYPE *get_Destination )(
            __RPC__in IGPMMapEntry * This,
                                __RPC__deref_out_opt BSTR *pbstrDestination);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOption )(
            __RPC__in IGPMMapEntry * This,
                                __RPC__out GPMDestinationOption *pgpmDestOption);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryType )(
            __RPC__in IGPMMapEntry * This,
                                __RPC__out GPMEntryType *pgpmEntryType);
        END_INTERFACE
    } IGPMMapEntryVtbl;
    interface IGPMMapEntry
    {
        CONST_VTBL struct IGPMMapEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Source(This,pbstrSource) )
    ( (This)->lpVtbl -> get_Destination(This,pbstrDestination) )
    ( (This)->lpVtbl -> get_DestinationOption(This,pgpmDestOption) )
    ( (This)->lpVtbl -> get_EntryType(This,pgpmEntryType) )
EXTERN_C const IID IID_IGPMMigrationTable;
    typedef struct IGPMMigrationTableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMMigrationTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMMigrationTable * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMMigrationTable * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMMigrationTable * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMMigrationTable * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in BSTR bstrMigrationTablePath);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IGPMMigrationTable * This,
                       long lFlags,
                       VARIANT var);
                               HRESULT ( STDMETHODCALLTYPE *AddEntry )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in BSTR bstrSource,
                       GPMEntryType gpmEntryType,
                                 __RPC__in VARIANT *pvarDestination,
                                __RPC__deref_out_opt IGPMMapEntry **ppEntry);
                               HRESULT ( STDMETHODCALLTYPE *GetEntry )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in BSTR bstrSource,
                                __RPC__deref_out_opt IGPMMapEntry **ppEntry);
                               HRESULT ( STDMETHODCALLTYPE *DeleteEntry )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in BSTR bstrSource);
                               HRESULT ( STDMETHODCALLTYPE *UpdateDestination )(
            __RPC__in IGPMMigrationTable * This,
                       __RPC__in BSTR bstrSource,
                                 __RPC__in VARIANT *pvarDestination,
                                __RPC__deref_out_opt IGPMMapEntry **ppEntry);
                               HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in IGPMMigrationTable * This,
                                __RPC__deref_out_opt IGPMResult **ppResult);
                               HRESULT ( STDMETHODCALLTYPE *GetEntries )(
            __RPC__in IGPMMigrationTable * This,
                                __RPC__deref_out_opt IGPMMapEntryCollection **ppEntries);
        END_INTERFACE
    } IGPMMigrationTableVtbl;
    interface IGPMMigrationTable
    {
        CONST_VTBL struct IGPMMigrationTableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Save(This,bstrMigrationTablePath) )
    ( (This)->lpVtbl -> Add(This,lFlags,var) )
    ( (This)->lpVtbl -> AddEntry(This,bstrSource,gpmEntryType,pvarDestination,ppEntry) )
    ( (This)->lpVtbl -> GetEntry(This,bstrSource,ppEntry) )
    ( (This)->lpVtbl -> DeleteEntry(This,bstrSource) )
    ( (This)->lpVtbl -> UpdateDestination(This,bstrSource,pvarDestination,ppEntry) )
    ( (This)->lpVtbl -> Validate(This,ppResult) )
    ( (This)->lpVtbl -> GetEntries(This,ppEntries) )
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0030_0001
    {
        typeGPO = 0,
        typeStarterGPO = ( typeGPO + 1 )
    } GPMBackupType;
typedef
enum __MIDL___MIDL_itf_gpmgmt_0000_0030_0002
    {
        typeSystem = 0,
        typeCustom = ( typeSystem + 1 )
    } GPMStarterGPOType;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IGPMBackupDirEx;
    typedef struct IGPMBackupDirExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMBackupDirEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMBackupDirEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMBackupDirEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMBackupDirEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMBackupDirEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMBackupDirEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMBackupDirEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupDir )(
            __RPC__in IGPMBackupDirEx * This,
                                __RPC__deref_out_opt BSTR *pbstrBackupDir);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupType )(
            __RPC__in IGPMBackupDirEx * This,
                                __RPC__out GPMBackupType *pgpmBackupType);
                               HRESULT ( STDMETHODCALLTYPE *GetBackup )(
            __RPC__in IGPMBackupDirEx * This,
                       __RPC__in BSTR bstrID,
                                __RPC__out VARIANT *pvarBackup);
                               HRESULT ( STDMETHODCALLTYPE *SearchBackups )(
            __RPC__in IGPMBackupDirEx * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__out VARIANT *pvarBackupCollection);
        END_INTERFACE
    } IGPMBackupDirExVtbl;
    interface IGPMBackupDirEx
    {
        CONST_VTBL struct IGPMBackupDirExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BackupDir(This,pbstrBackupDir) )
    ( (This)->lpVtbl -> get_BackupType(This,pgpmBackupType) )
    ( (This)->lpVtbl -> GetBackup(This,bstrID,pvarBackup) )
    ( (This)->lpVtbl -> SearchBackups(This,pIGPMSearchCriteria,pvarBackupCollection) )
EXTERN_C const IID IID_IGPMStarterGPOBackupCollection;
    typedef struct IGPMStarterGPOBackupCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMStarterGPOBackupCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMStarterGPOBackupCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMStarterGPOBackupCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
            long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMStarterGPOBackupCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMTmplBackup);
        END_INTERFACE
    } IGPMStarterGPOBackupCollectionVtbl;
    interface IGPMStarterGPOBackupCollection
    {
        CONST_VTBL struct IGPMStarterGPOBackupCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMTmplBackup) )
EXTERN_C const IID IID_IGPMStarterGPOBackup;
    typedef struct IGPMStarterGPOBackupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMStarterGPOBackup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMStarterGPOBackup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMStarterGPOBackup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMStarterGPOBackup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMStarterGPOBackup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMStarterGPOBackup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMStarterGPOBackup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupDir )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__deref_out_opt BSTR *pbstrBackupDir);
                                        HRESULT ( STDMETHODCALLTYPE *get_Comment )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__deref_out_opt BSTR *pbstrComment);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__deref_out_opt BSTR *pbstrTemplateDomain);
                                        HRESULT ( STDMETHODCALLTYPE *get_StarterGPOID )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__deref_out_opt BSTR *pbstrTemplateID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__deref_out_opt BSTR *pbstrID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__out DATE *pTimestamp);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IGPMStarterGPOBackup * This,
                                __RPC__out GPMStarterGPOType *pType);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMStarterGPOBackup * This);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMStarterGPOBackup * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMStarterGPOBackup * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
        END_INTERFACE
    } IGPMStarterGPOBackupVtbl;
    interface IGPMStarterGPOBackup
    {
        CONST_VTBL struct IGPMStarterGPOBackupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BackupDir(This,pbstrBackupDir) )
    ( (This)->lpVtbl -> get_Comment(This,pbstrComment) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> get_Domain(This,pbstrTemplateDomain) )
    ( (This)->lpVtbl -> get_StarterGPOID(This,pbstrTemplateID) )
    ( (This)->lpVtbl -> get_ID(This,pbstrID) )
    ( (This)->lpVtbl -> get_Timestamp(This,pTimestamp) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
EXTERN_C const IID IID_IGPM2;
    typedef struct IGPM2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPM2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPM2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPM2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPM2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPM2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPM2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPM2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetDomain )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrDomain,
                               __RPC__in_opt BSTR bstrDomainController,
                       long lDCFlags,
                                __RPC__deref_out_opt IGPMDomain **pIGPMDomain);
                               HRESULT ( STDMETHODCALLTYPE *GetBackupDir )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrBackupDir,
                                __RPC__deref_out_opt IGPMBackupDir **pIGPMBackupDir);
                               HRESULT ( STDMETHODCALLTYPE *GetSitesContainer )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrForest,
                               __RPC__in_opt BSTR bstrDomain,
                               __RPC__in_opt BSTR bstrDomainController,
                       long lDCFlags,
                                __RPC__deref_out_opt IGPMSitesContainer **ppIGPMSitesContainer);
                               HRESULT ( STDMETHODCALLTYPE *GetRSOP )(
            __RPC__in IGPM2 * This,
                       GPMRSOPMode gpmRSoPMode,
                       __RPC__in BSTR bstrNamespace,
                       long lFlags,
                                __RPC__deref_out_opt IGPMRSOP **ppIGPMRSOP);
                               HRESULT ( STDMETHODCALLTYPE *CreatePermission )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrTrustee,
                       GPMPermissionType perm,
                       VARIANT_BOOL bInheritable,
                                __RPC__deref_out_opt IGPMPermission **ppPerm);
                               HRESULT ( STDMETHODCALLTYPE *CreateSearchCriteria )(
            __RPC__in IGPM2 * This,
                                __RPC__deref_out_opt IGPMSearchCriteria **ppIGPMSearchCriteria);
                               HRESULT ( STDMETHODCALLTYPE *CreateTrustee )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrTrustee,
                                __RPC__deref_out_opt IGPMTrustee **ppIGPMTrustee);
                               HRESULT ( STDMETHODCALLTYPE *GetClientSideExtensions )(
            __RPC__in IGPM2 * This,
                                __RPC__deref_out_opt IGPMCSECollection **ppIGPMCSECollection);
                               HRESULT ( STDMETHODCALLTYPE *GetConstants )(
            __RPC__in IGPM2 * This,
                                __RPC__deref_out_opt IGPMConstants **ppIGPMConstants);
                               HRESULT ( STDMETHODCALLTYPE *GetMigrationTable )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrMigrationTablePath,
                                __RPC__deref_out_opt IGPMMigrationTable **ppMigrationTable);
                               HRESULT ( STDMETHODCALLTYPE *CreateMigrationTable )(
            __RPC__in IGPM2 * This,
                                __RPC__deref_out_opt IGPMMigrationTable **ppMigrationTable);
                               HRESULT ( STDMETHODCALLTYPE *InitializeReporting )(
            __RPC__in IGPM2 * This,
                               __RPC__in_opt BSTR bstrAdmPath);
                               HRESULT ( STDMETHODCALLTYPE *GetBackupDirEx )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrBackupDir,
                       GPMBackupType backupDirType,
                                __RPC__deref_out_opt IGPMBackupDirEx **ppIGPMBackupDirEx);
                               HRESULT ( STDMETHODCALLTYPE *InitializeReportingEx )(
            __RPC__in IGPM2 * This,
                       __RPC__in BSTR bstrAdmPath,
                       LONG reportingOptions);
        END_INTERFACE
    } IGPM2Vtbl;
    interface IGPM2
    {
        CONST_VTBL struct IGPM2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDomain(This,bstrDomain,bstrDomainController,lDCFlags,pIGPMDomain) )
    ( (This)->lpVtbl -> GetBackupDir(This,bstrBackupDir,pIGPMBackupDir) )
    ( (This)->lpVtbl -> GetSitesContainer(This,bstrForest,bstrDomain,bstrDomainController,lDCFlags,ppIGPMSitesContainer) )
    ( (This)->lpVtbl -> GetRSOP(This,gpmRSoPMode,bstrNamespace,lFlags,ppIGPMRSOP) )
    ( (This)->lpVtbl -> CreatePermission(This,bstrTrustee,perm,bInheritable,ppPerm) )
    ( (This)->lpVtbl -> CreateSearchCriteria(This,ppIGPMSearchCriteria) )
    ( (This)->lpVtbl -> CreateTrustee(This,bstrTrustee,ppIGPMTrustee) )
    ( (This)->lpVtbl -> GetClientSideExtensions(This,ppIGPMCSECollection) )
    ( (This)->lpVtbl -> GetConstants(This,ppIGPMConstants) )
    ( (This)->lpVtbl -> GetMigrationTable(This,bstrMigrationTablePath,ppMigrationTable) )
    ( (This)->lpVtbl -> CreateMigrationTable(This,ppMigrationTable) )
    ( (This)->lpVtbl -> InitializeReporting(This,bstrAdmPath) )
    ( (This)->lpVtbl -> GetBackupDirEx(This,bstrBackupDir,backupDirType,ppIGPMBackupDirEx) )
    ( (This)->lpVtbl -> InitializeReportingEx(This,bstrAdmPath,reportingOptions) )
EXTERN_C const IID IID_IGPMStarterGPO;
    typedef struct IGPMStarterGPOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMStarterGPO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMStarterGPO * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMStarterGPO * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMStarterGPO * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMStarterGPO * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Author )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Product )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModifiedTime )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__out GPMStarterGPOType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerVersion )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__out USHORT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserVersion )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__out USHORT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StarterGPOVersion )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMStarterGPO * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in BSTR bstrSaveFile,
                       VARIANT_BOOL bOverwrite,
                       VARIANT_BOOL bSaveAsSystem,
                                 __RPC__in VARIANT *bstrLanguage,
                                 __RPC__in VARIANT *bstrAuthor,
                                 __RPC__in VARIANT *bstrProduct,
                                 __RPC__in VARIANT *bstrUniqueID,
                                 __RPC__in VARIANT *bstrVersion,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in BSTR bstrBackupDir,
                       __RPC__in BSTR bstrComment,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            __RPC__in IGPMStarterGPO * This,
                                 __RPC__in VARIANT *pvarNewDisplayName,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                 __RPC__in VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMStarterGPO * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                 __RPC__in VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMStarterGPO * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityInfo )(
            __RPC__in IGPMStarterGPO * This,
                                __RPC__deref_out_opt IGPMSecurityInfo **ppSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityInfo )(
            __RPC__in IGPMStarterGPO * This,
                       __RPC__in_opt IGPMSecurityInfo *pSecurityInfo);
        END_INTERFACE
    } IGPMStarterGPOVtbl;
    interface IGPMStarterGPO
    {
        CONST_VTBL struct IGPMStarterGPOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> put_DisplayName(This,newVal) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> put_Description(This,newVal) )
    ( (This)->lpVtbl -> get_Author(This,pVal) )
    ( (This)->lpVtbl -> get_Product(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) )
    ( (This)->lpVtbl -> get_ID(This,pVal) )
    ( (This)->lpVtbl -> get_ModifiedTime(This,pVal) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerVersion(This,pVal) )
    ( (This)->lpVtbl -> get_UserVersion(This,pVal) )
    ( (This)->lpVtbl -> get_StarterGPOVersion(This,pVal) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Save(This,bstrSaveFile,bOverwrite,bSaveAsSystem,bstrLanguage,bstrAuthor,bstrProduct,bstrUniqueID,bstrVersion,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> CopyTo(This,pvarNewDisplayName,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
    ( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
    ( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
EXTERN_C const IID IID_IGPMStarterGPOCollection;
    typedef struct IGPMStarterGPOCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMStarterGPOCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMStarterGPOCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMStarterGPOCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMStarterGPOCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMStarterGPOCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMStarterGPOCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMStarterGPOCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IGPMStarterGPOCollection * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IGPMStarterGPOCollection * This,
            long lIndex,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IGPMStarterGPOCollection * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppIGPMTemplates);
        END_INTERFACE
    } IGPMStarterGPOCollectionVtbl;
    interface IGPMStarterGPOCollection
    {
        CONST_VTBL struct IGPMStarterGPOCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIGPMTemplates) )
EXTERN_C const IID IID_IGPMDomain2;
    typedef struct IGPMDomain2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMDomain2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMDomain2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMDomain2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMDomain2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMDomain2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainController )(
            __RPC__in IGPMDomain2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in IGPMDomain2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateGPO )(
            __RPC__in IGPMDomain2 * This,
                                __RPC__deref_out_opt IGPMGPO **ppNewGPO);
                               HRESULT ( STDMETHODCALLTYPE *GetGPO )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt IGPMGPO **ppGPO);
                               HRESULT ( STDMETHODCALLTYPE *SearchGPOs )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMGPOCollection **ppIGPMGPOCollection);
                               HRESULT ( STDMETHODCALLTYPE *RestoreGPO )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMBackup *pIGPMBackup,
                       long lDCFlags,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GetSOM )(
            __RPC__in IGPMDomain2 * This,
                               __RPC__in_opt BSTR bstrPath,
                                __RPC__deref_out_opt IGPMSOM **ppSOM);
                               HRESULT ( STDMETHODCALLTYPE *SearchSOMs )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMSOMCollection **ppIGPMSOMCollection);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIFilter )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in BSTR bstrPath,
                                __RPC__deref_out_opt IGPMWMIFilter **ppWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SearchWMIFilters )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMWMIFilterCollection **ppIGPMWMIFilterCollection);
                               HRESULT ( STDMETHODCALLTYPE *CreateStarterGPO )(
            __RPC__in IGPMDomain2 * This,
                                __RPC__deref_out_opt IGPMStarterGPO **ppnewTemplate);
                               HRESULT ( STDMETHODCALLTYPE *CreateGPOFromStarterGPO )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMStarterGPO *pGPOTemplate,
                                __RPC__deref_out_opt IGPMGPO **ppnewGPO);
                               HRESULT ( STDMETHODCALLTYPE *GetStarterGPO )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt IGPMStarterGPO **ppTemplate);
                               HRESULT ( STDMETHODCALLTYPE *SearchStarterGPOs )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMStarterGPOCollection **ppIGPMTemplateCollection);
                               HRESULT ( STDMETHODCALLTYPE *LoadStarterGPO )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in BSTR bstrLoadFile,
                       VARIANT_BOOL bOverwrite,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *RestoreStarterGPO )(
            __RPC__in IGPMDomain2 * This,
                       __RPC__in_opt IGPMStarterGPOBackup *pIGPMTmplBackup,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
        END_INTERFACE
    } IGPMDomain2Vtbl;
    interface IGPMDomain2
    {
        CONST_VTBL struct IGPMDomain2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DomainController(This,pVal) )
    ( (This)->lpVtbl -> get_Domain(This,pVal) )
    ( (This)->lpVtbl -> CreateGPO(This,ppNewGPO) )
    ( (This)->lpVtbl -> GetGPO(This,bstrGuid,ppGPO) )
    ( (This)->lpVtbl -> SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection) )
    ( (This)->lpVtbl -> RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GetSOM(This,bstrPath,ppSOM) )
    ( (This)->lpVtbl -> SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
    ( (This)->lpVtbl -> GetWMIFilter(This,bstrPath,ppWMIFilter) )
    ( (This)->lpVtbl -> SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection) )
    ( (This)->lpVtbl -> CreateStarterGPO(This,ppnewTemplate) )
    ( (This)->lpVtbl -> CreateGPOFromStarterGPO(This,pGPOTemplate,ppnewGPO) )
    ( (This)->lpVtbl -> GetStarterGPO(This,bstrGuid,ppTemplate) )
    ( (This)->lpVtbl -> SearchStarterGPOs(This,pIGPMSearchCriteria,ppIGPMTemplateCollection) )
    ( (This)->lpVtbl -> LoadStarterGPO(This,bstrLoadFile,bOverwrite,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> RestoreStarterGPO(This,pIGPMTmplBackup,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
EXTERN_C const IID IID_IGPMConstants2;
    typedef struct IGPMConstants2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMConstants2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMConstants2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMConstants2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMConstants2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMConstants2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMConstants2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMConstants2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOApply )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPORead )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOEdit )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOEditSecurityAndDelete )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermGPOCustom )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermWMIFilterEdit )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermWMIFilterFullControl )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermWMIFilterCustom )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMLink )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMLogging )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMPlanning )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMGPOCreate )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMWMICreate )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermSOMWMIFullControl )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOPermissions )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOEffectivePermissions )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPODisplayName )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOWMIFilter )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOID )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOComputerExtensions )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPOUserExtensions )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertySOMLinks )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyGPODomain )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyBackupMostRecent )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpEquals )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpContains )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpNotContains )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchOpNotEquals )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchOperation *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsePDC )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseAnyDC )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotUseW2KDC )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMSite )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSOMType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMDomain )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSOMType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SOMOU )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSOMType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityFlags )(
            __RPC__in IGPMConstants2 * This,
                       VARIANT_BOOL vbOwner,
                       VARIANT_BOOL vbGroup,
                       VARIANT_BOOL vbDACL,
                       VARIANT_BOOL vbSACL,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotValidateDC )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportHTML )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMReportType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportXML )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMReportType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RSOPModeUnknown )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RSOPModePlanning )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RSOPModeLogging )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMRSOPMode *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUser )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeComputer )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeLocalGroup )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeGlobalGroup )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUniversalGroup )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUNCPath )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EntryTypeUnknown )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMEntryType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionSameAsSource )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionNone )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionByRelativeName )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationOptionSet )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMDestinationOption *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MigrationTableOnly )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProcessSecurity )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopLoggingNoComputer )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopLoggingNoUser )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningAssumeSlowLink )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningLoopbackOption )(
            __RPC__in IGPMConstants2 * This,
                       VARIANT_BOOL vbMerge,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningAssumeUserWQLFilterTrue )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RsopPlanningAssumeCompWQLFilterTrue )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupTypeGPO )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMBackupType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackupTypeStarterGPO )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMBackupType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StarterGPOTypeSystem )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMStarterGPOType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StarterGPOTypeCustom )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMStarterGPOType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyStarterGPOPermissions )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyStarterGPOEffectivePermissions )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyStarterGPODisplayName )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyStarterGPOID )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchPropertyStarterGPODomain )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMSearchProperty *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermStarterGPORead )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermStarterGPOEdit )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermStarterGPOFullControl )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermStarterGPOCustom )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMPermissionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportLegacy )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMReportingOptions *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportComments )(
            __RPC__in IGPMConstants2 * This,
                                __RPC__out GPMReportingOptions *pVal);
        END_INTERFACE
    } IGPMConstants2Vtbl;
    interface IGPMConstants2
    {
        CONST_VTBL struct IGPMConstants2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PermGPOApply(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPORead(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPOEdit(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPOEditSecurityAndDelete(This,pVal) )
    ( (This)->lpVtbl -> get_PermGPOCustom(This,pVal) )
    ( (This)->lpVtbl -> get_PermWMIFilterEdit(This,pVal) )
    ( (This)->lpVtbl -> get_PermWMIFilterFullControl(This,pVal) )
    ( (This)->lpVtbl -> get_PermWMIFilterCustom(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMLink(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMLogging(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMPlanning(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMGPOCreate(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMWMICreate(This,pVal) )
    ( (This)->lpVtbl -> get_PermSOMWMIFullControl(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOPermissions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOEffectivePermissions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPODisplayName(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOWMIFilter(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOID(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOComputerExtensions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPOUserExtensions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertySOMLinks(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyGPODomain(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyBackupMostRecent(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpEquals(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpContains(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpNotContains(This,pVal) )
    ( (This)->lpVtbl -> get_SearchOpNotEquals(This,pVal) )
    ( (This)->lpVtbl -> get_UsePDC(This,pVal) )
    ( (This)->lpVtbl -> get_UseAnyDC(This,pVal) )
    ( (This)->lpVtbl -> get_DoNotUseW2KDC(This,pVal) )
    ( (This)->lpVtbl -> get_SOMSite(This,pVal) )
    ( (This)->lpVtbl -> get_SOMDomain(This,pVal) )
    ( (This)->lpVtbl -> get_SOMOU(This,pVal) )
    ( (This)->lpVtbl -> get_SecurityFlags(This,vbOwner,vbGroup,vbDACL,vbSACL,pVal) )
    ( (This)->lpVtbl -> get_DoNotValidateDC(This,pVal) )
    ( (This)->lpVtbl -> get_ReportHTML(This,pVal) )
    ( (This)->lpVtbl -> get_ReportXML(This,pVal) )
    ( (This)->lpVtbl -> get_RSOPModeUnknown(This,pVal) )
    ( (This)->lpVtbl -> get_RSOPModePlanning(This,pVal) )
    ( (This)->lpVtbl -> get_RSOPModeLogging(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUser(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeComputer(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeLocalGroup(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeGlobalGroup(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUniversalGroup(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUNCPath(This,pVal) )
    ( (This)->lpVtbl -> get_EntryTypeUnknown(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionSameAsSource(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionNone(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionByRelativeName(This,pVal) )
    ( (This)->lpVtbl -> get_DestinationOptionSet(This,pVal) )
    ( (This)->lpVtbl -> get_MigrationTableOnly(This,pVal) )
    ( (This)->lpVtbl -> get_ProcessSecurity(This,pVal) )
    ( (This)->lpVtbl -> get_RsopLoggingNoComputer(This,pVal) )
    ( (This)->lpVtbl -> get_RsopLoggingNoUser(This,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningAssumeSlowLink(This,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningLoopbackOption(This,vbMerge,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningAssumeUserWQLFilterTrue(This,pVal) )
    ( (This)->lpVtbl -> get_RsopPlanningAssumeCompWQLFilterTrue(This,pVal) )
    ( (This)->lpVtbl -> get_BackupTypeGPO(This,pVal) )
    ( (This)->lpVtbl -> get_BackupTypeStarterGPO(This,pVal) )
    ( (This)->lpVtbl -> get_StarterGPOTypeSystem(This,pVal) )
    ( (This)->lpVtbl -> get_StarterGPOTypeCustom(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyStarterGPOPermissions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyStarterGPOEffectivePermissions(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyStarterGPODisplayName(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyStarterGPOID(This,pVal) )
    ( (This)->lpVtbl -> get_SearchPropertyStarterGPODomain(This,pVal) )
    ( (This)->lpVtbl -> get_PermStarterGPORead(This,pVal) )
    ( (This)->lpVtbl -> get_PermStarterGPOEdit(This,pVal) )
    ( (This)->lpVtbl -> get_PermStarterGPOFullControl(This,pVal) )
    ( (This)->lpVtbl -> get_PermStarterGPOCustom(This,pVal) )
    ( (This)->lpVtbl -> get_ReportLegacy(This,pVal) )
    ( (This)->lpVtbl -> get_ReportComments(This,pVal) )
EXTERN_C const IID IID_IGPMGPO2;
    typedef struct IGPMGPO2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMGPO2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMGPO2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMGPO2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMGPO2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMGPO2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModificationTime )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserDSVersionNumber )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerDSVersionNumber )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSysvolVersionNumber )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerSysvolVersionNumber )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIFilter )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt IGPMWMIFilter **ppIGPMWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetWMIFilter )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in_opt IGPMWMIFilter *pIGPMWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetUserEnabled )(
            __RPC__in IGPMGPO2 * This,
                       VARIANT_BOOL vbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *SetComputerEnabled )(
            __RPC__in IGPMGPO2 * This,
                       VARIANT_BOOL vbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsUserEnabled )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsComputerEnabled )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityInfo )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt IGPMSecurityInfo **ppSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityInfo )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in_opt IGPMSecurityInfo *pSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMGPO2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in BSTR bstrBackupDir,
                       __RPC__in BSTR bstrComment,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IGPMGPO2 * This,
                       long lFlags,
                       __RPC__in_opt IGPMBackup *pIGPMBackup,
                                 __RPC__in VARIANT *pvarMigrationTable,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMGPO2 * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMGPO2 * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            __RPC__in IGPMGPO2 * This,
                       long lFlags,
                       __RPC__in_opt IGPMDomain *pIGPMDomain,
                                 __RPC__in VARIANT *pvarNewDisplayName,
                                 __RPC__in VARIANT *pvarMigrationTable,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityDescriptor )(
            __RPC__in IGPMGPO2 * This,
                       long lFlags,
                       __RPC__in_opt IDispatch *pSD);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IGPMGPO2 * This,
                       long lFlags,
                                __RPC__deref_out_opt IDispatch **ppSD);
                               HRESULT ( STDMETHODCALLTYPE *IsACLConsistent )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__out VARIANT_BOOL *pvbConsistent);
                               HRESULT ( STDMETHODCALLTYPE *MakeACLConsistent )(
            __RPC__in IGPMGPO2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IGPMGPO2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IGPMGPO2 * This,
                       __RPC__in BSTR newVal);
        END_INTERFACE
    } IGPMGPO2Vtbl;
    interface IGPMGPO2
    {
        CONST_VTBL struct IGPMGPO2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> put_DisplayName(This,newVal) )
    ( (This)->lpVtbl -> get_Path(This,pVal) )
    ( (This)->lpVtbl -> get_ID(This,pVal) )
    ( (This)->lpVtbl -> get_DomainName(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pDate) )
    ( (This)->lpVtbl -> get_ModificationTime(This,pDate) )
    ( (This)->lpVtbl -> get_UserDSVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerDSVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_UserSysvolVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerSysvolVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> GetWMIFilter(This,ppIGPMWMIFilter) )
    ( (This)->lpVtbl -> SetWMIFilter(This,pIGPMWMIFilter) )
    ( (This)->lpVtbl -> SetUserEnabled(This,vbEnabled) )
    ( (This)->lpVtbl -> SetComputerEnabled(This,vbEnabled) )
    ( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
    ( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
    ( (This)->lpVtbl -> CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> SetSecurityDescriptor(This,lFlags,pSD) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,lFlags,ppSD) )
    ( (This)->lpVtbl -> IsACLConsistent(This,pvbConsistent) )
    ( (This)->lpVtbl -> MakeACLConsistent(This) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> put_Description(This,newVal) )
EXTERN_C const IID IID_IGPMDomain3;
    typedef struct IGPMDomain3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMDomain3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMDomain3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMDomain3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMDomain3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMDomain3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainController )(
            __RPC__in IGPMDomain3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in IGPMDomain3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateGPO )(
            __RPC__in IGPMDomain3 * This,
                                __RPC__deref_out_opt IGPMGPO **ppNewGPO);
                               HRESULT ( STDMETHODCALLTYPE *GetGPO )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt IGPMGPO **ppGPO);
                               HRESULT ( STDMETHODCALLTYPE *SearchGPOs )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMGPOCollection **ppIGPMGPOCollection);
                               HRESULT ( STDMETHODCALLTYPE *RestoreGPO )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMBackup *pIGPMBackup,
                       long lDCFlags,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GetSOM )(
            __RPC__in IGPMDomain3 * This,
                               __RPC__in_opt BSTR bstrPath,
                                __RPC__deref_out_opt IGPMSOM **ppSOM);
                               HRESULT ( STDMETHODCALLTYPE *SearchSOMs )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMSOMCollection **ppIGPMSOMCollection);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIFilter )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in BSTR bstrPath,
                                __RPC__deref_out_opt IGPMWMIFilter **ppWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SearchWMIFilters )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMWMIFilterCollection **ppIGPMWMIFilterCollection);
                               HRESULT ( STDMETHODCALLTYPE *CreateStarterGPO )(
            __RPC__in IGPMDomain3 * This,
                                __RPC__deref_out_opt IGPMStarterGPO **ppnewTemplate);
                               HRESULT ( STDMETHODCALLTYPE *CreateGPOFromStarterGPO )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMStarterGPO *pGPOTemplate,
                                __RPC__deref_out_opt IGPMGPO **ppnewGPO);
                               HRESULT ( STDMETHODCALLTYPE *GetStarterGPO )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt IGPMStarterGPO **ppTemplate);
                               HRESULT ( STDMETHODCALLTYPE *SearchStarterGPOs )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMSearchCriteria *pIGPMSearchCriteria,
                                __RPC__deref_out_opt IGPMStarterGPOCollection **ppIGPMTemplateCollection);
                               HRESULT ( STDMETHODCALLTYPE *LoadStarterGPO )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in BSTR bstrLoadFile,
                       VARIANT_BOOL bOverwrite,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *RestoreStarterGPO )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in_opt IGPMStarterGPOBackup *pIGPMTmplBackup,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMDomain3 * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_InfrastructureDC )(
            __RPC__in IGPMDomain3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InfrastructureDC )(
            __RPC__in IGPMDomain3 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InfrastructureFlags )(
            __RPC__in IGPMDomain3 * This,
                       DWORD dwFlags);
        END_INTERFACE
    } IGPMDomain3Vtbl;
    interface IGPMDomain3
    {
        CONST_VTBL struct IGPMDomain3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DomainController(This,pVal) )
    ( (This)->lpVtbl -> get_Domain(This,pVal) )
    ( (This)->lpVtbl -> CreateGPO(This,ppNewGPO) )
    ( (This)->lpVtbl -> GetGPO(This,bstrGuid,ppGPO) )
    ( (This)->lpVtbl -> SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection) )
    ( (This)->lpVtbl -> RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GetSOM(This,bstrPath,ppSOM) )
    ( (This)->lpVtbl -> SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
    ( (This)->lpVtbl -> GetWMIFilter(This,bstrPath,ppWMIFilter) )
    ( (This)->lpVtbl -> SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection) )
    ( (This)->lpVtbl -> CreateStarterGPO(This,ppnewTemplate) )
    ( (This)->lpVtbl -> CreateGPOFromStarterGPO(This,pGPOTemplate,ppnewGPO) )
    ( (This)->lpVtbl -> GetStarterGPO(This,bstrGuid,ppTemplate) )
    ( (This)->lpVtbl -> SearchStarterGPOs(This,pIGPMSearchCriteria,ppIGPMTemplateCollection) )
    ( (This)->lpVtbl -> LoadStarterGPO(This,bstrLoadFile,bOverwrite,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> RestoreStarterGPO(This,pIGPMTmplBackup,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> get_InfrastructureDC(This,pVal) )
    ( (This)->lpVtbl -> put_InfrastructureDC(This,newVal) )
    ( (This)->lpVtbl -> put_InfrastructureFlags(This,dwFlags) )
EXTERN_C const IID IID_IGPMGPO3;
    typedef struct IGPMGPO3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPMGPO3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPMGPO3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGPMGPO3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGPMGPO3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGPMGPO3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModificationTime )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserDSVersionNumber )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerDSVersionNumber )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSysvolVersionNumber )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ComputerSysvolVersionNumber )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIFilter )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt IGPMWMIFilter **ppIGPMWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetWMIFilter )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in_opt IGPMWMIFilter *pIGPMWMIFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetUserEnabled )(
            __RPC__in IGPMGPO3 * This,
                       VARIANT_BOOL vbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *SetComputerEnabled )(
            __RPC__in IGPMGPO3 * This,
                       VARIANT_BOOL vbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsUserEnabled )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsComputerEnabled )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out VARIANT_BOOL *pvbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityInfo )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt IGPMSecurityInfo **ppSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityInfo )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in_opt IGPMSecurityInfo *pSecurityInfo);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IGPMGPO3 * This);
                               HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in BSTR bstrBackupDir,
                       __RPC__in BSTR bstrComment,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IGPMGPO3 * This,
                       long lFlags,
                       __RPC__in_opt IGPMBackup *pIGPMBackup,
                                 __RPC__in VARIANT *pvarMigrationTable,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReport )(
            __RPC__in IGPMGPO3 * This,
                       GPMReportType gpmReportType,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *GenerateReportToFile )(
            __RPC__in IGPMGPO3 * This,
                       GPMReportType gpmReportType,
                       __RPC__in BSTR bstrTargetFilePath,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            __RPC__in IGPMGPO3 * This,
                       long lFlags,
                       __RPC__in_opt IGPMDomain *pIGPMDomain,
                                 __RPC__in VARIANT *pvarNewDisplayName,
                                 __RPC__in VARIANT *pvarMigrationTable,
                                 __RPC__in VARIANT *pvarGPMProgress,
                                  __RPC__out VARIANT *pvarGPMCancel,
                                __RPC__deref_out_opt IGPMResult **ppIGPMResult);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityDescriptor )(
            __RPC__in IGPMGPO3 * This,
                       long lFlags,
                       __RPC__in_opt IDispatch *pSD);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IGPMGPO3 * This,
                       long lFlags,
                                __RPC__deref_out_opt IDispatch **ppSD);
                               HRESULT ( STDMETHODCALLTYPE *IsACLConsistent )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__out VARIANT_BOOL *pvbConsistent);
                               HRESULT ( STDMETHODCALLTYPE *MakeACLConsistent )(
            __RPC__in IGPMGPO3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InfrastructureDC )(
            __RPC__in IGPMGPO3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InfrastructureDC )(
            __RPC__in IGPMGPO3 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InfrastructureFlags )(
            __RPC__in IGPMGPO3 * This,
                       DWORD dwFlags);
        END_INTERFACE
    } IGPMGPO3Vtbl;
    interface IGPMGPO3
    {
        CONST_VTBL struct IGPMGPO3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> put_DisplayName(This,newVal) )
    ( (This)->lpVtbl -> get_Path(This,pVal) )
    ( (This)->lpVtbl -> get_ID(This,pVal) )
    ( (This)->lpVtbl -> get_DomainName(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pDate) )
    ( (This)->lpVtbl -> get_ModificationTime(This,pDate) )
    ( (This)->lpVtbl -> get_UserDSVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerDSVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_UserSysvolVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> get_ComputerSysvolVersionNumber(This,pVal) )
    ( (This)->lpVtbl -> GetWMIFilter(This,ppIGPMWMIFilter) )
    ( (This)->lpVtbl -> SetWMIFilter(This,pIGPMWMIFilter) )
    ( (This)->lpVtbl -> SetUserEnabled(This,vbEnabled) )
    ( (This)->lpVtbl -> SetComputerEnabled(This,vbEnabled) )
    ( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
    ( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
    ( (This)->lpVtbl -> CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
    ( (This)->lpVtbl -> SetSecurityDescriptor(This,lFlags,pSD) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,lFlags,ppSD) )
    ( (This)->lpVtbl -> IsACLConsistent(This,pvbConsistent) )
    ( (This)->lpVtbl -> MakeACLConsistent(This) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> put_Description(This,newVal) )
    ( (This)->lpVtbl -> get_InfrastructureDC(This,pVal) )
    ( (This)->lpVtbl -> put_InfrastructureDC(This,newVal) )
    ( (This)->lpVtbl -> put_InfrastructureFlags(This,dwFlags) )
EXTERN_C const IID LIBID_GPMGMTLib;
EXTERN_C const CLSID CLSID_GPM;
class DECLSPEC_UUID("F5694708-88FE-4B35-BABF-E56162D5FBC8")
GPM;
EXTERN_C const CLSID CLSID_GPMDomain;
class DECLSPEC_UUID("710901BE-1050-4CB1-838A-C5CFF259E183")
GPMDomain;
EXTERN_C const CLSID CLSID_GPMSitesContainer;
class DECLSPEC_UUID("229F5C42-852C-4B30-945F-C522BE9BD386")
GPMSitesContainer;
EXTERN_C const CLSID CLSID_GPMBackupDir;
class DECLSPEC_UUID("FCE4A59D-0F21-4AFA-B859-E6D0C62CD10C")
GPMBackupDir;
EXTERN_C const CLSID CLSID_GPMSOM;
class DECLSPEC_UUID("32D93FAC-450E-44CF-829C-8B22FF6BDAE1")
GPMSOM;
EXTERN_C const CLSID CLSID_GPMSearchCriteria;
class DECLSPEC_UUID("17AACA26-5CE0-44FA-8CC0-5259E6483566")
GPMSearchCriteria;
EXTERN_C const CLSID CLSID_GPMPermission;
class DECLSPEC_UUID("5871A40A-E9C0-46EC-913E-944EF9225A94")
GPMPermission;
EXTERN_C const CLSID CLSID_GPMSecurityInfo;
class DECLSPEC_UUID("547A5E8F-9162-4516-A4DF-9DDB9686D846")
GPMSecurityInfo;
EXTERN_C const CLSID CLSID_GPMBackup;
class DECLSPEC_UUID("ED1A54B8-5EFA-482A-93C0-8AD86F0D68C3")
GPMBackup;
EXTERN_C const CLSID CLSID_GPMBackupCollection;
class DECLSPEC_UUID("EB8F035B-70DB-4A9F-9676-37C25994E9DC")
GPMBackupCollection;
EXTERN_C const CLSID CLSID_GPMSOMCollection;
class DECLSPEC_UUID("24C1F147-3720-4F5B-A9C3-06B4E4F931D2")
GPMSOMCollection;
EXTERN_C const CLSID CLSID_GPMWMIFilter;
class DECLSPEC_UUID("626745D8-0DEA-4062-BF60-CFC5B1CA1286")
GPMWMIFilter;
EXTERN_C const CLSID CLSID_GPMWMIFilterCollection;
class DECLSPEC_UUID("74DC6D28-E820-47D6-A0B8-F08D93D7FA33")
GPMWMIFilterCollection;
EXTERN_C const CLSID CLSID_GPMRSOP;
class DECLSPEC_UUID("489B0CAF-9EC2-4EB7-91F5-B6F71D43DA8C")
GPMRSOP;
EXTERN_C const CLSID CLSID_GPMGPO;
class DECLSPEC_UUID("D2CE2994-59B5-4064-B581-4D68486A16C4")
GPMGPO;
EXTERN_C const CLSID CLSID_GPMGPOCollection;
class DECLSPEC_UUID("7A057325-832D-4DE3-A41F-C780436A4E09")
GPMGPOCollection;
EXTERN_C const CLSID CLSID_GPMGPOLink;
class DECLSPEC_UUID("C1DF9880-5303-42C6-8A3C-0488E1BF7364")
GPMGPOLink;
EXTERN_C const CLSID CLSID_GPMGPOLinksCollection;
class DECLSPEC_UUID("F6ED581A-49A5-47E2-B771-FD8DC02B6259")
GPMGPOLinksCollection;
EXTERN_C const CLSID CLSID_GPMAsyncCancel;
class DECLSPEC_UUID("372796A9-76EC-479D-AD6C-556318ED5F9D")
GPMAsyncCancel;
EXTERN_C const CLSID CLSID_GPMStatusMsgCollection;
class DECLSPEC_UUID("2824E4BE-4BCC-4CAC-9E60-0E3ED7F12496")
GPMStatusMsgCollection;
EXTERN_C const CLSID CLSID_GPMStatusMessage;
class DECLSPEC_UUID("4B77CC94-D255-409B-BC62-370881715A19")
GPMStatusMessage;
EXTERN_C const CLSID CLSID_GPMTrustee;
class DECLSPEC_UUID("C54A700D-19B6-4211-BCB0-E8E2475E471E")
GPMTrustee;
EXTERN_C const CLSID CLSID_GPMClientSideExtension;
class DECLSPEC_UUID("C1A2E70E-659C-4B1A-940B-F88B0AF9C8A4")
GPMClientSideExtension;
EXTERN_C const CLSID CLSID_GPMCSECollection;
class DECLSPEC_UUID("CF92B828-2D44-4B61-B10A-B327AFD42DA8")
GPMCSECollection;
EXTERN_C const CLSID CLSID_GPMConstants;
class DECLSPEC_UUID("3855E880-CD9E-4D0C-9EAF-1579283A1888")
GPMConstants;
EXTERN_C const CLSID CLSID_GPMResult;
class DECLSPEC_UUID("92101AC0-9287-4206-A3B2-4BDB73D225F6")
GPMResult;
EXTERN_C const CLSID CLSID_GPMMapEntryCollection;
class DECLSPEC_UUID("0CF75D5B-A3A1-4C55-B4FE-9E149C41F66D")
GPMMapEntryCollection;
EXTERN_C const CLSID CLSID_GPMMapEntry;
class DECLSPEC_UUID("8C975253-5431-4471-B35D-0626C928258A")
GPMMapEntry;
EXTERN_C const CLSID CLSID_GPMMigrationTable;
class DECLSPEC_UUID("55AF4043-2A06-4F72-ABEF-631B44079C76")
GPMMigrationTable;
EXTERN_C const CLSID CLSID_GPMBackupDirEx;
class DECLSPEC_UUID("E8C0988A-CF03-4c5b-8BE2-2AA9AD32AADA")
GPMBackupDirEx;
EXTERN_C const CLSID CLSID_GPMStarterGPOBackupCollection;
class DECLSPEC_UUID("E75EA59D-1AEB-4cb5-A78A-281DAA582406")
GPMStarterGPOBackupCollection;
EXTERN_C const CLSID CLSID_GPMStarterGPOBackup;
class DECLSPEC_UUID("389E400A-D8EF-455b-A861-5F9CA34A6A02")
GPMStarterGPOBackup;
EXTERN_C const CLSID CLSID_GPMTemplate;
class DECLSPEC_UUID("ECF1D454-71DA-4e2f-A8C0-8185465911D9")
GPMTemplate;
EXTERN_C const CLSID CLSID_GPMStarterGPOCollection;
class DECLSPEC_UUID("82F8AA8B-49BA-43b2-956E-3397F9B94C3A")
GPMStarterGPOCollection;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0042_v0_0_s_ifspec;
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
