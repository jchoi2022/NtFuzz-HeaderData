#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDummyMBNUCMExt IDummyMBNUCMExt;
typedef interface IMbnConnection IMbnConnection;
typedef interface IMbnConnectionEvents IMbnConnectionEvents;
typedef interface IMbnInterface IMbnInterface;
typedef interface IMbnInterfaceEvents IMbnInterfaceEvents;
typedef interface IMbnInterfaceManager IMbnInterfaceManager;
typedef interface IMbnInterfaceManagerEvents IMbnInterfaceManagerEvents;
typedef interface IMbnRegistration IMbnRegistration;
typedef interface IMbnRegistrationEvents IMbnRegistrationEvents;
typedef interface IMbnConnectionManager IMbnConnectionManager;
typedef interface IMbnConnectionManagerEvents IMbnConnectionManagerEvents;
typedef interface IMbnPinManager IMbnPinManager;
typedef interface IMbnPinManagerEvents IMbnPinManagerEvents;
typedef interface IMbnPinEvents IMbnPinEvents;
typedef interface IMbnSubscriberInformation IMbnSubscriberInformation;
typedef interface IMbnSignal IMbnSignal;
typedef interface IMbnSignalEvents IMbnSignalEvents;
typedef interface IMbnConnectionContext IMbnConnectionContext;
typedef interface IMbnConnectionContextEvents IMbnConnectionContextEvents;
typedef interface IMbnConnectionProfileManager IMbnConnectionProfileManager;
typedef interface IMbnConnectionProfile IMbnConnectionProfile;
typedef interface IMbnConnectionProfileEvents IMbnConnectionProfileEvents;
typedef interface IMbnSmsConfiguration IMbnSmsConfiguration;
typedef interface IMbnSmsReadMsgPdu IMbnSmsReadMsgPdu;
typedef interface IMbnSmsReadMsgTextCdma IMbnSmsReadMsgTextCdma;
typedef interface IMbnSms IMbnSms;
typedef interface IMbnSmsEvents IMbnSmsEvents;
typedef interface IMbnServiceActivation IMbnServiceActivation;
typedef interface IMbnServiceActivationEvents IMbnServiceActivationEvents;
typedef interface IMbnVendorSpecificOperation IMbnVendorSpecificOperation;
typedef interface IMbnVendorSpecificEvents IMbnVendorSpecificEvents;
typedef interface IMbnConnectionProfileManagerEvents IMbnConnectionProfileManagerEvents;
typedef interface IMbnRadio IMbnRadio;
typedef interface IMbnRadioEvents IMbnRadioEvents;
typedef interface IMbnMultiCarrier IMbnMultiCarrier;
typedef interface IMbnMultiCarrierEvents IMbnMultiCarrierEvents;
typedef interface IMbnDeviceServiceStateEvents IMbnDeviceServiceStateEvents;
typedef interface IMbnDeviceServicesManager IMbnDeviceServicesManager;
typedef interface IMbnDeviceServicesContext IMbnDeviceServicesContext;
typedef interface IMbnDeviceServicesEvents IMbnDeviceServicesEvents;
typedef interface IMbnDeviceService IMbnDeviceService;
typedef interface IMbnPin IMbnPin;
typedef class MbnConnectionProfileManager MbnConnectionProfileManager;
typedef class MbnInterfaceManager MbnInterfaceManager;
typedef class MbnConnectionManager MbnConnectionManager;
typedef class MbnDeviceServicesManager MbnDeviceServicesManager;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDummyMBNUCMExt;
    typedef struct IDummyMBNUCMExtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDummyMBNUCMExt * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDummyMBNUCMExt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDummyMBNUCMExt * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDummyMBNUCMExt * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDummyMBNUCMExt * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDummyMBNUCMExt * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDummyMBNUCMExt * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IDummyMBNUCMExtVtbl;
    interface IDummyMBNUCMExt
    {
        CONST_VTBL struct IDummyMBNUCMExtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
typedef DECLSPEC_UUID("42FAAC0B-BDCC-11DC-A8A8-001321F1405F")
enum MBN_SIGNAL_CONSTANTS
    {
        MBN_RSSI_DEFAULT = 0xffffffff,
        MBN_RSSI_DISABLE = 0,
        MBN_RSSI_UNKNOWN = 99,
        MBN_ERROR_RATE_UNKNOWN = 99
    } MBN_SIGNAL_CONSTANTS;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("DCBBBAB6-6002-4BBB-AAEE-338E368AF6FA")
enum MBN_CELLULAR_CLASS
    {
        MBN_CELLULAR_CLASS_NONE = 0,
        MBN_CELLULAR_CLASS_GSM = 0x1,
        MBN_CELLULAR_CLASS_CDMA = 0x2
    } MBN_CELLULAR_CLASS;
typedef DECLSPEC_UUID("DCBBBAB6-6012-4BBB-AAEE-338E368AF6FA")
enum MBN_VOICE_CLASS
    {
        MBN_VOICE_CLASS_NONE = 0,
        MBN_VOICE_CLASS_NO_VOICE = 0x1,
        MBN_VOICE_CLASS_SEPARATE_VOICE_DATA = 0x2,
        MBN_VOICE_CLASS_SIMULTANEOUS_VOICE_DATA = 0x3
    } MBN_VOICE_CLASS;
typedef DECLSPEC_UUID("6E1348BB-BDCB-11DC-A8A8-001321F1405F")
enum MBN_PROVIDER_STATE
    {
        MBN_PROVIDER_STATE_NONE = 0,
        MBN_PROVIDER_STATE_HOME = 0x1,
        MBN_PROVIDER_STATE_FORBIDDEN = 0x2,
        MBN_PROVIDER_STATE_PREFERRED = 0x4,
        MBN_PROVIDER_STATE_VISIBLE = 0x8,
        MBN_PROVIDER_STATE_REGISTERED = 0x10,
        MBN_PROVIDER_STATE_PREFERRED_MULTICARRIER = 0x20
    } MBN_PROVIDER_STATE;
typedef DECLSPEC_UUID("934092FD-BDCB-11DC-A8A8-001321F1405F")
enum MBN_PROVIDER_CONSTANTS
    {
        MBN_PROVIDERNAME_LEN = 20,
        MBN_PROVIDERID_LEN = 6
    } MBN_PROVIDER_CONSTANTS;
typedef DECLSPEC_UUID("59C235E7-BDC9-11DC-A8A8-001321F1405F")
enum MBN_INTERFACE_CAPS_CONSTANTS
    {
        MBN_DEVICEID_LEN = 18,
        MBN_MANUFACTURER_LEN = 32,
        MBN_MODEL_LEN = 32,
        MBN_FIRMWARE_LEN = 32
    } MBN_INTERFACE_CAPS_CONSTANTS;
typedef DECLSPEC_UUID("83A34F4C-BDC4-11DC-A8A8-001321F1405F")
enum MBN_DATA_CLASS
    {
        MBN_DATA_CLASS_NONE = 0,
        MBN_DATA_CLASS_GPRS = 0x1,
        MBN_DATA_CLASS_EDGE = 0x2,
        MBN_DATA_CLASS_UMTS = 0x4,
        MBN_DATA_CLASS_HSDPA = 0x8,
        MBN_DATA_CLASS_HSUPA = 0x10,
        MBN_DATA_CLASS_LTE = 0x20,
        MBN_DATA_CLASS_5G_NSA = 0x40,
        MBN_DATA_CLASS_5G_SA = 0x80,
        MBN_DATA_CLASS_1XRTT = 0x10000,
        MBN_DATA_CLASS_1XEVDO = 0x20000,
        MBN_DATA_CLASS_1XEVDO_REVA = 0x40000,
        MBN_DATA_CLASS_1XEVDV = 0x80000,
        MBN_DATA_CLASS_3XRTT = 0x100000,
        MBN_DATA_CLASS_1XEVDO_REVB = 0x200000,
        MBN_DATA_CLASS_UMB = 0x400000,
        MBN_DATA_CLASS_CUSTOM = 0x80000000
    } MBN_DATA_CLASS;
typedef DECLSPEC_UUID("2308C1F7-BDC8-11DC-A8A8-001321F1405F")
enum MBN_CTRL_CAPS
    {
        MBN_CTRL_CAPS_NONE = 0,
        MBN_CTRL_CAPS_REG_MANUAL = 0x1,
        MBN_CTRL_CAPS_HW_RADIO_SWITCH = 0x2,
        MBN_CTRL_CAPS_CDMA_MOBILE_IP = 0x4,
        MBN_CTRL_CAPS_CDMA_SIMPLE_IP = 0x8,
        MBN_CTRL_CAPS_PROTECT_UNIQUEID = 0x10,
        MBN_CTRL_CAPS_MODEL_MULTI_CARRIER = 0x20,
        MBN_CTRL_CAPS_USSD = 0x40,
        MBN_CTRL_CAPS_MULTI_MODE = 0x80
    } MBN_CTRL_CAPS;
typedef DECLSPEC_UUID("E4096459-BDC8-11DC-A8A8-001321F1405F")
enum MBN_SMS_CAPS
    {
        MBN_SMS_CAPS_NONE = 0,
        MBN_SMS_CAPS_PDU_RECEIVE = 0x1,
        MBN_SMS_CAPS_PDU_SEND = 0x2,
        MBN_SMS_CAPS_TEXT_RECEIVE = 0x4,
        MBN_SMS_CAPS_TEXT_SEND = 0x8
    } MBN_SMS_CAPS;
typedef DECLSPEC_UUID("5DB6A98B-BDC5-11DC-A8A8-001321F1405F")
enum MBN_BAND_CLASS
    {
        MBN_BAND_CLASS_NONE = 0,
        MBN_BAND_CLASS_0 = 0x1,
        MBN_BAND_CLASS_I = 0x2,
        MBN_BAND_CLASS_II = 0x4,
        MBN_BAND_CLASS_III = 0x8,
        MBN_BAND_CLASS_IV = 0x10,
        MBN_BAND_CLASS_V = 0x20,
        MBN_BAND_CLASS_VI = 0x40,
        MBN_BAND_CLASS_VII = 0x80,
        MBN_BAND_CLASS_VIII = 0x100,
        MBN_BAND_CLASS_IX = 0x200,
        MBN_BAND_CLASS_X = 0x400,
        MBN_BAND_CLASS_XI = 0x800,
        MBN_BAND_CLASS_XII = 0x1000,
        MBN_BAND_CLASS_XIII = 0x2000,
        MBN_BAND_CLASS_XIV = 0x4000,
        MBN_BAND_CLASS_XV = 0x8000,
        MBN_BAND_CLASS_XVI = 0x10000,
        MBN_BAND_CLASS_XVII = 0x20000,
        MBN_BAND_CLASS_CUSTOM = 0x80000000
    } MBN_BAND_CLASS;
typedef DECLSPEC_UUID("CD1A4B17-BDC9-11DC-A8A8-001321F1405F") struct MBN_INTERFACE_CAPS
    {
    MBN_CELLULAR_CLASS cellularClass;
    MBN_VOICE_CLASS voiceClass;
    ULONG dataClass;
    BSTR customDataClass;
    ULONG gsmBandClass;
    ULONG cdmaBandClass;
    BSTR customBandClass;
    ULONG smsCaps;
    ULONG controlCaps;
    BSTR deviceID;
    BSTR manufacturer;
    BSTR model;
    BSTR firmwareInfo;
    } MBN_INTERFACE_CAPS;
typedef DECLSPEC_UUID("DCBBBAB6-9005-4BBB-AAEE-338E368AF6FA") struct MBN_PROVIDER
    {
    BSTR providerID;
    ULONG providerState;
    BSTR providerName;
    ULONG dataClass;
    } MBN_PROVIDER;
typedef DECLSPEC_UUID("9AA005AE-540B-46F1-9244-8826D188F821") struct MBN_PROVIDER2
    {
    MBN_PROVIDER provider;
    MBN_CELLULAR_CLASS cellularClass;
    ULONG signalStrength;
    ULONG signalError;
    } MBN_PROVIDER2;
typedef DECLSPEC_UUID("DCBBBAB6-6003-4BBB-AAEE-338E368AF6FA")
enum MBN_READY_STATE
    {
        MBN_READY_STATE_OFF = 0,
        MBN_READY_STATE_INITIALIZED = ( MBN_READY_STATE_OFF + 1 ) ,
        MBN_READY_STATE_SIM_NOT_INSERTED = ( MBN_READY_STATE_INITIALIZED + 1 ) ,
        MBN_READY_STATE_BAD_SIM = ( MBN_READY_STATE_SIM_NOT_INSERTED + 1 ) ,
        MBN_READY_STATE_FAILURE = ( MBN_READY_STATE_BAD_SIM + 1 ) ,
        MBN_READY_STATE_NOT_ACTIVATED = ( MBN_READY_STATE_FAILURE + 1 ) ,
        MBN_READY_STATE_DEVICE_LOCKED = ( MBN_READY_STATE_NOT_ACTIVATED + 1 ) ,
        MBN_READY_STATE_DEVICE_BLOCKED = ( MBN_READY_STATE_DEVICE_LOCKED + 1 ) ,
        MBN_READY_STATE_NO_ESIM_PROFILE = ( MBN_READY_STATE_DEVICE_BLOCKED + 1 )
    } MBN_READY_STATE;
typedef DECLSPEC_UUID("EFB7C00D-BDCD-11DC-A8A8-001321F1405F")
enum MBN_ACTIVATION_STATE
    {
        MBN_ACTIVATION_STATE_NONE = 0,
        MBN_ACTIVATION_STATE_ACTIVATED = ( MBN_ACTIVATION_STATE_NONE + 1 ) ,
        MBN_ACTIVATION_STATE_ACTIVATING = ( MBN_ACTIVATION_STATE_ACTIVATED + 1 ) ,
        MBN_ACTIVATION_STATE_DEACTIVATED = ( MBN_ACTIVATION_STATE_ACTIVATING + 1 ) ,
        MBN_ACTIVATION_STATE_DEACTIVATING = ( MBN_ACTIVATION_STATE_DEACTIVATED + 1 )
    } MBN_ACTIVATION_STATE;
typedef DECLSPEC_UUID("F601E1EB-BDCD-11DC-A8A8-001321F1405F")
enum MBN_CONNECTION_MODE
    {
        MBN_CONNECTION_MODE_PROFILE = 0,
        MBN_CONNECTION_MODE_TMP_PROFILE = ( MBN_CONNECTION_MODE_PROFILE + 1 )
    } MBN_CONNECTION_MODE;
typedef DECLSPEC_UUID("6D8846E5-BDD1-11DC-A8A8-001321F1405F")
enum MBN_VOICE_CALL_STATE
    {
        MBN_VOICE_CALL_STATE_NONE = 0,
        MBN_VOICE_CALL_STATE_IN_PROGRESS = ( MBN_VOICE_CALL_STATE_NONE + 1 ) ,
        MBN_VOICE_CALL_STATE_HANGUP = ( MBN_VOICE_CALL_STATE_IN_PROGRESS + 1 )
    } MBN_VOICE_CALL_STATE;
typedef DECLSPEC_UUID("D5F1726B-BDCE-11DC-A8A8-001321F1405F")
enum MBN_REGISTRATION_CONSTANTS
    {
        MBN_ROAMTEXT_LEN = 64,
        MBN_CDMA_DEFAULT_PROVIDER_ID = 0
    } MBN_REGISTRATION_CONSTANTS;
typedef DECLSPEC_UUID("DCBBBAB6-6009-4BBB-AAEE-338E368AF6FA")
enum MBN_REGISTER_STATE
    {
        MBN_REGISTER_STATE_NONE = 0,
        MBN_REGISTER_STATE_DEREGISTERED = ( MBN_REGISTER_STATE_NONE + 1 ) ,
        MBN_REGISTER_STATE_SEARCHING = ( MBN_REGISTER_STATE_DEREGISTERED + 1 ) ,
        MBN_REGISTER_STATE_HOME = ( MBN_REGISTER_STATE_SEARCHING + 1 ) ,
        MBN_REGISTER_STATE_ROAMING = ( MBN_REGISTER_STATE_HOME + 1 ) ,
        MBN_REGISTER_STATE_PARTNER = ( MBN_REGISTER_STATE_ROAMING + 1 ) ,
        MBN_REGISTER_STATE_DENIED = ( MBN_REGISTER_STATE_PARTNER + 1 )
    } MBN_REGISTER_STATE;
typedef DECLSPEC_UUID("D7F73F35-BDCD-11DC-A8A8-001321F1405F")
enum MBN_REGISTER_MODE
    {
        MBN_REGISTER_MODE_NONE = 0,
        MBN_REGISTER_MODE_AUTOMATIC = ( MBN_REGISTER_MODE_NONE + 1 ) ,
        MBN_REGISTER_MODE_MANUAL = ( MBN_REGISTER_MODE_AUTOMATIC + 1 )
    } MBN_REGISTER_MODE;
typedef DECLSPEC_UUID("C75E76F5-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_CONSTANTS
    {
        MBN_ATTEMPTS_REMAINING_UNKNOWN = 0xffffffff,
        MBN_PIN_LENGTH_UNKNOWN = 0xffffffff
    } MBN_PIN_CONSTANTS;
typedef DECLSPEC_UUID("D11BD29D-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_STATE
    {
        MBN_PIN_STATE_NONE = 0,
        MBN_PIN_STATE_ENTER = ( MBN_PIN_STATE_NONE + 1 ) ,
        MBN_PIN_STATE_UNBLOCK = ( MBN_PIN_STATE_ENTER + 1 )
    } MBN_PIN_STATE;
typedef DECLSPEC_UUID("DCBBBAB6-6005-4BBB-AAEE-338E368AF6FA")
enum MBN_PIN_TYPE
    {
        MBN_PIN_TYPE_NONE = 0,
        MBN_PIN_TYPE_CUSTOM = ( MBN_PIN_TYPE_NONE + 1 ) ,
        MBN_PIN_TYPE_PIN1 = ( MBN_PIN_TYPE_CUSTOM + 1 ) ,
        MBN_PIN_TYPE_PIN2 = ( MBN_PIN_TYPE_PIN1 + 1 ) ,
        MBN_PIN_TYPE_DEVICE_SIM_PIN = ( MBN_PIN_TYPE_PIN2 + 1 ) ,
        MBN_PIN_TYPE_DEVICE_FIRST_SIM_PIN = ( MBN_PIN_TYPE_DEVICE_SIM_PIN + 1 ) ,
        MBN_PIN_TYPE_NETWORK_PIN = ( MBN_PIN_TYPE_DEVICE_FIRST_SIM_PIN + 1 ) ,
        MBN_PIN_TYPE_NETWORK_SUBSET_PIN = ( MBN_PIN_TYPE_NETWORK_PIN + 1 ) ,
        MBN_PIN_TYPE_SVC_PROVIDER_PIN = ( MBN_PIN_TYPE_NETWORK_SUBSET_PIN + 1 ) ,
        MBN_PIN_TYPE_CORPORATE_PIN = ( MBN_PIN_TYPE_SVC_PROVIDER_PIN + 1 ) ,
        MBN_PIN_TYPE_SUBSIDY_LOCK = ( MBN_PIN_TYPE_CORPORATE_PIN + 1 )
    } MBN_PIN_TYPE;
typedef DECLSPEC_UUID("DCBBBAB6-9006-4BBB-AAEE-338E368AF6FA") struct MBN_PIN_INFO
    {
    MBN_PIN_STATE pinState;
    MBN_PIN_TYPE pinType;
    ULONG attemptsRemaining;
    } MBN_PIN_INFO;
typedef DECLSPEC_UUID("BD8A2871-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_MODE
    {
        MBN_PIN_MODE_ENABLED = 1,
        MBN_PIN_MODE_DISABLED = ( MBN_PIN_MODE_ENABLED + 1 )
    } MBN_PIN_MODE;
typedef DECLSPEC_UUID("C2A93665-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_FORMAT
    {
        MBN_PIN_FORMAT_NONE = 0,
        MBN_PIN_FORMAT_NUMERIC = ( MBN_PIN_FORMAT_NONE + 1 ) ,
        MBN_PIN_FORMAT_ALPHANUMERIC = ( MBN_PIN_FORMAT_NUMERIC + 1 )
    } MBN_PIN_FORMAT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DECLSPEC_UUID("0E62803F-BDD0-11DC-A8A8-001321F1405F")
enum MBN_CONTEXT_CONSTANTS
    {
        MBN_ACCESSSTRING_LEN = 100,
        MBN_USERNAME_LEN = 255,
        MBN_PASSWORD_LEN = 255,
        MBN_CONTEXT_ID_APPEND = 0xffffffff
    } MBN_CONTEXT_CONSTANTS;
typedef DECLSPEC_UUID("E24B42EF-BDCD-11DC-A8A8-001321F1405F")
enum MBN_AUTH_PROTOCOL
    {
        MBN_AUTH_PROTOCOL_NONE = 0,
        MBN_AUTH_PROTOCOL_PAP = ( MBN_AUTH_PROTOCOL_NONE + 1 ) ,
        MBN_AUTH_PROTOCOL_CHAP = ( MBN_AUTH_PROTOCOL_PAP + 1 ) ,
        MBN_AUTH_PROTOCOL_MSCHAPV2 = ( MBN_AUTH_PROTOCOL_CHAP + 1 )
    } MBN_AUTH_PROTOCOL;
typedef DECLSPEC_UUID("E6A360B9-BDCD-11DC-A8A8-001321F1405F")
enum MBN_COMPRESSION
    {
        MBN_COMPRESSION_NONE = 0,
        MBN_COMPRESSION_ENABLE = ( MBN_COMPRESSION_NONE + 1 )
    } MBN_COMPRESSION;
typedef DECLSPEC_UUID("EB4731EB-BDCD-11DC-A8A8-001321F1405F")
enum MBN_CONTEXT_TYPE
    {
        MBN_CONTEXT_TYPE_NONE = 0,
        MBN_CONTEXT_TYPE_INTERNET = ( MBN_CONTEXT_TYPE_NONE + 1 ) ,
        MBN_CONTEXT_TYPE_VPN = ( MBN_CONTEXT_TYPE_INTERNET + 1 ) ,
        MBN_CONTEXT_TYPE_VOICE = ( MBN_CONTEXT_TYPE_VPN + 1 ) ,
        MBN_CONTEXT_TYPE_VIDEO_SHARE = ( MBN_CONTEXT_TYPE_VOICE + 1 ) ,
        MBN_CONTEXT_TYPE_CUSTOM = ( MBN_CONTEXT_TYPE_VIDEO_SHARE + 1 ) ,
        MBN_CONTEXT_TYPE_PURCHASE = ( MBN_CONTEXT_TYPE_CUSTOM + 1 )
    } MBN_CONTEXT_TYPE;
typedef DECLSPEC_UUID("FE1F7B6F-BDCD-11DC-A8A8-001321F1405F") struct MBN_CONTEXT
    {
    ULONG contextID;
    MBN_CONTEXT_TYPE contextType;
    BSTR accessString;
    BSTR userName;
    BSTR password;
    MBN_COMPRESSION compression;
    MBN_AUTH_PROTOCOL authType;
    } MBN_CONTEXT;
typedef DECLSPEC_UUID("130C65D3-BDD3-11DC-A8A8-001321F1405F")
enum MBN_SMS_CONSTANTS
    {
        MBN_MESSAGE_INDEX_NONE = 0,
        MBN_CDMA_SHORT_MSG_SIZE_UNKNOWN = 0,
        MBN_CDMA_SHORT_MSG_SIZE_MAX = 160
    } WWAEXT_SMS_CONSTANTS;
typedef DECLSPEC_UUID("FC208FC1-BDE5-11DC-A8A8-001321F1405F")
enum MBN_MSG_STATUS
    {
        MBN_MSG_STATUS_NEW = 0,
        MBN_MSG_STATUS_OLD = ( MBN_MSG_STATUS_NEW + 1 ) ,
        MBN_MSG_STATUS_DRAFT = ( MBN_MSG_STATUS_OLD + 1 ) ,
        MBN_MSG_STATUS_SENT = ( MBN_MSG_STATUS_DRAFT + 1 )
    } MBN_MSG_STATUS;
typedef DECLSPEC_UUID("29912B29-BDD4-11DC-A8A8-001321F1405F")
enum MBN_SMS_CDMA_LANG
    {
        MBN_SMS_CDMA_LANG_NONE = 0,
        MBN_SMS_CDMA_LANG_ENGLISH = ( MBN_SMS_CDMA_LANG_NONE + 1 ) ,
        MBN_SMS_CDMA_LANG_FRENCH = ( MBN_SMS_CDMA_LANG_ENGLISH + 1 ) ,
        MBN_SMS_CDMA_LANG_SPANISH = ( MBN_SMS_CDMA_LANG_FRENCH + 1 ) ,
        MBN_SMS_CDMA_LANG_JAPANESE = ( MBN_SMS_CDMA_LANG_SPANISH + 1 ) ,
        MBN_SMS_CDMA_LANG_KOREAN = ( MBN_SMS_CDMA_LANG_JAPANESE + 1 ) ,
        MBN_SMS_CDMA_LANG_CHINESE = ( MBN_SMS_CDMA_LANG_KOREAN + 1 ) ,
        MBN_SMS_CDMA_LANG_HEBREW = ( MBN_SMS_CDMA_LANG_CHINESE + 1 )
    } MBN_SMS_CDMA_LANG;
typedef DECLSPEC_UUID("7F8E74CB-BDD4-11DC-A8A8-001321F1405F")
enum MBN_SMS_CDMA_ENCODING
    {
        MBN_SMS_CDMA_ENCODING_OCTET = 0,
        MBN_SMS_CDMA_ENCODING_EPM = ( MBN_SMS_CDMA_ENCODING_OCTET + 1 ) ,
        MBN_SMS_CDMA_ENCODING_7BIT_ASCII = ( MBN_SMS_CDMA_ENCODING_EPM + 1 ) ,
        MBN_SMS_CDMA_ENCODING_IA5 = ( MBN_SMS_CDMA_ENCODING_7BIT_ASCII + 1 ) ,
        MBN_SMS_CDMA_ENCODING_UNICODE = ( MBN_SMS_CDMA_ENCODING_IA5 + 1 ) ,
        MBN_SMS_CDMA_ENCODING_SHIFT_JIS = ( MBN_SMS_CDMA_ENCODING_UNICODE + 1 ) ,
        MBN_SMS_CDMA_ENCODING_KOREAN = ( MBN_SMS_CDMA_ENCODING_SHIFT_JIS + 1 ) ,
        MBN_SMS_CDMA_ENCODING_LATIN_HEBREW = ( MBN_SMS_CDMA_ENCODING_KOREAN + 1 ) ,
        MBN_SMS_CDMA_ENCODING_LATIN = ( MBN_SMS_CDMA_ENCODING_LATIN_HEBREW + 1 ) ,
        MBN_SMS_CDMA_ENCODING_GSM_7BIT = ( MBN_SMS_CDMA_ENCODING_LATIN + 1 )
    } MBN_SMS_CDMA_ENCODING;
typedef DECLSPEC_UUID("0D42B514-BDDC-11DC-A8A8-001321F1405F")
enum MBN_SMS_FLAG
    {
        MBN_SMS_FLAG_ALL = 0,
        MBN_SMS_FLAG_INDEX = ( MBN_SMS_FLAG_ALL + 1 ) ,
        MBN_SMS_FLAG_NEW = ( MBN_SMS_FLAG_INDEX + 1 ) ,
        MBN_SMS_FLAG_OLD = ( MBN_SMS_FLAG_NEW + 1 ) ,
        MBN_SMS_FLAG_SENT = ( MBN_SMS_FLAG_OLD + 1 ) ,
        MBN_SMS_FLAG_DRAFT = ( MBN_SMS_FLAG_SENT + 1 )
    } MBN_SMS_FLAG;
typedef DECLSPEC_UUID("406BFD60-BDDC-11DC-A8A8-001321F1405F") struct MBN_SMS_FILTER
    {
    MBN_SMS_FLAG flag;
    ULONG messageIndex;
    } MBN_SMS_FILTER;
typedef DECLSPEC_UUID("8098009D-BDDC-11DC-A8A8-001321F1405F")
enum MBN_SMS_STATUS_FLAG
    {
        MBN_SMS_FLAG_NONE = 0,
        MBN_SMS_FLAG_MESSAGE_STORE_FULL = 0x1,
        MBN_SMS_FLAG_NEW_MESSAGE = 0x2
    } MBN_SMS_STATUS_FLAG;
typedef DECLSPEC_UUID("1F6E9CA3-BDE6-11DC-A8A8-001321F1405F") struct MBN_SMS_STATUS_INFO
    {
    ULONG flag;
    ULONG messageIndex;
    } MBN_SMS_STATUS_INFO;
typedef DECLSPEC_UUID("4B0FE227-3709-41e2-8A78-E98C0CD0CB09")
enum MBN_SMS_FORMAT
    {
        MBN_SMS_FORMAT_NONE = 0,
        MBN_SMS_FORMAT_PDU = 0x1,
        MBN_SMS_FORMAT_TEXT = 0x2
    } MBN_SMS_FORMAT;
typedef DECLSPEC_UUID("532A3FE4-BDE6-11DC-A8A8-001321F1405F")
enum MBN_RADIO
    {
        MBN_RADIO_OFF = 0,
        MBN_RADIO_ON = ( MBN_RADIO_OFF + 1 )
    } MBN_RADIO;
typedef DECLSPEC_UUID("0D17D0A2-B2AA-4B34-8655-C2F7F9217473")
enum MBN_DEVICE_SERVICE_SESSIONS_STATE
    {
        MBN_DEVICE_SERVICE_SESSIONS_RESTORED = 0
    } MBN_DEVICE_SERVICE_SESSIONS_STATE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("60436154-3466-48A4-82E2-9A461527A8C5") struct MBN_DEVICE_SERVICE
    {
    BSTR deviceServiceID;
    VARIANT_BOOL dataWriteSupported;
    VARIANT_BOOL dataReadSupported;
    } MBN_DEVICE_SERVICE;
typedef DECLSPEC_UUID("386077A0-275B-45B6-9B32-C343A6749E86")
enum MBN_DEVICE_SERVICES_INTERFACE_STATE
    {
        MBN_DEVICE_SERVICES_CAPABLE_INTERFACE_ARRIVAL = 0,
        MBN_DEVICE_SERVICES_CAPABLE_INTERFACE_REMOVAL = ( MBN_DEVICE_SERVICES_CAPABLE_INTERFACE_ARRIVAL + 1 )
    } MBN_DEVICE_SERVICES_INTERFACE_STATE;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMbnConnection;
    typedef struct IMbnConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnection * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionID )(
            __RPC__in IMbnConnection * This,
                                     __RPC__deref_out_opt BSTR *ConnectionID);
                                        HRESULT ( STDMETHODCALLTYPE *get_InterfaceID )(
            __RPC__in IMbnConnection * This,
                                     __RPC__deref_out_opt BSTR *InterfaceID);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IMbnConnection * This,
                       MBN_CONNECTION_MODE connectionMode,
                               __RPC__in_string LPCWSTR strProfile,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IMbnConnection * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectionState )(
            __RPC__in IMbnConnection * This,
                             __RPC__out MBN_ACTIVATION_STATE *ConnectionState,
                             __RPC__deref_out_opt BSTR *ProfileName);
                               HRESULT ( STDMETHODCALLTYPE *GetVoiceCallState )(
            __RPC__in IMbnConnection * This,
                                     __RPC__out MBN_VOICE_CALL_STATE *voiceCallState);
                               HRESULT ( STDMETHODCALLTYPE *GetActivationNetworkError )(
            __RPC__in IMbnConnection * This,
                                     __RPC__out ULONG *networkError);
        END_INTERFACE
    } IMbnConnectionVtbl;
    interface IMbnConnection
    {
        CONST_VTBL struct IMbnConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ConnectionID(This,ConnectionID) )
    ( (This)->lpVtbl -> get_InterfaceID(This,InterfaceID) )
    ( (This)->lpVtbl -> Connect(This,connectionMode,strProfile,requestID) )
    ( (This)->lpVtbl -> Disconnect(This,requestID) )
    ( (This)->lpVtbl -> GetConnectionState(This,ConnectionState,ProfileName) )
    ( (This)->lpVtbl -> GetVoiceCallState(This,voiceCallState) )
    ( (This)->lpVtbl -> GetActivationNetworkError(This,networkError) )
EXTERN_C const IID IID_IMbnConnectionEvents;
    typedef struct IMbnConnectionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnConnectComplete )(
            __RPC__in IMbnConnectionEvents * This,
                       __RPC__in_opt IMbnConnection *newConnection,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnDisconnectComplete )(
            __RPC__in IMbnConnectionEvents * This,
                       __RPC__in_opt IMbnConnection *newConnection,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnConnectStateChange )(
            __RPC__in IMbnConnectionEvents * This,
                       __RPC__in_opt IMbnConnection *newConnection);
                               HRESULT ( STDMETHODCALLTYPE *OnVoiceCallStateChange )(
            __RPC__in IMbnConnectionEvents * This,
                       __RPC__in_opt IMbnConnection *newConnection);
        END_INTERFACE
    } IMbnConnectionEventsVtbl;
    interface IMbnConnectionEvents
    {
        CONST_VTBL struct IMbnConnectionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnectComplete(This,newConnection,requestID,status) )
    ( (This)->lpVtbl -> OnDisconnectComplete(This,newConnection,requestID,status) )
    ( (This)->lpVtbl -> OnConnectStateChange(This,newConnection) )
    ( (This)->lpVtbl -> OnVoiceCallStateChange(This,newConnection) )
EXTERN_C const IID IID_IMbnInterface;
    typedef struct IMbnInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnInterface * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnInterface * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_InterfaceID )(
            __RPC__in IMbnInterface * This,
                                     __RPC__deref_out_opt BSTR *InterfaceID);
                               HRESULT ( STDMETHODCALLTYPE *GetInterfaceCapability )(
            __RPC__in IMbnInterface * This,
                                     __RPC__out MBN_INTERFACE_CAPS *interfaceCaps);
                               HRESULT ( STDMETHODCALLTYPE *GetSubscriberInformation )(
            __RPC__in IMbnInterface * This,
                                __RPC__deref_out_opt IMbnSubscriberInformation **subscriberInformation);
                               HRESULT ( STDMETHODCALLTYPE *GetReadyState )(
            __RPC__in IMbnInterface * This,
                                     __RPC__out MBN_READY_STATE *readyState);
                               HRESULT ( STDMETHODCALLTYPE *InEmergencyMode )(
            __RPC__in IMbnInterface * This,
                                     __RPC__out VARIANT_BOOL *emergencyMode);
                               HRESULT ( STDMETHODCALLTYPE *GetHomeProvider )(
            __RPC__in IMbnInterface * This,
                                     __RPC__out MBN_PROVIDER *homeProvider);
                               HRESULT ( STDMETHODCALLTYPE *GetPreferredProviders )(
            __RPC__in IMbnInterface * This,
                                     __RPC__deref_out_opt SAFEARRAY * *preferredProviders);
                               HRESULT ( STDMETHODCALLTYPE *SetPreferredProviders )(
            __RPC__in IMbnInterface * This,
                       __RPC__in SAFEARRAY * preferredProviders,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *GetVisibleProviders )(
            __RPC__in IMbnInterface * This,
                        __RPC__out ULONG *age,
                                __RPC__deref_out_opt SAFEARRAY * *visibleProviders);
                               HRESULT ( STDMETHODCALLTYPE *ScanNetwork )(
            __RPC__in IMbnInterface * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *GetConnection )(
            __RPC__in IMbnInterface * This,
                                __RPC__deref_out_opt IMbnConnection **mbnConnection);
        END_INTERFACE
    } IMbnInterfaceVtbl;
    interface IMbnInterface
    {
        CONST_VTBL struct IMbnInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_InterfaceID(This,InterfaceID) )
    ( (This)->lpVtbl -> GetInterfaceCapability(This,interfaceCaps) )
    ( (This)->lpVtbl -> GetSubscriberInformation(This,subscriberInformation) )
    ( (This)->lpVtbl -> GetReadyState(This,readyState) )
    ( (This)->lpVtbl -> InEmergencyMode(This,emergencyMode) )
    ( (This)->lpVtbl -> GetHomeProvider(This,homeProvider) )
    ( (This)->lpVtbl -> GetPreferredProviders(This,preferredProviders) )
    ( (This)->lpVtbl -> SetPreferredProviders(This,preferredProviders,requestID) )
    ( (This)->lpVtbl -> GetVisibleProviders(This,age,visibleProviders) )
    ( (This)->lpVtbl -> ScanNetwork(This,requestID) )
    ( (This)->lpVtbl -> GetConnection(This,mbnConnection) )
EXTERN_C const IID IID_IMbnInterfaceEvents;
    typedef struct IMbnInterfaceEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnInterfaceEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnInterfaceEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnInterfaceCapabilityAvailable )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnSubscriberInformationChange )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnReadyStateChange )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnEmergencyModeChange )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnHomeProviderAvailable )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnPreferredProvidersChange )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnSetPreferredProvidersComplete )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnScanNetworkComplete )(
            __RPC__in IMbnInterfaceEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface,
                       ULONG requestID,
                       HRESULT status);
        END_INTERFACE
    } IMbnInterfaceEventsVtbl;
    interface IMbnInterfaceEvents
    {
        CONST_VTBL struct IMbnInterfaceEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnInterfaceCapabilityAvailable(This,newInterface) )
    ( (This)->lpVtbl -> OnSubscriberInformationChange(This,newInterface) )
    ( (This)->lpVtbl -> OnReadyStateChange(This,newInterface) )
    ( (This)->lpVtbl -> OnEmergencyModeChange(This,newInterface) )
    ( (This)->lpVtbl -> OnHomeProviderAvailable(This,newInterface) )
    ( (This)->lpVtbl -> OnPreferredProvidersChange(This,newInterface) )
    ( (This)->lpVtbl -> OnSetPreferredProvidersComplete(This,newInterface,requestID,status) )
    ( (This)->lpVtbl -> OnScanNetworkComplete(This,newInterface,requestID,status) )
EXTERN_C const IID IID_IMbnInterfaceManager;
    typedef struct IMbnInterfaceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnInterfaceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnInterfaceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnInterfaceManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetInterface )(
            __RPC__in IMbnInterfaceManager * This,
                       __RPC__in LPCWSTR interfaceID,
                                     __RPC__deref_out_opt IMbnInterface **mbnInterface);
                               HRESULT ( STDMETHODCALLTYPE *GetInterfaces )(
            __RPC__in IMbnInterfaceManager * This,
                                     __RPC__deref_out_opt SAFEARRAY * *mbnInterfaces);
        END_INTERFACE
    } IMbnInterfaceManagerVtbl;
    interface IMbnInterfaceManager
    {
        CONST_VTBL struct IMbnInterfaceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInterface(This,interfaceID,mbnInterface) )
    ( (This)->lpVtbl -> GetInterfaces(This,mbnInterfaces) )
EXTERN_C const IID IID_IMbnInterfaceManagerEvents;
    typedef struct IMbnInterfaceManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnInterfaceManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnInterfaceManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnInterfaceManagerEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnInterfaceArrival )(
            __RPC__in IMbnInterfaceManagerEvents * This,
                       __RPC__in_opt IMbnInterface *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnInterfaceRemoval )(
            __RPC__in IMbnInterfaceManagerEvents * This,
                       __RPC__in_opt IMbnInterface *oldInterface);
        END_INTERFACE
    } IMbnInterfaceManagerEventsVtbl;
    interface IMbnInterfaceManagerEvents
    {
        CONST_VTBL struct IMbnInterfaceManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnInterfaceArrival(This,newInterface) )
    ( (This)->lpVtbl -> OnInterfaceRemoval(This,oldInterface) )
EXTERN_C const IID IID_IMbnRegistration;
    typedef struct IMbnRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnRegistration * This);
                               HRESULT ( STDMETHODCALLTYPE *GetRegisterState )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__out MBN_REGISTER_STATE *registerState);
                               HRESULT ( STDMETHODCALLTYPE *GetRegisterMode )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__out MBN_REGISTER_MODE *registerMode);
                               HRESULT ( STDMETHODCALLTYPE *GetProviderID )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__deref_out_opt BSTR *providerID);
                               HRESULT ( STDMETHODCALLTYPE *GetProviderName )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__deref_out_opt BSTR *providerName);
                               HRESULT ( STDMETHODCALLTYPE *GetRoamingText )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__deref_out_opt BSTR *roamingText);
                               HRESULT ( STDMETHODCALLTYPE *GetAvailableDataClasses )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__out ULONG *availableDataClasses);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrentDataClass )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__out ULONG *currentDataClass);
                               HRESULT ( STDMETHODCALLTYPE *GetRegistrationNetworkError )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__out ULONG *registrationNetworkError);
                               HRESULT ( STDMETHODCALLTYPE *GetPacketAttachNetworkError )(
            __RPC__in IMbnRegistration * This,
                                     __RPC__out ULONG *packetAttachNetworkError);
                               HRESULT ( STDMETHODCALLTYPE *SetRegisterMode )(
            __RPC__in IMbnRegistration * This,
                       MBN_REGISTER_MODE registerMode,
                               __RPC__in_string LPCWSTR providerID,
                       ULONG dataClass,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnRegistrationVtbl;
    interface IMbnRegistration
    {
        CONST_VTBL struct IMbnRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRegisterState(This,registerState) )
    ( (This)->lpVtbl -> GetRegisterMode(This,registerMode) )
    ( (This)->lpVtbl -> GetProviderID(This,providerID) )
    ( (This)->lpVtbl -> GetProviderName(This,providerName) )
    ( (This)->lpVtbl -> GetRoamingText(This,roamingText) )
    ( (This)->lpVtbl -> GetAvailableDataClasses(This,availableDataClasses) )
    ( (This)->lpVtbl -> GetCurrentDataClass(This,currentDataClass) )
    ( (This)->lpVtbl -> GetRegistrationNetworkError(This,registrationNetworkError) )
    ( (This)->lpVtbl -> GetPacketAttachNetworkError(This,packetAttachNetworkError) )
    ( (This)->lpVtbl -> SetRegisterMode(This,registerMode,providerID,dataClass,requestID) )
EXTERN_C const IID IID_IMbnRegistrationEvents;
    typedef struct IMbnRegistrationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnRegistrationEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnRegistrationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnRegistrationEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnRegisterModeAvailable )(
            __RPC__in IMbnRegistrationEvents * This,
                       __RPC__in_opt IMbnRegistration *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnRegisterStateChange )(
            __RPC__in IMbnRegistrationEvents * This,
                       __RPC__in_opt IMbnRegistration *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnPacketServiceStateChange )(
            __RPC__in IMbnRegistrationEvents * This,
                       __RPC__in_opt IMbnRegistration *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnSetRegisterModeComplete )(
            __RPC__in IMbnRegistrationEvents * This,
                       __RPC__in_opt IMbnRegistration *newInterface,
                       ULONG requestID,
                       HRESULT status);
        END_INTERFACE
    } IMbnRegistrationEventsVtbl;
    interface IMbnRegistrationEvents
    {
        CONST_VTBL struct IMbnRegistrationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnRegisterModeAvailable(This,newInterface) )
    ( (This)->lpVtbl -> OnRegisterStateChange(This,newInterface) )
    ( (This)->lpVtbl -> OnPacketServiceStateChange(This,newInterface) )
    ( (This)->lpVtbl -> OnSetRegisterModeComplete(This,newInterface,requestID,status) )
EXTERN_C const IID IID_IMbnConnectionManager;
    typedef struct IMbnConnectionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetConnection )(
            __RPC__in IMbnConnectionManager * This,
                       __RPC__in LPCWSTR connectionID,
                                     __RPC__deref_out_opt IMbnConnection **mbnConnection);
                               HRESULT ( STDMETHODCALLTYPE *GetConnections )(
            __RPC__in IMbnConnectionManager * This,
                                     __RPC__deref_out_opt SAFEARRAY * *mbnConnections);
        END_INTERFACE
    } IMbnConnectionManagerVtbl;
    interface IMbnConnectionManager
    {
        CONST_VTBL struct IMbnConnectionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnection(This,connectionID,mbnConnection) )
    ( (This)->lpVtbl -> GetConnections(This,mbnConnections) )
EXTERN_C const IID IID_IMbnConnectionManagerEvents;
    typedef struct IMbnConnectionManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionManagerEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnConnectionArrival )(
            __RPC__in IMbnConnectionManagerEvents * This,
                       __RPC__in_opt IMbnConnection *newConnection);
                               HRESULT ( STDMETHODCALLTYPE *OnConnectionRemoval )(
            __RPC__in IMbnConnectionManagerEvents * This,
                       __RPC__in_opt IMbnConnection *oldConnection);
        END_INTERFACE
    } IMbnConnectionManagerEventsVtbl;
    interface IMbnConnectionManagerEvents
    {
        CONST_VTBL struct IMbnConnectionManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnectionArrival(This,newConnection) )
    ( (This)->lpVtbl -> OnConnectionRemoval(This,oldConnection) )
EXTERN_C const IID IID_IMbnPinManager;
    typedef struct IMbnPinManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnPinManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnPinManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnPinManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetPinList )(
            __RPC__in IMbnPinManager * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pinList);
                               HRESULT ( STDMETHODCALLTYPE *GetPin )(
            __RPC__in IMbnPinManager * This,
                       MBN_PIN_TYPE pinType,
                                     __RPC__deref_out_opt IMbnPin **pin);
                               HRESULT ( STDMETHODCALLTYPE *GetPinState )(
            __RPC__in IMbnPinManager * This,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnPinManagerVtbl;
    interface IMbnPinManager
    {
        CONST_VTBL struct IMbnPinManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPinList(This,pinList) )
    ( (This)->lpVtbl -> GetPin(This,pinType,pin) )
    ( (This)->lpVtbl -> GetPinState(This,requestID) )
EXTERN_C const IID IID_IMbnPinManagerEvents;
    typedef struct IMbnPinManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnPinManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnPinManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnPinManagerEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnPinListAvailable )(
            __RPC__in IMbnPinManagerEvents * This,
                       __RPC__in_opt IMbnPinManager *pinManager);
                               HRESULT ( STDMETHODCALLTYPE *OnGetPinStateComplete )(
            __RPC__in IMbnPinManagerEvents * This,
                       __RPC__in_opt IMbnPinManager *pinManager,
                       MBN_PIN_INFO pinInfo,
                       ULONG requestID,
                       HRESULT status);
        END_INTERFACE
    } IMbnPinManagerEventsVtbl;
    interface IMbnPinManagerEvents
    {
        CONST_VTBL struct IMbnPinManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPinListAvailable(This,pinManager) )
    ( (This)->lpVtbl -> OnGetPinStateComplete(This,pinManager,pinInfo,requestID,status) )
EXTERN_C const IID IID_IMbnPinEvents;
    typedef struct IMbnPinEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnPinEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnPinEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnPinEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnEnableComplete )(
            __RPC__in IMbnPinEvents * This,
                       __RPC__in_opt IMbnPin *pin,
                            __RPC__in MBN_PIN_INFO *pinInfo,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnDisableComplete )(
            __RPC__in IMbnPinEvents * This,
                       __RPC__in_opt IMbnPin *pin,
                            __RPC__in MBN_PIN_INFO *pinInfo,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnEnterComplete )(
            __RPC__in IMbnPinEvents * This,
                       __RPC__in_opt IMbnPin *Pin,
                            __RPC__in MBN_PIN_INFO *pinInfo,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnChangeComplete )(
            __RPC__in IMbnPinEvents * This,
                       __RPC__in_opt IMbnPin *Pin,
                            __RPC__in MBN_PIN_INFO *pinInfo,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnUnblockComplete )(
            __RPC__in IMbnPinEvents * This,
                       __RPC__in_opt IMbnPin *Pin,
                            __RPC__in MBN_PIN_INFO *pinInfo,
                       ULONG requestID,
                       HRESULT status);
        END_INTERFACE
    } IMbnPinEventsVtbl;
    interface IMbnPinEvents
    {
        CONST_VTBL struct IMbnPinEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEnableComplete(This,pin,pinInfo,requestID,status) )
    ( (This)->lpVtbl -> OnDisableComplete(This,pin,pinInfo,requestID,status) )
    ( (This)->lpVtbl -> OnEnterComplete(This,Pin,pinInfo,requestID,status) )
    ( (This)->lpVtbl -> OnChangeComplete(This,Pin,pinInfo,requestID,status) )
    ( (This)->lpVtbl -> OnUnblockComplete(This,Pin,pinInfo,requestID,status) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IMbnSubscriberInformation;
    typedef struct IMbnSubscriberInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSubscriberInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSubscriberInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSubscriberInformation * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriberID )(
            __RPC__in IMbnSubscriberInformation * This,
                                     __RPC__deref_out_opt BSTR *SubscriberID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SimIccID )(
            __RPC__in IMbnSubscriberInformation * This,
                                     __RPC__deref_out_opt BSTR *SimIccID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TelephoneNumbers )(
            __RPC__in IMbnSubscriberInformation * This,
                                     __RPC__deref_out_opt SAFEARRAY * *TelephoneNumbers);
        END_INTERFACE
    } IMbnSubscriberInformationVtbl;
    interface IMbnSubscriberInformation
    {
        CONST_VTBL struct IMbnSubscriberInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SubscriberID(This,SubscriberID) )
    ( (This)->lpVtbl -> get_SimIccID(This,SimIccID) )
    ( (This)->lpVtbl -> get_TelephoneNumbers(This,TelephoneNumbers) )
EXTERN_C const IID IID_IMbnSignal;
    typedef struct IMbnSignalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSignal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSignal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSignal * This);
                               HRESULT ( STDMETHODCALLTYPE *GetSignalStrength )(
            __RPC__in IMbnSignal * This,
                                     __RPC__out ULONG *signalStrength);
                               HRESULT ( STDMETHODCALLTYPE *GetSignalError )(
            __RPC__in IMbnSignal * This,
                                     __RPC__out ULONG *signalError);
        END_INTERFACE
    } IMbnSignalVtbl;
    interface IMbnSignal
    {
        CONST_VTBL struct IMbnSignalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSignalStrength(This,signalStrength) )
    ( (This)->lpVtbl -> GetSignalError(This,signalError) )
EXTERN_C const IID IID_IMbnSignalEvents;
    typedef struct IMbnSignalEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSignalEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSignalEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSignalEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnSignalStateChange )(
            __RPC__in IMbnSignalEvents * This,
                       __RPC__in_opt IMbnSignal *newInterface);
        END_INTERFACE
    } IMbnSignalEventsVtbl;
    interface IMbnSignalEvents
    {
        CONST_VTBL struct IMbnSignalEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSignalStateChange(This,newInterface) )
EXTERN_C const IID IID_IMbnConnectionContext;
    typedef struct IMbnConnectionContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionContext * This);
                               HRESULT ( STDMETHODCALLTYPE *GetProvisionedContexts )(
            __RPC__in IMbnConnectionContext * This,
                                     __RPC__deref_out_opt SAFEARRAY * *provisionedContexts);
                               HRESULT ( STDMETHODCALLTYPE *SetProvisionedContext )(
            __RPC__in IMbnConnectionContext * This,
                       MBN_CONTEXT provisionedContexts,
                       __RPC__in LPCWSTR providerID,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnConnectionContextVtbl;
    interface IMbnConnectionContext
    {
        CONST_VTBL struct IMbnConnectionContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProvisionedContexts(This,provisionedContexts) )
    ( (This)->lpVtbl -> SetProvisionedContext(This,provisionedContexts,providerID,requestID) )
EXTERN_C const IID IID_IMbnConnectionContextEvents;
    typedef struct IMbnConnectionContextEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionContextEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionContextEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionContextEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnProvisionedContextListChange )(
            __RPC__in IMbnConnectionContextEvents * This,
                       __RPC__in_opt IMbnConnectionContext *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnSetProvisionedContextComplete )(
            __RPC__in IMbnConnectionContextEvents * This,
                       __RPC__in_opt IMbnConnectionContext *newInterface,
                       ULONG requestID,
                       HRESULT status);
        END_INTERFACE
    } IMbnConnectionContextEventsVtbl;
    interface IMbnConnectionContextEvents
    {
        CONST_VTBL struct IMbnConnectionContextEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnProvisionedContextListChange(This,newInterface) )
    ( (This)->lpVtbl -> OnSetProvisionedContextComplete(This,newInterface,requestID,status) )
EXTERN_C const IID IID_IMbnConnectionProfileManager;
    typedef struct IMbnConnectionProfileManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionProfileManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionProfileManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionProfileManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectionProfiles )(
            __RPC__in IMbnConnectionProfileManager * This,
                       __RPC__in_opt IMbnInterface *mbnInterface,
                                     __RPC__deref_out_opt SAFEARRAY * *connectionProfiles);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectionProfile )(
            __RPC__in IMbnConnectionProfileManager * This,
                       __RPC__in_opt IMbnInterface *mbnInterface,
                               __RPC__in_string LPCWSTR profileName,
                                     __RPC__deref_out_opt IMbnConnectionProfile **connectionProfile);
                               HRESULT ( STDMETHODCALLTYPE *CreateConnectionProfile )(
            __RPC__in IMbnConnectionProfileManager * This,
                               __RPC__in_string LPCWSTR xmlProfile);
        END_INTERFACE
    } IMbnConnectionProfileManagerVtbl;
    interface IMbnConnectionProfileManager
    {
        CONST_VTBL struct IMbnConnectionProfileManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnectionProfiles(This,mbnInterface,connectionProfiles) )
    ( (This)->lpVtbl -> GetConnectionProfile(This,mbnInterface,profileName,connectionProfile) )
    ( (This)->lpVtbl -> CreateConnectionProfile(This,xmlProfile) )
EXTERN_C const IID IID_IMbnConnectionProfile;
    typedef struct IMbnConnectionProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionProfile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionProfile * This);
                               HRESULT ( STDMETHODCALLTYPE *GetProfileXmlData )(
            __RPC__in IMbnConnectionProfile * This,
                                     __RPC__deref_out_opt BSTR *profileData);
                               HRESULT ( STDMETHODCALLTYPE *UpdateProfile )(
            __RPC__in IMbnConnectionProfile * This,
                               __RPC__in_string LPCWSTR strProfile);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMbnConnectionProfile * This);
        END_INTERFACE
    } IMbnConnectionProfileVtbl;
    interface IMbnConnectionProfile
    {
        CONST_VTBL struct IMbnConnectionProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProfileXmlData(This,profileData) )
    ( (This)->lpVtbl -> UpdateProfile(This,strProfile) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IMbnConnectionProfileEvents;
    typedef struct IMbnConnectionProfileEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionProfileEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionProfileEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionProfileEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnProfileUpdate )(
            __RPC__in IMbnConnectionProfileEvents * This,
                       __RPC__in_opt IMbnConnectionProfile *newProfile);
        END_INTERFACE
    } IMbnConnectionProfileEventsVtbl;
    interface IMbnConnectionProfileEvents
    {
        CONST_VTBL struct IMbnConnectionProfileEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnProfileUpdate(This,newProfile) )
EXTERN_C const IID IID_IMbnSmsConfiguration;
    typedef struct IMbnSmsConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSmsConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSmsConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSmsConfiguration * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceCenterAddress )(
            __RPC__in IMbnSmsConfiguration * This,
                                     __RPC__deref_out_opt BSTR *scAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServiceCenterAddress )(
            __RPC__in IMbnSmsConfiguration * This,
                       __RPC__in LPCWSTR scAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxMessageIndex )(
            __RPC__in IMbnSmsConfiguration * This,
                                     __RPC__out ULONG *index);
                                        HRESULT ( STDMETHODCALLTYPE *get_CdmaShortMsgSize )(
            __RPC__in IMbnSmsConfiguration * This,
                                     __RPC__out ULONG *shortMsgSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_SmsFormat )(
            __RPC__in IMbnSmsConfiguration * This,
                                     __RPC__out MBN_SMS_FORMAT *smsFormat);
                                        HRESULT ( STDMETHODCALLTYPE *put_SmsFormat )(
            __RPC__in IMbnSmsConfiguration * This,
                       MBN_SMS_FORMAT smsFormat);
        END_INTERFACE
    } IMbnSmsConfigurationVtbl;
    interface IMbnSmsConfiguration
    {
        CONST_VTBL struct IMbnSmsConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ServiceCenterAddress(This,scAddress) )
    ( (This)->lpVtbl -> put_ServiceCenterAddress(This,scAddress) )
    ( (This)->lpVtbl -> get_MaxMessageIndex(This,index) )
    ( (This)->lpVtbl -> get_CdmaShortMsgSize(This,shortMsgSize) )
    ( (This)->lpVtbl -> get_SmsFormat(This,smsFormat) )
    ( (This)->lpVtbl -> put_SmsFormat(This,smsFormat) )
EXTERN_C const IID IID_IMbnSmsReadMsgPdu;
    typedef struct IMbnSmsReadMsgPduVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSmsReadMsgPdu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSmsReadMsgPdu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSmsReadMsgPdu * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IMbnSmsReadMsgPdu * This,
                                     __RPC__out ULONG *Index);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMbnSmsReadMsgPdu * This,
                                     __RPC__out MBN_MSG_STATUS *Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_PduData )(
            __RPC__in IMbnSmsReadMsgPdu * This,
                                     __RPC__deref_out_opt BSTR *PduData);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IMbnSmsReadMsgPdu * This,
                                     __RPC__deref_out_opt SAFEARRAY * *Message);
        END_INTERFACE
    } IMbnSmsReadMsgPduVtbl;
    interface IMbnSmsReadMsgPdu
    {
        CONST_VTBL struct IMbnSmsReadMsgPduVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Index(This,Index) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> get_PduData(This,PduData) )
    ( (This)->lpVtbl -> get_Message(This,Message) )
EXTERN_C const IID IID_IMbnSmsReadMsgTextCdma;
    typedef struct IMbnSmsReadMsgTextCdmaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSmsReadMsgTextCdma * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSmsReadMsgTextCdma * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__out ULONG *Index);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__out MBN_MSG_STATUS *Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__deref_out_opt BSTR *Address);
                                        HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__deref_out_opt BSTR *Timestamp);
                                        HRESULT ( STDMETHODCALLTYPE *get_EncodingID )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__out MBN_SMS_CDMA_ENCODING *EncodingID);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageID )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__out MBN_SMS_CDMA_LANG *LanguageID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeInCharacters )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__out ULONG *SizeInCharacters);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IMbnSmsReadMsgTextCdma * This,
                                     __RPC__deref_out_opt SAFEARRAY * *Message);
        END_INTERFACE
    } IMbnSmsReadMsgTextCdmaVtbl;
    interface IMbnSmsReadMsgTextCdma
    {
        CONST_VTBL struct IMbnSmsReadMsgTextCdmaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Index(This,Index) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> get_Address(This,Address) )
    ( (This)->lpVtbl -> get_Timestamp(This,Timestamp) )
    ( (This)->lpVtbl -> get_EncodingID(This,EncodingID) )
    ( (This)->lpVtbl -> get_LanguageID(This,LanguageID) )
    ( (This)->lpVtbl -> get_SizeInCharacters(This,SizeInCharacters) )
    ( (This)->lpVtbl -> get_Message(This,Message) )
EXTERN_C const IID IID_IMbnSms;
    typedef struct IMbnSmsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSms * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSms * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSms * This);
                               HRESULT ( STDMETHODCALLTYPE *GetSmsConfiguration )(
            __RPC__in IMbnSms * This,
                                     __RPC__deref_out_opt IMbnSmsConfiguration **smsConfiguration);
                               HRESULT ( STDMETHODCALLTYPE *SetSmsConfiguration )(
            __RPC__in IMbnSms * This,
                       __RPC__in_opt IMbnSmsConfiguration *smsConfiguration,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *SmsSendPdu )(
            __RPC__in IMbnSms * This,
                       __RPC__in LPCWSTR pduData,
                       BYTE size,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *SmsSendCdma )(
            __RPC__in IMbnSms * This,
                       __RPC__in LPCWSTR address,
                       MBN_SMS_CDMA_ENCODING encoding,
                       MBN_SMS_CDMA_LANG language,
                       ULONG sizeInCharacters,
                       __RPC__in SAFEARRAY * message,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *SmsSendCdmaPdu )(
            __RPC__in IMbnSms * This,
                       __RPC__in SAFEARRAY * message,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *SmsRead )(
            __RPC__in IMbnSms * This,
                            __RPC__in MBN_SMS_FILTER *smsFilter,
                       MBN_SMS_FORMAT smsFormat,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *SmsDelete )(
            __RPC__in IMbnSms * This,
                            __RPC__in MBN_SMS_FILTER *smsFilter,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *GetSmsStatus )(
            __RPC__in IMbnSms * This,
                             __RPC__out MBN_SMS_STATUS_INFO *smsStatusInfo);
        END_INTERFACE
    } IMbnSmsVtbl;
    interface IMbnSms
    {
        CONST_VTBL struct IMbnSmsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSmsConfiguration(This,smsConfiguration) )
    ( (This)->lpVtbl -> SetSmsConfiguration(This,smsConfiguration,requestID) )
    ( (This)->lpVtbl -> SmsSendPdu(This,pduData,size,requestID) )
    ( (This)->lpVtbl -> SmsSendCdma(This,address,encoding,language,sizeInCharacters,message,requestID) )
    ( (This)->lpVtbl -> SmsSendCdmaPdu(This,message,requestID) )
    ( (This)->lpVtbl -> SmsRead(This,smsFilter,smsFormat,requestID) )
    ( (This)->lpVtbl -> SmsDelete(This,smsFilter,requestID) )
    ( (This)->lpVtbl -> GetSmsStatus(This,smsStatusInfo) )
EXTERN_C const IID IID_IMbnSmsEvents;
    typedef struct IMbnSmsEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnSmsEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnSmsEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnSmsConfigurationChange )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms);
                               HRESULT ( STDMETHODCALLTYPE *OnSetSmsConfigurationComplete )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnSmsSendComplete )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnSmsReadComplete )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms,
                       MBN_SMS_FORMAT smsFormat,
                       __RPC__in SAFEARRAY * readMsgs,
                       VARIANT_BOOL moreMsgs,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnSmsNewClass0Message )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms,
                       MBN_SMS_FORMAT smsFormat,
                       __RPC__in SAFEARRAY * readMsgs);
                               HRESULT ( STDMETHODCALLTYPE *OnSmsDeleteComplete )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnSmsStatusChange )(
            __RPC__in IMbnSmsEvents * This,
                       __RPC__in_opt IMbnSms *sms);
        END_INTERFACE
    } IMbnSmsEventsVtbl;
    interface IMbnSmsEvents
    {
        CONST_VTBL struct IMbnSmsEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSmsConfigurationChange(This,sms) )
    ( (This)->lpVtbl -> OnSetSmsConfigurationComplete(This,sms,requestID,status) )
    ( (This)->lpVtbl -> OnSmsSendComplete(This,sms,requestID,status) )
    ( (This)->lpVtbl -> OnSmsReadComplete(This,sms,smsFormat,readMsgs,moreMsgs,requestID,status) )
    ( (This)->lpVtbl -> OnSmsNewClass0Message(This,sms,smsFormat,readMsgs) )
    ( (This)->lpVtbl -> OnSmsDeleteComplete(This,sms,requestID,status) )
    ( (This)->lpVtbl -> OnSmsStatusChange(This,sms) )
EXTERN_C const IID IID_IMbnServiceActivation;
    typedef struct IMbnServiceActivationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnServiceActivation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnServiceActivation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnServiceActivation * This);
                               HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in IMbnServiceActivation * This,
                       __RPC__in SAFEARRAY * vendorSpecificData,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnServiceActivationVtbl;
    interface IMbnServiceActivation
    {
        CONST_VTBL struct IMbnServiceActivationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,vendorSpecificData,requestID) )
EXTERN_C const IID IID_IMbnServiceActivationEvents;
    typedef struct IMbnServiceActivationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnServiceActivationEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnServiceActivationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnServiceActivationEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnActivationComplete )(
            __RPC__in IMbnServiceActivationEvents * This,
                       __RPC__in_opt IMbnServiceActivation *serviceActivation,
                       __RPC__in SAFEARRAY * vendorSpecificData,
                       ULONG requestID,
                       HRESULT status,
                       ULONG networkError);
        END_INTERFACE
    } IMbnServiceActivationEventsVtbl;
    interface IMbnServiceActivationEvents
    {
        CONST_VTBL struct IMbnServiceActivationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnActivationComplete(This,serviceActivation,vendorSpecificData,requestID,status,networkError) )
EXTERN_C const IID IID_IMbnVendorSpecificOperation;
    typedef struct IMbnVendorSpecificOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnVendorSpecificOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnVendorSpecificOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnVendorSpecificOperation * This);
                               HRESULT ( STDMETHODCALLTYPE *SetVendorSpecific )(
            __RPC__in IMbnVendorSpecificOperation * This,
                            __RPC__in SAFEARRAY * vendorSpecificData,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnVendorSpecificOperationVtbl;
    interface IMbnVendorSpecificOperation
    {
        CONST_VTBL struct IMbnVendorSpecificOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetVendorSpecific(This,vendorSpecificData,requestID) )
EXTERN_C const IID IID_IMbnVendorSpecificEvents;
    typedef struct IMbnVendorSpecificEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnVendorSpecificEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnVendorSpecificEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnVendorSpecificEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnEventNotification )(
            __RPC__in IMbnVendorSpecificEvents * This,
                       __RPC__in_opt IMbnVendorSpecificOperation *vendorOperation,
                       __RPC__in SAFEARRAY * vendorSpecificData);
                               HRESULT ( STDMETHODCALLTYPE *OnSetVendorSpecificComplete )(
            __RPC__in IMbnVendorSpecificEvents * This,
                       __RPC__in_opt IMbnVendorSpecificOperation *vendorOperation,
                       __RPC__in SAFEARRAY * vendorSpecificData,
                       ULONG requestID);
        END_INTERFACE
    } IMbnVendorSpecificEventsVtbl;
    interface IMbnVendorSpecificEvents
    {
        CONST_VTBL struct IMbnVendorSpecificEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEventNotification(This,vendorOperation,vendorSpecificData) )
    ( (This)->lpVtbl -> OnSetVendorSpecificComplete(This,vendorOperation,vendorSpecificData,requestID) )
EXTERN_C const IID IID_IMbnConnectionProfileManagerEvents;
    typedef struct IMbnConnectionProfileManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnConnectionProfileManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnConnectionProfileManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnConnectionProfileManagerEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnConnectionProfileArrival )(
            __RPC__in IMbnConnectionProfileManagerEvents * This,
                       __RPC__in_opt IMbnConnectionProfile *newConnectionProfile);
                               HRESULT ( STDMETHODCALLTYPE *OnConnectionProfileRemoval )(
            __RPC__in IMbnConnectionProfileManagerEvents * This,
                       __RPC__in_opt IMbnConnectionProfile *oldConnectionProfile);
        END_INTERFACE
    } IMbnConnectionProfileManagerEventsVtbl;
    interface IMbnConnectionProfileManagerEvents
    {
        CONST_VTBL struct IMbnConnectionProfileManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnectionProfileArrival(This,newConnectionProfile) )
    ( (This)->lpVtbl -> OnConnectionProfileRemoval(This,oldConnectionProfile) )
EXTERN_C const IID IID_IMbnRadio;
    typedef struct IMbnRadioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnRadio * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnRadio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnRadio * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SoftwareRadioState )(
            __RPC__in IMbnRadio * This,
                                     __RPC__out MBN_RADIO *SoftwareRadioState);
                                        HRESULT ( STDMETHODCALLTYPE *get_HardwareRadioState )(
            __RPC__in IMbnRadio * This,
                                     __RPC__out MBN_RADIO *HardwareRadioState);
                               HRESULT ( STDMETHODCALLTYPE *SetSoftwareRadioState )(
            __RPC__in IMbnRadio * This,
                       MBN_RADIO radioState,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnRadioVtbl;
    interface IMbnRadio
    {
        CONST_VTBL struct IMbnRadioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SoftwareRadioState(This,SoftwareRadioState) )
    ( (This)->lpVtbl -> get_HardwareRadioState(This,HardwareRadioState) )
    ( (This)->lpVtbl -> SetSoftwareRadioState(This,radioState,requestID) )
EXTERN_C const IID IID_IMbnRadioEvents;
    typedef struct IMbnRadioEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnRadioEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnRadioEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnRadioEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnRadioStateChange )(
            __RPC__in IMbnRadioEvents * This,
                       __RPC__in_opt IMbnRadio *newInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnSetSoftwareRadioStateComplete )(
            __RPC__in IMbnRadioEvents * This,
                       __RPC__in_opt IMbnRadio *newInterface,
                       ULONG requestID,
                       HRESULT status);
        END_INTERFACE
    } IMbnRadioEventsVtbl;
    interface IMbnRadioEvents
    {
        CONST_VTBL struct IMbnRadioEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnRadioStateChange(This,newInterface) )
    ( (This)->lpVtbl -> OnSetSoftwareRadioStateComplete(This,newInterface,requestID,status) )
EXTERN_C const IID IID_IMbnMultiCarrier;
    typedef struct IMbnMultiCarrierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnMultiCarrier * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnMultiCarrier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnMultiCarrier * This);
                               HRESULT ( STDMETHODCALLTYPE *SetHomeProvider )(
            __RPC__in IMbnMultiCarrier * This,
                       __RPC__in MBN_PROVIDER2 *homeProvider,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *GetPreferredProviders )(
            __RPC__in IMbnMultiCarrier * This,
                                     __RPC__deref_out_opt SAFEARRAY * *preferredMulticarrierProviders);
                               HRESULT ( STDMETHODCALLTYPE *GetVisibleProviders )(
            __RPC__in IMbnMultiCarrier * This,
                        __RPC__out ULONG *age,
                                __RPC__deref_out_opt SAFEARRAY * *visibleProviders);
                               HRESULT ( STDMETHODCALLTYPE *GetSupportedCellularClasses )(
            __RPC__in IMbnMultiCarrier * This,
                                     __RPC__deref_out_opt SAFEARRAY * *cellularClasses);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrentCellularClass )(
            __RPC__in IMbnMultiCarrier * This,
                                     __RPC__out MBN_CELLULAR_CLASS *currentCellularClass);
                               HRESULT ( STDMETHODCALLTYPE *ScanNetwork )(
            __RPC__in IMbnMultiCarrier * This,
                        __RPC__out ULONG *requestID);
        END_INTERFACE
    } IMbnMultiCarrierVtbl;
    interface IMbnMultiCarrier
    {
        CONST_VTBL struct IMbnMultiCarrierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHomeProvider(This,homeProvider,requestID) )
    ( (This)->lpVtbl -> GetPreferredProviders(This,preferredMulticarrierProviders) )
    ( (This)->lpVtbl -> GetVisibleProviders(This,age,visibleProviders) )
    ( (This)->lpVtbl -> GetSupportedCellularClasses(This,cellularClasses) )
    ( (This)->lpVtbl -> GetCurrentCellularClass(This,currentCellularClass) )
    ( (This)->lpVtbl -> ScanNetwork(This,requestID) )
EXTERN_C const IID IID_IMbnMultiCarrierEvents;
    typedef struct IMbnMultiCarrierEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnMultiCarrierEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnMultiCarrierEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnMultiCarrierEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnSetHomeProviderComplete )(
            __RPC__in IMbnMultiCarrierEvents * This,
                       __RPC__in_opt IMbnMultiCarrier *mbnInterface,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnCurrentCellularClassChange )(
            __RPC__in IMbnMultiCarrierEvents * This,
                       __RPC__in_opt IMbnMultiCarrier *mbnInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnPreferredProvidersChange )(
            __RPC__in IMbnMultiCarrierEvents * This,
                       __RPC__in_opt IMbnMultiCarrier *mbnInterface);
                               HRESULT ( STDMETHODCALLTYPE *OnScanNetworkComplete )(
            __RPC__in IMbnMultiCarrierEvents * This,
                       __RPC__in_opt IMbnMultiCarrier *mbnInterface,
                       ULONG requestID,
                       HRESULT status);
                               HRESULT ( STDMETHODCALLTYPE *OnInterfaceCapabilityChange )(
            __RPC__in IMbnMultiCarrierEvents * This,
                       __RPC__in_opt IMbnMultiCarrier *mbnInterface);
        END_INTERFACE
    } IMbnMultiCarrierEventsVtbl;
    interface IMbnMultiCarrierEvents
    {
        CONST_VTBL struct IMbnMultiCarrierEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSetHomeProviderComplete(This,mbnInterface,requestID,status) )
    ( (This)->lpVtbl -> OnCurrentCellularClassChange(This,mbnInterface) )
    ( (This)->lpVtbl -> OnPreferredProvidersChange(This,mbnInterface) )
    ( (This)->lpVtbl -> OnScanNetworkComplete(This,mbnInterface,requestID,status) )
    ( (This)->lpVtbl -> OnInterfaceCapabilityChange(This,mbnInterface) )
EXTERN_C const IID IID_IMbnDeviceServiceStateEvents;
    typedef struct IMbnDeviceServiceStateEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnDeviceServiceStateEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnDeviceServiceStateEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnDeviceServiceStateEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnSessionsStateChange )(
            __RPC__in IMbnDeviceServiceStateEvents * This,
                       __RPC__in BSTR interfaceID,
                       MBN_DEVICE_SERVICE_SESSIONS_STATE stateChange);
        END_INTERFACE
    } IMbnDeviceServiceStateEventsVtbl;
    interface IMbnDeviceServiceStateEvents
    {
        CONST_VTBL struct IMbnDeviceServiceStateEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSessionsStateChange(This,interfaceID,stateChange) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_IMbnDeviceServicesManager;
    typedef struct IMbnDeviceServicesManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnDeviceServicesManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnDeviceServicesManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnDeviceServicesManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceServicesContext )(
            __RPC__in IMbnDeviceServicesManager * This,
                       __RPC__in BSTR networkInterfaceID,
                                     __RPC__deref_out_opt IMbnDeviceServicesContext **mbnDevicesContext);
        END_INTERFACE
    } IMbnDeviceServicesManagerVtbl;
    interface IMbnDeviceServicesManager
    {
        CONST_VTBL struct IMbnDeviceServicesManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceServicesContext(This,networkInterfaceID,mbnDevicesContext) )
EXTERN_C const IID IID_IMbnDeviceServicesContext;
    typedef struct IMbnDeviceServicesContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnDeviceServicesContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnDeviceServicesContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnDeviceServicesContext * This);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateDeviceServices )(
            __RPC__in IMbnDeviceServicesContext * This,
                                __RPC__deref_out_opt SAFEARRAY * *deviceServices);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceService )(
            __RPC__in IMbnDeviceServicesContext * This,
                       __RPC__in BSTR deviceServiceID,
                                     __RPC__deref_out_opt IMbnDeviceService **mbnDeviceService);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxCommandSize )(
            __RPC__in IMbnDeviceServicesContext * This,
                                     __RPC__out ULONG *maxCommandSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDataSize )(
            __RPC__in IMbnDeviceServicesContext * This,
                                     __RPC__out ULONG *maxDataSize);
        END_INTERFACE
    } IMbnDeviceServicesContextVtbl;
    interface IMbnDeviceServicesContext
    {
        CONST_VTBL struct IMbnDeviceServicesContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumerateDeviceServices(This,deviceServices) )
    ( (This)->lpVtbl -> GetDeviceService(This,deviceServiceID,mbnDeviceService) )
    ( (This)->lpVtbl -> get_MaxCommandSize(This,maxCommandSize) )
    ( (This)->lpVtbl -> get_MaxDataSize(This,maxDataSize) )
EXTERN_C const IID IID_IMbnDeviceServicesEvents;
    typedef struct IMbnDeviceServicesEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnDeviceServicesEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnDeviceServicesEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnQuerySupportedCommandsComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       __RPC__in SAFEARRAY * commandIDList,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnOpenCommandSessionComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnCloseCommandSessionComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnSetCommandComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       ULONG responseID,
                       __RPC__in SAFEARRAY * deviceServiceData,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnQueryCommandComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       ULONG responseID,
                       __RPC__in SAFEARRAY * deviceServiceData,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnEventNotification )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       ULONG eventID,
                       __RPC__in SAFEARRAY * deviceServiceData);
                               HRESULT ( STDMETHODCALLTYPE *OnOpenDataSessionComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnCloseDataSessionComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnWriteDataComplete )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       HRESULT status,
                       ULONG requestID);
                               HRESULT ( STDMETHODCALLTYPE *OnReadData )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in_opt IMbnDeviceService *deviceService,
                       __RPC__in SAFEARRAY * deviceServiceData);
                               HRESULT ( STDMETHODCALLTYPE *OnInterfaceStateChange )(
            __RPC__in IMbnDeviceServicesEvents * This,
                       __RPC__in BSTR interfaceID,
                       MBN_DEVICE_SERVICES_INTERFACE_STATE stateChange);
        END_INTERFACE
    } IMbnDeviceServicesEventsVtbl;
    interface IMbnDeviceServicesEvents
    {
        CONST_VTBL struct IMbnDeviceServicesEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnQuerySupportedCommandsComplete(This,deviceService,commandIDList,status,requestID) )
    ( (This)->lpVtbl -> OnOpenCommandSessionComplete(This,deviceService,status,requestID) )
    ( (This)->lpVtbl -> OnCloseCommandSessionComplete(This,deviceService,status,requestID) )
    ( (This)->lpVtbl -> OnSetCommandComplete(This,deviceService,responseID,deviceServiceData,status,requestID) )
    ( (This)->lpVtbl -> OnQueryCommandComplete(This,deviceService,responseID,deviceServiceData,status,requestID) )
    ( (This)->lpVtbl -> OnEventNotification(This,deviceService,eventID,deviceServiceData) )
    ( (This)->lpVtbl -> OnOpenDataSessionComplete(This,deviceService,status,requestID) )
    ( (This)->lpVtbl -> OnCloseDataSessionComplete(This,deviceService,status,requestID) )
    ( (This)->lpVtbl -> OnWriteDataComplete(This,deviceService,status,requestID) )
    ( (This)->lpVtbl -> OnReadData(This,deviceService,deviceServiceData) )
    ( (This)->lpVtbl -> OnInterfaceStateChange(This,interfaceID,stateChange) )
EXTERN_C const IID IID_IMbnDeviceService;
    typedef struct IMbnDeviceServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnDeviceService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnDeviceService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnDeviceService * This);
                               HRESULT ( STDMETHODCALLTYPE *QuerySupportedCommands )(
            __RPC__in IMbnDeviceService * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *OpenCommandSession )(
            __RPC__in IMbnDeviceService * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *CloseCommandSession )(
            __RPC__in IMbnDeviceService * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *SetCommand )(
            __RPC__in IMbnDeviceService * This,
                       ULONG commandID,
                            __RPC__in SAFEARRAY * deviceServiceData,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *QueryCommand )(
            __RPC__in IMbnDeviceService * This,
                       ULONG commandID,
                            __RPC__in SAFEARRAY * deviceServiceData,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *OpenDataSession )(
            __RPC__in IMbnDeviceService * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *CloseDataSession )(
            __RPC__in IMbnDeviceService * This,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *WriteData )(
            __RPC__in IMbnDeviceService * This,
                       __RPC__in SAFEARRAY * deviceServiceData,
                        __RPC__out ULONG *requestID);
                                        HRESULT ( STDMETHODCALLTYPE *get_InterfaceID )(
            __RPC__in IMbnDeviceService * This,
                                     __RPC__deref_out_opt BSTR *InterfaceID);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceServiceID )(
            __RPC__in IMbnDeviceService * This,
                                     __RPC__deref_out_opt BSTR *DeviceServiceID);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsCommandSessionOpen )(
            __RPC__in IMbnDeviceService * This,
                                     __RPC__out BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDataSessionOpen )(
            __RPC__in IMbnDeviceService * This,
                                     __RPC__out BOOL *value);
        END_INTERFACE
    } IMbnDeviceServiceVtbl;
    interface IMbnDeviceService
    {
        CONST_VTBL struct IMbnDeviceServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QuerySupportedCommands(This,requestID) )
    ( (This)->lpVtbl -> OpenCommandSession(This,requestID) )
    ( (This)->lpVtbl -> CloseCommandSession(This,requestID) )
    ( (This)->lpVtbl -> SetCommand(This,commandID,deviceServiceData,requestID) )
    ( (This)->lpVtbl -> QueryCommand(This,commandID,deviceServiceData,requestID) )
    ( (This)->lpVtbl -> OpenDataSession(This,requestID) )
    ( (This)->lpVtbl -> CloseDataSession(This,requestID) )
    ( (This)->lpVtbl -> WriteData(This,deviceServiceData,requestID) )
    ( (This)->lpVtbl -> get_InterfaceID(This,InterfaceID) )
    ( (This)->lpVtbl -> get_DeviceServiceID(This,DeviceServiceID) )
    ( (This)->lpVtbl -> get_IsCommandSessionOpen(This,value) )
    ( (This)->lpVtbl -> get_IsDataSessionOpen(This,value) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0041_v0_0_s_ifspec;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct __mbnapi_ReferenceRemainingTypes__
    {
    MBN_BAND_CLASS bandClass;
    MBN_CONTEXT_CONSTANTS contextConstants;
    MBN_CTRL_CAPS ctrlCaps;
    MBN_DATA_CLASS dataClass;
    MBN_INTERFACE_CAPS_CONSTANTS interfaceCapsConstants;
    MBN_PIN_CONSTANTS pinConstants;
    MBN_PROVIDER_CONSTANTS providerConstants;
    MBN_PROVIDER_STATE providerState;
    MBN_REGISTRATION_CONSTANTS registrationConstants;
    MBN_SIGNAL_CONSTANTS signalConstants;
    MBN_SMS_CAPS smsCaps;
    enum MBN_SMS_CONSTANTS smsConstants;
    WWAEXT_SMS_CONSTANTS wwaextSmsConstants;
    MBN_SMS_STATUS_FLAG smsStatusFlag;
    } __mbnapi_ReferenceRemainingTypes__;
typedef struct __DummyPinType__
    {
    ULONG pinType;
    } __DummyPinType__;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_MbnApi;
EXTERN_C const IID IID_IMbnPin;
    typedef struct IMbnPinVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMbnPin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMbnPin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMbnPin * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_PinType )(
            __RPC__in IMbnPin * This,
                                     __RPC__out MBN_PIN_TYPE *PinType);
                                        HRESULT ( STDMETHODCALLTYPE *get_PinFormat )(
            __RPC__in IMbnPin * This,
                                     __RPC__out MBN_PIN_FORMAT *PinFormat);
                                        HRESULT ( STDMETHODCALLTYPE *get_PinLengthMin )(
            __RPC__in IMbnPin * This,
                                     __RPC__out ULONG *PinLengthMin);
                                        HRESULT ( STDMETHODCALLTYPE *get_PinLengthMax )(
            __RPC__in IMbnPin * This,
                                     __RPC__out ULONG *PinLengthMax);
                                        HRESULT ( STDMETHODCALLTYPE *get_PinMode )(
            __RPC__in IMbnPin * This,
                                     __RPC__out MBN_PIN_MODE *PinMode);
                               HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in IMbnPin * This,
                                    __RPC__in_string LPCWSTR pin,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *Disable )(
            __RPC__in IMbnPin * This,
                                    __RPC__in_string LPCWSTR pin,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *Enter )(
            __RPC__in IMbnPin * This,
                                    __RPC__in_string LPCWSTR pin,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *Change )(
            __RPC__in IMbnPin * This,
                                    __RPC__in_string LPCWSTR pin,
                                    __RPC__in_string LPCWSTR newPin,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *Unblock )(
            __RPC__in IMbnPin * This,
                                    __RPC__in_string LPCWSTR puk,
                                    __RPC__in_string LPCWSTR newPin,
                        __RPC__out ULONG *requestID);
                               HRESULT ( STDMETHODCALLTYPE *GetPinManager )(
            __RPC__in IMbnPin * This,
                                     __RPC__deref_out_opt IMbnPinManager **pinManager);
        END_INTERFACE
    } IMbnPinVtbl;
    interface IMbnPin
    {
        CONST_VTBL struct IMbnPinVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PinType(This,PinType) )
    ( (This)->lpVtbl -> get_PinFormat(This,PinFormat) )
    ( (This)->lpVtbl -> get_PinLengthMin(This,PinLengthMin) )
    ( (This)->lpVtbl -> get_PinLengthMax(This,PinLengthMax) )
    ( (This)->lpVtbl -> get_PinMode(This,PinMode) )
    ( (This)->lpVtbl -> Enable(This,pin,requestID) )
    ( (This)->lpVtbl -> Disable(This,pin,requestID) )
    ( (This)->lpVtbl -> Enter(This,pin,requestID) )
    ( (This)->lpVtbl -> Change(This,pin,newPin,requestID) )
    ( (This)->lpVtbl -> Unblock(This,puk,newPin,requestID) )
    ( (This)->lpVtbl -> GetPinManager(This,pinManager) )
EXTERN_C const CLSID CLSID_MbnConnectionProfileManager;
class DECLSPEC_UUID("BDFEE05A-4418-11DD-90ED-001C257CCFF1")
MbnConnectionProfileManager;
EXTERN_C const CLSID CLSID_MbnInterfaceManager;
class DECLSPEC_UUID("BDFEE05B-4418-11DD-90ED-001C257CCFF1")
MbnInterfaceManager;
EXTERN_C const CLSID CLSID_MbnConnectionManager;
class DECLSPEC_UUID("BDFEE05C-4418-11DD-90ED-001C257CCFF1")
MbnConnectionManager;
EXTERN_C const CLSID CLSID_MbnDeviceServicesManager;
class DECLSPEC_UUID("2269DAA3-2A9F-4165-A501-CE00A6F7A75B")
MbnDeviceServicesManager;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
