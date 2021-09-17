#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSDAddress IWSDAddress;
typedef interface IWSDTransportAddress IWSDTransportAddress;
typedef interface IWSDMessageParameters IWSDMessageParameters;
typedef interface IWSDUdpMessageParameters IWSDUdpMessageParameters;
typedef interface IWSDUdpAddress IWSDUdpAddress;
typedef interface IWSDHttpMessageParameters IWSDHttpMessageParameters;
typedef interface IWSDHttpAddress IWSDHttpAddress;
typedef interface IWSDSSLClientCertificate IWSDSSLClientCertificate;
typedef interface IWSDHttpAuthParameters IWSDHttpAuthParameters;
typedef interface IWSDSignatureProperty IWSDSignatureProperty;
#include "objidl.h"
#include "wincrypt.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_wsdbase_0000_0000_0001
    {
        WSD_CONFIG_MAX_INBOUND_MESSAGE_SIZE = 1,
        WSD_CONFIG_MAX_OUTBOUND_MESSAGE_SIZE = 2,
        WSD_SECURITY_SSL_CERT_FOR_CLIENT_AUTH = 3,
        WSD_SECURITY_SSL_SERVER_CERT_VALIDATION = 4,
        WSD_SECURITY_SSL_CLIENT_CERT_VALIDATION = 5,
        WSD_SECURITY_SSL_NEGOTIATE_CLIENT_CERT = 6,
        WSD_SECURITY_COMPACTSIG_SIGNING_CERT = 7,
        WSD_SECURITY_COMPACTSIG_VALIDATION = 8,
        WSD_CONFIG_HOSTING_ADDRESSES = 9,
        WSD_CONFIG_DEVICE_ADDRESSES = 10,
        WSD_SECURITY_REQUIRE_HTTP_CLIENT_AUTH = 11,
        WSD_SECURITY_REQUIRE_CLIENT_CERT_OR_HTTP_CLIENT_AUTH = 12,
        WSD_SECURITY_USE_HTTP_CLIENT_AUTH = 13
    } WSD_CONFIG_PARAM_TYPE;
typedef struct _WSD_CONFIG_PARAM
    {
    WSD_CONFIG_PARAM_TYPE configParamType;
    PVOID pConfigData;
    DWORD dwConfigDataSize;
    } WSD_CONFIG_PARAM;
typedef struct _WSD_CONFIG_PARAM *PWSD_CONFIG_PARAM;
typedef struct _WSD_SECURITY_CERT_VALIDATION_V1
    {
    PCCERT_CONTEXT *certMatchArray;
    DWORD dwCertMatchArrayCount;
    HCERTSTORE hCertMatchStore;
    HCERTSTORE hCertIssuerStore;
    DWORD dwCertCheckOptions;
    } WSD_SECURITY_CERT_VALIDATION_V1;
typedef struct _WSD_SECURITY_CERT_VALIDATION
    {
    PCCERT_CONTEXT *certMatchArray;
    DWORD dwCertMatchArrayCount;
    HCERTSTORE hCertMatchStore;
    HCERTSTORE hCertIssuerStore;
    DWORD dwCertCheckOptions;
    LPCWSTR pszCNGHashAlgId;
    BYTE *pbCertHash;
    DWORD dwCertHashSize;
    } WSD_SECURITY_CERT_VALIDATION;
typedef WSD_SECURITY_CERT_VALIDATION *PWSD_SECURITY_CERT_VALIDATION;
typedef struct _WSD_SECURITY_SIGNATURE_VALIDATION
    {
    PCCERT_CONTEXT *signingCertArray;
    DWORD dwSigningCertArrayCount;
    HCERTSTORE hSigningCertStore;
    DWORD dwFlags;
    } WSD_SECURITY_SIGNATURE_VALIDATION;
typedef struct _WSD_SECURITY_SIGNATURE_VALIDATION *PWSD_SECURITY_SIGNATURE_VALIDATION;
typedef DWORD WSD_SECURITY_HTTP_AUTH_SCHEMES;
typedef DWORD *PWSD_SECURITY_HTTP_AUTH_SCHEMES;
typedef struct _WSD_CONFIG_ADDRESSES
    {
    IWSDAddress **addresses;
    DWORD dwAddressCount;
    } WSD_CONFIG_ADDRESSES;
typedef struct _WSD_CONFIG_ADDRESSES *PWSD_CONFIG_ADDRESSES;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDAddress;
    typedef struct IWSDAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDAddress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IWSDAddress * This,
            _Out_writes_(cchLength) LPWSTR pszBuffer,
                       DWORD cchLength,
                       BOOL fSafe);
        HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            IWSDAddress * This,
            _In_ LPCWSTR pszBuffer);
        END_INTERFACE
    } IWSDAddressVtbl;
    interface IWSDAddress
    {
        CONST_VTBL struct IWSDAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
    ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
EXTERN_C const IID IID_IWSDTransportAddress;
    typedef struct IWSDTransportAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDTransportAddress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDTransportAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDTransportAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IWSDTransportAddress * This,
            _Out_writes_(cchLength) LPWSTR pszBuffer,
                       DWORD cchLength,
                       BOOL fSafe);
        HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            IWSDTransportAddress * This,
            _In_ LPCWSTR pszBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetPort )(
            IWSDTransportAddress * This,
            _Out_ WORD *pwPort);
        HRESULT ( STDMETHODCALLTYPE *SetPort )(
            IWSDTransportAddress * This,
                       WORD wPort);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAddress )(
            IWSDTransportAddress * This,
            _Outptr_ LPCWSTR *ppszAddress);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAddressEx )(
            IWSDTransportAddress * This,
                       BOOL fSafe,
            _Outptr_ LPCWSTR *ppszAddress);
        HRESULT ( STDMETHODCALLTYPE *SetTransportAddress )(
            IWSDTransportAddress * This,
            _In_opt_ LPCWSTR pszAddress);
        END_INTERFACE
    } IWSDTransportAddressVtbl;
    interface IWSDTransportAddress
    {
        CONST_VTBL struct IWSDTransportAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
    ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
    ( (This)->lpVtbl -> GetPort(This,pwPort) )
    ( (This)->lpVtbl -> SetPort(This,wPort) )
    ( (This)->lpVtbl -> GetTransportAddress(This,ppszAddress) )
    ( (This)->lpVtbl -> GetTransportAddressEx(This,fSafe,ppszAddress) )
    ( (This)->lpVtbl -> SetTransportAddress(This,pszAddress) )
EXTERN_C const IID IID_IWSDMessageParameters;
    typedef struct IWSDMessageParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWSDMessageParameters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWSDMessageParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWSDMessageParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetLocalAddress )(
            __RPC__in IWSDMessageParameters * This,
                        __RPC__deref_out_opt IWSDAddress **ppAddress);
        HRESULT ( STDMETHODCALLTYPE *SetLocalAddress )(
            __RPC__in IWSDMessageParameters * This,
                       __RPC__in_opt IWSDAddress *pAddress);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteAddress )(
            __RPC__in IWSDMessageParameters * This,
                        __RPC__deref_out_opt IWSDAddress **ppAddress);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteAddress )(
            __RPC__in IWSDMessageParameters * This,
                       __RPC__in_opt IWSDAddress *pAddress);
        HRESULT ( STDMETHODCALLTYPE *GetLowerParameters )(
            __RPC__in IWSDMessageParameters * This,
                        __RPC__deref_out_opt IWSDMessageParameters **ppTxParams);
        END_INTERFACE
    } IWSDMessageParametersVtbl;
    interface IWSDMessageParameters
    {
        CONST_VTBL struct IWSDMessageParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLocalAddress(This,ppAddress) )
    ( (This)->lpVtbl -> SetLocalAddress(This,pAddress) )
    ( (This)->lpVtbl -> GetRemoteAddress(This,ppAddress) )
    ( (This)->lpVtbl -> SetRemoteAddress(This,pAddress) )
    ( (This)->lpVtbl -> GetLowerParameters(This,ppTxParams) )
HRESULT WINAPI
WSDCreateUdpMessageParameters(
    IWSDUdpMessageParameters** ppTxParams);
typedef struct _WSDUdpRetransmitParams
    {
    ULONG ulSendDelay;
    ULONG ulRepeat;
    ULONG ulRepeatMinDelay;
    ULONG ulRepeatMaxDelay;
    ULONG ulRepeatUpperDelay;
    } WSDUdpRetransmitParams;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDUdpMessageParameters;
    typedef struct IWSDUdpMessageParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWSDUdpMessageParameters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWSDUdpMessageParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWSDUdpMessageParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetLocalAddress )(
            __RPC__in IWSDUdpMessageParameters * This,
                        __RPC__deref_out_opt IWSDAddress **ppAddress);
        HRESULT ( STDMETHODCALLTYPE *SetLocalAddress )(
            __RPC__in IWSDUdpMessageParameters * This,
                       __RPC__in_opt IWSDAddress *pAddress);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteAddress )(
            __RPC__in IWSDUdpMessageParameters * This,
                        __RPC__deref_out_opt IWSDAddress **ppAddress);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteAddress )(
            __RPC__in IWSDUdpMessageParameters * This,
                       __RPC__in_opt IWSDAddress *pAddress);
        HRESULT ( STDMETHODCALLTYPE *GetLowerParameters )(
            __RPC__in IWSDUdpMessageParameters * This,
                        __RPC__deref_out_opt IWSDMessageParameters **ppTxParams);
        HRESULT ( STDMETHODCALLTYPE *SetRetransmitParams )(
            __RPC__in IWSDUdpMessageParameters * This,
                       __RPC__in const WSDUdpRetransmitParams *pParams);
        HRESULT ( STDMETHODCALLTYPE *GetRetransmitParams )(
            __RPC__in IWSDUdpMessageParameters * This,
                        __RPC__out WSDUdpRetransmitParams *pParams);
        END_INTERFACE
    } IWSDUdpMessageParametersVtbl;
    interface IWSDUdpMessageParameters
    {
        CONST_VTBL struct IWSDUdpMessageParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLocalAddress(This,ppAddress) )
    ( (This)->lpVtbl -> SetLocalAddress(This,pAddress) )
    ( (This)->lpVtbl -> GetRemoteAddress(This,ppAddress) )
    ( (This)->lpVtbl -> SetRemoteAddress(This,pAddress) )
    ( (This)->lpVtbl -> GetLowerParameters(This,ppTxParams) )
    ( (This)->lpVtbl -> SetRetransmitParams(This,pParams) )
    ( (This)->lpVtbl -> GetRetransmitParams(This,pParams) )
HRESULT WINAPI
WSDCreateUdpAddress(
    _Outptr_ IWSDUdpAddress** ppAddress);
#if 1
struct SOCKADDR_STORAGE;
#else
typedef void SOCKADDR_STORAGE;
#endif
typedef
enum _WSDUdpMessageType
    {
        ONE_WAY = 0,
        TWO_WAY = ( ONE_WAY + 1 )
    } WSDUdpMessageType;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDUdpAddress;
    typedef struct IWSDUdpAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDUdpAddress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDUdpAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDUdpAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IWSDUdpAddress * This,
            _Out_writes_(cchLength) LPWSTR pszBuffer,
                       DWORD cchLength,
                       BOOL fSafe);
        HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            IWSDUdpAddress * This,
            _In_ LPCWSTR pszBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetPort )(
            IWSDUdpAddress * This,
            _Out_ WORD *pwPort);
        HRESULT ( STDMETHODCALLTYPE *SetPort )(
            IWSDUdpAddress * This,
                       WORD wPort);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAddress )(
            IWSDUdpAddress * This,
            _Outptr_ LPCWSTR *ppszAddress);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAddressEx )(
            IWSDUdpAddress * This,
                       BOOL fSafe,
            _Outptr_ LPCWSTR *ppszAddress);
        HRESULT ( STDMETHODCALLTYPE *SetTransportAddress )(
            IWSDUdpAddress * This,
            _In_opt_ LPCWSTR pszAddress);
        HRESULT ( STDMETHODCALLTYPE *SetSockaddr )(
            IWSDUdpAddress * This,
                       const SOCKADDR_STORAGE *pSockAddr);
        HRESULT ( STDMETHODCALLTYPE *GetSockaddr )(
            IWSDUdpAddress * This,
            _Out_ SOCKADDR_STORAGE *pSockAddr);
        HRESULT ( STDMETHODCALLTYPE *SetExclusive )(
            IWSDUdpAddress * This,
                       BOOL fExclusive);
        HRESULT ( STDMETHODCALLTYPE *GetExclusive )(
            IWSDUdpAddress * This);
        HRESULT ( STDMETHODCALLTYPE *SetMessageType )(
            IWSDUdpAddress * This,
                       WSDUdpMessageType messageType);
        HRESULT ( STDMETHODCALLTYPE *GetMessageType )(
            IWSDUdpAddress * This,
            _Out_ WSDUdpMessageType *pMessageType);
        HRESULT ( STDMETHODCALLTYPE *SetTTL )(
            IWSDUdpAddress * This,
                       DWORD dwTTL);
        HRESULT ( STDMETHODCALLTYPE *GetTTL )(
            IWSDUdpAddress * This,
            _Out_ DWORD *pdwTTL);
        HRESULT ( STDMETHODCALLTYPE *SetAlias )(
            IWSDUdpAddress * This,
                       const GUID *pAlias);
        HRESULT ( STDMETHODCALLTYPE *GetAlias )(
            IWSDUdpAddress * This,
            _Out_ GUID *pAlias);
        END_INTERFACE
    } IWSDUdpAddressVtbl;
    interface IWSDUdpAddress
    {
        CONST_VTBL struct IWSDUdpAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
    ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
    ( (This)->lpVtbl -> GetPort(This,pwPort) )
    ( (This)->lpVtbl -> SetPort(This,wPort) )
    ( (This)->lpVtbl -> GetTransportAddress(This,ppszAddress) )
    ( (This)->lpVtbl -> GetTransportAddressEx(This,fSafe,ppszAddress) )
    ( (This)->lpVtbl -> SetTransportAddress(This,pszAddress) )
    ( (This)->lpVtbl -> SetSockaddr(This,pSockAddr) )
    ( (This)->lpVtbl -> GetSockaddr(This,pSockAddr) )
    ( (This)->lpVtbl -> SetExclusive(This,fExclusive) )
    ( (This)->lpVtbl -> GetExclusive(This) )
    ( (This)->lpVtbl -> SetMessageType(This,messageType) )
    ( (This)->lpVtbl -> GetMessageType(This,pMessageType) )
    ( (This)->lpVtbl -> SetTTL(This,dwTTL) )
    ( (This)->lpVtbl -> GetTTL(This,pdwTTL) )
    ( (This)->lpVtbl -> SetAlias(This,pAlias) )
    ( (This)->lpVtbl -> GetAlias(This,pAlias) )
HRESULT WINAPI
WSDCreateHttpMessageParameters(
    _Outptr_ IWSDHttpMessageParameters** ppTxParams);
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDHttpMessageParameters;
    typedef struct IWSDHttpMessageParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDHttpMessageParameters * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDHttpMessageParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDHttpMessageParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetLocalAddress )(
            IWSDHttpMessageParameters * This,
                        IWSDAddress **ppAddress);
        HRESULT ( STDMETHODCALLTYPE *SetLocalAddress )(
            IWSDHttpMessageParameters * This,
                       IWSDAddress *pAddress);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteAddress )(
            IWSDHttpMessageParameters * This,
                        IWSDAddress **ppAddress);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteAddress )(
            IWSDHttpMessageParameters * This,
                       IWSDAddress *pAddress);
        HRESULT ( STDMETHODCALLTYPE *GetLowerParameters )(
            IWSDHttpMessageParameters * This,
                        IWSDMessageParameters **ppTxParams);
        HRESULT ( STDMETHODCALLTYPE *SetInboundHttpHeaders )(
            IWSDHttpMessageParameters * This,
            _In_opt_ LPCWSTR pszHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetInboundHttpHeaders )(
            IWSDHttpMessageParameters * This,
            _Outptr_ LPCWSTR *ppszHeaders);
        HRESULT ( STDMETHODCALLTYPE *SetOutboundHttpHeaders )(
            IWSDHttpMessageParameters * This,
            _In_opt_ LPCWSTR pszHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetOutboundHttpHeaders )(
            IWSDHttpMessageParameters * This,
            _Outptr_ LPCWSTR *ppszHeaders);
        HRESULT ( STDMETHODCALLTYPE *SetID )(
            IWSDHttpMessageParameters * This,
            _In_opt_ LPCWSTR pszId);
        HRESULT ( STDMETHODCALLTYPE *GetID )(
            IWSDHttpMessageParameters * This,
            _Outptr_ LPCWSTR *ppszId);
        HRESULT ( STDMETHODCALLTYPE *SetContext )(
            IWSDHttpMessageParameters * This,
                       IUnknown *pContext);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            IWSDHttpMessageParameters * This,
            _Outptr_ IUnknown **ppContext);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            IWSDHttpMessageParameters * This);
        END_INTERFACE
    } IWSDHttpMessageParametersVtbl;
    interface IWSDHttpMessageParameters
    {
        CONST_VTBL struct IWSDHttpMessageParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLocalAddress(This,ppAddress) )
    ( (This)->lpVtbl -> SetLocalAddress(This,pAddress) )
    ( (This)->lpVtbl -> GetRemoteAddress(This,ppAddress) )
    ( (This)->lpVtbl -> SetRemoteAddress(This,pAddress) )
    ( (This)->lpVtbl -> GetLowerParameters(This,ppTxParams) )
    ( (This)->lpVtbl -> SetInboundHttpHeaders(This,pszHeaders) )
    ( (This)->lpVtbl -> GetInboundHttpHeaders(This,ppszHeaders) )
    ( (This)->lpVtbl -> SetOutboundHttpHeaders(This,pszHeaders) )
    ( (This)->lpVtbl -> GetOutboundHttpHeaders(This,ppszHeaders) )
    ( (This)->lpVtbl -> SetID(This,pszId) )
    ( (This)->lpVtbl -> GetID(This,ppszId) )
    ( (This)->lpVtbl -> SetContext(This,pContext) )
    ( (This)->lpVtbl -> GetContext(This,ppContext) )
    ( (This)->lpVtbl -> Clear(This) )
HRESULT WINAPI
WSDCreateHttpAddress(
    _Outptr_ IWSDHttpAddress** ppAddress);
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDHttpAddress;
    typedef struct IWSDHttpAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDHttpAddress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDHttpAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDHttpAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IWSDHttpAddress * This,
            _Out_writes_(cchLength) LPWSTR pszBuffer,
                       DWORD cchLength,
                       BOOL fSafe);
        HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            IWSDHttpAddress * This,
            _In_ LPCWSTR pszBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetPort )(
            IWSDHttpAddress * This,
            _Out_ WORD *pwPort);
        HRESULT ( STDMETHODCALLTYPE *SetPort )(
            IWSDHttpAddress * This,
                       WORD wPort);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAddress )(
            IWSDHttpAddress * This,
            _Outptr_ LPCWSTR *ppszAddress);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAddressEx )(
            IWSDHttpAddress * This,
                       BOOL fSafe,
            _Outptr_ LPCWSTR *ppszAddress);
        HRESULT ( STDMETHODCALLTYPE *SetTransportAddress )(
            IWSDHttpAddress * This,
            _In_opt_ LPCWSTR pszAddress);
        HRESULT ( STDMETHODCALLTYPE *GetSecure )(
            IWSDHttpAddress * This);
        HRESULT ( STDMETHODCALLTYPE *SetSecure )(
            IWSDHttpAddress * This,
                       BOOL fSecure);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            IWSDHttpAddress * This,
            _Outptr_ LPCWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *SetPath )(
            IWSDHttpAddress * This,
            _In_ LPCWSTR pszPath);
        END_INTERFACE
    } IWSDHttpAddressVtbl;
    interface IWSDHttpAddress
    {
        CONST_VTBL struct IWSDHttpAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
    ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
    ( (This)->lpVtbl -> GetPort(This,pwPort) )
    ( (This)->lpVtbl -> SetPort(This,wPort) )
    ( (This)->lpVtbl -> GetTransportAddress(This,ppszAddress) )
    ( (This)->lpVtbl -> GetTransportAddressEx(This,fSafe,ppszAddress) )
    ( (This)->lpVtbl -> SetTransportAddress(This,pszAddress) )
    ( (This)->lpVtbl -> GetSecure(This) )
    ( (This)->lpVtbl -> SetSecure(This,fSecure) )
    ( (This)->lpVtbl -> GetPath(This,ppszPath) )
    ( (This)->lpVtbl -> SetPath(This,pszPath) )
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDSSLClientCertificate;
    typedef struct IWSDSSLClientCertificateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDSSLClientCertificate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDSSLClientCertificate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDSSLClientCertificate * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCertificate )(
            IWSDSSLClientCertificate * This,
            _Outptr_ PCCERT_CONTEXT *ppCertContext);
        HRESULT ( STDMETHODCALLTYPE *GetMappedAccessToken )(
            IWSDSSLClientCertificate * This,
            _Out_ HANDLE *phToken);
        END_INTERFACE
    } IWSDSSLClientCertificateVtbl;
    interface IWSDSSLClientCertificate
    {
        CONST_VTBL struct IWSDSSLClientCertificateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClientCertificate(This,ppCertContext) )
    ( (This)->lpVtbl -> GetMappedAccessToken(This,phToken) )
EXTERN_C const IID IID_IWSDHttpAuthParameters;
    typedef struct IWSDHttpAuthParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDHttpAuthParameters * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDHttpAuthParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDHttpAuthParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientAccessToken )(
            IWSDHttpAuthParameters * This,
            _Out_ HANDLE *phToken);
        HRESULT ( STDMETHODCALLTYPE *GetAuthType )(
            IWSDHttpAuthParameters * This,
            _Out_ PWSD_SECURITY_HTTP_AUTH_SCHEMES pAuthType);
        END_INTERFACE
    } IWSDHttpAuthParametersVtbl;
    interface IWSDHttpAuthParameters
    {
        CONST_VTBL struct IWSDHttpAuthParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClientAccessToken(This,phToken) )
    ( (This)->lpVtbl -> GetAuthType(This,pAuthType) )
EXTERN_C const IID IID_IWSDSignatureProperty;
    typedef struct IWSDSignaturePropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDSignatureProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDSignatureProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDSignatureProperty * This);
        HRESULT ( STDMETHODCALLTYPE *IsMessageSigned )(
            IWSDSignatureProperty * This,
            _Out_ BOOL *pbSigned);
        HRESULT ( STDMETHODCALLTYPE *IsMessageSignatureTrusted )(
            IWSDSignatureProperty * This,
            _Out_ BOOL *pbSignatureTrusted);
        HRESULT ( STDMETHODCALLTYPE *GetKeyInfo )(
            IWSDSignatureProperty * This,
            _Out_writes_bytes_to_opt_(*pdwKeyInfoSize, *pdwKeyInfoSize) BYTE *pbKeyInfo,
            _Inout_ DWORD *pdwKeyInfoSize);
        HRESULT ( STDMETHODCALLTYPE *GetSignature )(
            IWSDSignatureProperty * This,
            _Out_writes_bytes_to_opt_(*pdwSignatureSize, *pdwSignatureSize) BYTE *pbSignature,
            _Inout_ DWORD *pdwSignatureSize);
        HRESULT ( STDMETHODCALLTYPE *GetSignedInfoHash )(
            IWSDSignatureProperty * This,
            _Out_writes_bytes_to_opt_(*pdwHashSize, *pdwHashSize) BYTE *pbSignedInfoHash,
            _Inout_ DWORD *pdwHashSize);
        END_INTERFACE
    } IWSDSignaturePropertyVtbl;
    interface IWSDSignatureProperty
    {
        CONST_VTBL struct IWSDSignaturePropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsMessageSigned(This,pbSigned) )
    ( (This)->lpVtbl -> IsMessageSignatureTrusted(This,pbSignatureTrusted) )
    ( (This)->lpVtbl -> GetKeyInfo(This,pbKeyInfo,pdwKeyInfoSize) )
    ( (This)->lpVtbl -> GetSignature(This,pbSignature,pdwSignatureSize) )
    ( (This)->lpVtbl -> GetSignedInfoHash(This,pbSignedInfoHash,pdwHashSize) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0010_v0_0_s_ifspec;
}
