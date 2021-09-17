#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICOMAdminCatalog ICOMAdminCatalog;
typedef interface ICOMAdminCatalog2 ICOMAdminCatalog2;
typedef interface ICatalogObject ICatalogObject;
typedef interface ICatalogCollection ICatalogCollection;
typedef class COMAdminCatalog COMAdminCatalog;
typedef class COMAdminCatalogObject COMAdminCatalogObject;
typedef class COMAdminCatalogCollection COMAdminCatalogCollection;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <objbase.h>
       
#pragma warning(push)
#pragma warning(disable:4668)
       
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
       
       
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICOMAdminCatalog;
    typedef struct ICOMAdminCatalogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICOMAdminCatalog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICOMAdminCatalog * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICOMAdminCatalog * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICOMAdminCatalog * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICOMAdminCatalog * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetCollection )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrCollName,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrCatalogServerName,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in ICOMAdminCatalog * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in ICOMAdminCatalog * This,
                                __RPC__out long *plMinorVersion);
                               HRESULT ( STDMETHODCALLTYPE *GetCollectionByQuery )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrCollName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarQuery,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE *ImportComponent )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__in BSTR bstrCLSIDOrProgID);
                               HRESULT ( STDMETHODCALLTYPE *InstallComponent )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__in BSTR bstrDLL,
                       __RPC__in BSTR bstrTLB,
                       __RPC__in BSTR bstrPSDLL);
                               HRESULT ( STDMETHODCALLTYPE *ShutdownApplication )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIDOrName);
                               HRESULT ( STDMETHODCALLTYPE *ExportApplication )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__in BSTR bstrApplicationFile,
                       long lOptions);
                               HRESULT ( STDMETHODCALLTYPE *InstallApplication )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplicationFile,
                                 __RPC__in BSTR bstrDestinationDirectory,
                                 long lOptions,
                                 __RPC__in BSTR bstrUserId,
                                 __RPC__in BSTR bstrPassword,
                                 __RPC__in BSTR bstrRSN);
                               HRESULT ( STDMETHODCALLTYPE *StopRouter )(
            __RPC__in ICOMAdminCatalog * This);
                               HRESULT ( STDMETHODCALLTYPE *RefreshRouter )(
            __RPC__in ICOMAdminCatalog * This);
                               HRESULT ( STDMETHODCALLTYPE *StartRouter )(
            __RPC__in ICOMAdminCatalog * This);
                               HRESULT ( STDMETHODCALLTYPE *Reserved1 )(
            __RPC__in ICOMAdminCatalog * This);
                               HRESULT ( STDMETHODCALLTYPE *Reserved2 )(
            __RPC__in ICOMAdminCatalog * This);
                               HRESULT ( STDMETHODCALLTYPE *InstallMultipleComponents )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarFileNames,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarCLSIDs);
                               HRESULT ( STDMETHODCALLTYPE *GetMultipleComponentsInfo )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIdOrName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarFileNames,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarCLSIDs,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarClassNames,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarFileFlags,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarComponentFlags);
                               HRESULT ( STDMETHODCALLTYPE *RefreshComponents )(
            __RPC__in ICOMAdminCatalog * This);
                               HRESULT ( STDMETHODCALLTYPE *BackupREGDB )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrBackupFilePath);
                               HRESULT ( STDMETHODCALLTYPE *RestoreREGDB )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrBackupFilePath);
                               HRESULT ( STDMETHODCALLTYPE *QueryApplicationFile )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplicationFile,
                        __RPC__deref_out_opt BSTR *pbstrApplicationName,
                        __RPC__deref_out_opt BSTR *pbstrApplicationDescription,
                        __RPC__out VARIANT_BOOL *pbHasUsers,
                        __RPC__out VARIANT_BOOL *pbIsProxy,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarFileNames);
                               HRESULT ( STDMETHODCALLTYPE *StartApplication )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIdOrName);
                               HRESULT ( STDMETHODCALLTYPE *ServiceCheck )(
            __RPC__in ICOMAdminCatalog * This,
                       long lService,
                                __RPC__out long *plStatus);
                               HRESULT ( STDMETHODCALLTYPE *InstallMultipleEventClasses )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIdOrName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarFileNames,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarCLSIDS);
                               HRESULT ( STDMETHODCALLTYPE *InstallEventClass )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrApplIdOrName,
                       __RPC__in BSTR bstrDLL,
                       __RPC__in BSTR bstrTLB,
                       __RPC__in BSTR bstrPSDLL);
                               HRESULT ( STDMETHODCALLTYPE *GetEventClassesForIID )(
            __RPC__in ICOMAdminCatalog * This,
                       __RPC__in BSTR bstrIID,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarCLSIDs,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarProgIDs,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarDescriptions);
        END_INTERFACE
    } ICOMAdminCatalogVtbl;
    interface ICOMAdminCatalog
    {
        CONST_VTBL struct ICOMAdminCatalogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetCollection(This,bstrCollName,ppCatalogCollection) )
    ( (This)->lpVtbl -> Connect(This,bstrCatalogServerName,ppCatalogCollection) )
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
    ( (This)->lpVtbl -> GetCollectionByQuery(This,bstrCollName,ppsaVarQuery,ppCatalogCollection) )
    ( (This)->lpVtbl -> ImportComponent(This,bstrApplIDOrName,bstrCLSIDOrProgID) )
    ( (This)->lpVtbl -> InstallComponent(This,bstrApplIDOrName,bstrDLL,bstrTLB,bstrPSDLL) )
    ( (This)->lpVtbl -> ShutdownApplication(This,bstrApplIDOrName) )
    ( (This)->lpVtbl -> ExportApplication(This,bstrApplIDOrName,bstrApplicationFile,lOptions) )
    ( (This)->lpVtbl -> InstallApplication(This,bstrApplicationFile,bstrDestinationDirectory,lOptions,bstrUserId,bstrPassword,bstrRSN) )
    ( (This)->lpVtbl -> StopRouter(This) )
    ( (This)->lpVtbl -> RefreshRouter(This) )
    ( (This)->lpVtbl -> StartRouter(This) )
    ( (This)->lpVtbl -> Reserved1(This) )
    ( (This)->lpVtbl -> Reserved2(This) )
    ( (This)->lpVtbl -> InstallMultipleComponents(This,bstrApplIDOrName,ppsaVarFileNames,ppsaVarCLSIDs) )
    ( (This)->lpVtbl -> GetMultipleComponentsInfo(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDs,ppsaVarClassNames,ppsaVarFileFlags,ppsaVarComponentFlags) )
    ( (This)->lpVtbl -> RefreshComponents(This) )
    ( (This)->lpVtbl -> BackupREGDB(This,bstrBackupFilePath) )
    ( (This)->lpVtbl -> RestoreREGDB(This,bstrBackupFilePath) )
    ( (This)->lpVtbl -> QueryApplicationFile(This,bstrApplicationFile,pbstrApplicationName,pbstrApplicationDescription,pbHasUsers,pbIsProxy,ppsaVarFileNames) )
    ( (This)->lpVtbl -> StartApplication(This,bstrApplIdOrName) )
    ( (This)->lpVtbl -> ServiceCheck(This,lService,plStatus) )
    ( (This)->lpVtbl -> InstallMultipleEventClasses(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDS) )
    ( (This)->lpVtbl -> InstallEventClass(This,bstrApplIdOrName,bstrDLL,bstrTLB,bstrPSDLL) )
    ( (This)->lpVtbl -> GetEventClassesForIID(This,bstrIID,ppsaVarCLSIDs,ppsaVarProgIDs,ppsaVarDescriptions) )
typedef
enum COMAdminInUse
    {
        COMAdminNotInUse = 0,
        COMAdminInUseByCatalog = 0x1,
        COMAdminInUseByRegistryUnknown = 0x2,
        COMAdminInUseByRegistryProxyStub = 0x3,
        COMAdminInUseByRegistryTypeLib = 0x4,
        COMAdminInUseByRegistryClsid = 0x5
    } COMAdminInUse;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ICOMAdminCatalog2;
    typedef struct ICOMAdminCatalog2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICOMAdminCatalog2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICOMAdminCatalog2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICOMAdminCatalog2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICOMAdminCatalog2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICOMAdminCatalog2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetCollection )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrCollName,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrCatalogServerName,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__out long *plMinorVersion);
                               HRESULT ( STDMETHODCALLTYPE *GetCollectionByQuery )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrCollName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarQuery,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE *ImportComponent )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__in BSTR bstrCLSIDOrProgID);
                               HRESULT ( STDMETHODCALLTYPE *InstallComponent )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__in BSTR bstrDLL,
                       __RPC__in BSTR bstrTLB,
                       __RPC__in BSTR bstrPSDLL);
                               HRESULT ( STDMETHODCALLTYPE *ShutdownApplication )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIDOrName);
                               HRESULT ( STDMETHODCALLTYPE *ExportApplication )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__in BSTR bstrApplicationFile,
                       long lOptions);
                               HRESULT ( STDMETHODCALLTYPE *InstallApplication )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationFile,
                                 __RPC__in BSTR bstrDestinationDirectory,
                                 long lOptions,
                                 __RPC__in BSTR bstrUserId,
                                 __RPC__in BSTR bstrPassword,
                                 __RPC__in BSTR bstrRSN);
                               HRESULT ( STDMETHODCALLTYPE *StopRouter )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RefreshRouter )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *StartRouter )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Reserved1 )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Reserved2 )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *InstallMultipleComponents )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIDOrName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarFileNames,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarCLSIDs);
                               HRESULT ( STDMETHODCALLTYPE *GetMultipleComponentsInfo )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIdOrName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarFileNames,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarCLSIDs,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarClassNames,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarFileFlags,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarComponentFlags);
                               HRESULT ( STDMETHODCALLTYPE *RefreshComponents )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *BackupREGDB )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrBackupFilePath);
                               HRESULT ( STDMETHODCALLTYPE *RestoreREGDB )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrBackupFilePath);
                               HRESULT ( STDMETHODCALLTYPE *QueryApplicationFile )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationFile,
                        __RPC__deref_out_opt BSTR *pbstrApplicationName,
                        __RPC__deref_out_opt BSTR *pbstrApplicationDescription,
                        __RPC__out VARIANT_BOOL *pbHasUsers,
                        __RPC__out VARIANT_BOOL *pbIsProxy,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarFileNames);
                               HRESULT ( STDMETHODCALLTYPE *StartApplication )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIdOrName);
                               HRESULT ( STDMETHODCALLTYPE *ServiceCheck )(
            __RPC__in ICOMAdminCatalog2 * This,
                       long lService,
                                __RPC__out long *plStatus);
                               HRESULT ( STDMETHODCALLTYPE *InstallMultipleEventClasses )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIdOrName,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarFileNames,
                       __RPC__deref_in_opt SAFEARRAY * *ppsaVarCLSIDS);
                               HRESULT ( STDMETHODCALLTYPE *InstallEventClass )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplIdOrName,
                       __RPC__in BSTR bstrDLL,
                       __RPC__in BSTR bstrTLB,
                       __RPC__in BSTR bstrPSDLL);
                               HRESULT ( STDMETHODCALLTYPE *GetEventClassesForIID )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrIID,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarCLSIDs,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarProgIDs,
                        __RPC__deref_out_opt SAFEARRAY * *ppsaVarDescriptions);
                               HRESULT ( STDMETHODCALLTYPE *GetCollectionByQuery2 )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrCollectionName,
                       __RPC__in VARIANT *pVarQueryStrings,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE *GetApplicationInstanceIDFromProcessID )(
            __RPC__in ICOMAdminCatalog2 * This,
                       long lProcessID,
                                __RPC__deref_out_opt BSTR *pbstrApplicationInstanceID);
                               HRESULT ( STDMETHODCALLTYPE *ShutdownApplicationInstances )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in VARIANT *pVarApplicationInstanceID);
                               HRESULT ( STDMETHODCALLTYPE *PauseApplicationInstances )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in VARIANT *pVarApplicationInstanceID);
                               HRESULT ( STDMETHODCALLTYPE *ResumeApplicationInstances )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in VARIANT *pVarApplicationInstanceID);
                               HRESULT ( STDMETHODCALLTYPE *RecycleApplicationInstances )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in VARIANT *pVarApplicationInstanceID,
                       long lReasonCode);
                               HRESULT ( STDMETHODCALLTYPE *AreApplicationInstancesPaused )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in VARIANT *pVarApplicationInstanceID,
                                __RPC__out VARIANT_BOOL *pVarBoolPaused);
                               HRESULT ( STDMETHODCALLTYPE *DumpApplicationInstance )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationInstanceID,
                       __RPC__in BSTR bstrDirectory,
                       long lMaxImages,
                                __RPC__deref_out_opt BSTR *pbstrDumpFile);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsApplicationInstanceDumpSupported )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__out VARIANT_BOOL *pVarBoolDumpSupported);
                               HRESULT ( STDMETHODCALLTYPE *CreateServiceForApplication )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName,
                       __RPC__in BSTR bstrServiceName,
                       __RPC__in BSTR bstrStartType,
                       __RPC__in BSTR bstrErrorControl,
                       __RPC__in BSTR bstrDependencies,
                       __RPC__in BSTR bstrRunAs,
                       __RPC__in BSTR bstrPassword,
                       VARIANT_BOOL bDesktopOk);
                               HRESULT ( STDMETHODCALLTYPE *DeleteServiceForApplication )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName);
                               HRESULT ( STDMETHODCALLTYPE *GetPartitionID )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName,
                                __RPC__deref_out_opt BSTR *pbstrPartitionID);
                               HRESULT ( STDMETHODCALLTYPE *GetPartitionName )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName,
                                __RPC__deref_out_opt BSTR *pbstrPartitionName);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPartition )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrPartitionIDOrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPartitionID )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPartitionID);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPartitionName )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPartitionName);
                                        HRESULT ( STDMETHODCALLTYPE *get_GlobalPartitionID )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__deref_out_opt BSTR *pbstrGlobalPartitionID);
                               HRESULT ( STDMETHODCALLTYPE *FlushPartitionCache )(
            __RPC__in ICOMAdminCatalog2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CopyApplications )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrSourcePartitionIDOrName,
                       __RPC__in VARIANT *pVarApplicationID,
                       __RPC__in BSTR bstrDestinationPartitionIDOrName);
                               HRESULT ( STDMETHODCALLTYPE *CopyComponents )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrSourceApplicationIDOrName,
                       __RPC__in VARIANT *pVarCLSIDOrProgID,
                       __RPC__in BSTR bstrDestinationApplicationIDOrName);
                               HRESULT ( STDMETHODCALLTYPE *MoveComponents )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrSourceApplicationIDOrName,
                       __RPC__in VARIANT *pVarCLSIDOrProgID,
                       __RPC__in BSTR bstrDestinationApplicationIDOrName);
                               HRESULT ( STDMETHODCALLTYPE *AliasComponent )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrSrcApplicationIDOrName,
                       __RPC__in BSTR bstrCLSIDOrProgID,
                       __RPC__in BSTR bstrDestApplicationIDOrName,
                       __RPC__in BSTR bstrNewProgId,
                       __RPC__in BSTR bstrNewClsid);
                               HRESULT ( STDMETHODCALLTYPE *IsSafeToDelete )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrDllName,
                                __RPC__out COMAdminInUse *pCOMAdminInUse);
                               HRESULT ( STDMETHODCALLTYPE *ImportUnconfiguredComponents )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName,
                       __RPC__in VARIANT *pVarCLSIDOrProgID,
                                 __RPC__in VARIANT *pVarComponentType);
                               HRESULT ( STDMETHODCALLTYPE *PromoteUnconfiguredComponents )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName,
                       __RPC__in VARIANT *pVarCLSIDOrProgID,
                                 __RPC__in VARIANT *pVarComponentType);
                               HRESULT ( STDMETHODCALLTYPE *ImportComponents )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationIDOrName,
                       __RPC__in VARIANT *pVarCLSIDOrProgID,
                                 __RPC__in VARIANT *pVarComponentType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Is64BitCatalogServer )(
            __RPC__in ICOMAdminCatalog2 * This,
                                __RPC__out VARIANT_BOOL *pbIs64Bit);
                               HRESULT ( STDMETHODCALLTYPE *ExportPartition )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrPartitionIDOrName,
                       __RPC__in BSTR bstrPartitionFileName,
                       long lOptions);
                               HRESULT ( STDMETHODCALLTYPE *InstallPartition )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrFileName,
                       __RPC__in BSTR bstrDestDirectory,
                       long lOptions,
                       __RPC__in BSTR bstrUserID,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrRSN);
                               HRESULT ( STDMETHODCALLTYPE *QueryApplicationFile2 )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrApplicationFile,
                                __RPC__deref_out_opt IDispatch **ppFilesForImport);
                               HRESULT ( STDMETHODCALLTYPE *GetComponentVersionCount )(
            __RPC__in ICOMAdminCatalog2 * This,
                       __RPC__in BSTR bstrCLSIDOrProgID,
                                __RPC__out long *plVersionCount);
        END_INTERFACE
    } ICOMAdminCatalog2Vtbl;
    interface ICOMAdminCatalog2
    {
        CONST_VTBL struct ICOMAdminCatalog2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetCollection(This,bstrCollName,ppCatalogCollection) )
    ( (This)->lpVtbl -> Connect(This,bstrCatalogServerName,ppCatalogCollection) )
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
    ( (This)->lpVtbl -> GetCollectionByQuery(This,bstrCollName,ppsaVarQuery,ppCatalogCollection) )
    ( (This)->lpVtbl -> ImportComponent(This,bstrApplIDOrName,bstrCLSIDOrProgID) )
    ( (This)->lpVtbl -> InstallComponent(This,bstrApplIDOrName,bstrDLL,bstrTLB,bstrPSDLL) )
    ( (This)->lpVtbl -> ShutdownApplication(This,bstrApplIDOrName) )
    ( (This)->lpVtbl -> ExportApplication(This,bstrApplIDOrName,bstrApplicationFile,lOptions) )
    ( (This)->lpVtbl -> InstallApplication(This,bstrApplicationFile,bstrDestinationDirectory,lOptions,bstrUserId,bstrPassword,bstrRSN) )
    ( (This)->lpVtbl -> StopRouter(This) )
    ( (This)->lpVtbl -> RefreshRouter(This) )
    ( (This)->lpVtbl -> StartRouter(This) )
    ( (This)->lpVtbl -> Reserved1(This) )
    ( (This)->lpVtbl -> Reserved2(This) )
    ( (This)->lpVtbl -> InstallMultipleComponents(This,bstrApplIDOrName,ppsaVarFileNames,ppsaVarCLSIDs) )
    ( (This)->lpVtbl -> GetMultipleComponentsInfo(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDs,ppsaVarClassNames,ppsaVarFileFlags,ppsaVarComponentFlags) )
    ( (This)->lpVtbl -> RefreshComponents(This) )
    ( (This)->lpVtbl -> BackupREGDB(This,bstrBackupFilePath) )
    ( (This)->lpVtbl -> RestoreREGDB(This,bstrBackupFilePath) )
    ( (This)->lpVtbl -> QueryApplicationFile(This,bstrApplicationFile,pbstrApplicationName,pbstrApplicationDescription,pbHasUsers,pbIsProxy,ppsaVarFileNames) )
    ( (This)->lpVtbl -> StartApplication(This,bstrApplIdOrName) )
    ( (This)->lpVtbl -> ServiceCheck(This,lService,plStatus) )
    ( (This)->lpVtbl -> InstallMultipleEventClasses(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDS) )
    ( (This)->lpVtbl -> InstallEventClass(This,bstrApplIdOrName,bstrDLL,bstrTLB,bstrPSDLL) )
    ( (This)->lpVtbl -> GetEventClassesForIID(This,bstrIID,ppsaVarCLSIDs,ppsaVarProgIDs,ppsaVarDescriptions) )
    ( (This)->lpVtbl -> GetCollectionByQuery2(This,bstrCollectionName,pVarQueryStrings,ppCatalogCollection) )
    ( (This)->lpVtbl -> GetApplicationInstanceIDFromProcessID(This,lProcessID,pbstrApplicationInstanceID) )
    ( (This)->lpVtbl -> ShutdownApplicationInstances(This,pVarApplicationInstanceID) )
    ( (This)->lpVtbl -> PauseApplicationInstances(This,pVarApplicationInstanceID) )
    ( (This)->lpVtbl -> ResumeApplicationInstances(This,pVarApplicationInstanceID) )
    ( (This)->lpVtbl -> RecycleApplicationInstances(This,pVarApplicationInstanceID,lReasonCode) )
    ( (This)->lpVtbl -> AreApplicationInstancesPaused(This,pVarApplicationInstanceID,pVarBoolPaused) )
    ( (This)->lpVtbl -> DumpApplicationInstance(This,bstrApplicationInstanceID,bstrDirectory,lMaxImages,pbstrDumpFile) )
    ( (This)->lpVtbl -> get_IsApplicationInstanceDumpSupported(This,pVarBoolDumpSupported) )
    ( (This)->lpVtbl -> CreateServiceForApplication(This,bstrApplicationIDOrName,bstrServiceName,bstrStartType,bstrErrorControl,bstrDependencies,bstrRunAs,bstrPassword,bDesktopOk) )
    ( (This)->lpVtbl -> DeleteServiceForApplication(This,bstrApplicationIDOrName) )
    ( (This)->lpVtbl -> GetPartitionID(This,bstrApplicationIDOrName,pbstrPartitionID) )
    ( (This)->lpVtbl -> GetPartitionName(This,bstrApplicationIDOrName,pbstrPartitionName) )
    ( (This)->lpVtbl -> put_CurrentPartition(This,bstrPartitionIDOrName) )
    ( (This)->lpVtbl -> get_CurrentPartitionID(This,pbstrPartitionID) )
    ( (This)->lpVtbl -> get_CurrentPartitionName(This,pbstrPartitionName) )
    ( (This)->lpVtbl -> get_GlobalPartitionID(This,pbstrGlobalPartitionID) )
    ( (This)->lpVtbl -> FlushPartitionCache(This) )
    ( (This)->lpVtbl -> CopyApplications(This,bstrSourcePartitionIDOrName,pVarApplicationID,bstrDestinationPartitionIDOrName) )
    ( (This)->lpVtbl -> CopyComponents(This,bstrSourceApplicationIDOrName,pVarCLSIDOrProgID,bstrDestinationApplicationIDOrName) )
    ( (This)->lpVtbl -> MoveComponents(This,bstrSourceApplicationIDOrName,pVarCLSIDOrProgID,bstrDestinationApplicationIDOrName) )
    ( (This)->lpVtbl -> AliasComponent(This,bstrSrcApplicationIDOrName,bstrCLSIDOrProgID,bstrDestApplicationIDOrName,bstrNewProgId,bstrNewClsid) )
    ( (This)->lpVtbl -> IsSafeToDelete(This,bstrDllName,pCOMAdminInUse) )
    ( (This)->lpVtbl -> ImportUnconfiguredComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType) )
    ( (This)->lpVtbl -> PromoteUnconfiguredComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType) )
    ( (This)->lpVtbl -> ImportComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType) )
    ( (This)->lpVtbl -> get_Is64BitCatalogServer(This,pbIs64Bit) )
    ( (This)->lpVtbl -> ExportPartition(This,bstrPartitionIDOrName,bstrPartitionFileName,lOptions) )
    ( (This)->lpVtbl -> InstallPartition(This,bstrFileName,bstrDestDirectory,lOptions,bstrUserID,bstrPassword,bstrRSN) )
    ( (This)->lpVtbl -> QueryApplicationFile2(This,bstrApplicationFile,ppFilesForImport) )
    ( (This)->lpVtbl -> GetComponentVersionCount(This,bstrCLSIDOrProgID,plVersionCount) )
EXTERN_C const IID IID_ICatalogObject;
    typedef struct ICatalogObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICatalogObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICatalogObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICatalogObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICatalogObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICatalogObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICatalogObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICatalogObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ICatalogObject * This,
                       __RPC__in BSTR bstrPropName,
                                __RPC__out VARIANT *pvarRetVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ICatalogObject * This,
                       __RPC__in BSTR bstrPropName,
                       VARIANT val);
                                        HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in ICatalogObject * This,
                                __RPC__out VARIANT *pvarRetVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ICatalogObject * This,
                                __RPC__out VARIANT *pvarRetVal);
                               HRESULT ( STDMETHODCALLTYPE *IsPropertyReadOnly )(
            __RPC__in ICatalogObject * This,
                       __RPC__in BSTR bstrPropName,
                                __RPC__out VARIANT_BOOL *pbRetVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Valid )(
            __RPC__in ICatalogObject * This,
                                __RPC__out VARIANT_BOOL *pbRetVal);
                               HRESULT ( STDMETHODCALLTYPE *IsPropertyWriteOnly )(
            __RPC__in ICatalogObject * This,
                       __RPC__in BSTR bstrPropName,
                                __RPC__out VARIANT_BOOL *pbRetVal);
        END_INTERFACE
    } ICatalogObjectVtbl;
    interface ICatalogObject
    {
        CONST_VTBL struct ICatalogObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,bstrPropName,pvarRetVal) )
    ( (This)->lpVtbl -> put_Value(This,bstrPropName,val) )
    ( (This)->lpVtbl -> get_Key(This,pvarRetVal) )
    ( (This)->lpVtbl -> get_Name(This,pvarRetVal) )
    ( (This)->lpVtbl -> IsPropertyReadOnly(This,bstrPropName,pbRetVal) )
    ( (This)->lpVtbl -> get_Valid(This,pbRetVal) )
    ( (This)->lpVtbl -> IsPropertyWriteOnly(This,bstrPropName,pbRetVal) )
EXTERN_C const IID IID_ICatalogCollection;
    typedef struct ICatalogCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICatalogCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICatalogCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICatalogCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICatalogCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICatalogCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICatalogCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICatalogCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICatalogCollection * This,
                                __RPC__deref_out_opt IUnknown **ppEnumVariant);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ICatalogCollection * This,
                       long lIndex,
                                __RPC__deref_out_opt IDispatch **ppCatalogObject);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out long *plObjectCount);
                           HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICatalogCollection * This,
                       long lIndex);
                           HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICatalogCollection * This,
                                __RPC__deref_out_opt IDispatch **ppCatalogObject);
                               HRESULT ( STDMETHODCALLTYPE *Populate )(
            __RPC__in ICatalogCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *SaveChanges )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out long *pcChanges);
                               HRESULT ( STDMETHODCALLTYPE *GetCollection )(
            __RPC__in ICatalogCollection * This,
                       __RPC__in BSTR bstrCollName,
                       VARIANT varObjectKey,
                                __RPC__deref_out_opt IDispatch **ppCatalogCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out VARIANT *pVarNamel);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddEnabled )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out VARIANT_BOOL *pVarBool);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemoveEnabled )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out VARIANT_BOOL *pVarBool);
                               HRESULT ( STDMETHODCALLTYPE *GetUtilInterface )(
            __RPC__in ICatalogCollection * This,
                                __RPC__deref_out_opt IDispatch **ppIDispatch);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataStoreMajorVersion )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataStoreMinorVersion )(
            __RPC__in ICatalogCollection * This,
                                __RPC__out long *plMinorVersionl);
                               HRESULT ( STDMETHODCALLTYPE *PopulateByKey )(
            __RPC__in ICatalogCollection * This,
                       __RPC__in SAFEARRAY * psaKeys);
                               HRESULT ( STDMETHODCALLTYPE *PopulateByQuery )(
            __RPC__in ICatalogCollection * This,
                       __RPC__in BSTR bstrQueryString,
                       long lQueryType);
        END_INTERFACE
    } ICatalogCollectionVtbl;
    interface ICatalogCollection
    {
        CONST_VTBL struct ICatalogCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVariant) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,ppCatalogObject) )
    ( (This)->lpVtbl -> get_Count(This,plObjectCount) )
    ( (This)->lpVtbl -> Remove(This,lIndex) )
    ( (This)->lpVtbl -> Add(This,ppCatalogObject) )
    ( (This)->lpVtbl -> Populate(This) )
    ( (This)->lpVtbl -> SaveChanges(This,pcChanges) )
    ( (This)->lpVtbl -> GetCollection(This,bstrCollName,varObjectKey,ppCatalogCollection) )
    ( (This)->lpVtbl -> get_Name(This,pVarNamel) )
    ( (This)->lpVtbl -> get_AddEnabled(This,pVarBool) )
    ( (This)->lpVtbl -> get_RemoveEnabled(This,pVarBool) )
    ( (This)->lpVtbl -> GetUtilInterface(This,ppIDispatch) )
    ( (This)->lpVtbl -> get_DataStoreMajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_DataStoreMinorVersion(This,plMinorVersionl) )
    ( (This)->lpVtbl -> PopulateByKey(This,psaKeys) )
    ( (This)->lpVtbl -> PopulateByQuery(This,bstrQueryString,lQueryType) )
typedef
enum COMAdminComponentType
    {
        COMAdmin32BitComponent = 0x1,
        COMAdmin64BitComponent = 0x2
    } COMAdminComponentType;
typedef
enum COMAdminApplicationInstallOptions
    {
        COMAdminInstallNoUsers = 0,
        COMAdminInstallUsers = 1,
        COMAdminInstallForceOverwriteOfFiles = 2
    } COMAdminApplicationInstallOptions;
typedef
enum COMAdminApplicationExportOptions
    {
        COMAdminExportNoUsers = 0,
        COMAdminExportUsers = 1,
        COMAdminExportApplicationProxy = 2,
        COMAdminExportForceOverwriteOfFiles = 4,
        COMAdminExportIn10Format = 16
    } COMAdminApplicationExportOptions;
typedef
enum COMAdminThreadingModels
    {
        COMAdminThreadingModelApartment = 0,
        COMAdminThreadingModelFree = 1,
        COMAdminThreadingModelMain = 2,
        COMAdminThreadingModelBoth = 3,
        COMAdminThreadingModelNeutral = 4,
        COMAdminThreadingModelNotSpecified = 5
    } COMAdminThreadingModels;
typedef
enum COMAdminTransactionOptions
    {
        COMAdminTransactionIgnored = 0,
        COMAdminTransactionNone = 1,
        COMAdminTransactionSupported = 2,
        COMAdminTransactionRequired = 3,
        COMAdminTransactionRequiresNew = 4
    } COMAdminTransactionOptions;
typedef
enum COMAdminTxIsolationLevelOptions
    {
        COMAdminTxIsolationLevelAny = 0,
        COMAdminTxIsolationLevelReadUnCommitted = ( COMAdminTxIsolationLevelAny + 1 ) ,
        COMAdminTxIsolationLevelReadCommitted = ( COMAdminTxIsolationLevelReadUnCommitted + 1 ) ,
        COMAdminTxIsolationLevelRepeatableRead = ( COMAdminTxIsolationLevelReadCommitted + 1 ) ,
        COMAdminTxIsolationLevelSerializable = ( COMAdminTxIsolationLevelRepeatableRead + 1 )
    } COMAdminTxIsolationLevelOptions;
typedef
enum COMAdminSynchronizationOptions
    {
        COMAdminSynchronizationIgnored = 0,
        COMAdminSynchronizationNone = 1,
        COMAdminSynchronizationSupported = 2,
        COMAdminSynchronizationRequired = 3,
        COMAdminSynchronizationRequiresNew = 4
    } COMAdminSynchronizationOptions;
typedef
enum COMAdminActivationOptions
    {
        COMAdminActivationInproc = 0,
        COMAdminActivationLocal = 1
    } COMAdminActivationOptions;
typedef
enum COMAdminAccessChecksLevelOptions
    {
        COMAdminAccessChecksApplicationLevel = 0,
        COMAdminAccessChecksApplicationComponentLevel = 1
    } COMAdminAccessChecksLevelOptions;
typedef
enum COMAdminAuthenticationLevelOptions
    {
        COMAdminAuthenticationDefault = 0,
        COMAdminAuthenticationNone = 1,
        COMAdminAuthenticationConnect = 2,
        COMAdminAuthenticationCall = 3,
        COMAdminAuthenticationPacket = 4,
        COMAdminAuthenticationIntegrity = 5,
        COMAdminAuthenticationPrivacy = 6
    } COMAdminAuthenticationLevelOptions;
typedef
enum COMAdminImpersonationLevelOptions
    {
        COMAdminImpersonationAnonymous = 1,
        COMAdminImpersonationIdentify = 2,
        COMAdminImpersonationImpersonate = 3,
        COMAdminImpersonationDelegate = 4
    } COMAdminImpersonationLevelOptions;
typedef
enum COMAdminAuthenticationCapabilitiesOptions
    {
        COMAdminAuthenticationCapabilitiesNone = 0,
        COMAdminAuthenticationCapabilitiesSecureReference = 0x2,
        COMAdminAuthenticationCapabilitiesStaticCloaking = 0x20,
        COMAdminAuthenticationCapabilitiesDynamicCloaking = 0x40
    } COMAdminAuthenticationCapabilitiesOptions;
typedef
enum COMAdminOS
    {
        COMAdminOSNotInitialized = 0,
        COMAdminOSWindows3_1 = 1,
        COMAdminOSWindows9x = 2,
        COMAdminOSWindows2000 = 3,
        COMAdminOSWindows2000AdvancedServer = 4,
        COMAdminOSWindows2000Unknown = 5,
        COMAdminOSUnknown = 6,
        COMAdminOSWindowsXPPersonal = 11,
        COMAdminOSWindowsXPProfessional = 12,
        COMAdminOSWindowsNETStandardServer = 13,
        COMAdminOSWindowsNETEnterpriseServer = 14,
        COMAdminOSWindowsNETDatacenterServer = 15,
        COMAdminOSWindowsNETWebServer = 16,
        COMAdminOSWindowsLonghornPersonal = 17,
        COMAdminOSWindowsLonghornProfessional = 18,
        COMAdminOSWindowsLonghornStandardServer = 19,
        COMAdminOSWindowsLonghornEnterpriseServer = 20,
        COMAdminOSWindowsLonghornDatacenterServer = 21,
        COMAdminOSWindowsLonghornWebServer = 22,
        COMAdminOSWindows7Personal = 23,
        COMAdminOSWindows7Professional = 24,
        COMAdminOSWindows7StandardServer = 25,
        COMAdminOSWindows7EnterpriseServer = 26,
        COMAdminOSWindows7DatacenterServer = 27,
        COMAdminOSWindows7WebServer = 28,
        COMAdminOSWindows8Personal = 29,
        COMAdminOSWindows8Professional = 30,
        COMAdminOSWindows8StandardServer = 31,
        COMAdminOSWindows8EnterpriseServer = 32,
        COMAdminOSWindows8DatacenterServer = 33,
        COMAdminOSWindows8WebServer = 34,
        COMAdminOSWindowsBluePersonal = 35,
        COMAdminOSWindowsBlueProfessional = 36,
        COMAdminOSWindowsBlueStandardServer = 37,
        COMAdminOSWindowsBlueEnterpriseServer = 38,
        COMAdminOSWindowsBlueDatacenterServer = 39,
        COMAdminOSWindowsBlueWebServer = 40
    } COMAdminOS;
typedef
enum COMAdminServiceOptions
    {
        COMAdminServiceLoadBalanceRouter = 1
    } COMAdminServiceOptions;
typedef
enum COMAdminServiceStatusOptions
    {
        COMAdminServiceStopped = 0,
        COMAdminServiceStartPending = ( COMAdminServiceStopped + 1 ) ,
        COMAdminServiceStopPending = ( COMAdminServiceStartPending + 1 ) ,
        COMAdminServiceRunning = ( COMAdminServiceStopPending + 1 ) ,
        COMAdminServiceContinuePending = ( COMAdminServiceRunning + 1 ) ,
        COMAdminServicePausePending = ( COMAdminServiceContinuePending + 1 ) ,
        COMAdminServicePaused = ( COMAdminServicePausePending + 1 ) ,
        COMAdminServiceUnknownState = ( COMAdminServicePaused + 1 )
    } COMAdminServiceStatusOptions;
typedef
enum COMAdminQCMessageAuthenticateOptions
    {
        COMAdminQCMessageAuthenticateSecureApps = 0,
        COMAdminQCMessageAuthenticateOff = 1,
        COMAdminQCMessageAuthenticateOn = 2
    } COMAdminQCMessageAuthenticateOptions;
typedef
enum COMAdminFileFlags
    {
        COMAdminFileFlagLoadable = 0x1,
        COMAdminFileFlagCOM = 0x2,
        COMAdminFileFlagContainsPS = 0x4,
        COMAdminFileFlagContainsComp = 0x8,
        COMAdminFileFlagContainsTLB = 0x10,
        COMAdminFileFlagSelfReg = 0x20,
        COMAdminFileFlagSelfUnReg = 0x40,
        COMAdminFileFlagUnloadableDLL = 0x80,
        COMAdminFileFlagDoesNotExist = 0x100,
        COMAdminFileFlagAlreadyInstalled = 0x200,
        COMAdminFileFlagBadTLB = 0x400,
        COMAdminFileFlagGetClassObjFailed = 0x800,
        COMAdminFileFlagClassNotAvailable = 0x1000,
        COMAdminFileFlagRegistrar = 0x2000,
        COMAdminFileFlagNoRegistrar = 0x4000,
        COMAdminFileFlagDLLRegsvrFailed = 0x8000,
        COMAdminFileFlagRegTLBFailed = 0x10000,
        COMAdminFileFlagRegistrarFailed = 0x20000,
        COMAdminFileFlagError = 0x40000
    } COMAdminFileFlags;
typedef
enum COMAdminComponentFlags
    {
        COMAdminCompFlagTypeInfoFound = 0x1,
        COMAdminCompFlagCOMPlusPropertiesFound = 0x2,
        COMAdminCompFlagProxyFound = 0x4,
        COMAdminCompFlagInterfacesFound = 0x8,
        COMAdminCompFlagAlreadyInstalled = 0x10,
        COMAdminCompFlagNotInApplication = 0x20
    } COMAdminComponentFlags;
typedef
enum COMAdminErrorCodes
    {
        COMAdminErrObjectErrors = ( HRESULT )0x80110401L,
        COMAdminErrObjectInvalid = ( HRESULT )0x80110402L,
        COMAdminErrKeyMissing = ( HRESULT )0x80110403L,
        COMAdminErrAlreadyInstalled = ( HRESULT )0x80110404L,
        COMAdminErrAppFileWriteFail = ( HRESULT )0x80110407L,
        COMAdminErrAppFileReadFail = ( HRESULT )0x80110408L,
        COMAdminErrAppFileVersion = ( HRESULT )0x80110409L,
        COMAdminErrBadPath = ( HRESULT )0x8011040aL,
        COMAdminErrApplicationExists = ( HRESULT )0x8011040bL,
        COMAdminErrRoleExists = ( HRESULT )0x8011040cL,
        COMAdminErrCantCopyFile = ( HRESULT )0x8011040dL,
        COMAdminErrNoUser = ( HRESULT )0x8011040fL,
        COMAdminErrInvalidUserids = ( HRESULT )0x80110410L,
        COMAdminErrNoRegistryCLSID = ( HRESULT )0x80110411L,
        COMAdminErrBadRegistryProgID = ( HRESULT )0x80110412L,
        COMAdminErrAuthenticationLevel = ( HRESULT )0x80110413L,
        COMAdminErrUserPasswdNotValid = ( HRESULT )0x80110414L,
        COMAdminErrCLSIDOrIIDMismatch = ( HRESULT )0x80110418L,
        COMAdminErrRemoteInterface = ( HRESULT )0x80110419L,
        COMAdminErrDllRegisterServer = ( HRESULT )0x8011041aL,
        COMAdminErrNoServerShare = ( HRESULT )0x8011041bL,
        COMAdminErrDllLoadFailed = ( HRESULT )0x8011041dL,
        COMAdminErrBadRegistryLibID = ( HRESULT )0x8011041eL,
        COMAdminErrAppDirNotFound = ( HRESULT )0x8011041fL,
        COMAdminErrRegistrarFailed = ( HRESULT )0x80110423L,
        COMAdminErrCompFileDoesNotExist = ( HRESULT )0x80110424L,
        COMAdminErrCompFileLoadDLLFail = ( HRESULT )0x80110425L,
        COMAdminErrCompFileGetClassObj = ( HRESULT )0x80110426L,
        COMAdminErrCompFileClassNotAvail = ( HRESULT )0x80110427L,
        COMAdminErrCompFileBadTLB = ( HRESULT )0x80110428L,
        COMAdminErrCompFileNotInstallable = ( HRESULT )0x80110429L,
        COMAdminErrNotChangeable = ( HRESULT )0x8011042aL,
        COMAdminErrNotDeletable = ( HRESULT )0x8011042bL,
        COMAdminErrSession = ( HRESULT )0x8011042cL,
        COMAdminErrCompMoveLocked = ( HRESULT )0x8011042dL,
        COMAdminErrCompMoveBadDest = ( HRESULT )0x8011042eL,
        COMAdminErrRegisterTLB = ( HRESULT )0x80110430L,
        COMAdminErrSystemApp = ( HRESULT )0x80110433L,
        COMAdminErrCompFileNoRegistrar = ( HRESULT )0x80110434L,
        COMAdminErrCoReqCompInstalled = ( HRESULT )0x80110435L,
        COMAdminErrServiceNotInstalled = ( HRESULT )0x80110436L,
        COMAdminErrPropertySaveFailed = ( HRESULT )0x80110437L,
        COMAdminErrObjectExists = ( HRESULT )0x80110438L,
        COMAdminErrComponentExists = ( HRESULT )0x80110439L,
        COMAdminErrRegFileCorrupt = ( HRESULT )0x8011043bL,
        COMAdminErrPropertyOverflow = ( HRESULT )0x8011043cL,
        COMAdminErrNotInRegistry = ( HRESULT )0x8011043eL,
        COMAdminErrObjectNotPoolable = ( HRESULT )0x8011043fL,
        COMAdminErrApplidMatchesClsid = ( HRESULT )0x80110446L,
        COMAdminErrRoleDoesNotExist = ( HRESULT )0x80110447L,
        COMAdminErrStartAppNeedsComponents = ( HRESULT )0x80110448L,
        COMAdminErrRequiresDifferentPlatform = ( HRESULT )0x80110449L,
        COMAdminErrQueuingServiceNotAvailable = ( HRESULT )0x80110602L,
        COMAdminErrObjectParentMissing = ( HRESULT )0x80110808L,
        COMAdminErrObjectDoesNotExist = ( HRESULT )0x80110809L,
        COMAdminErrCanNotExportAppProxy = ( HRESULT )0x8011044aL,
        COMAdminErrCanNotStartApp = ( HRESULT )0x8011044bL,
        COMAdminErrCanNotExportSystemApp = ( HRESULT )0x8011044cL,
        COMAdminErrCanNotSubscribeToComponent = ( HRESULT )0x8011044dL,
        COMAdminErrAppNotRunning = ( HRESULT )0x8011080aL,
        COMAdminErrEventClassCannotBeSubscriber = ( HRESULT )0x8011044eL,
        COMAdminErrLibAppProxyIncompatible = ( HRESULT )0x8011044fL,
        COMAdminErrBasePartitionOnly = ( HRESULT )0x80110450L,
        COMAdminErrDuplicatePartitionName = ( HRESULT )0x80110457L,
        COMAdminErrPartitionInUse = ( HRESULT )0x80110459L,
        COMAdminErrImportedComponentsNotAllowed = ( HRESULT )0x8011045bL,
        COMAdminErrRegdbNotInitialized = ( HRESULT )0x80110472L,
        COMAdminErrRegdbNotOpen = ( HRESULT )0x80110473L,
        COMAdminErrRegdbSystemErr = ( HRESULT )0x80110474L,
        COMAdminErrRegdbAlreadyRunning = ( HRESULT )0x80110475L,
        COMAdminErrMigVersionNotSupported = ( HRESULT )0x80110480L,
        COMAdminErrMigSchemaNotFound = ( HRESULT )0x80110481L,
        COMAdminErrCatBitnessMismatch = ( HRESULT )0x80110482L,
        COMAdminErrCatUnacceptableBitness = ( HRESULT )0x80110483L,
        COMAdminErrCatWrongAppBitnessBitness = ( HRESULT )0x80110484L,
        COMAdminErrCatPauseResumeNotSupported = ( HRESULT )0x80110485L,
        COMAdminErrCatServerFault = ( HRESULT )0x80110486L,
        COMAdminErrCantRecycleLibraryApps = ( HRESULT )0x8011080fL,
        COMAdminErrCantRecycleServiceApps = ( HRESULT )0x80110811L,
        COMAdminErrProcessAlreadyRecycled = ( HRESULT )0x80110812L,
        COMAdminErrPausedProcessMayNotBeRecycled = ( HRESULT )0x80110813L,
        COMAdminErrInvalidPartition = ( HRESULT )0x8011080bL,
        COMAdminErrPartitionMsiOnly = ( HRESULT )0x80110819L,
        COMAdminErrStartAppDisabled = ( HRESULT )0x80110451L,
        COMAdminErrCompMoveSource = ( HRESULT )0x8011081cL,
        COMAdminErrCompMoveDest = ( HRESULT )0x8011081dL,
        COMAdminErrCompMovePrivate = ( HRESULT )0x8011081eL,
        COMAdminErrCannotCopyEventClass = ( HRESULT )0x80110820L
    } COMAdminErrorCodes;
EXTERN_C const IID LIBID_COMAdmin;
EXTERN_C const CLSID CLSID_COMAdminCatalog;
class DECLSPEC_UUID("F618C514-DFB8-11d1-A2CF-00805FC79235")
COMAdminCatalog;
EXTERN_C const CLSID CLSID_COMAdminCatalogObject;
class DECLSPEC_UUID("F618C515-DFB8-11d1-A2CF-00805FC79235")
COMAdminCatalogObject;
EXTERN_C const CLSID CLSID_COMAdminCatalogCollection;
class DECLSPEC_UUID("F618C516-DFB8-11d1-A2CF-00805FC79235")
COMAdminCatalogCollection;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
