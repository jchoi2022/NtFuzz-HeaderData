#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPersistMoniker IPersistMoniker;
typedef interface IMonikerProp IMonikerProp;
typedef interface IBindProtocol IBindProtocol;
typedef interface IBinding IBinding;
typedef interface IBindStatusCallback IBindStatusCallback;
typedef interface IBindStatusCallbackEx IBindStatusCallbackEx;
typedef interface IAuthenticate IAuthenticate;
typedef interface IAuthenticateEx IAuthenticateEx;
typedef interface IHttpNegotiate IHttpNegotiate;
typedef interface IHttpNegotiate2 IHttpNegotiate2;
typedef interface IHttpNegotiate3 IHttpNegotiate3;
typedef interface IWinInetFileStream IWinInetFileStream;
typedef interface IWindowForBindingUI IWindowForBindingUI;
typedef interface ICodeInstall ICodeInstall;
typedef interface IUri IUri;
typedef interface IUriContainer IUriContainer;
typedef interface IUriBuilder IUriBuilder;
typedef interface IUriBuilderFactory IUriBuilderFactory;
typedef interface IWinInetInfo IWinInetInfo;
typedef interface IHttpSecurity IHttpSecurity;
typedef interface IWinInetHttpInfo IWinInetHttpInfo;
typedef interface IWinInetHttpTimeouts IWinInetHttpTimeouts;
typedef interface IWinInetCacheHints IWinInetCacheHints;
typedef interface IWinInetCacheHints2 IWinInetCacheHints2;
typedef interface IBindHost IBindHost;
typedef interface IInternet IInternet;
typedef interface IInternetBindInfo IInternetBindInfo;
typedef interface IInternetBindInfoEx IInternetBindInfoEx;
typedef interface IInternetProtocolRoot IInternetProtocolRoot;
typedef interface IInternetProtocol IInternetProtocol;
typedef interface IInternetProtocolEx IInternetProtocolEx;
typedef interface IInternetProtocolSink IInternetProtocolSink;
typedef interface IInternetProtocolSinkStackable IInternetProtocolSinkStackable;
typedef interface IInternetSession IInternetSession;
typedef interface IInternetThreadSwitch IInternetThreadSwitch;
typedef interface IInternetPriority IInternetPriority;
typedef interface IInternetProtocolInfo IInternetProtocolInfo;
typedef interface IInternetSecurityMgrSite IInternetSecurityMgrSite;
typedef interface IInternetSecurityManager IInternetSecurityManager;
typedef interface IInternetSecurityManagerEx IInternetSecurityManagerEx;
typedef interface IInternetSecurityManagerEx2 IInternetSecurityManagerEx2;
typedef interface IZoneIdentifier IZoneIdentifier;
typedef interface IZoneIdentifier2 IZoneIdentifier2;
typedef interface IInternetHostSecurityManager IInternetHostSecurityManager;
typedef interface IInternetZoneManager IInternetZoneManager;
typedef interface IInternetZoneManagerEx IInternetZoneManagerEx;
typedef interface IInternetZoneManagerEx2 IInternetZoneManagerEx2;
typedef interface ISoftDistExt ISoftDistExt;
typedef interface ICatalogFileInfo ICatalogFileInfo;
typedef interface IDataFilter IDataFilter;
typedef interface IEncodingFilterFactory IEncodingFilterFactory;
typedef interface IWrappedProtocol IWrappedProtocol;
typedef interface IGetBindHandle IGetBindHandle;
typedef interface IBindCallbackRedirect IBindCallbackRedirect;
typedef interface IBindHttpSecurity IBindHttpSecurity;
#include "objidl.h"
#include "oleidl.h"
#include "servprov.h"
#include "msxml.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const IID CLSID_SBS_StdURLMoniker;
EXTERN_C const IID CLSID_SBS_HttpProtocol;
EXTERN_C const IID CLSID_SBS_FtpProtocol;
EXTERN_C const IID CLSID_SBS_GopherProtocol;
EXTERN_C const IID CLSID_SBS_HttpSProtocol;
EXTERN_C const IID CLSID_SBS_FileProtocol;
EXTERN_C const IID CLSID_SBS_MkProtocol;
EXTERN_C const IID CLSID_SBS_UrlMkBindCtx;
EXTERN_C const IID CLSID_SBS_SoftDistExt;
EXTERN_C const IID CLSID_SBS_CdlProtocol;
EXTERN_C const IID CLSID_SBS_ClassInstallFilter;
EXTERN_C const IID CLSID_SBS_InternetSecurityManager;
EXTERN_C const IID CLSID_SBS_InternetZoneManager;
EXTERN_C const IID IID_IAsyncMoniker;
EXTERN_C const IID CLSID_StdURLMoniker;
EXTERN_C const IID CLSID_HttpProtocol;
EXTERN_C const IID CLSID_FtpProtocol;
EXTERN_C const IID CLSID_GopherProtocol;
EXTERN_C const IID CLSID_HttpSProtocol;
EXTERN_C const IID CLSID_FileProtocol;
EXTERN_C const IID CLSID_ResProtocol;
EXTERN_C const IID CLSID_AboutProtocol;
EXTERN_C const IID CLSID_JSProtocol;
EXTERN_C const IID CLSID_MailtoProtocol;
EXTERN_C const IID CLSID_IE4_PROTOCOLS;
EXTERN_C const IID CLSID_MkProtocol;
EXTERN_C const IID CLSID_StdURLProtocol;
EXTERN_C const IID CLSID_TBAuthProtocol;
EXTERN_C const IID CLSID_UrlMkBindCtx;
EXTERN_C const IID CLSID_CdlProtocol;
EXTERN_C const IID CLSID_ClassInstallFilter;
EXTERN_C const IID IID_IAsyncBindCtx;
STDAPI CreateURLMoniker(_In_opt_ LPMONIKER pMkCtx, _In_ LPCWSTR szURL, _Outptr_ LPMONIKER FAR * ppmk);
STDAPI CreateURLMonikerEx(_In_opt_ LPMONIKER pMkCtx, _In_ LPCWSTR szURL, _Outptr_ LPMONIKER FAR * ppmk, DWORD dwFlags);
STDAPI GetClassURL(_In_ LPCWSTR szURL, _Out_ CLSID *pClsID);
STDAPI CreateAsyncBindCtx(DWORD reserved, _In_ IBindStatusCallback *pBSCb,
                                _In_opt_ IEnumFORMATETC *pEFetc, _Outptr_ IBindCtx **ppBC);
STDAPI CreateURLMonikerEx2(_In_opt_ LPMONIKER pMkCtx, _In_ IUri* pUri, _Outptr_ LPMONIKER FAR * ppmk, DWORD dwFlags);
STDAPI CreateAsyncBindCtxEx(_In_ IBindCtx *pbc, DWORD dwOptions, _In_ IBindStatusCallback *pBSCb, _In_opt_ IEnumFORMATETC *pEnum,
                            _Outptr_ IBindCtx **ppBC, DWORD reserved);
STDAPI MkParseDisplayNameEx(_In_ IBindCtx *pbc, _In_ LPCWSTR szDisplayName, _Out_ _Out_range_(<=, _String_length_(szDisplayName)) ULONG *pchEaten,
                                _Outptr_ LPMONIKER *ppmk);
STDAPI RegisterBindStatusCallback(_In_ LPBC pBC, _In_ IBindStatusCallback *pBSCb,
                                _Outptr_ IBindStatusCallback** ppBSCBPrev, DWORD dwReserved);
STDAPI RevokeBindStatusCallback(_In_ LPBC pBC, _In_ IBindStatusCallback *pBSCb);
STDAPI GetClassFileOrMime(_In_opt_ LPBC pBC, _In_opt_ LPCWSTR szFilename, _In_reads_bytes_opt_(cbSize) LPVOID pBuffer, DWORD cbSize, _In_opt_ LPCWSTR szMime, DWORD dwReserved, _Out_ CLSID *pclsid);
STDAPI IsValidURL(_In_opt_ LPBC pBC, _In_ LPCWSTR szURL, DWORD dwReserved);
STDAPI CoGetClassObjectFromURL( _In_ REFCLSID rCLASSID,
            _In_ LPCWSTR szCODE, DWORD dwFileVersionMS,
            DWORD dwFileVersionLS, _In_ LPCWSTR szTYPE,
            _In_ LPBINDCTX pBindCtx, DWORD dwClsContext,
            _Reserved_ LPVOID pvReserved, REFIID riid, _Outptr_ LPVOID * ppv);
STDAPI IEInstallScope(_Out_ LPDWORD pdwScope);
STDAPI FaultInIEFeature( HWND hWnd,
            _In_ uCLSSPEC *pClassSpec,
            _Inout_opt_ QUERYCONTEXT *pQuery, DWORD dwFlags);
STDAPI GetComponentIDFromCLSSPEC(_In_ uCLSSPEC *pClassspec,
            _Outptr_ LPSTR * ppszComponentID);
STDAPI IsAsyncMoniker(_In_ IMoniker* pmk);
STDAPI CreateURLBinding(LPCWSTR lpszUrl, _In_ IBindCtx *pbc, _Inout_ IBinding **ppBdg);
STDAPI RegisterMediaTypes(_In_ _In_range_(>, 0) UINT ctypes, _In_reads_(ctypes) const LPCSTR* rgszTypes, _Out_writes_(ctypes) CLIPFORMAT* rgcfTypes);
STDAPI FindMediaType(_In_ LPCSTR rgszTypes, _Out_ CLIPFORMAT* rgcfTypes);
STDAPI CreateFormatEnumerator( _In_ _In_range_(>, 0) UINT cfmtetc, _In_reads_(cfmtetc) FORMATETC* rgfmtetc, _Outptr_ IEnumFORMATETC** ppenumfmtetc);
STDAPI RegisterFormatEnumerator(_In_ LPBC pBC, _In_ IEnumFORMATETC *pEFetc, DWORD reserved);
STDAPI RevokeFormatEnumerator(_In_ LPBC pBC, _In_ IEnumFORMATETC *pEFetc);
STDAPI RegisterMediaTypeClass(_In_ LPBC pBC, _In_ _In_range_(>, 0) UINT ctypes, _In_reads_(ctypes) const LPCSTR* rgszTypes, _In_reads_(ctypes) CLSID *rgclsID, DWORD reserved);
STDAPI FindMediaTypeClass(_In_ LPBC pBC, _In_ LPCSTR szType, _Out_ CLSID *pclsID, DWORD reserved);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI UrlMkSetSessionOption(DWORD dwOption, _In_reads_bytes_opt_(dwBufferLength) LPVOID pBuffer, DWORD dwBufferLength, _Reserved_ DWORD dwReserved);
STDAPI UrlMkGetSessionOption(DWORD dwOption, _Out_writes_bytes_to_opt_(dwBufferLength,*pdwBufferLengthOut) LPVOID pBuffer, DWORD dwBufferLength, _Out_ DWORD *pdwBufferLengthOut, _Reserved_ DWORD dwReserved);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI FindMimeFromData(
    _In_opt_ LPBC pBC,
    _In_opt_ LPCWSTR pwzUrl,
    _In_reads_bytes_opt_(cbSize) LPVOID pBuffer,
                                 DWORD cbSize,
    _In_opt_ LPCWSTR pwzMimeProposed,
                                 DWORD dwMimeFlags,
    _Outptr_ LPWSTR *ppwzMimeOut,
    _Reserved_ DWORD dwReserved);
STDAPI ObtainUserAgentString(
                                         DWORD dwOption,
    _Out_writes_to_(*cbSize, *cbSize) LPSTR pszUAOut,
    _Inout_ DWORD *cbSize);
STDAPI CompareSecurityIds(_In_reads_(dwLen1) BYTE* pbSecurityId1, _In_ DWORD dwLen1, _In_reads_(dwLen2) BYTE* pbSecurityId2, _In_ DWORD dwLen2, _In_ DWORD dwReserved);
STDAPI CompatFlagsFromClsid(_In_ CLSID *pclsid, _Out_ LPDWORD pdwCompatFlags, _Out_ LPDWORD pdwMiscStatusFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IPersistMoniker *LPPERSISTMONIKER;
EXTERN_C const IID IID_IPersistMoniker;
    typedef struct IPersistMonikerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistMoniker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistMoniker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistMoniker * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistMoniker * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistMoniker * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistMoniker * This,
                       BOOL fFullyAvailable,
                       __RPC__in_opt IMoniker *pimkName,
                       __RPC__in_opt LPBC pibc,
                       DWORD grfMode);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistMoniker * This,
                       __RPC__in_opt IMoniker *pimkName,
                       __RPC__in_opt LPBC pbc,
                       BOOL fRemember);
        HRESULT ( STDMETHODCALLTYPE *SaveCompleted )(
            __RPC__in IPersistMoniker * This,
                       __RPC__in_opt IMoniker *pimkName,
                       __RPC__in_opt LPBC pibc);
        HRESULT ( STDMETHODCALLTYPE *GetCurMoniker )(
            __RPC__in IPersistMoniker * This,
                        __RPC__deref_out_opt IMoniker **ppimkName);
        END_INTERFACE
    } IPersistMonikerVtbl;
    interface IPersistMoniker
    {
        CONST_VTBL struct IPersistMonikerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,fFullyAvailable,pimkName,pibc,grfMode) )
    ( (This)->lpVtbl -> Save(This,pimkName,pbc,fRemember) )
    ( (This)->lpVtbl -> SaveCompleted(This,pimkName,pibc) )
    ( (This)->lpVtbl -> GetCurMoniker(This,ppimkName) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IMonikerProp *LPMONIKERPROP;
typedef
enum __MIDL_IMonikerProp_0001
    {
        MIMETYPEPROP = 0,
        USE_SRC_URL = 0x1,
        CLASSIDPROP = 0x2,
        TRUSTEDDOWNLOADPROP = 0x3,
        POPUPLEVELPROP = 0x4
    } MONIKERPROPERTY;
EXTERN_C const IID IID_IMonikerProp;
    typedef struct IMonikerPropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMonikerProp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMonikerProp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMonikerProp * This);
        HRESULT ( STDMETHODCALLTYPE *PutProperty )(
            __RPC__in IMonikerProp * This,
                       MONIKERPROPERTY mkp,
                       __RPC__in LPCWSTR val);
        END_INTERFACE
    } IMonikerPropVtbl;
    interface IMonikerProp
    {
        CONST_VTBL struct IMonikerPropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutProperty(This,mkp,val) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0002_v0_0_s_ifspec;
typedef IBindProtocol *LPBINDPROTOCOL;
EXTERN_C const IID IID_IBindProtocol;
    typedef struct IBindProtocolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBindProtocol * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBindProtocol * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBindProtocol * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBinding )(
            IBindProtocol * This,
                       LPCWSTR szUrl,
                       IBindCtx *pbc,
                        IBinding **ppb);
        END_INTERFACE
    } IBindProtocolVtbl;
    interface IBindProtocol
    {
        CONST_VTBL struct IBindProtocolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateBinding(This,szUrl,pbc,ppb) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0003_v0_0_s_ifspec;
typedef __RPC_unique_pointer IBinding *LPBINDING;
EXTERN_C const IID IID_IBinding;
    typedef struct IBindingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBinding * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBinding * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBinding * This);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IBinding * This);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IBinding * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IBinding * This);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            __RPC__in IBinding * This,
                       LONG nPriority);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBinding * This,
                        __RPC__out LONG *pnPriority);
                      HRESULT ( STDMETHODCALLTYPE *GetBindResult )(
            IBinding * This,
                        CLSID *pclsidProtocol,
                        DWORD *pdwResult,
            __RPC__out LPOLESTR *pszResult,
                            DWORD *pdwReserved);
        END_INTERFACE
    } IBindingVtbl;
    interface IBinding
    {
        CONST_VTBL struct IBindingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> SetPriority(This,nPriority) )
    ( (This)->lpVtbl -> GetPriority(This,pnPriority) )
    ( (This)->lpVtbl -> GetBindResult(This,pclsidProtocol,pdwResult,pszResult,pdwReserved) )
                HRESULT STDMETHODCALLTYPE IBinding_RemoteGetBindResult_Proxy(
    __RPC__in IBinding * This,
                __RPC__out CLSID *pclsidProtocol,
                __RPC__out DWORD *pdwResult,
                __RPC__deref_out_opt LPOLESTR *pszResult,
               DWORD dwReserved);
void __RPC_STUB IBinding_RemoteGetBindResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0004_v0_0_s_ifspec;
typedef __RPC_unique_pointer IBindStatusCallback *LPBINDSTATUSCALLBACK;
typedef
enum __MIDL_IBindStatusCallback_0001
    {
        BINDVERB_GET = 0,
        BINDVERB_POST = 0x1,
        BINDVERB_PUT = 0x2,
        BINDVERB_CUSTOM = 0x3,
        BINDVERB_RESERVED1 = 0x4
    } BINDVERB;
typedef
enum __MIDL_IBindStatusCallback_0002
    {
        BINDINFOF_URLENCODESTGMEDDATA = 0x1,
        BINDINFOF_URLENCODEDEXTRAINFO = 0x2
    } BINDINFOF;
typedef
enum __MIDL_IBindStatusCallback_0003
    {
        BINDF_ASYNCHRONOUS = 0x1,
        BINDF_ASYNCSTORAGE = 0x2,
        BINDF_NOPROGRESSIVERENDERING = 0x4,
        BINDF_OFFLINEOPERATION = 0x8,
        BINDF_GETNEWESTVERSION = 0x10,
        BINDF_NOWRITECACHE = 0x20,
        BINDF_NEEDFILE = 0x40,
        BINDF_PULLDATA = 0x80,
        BINDF_IGNORESECURITYPROBLEM = 0x100,
        BINDF_RESYNCHRONIZE = 0x200,
        BINDF_HYPERLINK = 0x400,
        BINDF_NO_UI = 0x800,
        BINDF_SILENTOPERATION = 0x1000,
        BINDF_PRAGMA_NO_CACHE = 0x2000,
        BINDF_GETCLASSOBJECT = 0x4000,
        BINDF_RESERVED_1 = 0x8000,
        BINDF_FREE_THREADED = 0x10000,
        BINDF_DIRECT_READ = 0x20000,
        BINDF_FORMS_SUBMIT = 0x40000,
        BINDF_GETFROMCACHE_IF_NET_FAIL = 0x80000,
        BINDF_FROMURLMON = 0x100000,
        BINDF_FWD_BACK = 0x200000,
        BINDF_PREFERDEFAULTHANDLER = 0x400000,
        BINDF_ENFORCERESTRICTED = 0x800000,
        BINDF_RESERVED_2 = 0x80000000,
        BINDF_RESERVED_3 = 0x1000000,
        BINDF_RESERVED_4 = 0x2000000,
        BINDF_RESERVED_5 = 0x4000000,
        BINDF_RESERVED_6 = 0x8000000,
        BINDF_RESERVED_7 = 0x40000000,
        BINDF_RESERVED_8 = 0x20000000
    } BINDF;
typedef
enum __MIDL_IBindStatusCallback_0004
    {
        URL_ENCODING_NONE = 0,
        URL_ENCODING_ENABLE_UTF8 = 0x10000000,
        URL_ENCODING_DISABLE_UTF8 = 0x20000000
    } URL_ENCODING;
typedef struct _tagBINDINFO
    {
    ULONG cbSize;
    LPWSTR szExtraInfo;
    STGMEDIUM stgmedData;
    DWORD grfBindInfoF;
    DWORD dwBindVerb;
    LPWSTR szCustomVerb;
    DWORD cbstgmedData;
    DWORD dwOptions;
    DWORD dwOptionsFlags;
    DWORD dwCodePage;
    SECURITY_ATTRIBUTES securityAttributes;
    IID iid;
    IUnknown *pUnk;
    DWORD dwReserved;
    } BINDINFO;
typedef struct _REMSECURITY_ATTRIBUTES
    {
    DWORD nLength;
    DWORD lpSecurityDescriptor;
    BOOL bInheritHandle;
    } REMSECURITY_ATTRIBUTES;
typedef struct _REMSECURITY_ATTRIBUTES *PREMSECURITY_ATTRIBUTES;
typedef struct _REMSECURITY_ATTRIBUTES *LPREMSECURITY_ATTRIBUTES;
typedef struct _tagRemBINDINFO
    {
    ULONG cbSize;
    LPWSTR szExtraInfo;
    DWORD grfBindInfoF;
    DWORD dwBindVerb;
    LPWSTR szCustomVerb;
    DWORD cbstgmedData;
    DWORD dwOptions;
    DWORD dwOptionsFlags;
    DWORD dwCodePage;
    REMSECURITY_ATTRIBUTES securityAttributes;
    IID iid;
    IUnknown *pUnk;
    DWORD dwReserved;
    } RemBINDINFO;
typedef struct tagRemFORMATETC
    {
    DWORD cfFormat;
    DWORD ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
    } RemFORMATETC;
typedef struct tagRemFORMATETC *LPREMFORMATETC;
typedef
enum __MIDL_IBindStatusCallback_0005
    {
        BINDINFO_OPTIONS_WININETFLAG = 0x10000,
        BINDINFO_OPTIONS_ENABLE_UTF8 = 0x20000,
        BINDINFO_OPTIONS_DISABLE_UTF8 = 0x40000,
        BINDINFO_OPTIONS_USE_IE_ENCODING = 0x80000,
        BINDINFO_OPTIONS_BINDTOOBJECT = 0x100000,
        BINDINFO_OPTIONS_SECURITYOPTOUT = 0x200000,
        BINDINFO_OPTIONS_IGNOREMIMETEXTPLAIN = 0x400000,
        BINDINFO_OPTIONS_USEBINDSTRINGCREDS = 0x800000,
        BINDINFO_OPTIONS_IGNOREHTTPHTTPSREDIRECTS = 0x1000000,
        BINDINFO_OPTIONS_IGNORE_SSLERRORS_ONCE = 0x2000000,
        BINDINFO_WPC_DOWNLOADBLOCKED = 0x8000000,
        BINDINFO_WPC_LOGGING_ENABLED = 0x10000000,
        BINDINFO_OPTIONS_ALLOWCONNECTDATA = 0x20000000,
        BINDINFO_OPTIONS_DISABLEAUTOREDIRECTS = 0x40000000,
        BINDINFO_OPTIONS_SHDOCVW_NAVIGATE = ( int )0x80000000
    } BINDINFO_OPTIONS;
typedef
enum __MIDL_IBindStatusCallback_0006
    {
        BSCF_FIRSTDATANOTIFICATION = 0x1,
        BSCF_INTERMEDIATEDATANOTIFICATION = 0x2,
        BSCF_LASTDATANOTIFICATION = 0x4,
        BSCF_DATAFULLYAVAILABLE = 0x8,
        BSCF_AVAILABLEDATASIZEUNKNOWN = 0x10,
        BSCF_SKIPDRAINDATAFORFILEURLS = 0x20,
        BSCF_64BITLENGTHDOWNLOAD = 0x40
    } BSCF;
typedef
enum tagBINDSTATUS
    {
        BINDSTATUS_FINDINGRESOURCE = 1,
        BINDSTATUS_CONNECTING = ( BINDSTATUS_FINDINGRESOURCE + 1 ) ,
        BINDSTATUS_REDIRECTING = ( BINDSTATUS_CONNECTING + 1 ) ,
        BINDSTATUS_BEGINDOWNLOADDATA = ( BINDSTATUS_REDIRECTING + 1 ) ,
        BINDSTATUS_DOWNLOADINGDATA = ( BINDSTATUS_BEGINDOWNLOADDATA + 1 ) ,
        BINDSTATUS_ENDDOWNLOADDATA = ( BINDSTATUS_DOWNLOADINGDATA + 1 ) ,
        BINDSTATUS_BEGINDOWNLOADCOMPONENTS = ( BINDSTATUS_ENDDOWNLOADDATA + 1 ) ,
        BINDSTATUS_INSTALLINGCOMPONENTS = ( BINDSTATUS_BEGINDOWNLOADCOMPONENTS + 1 ) ,
        BINDSTATUS_ENDDOWNLOADCOMPONENTS = ( BINDSTATUS_INSTALLINGCOMPONENTS + 1 ) ,
        BINDSTATUS_USINGCACHEDCOPY = ( BINDSTATUS_ENDDOWNLOADCOMPONENTS + 1 ) ,
        BINDSTATUS_SENDINGREQUEST = ( BINDSTATUS_USINGCACHEDCOPY + 1 ) ,
        BINDSTATUS_CLASSIDAVAILABLE = ( BINDSTATUS_SENDINGREQUEST + 1 ) ,
        BINDSTATUS_MIMETYPEAVAILABLE = ( BINDSTATUS_CLASSIDAVAILABLE + 1 ) ,
        BINDSTATUS_CACHEFILENAMEAVAILABLE = ( BINDSTATUS_MIMETYPEAVAILABLE + 1 ) ,
        BINDSTATUS_BEGINSYNCOPERATION = ( BINDSTATUS_CACHEFILENAMEAVAILABLE + 1 ) ,
        BINDSTATUS_ENDSYNCOPERATION = ( BINDSTATUS_BEGINSYNCOPERATION + 1 ) ,
        BINDSTATUS_BEGINUPLOADDATA = ( BINDSTATUS_ENDSYNCOPERATION + 1 ) ,
        BINDSTATUS_UPLOADINGDATA = ( BINDSTATUS_BEGINUPLOADDATA + 1 ) ,
        BINDSTATUS_ENDUPLOADDATA = ( BINDSTATUS_UPLOADINGDATA + 1 ) ,
        BINDSTATUS_PROTOCOLCLASSID = ( BINDSTATUS_ENDUPLOADDATA + 1 ) ,
        BINDSTATUS_ENCODING = ( BINDSTATUS_PROTOCOLCLASSID + 1 ) ,
        BINDSTATUS_VERIFIEDMIMETYPEAVAILABLE = ( BINDSTATUS_ENCODING + 1 ) ,
        BINDSTATUS_CLASSINSTALLLOCATION = ( BINDSTATUS_VERIFIEDMIMETYPEAVAILABLE + 1 ) ,
        BINDSTATUS_DECODING = ( BINDSTATUS_CLASSINSTALLLOCATION + 1 ) ,
        BINDSTATUS_LOADINGMIMEHANDLER = ( BINDSTATUS_DECODING + 1 ) ,
        BINDSTATUS_CONTENTDISPOSITIONATTACH = ( BINDSTATUS_LOADINGMIMEHANDLER + 1 ) ,
        BINDSTATUS_FILTERREPORTMIMETYPE = ( BINDSTATUS_CONTENTDISPOSITIONATTACH + 1 ) ,
        BINDSTATUS_CLSIDCANINSTANTIATE = ( BINDSTATUS_FILTERREPORTMIMETYPE + 1 ) ,
        BINDSTATUS_IUNKNOWNAVAILABLE = ( BINDSTATUS_CLSIDCANINSTANTIATE + 1 ) ,
        BINDSTATUS_DIRECTBIND = ( BINDSTATUS_IUNKNOWNAVAILABLE + 1 ) ,
        BINDSTATUS_RAWMIMETYPE = ( BINDSTATUS_DIRECTBIND + 1 ) ,
        BINDSTATUS_PROXYDETECTING = ( BINDSTATUS_RAWMIMETYPE + 1 ) ,
        BINDSTATUS_ACCEPTRANGES = ( BINDSTATUS_PROXYDETECTING + 1 ) ,
        BINDSTATUS_COOKIE_SENT = ( BINDSTATUS_ACCEPTRANGES + 1 ) ,
        BINDSTATUS_COMPACT_POLICY_RECEIVED = ( BINDSTATUS_COOKIE_SENT + 1 ) ,
        BINDSTATUS_COOKIE_SUPPRESSED = ( BINDSTATUS_COMPACT_POLICY_RECEIVED + 1 ) ,
        BINDSTATUS_COOKIE_STATE_UNKNOWN = ( BINDSTATUS_COOKIE_SUPPRESSED + 1 ) ,
        BINDSTATUS_COOKIE_STATE_ACCEPT = ( BINDSTATUS_COOKIE_STATE_UNKNOWN + 1 ) ,
        BINDSTATUS_COOKIE_STATE_REJECT = ( BINDSTATUS_COOKIE_STATE_ACCEPT + 1 ) ,
        BINDSTATUS_COOKIE_STATE_PROMPT = ( BINDSTATUS_COOKIE_STATE_REJECT + 1 ) ,
        BINDSTATUS_COOKIE_STATE_LEASH = ( BINDSTATUS_COOKIE_STATE_PROMPT + 1 ) ,
        BINDSTATUS_COOKIE_STATE_DOWNGRADE = ( BINDSTATUS_COOKIE_STATE_LEASH + 1 ) ,
        BINDSTATUS_POLICY_HREF = ( BINDSTATUS_COOKIE_STATE_DOWNGRADE + 1 ) ,
        BINDSTATUS_P3P_HEADER = ( BINDSTATUS_POLICY_HREF + 1 ) ,
        BINDSTATUS_SESSION_COOKIE_RECEIVED = ( BINDSTATUS_P3P_HEADER + 1 ) ,
        BINDSTATUS_PERSISTENT_COOKIE_RECEIVED = ( BINDSTATUS_SESSION_COOKIE_RECEIVED + 1 ) ,
        BINDSTATUS_SESSION_COOKIES_ALLOWED = ( BINDSTATUS_PERSISTENT_COOKIE_RECEIVED + 1 ) ,
        BINDSTATUS_CACHECONTROL = ( BINDSTATUS_SESSION_COOKIES_ALLOWED + 1 ) ,
        BINDSTATUS_CONTENTDISPOSITIONFILENAME = ( BINDSTATUS_CACHECONTROL + 1 ) ,
        BINDSTATUS_MIMETEXTPLAINMISMATCH = ( BINDSTATUS_CONTENTDISPOSITIONFILENAME + 1 ) ,
        BINDSTATUS_PUBLISHERAVAILABLE = ( BINDSTATUS_MIMETEXTPLAINMISMATCH + 1 ) ,
        BINDSTATUS_DISPLAYNAMEAVAILABLE = ( BINDSTATUS_PUBLISHERAVAILABLE + 1 ) ,
        BINDSTATUS_SSLUX_NAVBLOCKED = ( BINDSTATUS_DISPLAYNAMEAVAILABLE + 1 ) ,
        BINDSTATUS_SERVER_MIMETYPEAVAILABLE = ( BINDSTATUS_SSLUX_NAVBLOCKED + 1 ) ,
        BINDSTATUS_SNIFFED_CLASSIDAVAILABLE = ( BINDSTATUS_SERVER_MIMETYPEAVAILABLE + 1 ) ,
        BINDSTATUS_64BIT_PROGRESS = ( BINDSTATUS_SNIFFED_CLASSIDAVAILABLE + 1 ) ,
        BINDSTATUS_LAST = BINDSTATUS_64BIT_PROGRESS,
        BINDSTATUS_RESERVED_0 = ( BINDSTATUS_LAST + 1 ) ,
        BINDSTATUS_RESERVED_1 = ( BINDSTATUS_RESERVED_0 + 1 ) ,
        BINDSTATUS_RESERVED_2 = ( BINDSTATUS_RESERVED_1 + 1 ) ,
        BINDSTATUS_RESERVED_3 = ( BINDSTATUS_RESERVED_2 + 1 ) ,
        BINDSTATUS_RESERVED_4 = ( BINDSTATUS_RESERVED_3 + 1 ) ,
        BINDSTATUS_RESERVED_5 = ( BINDSTATUS_RESERVED_4 + 1 ) ,
        BINDSTATUS_RESERVED_6 = ( BINDSTATUS_RESERVED_5 + 1 ) ,
        BINDSTATUS_RESERVED_7 = ( BINDSTATUS_RESERVED_6 + 1 ) ,
        BINDSTATUS_RESERVED_8 = ( BINDSTATUS_RESERVED_7 + 1 ) ,
        BINDSTATUS_RESERVED_9 = ( BINDSTATUS_RESERVED_8 + 1 ) ,
        BINDSTATUS_RESERVED_A = ( BINDSTATUS_RESERVED_9 + 1 ) ,
        BINDSTATUS_RESERVED_B = ( BINDSTATUS_RESERVED_A + 1 ) ,
        BINDSTATUS_RESERVED_C = ( BINDSTATUS_RESERVED_B + 1 ) ,
        BINDSTATUS_RESERVED_D = ( BINDSTATUS_RESERVED_C + 1 ) ,
        BINDSTATUS_RESERVED_E = ( BINDSTATUS_RESERVED_D + 1 ) ,
        BINDSTATUS_RESERVED_F = ( BINDSTATUS_RESERVED_E + 1 ) ,
        BINDSTATUS_RESERVED_10 = ( BINDSTATUS_RESERVED_F + 1 ) ,
        BINDSTATUS_RESERVED_11 = ( BINDSTATUS_RESERVED_10 + 1 ) ,
        BINDSTATUS_RESERVED_12 = ( BINDSTATUS_RESERVED_11 + 1 ) ,
        BINDSTATUS_RESERVED_13 = ( BINDSTATUS_RESERVED_12 + 1 ) ,
        BINDSTATUS_LAST_PRIVATE = BINDSTATUS_RESERVED_13
    } BINDSTATUS;
EXTERN_C const IID IID_IBindStatusCallback;
    typedef struct IBindStatusCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBindStatusCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBindStatusCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBindStatusCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnStartBinding )(
            __RPC__in IBindStatusCallback * This,
                       DWORD dwReserved,
                       __RPC__in_opt IBinding *pib);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBindStatusCallback * This,
                        __RPC__out LONG *pnPriority);
        HRESULT ( STDMETHODCALLTYPE *OnLowResource )(
            __RPC__in IBindStatusCallback * This,
                       DWORD reserved);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            __RPC__in IBindStatusCallback * This,
                       ULONG ulProgress,
                       ULONG ulProgressMax,
                       ULONG ulStatusCode,
                               __RPC__in_opt LPCWSTR szStatusText);
        HRESULT ( STDMETHODCALLTYPE *OnStopBinding )(
            __RPC__in IBindStatusCallback * This,
                       HRESULT hresult,
                               __RPC__in_opt LPCWSTR szError);
                      HRESULT ( STDMETHODCALLTYPE *GetBindInfo )(
            IBindStatusCallback * This,
                        DWORD *grfBINDF,
                                    BINDINFO *pbindinfo);
                      HRESULT ( STDMETHODCALLTYPE *OnDataAvailable )(
            IBindStatusCallback * This,
                       DWORD grfBSCF,
                       DWORD dwSize,
                       FORMATETC *pformatetc,
                       STGMEDIUM *pstgmed);
        HRESULT ( STDMETHODCALLTYPE *OnObjectAvailable )(
            __RPC__in IBindStatusCallback * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk);
        END_INTERFACE
    } IBindStatusCallbackVtbl;
    interface IBindStatusCallback
    {
        CONST_VTBL struct IBindStatusCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStartBinding(This,dwReserved,pib) )
    ( (This)->lpVtbl -> GetPriority(This,pnPriority) )
    ( (This)->lpVtbl -> OnLowResource(This,reserved) )
    ( (This)->lpVtbl -> OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText) )
    ( (This)->lpVtbl -> OnStopBinding(This,hresult,szError) )
    ( (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo) )
    ( (This)->lpVtbl -> OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed) )
    ( (This)->lpVtbl -> OnObjectAvailable(This,riid,punk) )
                HRESULT STDMETHODCALLTYPE IBindStatusCallback_RemoteGetBindInfo_Proxy(
    __RPC__in IBindStatusCallback * This,
                __RPC__out DWORD *grfBINDF,
                            __RPC__inout_opt RemBINDINFO *pbindinfo,
                            __RPC__inout_opt RemSTGMEDIUM *pstgmed);
void __RPC_STUB IBindStatusCallback_RemoteGetBindInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IBindStatusCallback_RemoteOnDataAvailable_Proxy(
    __RPC__in IBindStatusCallback * This,
               DWORD grfBSCF,
               DWORD dwSize,
               __RPC__in RemFORMATETC *pformatetc,
               __RPC__in RemSTGMEDIUM *pstgmed);
void __RPC_STUB IBindStatusCallback_RemoteOnDataAvailable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0005_v0_0_s_ifspec;
typedef __RPC_unique_pointer IBindStatusCallbackEx *LPBINDSTATUSCALLBACKEX;
typedef
enum __MIDL_IBindStatusCallbackEx_0001
    {
        BINDF2_DISABLEBASICOVERHTTP = 0x1,
        BINDF2_DISABLEAUTOCOOKIEHANDLING = 0x2,
        BINDF2_READ_DATA_GREATER_THAN_4GB = 0x4,
        BINDF2_DISABLE_HTTP_REDIRECT_XSECURITYID = 0x8,
        BINDF2_SETDOWNLOADMODE = 0x20,
        BINDF2_DISABLE_HTTP_REDIRECT_CACHING = 0x40,
        BINDF2_KEEP_CALLBACK_MODULE_LOADED = 0x80,
        BINDF2_ALLOW_PROXY_CRED_PROMPT = 0x100,
        BINDF2_RESERVED_17 = 0x200,
        BINDF2_RESERVED_16 = 0x400,
        BINDF2_RESERVED_15 = 0x800,
        BINDF2_RESERVED_14 = 0x1000,
        BINDF2_RESERVED_13 = 0x2000,
        BINDF2_RESERVED_12 = 0x4000,
        BINDF2_RESERVED_11 = 0x8000,
        BINDF2_RESERVED_10 = 0x10000,
        BINDF2_RESERVED_F = 0x20000,
        BINDF2_RESERVED_E = 0x40000,
        BINDF2_RESERVED_D = 0x80000,
        BINDF2_RESERVED_C = 0x100000,
        BINDF2_RESERVED_B = 0x200000,
        BINDF2_RESERVED_A = 0x400000,
        BINDF2_RESERVED_9 = 0x800000,
        BINDF2_RESERVED_8 = 0x1000000,
        BINDF2_RESERVED_7 = 0x2000000,
        BINDF2_RESERVED_6 = 0x4000000,
        BINDF2_RESERVED_5 = 0x8000000,
        BINDF2_RESERVED_4 = 0x10000000,
        BINDF2_RESERVED_3 = 0x20000000,
        BINDF2_RESERVED_2 = 0x40000000,
        BINDF2_RESERVED_1 = 0x80000000
    } BINDF2;
EXTERN_C const IID IID_IBindStatusCallbackEx;
    typedef struct IBindStatusCallbackExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBindStatusCallbackEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBindStatusCallbackEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBindStatusCallbackEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnStartBinding )(
            __RPC__in IBindStatusCallbackEx * This,
                       DWORD dwReserved,
                       __RPC__in_opt IBinding *pib);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBindStatusCallbackEx * This,
                        __RPC__out LONG *pnPriority);
        HRESULT ( STDMETHODCALLTYPE *OnLowResource )(
            __RPC__in IBindStatusCallbackEx * This,
                       DWORD reserved);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            __RPC__in IBindStatusCallbackEx * This,
                       ULONG ulProgress,
                       ULONG ulProgressMax,
                       ULONG ulStatusCode,
                               __RPC__in_opt LPCWSTR szStatusText);
        HRESULT ( STDMETHODCALLTYPE *OnStopBinding )(
            __RPC__in IBindStatusCallbackEx * This,
                       HRESULT hresult,
                               __RPC__in_opt LPCWSTR szError);
                      HRESULT ( STDMETHODCALLTYPE *GetBindInfo )(
            IBindStatusCallbackEx * This,
                        DWORD *grfBINDF,
                                    BINDINFO *pbindinfo);
                      HRESULT ( STDMETHODCALLTYPE *OnDataAvailable )(
            IBindStatusCallbackEx * This,
                       DWORD grfBSCF,
                       DWORD dwSize,
                       FORMATETC *pformatetc,
                       STGMEDIUM *pstgmed);
        HRESULT ( STDMETHODCALLTYPE *OnObjectAvailable )(
            __RPC__in IBindStatusCallbackEx * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk);
                      HRESULT ( STDMETHODCALLTYPE *GetBindInfoEx )(
            IBindStatusCallbackEx * This,
                        DWORD *grfBINDF,
                                    BINDINFO *pbindinfo,
                        DWORD *grfBINDF2,
                        DWORD *pdwReserved);
        END_INTERFACE
    } IBindStatusCallbackExVtbl;
    interface IBindStatusCallbackEx
    {
        CONST_VTBL struct IBindStatusCallbackExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStartBinding(This,dwReserved,pib) )
    ( (This)->lpVtbl -> GetPriority(This,pnPriority) )
    ( (This)->lpVtbl -> OnLowResource(This,reserved) )
    ( (This)->lpVtbl -> OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText) )
    ( (This)->lpVtbl -> OnStopBinding(This,hresult,szError) )
    ( (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo) )
    ( (This)->lpVtbl -> OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed) )
    ( (This)->lpVtbl -> OnObjectAvailable(This,riid,punk) )
    ( (This)->lpVtbl -> GetBindInfoEx(This,grfBINDF,pbindinfo,grfBINDF2,pdwReserved) )
                HRESULT STDMETHODCALLTYPE IBindStatusCallbackEx_RemoteGetBindInfoEx_Proxy(
    __RPC__in IBindStatusCallbackEx * This,
                __RPC__out DWORD *grfBINDF,
                            __RPC__inout_opt RemBINDINFO *pbindinfo,
                            __RPC__inout_opt RemSTGMEDIUM *pstgmed,
                __RPC__out DWORD *grfBINDF2,
                __RPC__out DWORD *pdwReserved);
void __RPC_STUB IBindStatusCallbackEx_RemoteGetBindInfoEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0006_v0_0_s_ifspec;
typedef __RPC_unique_pointer IAuthenticate *LPAUTHENTICATION;
EXTERN_C const IID IID_IAuthenticate;
    typedef struct IAuthenticateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAuthenticate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAuthenticate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAuthenticate * This);
        HRESULT ( STDMETHODCALLTYPE *Authenticate )(
            __RPC__in IAuthenticate * This,
                        __RPC__deref_out_opt HWND *phwnd,
                        __RPC__deref_out_opt LPWSTR *pszUsername,
                        __RPC__deref_out_opt LPWSTR *pszPassword);
        END_INTERFACE
    } IAuthenticateVtbl;
    interface IAuthenticate
    {
        CONST_VTBL struct IAuthenticateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Authenticate(This,phwnd,pszUsername,pszPassword) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0007_v0_0_s_ifspec;
typedef __RPC_unique_pointer IAuthenticateEx *LPAUTHENTICATIONEX;
typedef
enum __MIDL_IAuthenticateEx_0001
    {
        AUTHENTICATEF_PROXY = 0x1,
        AUTHENTICATEF_BASIC = 0x2,
        AUTHENTICATEF_HTTP = 0x4
    } AUTHENTICATEF;
typedef struct _tagAUTHENTICATEINFO
    {
    DWORD dwFlags;
    DWORD dwReserved;
    } AUTHENTICATEINFO;
EXTERN_C const IID IID_IAuthenticateEx;
    typedef struct IAuthenticateExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAuthenticateEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAuthenticateEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAuthenticateEx * This);
        HRESULT ( STDMETHODCALLTYPE *Authenticate )(
            __RPC__in IAuthenticateEx * This,
                        __RPC__deref_out_opt HWND *phwnd,
                        __RPC__deref_out_opt LPWSTR *pszUsername,
                        __RPC__deref_out_opt LPWSTR *pszPassword);
        HRESULT ( STDMETHODCALLTYPE *AuthenticateEx )(
            __RPC__in IAuthenticateEx * This,
                        __RPC__deref_out_opt HWND *phwnd,
                        __RPC__deref_out_opt LPWSTR *pszUsername,
                        __RPC__deref_out_opt LPWSTR *pszPassword,
                       __RPC__in AUTHENTICATEINFO *pauthinfo);
        END_INTERFACE
    } IAuthenticateExVtbl;
    interface IAuthenticateEx
    {
        CONST_VTBL struct IAuthenticateExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Authenticate(This,phwnd,pszUsername,pszPassword) )
    ( (This)->lpVtbl -> AuthenticateEx(This,phwnd,pszUsername,pszPassword,pauthinfo) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0008_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHttpNegotiate *LPHTTPNEGOTIATE;
EXTERN_C const IID IID_IHttpNegotiate;
    typedef struct IHttpNegotiateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHttpNegotiate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHttpNegotiate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHttpNegotiate * This);
        HRESULT ( STDMETHODCALLTYPE *BeginningTransaction )(
            __RPC__in IHttpNegotiate * This,
                       __RPC__in LPCWSTR szURL,
                               __RPC__in_opt LPCWSTR szHeaders,
                       DWORD dwReserved,
                        __RPC__deref_out_opt LPWSTR *pszAdditionalHeaders);
        HRESULT ( STDMETHODCALLTYPE *OnResponse )(
            __RPC__in IHttpNegotiate * This,
                       DWORD dwResponseCode,
                               __RPC__in_opt LPCWSTR szResponseHeaders,
                               __RPC__in_opt LPCWSTR szRequestHeaders,
                        __RPC__deref_out_opt LPWSTR *pszAdditionalRequestHeaders);
        END_INTERFACE
    } IHttpNegotiateVtbl;
    interface IHttpNegotiate
    {
        CONST_VTBL struct IHttpNegotiateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders) )
    ( (This)->lpVtbl -> OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0009_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHttpNegotiate2 *LPHTTPNEGOTIATE2;
EXTERN_C const IID IID_IHttpNegotiate2;
    typedef struct IHttpNegotiate2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHttpNegotiate2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHttpNegotiate2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHttpNegotiate2 * This);
        HRESULT ( STDMETHODCALLTYPE *BeginningTransaction )(
            __RPC__in IHttpNegotiate2 * This,
                       __RPC__in LPCWSTR szURL,
                               __RPC__in_opt LPCWSTR szHeaders,
                       DWORD dwReserved,
                        __RPC__deref_out_opt LPWSTR *pszAdditionalHeaders);
        HRESULT ( STDMETHODCALLTYPE *OnResponse )(
            __RPC__in IHttpNegotiate2 * This,
                       DWORD dwResponseCode,
                               __RPC__in_opt LPCWSTR szResponseHeaders,
                               __RPC__in_opt LPCWSTR szRequestHeaders,
                        __RPC__deref_out_opt LPWSTR *pszAdditionalRequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetRootSecurityId )(
            __RPC__in IHttpNegotiate2 * This,
                                 __RPC__out_ecount_full(*pcbSecurityId) BYTE *pbSecurityId,
                            __RPC__inout DWORD *pcbSecurityId,
                       DWORD_PTR dwReserved);
        END_INTERFACE
    } IHttpNegotiate2Vtbl;
    interface IHttpNegotiate2
    {
        CONST_VTBL struct IHttpNegotiate2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders) )
    ( (This)->lpVtbl -> OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders) )
    ( (This)->lpVtbl -> GetRootSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0010_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHttpNegotiate3 *LPHTTPNEGOTIATE3;
EXTERN_C const IID IID_IHttpNegotiate3;
    typedef struct IHttpNegotiate3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHttpNegotiate3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHttpNegotiate3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHttpNegotiate3 * This);
        HRESULT ( STDMETHODCALLTYPE *BeginningTransaction )(
            __RPC__in IHttpNegotiate3 * This,
                       __RPC__in LPCWSTR szURL,
                               __RPC__in_opt LPCWSTR szHeaders,
                       DWORD dwReserved,
                        __RPC__deref_out_opt LPWSTR *pszAdditionalHeaders);
        HRESULT ( STDMETHODCALLTYPE *OnResponse )(
            __RPC__in IHttpNegotiate3 * This,
                       DWORD dwResponseCode,
                               __RPC__in_opt LPCWSTR szResponseHeaders,
                               __RPC__in_opt LPCWSTR szRequestHeaders,
                        __RPC__deref_out_opt LPWSTR *pszAdditionalRequestHeaders);
        HRESULT ( STDMETHODCALLTYPE *GetRootSecurityId )(
            __RPC__in IHttpNegotiate3 * This,
                                 __RPC__out_ecount_full(*pcbSecurityId) BYTE *pbSecurityId,
                            __RPC__inout DWORD *pcbSecurityId,
                       DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetSerializedClientCertContext )(
            __RPC__in IHttpNegotiate3 * This,
                                          __RPC__deref_out_ecount_full_opt(*pcbCert) BYTE **ppbCert,
                        __RPC__out DWORD *pcbCert);
        END_INTERFACE
    } IHttpNegotiate3Vtbl;
    interface IHttpNegotiate3
    {
        CONST_VTBL struct IHttpNegotiate3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders) )
    ( (This)->lpVtbl -> OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders) )
    ( (This)->lpVtbl -> GetRootSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved) )
    ( (This)->lpVtbl -> GetSerializedClientCertContext(This,ppbCert,pcbCert) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0011_v0_0_s_ifspec;
typedef __RPC_unique_pointer IWinInetFileStream *LPWININETFILESTREAM;
EXTERN_C const IID IID_IWinInetFileStream;
    typedef struct IWinInetFileStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWinInetFileStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWinInetFileStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWinInetFileStream * This);
        HRESULT ( STDMETHODCALLTYPE *SetHandleForUnlock )(
            __RPC__in IWinInetFileStream * This,
                       DWORD_PTR hWinInetLockHandle,
                       DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetDeleteFile )(
            __RPC__in IWinInetFileStream * This,
                       DWORD_PTR dwReserved);
        END_INTERFACE
    } IWinInetFileStreamVtbl;
    interface IWinInetFileStream
    {
        CONST_VTBL struct IWinInetFileStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHandleForUnlock(This,hWinInetLockHandle,dwReserved) )
    ( (This)->lpVtbl -> SetDeleteFile(This,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0012_v0_0_s_ifspec;
typedef IWindowForBindingUI *LPWINDOWFORBINDINGUI;
EXTERN_C const IID IID_IWindowForBindingUI;
    typedef struct IWindowForBindingUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowForBindingUI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowForBindingUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowForBindingUI * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            IWindowForBindingUI * This,
                       REFGUID rguidReason,
                        HWND *phwnd);
        END_INTERFACE
    } IWindowForBindingUIVtbl;
    interface IWindowForBindingUI
    {
        CONST_VTBL struct IWindowForBindingUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,rguidReason,phwnd) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0013_v0_0_s_ifspec;
typedef ICodeInstall *LPCODEINSTALL;
typedef
enum __MIDL_ICodeInstall_0001
    {
        CIP_DISK_FULL = 0,
        CIP_ACCESS_DENIED = ( CIP_DISK_FULL + 1 ) ,
        CIP_NEWER_VERSION_EXISTS = ( CIP_ACCESS_DENIED + 1 ) ,
        CIP_OLDER_VERSION_EXISTS = ( CIP_NEWER_VERSION_EXISTS + 1 ) ,
        CIP_NAME_CONFLICT = ( CIP_OLDER_VERSION_EXISTS + 1 ) ,
        CIP_TRUST_VERIFICATION_COMPONENT_MISSING = ( CIP_NAME_CONFLICT + 1 ) ,
        CIP_EXE_SELF_REGISTERATION_TIMEOUT = ( CIP_TRUST_VERIFICATION_COMPONENT_MISSING + 1 ) ,
        CIP_UNSAFE_TO_ABORT = ( CIP_EXE_SELF_REGISTERATION_TIMEOUT + 1 ) ,
        CIP_NEED_REBOOT = ( CIP_UNSAFE_TO_ABORT + 1 ) ,
        CIP_NEED_REBOOT_UI_PERMISSION = ( CIP_NEED_REBOOT + 1 )
    } CIP_STATUS;
EXTERN_C const IID IID_ICodeInstall;
    typedef struct ICodeInstallVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICodeInstall * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICodeInstall * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICodeInstall * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            ICodeInstall * This,
                       REFGUID rguidReason,
                        HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *OnCodeInstallProblem )(
            ICodeInstall * This,
                       ULONG ulStatusCode,
                               LPCWSTR szDestination,
                               LPCWSTR szSource,
                       DWORD dwReserved);
        END_INTERFACE
    } ICodeInstallVtbl;
    interface ICodeInstall
    {
        CONST_VTBL struct ICodeInstallVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,rguidReason,phwnd) )
    ( (This)->lpVtbl -> OnCodeInstallProblem(This,ulStatusCode,szDestination,szSource,dwReserved) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0014_v0_0_s_ifspec;
typedef
enum __MIDL_IUri_0001
    {
        Uri_PROPERTY_ABSOLUTE_URI = 0,
        Uri_PROPERTY_STRING_START = Uri_PROPERTY_ABSOLUTE_URI,
        Uri_PROPERTY_AUTHORITY = 1,
        Uri_PROPERTY_DISPLAY_URI = 2,
        Uri_PROPERTY_DOMAIN = 3,
        Uri_PROPERTY_EXTENSION = 4,
        Uri_PROPERTY_FRAGMENT = 5,
        Uri_PROPERTY_HOST = 6,
        Uri_PROPERTY_PASSWORD = 7,
        Uri_PROPERTY_PATH = 8,
        Uri_PROPERTY_PATH_AND_QUERY = 9,
        Uri_PROPERTY_QUERY = 10,
        Uri_PROPERTY_RAW_URI = 11,
        Uri_PROPERTY_SCHEME_NAME = 12,
        Uri_PROPERTY_USER_INFO = 13,
        Uri_PROPERTY_USER_NAME = 14,
        Uri_PROPERTY_STRING_LAST = Uri_PROPERTY_USER_NAME,
        Uri_PROPERTY_HOST_TYPE = 15,
        Uri_PROPERTY_DWORD_START = Uri_PROPERTY_HOST_TYPE,
        Uri_PROPERTY_PORT = 16,
        Uri_PROPERTY_SCHEME = 17,
        Uri_PROPERTY_ZONE = 18,
        Uri_PROPERTY_DWORD_LAST = Uri_PROPERTY_ZONE
    } Uri_PROPERTY;
typedef
enum __MIDL_IUri_0002
    {
        Uri_HOST_UNKNOWN = 0,
        Uri_HOST_DNS = ( Uri_HOST_UNKNOWN + 1 ) ,
        Uri_HOST_IPV4 = ( Uri_HOST_DNS + 1 ) ,
        Uri_HOST_IPV6 = ( Uri_HOST_IPV4 + 1 ) ,
        Uri_HOST_IDN = ( Uri_HOST_IPV6 + 1 )
    } Uri_HOST_TYPE;
EXTERN_C const IID IID_IUri;
    typedef struct IUriVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUri * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUri * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUri * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyBSTR )(
            __RPC__in IUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__deref_out_opt BSTR *pbstrProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyLength )(
            __RPC__in IUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out DWORD *pcchProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyDWORD )(
            __RPC__in IUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out DWORD *pdwProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *HasProperty )(
            __RPC__in IUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out BOOL *pfHasProperty);
                           HRESULT ( STDMETHODCALLTYPE *GetAbsoluteUri )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrAbsoluteUri);
                           HRESULT ( STDMETHODCALLTYPE *GetAuthority )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrAuthority);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayUri )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrDisplayString);
                           HRESULT ( STDMETHODCALLTYPE *GetDomain )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrDomain);
                           HRESULT ( STDMETHODCALLTYPE *GetExtension )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrExtension);
                           HRESULT ( STDMETHODCALLTYPE *GetFragment )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrFragment);
                           HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrHost);
                           HRESULT ( STDMETHODCALLTYPE *GetPassword )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPassword);
                           HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPath);
                           HRESULT ( STDMETHODCALLTYPE *GetPathAndQuery )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPathAndQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetQuery )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetRawUri )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrRawUri);
                           HRESULT ( STDMETHODCALLTYPE *GetSchemeName )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrSchemeName);
                           HRESULT ( STDMETHODCALLTYPE *GetUserInfo )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrUserInfo);
                           HRESULT ( STDMETHODCALLTYPE *GetUserName )(
            __RPC__in IUri * This,
                        __RPC__deref_out_opt BSTR *pbstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *GetHostType )(
            __RPC__in IUri * This,
                        __RPC__out DWORD *pdwHostType);
                           HRESULT ( STDMETHODCALLTYPE *GetPort )(
            __RPC__in IUri * This,
                        __RPC__out DWORD *pdwPort);
                           HRESULT ( STDMETHODCALLTYPE *GetScheme )(
            __RPC__in IUri * This,
                        __RPC__out DWORD *pdwScheme);
                           HRESULT ( STDMETHODCALLTYPE *GetZone )(
            __RPC__in IUri * This,
                        __RPC__out DWORD *pdwZone);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IUri * This,
                        __RPC__out LPDWORD pdwFlags);
                           HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IUri * This,
                       __RPC__in_opt IUri *pUri,
                        __RPC__out BOOL *pfEqual);
        END_INTERFACE
    } IUriVtbl;
    interface IUri
    {
        CONST_VTBL struct IUriVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyLength(This,uriProp,pcchProperty,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) )
    ( (This)->lpVtbl -> HasProperty(This,uriProp,pfHasProperty) )
    ( (This)->lpVtbl -> GetAbsoluteUri(This,pbstrAbsoluteUri) )
    ( (This)->lpVtbl -> GetAuthority(This,pbstrAuthority) )
    ( (This)->lpVtbl -> GetDisplayUri(This,pbstrDisplayString) )
    ( (This)->lpVtbl -> GetDomain(This,pbstrDomain) )
    ( (This)->lpVtbl -> GetExtension(This,pbstrExtension) )
    ( (This)->lpVtbl -> GetFragment(This,pbstrFragment) )
    ( (This)->lpVtbl -> GetHost(This,pbstrHost) )
    ( (This)->lpVtbl -> GetPassword(This,pbstrPassword) )
    ( (This)->lpVtbl -> GetPath(This,pbstrPath) )
    ( (This)->lpVtbl -> GetPathAndQuery(This,pbstrPathAndQuery) )
    ( (This)->lpVtbl -> GetQuery(This,pbstrQuery) )
    ( (This)->lpVtbl -> GetRawUri(This,pbstrRawUri) )
    ( (This)->lpVtbl -> GetSchemeName(This,pbstrSchemeName) )
    ( (This)->lpVtbl -> GetUserInfo(This,pbstrUserInfo) )
    ( (This)->lpVtbl -> GetUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> GetHostType(This,pdwHostType) )
    ( (This)->lpVtbl -> GetPort(This,pdwPort) )
    ( (This)->lpVtbl -> GetScheme(This,pdwScheme) )
    ( (This)->lpVtbl -> GetZone(This,pdwZone) )
    ( (This)->lpVtbl -> GetProperties(This,pdwFlags) )
    ( (This)->lpVtbl -> IsEqual(This,pUri,pfEqual) )
STDAPI CreateUri(_In_ LPCWSTR pwzURI,
                 _In_ DWORD dwFlags,
                 _Reserved_ DWORD_PTR dwReserved,
                 _Outptr_ IUri** ppURI);
STDAPI CreateUriWithFragment(
                 _In_ LPCWSTR pwzURI,
                 _In_opt_ LPCWSTR pwzFragment,
                 _In_ DWORD dwFlags,
                 _Reserved_ DWORD_PTR dwReserved,
                 _Outptr_ IUri** ppURI);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI CreateUriFromMultiByteString(
    _In_ LPCSTR pszANSIInputUri,
               DWORD dwEncodingFlags,
               DWORD dwCodePage,
               DWORD dwCreateFlags,
    _Reserved_ DWORD_PTR dwReserved,
    _Outptr_ IUri** ppUri);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IUriContainer;
    typedef struct IUriContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUriContainer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUriContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUriContainer * This);
                           HRESULT ( STDMETHODCALLTYPE *GetIUri )(
            IUriContainer * This,
                        IUri **ppIUri);
        END_INTERFACE
    } IUriContainerVtbl;
    interface IUriContainer
    {
        CONST_VTBL struct IUriContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIUri(This,ppIUri) )
EXTERN_C const IID IID_IUriBuilder;
    typedef struct IUriBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUriBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUriBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUriBuilder * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateUriSimple )(
            IUriBuilder * This,
                       DWORD dwAllowEncodingPropertyMask,
                       DWORD_PTR dwReserved,
            _Outptr_ IUri **ppIUri);
                           HRESULT ( STDMETHODCALLTYPE *CreateUri )(
            IUriBuilder * This,
                       DWORD dwCreateFlags,
                       DWORD dwAllowEncodingPropertyMask,
                       DWORD_PTR dwReserved,
            _Outptr_ IUri **ppIUri);
                           HRESULT ( STDMETHODCALLTYPE *CreateUriWithFlags )(
            IUriBuilder * This,
                       DWORD dwCreateFlags,
                       DWORD dwUriBuilderFlags,
                       DWORD dwAllowEncodingPropertyMask,
                       DWORD_PTR dwReserved,
            _Outptr_ IUri **ppIUri);
                           HRESULT ( STDMETHODCALLTYPE *GetIUri )(
            IUriBuilder * This,
            _Outptr_result_maybenull_ IUri **ppIUri);
                           HRESULT ( STDMETHODCALLTYPE *SetIUri )(
            IUriBuilder * This,
            _In_opt_ IUri *pIUri);
                           HRESULT ( STDMETHODCALLTYPE *GetFragment )(
            IUriBuilder * This,
            _Out_ DWORD *pcchFragment,
            _Outptr_result_maybenull_ LPCWSTR *ppwzFragment);
                           HRESULT ( STDMETHODCALLTYPE *GetHost )(
            IUriBuilder * This,
            _Out_ DWORD *pcchHost,
            _Outptr_result_maybenull_ LPCWSTR *ppwzHost);
                           HRESULT ( STDMETHODCALLTYPE *GetPassword )(
            IUriBuilder * This,
            _Out_ DWORD *pcchPassword,
            _Outptr_result_maybenull_ LPCWSTR *ppwzPassword);
                           HRESULT ( STDMETHODCALLTYPE *GetPath )(
            IUriBuilder * This,
            _Out_ DWORD *pcchPath,
            _Outptr_result_maybenull_ LPCWSTR *ppwzPath);
                           HRESULT ( STDMETHODCALLTYPE *GetPort )(
            IUriBuilder * This,
            _Out_ BOOL *pfHasPort,
            _Out_ DWORD *pdwPort);
                           HRESULT ( STDMETHODCALLTYPE *GetQuery )(
            IUriBuilder * This,
            _Out_ DWORD *pcchQuery,
            _Outptr_result_maybenull_ LPCWSTR *ppwzQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetSchemeName )(
            IUriBuilder * This,
            _Out_ DWORD *pcchSchemeName,
            _Outptr_result_maybenull_ LPCWSTR *ppwzSchemeName);
                           HRESULT ( STDMETHODCALLTYPE *GetUserName )(
            IUriBuilder * This,
            _Out_ DWORD *pcchUserName,
            _Outptr_result_maybenull_ LPCWSTR *ppwzUserName);
                           HRESULT ( STDMETHODCALLTYPE *SetFragment )(
            IUriBuilder * This,
            _In_opt_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetHost )(
            IUriBuilder * This,
            _In_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            IUriBuilder * This,
            _In_opt_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetPath )(
            IUriBuilder * This,
            _In_opt_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetPort )(
            IUriBuilder * This,
                       BOOL fHasPort,
                       DWORD dwNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetQuery )(
            IUriBuilder * This,
            _In_opt_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetSchemeName )(
            IUriBuilder * This,
            _In_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *SetUserName )(
            IUriBuilder * This,
            _In_opt_ LPCWSTR pwzNewValue);
                           HRESULT ( STDMETHODCALLTYPE *RemoveProperties )(
            IUriBuilder * This,
                       DWORD dwPropertyMask);
                           HRESULT ( STDMETHODCALLTYPE *HasBeenModified )(
            IUriBuilder * This,
            _Out_ BOOL *pfModified);
        END_INTERFACE
    } IUriBuilderVtbl;
    interface IUriBuilder
    {
        CONST_VTBL struct IUriBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateUriSimple(This,dwAllowEncodingPropertyMask,dwReserved,ppIUri) )
    ( (This)->lpVtbl -> CreateUri(This,dwCreateFlags,dwAllowEncodingPropertyMask,dwReserved,ppIUri) )
    ( (This)->lpVtbl -> CreateUriWithFlags(This,dwCreateFlags,dwUriBuilderFlags,dwAllowEncodingPropertyMask,dwReserved,ppIUri) )
    ( (This)->lpVtbl -> GetIUri(This,ppIUri) )
    ( (This)->lpVtbl -> SetIUri(This,pIUri) )
    ( (This)->lpVtbl -> GetFragment(This,pcchFragment,ppwzFragment) )
    ( (This)->lpVtbl -> GetHost(This,pcchHost,ppwzHost) )
    ( (This)->lpVtbl -> GetPassword(This,pcchPassword,ppwzPassword) )
    ( (This)->lpVtbl -> GetPath(This,pcchPath,ppwzPath) )
    ( (This)->lpVtbl -> GetPort(This,pfHasPort,pdwPort) )
    ( (This)->lpVtbl -> GetQuery(This,pcchQuery,ppwzQuery) )
    ( (This)->lpVtbl -> GetSchemeName(This,pcchSchemeName,ppwzSchemeName) )
    ( (This)->lpVtbl -> GetUserName(This,pcchUserName,ppwzUserName) )
    ( (This)->lpVtbl -> SetFragment(This,pwzNewValue) )
    ( (This)->lpVtbl -> SetHost(This,pwzNewValue) )
    ( (This)->lpVtbl -> SetPassword(This,pwzNewValue) )
    ( (This)->lpVtbl -> SetPath(This,pwzNewValue) )
    ( (This)->lpVtbl -> SetPort(This,fHasPort,dwNewValue) )
    ( (This)->lpVtbl -> SetQuery(This,pwzNewValue) )
    ( (This)->lpVtbl -> SetSchemeName(This,pwzNewValue) )
    ( (This)->lpVtbl -> SetUserName(This,pwzNewValue) )
    ( (This)->lpVtbl -> RemoveProperties(This,dwPropertyMask) )
    ( (This)->lpVtbl -> HasBeenModified(This,pfModified) )
EXTERN_C const IID IID_IUriBuilderFactory;
    typedef struct IUriBuilderFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUriBuilderFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUriBuilderFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUriBuilderFactory * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateIUriBuilder )(
            IUriBuilderFactory * This,
            _In_ DWORD dwFlags,
            _In_ DWORD_PTR dwReserved,
            _Out_ IUriBuilder **ppIUriBuilder);
                           HRESULT ( STDMETHODCALLTYPE *CreateInitializedIUriBuilder )(
            IUriBuilderFactory * This,
            _In_ DWORD dwFlags,
            _In_ DWORD_PTR dwReserved,
            _Out_ IUriBuilder **ppIUriBuilder);
        END_INTERFACE
    } IUriBuilderFactoryVtbl;
    interface IUriBuilderFactory
    {
        CONST_VTBL struct IUriBuilderFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateIUriBuilder(This,dwFlags,dwReserved,ppIUriBuilder) )
    ( (This)->lpVtbl -> CreateInitializedIUriBuilder(This,dwFlags,dwReserved,ppIUriBuilder) )
STDAPI CreateIUriBuilder(
    _In_opt_ IUri *pIUri,
    _In_ DWORD dwFlags,
    _In_ DWORD_PTR dwReserved,
    _Outptr_ IUriBuilder **ppIUriBuilder
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0018_v0_0_s_ifspec;
typedef __RPC_unique_pointer IWinInetInfo *LPWININETINFO;
EXTERN_C const IID IID_IWinInetInfo;
    typedef struct IWinInetInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWinInetInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWinInetInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWinInetInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *QueryOption )(
            IWinInetInfo * This,
                       DWORD dwOption,
                                     LPVOID pBuffer,
                            DWORD *pcbBuf);
        END_INTERFACE
    } IWinInetInfoVtbl;
    interface IWinInetInfo
    {
        CONST_VTBL struct IWinInetInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryOption(This,dwOption,pBuffer,pcbBuf) )
                HRESULT STDMETHODCALLTYPE IWinInetInfo_RemoteQueryOption_Proxy(
    __RPC__in IWinInetInfo * This,
               DWORD dwOption,
                             __RPC__inout_ecount_full(*pcbBuf) BYTE *pBuffer,
                    __RPC__inout DWORD *pcbBuf);
void __RPC_STUB IWinInetInfo_RemoteQueryOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0019_v0_0_s_ifspec;
typedef IHttpSecurity *LPHTTPSECURITY;
EXTERN_C const IID IID_IHttpSecurity;
    typedef struct IHttpSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHttpSecurity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHttpSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IHttpSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            IHttpSecurity * This,
                       REFGUID rguidReason,
                        HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *OnSecurityProblem )(
            IHttpSecurity * This,
                       DWORD dwProblem);
        END_INTERFACE
    } IHttpSecurityVtbl;
    interface IHttpSecurity
    {
        CONST_VTBL struct IHttpSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,rguidReason,phwnd) )
    ( (This)->lpVtbl -> OnSecurityProblem(This,dwProblem) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0020_v0_0_s_ifspec;
typedef __RPC_unique_pointer IWinInetHttpInfo *LPWININETHTTPINFO;
EXTERN_C const IID IID_IWinInetHttpInfo;
    typedef struct IWinInetHttpInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWinInetHttpInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWinInetHttpInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWinInetHttpInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *QueryOption )(
            IWinInetHttpInfo * This,
                       DWORD dwOption,
                                     LPVOID pBuffer,
                            DWORD *pcbBuf);
                      HRESULT ( STDMETHODCALLTYPE *QueryInfo )(
            IWinInetHttpInfo * This,
                       DWORD dwOption,
                                     LPVOID pBuffer,
                            DWORD *pcbBuf,
                            DWORD *pdwFlags,
                            DWORD *pdwReserved);
        END_INTERFACE
    } IWinInetHttpInfoVtbl;
    interface IWinInetHttpInfo
    {
        CONST_VTBL struct IWinInetHttpInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryOption(This,dwOption,pBuffer,pcbBuf) )
    ( (This)->lpVtbl -> QueryInfo(This,dwOption,pBuffer,pcbBuf,pdwFlags,pdwReserved) )
                HRESULT STDMETHODCALLTYPE IWinInetHttpInfo_RemoteQueryInfo_Proxy(
    __RPC__in IWinInetHttpInfo * This,
               DWORD dwOption,
                             __RPC__inout_ecount_full(*pcbBuf) BYTE *pBuffer,
                    __RPC__inout DWORD *pcbBuf,
                    __RPC__inout DWORD *pdwFlags,
                    __RPC__inout DWORD *pdwReserved);
void __RPC_STUB IWinInetHttpInfo_RemoteQueryInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IWinInetHttpTimeouts;
    typedef struct IWinInetHttpTimeoutsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinInetHttpTimeouts * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinInetHttpTimeouts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinInetHttpTimeouts * This);
                           HRESULT ( STDMETHODCALLTYPE *GetRequestTimeouts )(
            IWinInetHttpTimeouts * This,
            _Out_ DWORD *pdwConnectTimeout,
            _Out_ DWORD *pdwSendTimeout,
            _Out_ DWORD *pdwReceiveTimeout);
        END_INTERFACE
    } IWinInetHttpTimeoutsVtbl;
    interface IWinInetHttpTimeouts
    {
        CONST_VTBL struct IWinInetHttpTimeoutsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRequestTimeouts(This,pdwConnectTimeout,pdwSendTimeout,pdwReceiveTimeout) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0022_v0_0_s_ifspec;
typedef IWinInetCacheHints *LPWININETCACHEHINTS;
EXTERN_C const IID IID_IWinInetCacheHints;
    typedef struct IWinInetCacheHintsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinInetCacheHints * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinInetCacheHints * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinInetCacheHints * This);
        HRESULT ( STDMETHODCALLTYPE *SetCacheExtension )(
            IWinInetCacheHints * This,
                       LPCWSTR pwzExt,
                                     LPVOID pszCacheFile,
                            DWORD *pcbCacheFile,
                            DWORD *pdwWinInetError,
                            DWORD *pdwReserved);
        END_INTERFACE
    } IWinInetCacheHintsVtbl;
    interface IWinInetCacheHints
    {
        CONST_VTBL struct IWinInetCacheHintsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCacheExtension(This,pwzExt,pszCacheFile,pcbCacheFile,pdwWinInetError,pdwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0023_v0_0_s_ifspec;
typedef IWinInetCacheHints2 *LPWININETCACHEHINTS2;
EXTERN_C const IID IID_IWinInetCacheHints2;
    typedef struct IWinInetCacheHints2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinInetCacheHints2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinInetCacheHints2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinInetCacheHints2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetCacheExtension )(
            IWinInetCacheHints2 * This,
                       LPCWSTR pwzExt,
                                     LPVOID pszCacheFile,
                            DWORD *pcbCacheFile,
                            DWORD *pdwWinInetError,
                            DWORD *pdwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetCacheExtension2 )(
            IWinInetCacheHints2 * This,
                       LPCWSTR pwzExt,
            __RPC__out_ecount(*pcchCacheFile) WCHAR *pwzCacheFile,
                            DWORD *pcchCacheFile,
                        DWORD *pdwWinInetError,
                        DWORD *pdwReserved);
        END_INTERFACE
    } IWinInetCacheHints2Vtbl;
    interface IWinInetCacheHints2
    {
        CONST_VTBL struct IWinInetCacheHints2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCacheExtension(This,pwzExt,pszCacheFile,pcbCacheFile,pdwWinInetError,pdwReserved) )
    ( (This)->lpVtbl -> SetCacheExtension2(This,pwzExt,pwzCacheFile,pcchCacheFile,pdwWinInetError,pdwReserved) )
EXTERN_C const GUID SID_BindHost;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0024_v0_0_s_ifspec;
typedef __RPC_unique_pointer IBindHost *LPBINDHOST;
EXTERN_C const IID IID_IBindHost;
    typedef struct IBindHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBindHost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBindHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBindHost * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMoniker )(
            __RPC__in IBindHost * This,
                       __RPC__in LPOLESTR szName,
                       __RPC__in_opt IBindCtx *pBC,
                        __RPC__deref_out_opt IMoniker **ppmk,
                       DWORD dwReserved);
                      HRESULT ( STDMETHODCALLTYPE *MonikerBindToStorage )(
            IBindHost * This,
                       IMoniker *pMk,
                       IBindCtx *pBC,
                       IBindStatusCallback *pBSC,
                       REFIID riid,
                        void **ppvObj);
                      HRESULT ( STDMETHODCALLTYPE *MonikerBindToObject )(
            IBindHost * This,
                       IMoniker *pMk,
                       IBindCtx *pBC,
                       IBindStatusCallback *pBSC,
                       REFIID riid,
                        void **ppvObj);
        END_INTERFACE
    } IBindHostVtbl;
    interface IBindHost
    {
        CONST_VTBL struct IBindHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateMoniker(This,szName,pBC,ppmk,dwReserved) )
    ( (This)->lpVtbl -> MonikerBindToStorage(This,pMk,pBC,pBSC,riid,ppvObj) )
    ( (This)->lpVtbl -> MonikerBindToObject(This,pMk,pBC,pBSC,riid,ppvObj) )
                HRESULT STDMETHODCALLTYPE IBindHost_RemoteMonikerBindToStorage_Proxy(
    __RPC__in IBindHost * This,
                       __RPC__in_opt IMoniker *pMk,
                       __RPC__in_opt IBindCtx *pBC,
                       __RPC__in_opt IBindStatusCallback *pBSC,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
void __RPC_STUB IBindHost_RemoteMonikerBindToStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IBindHost_RemoteMonikerBindToObject_Proxy(
    __RPC__in IBindHost * This,
                       __RPC__in_opt IMoniker *pMk,
                       __RPC__in_opt IBindCtx *pBC,
                       __RPC__in_opt IBindStatusCallback *pBSC,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
void __RPC_STUB IBindHost_RemoteMonikerBindToObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
struct IBindStatusCallback;
STDAPI HlinkSimpleNavigateToString(
    _In_opt_ LPCWSTR szTarget,
    _In_opt_ LPCWSTR szLocation,
    _In_opt_ LPCWSTR szTargetFrameName,
    _In_ IUnknown *pUnk,
    _In_opt_ IBindCtx *pbc,
    _In_opt_ IBindStatusCallback *,
               DWORD grfHLNF,
               DWORD dwReserved
);
STDAPI HlinkSimpleNavigateToMoniker(
    _In_opt_ IMoniker *pmkTarget,
    _In_opt_ LPCWSTR szLocation,
    _In_opt_ LPCWSTR szTargetFrameName,
    _In_opt_ IUnknown *pUnk,
    _In_opt_ IBindCtx *pbc,
    _In_opt_ IBindStatusCallback *,
               DWORD grfHLNF,
               DWORD dwReserved
);
STDAPI URLOpenStreamA(_In_opt_ LPUNKNOWN, _In_ LPCSTR,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLOpenStreamW(_In_opt_ LPUNKNOWN, _In_ LPCWSTR,DWORD,_In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLOpenPullStreamA(_In_opt_ LPUNKNOWN, _In_ LPCSTR,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLOpenPullStreamW(_In_opt_ LPUNKNOWN,_In_ LPCWSTR,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToFileA(_In_opt_ LPUNKNOWN, _In_ LPCSTR, _In_opt_ LPCSTR,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToFileW(_In_opt_ LPUNKNOWN, _In_ LPCWSTR,_In_opt_ LPCWSTR,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToCacheFileA(_In_opt_ LPUNKNOWN, _In_ LPCSTR, _Out_writes_(cchFileName) LPSTR, DWORD cchFileName, DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToCacheFileW(_In_opt_ LPUNKNOWN, _In_ LPCWSTR, _Out_writes_(cchFileName) LPWSTR, DWORD cchFileName, DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLOpenBlockingStreamA(_In_opt_ LPUNKNOWN, _In_ LPCSTR, _Outptr_ LPSTREAM*,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI URLOpenBlockingStreamW(_In_opt_ LPUNKNOWN, _In_ LPCWSTR, _Outptr_ LPSTREAM*,DWORD, _In_opt_ LPBINDSTATUSCALLBACK);
STDAPI HlinkGoBack(_In_ IUnknown *pUnk);
STDAPI HlinkGoForward(_In_ IUnknown *pUnk);
STDAPI HlinkNavigateString(_In_opt_ IUnknown *pUnk, _In_opt_ LPCWSTR szTarget);
STDAPI HlinkNavigateMoniker(_In_opt_ IUnknown *pUnk, _In_opt_ IMoniker *pmkTarget);
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0025_v0_0_s_ifspec;
typedef IInternet *LPIINTERNET;
EXTERN_C const IID IID_IInternet;
    typedef struct IInternetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternet * This);
        END_INTERFACE
    } IInternetVtbl;
    interface IInternet
    {
        CONST_VTBL struct IInternetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0026_v0_0_s_ifspec;
typedef IInternetBindInfo *LPIINTERNETBINDINFO;
typedef
enum tagBINDSTRING
    {
        BINDSTRING_HEADERS = 1,
        BINDSTRING_ACCEPT_MIMES = ( BINDSTRING_HEADERS + 1 ) ,
        BINDSTRING_EXTRA_URL = ( BINDSTRING_ACCEPT_MIMES + 1 ) ,
        BINDSTRING_LANGUAGE = ( BINDSTRING_EXTRA_URL + 1 ) ,
        BINDSTRING_USERNAME = ( BINDSTRING_LANGUAGE + 1 ) ,
        BINDSTRING_PASSWORD = ( BINDSTRING_USERNAME + 1 ) ,
        BINDSTRING_UA_PIXELS = ( BINDSTRING_PASSWORD + 1 ) ,
        BINDSTRING_UA_COLOR = ( BINDSTRING_UA_PIXELS + 1 ) ,
        BINDSTRING_OS = ( BINDSTRING_UA_COLOR + 1 ) ,
        BINDSTRING_USER_AGENT = ( BINDSTRING_OS + 1 ) ,
        BINDSTRING_ACCEPT_ENCODINGS = ( BINDSTRING_USER_AGENT + 1 ) ,
        BINDSTRING_POST_COOKIE = ( BINDSTRING_ACCEPT_ENCODINGS + 1 ) ,
        BINDSTRING_POST_DATA_MIME = ( BINDSTRING_POST_COOKIE + 1 ) ,
        BINDSTRING_URL = ( BINDSTRING_POST_DATA_MIME + 1 ) ,
        BINDSTRING_IID = ( BINDSTRING_URL + 1 ) ,
        BINDSTRING_FLAG_BIND_TO_OBJECT = ( BINDSTRING_IID + 1 ) ,
        BINDSTRING_PTR_BIND_CONTEXT = ( BINDSTRING_FLAG_BIND_TO_OBJECT + 1 ) ,
        BINDSTRING_XDR_ORIGIN = ( BINDSTRING_PTR_BIND_CONTEXT + 1 ) ,
        BINDSTRING_DOWNLOADPATH = ( BINDSTRING_XDR_ORIGIN + 1 ) ,
        BINDSTRING_ROOTDOC_URL = ( BINDSTRING_DOWNLOADPATH + 1 ) ,
        BINDSTRING_INITIAL_FILENAME = ( BINDSTRING_ROOTDOC_URL + 1 ) ,
        BINDSTRING_PROXY_USERNAME = ( BINDSTRING_INITIAL_FILENAME + 1 ) ,
        BINDSTRING_PROXY_PASSWORD = ( BINDSTRING_PROXY_USERNAME + 1 ) ,
        BINDSTRING_ENTERPRISE_ID = ( BINDSTRING_PROXY_PASSWORD + 1 ) ,
        BINDSTRING_DOC_URL = ( BINDSTRING_ENTERPRISE_ID + 1 ) ,
        BINDSTRING_SAMESITE_COOKIE_LEVEL = ( BINDSTRING_DOC_URL + 1 )
    } BINDSTRING;
EXTERN_C const IID IID_IInternetBindInfo;
    typedef struct IInternetBindInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetBindInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetBindInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetBindInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetBindInfo )(
            IInternetBindInfo * This,
                        DWORD *grfBINDF,
                                    BINDINFO *pbindinfo);
        HRESULT ( STDMETHODCALLTYPE *GetBindString )(
            IInternetBindInfo * This,
                       ULONG ulStringType,
            __RPC__out LPOLESTR *ppwzStr,
                       ULONG cEl,
                            ULONG *pcElFetched);
        END_INTERFACE
    } IInternetBindInfoVtbl;
    interface IInternetBindInfo
    {
        CONST_VTBL struct IInternetBindInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo) )
    ( (This)->lpVtbl -> GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0027_v0_0_s_ifspec;
typedef IInternetBindInfoEx *LPIINTERNETBINDINFOEX;
EXTERN_C const IID IID_IInternetBindInfoEx;
    typedef struct IInternetBindInfoExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetBindInfoEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetBindInfoEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetBindInfoEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetBindInfo )(
            IInternetBindInfoEx * This,
                        DWORD *grfBINDF,
                                    BINDINFO *pbindinfo);
        HRESULT ( STDMETHODCALLTYPE *GetBindString )(
            IInternetBindInfoEx * This,
                       ULONG ulStringType,
            __RPC__out LPOLESTR *ppwzStr,
                       ULONG cEl,
                            ULONG *pcElFetched);
        HRESULT ( STDMETHODCALLTYPE *GetBindInfoEx )(
            IInternetBindInfoEx * This,
                        DWORD *grfBINDF,
                                    BINDINFO *pbindinfo,
                        DWORD *grfBINDF2,
                        DWORD *pdwReserved);
        END_INTERFACE
    } IInternetBindInfoExVtbl;
    interface IInternetBindInfoEx
    {
        CONST_VTBL struct IInternetBindInfoExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo) )
    ( (This)->lpVtbl -> GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched) )
    ( (This)->lpVtbl -> GetBindInfoEx(This,grfBINDF,pbindinfo,grfBINDF2,pdwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0028_v0_0_s_ifspec;
typedef IInternetProtocolRoot *LPIINTERNETPROTOCOLROOT;
typedef
enum _tagPI_FLAGS
    {
        PI_PARSE_URL = 0x1,
        PI_FILTER_MODE = 0x2,
        PI_FORCE_ASYNC = 0x4,
        PI_USE_WORKERTHREAD = 0x8,
        PI_MIMEVERIFICATION = 0x10,
        PI_CLSIDLOOKUP = 0x20,
        PI_DATAPROGRESS = 0x40,
        PI_SYNCHRONOUS = 0x80,
        PI_APARTMENTTHREADED = 0x100,
        PI_CLASSINSTALL = 0x200,
        PI_PASSONBINDCTX = 0x2000,
        PI_NOMIMEHANDLER = 0x8000,
        PI_LOADAPPDIRECT = 0x4000,
        PD_FORCE_SWITCH = 0x10000,
        PI_PREFERDEFAULTHANDLER = 0x20000
    } PI_FLAGS;
typedef struct _tagPROTOCOLDATA
    {
    DWORD grfFlags;
    DWORD dwState;
    LPVOID pData;
    ULONG cbData;
    } PROTOCOLDATA;
typedef struct _tagStartParam
    {
    IID iid;
    IBindCtx *pIBindCtx;
    IUnknown *pItf;
    } StartParam;
EXTERN_C const IID IID_IInternetProtocolRoot;
    typedef struct IInternetProtocolRootVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetProtocolRoot * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetProtocolRoot * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetProtocolRoot * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IInternetProtocolRoot * This,
                       LPCWSTR szUrl,
                       IInternetProtocolSink *pOIProtSink,
                       IInternetBindInfo *pOIBindInfo,
                       DWORD grfPI,
                       HANDLE_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *Continue )(
            IInternetProtocolRoot * This,
                       PROTOCOLDATA *pProtocolData);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IInternetProtocolRoot * This,
                       HRESULT hrReason,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            IInternetProtocolRoot * This,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            IInternetProtocolRoot * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IInternetProtocolRoot * This);
        END_INTERFACE
    } IInternetProtocolRootVtbl;
    interface IInternetProtocolRoot
    {
        CONST_VTBL struct IInternetProtocolRootVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved) )
    ( (This)->lpVtbl -> Continue(This,pProtocolData) )
    ( (This)->lpVtbl -> Abort(This,hrReason,dwOptions) )
    ( (This)->lpVtbl -> Terminate(This,dwOptions) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Resume(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0029_v0_0_s_ifspec;
typedef IInternetProtocol *LPIINTERNETPROTOCOL;
EXTERN_C const IID IID_IInternetProtocol;
    typedef struct IInternetProtocolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetProtocol * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetProtocol * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetProtocol * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IInternetProtocol * This,
                       LPCWSTR szUrl,
                       IInternetProtocolSink *pOIProtSink,
                       IInternetBindInfo *pOIBindInfo,
                       DWORD grfPI,
                       HANDLE_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *Continue )(
            IInternetProtocol * This,
                       PROTOCOLDATA *pProtocolData);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IInternetProtocol * This,
                       HRESULT hrReason,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            IInternetProtocol * This,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            IInternetProtocol * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IInternetProtocol * This);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IInternetProtocol * This,
                                                void *pv,
                       ULONG cb,
                        ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IInternetProtocol * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
                        ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *LockRequest )(
            IInternetProtocol * This,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *UnlockRequest )(
            IInternetProtocol * This);
        END_INTERFACE
    } IInternetProtocolVtbl;
    interface IInternetProtocol
    {
        CONST_VTBL struct IInternetProtocolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved) )
    ( (This)->lpVtbl -> Continue(This,pProtocolData) )
    ( (This)->lpVtbl -> Abort(This,hrReason,dwOptions) )
    ( (This)->lpVtbl -> Terminate(This,dwOptions) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> LockRequest(This,dwOptions) )
    ( (This)->lpVtbl -> UnlockRequest(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetProtocolEx;
    typedef struct IInternetProtocolExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetProtocolEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetProtocolEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetProtocolEx * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IInternetProtocolEx * This,
                       LPCWSTR szUrl,
                       IInternetProtocolSink *pOIProtSink,
                       IInternetBindInfo *pOIBindInfo,
                       DWORD grfPI,
                       HANDLE_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *Continue )(
            IInternetProtocolEx * This,
                       PROTOCOLDATA *pProtocolData);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IInternetProtocolEx * This,
                       HRESULT hrReason,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            IInternetProtocolEx * This,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            IInternetProtocolEx * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IInternetProtocolEx * This);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IInternetProtocolEx * This,
                                                void *pv,
                       ULONG cb,
                        ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IInternetProtocolEx * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
                        ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *LockRequest )(
            IInternetProtocolEx * This,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *UnlockRequest )(
            IInternetProtocolEx * This);
        HRESULT ( STDMETHODCALLTYPE *StartEx )(
            IInternetProtocolEx * This,
                       IUri *pUri,
                       IInternetProtocolSink *pOIProtSink,
                       IInternetBindInfo *pOIBindInfo,
                       DWORD grfPI,
                       HANDLE_PTR dwReserved);
        END_INTERFACE
    } IInternetProtocolExVtbl;
    interface IInternetProtocolEx
    {
        CONST_VTBL struct IInternetProtocolExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved) )
    ( (This)->lpVtbl -> Continue(This,pProtocolData) )
    ( (This)->lpVtbl -> Abort(This,hrReason,dwOptions) )
    ( (This)->lpVtbl -> Terminate(This,dwOptions) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> LockRequest(This,dwOptions) )
    ( (This)->lpVtbl -> UnlockRequest(This) )
    ( (This)->lpVtbl -> StartEx(This,pUri,pOIProtSink,pOIBindInfo,grfPI,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0031_v0_0_s_ifspec;
typedef IInternetProtocolSink *LPIINTERNETPROTOCOLSINK;
EXTERN_C const IID IID_IInternetProtocolSink;
    typedef struct IInternetProtocolSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetProtocolSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetProtocolSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetProtocolSink * This);
        HRESULT ( STDMETHODCALLTYPE *Switch )(
            IInternetProtocolSink * This,
                       PROTOCOLDATA *pProtocolData);
        HRESULT ( STDMETHODCALLTYPE *ReportProgress )(
            IInternetProtocolSink * This,
                       ULONG ulStatusCode,
                       LPCWSTR szStatusText);
        HRESULT ( STDMETHODCALLTYPE *ReportData )(
            IInternetProtocolSink * This,
                       DWORD grfBSCF,
                       ULONG ulProgress,
                       ULONG ulProgressMax);
        HRESULT ( STDMETHODCALLTYPE *ReportResult )(
            IInternetProtocolSink * This,
                       HRESULT hrResult,
                       DWORD dwError,
                       LPCWSTR szResult);
        END_INTERFACE
    } IInternetProtocolSinkVtbl;
    interface IInternetProtocolSink
    {
        CONST_VTBL struct IInternetProtocolSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Switch(This,pProtocolData) )
    ( (This)->lpVtbl -> ReportProgress(This,ulStatusCode,szStatusText) )
    ( (This)->lpVtbl -> ReportData(This,grfBSCF,ulProgress,ulProgressMax) )
    ( (This)->lpVtbl -> ReportResult(This,hrResult,dwError,szResult) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0032_v0_0_s_ifspec;
typedef IInternetProtocolSinkStackable *LPIINTERNETPROTOCOLSINKStackable;
EXTERN_C const IID IID_IInternetProtocolSinkStackable;
    typedef struct IInternetProtocolSinkStackableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetProtocolSinkStackable * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetProtocolSinkStackable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetProtocolSinkStackable * This);
        HRESULT ( STDMETHODCALLTYPE *SwitchSink )(
            IInternetProtocolSinkStackable * This,
                       IInternetProtocolSink *pOIProtSink);
        HRESULT ( STDMETHODCALLTYPE *CommitSwitch )(
            IInternetProtocolSinkStackable * This);
        HRESULT ( STDMETHODCALLTYPE *RollbackSwitch )(
            IInternetProtocolSinkStackable * This);
        END_INTERFACE
    } IInternetProtocolSinkStackableVtbl;
    interface IInternetProtocolSinkStackable
    {
        CONST_VTBL struct IInternetProtocolSinkStackableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SwitchSink(This,pOIProtSink) )
    ( (This)->lpVtbl -> CommitSwitch(This) )
    ( (This)->lpVtbl -> RollbackSwitch(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0033_v0_0_s_ifspec;
typedef IInternetSession *LPIINTERNETSESSION;
typedef
enum _tagOIBDG_FLAGS
    {
        OIBDG_APARTMENTTHREADED = 0x100,
        OIBDG_DATAONLY = 0x1000
    } OIBDG_FLAGS;
EXTERN_C const IID IID_IInternetSession;
    typedef struct IInternetSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetSession * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetSession * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterNameSpace )(
            IInternetSession * This,
                       IClassFactory *pCF,
                       REFCLSID rclsid,
                       LPCWSTR pwzProtocol,
                       ULONG cPatterns,
                       const LPCWSTR *ppwzPatterns,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *UnregisterNameSpace )(
            IInternetSession * This,
                       IClassFactory *pCF,
                       LPCWSTR pszProtocol);
        HRESULT ( STDMETHODCALLTYPE *RegisterMimeFilter )(
            IInternetSession * This,
                       IClassFactory *pCF,
                       REFCLSID rclsid,
                       LPCWSTR pwzType);
        HRESULT ( STDMETHODCALLTYPE *UnregisterMimeFilter )(
            IInternetSession * This,
                       IClassFactory *pCF,
                       LPCWSTR pwzType);
        HRESULT ( STDMETHODCALLTYPE *CreateBinding )(
            IInternetSession * This,
                       LPBC pBC,
                       LPCWSTR szUrl,
                       IUnknown *pUnkOuter,
                                IUnknown **ppUnk,
                                IInternetProtocol **ppOInetProt,
                       DWORD dwOption);
        HRESULT ( STDMETHODCALLTYPE *SetSessionOption )(
            IInternetSession * This,
                       DWORD dwOption,
                       LPVOID pBuffer,
                       DWORD dwBufferLength,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetSessionOption )(
            IInternetSession * This,
                       DWORD dwOption,
                            LPVOID pBuffer,
                            DWORD *pdwBufferLength,
                       DWORD dwReserved);
        END_INTERFACE
    } IInternetSessionVtbl;
    interface IInternetSession
    {
        CONST_VTBL struct IInternetSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterNameSpace(This,pCF,rclsid,pwzProtocol,cPatterns,ppwzPatterns,dwReserved) )
    ( (This)->lpVtbl -> UnregisterNameSpace(This,pCF,pszProtocol) )
    ( (This)->lpVtbl -> RegisterMimeFilter(This,pCF,rclsid,pwzType) )
    ( (This)->lpVtbl -> UnregisterMimeFilter(This,pCF,pwzType) )
    ( (This)->lpVtbl -> CreateBinding(This,pBC,szUrl,pUnkOuter,ppUnk,ppOInetProt,dwOption) )
    ( (This)->lpVtbl -> SetSessionOption(This,dwOption,pBuffer,dwBufferLength,dwReserved) )
    ( (This)->lpVtbl -> GetSessionOption(This,dwOption,pBuffer,pdwBufferLength,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0034_v0_0_s_ifspec;
typedef IInternetThreadSwitch *LPIINTERNETTHREADSWITCH;
EXTERN_C const IID IID_IInternetThreadSwitch;
    typedef struct IInternetThreadSwitchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetThreadSwitch * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetThreadSwitch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetThreadSwitch * This);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            IInternetThreadSwitch * This);
        HRESULT ( STDMETHODCALLTYPE *Continue )(
            IInternetThreadSwitch * This);
        END_INTERFACE
    } IInternetThreadSwitchVtbl;
    interface IInternetThreadSwitch
    {
        CONST_VTBL struct IInternetThreadSwitchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> Continue(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0035_v0_0_s_ifspec;
typedef IInternetPriority *LPIINTERNETPRIORITY;
EXTERN_C const IID IID_IInternetPriority;
    typedef struct IInternetPriorityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetPriority * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetPriority * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetPriority * This);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            IInternetPriority * This,
                       LONG nPriority);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            IInternetPriority * This,
                        LONG *pnPriority);
        END_INTERFACE
    } IInternetPriorityVtbl;
    interface IInternetPriority
    {
        CONST_VTBL struct IInternetPriorityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPriority(This,nPriority) )
    ( (This)->lpVtbl -> GetPriority(This,pnPriority) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0036_v0_0_s_ifspec;
typedef IInternetProtocolInfo *LPIINTERNETPROTOCOLINFO;
typedef
enum _tagPARSEACTION
    {
        PARSE_CANONICALIZE = 1,
        PARSE_FRIENDLY = ( PARSE_CANONICALIZE + 1 ) ,
        PARSE_SECURITY_URL = ( PARSE_FRIENDLY + 1 ) ,
        PARSE_ROOTDOCUMENT = ( PARSE_SECURITY_URL + 1 ) ,
        PARSE_DOCUMENT = ( PARSE_ROOTDOCUMENT + 1 ) ,
        PARSE_ANCHOR = ( PARSE_DOCUMENT + 1 ) ,
        PARSE_ENCODE_IS_UNESCAPE = ( PARSE_ANCHOR + 1 ) ,
        PARSE_DECODE_IS_ESCAPE = ( PARSE_ENCODE_IS_UNESCAPE + 1 ) ,
        PARSE_PATH_FROM_URL = ( PARSE_DECODE_IS_ESCAPE + 1 ) ,
        PARSE_URL_FROM_PATH = ( PARSE_PATH_FROM_URL + 1 ) ,
        PARSE_MIME = ( PARSE_URL_FROM_PATH + 1 ) ,
        PARSE_SERVER = ( PARSE_MIME + 1 ) ,
        PARSE_SCHEMA = ( PARSE_SERVER + 1 ) ,
        PARSE_SITE = ( PARSE_SCHEMA + 1 ) ,
        PARSE_DOMAIN = ( PARSE_SITE + 1 ) ,
        PARSE_LOCATION = ( PARSE_DOMAIN + 1 ) ,
        PARSE_SECURITY_DOMAIN = ( PARSE_LOCATION + 1 ) ,
        PARSE_ESCAPE = ( PARSE_SECURITY_DOMAIN + 1 ) ,
        PARSE_UNESCAPE = ( PARSE_ESCAPE + 1 )
    } PARSEACTION;
typedef
enum _tagPSUACTION
    {
        PSU_DEFAULT = 1,
        PSU_SECURITY_URL_ONLY = ( PSU_DEFAULT + 1 )
    } PSUACTION;
typedef
enum _tagQUERYOPTION
    {
        QUERY_EXPIRATION_DATE = 1,
        QUERY_TIME_OF_LAST_CHANGE = ( QUERY_EXPIRATION_DATE + 1 ) ,
        QUERY_CONTENT_ENCODING = ( QUERY_TIME_OF_LAST_CHANGE + 1 ) ,
        QUERY_CONTENT_TYPE = ( QUERY_CONTENT_ENCODING + 1 ) ,
        QUERY_REFRESH = ( QUERY_CONTENT_TYPE + 1 ) ,
        QUERY_RECOMBINE = ( QUERY_REFRESH + 1 ) ,
        QUERY_CAN_NAVIGATE = ( QUERY_RECOMBINE + 1 ) ,
        QUERY_USES_NETWORK = ( QUERY_CAN_NAVIGATE + 1 ) ,
        QUERY_IS_CACHED = ( QUERY_USES_NETWORK + 1 ) ,
        QUERY_IS_INSTALLEDENTRY = ( QUERY_IS_CACHED + 1 ) ,
        QUERY_IS_CACHED_OR_MAPPED = ( QUERY_IS_INSTALLEDENTRY + 1 ) ,
        QUERY_USES_CACHE = ( QUERY_IS_CACHED_OR_MAPPED + 1 ) ,
        QUERY_IS_SECURE = ( QUERY_USES_CACHE + 1 ) ,
        QUERY_IS_SAFE = ( QUERY_IS_SECURE + 1 ) ,
        QUERY_USES_HISTORYFOLDER = ( QUERY_IS_SAFE + 1 ) ,
        QUERY_IS_CACHED_AND_USABLE_OFFLINE = ( QUERY_USES_HISTORYFOLDER + 1 )
    } QUERYOPTION;
EXTERN_C const IID IID_IInternetProtocolInfo;
    typedef struct IInternetProtocolInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetProtocolInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetProtocolInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetProtocolInfo * This);
        HRESULT ( STDMETHODCALLTYPE *ParseUrl )(
            IInternetProtocolInfo * This,
                       LPCWSTR pwzUrl,
                       PARSEACTION ParseAction,
                       DWORD dwParseFlags,
            __RPC__out LPWSTR pwzResult,
                       DWORD cchResult,
                        DWORD *pcchResult,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *CombineUrl )(
            IInternetProtocolInfo * This,
                       LPCWSTR pwzBaseUrl,
                       LPCWSTR pwzRelativeUrl,
                       DWORD dwCombineFlags,
            __RPC__in LPWSTR pwzResult,
                       DWORD cchResult,
                        DWORD *pcchResult,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *CompareUrl )(
            IInternetProtocolInfo * This,
                       LPCWSTR pwzUrl1,
                       LPCWSTR pwzUrl2,
                       DWORD dwCompareFlags);
        HRESULT ( STDMETHODCALLTYPE *QueryInfo )(
            IInternetProtocolInfo * This,
                       LPCWSTR pwzUrl,
                       QUERYOPTION OueryOption,
                       DWORD dwQueryFlags,
                                     LPVOID pBuffer,
                       DWORD cbBuffer,
                            DWORD *pcbBuf,
                       DWORD dwReserved);
        END_INTERFACE
    } IInternetProtocolInfoVtbl;
    interface IInternetProtocolInfo
    {
        CONST_VTBL struct IInternetProtocolInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseUrl(This,pwzUrl,ParseAction,dwParseFlags,pwzResult,cchResult,pcchResult,dwReserved) )
    ( (This)->lpVtbl -> CombineUrl(This,pwzBaseUrl,pwzRelativeUrl,dwCombineFlags,pwzResult,cchResult,pcchResult,dwReserved) )
    ( (This)->lpVtbl -> CompareUrl(This,pwzUrl1,pwzUrl2,dwCompareFlags) )
    ( (This)->lpVtbl -> QueryInfo(This,pwzUrl,OueryOption,dwQueryFlags,pBuffer,cbBuffer,pcbBuf,dwReserved) )
STDAPI CoInternetParseUrl(
                                             LPCWSTR pwzUrl,
                                             PARSEACTION ParseAction,
                                             DWORD dwFlags,
    _Out_writes_to_(cchResult,*pcchResult+1) LPWSTR pszResult,
                                             DWORD cchResult,
    _Out_ DWORD *pcchResult,
                                             DWORD dwReserved
    );
STDAPI CoInternetParseIUri(
    _In_ IUri *pIUri,
                                             PARSEACTION ParseAction,
                                             DWORD dwFlags,
    _Out_writes_to_(cchResult,*pcchResult+1) LPWSTR pwzResult,
                                             DWORD cchResult,
    _Out_ DWORD *pcchResult,
    _Reserved_ DWORD_PTR dwReserved
    );
STDAPI CoInternetCombineUrl(
                                             LPCWSTR pwzBaseUrl,
                                             LPCWSTR pwzRelativeUrl,
                                             DWORD dwCombineFlags,
    _Out_writes_to_(cchResult,*pcchResult+1) LPWSTR pszResult,
                                             DWORD cchResult,
    _Out_opt_ DWORD *pcchResult,
    _Reserved_ DWORD dwReserved
    );
STDAPI CoInternetCombineUrlEx(
    _In_opt_ IUri *pBaseUri,
    _In_opt_ LPCWSTR pwzRelativeUrl,
                 DWORD dwCombineFlags,
    _Outptr_ IUri **ppCombinedUri,
    _In_opt_ DWORD_PTR dwReserved
    );
STDAPI CoInternetCombineIUri (
    _In_ IUri *pBaseUri,
    _In_ IUri *pRelativeUri,
                 DWORD dwCombineFlags,
    _Outptr_ IUri **ppCombinedUri,
    _In_opt_ DWORD_PTR dwReserved
    );
STDAPI CoInternetCompareUrl(
    LPCWSTR pwzUrl1,
    LPCWSTR pwzUrl2,
    DWORD dwFlags
    );
STDAPI CoInternetGetProtocolFlags(
             LPCWSTR pwzUrl,
    _Out_ DWORD *pdwFlags,
             DWORD dwReserved
    );
STDAPI CoInternetQueryInfo(
                                                 LPCWSTR pwzUrl,
                                                 QUERYOPTION QueryOptions,
                                                 DWORD dwQueryFlags,
    _Out_writes_bytes_to_(cbBuffer, *pcbBuffer) LPVOID pvBuffer,
    _In_range_(>=, sizeof(DWORD)) DWORD cbBuffer,
    _Out_opt_ DWORD *pcbBuffer,
                                                 DWORD dwReserved
    );
STDAPI CoInternetGetSession(
                 DWORD dwSessionMode,
    _Outptr_ IInternetSession **ppIInternetSession,
                 DWORD dwReserved
    );
STDAPI CoInternetGetSecurityUrl(
                 LPCWSTR pwszUrl,
    _Outptr_ LPWSTR *ppwszSecUrl,
    _In_ PSUACTION psuAction,
    _Reserved_ DWORD dwReserved
    );
STDAPI AsyncInstallDistributionUnit(
    _In_ LPCWSTR szDistUnit,
    _In_opt_ LPCWSTR szTYPE,
    _In_opt_ LPCWSTR szExt,
    DWORD dwFileVersionMS,
    DWORD dwFileVersionLS,
    _In_opt_ LPCWSTR szURL,
    _In_ IBindCtx *pbc,
    _Reserved_ LPVOID pvReserved,
    DWORD flags
    );
STDAPI CoInternetGetSecurityUrlEx(
    _In_ IUri *pUri,
    _Outptr_ IUri **ppSecUri,
                 PSUACTION psuAction,
    _Reserved_ DWORD_PTR dwReserved
    );
typedef
enum _tagINTERNETFEATURELIST
    {
        FEATURE_OBJECT_CACHING = 0,
        FEATURE_ZONE_ELEVATION = ( FEATURE_OBJECT_CACHING + 1 ) ,
        FEATURE_MIME_HANDLING = ( FEATURE_ZONE_ELEVATION + 1 ) ,
        FEATURE_MIME_SNIFFING = ( FEATURE_MIME_HANDLING + 1 ) ,
        FEATURE_WINDOW_RESTRICTIONS = ( FEATURE_MIME_SNIFFING + 1 ) ,
        FEATURE_WEBOC_POPUPMANAGEMENT = ( FEATURE_WINDOW_RESTRICTIONS + 1 ) ,
        FEATURE_BEHAVIORS = ( FEATURE_WEBOC_POPUPMANAGEMENT + 1 ) ,
        FEATURE_DISABLE_MK_PROTOCOL = ( FEATURE_BEHAVIORS + 1 ) ,
        FEATURE_LOCALMACHINE_LOCKDOWN = ( FEATURE_DISABLE_MK_PROTOCOL + 1 ) ,
        FEATURE_SECURITYBAND = ( FEATURE_LOCALMACHINE_LOCKDOWN + 1 ) ,
        FEATURE_RESTRICT_ACTIVEXINSTALL = ( FEATURE_SECURITYBAND + 1 ) ,
        FEATURE_VALIDATE_NAVIGATE_URL = ( FEATURE_RESTRICT_ACTIVEXINSTALL + 1 ) ,
        FEATURE_RESTRICT_FILEDOWNLOAD = ( FEATURE_VALIDATE_NAVIGATE_URL + 1 ) ,
        FEATURE_ADDON_MANAGEMENT = ( FEATURE_RESTRICT_FILEDOWNLOAD + 1 ) ,
        FEATURE_PROTOCOL_LOCKDOWN = ( FEATURE_ADDON_MANAGEMENT + 1 ) ,
        FEATURE_HTTP_USERNAME_PASSWORD_DISABLE = ( FEATURE_PROTOCOL_LOCKDOWN + 1 ) ,
        FEATURE_SAFE_BINDTOOBJECT = ( FEATURE_HTTP_USERNAME_PASSWORD_DISABLE + 1 ) ,
        FEATURE_UNC_SAVEDFILECHECK = ( FEATURE_SAFE_BINDTOOBJECT + 1 ) ,
        FEATURE_GET_URL_DOM_FILEPATH_UNENCODED = ( FEATURE_UNC_SAVEDFILECHECK + 1 ) ,
        FEATURE_TABBED_BROWSING = ( FEATURE_GET_URL_DOM_FILEPATH_UNENCODED + 1 ) ,
        FEATURE_SSLUX = ( FEATURE_TABBED_BROWSING + 1 ) ,
        FEATURE_DISABLE_NAVIGATION_SOUNDS = ( FEATURE_SSLUX + 1 ) ,
        FEATURE_DISABLE_LEGACY_COMPRESSION = ( FEATURE_DISABLE_NAVIGATION_SOUNDS + 1 ) ,
        FEATURE_FORCE_ADDR_AND_STATUS = ( FEATURE_DISABLE_LEGACY_COMPRESSION + 1 ) ,
        FEATURE_XMLHTTP = ( FEATURE_FORCE_ADDR_AND_STATUS + 1 ) ,
        FEATURE_DISABLE_TELNET_PROTOCOL = ( FEATURE_XMLHTTP + 1 ) ,
        FEATURE_FEEDS = ( FEATURE_DISABLE_TELNET_PROTOCOL + 1 ) ,
        FEATURE_BLOCK_INPUT_PROMPTS = ( FEATURE_FEEDS + 1 ) ,
        FEATURE_ENTRY_COUNT = ( FEATURE_BLOCK_INPUT_PROMPTS + 1 )
    } INTERNETFEATURELIST;
STDAPI CoInternetSetFeatureEnabled(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags,
    BOOL fEnable
    );
STDAPI CoInternetIsFeatureEnabled(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags
    );
STDAPI CoInternetIsFeatureEnabledForUrl(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags,
    _In_opt_ LPCWSTR szURL,
    _In_opt_ IInternetSecurityManager *pSecMgr
    );
STDAPI CoInternetIsFeatureEnabledForIUri(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags,
    _In_opt_ IUri * pIUri,
    _In_opt_ IInternetSecurityManagerEx2 *pSecMgr
    );
STDAPI CoInternetIsFeatureZoneElevationEnabled(
    _In_opt_ LPCWSTR szFromURL,
    _In_ LPCWSTR szToURL,
    _In_opt_ IInternetSecurityManager *pSecMgr,
    DWORD dwFlags
    );
STDAPI CopyStgMedium(_In_ const STGMEDIUM * pcstgmedSrc,
                     _Out_ STGMEDIUM * pstgmedDest);
STDAPI CopyBindInfo(_In_ const BINDINFO * pcbiSrc,
                    _Out_ BINDINFO * pbiDest );
STDAPI_(void) ReleaseBindInfo( _Inout_ BINDINFO * pbindinfo );
STDAPI_(PWSTR) IEGetUserPrivateNamespaceName(void);
STDAPI CoInternetCreateSecurityManager(_In_opt_ IServiceProvider *pSP, _Outptr_ IInternetSecurityManager **ppSM, DWORD dwReserved);
STDAPI CoInternetCreateZoneManager(_In_opt_ IServiceProvider *pSP, _Outptr_ IInternetZoneManager **ppZM, DWORD dwReserved);
EXTERN_C const IID CLSID_InternetSecurityManager;
EXTERN_C const IID CLSID_InternetZoneManager;
EXTERN_C const IID CLSID_PersistentZoneIdentifier;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetSecurityMgrSite;
    typedef struct IInternetSecurityMgrSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetSecurityMgrSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetSecurityMgrSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetSecurityMgrSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            IInternetSecurityMgrSite * This,
                        HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            IInternetSecurityMgrSite * This,
                       BOOL fEnable);
        END_INTERFACE
    } IInternetSecurityMgrSiteVtbl;
    interface IInternetSecurityMgrSite
    {
        CONST_VTBL struct IInternetSecurityMgrSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0038_v0_0_s_ifspec;
typedef
enum __MIDL_IInternetSecurityManager_0001
    {
        PUAF_DEFAULT = 0,
        PUAF_NOUI = 0x1,
        PUAF_ISFILE = 0x2,
        PUAF_WARN_IF_DENIED = 0x4,
        PUAF_FORCEUI_FOREGROUND = 0x8,
        PUAF_CHECK_TIFS = 0x10,
        PUAF_DONTCHECKBOXINDIALOG = 0x20,
        PUAF_TRUSTED = 0x40,
        PUAF_ACCEPT_WILDCARD_SCHEME = 0x80,
        PUAF_ENFORCERESTRICTED = 0x100,
        PUAF_NOSAVEDFILECHECK = 0x200,
        PUAF_REQUIRESAVEDFILECHECK = 0x400,
        PUAF_DONT_USE_CACHE = 0x1000,
        PUAF_RESERVED1 = 0x2000,
        PUAF_RESERVED2 = 0x4000,
        PUAF_LMZ_UNLOCKED = 0x10000,
        PUAF_LMZ_LOCKED = 0x20000,
        PUAF_DEFAULTZONEPOL = 0x40000,
        PUAF_NPL_USE_LOCKED_IF_RESTRICTED = 0x80000,
        PUAF_NOUIIFLOCKED = 0x100000,
        PUAF_DRAGPROTOCOLCHECK = 0x200000
    } PUAF;
typedef
enum __MIDL_IInternetSecurityManager_0002
    {
        PUAFOUT_DEFAULT = 0,
        PUAFOUT_ISLOCKZONEPOLICY = 0x1
    } PUAFOUT;
typedef
enum __MIDL_IInternetSecurityManager_0003
    {
        SZM_CREATE = 0,
        SZM_DELETE = 0x1
    } SZM_FLAGS;
EXTERN_C const IID IID_IInternetSecurityManager;
    typedef struct IInternetSecurityManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInternetSecurityManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInternetSecurityManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInternetSecurityManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetSecuritySite )(
            __RPC__in IInternetSecurityManager * This,
                               __RPC__in_opt IInternetSecurityMgrSite *pSite);
        HRESULT ( STDMETHODCALLTYPE *GetSecuritySite )(
            __RPC__in IInternetSecurityManager * This,
                        __RPC__deref_out_opt IInternetSecurityMgrSite **ppSite);
        HRESULT ( STDMETHODCALLTYPE *MapUrlToZone )(
            __RPC__in IInternetSecurityManager * This,
                       __RPC__in LPCWSTR pwszUrl,
                        __RPC__out DWORD *pdwZone,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityId )(
            __RPC__in IInternetSecurityManager * This,
            _In_ LPCWSTR pwszUrl,
            _Out_writes_bytes_to_(MAX_SIZE_SECURITY_ID, *pcbSecurityId) BYTE *pbSecurityId,
            _Inout_ _At_(*pcbSecurityId, _In_range_(>= , MAX_SIZE_SECURITY_ID) _Out_range_(0, MAX_SIZE_SECURITY_ID)) DWORD *pcbSecurityId,
            _In_ DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlAction )(
            __RPC__in IInternetSecurityManager * This,
                       __RPC__in LPCWSTR pwszUrl,
                       DWORD dwAction,
                                 __RPC__out_ecount_full(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                               __RPC__in_opt BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *QueryCustomPolicy )(
            __RPC__in IInternetSecurityManager * This,
                       __RPC__in LPCWSTR pwszUrl,
                       __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbPolicy) BYTE **ppPolicy,
                        __RPC__out DWORD *pcbPolicy,
                       __RPC__in BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetZoneMapping )(
            __RPC__in IInternetSecurityManager * This,
                       DWORD dwZone,
                       __RPC__in LPCWSTR lpszPattern,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneMappings )(
            __RPC__in IInternetSecurityManager * This,
                       DWORD dwZone,
                        __RPC__deref_out_opt IEnumString **ppenumString,
                       DWORD dwFlags);
        END_INTERFACE
    } IInternetSecurityManagerVtbl;
    interface IInternetSecurityManager
    {
        CONST_VTBL struct IInternetSecurityManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSecuritySite(This,pSite) )
    ( (This)->lpVtbl -> GetSecuritySite(This,ppSite) )
    ( (This)->lpVtbl -> MapUrlToZone(This,pwszUrl,pdwZone,dwFlags) )
    ( (This)->lpVtbl -> GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved) )
    ( (This)->lpVtbl -> ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) )
    ( (This)->lpVtbl -> QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) )
    ( (This)->lpVtbl -> SetZoneMapping(This,dwZone,lpszPattern,dwFlags) )
    ( (This)->lpVtbl -> GetZoneMappings(This,dwZone,ppenumString,dwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0039_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetSecurityManagerEx;
    typedef struct IInternetSecurityManagerExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInternetSecurityManagerEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInternetSecurityManagerEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInternetSecurityManagerEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetSecuritySite )(
            __RPC__in IInternetSecurityManagerEx * This,
                               __RPC__in_opt IInternetSecurityMgrSite *pSite);
        HRESULT ( STDMETHODCALLTYPE *GetSecuritySite )(
            __RPC__in IInternetSecurityManagerEx * This,
                        __RPC__deref_out_opt IInternetSecurityMgrSite **ppSite);
        HRESULT ( STDMETHODCALLTYPE *MapUrlToZone )(
            __RPC__in IInternetSecurityManagerEx * This,
                       __RPC__in LPCWSTR pwszUrl,
                        __RPC__out DWORD *pdwZone,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityId )(
            __RPC__in IInternetSecurityManagerEx * This,
            _In_ LPCWSTR pwszUrl,
            _Out_writes_bytes_to_(MAX_SIZE_SECURITY_ID, *pcbSecurityId) BYTE *pbSecurityId,
            _Inout_ _At_(*pcbSecurityId, _In_range_(>= , MAX_SIZE_SECURITY_ID) _Out_range_(0, MAX_SIZE_SECURITY_ID)) DWORD *pcbSecurityId,
            _In_ DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlAction )(
            __RPC__in IInternetSecurityManagerEx * This,
                       __RPC__in LPCWSTR pwszUrl,
                       DWORD dwAction,
                                 __RPC__out_ecount_full(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                               __RPC__in_opt BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *QueryCustomPolicy )(
            __RPC__in IInternetSecurityManagerEx * This,
                       __RPC__in LPCWSTR pwszUrl,
                       __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbPolicy) BYTE **ppPolicy,
                        __RPC__out DWORD *pcbPolicy,
                       __RPC__in BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetZoneMapping )(
            __RPC__in IInternetSecurityManagerEx * This,
                       DWORD dwZone,
                       __RPC__in LPCWSTR lpszPattern,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneMappings )(
            __RPC__in IInternetSecurityManagerEx * This,
                       DWORD dwZone,
                        __RPC__deref_out_opt IEnumString **ppenumString,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlActionEx )(
            __RPC__in IInternetSecurityManagerEx * This,
                       __RPC__in LPCWSTR pwszUrl,
                       DWORD dwAction,
                                 __RPC__out_ecount_full(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       __RPC__in BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD dwReserved,
                        __RPC__out DWORD *pdwOutFlags);
        END_INTERFACE
    } IInternetSecurityManagerExVtbl;
    interface IInternetSecurityManagerEx
    {
        CONST_VTBL struct IInternetSecurityManagerExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSecuritySite(This,pSite) )
    ( (This)->lpVtbl -> GetSecuritySite(This,ppSite) )
    ( (This)->lpVtbl -> MapUrlToZone(This,pwszUrl,pdwZone,dwFlags) )
    ( (This)->lpVtbl -> GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved) )
    ( (This)->lpVtbl -> ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) )
    ( (This)->lpVtbl -> QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) )
    ( (This)->lpVtbl -> SetZoneMapping(This,dwZone,lpszPattern,dwFlags) )
    ( (This)->lpVtbl -> GetZoneMappings(This,dwZone,ppenumString,dwFlags) )
    ( (This)->lpVtbl -> ProcessUrlActionEx(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetSecurityManagerEx2;
    typedef struct IInternetSecurityManagerEx2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInternetSecurityManagerEx2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInternetSecurityManagerEx2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetSecuritySite )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                               __RPC__in_opt IInternetSecurityMgrSite *pSite);
        HRESULT ( STDMETHODCALLTYPE *GetSecuritySite )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                        __RPC__deref_out_opt IInternetSecurityMgrSite **ppSite);
        HRESULT ( STDMETHODCALLTYPE *MapUrlToZone )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       __RPC__in LPCWSTR pwszUrl,
                        __RPC__out DWORD *pdwZone,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityId )(
            __RPC__in IInternetSecurityManagerEx2 * This,
            _In_ LPCWSTR pwszUrl,
            _Out_writes_bytes_to_(MAX_SIZE_SECURITY_ID, *pcbSecurityId) BYTE *pbSecurityId,
            _Inout_ _At_(*pcbSecurityId, _In_range_(>= , MAX_SIZE_SECURITY_ID) _Out_range_(0, MAX_SIZE_SECURITY_ID)) DWORD *pcbSecurityId,
            _In_ DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlAction )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       __RPC__in LPCWSTR pwszUrl,
                       DWORD dwAction,
                                 __RPC__out_ecount_full(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                               __RPC__in_opt BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *QueryCustomPolicy )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       __RPC__in LPCWSTR pwszUrl,
                       __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbPolicy) BYTE **ppPolicy,
                        __RPC__out DWORD *pcbPolicy,
                       __RPC__in BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetZoneMapping )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       DWORD dwZone,
                       __RPC__in LPCWSTR lpszPattern,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneMappings )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       DWORD dwZone,
                        __RPC__deref_out_opt IEnumString **ppenumString,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlActionEx )(
            __RPC__in IInternetSecurityManagerEx2 * This,
                       __RPC__in LPCWSTR pwszUrl,
                       DWORD dwAction,
                                 __RPC__out_ecount_full(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       __RPC__in BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD dwReserved,
                        __RPC__out DWORD *pdwOutFlags);
        HRESULT ( STDMETHODCALLTYPE *MapUrlToZoneEx2 )(
            __RPC__in IInternetSecurityManagerEx2 * This,
            _In_ IUri *pUri,
                        __RPC__out DWORD *pdwZone,
                       DWORD dwFlags,
            _Outptr_opt_ LPWSTR *ppwszMappedUrl,
            _Out_opt_ DWORD *pdwOutFlags);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlActionEx2 )(
            __RPC__in IInternetSecurityManagerEx2 * This,
            _In_ IUri *pUri,
                       DWORD dwAction,
                                 __RPC__out_ecount_full(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                               __RPC__in_opt BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD_PTR dwReserved,
                        __RPC__out DWORD *pdwOutFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityIdEx2 )(
            __RPC__in IInternetSecurityManagerEx2 * This,
            _In_ IUri *pUri,
            _Out_writes_bytes_to_(MAX_SIZE_SECURITY_ID, *pcbSecurityId) BYTE *pbSecurityId,
            _Inout_ _At_(*pcbSecurityId, _In_range_(>= , MAX_SIZE_SECURITY_ID) _Out_range_(0, MAX_SIZE_SECURITY_ID)) DWORD *pcbSecurityId,
            _In_ DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *QueryCustomPolicyEx2 )(
            __RPC__in IInternetSecurityManagerEx2 * This,
            _In_ IUri *pUri,
                       __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbPolicy) BYTE **ppPolicy,
                        __RPC__out DWORD *pcbPolicy,
                       __RPC__in BYTE *pContext,
                       DWORD cbContext,
                       DWORD_PTR dwReserved);
        END_INTERFACE
    } IInternetSecurityManagerEx2Vtbl;
    interface IInternetSecurityManagerEx2
    {
        CONST_VTBL struct IInternetSecurityManagerEx2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSecuritySite(This,pSite) )
    ( (This)->lpVtbl -> GetSecuritySite(This,ppSite) )
    ( (This)->lpVtbl -> MapUrlToZone(This,pwszUrl,pdwZone,dwFlags) )
    ( (This)->lpVtbl -> GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved) )
    ( (This)->lpVtbl -> ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) )
    ( (This)->lpVtbl -> QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) )
    ( (This)->lpVtbl -> SetZoneMapping(This,dwZone,lpszPattern,dwFlags) )
    ( (This)->lpVtbl -> GetZoneMappings(This,dwZone,ppenumString,dwFlags) )
    ( (This)->lpVtbl -> ProcessUrlActionEx(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags) )
    ( (This)->lpVtbl -> MapUrlToZoneEx2(This,pUri,pdwZone,dwFlags,ppwszMappedUrl,pdwOutFlags) )
    ( (This)->lpVtbl -> ProcessUrlActionEx2(This,pUri,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags) )
    ( (This)->lpVtbl -> GetSecurityIdEx2(This,pUri,pbSecurityId,pcbSecurityId,dwReserved) )
    ( (This)->lpVtbl -> QueryCustomPolicyEx2(This,pUri,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0041_v0_0_s_ifspec;
EXTERN_C const IID IID_IZoneIdentifier;
    typedef struct IZoneIdentifierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IZoneIdentifier * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IZoneIdentifier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IZoneIdentifier * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IZoneIdentifier * This,
                        __RPC__out DWORD *pdwZone);
        HRESULT ( STDMETHODCALLTYPE *SetId )(
            __RPC__in IZoneIdentifier * This,
                       DWORD dwZone);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IZoneIdentifier * This);
        END_INTERFACE
    } IZoneIdentifierVtbl;
    interface IZoneIdentifier
    {
        CONST_VTBL struct IZoneIdentifierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This,pdwZone) )
    ( (This)->lpVtbl -> SetId(This,dwZone) )
    ( (This)->lpVtbl -> Remove(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0042_v0_0_s_ifspec;
EXTERN_C const IID IID_IZoneIdentifier2;
    typedef struct IZoneIdentifier2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IZoneIdentifier2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IZoneIdentifier2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IZoneIdentifier2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IZoneIdentifier2 * This,
                        __RPC__out DWORD *pdwZone);
        HRESULT ( STDMETHODCALLTYPE *SetId )(
            __RPC__in IZoneIdentifier2 * This,
                       DWORD dwZone);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IZoneIdentifier2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetLastWriterPackageFamilyName )(
            __RPC__in IZoneIdentifier2 * This,
                        __RPC__deref_out_opt LPWSTR *packageFamilyName);
        HRESULT ( STDMETHODCALLTYPE *SetLastWriterPackageFamilyName )(
            __RPC__in IZoneIdentifier2 * This,
                       __RPC__in LPCWSTR packageFamilyName);
        HRESULT ( STDMETHODCALLTYPE *RemoveLastWriterPackageFamilyName )(
            __RPC__in IZoneIdentifier2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAppZoneId )(
            __RPC__in IZoneIdentifier2 * This,
                        __RPC__out DWORD *zone);
        HRESULT ( STDMETHODCALLTYPE *SetAppZoneId )(
            __RPC__in IZoneIdentifier2 * This,
                       DWORD zone);
        HRESULT ( STDMETHODCALLTYPE *RemoveAppZoneId )(
            __RPC__in IZoneIdentifier2 * This);
        END_INTERFACE
    } IZoneIdentifier2Vtbl;
    interface IZoneIdentifier2
    {
        CONST_VTBL struct IZoneIdentifier2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This,pdwZone) )
    ( (This)->lpVtbl -> SetId(This,dwZone) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> GetLastWriterPackageFamilyName(This,packageFamilyName) )
    ( (This)->lpVtbl -> SetLastWriterPackageFamilyName(This,packageFamilyName) )
    ( (This)->lpVtbl -> RemoveLastWriterPackageFamilyName(This) )
    ( (This)->lpVtbl -> GetAppZoneId(This,zone) )
    ( (This)->lpVtbl -> SetAppZoneId(This,zone) )
    ( (This)->lpVtbl -> RemoveAppZoneId(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0043_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetHostSecurityManager;
    typedef struct IInternetHostSecurityManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetHostSecurityManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetHostSecurityManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetHostSecurityManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityId )(
            IInternetHostSecurityManager * This,
            _Out_writes_(*pcbSecurityId) BYTE *pbSecurityId,
            _Inout_ _Deref_in_range_(MAX_SIZE_SECURITY_ID, UINT_MAX) _Deref_out_range_(0, MAX_SIZE_SECURITY_ID) DWORD *pcbSecurityId,
                       DWORD_PTR dwReserved);
        HRESULT ( STDMETHODCALLTYPE *ProcessUrlAction )(
            IInternetHostSecurityManager * This,
                       DWORD dwAction,
            _Out_writes_all_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
            _In_reads_opt_(cbContext) BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwFlags,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *QueryCustomPolicy )(
            IInternetHostSecurityManager * This,
                       REFGUID guidKey,
            _Outptr_result_buffer_all_maybenull_(*pcbPolicy) BYTE **ppPolicy,
            _Out_ DWORD *pcbPolicy,
            _In_reads_(cbContext) BYTE *pContext,
                       DWORD cbContext,
                       DWORD dwReserved);
        END_INTERFACE
    } IInternetHostSecurityManagerVtbl;
    interface IInternetHostSecurityManager
    {
        CONST_VTBL struct IInternetHostSecurityManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved) )
    ( (This)->lpVtbl -> ProcessUrlAction(This,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) )
    ( (This)->lpVtbl -> QueryCustomPolicy(This,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) )
EXTERN_C const GUID GUID_CUSTOM_LOCALMACHINEZONEUNLOCKED;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0044_v0_0_s_ifspec;
typedef IInternetZoneManager *LPURLZONEMANAGER;
typedef
enum tagURLZONE
    {
        URLZONE_INVALID = -1,
        URLZONE_PREDEFINED_MIN = 0,
        URLZONE_LOCAL_MACHINE = 0,
        URLZONE_INTRANET = ( URLZONE_LOCAL_MACHINE + 1 ) ,
        URLZONE_TRUSTED = ( URLZONE_INTRANET + 1 ) ,
        URLZONE_INTERNET = ( URLZONE_TRUSTED + 1 ) ,
        URLZONE_UNTRUSTED = ( URLZONE_INTERNET + 1 ) ,
        URLZONE_PREDEFINED_MAX = 999,
        URLZONE_USER_MIN = 1000,
        URLZONE_USER_MAX = 10000
    } URLZONE;
typedef
enum tagURLTEMPLATE
    {
        URLTEMPLATE_CUSTOM = 0,
        URLTEMPLATE_PREDEFINED_MIN = 0x10000,
        URLTEMPLATE_LOW = 0x10000,
        URLTEMPLATE_MEDLOW = 0x10500,
        URLTEMPLATE_MEDIUM = 0x11000,
        URLTEMPLATE_MEDHIGH = 0x11500,
        URLTEMPLATE_HIGH = 0x12000,
        URLTEMPLATE_PREDEFINED_MAX = 0x20000
    } URLTEMPLATE;
enum __MIDL_IInternetZoneManager_0001
    {
        MAX_ZONE_PATH = 260,
        MAX_ZONE_DESCRIPTION = 200
    } ;
typedef
enum __MIDL_IInternetZoneManager_0002
    {
        ZAFLAGS_CUSTOM_EDIT = 0x1,
        ZAFLAGS_ADD_SITES = 0x2,
        ZAFLAGS_REQUIRE_VERIFICATION = 0x4,
        ZAFLAGS_INCLUDE_PROXY_OVERRIDE = 0x8,
        ZAFLAGS_INCLUDE_INTRANET_SITES = 0x10,
        ZAFLAGS_NO_UI = 0x20,
        ZAFLAGS_SUPPORTS_VERIFICATION = 0x40,
        ZAFLAGS_UNC_AS_INTRANET = 0x80,
        ZAFLAGS_DETECT_INTRANET = 0x100,
        ZAFLAGS_USE_LOCKED_ZONES = 0x10000,
        ZAFLAGS_VERIFY_TEMPLATE_SETTINGS = 0x20000,
        ZAFLAGS_NO_CACHE = 0x40000
    } ZAFLAGS;
typedef struct _ZONEATTRIBUTES
    {
    ULONG cbSize;
    WCHAR szDisplayName[ 260 ];
    WCHAR szDescription[ 200 ];
    WCHAR szIconPath[ 260 ];
    DWORD dwTemplateMinLevel;
    DWORD dwTemplateRecommended;
    DWORD dwTemplateCurrentLevel;
    DWORD dwFlags;
    } ZONEATTRIBUTES;
typedef struct _ZONEATTRIBUTES *LPZONEATTRIBUTES;
typedef
enum _URLZONEREG
    {
        URLZONEREG_DEFAULT = 0,
        URLZONEREG_HKLM = ( URLZONEREG_DEFAULT + 1 ) ,
        URLZONEREG_HKCU = ( URLZONEREG_HKLM + 1 )
    } URLZONEREG;
EXTERN_C const IID IID_IInternetZoneManager;
    typedef struct IInternetZoneManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetZoneManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetZoneManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetZoneManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAttributes )(
            IInternetZoneManager * This,
                       DWORD dwZone,
            _Inout_ ZONEATTRIBUTES *pZoneAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetZoneAttributes )(
            IInternetZoneManager * This,
                       DWORD dwZone,
            _In_ ZONEATTRIBUTES *pZoneAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetZoneCustomPolicy )(
            IInternetZoneManager * This,
                       DWORD dwZone,
                       REFGUID guidKey,
            _Outptr_result_buffer_(*pcbPolicy) BYTE **ppPolicy,
            _Out_ DWORD *pcbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *SetZoneCustomPolicy )(
            IInternetZoneManager * This,
                       DWORD dwZone,
                       REFGUID guidKey,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *GetZoneActionPolicy )(
            IInternetZoneManager * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _Out_writes_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *SetZoneActionPolicy )(
            IInternetZoneManager * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *PromptAction )(
            IInternetZoneManager * This,
                       DWORD dwAction,
                       HWND hwndParent,
                       LPCWSTR pwszUrl,
                       LPCWSTR pwszText,
                       DWORD dwPromptFlags);
        HRESULT ( STDMETHODCALLTYPE *LogAction )(
            IInternetZoneManager * This,
                       DWORD dwAction,
                       LPCWSTR pwszUrl,
                       LPCWSTR pwszText,
                       DWORD dwLogFlags);
        HRESULT ( STDMETHODCALLTYPE *CreateZoneEnumerator )(
            IInternetZoneManager * This,
                        DWORD *pdwEnum,
                        DWORD *pdwCount,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAt )(
            IInternetZoneManager * This,
                       DWORD dwEnum,
                       DWORD dwIndex,
                        DWORD *pdwZone);
        HRESULT ( STDMETHODCALLTYPE *DestroyZoneEnumerator )(
            IInternetZoneManager * This,
                       DWORD dwEnum);
        HRESULT ( STDMETHODCALLTYPE *CopyTemplatePoliciesToZone )(
            IInternetZoneManager * This,
                       DWORD dwTemplate,
                       DWORD dwZone,
                       DWORD dwReserved);
        END_INTERFACE
    } IInternetZoneManagerVtbl;
    interface IInternetZoneManager
    {
        CONST_VTBL struct IInternetZoneManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetZoneAttributes(This,dwZone,pZoneAttributes) )
    ( (This)->lpVtbl -> SetZoneAttributes(This,dwZone,pZoneAttributes) )
    ( (This)->lpVtbl -> GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags) )
    ( (This)->lpVtbl -> LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags) )
    ( (This)->lpVtbl -> CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags) )
    ( (This)->lpVtbl -> GetZoneAt(This,dwEnum,dwIndex,pdwZone) )
    ( (This)->lpVtbl -> DestroyZoneEnumerator(This,dwEnum) )
    ( (This)->lpVtbl -> CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0045_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetZoneManagerEx;
    typedef struct IInternetZoneManagerExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetZoneManagerEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetZoneManagerEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetZoneManagerEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAttributes )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
            _Inout_ ZONEATTRIBUTES *pZoneAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetZoneAttributes )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
            _In_ ZONEATTRIBUTES *pZoneAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetZoneCustomPolicy )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
                       REFGUID guidKey,
            _Outptr_result_buffer_(*pcbPolicy) BYTE **ppPolicy,
            _Out_ DWORD *pcbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *SetZoneCustomPolicy )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
                       REFGUID guidKey,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *GetZoneActionPolicy )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _Out_writes_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *SetZoneActionPolicy )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *PromptAction )(
            IInternetZoneManagerEx * This,
                       DWORD dwAction,
                       HWND hwndParent,
                       LPCWSTR pwszUrl,
                       LPCWSTR pwszText,
                       DWORD dwPromptFlags);
        HRESULT ( STDMETHODCALLTYPE *LogAction )(
            IInternetZoneManagerEx * This,
                       DWORD dwAction,
                       LPCWSTR pwszUrl,
                       LPCWSTR pwszText,
                       DWORD dwLogFlags);
        HRESULT ( STDMETHODCALLTYPE *CreateZoneEnumerator )(
            IInternetZoneManagerEx * This,
                        DWORD *pdwEnum,
                        DWORD *pdwCount,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAt )(
            IInternetZoneManagerEx * This,
                       DWORD dwEnum,
                       DWORD dwIndex,
                        DWORD *pdwZone);
        HRESULT ( STDMETHODCALLTYPE *DestroyZoneEnumerator )(
            IInternetZoneManagerEx * This,
                       DWORD dwEnum);
        HRESULT ( STDMETHODCALLTYPE *CopyTemplatePoliciesToZone )(
            IInternetZoneManagerEx * This,
                       DWORD dwTemplate,
                       DWORD dwZone,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetZoneActionPolicyEx )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _Out_writes_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetZoneActionPolicyEx )(
            IInternetZoneManagerEx * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg,
                       DWORD dwFlags);
        END_INTERFACE
    } IInternetZoneManagerExVtbl;
    interface IInternetZoneManagerEx
    {
        CONST_VTBL struct IInternetZoneManagerExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetZoneAttributes(This,dwZone,pZoneAttributes) )
    ( (This)->lpVtbl -> SetZoneAttributes(This,dwZone,pZoneAttributes) )
    ( (This)->lpVtbl -> GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags) )
    ( (This)->lpVtbl -> LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags) )
    ( (This)->lpVtbl -> CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags) )
    ( (This)->lpVtbl -> GetZoneAt(This,dwEnum,dwIndex,pdwZone) )
    ( (This)->lpVtbl -> DestroyZoneEnumerator(This,dwEnum) )
    ( (This)->lpVtbl -> CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved) )
    ( (This)->lpVtbl -> GetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) )
    ( (This)->lpVtbl -> SetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0046_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternetZoneManagerEx2;
    typedef struct IInternetZoneManagerEx2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternetZoneManagerEx2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternetZoneManagerEx2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternetZoneManagerEx2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAttributes )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
            _Inout_ ZONEATTRIBUTES *pZoneAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetZoneAttributes )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
            _In_ ZONEATTRIBUTES *pZoneAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetZoneCustomPolicy )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                       REFGUID guidKey,
            _Outptr_result_buffer_(*pcbPolicy) BYTE **ppPolicy,
            _Out_ DWORD *pcbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *SetZoneCustomPolicy )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                       REFGUID guidKey,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *GetZoneActionPolicy )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _Out_writes_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *SetZoneActionPolicy )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg);
        HRESULT ( STDMETHODCALLTYPE *PromptAction )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwAction,
                       HWND hwndParent,
                       LPCWSTR pwszUrl,
                       LPCWSTR pwszText,
                       DWORD dwPromptFlags);
        HRESULT ( STDMETHODCALLTYPE *LogAction )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwAction,
                       LPCWSTR pwszUrl,
                       LPCWSTR pwszText,
                       DWORD dwLogFlags);
        HRESULT ( STDMETHODCALLTYPE *CreateZoneEnumerator )(
            IInternetZoneManagerEx2 * This,
                        DWORD *pdwEnum,
                        DWORD *pdwCount,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAt )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwEnum,
                       DWORD dwIndex,
                        DWORD *pdwZone);
        HRESULT ( STDMETHODCALLTYPE *DestroyZoneEnumerator )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwEnum);
        HRESULT ( STDMETHODCALLTYPE *CopyTemplatePoliciesToZone )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwTemplate,
                       DWORD dwZone,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetZoneActionPolicyEx )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _Out_writes_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetZoneActionPolicyEx )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                       DWORD dwAction,
            _In_reads_(cbPolicy) BYTE *pPolicy,
                       DWORD cbPolicy,
                       URLZONEREG urlZoneReg,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneAttributesEx )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZone,
                                    ZONEATTRIBUTES *pZoneAttributes,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetZoneSecurityState )(
            IInternetZoneManagerEx2 * This,
                       DWORD dwZoneIndex,
                       BOOL fRespectPolicy,
                            LPDWORD pdwState,
                            BOOL *pfPolicyEncountered);
        HRESULT ( STDMETHODCALLTYPE *GetIESecurityState )(
            IInternetZoneManagerEx2 * This,
                       BOOL fRespectPolicy,
                            LPDWORD pdwState,
                            BOOL *pfPolicyEncountered,
                       BOOL fNoCache);
        HRESULT ( STDMETHODCALLTYPE *FixUnsecureSettings )(
            IInternetZoneManagerEx2 * This);
        END_INTERFACE
    } IInternetZoneManagerEx2Vtbl;
    interface IInternetZoneManagerEx2
    {
        CONST_VTBL struct IInternetZoneManagerEx2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetZoneAttributes(This,dwZone,pZoneAttributes) )
    ( (This)->lpVtbl -> SetZoneAttributes(This,dwZone,pZoneAttributes) )
    ( (This)->lpVtbl -> GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) )
    ( (This)->lpVtbl -> PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags) )
    ( (This)->lpVtbl -> LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags) )
    ( (This)->lpVtbl -> CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags) )
    ( (This)->lpVtbl -> GetZoneAt(This,dwEnum,dwIndex,pdwZone) )
    ( (This)->lpVtbl -> DestroyZoneEnumerator(This,dwEnum) )
    ( (This)->lpVtbl -> CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved) )
    ( (This)->lpVtbl -> GetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) )
    ( (This)->lpVtbl -> SetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) )
    ( (This)->lpVtbl -> GetZoneAttributesEx(This,dwZone,pZoneAttributes,dwFlags) )
    ( (This)->lpVtbl -> GetZoneSecurityState(This,dwZoneIndex,fRespectPolicy,pdwState,pfPolicyEncountered) )
    ( (This)->lpVtbl -> GetIESecurityState(This,fRespectPolicy,pdwState,pfPolicyEncountered,fNoCache) )
    ( (This)->lpVtbl -> FixUnsecureSettings(This) )
EXTERN_C const IID CLSID_SoftDistExt;
typedef struct _tagCODEBASEHOLD
    {
    ULONG cbSize;
    LPWSTR szDistUnit;
    LPWSTR szCodeBase;
    DWORD dwVersionMS;
    DWORD dwVersionLS;
    DWORD dwStyle;
    } CODEBASEHOLD;
typedef struct _tagCODEBASEHOLD *LPCODEBASEHOLD;
typedef struct _tagSOFTDISTINFO
    {
    ULONG cbSize;
    DWORD dwFlags;
    DWORD dwAdState;
    LPWSTR szTitle;
    LPWSTR szAbstract;
    LPWSTR szHREF;
    DWORD dwInstalledVersionMS;
    DWORD dwInstalledVersionLS;
    DWORD dwUpdateVersionMS;
    DWORD dwUpdateVersionLS;
    DWORD dwAdvertisedVersionMS;
    DWORD dwAdvertisedVersionLS;
    DWORD dwReserved;
    } SOFTDISTINFO;
typedef struct _tagSOFTDISTINFO *LPSOFTDISTINFO;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0047_v0_0_s_ifspec;
EXTERN_C const IID IID_ISoftDistExt;
    typedef struct ISoftDistExtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISoftDistExt * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISoftDistExt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISoftDistExt * This);
        HRESULT ( STDMETHODCALLTYPE *ProcessSoftDist )(
            ISoftDistExt * This,
                       LPCWSTR szCDFURL,
                       IXMLElement *pSoftDistElement,
                            LPSOFTDISTINFO lpsdi);
        HRESULT ( STDMETHODCALLTYPE *GetFirstCodeBase )(
            ISoftDistExt * This,
            __RPC__in LPWSTR *szCodeBase,
                       LPDWORD dwMaxSize);
        HRESULT ( STDMETHODCALLTYPE *GetNextCodeBase )(
            ISoftDistExt * This,
            __RPC__in LPWSTR *szCodeBase,
                       LPDWORD dwMaxSize);
        HRESULT ( STDMETHODCALLTYPE *AsyncInstallDistributionUnit )(
            ISoftDistExt * This,
                       IBindCtx *pbc,
                       LPVOID pvReserved,
                       DWORD flags,
                       LPCODEBASEHOLD lpcbh);
        END_INTERFACE
    } ISoftDistExtVtbl;
    interface ISoftDistExt
    {
        CONST_VTBL struct ISoftDistExtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProcessSoftDist(This,szCDFURL,pSoftDistElement,lpsdi) )
    ( (This)->lpVtbl -> GetFirstCodeBase(This,szCodeBase,dwMaxSize) )
    ( (This)->lpVtbl -> GetNextCodeBase(This,szCodeBase,dwMaxSize) )
    ( (This)->lpVtbl -> AsyncInstallDistributionUnit(This,pbc,pvReserved,flags,lpcbh) )
STDAPI GetSoftwareUpdateInfo( LPCWSTR szDistUnit, _Out_ LPSOFTDISTINFO psdi );
STDAPI SetSoftwareUpdateAdvertisementState( LPCWSTR szDistUnit, DWORD dwAdState, DWORD dwAdvertisedVersionMS, DWORD dwAdvertisedVersionLS );
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0048_v0_0_s_ifspec;
typedef ICatalogFileInfo *LPCATALOGFILEINFO;
EXTERN_C const IID IID_ICatalogFileInfo;
    typedef struct ICatalogFileInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICatalogFileInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICatalogFileInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICatalogFileInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCatalogFile )(
            ICatalogFileInfo * This,
            __RPC__out LPSTR *ppszCatalogFile);
        HRESULT ( STDMETHODCALLTYPE *GetJavaTrust )(
            ICatalogFileInfo * This,
                        void **ppJavaTrust);
        END_INTERFACE
    } ICatalogFileInfoVtbl;
    interface ICatalogFileInfo
    {
        CONST_VTBL struct ICatalogFileInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCatalogFile(This,ppszCatalogFile) )
    ( (This)->lpVtbl -> GetJavaTrust(This,ppJavaTrust) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0049_v0_0_s_ifspec;
typedef __RPC_unique_pointer IDataFilter *LPDATAFILTER;
EXTERN_C const IID IID_IDataFilter;
    typedef struct IDataFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataFilter * This);
        HRESULT ( STDMETHODCALLTYPE *DoEncode )(
            __RPC__in IDataFilter * This,
                       DWORD dwFlags,
                       LONG lInBufferSize,
                                __RPC__in_ecount_full(lInBufferSize) BYTE *pbInBuffer,
                       LONG lOutBufferSize,
                                 __RPC__out_ecount_full(lOutBufferSize) BYTE *pbOutBuffer,
                       LONG lInBytesAvailable,
                        __RPC__out LONG *plInBytesRead,
                        __RPC__out LONG *plOutBytesWritten,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *DoDecode )(
            __RPC__in IDataFilter * This,
                       DWORD dwFlags,
                       LONG lInBufferSize,
                                __RPC__in_ecount_full(lInBufferSize) BYTE *pbInBuffer,
                       LONG lOutBufferSize,
                                 __RPC__out_ecount_full(lOutBufferSize) BYTE *pbOutBuffer,
                       LONG lInBytesAvailable,
                        __RPC__out LONG *plInBytesRead,
                        __RPC__out LONG *plOutBytesWritten,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetEncodingLevel )(
            __RPC__in IDataFilter * This,
                       DWORD dwEncLevel);
        END_INTERFACE
    } IDataFilterVtbl;
    interface IDataFilter
    {
        CONST_VTBL struct IDataFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoEncode(This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved) )
    ( (This)->lpVtbl -> DoDecode(This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved) )
    ( (This)->lpVtbl -> SetEncodingLevel(This,dwEncLevel) )
typedef struct _tagPROTOCOLFILTERDATA
    {
    DWORD cbSize;
    IInternetProtocolSink *pProtocolSink;
    IInternetProtocol *pProtocol;
    IUnknown *pUnk;
    DWORD dwFilterFlags;
    } PROTOCOLFILTERDATA;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0050_v0_0_s_ifspec;
typedef IEncodingFilterFactory *LPENCODINGFILTERFACTORY;
typedef struct _tagDATAINFO
    {
    ULONG ulTotalSize;
    ULONG ulavrPacketSize;
    ULONG ulConnectSpeed;
    ULONG ulProcessorSpeed;
    } DATAINFO;
EXTERN_C const IID IID_IEncodingFilterFactory;
    typedef struct IEncodingFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEncodingFilterFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEncodingFilterFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEncodingFilterFactory * This);
        HRESULT ( STDMETHODCALLTYPE *FindBestFilter )(
            IEncodingFilterFactory * This,
                       LPCWSTR pwzCodeIn,
                       LPCWSTR pwzCodeOut,
                       DATAINFO info,
                        IDataFilter **ppDF);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFilter )(
            IEncodingFilterFactory * This,
                       LPCWSTR pwzCodeIn,
                       LPCWSTR pwzCodeOut,
                        IDataFilter **ppDF);
        END_INTERFACE
    } IEncodingFilterFactoryVtbl;
    interface IEncodingFilterFactory
    {
        CONST_VTBL struct IEncodingFilterFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindBestFilter(This,pwzCodeIn,pwzCodeOut,info,ppDF) )
    ( (This)->lpVtbl -> GetDefaultFilter(This,pwzCodeIn,pwzCodeOut,ppDF) )
BOOL WINAPI IsLoggingEnabledA(_In_ LPCSTR pszUrl);
BOOL WINAPI IsLoggingEnabledW(_In_ LPCWSTR pwszUrl);
typedef struct _tagHIT_LOGGING_INFO
    {
    DWORD dwStructSize;
    LPSTR lpszLoggedUrlName;
    SYSTEMTIME StartTime;
    SYSTEMTIME EndTime;
    LPSTR lpszExtendedInfo;
    } HIT_LOGGING_INFO;
typedef struct _tagHIT_LOGGING_INFO *LPHIT_LOGGING_INFO;
BOOL WINAPI WriteHitLogging(_In_ LPHIT_LOGGING_INFO lpLogginginfo);
struct CONFIRMSAFETY
    {
    CLSID clsid;
    IUnknown *pUnk;
    DWORD dwFlags;
    } ;
EXTERN_C const GUID GUID_CUSTOM_CONFIRMOBJECTSAFETY;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0051_v0_0_s_ifspec;
typedef IWrappedProtocol *LPIWRAPPEDPROTOCOL;
EXTERN_C const IID IID_IWrappedProtocol;
    typedef struct IWrappedProtocolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWrappedProtocol * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWrappedProtocol * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWrappedProtocol * This);
        HRESULT ( STDMETHODCALLTYPE *GetWrapperCode )(
            IWrappedProtocol * This,
                        LONG *pnCode,
                       DWORD_PTR dwReserved);
        END_INTERFACE
    } IWrappedProtocolVtbl;
    interface IWrappedProtocol
    {
        CONST_VTBL struct IWrappedProtocolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWrapperCode(This,pnCode,dwReserved) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0052_v0_0_s_ifspec;
typedef IGetBindHandle *LPGETBINDHANDLE;
typedef
enum __MIDL_IGetBindHandle_0001
    {
        BINDHANDLETYPES_APPCACHE = 0,
        BINDHANDLETYPES_DEPENDENCY = 0x1,
        BINDHANDLETYPES_COUNT = ( BINDHANDLETYPES_DEPENDENCY + 1 )
    } BINDHANDLETYPES;
EXTERN_C const IID IID_IGetBindHandle;
    typedef struct IGetBindHandleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGetBindHandle * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGetBindHandle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGetBindHandle * This);
        HRESULT ( STDMETHODCALLTYPE *GetBindHandle )(
            IGetBindHandle * This,
                       BINDHANDLETYPES enumRequestedHandle,
                        HANDLE *pRetHandle);
        END_INTERFACE
    } IGetBindHandleVtbl;
    interface IGetBindHandle
    {
        CONST_VTBL struct IGetBindHandleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBindHandle(This,enumRequestedHandle,pRetHandle) )
typedef struct _tagPROTOCOL_ARGUMENT
    {
    LPCWSTR szMethod;
    LPCWSTR szTargetUrl;
    } PROTOCOL_ARGUMENT;
typedef struct _tagPROTOCOL_ARGUMENT *LPPROTOCOL_ARGUMENT;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0053_v0_0_s_ifspec;
typedef IBindCallbackRedirect *LPBINDCALLBACKREDIRECT;
EXTERN_C const IID IID_IBindCallbackRedirect;
    typedef struct IBindCallbackRedirectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBindCallbackRedirect * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBindCallbackRedirect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBindCallbackRedirect * This);
        HRESULT ( STDMETHODCALLTYPE *Redirect )(
            IBindCallbackRedirect * This,
                       LPCWSTR lpcUrl,
                        VARIANT_BOOL *vbCancel);
        END_INTERFACE
    } IBindCallbackRedirectVtbl;
    interface IBindCallbackRedirect
    {
        CONST_VTBL struct IBindCallbackRedirectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Redirect(This,lpcUrl,vbCancel) )
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0054_v0_0_s_ifspec;
EXTERN_C const IID IID_IBindHttpSecurity;
    typedef struct IBindHttpSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBindHttpSecurity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBindHttpSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBindHttpSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *GetIgnoreCertMask )(
            __RPC__in IBindHttpSecurity * This,
                             __RPC__out DWORD *pdwIgnoreCertMask);
        END_INTERFACE
    } IBindHttpSecurityVtbl;
    interface IBindHttpSecurity
    {
        CONST_VTBL struct IBindHttpSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIgnoreCertMask(This,pdwIgnoreCertMask) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmon_0000_0055_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
              HRESULT STDMETHODCALLTYPE IBinding_GetBindResult_Proxy(
    IBinding * This,
                CLSID *pclsidProtocol,
                DWORD *pdwResult,
    __RPC__out LPOLESTR *pszResult,
                    DWORD *pdwReserved);
                HRESULT STDMETHODCALLTYPE IBinding_GetBindResult_Stub(
    __RPC__in IBinding * This,
                __RPC__out CLSID *pclsidProtocol,
                __RPC__out DWORD *pdwResult,
                __RPC__deref_out_opt LPOLESTR *pszResult,
               DWORD dwReserved);
              HRESULT STDMETHODCALLTYPE IBindStatusCallback_GetBindInfo_Proxy(
    IBindStatusCallback * This,
                DWORD *grfBINDF,
                            BINDINFO *pbindinfo);
                HRESULT STDMETHODCALLTYPE IBindStatusCallback_GetBindInfo_Stub(
    __RPC__in IBindStatusCallback * This,
                __RPC__out DWORD *grfBINDF,
                            __RPC__inout_opt RemBINDINFO *pbindinfo,
                            __RPC__inout_opt RemSTGMEDIUM *pstgmed);
              HRESULT STDMETHODCALLTYPE IBindStatusCallback_OnDataAvailable_Proxy(
    IBindStatusCallback * This,
               DWORD grfBSCF,
               DWORD dwSize,
               FORMATETC *pformatetc,
               STGMEDIUM *pstgmed);
                HRESULT STDMETHODCALLTYPE IBindStatusCallback_OnDataAvailable_Stub(
    __RPC__in IBindStatusCallback * This,
               DWORD grfBSCF,
               DWORD dwSize,
               __RPC__in RemFORMATETC *pformatetc,
               __RPC__in RemSTGMEDIUM *pstgmed);
              HRESULT STDMETHODCALLTYPE IBindStatusCallbackEx_GetBindInfoEx_Proxy(
    IBindStatusCallbackEx * This,
                DWORD *grfBINDF,
                            BINDINFO *pbindinfo,
                DWORD *grfBINDF2,
                DWORD *pdwReserved);
                HRESULT STDMETHODCALLTYPE IBindStatusCallbackEx_GetBindInfoEx_Stub(
    __RPC__in IBindStatusCallbackEx * This,
                __RPC__out DWORD *grfBINDF,
                            __RPC__inout_opt RemBINDINFO *pbindinfo,
                            __RPC__inout_opt RemSTGMEDIUM *pstgmed,
                __RPC__out DWORD *grfBINDF2,
                __RPC__out DWORD *pdwReserved);
              HRESULT STDMETHODCALLTYPE IWinInetInfo_QueryOption_Proxy(
    IWinInetInfo * This,
               DWORD dwOption,
                             LPVOID pBuffer,
                    DWORD *pcbBuf);
                HRESULT STDMETHODCALLTYPE IWinInetInfo_QueryOption_Stub(
    __RPC__in IWinInetInfo * This,
               DWORD dwOption,
                             __RPC__inout_ecount_full(*pcbBuf) BYTE *pBuffer,
                    __RPC__inout DWORD *pcbBuf);
              HRESULT STDMETHODCALLTYPE IWinInetHttpInfo_QueryInfo_Proxy(
    IWinInetHttpInfo * This,
               DWORD dwOption,
                             LPVOID pBuffer,
                    DWORD *pcbBuf,
                    DWORD *pdwFlags,
                    DWORD *pdwReserved);
                HRESULT STDMETHODCALLTYPE IWinInetHttpInfo_QueryInfo_Stub(
    __RPC__in IWinInetHttpInfo * This,
               DWORD dwOption,
                             __RPC__inout_ecount_full(*pcbBuf) BYTE *pBuffer,
                    __RPC__inout DWORD *pcbBuf,
                    __RPC__inout DWORD *pdwFlags,
                    __RPC__inout DWORD *pdwReserved);
              HRESULT STDMETHODCALLTYPE IBindHost_MonikerBindToStorage_Proxy(
    IBindHost * This,
               IMoniker *pMk,
               IBindCtx *pBC,
               IBindStatusCallback *pBSC,
               REFIID riid,
                void **ppvObj);
                HRESULT STDMETHODCALLTYPE IBindHost_MonikerBindToStorage_Stub(
    __RPC__in IBindHost * This,
                       __RPC__in_opt IMoniker *pMk,
                       __RPC__in_opt IBindCtx *pBC,
                       __RPC__in_opt IBindStatusCallback *pBSC,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
              HRESULT STDMETHODCALLTYPE IBindHost_MonikerBindToObject_Proxy(
    IBindHost * This,
               IMoniker *pMk,
               IBindCtx *pBC,
               IBindStatusCallback *pBSC,
               REFIID riid,
                void **ppvObj);
                HRESULT STDMETHODCALLTYPE IBindHost_MonikerBindToObject_Stub(
    __RPC__in IBindHost * This,
                       __RPC__in_opt IMoniker *pMk,
                       __RPC__in_opt IBindCtx *pBC,
                       __RPC__in_opt IBindStatusCallback *pBSC,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
}
