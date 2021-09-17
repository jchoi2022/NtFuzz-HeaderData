#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWbemTransport IWbemTransport;
typedef interface IWbemLevel1Login IWbemLevel1Login;
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
typedef interface IWbemAddressResolution IWbemAddressResolution;
typedef class WbemLevel1Login WbemLevel1Login;
typedef class WbemLocalAddrRes WbemLocalAddrRes;
typedef class WbemUninitializedClassObject WbemUninitializedClassObject;
typedef interface IWbemClientTransport IWbemClientTransport;
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
typedef class WbemDCOMTransport WbemDCOMTransport;
typedef interface IWbemConstructClassObject IWbemConstructClassObject;
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "wbemcli.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
extern RPC_IF_HANDLE __MIDL_itf_wbemtran_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemtran_0000_0000_v0_0_s_ifspec;
typedef
enum tag_WBEM_LOGIN_TYPE
    {
        WBEM_FLAG_INPROC_LOGIN = 0,
        WBEM_FLAG_LOCAL_LOGIN = 1,
        WBEM_FLAG_REMOTE_LOGIN = 2,
        WBEM_AUTHENTICATION_METHOD_MASK = 0xf,
        WBEM_FLAG_USE_MULTIPLE_CHALLENGES = 0x10
    } WBEM_LOGIN_TYPE;
typedef BYTE *WBEM_128BITS;
EXTERN_C const IID LIBID_WbemTransports_v1;
EXTERN_C const IID IID_IWbemTransport;
    typedef struct IWbemTransportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemTransport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemTransport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemTransport * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IWbemTransport * This);
        END_INTERFACE
    } IWbemTransportVtbl;
    interface IWbemTransport
    {
        CONST_VTBL struct IWbemTransportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This) )
EXTERN_C const IID IID_IWbemLevel1Login;
    typedef struct IWbemLevel1LoginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemLevel1Login * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemLevel1Login * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemLevel1Login * This);
        HRESULT ( STDMETHODCALLTYPE *EstablishPosition )(
            __RPC__in IWbemLevel1Login * This,
                                       __RPC__in_opt_string LPWSTR wszLocaleList,
                       DWORD dwNumLocales,
                        __RPC__out DWORD *reserved);
        HRESULT ( STDMETHODCALLTYPE *RequestChallenge )(
            __RPC__in IWbemLevel1Login * This,
                                       __RPC__in_opt_string LPWSTR wszNetworkResource,
                                       __RPC__in_opt_string LPWSTR wszUser,
                        __RPC__out WBEM_128BITS Nonce);
        HRESULT ( STDMETHODCALLTYPE *WBEMLogin )(
            __RPC__in IWbemLevel1Login * This,
                                       __RPC__in_opt_string LPWSTR wszPreferredLocale,
                               __RPC__in_opt WBEM_128BITS AccessToken,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                        __RPC__deref_out_opt IWbemServices **ppNamespace);
        HRESULT ( STDMETHODCALLTYPE *NTLMLogin )(
            __RPC__in IWbemLevel1Login * This,
                                       __RPC__in_opt_string LPWSTR wszNetworkResource,
                                       __RPC__in_opt_string LPWSTR wszPreferredLocale,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                        __RPC__deref_out_opt IWbemServices **ppNamespace);
        END_INTERFACE
    } IWbemLevel1LoginVtbl;
    interface IWbemLevel1Login
    {
        CONST_VTBL struct IWbemLevel1LoginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EstablishPosition(This,wszLocaleList,dwNumLocales,reserved) )
    ( (This)->lpVtbl -> RequestChallenge(This,wszNetworkResource,wszUser,Nonce) )
    ( (This)->lpVtbl -> WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace) )
    ( (This)->lpVtbl -> NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace) )
EXTERN_C const IID IID_IWbemConnectorLogin;
    typedef struct IWbemConnectorLoginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemConnectorLogin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemConnectorLogin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemConnectorLogin * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectorLogin )(
            __RPC__in IWbemConnectorLogin * This,
                                       __RPC__in_opt_string LPWSTR wszNetworkResource,
                                       __RPC__in_opt_string LPWSTR wszPreferredLocale,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **pInterface);
        END_INTERFACE
    } IWbemConnectorLoginVtbl;
    interface IWbemConnectorLogin
    {
        CONST_VTBL struct IWbemConnectorLoginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface) )
EXTERN_C const IID IID_IWbemAddressResolution;
    typedef struct IWbemAddressResolutionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemAddressResolution * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemAddressResolution * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemAddressResolution * This);
        HRESULT ( STDMETHODCALLTYPE *Resolve )(
            IWbemAddressResolution * This,
            _In_ LPWSTR wszNamespacePath,
            _Out_ LPWSTR wszAddressType,
            _Out_ DWORD *pdwAddressLength,
            _Out_ BYTE **pabBinaryAddress);
        END_INTERFACE
    } IWbemAddressResolutionVtbl;
    interface IWbemAddressResolution
    {
        CONST_VTBL struct IWbemAddressResolutionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress) )
EXTERN_C const CLSID CLSID_WbemLevel1Login;
class DECLSPEC_UUID("8BC3F05E-D86B-11d0-A075-00C04FB68820")
WbemLevel1Login;
EXTERN_C const CLSID CLSID_WbemLocalAddrRes;
class DECLSPEC_UUID("A1044801-8F7E-11d1-9E7C-00C04FC324A8")
WbemLocalAddrRes;
EXTERN_C const CLSID CLSID_WbemUninitializedClassObject;
class DECLSPEC_UUID("7a0227f6-7108-11d1-ad90-00c04fd8fdff")
WbemUninitializedClassObject;
EXTERN_C const IID IID_IWbemClientTransport;
    typedef struct IWbemClientTransportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemClientTransport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemClientTransport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemClientTransport * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectServer )(
            IWbemClientTransport * This,
                       BSTR strAddressType,
                       DWORD dwBinaryAddressLength,
                                BYTE *abBinaryAddress,
                       BSTR strNetworkResource,
                       BSTR strUser,
                       BSTR strPassword,
                       BSTR strLocale,
                       long lSecurityFlags,
                       BSTR strAuthority,
                       IWbemContext *pCtx,
                        IWbemServices **ppNamespace);
        END_INTERFACE
    } IWbemClientTransportVtbl;
    interface IWbemClientTransport
    {
        CONST_VTBL struct IWbemClientTransportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace) )
EXTERN_C const IID IID_IWbemClientConnectionTransport;
    typedef struct IWbemClientConnectionTransportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemClientConnectionTransport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemClientConnectionTransport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemClientConnectionTransport * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWbemClientConnectionTransport * This,
                       BSTR strAddressType,
                       DWORD dwBinaryAddressLength,
                                BYTE *abBinaryAddress,
                       const BSTR strObject,
                       const BSTR strUser,
                       const BSTR strPassword,
                       const BSTR strLocale,
                       long lFlags,
                       IWbemContext *pCtx,
                       REFIID riid,
                                void **pInterface,
                        IWbemCallResult **pCallRes);
        HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
            IWbemClientConnectionTransport * This,
                       BSTR strAddressType,
                       DWORD dwBinaryAddressLength,
                                BYTE *abBinaryAddress,
                       const BSTR strObject,
                       const BSTR strUser,
                       const BSTR strPassword,
                       const BSTR strLocale,
                       long lFlags,
                       IWbemContext *pCtx,
                       REFIID riid,
                       IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IWbemClientConnectionTransport * This,
                       long lFlags,
                       IWbemObjectSink *pHandler);
        END_INTERFACE
    } IWbemClientConnectionTransportVtbl;
    interface IWbemClientConnectionTransport
    {
        CONST_VTBL struct IWbemClientConnectionTransportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes) )
    ( (This)->lpVtbl -> OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler) )
    ( (This)->lpVtbl -> Cancel(This,lFlags,pHandler) )
EXTERN_C const CLSID CLSID_WbemDCOMTransport;
class DECLSPEC_UUID("F7CE2E13-8C90-11d1-9E7B-00C04FC324A8")
WbemDCOMTransport;
EXTERN_C const IID IID_IWbemConstructClassObject;
    typedef struct IWbemConstructClassObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemConstructClassObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemConstructClassObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemConstructClassObject * This);
        HRESULT ( STDMETHODCALLTYPE *SetInheritanceChain )(
            IWbemConstructClassObject * This,
            _In_ long lNumAntecedents,
            _In_reads_bytes_(lNumAntecedents) LPWSTR *awszAntecedents);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyOrigin )(
            IWbemConstructClassObject * This,
            _In_ LPCWSTR wszPropertyName,
            _In_ long lOriginIndex);
        HRESULT ( STDMETHODCALLTYPE *SetMethodOrigin )(
            IWbemConstructClassObject * This,
            _In_ LPCWSTR wszMethodName,
            _In_ long lOriginIndex);
        HRESULT ( STDMETHODCALLTYPE *SetServerNamespace )(
            IWbemConstructClassObject * This,
            _In_ LPCWSTR wszServer,
            _In_ LPCWSTR wszNamespace);
        END_INTERFACE
    } IWbemConstructClassObjectVtbl;
    interface IWbemConstructClassObject
    {
        CONST_VTBL struct IWbemConstructClassObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInheritanceChain(This,lNumAntecedents,awszAntecedents) )
    ( (This)->lpVtbl -> SetPropertyOrigin(This,wszPropertyName,lOriginIndex) )
    ( (This)->lpVtbl -> SetMethodOrigin(This,wszMethodName,lOriginIndex) )
    ( (This)->lpVtbl -> SetServerNamespace(This,wszServer,wszNamespace) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wbemtran_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemtran_0000_0008_v0_0_s_ifspec;
}
