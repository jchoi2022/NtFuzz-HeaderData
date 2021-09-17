#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFtpProviderConstruct IFtpProviderConstruct;
typedef interface IFtpAuthenticationProvider IFtpAuthenticationProvider;
typedef interface AsyncIFtpAuthenticationProvider AsyncIFtpAuthenticationProvider;
typedef interface IFtpRoleProvider IFtpRoleProvider;
typedef interface AsyncIFtpRoleProvider AsyncIFtpRoleProvider;
typedef interface IFtpHomeDirectoryProvider IFtpHomeDirectoryProvider;
typedef interface AsyncIFtpHomeDirectoryProvider AsyncIFtpHomeDirectoryProvider;
typedef interface IFtpLogProvider IFtpLogProvider;
typedef interface AsyncIFtpLogProvider AsyncIFtpLogProvider;
typedef interface IFtpAuthorizationProvider IFtpAuthorizationProvider;
typedef interface AsyncIFtpAuthorizationProvider AsyncIFtpAuthorizationProvider;
typedef interface IFtpPreprocessProvider IFtpPreprocessProvider;
typedef interface AsyncIFtpPreprocessProvider AsyncIFtpPreprocessProvider;
typedef interface IFtpPostprocessProvider IFtpPostprocessProvider;
typedef interface AsyncIFtpPostprocessProvider AsyncIFtpPostprocessProvider;
typedef class FtpProvider FtpProvider;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
             struct DECLSPEC_UUID("9e04226f-e38c-419e-a448-62de3b3a8f43") CONFIGURATION_ENTRY
    {
    BSTR bstrKey;
    BSTR bstrValue;
    } ;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFtpProviderConstruct;
    typedef struct IFtpProviderConstructVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpProviderConstruct * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpProviderConstruct * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpProviderConstruct * This);
        HRESULT ( STDMETHODCALLTYPE *Construct )(
            __RPC__in IFtpProviderConstruct * This,
                       __RPC__in SAFEARRAY * configurationEntries);
        END_INTERFACE
    } IFtpProviderConstructVtbl;
    interface IFtpProviderConstruct
    {
        CONST_VTBL struct IFtpProviderConstructVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Construct(This,configurationEntries) )
EXTERN_C const IID IID_IFtpAuthenticationProvider;
    typedef struct IFtpAuthenticationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpAuthenticationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpAuthenticationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpAuthenticationProvider * This);
        HRESULT ( STDMETHODCALLTYPE *AuthenticateUser )(
            __RPC__in IFtpAuthenticationProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszUserName,
                               __RPC__in_string LPCWSTR pszPassword,
                                __RPC__deref_out_opt_string LPWSTR *ppszCanonicalUserName,
                                __RPC__out BOOL *pfAuthenticated);
        END_INTERFACE
    } IFtpAuthenticationProviderVtbl;
    interface IFtpAuthenticationProvider
    {
        CONST_VTBL struct IFtpAuthenticationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AuthenticateUser(This,pszSessionId,pszSiteName,pszUserName,pszPassword,ppszCanonicalUserName,pfAuthenticated) )
EXTERN_C const IID IID_AsyncIFtpAuthenticationProvider;
    typedef struct AsyncIFtpAuthenticationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpAuthenticationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpAuthenticationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpAuthenticationProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_AuthenticateUser )(
            __RPC__in AsyncIFtpAuthenticationProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszUserName,
                               __RPC__in_string LPCWSTR pszPassword);
        HRESULT ( STDMETHODCALLTYPE *Finish_AuthenticateUser )(
            __RPC__in AsyncIFtpAuthenticationProvider * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszCanonicalUserName,
                                __RPC__out BOOL *pfAuthenticated);
        END_INTERFACE
    } AsyncIFtpAuthenticationProviderVtbl;
    interface AsyncIFtpAuthenticationProvider
    {
        CONST_VTBL struct AsyncIFtpAuthenticationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_AuthenticateUser(This,pszSessionId,pszSiteName,pszUserName,pszPassword) )
    ( (This)->lpVtbl -> Finish_AuthenticateUser(This,ppszCanonicalUserName,pfAuthenticated) )
EXTERN_C const IID IID_IFtpRoleProvider;
    typedef struct IFtpRoleProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpRoleProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpRoleProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpRoleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *IsUserInRole )(
            __RPC__in IFtpRoleProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszUserName,
                               __RPC__in_string LPCWSTR pszRole,
                                __RPC__out BOOL *pfIsInRole);
        END_INTERFACE
    } IFtpRoleProviderVtbl;
    interface IFtpRoleProvider
    {
        CONST_VTBL struct IFtpRoleProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsUserInRole(This,pszSessionId,pszSiteName,pszUserName,pszRole,pfIsInRole) )
EXTERN_C const IID IID_AsyncIFtpRoleProvider;
    typedef struct AsyncIFtpRoleProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpRoleProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpRoleProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpRoleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_IsUserInRole )(
            __RPC__in AsyncIFtpRoleProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszUserName,
                               __RPC__in_string LPCWSTR pszRole);
        HRESULT ( STDMETHODCALLTYPE *Finish_IsUserInRole )(
            __RPC__in AsyncIFtpRoleProvider * This,
                                __RPC__out BOOL *pfIsInRole);
        END_INTERFACE
    } AsyncIFtpRoleProviderVtbl;
    interface AsyncIFtpRoleProvider
    {
        CONST_VTBL struct AsyncIFtpRoleProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_IsUserInRole(This,pszSessionId,pszSiteName,pszUserName,pszRole) )
    ( (This)->lpVtbl -> Finish_IsUserInRole(This,pfIsInRole) )
EXTERN_C const IID IID_IFtpHomeDirectoryProvider;
    typedef struct IFtpHomeDirectoryProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpHomeDirectoryProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpHomeDirectoryProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpHomeDirectoryProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetUserHomeDirectoryData )(
            __RPC__in IFtpHomeDirectoryProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszUserName,
                                        __RPC__deref_out_opt_string LPWSTR *ppszHomeDirectoryData);
        END_INTERFACE
    } IFtpHomeDirectoryProviderVtbl;
    interface IFtpHomeDirectoryProvider
    {
        CONST_VTBL struct IFtpHomeDirectoryProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUserHomeDirectoryData(This,pszSessionId,pszSiteName,pszUserName,ppszHomeDirectoryData) )
EXTERN_C const IID IID_AsyncIFtpHomeDirectoryProvider;
    typedef struct AsyncIFtpHomeDirectoryProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpHomeDirectoryProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpHomeDirectoryProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpHomeDirectoryProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetUserHomeDirectoryData )(
            __RPC__in AsyncIFtpHomeDirectoryProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszUserName);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetUserHomeDirectoryData )(
            __RPC__in AsyncIFtpHomeDirectoryProvider * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszHomeDirectoryData);
        END_INTERFACE
    } AsyncIFtpHomeDirectoryProviderVtbl;
    interface AsyncIFtpHomeDirectoryProvider
    {
        CONST_VTBL struct AsyncIFtpHomeDirectoryProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_GetUserHomeDirectoryData(This,pszSessionId,pszSiteName,pszUserName) )
    ( (This)->lpVtbl -> Finish_GetUserHomeDirectoryData(This,ppszHomeDirectoryData) )
             struct DECLSPEC_UUID("6c678262-fc37-406e-84e8-e9c6a5757cdc") LOGGING_PARAMETERS
    {
    LPCWSTR pszSessionId;
    LPCWSTR pszSiteName;
    LPCWSTR pszUserName;
    LPCWSTR pszHostName;
    LPCWSTR pszRemoteIpAddress;
    DWORD dwRemoteIpPort;
    LPCWSTR pszLocalIpAddress;
    DWORD dwLocalIpPort;
    ULONGLONG BytesSent;
    ULONGLONG BytesReceived;
    LPCWSTR pszCommand;
    LPCWSTR pszCommandParameters;
    LPCWSTR pszFullPath;
    DWORD dwElapsedMilliseconds;
    DWORD FtpStatus;
    DWORD FtpSubStatus;
    HRESULT hrStatus;
    LPCWSTR pszInformation;
    } ;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IFtpLogProvider;
    typedef struct IFtpLogProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpLogProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpLogProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpLogProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Log )(
            __RPC__in IFtpLogProvider * This,
                       __RPC__in const struct LOGGING_PARAMETERS *pLoggingParameters);
        END_INTERFACE
    } IFtpLogProviderVtbl;
    interface IFtpLogProvider
    {
        CONST_VTBL struct IFtpLogProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Log(This,pLoggingParameters) )
EXTERN_C const IID IID_AsyncIFtpLogProvider;
    typedef struct AsyncIFtpLogProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpLogProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpLogProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpLogProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_Log )(
            __RPC__in AsyncIFtpLogProvider * This,
                       __RPC__in const struct LOGGING_PARAMETERS *pLoggingParameters);
        HRESULT ( STDMETHODCALLTYPE *Finish_Log )(
            __RPC__in AsyncIFtpLogProvider * This);
        END_INTERFACE
    } AsyncIFtpLogProviderVtbl;
    interface AsyncIFtpLogProvider
    {
        CONST_VTBL struct AsyncIFtpLogProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_Log(This,pLoggingParameters) )
    ( (This)->lpVtbl -> Finish_Log(This) )
typedef
enum _FTP_ACCESS
    {
        FTP_ACCESS_NONE = 0,
        FTP_ACCESS_READ = ( FTP_ACCESS_NONE + 1 ) ,
        FTP_ACCESS_WRITE = ( FTP_ACCESS_READ + 1 ) ,
        FTP_ACCESS_READ_WRITE = ( FTP_ACCESS_WRITE + 1 )
    } FTP_ACCESS;
EXTERN_C const IID IID_IFtpAuthorizationProvider;
    typedef struct IFtpAuthorizationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpAuthorizationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpAuthorizationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpAuthorizationProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetUserAccessPermission )(
            __RPC__in IFtpAuthorizationProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszVirtualPath,
                               __RPC__in_string LPCWSTR pszUserName,
                                __RPC__out FTP_ACCESS *pFtpAccess);
        END_INTERFACE
    } IFtpAuthorizationProviderVtbl;
    interface IFtpAuthorizationProvider
    {
        CONST_VTBL struct IFtpAuthorizationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUserAccessPermission(This,pszSessionId,pszSiteName,pszVirtualPath,pszUserName,pFtpAccess) )
EXTERN_C const IID IID_AsyncIFtpAuthorizationProvider;
    typedef struct AsyncIFtpAuthorizationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpAuthorizationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpAuthorizationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpAuthorizationProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetUserAccessPermission )(
            __RPC__in AsyncIFtpAuthorizationProvider * This,
                               __RPC__in_string LPCWSTR pszSessionId,
                               __RPC__in_string LPCWSTR pszSiteName,
                               __RPC__in_string LPCWSTR pszVirtualPath,
                               __RPC__in_string LPCWSTR pszUserName);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetUserAccessPermission )(
            __RPC__in AsyncIFtpAuthorizationProvider * This,
                                __RPC__out FTP_ACCESS *pFtpAccess);
        END_INTERFACE
    } AsyncIFtpAuthorizationProviderVtbl;
    interface AsyncIFtpAuthorizationProvider
    {
        CONST_VTBL struct AsyncIFtpAuthorizationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_GetUserAccessPermission(This,pszSessionId,pszSiteName,pszVirtualPath,pszUserName) )
    ( (This)->lpVtbl -> Finish_GetUserAccessPermission(This,pFtpAccess) )
typedef DECLSPEC_UUID("e95e698b-7505-4e49-8fb1-cb06dc26c096")
enum _FTP_PROCESS_STATUS
    {
        FTP_PROCESS_CONTINUE = 0,
        FTP_PROCESS_CLOSE_SESSION = ( FTP_PROCESS_CONTINUE + 1 ) ,
        FTP_PROCESS_TERMINATE_SESSION = ( FTP_PROCESS_CLOSE_SESSION + 1 ) ,
        FTP_PROCESS_REJECT_COMMAND = ( FTP_PROCESS_TERMINATE_SESSION + 1 )
    } FTP_PROCESS_STATUS;
             struct DECLSPEC_UUID("07c3d591-cead-4702-abab-a70886af38a3") PRE_PROCESS_PARAMETERS
    {
    LPCWSTR pszSessionId;
    LPCWSTR pszSiteName;
    LPCWSTR pszUserName;
    LPCWSTR pszHostName;
    LPCWSTR pszRemoteIpAddress;
    DWORD dwRemoteIpPort;
    LPCWSTR pszLocalIpAddress;
    DWORD dwLocalIpPort;
    LPCWSTR pszCommand;
    LPCWSTR pszCommandParameters;
    FILETIME SessionStartTime;
    ULONGLONG BytesSentPerSession;
    ULONGLONG BytesReceivedPerSession;
    } ;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IFtpPreprocessProvider;
    typedef struct IFtpPreprocessProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpPreprocessProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpPreprocessProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpPreprocessProvider * This);
        HRESULT ( STDMETHODCALLTYPE *HandlePreprocess )(
            __RPC__in IFtpPreprocessProvider * This,
                       __RPC__in const struct PRE_PROCESS_PARAMETERS *pPreProcessParameters,
                                __RPC__out FTP_PROCESS_STATUS *pFtpProcessStatus);
        END_INTERFACE
    } IFtpPreprocessProviderVtbl;
    interface IFtpPreprocessProvider
    {
        CONST_VTBL struct IFtpPreprocessProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandlePreprocess(This,pPreProcessParameters,pFtpProcessStatus) )
EXTERN_C const IID IID_AsyncIFtpPreprocessProvider;
    typedef struct AsyncIFtpPreprocessProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpPreprocessProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpPreprocessProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpPreprocessProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_HandlePreprocess )(
            __RPC__in AsyncIFtpPreprocessProvider * This,
                       __RPC__in const struct PRE_PROCESS_PARAMETERS *pPreProcessParameters);
        HRESULT ( STDMETHODCALLTYPE *Finish_HandlePreprocess )(
            __RPC__in AsyncIFtpPreprocessProvider * This,
                                __RPC__out FTP_PROCESS_STATUS *pFtpProcessStatus);
        END_INTERFACE
    } AsyncIFtpPreprocessProviderVtbl;
    interface AsyncIFtpPreprocessProvider
    {
        CONST_VTBL struct AsyncIFtpPreprocessProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_HandlePreprocess(This,pPreProcessParameters) )
    ( (This)->lpVtbl -> Finish_HandlePreprocess(This,pFtpProcessStatus) )
             struct DECLSPEC_UUID("53337595-9165-4a8b-a202-7d5dbf7e4b8b") POST_PROCESS_PARAMETERS
    {
    LPCWSTR pszSessionId;
    LPCWSTR pszSiteName;
    LPCWSTR pszUserName;
    LPCWSTR pszHostName;
    LPCWSTR pszRemoteIpAddress;
    DWORD dwRemoteIpPort;
    LPCWSTR pszLocalIpAddress;
    DWORD dwLocalIpPort;
    ULONGLONG BytesSent;
    ULONGLONG BytesReceived;
    LPCWSTR pszCommand;
    LPCWSTR pszCommandParameters;
    LPCWSTR pszFullPath;
    LPCWSTR pszPhysicalPath;
    DWORD FtpStatus;
    DWORD FtpSubStatus;
    HRESULT hrStatus;
    FILETIME SessionStartTime;
    ULONGLONG BytesSentPerSession;
    ULONGLONG BytesReceivedPerSession;
    } ;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IFtpPostprocessProvider;
    typedef struct IFtpPostprocessProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFtpPostprocessProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFtpPostprocessProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFtpPostprocessProvider * This);
        HRESULT ( STDMETHODCALLTYPE *HandlePostprocess )(
            __RPC__in IFtpPostprocessProvider * This,
                       __RPC__in const struct POST_PROCESS_PARAMETERS *pPostProcessParameters,
                                __RPC__out FTP_PROCESS_STATUS *pFtpProcessStatus);
        END_INTERFACE
    } IFtpPostprocessProviderVtbl;
    interface IFtpPostprocessProvider
    {
        CONST_VTBL struct IFtpPostprocessProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandlePostprocess(This,pPostProcessParameters,pFtpProcessStatus) )
EXTERN_C const IID IID_AsyncIFtpPostprocessProvider;
    typedef struct AsyncIFtpPostprocessProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIFtpPostprocessProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIFtpPostprocessProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIFtpPostprocessProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_HandlePostprocess )(
            __RPC__in AsyncIFtpPostprocessProvider * This,
                       __RPC__in const struct POST_PROCESS_PARAMETERS *pPostProcessParameters);
        HRESULT ( STDMETHODCALLTYPE *Finish_HandlePostprocess )(
            __RPC__in AsyncIFtpPostprocessProvider * This,
                                __RPC__out FTP_PROCESS_STATUS *pFtpProcessStatus);
        END_INTERFACE
    } AsyncIFtpPostprocessProviderVtbl;
    interface AsyncIFtpPostprocessProvider
    {
        CONST_VTBL struct AsyncIFtpPostprocessProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_HandlePostprocess(This,pPostProcessParameters) )
    ( (This)->lpVtbl -> Finish_HandlePostprocess(This,pFtpProcessStatus) )
EXTERN_C const IID LIBID_FtpProviderLibrary;
EXTERN_C const CLSID CLSID_FtpProvider;
class DECLSPEC_UUID("70bdc667-33b2-45f0-ac52-c3ca46f7a656")
FtpProvider;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0009_v0_0_s_ifspec;
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
