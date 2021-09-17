#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITTAPI ITTAPI;
typedef interface ITTAPI2 ITTAPI2;
typedef interface ITMediaSupport ITMediaSupport;
typedef interface ITPluggableTerminalClassInfo ITPluggableTerminalClassInfo;
typedef interface ITPluggableTerminalSuperclassInfo ITPluggableTerminalSuperclassInfo;
typedef interface ITTerminalSupport ITTerminalSupport;
typedef interface ITTerminalSupport2 ITTerminalSupport2;
typedef interface ITAddress ITAddress;
typedef interface ITAddress2 ITAddress2;
typedef interface ITAddressCapabilities ITAddressCapabilities;
typedef interface ITPhone ITPhone;
typedef interface ITAutomatedPhoneControl ITAutomatedPhoneControl;
typedef interface ITBasicCallControl ITBasicCallControl;
typedef interface ITCallInfo ITCallInfo;
typedef interface ITCallInfo2 ITCallInfo2;
typedef interface ITTerminal ITTerminal;
typedef interface ITMultiTrackTerminal ITMultiTrackTerminal;
typedef interface ITFileTrack ITFileTrack;
typedef interface ITMediaPlayback ITMediaPlayback;
typedef interface ITMediaRecord ITMediaRecord;
typedef interface ITMediaControl ITMediaControl;
typedef interface ITBasicAudioTerminal ITBasicAudioTerminal;
typedef interface ITStaticAudioTerminal ITStaticAudioTerminal;
typedef interface ITCallHub ITCallHub;
typedef interface ITLegacyAddressMediaControl ITLegacyAddressMediaControl;
typedef interface ITPrivateEvent ITPrivateEvent;
typedef interface ITLegacyAddressMediaControl2 ITLegacyAddressMediaControl2;
typedef interface ITLegacyCallMediaControl ITLegacyCallMediaControl;
typedef interface ITLegacyCallMediaControl2 ITLegacyCallMediaControl2;
typedef interface ITDetectTone ITDetectTone;
typedef interface ITCustomTone ITCustomTone;
typedef interface IEnumPhone IEnumPhone;
typedef interface IEnumTerminal IEnumTerminal;
typedef interface IEnumTerminalClass IEnumTerminalClass;
typedef interface IEnumCall IEnumCall;
typedef interface IEnumAddress IEnumAddress;
typedef interface IEnumCallHub IEnumCallHub;
typedef interface IEnumBstr IEnumBstr;
typedef interface IEnumPluggableTerminalClassInfo IEnumPluggableTerminalClassInfo;
typedef interface IEnumPluggableSuperclassInfo IEnumPluggableSuperclassInfo;
typedef interface ITPhoneEvent ITPhoneEvent;
typedef interface ITCallStateEvent ITCallStateEvent;
typedef interface ITPhoneDeviceSpecificEvent ITPhoneDeviceSpecificEvent;
typedef interface ITCallMediaEvent ITCallMediaEvent;
typedef interface ITDigitDetectionEvent ITDigitDetectionEvent;
typedef interface ITDigitGenerationEvent ITDigitGenerationEvent;
typedef interface ITDigitsGatheredEvent ITDigitsGatheredEvent;
typedef interface ITToneDetectionEvent ITToneDetectionEvent;
typedef interface ITTAPIObjectEvent ITTAPIObjectEvent;
typedef interface ITTAPIObjectEvent2 ITTAPIObjectEvent2;
typedef interface ITTAPIEventNotification ITTAPIEventNotification;
typedef interface ITCallHubEvent ITCallHubEvent;
typedef interface ITAddressEvent ITAddressEvent;
typedef interface ITAddressDeviceSpecificEvent ITAddressDeviceSpecificEvent;
typedef interface ITFileTerminalEvent ITFileTerminalEvent;
typedef interface ITTTSTerminalEvent ITTTSTerminalEvent;
typedef interface ITASRTerminalEvent ITASRTerminalEvent;
typedef interface ITToneTerminalEvent ITToneTerminalEvent;
typedef interface ITQOSEvent ITQOSEvent;
typedef interface ITCallInfoChangeEvent ITCallInfoChangeEvent;
typedef interface ITRequest ITRequest;
typedef interface ITRequestEvent ITRequestEvent;
typedef interface ITCollection ITCollection;
typedef interface ITCollection2 ITCollection2;
typedef interface ITForwardInformation ITForwardInformation;
typedef interface ITForwardInformation2 ITForwardInformation2;
typedef interface ITAddressTranslation ITAddressTranslation;
typedef interface ITAddressTranslationInfo ITAddressTranslationInfo;
typedef interface ITLocationInfo ITLocationInfo;
typedef interface IEnumLocation IEnumLocation;
typedef interface ITCallingCard ITCallingCard;
typedef interface IEnumCallingCard IEnumCallingCard;
typedef interface ITCallNotificationEvent ITCallNotificationEvent;
typedef interface ITDispatchMapper ITDispatchMapper;
typedef interface ITStreamControl ITStreamControl;
typedef interface ITStream ITStream;
typedef interface IEnumStream IEnumStream;
typedef interface ITSubStreamControl ITSubStreamControl;
typedef interface ITSubStream ITSubStream;
typedef interface IEnumSubStream IEnumSubStream;
typedef interface ITLegacyWaveSupport ITLegacyWaveSupport;
typedef interface ITBasicCallControl2 ITBasicCallControl2;
typedef interface ITScriptableAudioFormat ITScriptableAudioFormat;
#include "oaidl.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef long TAPIHWND;
#endif
typedef long TAPIHWND;
typedef long TAPI_DIGITMODE;
typedef
enum TAPI_TONEMODE
    {
        TTM_RINGBACK = 0x2,
        TTM_BUSY = 0x4,
        TTM_BEEP = 0x8,
        TTM_BILLING = 0x10
    } TAPI_TONEMODE;
typedef
enum TAPI_GATHERTERM
    {
        TGT_BUFFERFULL = 0x1,
        TGT_TERMDIGIT = 0x2,
        TGT_FIRSTTIMEOUT = 0x4,
        TGT_INTERTIMEOUT = 0x8,
        TGT_CANCEL = 0x10
    } TAPI_GATHERTERM;
typedef struct TAPI_CUSTOMTONE
    {
    DWORD dwFrequency;
    DWORD dwCadenceOn;
    DWORD dwCadenceOff;
    DWORD dwVolume;
    } TAPI_CUSTOMTONE;
typedef struct TAPI_CUSTOMTONE *LPTAPI_CUSTOMTONE;
typedef struct TAPI_DETECTTONE
    {
    DWORD dwAppSpecific;
    DWORD dwDuration;
    DWORD dwFrequency1;
    DWORD dwFrequency2;
    DWORD dwFrequency3;
    } TAPI_DETECTTONE;
typedef struct TAPI_DETECTTONE *LPTAPI_DETECTTONE;
typedef
enum ADDRESS_EVENT
    {
        AE_STATE = 0,
        AE_CAPSCHANGE = ( AE_STATE + 1 ) ,
        AE_RINGING = ( AE_CAPSCHANGE + 1 ) ,
        AE_CONFIGCHANGE = ( AE_RINGING + 1 ) ,
        AE_FORWARD = ( AE_CONFIGCHANGE + 1 ) ,
        AE_NEWTERMINAL = ( AE_FORWARD + 1 ) ,
        AE_REMOVETERMINAL = ( AE_NEWTERMINAL + 1 ) ,
        AE_MSGWAITON = ( AE_REMOVETERMINAL + 1 ) ,
        AE_MSGWAITOFF = ( AE_MSGWAITON + 1 ) ,
        AE_LASTITEM = AE_MSGWAITOFF
    } ADDRESS_EVENT;
typedef
enum ADDRESS_STATE
    {
        AS_INSERVICE = 0,
        AS_OUTOFSERVICE = ( AS_INSERVICE + 1 )
    } ADDRESS_STATE;
typedef
enum CALL_STATE
    {
        CS_IDLE = 0,
        CS_INPROGRESS = ( CS_IDLE + 1 ) ,
        CS_CONNECTED = ( CS_INPROGRESS + 1 ) ,
        CS_DISCONNECTED = ( CS_CONNECTED + 1 ) ,
        CS_OFFERING = ( CS_DISCONNECTED + 1 ) ,
        CS_HOLD = ( CS_OFFERING + 1 ) ,
        CS_QUEUED = ( CS_HOLD + 1 ) ,
        CS_LASTITEM = CS_QUEUED
    } CALL_STATE;
typedef
enum CALL_STATE_EVENT_CAUSE
    {
        CEC_NONE = 0,
        CEC_DISCONNECT_NORMAL = ( CEC_NONE + 1 ) ,
        CEC_DISCONNECT_BUSY = ( CEC_DISCONNECT_NORMAL + 1 ) ,
        CEC_DISCONNECT_BADADDRESS = ( CEC_DISCONNECT_BUSY + 1 ) ,
        CEC_DISCONNECT_NOANSWER = ( CEC_DISCONNECT_BADADDRESS + 1 ) ,
        CEC_DISCONNECT_CANCELLED = ( CEC_DISCONNECT_NOANSWER + 1 ) ,
        CEC_DISCONNECT_REJECTED = ( CEC_DISCONNECT_CANCELLED + 1 ) ,
        CEC_DISCONNECT_FAILED = ( CEC_DISCONNECT_REJECTED + 1 ) ,
        CEC_DISCONNECT_BLOCKED = ( CEC_DISCONNECT_FAILED + 1 )
    } CALL_STATE_EVENT_CAUSE;
typedef
enum CALL_MEDIA_EVENT
    {
        CME_NEW_STREAM = 0,
        CME_STREAM_FAIL = ( CME_NEW_STREAM + 1 ) ,
        CME_TERMINAL_FAIL = ( CME_STREAM_FAIL + 1 ) ,
        CME_STREAM_NOT_USED = ( CME_TERMINAL_FAIL + 1 ) ,
        CME_STREAM_ACTIVE = ( CME_STREAM_NOT_USED + 1 ) ,
        CME_STREAM_INACTIVE = ( CME_STREAM_ACTIVE + 1 ) ,
        CME_LASTITEM = CME_STREAM_INACTIVE
    } CALL_MEDIA_EVENT;
typedef
enum CALL_MEDIA_EVENT_CAUSE
    {
        CMC_UNKNOWN = 0,
        CMC_BAD_DEVICE = ( CMC_UNKNOWN + 1 ) ,
        CMC_CONNECT_FAIL = ( CMC_BAD_DEVICE + 1 ) ,
        CMC_LOCAL_REQUEST = ( CMC_CONNECT_FAIL + 1 ) ,
        CMC_REMOTE_REQUEST = ( CMC_LOCAL_REQUEST + 1 ) ,
        CMC_MEDIA_TIMEOUT = ( CMC_REMOTE_REQUEST + 1 ) ,
        CMC_MEDIA_RECOVERED = ( CMC_MEDIA_TIMEOUT + 1 ) ,
        CMC_QUALITY_OF_SERVICE = ( CMC_MEDIA_RECOVERED + 1 )
    } CALL_MEDIA_EVENT_CAUSE;
typedef
enum DISCONNECT_CODE
    {
        DC_NORMAL = 0,
        DC_NOANSWER = ( DC_NORMAL + 1 ) ,
        DC_REJECTED = ( DC_NOANSWER + 1 )
    } DISCONNECT_CODE;
typedef
enum TERMINAL_STATE
    {
        TS_INUSE = 0,
        TS_NOTINUSE = ( TS_INUSE + 1 )
    } TERMINAL_STATE;
typedef
enum TERMINAL_DIRECTION
    {
        TD_CAPTURE = 0,
        TD_RENDER = ( TD_CAPTURE + 1 ) ,
        TD_BIDIRECTIONAL = ( TD_RENDER + 1 ) ,
        TD_MULTITRACK_MIXED = ( TD_BIDIRECTIONAL + 1 ) ,
        TD_NONE = ( TD_MULTITRACK_MIXED + 1 )
    } TERMINAL_DIRECTION;
typedef
enum TERMINAL_TYPE
    {
        TT_STATIC = 0,
        TT_DYNAMIC = ( TT_STATIC + 1 )
    } TERMINAL_TYPE;
typedef
enum CALL_PRIVILEGE
    {
        CP_OWNER = 0,
        CP_MONITOR = ( CP_OWNER + 1 )
    } CALL_PRIVILEGE;
typedef
enum TAPI_EVENT
    {
        TE_TAPIOBJECT = 0x1,
        TE_ADDRESS = 0x2,
        TE_CALLNOTIFICATION = 0x4,
        TE_CALLSTATE = 0x8,
        TE_CALLMEDIA = 0x10,
        TE_CALLHUB = 0x20,
        TE_CALLINFOCHANGE = 0x40,
        TE_PRIVATE = 0x80,
        TE_REQUEST = 0x100,
        TE_AGENT = 0x200,
        TE_AGENTSESSION = 0x400,
        TE_QOSEVENT = 0x800,
        TE_AGENTHANDLER = 0x1000,
        TE_ACDGROUP = 0x2000,
        TE_QUEUE = 0x4000,
        TE_DIGITEVENT = 0x8000,
        TE_GENERATEEVENT = 0x10000,
        TE_ASRTERMINAL = 0x20000,
        TE_TTSTERMINAL = 0x40000,
        TE_FILETERMINAL = 0x80000,
        TE_TONETERMINAL = 0x100000,
        TE_PHONEEVENT = 0x200000,
        TE_TONEEVENT = 0x400000,
        TE_GATHERDIGITS = 0x800000,
        TE_ADDRESSDEVSPECIFIC = 0x1000000,
        TE_PHONEDEVSPECIFIC = 0x2000000
    } TAPI_EVENT;
typedef
enum CALL_NOTIFICATION_EVENT
    {
        CNE_OWNER = 0,
        CNE_MONITOR = ( CNE_OWNER + 1 ) ,
        CNE_LASTITEM = CNE_MONITOR
    } CALL_NOTIFICATION_EVENT;
typedef
enum CALLHUB_EVENT
    {
        CHE_CALLJOIN = 0,
        CHE_CALLLEAVE = ( CHE_CALLJOIN + 1 ) ,
        CHE_CALLHUBNEW = ( CHE_CALLLEAVE + 1 ) ,
        CHE_CALLHUBIDLE = ( CHE_CALLHUBNEW + 1 ) ,
        CHE_LASTITEM = CHE_CALLHUBIDLE
    } CALLHUB_EVENT;
typedef
enum CALLHUB_STATE
    {
        CHS_ACTIVE = 0,
        CHS_IDLE = ( CHS_ACTIVE + 1 )
    } CALLHUB_STATE;
typedef
enum TAPIOBJECT_EVENT
    {
        TE_ADDRESSCREATE = 0,
        TE_ADDRESSREMOVE = ( TE_ADDRESSCREATE + 1 ) ,
        TE_REINIT = ( TE_ADDRESSREMOVE + 1 ) ,
        TE_TRANSLATECHANGE = ( TE_REINIT + 1 ) ,
        TE_ADDRESSCLOSE = ( TE_TRANSLATECHANGE + 1 ) ,
        TE_PHONECREATE = ( TE_ADDRESSCLOSE + 1 ) ,
        TE_PHONEREMOVE = ( TE_PHONECREATE + 1 )
    } TAPIOBJECT_EVENT;
typedef
enum TAPI_OBJECT_TYPE
    {
        TOT_NONE = 0,
        TOT_TAPI = ( TOT_NONE + 1 ) ,
        TOT_ADDRESS = ( TOT_TAPI + 1 ) ,
        TOT_TERMINAL = ( TOT_ADDRESS + 1 ) ,
        TOT_CALL = ( TOT_TERMINAL + 1 ) ,
        TOT_CALLHUB = ( TOT_CALL + 1 ) ,
        TOT_PHONE = ( TOT_CALLHUB + 1 )
    } TAPI_OBJECT_TYPE;
typedef
enum QOS_SERVICE_LEVEL
    {
        QSL_NEEDED = 1,
        QSL_IF_AVAILABLE = 2,
        QSL_BEST_EFFORT = 3
    } QOS_SERVICE_LEVEL;
typedef
enum QOS_EVENT
    {
        QE_NOQOS = 1,
        QE_ADMISSIONFAILURE = 2,
        QE_POLICYFAILURE = 3,
        QE_GENERICERROR = 4,
        QE_LASTITEM = QE_GENERICERROR
    } QOS_EVENT;
typedef
enum CALLINFOCHANGE_CAUSE
    {
        CIC_OTHER = 0,
        CIC_DEVSPECIFIC = ( CIC_OTHER + 1 ) ,
        CIC_BEARERMODE = ( CIC_DEVSPECIFIC + 1 ) ,
        CIC_RATE = ( CIC_BEARERMODE + 1 ) ,
        CIC_APPSPECIFIC = ( CIC_RATE + 1 ) ,
        CIC_CALLID = ( CIC_APPSPECIFIC + 1 ) ,
        CIC_RELATEDCALLID = ( CIC_CALLID + 1 ) ,
        CIC_ORIGIN = ( CIC_RELATEDCALLID + 1 ) ,
        CIC_REASON = ( CIC_ORIGIN + 1 ) ,
        CIC_COMPLETIONID = ( CIC_REASON + 1 ) ,
        CIC_NUMOWNERINCR = ( CIC_COMPLETIONID + 1 ) ,
        CIC_NUMOWNERDECR = ( CIC_NUMOWNERINCR + 1 ) ,
        CIC_NUMMONITORS = ( CIC_NUMOWNERDECR + 1 ) ,
        CIC_TRUNK = ( CIC_NUMMONITORS + 1 ) ,
        CIC_CALLERID = ( CIC_TRUNK + 1 ) ,
        CIC_CALLEDID = ( CIC_CALLERID + 1 ) ,
        CIC_CONNECTEDID = ( CIC_CALLEDID + 1 ) ,
        CIC_REDIRECTIONID = ( CIC_CONNECTEDID + 1 ) ,
        CIC_REDIRECTINGID = ( CIC_REDIRECTIONID + 1 ) ,
        CIC_USERUSERINFO = ( CIC_REDIRECTINGID + 1 ) ,
        CIC_HIGHLEVELCOMP = ( CIC_USERUSERINFO + 1 ) ,
        CIC_LOWLEVELCOMP = ( CIC_HIGHLEVELCOMP + 1 ) ,
        CIC_CHARGINGINFO = ( CIC_LOWLEVELCOMP + 1 ) ,
        CIC_TREATMENT = ( CIC_CHARGINGINFO + 1 ) ,
        CIC_CALLDATA = ( CIC_TREATMENT + 1 ) ,
        CIC_PRIVILEGE = ( CIC_CALLDATA + 1 ) ,
        CIC_MEDIATYPE = ( CIC_PRIVILEGE + 1 ) ,
        CIC_LASTITEM = CIC_MEDIATYPE
    } CALLINFOCHANGE_CAUSE;
typedef
enum CALLINFO_LONG
    {
        CIL_MEDIATYPESAVAILABLE = 0,
        CIL_BEARERMODE = ( CIL_MEDIATYPESAVAILABLE + 1 ) ,
        CIL_CALLERIDADDRESSTYPE = ( CIL_BEARERMODE + 1 ) ,
        CIL_CALLEDIDADDRESSTYPE = ( CIL_CALLERIDADDRESSTYPE + 1 ) ,
        CIL_CONNECTEDIDADDRESSTYPE = ( CIL_CALLEDIDADDRESSTYPE + 1 ) ,
        CIL_REDIRECTIONIDADDRESSTYPE = ( CIL_CONNECTEDIDADDRESSTYPE + 1 ) ,
        CIL_REDIRECTINGIDADDRESSTYPE = ( CIL_REDIRECTIONIDADDRESSTYPE + 1 ) ,
        CIL_ORIGIN = ( CIL_REDIRECTINGIDADDRESSTYPE + 1 ) ,
        CIL_REASON = ( CIL_ORIGIN + 1 ) ,
        CIL_APPSPECIFIC = ( CIL_REASON + 1 ) ,
        CIL_CALLPARAMSFLAGS = ( CIL_APPSPECIFIC + 1 ) ,
        CIL_CALLTREATMENT = ( CIL_CALLPARAMSFLAGS + 1 ) ,
        CIL_MINRATE = ( CIL_CALLTREATMENT + 1 ) ,
        CIL_MAXRATE = ( CIL_MINRATE + 1 ) ,
        CIL_COUNTRYCODE = ( CIL_MAXRATE + 1 ) ,
        CIL_CALLID = ( CIL_COUNTRYCODE + 1 ) ,
        CIL_RELATEDCALLID = ( CIL_CALLID + 1 ) ,
        CIL_COMPLETIONID = ( CIL_RELATEDCALLID + 1 ) ,
        CIL_NUMBEROFOWNERS = ( CIL_COMPLETIONID + 1 ) ,
        CIL_NUMBEROFMONITORS = ( CIL_NUMBEROFOWNERS + 1 ) ,
        CIL_TRUNK = ( CIL_NUMBEROFMONITORS + 1 ) ,
        CIL_RATE = ( CIL_TRUNK + 1 ) ,
        CIL_GENERATEDIGITDURATION = ( CIL_RATE + 1 ) ,
        CIL_MONITORDIGITMODES = ( CIL_GENERATEDIGITDURATION + 1 ) ,
        CIL_MONITORMEDIAMODES = ( CIL_MONITORDIGITMODES + 1 )
    } CALLINFO_LONG;
typedef
enum CALLINFO_STRING
    {
        CIS_CALLERIDNAME = 0,
        CIS_CALLERIDNUMBER = ( CIS_CALLERIDNAME + 1 ) ,
        CIS_CALLEDIDNAME = ( CIS_CALLERIDNUMBER + 1 ) ,
        CIS_CALLEDIDNUMBER = ( CIS_CALLEDIDNAME + 1 ) ,
        CIS_CONNECTEDIDNAME = ( CIS_CALLEDIDNUMBER + 1 ) ,
        CIS_CONNECTEDIDNUMBER = ( CIS_CONNECTEDIDNAME + 1 ) ,
        CIS_REDIRECTIONIDNAME = ( CIS_CONNECTEDIDNUMBER + 1 ) ,
        CIS_REDIRECTIONIDNUMBER = ( CIS_REDIRECTIONIDNAME + 1 ) ,
        CIS_REDIRECTINGIDNAME = ( CIS_REDIRECTIONIDNUMBER + 1 ) ,
        CIS_REDIRECTINGIDNUMBER = ( CIS_REDIRECTINGIDNAME + 1 ) ,
        CIS_CALLEDPARTYFRIENDLYNAME = ( CIS_REDIRECTINGIDNUMBER + 1 ) ,
        CIS_COMMENT = ( CIS_CALLEDPARTYFRIENDLYNAME + 1 ) ,
        CIS_DISPLAYABLEADDRESS = ( CIS_COMMENT + 1 ) ,
        CIS_CALLINGPARTYID = ( CIS_DISPLAYABLEADDRESS + 1 )
    } CALLINFO_STRING;
typedef
enum CALLINFO_BUFFER
    {
        CIB_USERUSERINFO = 0,
        CIB_DEVSPECIFICBUFFER = ( CIB_USERUSERINFO + 1 ) ,
        CIB_CALLDATABUFFER = ( CIB_DEVSPECIFICBUFFER + 1 ) ,
        CIB_CHARGINGINFOBUFFER = ( CIB_CALLDATABUFFER + 1 ) ,
        CIB_HIGHLEVELCOMPATIBILITYBUFFER = ( CIB_CHARGINGINFOBUFFER + 1 ) ,
        CIB_LOWLEVELCOMPATIBILITYBUFFER = ( CIB_HIGHLEVELCOMPATIBILITYBUFFER + 1 )
    } CALLINFO_BUFFER;
typedef
enum ADDRESS_CAPABILITY
    {
        AC_ADDRESSTYPES = 0,
        AC_BEARERMODES = ( AC_ADDRESSTYPES + 1 ) ,
        AC_MAXACTIVECALLS = ( AC_BEARERMODES + 1 ) ,
        AC_MAXONHOLDCALLS = ( AC_MAXACTIVECALLS + 1 ) ,
        AC_MAXONHOLDPENDINGCALLS = ( AC_MAXONHOLDCALLS + 1 ) ,
        AC_MAXNUMCONFERENCE = ( AC_MAXONHOLDPENDINGCALLS + 1 ) ,
        AC_MAXNUMTRANSCONF = ( AC_MAXNUMCONFERENCE + 1 ) ,
        AC_MONITORDIGITSUPPORT = ( AC_MAXNUMTRANSCONF + 1 ) ,
        AC_GENERATEDIGITSUPPORT = ( AC_MONITORDIGITSUPPORT + 1 ) ,
        AC_GENERATETONEMODES = ( AC_GENERATEDIGITSUPPORT + 1 ) ,
        AC_GENERATETONEMAXNUMFREQ = ( AC_GENERATETONEMODES + 1 ) ,
        AC_MONITORTONEMAXNUMFREQ = ( AC_GENERATETONEMAXNUMFREQ + 1 ) ,
        AC_MONITORTONEMAXNUMENTRIES = ( AC_MONITORTONEMAXNUMFREQ + 1 ) ,
        AC_DEVCAPFLAGS = ( AC_MONITORTONEMAXNUMENTRIES + 1 ) ,
        AC_ANSWERMODES = ( AC_DEVCAPFLAGS + 1 ) ,
        AC_LINEFEATURES = ( AC_ANSWERMODES + 1 ) ,
        AC_SETTABLEDEVSTATUS = ( AC_LINEFEATURES + 1 ) ,
        AC_PARKSUPPORT = ( AC_SETTABLEDEVSTATUS + 1 ) ,
        AC_CALLERIDSUPPORT = ( AC_PARKSUPPORT + 1 ) ,
        AC_CALLEDIDSUPPORT = ( AC_CALLERIDSUPPORT + 1 ) ,
        AC_CONNECTEDIDSUPPORT = ( AC_CALLEDIDSUPPORT + 1 ) ,
        AC_REDIRECTIONIDSUPPORT = ( AC_CONNECTEDIDSUPPORT + 1 ) ,
        AC_REDIRECTINGIDSUPPORT = ( AC_REDIRECTIONIDSUPPORT + 1 ) ,
        AC_ADDRESSCAPFLAGS = ( AC_REDIRECTINGIDSUPPORT + 1 ) ,
        AC_CALLFEATURES1 = ( AC_ADDRESSCAPFLAGS + 1 ) ,
        AC_CALLFEATURES2 = ( AC_CALLFEATURES1 + 1 ) ,
        AC_REMOVEFROMCONFCAPS = ( AC_CALLFEATURES2 + 1 ) ,
        AC_REMOVEFROMCONFSTATE = ( AC_REMOVEFROMCONFCAPS + 1 ) ,
        AC_TRANSFERMODES = ( AC_REMOVEFROMCONFSTATE + 1 ) ,
        AC_ADDRESSFEATURES = ( AC_TRANSFERMODES + 1 ) ,
        AC_PREDICTIVEAUTOTRANSFERSTATES = ( AC_ADDRESSFEATURES + 1 ) ,
        AC_MAXCALLDATASIZE = ( AC_PREDICTIVEAUTOTRANSFERSTATES + 1 ) ,
        AC_LINEID = ( AC_MAXCALLDATASIZE + 1 ) ,
        AC_ADDRESSID = ( AC_LINEID + 1 ) ,
        AC_FORWARDMODES = ( AC_ADDRESSID + 1 ) ,
        AC_MAXFORWARDENTRIES = ( AC_FORWARDMODES + 1 ) ,
        AC_MAXSPECIFICENTRIES = ( AC_MAXFORWARDENTRIES + 1 ) ,
        AC_MINFWDNUMRINGS = ( AC_MAXSPECIFICENTRIES + 1 ) ,
        AC_MAXFWDNUMRINGS = ( AC_MINFWDNUMRINGS + 1 ) ,
        AC_MAXCALLCOMPLETIONS = ( AC_MAXFWDNUMRINGS + 1 ) ,
        AC_CALLCOMPLETIONCONDITIONS = ( AC_MAXCALLCOMPLETIONS + 1 ) ,
        AC_CALLCOMPLETIONMODES = ( AC_CALLCOMPLETIONCONDITIONS + 1 ) ,
        AC_PERMANENTDEVICEID = ( AC_CALLCOMPLETIONMODES + 1 ) ,
        AC_GATHERDIGITSMINTIMEOUT = ( AC_PERMANENTDEVICEID + 1 ) ,
        AC_GATHERDIGITSMAXTIMEOUT = ( AC_GATHERDIGITSMINTIMEOUT + 1 ) ,
        AC_GENERATEDIGITMINDURATION = ( AC_GATHERDIGITSMAXTIMEOUT + 1 ) ,
        AC_GENERATEDIGITMAXDURATION = ( AC_GENERATEDIGITMINDURATION + 1 ) ,
        AC_GENERATEDIGITDEFAULTDURATION = ( AC_GENERATEDIGITMAXDURATION + 1 )
    } ADDRESS_CAPABILITY;
typedef
enum ADDRESS_CAPABILITY_STRING
    {
        ACS_PROTOCOL = 0,
        ACS_ADDRESSDEVICESPECIFIC = ( ACS_PROTOCOL + 1 ) ,
        ACS_LINEDEVICESPECIFIC = ( ACS_ADDRESSDEVICESPECIFIC + 1 ) ,
        ACS_PROVIDERSPECIFIC = ( ACS_LINEDEVICESPECIFIC + 1 ) ,
        ACS_SWITCHSPECIFIC = ( ACS_PROVIDERSPECIFIC + 1 ) ,
        ACS_PERMANENTDEVICEGUID = ( ACS_SWITCHSPECIFIC + 1 )
    } ADDRESS_CAPABILITY_STRING;
typedef
enum FULLDUPLEX_SUPPORT
    {
        FDS_SUPPORTED = 0,
        FDS_NOTSUPPORTED = ( FDS_SUPPORTED + 1 ) ,
        FDS_UNKNOWN = ( FDS_NOTSUPPORTED + 1 )
    } FULLDUPLEX_SUPPORT;
typedef
enum FINISH_MODE
    {
        FM_ASTRANSFER = 0,
        FM_ASCONFERENCE = ( FM_ASTRANSFER + 1 )
    } FINISH_MODE;
typedef
enum PHONE_PRIVILEGE
    {
        PP_OWNER = 0,
        PP_MONITOR = ( PP_OWNER + 1 )
    } PHONE_PRIVILEGE;
typedef
enum PHONE_HOOK_SWITCH_DEVICE
    {
        PHSD_HANDSET = 0x1,
        PHSD_SPEAKERPHONE = 0x2,
        PHSD_HEADSET = 0x4
    } PHONE_HOOK_SWITCH_DEVICE;
typedef
enum PHONE_HOOK_SWITCH_STATE
    {
        PHSS_ONHOOK = 0x1,
        PHSS_OFFHOOK_MIC_ONLY = 0x2,
        PHSS_OFFHOOK_SPEAKER_ONLY = 0x4,
        PHSS_OFFHOOK = 0x8
    } PHONE_HOOK_SWITCH_STATE;
typedef
enum PHONE_LAMP_MODE
    {
        LM_DUMMY = 0x1,
        LM_OFF = 0x2,
        LM_STEADY = 0x4,
        LM_WINK = 0x8,
        LM_FLASH = 0x10,
        LM_FLUTTER = 0x20,
        LM_BROKENFLUTTER = 0x40,
        LM_UNKNOWN = 0x80
    } PHONE_LAMP_MODE;
typedef
enum PHONECAPS_LONG
    {
        PCL_HOOKSWITCHES = 0,
        PCL_HANDSETHOOKSWITCHMODES = ( PCL_HOOKSWITCHES + 1 ) ,
        PCL_HEADSETHOOKSWITCHMODES = ( PCL_HANDSETHOOKSWITCHMODES + 1 ) ,
        PCL_SPEAKERPHONEHOOKSWITCHMODES = ( PCL_HEADSETHOOKSWITCHMODES + 1 ) ,
        PCL_DISPLAYNUMROWS = ( PCL_SPEAKERPHONEHOOKSWITCHMODES + 1 ) ,
        PCL_DISPLAYNUMCOLUMNS = ( PCL_DISPLAYNUMROWS + 1 ) ,
        PCL_NUMRINGMODES = ( PCL_DISPLAYNUMCOLUMNS + 1 ) ,
        PCL_NUMBUTTONLAMPS = ( PCL_NUMRINGMODES + 1 ) ,
        PCL_GENERICPHONE = ( PCL_NUMBUTTONLAMPS + 1 )
    } PHONECAPS_LONG;
typedef
enum PHONECAPS_STRING
    {
        PCS_PHONENAME = 0,
        PCS_PHONEINFO = ( PCS_PHONENAME + 1 ) ,
        PCS_PROVIDERINFO = ( PCS_PHONEINFO + 1 )
    } PHONECAPS_STRING;
typedef
enum PHONECAPS_BUFFER
    {
        PCB_DEVSPECIFICBUFFER = 0
    } PHONECAPS_BUFFER;
typedef
enum PHONE_BUTTON_STATE
    {
        PBS_UP = 0x1,
        PBS_DOWN = 0x2,
        PBS_UNKNOWN = 0x4,
        PBS_UNAVAIL = 0x8
    } PHONE_BUTTON_STATE;
typedef
enum PHONE_BUTTON_MODE
    {
        PBM_DUMMY = 0,
        PBM_CALL = ( PBM_DUMMY + 1 ) ,
        PBM_FEATURE = ( PBM_CALL + 1 ) ,
        PBM_KEYPAD = ( PBM_FEATURE + 1 ) ,
        PBM_LOCAL = ( PBM_KEYPAD + 1 ) ,
        PBM_DISPLAY = ( PBM_LOCAL + 1 )
    } PHONE_BUTTON_MODE;
typedef
enum PHONE_BUTTON_FUNCTION
    {
        PBF_UNKNOWN = 0,
        PBF_CONFERENCE = ( PBF_UNKNOWN + 1 ) ,
        PBF_TRANSFER = ( PBF_CONFERENCE + 1 ) ,
        PBF_DROP = ( PBF_TRANSFER + 1 ) ,
        PBF_HOLD = ( PBF_DROP + 1 ) ,
        PBF_RECALL = ( PBF_HOLD + 1 ) ,
        PBF_DISCONNECT = ( PBF_RECALL + 1 ) ,
        PBF_CONNECT = ( PBF_DISCONNECT + 1 ) ,
        PBF_MSGWAITON = ( PBF_CONNECT + 1 ) ,
        PBF_MSGWAITOFF = ( PBF_MSGWAITON + 1 ) ,
        PBF_SELECTRING = ( PBF_MSGWAITOFF + 1 ) ,
        PBF_ABBREVDIAL = ( PBF_SELECTRING + 1 ) ,
        PBF_FORWARD = ( PBF_ABBREVDIAL + 1 ) ,
        PBF_PICKUP = ( PBF_FORWARD + 1 ) ,
        PBF_RINGAGAIN = ( PBF_PICKUP + 1 ) ,
        PBF_PARK = ( PBF_RINGAGAIN + 1 ) ,
        PBF_REJECT = ( PBF_PARK + 1 ) ,
        PBF_REDIRECT = ( PBF_REJECT + 1 ) ,
        PBF_MUTE = ( PBF_REDIRECT + 1 ) ,
        PBF_VOLUMEUP = ( PBF_MUTE + 1 ) ,
        PBF_VOLUMEDOWN = ( PBF_VOLUMEUP + 1 ) ,
        PBF_SPEAKERON = ( PBF_VOLUMEDOWN + 1 ) ,
        PBF_SPEAKEROFF = ( PBF_SPEAKERON + 1 ) ,
        PBF_FLASH = ( PBF_SPEAKEROFF + 1 ) ,
        PBF_DATAON = ( PBF_FLASH + 1 ) ,
        PBF_DATAOFF = ( PBF_DATAON + 1 ) ,
        PBF_DONOTDISTURB = ( PBF_DATAOFF + 1 ) ,
        PBF_INTERCOM = ( PBF_DONOTDISTURB + 1 ) ,
        PBF_BRIDGEDAPP = ( PBF_INTERCOM + 1 ) ,
        PBF_BUSY = ( PBF_BRIDGEDAPP + 1 ) ,
        PBF_CALLAPP = ( PBF_BUSY + 1 ) ,
        PBF_DATETIME = ( PBF_CALLAPP + 1 ) ,
        PBF_DIRECTORY = ( PBF_DATETIME + 1 ) ,
        PBF_COVER = ( PBF_DIRECTORY + 1 ) ,
        PBF_CALLID = ( PBF_COVER + 1 ) ,
        PBF_LASTNUM = ( PBF_CALLID + 1 ) ,
        PBF_NIGHTSRV = ( PBF_LASTNUM + 1 ) ,
        PBF_SENDCALLS = ( PBF_NIGHTSRV + 1 ) ,
        PBF_MSGINDICATOR = ( PBF_SENDCALLS + 1 ) ,
        PBF_REPDIAL = ( PBF_MSGINDICATOR + 1 ) ,
        PBF_SETREPDIAL = ( PBF_REPDIAL + 1 ) ,
        PBF_SYSTEMSPEED = ( PBF_SETREPDIAL + 1 ) ,
        PBF_STATIONSPEED = ( PBF_SYSTEMSPEED + 1 ) ,
        PBF_CAMPON = ( PBF_STATIONSPEED + 1 ) ,
        PBF_SAVEREPEAT = ( PBF_CAMPON + 1 ) ,
        PBF_QUEUECALL = ( PBF_SAVEREPEAT + 1 ) ,
        PBF_NONE = ( PBF_QUEUECALL + 1 ) ,
        PBF_SEND = ( PBF_NONE + 1 )
    } PHONE_BUTTON_FUNCTION;
typedef
enum PHONE_TONE
    {
        PT_KEYPADZERO = 0,
        PT_KEYPADONE = ( PT_KEYPADZERO + 1 ) ,
        PT_KEYPADTWO = ( PT_KEYPADONE + 1 ) ,
        PT_KEYPADTHREE = ( PT_KEYPADTWO + 1 ) ,
        PT_KEYPADFOUR = ( PT_KEYPADTHREE + 1 ) ,
        PT_KEYPADFIVE = ( PT_KEYPADFOUR + 1 ) ,
        PT_KEYPADSIX = ( PT_KEYPADFIVE + 1 ) ,
        PT_KEYPADSEVEN = ( PT_KEYPADSIX + 1 ) ,
        PT_KEYPADEIGHT = ( PT_KEYPADSEVEN + 1 ) ,
        PT_KEYPADNINE = ( PT_KEYPADEIGHT + 1 ) ,
        PT_KEYPADSTAR = ( PT_KEYPADNINE + 1 ) ,
        PT_KEYPADPOUND = ( PT_KEYPADSTAR + 1 ) ,
        PT_KEYPADA = ( PT_KEYPADPOUND + 1 ) ,
        PT_KEYPADB = ( PT_KEYPADA + 1 ) ,
        PT_KEYPADC = ( PT_KEYPADB + 1 ) ,
        PT_KEYPADD = ( PT_KEYPADC + 1 ) ,
        PT_NORMALDIALTONE = ( PT_KEYPADD + 1 ) ,
        PT_EXTERNALDIALTONE = ( PT_NORMALDIALTONE + 1 ) ,
        PT_BUSY = ( PT_EXTERNALDIALTONE + 1 ) ,
        PT_RINGBACK = ( PT_BUSY + 1 ) ,
        PT_ERRORTONE = ( PT_RINGBACK + 1 ) ,
        PT_SILENCE = ( PT_ERRORTONE + 1 )
    } PHONE_TONE;
typedef
enum PHONE_EVENT
    {
        PE_DISPLAY = 0,
        PE_LAMPMODE = ( PE_DISPLAY + 1 ) ,
        PE_RINGMODE = ( PE_LAMPMODE + 1 ) ,
        PE_RINGVOLUME = ( PE_RINGMODE + 1 ) ,
        PE_HOOKSWITCH = ( PE_RINGVOLUME + 1 ) ,
        PE_CAPSCHANGE = ( PE_HOOKSWITCH + 1 ) ,
        PE_BUTTON = ( PE_CAPSCHANGE + 1 ) ,
        PE_CLOSE = ( PE_BUTTON + 1 ) ,
        PE_NUMBERGATHERED = ( PE_CLOSE + 1 ) ,
        PE_DIALING = ( PE_NUMBERGATHERED + 1 ) ,
        PE_ANSWER = ( PE_DIALING + 1 ) ,
        PE_DISCONNECT = ( PE_ANSWER + 1 ) ,
        PE_LASTITEM = PE_DISCONNECT
    } PHONE_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITTAPI;
    typedef struct ITTAPIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPI * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPI * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTAPI * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTAPI * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTAPI * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTAPI * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITTAPI * This);
                               HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in ITTAPI * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Addresses )(
            __RPC__in ITTAPI * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateAddresses )(
            __RPC__in ITTAPI * This,
                                __RPC__deref_out_opt IEnumAddress **ppEnumAddress);
                               HRESULT ( STDMETHODCALLTYPE *RegisterCallNotifications )(
            __RPC__in ITTAPI * This,
                       __RPC__in_opt ITAddress *pAddress,
                       VARIANT_BOOL fMonitor,
                       VARIANT_BOOL fOwner,
                       long lMediaTypes,
                       long lCallbackInstance,
                                __RPC__out long *plRegister);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterNotifications )(
            __RPC__in ITTAPI * This,
                       long lRegister);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHubs )(
            __RPC__in ITTAPI * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateCallHubs )(
            __RPC__in ITTAPI * This,
                                __RPC__deref_out_opt IEnumCallHub **ppEnumCallHub);
                               HRESULT ( STDMETHODCALLTYPE *SetCallHubTracking )(
            __RPC__in ITTAPI * This,
                       VARIANT pAddresses,
                       VARIANT_BOOL bTracking);
                           HRESULT ( STDMETHODCALLTYPE *EnumeratePrivateTAPIObjects )(
            __RPC__in ITTAPI * This,
                        __RPC__deref_out_opt IEnumUnknown **ppEnumUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateTAPIObjects )(
            __RPC__in ITTAPI * This,
                                __RPC__out VARIANT *pVariant);
                               HRESULT ( STDMETHODCALLTYPE *RegisterRequestRecipient )(
            __RPC__in ITTAPI * This,
                       long lRegistrationInstance,
                       long lRequestMode,
                       VARIANT_BOOL fEnable);
                               HRESULT ( STDMETHODCALLTYPE *SetAssistedTelephonyPriority )(
            __RPC__in ITTAPI * This,
                       __RPC__in BSTR pAppFilename,
                       VARIANT_BOOL fPriority);
                               HRESULT ( STDMETHODCALLTYPE *SetApplicationPriority )(
            __RPC__in ITTAPI * This,
                       __RPC__in BSTR pAppFilename,
                       long lMediaType,
                       VARIANT_BOOL fPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventFilter )(
            __RPC__in ITTAPI * This,
                       long lFilterMask);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventFilter )(
            __RPC__in ITTAPI * This,
                                __RPC__out long *plFilterMask);
        END_INTERFACE
    } ITTAPIVtbl;
    interface ITTAPI
    {
        CONST_VTBL struct ITTAPIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> get_Addresses(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddress) )
    ( (This)->lpVtbl -> RegisterCallNotifications(This,pAddress,fMonitor,fOwner,lMediaTypes,lCallbackInstance,plRegister) )
    ( (This)->lpVtbl -> UnregisterNotifications(This,lRegister) )
    ( (This)->lpVtbl -> get_CallHubs(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCallHubs(This,ppEnumCallHub) )
    ( (This)->lpVtbl -> SetCallHubTracking(This,pAddresses,bTracking) )
    ( (This)->lpVtbl -> EnumeratePrivateTAPIObjects(This,ppEnumUnknown) )
    ( (This)->lpVtbl -> get_PrivateTAPIObjects(This,pVariant) )
    ( (This)->lpVtbl -> RegisterRequestRecipient(This,lRegistrationInstance,lRequestMode,fEnable) )
    ( (This)->lpVtbl -> SetAssistedTelephonyPriority(This,pAppFilename,fPriority) )
    ( (This)->lpVtbl -> SetApplicationPriority(This,pAppFilename,lMediaType,fPriority) )
    ( (This)->lpVtbl -> put_EventFilter(This,lFilterMask) )
    ( (This)->lpVtbl -> get_EventFilter(This,plFilterMask) )
EXTERN_C const IID IID_ITTAPI2;
    typedef struct ITTAPI2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPI2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPI2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPI2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTAPI2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTAPI2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTAPI2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTAPI2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITTAPI2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in ITTAPI2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Addresses )(
            __RPC__in ITTAPI2 * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateAddresses )(
            __RPC__in ITTAPI2 * This,
                                __RPC__deref_out_opt IEnumAddress **ppEnumAddress);
                               HRESULT ( STDMETHODCALLTYPE *RegisterCallNotifications )(
            __RPC__in ITTAPI2 * This,
                       __RPC__in_opt ITAddress *pAddress,
                       VARIANT_BOOL fMonitor,
                       VARIANT_BOOL fOwner,
                       long lMediaTypes,
                       long lCallbackInstance,
                                __RPC__out long *plRegister);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterNotifications )(
            __RPC__in ITTAPI2 * This,
                       long lRegister);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHubs )(
            __RPC__in ITTAPI2 * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateCallHubs )(
            __RPC__in ITTAPI2 * This,
                                __RPC__deref_out_opt IEnumCallHub **ppEnumCallHub);
                               HRESULT ( STDMETHODCALLTYPE *SetCallHubTracking )(
            __RPC__in ITTAPI2 * This,
                       VARIANT pAddresses,
                       VARIANT_BOOL bTracking);
                           HRESULT ( STDMETHODCALLTYPE *EnumeratePrivateTAPIObjects )(
            __RPC__in ITTAPI2 * This,
                        __RPC__deref_out_opt IEnumUnknown **ppEnumUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrivateTAPIObjects )(
            __RPC__in ITTAPI2 * This,
                                __RPC__out VARIANT *pVariant);
                               HRESULT ( STDMETHODCALLTYPE *RegisterRequestRecipient )(
            __RPC__in ITTAPI2 * This,
                       long lRegistrationInstance,
                       long lRequestMode,
                       VARIANT_BOOL fEnable);
                               HRESULT ( STDMETHODCALLTYPE *SetAssistedTelephonyPriority )(
            __RPC__in ITTAPI2 * This,
                       __RPC__in BSTR pAppFilename,
                       VARIANT_BOOL fPriority);
                               HRESULT ( STDMETHODCALLTYPE *SetApplicationPriority )(
            __RPC__in ITTAPI2 * This,
                       __RPC__in BSTR pAppFilename,
                       long lMediaType,
                       VARIANT_BOOL fPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventFilter )(
            __RPC__in ITTAPI2 * This,
                       long lFilterMask);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventFilter )(
            __RPC__in ITTAPI2 * This,
                                __RPC__out long *plFilterMask);
                                        HRESULT ( STDMETHODCALLTYPE *get_Phones )(
            __RPC__in ITTAPI2 * This,
                                __RPC__out VARIANT *pPhones);
                                       HRESULT ( STDMETHODCALLTYPE *EnumeratePhones )(
            __RPC__in ITTAPI2 * This,
                                __RPC__deref_out_opt IEnumPhone **ppEnumPhone);
                               HRESULT ( STDMETHODCALLTYPE *CreateEmptyCollectionObject )(
            __RPC__in ITTAPI2 * This,
                                __RPC__deref_out_opt ITCollection2 **ppCollection);
        END_INTERFACE
    } ITTAPI2Vtbl;
    interface ITTAPI2
    {
        CONST_VTBL struct ITTAPI2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> get_Addresses(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddress) )
    ( (This)->lpVtbl -> RegisterCallNotifications(This,pAddress,fMonitor,fOwner,lMediaTypes,lCallbackInstance,plRegister) )
    ( (This)->lpVtbl -> UnregisterNotifications(This,lRegister) )
    ( (This)->lpVtbl -> get_CallHubs(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCallHubs(This,ppEnumCallHub) )
    ( (This)->lpVtbl -> SetCallHubTracking(This,pAddresses,bTracking) )
    ( (This)->lpVtbl -> EnumeratePrivateTAPIObjects(This,ppEnumUnknown) )
    ( (This)->lpVtbl -> get_PrivateTAPIObjects(This,pVariant) )
    ( (This)->lpVtbl -> RegisterRequestRecipient(This,lRegistrationInstance,lRequestMode,fEnable) )
    ( (This)->lpVtbl -> SetAssistedTelephonyPriority(This,pAppFilename,fPriority) )
    ( (This)->lpVtbl -> SetApplicationPriority(This,pAppFilename,lMediaType,fPriority) )
    ( (This)->lpVtbl -> put_EventFilter(This,lFilterMask) )
    ( (This)->lpVtbl -> get_EventFilter(This,plFilterMask) )
    ( (This)->lpVtbl -> get_Phones(This,pPhones) )
    ( (This)->lpVtbl -> EnumeratePhones(This,ppEnumPhone) )
    ( (This)->lpVtbl -> CreateEmptyCollectionObject(This,ppCollection) )
EXTERN_C const IID IID_ITMediaSupport;
    typedef struct ITMediaSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMediaSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMediaSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMediaSupport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITMediaSupport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITMediaSupport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITMediaSupport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITMediaSupport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaTypes )(
            __RPC__in ITMediaSupport * This,
                                __RPC__out long *plMediaTypes);
                               HRESULT ( STDMETHODCALLTYPE *QueryMediaType )(
            __RPC__in ITMediaSupport * This,
                       long lMediaType,
                                __RPC__out VARIANT_BOOL *pfSupport);
        END_INTERFACE
    } ITMediaSupportVtbl;
    interface ITMediaSupport
    {
        CONST_VTBL struct ITMediaSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_MediaTypes(This,plMediaTypes) )
    ( (This)->lpVtbl -> QueryMediaType(This,lMediaType,pfSupport) )
EXTERN_C const IID IID_ITPluggableTerminalClassInfo;
    typedef struct ITPluggableTerminalClassInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalClassInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalClassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPluggableTerminalClassInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Company )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__deref_out_opt BSTR *pCompany);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__deref_out_opt BSTR *pVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_TerminalClass )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__deref_out_opt BSTR *pTerminalClass);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__deref_out_opt BSTR *pCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__out TERMINAL_DIRECTION *pDirection);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaTypes )(
            __RPC__in ITPluggableTerminalClassInfo * This,
                                __RPC__out long *pMediaTypes);
        END_INTERFACE
    } ITPluggableTerminalClassInfoVtbl;
    interface ITPluggableTerminalClassInfo
    {
        CONST_VTBL struct ITPluggableTerminalClassInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> get_Company(This,pCompany) )
    ( (This)->lpVtbl -> get_Version(This,pVersion) )
    ( (This)->lpVtbl -> get_TerminalClass(This,pTerminalClass) )
    ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
    ( (This)->lpVtbl -> get_Direction(This,pDirection) )
    ( (This)->lpVtbl -> get_MediaTypes(This,pMediaTypes) )
EXTERN_C const IID IID_ITPluggableTerminalSuperclassInfo;
    typedef struct ITPluggableTerminalSuperclassInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPluggableTerminalSuperclassInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in ITPluggableTerminalSuperclassInfo * This,
                                __RPC__deref_out_opt BSTR *pCLSID);
        END_INTERFACE
    } ITPluggableTerminalSuperclassInfoVtbl;
    interface ITPluggableTerminalSuperclassInfo
    {
        CONST_VTBL struct ITPluggableTerminalSuperclassInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
EXTERN_C const IID IID_ITTerminalSupport;
    typedef struct ITTerminalSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTerminalSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTerminalSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTerminalSupport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTerminalSupport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTerminalSupport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTerminalSupport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTerminalSupport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StaticTerminals )(
            __RPC__in ITTerminalSupport * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateStaticTerminals )(
            __RPC__in ITTerminalSupport * This,
                                __RPC__deref_out_opt IEnumTerminal **ppTerminalEnumerator);
                                        HRESULT ( STDMETHODCALLTYPE *get_DynamicTerminalClasses )(
            __RPC__in ITTerminalSupport * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateDynamicTerminalClasses )(
            __RPC__in ITTerminalSupport * This,
                                __RPC__deref_out_opt IEnumTerminalClass **ppTerminalClassEnumerator);
                               HRESULT ( STDMETHODCALLTYPE *CreateTerminal )(
            __RPC__in ITTerminalSupport * This,
                       __RPC__in BSTR pTerminalClass,
                       long lMediaType,
                       TERMINAL_DIRECTION Direction,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultStaticTerminal )(
            __RPC__in ITTerminalSupport * This,
                       long lMediaType,
                       TERMINAL_DIRECTION Direction,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
        END_INTERFACE
    } ITTerminalSupportVtbl;
    interface ITTerminalSupport
    {
        CONST_VTBL struct ITTerminalSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StaticTerminals(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateStaticTerminals(This,ppTerminalEnumerator) )
    ( (This)->lpVtbl -> get_DynamicTerminalClasses(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateDynamicTerminalClasses(This,ppTerminalClassEnumerator) )
    ( (This)->lpVtbl -> CreateTerminal(This,pTerminalClass,lMediaType,Direction,ppTerminal) )
    ( (This)->lpVtbl -> GetDefaultStaticTerminal(This,lMediaType,Direction,ppTerminal) )
EXTERN_C const IID IID_ITTerminalSupport2;
    typedef struct ITTerminalSupport2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTerminalSupport2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTerminalSupport2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTerminalSupport2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTerminalSupport2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTerminalSupport2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTerminalSupport2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTerminalSupport2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StaticTerminals )(
            __RPC__in ITTerminalSupport2 * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateStaticTerminals )(
            __RPC__in ITTerminalSupport2 * This,
                                __RPC__deref_out_opt IEnumTerminal **ppTerminalEnumerator);
                                        HRESULT ( STDMETHODCALLTYPE *get_DynamicTerminalClasses )(
            __RPC__in ITTerminalSupport2 * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateDynamicTerminalClasses )(
            __RPC__in ITTerminalSupport2 * This,
                                __RPC__deref_out_opt IEnumTerminalClass **ppTerminalClassEnumerator);
                               HRESULT ( STDMETHODCALLTYPE *CreateTerminal )(
            __RPC__in ITTerminalSupport2 * This,
                       __RPC__in BSTR pTerminalClass,
                       long lMediaType,
                       TERMINAL_DIRECTION Direction,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultStaticTerminal )(
            __RPC__in ITTerminalSupport2 * This,
                       long lMediaType,
                       TERMINAL_DIRECTION Direction,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PluggableSuperclasses )(
            __RPC__in ITTerminalSupport2 * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumeratePluggableSuperclasses )(
            __RPC__in ITTerminalSupport2 * This,
                                __RPC__deref_out_opt IEnumPluggableSuperclassInfo **ppSuperclassEnumerator);
                                        HRESULT ( STDMETHODCALLTYPE *get_PluggableTerminalClasses )(
            __RPC__in ITTerminalSupport2 * This,
                       __RPC__in BSTR bstrTerminalSuperclass,
                       long lMediaType,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumeratePluggableTerminalClasses )(
            __RPC__in ITTerminalSupport2 * This,
                       CLSID iidTerminalSuperclass,
                       long lMediaType,
                                __RPC__deref_out_opt IEnumPluggableTerminalClassInfo **ppClassEnumerator);
        END_INTERFACE
    } ITTerminalSupport2Vtbl;
    interface ITTerminalSupport2
    {
        CONST_VTBL struct ITTerminalSupport2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StaticTerminals(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateStaticTerminals(This,ppTerminalEnumerator) )
    ( (This)->lpVtbl -> get_DynamicTerminalClasses(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateDynamicTerminalClasses(This,ppTerminalClassEnumerator) )
    ( (This)->lpVtbl -> CreateTerminal(This,pTerminalClass,lMediaType,Direction,ppTerminal) )
    ( (This)->lpVtbl -> GetDefaultStaticTerminal(This,lMediaType,Direction,ppTerminal) )
    ( (This)->lpVtbl -> get_PluggableSuperclasses(This,pVariant) )
    ( (This)->lpVtbl -> EnumeratePluggableSuperclasses(This,ppSuperclassEnumerator) )
    ( (This)->lpVtbl -> get_PluggableTerminalClasses(This,bstrTerminalSuperclass,lMediaType,pVariant) )
    ( (This)->lpVtbl -> EnumeratePluggableTerminalClasses(This,iidTerminalSuperclass,lMediaType,ppClassEnumerator) )
EXTERN_C const IID IID_ITAddress;
    typedef struct ITAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITAddress * This,
                                __RPC__out ADDRESS_STATE *pAddressState);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressName )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderName )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TAPIObject )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt ITTAPI **ppTapiObject);
                               HRESULT ( STDMETHODCALLTYPE *CreateCall )(
            __RPC__in ITAddress * This,
                       __RPC__in BSTR pDestAddress,
                       long lAddressType,
                       long lMediaTypes,
                                __RPC__deref_out_opt ITBasicCallControl **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Calls )(
            __RPC__in ITAddress * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateCalls )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt IEnumCall **ppCallEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_DialableAddress )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt BSTR *pDialableAddress);
                               HRESULT ( STDMETHODCALLTYPE *CreateForwardInfoObject )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt ITForwardInformation **ppForwardInfo);
                               HRESULT ( STDMETHODCALLTYPE *Forward )(
            __RPC__in ITAddress * This,
                       __RPC__in_opt ITForwardInformation *pForwardInfo,
                       __RPC__in_opt ITBasicCallControl *pCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentForwardInfo )(
            __RPC__in ITAddress * This,
                                __RPC__deref_out_opt ITForwardInformation **ppForwardInfo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MessageWaiting )(
            __RPC__in ITAddress * This,
                       VARIANT_BOOL fMessageWaiting);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageWaiting )(
            __RPC__in ITAddress * This,
                                __RPC__out VARIANT_BOOL *pfMessageWaiting);
                                        HRESULT ( STDMETHODCALLTYPE *put_DoNotDisturb )(
            __RPC__in ITAddress * This,
                       VARIANT_BOOL fDoNotDisturb);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotDisturb )(
            __RPC__in ITAddress * This,
                                __RPC__out VARIANT_BOOL *pfDoNotDisturb);
        END_INTERFACE
    } ITAddressVtbl;
    interface ITAddress
    {
        CONST_VTBL struct ITAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_State(This,pAddressState) )
    ( (This)->lpVtbl -> get_AddressName(This,ppName) )
    ( (This)->lpVtbl -> get_ServiceProviderName(This,ppName) )
    ( (This)->lpVtbl -> get_TAPIObject(This,ppTapiObject) )
    ( (This)->lpVtbl -> CreateCall(This,pDestAddress,lAddressType,lMediaTypes,ppCall) )
    ( (This)->lpVtbl -> get_Calls(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCalls(This,ppCallEnum) )
    ( (This)->lpVtbl -> get_DialableAddress(This,pDialableAddress) )
    ( (This)->lpVtbl -> CreateForwardInfoObject(This,ppForwardInfo) )
    ( (This)->lpVtbl -> Forward(This,pForwardInfo,pCall) )
    ( (This)->lpVtbl -> get_CurrentForwardInfo(This,ppForwardInfo) )
    ( (This)->lpVtbl -> put_MessageWaiting(This,fMessageWaiting) )
    ( (This)->lpVtbl -> get_MessageWaiting(This,pfMessageWaiting) )
    ( (This)->lpVtbl -> put_DoNotDisturb(This,fDoNotDisturb) )
    ( (This)->lpVtbl -> get_DoNotDisturb(This,pfDoNotDisturb) )
EXTERN_C const IID IID_ITAddress2;
    typedef struct ITAddress2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddress2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddress2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddress2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddress2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddress2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddress2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddress2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITAddress2 * This,
                                __RPC__out ADDRESS_STATE *pAddressState);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressName )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderName )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TAPIObject )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt ITTAPI **ppTapiObject);
                               HRESULT ( STDMETHODCALLTYPE *CreateCall )(
            __RPC__in ITAddress2 * This,
                       __RPC__in BSTR pDestAddress,
                       long lAddressType,
                       long lMediaTypes,
                                __RPC__deref_out_opt ITBasicCallControl **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Calls )(
            __RPC__in ITAddress2 * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateCalls )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt IEnumCall **ppCallEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_DialableAddress )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt BSTR *pDialableAddress);
                               HRESULT ( STDMETHODCALLTYPE *CreateForwardInfoObject )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt ITForwardInformation **ppForwardInfo);
                               HRESULT ( STDMETHODCALLTYPE *Forward )(
            __RPC__in ITAddress2 * This,
                       __RPC__in_opt ITForwardInformation *pForwardInfo,
                       __RPC__in_opt ITBasicCallControl *pCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentForwardInfo )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt ITForwardInformation **ppForwardInfo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MessageWaiting )(
            __RPC__in ITAddress2 * This,
                       VARIANT_BOOL fMessageWaiting);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageWaiting )(
            __RPC__in ITAddress2 * This,
                                __RPC__out VARIANT_BOOL *pfMessageWaiting);
                                        HRESULT ( STDMETHODCALLTYPE *put_DoNotDisturb )(
            __RPC__in ITAddress2 * This,
                       VARIANT_BOOL fDoNotDisturb);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotDisturb )(
            __RPC__in ITAddress2 * This,
                                __RPC__out VARIANT_BOOL *pfDoNotDisturb);
                                        HRESULT ( STDMETHODCALLTYPE *get_Phones )(
            __RPC__in ITAddress2 * This,
                                __RPC__out VARIANT *pPhones);
                                       HRESULT ( STDMETHODCALLTYPE *EnumeratePhones )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt IEnumPhone **ppEnumPhone);
                               HRESULT ( STDMETHODCALLTYPE *GetPhoneFromTerminal )(
            __RPC__in ITAddress2 * This,
                       __RPC__in_opt ITTerminal *pTerminal,
                                __RPC__deref_out_opt ITPhone **ppPhone);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreferredPhones )(
            __RPC__in ITAddress2 * This,
                                __RPC__out VARIANT *pPhones);
                                       HRESULT ( STDMETHODCALLTYPE *EnumeratePreferredPhones )(
            __RPC__in ITAddress2 * This,
                                __RPC__deref_out_opt IEnumPhone **ppEnumPhone);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventFilter )(
            __RPC__in ITAddress2 * This,
                       TAPI_EVENT TapiEvent,
                       long lSubEvent,
                                __RPC__out VARIANT_BOOL *pEnable);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventFilter )(
            __RPC__in ITAddress2 * This,
                       TAPI_EVENT TapiEvent,
                       long lSubEvent,
                       VARIANT_BOOL bEnable);
                                       HRESULT ( STDMETHODCALLTYPE *DeviceSpecific )(
            __RPC__in ITAddress2 * This,
                       __RPC__in_opt ITCallInfo *pCall,
                       __RPC__in BYTE *pParams,
                       DWORD dwSize);
                               HRESULT ( STDMETHODCALLTYPE *DeviceSpecificVariant )(
            __RPC__in ITAddress2 * This,
                       __RPC__in_opt ITCallInfo *pCall,
                       VARIANT varDevSpecificByteArray);
                               HRESULT ( STDMETHODCALLTYPE *NegotiateExtVersion )(
            __RPC__in ITAddress2 * This,
                       long lLowVersion,
                       long lHighVersion,
                                __RPC__out long *plExtVersion);
        END_INTERFACE
    } ITAddress2Vtbl;
    interface ITAddress2
    {
        CONST_VTBL struct ITAddress2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_State(This,pAddressState) )
    ( (This)->lpVtbl -> get_AddressName(This,ppName) )
    ( (This)->lpVtbl -> get_ServiceProviderName(This,ppName) )
    ( (This)->lpVtbl -> get_TAPIObject(This,ppTapiObject) )
    ( (This)->lpVtbl -> CreateCall(This,pDestAddress,lAddressType,lMediaTypes,ppCall) )
    ( (This)->lpVtbl -> get_Calls(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCalls(This,ppCallEnum) )
    ( (This)->lpVtbl -> get_DialableAddress(This,pDialableAddress) )
    ( (This)->lpVtbl -> CreateForwardInfoObject(This,ppForwardInfo) )
    ( (This)->lpVtbl -> Forward(This,pForwardInfo,pCall) )
    ( (This)->lpVtbl -> get_CurrentForwardInfo(This,ppForwardInfo) )
    ( (This)->lpVtbl -> put_MessageWaiting(This,fMessageWaiting) )
    ( (This)->lpVtbl -> get_MessageWaiting(This,pfMessageWaiting) )
    ( (This)->lpVtbl -> put_DoNotDisturb(This,fDoNotDisturb) )
    ( (This)->lpVtbl -> get_DoNotDisturb(This,pfDoNotDisturb) )
    ( (This)->lpVtbl -> get_Phones(This,pPhones) )
    ( (This)->lpVtbl -> EnumeratePhones(This,ppEnumPhone) )
    ( (This)->lpVtbl -> GetPhoneFromTerminal(This,pTerminal,ppPhone) )
    ( (This)->lpVtbl -> get_PreferredPhones(This,pPhones) )
    ( (This)->lpVtbl -> EnumeratePreferredPhones(This,ppEnumPhone) )
    ( (This)->lpVtbl -> get_EventFilter(This,TapiEvent,lSubEvent,pEnable) )
    ( (This)->lpVtbl -> put_EventFilter(This,TapiEvent,lSubEvent,bEnable) )
    ( (This)->lpVtbl -> DeviceSpecific(This,pCall,pParams,dwSize) )
    ( (This)->lpVtbl -> DeviceSpecificVariant(This,pCall,varDevSpecificByteArray) )
    ( (This)->lpVtbl -> NegotiateExtVersion(This,lLowVersion,lHighVersion,plExtVersion) )
EXTERN_C const IID IID_ITAddressCapabilities;
    typedef struct ITAddressCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddressCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddressCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddressCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddressCapabilities * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddressCapabilities * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddressCapabilities * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddressCapabilities * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressCapability )(
            __RPC__in ITAddressCapabilities * This,
                       ADDRESS_CAPABILITY AddressCap,
                                __RPC__out long *plCapability);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressCapabilityString )(
            __RPC__in ITAddressCapabilities * This,
                       ADDRESS_CAPABILITY_STRING AddressCapString,
                                __RPC__deref_out_opt BSTR *ppCapabilityString);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallTreatments )(
            __RPC__in ITAddressCapabilities * This,
                                __RPC__out VARIANT *pVariant);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateCallTreatments )(
            __RPC__in ITAddressCapabilities * This,
                                __RPC__deref_out_opt IEnumBstr **ppEnumCallTreatment);
                                        HRESULT ( STDMETHODCALLTYPE *get_CompletionMessages )(
            __RPC__in ITAddressCapabilities * This,
                                __RPC__out VARIANT *pVariant);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateCompletionMessages )(
            __RPC__in ITAddressCapabilities * This,
                                __RPC__deref_out_opt IEnumBstr **ppEnumCompletionMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceClasses )(
            __RPC__in ITAddressCapabilities * This,
                                __RPC__out VARIANT *pVariant);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateDeviceClasses )(
            __RPC__in ITAddressCapabilities * This,
                                __RPC__deref_out_opt IEnumBstr **ppEnumDeviceClass);
        END_INTERFACE
    } ITAddressCapabilitiesVtbl;
    interface ITAddressCapabilities
    {
        CONST_VTBL struct ITAddressCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AddressCapability(This,AddressCap,plCapability) )
    ( (This)->lpVtbl -> get_AddressCapabilityString(This,AddressCapString,ppCapabilityString) )
    ( (This)->lpVtbl -> get_CallTreatments(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCallTreatments(This,ppEnumCallTreatment) )
    ( (This)->lpVtbl -> get_CompletionMessages(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCompletionMessages(This,ppEnumCompletionMessage) )
    ( (This)->lpVtbl -> get_DeviceClasses(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateDeviceClasses(This,ppEnumDeviceClass) )
EXTERN_C const IID IID_ITPhone;
    typedef struct ITPhoneVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPhone * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPhone * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPhone * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPhone * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPhone * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPhone * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPhone * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ITPhone * This,
                       PHONE_PRIVILEGE Privilege);
                               HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in ITPhone * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Addresses )(
            __RPC__in ITPhone * This,
                                __RPC__out VARIANT *pAddresses);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateAddresses )(
            __RPC__in ITPhone * This,
                                __RPC__deref_out_opt IEnumAddress **ppEnumAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhoneCapsLong )(
            __RPC__in ITPhone * This,
                       PHONECAPS_LONG pclCap,
                                __RPC__out long *plCapability);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhoneCapsString )(
            __RPC__in ITPhone * This,
                       PHONECAPS_STRING pcsCap,
                                __RPC__deref_out_opt BSTR *ppCapability);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminals )(
            __RPC__in ITPhone * This,
                       __RPC__in_opt ITAddress *pAddress,
                                __RPC__out VARIANT *pTerminals);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateTerminals )(
            __RPC__in ITPhone * This,
                       __RPC__in_opt ITAddress *pAddress,
                                __RPC__deref_out_opt IEnumTerminal **ppEnumTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonMode )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                                __RPC__out PHONE_BUTTON_MODE *pButtonMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_ButtonMode )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                       PHONE_BUTTON_MODE ButtonMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonFunction )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                                __RPC__out PHONE_BUTTON_FUNCTION *pButtonFunction);
                                        HRESULT ( STDMETHODCALLTYPE *put_ButtonFunction )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                       PHONE_BUTTON_FUNCTION ButtonFunction);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonText )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                                __RPC__deref_out_opt BSTR *ppButtonText);
                                        HRESULT ( STDMETHODCALLTYPE *put_ButtonText )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                       __RPC__in BSTR bstrButtonText);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonState )(
            __RPC__in ITPhone * This,
                       long lButtonID,
                                __RPC__out PHONE_BUTTON_STATE *pButtonState);
                                        HRESULT ( STDMETHODCALLTYPE *get_HookSwitchState )(
            __RPC__in ITPhone * This,
                       PHONE_HOOK_SWITCH_DEVICE HookSwitchDevice,
                                __RPC__out PHONE_HOOK_SWITCH_STATE *pHookSwitchState);
                                        HRESULT ( STDMETHODCALLTYPE *put_HookSwitchState )(
            __RPC__in ITPhone * This,
                       PHONE_HOOK_SWITCH_DEVICE HookSwitchDevice,
                       PHONE_HOOK_SWITCH_STATE HookSwitchState);
                                        HRESULT ( STDMETHODCALLTYPE *put_RingMode )(
            __RPC__in ITPhone * This,
                       long lRingMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_RingMode )(
            __RPC__in ITPhone * This,
                                __RPC__out long *plRingMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_RingVolume )(
            __RPC__in ITPhone * This,
                       long lRingVolume);
                                        HRESULT ( STDMETHODCALLTYPE *get_RingVolume )(
            __RPC__in ITPhone * This,
                                __RPC__out long *plRingVolume);
                                        HRESULT ( STDMETHODCALLTYPE *get_Privilege )(
            __RPC__in ITPhone * This,
                                __RPC__out PHONE_PRIVILEGE *pPrivilege);
                                       HRESULT ( STDMETHODCALLTYPE *GetPhoneCapsBuffer )(
            __RPC__in ITPhone * This,
                       PHONECAPS_BUFFER pcbCaps,
                        __RPC__out DWORD *pdwSize,
                        __RPC__deref_out_opt BYTE **ppPhoneCapsBuffer);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhoneCapsBuffer )(
            __RPC__in ITPhone * This,
                       PHONECAPS_BUFFER pcbCaps,
                                __RPC__out VARIANT *pVarBuffer);
                                        HRESULT ( STDMETHODCALLTYPE *get_LampMode )(
            __RPC__in ITPhone * This,
                       long lLampID,
                                __RPC__out PHONE_LAMP_MODE *pLampMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_LampMode )(
            __RPC__in ITPhone * This,
                       long lLampID,
                       PHONE_LAMP_MODE LampMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Display )(
            __RPC__in ITPhone * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplay);
                               HRESULT ( STDMETHODCALLTYPE *SetDisplay )(
            __RPC__in ITPhone * This,
                       long lRow,
                       long lColumn,
                       __RPC__in BSTR bstrDisplay);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreferredAddresses )(
            __RPC__in ITPhone * This,
                                __RPC__out VARIANT *pAddresses);
                                       HRESULT ( STDMETHODCALLTYPE *EnumeratePreferredAddresses )(
            __RPC__in ITPhone * This,
                                __RPC__deref_out_opt IEnumAddress **ppEnumAddress);
                                       HRESULT ( STDMETHODCALLTYPE *DeviceSpecific )(
            __RPC__in ITPhone * This,
                       __RPC__in BYTE *pParams,
                       DWORD dwSize);
                               HRESULT ( STDMETHODCALLTYPE *DeviceSpecificVariant )(
            __RPC__in ITPhone * This,
                       VARIANT varDevSpecificByteArray);
                               HRESULT ( STDMETHODCALLTYPE *NegotiateExtVersion )(
            __RPC__in ITPhone * This,
                       long lLowVersion,
                       long lHighVersion,
                                __RPC__out long *plExtVersion);
        END_INTERFACE
    } ITPhoneVtbl;
    interface ITPhone
    {
        CONST_VTBL struct ITPhoneVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Open(This,Privilege) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> get_Addresses(This,pAddresses) )
    ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddress) )
    ( (This)->lpVtbl -> get_PhoneCapsLong(This,pclCap,plCapability) )
    ( (This)->lpVtbl -> get_PhoneCapsString(This,pcsCap,ppCapability) )
    ( (This)->lpVtbl -> get_Terminals(This,pAddress,pTerminals) )
    ( (This)->lpVtbl -> EnumerateTerminals(This,pAddress,ppEnumTerminal) )
    ( (This)->lpVtbl -> get_ButtonMode(This,lButtonID,pButtonMode) )
    ( (This)->lpVtbl -> put_ButtonMode(This,lButtonID,ButtonMode) )
    ( (This)->lpVtbl -> get_ButtonFunction(This,lButtonID,pButtonFunction) )
    ( (This)->lpVtbl -> put_ButtonFunction(This,lButtonID,ButtonFunction) )
    ( (This)->lpVtbl -> get_ButtonText(This,lButtonID,ppButtonText) )
    ( (This)->lpVtbl -> put_ButtonText(This,lButtonID,bstrButtonText) )
    ( (This)->lpVtbl -> get_ButtonState(This,lButtonID,pButtonState) )
    ( (This)->lpVtbl -> get_HookSwitchState(This,HookSwitchDevice,pHookSwitchState) )
    ( (This)->lpVtbl -> put_HookSwitchState(This,HookSwitchDevice,HookSwitchState) )
    ( (This)->lpVtbl -> put_RingMode(This,lRingMode) )
    ( (This)->lpVtbl -> get_RingMode(This,plRingMode) )
    ( (This)->lpVtbl -> put_RingVolume(This,lRingVolume) )
    ( (This)->lpVtbl -> get_RingVolume(This,plRingVolume) )
    ( (This)->lpVtbl -> get_Privilege(This,pPrivilege) )
    ( (This)->lpVtbl -> GetPhoneCapsBuffer(This,pcbCaps,pdwSize,ppPhoneCapsBuffer) )
    ( (This)->lpVtbl -> get_PhoneCapsBuffer(This,pcbCaps,pVarBuffer) )
    ( (This)->lpVtbl -> get_LampMode(This,lLampID,pLampMode) )
    ( (This)->lpVtbl -> put_LampMode(This,lLampID,LampMode) )
    ( (This)->lpVtbl -> get_Display(This,pbstrDisplay) )
    ( (This)->lpVtbl -> SetDisplay(This,lRow,lColumn,bstrDisplay) )
    ( (This)->lpVtbl -> get_PreferredAddresses(This,pAddresses) )
    ( (This)->lpVtbl -> EnumeratePreferredAddresses(This,ppEnumAddress) )
    ( (This)->lpVtbl -> DeviceSpecific(This,pParams,dwSize) )
    ( (This)->lpVtbl -> DeviceSpecificVariant(This,varDevSpecificByteArray) )
    ( (This)->lpVtbl -> NegotiateExtVersion(This,lLowVersion,lHighVersion,plExtVersion) )
EXTERN_C const IID IID_ITAutomatedPhoneControl;
    typedef struct ITAutomatedPhoneControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAutomatedPhoneControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAutomatedPhoneControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAutomatedPhoneControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAutomatedPhoneControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAutomatedPhoneControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAutomatedPhoneControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAutomatedPhoneControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *StartTone )(
            __RPC__in ITAutomatedPhoneControl * This,
                       PHONE_TONE Tone,
                       long lDuration);
                               HRESULT ( STDMETHODCALLTYPE *StopTone )(
            __RPC__in ITAutomatedPhoneControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tone )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out PHONE_TONE *pTone);
                               HRESULT ( STDMETHODCALLTYPE *StartRinger )(
            __RPC__in ITAutomatedPhoneControl * This,
                       long lRingMode,
                       long lDuration);
                               HRESULT ( STDMETHODCALLTYPE *StopRinger )(
            __RPC__in ITAutomatedPhoneControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Ringer )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *pfRinging);
                                        HRESULT ( STDMETHODCALLTYPE *put_PhoneHandlingEnabled )(
            __RPC__in ITAutomatedPhoneControl * This,
                       VARIANT_BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhoneHandlingEnabled )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoEndOfNumberTimeout )(
            __RPC__in ITAutomatedPhoneControl * This,
                       long lTimeout);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoEndOfNumberTimeout )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out long *plTimeout);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoDialtone )(
            __RPC__in ITAutomatedPhoneControl * This,
                       VARIANT_BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoDialtone )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoStopTonesOnOnHook )(
            __RPC__in ITAutomatedPhoneControl * This,
                       VARIANT_BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoStopTonesOnOnHook )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoStopRingOnOffHook )(
            __RPC__in ITAutomatedPhoneControl * This,
                       VARIANT_BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoStopRingOnOffHook )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoKeypadTones )(
            __RPC__in ITAutomatedPhoneControl * This,
                       VARIANT_BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoKeypadTones )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoKeypadTonesMinimumDuration )(
            __RPC__in ITAutomatedPhoneControl * This,
                       long lDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoKeypadTonesMinimumDuration )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out long *plDuration);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoVolumeControl )(
            __RPC__in ITAutomatedPhoneControl * This,
                       VARIANT_BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoVolumeControl )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT_BOOL *fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoVolumeControlStep )(
            __RPC__in ITAutomatedPhoneControl * This,
                       long lStepSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoVolumeControlStep )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out long *plStepSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoVolumeControlRepeatDelay )(
            __RPC__in ITAutomatedPhoneControl * This,
                       long lDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoVolumeControlRepeatDelay )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out long *plDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoVolumeControlRepeatPeriod )(
            __RPC__in ITAutomatedPhoneControl * This,
                       long lPeriod);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoVolumeControlRepeatPeriod )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out long *plPeriod);
                               HRESULT ( STDMETHODCALLTYPE *SelectCall )(
            __RPC__in ITAutomatedPhoneControl * This,
                       __RPC__in_opt ITCallInfo *pCall,
                       VARIANT_BOOL fSelectDefaultTerminals);
                               HRESULT ( STDMETHODCALLTYPE *UnselectCall )(
            __RPC__in ITAutomatedPhoneControl * This,
                       __RPC__in_opt ITCallInfo *pCall);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateSelectedCalls )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__deref_out_opt IEnumCall **ppCallEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_SelectedCalls )(
            __RPC__in ITAutomatedPhoneControl * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITAutomatedPhoneControlVtbl;
    interface ITAutomatedPhoneControl
    {
        CONST_VTBL struct ITAutomatedPhoneControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StartTone(This,Tone,lDuration) )
    ( (This)->lpVtbl -> StopTone(This) )
    ( (This)->lpVtbl -> get_Tone(This,pTone) )
    ( (This)->lpVtbl -> StartRinger(This,lRingMode,lDuration) )
    ( (This)->lpVtbl -> StopRinger(This) )
    ( (This)->lpVtbl -> get_Ringer(This,pfRinging) )
    ( (This)->lpVtbl -> put_PhoneHandlingEnabled(This,fEnabled) )
    ( (This)->lpVtbl -> get_PhoneHandlingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> put_AutoEndOfNumberTimeout(This,lTimeout) )
    ( (This)->lpVtbl -> get_AutoEndOfNumberTimeout(This,plTimeout) )
    ( (This)->lpVtbl -> put_AutoDialtone(This,fEnabled) )
    ( (This)->lpVtbl -> get_AutoDialtone(This,pfEnabled) )
    ( (This)->lpVtbl -> put_AutoStopTonesOnOnHook(This,fEnabled) )
    ( (This)->lpVtbl -> get_AutoStopTonesOnOnHook(This,pfEnabled) )
    ( (This)->lpVtbl -> put_AutoStopRingOnOffHook(This,fEnabled) )
    ( (This)->lpVtbl -> get_AutoStopRingOnOffHook(This,pfEnabled) )
    ( (This)->lpVtbl -> put_AutoKeypadTones(This,fEnabled) )
    ( (This)->lpVtbl -> get_AutoKeypadTones(This,pfEnabled) )
    ( (This)->lpVtbl -> put_AutoKeypadTonesMinimumDuration(This,lDuration) )
    ( (This)->lpVtbl -> get_AutoKeypadTonesMinimumDuration(This,plDuration) )
    ( (This)->lpVtbl -> put_AutoVolumeControl(This,fEnabled) )
    ( (This)->lpVtbl -> get_AutoVolumeControl(This,fEnabled) )
    ( (This)->lpVtbl -> put_AutoVolumeControlStep(This,lStepSize) )
    ( (This)->lpVtbl -> get_AutoVolumeControlStep(This,plStepSize) )
    ( (This)->lpVtbl -> put_AutoVolumeControlRepeatDelay(This,lDelay) )
    ( (This)->lpVtbl -> get_AutoVolumeControlRepeatDelay(This,plDelay) )
    ( (This)->lpVtbl -> put_AutoVolumeControlRepeatPeriod(This,lPeriod) )
    ( (This)->lpVtbl -> get_AutoVolumeControlRepeatPeriod(This,plPeriod) )
    ( (This)->lpVtbl -> SelectCall(This,pCall,fSelectDefaultTerminals) )
    ( (This)->lpVtbl -> UnselectCall(This,pCall) )
    ( (This)->lpVtbl -> EnumerateSelectedCalls(This,ppCallEnum) )
    ( (This)->lpVtbl -> get_SelectedCalls(This,pVariant) )
EXTERN_C const IID IID_ITBasicCallControl;
    typedef struct ITBasicCallControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITBasicCallControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITBasicCallControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITBasicCallControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITBasicCallControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITBasicCallControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ITBasicCallControl * This,
                       VARIANT_BOOL fSync);
                               HRESULT ( STDMETHODCALLTYPE *Answer )(
            __RPC__in ITBasicCallControl * This);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in ITBasicCallControl * This,
                       DISCONNECT_CODE code);
                               HRESULT ( STDMETHODCALLTYPE *Hold )(
            __RPC__in ITBasicCallControl * This,
                       VARIANT_BOOL fHold);
                               HRESULT ( STDMETHODCALLTYPE *HandoffDirect )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in BSTR pApplicationName);
                               HRESULT ( STDMETHODCALLTYPE *HandoffIndirect )(
            __RPC__in ITBasicCallControl * This,
                       long lMediaType);
                               HRESULT ( STDMETHODCALLTYPE *Conference )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in_opt ITBasicCallControl *pCall,
                       VARIANT_BOOL fSync);
                               HRESULT ( STDMETHODCALLTYPE *Transfer )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in_opt ITBasicCallControl *pCall,
                       VARIANT_BOOL fSync);
                               HRESULT ( STDMETHODCALLTYPE *BlindTransfer )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in BSTR pDestAddress);
                               HRESULT ( STDMETHODCALLTYPE *SwapHold )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in_opt ITBasicCallControl *pCall);
                               HRESULT ( STDMETHODCALLTYPE *ParkDirect )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in BSTR pParkAddress);
                               HRESULT ( STDMETHODCALLTYPE *ParkIndirect )(
            __RPC__in ITBasicCallControl * This,
                                __RPC__deref_out_opt BSTR *ppNonDirAddress);
                               HRESULT ( STDMETHODCALLTYPE *Unpark )(
            __RPC__in ITBasicCallControl * This);
                               HRESULT ( STDMETHODCALLTYPE *SetQOS )(
            __RPC__in ITBasicCallControl * This,
                       long lMediaType,
                       QOS_SERVICE_LEVEL ServiceLevel);
                               HRESULT ( STDMETHODCALLTYPE *Pickup )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in BSTR pGroupID);
                               HRESULT ( STDMETHODCALLTYPE *Dial )(
            __RPC__in ITBasicCallControl * This,
                       __RPC__in BSTR pDestAddress);
                               HRESULT ( STDMETHODCALLTYPE *Finish )(
            __RPC__in ITBasicCallControl * This,
                       FINISH_MODE finishMode);
                               HRESULT ( STDMETHODCALLTYPE *RemoveFromConference )(
            __RPC__in ITBasicCallControl * This);
        END_INTERFACE
    } ITBasicCallControlVtbl;
    interface ITBasicCallControl
    {
        CONST_VTBL struct ITBasicCallControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This,fSync) )
    ( (This)->lpVtbl -> Answer(This) )
    ( (This)->lpVtbl -> Disconnect(This,code) )
    ( (This)->lpVtbl -> Hold(This,fHold) )
    ( (This)->lpVtbl -> HandoffDirect(This,pApplicationName) )
    ( (This)->lpVtbl -> HandoffIndirect(This,lMediaType) )
    ( (This)->lpVtbl -> Conference(This,pCall,fSync) )
    ( (This)->lpVtbl -> Transfer(This,pCall,fSync) )
    ( (This)->lpVtbl -> BlindTransfer(This,pDestAddress) )
    ( (This)->lpVtbl -> SwapHold(This,pCall) )
    ( (This)->lpVtbl -> ParkDirect(This,pParkAddress) )
    ( (This)->lpVtbl -> ParkIndirect(This,ppNonDirAddress) )
    ( (This)->lpVtbl -> Unpark(This) )
    ( (This)->lpVtbl -> SetQOS(This,lMediaType,ServiceLevel) )
    ( (This)->lpVtbl -> Pickup(This,pGroupID) )
    ( (This)->lpVtbl -> Dial(This,pDestAddress) )
    ( (This)->lpVtbl -> Finish(This,finishMode) )
    ( (This)->lpVtbl -> RemoveFromConference(This) )
EXTERN_C const IID IID_ITCallInfo;
    typedef struct ITCallInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITCallInfo * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallState )(
            __RPC__in ITCallInfo * This,
                                __RPC__out CALL_STATE *pCallState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Privilege )(
            __RPC__in ITCallInfo * This,
                                __RPC__out CALL_PRIVILEGE *pPrivilege);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHub )(
            __RPC__in ITCallInfo * This,
                                __RPC__deref_out_opt ITCallHub **ppCallHub);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallInfoLong )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_LONG CallInfoLong,
                                __RPC__out long *plCallInfoLongVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallInfoLong )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_LONG CallInfoLong,
                       long lCallInfoLongVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallInfoString )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_STRING CallInfoString,
                                __RPC__deref_out_opt BSTR *ppCallInfoString);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallInfoString )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_STRING CallInfoString,
                       __RPC__in BSTR pCallInfoString);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallInfoBuffer )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                                __RPC__out VARIANT *ppCallInfoBuffer);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallInfoBuffer )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                       VARIANT pCallInfoBuffer);
                           HRESULT ( STDMETHODCALLTYPE *GetCallInfoBuffer )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppCallInfoBuffer);
                           HRESULT ( STDMETHODCALLTYPE *SetCallInfoBuffer )(
            __RPC__in ITCallInfo * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSize) BYTE *pCallInfoBuffer);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseUserUserInfo )(
            __RPC__in ITCallInfo * This);
        END_INTERFACE
    } ITCallInfoVtbl;
    interface ITCallInfo
    {
        CONST_VTBL struct ITCallInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_CallState(This,pCallState) )
    ( (This)->lpVtbl -> get_Privilege(This,pPrivilege) )
    ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
    ( (This)->lpVtbl -> get_CallInfoLong(This,CallInfoLong,plCallInfoLongVal) )
    ( (This)->lpVtbl -> put_CallInfoLong(This,CallInfoLong,lCallInfoLongVal) )
    ( (This)->lpVtbl -> get_CallInfoString(This,CallInfoString,ppCallInfoString) )
    ( (This)->lpVtbl -> put_CallInfoString(This,CallInfoString,pCallInfoString) )
    ( (This)->lpVtbl -> get_CallInfoBuffer(This,CallInfoBuffer,ppCallInfoBuffer) )
    ( (This)->lpVtbl -> put_CallInfoBuffer(This,CallInfoBuffer,pCallInfoBuffer) )
    ( (This)->lpVtbl -> GetCallInfoBuffer(This,CallInfoBuffer,pdwSize,ppCallInfoBuffer) )
    ( (This)->lpVtbl -> SetCallInfoBuffer(This,CallInfoBuffer,dwSize,pCallInfoBuffer) )
    ( (This)->lpVtbl -> ReleaseUserUserInfo(This) )
EXTERN_C const IID IID_ITCallInfo2;
    typedef struct ITCallInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallInfo2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallInfo2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallInfo2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallInfo2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITCallInfo2 * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallState )(
            __RPC__in ITCallInfo2 * This,
                                __RPC__out CALL_STATE *pCallState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Privilege )(
            __RPC__in ITCallInfo2 * This,
                                __RPC__out CALL_PRIVILEGE *pPrivilege);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHub )(
            __RPC__in ITCallInfo2 * This,
                                __RPC__deref_out_opt ITCallHub **ppCallHub);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallInfoLong )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_LONG CallInfoLong,
                                __RPC__out long *plCallInfoLongVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallInfoLong )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_LONG CallInfoLong,
                       long lCallInfoLongVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallInfoString )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_STRING CallInfoString,
                                __RPC__deref_out_opt BSTR *ppCallInfoString);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallInfoString )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_STRING CallInfoString,
                       __RPC__in BSTR pCallInfoString);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallInfoBuffer )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                                __RPC__out VARIANT *ppCallInfoBuffer);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallInfoBuffer )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                       VARIANT pCallInfoBuffer);
                           HRESULT ( STDMETHODCALLTYPE *GetCallInfoBuffer )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppCallInfoBuffer);
                           HRESULT ( STDMETHODCALLTYPE *SetCallInfoBuffer )(
            __RPC__in ITCallInfo2 * This,
                       CALLINFO_BUFFER CallInfoBuffer,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSize) BYTE *pCallInfoBuffer);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseUserUserInfo )(
            __RPC__in ITCallInfo2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventFilter )(
            __RPC__in ITCallInfo2 * This,
                       TAPI_EVENT TapiEvent,
                       long lSubEvent,
                                __RPC__out VARIANT_BOOL *pEnable);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventFilter )(
            __RPC__in ITCallInfo2 * This,
                       TAPI_EVENT TapiEvent,
                       long lSubEvent,
                       VARIANT_BOOL bEnable);
        END_INTERFACE
    } ITCallInfo2Vtbl;
    interface ITCallInfo2
    {
        CONST_VTBL struct ITCallInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_CallState(This,pCallState) )
    ( (This)->lpVtbl -> get_Privilege(This,pPrivilege) )
    ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
    ( (This)->lpVtbl -> get_CallInfoLong(This,CallInfoLong,plCallInfoLongVal) )
    ( (This)->lpVtbl -> put_CallInfoLong(This,CallInfoLong,lCallInfoLongVal) )
    ( (This)->lpVtbl -> get_CallInfoString(This,CallInfoString,ppCallInfoString) )
    ( (This)->lpVtbl -> put_CallInfoString(This,CallInfoString,pCallInfoString) )
    ( (This)->lpVtbl -> get_CallInfoBuffer(This,CallInfoBuffer,ppCallInfoBuffer) )
    ( (This)->lpVtbl -> put_CallInfoBuffer(This,CallInfoBuffer,pCallInfoBuffer) )
    ( (This)->lpVtbl -> GetCallInfoBuffer(This,CallInfoBuffer,pdwSize,ppCallInfoBuffer) )
    ( (This)->lpVtbl -> SetCallInfoBuffer(This,CallInfoBuffer,dwSize,pCallInfoBuffer) )
    ( (This)->lpVtbl -> ReleaseUserUserInfo(This) )
    ( (This)->lpVtbl -> get_EventFilter(This,TapiEvent,lSubEvent,pEnable) )
    ( (This)->lpVtbl -> put_EventFilter(This,TapiEvent,lSubEvent,bEnable) )
EXTERN_C const IID IID_ITTerminal;
    typedef struct ITTerminalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTerminal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTerminal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTerminal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTerminal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTerminal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTerminal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTerminal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITTerminal * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITTerminal * This,
                                __RPC__out TERMINAL_STATE *pTerminalState);
                                        HRESULT ( STDMETHODCALLTYPE *get_TerminalType )(
            __RPC__in ITTerminal * This,
                                __RPC__out TERMINAL_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_TerminalClass )(
            __RPC__in ITTerminal * This,
                                __RPC__deref_out_opt BSTR *ppTerminalClass);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in ITTerminal * This,
                                __RPC__out long *plMediaType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in ITTerminal * This,
                                __RPC__out TERMINAL_DIRECTION *pDirection);
        END_INTERFACE
    } ITTerminalVtbl;
    interface ITTerminal
    {
        CONST_VTBL struct ITTerminalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
    ( (This)->lpVtbl -> get_State(This,pTerminalState) )
    ( (This)->lpVtbl -> get_TerminalType(This,pType) )
    ( (This)->lpVtbl -> get_TerminalClass(This,ppTerminalClass) )
    ( (This)->lpVtbl -> get_MediaType(This,plMediaType) )
    ( (This)->lpVtbl -> get_Direction(This,pDirection) )
EXTERN_C const IID IID_ITMultiTrackTerminal;
    typedef struct ITMultiTrackTerminalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMultiTrackTerminal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMultiTrackTerminal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMultiTrackTerminal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITMultiTrackTerminal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITMultiTrackTerminal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITMultiTrackTerminal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITMultiTrackTerminal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrackTerminals )(
            __RPC__in ITMultiTrackTerminal * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateTrackTerminals )(
            __RPC__in ITMultiTrackTerminal * This,
                                __RPC__deref_out_opt IEnumTerminal **ppEnumTerminal);
                               HRESULT ( STDMETHODCALLTYPE *CreateTrackTerminal )(
            __RPC__in ITMultiTrackTerminal * This,
                       long MediaType,
                       TERMINAL_DIRECTION TerminalDirection,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaTypesInUse )(
            __RPC__in ITMultiTrackTerminal * This,
                                __RPC__out long *plMediaTypesInUse);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirectionsInUse )(
            __RPC__in ITMultiTrackTerminal * This,
                                __RPC__out TERMINAL_DIRECTION *plDirectionsInUsed);
                               HRESULT ( STDMETHODCALLTYPE *RemoveTrackTerminal )(
            __RPC__in ITMultiTrackTerminal * This,
                       __RPC__in_opt ITTerminal *pTrackTerminalToRemove);
        END_INTERFACE
    } ITMultiTrackTerminalVtbl;
    interface ITMultiTrackTerminal
    {
        CONST_VTBL struct ITMultiTrackTerminalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TrackTerminals(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateTrackTerminals(This,ppEnumTerminal) )
    ( (This)->lpVtbl -> CreateTrackTerminal(This,MediaType,TerminalDirection,ppTerminal) )
    ( (This)->lpVtbl -> get_MediaTypesInUse(This,plMediaTypesInUse) )
    ( (This)->lpVtbl -> get_DirectionsInUse(This,plDirectionsInUsed) )
    ( (This)->lpVtbl -> RemoveTrackTerminal(This,pTrackTerminalToRemove) )
typedef
enum TERMINAL_MEDIA_STATE
    {
        TMS_IDLE = 0,
        TMS_ACTIVE = ( TMS_IDLE + 1 ) ,
        TMS_PAUSED = ( TMS_ACTIVE + 1 ) ,
        TMS_LASTITEM = TMS_PAUSED
    } TERMINAL_MEDIA_STATE;
typedef
enum FT_STATE_EVENT_CAUSE
    {
        FTEC_NORMAL = 0,
        FTEC_END_OF_FILE = ( FTEC_NORMAL + 1 ) ,
        FTEC_READ_ERROR = ( FTEC_END_OF_FILE + 1 ) ,
        FTEC_WRITE_ERROR = ( FTEC_READ_ERROR + 1 )
    } FT_STATE_EVENT_CAUSE;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_ITFileTrack;
    typedef struct ITFileTrackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITFileTrack * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITFileTrack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITFileTrack * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITFileTrack * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITFileTrack * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITFileTrack * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITFileTrack * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ITFileTrack * This,
                                __RPC__deref_out_opt AM_MEDIA_TYPE **ppmt);
                                                HRESULT ( STDMETHODCALLTYPE *put_Format )(
            __RPC__in ITFileTrack * This,
                       __RPC__in const AM_MEDIA_TYPE *pmt);
                                        HRESULT ( STDMETHODCALLTYPE *get_ControllingTerminal )(
            __RPC__in ITFileTrack * This,
                                __RPC__deref_out_opt ITTerminal **ppControllingTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioFormatForScripting )(
            __RPC__in ITFileTrack * This,
                                __RPC__deref_out_opt ITScriptableAudioFormat **ppAudioFormat);
                                        HRESULT ( STDMETHODCALLTYPE *put_AudioFormatForScripting )(
            __RPC__in ITFileTrack * This,
                       __RPC__in_opt ITScriptableAudioFormat *pAudioFormat);
                                        HRESULT ( STDMETHODCALLTYPE *get_EmptyAudioFormatForScripting )(
            __RPC__in ITFileTrack * This,
                                __RPC__deref_out_opt ITScriptableAudioFormat **ppAudioFormat);
        END_INTERFACE
    } ITFileTrackVtbl;
    interface ITFileTrack
    {
        CONST_VTBL struct ITFileTrackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,ppmt) )
    ( (This)->lpVtbl -> put_Format(This,pmt) )
    ( (This)->lpVtbl -> get_ControllingTerminal(This,ppControllingTerminal) )
    ( (This)->lpVtbl -> get_AudioFormatForScripting(This,ppAudioFormat) )
    ( (This)->lpVtbl -> put_AudioFormatForScripting(This,pAudioFormat) )
    ( (This)->lpVtbl -> get_EmptyAudioFormatForScripting(This,ppAudioFormat) )
EXTERN_C const IID IID_ITMediaPlayback;
    typedef struct ITMediaPlaybackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMediaPlayback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMediaPlayback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMediaPlayback * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITMediaPlayback * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITMediaPlayback * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITMediaPlayback * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITMediaPlayback * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlayList )(
            __RPC__in ITMediaPlayback * This,
                       VARIANTARG PlayListVariant);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlayList )(
            __RPC__in ITMediaPlayback * This,
                                __RPC__out VARIANTARG *pPlayListVariant);
        END_INTERFACE
    } ITMediaPlaybackVtbl;
    interface ITMediaPlayback
    {
        CONST_VTBL struct ITMediaPlaybackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_PlayList(This,PlayListVariant) )
    ( (This)->lpVtbl -> get_PlayList(This,pPlayListVariant) )
EXTERN_C const IID IID_ITMediaRecord;
    typedef struct ITMediaRecordVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMediaRecord * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMediaRecord * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMediaRecord * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITMediaRecord * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITMediaRecord * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITMediaRecord * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITMediaRecord * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in ITMediaRecord * This,
                       __RPC__in BSTR bstrFileName);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in ITMediaRecord * This,
                                __RPC__deref_out_opt BSTR *pbstrFileName);
        END_INTERFACE
    } ITMediaRecordVtbl;
    interface ITMediaRecord
    {
        CONST_VTBL struct ITMediaRecordVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_FileName(This,bstrFileName) )
    ( (This)->lpVtbl -> get_FileName(This,pbstrFileName) )
EXTERN_C const IID IID_ITMediaControl;
    typedef struct ITMediaControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMediaControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMediaControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMediaControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITMediaControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITMediaControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITMediaControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITMediaControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in ITMediaControl * This);
                               HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in ITMediaControl * This);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in ITMediaControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaState )(
            __RPC__in ITMediaControl * This,
                                __RPC__out TERMINAL_MEDIA_STATE *pTerminalMediaState);
        END_INTERFACE
    } ITMediaControlVtbl;
    interface ITMediaControl
    {
        CONST_VTBL struct ITMediaControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> get_MediaState(This,pTerminalMediaState) )
EXTERN_C const IID IID_ITBasicAudioTerminal;
    typedef struct ITBasicAudioTerminalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITBasicAudioTerminal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITBasicAudioTerminal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITBasicAudioTerminal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITBasicAudioTerminal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITBasicAudioTerminal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITBasicAudioTerminal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITBasicAudioTerminal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in ITBasicAudioTerminal * This,
                       long lVolume);
                                        HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in ITBasicAudioTerminal * This,
                                __RPC__out long *plVolume);
                                        HRESULT ( STDMETHODCALLTYPE *put_Balance )(
            __RPC__in ITBasicAudioTerminal * This,
                       long lBalance);
                                        HRESULT ( STDMETHODCALLTYPE *get_Balance )(
            __RPC__in ITBasicAudioTerminal * This,
                                __RPC__out long *plBalance);
        END_INTERFACE
    } ITBasicAudioTerminalVtbl;
    interface ITBasicAudioTerminal
    {
        CONST_VTBL struct ITBasicAudioTerminalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_Volume(This,lVolume) )
    ( (This)->lpVtbl -> get_Volume(This,plVolume) )
    ( (This)->lpVtbl -> put_Balance(This,lBalance) )
    ( (This)->lpVtbl -> get_Balance(This,plBalance) )
EXTERN_C const IID IID_ITStaticAudioTerminal;
    typedef struct ITStaticAudioTerminalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITStaticAudioTerminal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITStaticAudioTerminal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITStaticAudioTerminal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITStaticAudioTerminal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITStaticAudioTerminal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITStaticAudioTerminal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITStaticAudioTerminal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_WaveId )(
            __RPC__in ITStaticAudioTerminal * This,
                                __RPC__out long *plWaveId);
        END_INTERFACE
    } ITStaticAudioTerminalVtbl;
    interface ITStaticAudioTerminal
    {
        CONST_VTBL struct ITStaticAudioTerminalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_WaveId(This,plWaveId) )
EXTERN_C const IID IID_ITCallHub;
    typedef struct ITCallHubVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallHub * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallHub * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallHub * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallHub * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallHub * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallHub * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallHub * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ITCallHub * This);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateCalls )(
            __RPC__in ITCallHub * This,
                                __RPC__deref_out_opt IEnumCall **ppEnumCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Calls )(
            __RPC__in ITCallHub * This,
                                __RPC__out VARIANT *pCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumCalls )(
            __RPC__in ITCallHub * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITCallHub * This,
                                __RPC__out CALLHUB_STATE *pState);
        END_INTERFACE
    } ITCallHubVtbl;
    interface ITCallHub
    {
        CONST_VTBL struct ITCallHubVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> EnumerateCalls(This,ppEnumCall) )
    ( (This)->lpVtbl -> get_Calls(This,pCalls) )
    ( (This)->lpVtbl -> get_NumCalls(This,plCalls) )
    ( (This)->lpVtbl -> get_State(This,pState) )
EXTERN_C const IID IID_ITLegacyAddressMediaControl;
    typedef struct ITLegacyAddressMediaControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITLegacyAddressMediaControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITLegacyAddressMediaControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITLegacyAddressMediaControl * This);
                           HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in ITLegacyAddressMediaControl * This,
                       __RPC__in BSTR pDeviceClass,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppDeviceID);
                           HRESULT ( STDMETHODCALLTYPE *GetDevConfig )(
            __RPC__in ITLegacyAddressMediaControl * This,
                       __RPC__in BSTR pDeviceClass,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppDeviceConfig);
                           HRESULT ( STDMETHODCALLTYPE *SetDevConfig )(
            __RPC__in ITLegacyAddressMediaControl * This,
                       __RPC__in BSTR pDeviceClass,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSize) BYTE *pDeviceConfig);
        END_INTERFACE
    } ITLegacyAddressMediaControlVtbl;
    interface ITLegacyAddressMediaControl
    {
        CONST_VTBL struct ITLegacyAddressMediaControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
    ( (This)->lpVtbl -> GetDevConfig(This,pDeviceClass,pdwSize,ppDeviceConfig) )
    ( (This)->lpVtbl -> SetDevConfig(This,pDeviceClass,dwSize,pDeviceConfig) )
EXTERN_C const IID IID_ITPrivateEvent;
    typedef struct ITPrivateEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPrivateEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPrivateEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPrivateEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPrivateEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPrivateEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPrivateEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPrivateEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITPrivateEvent * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITPrivateEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHub )(
            __RPC__in ITPrivateEvent * This,
                                __RPC__deref_out_opt ITCallHub **ppCallHub);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventCode )(
            __RPC__in ITPrivateEvent * This,
                                __RPC__out long *plEventCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventInterface )(
            __RPC__in ITPrivateEvent * This,
                                __RPC__deref_out_opt IDispatch **pEventInterface);
        END_INTERFACE
    } ITPrivateEventVtbl;
    interface ITPrivateEvent
    {
        CONST_VTBL struct ITPrivateEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
    ( (This)->lpVtbl -> get_EventCode(This,plEventCode) )
    ( (This)->lpVtbl -> get_EventInterface(This,pEventInterface) )
EXTERN_C const IID IID_ITLegacyAddressMediaControl2;
    typedef struct ITLegacyAddressMediaControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITLegacyAddressMediaControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITLegacyAddressMediaControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITLegacyAddressMediaControl2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in ITLegacyAddressMediaControl2 * This,
                       __RPC__in BSTR pDeviceClass,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppDeviceID);
                           HRESULT ( STDMETHODCALLTYPE *GetDevConfig )(
            __RPC__in ITLegacyAddressMediaControl2 * This,
                       __RPC__in BSTR pDeviceClass,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppDeviceConfig);
                           HRESULT ( STDMETHODCALLTYPE *SetDevConfig )(
            __RPC__in ITLegacyAddressMediaControl2 * This,
                       __RPC__in BSTR pDeviceClass,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSize) BYTE *pDeviceConfig);
                           HRESULT ( STDMETHODCALLTYPE *ConfigDialog )(
            __RPC__in ITLegacyAddressMediaControl2 * This,
                       __RPC__in HWND hwndOwner,
                       __RPC__in BSTR pDeviceClass);
                           HRESULT ( STDMETHODCALLTYPE *ConfigDialogEdit )(
            __RPC__in ITLegacyAddressMediaControl2 * This,
                       __RPC__in HWND hwndOwner,
                       __RPC__in BSTR pDeviceClass,
                       DWORD dwSizeIn,
                                __RPC__in_ecount_full(dwSizeIn) BYTE *pDeviceConfigIn,
                        __RPC__out DWORD *pdwSizeOut,
                                          __RPC__deref_out_ecount_full_opt(*pdwSizeOut) BYTE **ppDeviceConfigOut);
        END_INTERFACE
    } ITLegacyAddressMediaControl2Vtbl;
    interface ITLegacyAddressMediaControl2
    {
        CONST_VTBL struct ITLegacyAddressMediaControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
    ( (This)->lpVtbl -> GetDevConfig(This,pDeviceClass,pdwSize,ppDeviceConfig) )
    ( (This)->lpVtbl -> SetDevConfig(This,pDeviceClass,dwSize,pDeviceConfig) )
    ( (This)->lpVtbl -> ConfigDialog(This,hwndOwner,pDeviceClass) )
    ( (This)->lpVtbl -> ConfigDialogEdit(This,hwndOwner,pDeviceClass,dwSizeIn,pDeviceConfigIn,pdwSizeOut,ppDeviceConfigOut) )
EXTERN_C const IID IID_ITLegacyCallMediaControl;
    typedef struct ITLegacyCallMediaControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITLegacyCallMediaControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITLegacyCallMediaControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITLegacyCallMediaControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITLegacyCallMediaControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITLegacyCallMediaControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITLegacyCallMediaControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITLegacyCallMediaControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DetectDigits )(
            __RPC__in ITLegacyCallMediaControl * This,
                       TAPI_DIGITMODE DigitMode);
                               HRESULT ( STDMETHODCALLTYPE *GenerateDigits )(
            __RPC__in ITLegacyCallMediaControl * This,
                       __RPC__in BSTR pDigits,
                       TAPI_DIGITMODE DigitMode);
                           HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in ITLegacyCallMediaControl * This,
                       __RPC__in BSTR pDeviceClass,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppDeviceID);
                               HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            __RPC__in ITLegacyCallMediaControl * This,
                       long lMediaType);
                               HRESULT ( STDMETHODCALLTYPE *MonitorMedia )(
            __RPC__in ITLegacyCallMediaControl * This,
                       long lMediaType);
        END_INTERFACE
    } ITLegacyCallMediaControlVtbl;
    interface ITLegacyCallMediaControl
    {
        CONST_VTBL struct ITLegacyCallMediaControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DetectDigits(This,DigitMode) )
    ( (This)->lpVtbl -> GenerateDigits(This,pDigits,DigitMode) )
    ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
    ( (This)->lpVtbl -> SetMediaType(This,lMediaType) )
    ( (This)->lpVtbl -> MonitorMedia(This,lMediaType) )
EXTERN_C const IID IID_ITLegacyCallMediaControl2;
    typedef struct ITLegacyCallMediaControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITLegacyCallMediaControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITLegacyCallMediaControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITLegacyCallMediaControl2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DetectDigits )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       TAPI_DIGITMODE DigitMode);
                               HRESULT ( STDMETHODCALLTYPE *GenerateDigits )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in BSTR pDigits,
                       TAPI_DIGITMODE DigitMode);
                           HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in BSTR pDeviceClass,
                        __RPC__out DWORD *pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*pdwSize) BYTE **ppDeviceID);
                               HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       long lMediaType);
                               HRESULT ( STDMETHODCALLTYPE *MonitorMedia )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       long lMediaType);
                               HRESULT ( STDMETHODCALLTYPE *GenerateDigits2 )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in BSTR pDigits,
                       TAPI_DIGITMODE DigitMode,
                       long lDuration);
                               HRESULT ( STDMETHODCALLTYPE *GatherDigits )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       TAPI_DIGITMODE DigitMode,
                       long lNumDigits,
                       __RPC__in BSTR pTerminationDigits,
                       long lFirstDigitTimeout,
                       long lInterDigitTimeout);
                                       HRESULT ( STDMETHODCALLTYPE *DetectTones )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in TAPI_DETECTTONE *pToneList,
                       long lNumTones);
                               HRESULT ( STDMETHODCALLTYPE *DetectTonesByCollection )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in_opt ITCollection2 *pDetectToneCollection);
                               HRESULT ( STDMETHODCALLTYPE *GenerateTone )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       TAPI_TONEMODE ToneMode,
                       long lDuration);
                                       HRESULT ( STDMETHODCALLTYPE *GenerateCustomTones )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in TAPI_CUSTOMTONE *pToneList,
                       long lNumTones,
                       long lDuration);
                               HRESULT ( STDMETHODCALLTYPE *GenerateCustomTonesByCollection )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in_opt ITCollection2 *pCustomToneCollection,
                       long lDuration);
                               HRESULT ( STDMETHODCALLTYPE *CreateDetectToneObject )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                                __RPC__deref_out_opt ITDetectTone **ppDetectTone);
                               HRESULT ( STDMETHODCALLTYPE *CreateCustomToneObject )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                                __RPC__deref_out_opt ITCustomTone **ppCustomTone);
                               HRESULT ( STDMETHODCALLTYPE *GetIDAsVariant )(
            __RPC__in ITLegacyCallMediaControl2 * This,
                       __RPC__in BSTR bstrDeviceClass,
                                __RPC__out VARIANT *pVarDeviceID);
        END_INTERFACE
    } ITLegacyCallMediaControl2Vtbl;
    interface ITLegacyCallMediaControl2
    {
        CONST_VTBL struct ITLegacyCallMediaControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DetectDigits(This,DigitMode) )
    ( (This)->lpVtbl -> GenerateDigits(This,pDigits,DigitMode) )
    ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
    ( (This)->lpVtbl -> SetMediaType(This,lMediaType) )
    ( (This)->lpVtbl -> MonitorMedia(This,lMediaType) )
    ( (This)->lpVtbl -> GenerateDigits2(This,pDigits,DigitMode,lDuration) )
    ( (This)->lpVtbl -> GatherDigits(This,DigitMode,lNumDigits,pTerminationDigits,lFirstDigitTimeout,lInterDigitTimeout) )
    ( (This)->lpVtbl -> DetectTones(This,pToneList,lNumTones) )
    ( (This)->lpVtbl -> DetectTonesByCollection(This,pDetectToneCollection) )
    ( (This)->lpVtbl -> GenerateTone(This,ToneMode,lDuration) )
    ( (This)->lpVtbl -> GenerateCustomTones(This,pToneList,lNumTones,lDuration) )
    ( (This)->lpVtbl -> GenerateCustomTonesByCollection(This,pCustomToneCollection,lDuration) )
    ( (This)->lpVtbl -> CreateDetectToneObject(This,ppDetectTone) )
    ( (This)->lpVtbl -> CreateCustomToneObject(This,ppCustomTone) )
    ( (This)->lpVtbl -> GetIDAsVariant(This,bstrDeviceClass,pVarDeviceID) )
EXTERN_C const IID IID_ITDetectTone;
    typedef struct ITDetectToneVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDetectTone * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDetectTone * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDetectTone * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDetectTone * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDetectTone * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDetectTone * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDetectTone * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AppSpecific )(
            __RPC__in ITDetectTone * This,
                                __RPC__out long *plAppSpecific);
                                        HRESULT ( STDMETHODCALLTYPE *put_AppSpecific )(
            __RPC__in ITDetectTone * This,
                       long lAppSpecific);
                                        HRESULT ( STDMETHODCALLTYPE *get_Duration )(
            __RPC__in ITDetectTone * This,
                                __RPC__out long *plDuration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Duration )(
            __RPC__in ITDetectTone * This,
                       long lDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_Frequency )(
            __RPC__in ITDetectTone * This,
                       long Index,
                                __RPC__out long *plFrequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_Frequency )(
            __RPC__in ITDetectTone * This,
                       long Index,
                       long lFrequency);
        END_INTERFACE
    } ITDetectToneVtbl;
    interface ITDetectTone
    {
        CONST_VTBL struct ITDetectToneVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
    ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
    ( (This)->lpVtbl -> get_Duration(This,plDuration) )
    ( (This)->lpVtbl -> put_Duration(This,lDuration) )
    ( (This)->lpVtbl -> get_Frequency(This,Index,plFrequency) )
    ( (This)->lpVtbl -> put_Frequency(This,Index,lFrequency) )
EXTERN_C const IID IID_ITCustomTone;
    typedef struct ITCustomToneVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCustomTone * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCustomTone * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCustomTone * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCustomTone * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCustomTone * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCustomTone * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCustomTone * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Frequency )(
            __RPC__in ITCustomTone * This,
                                __RPC__out long *plFrequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_Frequency )(
            __RPC__in ITCustomTone * This,
                       long lFrequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_CadenceOn )(
            __RPC__in ITCustomTone * This,
                                __RPC__out long *plCadenceOn);
                                        HRESULT ( STDMETHODCALLTYPE *put_CadenceOn )(
            __RPC__in ITCustomTone * This,
                       long CadenceOn);
                                        HRESULT ( STDMETHODCALLTYPE *get_CadenceOff )(
            __RPC__in ITCustomTone * This,
                                __RPC__out long *plCadenceOff);
                                        HRESULT ( STDMETHODCALLTYPE *put_CadenceOff )(
            __RPC__in ITCustomTone * This,
                       long lCadenceOff);
                                        HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in ITCustomTone * This,
                                __RPC__out long *plVolume);
                                        HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in ITCustomTone * This,
                       long lVolume);
        END_INTERFACE
    } ITCustomToneVtbl;
    interface ITCustomTone
    {
        CONST_VTBL struct ITCustomToneVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Frequency(This,plFrequency) )
    ( (This)->lpVtbl -> put_Frequency(This,lFrequency) )
    ( (This)->lpVtbl -> get_CadenceOn(This,plCadenceOn) )
    ( (This)->lpVtbl -> put_CadenceOn(This,CadenceOn) )
    ( (This)->lpVtbl -> get_CadenceOff(This,plCadenceOff) )
    ( (This)->lpVtbl -> put_CadenceOff(This,lCadenceOff) )
    ( (This)->lpVtbl -> get_Volume(This,plVolume) )
    ( (This)->lpVtbl -> put_Volume(This,lVolume) )
EXTERN_C const IID IID_IEnumPhone;
    typedef struct IEnumPhoneVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPhone * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPhone * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPhone * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPhone * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ITPhone **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPhone * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumPhone * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumPhone * This,
                                __RPC__deref_out_opt IEnumPhone **ppEnum);
        END_INTERFACE
    } IEnumPhoneVtbl;
    interface IEnumPhone
    {
        CONST_VTBL struct IEnumPhoneVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumTerminal;
    typedef struct IEnumTerminalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTerminal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTerminal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTerminal * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTerminal * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITTerminal **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTerminal * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTerminal * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTerminal * This,
                                __RPC__deref_out_opt IEnumTerminal **ppEnum);
        END_INTERFACE
    } IEnumTerminalVtbl;
    interface IEnumTerminal
    {
        CONST_VTBL struct IEnumTerminalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumTerminalClass;
    typedef struct IEnumTerminalClassVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTerminalClass * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTerminalClass * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTerminalClass * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTerminalClass * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) GUID *pElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTerminalClass * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTerminalClass * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTerminalClass * This,
                                __RPC__deref_out_opt IEnumTerminalClass **ppEnum);
        END_INTERFACE
    } IEnumTerminalClassVtbl;
    interface IEnumTerminalClass
    {
        CONST_VTBL struct IEnumTerminalClassVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumCall;
    typedef struct IEnumCallVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumCall * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumCall * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumCall * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumCall * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITCallInfo **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumCall * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumCall * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumCall * This,
                                __RPC__deref_out_opt IEnumCall **ppEnum);
        END_INTERFACE
    } IEnumCallVtbl;
    interface IEnumCall
    {
        CONST_VTBL struct IEnumCallVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumAddress;
    typedef struct IEnumAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumAddress * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ITAddress **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumAddress * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumAddress * This,
                                __RPC__deref_out_opt IEnumAddress **ppEnum);
        END_INTERFACE
    } IEnumAddressVtbl;
    interface IEnumAddress
    {
        CONST_VTBL struct IEnumAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumCallHub;
    typedef struct IEnumCallHubVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumCallHub * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumCallHub * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumCallHub * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumCallHub * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ITCallHub **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumCallHub * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumCallHub * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumCallHub * This,
                                __RPC__deref_out_opt IEnumCallHub **ppEnum);
        END_INTERFACE
    } IEnumCallHubVtbl;
    interface IEnumCallHub
    {
        CONST_VTBL struct IEnumCallHubVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumBstr;
    typedef struct IEnumBstrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBstr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBstr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBstr * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBstr * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) BSTR *ppStrings,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBstr * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBstr * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBstr * This,
                                __RPC__deref_out_opt IEnumBstr **ppEnum);
        END_INTERFACE
    } IEnumBstrVtbl;
    interface IEnumBstr
    {
        CONST_VTBL struct IEnumBstrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppStrings,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumPluggableTerminalClassInfo;
    typedef struct IEnumPluggableTerminalClassInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPluggableTerminalClassInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPluggableTerminalClassInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPluggableTerminalClassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPluggableTerminalClassInfo * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ITPluggableTerminalClassInfo **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPluggableTerminalClassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumPluggableTerminalClassInfo * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumPluggableTerminalClassInfo * This,
                                __RPC__deref_out_opt IEnumPluggableTerminalClassInfo **ppEnum);
        END_INTERFACE
    } IEnumPluggableTerminalClassInfoVtbl;
    interface IEnumPluggableTerminalClassInfo
    {
        CONST_VTBL struct IEnumPluggableTerminalClassInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumPluggableSuperclassInfo;
    typedef struct IEnumPluggableSuperclassInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPluggableSuperclassInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPluggableSuperclassInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPluggableSuperclassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPluggableSuperclassInfo * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ITPluggableTerminalSuperclassInfo **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPluggableSuperclassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumPluggableSuperclassInfo * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumPluggableSuperclassInfo * This,
                                __RPC__deref_out_opt IEnumPluggableSuperclassInfo **ppEnum);
        END_INTERFACE
    } IEnumPluggableSuperclassInfoVtbl;
    interface IEnumPluggableSuperclassInfo
    {
        CONST_VTBL struct IEnumPluggableSuperclassInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITPhoneEvent;
    typedef struct ITPhoneEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPhoneEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPhoneEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPhoneEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPhoneEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPhoneEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPhoneEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPhoneEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Phone )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__deref_out_opt ITPhone **ppPhone);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__out PHONE_EVENT *pEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonState )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__out PHONE_BUTTON_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *get_HookSwitchState )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__out PHONE_HOOK_SWITCH_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *get_HookSwitchDevice )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__out PHONE_HOOK_SWITCH_DEVICE *pDevice);
                                        HRESULT ( STDMETHODCALLTYPE *get_RingMode )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__out long *plRingMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonLampId )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__out long *plButtonLampId);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberGathered )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__deref_out_opt BSTR *ppNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITPhoneEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
        END_INTERFACE
    } ITPhoneEventVtbl;
    interface ITPhoneEvent
    {
        CONST_VTBL struct ITPhoneEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Phone(This,ppPhone) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
    ( (This)->lpVtbl -> get_ButtonState(This,pState) )
    ( (This)->lpVtbl -> get_HookSwitchState(This,pState) )
    ( (This)->lpVtbl -> get_HookSwitchDevice(This,pDevice) )
    ( (This)->lpVtbl -> get_RingMode(This,plRingMode) )
    ( (This)->lpVtbl -> get_ButtonLampId(This,plButtonLampId) )
    ( (This)->lpVtbl -> get_NumberGathered(This,ppNumber) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
EXTERN_C const IID IID_ITCallStateEvent;
    typedef struct ITCallStateEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallStateEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallStateEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallStateEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallStateEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallStateEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallStateEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallStateEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITCallStateEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITCallStateEvent * This,
                                __RPC__out CALL_STATE *pCallState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cause )(
            __RPC__in ITCallStateEvent * This,
                                __RPC__out CALL_STATE_EVENT_CAUSE *pCEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITCallStateEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITCallStateEventVtbl;
    interface ITCallStateEvent
    {
        CONST_VTBL struct ITCallStateEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_State(This,pCallState) )
    ( (This)->lpVtbl -> get_Cause(This,pCEC) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITPhoneDeviceSpecificEvent;
    typedef struct ITPhoneDeviceSpecificEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPhoneDeviceSpecificEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPhoneDeviceSpecificEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPhoneDeviceSpecificEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Phone )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                                __RPC__deref_out_opt ITPhone **ppPhone);
                                        HRESULT ( STDMETHODCALLTYPE *get_lParam1 )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                                __RPC__out long *pParam1);
                                        HRESULT ( STDMETHODCALLTYPE *get_lParam2 )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                                __RPC__out long *pParam2);
                                        HRESULT ( STDMETHODCALLTYPE *get_lParam3 )(
            __RPC__in ITPhoneDeviceSpecificEvent * This,
                                __RPC__out long *pParam3);
        END_INTERFACE
    } ITPhoneDeviceSpecificEventVtbl;
    interface ITPhoneDeviceSpecificEvent
    {
        CONST_VTBL struct ITPhoneDeviceSpecificEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Phone(This,ppPhone) )
    ( (This)->lpVtbl -> get_lParam1(This,pParam1) )
    ( (This)->lpVtbl -> get_lParam2(This,pParam2) )
    ( (This)->lpVtbl -> get_lParam3(This,pParam3) )
EXTERN_C const IID IID_ITCallMediaEvent;
    typedef struct ITCallMediaEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallMediaEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallMediaEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallMediaEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallMediaEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallMediaEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallMediaEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITCallMediaEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITCallMediaEvent * This,
                                __RPC__out CALL_MEDIA_EVENT *pCallMediaEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Error )(
            __RPC__in ITCallMediaEvent * This,
                                __RPC__out HRESULT *phrError);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminal )(
            __RPC__in ITCallMediaEvent * This,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Stream )(
            __RPC__in ITCallMediaEvent * This,
                                __RPC__deref_out_opt ITStream **ppStream);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cause )(
            __RPC__in ITCallMediaEvent * This,
                                __RPC__out CALL_MEDIA_EVENT_CAUSE *pCause);
        END_INTERFACE
    } ITCallMediaEventVtbl;
    interface ITCallMediaEvent
    {
        CONST_VTBL struct ITCallMediaEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_Event(This,pCallMediaEvent) )
    ( (This)->lpVtbl -> get_Error(This,phrError) )
    ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
    ( (This)->lpVtbl -> get_Stream(This,ppStream) )
    ( (This)->lpVtbl -> get_Cause(This,pCause) )
EXTERN_C const IID IID_ITDigitDetectionEvent;
    typedef struct ITDigitDetectionEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDigitDetectionEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDigitDetectionEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDigitDetectionEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDigitDetectionEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDigitDetectionEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDigitDetectionEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDigitDetectionEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITDigitDetectionEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_Digit )(
            __RPC__in ITDigitDetectionEvent * This,
                                __RPC__out unsigned char *pucDigit);
                                        HRESULT ( STDMETHODCALLTYPE *get_DigitMode )(
            __RPC__in ITDigitDetectionEvent * This,
                                __RPC__out TAPI_DIGITMODE *pDigitMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_TickCount )(
            __RPC__in ITDigitDetectionEvent * This,
                                __RPC__out long *plTickCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITDigitDetectionEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITDigitDetectionEventVtbl;
    interface ITDigitDetectionEvent
    {
        CONST_VTBL struct ITDigitDetectionEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_Digit(This,pucDigit) )
    ( (This)->lpVtbl -> get_DigitMode(This,pDigitMode) )
    ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITDigitGenerationEvent;
    typedef struct ITDigitGenerationEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDigitGenerationEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDigitGenerationEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDigitGenerationEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDigitGenerationEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDigitGenerationEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDigitGenerationEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDigitGenerationEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITDigitGenerationEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_GenerationTermination )(
            __RPC__in ITDigitGenerationEvent * This,
                                __RPC__out long *plGenerationTermination);
                                        HRESULT ( STDMETHODCALLTYPE *get_TickCount )(
            __RPC__in ITDigitGenerationEvent * This,
                                __RPC__out long *plTickCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITDigitGenerationEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITDigitGenerationEventVtbl;
    interface ITDigitGenerationEvent
    {
        CONST_VTBL struct ITDigitGenerationEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_GenerationTermination(This,plGenerationTermination) )
    ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITDigitsGatheredEvent;
    typedef struct ITDigitsGatheredEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDigitsGatheredEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDigitsGatheredEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDigitsGatheredEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDigitsGatheredEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDigitsGatheredEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDigitsGatheredEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDigitsGatheredEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITDigitsGatheredEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_Digits )(
            __RPC__in ITDigitsGatheredEvent * This,
                                __RPC__deref_out_opt BSTR *ppDigits);
                                        HRESULT ( STDMETHODCALLTYPE *get_GatherTermination )(
            __RPC__in ITDigitsGatheredEvent * This,
                                __RPC__out TAPI_GATHERTERM *pGatherTermination);
                                        HRESULT ( STDMETHODCALLTYPE *get_TickCount )(
            __RPC__in ITDigitsGatheredEvent * This,
                                __RPC__out long *plTickCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITDigitsGatheredEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITDigitsGatheredEventVtbl;
    interface ITDigitsGatheredEvent
    {
        CONST_VTBL struct ITDigitsGatheredEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_Digits(This,ppDigits) )
    ( (This)->lpVtbl -> get_GatherTermination(This,pGatherTermination) )
    ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITToneDetectionEvent;
    typedef struct ITToneDetectionEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITToneDetectionEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITToneDetectionEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITToneDetectionEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITToneDetectionEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITToneDetectionEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITToneDetectionEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITToneDetectionEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITToneDetectionEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCallInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_AppSpecific )(
            __RPC__in ITToneDetectionEvent * This,
                                __RPC__out long *plAppSpecific);
                                        HRESULT ( STDMETHODCALLTYPE *get_TickCount )(
            __RPC__in ITToneDetectionEvent * This,
                                __RPC__out long *plTickCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITToneDetectionEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITToneDetectionEventVtbl;
    interface ITToneDetectionEvent
    {
        CONST_VTBL struct ITToneDetectionEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
    ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
    ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITTAPIObjectEvent;
    typedef struct ITTAPIObjectEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPIObjectEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPIObjectEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPIObjectEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTAPIObjectEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTAPIObjectEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTAPIObjectEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTAPIObjectEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TAPIObject )(
            __RPC__in ITTAPIObjectEvent * This,
                                __RPC__deref_out_opt ITTAPI **ppTAPIObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITTAPIObjectEvent * This,
                                __RPC__out TAPIOBJECT_EVENT *pEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITTAPIObjectEvent * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITTAPIObjectEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITTAPIObjectEventVtbl;
    interface ITTAPIObjectEvent
    {
        CONST_VTBL struct ITTAPIObjectEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TAPIObject(This,ppTAPIObject) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITTAPIObjectEvent2;
    typedef struct ITTAPIObjectEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPIObjectEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPIObjectEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPIObjectEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTAPIObjectEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTAPIObjectEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTAPIObjectEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTAPIObjectEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TAPIObject )(
            __RPC__in ITTAPIObjectEvent2 * This,
                                __RPC__deref_out_opt ITTAPI **ppTAPIObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITTAPIObjectEvent2 * This,
                                __RPC__out TAPIOBJECT_EVENT *pEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITTAPIObjectEvent2 * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITTAPIObjectEvent2 * This,
                                __RPC__out long *plCallbackInstance);
                                        HRESULT ( STDMETHODCALLTYPE *get_Phone )(
            __RPC__in ITTAPIObjectEvent2 * This,
                                __RPC__deref_out_opt ITPhone **ppPhone);
        END_INTERFACE
    } ITTAPIObjectEvent2Vtbl;
    interface ITTAPIObjectEvent2
    {
        CONST_VTBL struct ITTAPIObjectEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TAPIObject(This,ppTAPIObject) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
    ( (This)->lpVtbl -> get_Phone(This,ppPhone) )
EXTERN_C const IID IID_ITTAPIEventNotification;
    typedef struct ITTAPIEventNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPIEventNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPIEventNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPIEventNotification * This);
                               HRESULT ( STDMETHODCALLTYPE *Event )(
            __RPC__in ITTAPIEventNotification * This,
                       TAPI_EVENT TapiEvent,
                       __RPC__in_opt IDispatch *pEvent);
        END_INTERFACE
    } ITTAPIEventNotificationVtbl;
    interface ITTAPIEventNotification
    {
        CONST_VTBL struct ITTAPIEventNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Event(This,TapiEvent,pEvent) )
EXTERN_C const IID IID_ITCallHubEvent;
    typedef struct ITCallHubEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallHubEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallHubEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallHubEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallHubEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallHubEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallHubEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallHubEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITCallHubEvent * This,
                                __RPC__out CALLHUB_EVENT *pEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHub )(
            __RPC__in ITCallHubEvent * This,
                                __RPC__deref_out_opt ITCallHub **ppCallHub);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITCallHubEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
        END_INTERFACE
    } ITCallHubEventVtbl;
    interface ITCallHubEvent
    {
        CONST_VTBL struct ITCallHubEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
    ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
EXTERN_C const IID IID_ITAddressEvent;
    typedef struct ITAddressEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddressEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddressEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddressEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddressEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddressEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddressEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddressEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITAddressEvent * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITAddressEvent * This,
                                __RPC__out ADDRESS_EVENT *pEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminal )(
            __RPC__in ITAddressEvent * This,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
        END_INTERFACE
    } ITAddressEventVtbl;
    interface ITAddressEvent
    {
        CONST_VTBL struct ITAddressEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
    ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
EXTERN_C const IID IID_ITAddressDeviceSpecificEvent;
    typedef struct ITAddressDeviceSpecificEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddressDeviceSpecificEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddressDeviceSpecificEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddressDeviceSpecificEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_lParam1 )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                                __RPC__out long *pParam1);
                                        HRESULT ( STDMETHODCALLTYPE *get_lParam2 )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                                __RPC__out long *pParam2);
                                        HRESULT ( STDMETHODCALLTYPE *get_lParam3 )(
            __RPC__in ITAddressDeviceSpecificEvent * This,
                                __RPC__out long *pParam3);
        END_INTERFACE
    } ITAddressDeviceSpecificEventVtbl;
    interface ITAddressDeviceSpecificEvent
    {
        CONST_VTBL struct ITAddressDeviceSpecificEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_lParam1(This,pParam1) )
    ( (This)->lpVtbl -> get_lParam2(This,pParam2) )
    ( (This)->lpVtbl -> get_lParam3(This,pParam3) )
EXTERN_C const IID IID_ITFileTerminalEvent;
    typedef struct ITFileTerminalEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITFileTerminalEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITFileTerminalEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITFileTerminalEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITFileTerminalEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITFileTerminalEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITFileTerminalEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITFileTerminalEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminal )(
            __RPC__in ITFileTerminalEvent * This,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Track )(
            __RPC__in ITFileTerminalEvent * This,
                                __RPC__deref_out_opt ITFileTrack **ppTrackTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITFileTerminalEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITFileTerminalEvent * This,
                                __RPC__out TERMINAL_MEDIA_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cause )(
            __RPC__in ITFileTerminalEvent * This,
                                __RPC__out FT_STATE_EVENT_CAUSE *pCause);
                                        HRESULT ( STDMETHODCALLTYPE *get_Error )(
            __RPC__in ITFileTerminalEvent * This,
                                __RPC__out HRESULT *phrErrorCode);
        END_INTERFACE
    } ITFileTerminalEventVtbl;
    interface ITFileTerminalEvent
    {
        CONST_VTBL struct ITFileTerminalEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
    ( (This)->lpVtbl -> get_Track(This,ppTrackTerminal) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> get_Cause(This,pCause) )
    ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
EXTERN_C const IID IID_ITTTSTerminalEvent;
    typedef struct ITTTSTerminalEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTTSTerminalEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTTSTerminalEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTTSTerminalEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTTSTerminalEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTTSTerminalEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTTSTerminalEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTTSTerminalEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminal )(
            __RPC__in ITTTSTerminalEvent * This,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITTTSTerminalEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Error )(
            __RPC__in ITTTSTerminalEvent * This,
                                __RPC__out HRESULT *phrErrorCode);
        END_INTERFACE
    } ITTTSTerminalEventVtbl;
    interface ITTTSTerminalEvent
    {
        CONST_VTBL struct ITTTSTerminalEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
EXTERN_C const IID IID_ITASRTerminalEvent;
    typedef struct ITASRTerminalEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITASRTerminalEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITASRTerminalEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITASRTerminalEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITASRTerminalEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITASRTerminalEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITASRTerminalEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITASRTerminalEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminal )(
            __RPC__in ITASRTerminalEvent * This,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITASRTerminalEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Error )(
            __RPC__in ITASRTerminalEvent * This,
                                __RPC__out HRESULT *phrErrorCode);
        END_INTERFACE
    } ITASRTerminalEventVtbl;
    interface ITASRTerminalEvent
    {
        CONST_VTBL struct ITASRTerminalEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
EXTERN_C const IID IID_ITToneTerminalEvent;
    typedef struct ITToneTerminalEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITToneTerminalEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITToneTerminalEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITToneTerminalEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITToneTerminalEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITToneTerminalEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITToneTerminalEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITToneTerminalEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminal )(
            __RPC__in ITToneTerminalEvent * This,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITToneTerminalEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Error )(
            __RPC__in ITToneTerminalEvent * This,
                                __RPC__out HRESULT *phrErrorCode);
        END_INTERFACE
    } ITToneTerminalEventVtbl;
    interface ITToneTerminalEvent
    {
        CONST_VTBL struct ITToneTerminalEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
EXTERN_C const IID IID_ITQOSEvent;
    typedef struct ITQOSEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITQOSEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITQOSEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITQOSEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITQOSEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITQOSEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITQOSEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITQOSEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITQOSEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITQOSEvent * This,
                                __RPC__out QOS_EVENT *pQosEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in ITQOSEvent * This,
                                __RPC__out long *plMediaType);
        END_INTERFACE
    } ITQOSEventVtbl;
    interface ITQOSEvent
    {
        CONST_VTBL struct ITQOSEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_Event(This,pQosEvent) )
    ( (This)->lpVtbl -> get_MediaType(This,plMediaType) )
EXTERN_C const IID IID_ITCallInfoChangeEvent;
    typedef struct ITCallInfoChangeEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallInfoChangeEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallInfoChangeEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallInfoChangeEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallInfoChangeEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallInfoChangeEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallInfoChangeEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallInfoChangeEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITCallInfoChangeEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cause )(
            __RPC__in ITCallInfoChangeEvent * This,
                                __RPC__out CALLINFOCHANGE_CAUSE *pCIC);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITCallInfoChangeEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITCallInfoChangeEventVtbl;
    interface ITCallInfoChangeEvent
    {
        CONST_VTBL struct ITCallInfoChangeEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_Cause(This,pCIC) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITRequest;
    typedef struct ITRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *MakeCall )(
            __RPC__in ITRequest * This,
                       __RPC__in BSTR pDestAddress,
                       __RPC__in BSTR pAppName,
                       __RPC__in BSTR pCalledParty,
                       __RPC__in BSTR pComment);
        END_INTERFACE
    } ITRequestVtbl;
    interface ITRequest
    {
        CONST_VTBL struct ITRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> MakeCall(This,pDestAddress,pAppName,pCalledParty,pComment) )
EXTERN_C const IID IID_ITRequestEvent;
    typedef struct ITRequestEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITRequestEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITRequestEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITRequestEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITRequestEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITRequestEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITRequestEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITRequestEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegistrationInstance )(
            __RPC__in ITRequestEvent * This,
                                __RPC__out long *plRegistrationInstance);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestMode )(
            __RPC__in ITRequestEvent * This,
                                __RPC__out long *plRequestMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestAddress )(
            __RPC__in ITRequestEvent * This,
                                __RPC__deref_out_opt BSTR *ppDestAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_AppName )(
            __RPC__in ITRequestEvent * This,
                                __RPC__deref_out_opt BSTR *ppAppName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CalledParty )(
            __RPC__in ITRequestEvent * This,
                                __RPC__deref_out_opt BSTR *ppCalledParty);
                                        HRESULT ( STDMETHODCALLTYPE *get_Comment )(
            __RPC__in ITRequestEvent * This,
                                __RPC__deref_out_opt BSTR *ppComment);
        END_INTERFACE
    } ITRequestEventVtbl;
    interface ITRequestEvent
    {
        CONST_VTBL struct ITRequestEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RegistrationInstance(This,plRegistrationInstance) )
    ( (This)->lpVtbl -> get_RequestMode(This,plRequestMode) )
    ( (This)->lpVtbl -> get_DestAddress(This,ppDestAddress) )
    ( (This)->lpVtbl -> get_AppName(This,ppAppName) )
    ( (This)->lpVtbl -> get_CalledParty(This,ppCalledParty) )
    ( (This)->lpVtbl -> get_Comment(This,ppComment) )
EXTERN_C const IID IID_ITCollection;
    typedef struct ITCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ITCollection * This,
                                __RPC__out long *lCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ITCollection * This,
                       long Index,
                                __RPC__out VARIANT *pVariant);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ITCollection * This,
                                __RPC__deref_out_opt IUnknown **ppNewEnum);
        END_INTERFACE
    } ITCollectionVtbl;
    interface ITCollection
    {
        CONST_VTBL struct ITCollectionVtbl *lpVtbl;
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
EXTERN_C const IID IID_ITCollection2;
    typedef struct ITCollection2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCollection2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCollection2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCollection2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCollection2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCollection2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCollection2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCollection2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ITCollection2 * This,
                                __RPC__out long *lCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ITCollection2 * This,
                       long Index,
                                __RPC__out VARIANT *pVariant);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ITCollection2 * This,
                                __RPC__deref_out_opt IUnknown **ppNewEnum);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ITCollection2 * This,
                       long Index,
                       __RPC__in VARIANT *pVariant);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ITCollection2 * This,
                       long Index);
        END_INTERFACE
    } ITCollection2Vtbl;
    interface ITCollection2
    {
        CONST_VTBL struct ITCollection2Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> Add(This,Index,pVariant) )
    ( (This)->lpVtbl -> Remove(This,Index) )
EXTERN_C const IID IID_ITForwardInformation;
    typedef struct ITForwardInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITForwardInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITForwardInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITForwardInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITForwardInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITForwardInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITForwardInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITForwardInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_NumRingsNoAnswer )(
            __RPC__in ITForwardInformation * This,
                       long lNumRings);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumRingsNoAnswer )(
            __RPC__in ITForwardInformation * This,
                                __RPC__out long *plNumRings);
                               HRESULT ( STDMETHODCALLTYPE *SetForwardType )(
            __RPC__in ITForwardInformation * This,
                       long ForwardType,
                       __RPC__in BSTR pDestAddress,
                       __RPC__in BSTR pCallerAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForwardTypeDestination )(
            __RPC__in ITForwardInformation * This,
                       long ForwardType,
                                __RPC__deref_out_opt BSTR *ppDestAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForwardTypeCaller )(
            __RPC__in ITForwardInformation * This,
                       long Forwardtype,
                                __RPC__deref_out_opt BSTR *ppCallerAddress);
                           HRESULT ( STDMETHODCALLTYPE *GetForwardType )(
            __RPC__in ITForwardInformation * This,
                       long ForwardType,
                        __RPC__deref_out_opt BSTR *ppDestinationAddress,
                        __RPC__deref_out_opt BSTR *ppCallerAddress);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ITForwardInformation * This);
        END_INTERFACE
    } ITForwardInformationVtbl;
    interface ITForwardInformation
    {
        CONST_VTBL struct ITForwardInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_NumRingsNoAnswer(This,lNumRings) )
    ( (This)->lpVtbl -> get_NumRingsNoAnswer(This,plNumRings) )
    ( (This)->lpVtbl -> SetForwardType(This,ForwardType,pDestAddress,pCallerAddress) )
    ( (This)->lpVtbl -> get_ForwardTypeDestination(This,ForwardType,ppDestAddress) )
    ( (This)->lpVtbl -> get_ForwardTypeCaller(This,Forwardtype,ppCallerAddress) )
    ( (This)->lpVtbl -> GetForwardType(This,ForwardType,ppDestinationAddress,ppCallerAddress) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_ITForwardInformation2;
    typedef struct ITForwardInformation2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITForwardInformation2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITForwardInformation2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITForwardInformation2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITForwardInformation2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITForwardInformation2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITForwardInformation2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITForwardInformation2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_NumRingsNoAnswer )(
            __RPC__in ITForwardInformation2 * This,
                       long lNumRings);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumRingsNoAnswer )(
            __RPC__in ITForwardInformation2 * This,
                                __RPC__out long *plNumRings);
                               HRESULT ( STDMETHODCALLTYPE *SetForwardType )(
            __RPC__in ITForwardInformation2 * This,
                       long ForwardType,
                       __RPC__in BSTR pDestAddress,
                       __RPC__in BSTR pCallerAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForwardTypeDestination )(
            __RPC__in ITForwardInformation2 * This,
                       long ForwardType,
                                __RPC__deref_out_opt BSTR *ppDestAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForwardTypeCaller )(
            __RPC__in ITForwardInformation2 * This,
                       long Forwardtype,
                                __RPC__deref_out_opt BSTR *ppCallerAddress);
                           HRESULT ( STDMETHODCALLTYPE *GetForwardType )(
            __RPC__in ITForwardInformation2 * This,
                       long ForwardType,
                        __RPC__deref_out_opt BSTR *ppDestinationAddress,
                        __RPC__deref_out_opt BSTR *ppCallerAddress);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ITForwardInformation2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SetForwardType2 )(
            __RPC__in ITForwardInformation2 * This,
                       long ForwardType,
                       __RPC__in BSTR pDestAddress,
                       long DestAddressType,
                       __RPC__in BSTR pCallerAddress,
                       long CallerAddressType);
                           HRESULT ( STDMETHODCALLTYPE *GetForwardType2 )(
            __RPC__in ITForwardInformation2 * This,
                       long ForwardType,
                        __RPC__deref_out_opt BSTR *ppDestinationAddress,
                        __RPC__out long *pDestAddressType,
                        __RPC__deref_out_opt BSTR *ppCallerAddress,
                        __RPC__out long *pCallerAddressType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForwardTypeDestinationAddressType )(
            __RPC__in ITForwardInformation2 * This,
                       long ForwardType,
                                __RPC__out long *pDestAddressType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForwardTypeCallerAddressType )(
            __RPC__in ITForwardInformation2 * This,
                       long Forwardtype,
                                __RPC__out long *pCallerAddressType);
        END_INTERFACE
    } ITForwardInformation2Vtbl;
    interface ITForwardInformation2
    {
        CONST_VTBL struct ITForwardInformation2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_NumRingsNoAnswer(This,lNumRings) )
    ( (This)->lpVtbl -> get_NumRingsNoAnswer(This,plNumRings) )
    ( (This)->lpVtbl -> SetForwardType(This,ForwardType,pDestAddress,pCallerAddress) )
    ( (This)->lpVtbl -> get_ForwardTypeDestination(This,ForwardType,ppDestAddress) )
    ( (This)->lpVtbl -> get_ForwardTypeCaller(This,Forwardtype,ppCallerAddress) )
    ( (This)->lpVtbl -> GetForwardType(This,ForwardType,ppDestinationAddress,ppCallerAddress) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> SetForwardType2(This,ForwardType,pDestAddress,DestAddressType,pCallerAddress,CallerAddressType) )
    ( (This)->lpVtbl -> GetForwardType2(This,ForwardType,ppDestinationAddress,pDestAddressType,ppCallerAddress,pCallerAddressType) )
    ( (This)->lpVtbl -> get_ForwardTypeDestinationAddressType(This,ForwardType,pDestAddressType) )
    ( (This)->lpVtbl -> get_ForwardTypeCallerAddressType(This,Forwardtype,pCallerAddressType) )
EXTERN_C const IID IID_ITAddressTranslation;
    typedef struct ITAddressTranslationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddressTranslation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddressTranslation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddressTranslation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddressTranslation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddressTranslation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddressTranslation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddressTranslation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *TranslateAddress )(
            __RPC__in ITAddressTranslation * This,
                       __RPC__in BSTR pAddressToTranslate,
                       long lCard,
                       long lTranslateOptions,
                                __RPC__deref_out_opt ITAddressTranslationInfo **ppTranslated);
                               HRESULT ( STDMETHODCALLTYPE *TranslateDialog )(
            __RPC__in ITAddressTranslation * This,
                       TAPIHWND hwndOwner,
                       __RPC__in BSTR pAddressIn);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateLocations )(
            __RPC__in ITAddressTranslation * This,
                                __RPC__deref_out_opt IEnumLocation **ppEnumLocation);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locations )(
            __RPC__in ITAddressTranslation * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateCallingCards )(
            __RPC__in ITAddressTranslation * This,
                                __RPC__deref_out_opt IEnumCallingCard **ppEnumCallingCard);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallingCards )(
            __RPC__in ITAddressTranslation * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITAddressTranslationVtbl;
    interface ITAddressTranslation
    {
        CONST_VTBL struct ITAddressTranslationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> TranslateAddress(This,pAddressToTranslate,lCard,lTranslateOptions,ppTranslated) )
    ( (This)->lpVtbl -> TranslateDialog(This,hwndOwner,pAddressIn) )
    ( (This)->lpVtbl -> EnumerateLocations(This,ppEnumLocation) )
    ( (This)->lpVtbl -> get_Locations(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateCallingCards(This,ppEnumCallingCard) )
    ( (This)->lpVtbl -> get_CallingCards(This,pVariant) )
EXTERN_C const IID IID_ITAddressTranslationInfo;
    typedef struct ITAddressTranslationInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAddressTranslationInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAddressTranslationInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAddressTranslationInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAddressTranslationInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAddressTranslationInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAddressTranslationInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAddressTranslationInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DialableString )(
            __RPC__in ITAddressTranslationInfo * This,
                                __RPC__deref_out_opt BSTR *ppDialableString);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayableString )(
            __RPC__in ITAddressTranslationInfo * This,
                                __RPC__deref_out_opt BSTR *ppDisplayableString);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCountryCode )(
            __RPC__in ITAddressTranslationInfo * This,
                                __RPC__out long *CountryCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_DestinationCountryCode )(
            __RPC__in ITAddressTranslationInfo * This,
                                __RPC__out long *CountryCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_TranslationResults )(
            __RPC__in ITAddressTranslationInfo * This,
                                __RPC__out long *plResults);
        END_INTERFACE
    } ITAddressTranslationInfoVtbl;
    interface ITAddressTranslationInfo
    {
        CONST_VTBL struct ITAddressTranslationInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DialableString(This,ppDialableString) )
    ( (This)->lpVtbl -> get_DisplayableString(This,ppDisplayableString) )
    ( (This)->lpVtbl -> get_CurrentCountryCode(This,CountryCode) )
    ( (This)->lpVtbl -> get_DestinationCountryCode(This,CountryCode) )
    ( (This)->lpVtbl -> get_TranslationResults(This,plResults) )
EXTERN_C const IID IID_ITLocationInfo;
    typedef struct ITLocationInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITLocationInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITLocationInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITLocationInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITLocationInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITLocationInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITLocationInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITLocationInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermanentLocationID )(
            __RPC__in ITLocationInfo * This,
                                __RPC__out long *plLocationID);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in ITLocationInfo * This,
                                __RPC__out long *plCountryCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryID )(
            __RPC__in ITLocationInfo * This,
                                __RPC__out long *plCountryID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Options )(
            __RPC__in ITLocationInfo * This,
                                __RPC__out long *plOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreferredCardID )(
            __RPC__in ITLocationInfo * This,
                                __RPC__out long *plCardID);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocationName )(
            __RPC__in ITLocationInfo * This,
                                __RPC__deref_out_opt BSTR *ppLocationName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CityCode )(
            __RPC__in ITLocationInfo * This,
                                __RPC__deref_out_opt BSTR *ppCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalAccessCode )(
            __RPC__in ITLocationInfo * This,
                                __RPC__deref_out_opt BSTR *ppCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_LongDistanceAccessCode )(
            __RPC__in ITLocationInfo * This,
                                __RPC__deref_out_opt BSTR *ppCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_TollPrefixList )(
            __RPC__in ITLocationInfo * This,
                                __RPC__deref_out_opt BSTR *ppTollList);
                                        HRESULT ( STDMETHODCALLTYPE *get_CancelCallWaitingCode )(
            __RPC__in ITLocationInfo * This,
                                __RPC__deref_out_opt BSTR *ppCode);
        END_INTERFACE
    } ITLocationInfoVtbl;
    interface ITLocationInfo
    {
        CONST_VTBL struct ITLocationInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PermanentLocationID(This,plLocationID) )
    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
    ( (This)->lpVtbl -> get_CountryID(This,plCountryID) )
    ( (This)->lpVtbl -> get_Options(This,plOptions) )
    ( (This)->lpVtbl -> get_PreferredCardID(This,plCardID) )
    ( (This)->lpVtbl -> get_LocationName(This,ppLocationName) )
    ( (This)->lpVtbl -> get_CityCode(This,ppCode) )
    ( (This)->lpVtbl -> get_LocalAccessCode(This,ppCode) )
    ( (This)->lpVtbl -> get_LongDistanceAccessCode(This,ppCode) )
    ( (This)->lpVtbl -> get_TollPrefixList(This,ppTollList) )
    ( (This)->lpVtbl -> get_CancelCallWaitingCode(This,ppCode) )
EXTERN_C const IID IID_IEnumLocation;
    typedef struct IEnumLocationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumLocation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumLocation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumLocation * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumLocation * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITLocationInfo **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumLocation * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumLocation * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumLocation * This,
                                __RPC__deref_out_opt IEnumLocation **ppEnum);
        END_INTERFACE
    } IEnumLocationVtbl;
    interface IEnumLocation
    {
        CONST_VTBL struct IEnumLocationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITCallingCard;
    typedef struct ITCallingCardVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallingCard * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallingCard * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallingCard * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallingCard * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallingCard * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallingCard * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallingCard * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PermanentCardID )(
            __RPC__in ITCallingCard * This,
                                __RPC__out long *plCardID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfDigits )(
            __RPC__in ITCallingCard * This,
                                __RPC__out long *plDigits);
                                        HRESULT ( STDMETHODCALLTYPE *get_Options )(
            __RPC__in ITCallingCard * This,
                                __RPC__out long *plOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_CardName )(
            __RPC__in ITCallingCard * This,
                                __RPC__deref_out_opt BSTR *ppCardName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SameAreaDialingRule )(
            __RPC__in ITCallingCard * This,
                                __RPC__deref_out_opt BSTR *ppRule);
                                        HRESULT ( STDMETHODCALLTYPE *get_LongDistanceDialingRule )(
            __RPC__in ITCallingCard * This,
                                __RPC__deref_out_opt BSTR *ppRule);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternationalDialingRule )(
            __RPC__in ITCallingCard * This,
                                __RPC__deref_out_opt BSTR *ppRule);
        END_INTERFACE
    } ITCallingCardVtbl;
    interface ITCallingCard
    {
        CONST_VTBL struct ITCallingCardVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PermanentCardID(This,plCardID) )
    ( (This)->lpVtbl -> get_NumberOfDigits(This,plDigits) )
    ( (This)->lpVtbl -> get_Options(This,plOptions) )
    ( (This)->lpVtbl -> get_CardName(This,ppCardName) )
    ( (This)->lpVtbl -> get_SameAreaDialingRule(This,ppRule) )
    ( (This)->lpVtbl -> get_LongDistanceDialingRule(This,ppRule) )
    ( (This)->lpVtbl -> get_InternationalDialingRule(This,ppRule) )
EXTERN_C const IID IID_IEnumCallingCard;
    typedef struct IEnumCallingCardVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumCallingCard * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumCallingCard * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumCallingCard * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumCallingCard * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITCallingCard **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumCallingCard * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumCallingCard * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumCallingCard * This,
                                __RPC__deref_out_opt IEnumCallingCard **ppEnum);
        END_INTERFACE
    } IEnumCallingCardVtbl;
    interface IEnumCallingCard
    {
        CONST_VTBL struct IEnumCallingCardVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITCallNotificationEvent;
    typedef struct ITCallNotificationEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITCallNotificationEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITCallNotificationEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITCallNotificationEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITCallNotificationEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITCallNotificationEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITCallNotificationEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITCallNotificationEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Call )(
            __RPC__in ITCallNotificationEvent * This,
                                __RPC__deref_out_opt ITCallInfo **ppCall);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITCallNotificationEvent * This,
                                __RPC__out CALL_NOTIFICATION_EVENT *pCallNotificationEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallbackInstance )(
            __RPC__in ITCallNotificationEvent * This,
                                __RPC__out long *plCallbackInstance);
        END_INTERFACE
    } ITCallNotificationEventVtbl;
    interface ITCallNotificationEvent
    {
        CONST_VTBL struct ITCallNotificationEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Call(This,ppCall) )
    ( (This)->lpVtbl -> get_Event(This,pCallNotificationEvent) )
    ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
EXTERN_C const IID IID_ITDispatchMapper;
    typedef struct ITDispatchMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDispatchMapper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDispatchMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDispatchMapper * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDispatchMapper * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDispatchMapper * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDispatchMapper * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDispatchMapper * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *QueryDispatchInterface )(
            __RPC__in ITDispatchMapper * This,
                       __RPC__in BSTR pIID,
                       __RPC__in_opt IDispatch *pInterfaceToMap,
                                __RPC__deref_out_opt IDispatch **ppReturnedInterface);
        END_INTERFACE
    } ITDispatchMapperVtbl;
    interface ITDispatchMapper
    {
        CONST_VTBL struct ITDispatchMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> QueryDispatchInterface(This,pIID,pInterfaceToMap,ppReturnedInterface) )
EXTERN_C const IID IID_ITStreamControl;
    typedef struct ITStreamControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITStreamControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITStreamControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITStreamControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITStreamControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITStreamControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITStreamControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITStreamControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            __RPC__in ITStreamControl * This,
                       long lMediaType,
                       TERMINAL_DIRECTION td,
                                __RPC__deref_out_opt ITStream **ppStream);
                               HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            __RPC__in ITStreamControl * This,
                       __RPC__in_opt ITStream *pStream);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateStreams )(
            __RPC__in ITStreamControl * This,
                        __RPC__deref_out_opt IEnumStream **ppEnumStream);
                                        HRESULT ( STDMETHODCALLTYPE *get_Streams )(
            __RPC__in ITStreamControl * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITStreamControlVtbl;
    interface ITStreamControl
    {
        CONST_VTBL struct ITStreamControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateStream(This,lMediaType,td,ppStream) )
    ( (This)->lpVtbl -> RemoveStream(This,pStream) )
    ( (This)->lpVtbl -> EnumerateStreams(This,ppEnumStream) )
    ( (This)->lpVtbl -> get_Streams(This,pVariant) )
EXTERN_C const IID IID_ITStream;
    typedef struct ITStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in ITStream * This,
                                __RPC__out long *plMediaType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in ITStream * This,
                                __RPC__out TERMINAL_DIRECTION *pTD);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITStream * This,
                                __RPC__deref_out_opt BSTR *ppName);
                               HRESULT ( STDMETHODCALLTYPE *StartStream )(
            __RPC__in ITStream * This);
                               HRESULT ( STDMETHODCALLTYPE *PauseStream )(
            __RPC__in ITStream * This);
                               HRESULT ( STDMETHODCALLTYPE *StopStream )(
            __RPC__in ITStream * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectTerminal )(
            __RPC__in ITStream * This,
                       __RPC__in_opt ITTerminal *pTerminal);
                               HRESULT ( STDMETHODCALLTYPE *UnselectTerminal )(
            __RPC__in ITStream * This,
                       __RPC__in_opt ITTerminal *pTerminal);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateTerminals )(
            __RPC__in ITStream * This,
                        __RPC__deref_out_opt IEnumTerminal **ppEnumTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminals )(
            __RPC__in ITStream * This,
                                __RPC__out VARIANT *pTerminals);
        END_INTERFACE
    } ITStreamVtbl;
    interface ITStream
    {
        CONST_VTBL struct ITStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_MediaType(This,plMediaType) )
    ( (This)->lpVtbl -> get_Direction(This,pTD) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
    ( (This)->lpVtbl -> StartStream(This) )
    ( (This)->lpVtbl -> PauseStream(This) )
    ( (This)->lpVtbl -> StopStream(This) )
    ( (This)->lpVtbl -> SelectTerminal(This,pTerminal) )
    ( (This)->lpVtbl -> UnselectTerminal(This,pTerminal) )
    ( (This)->lpVtbl -> EnumerateTerminals(This,ppEnumTerminal) )
    ( (This)->lpVtbl -> get_Terminals(This,pTerminals) )
EXTERN_C const IID IID_IEnumStream;
    typedef struct IEnumStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumStream * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumStream * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITStream **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumStream * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumStream * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumStream * This,
                                __RPC__deref_out_opt IEnumStream **ppEnum);
        END_INTERFACE
    } IEnumStreamVtbl;
    interface IEnumStream
    {
        CONST_VTBL struct IEnumStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITSubStreamControl;
    typedef struct ITSubStreamControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSubStreamControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSubStreamControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSubStreamControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITSubStreamControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITSubStreamControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITSubStreamControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITSubStreamControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateSubStream )(
            __RPC__in ITSubStreamControl * This,
                                __RPC__deref_out_opt ITSubStream **ppSubStream);
                               HRESULT ( STDMETHODCALLTYPE *RemoveSubStream )(
            __RPC__in ITSubStreamControl * This,
                       __RPC__in_opt ITSubStream *pSubStream);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateSubStreams )(
            __RPC__in ITSubStreamControl * This,
                        __RPC__deref_out_opt IEnumSubStream **ppEnumSubStream);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubStreams )(
            __RPC__in ITSubStreamControl * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITSubStreamControlVtbl;
    interface ITSubStreamControl
    {
        CONST_VTBL struct ITSubStreamControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateSubStream(This,ppSubStream) )
    ( (This)->lpVtbl -> RemoveSubStream(This,pSubStream) )
    ( (This)->lpVtbl -> EnumerateSubStreams(This,ppEnumSubStream) )
    ( (This)->lpVtbl -> get_SubStreams(This,pVariant) )
EXTERN_C const IID IID_ITSubStream;
    typedef struct ITSubStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITSubStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITSubStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITSubStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITSubStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITSubStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITSubStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITSubStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *StartSubStream )(
            __RPC__in ITSubStream * This);
                               HRESULT ( STDMETHODCALLTYPE *PauseSubStream )(
            __RPC__in ITSubStream * This);
                               HRESULT ( STDMETHODCALLTYPE *StopSubStream )(
            __RPC__in ITSubStream * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectTerminal )(
            __RPC__in ITSubStream * This,
                       __RPC__in_opt ITTerminal *pTerminal);
                               HRESULT ( STDMETHODCALLTYPE *UnselectTerminal )(
            __RPC__in ITSubStream * This,
                       __RPC__in_opt ITTerminal *pTerminal);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateTerminals )(
            __RPC__in ITSubStream * This,
                        __RPC__deref_out_opt IEnumTerminal **ppEnumTerminal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Terminals )(
            __RPC__in ITSubStream * This,
                                __RPC__out VARIANT *pTerminals);
                                        HRESULT ( STDMETHODCALLTYPE *get_Stream )(
            __RPC__in ITSubStream * This,
                                __RPC__deref_out_opt ITStream **ppITStream);
        END_INTERFACE
    } ITSubStreamVtbl;
    interface ITSubStream
    {
        CONST_VTBL struct ITSubStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StartSubStream(This) )
    ( (This)->lpVtbl -> PauseSubStream(This) )
    ( (This)->lpVtbl -> StopSubStream(This) )
    ( (This)->lpVtbl -> SelectTerminal(This,pTerminal) )
    ( (This)->lpVtbl -> UnselectTerminal(This,pTerminal) )
    ( (This)->lpVtbl -> EnumerateTerminals(This,ppEnumTerminal) )
    ( (This)->lpVtbl -> get_Terminals(This,pTerminals) )
    ( (This)->lpVtbl -> get_Stream(This,ppITStream) )
EXTERN_C const IID IID_IEnumSubStream;
    typedef struct IEnumSubStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSubStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSubStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSubStream * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSubStream * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITSubStream **ppElements,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSubStream * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSubStream * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSubStream * This,
                                __RPC__deref_out_opt IEnumSubStream **ppEnum);
        END_INTERFACE
    } IEnumSubStreamVtbl;
    interface IEnumSubStream
    {
        CONST_VTBL struct IEnumSubStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITLegacyWaveSupport;
    typedef struct ITLegacyWaveSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITLegacyWaveSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITLegacyWaveSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITLegacyWaveSupport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITLegacyWaveSupport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITLegacyWaveSupport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITLegacyWaveSupport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITLegacyWaveSupport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *IsFullDuplex )(
            __RPC__in ITLegacyWaveSupport * This,
                        __RPC__out FULLDUPLEX_SUPPORT *pSupport);
        END_INTERFACE
    } ITLegacyWaveSupportVtbl;
    interface ITLegacyWaveSupport
    {
        CONST_VTBL struct ITLegacyWaveSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsFullDuplex(This,pSupport) )
EXTERN_C const IID IID_ITBasicCallControl2;
    typedef struct ITBasicCallControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITBasicCallControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITBasicCallControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITBasicCallControl2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITBasicCallControl2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITBasicCallControl2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ITBasicCallControl2 * This,
                       VARIANT_BOOL fSync);
                               HRESULT ( STDMETHODCALLTYPE *Answer )(
            __RPC__in ITBasicCallControl2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in ITBasicCallControl2 * This,
                       DISCONNECT_CODE code);
                               HRESULT ( STDMETHODCALLTYPE *Hold )(
            __RPC__in ITBasicCallControl2 * This,
                       VARIANT_BOOL fHold);
                               HRESULT ( STDMETHODCALLTYPE *HandoffDirect )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in BSTR pApplicationName);
                               HRESULT ( STDMETHODCALLTYPE *HandoffIndirect )(
            __RPC__in ITBasicCallControl2 * This,
                       long lMediaType);
                               HRESULT ( STDMETHODCALLTYPE *Conference )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in_opt ITBasicCallControl *pCall,
                       VARIANT_BOOL fSync);
                               HRESULT ( STDMETHODCALLTYPE *Transfer )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in_opt ITBasicCallControl *pCall,
                       VARIANT_BOOL fSync);
                               HRESULT ( STDMETHODCALLTYPE *BlindTransfer )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in BSTR pDestAddress);
                               HRESULT ( STDMETHODCALLTYPE *SwapHold )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in_opt ITBasicCallControl *pCall);
                               HRESULT ( STDMETHODCALLTYPE *ParkDirect )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in BSTR pParkAddress);
                               HRESULT ( STDMETHODCALLTYPE *ParkIndirect )(
            __RPC__in ITBasicCallControl2 * This,
                                __RPC__deref_out_opt BSTR *ppNonDirAddress);
                               HRESULT ( STDMETHODCALLTYPE *Unpark )(
            __RPC__in ITBasicCallControl2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SetQOS )(
            __RPC__in ITBasicCallControl2 * This,
                       long lMediaType,
                       QOS_SERVICE_LEVEL ServiceLevel);
                               HRESULT ( STDMETHODCALLTYPE *Pickup )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in BSTR pGroupID);
                               HRESULT ( STDMETHODCALLTYPE *Dial )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in BSTR pDestAddress);
                               HRESULT ( STDMETHODCALLTYPE *Finish )(
            __RPC__in ITBasicCallControl2 * This,
                       FINISH_MODE finishMode);
                               HRESULT ( STDMETHODCALLTYPE *RemoveFromConference )(
            __RPC__in ITBasicCallControl2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RequestTerminal )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in BSTR bstrTerminalClassGUID,
                       long lMediaType,
                       TERMINAL_DIRECTION Direction,
                                __RPC__deref_out_opt ITTerminal **ppTerminal);
                               HRESULT ( STDMETHODCALLTYPE *SelectTerminalOnCall )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in_opt ITTerminal *pTerminal);
                               HRESULT ( STDMETHODCALLTYPE *UnselectTerminalOnCall )(
            __RPC__in ITBasicCallControl2 * This,
                       __RPC__in_opt ITTerminal *pTerminal);
        END_INTERFACE
    } ITBasicCallControl2Vtbl;
    interface ITBasicCallControl2
    {
        CONST_VTBL struct ITBasicCallControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This,fSync) )
    ( (This)->lpVtbl -> Answer(This) )
    ( (This)->lpVtbl -> Disconnect(This,code) )
    ( (This)->lpVtbl -> Hold(This,fHold) )
    ( (This)->lpVtbl -> HandoffDirect(This,pApplicationName) )
    ( (This)->lpVtbl -> HandoffIndirect(This,lMediaType) )
    ( (This)->lpVtbl -> Conference(This,pCall,fSync) )
    ( (This)->lpVtbl -> Transfer(This,pCall,fSync) )
    ( (This)->lpVtbl -> BlindTransfer(This,pDestAddress) )
    ( (This)->lpVtbl -> SwapHold(This,pCall) )
    ( (This)->lpVtbl -> ParkDirect(This,pParkAddress) )
    ( (This)->lpVtbl -> ParkIndirect(This,ppNonDirAddress) )
    ( (This)->lpVtbl -> Unpark(This) )
    ( (This)->lpVtbl -> SetQOS(This,lMediaType,ServiceLevel) )
    ( (This)->lpVtbl -> Pickup(This,pGroupID) )
    ( (This)->lpVtbl -> Dial(This,pDestAddress) )
    ( (This)->lpVtbl -> Finish(This,finishMode) )
    ( (This)->lpVtbl -> RemoveFromConference(This) )
    ( (This)->lpVtbl -> RequestTerminal(This,bstrTerminalClassGUID,lMediaType,Direction,ppTerminal) )
    ( (This)->lpVtbl -> SelectTerminalOnCall(This,pTerminal) )
    ( (This)->lpVtbl -> UnselectTerminalOnCall(This,pTerminal) )
EXTERN_C const IID IID_ITScriptableAudioFormat;
    typedef struct ITScriptableAudioFormatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITScriptableAudioFormat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITScriptableAudioFormat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITScriptableAudioFormat * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITScriptableAudioFormat * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITScriptableAudioFormat * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITScriptableAudioFormat * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITScriptableAudioFormat * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Channels )(
            __RPC__in ITScriptableAudioFormat * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Channels )(
            __RPC__in ITScriptableAudioFormat * This,
                       const long nNewVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SamplesPerSec )(
            __RPC__in ITScriptableAudioFormat * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SamplesPerSec )(
            __RPC__in ITScriptableAudioFormat * This,
                       const long nNewVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvgBytesPerSec )(
            __RPC__in ITScriptableAudioFormat * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_AvgBytesPerSec )(
            __RPC__in ITScriptableAudioFormat * This,
                       const long nNewVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockAlign )(
            __RPC__in ITScriptableAudioFormat * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockAlign )(
            __RPC__in ITScriptableAudioFormat * This,
                       const long nNewVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BitsPerSample )(
            __RPC__in ITScriptableAudioFormat * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BitsPerSample )(
            __RPC__in ITScriptableAudioFormat * This,
                       const long nNewVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FormatTag )(
            __RPC__in ITScriptableAudioFormat * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FormatTag )(
            __RPC__in ITScriptableAudioFormat * This,
                       const long nNewVal);
        END_INTERFACE
    } ITScriptableAudioFormatVtbl;
    interface ITScriptableAudioFormat
    {
        CONST_VTBL struct ITScriptableAudioFormatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Channels(This,pVal) )
    ( (This)->lpVtbl -> put_Channels(This,nNewVal) )
    ( (This)->lpVtbl -> get_SamplesPerSec(This,pVal) )
    ( (This)->lpVtbl -> put_SamplesPerSec(This,nNewVal) )
    ( (This)->lpVtbl -> get_AvgBytesPerSec(This,pVal) )
    ( (This)->lpVtbl -> put_AvgBytesPerSec(This,nNewVal) )
    ( (This)->lpVtbl -> get_BlockAlign(This,pVal) )
    ( (This)->lpVtbl -> put_BlockAlign(This,nNewVal) )
    ( (This)->lpVtbl -> get_BitsPerSample(This,pVal) )
    ( (This)->lpVtbl -> put_BitsPerSample(This,nNewVal) )
    ( (This)->lpVtbl -> get_FormatTag(This,pVal) )
    ( (This)->lpVtbl -> put_FormatTag(This,nNewVal) )
EXTERN_C const CLSID CLSID_VideoWindowTerm;
EXTERN_C const CLSID CLSID_VideoInputTerminal;
EXTERN_C const CLSID CLSID_HandsetTerminal;
EXTERN_C const CLSID CLSID_HeadsetTerminal;
EXTERN_C const CLSID CLSID_SpeakerphoneTerminal;
EXTERN_C const CLSID CLSID_MicrophoneTerminal;
EXTERN_C const CLSID CLSID_SpeakersTerminal;
EXTERN_C const CLSID CLSID_MediaStreamTerminal;
EXTERN_C const CLSID CLSID_FileRecordingTerminal;
EXTERN_C const CLSID CLSID_FileRecordingTrack;
EXTERN_C const CLSID CLSID_FilePlaybackTerminal;
EXTERN_C const CLSID TAPIPROTOCOL_PSTN;
EXTERN_C const CLSID TAPIPROTOCOL_H323;
EXTERN_C const CLSID TAPIPROTOCOL_Multicast;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0083_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
