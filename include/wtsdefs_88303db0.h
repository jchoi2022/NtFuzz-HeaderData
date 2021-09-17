#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef BYTE *PBYTE;
typedef struct _WTS_SOCKADDR {
    USHORT sin_family;
    union switch (unsigned short sin_family) u
    {
        case 2:
        struct{
            USHORT sin_port;
            ULONG in_addr;
            UCHAR sin_zero[8];
        } ipv4;
        case 23:
        struct {
            USHORT sin6_port;
            ULONG sin6_flowinfo;
            USHORT sin6_addr[8];
            ULONG sin6_scope_id;
        } ipv6;
    };
} WTS_SOCKADDR, *PWTS_SOCKADDR;
typedef struct _WTS_SMALL_RECT {
    SHORT Left;
    SHORT Top;
    SHORT Right;
    SHORT Bottom;
} WTS_SMALL_RECT, *PWTS_SMALL_RECT;
typedef enum {
    WTS_SERVICE_NONE,
    WTS_SERVICE_START,
    WTS_SERVICE_STOP
} WTS_RCM_SERVICE_STATE;
typedef enum {
    WTS_DRAIN_STATE_NONE,
    WTS_DRAIN_IN_DRAIN,
    WTS_DRAIN_NOT_IN_DRAIN
} WTS_RCM_DRAIN_STATE;
typedef struct _WTS_SERVICE_STATE {
    WTS_RCM_SERVICE_STATE RcmServiceState;
    WTS_RCM_DRAIN_STATE RcmDrainState;
} WTS_SERVICE_STATE, *PWTS_SERVICE_STATE;
typedef struct _WTS_SESSION_ID {
    GUID SessionUniqueGuid;
    ULONG SessionId;
} WTS_SESSION_ID, *PWTS_SESSION_ID;
typedef struct _WTS_USER_CREDENTIAL {
    WCHAR UserName[ WTS_USERNAME_LENGTH + 1 ];
    WCHAR Password[ WTS_PASSWORD_LENGTH + 1 ];
    WCHAR Domain[ WTS_DOMAIN_LENGTH + 1 ];
} WTS_USER_CREDENTIAL, *PWTS_USER_CREDENTIAL;
typedef struct _WTS_SYSTEMTIME {
    USHORT wYear;
    USHORT wMonth;
    USHORT wDayOfWeek;
    USHORT wDay;
    USHORT wHour;
    USHORT wMinute;
    USHORT wSecond;
    USHORT wMilliseconds;
} WTS_SYSTEMTIME, *PWTS_SYSTEMTIME;
typedef struct _WTS_TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    WTS_SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    WTS_SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} WTS_TIME_ZONE_INFORMATION, *PWTS_TIME_ZONE_INFORMATION;
typedef struct _WRDS_DYNAMIC_TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    WTS_SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    WTS_SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    WCHAR TimeZoneKeyName[ 128 ];
    USHORT DynamicDaylightTimeDisabled;
} WRDS_DYNAMIC_TIME_ZONE_INFORMATION, *PWRDS_DYNAMIC_TIME_ZONE_INFORMATION;
typedef struct _WTS_CLIENT_DATA {
    BOOLEAN fDisableCtrlAltDel;
    BOOLEAN fDoubleClickDetect;
    BOOLEAN fEnableWindowsKey;
    BOOLEAN fHideTitleBar;
    BOOL fInheritAutoLogon;
    BOOLEAN fPromptForPassword;
    BOOLEAN fUsingSavedCreds;
    WCHAR Domain[WTS_DOMAIN_LENGTH + 1];
    WCHAR UserName[ WTS_USERNAME_LENGTH + 1 ];
    WCHAR Password[ WTS_PASSWORD_LENGTH + 1 ];
    BOOLEAN fPasswordIsScPin;
    BOOL fInheritInitialProgram;
    WCHAR WorkDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    WCHAR InitialProgram[ WTS_INITIALPROGRAM_LENGTH + 1 ];
    BOOLEAN fMaximizeShell;
    BYTE EncryptionLevel;
    ULONG PerformanceFlags;
    WCHAR ProtocolName[ WTS_PROTOCOL_NAME_LENGTH + 1 ];
    USHORT ProtocolType;
    BOOL fInheritColorDepth;
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    WCHAR DisplayDriverName[ WTS_DRIVER_NAME_LENGTH + 1 ];
    WCHAR DisplayDeviceName[ WTS_DEVICE_NAME_LENGTH + 1 ];
    BOOLEAN fMouse;
    ULONG KeyboardLayout;
    ULONG KeyboardType;
    ULONG KeyboardSubType;
    ULONG KeyboardFunctionKey;
    WCHAR imeFileName[ WTS_IMEFILENAME_LENGTH + 1 ];
    ULONG ActiveInputLocale;
    BOOLEAN fNoAudioPlayback;
    BOOLEAN fRemoteConsoleAudio;
    WCHAR AudioDriverName[ WTS_DRIVER_NAME_LENGTH + 1 ];
    WTS_TIME_ZONE_INFORMATION ClientTimeZone;
    WCHAR ClientName[ WTS_CLIENTNAME_LENGTH + 1 ];
    ULONG SerialNumber;
    ULONG ClientAddressFamily;
    WCHAR ClientAddress[ WTS_CLIENTADDRESS_LENGTH + 1 ];
    WTS_SOCKADDR ClientSockAddress;
    WCHAR ClientDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    ULONG ClientBuildNumber;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    ULONG ClientSessionId;
    WCHAR ClientDigProductId[ WTS_CLIENT_PRODUCT_ID_LENGTH + 1 ];
    BOOLEAN fDisableCpm;
    BOOLEAN fDisableCdm;
    BOOLEAN fDisableCcm;
    BOOLEAN fDisableLPT;
    BOOLEAN fDisableClip;
    BOOLEAN fDisablePNP;
} WTS_CLIENT_DATA, *PWTS_CLIENT_DATA;
typedef struct _WTS_USER_DATA {
    WCHAR WorkDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    WCHAR InitialProgram[ WTS_INITIALPROGRAM_LENGTH + 1 ];
    WTS_TIME_ZONE_INFORMATION UserTimeZone;
} WTS_USER_DATA, *PWTS_USER_DATA;
typedef struct _WTS_POLICY_DATA {
    BOOLEAN fDisableEncryption;
    BOOLEAN fDisableAutoReconnect;
    ULONG ColorDepth;
    BYTE MinEncryptionLevel;
    BOOLEAN fDisableCpm;
    BOOLEAN fDisableCdm;
    BOOLEAN fDisableCcm;
    BOOLEAN fDisableLPT;
    BOOLEAN fDisableClip;
    BOOLEAN fDisablePNPRedir;
} WTS_POLICY_DATA, *PWTS_POLICY_DATA;
typedef struct _WTS_PROTOCOL_CACHE {
    ULONG CacheReads;
    ULONG CacheHits;
} WTS_PROTOCOL_CACHE, *PWTS_PROTOCOL_CACHE;
typedef [switch_type(DWORD)] union _WTS_CACHE_STATS_UN {
    [case(1)]
        WTS_PROTOCOL_CACHE ProtocolCache[ WTS_MAX_PROTOCOL_CACHE ];
    [case(2)]
        ULONG TShareCacheStats;
    [case(3)]
        ULONG Reserved[ WTS_MAX_CACHE_RESERVED ];
} WTS_CACHE_STATS_UN, *PWTS_CACHE_STATS_UN;
typedef struct _WTS_CACHE_STATS {
    DWORD Specific;
    [switch_is(Specific)] WTS_CACHE_STATS_UN Data;
    USHORT ProtocolType;
    USHORT Length;
} WTS_CACHE_STATS, *PWTS_CACHE_STATS;
typedef struct _WTS_PROTOCOL_COUNTERS {
    ULONG WdBytes;
    ULONG WdFrames;
    ULONG WaitForOutBuf;
    ULONG Frames;
    ULONG Bytes;
    ULONG CompressedBytes;
    ULONG CompressFlushes;
    ULONG Errors;
    ULONG Timeouts;
    ULONG AsyncFramingError;
    ULONG AsyncOverrunError;
    ULONG AsyncOverflowError;
    ULONG AsyncParityError;
    ULONG TdErrors;
    USHORT ProtocolType;
    USHORT Length;
    USHORT Specific;
    ULONG Reserved[ WTS_MAX_RESERVED ];
} WTS_PROTOCOL_COUNTERS, * PWTS_PROTOCOL_COUNTERS;
typedef struct _WTS_PROTOCOL_STATUS {
    WTS_PROTOCOL_COUNTERS Output;
    WTS_PROTOCOL_COUNTERS Input;
    WTS_CACHE_STATS Cache;
    ULONG AsyncSignal;
    ULONG AsyncSignalMask;
    LARGE_INTEGER Counters[ WTS_MAX_COUNTERS ];
} WTS_PROTOCOL_STATUS, * PWTS_PROTOCOL_STATUS;
typedef struct _WTS_DISPLAY_IOCTL {
    BYTE pDisplayIOCtlData[ WTS_MAX_DISPLAY_IOCTL_DATA ];
    ULONG cbDisplayIOCtlData;
} WTS_DISPLAY_IOCTL, * PWTS_DISPLAY_IOCTL;
typedef enum _WTS_LOGON_ERROR_REDIRECTOR_RESPONSE
{
    WTS_LOGON_ERR_INVALID = 0,
    WTS_LOGON_ERR_NOT_HANDLED,
    WTS_LOGON_ERR_HANDLED_SHOW,
    WTS_LOGON_ERR_HANDLED_DONT_SHOW,
    WTS_LOGON_ERR_HANDLED_DONT_SHOW_START_OVER,
} WTS_LOGON_ERROR_REDIRECTOR_RESPONSE;
typedef struct __WTS_PROPERTY_VALUE
{
    union switch ( unsigned short Type ) u {
        case WTS_VALUE_TYPE_ULONG:
            ULONG ulVal;
        case WTS_VALUE_TYPE_STRING:
            struct {
                [range(0, 0x8000)] ULONG size;
                [string, size_is(size)] WCHAR* pstrVal;
            } strVal;
        case WTS_VALUE_TYPE_BINARY:
            struct {
                [range(0, 0x8000)] ULONG size;
                [size_is(size)] char* pbVal;
            } bVal;
        case WTS_VALUE_TYPE_GUID:
            GUID guidVal;
        };
} WTS_PROPERTY_VALUE, *PWTS_PROPERTY_VALUE;
EXTERN_C const __declspec(selectany) GUID WTS_QUERY_ALLOWED_INITIAL_APP =
{ 0xc77d1b30, 0x5be1, 0x4c6b, { 0xa0, 0xe1, 0xbd, 0x6d, 0x2e, 0x5c, 0x9f, 0xcc} };
EXTERN_C const __declspec(selectany) GUID WTS_QUERY_LOGON_SCREEN_SIZE =
{ 0x8b8e0fe7, 0x0804, 0x4a0e, {0xb2, 0x79, 0x86, 0x60, 0xb1, 0xdf, 0x00, 0x49} };
EXTERN_C const __declspec(selectany) GUID WTS_QUERY_AUDIOENUM_DLL =
{ 0x9bf4fa97, 0xc883, 0x4c2a, {0x80, 0xab, 0x5a, 0x39, 0xc9, 0xaf, 0x00, 0xdb} };
EXTERN_C const __declspec(selectany) GUID WTS_QUERY_MF_FORMAT_SUPPORT =
{ 0x41869ad0, 0x6332, 0x4dc8, {0x95, 0xd5, 0xdb, 0x74, 0x9e, 0x2f, 0x1d, 0x94} };
EXTERN_C const __declspec(selectany) GUID WRDS_SERVICE_ID_GRAPHICS_GUID =
 {0xd2993f4d, 0x2cf, 0x4280, { 0x8c, 0x48, 0x16, 0x24, 0xb4, 0x4f, 0x87, 0x6 } };
EXTERN_C const __declspec(selectany) GUID PROPERTY_DYNAMIC_TIME_ZONE_INFORMATION =
{ 0xcdfd28e, 0xd0b9, 0x4c1f, { 0xa5, 0xeb, 0x6d, 0x1f, 0x6c, 0x65, 0x35, 0xb9 } };
EXTERN_C const _declspec(selectany) GUID PROPERTY_TYPE_GET_FAST_RECONNECT =
{ 0x6212d757, 0x0043, 0x4862,{ 0x99, 0xc3, 0x9f, 0x30, 0x59, 0xac, 0x2a, 0x3b } };
typedef enum
{
    WTS_CERT_TYPE_INVALID = 0,
    WTS_CERT_TYPE_PROPRIETORY = 1,
    WTS_CERT_TYPE_X509 = 2
} WTS_CERT_TYPE;
typedef struct _WTS_LICENSE_CAPABILITIES
{
    DWORD KeyExchangeAlg;
    DWORD ProtocolVer;
    BOOL fAuthenticateServer;
    WTS_CERT_TYPE CertType;
    DWORD cbClientName;
    BYTE rgbClientName[WTS_LICENSE_CLIENT_NAME_BYTE_LENGTH];
} WTS_LICENSE_CAPABILITIES, *PWTS_LICENSE_CAPABILITIES;
typedef _WTS_SMALL_RECT _WRDS_SMALL_RECT;
typedef WTS_SMALL_RECT WRDS_SMALL_RECT;
typedef PWTS_SMALL_RECT PWRDS_SMALL_RECT;
typedef WTS_RCM_SERVICE_STATE WRDS_RCM_SERVICE_STATE;
typedef WTS_RCM_DRAIN_STATE WRDS_RCM_DRAIN_STATE;
typedef _WTS_SERVICE_STATE _WRDS_SERVICE_STATE;
typedef WTS_SERVICE_STATE WRDS_SERVICE_STATE;
typedef PWTS_SERVICE_STATE PWRDS_SERVICE_STATE;
typedef _WTS_SESSION_ID _WRDS_SESSION_ID;
typedef WTS_SESSION_ID WRDS_SESSION_ID;
typedef PWTS_SESSION_ID PWRDS_SESSION_ID;
typedef _WTS_USER_CREDENTIAL _WRDS_USER_CREDENTIAL;
typedef WTS_USER_CREDENTIAL WRDS_USER_CREDENTIAL;
typedef PWTS_USER_CREDENTIAL PWRDS_USER_CREDENTIAL;
typedef _WTS_SYSTEMTIME _WRDS_SYSTEMTIME;
typedef WTS_SYSTEMTIME WRDS_SYSTEMTIME;
typedef PWTS_SYSTEMTIME PWRDS_SYSTEMTIME;
typedef _WTS_TIME_ZONE_INFORMATION _WRDS_TIME_ZONE_INFORMATION;
typedef WTS_TIME_ZONE_INFORMATION WRDS_TIME_ZONE_INFORMATION;
typedef PWTS_TIME_ZONE_INFORMATION PWRDS_TIME_ZONE_INFORMATION;
typedef _WTS_SOCKADDR _WRDS_SOCKADDR;
typedef WTS_SOCKADDR WRDS_SOCKADDR;
typedef PWTS_SOCKADDR PWRDS_SOCKADDR;
typedef _WTS_CLIENT_DATA _WRDS_CLIENT_DATA;
typedef WTS_CLIENT_DATA WRDS_CLIENT_DATA;
typedef PWTS_CLIENT_DATA PWRDS_CLIENT_DATA;
typedef _WTS_PROTOCOL_CACHE _WRDS_PROTOCOL_CACHE;
typedef WTS_PROTOCOL_CACHE WRDS_PROTOCOL_CACHE;
typedef PWTS_PROTOCOL_CACHE PWRDS_PROTOCOL_CACHE;
typedef _WTS_CACHE_STATS_UN _WRDS_CACHE_STATS_UN;
typedef WTS_CACHE_STATS_UN WRDS_CACHE_STATS_UN;
typedef PWTS_CACHE_STATS_UN PWRDS_CACHE_STATS_UN;
typedef _WTS_CACHE_STATS _WRDS_CACHE_STATS;
typedef WTS_CACHE_STATS WRDS_CACHE_STATS;
typedef PWTS_CACHE_STATS PWRDS_CACHE_STATS;
typedef _WTS_PROTOCOL_COUNTERS _WRDS_PROTOCOL_COUNTERS;
typedef WTS_PROTOCOL_COUNTERS WRDS_PROTOCOL_COUNTERS;
typedef PWTS_PROTOCOL_COUNTERS PWRDS_PROTOCOL_COUNTERS;
typedef _WTS_PROTOCOL_STATUS _WRDS_PROTOCOL_STATUS;
typedef WTS_PROTOCOL_STATUS WRDS_PROTOCOL_STATUS;
typedef PWTS_PROTOCOL_STATUS PWRDS_PROTOCOL_STATUS;
typedef _WTS_DISPLAY_IOCTL _WRDS_DISPLAY_IOCTL;
typedef WTS_DISPLAY_IOCTL WRDS_DISPLAY_IOCTL;
typedef PWTS_DISPLAY_IOCTL PWRDS_DISPLAY_IOCTL;
typedef WTS_LOGON_ERROR_REDIRECTOR_RESPONSE WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE;
typedef __WTS_PROPERTY_VALUE __WRDS_PROPERTY_VALUE;
typedef WTS_PROPERTY_VALUE WRDS_PROPERTY_VALUE;
typedef PWTS_PROPERTY_VALUE PWRDS_PROPERTY_VALUE;
typedef WTS_CERT_TYPE WRDS_CERT_TYPE;
typedef _WTS_LICENSE_CAPABILITIES _WRDS_LICENSE_CAPABILITIES;
typedef WTS_LICENSE_CAPABILITIES WRDS_LICENSE_CAPABILITIES;
typedef PWTS_LICENSE_CAPABILITIES PWRDS_LICENSE_CAPABILITIES;
typedef enum _WRDS_CONNECTION_SETTING_LEVEL {
    WRDS_CONNECTION_SETTING_LEVEL_INVALID,
    WRDS_CONNECTION_SETTING_LEVEL_1,
} WRDS_CONNECTION_SETTING_LEVEL, *PWRDS_CONNECTION_SETTING_LEVEL;
typedef enum _WRDS_LISTENER_SETTING_LEVEL {
    WRDS_LISTENER_SETTING_LEVEL_INVALID,
    WRDS_LISTENER_SETTING_LEVEL_1,
} WRDS_LISTENER_SETTING_LEVEL, *PWRDS_LISTENER_SETTING_LEVEL;
typedef enum _WRDS_SETTING_TYPE {
    WRDS_SETTING_TYPE_INVALID,
    WRDS_SETTING_TYPE_MACHINE,
    WRDS_SETTING_TYPE_USER,
    WRDS_SETTING_TYPE_SAM,
} WRDS_SETTING_TYPE, *PWRDS_SETTING_TYPE;
typedef enum _WRDS_SETTING_STATUS {
    WRDS_SETTING_STATUS_NOTAPPLICABLE = -1,
    WRDS_SETTING_STATUS_DISABLED,
    WRDS_SETTING_STATUS_ENABLED,
    WRDS_SETTING_STATUS_NOTCONFIGURED,
} WRDS_SETTING_STATUS, *PWRDS_SETTING_STATUS;
typedef enum _WRDS_SETTING_LEVEL {
    WRDS_SETTING_LEVEL_INVALID,
    WRDS_SETTING_LEVEL_1,
} WRDS_SETTING_LEVEL, *PWRDS_SETTING_LEVEL;
typedef struct _WRDS_LISTENER_SETTINGS_1 {
    ULONG MaxProtocolListenerConnectionCount;
    [range(0, 16384)]
    ULONG SecurityDescriptorSize;
    [size_is(SecurityDescriptorSize)]
    PBYTE pSecurityDescriptor;
} WRDS_LISTENER_SETTINGS_1, *PWRDS_LISTENER_SETTINGS_1;
typedef [switch_type(WRDS_LISTENER_SETTING_LEVEL)] union _WRDS_LISTENER_SETTING {
    [case(WRDS_LISTENER_SETTING_LEVEL_1)]
    WRDS_LISTENER_SETTINGS_1 WRdsListenerSettings1;
} WRDS_LISTENER_SETTING, *PWRDS_LISTENERN_SETTING;
typedef struct _WRDS_LISTENER_SETTINGS {
    WRDS_LISTENER_SETTING_LEVEL WRdsListenerSettingLevel;
    [switch_is(WRdsListenerSettingLevel)]
    WRDS_LISTENER_SETTING WRdsListenerSetting;
} WRDS_LISTENER_SETTINGS, *PWRDS_LISTENER_SETTINGS;
typedef struct _WRDS_CONNECTION_SETTINGS_1 {
    BOOLEAN fInheritInitialProgram;
    BOOLEAN fInheritColorDepth;
    BOOLEAN fHideTitleBar;
    BOOLEAN fInheritAutoLogon;
    BOOLEAN fMaximizeShell;
    BOOLEAN fDisablePNP;
    BOOLEAN fPasswordIsScPin;
    BOOLEAN fPromptForPassword;
    BOOLEAN fDisableCpm;
    BOOLEAN fDisableCdm;
    BOOLEAN fDisableCcm;
    BOOLEAN fDisableLPT;
    BOOLEAN fDisableClip;
    BOOLEAN fResetBroken;
    BOOLEAN fDisableEncryption;
    BOOLEAN fDisableAutoReconnect;
    BOOLEAN fDisableCtrlAltDel;
    BOOLEAN fDoubleClickDetect;
    BOOLEAN fEnableWindowsKey;
    BOOLEAN fUsingSavedCreds;
    BOOLEAN fMouse;
    BOOLEAN fNoAudioPlayback;
    BOOLEAN fRemoteConsoleAudio;
    BYTE EncryptionLevel;
    USHORT ColorDepth;
    USHORT ProtocolType;
    USHORT HRes;
    USHORT VRes;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    ULONG KeyboardLayout;
    ULONG MaxConnectionTime;
    ULONG MaxDisconnectionTime;
    ULONG MaxIdleTime;
    ULONG PerformanceFlags;
    ULONG KeyboardType;
    ULONG KeyboardSubType;
    ULONG KeyboardFunctionKey;
    ULONG ActiveInputLocale;
    ULONG SerialNumber;
    ULONG ClientAddressFamily;
    ULONG ClientBuildNumber;
    ULONG ClientSessionId;
    WCHAR WorkDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    WCHAR InitialProgram[ WTS_INITIALPROGRAM_LENGTH + 1 ];
    WCHAR UserName[ WTS_USERNAME_LENGTH + 1 ];
    WCHAR Domain[WTS_DOMAIN_LENGTH + 1];
    WCHAR Password[ WTS_PASSWORD_LENGTH + 1 ];
    WCHAR ProtocolName[ WTS_PROTOCOL_NAME_LENGTH + 1 ];
    WCHAR DisplayDriverName[ WTS_DRIVER_NAME_LENGTH + 1 ];
    WCHAR DisplayDeviceName[ WTS_DEVICE_NAME_LENGTH + 1 ];
    WCHAR imeFileName[ WTS_IMEFILENAME_LENGTH + 1 ];
    WCHAR AudioDriverName[ WTS_DRIVER_NAME_LENGTH + 1 ];
    WCHAR ClientName[ WTS_CLIENTNAME_LENGTH + 1 ];
    WCHAR ClientAddress[ WTS_CLIENTADDRESS_LENGTH + 1 ];
    WCHAR ClientDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    WCHAR ClientDigProductId[ WTS_CLIENT_PRODUCT_ID_LENGTH + 1 ];
    WRDS_SOCKADDR ClientSockAddress;
    WRDS_TIME_ZONE_INFORMATION ClientTimeZone;
    WRDS_LISTENER_SETTINGS WRdsListenerSettings;
    GUID EventLogActivityId;
    [range(0, 16384)]
    ULONG ContextSize;
    [size_is(ContextSize)]
    PBYTE ContextData;
} WRDS_CONNECTION_SETTINGS_1, *PWRDS_CONNECTION_SETTINGS_1;
typedef struct _WRDS_SETTINGS_1 {
    WRDS_SETTING_STATUS WRdsDisableClipStatus;
    ULONG WRdsDisableClipValue;
    WRDS_SETTING_STATUS WRdsDisableLPTStatus;
    ULONG WRdsDisableLPTValue;
    WRDS_SETTING_STATUS WRdsDisableCcmStatus;
    ULONG WRdsDisableCcmValue;
    WRDS_SETTING_STATUS WRdsDisableCdmStatus;
    ULONG WRdsDisableCdmValue;
    WRDS_SETTING_STATUS WRdsDisableCpmStatus;
    ULONG WRdsDisableCpmValue;
    WRDS_SETTING_STATUS WRdsDisablePnpStatus;
    ULONG WRdsDisablePnpValue;
    WRDS_SETTING_STATUS WRdsEncryptionLevelStatus;
    ULONG WRdsEncryptionValue;
    WRDS_SETTING_STATUS WRdsColorDepthStatus;
    ULONG WRdsColorDepthValue;
    WRDS_SETTING_STATUS WRdsDisableAutoReconnecetStatus;
    ULONG WRdsDisableAutoReconnecetValue;
    WRDS_SETTING_STATUS WRdsDisableEncryptionStatus;
    ULONG WRdsDisableEncryptionValue;
    WRDS_SETTING_STATUS WRdsResetBrokenStatus;
    ULONG WRdsResetBrokenValue;
    WRDS_SETTING_STATUS WRdsMaxIdleTimeStatus;
    ULONG WRdsMaxIdleTimeValue;
    WRDS_SETTING_STATUS WRdsMaxDisconnectTimeStatus;
    ULONG WRdsMaxDisconnectTimeValue;
    WRDS_SETTING_STATUS WRdsMaxConnectTimeStatus;
    ULONG WRdsMaxConnectTimeValue;
    WRDS_SETTING_STATUS WRdsKeepAliveStatus;
    BOOLEAN WRdsKeepAliveStartValue;
    ULONG WRdsKeepAliveIntervalValue;
} WRDS_SETTINGS_1, *PWRDS_SETTINGS_1;
typedef [switch_type(WRDS_CONNECTION_SETTING_LEVEL)] union _WRDS_CONNECTION_SETTING {
    [case(WRDS_CONNECTION_SETTING_LEVEL_1)]
    WRDS_CONNECTION_SETTINGS_1 WRdsConnectionSettings1;
} WRDS_CONNECTION_SETTING, *PWRDS_CONNECTION_SETTING;
typedef struct _WRDS_CONNECTION_SETTINGS {
    WRDS_CONNECTION_SETTING_LEVEL WRdsConnectionSettingLevel;
    [switch_is(WRdsConnectionSettingLevel)]
    WRDS_CONNECTION_SETTING WRdsConnectionSetting;
} WRDS_CONNECTION_SETTINGS, *PWRDS_CONNECTION_SETTINGS;
typedef [switch_type(WRDS_SETTING_LEVEL)] union _WRDS_SETTING {
    [case (WRDS_SETTING_LEVEL_1)]
    WRDS_SETTINGS_1 WRdsSettings1;
} WRDS_SETTING, *PWRDS_SETTING;
typedef struct _WRDS_SETTINGS {
    WRDS_SETTING_TYPE WRdsSettingType;
    WRDS_SETTING_LEVEL WRdsSettingLevel;
    [switch_is(WRdsSettingLevel)]
    WRDS_SETTING WRdsSetting;
} WRDS_SETTINGS, *PWRDS_SETTINGS;
}
#endif
#pragma endregion
