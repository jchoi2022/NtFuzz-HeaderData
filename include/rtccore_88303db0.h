#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRTCClient IRTCClient;
typedef interface IRTCClient2 IRTCClient2;
typedef interface IRTCClientPresence IRTCClientPresence;
typedef interface IRTCClientPresence2 IRTCClientPresence2;
typedef interface IRTCClientProvisioning IRTCClientProvisioning;
typedef interface IRTCClientProvisioning2 IRTCClientProvisioning2;
typedef interface IRTCProfile IRTCProfile;
typedef interface IRTCProfile2 IRTCProfile2;
typedef interface IRTCSession IRTCSession;
typedef interface IRTCSession2 IRTCSession2;
typedef interface IRTCSessionCallControl IRTCSessionCallControl;
typedef interface IRTCParticipant IRTCParticipant;
typedef interface IRTCRoamingEvent IRTCRoamingEvent;
typedef interface IRTCProfileEvent IRTCProfileEvent;
typedef interface IRTCProfileEvent2 IRTCProfileEvent2;
typedef interface IRTCClientEvent IRTCClientEvent;
typedef interface IRTCRegistrationStateChangeEvent IRTCRegistrationStateChangeEvent;
typedef interface IRTCSessionStateChangeEvent IRTCSessionStateChangeEvent;
typedef interface IRTCSessionStateChangeEvent2 IRTCSessionStateChangeEvent2;
typedef interface IRTCSessionOperationCompleteEvent IRTCSessionOperationCompleteEvent;
typedef interface IRTCSessionOperationCompleteEvent2 IRTCSessionOperationCompleteEvent2;
typedef interface IRTCParticipantStateChangeEvent IRTCParticipantStateChangeEvent;
typedef interface IRTCMediaEvent IRTCMediaEvent;
typedef interface IRTCIntensityEvent IRTCIntensityEvent;
typedef interface IRTCMessagingEvent IRTCMessagingEvent;
typedef interface IRTCBuddyEvent IRTCBuddyEvent;
typedef interface IRTCBuddyEvent2 IRTCBuddyEvent2;
typedef interface IRTCWatcherEvent IRTCWatcherEvent;
typedef interface IRTCWatcherEvent2 IRTCWatcherEvent2;
typedef interface IRTCBuddyGroupEvent IRTCBuddyGroupEvent;
typedef interface IRTCInfoEvent IRTCInfoEvent;
typedef interface IRTCMediaRequestEvent IRTCMediaRequestEvent;
typedef interface IRTCReInviteEvent IRTCReInviteEvent;
typedef interface IRTCPresencePropertyEvent IRTCPresencePropertyEvent;
typedef interface IRTCPresenceDataEvent IRTCPresenceDataEvent;
typedef interface IRTCPresenceStatusEvent IRTCPresenceStatusEvent;
typedef interface IRTCCollection IRTCCollection;
typedef interface IRTCEnumParticipants IRTCEnumParticipants;
typedef interface IRTCEnumProfiles IRTCEnumProfiles;
typedef interface IRTCEnumBuddies IRTCEnumBuddies;
typedef interface IRTCEnumWatchers IRTCEnumWatchers;
typedef interface IRTCEnumGroups IRTCEnumGroups;
typedef interface IRTCPresenceContact IRTCPresenceContact;
typedef interface IRTCBuddy IRTCBuddy;
typedef interface IRTCBuddy2 IRTCBuddy2;
typedef interface IRTCWatcher IRTCWatcher;
typedef interface IRTCWatcher2 IRTCWatcher2;
typedef interface IRTCBuddyGroup IRTCBuddyGroup;
typedef interface IRTCEventNotification IRTCEventNotification;
typedef interface IRTCDispatchEventNotification IRTCDispatchEventNotification;
typedef interface IRTCPortManager IRTCPortManager;
typedef interface IRTCSessionPortManagement IRTCSessionPortManagement;
typedef interface IRTCClientPortManagement IRTCClientPortManagement;
typedef interface IRTCUserSearch IRTCUserSearch;
typedef interface IRTCUserSearchQuery IRTCUserSearchQuery;
typedef interface IRTCUserSearchResult IRTCUserSearchResult;
typedef interface IRTCEnumUserSearchResults IRTCEnumUserSearchResults;
typedef interface IRTCUserSearchResultsEvent IRTCUserSearchResultsEvent;
typedef interface IRTCSessionReferStatusEvent IRTCSessionReferStatusEvent;
typedef interface IRTCSessionReferredEvent IRTCSessionReferredEvent;
typedef interface IRTCSessionDescriptionManager IRTCSessionDescriptionManager;
typedef interface IRTCEnumPresenceDevices IRTCEnumPresenceDevices;
typedef interface IRTCPresenceDevice IRTCPresenceDevice;
typedef class RTCClient RTCClient;
#include "oaidl.h"
#include "ocidl.h"
#include "control.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum RTC_AUDIO_DEVICE
    {
        RTCAD_SPEAKER = 0,
        RTCAD_MICROPHONE = ( RTCAD_SPEAKER + 1 )
    } RTC_AUDIO_DEVICE;
typedef
enum RTC_VIDEO_DEVICE
    {
        RTCVD_RECEIVE = 0,
        RTCVD_PREVIEW = ( RTCVD_RECEIVE + 1 )
    } RTC_VIDEO_DEVICE;
typedef
enum RTC_EVENT
    {
        RTCE_CLIENT = 0,
        RTCE_REGISTRATION_STATE_CHANGE = ( RTCE_CLIENT + 1 ) ,
        RTCE_SESSION_STATE_CHANGE = ( RTCE_REGISTRATION_STATE_CHANGE + 1 ) ,
        RTCE_SESSION_OPERATION_COMPLETE = ( RTCE_SESSION_STATE_CHANGE + 1 ) ,
        RTCE_PARTICIPANT_STATE_CHANGE = ( RTCE_SESSION_OPERATION_COMPLETE + 1 ) ,
        RTCE_MEDIA = ( RTCE_PARTICIPANT_STATE_CHANGE + 1 ) ,
        RTCE_INTENSITY = ( RTCE_MEDIA + 1 ) ,
        RTCE_MESSAGING = ( RTCE_INTENSITY + 1 ) ,
        RTCE_BUDDY = ( RTCE_MESSAGING + 1 ) ,
        RTCE_WATCHER = ( RTCE_BUDDY + 1 ) ,
        RTCE_PROFILE = ( RTCE_WATCHER + 1 ) ,
        RTCE_USERSEARCH = ( RTCE_PROFILE + 1 ) ,
        RTCE_INFO = ( RTCE_USERSEARCH + 1 ) ,
        RTCE_GROUP = ( RTCE_INFO + 1 ) ,
        RTCE_MEDIA_REQUEST = ( RTCE_GROUP + 1 ) ,
        RTCE_ROAMING = ( RTCE_MEDIA_REQUEST + 1 ) ,
        RTCE_PRESENCE_PROPERTY = ( RTCE_ROAMING + 1 ) ,
        RTCE_PRESENCE_DATA = ( RTCE_PRESENCE_PROPERTY + 1 ) ,
        RTCE_PRESENCE_STATUS = ( RTCE_PRESENCE_DATA + 1 ) ,
        RTCE_SESSION_REFER_STATUS = ( RTCE_PRESENCE_STATUS + 1 ) ,
        RTCE_SESSION_REFERRED = ( RTCE_SESSION_REFER_STATUS + 1 ) ,
        RTCE_REINVITE = ( RTCE_SESSION_REFERRED + 1 )
    } RTC_EVENT;
typedef
enum RTC_LISTEN_MODE
    {
        RTCLM_NONE = 0,
        RTCLM_DYNAMIC = ( RTCLM_NONE + 1 ) ,
        RTCLM_BOTH = ( RTCLM_DYNAMIC + 1 )
    } RTC_LISTEN_MODE;
typedef
enum RTC_CLIENT_EVENT_TYPE
    {
        RTCCET_VOLUME_CHANGE = 0,
        RTCCET_DEVICE_CHANGE = ( RTCCET_VOLUME_CHANGE + 1 ) ,
        RTCCET_NETWORK_QUALITY_CHANGE = ( RTCCET_DEVICE_CHANGE + 1 ) ,
        RTCCET_ASYNC_CLEANUP_DONE = ( RTCCET_NETWORK_QUALITY_CHANGE + 1 )
    } RTC_CLIENT_EVENT_TYPE;
typedef
enum RTC_BUDDY_EVENT_TYPE
    {
        RTCBET_BUDDY_ADD = 0,
        RTCBET_BUDDY_REMOVE = ( RTCBET_BUDDY_ADD + 1 ) ,
        RTCBET_BUDDY_UPDATE = ( RTCBET_BUDDY_REMOVE + 1 ) ,
        RTCBET_BUDDY_STATE_CHANGE = ( RTCBET_BUDDY_UPDATE + 1 ) ,
        RTCBET_BUDDY_ROAMED = ( RTCBET_BUDDY_STATE_CHANGE + 1 ) ,
        RTCBET_BUDDY_SUBSCRIBED = ( RTCBET_BUDDY_ROAMED + 1 )
    } RTC_BUDDY_EVENT_TYPE;
typedef
enum RTC_WATCHER_EVENT_TYPE
    {
        RTCWET_WATCHER_ADD = 0,
        RTCWET_WATCHER_REMOVE = ( RTCWET_WATCHER_ADD + 1 ) ,
        RTCWET_WATCHER_UPDATE = ( RTCWET_WATCHER_REMOVE + 1 ) ,
        RTCWET_WATCHER_OFFERING = ( RTCWET_WATCHER_UPDATE + 1 ) ,
        RTCWET_WATCHER_ROAMED = ( RTCWET_WATCHER_OFFERING + 1 )
    } RTC_WATCHER_EVENT_TYPE;
typedef
enum RTC_GROUP_EVENT_TYPE
    {
        RTCGET_GROUP_ADD = 0,
        RTCGET_GROUP_REMOVE = ( RTCGET_GROUP_ADD + 1 ) ,
        RTCGET_GROUP_UPDATE = ( RTCGET_GROUP_REMOVE + 1 ) ,
        RTCGET_GROUP_BUDDY_ADD = ( RTCGET_GROUP_UPDATE + 1 ) ,
        RTCGET_GROUP_BUDDY_REMOVE = ( RTCGET_GROUP_BUDDY_ADD + 1 ) ,
        RTCGET_GROUP_ROAMED = ( RTCGET_GROUP_BUDDY_REMOVE + 1 )
    } RTC_GROUP_EVENT_TYPE;
typedef
enum RTC_TERMINATE_REASON
    {
        RTCTR_NORMAL = 0,
        RTCTR_DND = ( RTCTR_NORMAL + 1 ) ,
        RTCTR_BUSY = ( RTCTR_DND + 1 ) ,
        RTCTR_REJECT = ( RTCTR_BUSY + 1 ) ,
        RTCTR_TIMEOUT = ( RTCTR_REJECT + 1 ) ,
        RTCTR_SHUTDOWN = ( RTCTR_TIMEOUT + 1 ) ,
        RTCTR_INSUFFICIENT_SECURITY_LEVEL = ( RTCTR_SHUTDOWN + 1 ) ,
        RTCTR_NOT_SUPPORTED = ( RTCTR_INSUFFICIENT_SECURITY_LEVEL + 1 )
    } RTC_TERMINATE_REASON;
typedef
enum RTC_REGISTRATION_STATE
    {
        RTCRS_NOT_REGISTERED = 0,
        RTCRS_REGISTERING = ( RTCRS_NOT_REGISTERED + 1 ) ,
        RTCRS_REGISTERED = ( RTCRS_REGISTERING + 1 ) ,
        RTCRS_REJECTED = ( RTCRS_REGISTERED + 1 ) ,
        RTCRS_UNREGISTERING = ( RTCRS_REJECTED + 1 ) ,
        RTCRS_ERROR = ( RTCRS_UNREGISTERING + 1 ) ,
        RTCRS_LOGGED_OFF = ( RTCRS_ERROR + 1 ) ,
        RTCRS_LOCAL_PA_LOGGED_OFF = ( RTCRS_LOGGED_OFF + 1 ) ,
        RTCRS_REMOTE_PA_LOGGED_OFF = ( RTCRS_LOCAL_PA_LOGGED_OFF + 1 )
    } RTC_REGISTRATION_STATE;
typedef
enum RTC_SESSION_STATE
    {
        RTCSS_IDLE = 0,
        RTCSS_INCOMING = ( RTCSS_IDLE + 1 ) ,
        RTCSS_ANSWERING = ( RTCSS_INCOMING + 1 ) ,
        RTCSS_INPROGRESS = ( RTCSS_ANSWERING + 1 ) ,
        RTCSS_CONNECTED = ( RTCSS_INPROGRESS + 1 ) ,
        RTCSS_DISCONNECTED = ( RTCSS_CONNECTED + 1 ) ,
        RTCSS_HOLD = ( RTCSS_DISCONNECTED + 1 ) ,
        RTCSS_REFER = ( RTCSS_HOLD + 1 )
    } RTC_SESSION_STATE;
typedef
enum RTC_PARTICIPANT_STATE
    {
        RTCPS_IDLE = 0,
        RTCPS_PENDING = ( RTCPS_IDLE + 1 ) ,
        RTCPS_INCOMING = ( RTCPS_PENDING + 1 ) ,
        RTCPS_ANSWERING = ( RTCPS_INCOMING + 1 ) ,
        RTCPS_INPROGRESS = ( RTCPS_ANSWERING + 1 ) ,
        RTCPS_ALERTING = ( RTCPS_INPROGRESS + 1 ) ,
        RTCPS_CONNECTED = ( RTCPS_ALERTING + 1 ) ,
        RTCPS_DISCONNECTING = ( RTCPS_CONNECTED + 1 ) ,
        RTCPS_DISCONNECTED = ( RTCPS_DISCONNECTING + 1 )
    } RTC_PARTICIPANT_STATE;
typedef
enum RTC_WATCHER_STATE
    {
        RTCWS_UNKNOWN = 0,
        RTCWS_OFFERING = ( RTCWS_UNKNOWN + 1 ) ,
        RTCWS_ALLOWED = ( RTCWS_OFFERING + 1 ) ,
        RTCWS_BLOCKED = ( RTCWS_ALLOWED + 1 ) ,
        RTCWS_DENIED = ( RTCWS_BLOCKED + 1 ) ,
        RTCWS_PROMPT = ( RTCWS_DENIED + 1 )
    } RTC_WATCHER_STATE;
typedef
enum RTC_ACE_SCOPE
    {
        RTCAS_SCOPE_USER = 0,
        RTCAS_SCOPE_DOMAIN = ( RTCAS_SCOPE_USER + 1 ) ,
        RTCAS_SCOPE_ALL = ( RTCAS_SCOPE_DOMAIN + 1 )
    } RTC_ACE_SCOPE;
typedef
enum RTC_OFFER_WATCHER_MODE
    {
        RTCOWM_OFFER_WATCHER_EVENT = 0,
        RTCOWM_AUTOMATICALLY_ADD_WATCHER = ( RTCOWM_OFFER_WATCHER_EVENT + 1 )
    } RTC_OFFER_WATCHER_MODE;
typedef
enum RTC_WATCHER_MATCH_MODE
    {
        RTCWMM_EXACT_MATCH = 0,
        RTCWMM_BEST_ACE_MATCH = ( RTCWMM_EXACT_MATCH + 1 )
    } RTC_WATCHER_MATCH_MODE;
typedef
enum RTC_PRIVACY_MODE
    {
        RTCPM_BLOCK_LIST_EXCLUDED = 0,
        RTCPM_ALLOW_LIST_ONLY = ( RTCPM_BLOCK_LIST_EXCLUDED + 1 )
    } RTC_PRIVACY_MODE;
typedef
enum RTC_SESSION_TYPE
    {
        RTCST_PC_TO_PC = 0,
        RTCST_PC_TO_PHONE = ( RTCST_PC_TO_PC + 1 ) ,
        RTCST_PHONE_TO_PHONE = ( RTCST_PC_TO_PHONE + 1 ) ,
        RTCST_IM = ( RTCST_PHONE_TO_PHONE + 1 ) ,
        RTCST_MULTIPARTY_IM = ( RTCST_IM + 1 ) ,
        RTCST_APPLICATION = ( RTCST_MULTIPARTY_IM + 1 )
    } RTC_SESSION_TYPE;
typedef
enum RTC_PRESENCE_STATUS
    {
        RTCXS_PRESENCE_OFFLINE = 0,
        RTCXS_PRESENCE_ONLINE = ( RTCXS_PRESENCE_OFFLINE + 1 ) ,
        RTCXS_PRESENCE_AWAY = ( RTCXS_PRESENCE_ONLINE + 1 ) ,
        RTCXS_PRESENCE_IDLE = ( RTCXS_PRESENCE_AWAY + 1 ) ,
        RTCXS_PRESENCE_BUSY = ( RTCXS_PRESENCE_IDLE + 1 ) ,
        RTCXS_PRESENCE_BE_RIGHT_BACK = ( RTCXS_PRESENCE_BUSY + 1 ) ,
        RTCXS_PRESENCE_ON_THE_PHONE = ( RTCXS_PRESENCE_BE_RIGHT_BACK + 1 ) ,
        RTCXS_PRESENCE_OUT_TO_LUNCH = ( RTCXS_PRESENCE_ON_THE_PHONE + 1 )
    } RTC_PRESENCE_STATUS;
typedef
enum RTC_BUDDY_SUBSCRIPTION_TYPE
    {
        RTCBT_SUBSCRIBED = 0,
        RTCBT_ALWAYS_OFFLINE = ( RTCBT_SUBSCRIBED + 1 ) ,
        RTCBT_ALWAYS_ONLINE = ( RTCBT_ALWAYS_OFFLINE + 1 ) ,
        RTCBT_POLL = ( RTCBT_ALWAYS_ONLINE + 1 )
    } RTC_BUDDY_SUBSCRIPTION_TYPE;
typedef
enum RTC_MEDIA_EVENT_TYPE
    {
        RTCMET_STOPPED = 0,
        RTCMET_STARTED = ( RTCMET_STOPPED + 1 ) ,
        RTCMET_FAILED = ( RTCMET_STARTED + 1 )
    } RTC_MEDIA_EVENT_TYPE;
typedef
enum RTC_MEDIA_EVENT_REASON
    {
        RTCMER_NORMAL = 0,
        RTCMER_HOLD = ( RTCMER_NORMAL + 1 ) ,
        RTCMER_TIMEOUT = ( RTCMER_HOLD + 1 ) ,
        RTCMER_BAD_DEVICE = ( RTCMER_TIMEOUT + 1 ) ,
        RTCMER_NO_PORT = ( RTCMER_BAD_DEVICE + 1 ) ,
        RTCMER_PORT_MAPPING_FAILED = ( RTCMER_NO_PORT + 1 ) ,
        RTCMER_REMOTE_REQUEST = ( RTCMER_PORT_MAPPING_FAILED + 1 )
    } RTC_MEDIA_EVENT_REASON;
typedef
enum RTC_MESSAGING_EVENT_TYPE
    {
        RTCMSET_MESSAGE = 0,
        RTCMSET_STATUS = ( RTCMSET_MESSAGE + 1 )
    } RTC_MESSAGING_EVENT_TYPE;
typedef
enum RTC_MESSAGING_USER_STATUS
    {
        RTCMUS_IDLE = 0,
        RTCMUS_TYPING = ( RTCMUS_IDLE + 1 )
    } RTC_MESSAGING_USER_STATUS;
typedef
enum RTC_DTMF
    {
        RTC_DTMF_0 = 0,
        RTC_DTMF_1 = ( RTC_DTMF_0 + 1 ) ,
        RTC_DTMF_2 = ( RTC_DTMF_1 + 1 ) ,
        RTC_DTMF_3 = ( RTC_DTMF_2 + 1 ) ,
        RTC_DTMF_4 = ( RTC_DTMF_3 + 1 ) ,
        RTC_DTMF_5 = ( RTC_DTMF_4 + 1 ) ,
        RTC_DTMF_6 = ( RTC_DTMF_5 + 1 ) ,
        RTC_DTMF_7 = ( RTC_DTMF_6 + 1 ) ,
        RTC_DTMF_8 = ( RTC_DTMF_7 + 1 ) ,
        RTC_DTMF_9 = ( RTC_DTMF_8 + 1 ) ,
        RTC_DTMF_STAR = ( RTC_DTMF_9 + 1 ) ,
        RTC_DTMF_POUND = ( RTC_DTMF_STAR + 1 ) ,
        RTC_DTMF_A = ( RTC_DTMF_POUND + 1 ) ,
        RTC_DTMF_B = ( RTC_DTMF_A + 1 ) ,
        RTC_DTMF_C = ( RTC_DTMF_B + 1 ) ,
        RTC_DTMF_D = ( RTC_DTMF_C + 1 ) ,
        RTC_DTMF_FLASH = ( RTC_DTMF_D + 1 )
    } RTC_DTMF;
typedef
enum RTC_PROVIDER_URI
    {
        RTCPU_URIHOMEPAGE = 0,
        RTCPU_URIHELPDESK = ( RTCPU_URIHOMEPAGE + 1 ) ,
        RTCPU_URIPERSONALACCOUNT = ( RTCPU_URIHELPDESK + 1 ) ,
        RTCPU_URIDISPLAYDURINGCALL = ( RTCPU_URIPERSONALACCOUNT + 1 ) ,
        RTCPU_URIDISPLAYDURINGIDLE = ( RTCPU_URIDISPLAYDURINGCALL + 1 )
    } RTC_PROVIDER_URI;
typedef
enum RTC_RING_TYPE
    {
        RTCRT_PHONE = 0,
        RTCRT_MESSAGE = ( RTCRT_PHONE + 1 ) ,
        RTCRT_RINGBACK = ( RTCRT_MESSAGE + 1 )
    } RTC_RING_TYPE;
typedef
enum RTC_T120_APPLET
    {
        RTCTA_WHITEBOARD = 0,
        RTCTA_APPSHARING = ( RTCTA_WHITEBOARD + 1 )
    } RTC_T120_APPLET;
typedef
enum RTC_PORT_TYPE
    {
        RTCPT_AUDIO_RTP = 0,
        RTCPT_AUDIO_RTCP = ( RTCPT_AUDIO_RTP + 1 ) ,
        RTCPT_VIDEO_RTP = ( RTCPT_AUDIO_RTCP + 1 ) ,
        RTCPT_VIDEO_RTCP = ( RTCPT_VIDEO_RTP + 1 ) ,
        RTCPT_SIP = ( RTCPT_VIDEO_RTCP + 1 )
    } RTC_PORT_TYPE;
typedef
enum RTC_USER_SEARCH_COLUMN
    {
        RTCUSC_URI = 0,
        RTCUSC_DISPLAYNAME = ( RTCUSC_URI + 1 ) ,
        RTCUSC_TITLE = ( RTCUSC_DISPLAYNAME + 1 ) ,
        RTCUSC_OFFICE = ( RTCUSC_TITLE + 1 ) ,
        RTCUSC_PHONE = ( RTCUSC_OFFICE + 1 ) ,
        RTCUSC_COMPANY = ( RTCUSC_PHONE + 1 ) ,
        RTCUSC_CITY = ( RTCUSC_COMPANY + 1 ) ,
        RTCUSC_STATE = ( RTCUSC_CITY + 1 ) ,
        RTCUSC_COUNTRY = ( RTCUSC_STATE + 1 ) ,
        RTCUSC_EMAIL = ( RTCUSC_COUNTRY + 1 )
    } RTC_USER_SEARCH_COLUMN;
typedef
enum RTC_USER_SEARCH_PREFERENCE
    {
        RTCUSP_MAX_MATCHES = 0,
        RTCUSP_TIME_LIMIT = ( RTCUSP_MAX_MATCHES + 1 )
    } RTC_USER_SEARCH_PREFERENCE;
typedef
enum RTC_ROAMING_EVENT_TYPE
    {
        RTCRET_BUDDY_ROAMING = 0,
        RTCRET_WATCHER_ROAMING = ( RTCRET_BUDDY_ROAMING + 1 ) ,
        RTCRET_PRESENCE_ROAMING = ( RTCRET_WATCHER_ROAMING + 1 ) ,
        RTCRET_PROFILE_ROAMING = ( RTCRET_PRESENCE_ROAMING + 1 ) ,
        RTCRET_WPENDING_ROAMING = ( RTCRET_PROFILE_ROAMING + 1 )
    } RTC_ROAMING_EVENT_TYPE;
typedef
enum RTC_PROFILE_EVENT_TYPE
    {
        RTCPFET_PROFILE_GET = 0,
        RTCPFET_PROFILE_UPDATE = ( RTCPFET_PROFILE_GET + 1 )
    } RTC_PROFILE_EVENT_TYPE;
typedef
enum RTC_ANSWER_MODE
    {
        RTCAM_OFFER_SESSION_EVENT = 0,
        RTCAM_AUTOMATICALLY_ACCEPT = ( RTCAM_OFFER_SESSION_EVENT + 1 ) ,
        RTCAM_AUTOMATICALLY_REJECT = ( RTCAM_AUTOMATICALLY_ACCEPT + 1 ) ,
        RTCAM_NOT_SUPPORTED = ( RTCAM_AUTOMATICALLY_REJECT + 1 )
    } RTC_ANSWER_MODE;
typedef
enum RTC_SESSION_REFER_STATUS
    {
        RTCSRS_REFERRING = 0,
        RTCSRS_ACCEPTED = ( RTCSRS_REFERRING + 1 ) ,
        RTCSRS_ERROR = ( RTCSRS_ACCEPTED + 1 ) ,
        RTCSRS_REJECTED = ( RTCSRS_ERROR + 1 ) ,
        RTCSRS_DROPPED = ( RTCSRS_REJECTED + 1 ) ,
        RTCSRS_DONE = ( RTCSRS_DROPPED + 1 )
    } RTC_SESSION_REFER_STATUS;
typedef
enum RTC_PRESENCE_PROPERTY
    {
        RTCPP_PHONENUMBER = 0,
        RTCPP_DISPLAYNAME = ( RTCPP_PHONENUMBER + 1 ) ,
        RTCPP_EMAIL = ( RTCPP_DISPLAYNAME + 1 ) ,
        RTCPP_DEVICE_NAME = ( RTCPP_EMAIL + 1 ) ,
        RTCPP_MULTIPLE = ( RTCPP_DEVICE_NAME + 1 )
    } RTC_PRESENCE_PROPERTY;
typedef
enum RTC_SECURITY_TYPE
    {
        RTCSECT_AUDIO_VIDEO_MEDIA_ENCRYPTION = 0,
        RTCSECT_T120_MEDIA_ENCRYPTION = ( RTCSECT_AUDIO_VIDEO_MEDIA_ENCRYPTION + 1 )
    } RTC_SECURITY_TYPE;
typedef
enum RTC_SECURITY_LEVEL
    {
        RTCSECL_UNSUPPORTED = 1,
        RTCSECL_SUPPORTED = ( RTCSECL_UNSUPPORTED + 1 ) ,
        RTCSECL_REQUIRED = ( RTCSECL_SUPPORTED + 1 )
    } RTC_SECURITY_LEVEL;
typedef
enum RTC_REINVITE_STATE
    {
        RTCRIN_INCOMING = 0,
        RTCRIN_SUCCEEDED = ( RTCRIN_INCOMING + 1 ) ,
        RTCRIN_FAIL = ( RTCRIN_SUCCEEDED + 1 )
    } RTC_REINVITE_STATE;
         RTCMT_AUDIO_SEND | \
         RTCMT_AUDIO_RECEIVE | \
         RTCMT_VIDEO_SEND | \
         RTCMT_VIDEO_RECEIVE )
         RTCMT_ALL_RTP | \
         RTCMT_T120_SENDRECV )
extern RPC_IF_HANDLE __MIDL_itf_rtccore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rtccore_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRTCClient;
    typedef struct IRTCClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClient * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IRTCClient * This);
                           HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IRTCClient * This);
                           HRESULT ( STDMETHODCALLTYPE *PrepareForShutdown )(
            __RPC__in IRTCClient * This);
                                    HRESULT ( STDMETHODCALLTYPE *put_EventFilter )(
            __RPC__in IRTCClient * This,
                       long lFilter);
                                    HRESULT ( STDMETHODCALLTYPE *get_EventFilter )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plFilter);
                           HRESULT ( STDMETHODCALLTYPE *SetPreferredMediaTypes )(
            __RPC__in IRTCClient * This,
                       long lMediaTypes,
                       VARIANT_BOOL fPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredMediaTypes )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plMediaTypes);
                                    HRESULT ( STDMETHODCALLTYPE *get_MediaCapabilities )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plMediaTypes);
                           HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            __RPC__in IRTCClient * This,
                       RTC_SESSION_TYPE enType,
                       __RPC__in BSTR bstrLocalPhoneURI,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                    HRESULT ( STDMETHODCALLTYPE *put_ListenForIncomingSessions )(
            __RPC__in IRTCClient * This,
                       RTC_LISTEN_MODE enListen);
                                    HRESULT ( STDMETHODCALLTYPE *get_ListenForIncomingSessions )(
            __RPC__in IRTCClient * This,
                                __RPC__out RTC_LISTEN_MODE *penListen);
                                    HRESULT ( STDMETHODCALLTYPE *get_NetworkAddresses )(
            __RPC__in IRTCClient * This,
                       VARIANT_BOOL fTCP,
                       VARIANT_BOOL fExternal,
                                __RPC__out VARIANT *pvAddresses);
                                    HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                       long lVolume);
                                    HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__out long *plVolume);
                                    HRESULT ( STDMETHODCALLTYPE *put_AudioMuted )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                       VARIANT_BOOL fMuted);
                                    HRESULT ( STDMETHODCALLTYPE *get_AudioMuted )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__out VARIANT_BOOL *pfMuted);
                                    HRESULT ( STDMETHODCALLTYPE *get_IVideoWindow )(
            __RPC__in IRTCClient * This,
                       RTC_VIDEO_DEVICE enDevice,
                                __RPC__deref_out_opt IVideoWindow **ppIVideoWindow);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredAudioDevice )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                       __RPC__in BSTR bstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredAudioDevice )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredVolume )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                       long lVolume);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredVolume )(
            __RPC__in IRTCClient * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__out long *plVolume);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredAEC )(
            __RPC__in IRTCClient * This,
                       VARIANT_BOOL bEnable);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredAEC )(
            __RPC__in IRTCClient * This,
                                __RPC__out VARIANT_BOOL *pbEnabled);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredVideoDevice )(
            __RPC__in IRTCClient * This,
                       __RPC__in BSTR bstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredVideoDevice )(
            __RPC__in IRTCClient * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *get_ActiveMedia )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plMediaType);
                                    HRESULT ( STDMETHODCALLTYPE *put_MaxBitrate )(
            __RPC__in IRTCClient * This,
                       long lMaxBitrate);
                                    HRESULT ( STDMETHODCALLTYPE *get_MaxBitrate )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plMaxBitrate);
                                    HRESULT ( STDMETHODCALLTYPE *put_TemporalSpatialTradeOff )(
            __RPC__in IRTCClient * This,
                       long lValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_TemporalSpatialTradeOff )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_NetworkQuality )(
            __RPC__in IRTCClient * This,
                                __RPC__out long *plNetworkQuality);
                           HRESULT ( STDMETHODCALLTYPE *StartT120Applet )(
            __RPC__in IRTCClient * This,
                       RTC_T120_APPLET enApplet);
                           HRESULT ( STDMETHODCALLTYPE *StopT120Applets )(
            __RPC__in IRTCClient * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsT120AppletRunning )(
            __RPC__in IRTCClient * This,
                       RTC_T120_APPLET enApplet,
                                __RPC__out VARIANT_BOOL *pfRunning);
                                    HRESULT ( STDMETHODCALLTYPE *get_LocalUserURI )(
            __RPC__in IRTCClient * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_LocalUserURI )(
            __RPC__in IRTCClient * This,
                       __RPC__in BSTR bstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_LocalUserName )(
            __RPC__in IRTCClient * This,
                                __RPC__deref_out_opt BSTR *pbstrUserName);
                                    HRESULT ( STDMETHODCALLTYPE *put_LocalUserName )(
            __RPC__in IRTCClient * This,
                       __RPC__in BSTR bstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *PlayRing )(
            __RPC__in IRTCClient * This,
                       RTC_RING_TYPE enType,
                       VARIANT_BOOL bPlay);
                           HRESULT ( STDMETHODCALLTYPE *SendDTMF )(
            __RPC__in IRTCClient * This,
                       RTC_DTMF enDTMF);
                           HRESULT ( STDMETHODCALLTYPE *InvokeTuningWizard )(
            __RPC__in IRTCClient * This,
                       OAHWND hwndParent);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsTuned )(
            __RPC__in IRTCClient * This,
                                __RPC__out VARIANT_BOOL *pfTuned);
        END_INTERFACE
    } IRTCClientVtbl;
    interface IRTCClient
    {
        CONST_VTBL struct IRTCClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> PrepareForShutdown(This) )
    ( (This)->lpVtbl -> put_EventFilter(This,lFilter) )
    ( (This)->lpVtbl -> get_EventFilter(This,plFilter) )
    ( (This)->lpVtbl -> SetPreferredMediaTypes(This,lMediaTypes,fPersistent) )
    ( (This)->lpVtbl -> get_PreferredMediaTypes(This,plMediaTypes) )
    ( (This)->lpVtbl -> get_MediaCapabilities(This,plMediaTypes) )
    ( (This)->lpVtbl -> CreateSession(This,enType,bstrLocalPhoneURI,pProfile,lFlags,ppSession) )
    ( (This)->lpVtbl -> put_ListenForIncomingSessions(This,enListen) )
    ( (This)->lpVtbl -> get_ListenForIncomingSessions(This,penListen) )
    ( (This)->lpVtbl -> get_NetworkAddresses(This,fTCP,fExternal,pvAddresses) )
    ( (This)->lpVtbl -> put_Volume(This,enDevice,lVolume) )
    ( (This)->lpVtbl -> get_Volume(This,enDevice,plVolume) )
    ( (This)->lpVtbl -> put_AudioMuted(This,enDevice,fMuted) )
    ( (This)->lpVtbl -> get_AudioMuted(This,enDevice,pfMuted) )
    ( (This)->lpVtbl -> get_IVideoWindow(This,enDevice,ppIVideoWindow) )
    ( (This)->lpVtbl -> put_PreferredAudioDevice(This,enDevice,bstrDeviceName) )
    ( (This)->lpVtbl -> get_PreferredAudioDevice(This,enDevice,pbstrDeviceName) )
    ( (This)->lpVtbl -> put_PreferredVolume(This,enDevice,lVolume) )
    ( (This)->lpVtbl -> get_PreferredVolume(This,enDevice,plVolume) )
    ( (This)->lpVtbl -> put_PreferredAEC(This,bEnable) )
    ( (This)->lpVtbl -> get_PreferredAEC(This,pbEnabled) )
    ( (This)->lpVtbl -> put_PreferredVideoDevice(This,bstrDeviceName) )
    ( (This)->lpVtbl -> get_PreferredVideoDevice(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_ActiveMedia(This,plMediaType) )
    ( (This)->lpVtbl -> put_MaxBitrate(This,lMaxBitrate) )
    ( (This)->lpVtbl -> get_MaxBitrate(This,plMaxBitrate) )
    ( (This)->lpVtbl -> put_TemporalSpatialTradeOff(This,lValue) )
    ( (This)->lpVtbl -> get_TemporalSpatialTradeOff(This,plValue) )
    ( (This)->lpVtbl -> get_NetworkQuality(This,plNetworkQuality) )
    ( (This)->lpVtbl -> StartT120Applet(This,enApplet) )
    ( (This)->lpVtbl -> StopT120Applets(This) )
    ( (This)->lpVtbl -> get_IsT120AppletRunning(This,enApplet,pfRunning) )
    ( (This)->lpVtbl -> get_LocalUserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> put_LocalUserURI(This,bstrUserURI) )
    ( (This)->lpVtbl -> get_LocalUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> put_LocalUserName(This,bstrUserName) )
    ( (This)->lpVtbl -> PlayRing(This,enType,bPlay) )
    ( (This)->lpVtbl -> SendDTMF(This,enDTMF) )
    ( (This)->lpVtbl -> InvokeTuningWizard(This,hwndParent) )
    ( (This)->lpVtbl -> get_IsTuned(This,pfTuned) )
EXTERN_C const IID IID_IRTCClient2;
    typedef struct IRTCClient2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClient2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClient2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IRTCClient2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IRTCClient2 * This);
                           HRESULT ( STDMETHODCALLTYPE *PrepareForShutdown )(
            __RPC__in IRTCClient2 * This);
                                    HRESULT ( STDMETHODCALLTYPE *put_EventFilter )(
            __RPC__in IRTCClient2 * This,
                       long lFilter);
                                    HRESULT ( STDMETHODCALLTYPE *get_EventFilter )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plFilter);
                           HRESULT ( STDMETHODCALLTYPE *SetPreferredMediaTypes )(
            __RPC__in IRTCClient2 * This,
                       long lMediaTypes,
                       VARIANT_BOOL fPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredMediaTypes )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plMediaTypes);
                                    HRESULT ( STDMETHODCALLTYPE *get_MediaCapabilities )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plMediaTypes);
                           HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            __RPC__in IRTCClient2 * This,
                       RTC_SESSION_TYPE enType,
                       __RPC__in BSTR bstrLocalPhoneURI,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                    HRESULT ( STDMETHODCALLTYPE *put_ListenForIncomingSessions )(
            __RPC__in IRTCClient2 * This,
                       RTC_LISTEN_MODE enListen);
                                    HRESULT ( STDMETHODCALLTYPE *get_ListenForIncomingSessions )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out RTC_LISTEN_MODE *penListen);
                                    HRESULT ( STDMETHODCALLTYPE *get_NetworkAddresses )(
            __RPC__in IRTCClient2 * This,
                       VARIANT_BOOL fTCP,
                       VARIANT_BOOL fExternal,
                                __RPC__out VARIANT *pvAddresses);
                                    HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                       long lVolume);
                                    HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__out long *plVolume);
                                    HRESULT ( STDMETHODCALLTYPE *put_AudioMuted )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                       VARIANT_BOOL fMuted);
                                    HRESULT ( STDMETHODCALLTYPE *get_AudioMuted )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__out VARIANT_BOOL *pfMuted);
                                    HRESULT ( STDMETHODCALLTYPE *get_IVideoWindow )(
            __RPC__in IRTCClient2 * This,
                       RTC_VIDEO_DEVICE enDevice,
                                __RPC__deref_out_opt IVideoWindow **ppIVideoWindow);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredAudioDevice )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                       __RPC__in BSTR bstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredAudioDevice )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredVolume )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                       long lVolume);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredVolume )(
            __RPC__in IRTCClient2 * This,
                       RTC_AUDIO_DEVICE enDevice,
                                __RPC__out long *plVolume);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredAEC )(
            __RPC__in IRTCClient2 * This,
                       VARIANT_BOOL bEnable);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredAEC )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out VARIANT_BOOL *pbEnabled);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredVideoDevice )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in BSTR bstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredVideoDevice )(
            __RPC__in IRTCClient2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                    HRESULT ( STDMETHODCALLTYPE *get_ActiveMedia )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plMediaType);
                                    HRESULT ( STDMETHODCALLTYPE *put_MaxBitrate )(
            __RPC__in IRTCClient2 * This,
                       long lMaxBitrate);
                                    HRESULT ( STDMETHODCALLTYPE *get_MaxBitrate )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plMaxBitrate);
                                    HRESULT ( STDMETHODCALLTYPE *put_TemporalSpatialTradeOff )(
            __RPC__in IRTCClient2 * This,
                       long lValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_TemporalSpatialTradeOff )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_NetworkQuality )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plNetworkQuality);
                           HRESULT ( STDMETHODCALLTYPE *StartT120Applet )(
            __RPC__in IRTCClient2 * This,
                       RTC_T120_APPLET enApplet);
                           HRESULT ( STDMETHODCALLTYPE *StopT120Applets )(
            __RPC__in IRTCClient2 * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsT120AppletRunning )(
            __RPC__in IRTCClient2 * This,
                       RTC_T120_APPLET enApplet,
                                __RPC__out VARIANT_BOOL *pfRunning);
                                    HRESULT ( STDMETHODCALLTYPE *get_LocalUserURI )(
            __RPC__in IRTCClient2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_LocalUserURI )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in BSTR bstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_LocalUserName )(
            __RPC__in IRTCClient2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserName);
                                    HRESULT ( STDMETHODCALLTYPE *put_LocalUserName )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in BSTR bstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *PlayRing )(
            __RPC__in IRTCClient2 * This,
                       RTC_RING_TYPE enType,
                       VARIANT_BOOL bPlay);
                           HRESULT ( STDMETHODCALLTYPE *SendDTMF )(
            __RPC__in IRTCClient2 * This,
                       RTC_DTMF enDTMF);
                           HRESULT ( STDMETHODCALLTYPE *InvokeTuningWizard )(
            __RPC__in IRTCClient2 * This,
                       OAHWND hwndParent);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsTuned )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out VARIANT_BOOL *pfTuned);
                                    HRESULT ( STDMETHODCALLTYPE *put_AnswerMode )(
            __RPC__in IRTCClient2 * This,
                       RTC_SESSION_TYPE enType,
                       RTC_ANSWER_MODE enMode);
                                    HRESULT ( STDMETHODCALLTYPE *get_AnswerMode )(
            __RPC__in IRTCClient2 * This,
                       RTC_SESSION_TYPE enType,
                                __RPC__out RTC_ANSWER_MODE *penMode);
                           HRESULT ( STDMETHODCALLTYPE *InvokeTuningWizardEx )(
            __RPC__in IRTCClient2 * This,
                       OAHWND hwndParent,
                       VARIANT_BOOL fAllowAudio,
                       VARIANT_BOOL fAllowVideo);
                                    HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IRTCClient2 * This,
                                __RPC__out long *plVersion);
                                    HRESULT ( STDMETHODCALLTYPE *put_ClientName )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in BSTR bstrClientName);
                                    HRESULT ( STDMETHODCALLTYPE *put_ClientCurVer )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in BSTR bstrClientCurVer);
                           HRESULT ( STDMETHODCALLTYPE *InitializeEx )(
            __RPC__in IRTCClient2 * This,
                       long lFlags);
                           HRESULT ( STDMETHODCALLTYPE *CreateSessionWithDescription )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in BSTR bstrContentType,
                       __RPC__in BSTR bstrSessionDescription,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCSession2 **ppSession2);
                           HRESULT ( STDMETHODCALLTYPE *SetSessionDescriptionManager )(
            __RPC__in IRTCClient2 * This,
                       __RPC__in_opt IRTCSessionDescriptionManager *pSessionDescriptionManager);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredSecurityLevel )(
            __RPC__in IRTCClient2 * This,
                       RTC_SECURITY_TYPE enSecurityType,
                       RTC_SECURITY_LEVEL enSecurityLevel);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredSecurityLevel )(
            __RPC__in IRTCClient2 * This,
                       RTC_SECURITY_TYPE enSecurityType,
                                __RPC__out RTC_SECURITY_LEVEL *penSecurityLevel);
                                    HRESULT ( STDMETHODCALLTYPE *put_AllowedPorts )(
            __RPC__in IRTCClient2 * This,
                       long lTransport,
                       RTC_LISTEN_MODE enListenMode);
                                    HRESULT ( STDMETHODCALLTYPE *get_AllowedPorts )(
            __RPC__in IRTCClient2 * This,
                       long lTransport,
                                __RPC__out RTC_LISTEN_MODE *penListenMode);
        END_INTERFACE
    } IRTCClient2Vtbl;
    interface IRTCClient2
    {
        CONST_VTBL struct IRTCClient2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> PrepareForShutdown(This) )
    ( (This)->lpVtbl -> put_EventFilter(This,lFilter) )
    ( (This)->lpVtbl -> get_EventFilter(This,plFilter) )
    ( (This)->lpVtbl -> SetPreferredMediaTypes(This,lMediaTypes,fPersistent) )
    ( (This)->lpVtbl -> get_PreferredMediaTypes(This,plMediaTypes) )
    ( (This)->lpVtbl -> get_MediaCapabilities(This,plMediaTypes) )
    ( (This)->lpVtbl -> CreateSession(This,enType,bstrLocalPhoneURI,pProfile,lFlags,ppSession) )
    ( (This)->lpVtbl -> put_ListenForIncomingSessions(This,enListen) )
    ( (This)->lpVtbl -> get_ListenForIncomingSessions(This,penListen) )
    ( (This)->lpVtbl -> get_NetworkAddresses(This,fTCP,fExternal,pvAddresses) )
    ( (This)->lpVtbl -> put_Volume(This,enDevice,lVolume) )
    ( (This)->lpVtbl -> get_Volume(This,enDevice,plVolume) )
    ( (This)->lpVtbl -> put_AudioMuted(This,enDevice,fMuted) )
    ( (This)->lpVtbl -> get_AudioMuted(This,enDevice,pfMuted) )
    ( (This)->lpVtbl -> get_IVideoWindow(This,enDevice,ppIVideoWindow) )
    ( (This)->lpVtbl -> put_PreferredAudioDevice(This,enDevice,bstrDeviceName) )
    ( (This)->lpVtbl -> get_PreferredAudioDevice(This,enDevice,pbstrDeviceName) )
    ( (This)->lpVtbl -> put_PreferredVolume(This,enDevice,lVolume) )
    ( (This)->lpVtbl -> get_PreferredVolume(This,enDevice,plVolume) )
    ( (This)->lpVtbl -> put_PreferredAEC(This,bEnable) )
    ( (This)->lpVtbl -> get_PreferredAEC(This,pbEnabled) )
    ( (This)->lpVtbl -> put_PreferredVideoDevice(This,bstrDeviceName) )
    ( (This)->lpVtbl -> get_PreferredVideoDevice(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_ActiveMedia(This,plMediaType) )
    ( (This)->lpVtbl -> put_MaxBitrate(This,lMaxBitrate) )
    ( (This)->lpVtbl -> get_MaxBitrate(This,plMaxBitrate) )
    ( (This)->lpVtbl -> put_TemporalSpatialTradeOff(This,lValue) )
    ( (This)->lpVtbl -> get_TemporalSpatialTradeOff(This,plValue) )
    ( (This)->lpVtbl -> get_NetworkQuality(This,plNetworkQuality) )
    ( (This)->lpVtbl -> StartT120Applet(This,enApplet) )
    ( (This)->lpVtbl -> StopT120Applets(This) )
    ( (This)->lpVtbl -> get_IsT120AppletRunning(This,enApplet,pfRunning) )
    ( (This)->lpVtbl -> get_LocalUserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> put_LocalUserURI(This,bstrUserURI) )
    ( (This)->lpVtbl -> get_LocalUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> put_LocalUserName(This,bstrUserName) )
    ( (This)->lpVtbl -> PlayRing(This,enType,bPlay) )
    ( (This)->lpVtbl -> SendDTMF(This,enDTMF) )
    ( (This)->lpVtbl -> InvokeTuningWizard(This,hwndParent) )
    ( (This)->lpVtbl -> get_IsTuned(This,pfTuned) )
    ( (This)->lpVtbl -> put_AnswerMode(This,enType,enMode) )
    ( (This)->lpVtbl -> get_AnswerMode(This,enType,penMode) )
    ( (This)->lpVtbl -> InvokeTuningWizardEx(This,hwndParent,fAllowAudio,fAllowVideo) )
    ( (This)->lpVtbl -> get_Version(This,plVersion) )
    ( (This)->lpVtbl -> put_ClientName(This,bstrClientName) )
    ( (This)->lpVtbl -> put_ClientCurVer(This,bstrClientCurVer) )
    ( (This)->lpVtbl -> InitializeEx(This,lFlags) )
    ( (This)->lpVtbl -> CreateSessionWithDescription(This,bstrContentType,bstrSessionDescription,pProfile,lFlags,ppSession2) )
    ( (This)->lpVtbl -> SetSessionDescriptionManager(This,pSessionDescriptionManager) )
    ( (This)->lpVtbl -> put_PreferredSecurityLevel(This,enSecurityType,enSecurityLevel) )
    ( (This)->lpVtbl -> get_PreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
    ( (This)->lpVtbl -> put_AllowedPorts(This,lTransport,enListenMode) )
    ( (This)->lpVtbl -> get_AllowedPorts(This,lTransport,penListenMode) )
EXTERN_C const IID IID_IRTCClientPresence;
    typedef struct IRTCClientPresenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClientPresence * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClientPresence * This);
                           HRESULT ( STDMETHODCALLTYPE *EnablePresence )(
            __RPC__in IRTCClientPresence * This,
                       VARIANT_BOOL fUseStorage,
                       VARIANT varStorage);
                           HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IRTCClientPresence * This,
                       VARIANT varStorage);
                           HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IRTCClientPresence * This,
                       VARIANT varStorage,
                       VARIANT_BOOL fReplaceAll);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateBuddies )(
            __RPC__in IRTCClientPresence * This,
                                __RPC__deref_out_opt IRTCEnumBuddies **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Buddies )(
            __RPC__in IRTCClientPresence * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_Buddy )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in BSTR bstrPresentityURI,
                                __RPC__deref_out_opt IRTCBuddy **ppBuddy);
                           HRESULT ( STDMETHODCALLTYPE *AddBuddy )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in BSTR bstrPresentityURI,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrData,
                       VARIANT_BOOL fPersistent,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCBuddy **ppBuddy);
                           HRESULT ( STDMETHODCALLTYPE *RemoveBuddy )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in_opt IRTCBuddy *pBuddy);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateWatchers )(
            __RPC__in IRTCClientPresence * This,
                                __RPC__deref_out_opt IRTCEnumWatchers **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Watchers )(
            __RPC__in IRTCClientPresence * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_Watcher )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in BSTR bstrPresentityURI,
                                __RPC__deref_out_opt IRTCWatcher **ppWatcher);
                           HRESULT ( STDMETHODCALLTYPE *AddWatcher )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in BSTR bstrPresentityURI,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrData,
                       VARIANT_BOOL fBlocked,
                       VARIANT_BOOL fPersistent,
                                __RPC__deref_out_opt IRTCWatcher **ppWatcher);
                           HRESULT ( STDMETHODCALLTYPE *RemoveWatcher )(
            __RPC__in IRTCClientPresence * This,
                       __RPC__in_opt IRTCWatcher *pWatcher);
                           HRESULT ( STDMETHODCALLTYPE *SetLocalPresenceInfo )(
            __RPC__in IRTCClientPresence * This,
                       RTC_PRESENCE_STATUS enStatus,
                       __RPC__in BSTR bstrNotes);
                                    HRESULT ( STDMETHODCALLTYPE *get_OfferWatcherMode )(
            __RPC__in IRTCClientPresence * This,
                                __RPC__out RTC_OFFER_WATCHER_MODE *penMode);
                                    HRESULT ( STDMETHODCALLTYPE *put_OfferWatcherMode )(
            __RPC__in IRTCClientPresence * This,
                       RTC_OFFER_WATCHER_MODE enMode);
                                    HRESULT ( STDMETHODCALLTYPE *get_PrivacyMode )(
            __RPC__in IRTCClientPresence * This,
                                __RPC__out RTC_PRIVACY_MODE *penMode);
                                    HRESULT ( STDMETHODCALLTYPE *put_PrivacyMode )(
            __RPC__in IRTCClientPresence * This,
                       RTC_PRIVACY_MODE enMode);
        END_INTERFACE
    } IRTCClientPresenceVtbl;
    interface IRTCClientPresence
    {
        CONST_VTBL struct IRTCClientPresenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnablePresence(This,fUseStorage,varStorage) )
    ( (This)->lpVtbl -> Export(This,varStorage) )
    ( (This)->lpVtbl -> Import(This,varStorage,fReplaceAll) )
    ( (This)->lpVtbl -> EnumerateBuddies(This,ppEnum) )
    ( (This)->lpVtbl -> get_Buddies(This,ppCollection) )
    ( (This)->lpVtbl -> get_Buddy(This,bstrPresentityURI,ppBuddy) )
    ( (This)->lpVtbl -> AddBuddy(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,pProfile,lFlags,ppBuddy) )
    ( (This)->lpVtbl -> RemoveBuddy(This,pBuddy) )
    ( (This)->lpVtbl -> EnumerateWatchers(This,ppEnum) )
    ( (This)->lpVtbl -> get_Watchers(This,ppCollection) )
    ( (This)->lpVtbl -> get_Watcher(This,bstrPresentityURI,ppWatcher) )
    ( (This)->lpVtbl -> AddWatcher(This,bstrPresentityURI,bstrUserName,bstrData,fBlocked,fPersistent,ppWatcher) )
    ( (This)->lpVtbl -> RemoveWatcher(This,pWatcher) )
    ( (This)->lpVtbl -> SetLocalPresenceInfo(This,enStatus,bstrNotes) )
    ( (This)->lpVtbl -> get_OfferWatcherMode(This,penMode) )
    ( (This)->lpVtbl -> put_OfferWatcherMode(This,enMode) )
    ( (This)->lpVtbl -> get_PrivacyMode(This,penMode) )
    ( (This)->lpVtbl -> put_PrivacyMode(This,enMode) )
EXTERN_C const IID IID_IRTCClientPresence2;
    typedef struct IRTCClientPresence2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClientPresence2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClientPresence2 * This);
                           HRESULT ( STDMETHODCALLTYPE *EnablePresence )(
            __RPC__in IRTCClientPresence2 * This,
                       VARIANT_BOOL fUseStorage,
                       VARIANT varStorage);
                           HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IRTCClientPresence2 * This,
                       VARIANT varStorage);
                           HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IRTCClientPresence2 * This,
                       VARIANT varStorage,
                       VARIANT_BOOL fReplaceAll);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateBuddies )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__deref_out_opt IRTCEnumBuddies **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Buddies )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_Buddy )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrPresentityURI,
                                __RPC__deref_out_opt IRTCBuddy **ppBuddy);
                           HRESULT ( STDMETHODCALLTYPE *AddBuddy )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrPresentityURI,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrData,
                       VARIANT_BOOL fPersistent,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCBuddy **ppBuddy);
                           HRESULT ( STDMETHODCALLTYPE *RemoveBuddy )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in_opt IRTCBuddy *pBuddy);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateWatchers )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__deref_out_opt IRTCEnumWatchers **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Watchers )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_Watcher )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrPresentityURI,
                                __RPC__deref_out_opt IRTCWatcher **ppWatcher);
                           HRESULT ( STDMETHODCALLTYPE *AddWatcher )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrPresentityURI,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrData,
                       VARIANT_BOOL fBlocked,
                       VARIANT_BOOL fPersistent,
                                __RPC__deref_out_opt IRTCWatcher **ppWatcher);
                           HRESULT ( STDMETHODCALLTYPE *RemoveWatcher )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in_opt IRTCWatcher *pWatcher);
                           HRESULT ( STDMETHODCALLTYPE *SetLocalPresenceInfo )(
            __RPC__in IRTCClientPresence2 * This,
                       RTC_PRESENCE_STATUS enStatus,
                       __RPC__in BSTR bstrNotes);
                                    HRESULT ( STDMETHODCALLTYPE *get_OfferWatcherMode )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__out RTC_OFFER_WATCHER_MODE *penMode);
                                    HRESULT ( STDMETHODCALLTYPE *put_OfferWatcherMode )(
            __RPC__in IRTCClientPresence2 * This,
                       RTC_OFFER_WATCHER_MODE enMode);
                                    HRESULT ( STDMETHODCALLTYPE *get_PrivacyMode )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__out RTC_PRIVACY_MODE *penMode);
                                    HRESULT ( STDMETHODCALLTYPE *put_PrivacyMode )(
            __RPC__in IRTCClientPresence2 * This,
                       RTC_PRIVACY_MODE enMode);
                           HRESULT ( STDMETHODCALLTYPE *EnablePresenceEx )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in_opt IRTCProfile *pProfile,
                       VARIANT varStorage,
                       long lFlags);
                           HRESULT ( STDMETHODCALLTYPE *DisablePresence )(
            __RPC__in IRTCClientPresence2 * This);
                           HRESULT ( STDMETHODCALLTYPE *AddGroup )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrGroupName,
                       __RPC__in BSTR bstrData,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCBuddyGroup **ppGroup);
                           HRESULT ( STDMETHODCALLTYPE *RemoveGroup )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in_opt IRTCBuddyGroup *pGroup);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateGroups )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__deref_out_opt IRTCEnumGroups **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in IRTCClientPresence2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_Group )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrGroupName,
                                __RPC__deref_out_opt IRTCBuddyGroup **ppGroup);
                           HRESULT ( STDMETHODCALLTYPE *AddWatcherEx )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrPresentityURI,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrData,
                       RTC_WATCHER_STATE enState,
                       VARIANT_BOOL fPersistent,
                       RTC_ACE_SCOPE enScope,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCWatcher2 **ppWatcher);
                                    HRESULT ( STDMETHODCALLTYPE *get_WatcherEx )(
            __RPC__in IRTCClientPresence2 * This,
                       RTC_WATCHER_MATCH_MODE enMode,
                       __RPC__in BSTR bstrPresentityURI,
                                __RPC__deref_out_opt IRTCWatcher2 **ppWatcher);
                                    HRESULT ( STDMETHODCALLTYPE *put_PresenceProperty )(
            __RPC__in IRTCClientPresence2 * This,
                       RTC_PRESENCE_PROPERTY enProperty,
                       __RPC__in BSTR bstrProperty);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresenceProperty )(
            __RPC__in IRTCClientPresence2 * This,
                       RTC_PRESENCE_PROPERTY enProperty,
                                __RPC__deref_out_opt BSTR *pbstrProperty);
                           HRESULT ( STDMETHODCALLTYPE *SetPresenceData )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrNamespace,
                       __RPC__in BSTR bstrData);
                           HRESULT ( STDMETHODCALLTYPE *GetPresenceData )(
            __RPC__in IRTCClientPresence2 * This,
                        __RPC__deref_out_opt BSTR *pbstrNamespace,
                        __RPC__deref_out_opt BSTR *pbstrData);
                           HRESULT ( STDMETHODCALLTYPE *GetLocalPresenceInfo )(
            __RPC__in IRTCClientPresence2 * This,
                        __RPC__out RTC_PRESENCE_STATUS *penStatus,
                        __RPC__deref_out_opt BSTR *pbstrNotes);
                           HRESULT ( STDMETHODCALLTYPE *AddBuddyEx )(
            __RPC__in IRTCClientPresence2 * This,
                       __RPC__in BSTR bstrPresentityURI,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrData,
                       VARIANT_BOOL fPersistent,
                       RTC_BUDDY_SUBSCRIPTION_TYPE enSubscriptionType,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags,
                                __RPC__deref_out_opt IRTCBuddy2 **ppBuddy);
        END_INTERFACE
    } IRTCClientPresence2Vtbl;
    interface IRTCClientPresence2
    {
        CONST_VTBL struct IRTCClientPresence2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnablePresence(This,fUseStorage,varStorage) )
    ( (This)->lpVtbl -> Export(This,varStorage) )
    ( (This)->lpVtbl -> Import(This,varStorage,fReplaceAll) )
    ( (This)->lpVtbl -> EnumerateBuddies(This,ppEnum) )
    ( (This)->lpVtbl -> get_Buddies(This,ppCollection) )
    ( (This)->lpVtbl -> get_Buddy(This,bstrPresentityURI,ppBuddy) )
    ( (This)->lpVtbl -> AddBuddy(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,pProfile,lFlags,ppBuddy) )
    ( (This)->lpVtbl -> RemoveBuddy(This,pBuddy) )
    ( (This)->lpVtbl -> EnumerateWatchers(This,ppEnum) )
    ( (This)->lpVtbl -> get_Watchers(This,ppCollection) )
    ( (This)->lpVtbl -> get_Watcher(This,bstrPresentityURI,ppWatcher) )
    ( (This)->lpVtbl -> AddWatcher(This,bstrPresentityURI,bstrUserName,bstrData,fBlocked,fPersistent,ppWatcher) )
    ( (This)->lpVtbl -> RemoveWatcher(This,pWatcher) )
    ( (This)->lpVtbl -> SetLocalPresenceInfo(This,enStatus,bstrNotes) )
    ( (This)->lpVtbl -> get_OfferWatcherMode(This,penMode) )
    ( (This)->lpVtbl -> put_OfferWatcherMode(This,enMode) )
    ( (This)->lpVtbl -> get_PrivacyMode(This,penMode) )
    ( (This)->lpVtbl -> put_PrivacyMode(This,enMode) )
    ( (This)->lpVtbl -> EnablePresenceEx(This,pProfile,varStorage,lFlags) )
    ( (This)->lpVtbl -> DisablePresence(This) )
    ( (This)->lpVtbl -> AddGroup(This,bstrGroupName,bstrData,pProfile,lFlags,ppGroup) )
    ( (This)->lpVtbl -> RemoveGroup(This,pGroup) )
    ( (This)->lpVtbl -> EnumerateGroups(This,ppEnum) )
    ( (This)->lpVtbl -> get_Groups(This,ppCollection) )
    ( (This)->lpVtbl -> get_Group(This,bstrGroupName,ppGroup) )
    ( (This)->lpVtbl -> AddWatcherEx(This,bstrPresentityURI,bstrUserName,bstrData,enState,fPersistent,enScope,pProfile,lFlags,ppWatcher) )
    ( (This)->lpVtbl -> get_WatcherEx(This,enMode,bstrPresentityURI,ppWatcher) )
    ( (This)->lpVtbl -> put_PresenceProperty(This,enProperty,bstrProperty) )
    ( (This)->lpVtbl -> get_PresenceProperty(This,enProperty,pbstrProperty) )
    ( (This)->lpVtbl -> SetPresenceData(This,bstrNamespace,bstrData) )
    ( (This)->lpVtbl -> GetPresenceData(This,pbstrNamespace,pbstrData) )
    ( (This)->lpVtbl -> GetLocalPresenceInfo(This,penStatus,pbstrNotes) )
    ( (This)->lpVtbl -> AddBuddyEx(This,bstrPresentityURI,bstrUserName,bstrData,fPersistent,enSubscriptionType,pProfile,lFlags,ppBuddy) )
EXTERN_C const IID IID_IRTCClientProvisioning;
    typedef struct IRTCClientProvisioningVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClientProvisioning * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClientProvisioning * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClientProvisioning * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateProfile )(
            __RPC__in IRTCClientProvisioning * This,
                       __RPC__in BSTR bstrProfileXML,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                           HRESULT ( STDMETHODCALLTYPE *EnableProfile )(
            __RPC__in IRTCClientProvisioning * This,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lRegisterFlags);
                           HRESULT ( STDMETHODCALLTYPE *DisableProfile )(
            __RPC__in IRTCClientProvisioning * This,
                       __RPC__in_opt IRTCProfile *pProfile);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateProfiles )(
            __RPC__in IRTCClientProvisioning * This,
                                __RPC__deref_out_opt IRTCEnumProfiles **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profiles )(
            __RPC__in IRTCClientProvisioning * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                           HRESULT ( STDMETHODCALLTYPE *GetProfile )(
            __RPC__in IRTCClientProvisioning * This,
                       __RPC__in BSTR bstrUserAccount,
                       __RPC__in BSTR bstrUserPassword,
                       __RPC__in BSTR bstrUserURI,
                       __RPC__in BSTR bstrServer,
                       long lTransport,
                       LONG_PTR lCookie);
                                    HRESULT ( STDMETHODCALLTYPE *get_SessionCapabilities )(
            __RPC__in IRTCClientProvisioning * This,
                                __RPC__out long *plSupportedSessions);
        END_INTERFACE
    } IRTCClientProvisioningVtbl;
    interface IRTCClientProvisioning
    {
        CONST_VTBL struct IRTCClientProvisioningVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateProfile(This,bstrProfileXML,ppProfile) )
    ( (This)->lpVtbl -> EnableProfile(This,pProfile,lRegisterFlags) )
    ( (This)->lpVtbl -> DisableProfile(This,pProfile) )
    ( (This)->lpVtbl -> EnumerateProfiles(This,ppEnum) )
    ( (This)->lpVtbl -> get_Profiles(This,ppCollection) )
    ( (This)->lpVtbl -> GetProfile(This,bstrUserAccount,bstrUserPassword,bstrUserURI,bstrServer,lTransport,lCookie) )
    ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
EXTERN_C const IID IID_IRTCClientProvisioning2;
    typedef struct IRTCClientProvisioning2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClientProvisioning2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClientProvisioning2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClientProvisioning2 * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateProfile )(
            __RPC__in IRTCClientProvisioning2 * This,
                       __RPC__in BSTR bstrProfileXML,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                           HRESULT ( STDMETHODCALLTYPE *EnableProfile )(
            __RPC__in IRTCClientProvisioning2 * This,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lRegisterFlags);
                           HRESULT ( STDMETHODCALLTYPE *DisableProfile )(
            __RPC__in IRTCClientProvisioning2 * This,
                       __RPC__in_opt IRTCProfile *pProfile);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateProfiles )(
            __RPC__in IRTCClientProvisioning2 * This,
                                __RPC__deref_out_opt IRTCEnumProfiles **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profiles )(
            __RPC__in IRTCClientProvisioning2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                           HRESULT ( STDMETHODCALLTYPE *GetProfile )(
            __RPC__in IRTCClientProvisioning2 * This,
                       __RPC__in BSTR bstrUserAccount,
                       __RPC__in BSTR bstrUserPassword,
                       __RPC__in BSTR bstrUserURI,
                       __RPC__in BSTR bstrServer,
                       long lTransport,
                       LONG_PTR lCookie);
                                    HRESULT ( STDMETHODCALLTYPE *get_SessionCapabilities )(
            __RPC__in IRTCClientProvisioning2 * This,
                                __RPC__out long *plSupportedSessions);
                           HRESULT ( STDMETHODCALLTYPE *EnableProfileEx )(
            __RPC__in IRTCClientProvisioning2 * This,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lRegisterFlags,
                       long lRoamingFlags);
        END_INTERFACE
    } IRTCClientProvisioning2Vtbl;
    interface IRTCClientProvisioning2
    {
        CONST_VTBL struct IRTCClientProvisioning2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateProfile(This,bstrProfileXML,ppProfile) )
    ( (This)->lpVtbl -> EnableProfile(This,pProfile,lRegisterFlags) )
    ( (This)->lpVtbl -> DisableProfile(This,pProfile) )
    ( (This)->lpVtbl -> EnumerateProfiles(This,ppEnum) )
    ( (This)->lpVtbl -> get_Profiles(This,ppCollection) )
    ( (This)->lpVtbl -> GetProfile(This,bstrUserAccount,bstrUserPassword,bstrUserURI,bstrServer,lTransport,lCookie) )
    ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
    ( (This)->lpVtbl -> EnableProfileEx(This,pProfile,lRegisterFlags,lRoamingFlags) )
EXTERN_C const IID IID_IRTCProfile;
    typedef struct IRTCProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCProfile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCProfile * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrKey);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_XML )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrXML);
                                    HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_ProviderURI )(
            __RPC__in IRTCProfile * This,
                       RTC_PROVIDER_URI enURI,
                                __RPC__deref_out_opt BSTR *pbstrURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_ProviderData )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientName )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientBanner )(
            __RPC__in IRTCProfile * This,
                                __RPC__out VARIANT_BOOL *pfBanner);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientMinVer )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrMinVer);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientCurVer )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrCurVer);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientUpdateURI )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrUpdateURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientData )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserURI )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrUserName);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IRTCProfile * This,
                                __RPC__deref_out_opt BSTR *pbstrUserAccount);
                           HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IRTCProfile * This,
                       __RPC__in BSTR bstrUserURI,
                       __RPC__in BSTR bstrUserAccount,
                       __RPC__in BSTR bstrPassword);
                                    HRESULT ( STDMETHODCALLTYPE *get_SessionCapabilities )(
            __RPC__in IRTCProfile * This,
                                __RPC__out long *plSupportedSessions);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCProfile * This,
                                __RPC__out RTC_REGISTRATION_STATE *penState);
        END_INTERFACE
    } IRTCProfileVtbl;
    interface IRTCProfile
    {
        CONST_VTBL struct IRTCProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Key(This,pbstrKey) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_XML(This,pbstrXML) )
    ( (This)->lpVtbl -> get_ProviderName(This,pbstrName) )
    ( (This)->lpVtbl -> get_ProviderURI(This,enURI,pbstrURI) )
    ( (This)->lpVtbl -> get_ProviderData(This,pbstrData) )
    ( (This)->lpVtbl -> get_ClientName(This,pbstrName) )
    ( (This)->lpVtbl -> get_ClientBanner(This,pfBanner) )
    ( (This)->lpVtbl -> get_ClientMinVer(This,pbstrMinVer) )
    ( (This)->lpVtbl -> get_ClientCurVer(This,pbstrCurVer) )
    ( (This)->lpVtbl -> get_ClientUpdateURI(This,pbstrUpdateURI) )
    ( (This)->lpVtbl -> get_ClientData(This,pbstrData) )
    ( (This)->lpVtbl -> get_UserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> get_UserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> get_UserAccount(This,pbstrUserAccount) )
    ( (This)->lpVtbl -> SetCredentials(This,bstrUserURI,bstrUserAccount,bstrPassword) )
    ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
    ( (This)->lpVtbl -> get_State(This,penState) )
EXTERN_C const IID IID_IRTCProfile2;
    typedef struct IRTCProfile2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCProfile2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCProfile2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCProfile2 * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrKey);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_XML )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrXML);
                                    HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_ProviderURI )(
            __RPC__in IRTCProfile2 * This,
                       RTC_PROVIDER_URI enURI,
                                __RPC__deref_out_opt BSTR *pbstrURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_ProviderData )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientName )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientBanner )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__out VARIANT_BOOL *pfBanner);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientMinVer )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrMinVer);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientCurVer )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCurVer);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientUpdateURI )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUpdateURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientData )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserURI )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserName);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserAccount);
                           HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IRTCProfile2 * This,
                       __RPC__in BSTR bstrUserURI,
                       __RPC__in BSTR bstrUserAccount,
                       __RPC__in BSTR bstrPassword);
                                    HRESULT ( STDMETHODCALLTYPE *get_SessionCapabilities )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__out long *plSupportedSessions);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__out RTC_REGISTRATION_STATE *penState);
                                    HRESULT ( STDMETHODCALLTYPE *get_Realm )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__deref_out_opt BSTR *pbstrRealm);
                                    HRESULT ( STDMETHODCALLTYPE *put_Realm )(
            __RPC__in IRTCProfile2 * This,
                       __RPC__in BSTR bstrRealm);
                                    HRESULT ( STDMETHODCALLTYPE *get_AllowedAuth )(
            __RPC__in IRTCProfile2 * This,
                                __RPC__out long *plAllowedAuth);
                                    HRESULT ( STDMETHODCALLTYPE *put_AllowedAuth )(
            __RPC__in IRTCProfile2 * This,
                       long lAllowedAuth);
        END_INTERFACE
    } IRTCProfile2Vtbl;
    interface IRTCProfile2
    {
        CONST_VTBL struct IRTCProfile2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Key(This,pbstrKey) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_XML(This,pbstrXML) )
    ( (This)->lpVtbl -> get_ProviderName(This,pbstrName) )
    ( (This)->lpVtbl -> get_ProviderURI(This,enURI,pbstrURI) )
    ( (This)->lpVtbl -> get_ProviderData(This,pbstrData) )
    ( (This)->lpVtbl -> get_ClientName(This,pbstrName) )
    ( (This)->lpVtbl -> get_ClientBanner(This,pfBanner) )
    ( (This)->lpVtbl -> get_ClientMinVer(This,pbstrMinVer) )
    ( (This)->lpVtbl -> get_ClientCurVer(This,pbstrCurVer) )
    ( (This)->lpVtbl -> get_ClientUpdateURI(This,pbstrUpdateURI) )
    ( (This)->lpVtbl -> get_ClientData(This,pbstrData) )
    ( (This)->lpVtbl -> get_UserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> get_UserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> get_UserAccount(This,pbstrUserAccount) )
    ( (This)->lpVtbl -> SetCredentials(This,bstrUserURI,bstrUserAccount,bstrPassword) )
    ( (This)->lpVtbl -> get_SessionCapabilities(This,plSupportedSessions) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_Realm(This,pbstrRealm) )
    ( (This)->lpVtbl -> put_Realm(This,bstrRealm) )
    ( (This)->lpVtbl -> get_AllowedAuth(This,plAllowedAuth) )
    ( (This)->lpVtbl -> put_AllowedAuth(This,lAllowedAuth) )
EXTERN_C const IID IID_IRTCSession;
    typedef struct IRTCSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSession * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Client )(
            __RPC__in IRTCSession * This,
                                __RPC__deref_out_opt IRTCClient **ppClient);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCSession * This,
                                __RPC__out RTC_SESSION_STATE *penState);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IRTCSession * This,
                                __RPC__out RTC_SESSION_TYPE *penType);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCSession * This,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                                    HRESULT ( STDMETHODCALLTYPE *get_Participants )(
            __RPC__in IRTCSession * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                           HRESULT ( STDMETHODCALLTYPE *Answer )(
            __RPC__in IRTCSession * This);
                           HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IRTCSession * This,
                       RTC_TERMINATE_REASON enReason);
                           HRESULT ( STDMETHODCALLTYPE *Redirect )(
            __RPC__in IRTCSession * This,
                       RTC_SESSION_TYPE enType,
                       __RPC__in BSTR bstrLocalPhoneURI,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags);
                           HRESULT ( STDMETHODCALLTYPE *AddParticipant )(
            __RPC__in IRTCSession * This,
                       __RPC__in BSTR bstrAddress,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IRTCParticipant **ppParticipant);
                           HRESULT ( STDMETHODCALLTYPE *RemoveParticipant )(
            __RPC__in IRTCSession * This,
                       __RPC__in_opt IRTCParticipant *pParticipant);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateParticipants )(
            __RPC__in IRTCSession * This,
                                __RPC__deref_out_opt IRTCEnumParticipants **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_CanAddParticipants )(
            __RPC__in IRTCSession * This,
                                __RPC__out VARIANT_BOOL *pfCanAdd);
                                    HRESULT ( STDMETHODCALLTYPE *get_RedirectedUserURI )(
            __RPC__in IRTCSession * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_RedirectedUserName )(
            __RPC__in IRTCSession * This,
                                __RPC__deref_out_opt BSTR *pbstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *NextRedirectedUser )(
            __RPC__in IRTCSession * This);
                           HRESULT ( STDMETHODCALLTYPE *SendMessage )(
            __RPC__in IRTCSession * This,
                       __RPC__in BSTR bstrMessageHeader,
                       __RPC__in BSTR bstrMessage,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *SendMessageStatus )(
            __RPC__in IRTCSession * This,
                       RTC_MESSAGING_USER_STATUS enUserStatus,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *AddStream )(
            __RPC__in IRTCSession * This,
                       long lMediaType,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            __RPC__in IRTCSession * This,
                       long lMediaType,
                       LONG_PTR lCookie);
                                    HRESULT ( STDMETHODCALLTYPE *put_EncryptionKey )(
            __RPC__in IRTCSession * This,
                       long lMediaType,
                       __RPC__in BSTR EncryptionKey);
        END_INTERFACE
    } IRTCSessionVtbl;
    interface IRTCSession
    {
        CONST_VTBL struct IRTCSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Client(This,ppClient) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_Type(This,penType) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_Participants(This,ppCollection) )
    ( (This)->lpVtbl -> Answer(This) )
    ( (This)->lpVtbl -> Terminate(This,enReason) )
    ( (This)->lpVtbl -> Redirect(This,enType,bstrLocalPhoneURI,pProfile,lFlags) )
    ( (This)->lpVtbl -> AddParticipant(This,bstrAddress,bstrName,ppParticipant) )
    ( (This)->lpVtbl -> RemoveParticipant(This,pParticipant) )
    ( (This)->lpVtbl -> EnumerateParticipants(This,ppEnum) )
    ( (This)->lpVtbl -> get_CanAddParticipants(This,pfCanAdd) )
    ( (This)->lpVtbl -> get_RedirectedUserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> get_RedirectedUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> NextRedirectedUser(This) )
    ( (This)->lpVtbl -> SendMessage(This,bstrMessageHeader,bstrMessage,lCookie) )
    ( (This)->lpVtbl -> SendMessageStatus(This,enUserStatus,lCookie) )
    ( (This)->lpVtbl -> AddStream(This,lMediaType,lCookie) )
    ( (This)->lpVtbl -> RemoveStream(This,lMediaType,lCookie) )
    ( (This)->lpVtbl -> put_EncryptionKey(This,lMediaType,EncryptionKey) )
EXTERN_C const IID IID_IRTCSession2;
    typedef struct IRTCSession2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSession2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSession2 * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Client )(
            __RPC__in IRTCSession2 * This,
                                __RPC__deref_out_opt IRTCClient **ppClient);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCSession2 * This,
                                __RPC__out RTC_SESSION_STATE *penState);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IRTCSession2 * This,
                                __RPC__out RTC_SESSION_TYPE *penType);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCSession2 * This,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                                    HRESULT ( STDMETHODCALLTYPE *get_Participants )(
            __RPC__in IRTCSession2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                           HRESULT ( STDMETHODCALLTYPE *Answer )(
            __RPC__in IRTCSession2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IRTCSession2 * This,
                       RTC_TERMINATE_REASON enReason);
                           HRESULT ( STDMETHODCALLTYPE *Redirect )(
            __RPC__in IRTCSession2 * This,
                       RTC_SESSION_TYPE enType,
                       __RPC__in BSTR bstrLocalPhoneURI,
                       __RPC__in_opt IRTCProfile *pProfile,
                       long lFlags);
                           HRESULT ( STDMETHODCALLTYPE *AddParticipant )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in BSTR bstrAddress,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IRTCParticipant **ppParticipant);
                           HRESULT ( STDMETHODCALLTYPE *RemoveParticipant )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in_opt IRTCParticipant *pParticipant);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateParticipants )(
            __RPC__in IRTCSession2 * This,
                                __RPC__deref_out_opt IRTCEnumParticipants **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_CanAddParticipants )(
            __RPC__in IRTCSession2 * This,
                                __RPC__out VARIANT_BOOL *pfCanAdd);
                                    HRESULT ( STDMETHODCALLTYPE *get_RedirectedUserURI )(
            __RPC__in IRTCSession2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_RedirectedUserName )(
            __RPC__in IRTCSession2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *NextRedirectedUser )(
            __RPC__in IRTCSession2 * This);
                           HRESULT ( STDMETHODCALLTYPE *SendMessage )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in BSTR bstrMessageHeader,
                       __RPC__in BSTR bstrMessage,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *SendMessageStatus )(
            __RPC__in IRTCSession2 * This,
                       RTC_MESSAGING_USER_STATUS enUserStatus,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *AddStream )(
            __RPC__in IRTCSession2 * This,
                       long lMediaType,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            __RPC__in IRTCSession2 * This,
                       long lMediaType,
                       LONG_PTR lCookie);
                                    HRESULT ( STDMETHODCALLTYPE *put_EncryptionKey )(
            __RPC__in IRTCSession2 * This,
                       long lMediaType,
                       __RPC__in BSTR EncryptionKey);
                           HRESULT ( STDMETHODCALLTYPE *SendInfo )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in BSTR bstrInfoHeader,
                       __RPC__in BSTR bstrInfo,
                       LONG_PTR lCookie);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredSecurityLevel )(
            __RPC__in IRTCSession2 * This,
                       RTC_SECURITY_TYPE enSecurityType,
                       RTC_SECURITY_LEVEL enSecurityLevel);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredSecurityLevel )(
            __RPC__in IRTCSession2 * This,
                       RTC_SECURITY_TYPE enSecurityType,
                                __RPC__out RTC_SECURITY_LEVEL *penSecurityLevel);
                           HRESULT ( STDMETHODCALLTYPE *IsSecurityEnabled )(
            __RPC__in IRTCSession2 * This,
                       RTC_SECURITY_TYPE enSecurityType,
                                __RPC__out VARIANT_BOOL *pfSecurityEnabled);
                           HRESULT ( STDMETHODCALLTYPE *AnswerWithSessionDescription )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in BSTR bstrContentType,
                       __RPC__in BSTR bstrSessionDescription);
                           HRESULT ( STDMETHODCALLTYPE *ReInviteWithSessionDescription )(
            __RPC__in IRTCSession2 * This,
                       __RPC__in BSTR bstrContentType,
                       __RPC__in BSTR bstrSessionDescription,
                       LONG_PTR lCookie);
        END_INTERFACE
    } IRTCSession2Vtbl;
    interface IRTCSession2
    {
        CONST_VTBL struct IRTCSession2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Client(This,ppClient) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_Type(This,penType) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_Participants(This,ppCollection) )
    ( (This)->lpVtbl -> Answer(This) )
    ( (This)->lpVtbl -> Terminate(This,enReason) )
    ( (This)->lpVtbl -> Redirect(This,enType,bstrLocalPhoneURI,pProfile,lFlags) )
    ( (This)->lpVtbl -> AddParticipant(This,bstrAddress,bstrName,ppParticipant) )
    ( (This)->lpVtbl -> RemoveParticipant(This,pParticipant) )
    ( (This)->lpVtbl -> EnumerateParticipants(This,ppEnum) )
    ( (This)->lpVtbl -> get_CanAddParticipants(This,pfCanAdd) )
    ( (This)->lpVtbl -> get_RedirectedUserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> get_RedirectedUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> NextRedirectedUser(This) )
    ( (This)->lpVtbl -> SendMessage(This,bstrMessageHeader,bstrMessage,lCookie) )
    ( (This)->lpVtbl -> SendMessageStatus(This,enUserStatus,lCookie) )
    ( (This)->lpVtbl -> AddStream(This,lMediaType,lCookie) )
    ( (This)->lpVtbl -> RemoveStream(This,lMediaType,lCookie) )
    ( (This)->lpVtbl -> put_EncryptionKey(This,lMediaType,EncryptionKey) )
    ( (This)->lpVtbl -> SendInfo(This,bstrInfoHeader,bstrInfo,lCookie) )
    ( (This)->lpVtbl -> put_PreferredSecurityLevel(This,enSecurityType,enSecurityLevel) )
    ( (This)->lpVtbl -> get_PreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
    ( (This)->lpVtbl -> IsSecurityEnabled(This,enSecurityType,pfSecurityEnabled) )
    ( (This)->lpVtbl -> AnswerWithSessionDescription(This,bstrContentType,bstrSessionDescription) )
    ( (This)->lpVtbl -> ReInviteWithSessionDescription(This,bstrContentType,bstrSessionDescription,lCookie) )
EXTERN_C const IID IID_IRTCSessionCallControl;
    typedef struct IRTCSessionCallControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionCallControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionCallControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionCallControl * This);
                           HRESULT ( STDMETHODCALLTYPE *Hold )(
            __RPC__in IRTCSessionCallControl * This,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *UnHold )(
            __RPC__in IRTCSessionCallControl * This,
                       LONG_PTR lCookie);
                           HRESULT ( STDMETHODCALLTYPE *Forward )(
            __RPC__in IRTCSessionCallControl * This,
                       __RPC__in BSTR bstrForwardToURI);
                           HRESULT ( STDMETHODCALLTYPE *Refer )(
            __RPC__in IRTCSessionCallControl * This,
                       __RPC__in BSTR bstrReferToURI,
                       __RPC__in BSTR bstrReferCookie);
                                    HRESULT ( STDMETHODCALLTYPE *put_ReferredByURI )(
            __RPC__in IRTCSessionCallControl * This,
                       __RPC__in BSTR bstrReferredByURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_ReferredByURI )(
            __RPC__in IRTCSessionCallControl * This,
                                __RPC__deref_out_opt BSTR *pbstrReferredByURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_ReferCookie )(
            __RPC__in IRTCSessionCallControl * This,
                       __RPC__in BSTR bstrReferCookie);
                                    HRESULT ( STDMETHODCALLTYPE *get_ReferCookie )(
            __RPC__in IRTCSessionCallControl * This,
                                __RPC__deref_out_opt BSTR *pbstrReferCookie);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsReferred )(
            __RPC__in IRTCSessionCallControl * This,
                                __RPC__out VARIANT_BOOL *pfIsReferred);
        END_INTERFACE
    } IRTCSessionCallControlVtbl;
    interface IRTCSessionCallControl
    {
        CONST_VTBL struct IRTCSessionCallControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Hold(This,lCookie) )
    ( (This)->lpVtbl -> UnHold(This,lCookie) )
    ( (This)->lpVtbl -> Forward(This,bstrForwardToURI) )
    ( (This)->lpVtbl -> Refer(This,bstrReferToURI,bstrReferCookie) )
    ( (This)->lpVtbl -> put_ReferredByURI(This,bstrReferredByURI) )
    ( (This)->lpVtbl -> get_ReferredByURI(This,pbstrReferredByURI) )
    ( (This)->lpVtbl -> put_ReferCookie(This,bstrReferCookie) )
    ( (This)->lpVtbl -> get_ReferCookie(This,pbstrReferCookie) )
    ( (This)->lpVtbl -> get_IsReferred(This,pfIsReferred) )
EXTERN_C const IID IID_IRTCParticipant;
    typedef struct IRTCParticipantVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCParticipant * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCParticipant * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCParticipant * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_UserURI )(
            __RPC__in IRTCParticipant * This,
                                __RPC__deref_out_opt BSTR *pbstrUserURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCParticipant * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Removable )(
            __RPC__in IRTCParticipant * This,
                                __RPC__out VARIANT_BOOL *pfRemovable);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCParticipant * This,
                                __RPC__out RTC_PARTICIPANT_STATE *penState);
                                    HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCParticipant * This,
                                __RPC__deref_out_opt IRTCSession **ppSession);
        END_INTERFACE
    } IRTCParticipantVtbl;
    interface IRTCParticipant
    {
        CONST_VTBL struct IRTCParticipantVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_UserURI(This,pbstrUserURI) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Removable(This,pfRemovable) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
EXTERN_C const IID IID_IRTCRoamingEvent;
    typedef struct IRTCRoamingEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCRoamingEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCRoamingEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCRoamingEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCRoamingEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCRoamingEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCRoamingEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCRoamingEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCRoamingEvent * This,
                                __RPC__out RTC_ROAMING_EVENT_TYPE *pEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCRoamingEvent * This,
                                __RPC__deref_out_opt IRTCProfile2 **ppProfile);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCRoamingEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCRoamingEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
        END_INTERFACE
    } IRTCRoamingEventVtbl;
    interface IRTCRoamingEvent
    {
        CONST_VTBL struct IRTCRoamingEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EventType(This,pEventType) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
EXTERN_C const IID IID_IRTCProfileEvent;
    typedef struct IRTCProfileEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCProfileEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCProfileEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCProfileEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCProfileEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCProfileEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCProfileEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCProfileEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCProfileEvent * This,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cookie )(
            __RPC__in IRTCProfileEvent * This,
                                __RPC__out LONG_PTR *plCookie);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCProfileEvent * This,
                                __RPC__out long *plStatusCode);
        END_INTERFACE
    } IRTCProfileEventVtbl;
    interface IRTCProfileEvent
    {
        CONST_VTBL struct IRTCProfileEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
EXTERN_C const IID IID_IRTCProfileEvent2;
    typedef struct IRTCProfileEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCProfileEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCProfileEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCProfileEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCProfileEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCProfileEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCProfileEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCProfileEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCProfileEvent2 * This,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cookie )(
            __RPC__in IRTCProfileEvent2 * This,
                                __RPC__out LONG_PTR *plCookie);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCProfileEvent2 * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCProfileEvent2 * This,
                                __RPC__out RTC_PROFILE_EVENT_TYPE *pEventType);
        END_INTERFACE
    } IRTCProfileEvent2Vtbl;
    interface IRTCProfileEvent2
    {
        CONST_VTBL struct IRTCProfileEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_EventType(This,pEventType) )
EXTERN_C const IID IID_IRTCClientEvent;
    typedef struct IRTCClientEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClientEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClientEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClientEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCClientEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCClientEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCClientEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCClientEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCClientEvent * This,
                                __RPC__out RTC_CLIENT_EVENT_TYPE *penEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Client )(
            __RPC__in IRTCClientEvent * This,
                                __RPC__deref_out_opt IRTCClient **ppClient);
        END_INTERFACE
    } IRTCClientEventVtbl;
    interface IRTCClientEvent
    {
        CONST_VTBL struct IRTCClientEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EventType(This,penEventType) )
    ( (This)->lpVtbl -> get_Client(This,ppClient) )
EXTERN_C const IID IID_IRTCRegistrationStateChangeEvent;
    typedef struct IRTCRegistrationStateChangeEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCRegistrationStateChangeEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCRegistrationStateChangeEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCRegistrationStateChangeEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                                __RPC__deref_out_opt IRTCProfile **ppProfile);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                                __RPC__out RTC_REGISTRATION_STATE *penState);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCRegistrationStateChangeEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
        END_INTERFACE
    } IRTCRegistrationStateChangeEventVtbl;
    interface IRTCRegistrationStateChangeEvent
    {
        CONST_VTBL struct IRTCRegistrationStateChangeEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
EXTERN_C const IID IID_IRTCSessionStateChangeEvent;
    typedef struct IRTCSessionStateChangeEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionStateChangeEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionStateChangeEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCSessionStateChangeEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                                __RPC__out RTC_SESSION_STATE *penState);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCSessionStateChangeEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
        END_INTERFACE
    } IRTCSessionStateChangeEventVtbl;
    interface IRTCSessionStateChangeEvent
    {
        CONST_VTBL struct IRTCSessionStateChangeEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
EXTERN_C const IID IID_IRTCSessionStateChangeEvent2;
    typedef struct IRTCSessionStateChangeEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionStateChangeEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionStateChangeEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCSessionStateChangeEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                                __RPC__out RTC_SESSION_STATE *penState);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaTypes )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                                __RPC__out long *pMediaTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemotePreferredSecurityLevel )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                       RTC_SECURITY_TYPE enSecurityType,
                                __RPC__out RTC_SECURITY_LEVEL *penSecurityLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsForked )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                                __RPC__out VARIANT_BOOL *pfIsForked);
                               HRESULT ( STDMETHODCALLTYPE *GetRemoteSessionDescription )(
            __RPC__in IRTCSessionStateChangeEvent2 * This,
                        __RPC__deref_out_opt BSTR *pbstrContentType,
                        __RPC__deref_out_opt BSTR *pbstrSessionDescription);
        END_INTERFACE
    } IRTCSessionStateChangeEvent2Vtbl;
    interface IRTCSessionStateChangeEvent2
    {
        CONST_VTBL struct IRTCSessionStateChangeEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
    ( (This)->lpVtbl -> get_MediaTypes(This,pMediaTypes) )
    ( (This)->lpVtbl -> get_RemotePreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
    ( (This)->lpVtbl -> get_IsForked(This,pfIsForked) )
    ( (This)->lpVtbl -> GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) )
EXTERN_C const IID IID_IRTCSessionOperationCompleteEvent;
    typedef struct IRTCSessionOperationCompleteEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionOperationCompleteEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionOperationCompleteEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCSessionOperationCompleteEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cookie )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                                __RPC__out LONG_PTR *plCookie);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCSessionOperationCompleteEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
        END_INTERFACE
    } IRTCSessionOperationCompleteEventVtbl;
    interface IRTCSessionOperationCompleteEvent
    {
        CONST_VTBL struct IRTCSessionOperationCompleteEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
EXTERN_C const IID IID_IRTCSessionOperationCompleteEvent2;
    typedef struct IRTCSessionOperationCompleteEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCSessionOperationCompleteEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cookie )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                                __RPC__out LONG_PTR *plCookie);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
                                        HRESULT ( STDMETHODCALLTYPE *get_Participant )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                                __RPC__deref_out_opt IRTCParticipant **ppParticipant);
                               HRESULT ( STDMETHODCALLTYPE *GetRemoteSessionDescription )(
            __RPC__in IRTCSessionOperationCompleteEvent2 * This,
                        __RPC__deref_out_opt BSTR *pbstrContentType,
                        __RPC__deref_out_opt BSTR *pbstrSessionDescription);
        END_INTERFACE
    } IRTCSessionOperationCompleteEvent2Vtbl;
    interface IRTCSessionOperationCompleteEvent2
    {
        CONST_VTBL struct IRTCSessionOperationCompleteEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
    ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
    ( (This)->lpVtbl -> GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) )
EXTERN_C const IID IID_IRTCParticipantStateChangeEvent;
    typedef struct IRTCParticipantStateChangeEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCParticipantStateChangeEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCParticipantStateChangeEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCParticipantStateChangeEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Participant )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                                __RPC__deref_out_opt IRTCParticipant **ppParticipant);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                                __RPC__out RTC_PARTICIPANT_STATE *penState);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCParticipantStateChangeEvent * This,
                                __RPC__out long *plStatusCode);
        END_INTERFACE
    } IRTCParticipantStateChangeEventVtbl;
    interface IRTCParticipantStateChangeEvent
    {
        CONST_VTBL struct IRTCParticipantStateChangeEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
EXTERN_C const IID IID_IRTCMediaEvent;
    typedef struct IRTCMediaEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCMediaEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCMediaEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCMediaEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCMediaEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCMediaEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCMediaEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in IRTCMediaEvent * This,
                                __RPC__out long *pMediaType);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCMediaEvent * This,
                                __RPC__out RTC_MEDIA_EVENT_TYPE *penEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventReason )(
            __RPC__in IRTCMediaEvent * This,
                                __RPC__out RTC_MEDIA_EVENT_REASON *penEventReason);
        END_INTERFACE
    } IRTCMediaEventVtbl;
    interface IRTCMediaEvent
    {
        CONST_VTBL struct IRTCMediaEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_MediaType(This,pMediaType) )
    ( (This)->lpVtbl -> get_EventType(This,penEventType) )
    ( (This)->lpVtbl -> get_EventReason(This,penEventReason) )
EXTERN_C const IID IID_IRTCIntensityEvent;
    typedef struct IRTCIntensityEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCIntensityEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCIntensityEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCIntensityEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCIntensityEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCIntensityEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCIntensityEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCIntensityEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Level )(
            __RPC__in IRTCIntensityEvent * This,
                                __RPC__out long *plLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_Min )(
            __RPC__in IRTCIntensityEvent * This,
                                __RPC__out long *plMin);
                                        HRESULT ( STDMETHODCALLTYPE *get_Max )(
            __RPC__in IRTCIntensityEvent * This,
                                __RPC__out long *plMax);
                                        HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in IRTCIntensityEvent * This,
                                __RPC__out RTC_AUDIO_DEVICE *penDirection);
        END_INTERFACE
    } IRTCIntensityEventVtbl;
    interface IRTCIntensityEvent
    {
        CONST_VTBL struct IRTCIntensityEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Level(This,plLevel) )
    ( (This)->lpVtbl -> get_Min(This,plMin) )
    ( (This)->lpVtbl -> get_Max(This,plMax) )
    ( (This)->lpVtbl -> get_Direction(This,penDirection) )
EXTERN_C const IID IID_IRTCMessagingEvent;
    typedef struct IRTCMessagingEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCMessagingEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCMessagingEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCMessagingEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCMessagingEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCMessagingEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCMessagingEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCMessagingEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCMessagingEvent * This,
                                __RPC__deref_out_opt IRTCSession **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_Participant )(
            __RPC__in IRTCMessagingEvent * This,
                                __RPC__deref_out_opt IRTCParticipant **ppParticipant);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCMessagingEvent * This,
                                __RPC__out RTC_MESSAGING_EVENT_TYPE *penEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IRTCMessagingEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageHeader )(
            __RPC__in IRTCMessagingEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrMessageHeader);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserStatus )(
            __RPC__in IRTCMessagingEvent * This,
                                __RPC__out RTC_MESSAGING_USER_STATUS *penUserStatus);
        END_INTERFACE
    } IRTCMessagingEventVtbl;
    interface IRTCMessagingEvent
    {
        CONST_VTBL struct IRTCMessagingEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
    ( (This)->lpVtbl -> get_EventType(This,penEventType) )
    ( (This)->lpVtbl -> get_Message(This,pbstrMessage) )
    ( (This)->lpVtbl -> get_MessageHeader(This,pbstrMessageHeader) )
    ( (This)->lpVtbl -> get_UserStatus(This,penUserStatus) )
EXTERN_C const IID IID_IRTCBuddyEvent;
    typedef struct IRTCBuddyEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCBuddyEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCBuddyEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCBuddyEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCBuddyEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCBuddyEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCBuddyEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCBuddyEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Buddy )(
            __RPC__in IRTCBuddyEvent * This,
                                __RPC__deref_out_opt IRTCBuddy **ppBuddy);
        END_INTERFACE
    } IRTCBuddyEventVtbl;
    interface IRTCBuddyEvent
    {
        CONST_VTBL struct IRTCBuddyEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Buddy(This,ppBuddy) )
EXTERN_C const IID IID_IRTCBuddyEvent2;
    typedef struct IRTCBuddyEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCBuddyEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCBuddyEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCBuddyEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCBuddyEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCBuddyEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCBuddyEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCBuddyEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Buddy )(
            __RPC__in IRTCBuddyEvent2 * This,
                                __RPC__deref_out_opt IRTCBuddy **ppBuddy);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCBuddyEvent2 * This,
                                __RPC__out RTC_BUDDY_EVENT_TYPE *pEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCBuddyEvent2 * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCBuddyEvent2 * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
        END_INTERFACE
    } IRTCBuddyEvent2Vtbl;
    interface IRTCBuddyEvent2
    {
        CONST_VTBL struct IRTCBuddyEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Buddy(This,ppBuddy) )
    ( (This)->lpVtbl -> get_EventType(This,pEventType) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
EXTERN_C const IID IID_IRTCWatcherEvent;
    typedef struct IRTCWatcherEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCWatcherEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCWatcherEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCWatcherEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCWatcherEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCWatcherEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCWatcherEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCWatcherEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Watcher )(
            __RPC__in IRTCWatcherEvent * This,
                                __RPC__deref_out_opt IRTCWatcher **ppWatcher);
        END_INTERFACE
    } IRTCWatcherEventVtbl;
    interface IRTCWatcherEvent
    {
        CONST_VTBL struct IRTCWatcherEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Watcher(This,ppWatcher) )
EXTERN_C const IID IID_IRTCWatcherEvent2;
    typedef struct IRTCWatcherEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCWatcherEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCWatcherEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCWatcherEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCWatcherEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCWatcherEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCWatcherEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCWatcherEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Watcher )(
            __RPC__in IRTCWatcherEvent2 * This,
                                __RPC__deref_out_opt IRTCWatcher **ppWatcher);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCWatcherEvent2 * This,
                                __RPC__out RTC_WATCHER_EVENT_TYPE *pEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCWatcherEvent2 * This,
                                __RPC__out long *plStatusCode);
        END_INTERFACE
    } IRTCWatcherEvent2Vtbl;
    interface IRTCWatcherEvent2
    {
        CONST_VTBL struct IRTCWatcherEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Watcher(This,ppWatcher) )
    ( (This)->lpVtbl -> get_EventType(This,pEventType) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
EXTERN_C const IID IID_IRTCBuddyGroupEvent;
    typedef struct IRTCBuddyGroupEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCBuddyGroupEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCBuddyGroupEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCBuddyGroupEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCBuddyGroupEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCBuddyGroupEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCBuddyGroupEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCBuddyGroupEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IRTCBuddyGroupEvent * This,
                                __RPC__out RTC_GROUP_EVENT_TYPE *pEventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Group )(
            __RPC__in IRTCBuddyGroupEvent * This,
                                __RPC__deref_out_opt IRTCBuddyGroup **ppGroup);
                                        HRESULT ( STDMETHODCALLTYPE *get_Buddy )(
            __RPC__in IRTCBuddyGroupEvent * This,
                                __RPC__deref_out_opt IRTCBuddy2 **ppBuddy);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCBuddyGroupEvent * This,
                                __RPC__out long *plStatusCode);
        END_INTERFACE
    } IRTCBuddyGroupEventVtbl;
    interface IRTCBuddyGroupEvent
    {
        CONST_VTBL struct IRTCBuddyGroupEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EventType(This,pEventType) )
    ( (This)->lpVtbl -> get_Group(This,ppGroup) )
    ( (This)->lpVtbl -> get_Buddy(This,ppBuddy) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
EXTERN_C const IID IID_IRTCInfoEvent;
    typedef struct IRTCInfoEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCInfoEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCInfoEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCInfoEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCInfoEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCInfoEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCInfoEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCInfoEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCInfoEvent * This,
                                __RPC__deref_out_opt IRTCSession2 **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_Participant )(
            __RPC__in IRTCInfoEvent * This,
                                __RPC__deref_out_opt IRTCParticipant **ppParticipant);
                                        HRESULT ( STDMETHODCALLTYPE *get_Info )(
            __RPC__in IRTCInfoEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_InfoHeader )(
            __RPC__in IRTCInfoEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrInfoHeader);
        END_INTERFACE
    } IRTCInfoEventVtbl;
    interface IRTCInfoEvent
    {
        CONST_VTBL struct IRTCInfoEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_Participant(This,ppParticipant) )
    ( (This)->lpVtbl -> get_Info(This,pbstrInfo) )
    ( (This)->lpVtbl -> get_InfoHeader(This,pbstrInfoHeader) )
EXTERN_C const IID IID_IRTCMediaRequestEvent;
    typedef struct IRTCMediaRequestEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCMediaRequestEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCMediaRequestEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCMediaRequestEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCMediaRequestEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCMediaRequestEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCMediaRequestEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCMediaRequestEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCMediaRequestEvent * This,
                                __RPC__deref_out_opt IRTCSession2 **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProposedMedia )(
            __RPC__in IRTCMediaRequestEvent * This,
                                __RPC__out long *plMediaTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentMedia )(
            __RPC__in IRTCMediaRequestEvent * This,
                                __RPC__out long *plMediaTypes);
                               HRESULT ( STDMETHODCALLTYPE *Accept )(
            __RPC__in IRTCMediaRequestEvent * This,
                       long lMediaTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemotePreferredSecurityLevel )(
            __RPC__in IRTCMediaRequestEvent * This,
                       RTC_SECURITY_TYPE enSecurityType,
                                __RPC__out RTC_SECURITY_LEVEL *penSecurityLevel);
                               HRESULT ( STDMETHODCALLTYPE *Reject )(
            __RPC__in IRTCMediaRequestEvent * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCMediaRequestEvent * This,
                                __RPC__out RTC_REINVITE_STATE *pState);
        END_INTERFACE
    } IRTCMediaRequestEventVtbl;
    interface IRTCMediaRequestEvent
    {
        CONST_VTBL struct IRTCMediaRequestEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_ProposedMedia(This,plMediaTypes) )
    ( (This)->lpVtbl -> get_CurrentMedia(This,plMediaTypes) )
    ( (This)->lpVtbl -> Accept(This,lMediaTypes) )
    ( (This)->lpVtbl -> get_RemotePreferredSecurityLevel(This,enSecurityType,penSecurityLevel) )
    ( (This)->lpVtbl -> Reject(This) )
    ( (This)->lpVtbl -> get_State(This,pState) )
EXTERN_C const IID IID_IRTCReInviteEvent;
    typedef struct IRTCReInviteEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCReInviteEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCReInviteEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCReInviteEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCReInviteEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCReInviteEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCReInviteEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCReInviteEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCReInviteEvent * This,
                                __RPC__deref_out_opt IRTCSession2 **ppSession2);
                               HRESULT ( STDMETHODCALLTYPE *Accept )(
            __RPC__in IRTCReInviteEvent * This,
                       __RPC__in BSTR bstrContentType,
                       __RPC__in BSTR bstrSessionDescription);
                               HRESULT ( STDMETHODCALLTYPE *Reject )(
            __RPC__in IRTCReInviteEvent * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCReInviteEvent * This,
                                __RPC__out RTC_REINVITE_STATE *pState);
                               HRESULT ( STDMETHODCALLTYPE *GetRemoteSessionDescription )(
            __RPC__in IRTCReInviteEvent * This,
                        __RPC__deref_out_opt BSTR *pbstrContentType,
                        __RPC__deref_out_opt BSTR *pbstrSessionDescription);
        END_INTERFACE
    } IRTCReInviteEventVtbl;
    interface IRTCReInviteEvent
    {
        CONST_VTBL struct IRTCReInviteEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession2) )
    ( (This)->lpVtbl -> Accept(This,bstrContentType,bstrSessionDescription) )
    ( (This)->lpVtbl -> Reject(This) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> GetRemoteSessionDescription(This,pbstrContentType,pbstrSessionDescription) )
EXTERN_C const IID IID_IRTCPresencePropertyEvent;
    typedef struct IRTCPresencePropertyEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCPresencePropertyEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCPresencePropertyEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCPresencePropertyEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCPresencePropertyEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCPresencePropertyEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCPresencePropertyEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCPresencePropertyEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCPresencePropertyEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCPresencePropertyEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
                                        HRESULT ( STDMETHODCALLTYPE *get_PresenceProperty )(
            __RPC__in IRTCPresencePropertyEvent * This,
                                __RPC__out RTC_PRESENCE_PROPERTY *penPresProp);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IRTCPresencePropertyEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrValue);
        END_INTERFACE
    } IRTCPresencePropertyEventVtbl;
    interface IRTCPresencePropertyEvent
    {
        CONST_VTBL struct IRTCPresencePropertyEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
    ( (This)->lpVtbl -> get_PresenceProperty(This,penPresProp) )
    ( (This)->lpVtbl -> get_Value(This,pbstrValue) )
EXTERN_C const IID IID_IRTCPresenceDataEvent;
    typedef struct IRTCPresenceDataEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCPresenceDataEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCPresenceDataEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCPresenceDataEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCPresenceDataEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCPresenceDataEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCPresenceDataEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCPresenceDataEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCPresenceDataEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCPresenceDataEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
                               HRESULT ( STDMETHODCALLTYPE *GetPresenceData )(
            __RPC__in IRTCPresenceDataEvent * This,
                        __RPC__deref_out_opt BSTR *pbstrNamespace,
                        __RPC__deref_out_opt BSTR *pbstrData);
        END_INTERFACE
    } IRTCPresenceDataEventVtbl;
    interface IRTCPresenceDataEvent
    {
        CONST_VTBL struct IRTCPresenceDataEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
    ( (This)->lpVtbl -> GetPresenceData(This,pbstrNamespace,pbstrData) )
EXTERN_C const IID IID_IRTCPresenceStatusEvent;
    typedef struct IRTCPresenceStatusEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCPresenceStatusEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCPresenceStatusEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCPresenceStatusEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCPresenceStatusEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCPresenceStatusEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCPresenceStatusEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCPresenceStatusEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCPresenceStatusEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCPresenceStatusEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
                               HRESULT ( STDMETHODCALLTYPE *GetLocalPresenceInfo )(
            __RPC__in IRTCPresenceStatusEvent * This,
                        __RPC__out RTC_PRESENCE_STATUS *penStatus,
                        __RPC__deref_out_opt BSTR *pbstrNotes);
        END_INTERFACE
    } IRTCPresenceStatusEventVtbl;
    interface IRTCPresenceStatusEvent
    {
        CONST_VTBL struct IRTCPresenceStatusEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
    ( (This)->lpVtbl -> GetLocalPresenceInfo(This,penStatus,pbstrNotes) )
EXTERN_C const IID IID_IRTCCollection;
    typedef struct IRTCCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IRTCCollection * This,
                                __RPC__out long *lCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRTCCollection * This,
                       long Index,
                                __RPC__out VARIANT *pVariant);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRTCCollection * This,
                                __RPC__deref_out_opt IUnknown **ppNewEnum);
        END_INTERFACE
    } IRTCCollectionVtbl;
    interface IRTCCollection
    {
        CONST_VTBL struct IRTCCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get_Item(This,Index,pVariant) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
EXTERN_C const IID IID_IRTCEnumParticipants;
    typedef struct IRTCEnumParticipantsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumParticipants * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumParticipants * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumParticipants * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumParticipants * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCParticipant **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumParticipants * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumParticipants * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumParticipants * This,
                                __RPC__deref_out_opt IRTCEnumParticipants **ppEnum);
        END_INTERFACE
    } IRTCEnumParticipantsVtbl;
    interface IRTCEnumParticipants
    {
        CONST_VTBL struct IRTCEnumParticipantsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCEnumProfiles;
    typedef struct IRTCEnumProfilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumProfiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumProfiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumProfiles * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCProfile **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumProfiles * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumProfiles * This,
                                __RPC__deref_out_opt IRTCEnumProfiles **ppEnum);
        END_INTERFACE
    } IRTCEnumProfilesVtbl;
    interface IRTCEnumProfiles
    {
        CONST_VTBL struct IRTCEnumProfilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCEnumBuddies;
    typedef struct IRTCEnumBuddiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumBuddies * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumBuddies * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumBuddies * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumBuddies * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCBuddy **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumBuddies * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumBuddies * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumBuddies * This,
                                __RPC__deref_out_opt IRTCEnumBuddies **ppEnum);
        END_INTERFACE
    } IRTCEnumBuddiesVtbl;
    interface IRTCEnumBuddies
    {
        CONST_VTBL struct IRTCEnumBuddiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCEnumWatchers;
    typedef struct IRTCEnumWatchersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumWatchers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumWatchers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumWatchers * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumWatchers * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCWatcher **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumWatchers * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumWatchers * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumWatchers * This,
                                __RPC__deref_out_opt IRTCEnumWatchers **ppEnum);
        END_INTERFACE
    } IRTCEnumWatchersVtbl;
    interface IRTCEnumWatchers
    {
        CONST_VTBL struct IRTCEnumWatchersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCEnumGroups;
    typedef struct IRTCEnumGroupsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumGroups * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumGroups * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumGroups * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumGroups * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCBuddyGroup **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumGroups * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumGroups * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumGroups * This,
                                __RPC__deref_out_opt IRTCEnumGroups **ppEnum);
        END_INTERFACE
    } IRTCEnumGroupsVtbl;
    interface IRTCEnumGroups
    {
        CONST_VTBL struct IRTCEnumGroupsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCPresenceContact;
    typedef struct IRTCPresenceContactVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCPresenceContact * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCPresenceContact * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCPresenceContact * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresentityURI )(
            __RPC__in IRTCPresenceContact * This,
                                __RPC__deref_out_opt BSTR *pbstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_PresentityURI )(
            __RPC__in IRTCPresenceContact * This,
                       __RPC__in BSTR bstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCPresenceContact * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IRTCPresenceContact * This,
                       __RPC__in BSTR bstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IRTCPresenceContact * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IRTCPresenceContact * This,
                       __RPC__in BSTR bstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_Persistent )(
            __RPC__in IRTCPresenceContact * This,
                                __RPC__out VARIANT_BOOL *pfPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *put_Persistent )(
            __RPC__in IRTCPresenceContact * This,
                       VARIANT_BOOL fPersistent);
        END_INTERFACE
    } IRTCPresenceContactVtbl;
    interface IRTCPresenceContact
    {
        CONST_VTBL struct IRTCPresenceContactVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
    ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Data(This,pbstrData) )
    ( (This)->lpVtbl -> put_Data(This,bstrData) )
    ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
    ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
EXTERN_C const IID IID_IRTCBuddy;
    typedef struct IRTCBuddyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCBuddy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCBuddy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCBuddy * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresentityURI )(
            __RPC__in IRTCBuddy * This,
                                __RPC__deref_out_opt BSTR *pbstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_PresentityURI )(
            __RPC__in IRTCBuddy * This,
                       __RPC__in BSTR bstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCBuddy * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IRTCBuddy * This,
                       __RPC__in BSTR bstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IRTCBuddy * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IRTCBuddy * This,
                       __RPC__in BSTR bstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_Persistent )(
            __RPC__in IRTCBuddy * This,
                                __RPC__out VARIANT_BOOL *pfPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *put_Persistent )(
            __RPC__in IRTCBuddy * This,
                       VARIANT_BOOL fPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IRTCBuddy * This,
                                __RPC__out RTC_PRESENCE_STATUS *penStatus);
                                    HRESULT ( STDMETHODCALLTYPE *get_Notes )(
            __RPC__in IRTCBuddy * This,
                                __RPC__deref_out_opt BSTR *pbstrNotes);
        END_INTERFACE
    } IRTCBuddyVtbl;
    interface IRTCBuddy
    {
        CONST_VTBL struct IRTCBuddyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
    ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Data(This,pbstrData) )
    ( (This)->lpVtbl -> put_Data(This,bstrData) )
    ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
    ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
    ( (This)->lpVtbl -> get_Status(This,penStatus) )
    ( (This)->lpVtbl -> get_Notes(This,pbstrNotes) )
EXTERN_C const IID IID_IRTCBuddy2;
    typedef struct IRTCBuddy2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCBuddy2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCBuddy2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCBuddy2 * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresentityURI )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_PresentityURI )(
            __RPC__in IRTCBuddy2 * This,
                       __RPC__in BSTR bstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IRTCBuddy2 * This,
                       __RPC__in BSTR bstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IRTCBuddy2 * This,
                       __RPC__in BSTR bstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_Persistent )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__out VARIANT_BOOL *pfPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *put_Persistent )(
            __RPC__in IRTCBuddy2 * This,
                       VARIANT_BOOL fPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__out RTC_PRESENCE_STATUS *penStatus);
                                    HRESULT ( STDMETHODCALLTYPE *get_Notes )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt BSTR *pbstrNotes);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt IRTCProfile2 **ppProfile);
                           HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IRTCBuddy2 * This);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateGroups )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt IRTCEnumGroups **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresenceProperty )(
            __RPC__in IRTCBuddy2 * This,
                       RTC_PRESENCE_PROPERTY enProperty,
                                __RPC__deref_out_opt BSTR *pbstrProperty);
                           HRESULT ( STDMETHODCALLTYPE *EnumeratePresenceDevices )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt IRTCEnumPresenceDevices **ppEnumDevices);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresenceDevices )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__deref_out_opt IRTCCollection **ppDevicesCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_SubscriptionType )(
            __RPC__in IRTCBuddy2 * This,
                                __RPC__out RTC_BUDDY_SUBSCRIPTION_TYPE *penSubscriptionType);
        END_INTERFACE
    } IRTCBuddy2Vtbl;
    interface IRTCBuddy2
    {
        CONST_VTBL struct IRTCBuddy2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
    ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Data(This,pbstrData) )
    ( (This)->lpVtbl -> put_Data(This,bstrData) )
    ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
    ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
    ( (This)->lpVtbl -> get_Status(This,penStatus) )
    ( (This)->lpVtbl -> get_Notes(This,pbstrNotes) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> EnumerateGroups(This,ppEnum) )
    ( (This)->lpVtbl -> get_Groups(This,ppCollection) )
    ( (This)->lpVtbl -> get_PresenceProperty(This,enProperty,pbstrProperty) )
    ( (This)->lpVtbl -> EnumeratePresenceDevices(This,ppEnumDevices) )
    ( (This)->lpVtbl -> get_PresenceDevices(This,ppDevicesCollection) )
    ( (This)->lpVtbl -> get_SubscriptionType(This,penSubscriptionType) )
EXTERN_C const IID IID_IRTCWatcher;
    typedef struct IRTCWatcherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCWatcher * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCWatcher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCWatcher * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresentityURI )(
            __RPC__in IRTCWatcher * This,
                                __RPC__deref_out_opt BSTR *pbstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_PresentityURI )(
            __RPC__in IRTCWatcher * This,
                       __RPC__in BSTR bstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCWatcher * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IRTCWatcher * This,
                       __RPC__in BSTR bstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IRTCWatcher * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IRTCWatcher * This,
                       __RPC__in BSTR bstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_Persistent )(
            __RPC__in IRTCWatcher * This,
                                __RPC__out VARIANT_BOOL *pfPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *put_Persistent )(
            __RPC__in IRTCWatcher * This,
                       VARIANT_BOOL fPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCWatcher * This,
                                __RPC__out RTC_WATCHER_STATE *penState);
                                    HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in IRTCWatcher * This,
                       RTC_WATCHER_STATE enState);
        END_INTERFACE
    } IRTCWatcherVtbl;
    interface IRTCWatcher
    {
        CONST_VTBL struct IRTCWatcherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
    ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Data(This,pbstrData) )
    ( (This)->lpVtbl -> put_Data(This,bstrData) )
    ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
    ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> put_State(This,enState) )
EXTERN_C const IID IID_IRTCWatcher2;
    typedef struct IRTCWatcher2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCWatcher2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCWatcher2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCWatcher2 * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresentityURI )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *put_PresentityURI )(
            __RPC__in IRTCWatcher2 * This,
                       __RPC__in BSTR bstrPresentityURI);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                    HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IRTCWatcher2 * This,
                       __RPC__in BSTR bstrName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IRTCWatcher2 * This,
                       __RPC__in BSTR bstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_Persistent )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__out VARIANT_BOOL *pfPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *put_Persistent )(
            __RPC__in IRTCWatcher2 * This,
                       VARIANT_BOOL fPersistent);
                                    HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__out RTC_WATCHER_STATE *penState);
                                    HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in IRTCWatcher2 * This,
                       RTC_WATCHER_STATE enState);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__deref_out_opt IRTCProfile2 **ppProfile);
                                    HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in IRTCWatcher2 * This,
                                __RPC__out RTC_ACE_SCOPE *penScope);
        END_INTERFACE
    } IRTCWatcher2Vtbl;
    interface IRTCWatcher2
    {
        CONST_VTBL struct IRTCWatcher2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PresentityURI(This,pbstrPresentityURI) )
    ( (This)->lpVtbl -> put_PresentityURI(This,bstrPresentityURI) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Data(This,pbstrData) )
    ( (This)->lpVtbl -> put_Data(This,bstrData) )
    ( (This)->lpVtbl -> get_Persistent(This,pfPersistent) )
    ( (This)->lpVtbl -> put_Persistent(This,fPersistent) )
    ( (This)->lpVtbl -> get_State(This,penState) )
    ( (This)->lpVtbl -> put_State(This,enState) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_Scope(This,penScope) )
EXTERN_C const IID IID_IRTCBuddyGroup;
    typedef struct IRTCBuddyGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCBuddyGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCBuddyGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCBuddyGroup * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRTCBuddyGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrGroupName);
                                    HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IRTCBuddyGroup * This,
                       __RPC__in BSTR bstrGroupName);
                           HRESULT ( STDMETHODCALLTYPE *AddBuddy )(
            __RPC__in IRTCBuddyGroup * This,
                       __RPC__in_opt IRTCBuddy *pBuddy);
                           HRESULT ( STDMETHODCALLTYPE *RemoveBuddy )(
            __RPC__in IRTCBuddyGroup * This,
                       __RPC__in_opt IRTCBuddy *pBuddy);
                                   HRESULT ( STDMETHODCALLTYPE *EnumerateBuddies )(
            __RPC__in IRTCBuddyGroup * This,
                                __RPC__deref_out_opt IRTCEnumBuddies **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Buddies )(
            __RPC__in IRTCBuddyGroup * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                    HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IRTCBuddyGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
                                    HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IRTCBuddyGroup * This,
                       __RPC__in BSTR bstrData);
                                    HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCBuddyGroup * This,
                                __RPC__deref_out_opt IRTCProfile2 **ppProfile);
        END_INTERFACE
    } IRTCBuddyGroupVtbl;
    interface IRTCBuddyGroup
    {
        CONST_VTBL struct IRTCBuddyGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrGroupName) )
    ( (This)->lpVtbl -> put_Name(This,bstrGroupName) )
    ( (This)->lpVtbl -> AddBuddy(This,pBuddy) )
    ( (This)->lpVtbl -> RemoveBuddy(This,pBuddy) )
    ( (This)->lpVtbl -> EnumerateBuddies(This,ppEnum) )
    ( (This)->lpVtbl -> get_Buddies(This,ppCollection) )
    ( (This)->lpVtbl -> get_Data(This,pbstrData) )
    ( (This)->lpVtbl -> put_Data(This,bstrData) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
EXTERN_C const IID IID_IRTCEventNotification;
    typedef struct IRTCEventNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEventNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEventNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEventNotification * This);
                               HRESULT ( STDMETHODCALLTYPE *Event )(
            __RPC__in IRTCEventNotification * This,
                       RTC_EVENT RTCEvent,
                       __RPC__in_opt IDispatch *pEvent);
        END_INTERFACE
    } IRTCEventNotificationVtbl;
    interface IRTCEventNotification
    {
        CONST_VTBL struct IRTCEventNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Event(This,RTCEvent,pEvent) )
EXTERN_C const IID IID_IRTCPortManager;
    typedef struct IRTCPortManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCPortManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCPortManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCPortManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetMapping )(
            __RPC__in IRTCPortManager * This,
                       __RPC__in BSTR bstrRemoteAddress,
                       RTC_PORT_TYPE enPortType,
                            __RPC__deref_inout_opt BSTR *pbstrInternalLocalAddress,
                            __RPC__inout long *plInternalLocalPort,
                            __RPC__deref_inout_opt BSTR *pbstrExternalLocalAddress,
                            __RPC__inout long *plExternalLocalPort);
                               HRESULT ( STDMETHODCALLTYPE *UpdateRemoteAddress )(
            __RPC__in IRTCPortManager * This,
                       __RPC__in BSTR bstrRemoteAddress,
                       __RPC__in BSTR bstrInternalLocalAddress,
                       long lInternalLocalPort,
                       __RPC__in BSTR bstrExternalLocalAddress,
                       long lExternalLocalPort);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseMapping )(
            __RPC__in IRTCPortManager * This,
                       __RPC__in BSTR bstrInternalLocalAddress,
                       long lInternalLocalPort,
                       __RPC__in BSTR bstrExternalLocalAddress,
                       long lExternalLocalAddress);
        END_INTERFACE
    } IRTCPortManagerVtbl;
    interface IRTCPortManager
    {
        CONST_VTBL struct IRTCPortManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMapping(This,bstrRemoteAddress,enPortType,pbstrInternalLocalAddress,plInternalLocalPort,pbstrExternalLocalAddress,plExternalLocalPort) )
    ( (This)->lpVtbl -> UpdateRemoteAddress(This,bstrRemoteAddress,bstrInternalLocalAddress,lInternalLocalPort,bstrExternalLocalAddress,lExternalLocalPort) )
    ( (This)->lpVtbl -> ReleaseMapping(This,bstrInternalLocalAddress,lInternalLocalPort,bstrExternalLocalAddress,lExternalLocalAddress) )
EXTERN_C const IID IID_IRTCSessionPortManagement;
    typedef struct IRTCSessionPortManagementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionPortManagement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionPortManagement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionPortManagement * This);
        HRESULT ( STDMETHODCALLTYPE *SetPortManager )(
            __RPC__in IRTCSessionPortManagement * This,
                       __RPC__in_opt IRTCPortManager *pPortManager);
        END_INTERFACE
    } IRTCSessionPortManagementVtbl;
    interface IRTCSessionPortManagement
    {
        CONST_VTBL struct IRTCSessionPortManagementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPortManager(This,pPortManager) )
EXTERN_C const IID IID_IRTCClientPortManagement;
    typedef struct IRTCClientPortManagementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCClientPortManagement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCClientPortManagement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCClientPortManagement * This);
        HRESULT ( STDMETHODCALLTYPE *StartListenAddressAndPort )(
            __RPC__in IRTCClientPortManagement * This,
                       __RPC__in BSTR bstrInternalLocalAddress,
                       long lInternalLocalPort);
        HRESULT ( STDMETHODCALLTYPE *StopListenAddressAndPort )(
            __RPC__in IRTCClientPortManagement * This,
                       __RPC__in BSTR bstrInternalLocalAddress,
                       long lInternalLocalPort);
                           HRESULT ( STDMETHODCALLTYPE *GetPortRange )(
            __RPC__in IRTCClientPortManagement * This,
                       RTC_PORT_TYPE enPortType,
                        __RPC__out long *plMinValue,
                        __RPC__out long *plMaxValue);
        END_INTERFACE
    } IRTCClientPortManagementVtbl;
    interface IRTCClientPortManagement
    {
        CONST_VTBL struct IRTCClientPortManagementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartListenAddressAndPort(This,bstrInternalLocalAddress,lInternalLocalPort) )
    ( (This)->lpVtbl -> StopListenAddressAndPort(This,bstrInternalLocalAddress,lInternalLocalPort) )
    ( (This)->lpVtbl -> GetPortRange(This,enPortType,plMinValue,plMaxValue) )
EXTERN_C const IID IID_IRTCUserSearch;
    typedef struct IRTCUserSearchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCUserSearch * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCUserSearch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCUserSearch * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            __RPC__in IRTCUserSearch * This,
                                __RPC__deref_out_opt IRTCUserSearchQuery **ppQuery);
                           HRESULT ( STDMETHODCALLTYPE *ExecuteSearch )(
            __RPC__in IRTCUserSearch * This,
                       __RPC__in_opt IRTCUserSearchQuery *pQuery,
                       __RPC__in_opt IRTCProfile *pProfile,
                       LONG_PTR lCookie);
        END_INTERFACE
    } IRTCUserSearchVtbl;
    interface IRTCUserSearch
    {
        CONST_VTBL struct IRTCUserSearchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateQuery(This,ppQuery) )
    ( (This)->lpVtbl -> ExecuteSearch(This,pQuery,pProfile,lCookie) )
EXTERN_C const IID IID_IRTCUserSearchQuery;
    typedef struct IRTCUserSearchQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCUserSearchQuery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCUserSearchQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCUserSearchQuery * This);
                                    HRESULT ( STDMETHODCALLTYPE *put_SearchTerm )(
            __RPC__in IRTCUserSearchQuery * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_SearchTerm )(
            __RPC__in IRTCUserSearchQuery * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_SearchTerms )(
            __RPC__in IRTCUserSearchQuery * This,
                                __RPC__deref_out_opt BSTR *pbstrNames);
                                    HRESULT ( STDMETHODCALLTYPE *put_SearchPreference )(
            __RPC__in IRTCUserSearchQuery * This,
                       RTC_USER_SEARCH_PREFERENCE enPreference,
                       long lValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_SearchPreference )(
            __RPC__in IRTCUserSearchQuery * This,
                       RTC_USER_SEARCH_PREFERENCE enPreference,
                                __RPC__out long *plValue);
                                    HRESULT ( STDMETHODCALLTYPE *put_SearchDomain )(
            __RPC__in IRTCUserSearchQuery * This,
                       __RPC__in BSTR bstrDomain);
                                    HRESULT ( STDMETHODCALLTYPE *get_SearchDomain )(
            __RPC__in IRTCUserSearchQuery * This,
                                __RPC__deref_out_opt BSTR *pbstrDomain);
        END_INTERFACE
    } IRTCUserSearchQueryVtbl;
    interface IRTCUserSearchQuery
    {
        CONST_VTBL struct IRTCUserSearchQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_SearchTerm(This,bstrName,bstrValue) )
    ( (This)->lpVtbl -> get_SearchTerm(This,bstrName,pbstrValue) )
    ( (This)->lpVtbl -> get_SearchTerms(This,pbstrNames) )
    ( (This)->lpVtbl -> put_SearchPreference(This,enPreference,lValue) )
    ( (This)->lpVtbl -> get_SearchPreference(This,enPreference,plValue) )
    ( (This)->lpVtbl -> put_SearchDomain(This,bstrDomain) )
    ( (This)->lpVtbl -> get_SearchDomain(This,pbstrDomain) )
EXTERN_C const IID IID_IRTCUserSearchResult;
    typedef struct IRTCUserSearchResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCUserSearchResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCUserSearchResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCUserSearchResult * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IRTCUserSearchResult * This,
                       RTC_USER_SEARCH_COLUMN enColumn,
                                __RPC__deref_out_opt BSTR *pbstrValue);
        END_INTERFACE
    } IRTCUserSearchResultVtbl;
    interface IRTCUserSearchResult
    {
        CONST_VTBL struct IRTCUserSearchResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Value(This,enColumn,pbstrValue) )
EXTERN_C const IID IID_IRTCEnumUserSearchResults;
    typedef struct IRTCEnumUserSearchResultsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumUserSearchResults * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumUserSearchResults * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumUserSearchResults * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumUserSearchResults * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCUserSearchResult **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumUserSearchResults * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumUserSearchResults * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumUserSearchResults * This,
                                __RPC__deref_out_opt IRTCEnumUserSearchResults **ppEnum);
        END_INTERFACE
    } IRTCEnumUserSearchResultsVtbl;
    interface IRTCEnumUserSearchResults
    {
        CONST_VTBL struct IRTCEnumUserSearchResultsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCUserSearchResultsEvent;
    typedef struct IRTCUserSearchResultsEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCUserSearchResultsEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCUserSearchResultsEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCUserSearchResultsEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateResults )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__deref_out_opt IRTCEnumUserSearchResults **ppEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Results )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__deref_out_opt IRTCCollection **ppCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__deref_out_opt IRTCProfile2 **ppProfile);
                                        HRESULT ( STDMETHODCALLTYPE *get_Query )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__deref_out_opt IRTCUserSearchQuery **ppQuery);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cookie )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__out LONG_PTR *plCookie);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreAvailable )(
            __RPC__in IRTCUserSearchResultsEvent * This,
                                __RPC__out VARIANT_BOOL *pfMoreAvailable);
        END_INTERFACE
    } IRTCUserSearchResultsEventVtbl;
    interface IRTCUserSearchResultsEvent
    {
        CONST_VTBL struct IRTCUserSearchResultsEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EnumerateResults(This,ppEnum) )
    ( (This)->lpVtbl -> get_Results(This,ppCollection) )
    ( (This)->lpVtbl -> get_Profile(This,ppProfile) )
    ( (This)->lpVtbl -> get_Query(This,ppQuery) )
    ( (This)->lpVtbl -> get_Cookie(This,plCookie) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_MoreAvailable(This,pfMoreAvailable) )
EXTERN_C const IID IID_IRTCSessionReferStatusEvent;
    typedef struct IRTCSessionReferStatusEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionReferStatusEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionReferStatusEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCSessionReferStatusEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                                __RPC__deref_out_opt IRTCSession2 **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferStatus )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                                __RPC__out RTC_SESSION_REFER_STATUS *penReferStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                                __RPC__out long *plStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IRTCSessionReferStatusEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusText);
        END_INTERFACE
    } IRTCSessionReferStatusEventVtbl;
    interface IRTCSessionReferStatusEvent
    {
        CONST_VTBL struct IRTCSessionReferStatusEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_ReferStatus(This,penReferStatus) )
    ( (This)->lpVtbl -> get_StatusCode(This,plStatusCode) )
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) )
EXTERN_C const IID IID_IRTCSessionReferredEvent;
    typedef struct IRTCSessionReferredEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionReferredEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionReferredEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionReferredEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCSessionReferredEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCSessionReferredEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCSessionReferredEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCSessionReferredEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IRTCSessionReferredEvent * This,
                                __RPC__deref_out_opt IRTCSession2 **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferredByURI )(
            __RPC__in IRTCSessionReferredEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrReferredByURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferToURI )(
            __RPC__in IRTCSessionReferredEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrReferoURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferCookie )(
            __RPC__in IRTCSessionReferredEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrReferCookie);
                               HRESULT ( STDMETHODCALLTYPE *Accept )(
            __RPC__in IRTCSessionReferredEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *Reject )(
            __RPC__in IRTCSessionReferredEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *SetReferredSessionState )(
            __RPC__in IRTCSessionReferredEvent * This,
                       RTC_SESSION_STATE enState);
        END_INTERFACE
    } IRTCSessionReferredEventVtbl;
    interface IRTCSessionReferredEvent
    {
        CONST_VTBL struct IRTCSessionReferredEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_ReferredByURI(This,pbstrReferredByURI) )
    ( (This)->lpVtbl -> get_ReferToURI(This,pbstrReferoURI) )
    ( (This)->lpVtbl -> get_ReferCookie(This,pbstrReferCookie) )
    ( (This)->lpVtbl -> Accept(This) )
    ( (This)->lpVtbl -> Reject(This) )
    ( (This)->lpVtbl -> SetReferredSessionState(This,enState) )
EXTERN_C const IID IID_IRTCSessionDescriptionManager;
    typedef struct IRTCSessionDescriptionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCSessionDescriptionManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCSessionDescriptionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCSessionDescriptionManager * This);
                               HRESULT ( STDMETHODCALLTYPE *EvaluateSessionDescription )(
            __RPC__in IRTCSessionDescriptionManager * This,
                       __RPC__in BSTR bstrContentType,
                       __RPC__in BSTR bstrSessionDescription,
                            __RPC__inout VARIANT_BOOL *pfApplicationSession);
        END_INTERFACE
    } IRTCSessionDescriptionManagerVtbl;
    interface IRTCSessionDescriptionManager
    {
        CONST_VTBL struct IRTCSessionDescriptionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EvaluateSessionDescription(This,bstrContentType,bstrSessionDescription,pfApplicationSession) )
EXTERN_C const IID IID_IRTCEnumPresenceDevices;
    typedef struct IRTCEnumPresenceDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCEnumPresenceDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCEnumPresenceDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCEnumPresenceDevices * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IRTCEnumPresenceDevices * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) IRTCPresenceDevice **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRTCEnumPresenceDevices * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IRTCEnumPresenceDevices * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IRTCEnumPresenceDevices * This,
                                __RPC__deref_out_opt IRTCEnumPresenceDevices **ppEnum);
        END_INTERFACE
    } IRTCEnumPresenceDevicesVtbl;
    interface IRTCEnumPresenceDevices
    {
        CONST_VTBL struct IRTCEnumPresenceDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRTCPresenceDevice;
    typedef struct IRTCPresenceDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCPresenceDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCPresenceDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCPresenceDevice * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IRTCPresenceDevice * This,
                                __RPC__out RTC_PRESENCE_STATUS *penStatus);
                                    HRESULT ( STDMETHODCALLTYPE *get_Notes )(
            __RPC__in IRTCPresenceDevice * This,
                                __RPC__deref_out_opt BSTR *pbstrNotes);
                                    HRESULT ( STDMETHODCALLTYPE *get_PresenceProperty )(
            __RPC__in IRTCPresenceDevice * This,
                       RTC_PRESENCE_PROPERTY enProperty,
                                __RPC__deref_out_opt BSTR *pbstrProperty);
                           HRESULT ( STDMETHODCALLTYPE *GetPresenceData )(
            __RPC__in IRTCPresenceDevice * This,
                        __RPC__deref_out_opt BSTR *pbstrNamespace,
                        __RPC__deref_out_opt BSTR *pbstrData);
        END_INTERFACE
    } IRTCPresenceDeviceVtbl;
    interface IRTCPresenceDevice
    {
        CONST_VTBL struct IRTCPresenceDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Status(This,penStatus) )
    ( (This)->lpVtbl -> get_Notes(This,pbstrNotes) )
    ( (This)->lpVtbl -> get_PresenceProperty(This,enProperty,pbstrProperty) )
    ( (This)->lpVtbl -> GetPresenceData(This,pbstrNamespace,pbstrData) )
EXTERN_C const IID LIBID_RTCCORELib;
EXTERN_C const IID DIID_IRTCDispatchEventNotification;
    typedef struct IRTCDispatchEventNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRTCDispatchEventNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRTCDispatchEventNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRTCDispatchEventNotification * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRTCDispatchEventNotification * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRTCDispatchEventNotification * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRTCDispatchEventNotification * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRTCDispatchEventNotification * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IRTCDispatchEventNotificationVtbl;
    interface IRTCDispatchEventNotification
    {
        CONST_VTBL struct IRTCDispatchEventNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_RTCClient;
class DECLSPEC_UUID("7a42ea29-a2b7-40c4-b091-f6f024aa89be")
RTCClient;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rtccore_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rtccore_0000_0064_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
