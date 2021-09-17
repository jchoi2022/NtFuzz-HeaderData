#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWTSProtocolManager IWTSProtocolManager;
typedef interface IWTSProtocolListener IWTSProtocolListener;
typedef interface IWTSProtocolListenerCallback IWTSProtocolListenerCallback;
typedef interface IWTSProtocolConnection IWTSProtocolConnection;
typedef interface IWTSProtocolConnectionCallback IWTSProtocolConnectionCallback;
typedef interface IWTSProtocolShadowConnection IWTSProtocolShadowConnection;
typedef interface IWTSProtocolShadowCallback IWTSProtocolShadowCallback;
typedef interface IWTSProtocolLicenseConnection IWTSProtocolLicenseConnection;
typedef interface IWTSProtocolLogonErrorRedirector IWTSProtocolLogonErrorRedirector;
typedef interface IWRdsRemoteFXGraphicsConnection IWRdsRemoteFXGraphicsConnection;
typedef interface IWRdsProtocolSettings IWRdsProtocolSettings;
typedef interface IWRdsProtocolManager IWRdsProtocolManager;
typedef interface IWRdsProtocolListener IWRdsProtocolListener;
typedef interface IWRdsProtocolListenerCallback IWRdsProtocolListenerCallback;
typedef interface IWRdsProtocolConnection IWRdsProtocolConnection;
typedef interface IWRdsProtocolConnectionCallback IWRdsProtocolConnectionCallback;
typedef interface IWRdsProtocolShadowConnection IWRdsProtocolShadowConnection;
typedef interface IWRdsProtocolShadowCallback IWRdsProtocolShadowCallback;
typedef interface IWRdsProtocolLicenseConnection IWRdsProtocolLicenseConnection;
typedef interface IWRdsProtocolLogonErrorRedirector IWRdsProtocolLogonErrorRedirector;
typedef interface IWRdsWddmIddProps IWRdsWddmIddProps;
#include "oaidl.h"
#include "ocidl.h"
#include "wtsdefs.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSProtocolManager;
    typedef struct IWTSProtocolManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateListener )(
            __RPC__in IWTSProtocolManager * This,
                               __RPC__in_string WCHAR *wszListenerName,
                        __RPC__deref_out_opt IWTSProtocolListener **pProtocolListener);
        HRESULT ( STDMETHODCALLTYPE *NotifyServiceStateChange )(
            __RPC__in IWTSProtocolManager * This,
                       __RPC__in WTS_SERVICE_STATE *pTSServiceStateChange);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStart )(
            __RPC__in IWTSProtocolManager * This,
                       __RPC__in WTS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStop )(
            __RPC__in IWTSProtocolManager * This,
                       __RPC__in WTS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionStateChange )(
            __RPC__in IWTSProtocolManager * This,
                       __RPC__in WTS_SESSION_ID *SessionId,
                       ULONG EventId);
        END_INTERFACE
    } IWTSProtocolManagerVtbl;
    interface IWTSProtocolManager
    {
        CONST_VTBL struct IWTSProtocolManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateListener(This,wszListenerName,pProtocolListener) )
    ( (This)->lpVtbl -> NotifyServiceStateChange(This,pTSServiceStateChange) )
    ( (This)->lpVtbl -> NotifySessionOfServiceStart(This,SessionId) )
    ( (This)->lpVtbl -> NotifySessionOfServiceStop(This,SessionId) )
    ( (This)->lpVtbl -> NotifySessionStateChange(This,SessionId,EventId) )
EXTERN_C const IID IID_IWTSProtocolListener;
    typedef struct IWTSProtocolListenerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolListener * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolListener * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolListener * This);
        HRESULT ( STDMETHODCALLTYPE *StartListen )(
            __RPC__in IWTSProtocolListener * This,
                       __RPC__in_opt IWTSProtocolListenerCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *StopListen )(
            __RPC__in IWTSProtocolListener * This);
        END_INTERFACE
    } IWTSProtocolListenerVtbl;
    interface IWTSProtocolListener
    {
        CONST_VTBL struct IWTSProtocolListenerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartListen(This,pCallback) )
    ( (This)->lpVtbl -> StopListen(This) )
EXTERN_C const IID IID_IWTSProtocolListenerCallback;
    typedef struct IWTSProtocolListenerCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolListenerCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolListenerCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolListenerCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnConnected )(
            __RPC__in IWTSProtocolListenerCallback * This,
                       __RPC__in_opt IWTSProtocolConnection *pConnection,
                        __RPC__deref_out_opt IWTSProtocolConnectionCallback **pCallback);
        END_INTERFACE
    } IWTSProtocolListenerCallbackVtbl;
    interface IWTSProtocolListenerCallback
    {
        CONST_VTBL struct IWTSProtocolListenerCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnected(This,pConnection,pCallback) )
EXTERN_C const IID IID_IWTSProtocolConnection;
    typedef struct IWTSProtocolConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetLogonErrorRedirector )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__deref_out_opt IWTSProtocolLogonErrorRedirector **ppLogonErrorRedir);
        HRESULT ( STDMETHODCALLTYPE *SendPolicyData )(
            __RPC__in IWTSProtocolConnection * This,
                       __RPC__in WTS_POLICY_DATA *pPolicyData);
        HRESULT ( STDMETHODCALLTYPE *AcceptConnection )(
            __RPC__in IWTSProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientData )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__out WTS_CLIENT_DATA *pClientData);
        HRESULT ( STDMETHODCALLTYPE *GetUserCredentials )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__out WTS_USER_CREDENTIAL *pUserCreds);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseConnection )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__deref_out_opt IWTSProtocolLicenseConnection **ppLicenseConnection);
        HRESULT ( STDMETHODCALLTYPE *AuthenticateClientToSession )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__out WTS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionId )(
            __RPC__in IWTSProtocolConnection * This,
                       __RPC__in WTS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolHandles )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__out HANDLE_PTR *pKeyboardHandle,
                        __RPC__out HANDLE_PTR *pMouseHandle,
                        __RPC__out HANDLE_PTR *pBeepHandle,
                        __RPC__out HANDLE_PTR *pVideoHandle);
        HRESULT ( STDMETHODCALLTYPE *ConnectNotify )(
            __RPC__in IWTSProtocolConnection * This,
                       ULONG SessionId);
        HRESULT ( STDMETHODCALLTYPE *IsUserAllowedToLogon )(
            __RPC__in IWTSProtocolConnection * This,
                       ULONG SessionId,
                       HANDLE_PTR UserToken,
                               __RPC__in_string WCHAR *pDomainName,
                               __RPC__in_string WCHAR *pUserName);
        HRESULT ( STDMETHODCALLTYPE *SessionArbitrationEnumeration )(
            __RPC__in IWTSProtocolConnection * This,
                       HANDLE_PTR hUserToken,
                       BOOL bSingleSessionPerUserEnabled,
                                 __RPC__out_ecount_full(*pdwSessionIdentifierCount) ULONG *pSessionIdArray,
                            __RPC__inout ULONG *pdwSessionIdentifierCount);
        HRESULT ( STDMETHODCALLTYPE *LogonNotify )(
            __RPC__in IWTSProtocolConnection * This,
                       HANDLE_PTR hClientToken,
                               __RPC__in_string WCHAR *wszUserName,
                               __RPC__in_string WCHAR *wszDomainName,
                       __RPC__in WTS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *GetUserData )(
            __RPC__in IWTSProtocolConnection * This,
                       __RPC__in WTS_POLICY_DATA *pPolicyData,
                            __RPC__inout WTS_USER_DATA *pClientData);
        HRESULT ( STDMETHODCALLTYPE *DisconnectNotify )(
            __RPC__in IWTSProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IWTSProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolStatus )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__out WTS_PROTOCOL_STATUS *pProtocolStatus);
        HRESULT ( STDMETHODCALLTYPE *GetLastInputTime )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__out ULONG64 *pLastInputTime);
        HRESULT ( STDMETHODCALLTYPE *SetErrorInfo )(
            __RPC__in IWTSProtocolConnection * This,
                       ULONG ulError);
        HRESULT ( STDMETHODCALLTYPE *SendBeep )(
            __RPC__in IWTSProtocolConnection * This,
                       ULONG Frequency,
                       ULONG Duration);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannel )(
            __RPC__in IWTSProtocolConnection * This,
                               __RPC__in_string CHAR *szEndpointName,
                       BOOL bStatic,
                       ULONG RequestedPriority,
                        __RPC__out ULONG_PTR *phChannel);
        HRESULT ( STDMETHODCALLTYPE *QueryProperty )(
            __RPC__in IWTSProtocolConnection * This,
                       GUID QueryType,
                       ULONG ulNumEntriesIn,
                       ULONG ulNumEntriesOut,
                                          __RPC__in_ecount_full(ulNumEntriesIn) PWTS_PROPERTY_VALUE pPropertyEntriesIn,
                                           __RPC__out_ecount_full(ulNumEntriesOut) PWTS_PROPERTY_VALUE pPropertyEntriesOut);
        HRESULT ( STDMETHODCALLTYPE *GetShadowConnection )(
            __RPC__in IWTSProtocolConnection * This,
                        __RPC__deref_out_opt IWTSProtocolShadowConnection **ppShadowConnection);
        END_INTERFACE
    } IWTSProtocolConnectionVtbl;
    interface IWTSProtocolConnection
    {
        CONST_VTBL struct IWTSProtocolConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLogonErrorRedirector(This,ppLogonErrorRedir) )
    ( (This)->lpVtbl -> SendPolicyData(This,pPolicyData) )
    ( (This)->lpVtbl -> AcceptConnection(This) )
    ( (This)->lpVtbl -> GetClientData(This,pClientData) )
    ( (This)->lpVtbl -> GetUserCredentials(This,pUserCreds) )
    ( (This)->lpVtbl -> GetLicenseConnection(This,ppLicenseConnection) )
    ( (This)->lpVtbl -> AuthenticateClientToSession(This,SessionId) )
    ( (This)->lpVtbl -> NotifySessionId(This,SessionId) )
    ( (This)->lpVtbl -> GetProtocolHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle,pVideoHandle) )
    ( (This)->lpVtbl -> ConnectNotify(This,SessionId) )
    ( (This)->lpVtbl -> IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName) )
    ( (This)->lpVtbl -> SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount) )
    ( (This)->lpVtbl -> LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId) )
    ( (This)->lpVtbl -> GetUserData(This,pPolicyData,pClientData) )
    ( (This)->lpVtbl -> DisconnectNotify(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetProtocolStatus(This,pProtocolStatus) )
    ( (This)->lpVtbl -> GetLastInputTime(This,pLastInputTime) )
    ( (This)->lpVtbl -> SetErrorInfo(This,ulError) )
    ( (This)->lpVtbl -> SendBeep(This,Frequency,Duration) )
    ( (This)->lpVtbl -> CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel) )
    ( (This)->lpVtbl -> QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut) )
    ( (This)->lpVtbl -> GetShadowConnection(This,ppShadowConnection) )
EXTERN_C const IID IID_IWTSProtocolConnectionCallback;
    typedef struct IWTSProtocolConnectionCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolConnectionCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolConnectionCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolConnectionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnReady )(
            __RPC__in IWTSProtocolConnectionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *BrokenConnection )(
            __RPC__in IWTSProtocolConnectionCallback * This,
                       ULONG Reason,
                       ULONG Source);
        HRESULT ( STDMETHODCALLTYPE *StopScreenUpdates )(
            __RPC__in IWTSProtocolConnectionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *RedrawWindow )(
            __RPC__in IWTSProtocolConnectionCallback * This,
                                 __RPC__in WTS_SMALL_RECT *rect);
        HRESULT ( STDMETHODCALLTYPE *DisplayIOCtl )(
            __RPC__in IWTSProtocolConnectionCallback * This,
                       __RPC__in WTS_DISPLAY_IOCTL *DisplayIOCtl);
        END_INTERFACE
    } IWTSProtocolConnectionCallbackVtbl;
    interface IWTSProtocolConnectionCallback
    {
        CONST_VTBL struct IWTSProtocolConnectionCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnReady(This) )
    ( (This)->lpVtbl -> BrokenConnection(This,Reason,Source) )
    ( (This)->lpVtbl -> StopScreenUpdates(This) )
    ( (This)->lpVtbl -> RedrawWindow(This,rect) )
    ( (This)->lpVtbl -> DisplayIOCtl(This,DisplayIOCtl) )
EXTERN_C const IID IID_IWTSProtocolShadowConnection;
    typedef struct IWTSProtocolShadowConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolShadowConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolShadowConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolShadowConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IWTSProtocolShadowConnection * This,
                               __RPC__in_string WCHAR *pTargetServerName,
                       DWORD TargetSessionId,
                       BYTE HotKeyVk,
                       USHORT HotkeyModifiers,
                       __RPC__in_opt IWTSProtocolShadowCallback *pShadowCallback);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IWTSProtocolShadowConnection * This);
        HRESULT ( STDMETHODCALLTYPE *DoTarget )(
            __RPC__in IWTSProtocolShadowConnection * This,
                                __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
                       DWORD Param1Size,
                                __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
                       DWORD Param2Size,
                                __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
                       DWORD Param3Size,
                                __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
                       DWORD Param4Size,
                               __RPC__in_string WCHAR *pClientName);
        END_INTERFACE
    } IWTSProtocolShadowConnectionVtbl;
    interface IWTSProtocolShadowConnection
    {
        CONST_VTBL struct IWTSProtocolShadowConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) )
EXTERN_C const IID IID_IWTSProtocolShadowCallback;
    typedef struct IWTSProtocolShadowCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolShadowCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolShadowCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolShadowCallback * This);
        HRESULT ( STDMETHODCALLTYPE *StopShadow )(
            __RPC__in IWTSProtocolShadowCallback * This);
        HRESULT ( STDMETHODCALLTYPE *InvokeTargetShadow )(
            __RPC__in IWTSProtocolShadowCallback * This,
                                     __RPC__in_opt_string WCHAR *pTargetServerName,
                       ULONG TargetSessionId,
                                __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
                       DWORD Param1Size,
                                __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
                       DWORD Param2Size,
                                __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
                       DWORD Param3Size,
                                __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
                       DWORD Param4Size,
                               __RPC__in_string WCHAR *pClientName);
        END_INTERFACE
    } IWTSProtocolShadowCallbackVtbl;
    interface IWTSProtocolShadowCallback
    {
        CONST_VTBL struct IWTSProtocolShadowCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StopShadow(This) )
    ( (This)->lpVtbl -> InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) )
EXTERN_C const IID IID_IWTSProtocolLicenseConnection;
    typedef struct IWTSProtocolLicenseConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolLicenseConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolLicenseConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolLicenseConnection * This);
        HRESULT ( STDMETHODCALLTYPE *RequestLicensingCapabilities )(
            __RPC__in IWTSProtocolLicenseConnection * This,
                        __RPC__out PWTS_LICENSE_CAPABILITIES ppLicenseCapabilities,
                            __RPC__inout ULONG *pcbLicenseCapabilities);
        HRESULT ( STDMETHODCALLTYPE *SendClientLicense )(
            __RPC__in IWTSProtocolLicenseConnection * This,
                                __RPC__in_ecount_full(cbClientLicense) PBYTE pClientLicense,
                       ULONG cbClientLicense);
        HRESULT ( STDMETHODCALLTYPE *RequestClientLicense )(
            __RPC__in IWTSProtocolLicenseConnection * This,
                                __RPC__in_ecount_full(Reserve2) PBYTE Reserve1,
                       ULONG Reserve2,
                                 __RPC__out_ecount_full(*pcbClientLicense) PBYTE ppClientLicense,
                            __RPC__inout ULONG *pcbClientLicense);
        HRESULT ( STDMETHODCALLTYPE *ProtocolComplete )(
            __RPC__in IWTSProtocolLicenseConnection * This,
                       ULONG ulComplete);
        END_INTERFACE
    } IWTSProtocolLicenseConnectionVtbl;
    interface IWTSProtocolLicenseConnection
    {
        CONST_VTBL struct IWTSProtocolLicenseConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities) )
    ( (This)->lpVtbl -> SendClientLicense(This,pClientLicense,cbClientLicense) )
    ( (This)->lpVtbl -> RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense) )
    ( (This)->lpVtbl -> ProtocolComplete(This,ulComplete) )
EXTERN_C const IID IID_IWTSProtocolLogonErrorRedirector;
    typedef struct IWTSProtocolLogonErrorRedirectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This);
        HRESULT ( STDMETHODCALLTYPE *OnBeginPainting )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This);
        HRESULT ( STDMETHODCALLTYPE *RedirectStatus )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
                               __RPC__in_string LPCWSTR pszMessage,
                        __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *RedirectMessage )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
                               __RPC__in_string LPCWSTR pszCaption,
                               __RPC__in_string LPCWSTR pszMessage,
                       UINT uType,
                        __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *RedirectLogonError )(
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
                       LONG ntsStatus,
                       LONG ntsSubstatus,
                               __RPC__in_string LPCWSTR pszCaption,
                               __RPC__in_string LPCWSTR pszMessage,
                       UINT uType,
                        __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        END_INTERFACE
    } IWTSProtocolLogonErrorRedirectorVtbl;
    interface IWTSProtocolLogonErrorRedirector
    {
        CONST_VTBL struct IWTSProtocolLogonErrorRedirectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBeginPainting(This) )
    ( (This)->lpVtbl -> RedirectStatus(This,pszMessage,pResponse) )
    ( (This)->lpVtbl -> RedirectMessage(This,pszCaption,pszMessage,uType,pResponse) )
    ( (This)->lpVtbl -> RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse) )
EXTERN_C const IID IID_IWRdsRemoteFXGraphicsConnection;
    typedef struct IWRdsRemoteFXGraphicsConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsRemoteFXGraphicsConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsRemoteFXGraphicsConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsRemoteFXGraphicsConnection * This);
        HRESULT ( STDMETHODCALLTYPE *EnableRemoteFXGraphics )(
            __RPC__in IWRdsRemoteFXGraphicsConnection * This,
                        __RPC__out BOOL *pEnableRemoteFXGraphics);
        HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelTransport )(
            __RPC__in IWRdsRemoteFXGraphicsConnection * This,
                        __RPC__deref_out_opt IUnknown **ppTransport);
        END_INTERFACE
    } IWRdsRemoteFXGraphicsConnectionVtbl;
    interface IWRdsRemoteFXGraphicsConnection
    {
        CONST_VTBL struct IWRdsRemoteFXGraphicsConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableRemoteFXGraphics(This,pEnableRemoteFXGraphics) )
    ( (This)->lpVtbl -> GetVirtualChannelTransport(This,ppTransport) )
#pragma deprecated(IWRdsRemoteFXGraphicsConnection)
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IWRdsProtocolSettings;
    typedef struct IWRdsProtocolSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetSettings )(
            __RPC__in IWRdsProtocolSettings * This,
                       WRDS_SETTING_TYPE WRdsSettingType,
                       WRDS_SETTING_LEVEL WRdsSettingLevel,
                             __RPC__out PWRDS_SETTINGS pWRdsSettings);
        HRESULT ( STDMETHODCALLTYPE *MergeSettings )(
            __RPC__in IWRdsProtocolSettings * This,
                            __RPC__in PWRDS_SETTINGS pWRdsSettings,
                       WRDS_CONNECTION_SETTING_LEVEL WRdsConnectionSettingLevel,
                                 __RPC__inout PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings);
        END_INTERFACE
    } IWRdsProtocolSettingsVtbl;
    interface IWRdsProtocolSettings
    {
        CONST_VTBL struct IWRdsProtocolSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSettings(This,WRdsSettingType,WRdsSettingLevel,pWRdsSettings) )
    ( (This)->lpVtbl -> MergeSettings(This,pWRdsSettings,WRdsConnectionSettingLevel,pWRdsConnectionSettings) )
EXTERN_C const IID IID_IWRdsProtocolManager;
    typedef struct IWRdsProtocolManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolManager * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in_opt IWRdsProtocolSettings *pIWRdsSettings,
                       __RPC__in PWRDS_SETTINGS pWRdsSettings);
        HRESULT ( STDMETHODCALLTYPE *CreateListener )(
            __RPC__in IWRdsProtocolManager * This,
                               __RPC__in_string WCHAR *wszListenerName,
                        __RPC__deref_out_opt IWRdsProtocolListener **pProtocolListener);
        HRESULT ( STDMETHODCALLTYPE *NotifyServiceStateChange )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in WRDS_SERVICE_STATE *pTSServiceStateChange);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStart )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in WRDS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStop )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in WRDS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionStateChange )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in WRDS_SESSION_ID *SessionId,
                       ULONG EventId);
        HRESULT ( STDMETHODCALLTYPE *NotifySettingsChange )(
            __RPC__in IWRdsProtocolManager * This,
                       __RPC__in PWRDS_SETTINGS pWRdsSettings);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            __RPC__in IWRdsProtocolManager * This);
        END_INTERFACE
    } IWRdsProtocolManagerVtbl;
    interface IWRdsProtocolManager
    {
        CONST_VTBL struct IWRdsProtocolManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIWRdsSettings,pWRdsSettings) )
    ( (This)->lpVtbl -> CreateListener(This,wszListenerName,pProtocolListener) )
    ( (This)->lpVtbl -> NotifyServiceStateChange(This,pTSServiceStateChange) )
    ( (This)->lpVtbl -> NotifySessionOfServiceStart(This,SessionId) )
    ( (This)->lpVtbl -> NotifySessionOfServiceStop(This,SessionId) )
    ( (This)->lpVtbl -> NotifySessionStateChange(This,SessionId,EventId) )
    ( (This)->lpVtbl -> NotifySettingsChange(This,pWRdsSettings) )
    ( (This)->lpVtbl -> Uninitialize(This) )
EXTERN_C const IID IID_IWRdsProtocolListener;
    typedef struct IWRdsProtocolListenerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolListener * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolListener * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolListener * This);
        HRESULT ( STDMETHODCALLTYPE *GetSettings )(
            __RPC__in IWRdsProtocolListener * This,
                       WRDS_LISTENER_SETTING_LEVEL WRdsListenerSettingLevel,
                             __RPC__out PWRDS_LISTENER_SETTINGS pWRdsListenerSettings);
        HRESULT ( STDMETHODCALLTYPE *StartListen )(
            __RPC__in IWRdsProtocolListener * This,
                       __RPC__in_opt IWRdsProtocolListenerCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *StopListen )(
            __RPC__in IWRdsProtocolListener * This);
        END_INTERFACE
    } IWRdsProtocolListenerVtbl;
    interface IWRdsProtocolListener
    {
        CONST_VTBL struct IWRdsProtocolListenerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSettings(This,WRdsListenerSettingLevel,pWRdsListenerSettings) )
    ( (This)->lpVtbl -> StartListen(This,pCallback) )
    ( (This)->lpVtbl -> StopListen(This) )
EXTERN_C const IID IID_IWRdsProtocolListenerCallback;
    typedef struct IWRdsProtocolListenerCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolListenerCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolListenerCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolListenerCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnConnected )(
            __RPC__in IWRdsProtocolListenerCallback * This,
                       __RPC__in_opt IWRdsProtocolConnection *pConnection,
                       __RPC__in PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings,
                        __RPC__deref_out_opt IWRdsProtocolConnectionCallback **pCallback);
        END_INTERFACE
    } IWRdsProtocolListenerCallbackVtbl;
    interface IWRdsProtocolListenerCallback
    {
        CONST_VTBL struct IWRdsProtocolListenerCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnected(This,pConnection,pWRdsConnectionSettings,pCallback) )
EXTERN_C const IID IID_IWRdsProtocolConnection;
    typedef struct IWRdsProtocolConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetLogonErrorRedirector )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__deref_out_opt IWRdsProtocolLogonErrorRedirector **ppLogonErrorRedir);
        HRESULT ( STDMETHODCALLTYPE *AcceptConnection )(
            __RPC__in IWRdsProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientData )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out WRDS_CLIENT_DATA *pClientData);
        HRESULT ( STDMETHODCALLTYPE *GetClientMonitorData )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out UINT *pNumMonitors,
                        __RPC__out UINT *pPrimaryMonitor);
        HRESULT ( STDMETHODCALLTYPE *GetUserCredentials )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out WRDS_USER_CREDENTIAL *pUserCreds);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseConnection )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__deref_out_opt IWRdsProtocolLicenseConnection **ppLicenseConnection);
        HRESULT ( STDMETHODCALLTYPE *AuthenticateClientToSession )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out WRDS_SESSION_ID *SessionId);
        HRESULT ( STDMETHODCALLTYPE *NotifySessionId )(
            __RPC__in IWRdsProtocolConnection * This,
                       __RPC__in WRDS_SESSION_ID *SessionId,
                       HANDLE_PTR SessionHandle);
        HRESULT ( STDMETHODCALLTYPE *GetInputHandles )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out HANDLE_PTR *pKeyboardHandle,
                        __RPC__out HANDLE_PTR *pMouseHandle,
                        __RPC__out HANDLE_PTR *pBeepHandle);
        HRESULT ( STDMETHODCALLTYPE *GetVideoHandle )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out HANDLE_PTR *pVideoHandle);
        HRESULT ( STDMETHODCALLTYPE *ConnectNotify )(
            __RPC__in IWRdsProtocolConnection * This,
                       ULONG SessionId);
        HRESULT ( STDMETHODCALLTYPE *IsUserAllowedToLogon )(
            __RPC__in IWRdsProtocolConnection * This,
                       ULONG SessionId,
                       HANDLE_PTR UserToken,
                               __RPC__in_string WCHAR *pDomainName,
                               __RPC__in_string WCHAR *pUserName);
        HRESULT ( STDMETHODCALLTYPE *SessionArbitrationEnumeration )(
            __RPC__in IWRdsProtocolConnection * This,
                       HANDLE_PTR hUserToken,
                       BOOL bSingleSessionPerUserEnabled,
                                 __RPC__out_ecount_full(*pdwSessionIdentifierCount) ULONG *pSessionIdArray,
                            __RPC__inout ULONG *pdwSessionIdentifierCount);
        HRESULT ( STDMETHODCALLTYPE *LogonNotify )(
            __RPC__in IWRdsProtocolConnection * This,
                       HANDLE_PTR hClientToken,
                               __RPC__in_string WCHAR *wszUserName,
                               __RPC__in_string WCHAR *wszDomainName,
                       __RPC__in WRDS_SESSION_ID *SessionId,
                            __RPC__inout PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings);
        HRESULT ( STDMETHODCALLTYPE *PreDisconnect )(
            __RPC__in IWRdsProtocolConnection * This,
                       ULONG DisconnectReason);
        HRESULT ( STDMETHODCALLTYPE *DisconnectNotify )(
            __RPC__in IWRdsProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IWRdsProtocolConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolStatus )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out WRDS_PROTOCOL_STATUS *pProtocolStatus);
        HRESULT ( STDMETHODCALLTYPE *GetLastInputTime )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__out ULONG64 *pLastInputTime);
        HRESULT ( STDMETHODCALLTYPE *SetErrorInfo )(
            __RPC__in IWRdsProtocolConnection * This,
                       ULONG ulError);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannel )(
            __RPC__in IWRdsProtocolConnection * This,
                               __RPC__in_string CHAR *szEndpointName,
                       BOOL bStatic,
                       ULONG RequestedPriority,
                        __RPC__out ULONG_PTR *phChannel);
        HRESULT ( STDMETHODCALLTYPE *QueryProperty )(
            __RPC__in IWRdsProtocolConnection * This,
                       GUID QueryType,
                       ULONG ulNumEntriesIn,
                       ULONG ulNumEntriesOut,
                                          __RPC__in_ecount_full(ulNumEntriesIn) PWRDS_PROPERTY_VALUE pPropertyEntriesIn,
                                           __RPC__out_ecount_full(ulNumEntriesOut) PWRDS_PROPERTY_VALUE pPropertyEntriesOut);
        HRESULT ( STDMETHODCALLTYPE *GetShadowConnection )(
            __RPC__in IWRdsProtocolConnection * This,
                        __RPC__deref_out_opt IWRdsProtocolShadowConnection **ppShadowConnection);
        HRESULT ( STDMETHODCALLTYPE *NotifyCommandProcessCreated )(
            __RPC__in IWRdsProtocolConnection * This,
                       ULONG SessionId);
        END_INTERFACE
    } IWRdsProtocolConnectionVtbl;
    interface IWRdsProtocolConnection
    {
        CONST_VTBL struct IWRdsProtocolConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLogonErrorRedirector(This,ppLogonErrorRedir) )
    ( (This)->lpVtbl -> AcceptConnection(This) )
    ( (This)->lpVtbl -> GetClientData(This,pClientData) )
    ( (This)->lpVtbl -> GetClientMonitorData(This,pNumMonitors,pPrimaryMonitor) )
    ( (This)->lpVtbl -> GetUserCredentials(This,pUserCreds) )
    ( (This)->lpVtbl -> GetLicenseConnection(This,ppLicenseConnection) )
    ( (This)->lpVtbl -> AuthenticateClientToSession(This,SessionId) )
    ( (This)->lpVtbl -> NotifySessionId(This,SessionId,SessionHandle) )
    ( (This)->lpVtbl -> GetInputHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle) )
    ( (This)->lpVtbl -> GetVideoHandle(This,pVideoHandle) )
    ( (This)->lpVtbl -> ConnectNotify(This,SessionId) )
    ( (This)->lpVtbl -> IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName) )
    ( (This)->lpVtbl -> SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount) )
    ( (This)->lpVtbl -> LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId,pWRdsConnectionSettings) )
    ( (This)->lpVtbl -> PreDisconnect(This,DisconnectReason) )
    ( (This)->lpVtbl -> DisconnectNotify(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetProtocolStatus(This,pProtocolStatus) )
    ( (This)->lpVtbl -> GetLastInputTime(This,pLastInputTime) )
    ( (This)->lpVtbl -> SetErrorInfo(This,ulError) )
    ( (This)->lpVtbl -> CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel) )
    ( (This)->lpVtbl -> QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut) )
    ( (This)->lpVtbl -> GetShadowConnection(This,ppShadowConnection) )
    ( (This)->lpVtbl -> NotifyCommandProcessCreated(This,SessionId) )
EXTERN_C const IID IID_IWRdsProtocolConnectionCallback;
    typedef struct IWRdsProtocolConnectionCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolConnectionCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolConnectionCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolConnectionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnReady )(
            __RPC__in IWRdsProtocolConnectionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *BrokenConnection )(
            __RPC__in IWRdsProtocolConnectionCallback * This,
                       ULONG Reason,
                       ULONG Source);
        HRESULT ( STDMETHODCALLTYPE *StopScreenUpdates )(
            __RPC__in IWRdsProtocolConnectionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *RedrawWindow )(
            __RPC__in IWRdsProtocolConnectionCallback * This,
                                 __RPC__in WRDS_SMALL_RECT *rect);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionId )(
            __RPC__in IWRdsProtocolConnectionCallback * This,
                        __RPC__out ULONG *pConnectionId);
        END_INTERFACE
    } IWRdsProtocolConnectionCallbackVtbl;
    interface IWRdsProtocolConnectionCallback
    {
        CONST_VTBL struct IWRdsProtocolConnectionCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnReady(This) )
    ( (This)->lpVtbl -> BrokenConnection(This,Reason,Source) )
    ( (This)->lpVtbl -> StopScreenUpdates(This) )
    ( (This)->lpVtbl -> RedrawWindow(This,rect) )
    ( (This)->lpVtbl -> GetConnectionId(This,pConnectionId) )
EXTERN_C const IID IID_IWRdsProtocolShadowConnection;
    typedef struct IWRdsProtocolShadowConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolShadowConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolShadowConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolShadowConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IWRdsProtocolShadowConnection * This,
                               __RPC__in_string WCHAR *pTargetServerName,
                       DWORD TargetSessionId,
                       BYTE HotKeyVk,
                       USHORT HotkeyModifiers,
                       __RPC__in_opt IWRdsProtocolShadowCallback *pShadowCallback);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IWRdsProtocolShadowConnection * This);
        HRESULT ( STDMETHODCALLTYPE *DoTarget )(
            __RPC__in IWRdsProtocolShadowConnection * This,
                                __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
                       DWORD Param1Size,
                                __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
                       DWORD Param2Size,
                                __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
                       DWORD Param3Size,
                                __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
                       DWORD Param4Size,
                               __RPC__in_string WCHAR *pClientName);
        END_INTERFACE
    } IWRdsProtocolShadowConnectionVtbl;
    interface IWRdsProtocolShadowConnection
    {
        CONST_VTBL struct IWRdsProtocolShadowConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) )
EXTERN_C const IID IID_IWRdsProtocolShadowCallback;
    typedef struct IWRdsProtocolShadowCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolShadowCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolShadowCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolShadowCallback * This);
        HRESULT ( STDMETHODCALLTYPE *StopShadow )(
            __RPC__in IWRdsProtocolShadowCallback * This);
        HRESULT ( STDMETHODCALLTYPE *InvokeTargetShadow )(
            __RPC__in IWRdsProtocolShadowCallback * This,
                                     __RPC__in_opt_string WCHAR *pTargetServerName,
                       ULONG TargetSessionId,
                                __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
                       DWORD Param1Size,
                                __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
                       DWORD Param2Size,
                                __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
                       DWORD Param3Size,
                                __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
                       DWORD Param4Size,
                               __RPC__in_string WCHAR *pClientName);
        END_INTERFACE
    } IWRdsProtocolShadowCallbackVtbl;
    interface IWRdsProtocolShadowCallback
    {
        CONST_VTBL struct IWRdsProtocolShadowCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StopShadow(This) )
    ( (This)->lpVtbl -> InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) )
EXTERN_C const IID IID_IWRdsProtocolLicenseConnection;
    typedef struct IWRdsProtocolLicenseConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolLicenseConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolLicenseConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolLicenseConnection * This);
        HRESULT ( STDMETHODCALLTYPE *RequestLicensingCapabilities )(
            __RPC__in IWRdsProtocolLicenseConnection * This,
                        __RPC__out PWRDS_LICENSE_CAPABILITIES ppLicenseCapabilities,
                            __RPC__inout ULONG *pcbLicenseCapabilities);
        HRESULT ( STDMETHODCALLTYPE *SendClientLicense )(
            __RPC__in IWRdsProtocolLicenseConnection * This,
                                __RPC__in_ecount_full(cbClientLicense) PBYTE pClientLicense,
                       ULONG cbClientLicense);
        HRESULT ( STDMETHODCALLTYPE *RequestClientLicense )(
            __RPC__in IWRdsProtocolLicenseConnection * This,
                                __RPC__in_ecount_full(Reserve2) PBYTE Reserve1,
                       ULONG Reserve2,
                                 __RPC__out_ecount_full(*pcbClientLicense) PBYTE ppClientLicense,
                            __RPC__inout ULONG *pcbClientLicense);
        HRESULT ( STDMETHODCALLTYPE *ProtocolComplete )(
            __RPC__in IWRdsProtocolLicenseConnection * This,
                       ULONG ulComplete);
        END_INTERFACE
    } IWRdsProtocolLicenseConnectionVtbl;
    interface IWRdsProtocolLicenseConnection
    {
        CONST_VTBL struct IWRdsProtocolLicenseConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities) )
    ( (This)->lpVtbl -> SendClientLicense(This,pClientLicense,cbClientLicense) )
    ( (This)->lpVtbl -> RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense) )
    ( (This)->lpVtbl -> ProtocolComplete(This,ulComplete) )
EXTERN_C const IID IID_IWRdsProtocolLogonErrorRedirector;
    typedef struct IWRdsProtocolLogonErrorRedirectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This);
        HRESULT ( STDMETHODCALLTYPE *OnBeginPainting )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This);
        HRESULT ( STDMETHODCALLTYPE *RedirectStatus )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
                               __RPC__in_string LPCWSTR pszMessage,
                        __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *RedirectMessage )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
                               __RPC__in_string LPCWSTR pszCaption,
                               __RPC__in_string LPCWSTR pszMessage,
                       UINT uType,
                        __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *RedirectLogonError )(
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
                       LONG ntsStatus,
                       LONG ntsSubstatus,
                               __RPC__in_string LPCWSTR pszCaption,
                               __RPC__in_string LPCWSTR pszMessage,
                       UINT uType,
                        __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        END_INTERFACE
    } IWRdsProtocolLogonErrorRedirectorVtbl;
    interface IWRdsProtocolLogonErrorRedirector
    {
        CONST_VTBL struct IWRdsProtocolLogonErrorRedirectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBeginPainting(This) )
    ( (This)->lpVtbl -> RedirectStatus(This,pszMessage,pResponse) )
    ( (This)->lpVtbl -> RedirectMessage(This,pszCaption,pszMessage,uType,pResponse) )
    ( (This)->lpVtbl -> RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse) )
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IWRdsWddmIddProps;
    typedef struct IWRdsWddmIddPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsWddmIddProps * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsWddmIddProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsWddmIddProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetHardwareId )(
            __RPC__in IWRdsWddmIddProps * This,
                                        __RPC__in_ecount_full_string(Count) WCHAR *pDisplayDriverHardwareId,
                       DWORD Count);
        HRESULT ( STDMETHODCALLTYPE *OnDriverLoad )(
            __RPC__in IWRdsWddmIddProps * This,
                       ULONG SessionId,
                       HANDLE_PTR DriverHandle);
        HRESULT ( STDMETHODCALLTYPE *OnDriverUnload )(
            __RPC__in IWRdsWddmIddProps * This,
                       ULONG SessionId);
        HRESULT ( STDMETHODCALLTYPE *EnableWddmIdd )(
            __RPC__in IWRdsWddmIddProps * This,
                       BOOL Enabled);
        END_INTERFACE
    } IWRdsWddmIddPropsVtbl;
    interface IWRdsWddmIddProps
    {
        CONST_VTBL struct IWRdsWddmIddPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHardwareId(This,pDisplayDriverHardwareId,Count) )
    ( (This)->lpVtbl -> OnDriverLoad(This,SessionId,DriverHandle) )
    ( (This)->lpVtbl -> OnDriverUnload(This,SessionId) )
    ( (This)->lpVtbl -> EnableWddmIdd(This,Enabled) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0021_v0_0_s_ifspec;
}
