#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAmsiStream IAmsiStream;
typedef interface IAntimalwareProvider IAntimalwareProvider;
typedef interface IAntimalwareUacProvider IAntimalwareUacProvider;
typedef interface IAntimalware IAntimalware;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum AMSI_RESULT
    {
        AMSI_RESULT_CLEAN = 0,
        AMSI_RESULT_NOT_DETECTED = 1,
        AMSI_RESULT_BLOCKED_BY_ADMIN_START = 0x4000,
        AMSI_RESULT_BLOCKED_BY_ADMIN_END = 0x4fff,
        AMSI_RESULT_DETECTED = 32768
    } AMSI_RESULT;
typedef
enum AMSI_ATTRIBUTE
    {
        AMSI_ATTRIBUTE_APP_NAME = 0,
        AMSI_ATTRIBUTE_CONTENT_NAME = 1,
        AMSI_ATTRIBUTE_CONTENT_SIZE = 2,
        AMSI_ATTRIBUTE_CONTENT_ADDRESS = 3,
        AMSI_ATTRIBUTE_SESSION = 4,
        AMSI_ATTRIBUTE_REDIRECT_CHAIN_SIZE = 5,
        AMSI_ATTRIBUTE_REDIRECT_CHAIN_ADDRESS = 6,
        AMSI_ATTRIBUTE_ALL_SIZE = 7,
        AMSI_ATTRIBUTE_ALL_ADDRESS = 8,
        AMSI_ATTRIBUTE_QUIET = 9
    } AMSI_ATTRIBUTE;
typedef
enum AMSI_UAC_REQUEST_TYPE
    {
        AMSI_UAC_REQUEST_TYPE_EXE = 0,
        AMSI_UAC_REQUEST_TYPE_COM = 1,
        AMSI_UAC_REQUEST_TYPE_MSI = 2,
        AMSI_UAC_REQUEST_TYPE_AX = 3,
        AMSI_UAC_REQUEST_TYPE_PACKAGED_APP = 4,
        AMSI_UAC_REQUEST_TYPE_MAX = 5
    } AMSI_UAC_REQUEST_TYPE;
typedef
enum AMSI_UAC_TRUST_STATE
    {
        AMSI_UAC_TRUST_STATE_TRUSTED = 0,
        AMSI_UAC_TRUST_STATE_UNTRUSTED = 1,
        AMSI_UAC_TRUST_STATE_BLOCKED = 2,
        AMSI_UAC_TRUST_STATE_MAX = 3
    } AMSI_UAC_TRUST_STATE;
typedef
enum AMSI_UAC_MSI_ACTION
    {
        AMSI_UAC_MSI_ACTION_INSTALL = 0,
        AMSI_UAC_MSI_ACTION_UNINSTALL = 1,
        AMSI_UAC_MSI_ACTION_UPDATE = 2,
        AMSI_UAC_MSI_ACTION_MAINTENANCE = 3,
        AMSI_UAC_MSI_ACTION_MAX = 4
    } AMSI_UAC_MSI_ACTION;
typedef struct AMSI_UAC_REQUEST_EXE_INFO
    {
    ULONG ulLength;
                   LPWSTR lpwszApplicationName;
                   LPWSTR lpwszCommandLine;
                   LPWSTR lpwszDLLParameter;
    } AMSI_UAC_REQUEST_EXE_INFO;
typedef struct AMSI_UAC_REQUEST_EXE_INFO *LPAMSI_UAC_REQUEST_EXE_INFO;
typedef struct AMSI_UAC_REQUEST_COM_INFO
    {
    ULONG ulLength;
                   LPWSTR lpwszServerBinary;
                   LPWSTR lpwszRequestor;
    GUID Clsid;
    } AMSI_UAC_REQUEST_COM_INFO;
typedef struct AMSI_UAC_REQUEST_COM_INFO *LPAMSI_UAC_REQUEST_COM_INFO;
typedef struct AMSI_UAC_REQUEST_MSI_INFO
    {
    ULONG ulLength;
    AMSI_UAC_MSI_ACTION MsiAction;
                   LPWSTR lpwszProductName;
                   LPWSTR lpwszVersion;
                   LPWSTR lpwszLanguage;
                   LPWSTR lpwszManufacturer;
                   LPWSTR lpwszPackagePath;
                   LPWSTR lpwszPackageSource;
    ULONG ulUpdates;
                                     LPWSTR *ppwszUpdates;
                                     LPWSTR *ppwszUpdateSources;
    } AMSI_UAC_REQUEST_MSI_INFO;
typedef struct AMSI_UAC_REQUEST_MSI_INFO *LPAMSI_UAC_REQUEST_MSI_INFO;
typedef struct AMSI_UAC_REQUEST_AX_INFO
    {
    ULONG ulLength;
                   LPWSTR lpwszLocalInstallPath;
                   LPWSTR lpwszSourceURL;
    } AMSI_UAC_REQUEST_AX_INFO;
typedef struct AMSI_UAC_REQUEST_AX_INFO *LPAMSI_UAC_REQUEST_AX_INFO;
typedef struct AMSI_UAC_REQUEST_PACKAGED_APP_INFO
    {
    ULONG ulLength;
                   LPWSTR lpwszApplicationName;
                   LPWSTR lpwszCommandLine;
                   LPWSTR lpPackageFamilyName;
                   LPWSTR lpApplicationId;
    } AMSI_UAC_REQUEST_PACKAGED_APP_INFO;
typedef struct AMSI_UAC_REQUEST_PACKAGED_APP_INFO *LPAMSI_UAC_REQUEST_PACKAGED_APP_INFO;
typedef struct AMSI_UAC_REQUEST_CONTEXT
    {
    ULONG ulLength;
    ULONG ulRequestorProcessId;
    AMSI_UAC_TRUST_STATE UACTrustState;
    AMSI_UAC_REQUEST_TYPE Type;
                                          union
        {
                       AMSI_UAC_REQUEST_EXE_INFO ExeInfo;
                       AMSI_UAC_REQUEST_COM_INFO ComInfo;
                       AMSI_UAC_REQUEST_MSI_INFO MsiInfo;
                       AMSI_UAC_REQUEST_AX_INFO ActiveXInfo;
                       AMSI_UAC_REQUEST_PACKAGED_APP_INFO PackagedAppInfo;
        } RequestType;
    BOOL bAutoElevateRequest;
    } AMSI_UAC_REQUEST_CONTEXT;
typedef struct AMSI_UAC_REQUEST_CONTEXT *LPAMSI_UAC_REQUEST_CONTEXT;
extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAmsiStream;
    typedef struct IAmsiStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAmsiStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAmsiStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAmsiStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            IAmsiStream * This,
                       AMSI_ATTRIBUTE attribute,
                              ULONG dataSize,
                                            unsigned char *data,
                        ULONG *retData);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IAmsiStream * This,
                       ULONGLONG position,
                              ULONG size,
                                            unsigned char *buffer,
                        ULONG *readSize);
        END_INTERFACE
    } IAmsiStreamVtbl;
    interface IAmsiStream
    {
        CONST_VTBL struct IAmsiStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttribute(This,attribute,dataSize,data,retData) )
    ( (This)->lpVtbl -> Read(This,position,size,buffer,readSize) )
EXTERN_C const IID IID_IAntimalwareProvider;
    typedef struct IAntimalwareProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAntimalwareProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAntimalwareProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAntimalwareProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Scan )(
            IAntimalwareProvider * This,
                       IAmsiStream *stream,
                        AMSI_RESULT *result);
        void ( STDMETHODCALLTYPE *CloseSession )(
            IAntimalwareProvider * This,
                       ULONGLONG session);
        HRESULT ( STDMETHODCALLTYPE *DisplayName )(
            IAntimalwareProvider * This,
            _Out_ LPWSTR *displayName);
        END_INTERFACE
    } IAntimalwareProviderVtbl;
    interface IAntimalwareProvider
    {
        CONST_VTBL struct IAntimalwareProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Scan(This,stream,result) )
    ( (This)->lpVtbl -> CloseSession(This,session) )
    ( (This)->lpVtbl -> DisplayName(This,displayName) )
EXTERN_C const IID IID_IAntimalwareUacProvider;
    typedef struct IAntimalwareUacProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAntimalwareUacProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAntimalwareUacProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAntimalwareUacProvider * This);
        HRESULT ( STDMETHODCALLTYPE *UacScan )(
            __RPC__in IAntimalwareUacProvider * This,
                       __RPC__in LPAMSI_UAC_REQUEST_CONTEXT context,
                        __RPC__out AMSI_RESULT *result);
        HRESULT ( STDMETHODCALLTYPE *DisplayName )(
            __RPC__in IAntimalwareUacProvider * This,
                                __RPC__deref_out_opt_string LPWSTR *displayName);
        END_INTERFACE
    } IAntimalwareUacProviderVtbl;
    interface IAntimalwareUacProvider
    {
        CONST_VTBL struct IAntimalwareUacProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UacScan(This,context,result) )
    ( (This)->lpVtbl -> DisplayName(This,displayName) )
EXTERN_C const IID IID_IAntimalware;
    typedef struct IAntimalwareVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAntimalware * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAntimalware * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAntimalware * This);
        HRESULT ( STDMETHODCALLTYPE *Scan )(
            IAntimalware * This,
                       IAmsiStream *stream,
                        AMSI_RESULT *result,
                        IAntimalwareProvider **provider);
        void ( STDMETHODCALLTYPE *CloseSession )(
            IAntimalware * This,
                       ULONGLONG session);
        END_INTERFACE
    } IAntimalwareVtbl;
    interface IAntimalware
    {
        CONST_VTBL struct IAntimalwareVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Scan(This,stream,result,provider) )
    ( (This)->lpVtbl -> CloseSession(This,session) )
class DECLSPEC_UUID("fdb00e52-a214-4aa1-8fba-4357bb0072ec") CAntimalware;
EXTERN_C const CLSID CLSID_Antimalware;
DECLARE_HANDLE(HAMSICONTEXT);
DECLARE_HANDLE(HAMSISESSION);
STDAPI AmsiInitialize(
    _In_ LPCWSTR appName,
    _Outptr_ HAMSICONTEXT* amsiContext);
STDAPI_(VOID) AmsiUninitialize(
    _In_ HAMSICONTEXT amsiContext);
STDAPI AmsiOpenSession(
    _In_ HAMSICONTEXT amsiContext,
    _Out_ HAMSISESSION* amsiSession);
STDAPI_(VOID) AmsiCloseSession(
    _In_ HAMSICONTEXT amsiContext,
    _In_ HAMSISESSION amsiSession);
STDAPI AmsiScanBuffer(
    _In_ HAMSICONTEXT amsiContext,
    _In_reads_bytes_(length) PVOID buffer,
    _In_ ULONG length,
    _In_opt_ LPCWSTR contentName,
    _In_opt_ HAMSISESSION amsiSession,
    _Out_ AMSI_RESULT* result);
STDAPI AmsiScanString(
    _In_ HAMSICONTEXT amsiContext,
    _In_ LPCWSTR string,
    _In_opt_ LPCWSTR contentName,
    _In_opt_ HAMSISESSION amsiSession,
    _Out_ AMSI_RESULT* result);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0004_v0_0_s_ifspec;
}
