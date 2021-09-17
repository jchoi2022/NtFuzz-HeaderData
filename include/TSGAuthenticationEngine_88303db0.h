#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITSGAuthenticateUserSink ITSGAuthenticateUserSink;
typedef interface ITSGAuthenticationEngine ITSGAuthenticationEngine;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tsgauthenticationengine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsgauthenticationengine_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITSGAuthenticateUserSink;
    typedef struct ITSGAuthenticateUserSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSGAuthenticateUserSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSGAuthenticateUserSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSGAuthenticateUserSink * This);
                           HRESULT ( STDMETHODCALLTYPE *OnUserAuthenticated )(
            __RPC__in ITSGAuthenticateUserSink * This,
                       __RPC__in BSTR userName,
                       __RPC__in BSTR userDomain,
                       ULONG_PTR context,
                                 HANDLE_PTR userToken);
                           HRESULT ( STDMETHODCALLTYPE *OnUserAuthenticationFailed )(
            __RPC__in ITSGAuthenticateUserSink * This,
                       ULONG_PTR context,
                       HRESULT genericErrorCode,
                       HRESULT specificErrorCode);
                           HRESULT ( STDMETHODCALLTYPE *ReauthenticateUser )(
            __RPC__in ITSGAuthenticateUserSink * This,
                       ULONG_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *DisconnectUser )(
            __RPC__in ITSGAuthenticateUserSink * This,
                       ULONG_PTR context);
        END_INTERFACE
    } ITSGAuthenticateUserSinkVtbl;
    interface ITSGAuthenticateUserSink
    {
        CONST_VTBL struct ITSGAuthenticateUserSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUserAuthenticated(This,userName,userDomain,context,userToken) )
    ( (This)->lpVtbl -> OnUserAuthenticationFailed(This,context,genericErrorCode,specificErrorCode) )
    ( (This)->lpVtbl -> ReauthenticateUser(This,context) )
    ( (This)->lpVtbl -> DisconnectUser(This,context) )
EXTERN_C const IID IID_ITSGAuthenticationEngine;
    typedef struct ITSGAuthenticationEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSGAuthenticationEngine * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSGAuthenticationEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSGAuthenticationEngine * This);
                           HRESULT ( STDMETHODCALLTYPE *AuthenticateUser )(
            __RPC__in ITSGAuthenticationEngine * This,
                       GUID mainSessionId,
                       __RPC__in BYTE *cookieData,
                       ULONG numCookieBytes,
                       ULONG_PTR context,
                       __RPC__in_opt ITSGAuthenticateUserSink *pSink);
                           HRESULT ( STDMETHODCALLTYPE *CancelAuthentication )(
            __RPC__in ITSGAuthenticationEngine * This,
                       GUID mainSessionId,
                       ULONG_PTR context);
        END_INTERFACE
    } ITSGAuthenticationEngineVtbl;
    interface ITSGAuthenticationEngine
    {
        CONST_VTBL struct ITSGAuthenticationEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AuthenticateUser(This,mainSessionId,cookieData,numCookieBytes,context,pSink) )
    ( (This)->lpVtbl -> CancelAuthentication(This,mainSessionId,context) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tsgauthenticationengine_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsgauthenticationengine_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
