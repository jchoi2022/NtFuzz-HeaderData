#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioSessionEvents IAudioSessionEvents;
typedef interface IAudioSessionControl IAudioSessionControl;
typedef interface IAudioSessionControl2 IAudioSessionControl2;
typedef interface IAudioSessionManager IAudioSessionManager;
typedef interface IAudioVolumeDuckNotification IAudioVolumeDuckNotification;
typedef interface IAudioSessionNotification IAudioSessionNotification;
typedef interface IAudioSessionEnumerator IAudioSessionEnumerator;
typedef interface IAudioSessionManager2 IAudioSessionManager2;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "AudioSessionTypes.h"
#include "AudioClient.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum AudioSessionDisconnectReason
    {
        DisconnectReasonDeviceRemoval = 0,
        DisconnectReasonServerShutdown = ( DisconnectReasonDeviceRemoval + 1 ) ,
        DisconnectReasonFormatChanged = ( DisconnectReasonServerShutdown + 1 ) ,
        DisconnectReasonSessionLogoff = ( DisconnectReasonFormatChanged + 1 ) ,
        DisconnectReasonSessionDisconnected = ( DisconnectReasonSessionLogoff + 1 ) ,
        DisconnectReasonExclusiveModeOverride = ( DisconnectReasonSessionDisconnected + 1 )
    } AudioSessionDisconnectReason;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioSessionEvents;
    typedef struct IAudioSessionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnDisplayNameChanged )(
            IAudioSessionEvents * This,
            _In_ LPCWSTR NewDisplayName,
                       LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *OnIconPathChanged )(
            IAudioSessionEvents * This,
            _In_ LPCWSTR NewIconPath,
                       LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *OnSimpleVolumeChanged )(
            IAudioSessionEvents * This,
            _In_ float NewVolume,
            _In_ BOOL NewMute,
                       LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *OnChannelVolumeChanged )(
            IAudioSessionEvents * This,
            _In_ DWORD ChannelCount,
            _In_reads_(ChannelCount) float NewChannelVolumeArray[ ],
            _In_ DWORD ChangedChannel,
                       LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *OnGroupingParamChanged )(
            IAudioSessionEvents * This,
            _In_ LPCGUID NewGroupingParam,
                       LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *OnStateChanged )(
            IAudioSessionEvents * This,
            _In_ AudioSessionState NewState);
        HRESULT ( STDMETHODCALLTYPE *OnSessionDisconnected )(
            IAudioSessionEvents * This,
            _In_ AudioSessionDisconnectReason DisconnectReason);
        END_INTERFACE
    } IAudioSessionEventsVtbl;
    interface IAudioSessionEvents
    {
        CONST_VTBL struct IAudioSessionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDisplayNameChanged(This,NewDisplayName,EventContext) )
    ( (This)->lpVtbl -> OnIconPathChanged(This,NewIconPath,EventContext) )
    ( (This)->lpVtbl -> OnSimpleVolumeChanged(This,NewVolume,NewMute,EventContext) )
    ( (This)->lpVtbl -> OnChannelVolumeChanged(This,ChannelCount,NewChannelVolumeArray,ChangedChannel,EventContext) )
    ( (This)->lpVtbl -> OnGroupingParamChanged(This,NewGroupingParam,EventContext) )
    ( (This)->lpVtbl -> OnStateChanged(This,NewState) )
    ( (This)->lpVtbl -> OnSessionDisconnected(This,DisconnectReason) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioSessionControl;
    typedef struct IAudioSessionControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IAudioSessionControl * This,
            _Out_ AudioSessionState *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            IAudioSessionControl * This,
            _Out_ LPWSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            IAudioSessionControl * This,
            _In_ LPCWSTR Value,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetIconPath )(
            IAudioSessionControl * This,
            _Out_ LPWSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetIconPath )(
            IAudioSessionControl * This,
            _In_ LPCWSTR Value,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingParam )(
            IAudioSessionControl * This,
            _Out_ GUID *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetGroupingParam )(
            IAudioSessionControl * This,
            _In_ LPCGUID Override,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *RegisterAudioSessionNotification )(
            IAudioSessionControl * This,
            _In_ IAudioSessionEvents *NewNotifications);
        HRESULT ( STDMETHODCALLTYPE *UnregisterAudioSessionNotification )(
            IAudioSessionControl * This,
            _In_ IAudioSessionEvents *NewNotifications);
        END_INTERFACE
    } IAudioSessionControlVtbl;
    interface IAudioSessionControl
    {
        CONST_VTBL struct IAudioSessionControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetState(This,pRetVal) )
    ( (This)->lpVtbl -> GetDisplayName(This,pRetVal) )
    ( (This)->lpVtbl -> SetDisplayName(This,Value,EventContext) )
    ( (This)->lpVtbl -> GetIconPath(This,pRetVal) )
    ( (This)->lpVtbl -> SetIconPath(This,Value,EventContext) )
    ( (This)->lpVtbl -> GetGroupingParam(This,pRetVal) )
    ( (This)->lpVtbl -> SetGroupingParam(This,Override,EventContext) )
    ( (This)->lpVtbl -> RegisterAudioSessionNotification(This,NewNotifications) )
    ( (This)->lpVtbl -> UnregisterAudioSessionNotification(This,NewNotifications) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioSessionControl2;
    typedef struct IAudioSessionControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionControl2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IAudioSessionControl2 * This,
            _Out_ AudioSessionState *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            IAudioSessionControl2 * This,
            _Out_ LPWSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            IAudioSessionControl2 * This,
            _In_ LPCWSTR Value,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetIconPath )(
            IAudioSessionControl2 * This,
            _Out_ LPWSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetIconPath )(
            IAudioSessionControl2 * This,
            _In_ LPCWSTR Value,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingParam )(
            IAudioSessionControl2 * This,
            _Out_ GUID *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetGroupingParam )(
            IAudioSessionControl2 * This,
            _In_ LPCGUID Override,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *RegisterAudioSessionNotification )(
            IAudioSessionControl2 * This,
            _In_ IAudioSessionEvents *NewNotifications);
        HRESULT ( STDMETHODCALLTYPE *UnregisterAudioSessionNotification )(
            IAudioSessionControl2 * This,
            _In_ IAudioSessionEvents *NewNotifications);
        HRESULT ( STDMETHODCALLTYPE *GetSessionIdentifier )(
            IAudioSessionControl2 * This,
            _Out_ LPWSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetSessionInstanceIdentifier )(
            IAudioSessionControl2 * This,
            _Out_ LPWSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetProcessId )(
            IAudioSessionControl2 * This,
            _Out_ DWORD *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *IsSystemSoundsSession )(
            IAudioSessionControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDuckingPreference )(
            IAudioSessionControl2 * This,
                       BOOL optOut);
        END_INTERFACE
    } IAudioSessionControl2Vtbl;
    interface IAudioSessionControl2
    {
        CONST_VTBL struct IAudioSessionControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetState(This,pRetVal) )
    ( (This)->lpVtbl -> GetDisplayName(This,pRetVal) )
    ( (This)->lpVtbl -> SetDisplayName(This,Value,EventContext) )
    ( (This)->lpVtbl -> GetIconPath(This,pRetVal) )
    ( (This)->lpVtbl -> SetIconPath(This,Value,EventContext) )
    ( (This)->lpVtbl -> GetGroupingParam(This,pRetVal) )
    ( (This)->lpVtbl -> SetGroupingParam(This,Override,EventContext) )
    ( (This)->lpVtbl -> RegisterAudioSessionNotification(This,NewNotifications) )
    ( (This)->lpVtbl -> UnregisterAudioSessionNotification(This,NewNotifications) )
    ( (This)->lpVtbl -> GetSessionIdentifier(This,pRetVal) )
    ( (This)->lpVtbl -> GetSessionInstanceIdentifier(This,pRetVal) )
    ( (This)->lpVtbl -> GetProcessId(This,pRetVal) )
    ( (This)->lpVtbl -> IsSystemSoundsSession(This) )
    ( (This)->lpVtbl -> SetDuckingPreference(This,optOut) )
EXTERN_C const IID IID_IAudioSessionManager;
    typedef struct IAudioSessionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetAudioSessionControl )(
            IAudioSessionManager * This,
            _In_opt_ LPCGUID AudioSessionGuid,
            _In_ DWORD StreamFlags,
            _Outptr_ IAudioSessionControl **SessionControl);
        HRESULT ( STDMETHODCALLTYPE *GetSimpleAudioVolume )(
            IAudioSessionManager * This,
            _In_opt_ LPCGUID AudioSessionGuid,
            _In_ DWORD StreamFlags,
            _Outptr_ ISimpleAudioVolume **AudioVolume);
        END_INTERFACE
    } IAudioSessionManagerVtbl;
    interface IAudioSessionManager
    {
        CONST_VTBL struct IAudioSessionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAudioSessionControl(This,AudioSessionGuid,StreamFlags,SessionControl) )
    ( (This)->lpVtbl -> GetSimpleAudioVolume(This,AudioSessionGuid,StreamFlags,AudioVolume) )
EXTERN_C const IID IID_IAudioVolumeDuckNotification;
    typedef struct IAudioVolumeDuckNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioVolumeDuckNotification * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioVolumeDuckNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioVolumeDuckNotification * This);
        HRESULT ( STDMETHODCALLTYPE *OnVolumeDuckNotification )(
            IAudioVolumeDuckNotification * This,
                       LPCWSTR sessionID,
                       UINT32 countCommunicationSessions);
        HRESULT ( STDMETHODCALLTYPE *OnVolumeUnduckNotification )(
            IAudioVolumeDuckNotification * This,
                       LPCWSTR sessionID);
        END_INTERFACE
    } IAudioVolumeDuckNotificationVtbl;
    interface IAudioVolumeDuckNotification
    {
        CONST_VTBL struct IAudioVolumeDuckNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnVolumeDuckNotification(This,sessionID,countCommunicationSessions) )
    ( (This)->lpVtbl -> OnVolumeUnduckNotification(This,sessionID) )
EXTERN_C const IID IID_IAudioSessionNotification;
    typedef struct IAudioSessionNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionNotification * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionNotification * This);
        HRESULT ( STDMETHODCALLTYPE *OnSessionCreated )(
            IAudioSessionNotification * This,
                       IAudioSessionControl *NewSession);
        END_INTERFACE
    } IAudioSessionNotificationVtbl;
    interface IAudioSessionNotification
    {
        CONST_VTBL struct IAudioSessionNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSessionCreated(This,NewSession) )
EXTERN_C const IID IID_IAudioSessionEnumerator;
    typedef struct IAudioSessionEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IAudioSessionEnumerator * This,
                        int *SessionCount);
        HRESULT ( STDMETHODCALLTYPE *GetSession )(
            IAudioSessionEnumerator * This,
                       int SessionCount,
                        IAudioSessionControl **Session);
        END_INTERFACE
    } IAudioSessionEnumeratorVtbl;
    interface IAudioSessionEnumerator
    {
        CONST_VTBL struct IAudioSessionEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,SessionCount) )
    ( (This)->lpVtbl -> GetSession(This,SessionCount,Session) )
EXTERN_C const IID IID_IAudioSessionManager2;
    typedef struct IAudioSessionManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSessionManager2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSessionManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSessionManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAudioSessionControl )(
            IAudioSessionManager2 * This,
            _In_opt_ LPCGUID AudioSessionGuid,
            _In_ DWORD StreamFlags,
            _Outptr_ IAudioSessionControl **SessionControl);
        HRESULT ( STDMETHODCALLTYPE *GetSimpleAudioVolume )(
            IAudioSessionManager2 * This,
            _In_opt_ LPCGUID AudioSessionGuid,
            _In_ DWORD StreamFlags,
            _Outptr_ ISimpleAudioVolume **AudioVolume);
        HRESULT ( STDMETHODCALLTYPE *GetSessionEnumerator )(
            IAudioSessionManager2 * This,
                                IAudioSessionEnumerator **SessionEnum);
        HRESULT ( STDMETHODCALLTYPE *RegisterSessionNotification )(
            IAudioSessionManager2 * This,
            IAudioSessionNotification *SessionNotification);
        HRESULT ( STDMETHODCALLTYPE *UnregisterSessionNotification )(
            IAudioSessionManager2 * This,
            IAudioSessionNotification *SessionNotification);
        HRESULT ( STDMETHODCALLTYPE *RegisterDuckNotification )(
            IAudioSessionManager2 * This,
                               LPCWSTR sessionID,
            _In_ IAudioVolumeDuckNotification *duckNotification);
        HRESULT ( STDMETHODCALLTYPE *UnregisterDuckNotification )(
            IAudioSessionManager2 * This,
            _In_ IAudioVolumeDuckNotification *duckNotification);
        END_INTERFACE
    } IAudioSessionManager2Vtbl;
    interface IAudioSessionManager2
    {
        CONST_VTBL struct IAudioSessionManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAudioSessionControl(This,AudioSessionGuid,StreamFlags,SessionControl) )
    ( (This)->lpVtbl -> GetSimpleAudioVolume(This,AudioSessionGuid,StreamFlags,AudioVolume) )
    ( (This)->lpVtbl -> GetSessionEnumerator(This,SessionEnum) )
    ( (This)->lpVtbl -> RegisterSessionNotification(This,SessionNotification) )
    ( (This)->lpVtbl -> UnregisterSessionNotification(This,SessionNotification) )
    ( (This)->lpVtbl -> RegisterDuckNotification(This,sessionID,duckNotification) )
    ( (This)->lpVtbl -> UnregisterDuckNotification(This,duckNotification) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0008_v0_0_s_ifspec;
}
