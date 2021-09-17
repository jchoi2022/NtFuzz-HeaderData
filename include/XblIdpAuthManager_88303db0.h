#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXblIdpAuthManager IXblIdpAuthManager;
typedef interface IXblIdpAuthTokenResult IXblIdpAuthTokenResult;
typedef class XblIdpAuthManager XblIdpAuthManager;
typedef class XblIdpAuthTokenResult XblIdpAuthTokenResult;
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _XBL_IDP_AUTH_TOKEN_STATUS
    {
        XBL_IDP_AUTH_TOKEN_STATUS_SUCCESS = 0,
        XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_SUCCESS = ( XBL_IDP_AUTH_TOKEN_STATUS_SUCCESS + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_NO_ACCOUNT_SET = ( XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_SUCCESS + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_LOAD_MSA_ACCOUNT_FAILED = ( XBL_IDP_AUTH_TOKEN_STATUS_NO_ACCOUNT_SET + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_XBOX_VETO = ( XBL_IDP_AUTH_TOKEN_STATUS_LOAD_MSA_ACCOUNT_FAILED + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_MSA_INTERRUPT = ( XBL_IDP_AUTH_TOKEN_STATUS_XBOX_VETO + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_NO_CONSENT = ( XBL_IDP_AUTH_TOKEN_STATUS_MSA_INTERRUPT + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_VIEW_NOT_SET = ( XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_NO_CONSENT + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_UNKNOWN = 0xffffffff
    } XBL_IDP_AUTH_TOKEN_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXblIdpAuthManager;
    typedef struct IXblIdpAuthManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXblIdpAuthManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXblIdpAuthManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXblIdpAuthManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetGamerAccount )(
            __RPC__in IXblIdpAuthManager * This,
                                       __RPC__in_opt_string LPCWSTR msaAccountId,
                                       __RPC__in_opt_string LPCWSTR xuid);
        HRESULT ( STDMETHODCALLTYPE *GetGamerAccount )(
            __RPC__in IXblIdpAuthManager * This,
                                __RPC__deref_out_opt_string LPWSTR *msaAccountId,
                                __RPC__deref_out_opt_string LPWSTR *xuid);
        HRESULT ( STDMETHODCALLTYPE *SetAppViewInitialized )(
            __RPC__in IXblIdpAuthManager * This,
                               __RPC__in_string LPCWSTR appSid,
                               __RPC__in_string LPCWSTR msaAccountId);
        HRESULT ( STDMETHODCALLTYPE *GetEnvironment )(
            __RPC__in IXblIdpAuthManager * This,
                                __RPC__deref_out_opt_string LPWSTR *environment);
        HRESULT ( STDMETHODCALLTYPE *GetSandbox )(
            __RPC__in IXblIdpAuthManager * This,
                                __RPC__deref_out_opt_string LPWSTR *sandbox);
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndSignatureWithTokenResult )(
            __RPC__in IXblIdpAuthManager * This,
                                       __RPC__in_opt_string LPCWSTR msaAccountId,
                               __RPC__in_string LPCWSTR appSid,
                               __RPC__in_string LPCWSTR msaTarget,
                               __RPC__in_string LPCWSTR msaPolicy,
                               __RPC__in_string LPCWSTR httpMethod,
                               __RPC__in_string LPCWSTR uri,
                                       __RPC__in_opt_string LPCWSTR headers,
                                        __RPC__in_ecount_full_opt(bodySize) BYTE *body,
                       DWORD bodySize,
                       BOOL forceRefresh,
                        __RPC__deref_out_opt IXblIdpAuthTokenResult **result);
        END_INTERFACE
    } IXblIdpAuthManagerVtbl;
    interface IXblIdpAuthManager
    {
        CONST_VTBL struct IXblIdpAuthManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGamerAccount(This,msaAccountId,xuid) )
    ( (This)->lpVtbl -> GetGamerAccount(This,msaAccountId,xuid) )
    ( (This)->lpVtbl -> SetAppViewInitialized(This,appSid,msaAccountId) )
    ( (This)->lpVtbl -> GetEnvironment(This,environment) )
    ( (This)->lpVtbl -> GetSandbox(This,sandbox) )
    ( (This)->lpVtbl -> GetTokenAndSignatureWithTokenResult(This,msaAccountId,appSid,msaTarget,msaPolicy,httpMethod,uri,headers,body,bodySize,forceRefresh,result) )
EXTERN_C const IID IID_IXblIdpAuthTokenResult;
    typedef struct IXblIdpAuthTokenResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXblIdpAuthTokenResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXblIdpAuthTokenResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXblIdpAuthTokenResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IXblIdpAuthTokenResult * This,
                        __RPC__out XBL_IDP_AUTH_TOKEN_STATUS *status);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCode )(
            __RPC__in IXblIdpAuthTokenResult * This,
                        __RPC__out HRESULT *errorCode);
        HRESULT ( STDMETHODCALLTYPE *GetToken )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *token);
        HRESULT ( STDMETHODCALLTYPE *GetSignature )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *signature);
        HRESULT ( STDMETHODCALLTYPE *GetSandbox )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *sandbox);
        HRESULT ( STDMETHODCALLTYPE *GetEnvironment )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *environment);
        HRESULT ( STDMETHODCALLTYPE *GetMsaAccountId )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *msaAccountId);
        HRESULT ( STDMETHODCALLTYPE *GetXuid )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *xuid);
        HRESULT ( STDMETHODCALLTYPE *GetGamertag )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *gamertag);
        HRESULT ( STDMETHODCALLTYPE *GetAgeGroup )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *ageGroup);
        HRESULT ( STDMETHODCALLTYPE *GetPrivileges )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *privileges);
        HRESULT ( STDMETHODCALLTYPE *GetMsaTarget )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *msaTarget);
        HRESULT ( STDMETHODCALLTYPE *GetMsaPolicy )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *msaPolicy);
        HRESULT ( STDMETHODCALLTYPE *GetMsaAppId )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *msaAppId);
        HRESULT ( STDMETHODCALLTYPE *GetRedirect )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *redirect);
        HRESULT ( STDMETHODCALLTYPE *GetMessage )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *message);
        HRESULT ( STDMETHODCALLTYPE *GetHelpId )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *helpId);
        HRESULT ( STDMETHODCALLTYPE *GetEnforcementBans )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *enforcementBans);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictions )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *restrictions);
        HRESULT ( STDMETHODCALLTYPE *GetTitleRestrictions )(
            __RPC__in IXblIdpAuthTokenResult * This,
                                        __RPC__deref_out_opt_string LPWSTR *titleRestrictions);
        END_INTERFACE
    } IXblIdpAuthTokenResultVtbl;
    interface IXblIdpAuthTokenResult
    {
        CONST_VTBL struct IXblIdpAuthTokenResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> GetErrorCode(This,errorCode) )
    ( (This)->lpVtbl -> GetToken(This,token) )
    ( (This)->lpVtbl -> GetSignature(This,signature) )
    ( (This)->lpVtbl -> GetSandbox(This,sandbox) )
    ( (This)->lpVtbl -> GetEnvironment(This,environment) )
    ( (This)->lpVtbl -> GetMsaAccountId(This,msaAccountId) )
    ( (This)->lpVtbl -> GetXuid(This,xuid) )
    ( (This)->lpVtbl -> GetGamertag(This,gamertag) )
    ( (This)->lpVtbl -> GetAgeGroup(This,ageGroup) )
    ( (This)->lpVtbl -> GetPrivileges(This,privileges) )
    ( (This)->lpVtbl -> GetMsaTarget(This,msaTarget) )
    ( (This)->lpVtbl -> GetMsaPolicy(This,msaPolicy) )
    ( (This)->lpVtbl -> GetMsaAppId(This,msaAppId) )
    ( (This)->lpVtbl -> GetRedirect(This,redirect) )
    ( (This)->lpVtbl -> GetMessage(This,message) )
    ( (This)->lpVtbl -> GetHelpId(This,helpId) )
    ( (This)->lpVtbl -> GetEnforcementBans(This,enforcementBans) )
    ( (This)->lpVtbl -> GetRestrictions(This,restrictions) )
    ( (This)->lpVtbl -> GetTitleRestrictions(This,titleRestrictions) )
class DECLSPEC_UUID("ce23534b-56d8-4978-86a2-7ee570640468")
XblIdpAuthManager;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0002_v0_0_s_ifspec;
class DECLSPEC_UUID("9f493441-744a-410c-ae2b-9a22f7c7731f")
XblIdpAuthTokenResult;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0003_v0_0_s_ifspec;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0004_v0_0_s_ifspec;
}
