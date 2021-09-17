#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
extern "C"{
typedef interface ICatalog ICatalog;
typedef interface IComponentUtil IComponentUtil;
typedef interface IPackageUtil IPackageUtil;
typedef interface IRemoteComponentUtil IRemoteComponentUtil;
typedef interface IRoleAssociationUtil IRoleAssociationUtil;
typedef class Catalog Catalog;
typedef class CatalogObject CatalogObject;
typedef class CatalogCollection CatalogCollection;
typedef class ComponentUtil ComponentUtil;
typedef class PackageUtil PackageUtil;
typedef class RemoteComponentUtil RemoteComponentUtil;
typedef class RoleAssociationUtil RoleAssociationUtil;
#include "unknwn.h"
#include "comadmin.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * );
#include <objbase.h>
extern RPC_IF_HANDLE __MIDL_itf_mtsadmin_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mtsadmin_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICatalog;
    typedef struct ICatalogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ICatalog __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ICatalog __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ICatalog __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            ICatalog __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            ICatalog __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            ICatalog __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            ICatalog __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCollection )(
            ICatalog __RPC_FAR * This,
                       BSTR bstrCollName,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )(
            ICatalog __RPC_FAR * This,
                       BSTR bstrConnectString,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MajorVersion )(
            ICatalog __RPC_FAR * This,
                                LONG __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MinorVersion )(
            ICatalog __RPC_FAR * This,
                                LONG __RPC_FAR *retval);
        END_INTERFACE
    } ICatalogVtbl;
    interface ICatalog
    {
        CONST_VTBL struct ICatalogVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> GetCollection(This,bstrCollName,ppCatalogCollection)
    (This)->lpVtbl -> Connect(This,bstrConnectString,ppCatalogCollection)
    (This)->lpVtbl -> get_MajorVersion(This,retval)
    (This)->lpVtbl -> get_MinorVersion(This,retval)
                       HRESULT STDMETHODCALLTYPE ICatalog_GetCollection_Proxy(
    ICatalog __RPC_FAR * This,
               BSTR bstrCollName,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
void __RPC_STUB ICatalog_GetCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalog_Connect_Proxy(
    ICatalog __RPC_FAR * This,
               BSTR bstrConnectString,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
void __RPC_STUB ICatalog_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalog_get_MajorVersion_Proxy(
    ICatalog __RPC_FAR * This,
                        LONG __RPC_FAR *retval);
void __RPC_STUB ICatalog_get_MajorVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalog_get_MinorVersion_Proxy(
    ICatalog __RPC_FAR * This,
                        LONG __RPC_FAR *retval);
void __RPC_STUB ICatalog_get_MinorVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IComponentUtil;
    typedef struct IComponentUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IComponentUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IComponentUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IComponentUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IComponentUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IComponentUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallComponent )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrDLLFile,
                       BSTR bstrTypelibFile,
                       BSTR bstrProxyStubDLLFile);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ImportComponent )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrCLSID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ImportComponentByName )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrProgID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCLSIDs )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrDLLFile,
                       BSTR bstrTypelibFile,
                        SAFEARRAY __RPC_FAR * __RPC_FAR *aCLSIDs);
        END_INTERFACE
    } IComponentUtilVtbl;
    interface IComponentUtil
    {
        CONST_VTBL struct IComponentUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> InstallComponent(This,bstrDLLFile,bstrTypelibFile,bstrProxyStubDLLFile)
    (This)->lpVtbl -> ImportComponent(This,bstrCLSID)
    (This)->lpVtbl -> ImportComponentByName(This,bstrProgID)
    (This)->lpVtbl -> GetCLSIDs(This,bstrDLLFile,bstrTypelibFile,aCLSIDs)
                       HRESULT STDMETHODCALLTYPE IComponentUtil_InstallComponent_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrDLLFile,
               BSTR bstrTypelibFile,
               BSTR bstrProxyStubDLLFile);
void __RPC_STUB IComponentUtil_InstallComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IComponentUtil_ImportComponent_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrCLSID);
void __RPC_STUB IComponentUtil_ImportComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IComponentUtil_ImportComponentByName_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrProgID);
void __RPC_STUB IComponentUtil_ImportComponentByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IComponentUtil_GetCLSIDs_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrDLLFile,
               BSTR bstrTypelibFile,
                SAFEARRAY __RPC_FAR * __RPC_FAR *aCLSIDs);
void __RPC_STUB IComponentUtil_GetCLSIDs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IPackageUtil;
    typedef struct IPackageUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IPackageUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IPackageUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IPackageUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IPackageUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IPackageUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IPackageUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IPackageUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallPackage )(
            IPackageUtil __RPC_FAR * This,
                       BSTR bstrPackageFile,
                       BSTR bstrInstallPath,
                       LONG lOptions);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExportPackage )(
            IPackageUtil __RPC_FAR * This,
                       BSTR bstrPackageID,
                       BSTR bstrPackageFile,
                       LONG lOptions);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShutdownPackage )(
            IPackageUtil __RPC_FAR * This,
                       BSTR bstrPackageID);
        END_INTERFACE
    } IPackageUtilVtbl;
    interface IPackageUtil
    {
        CONST_VTBL struct IPackageUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> InstallPackage(This,bstrPackageFile,bstrInstallPath,lOptions)
    (This)->lpVtbl -> ExportPackage(This,bstrPackageID,bstrPackageFile,lOptions)
    (This)->lpVtbl -> ShutdownPackage(This,bstrPackageID)
                       HRESULT STDMETHODCALLTYPE IPackageUtil_InstallPackage_Proxy(
    IPackageUtil __RPC_FAR * This,
               BSTR bstrPackageFile,
               BSTR bstrInstallPath,
               LONG lOptions);
void __RPC_STUB IPackageUtil_InstallPackage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IPackageUtil_ExportPackage_Proxy(
    IPackageUtil __RPC_FAR * This,
               BSTR bstrPackageID,
               BSTR bstrPackageFile,
               LONG lOptions);
void __RPC_STUB IPackageUtil_ExportPackage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IPackageUtil_ShutdownPackage_Proxy(
    IPackageUtil __RPC_FAR * This,
               BSTR bstrPackageID);
void __RPC_STUB IPackageUtil_ShutdownPackage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IRemoteComponentUtil;
    typedef struct IRemoteComponentUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IRemoteComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IRemoteComponentUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IRemoteComponentUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IRemoteComponentUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IRemoteComponentUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IRemoteComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IRemoteComponentUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallRemoteComponent )(
            IRemoteComponentUtil __RPC_FAR * This,
                       BSTR bstrServer,
                       BSTR bstrPackageID,
                       BSTR bstrCLSID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallRemoteComponentByName )(
            IRemoteComponentUtil __RPC_FAR * This,
                       BSTR bstrServer,
                       BSTR bstrPackageName,
                       BSTR bstrProgID);
        END_INTERFACE
    } IRemoteComponentUtilVtbl;
    interface IRemoteComponentUtil
    {
        CONST_VTBL struct IRemoteComponentUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> InstallRemoteComponent(This,bstrServer,bstrPackageID,bstrCLSID)
    (This)->lpVtbl -> InstallRemoteComponentByName(This,bstrServer,bstrPackageName,bstrProgID)
                       HRESULT STDMETHODCALLTYPE IRemoteComponentUtil_InstallRemoteComponent_Proxy(
    IRemoteComponentUtil __RPC_FAR * This,
               BSTR bstrServer,
               BSTR bstrPackageID,
               BSTR bstrCLSID);
void __RPC_STUB IRemoteComponentUtil_InstallRemoteComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IRemoteComponentUtil_InstallRemoteComponentByName_Proxy(
    IRemoteComponentUtil __RPC_FAR * This,
               BSTR bstrServer,
               BSTR bstrPackageName,
               BSTR bstrProgID);
void __RPC_STUB IRemoteComponentUtil_InstallRemoteComponentByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IRoleAssociationUtil;
    typedef struct IRoleAssociationUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IRoleAssociationUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IRoleAssociationUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IRoleAssociationUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IRoleAssociationUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IRoleAssociationUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IRoleAssociationUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IRoleAssociationUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AssociateRole )(
            IRoleAssociationUtil __RPC_FAR * This,
                       BSTR bstrRoleID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AssociateRoleByName )(
            IRoleAssociationUtil __RPC_FAR * This,
                       BSTR bstrRoleName);
        END_INTERFACE
    } IRoleAssociationUtilVtbl;
    interface IRoleAssociationUtil
    {
        CONST_VTBL struct IRoleAssociationUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> AssociateRole(This,bstrRoleID)
    (This)->lpVtbl -> AssociateRoleByName(This,bstrRoleName)
                       HRESULT STDMETHODCALLTYPE IRoleAssociationUtil_AssociateRole_Proxy(
    IRoleAssociationUtil __RPC_FAR * This,
               BSTR bstrRoleID);
void __RPC_STUB IRoleAssociationUtil_AssociateRole_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IRoleAssociationUtil_AssociateRoleByName_Proxy(
    IRoleAssociationUtil __RPC_FAR * This,
               BSTR bstrRoleName);
void __RPC_STUB IRoleAssociationUtil_AssociateRoleByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef
enum __MIDL___MIDL_itf_mtsadmin_0123_0001
    { mtsInstallUsers = 1
    } MTSPackageInstallOptions;
typedef
enum __MIDL___MIDL_itf_mtsadmin_0123_0002
    { mtsExportUsers = 1
    } MTSPackageExportOptions;
typedef
enum __MIDL___MIDL_itf_mtsadmin_0123_0003
    { mtsErrObjectErrors = ( HRESULT )0x80110401L,
 mtsErrObjectInvalid = ( HRESULT )0x80110402L,
 mtsErrKeyMissing = ( HRESULT )0x80110403L,
 mtsErrAlreadyInstalled = ( HRESULT )0x80110404L,
 mtsErrDownloadFailed = 0x80110405,
 mtsErrPDFWriteFail = ( HRESULT )0x80110407L,
 mtsErrPDFReadFail = ( HRESULT )0x80110408L,
 mtsErrPDFVersion = ( HRESULT )0x80110409L,
 mtsErrBadPath = ( HRESULT )0x8011040aL,
 mtsErrPackageExists = ( HRESULT )0x8011040bL,
 mtsErrRoleExists = ( HRESULT )0x8011040cL,
 mtsErrCantCopyFile = ( HRESULT )0x8011040dL,
 mtsErrNoTypeLib = 0x8011040e,
 mtsErrNoUser = ( HRESULT )0x8011040fL,
 mtsErrInvalidUserids = ( HRESULT )0x80110410L,
 mtsErrNoRegistryCLSID = ( HRESULT )0x80110411L,
 mtsErrBadRegistryProgID = ( HRESULT )0x80110412L,
 mtsErrAuthenticationLevel = ( HRESULT )0x80110413L,
 mtsErrUserPasswdNotValid = ( HRESULT )0x80110414L,
 mtsErrNoRegistryRead = 0x80110415,
 mtsErrNoRegistryWrite = 0x80110416,
 mtsErrNoRegistryRepair = 0x80110417,
 mtsErrCLSIDOrIIDMismatch = ( HRESULT )0x80110418L,
 mtsErrRemoteInterface = ( HRESULT )0x80110419L,
 mtsErrDllRegisterServer = ( HRESULT )0x8011041aL,
 mtsErrNoServerShare = ( HRESULT )0x8011041bL,
 mtsErrNoAccessToUNC = 0x8011041c,
 mtsErrDllLoadFailed = ( HRESULT )0x8011041dL,
 mtsErrBadRegistryLibID = ( HRESULT )0x8011041eL,
 mtsErrPackDirNotFound = ( HRESULT )0x8011041fL,
 mtsErrTreatAs = 0x80110420,
 mtsErrBadForward = 0x80110421,
 mtsErrBadIID = 0x80110422,
 mtsErrRegistrarFailed = ( HRESULT )0x80110423L,
 mtsErrCompFileDoesNotExist = ( HRESULT )0x80110424L,
 mtsErrCompFileLoadDLLFail = ( HRESULT )0x80110425L,
 mtsErrCompFileGetClassObj = ( HRESULT )0x80110426L,
 mtsErrCompFileClassNotAvail = ( HRESULT )0x80110427L,
 mtsErrCompFileBadTLB = ( HRESULT )0x80110428L,
 mtsErrCompFileNotInstallable = ( HRESULT )0x80110429L,
 mtsErrNotChangeable = ( HRESULT )0x8011042aL,
 mtsErrNotDeletable = ( HRESULT )0x8011042bL,
 mtsErrSession = ( HRESULT )0x8011042cL,
 mtsErrCompMoveLocked = ( HRESULT )0x8011042dL,
 mtsErrCompMoveBadDest = ( HRESULT )0x8011042eL,
 mtsErrRegisterTLB = ( HRESULT )0x80110430L,
 mtsErrSystemPack = ( HRESULT )0x80110433L,
 mtsErrCompFileNoRegistrar = ( HRESULT )0x80110434L,
 mtsErrCoReqCompInstalled = ( HRESULT )0x80110435L,
 mtsErrPropSaveFailed = ( HRESULT )0x80110437L,
 mtsErrObjectExists = ( HRESULT )0x80110438L,
 mtsErrRegFileCorrupt = ( HRESULT )0x8011043bL,
 mtsErrPropertyOverflow = ( HRESULT )0x8011043cL,
 mtsErrNotInRegistry = ( HRESULT )0x8011043eL,
 mtsErrApplidMatchesClsid = ( HRESULT )0x80110446L,
 mtsErrRoleDoesNotExist = ( HRESULT )0x80110447L,
 mtsErrObjectParentMissing = ( HRESULT )0x80110808L,
 mtsErrObjectDoesNotExist = ( HRESULT )0x80110809L,
 mtsErrCanNotExportAppProxy = 0x8011044a,
 mtsErrCanNotExportSystemPack = 0x8011044c
    }__MIDL___MIDL_itf_mtsadmin_0123_0003;
EXTERN_C const IID LIBID_MTSAdmin;
EXTERN_C const CLSID CLSID_Catalog;
class DECLSPEC_UUID("6eb22881-8a19-11d0-81b6-00a0c9231c29")
Catalog;
EXTERN_C const CLSID CLSID_CatalogObject;
class DECLSPEC_UUID("6eb22882-8a19-11d0-81b6-00a0c9231c29")
CatalogObject;
EXTERN_C const CLSID CLSID_CatalogCollection;
class DECLSPEC_UUID("6eb22883-8a19-11d0-81b6-00a0c9231c29")
CatalogCollection;
EXTERN_C const CLSID CLSID_ComponentUtil;
class DECLSPEC_UUID("6eb22884-8a19-11d0-81b6-00a0c9231c29")
ComponentUtil;
EXTERN_C const CLSID CLSID_PackageUtil;
class DECLSPEC_UUID("6eb22885-8a19-11d0-81b6-00a0c9231c29")
PackageUtil;
EXTERN_C const CLSID CLSID_RemoteComponentUtil;
class DECLSPEC_UUID("6eb22886-8a19-11d0-81b6-00a0c9231c29")
RemoteComponentUtil;
EXTERN_C const CLSID CLSID_RoleAssociationUtil;
class DECLSPEC_UUID("6eb22887-8a19-11d0-81b6-00a0c9231c29")
RoleAssociationUtil;
ULONG __RPC_USER BSTR_UserSize( ULONG __RPC_FAR *, ULONG , BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER BSTR_UserMarshal( ULONG __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER BSTR_UserUnmarshal(ULONG __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
void __RPC_USER BSTR_UserFree( ULONG __RPC_FAR *, BSTR __RPC_FAR * );
ULONG __RPC_USER LPSAFEARRAY_UserSize( ULONG __RPC_FAR *, ULONG , LPSAFEARRAY __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER LPSAFEARRAY_UserMarshal( ULONG __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * );
void __RPC_USER LPSAFEARRAY_UserFree( ULONG __RPC_FAR *, LPSAFEARRAY __RPC_FAR * );
}
