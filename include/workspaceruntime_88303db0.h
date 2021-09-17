#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWorkspace IWorkspace;
typedef interface IWorkspace2 IWorkspace2;
typedef interface IWorkspace3 IWorkspace3;
typedef interface IWorkspaceRegistration IWorkspaceRegistration;
typedef interface IWorkspaceRegistration2 IWorkspaceRegistration2;
typedef interface IWorkspaceScriptable IWorkspaceScriptable;
typedef interface IWorkspaceScriptable2 IWorkspaceScriptable2;
typedef interface IWorkspaceScriptable3 IWorkspaceScriptable3;
typedef interface IWorkspaceReportMessage IWorkspaceReportMessage;
typedef interface _ITSWkspEvents _ITSWkspEvents;
typedef class Workspace Workspace;
#include "workspaceruntimeclientext.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntime_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntime_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWorkspace;
    typedef struct IWorkspaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspace * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWorkspaceNames )(
            __RPC__in IWorkspace * This,
                        __RPC__deref_out_opt SAFEARRAY * *psaWkspNames);
                           HRESULT ( STDMETHODCALLTYPE *StartRemoteApplication )(
            __RPC__in IWorkspace * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in SAFEARRAY * psaParams);
                           HRESULT ( STDMETHODCALLTYPE *GetProcessId )(
            __RPC__in IWorkspace * This,
                                __RPC__out ULONG *pulProcessId);
        END_INTERFACE
    } IWorkspaceVtbl;
    interface IWorkspace
    {
        CONST_VTBL struct IWorkspaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWorkspaceNames(This,psaWkspNames) )
    ( (This)->lpVtbl -> StartRemoteApplication(This,bstrWorkspaceId,psaParams) )
    ( (This)->lpVtbl -> GetProcessId(This,pulProcessId) )
EXTERN_C const IID IID_IWorkspace2;
    typedef struct IWorkspace2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspace2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspace2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspace2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWorkspaceNames )(
            __RPC__in IWorkspace2 * This,
                        __RPC__deref_out_opt SAFEARRAY * *psaWkspNames);
                           HRESULT ( STDMETHODCALLTYPE *StartRemoteApplication )(
            __RPC__in IWorkspace2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in SAFEARRAY * psaParams);
                           HRESULT ( STDMETHODCALLTYPE *GetProcessId )(
            __RPC__in IWorkspace2 * This,
                                __RPC__out ULONG *pulProcessId);
                           HRESULT ( STDMETHODCALLTYPE *StartRemoteApplicationEx )(
            __RPC__in IWorkspace2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrRequestingAppId,
                       __RPC__in BSTR bstrRequestingAppFamilyName,
                       VARIANT_BOOL bLaunchIntoImmersiveClient,
                       __RPC__in BSTR bstrImmersiveClientActivationContext,
                       __RPC__in SAFEARRAY * psaParams);
        END_INTERFACE
    } IWorkspace2Vtbl;
    interface IWorkspace2
    {
        CONST_VTBL struct IWorkspace2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWorkspaceNames(This,psaWkspNames) )
    ( (This)->lpVtbl -> StartRemoteApplication(This,bstrWorkspaceId,psaParams) )
    ( (This)->lpVtbl -> GetProcessId(This,pulProcessId) )
    ( (This)->lpVtbl -> StartRemoteApplicationEx(This,bstrWorkspaceId,bstrRequestingAppId,bstrRequestingAppFamilyName,bLaunchIntoImmersiveClient,bstrImmersiveClientActivationContext,psaParams) )
EXTERN_C const IID IID_IWorkspace3;
    typedef struct IWorkspace3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspace3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspace3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspace3 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWorkspaceNames )(
            __RPC__in IWorkspace3 * This,
                        __RPC__deref_out_opt SAFEARRAY * *psaWkspNames);
                           HRESULT ( STDMETHODCALLTYPE *StartRemoteApplication )(
            __RPC__in IWorkspace3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in SAFEARRAY * psaParams);
                           HRESULT ( STDMETHODCALLTYPE *GetProcessId )(
            __RPC__in IWorkspace3 * This,
                                __RPC__out ULONG *pulProcessId);
                           HRESULT ( STDMETHODCALLTYPE *StartRemoteApplicationEx )(
            __RPC__in IWorkspace3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrRequestingAppId,
                       __RPC__in BSTR bstrRequestingAppFamilyName,
                       VARIANT_BOOL bLaunchIntoImmersiveClient,
                       __RPC__in BSTR bstrImmersiveClientActivationContext,
                       __RPC__in SAFEARRAY * psaParams);
                           HRESULT ( STDMETHODCALLTYPE *GetClaimsToken2 )(
            __RPC__in IWorkspace3 * This,
                       __RPC__in BSTR bstrClaimsHint,
                       __RPC__in BSTR bstrUserHint,
                       ULONG claimCookie,
                       ULONG hwndCredUiParent,
                       RECT rectCredUiParent,
                                __RPC__deref_out_opt BSTR *pbstrAccessToken);
                           HRESULT ( STDMETHODCALLTYPE *SetClaimsToken )(
            __RPC__in IWorkspace3 * This,
                       __RPC__in BSTR bstrAccessToken,
                       ULONGLONG ullAccessTokenExpiration,
                       __RPC__in BSTR bstrRefreshToken);
        END_INTERFACE
    } IWorkspace3Vtbl;
    interface IWorkspace3
    {
        CONST_VTBL struct IWorkspace3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWorkspaceNames(This,psaWkspNames) )
    ( (This)->lpVtbl -> StartRemoteApplication(This,bstrWorkspaceId,psaParams) )
    ( (This)->lpVtbl -> GetProcessId(This,pulProcessId) )
    ( (This)->lpVtbl -> StartRemoteApplicationEx(This,bstrWorkspaceId,bstrRequestingAppId,bstrRequestingAppFamilyName,bLaunchIntoImmersiveClient,bstrImmersiveClientActivationContext,psaParams) )
    ( (This)->lpVtbl -> GetClaimsToken2(This,bstrClaimsHint,bstrUserHint,claimCookie,hwndCredUiParent,rectCredUiParent,pbstrAccessToken) )
    ( (This)->lpVtbl -> SetClaimsToken(This,bstrAccessToken,ullAccessTokenExpiration,bstrRefreshToken) )
EXTERN_C const IID IID_IWorkspaceRegistration;
    typedef struct IWorkspaceRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceRegistration * This);
                           HRESULT ( STDMETHODCALLTYPE *AddResource )(
            __RPC__in IWorkspaceRegistration * This,
                       __RPC__in_opt IWorkspaceClientExt *pUnk,
                        __RPC__out DWORD *pdwCookie);
                           HRESULT ( STDMETHODCALLTYPE *RemoveResource )(
            __RPC__in IWorkspaceRegistration * This,
                       DWORD dwCookieConnection);
        END_INTERFACE
    } IWorkspaceRegistrationVtbl;
    interface IWorkspaceRegistration
    {
        CONST_VTBL struct IWorkspaceRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddResource(This,pUnk,pdwCookie) )
    ( (This)->lpVtbl -> RemoveResource(This,dwCookieConnection) )
EXTERN_C const IID IID_IWorkspaceRegistration2;
    typedef struct IWorkspaceRegistration2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceRegistration2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceRegistration2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceRegistration2 * This);
                           HRESULT ( STDMETHODCALLTYPE *AddResource )(
            __RPC__in IWorkspaceRegistration2 * This,
                       __RPC__in_opt IWorkspaceClientExt *pUnk,
                        __RPC__out DWORD *pdwCookie);
                           HRESULT ( STDMETHODCALLTYPE *RemoveResource )(
            __RPC__in IWorkspaceRegistration2 * This,
                       DWORD dwCookieConnection);
                           HRESULT ( STDMETHODCALLTYPE *AddResourceEx )(
            __RPC__in IWorkspaceRegistration2 * This,
                       __RPC__in_opt IWorkspaceClientExt *pUnk,
                       __RPC__in BSTR bstrEventLogUploadAddress,
                        __RPC__out DWORD *pdwCookie,
                       GUID correlationId);
                           HRESULT ( STDMETHODCALLTYPE *RemoveResourceEx )(
            __RPC__in IWorkspaceRegistration2 * This,
                       DWORD dwCookieConnection,
                       GUID correlationId);
        END_INTERFACE
    } IWorkspaceRegistration2Vtbl;
    interface IWorkspaceRegistration2
    {
        CONST_VTBL struct IWorkspaceRegistration2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddResource(This,pUnk,pdwCookie) )
    ( (This)->lpVtbl -> RemoveResource(This,dwCookieConnection) )
    ( (This)->lpVtbl -> AddResourceEx(This,pUnk,bstrEventLogUploadAddress,pdwCookie,correlationId) )
    ( (This)->lpVtbl -> RemoveResourceEx(This,dwCookieConnection,correlationId) )
EXTERN_C const IID IID_IWorkspaceScriptable;
    typedef struct IWorkspaceScriptableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceScriptable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceScriptable * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWorkspaceScriptable * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWorkspaceScriptable * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWorkspaceScriptable * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectWorkspace )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in BSTR bstrWorkspaceId);
                               HRESULT ( STDMETHODCALLTYPE *StartWorkspace )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrWorkspaceParams,
                       LONG lTimeout,
                       LONG lFlags);
                               HRESULT ( STDMETHODCALLTYPE *IsWorkspaceCredentialSpecified )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       VARIANT_BOOL bCountUnauthenticatedCredentials,
                                __RPC__out VARIANT_BOOL *pbCredExist);
                               HRESULT ( STDMETHODCALLTYPE *IsWorkspaceSSOEnabled )(
            __RPC__in IWorkspaceScriptable * This,
                                __RPC__out VARIANT_BOOL *pbSSOEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ClearWorkspaceCredential )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in BSTR bstrWorkspaceId);
                               HRESULT ( STDMETHODCALLTYPE *OnAuthenticated )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrUserName);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectWorkspaceByFriendlyName )(
            __RPC__in IWorkspaceScriptable * This,
                       __RPC__in BSTR bstrWorkspaceFriendlyName);
        END_INTERFACE
    } IWorkspaceScriptableVtbl;
    interface IWorkspaceScriptable
    {
        CONST_VTBL struct IWorkspaceScriptableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DisconnectWorkspace(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> StartWorkspace(This,bstrWorkspaceId,bstrUserName,bstrPassword,bstrWorkspaceParams,lTimeout,lFlags) )
    ( (This)->lpVtbl -> IsWorkspaceCredentialSpecified(This,bstrWorkspaceId,bCountUnauthenticatedCredentials,pbCredExist) )
    ( (This)->lpVtbl -> IsWorkspaceSSOEnabled(This,pbSSOEnabled) )
    ( (This)->lpVtbl -> ClearWorkspaceCredential(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> OnAuthenticated(This,bstrWorkspaceId,bstrUserName) )
    ( (This)->lpVtbl -> DisconnectWorkspaceByFriendlyName(This,bstrWorkspaceFriendlyName) )
EXTERN_C const IID IID_IWorkspaceScriptable2;
    typedef struct IWorkspaceScriptable2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceScriptable2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceScriptable2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWorkspaceScriptable2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWorkspaceScriptable2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWorkspaceScriptable2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectWorkspace )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId);
                               HRESULT ( STDMETHODCALLTYPE *StartWorkspace )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrWorkspaceParams,
                       LONG lTimeout,
                       LONG lFlags);
                               HRESULT ( STDMETHODCALLTYPE *IsWorkspaceCredentialSpecified )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       VARIANT_BOOL bCountUnauthenticatedCredentials,
                                __RPC__out VARIANT_BOOL *pbCredExist);
                               HRESULT ( STDMETHODCALLTYPE *IsWorkspaceSSOEnabled )(
            __RPC__in IWorkspaceScriptable2 * This,
                                __RPC__out VARIANT_BOOL *pbSSOEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ClearWorkspaceCredential )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId);
                               HRESULT ( STDMETHODCALLTYPE *OnAuthenticated )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrUserName);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectWorkspaceByFriendlyName )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceFriendlyName);
                               HRESULT ( STDMETHODCALLTYPE *StartWorkspaceEx )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrWorkspaceFriendlyName,
                       __RPC__in BSTR bstrRedirectorName,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrAppContainer,
                       __RPC__in BSTR bstrWorkspaceParams,
                       LONG lTimeout,
                       LONG lFlags);
                               HRESULT ( STDMETHODCALLTYPE *ResourceDismissed )(
            __RPC__in IWorkspaceScriptable2 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrWorkspaceFriendlyName);
        END_INTERFACE
    } IWorkspaceScriptable2Vtbl;
    interface IWorkspaceScriptable2
    {
        CONST_VTBL struct IWorkspaceScriptable2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DisconnectWorkspace(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> StartWorkspace(This,bstrWorkspaceId,bstrUserName,bstrPassword,bstrWorkspaceParams,lTimeout,lFlags) )
    ( (This)->lpVtbl -> IsWorkspaceCredentialSpecified(This,bstrWorkspaceId,bCountUnauthenticatedCredentials,pbCredExist) )
    ( (This)->lpVtbl -> IsWorkspaceSSOEnabled(This,pbSSOEnabled) )
    ( (This)->lpVtbl -> ClearWorkspaceCredential(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> OnAuthenticated(This,bstrWorkspaceId,bstrUserName) )
    ( (This)->lpVtbl -> DisconnectWorkspaceByFriendlyName(This,bstrWorkspaceFriendlyName) )
    ( (This)->lpVtbl -> StartWorkspaceEx(This,bstrWorkspaceId,bstrWorkspaceFriendlyName,bstrRedirectorName,bstrUserName,bstrPassword,bstrAppContainer,bstrWorkspaceParams,lTimeout,lFlags) )
    ( (This)->lpVtbl -> ResourceDismissed(This,bstrWorkspaceId,bstrWorkspaceFriendlyName) )
EXTERN_C const IID IID_IWorkspaceScriptable3;
    typedef struct IWorkspaceScriptable3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceScriptable3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceScriptable3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWorkspaceScriptable3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWorkspaceScriptable3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWorkspaceScriptable3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectWorkspace )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId);
                               HRESULT ( STDMETHODCALLTYPE *StartWorkspace )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrWorkspaceParams,
                       LONG lTimeout,
                       LONG lFlags);
                               HRESULT ( STDMETHODCALLTYPE *IsWorkspaceCredentialSpecified )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       VARIANT_BOOL bCountUnauthenticatedCredentials,
                                __RPC__out VARIANT_BOOL *pbCredExist);
                               HRESULT ( STDMETHODCALLTYPE *IsWorkspaceSSOEnabled )(
            __RPC__in IWorkspaceScriptable3 * This,
                                __RPC__out VARIANT_BOOL *pbSSOEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ClearWorkspaceCredential )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId);
                               HRESULT ( STDMETHODCALLTYPE *OnAuthenticated )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrUserName);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectWorkspaceByFriendlyName )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceFriendlyName);
                               HRESULT ( STDMETHODCALLTYPE *StartWorkspaceEx )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrWorkspaceFriendlyName,
                       __RPC__in BSTR bstrRedirectorName,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrAppContainer,
                       __RPC__in BSTR bstrWorkspaceParams,
                       LONG lTimeout,
                       LONG lFlags);
                               HRESULT ( STDMETHODCALLTYPE *ResourceDismissed )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrWorkspaceFriendlyName);
                               HRESULT ( STDMETHODCALLTYPE *StartWorkspaceEx2 )(
            __RPC__in IWorkspaceScriptable3 * This,
                       __RPC__in BSTR bstrWorkspaceId,
                       __RPC__in BSTR bstrWorkspaceFriendlyName,
                       __RPC__in BSTR bstrRedirectorName,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                       __RPC__in BSTR bstrAppContainer,
                       __RPC__in BSTR bstrWorkspaceParams,
                       LONG lTimeout,
                       LONG lFlags,
                       __RPC__in BSTR bstrEventLogUploadAddress,
                       GUID correlationId);
        END_INTERFACE
    } IWorkspaceScriptable3Vtbl;
    interface IWorkspaceScriptable3
    {
        CONST_VTBL struct IWorkspaceScriptable3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DisconnectWorkspace(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> StartWorkspace(This,bstrWorkspaceId,bstrUserName,bstrPassword,bstrWorkspaceParams,lTimeout,lFlags) )
    ( (This)->lpVtbl -> IsWorkspaceCredentialSpecified(This,bstrWorkspaceId,bCountUnauthenticatedCredentials,pbCredExist) )
    ( (This)->lpVtbl -> IsWorkspaceSSOEnabled(This,pbSSOEnabled) )
    ( (This)->lpVtbl -> ClearWorkspaceCredential(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> OnAuthenticated(This,bstrWorkspaceId,bstrUserName) )
    ( (This)->lpVtbl -> DisconnectWorkspaceByFriendlyName(This,bstrWorkspaceFriendlyName) )
    ( (This)->lpVtbl -> StartWorkspaceEx(This,bstrWorkspaceId,bstrWorkspaceFriendlyName,bstrRedirectorName,bstrUserName,bstrPassword,bstrAppContainer,bstrWorkspaceParams,lTimeout,lFlags) )
    ( (This)->lpVtbl -> ResourceDismissed(This,bstrWorkspaceId,bstrWorkspaceFriendlyName) )
    ( (This)->lpVtbl -> StartWorkspaceEx2(This,bstrWorkspaceId,bstrWorkspaceFriendlyName,bstrRedirectorName,bstrUserName,bstrPassword,bstrAppContainer,bstrWorkspaceParams,lTimeout,lFlags,bstrEventLogUploadAddress,correlationId) )
EXTERN_C const IID IID_IWorkspaceReportMessage;
    typedef struct IWorkspaceReportMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceReportMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceReportMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceReportMessage * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterErrorLogMessage )(
            __RPC__in IWorkspaceReportMessage * This,
                       __RPC__in BSTR bstrMessage);
                           HRESULT ( STDMETHODCALLTYPE *IsErrorMessageRegistered )(
            __RPC__in IWorkspaceReportMessage * This,
                       __RPC__in BSTR bstrWkspId,
                       DWORD dwErrorType,
                       __RPC__in BSTR bstrErrorMessageType,
                       DWORD dwErrorCode,
                                __RPC__out VARIANT_BOOL *pfErrorExist);
                           HRESULT ( STDMETHODCALLTYPE *RegisterErrorEvent )(
            __RPC__in IWorkspaceReportMessage * This,
                       __RPC__in BSTR bstrWkspId,
                       DWORD dwErrorType,
                       __RPC__in BSTR bstrErrorMessageType,
                       DWORD dwErrorCode);
        END_INTERFACE
    } IWorkspaceReportMessageVtbl;
    interface IWorkspaceReportMessage
    {
        CONST_VTBL struct IWorkspaceReportMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterErrorLogMessage(This,bstrMessage) )
    ( (This)->lpVtbl -> IsErrorMessageRegistered(This,bstrWkspId,dwErrorType,bstrErrorMessageType,dwErrorCode,pfErrorExist) )
    ( (This)->lpVtbl -> RegisterErrorEvent(This,bstrWkspId,dwErrorType,bstrErrorMessageType,dwErrorCode) )
EXTERN_C const IID LIBID_WorkspaceRuntimeLib;
EXTERN_C const IID DIID__ITSWkspEvents;
    typedef struct _ITSWkspEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ITSWkspEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ITSWkspEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ITSWkspEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ITSWkspEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ITSWkspEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ITSWkspEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ITSWkspEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _ITSWkspEventsVtbl;
    interface _ITSWkspEvents
    {
        CONST_VTBL struct _ITSWkspEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_Workspace;
class DECLSPEC_UUID("4F1DFCA6-3AAD-48E1-8406-4BC21A501D7C")
Workspace;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntime_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntime_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
