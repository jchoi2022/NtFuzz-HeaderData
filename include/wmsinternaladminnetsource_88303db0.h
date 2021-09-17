#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMSInternalAdminNetSource IWMSInternalAdminNetSource;
typedef interface IWMSInternalAdminNetSource2 IWMSInternalAdminNetSource2;
typedef interface IWMSInternalAdminNetSource3 IWMSInternalAdminNetSource3;
#include "oaidl.h"
#include "wmnetsourcecreator.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( IID_IWMSInternalAdminNetSource, 0x8BB23E5F,0xD127,0x4afb,0x8D,0x02,0xAE,0x5B,0x66,0xD5,0x4C,0x78 );
EXTERN_GUID( IID_IWMSInternalAdminNetSource2, 0xE74D58C3,0xCF77,0x4b51,0xAF,0x17,0x74,0x46,0x87,0xC4,0x3E,0xAE );
EXTERN_GUID( IID_IWMSInternalAdminNetSource3, 0x6b63d08e,0x4590,0x44af,0x9e,0xb3,0x57,0xff,0x1e,0x73,0xbf,0x80 );
typedef DECLSPEC_UUID("068A6457-4099-4c72-9AA9-9105C1C03177")
enum NETSOURCE_URLCREDPOLICY_SETTINGS
    {
        NETSOURCE_URLCREDPOLICY_SETTING_SILENTLOGONOK = 0,
        NETSOURCE_URLCREDPOLICY_SETTING_MUSTPROMPTUSER = 1,
        NETSOURCE_URLCREDPOLICY_SETTING_ANONYMOUSONLY = 2
    } NETSOURCE_URLCREDPOLICY_SETTINGS;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMSInternalAdminNetSource;
    typedef struct IWMSInternalAdminNetSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSInternalAdminNetSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSInternalAdminNetSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSInternalAdminNetSource * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IWMSInternalAdminNetSource * This,
                       IUnknown *pSharedNamespace,
                       IUnknown *pNamespaceNode,
                       INSNetSourceCreator *pNetSourceCreator,
                       BOOL fEmbeddedInServer);
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceCreator )(
            IWMSInternalAdminNetSource * This,
                        INSNetSourceCreator **ppNetSourceCreator);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            IWMSInternalAdminNetSource * This,
                       BSTR bstrRealm,
                       BSTR bstrName,
                       BSTR bstrPassword,
                       BOOL fPersist,
                       BOOL fConfirmedGood);
        HRESULT ( STDMETHODCALLTYPE *GetCredentials )(
            IWMSInternalAdminNetSource * This,
                       BSTR bstrRealm,
                        BSTR *pbstrName,
                        BSTR *pbstrPassword,
                        BOOL *pfConfirmedGood);
        HRESULT ( STDMETHODCALLTYPE *DeleteCredentials )(
            IWMSInternalAdminNetSource * This,
                       BSTR bstrRealm);
        HRESULT ( STDMETHODCALLTYPE *GetCredentialFlags )(
            IWMSInternalAdminNetSource * This,
                        DWORD *lpdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetCredentialFlags )(
            IWMSInternalAdminNetSource * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURL )(
            IWMSInternalAdminNetSource * This,
                       BSTR bstrProtocol,
                       BSTR bstrHost,
                        BOOL *pfProxyEnabled,
                        BSTR *pbstrProxyServer,
                        DWORD *pdwProxyPort,
                            DWORD *pdwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *RegisterProxyFailure )(
            IWMSInternalAdminNetSource * This,
                       HRESULT hrParam,
                       DWORD dwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *ShutdownProxyContext )(
            IWMSInternalAdminNetSource * This,
                       DWORD dwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *IsUsingIE )(
            IWMSInternalAdminNetSource * This,
                       DWORD dwProxyContext,
                        BOOL *pfIsUsingIE);
        END_INTERFACE
    } IWMSInternalAdminNetSourceVtbl;
    interface IWMSInternalAdminNetSource
    {
        CONST_VTBL struct IWMSInternalAdminNetSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSharedNamespace,pNamespaceNode,pNetSourceCreator,fEmbeddedInServer) )
    ( (This)->lpVtbl -> GetNetSourceCreator(This,ppNetSourceCreator) )
    ( (This)->lpVtbl -> SetCredentials(This,bstrRealm,bstrName,bstrPassword,fPersist,fConfirmedGood) )
    ( (This)->lpVtbl -> GetCredentials(This,bstrRealm,pbstrName,pbstrPassword,pfConfirmedGood) )
    ( (This)->lpVtbl -> DeleteCredentials(This,bstrRealm) )
    ( (This)->lpVtbl -> GetCredentialFlags(This,lpdwFlags) )
    ( (This)->lpVtbl -> SetCredentialFlags(This,dwFlags) )
    ( (This)->lpVtbl -> FindProxyForURL(This,bstrProtocol,bstrHost,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) )
    ( (This)->lpVtbl -> RegisterProxyFailure(This,hrParam,dwProxyContext) )
    ( (This)->lpVtbl -> ShutdownProxyContext(This,dwProxyContext) )
    ( (This)->lpVtbl -> IsUsingIE(This,dwProxyContext,pfIsUsingIE) )
EXTERN_C const IID IID_IWMSInternalAdminNetSource2;
    typedef struct IWMSInternalAdminNetSource2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSInternalAdminNetSource2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSInternalAdminNetSource2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSInternalAdminNetSource2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetCredentialsEx )(
            IWMSInternalAdminNetSource2 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy,
                       BSTR bstrName,
                       BSTR bstrPassword,
                       BOOL fPersist,
                       BOOL fConfirmedGood);
        HRESULT ( STDMETHODCALLTYPE *GetCredentialsEx )(
            IWMSInternalAdminNetSource2 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy,
                        NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
                        BSTR *pbstrName,
                        BSTR *pbstrPassword,
                        BOOL *pfConfirmedGood);
        HRESULT ( STDMETHODCALLTYPE *DeleteCredentialsEx )(
            IWMSInternalAdminNetSource2 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy);
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURLEx )(
            IWMSInternalAdminNetSource2 * This,
                       BSTR bstrProtocol,
                       BSTR bstrHost,
                       BSTR bstrUrl,
                        BOOL *pfProxyEnabled,
                        BSTR *pbstrProxyServer,
                        DWORD *pdwProxyPort,
                            DWORD *pdwProxyContext);
        END_INTERFACE
    } IWMSInternalAdminNetSource2Vtbl;
    interface IWMSInternalAdminNetSource2
    {
        CONST_VTBL struct IWMSInternalAdminNetSource2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) )
    ( (This)->lpVtbl -> GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) )
    ( (This)->lpVtbl -> DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) )
    ( (This)->lpVtbl -> FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) )
EXTERN_C const IID IID_IWMSInternalAdminNetSource3;
    typedef struct IWMSInternalAdminNetSource3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSInternalAdminNetSource3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSInternalAdminNetSource3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSInternalAdminNetSource3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetCredentialsEx )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy,
                       BSTR bstrName,
                       BSTR bstrPassword,
                       BOOL fPersist,
                       BOOL fConfirmedGood);
        HRESULT ( STDMETHODCALLTYPE *GetCredentialsEx )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy,
                        NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
                        BSTR *pbstrName,
                        BSTR *pbstrPassword,
                        BOOL *pfConfirmedGood);
        HRESULT ( STDMETHODCALLTYPE *DeleteCredentialsEx )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy);
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURLEx )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrProtocol,
                       BSTR bstrHost,
                       BSTR bstrUrl,
                        BOOL *pfProxyEnabled,
                        BSTR *pbstrProxyServer,
                        DWORD *pdwProxyPort,
                            DWORD *pdwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceCreator2 )(
            IWMSInternalAdminNetSource3 * This,
                        IUnknown **ppNetSourceCreator);
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURLEx2 )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrProtocol,
                       BSTR bstrHost,
                       BSTR bstrUrl,
                        BOOL *pfProxyEnabled,
                        BSTR *pbstrProxyServer,
                        DWORD *pdwProxyPort,
                            QWORD *pqwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *RegisterProxyFailure2 )(
            IWMSInternalAdminNetSource3 * This,
                       HRESULT hrParam,
                       QWORD qwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *ShutdownProxyContext2 )(
            IWMSInternalAdminNetSource3 * This,
                       QWORD qwProxyContext);
        HRESULT ( STDMETHODCALLTYPE *IsUsingIE2 )(
            IWMSInternalAdminNetSource3 * This,
                       QWORD qwProxyContext,
                        BOOL *pfIsUsingIE);
        HRESULT ( STDMETHODCALLTYPE *SetCredentialsEx2 )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy,
                       BSTR bstrName,
                       BSTR bstrPassword,
                       BOOL fPersist,
                       BOOL fConfirmedGood,
                       BOOL fClearTextAuthentication);
        HRESULT ( STDMETHODCALLTYPE *GetCredentialsEx2 )(
            IWMSInternalAdminNetSource3 * This,
                       BSTR bstrRealm,
                       BSTR bstrUrl,
                       BOOL fProxy,
                       BOOL fClearTextAuthentication,
                        NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
                        BSTR *pbstrName,
                        BSTR *pbstrPassword,
                        BOOL *pfConfirmedGood);
        END_INTERFACE
    } IWMSInternalAdminNetSource3Vtbl;
    interface IWMSInternalAdminNetSource3
    {
        CONST_VTBL struct IWMSInternalAdminNetSource3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) )
    ( (This)->lpVtbl -> GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) )
    ( (This)->lpVtbl -> DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) )
    ( (This)->lpVtbl -> FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) )
    ( (This)->lpVtbl -> GetNetSourceCreator2(This,ppNetSourceCreator) )
    ( (This)->lpVtbl -> FindProxyForURLEx2(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pqwProxyContext) )
    ( (This)->lpVtbl -> RegisterProxyFailure2(This,hrParam,qwProxyContext) )
    ( (This)->lpVtbl -> ShutdownProxyContext2(This,qwProxyContext) )
    ( (This)->lpVtbl -> IsUsingIE2(This,qwProxyContext,pfIsUsingIE) )
    ( (This)->lpVtbl -> SetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood,fClearTextAuthentication) )
    ( (This)->lpVtbl -> GetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,fClearTextAuthentication,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0003_v0_0_s_ifspec;
}
