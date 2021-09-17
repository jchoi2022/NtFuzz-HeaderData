#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITSGAuthorizeConnectionSink ITSGAuthorizeConnectionSink;
typedef interface ITSGAuthorizeResourceSink ITSGAuthorizeResourceSink;
typedef interface ITSGPolicyEngine ITSGPolicyEngine;
typedef interface ITSGAccountingEngine ITSGAccountingEngine;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0001
    {
        AA_AUTH_MIN = 0,
        AA_AUTH_BASIC = ( AA_AUTH_MIN + 1 ) ,
        AA_AUTH_NTLM = ( AA_AUTH_BASIC + 1 ) ,
        AA_AUTH_SC = ( AA_AUTH_NTLM + 1 ) ,
        AA_AUTH_LOGGEDONCREDENTIALS = ( AA_AUTH_SC + 1 ) ,
        AA_AUTH_NEGOTIATE = ( AA_AUTH_LOGGEDONCREDENTIALS + 1 ) ,
        AA_AUTH_ANY = ( AA_AUTH_NEGOTIATE + 1 ) ,
        AA_AUTH_COOKIE = ( AA_AUTH_ANY + 1 ) ,
        AA_AUTH_DIGEST = ( AA_AUTH_COOKIE + 1 ) ,
        AA_AUTH_ORGID = ( AA_AUTH_DIGEST + 1 ) ,
        AA_AUTH_CONID = ( AA_AUTH_ORGID + 1 ) ,
        AA_AUTH_SSPI_NTLM = ( AA_AUTH_CONID + 1 ) ,
        AA_AUTH_MAX = ( AA_AUTH_SSPI_NTLM + 1 )
    } AAAuthSchemes;
typedef
enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0002
    {
        AA_MAIN_SESSION_CREATION = 0,
        AA_SUB_SESSION_CREATION = ( AA_MAIN_SESSION_CREATION + 1 ) ,
        AA_SUB_SESSION_CLOSED = ( AA_SUB_SESSION_CREATION + 1 ) ,
        AA_MAIN_SESSION_CLOSED = ( AA_SUB_SESSION_CLOSED + 1 )
    } AAAccountingDataType;
typedef struct __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0003
    {
    BSTR userName;
    BSTR clientName;
    AAAuthSchemes authType;
    BSTR resourceName;
    int portNumber;
    BSTR protocolName;
    int numberOfBytesReceived;
    int numberOfBytesTransfered;
    BSTR reasonForDisconnect;
    GUID mainSessionId;
    int subSessionId;
    } AAAccountingData;
typedef
enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0004
    {
        SESSION_TIMEOUT_ACTION_DISCONNECT = 0,
        SESSION_TIMEOUT_ACTION_SILENT_REAUTH = ( SESSION_TIMEOUT_ACTION_DISCONNECT + 1 )
    } SESSION_TIMEOUT_ACTION_TYPE;
typedef
enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0005
    {
        EnableAllRedirections = 0,
        DisableAllRedirections = ( EnableAllRedirections + 1 ) ,
        DriveRedirectionDisabled = ( DisableAllRedirections + 1 ) ,
        PrinterRedirectionDisabled = ( DriveRedirectionDisabled + 1 ) ,
        PortRedirectionDisabled = ( PrinterRedirectionDisabled + 1 ) ,
        ClipboardRedirectionDisabled = ( PortRedirectionDisabled + 1 ) ,
        PnpRedirectionDisabled = ( ClipboardRedirectionDisabled + 1 ) ,
        AllowOnlySDRServers = ( PnpRedirectionDisabled + 1 )
    } PolicyAttributeType;
typedef DWORD PolicyAttributes[ 20 ];
typedef
enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0006
    {
        AA_UNTRUSTED = 0,
        AA_TRUSTEDUSER_UNTRUSTEDCLIENT = ( AA_UNTRUSTED + 1 ) ,
        AA_TRUSTEDUSER_TRUSTEDCLIENT = ( AA_TRUSTEDUSER_UNTRUSTEDCLIENT + 1 )
    } AATrustClassID;
extern RPC_IF_HANDLE __MIDL_itf_tsgpolicyengine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsgpolicyengine_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITSGAuthorizeConnectionSink;
    typedef struct ITSGAuthorizeConnectionSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSGAuthorizeConnectionSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSGAuthorizeConnectionSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSGAuthorizeConnectionSink * This);
                           HRESULT ( STDMETHODCALLTYPE *OnConnectionAuthorized )(
            __RPC__in ITSGAuthorizeConnectionSink * This,
                       HRESULT hrIn,
                       GUID mainSessionId,
                       ULONG cbSoHResponse,
                                __RPC__in_ecount_full(cbSoHResponse) BYTE *pbSoHResponse,
                       ULONG idleTimeout,
                       ULONG sessionTimeout,
                       SESSION_TIMEOUT_ACTION_TYPE sessionTimeoutAction,
                       AATrustClassID trustClass,
                       __RPC__in_ecount_full(20) PolicyAttributes policyAttributes);
        END_INTERFACE
    } ITSGAuthorizeConnectionSinkVtbl;
    interface ITSGAuthorizeConnectionSink
    {
        CONST_VTBL struct ITSGAuthorizeConnectionSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnectionAuthorized(This,hrIn,mainSessionId,cbSoHResponse,pbSoHResponse,idleTimeout,sessionTimeout,sessionTimeoutAction,trustClass,policyAttributes) )
EXTERN_C const IID IID_ITSGAuthorizeResourceSink;
    typedef struct ITSGAuthorizeResourceSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSGAuthorizeResourceSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSGAuthorizeResourceSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSGAuthorizeResourceSink * This);
                           HRESULT ( STDMETHODCALLTYPE *OnChannelAuthorized )(
            __RPC__in ITSGAuthorizeResourceSink * This,
                       HRESULT hrIn,
                       GUID mainSessionId,
                       int subSessionId,
                                __RPC__in_ecount_full(numAllowedResourceNames) BSTR *allowedResourceNames,
                       ULONG numAllowedResourceNames,
                                __RPC__in_ecount_full(numFailedResourceNames) BSTR *failedResourceNames,
                       ULONG numFailedResourceNames);
        END_INTERFACE
    } ITSGAuthorizeResourceSinkVtbl;
    interface ITSGAuthorizeResourceSink
    {
        CONST_VTBL struct ITSGAuthorizeResourceSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnChannelAuthorized(This,hrIn,mainSessionId,subSessionId,allowedResourceNames,numAllowedResourceNames,failedResourceNames,numFailedResourceNames) )
EXTERN_C const IID IID_ITSGPolicyEngine;
    typedef struct ITSGPolicyEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSGPolicyEngine * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSGPolicyEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSGPolicyEngine * This);
        HRESULT ( STDMETHODCALLTYPE *AuthorizeConnection )(
            __RPC__in ITSGPolicyEngine * This,
                       GUID mainSessionId,
                       __RPC__in BSTR username,
                       AAAuthSchemes authType,
                       __RPC__in BSTR clientMachineIP,
                       __RPC__in BSTR clientMachineName,
                                __RPC__in_ecount_full(numSOHBytes) BYTE *sohData,
                       ULONG numSOHBytes,
                                __RPC__in_ecount_full(numCookieBytes) BYTE *cookieData,
                       ULONG numCookieBytes,
                       HANDLE_PTR userToken,
                       __RPC__in_opt ITSGAuthorizeConnectionSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *AuthorizeResource )(
            __RPC__in ITSGPolicyEngine * This,
                       GUID mainSessionId,
                       int subSessionId,
                       __RPC__in BSTR username,
                                __RPC__in_ecount_full(numResources) BSTR *resourceNames,
                       ULONG numResources,
                                __RPC__in_ecount_full(numAlternateResourceName) BSTR *alternateResourceNames,
                       ULONG numAlternateResourceName,
                       ULONG portNumber,
                       __RPC__in BSTR operation,
                                __RPC__in_ecount_full(numBytesInCookie) BYTE *cookie,
                       ULONG numBytesInCookie,
                       __RPC__in_opt ITSGAuthorizeResourceSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ITSGPolicyEngine * This);
        HRESULT ( STDMETHODCALLTYPE *IsQuarantineEnabled )(
            __RPC__in ITSGPolicyEngine * This,
                        __RPC__out BOOL *quarantineEnabled);
        END_INTERFACE
    } ITSGPolicyEngineVtbl;
    interface ITSGPolicyEngine
    {
        CONST_VTBL struct ITSGPolicyEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AuthorizeConnection(This,mainSessionId,username,authType,clientMachineIP,clientMachineName,sohData,numSOHBytes,cookieData,numCookieBytes,userToken,pSink) )
    ( (This)->lpVtbl -> AuthorizeResource(This,mainSessionId,subSessionId,username,resourceNames,numResources,alternateResourceNames,numAlternateResourceName,portNumber,operation,cookie,numBytesInCookie,pSink) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> IsQuarantineEnabled(This,quarantineEnabled) )
EXTERN_C const IID IID_ITSGAccountingEngine;
    typedef struct ITSGAccountingEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSGAccountingEngine * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSGAccountingEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSGAccountingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *DoAccounting )(
            __RPC__in ITSGAccountingEngine * This,
                       AAAccountingDataType accountingDataType,
                       AAAccountingData accountingData);
        END_INTERFACE
    } ITSGAccountingEngineVtbl;
    interface ITSGAccountingEngine
    {
        CONST_VTBL struct ITSGAccountingEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoAccounting(This,accountingDataType,accountingData) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tsgpolicyengine_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsgpolicyengine_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
