       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4201)
DEFINE_GUID(GUID_DEVINTERFACE_GNSS,
    0x3336e5e4, 0x18a, 0x4669, 0x84, 0xc5, 0xbd, 0x5, 0xf3, 0xbd, 0x36, 0x8b);
typedef struct
{
  ULONG MajorVersion;
  ULONG MinorVersion;
} GNSS_SUPL_VERSION, *PGNSS_SUPL_VERSION;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    BOOL SupportMultipleFixSessions ;
    BOOL SupportMultipleAppSessions ;
    BOOL RequireAGnssInjection ;
    ULONG AgnssFormatSupported ;
    ULONG AgnssFormatPreferred ;
    BOOL SupportDistanceTracking ;
    BOOL SupportContinuousTracking ;
    ULONG Reserved1 ;
    BOOL Reserved2;
    BOOL Reserved3 ;
    BOOL Reserved4 ;
    BOOL Reserved5 ;
    ULONG GeofencingSupport ;
    BOOL Reserved6 ;
    BOOL Reserved7 ;
    BOOL SupportCpLocation;
    BOOL SupportUplV2;
    BOOL SupportSuplV1;
    BOOL SupportSuplV2;
    GNSS_SUPL_VERSION SupportedSuplVersion;
    ULONG MaxGeofencesSupported;
    BOOL SupportMultipleSuplRootCert;
    ULONG GnssBreadCrumbPayloadVersion;
    ULONG MaxGnssBreadCrumbFixes;
    BYTE Unused[496] ;
} GNSS_DEVICE_CAPABILITY, *PGNSS_DEVICE_CAPABILITY ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    BOOL SupportAgnssInjection ;
    ULONG AgnssFormatSupported ;
    BYTE Unused[516] ;
} GNSS_PLATFORM_CAPABILITY, *PGNSS_PLATFORM_CAPABILITY ;
typedef enum
{
    GNSS_SetLocationServiceEnabled = 0x01,
    GNSS_SetLocationNIRequestAllowed = 0x02,
    GNSS_ForceSatelliteSystem = 0x03,
    GNSS_ForceOperationMode = 0x04,
    GNSS_ResetEngine = 0x09,
    GNSS_ClearAgnssData = 0x0A,
    GNSS_SetSuplVersion = 0x0C,
    GNSS_SetNMEALogging = 0x0D,
    GNSS_SetUplServerAccessInterval = 0x0E,
    GNSS_SetNiTimeoutInterval = 0x0F,
    GNSS_ResetGeofencesTracking = 0x10,
    GNSS_CustomCommand = 0x0100,
} GNSS_DRIVERCOMMAND_TYPE ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    GNSS_DRIVERCOMMAND_TYPE CommandType ;
    ULONG Reserved ;
    ULONG CommandDataSize ;
    BYTE Unused[512] ;
    BYTE CommandData[ANYSIZE_ARRAY] ;
} GNSS_DRIVERCOMMAND_PARAM, *PGNSS_DRIVERCOMMAND_PARAM ;
typedef enum
{
    GNSS_FixSession_SingleShot = 0x01,
    GNSS_FixSession_DistanceTracking = 0x02,
    GNSS_FixSession_ContinuousTracking = 0x03,
    GNSS_FixSession_LKG = 0x04,
} GNSS_FIXSESSIONTYPE ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG ResponseTime ;
} GNSS_SINGLESHOT_PARAM, *PGNSS_SINGLESHOT_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG MovementThreshold ;
} GNSS_DISTANCETRACKING_PARAM, *PGNSS_DISTANCETRACKING_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG PreferredInterval ;
} GNSS_CONTINUOUSTRACKING_PARAM, *PGNSS_CONTINUOUSTRACKING_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
} GNSS_LKGFIX_PARAM, *PGNSS_LKGFIX_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG FixSessionID ;
    GNSS_FIXSESSIONTYPE SessionType ;
    ULONG HorizontalAccuracy ;
    ULONG HorizontalConfidence ;
    ULONG Reserved[9] ;
    ULONG FixLevelOfDetails ;
    union
    {
        GNSS_SINGLESHOT_PARAM SingleShotParam ;
        GNSS_DISTANCETRACKING_PARAM DistanceParam ;
        GNSS_CONTINUOUSTRACKING_PARAM ContinuousParam ;
        GNSS_LKGFIX_PARAM LkgFixParam ;
        BYTE UnusedParam[268] ;
    } ;
    BYTE Unused[256] ;
} GNSS_FIXSESSION_PARAM, *PGNSS_FIXSESSION_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG FixSessionID ;
    BYTE Unused[512] ;
} GNSS_STOPFIXSESSION_PARAM, *PGNSS_STOPFIXSESSION_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    double Latitude ;
    double Longitude ;
    double Altitude ;
    double Speed ;
    double Heading ;
} GNSS_FIXDATA_BASIC, *PGNSS_FIXDATA_BASIC;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG HorizontalAccuracy ;
    ULONG HorizontalErrorMajorAxis ;
    ULONG HorizontalErrorMinorAxis ;
    ULONG HorizontalErrorAngle ;
    ULONG HeadingAccuracy ;
    ULONG AltitudeAccuracy ;
    ULONG SpeedAccuracy ;
    ULONG HorizontalConfidence ;
    ULONG HeadingConfidence ;
    ULONG AltitudeConfidence ;
    ULONG SpeedConfidence ;
    float PositionDilutionOfPrecision;
    float HorizontalDilutionOfPrecision;
    float VerticalDilutionOfPrecision;
} GNSS_FIXDATA_ACCURACY, *PGNSS_FIXDATA_ACCURACY;
typedef struct
{
    ULONG SatelliteId ;
    BOOL UsedInPositiong ;
    double Elevation ;
    double Azimuth ;
    double SignalToNoiseRatio ;
} GNSS_SATELLITEINFO, *PGNSS_SATELLITEINFO ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG SatelliteCount ;
    GNSS_SATELLITEINFO SatelliteArray[GNSS_MAXSATELLITE] ;
} GNSS_FIXDATA_SATELLITE, *PGNSS_FIXDATA_SATELLITE;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG FixSessionID ;
    FILETIME FixTimeStamp ;
    BOOL IsFinalFix ;
    NTSTATUS FixStatus ;
    ULONG FixLevelOfDetails ;
    GNSS_FIXDATA_BASIC BasicData ;
    GNSS_FIXDATA_ACCURACY AccuracyData ;
    GNSS_FIXDATA_SATELLITE SatelliteData ;
} GNSS_FIXDATA, *PGNSS_FIXDATA;
typedef struct
{
    ULONG Size;
    ULONG Version;
    ULONG MaximumHorizontalUncertainty;
    ULONG MinDistanceBetweenFixes;
    ULONG MaximumErrorTimeoutMs;
    BYTE Unused[512] ;
} GNSS_BREADCRUMBING_PARAM, *PGNSS_BREADCRUMBING_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    BYTE Unused[512];
} GNSS_BREADCRUMBING_ALERT_DATA, *PGNSS_BREADCRUMBING_ALERT_DATA;
typedef struct
{
    FILETIME FixTimeStamp;
    double Latitude;
    double Longitude;
    ULONG HorizontalAccuracy;
    unsigned short Speed;
    unsigned short SpeedAccuracy;
    short Altitude;
    unsigned short AltitudeAccuracy;
    short Heading;
    unsigned char HeadingAccuracy;
    unsigned char FixSuccess;
} GNSS_BREADCRUMB_V1, *PGNSS_BREADCRUMB_V1;
typedef struct
{
    ULONG Size;
    ULONG Version;
    ULONG NumCrumbs;
    union
    {
        GNSS_BREADCRUMB_V1 v1[50];
    };
} GNSS_BREADCRUMB_LIST, *PGNSS_BREADCRUMB_LIST;
typedef enum
{
    GNSS_GeoRegion_Circle = 0x01,
} GNSS_GEOREGIONTYPE ;
typedef struct
{
    double Latitude;
    double Longitude;
    double RadiusInMeters;
} GNSS_GEOREGION_CIRCLE, *PGNSS_GEOREGION_CIRCLE;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    GNSS_GEOREGIONTYPE GeoRegionType ;
    union
    {
        GNSS_GEOREGION_CIRCLE Circle ;
        BYTE Unused[512] ;
    } ;
} GNSS_GEOREGION, *PGNSS_GEOREGION;
typedef enum
{
    GNSS_GeofenceState_Unknown = 0x00,
    GNSS_GeofenceState_Entered = 0x01,
    GNSS_GeofenceState_Exited = 0x02,
} GNSS_GEOFENCE_STATE ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG AlertTypes ;
    GNSS_GEOFENCE_STATE InitialState ;
    GNSS_GEOREGION Boundary ;
    BYTE Unused[512] ;
} GNSS_GEOFENCE_CREATE_PARAM, *PGNSS_GEOFENCE_CREATE_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    NTSTATUS CreationStatus ;
    ULONG GeofenceID ;
    BYTE Unused[512] ;
} GNSS_GEOFENCE_CREATE_RESPONSE, *PGNSS_GEOFENCE_CREATE_RESPONSE;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG GeofenceID ;
    BYTE Unused[512] ;
} GNSS_GEOFENCE_DELETE_PARAM, *PGNSS_GEOFENCE_DELETE_PARAM;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG GeofenceID ;
    GNSS_GEOFENCE_STATE GeofenceState ;
    GNSS_FIXDATA_BASIC FixBasicData ;
    GNSS_FIXDATA_ACCURACY FixAccuracyData ;
    BYTE Unused[512] ;
} GNSS_GEOFENCE_ALERT_DATA, *PGNSS_GEOFENCE_ALERT_DATA;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    NTSTATUS Status ;
    FILETIME StatusTimeStamp ;
    BYTE Unused[512] ;
} GNSS_GEOFENCES_TRACKINGSTATUS_DATA, *PGNSS_GEOFENCES_TRACKINGSTATUS_DATA;
typedef enum
{
    GNSS_Event_FixAvailable = 0x0001,
    GNSS_Event_RequireAgnss = 0x0002,
    GNSS_Event_Error = 0x0003,
    GNSS_Event_NiRequest = 0x000C,
    GNSS_Event_NmeaData = 0x000D,
    GNSS_Event_GeofenceAlertData = 0x000E,
    GNSS_Event_GeofencesTrackingStatus = 0x000F,
    GNSS_Event_DriverRequest = 0x0010,
    GNSS_Event_BreadcrumbAlertEvent = 0x0011,
    GNSS_Event_Custom = 0x8000
} GNSS_EVENT_TYPE ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG ErrorCode ;
    BOOL IsRecoverable ;
    WCHAR ErrorDescription[256] ;
    BYTE Unused[512] ;
} GNSS_ERRORINFO, *PGNSS_ERRORINFO ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    CHAR NmeaSentences[256] ;
} GNSS_NMEA_DATA, *PGNSS_NMEA_DATA ;
typedef enum
{
    GNSS_AGNSS_TimeInjection = 0x01,
    GNSS_AGNSS_PositionInjection = 0x02,
    GNSS_AGNSS_BlobInjection = 0x03,
} GNSS_AGNSS_REQUEST_TYPE ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    GNSS_AGNSS_REQUEST_TYPE RequestType ;
    ULONG BlobFormat ;
} GNSS_AGNSS_REQUEST_PARAM, *PGNSS_AGNSS_REQUEST_PARAM ;
typedef enum
{
    GNSS_NI_SUPL = 0x01,
    GNSS_NI_CP = 0x02,
    GNSS_NI_V2UPL = 0x03,
} GNSS_NI_PLANE_TYPE ;
typedef enum {
  GNSS_NI_Request_SingleShot = 0x01,
  GNSS_NI_Request_AreaTrigger = 0x02,
} GNSS_NI_REQUEST_TYPE;
typedef enum {
  GNSS_NI_NoNotifyNoVerify = 0x01,
  GNSS_NI_NotifyOnly = 0x02,
  GNSS_NI_NotifyVerifyDefaultAllow = 0x03,
  GNSS_NI_NotifyVerifyDefaultNotAllow = 0x04,
  GNSS_NI_PrivacyOverride = 0x05
} GNSS_NI_NOTIFICATION_TYPE;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    WCHAR RequestorId[MAX_PATH];
    WCHAR ClientName[MAX_PATH];
    CHAR SuplNiUrl[MAX_SERVER_URL_NAME];
} GNSS_SUPL_NI_INFO, *PGNSS_SUPL_NI_INFO ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    WCHAR RequestorId[MAX_PATH];
    WCHAR NotificationText[MAX_PATH];
} GNSS_CP_NI_INFO, *PGNSS_CP_NI_INFO ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    WCHAR RequestorId[MAX_PATH];
} GNSS_V2UPL_NI_INFO, *PGNSS_V2UPL_NI_INFO ;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG RequestId;
    GNSS_NI_REQUEST_TYPE RequestType;
    GNSS_NI_NOTIFICATION_TYPE NotificationType ;
    GNSS_NI_PLANE_TYPE RequestPlaneType;
    union
    {
       GNSS_SUPL_NI_INFO SuplNiInfo;
       GNSS_CP_NI_INFO CpNiInfo;
       GNSS_V2UPL_NI_INFO V2UplNiInfo;
    };
    ULONG ResponseTimeInSec;
    BOOL EmergencyLocation;
} GNSS_NI_REQUEST_PARAM, *PGNSS_NI_REQUEST_PARAM ;
typedef enum
{
    SUPL_CONFIG_DATA = 0x01,
} GNSS_DRIVER_REQUEST;
typedef struct
{
    ULONG Size;
    ULONG Version;
    GNSS_DRIVER_REQUEST Request;
    ULONG RequestFlag;
}GNSS_DRIVER_REQUEST_DATA;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    GNSS_EVENT_TYPE EventType ;
    ULONG EventDataSize ;
    BYTE Unused[512] ;
    union
    {
        GNSS_FIXDATA FixData ;
        GNSS_AGNSS_REQUEST_PARAM AgnssRequest ;
        GNSS_NI_REQUEST_PARAM NiRequest;
        GNSS_ERRORINFO ErrorInformation ;
        GNSS_NMEA_DATA NmeaData;
        GNSS_GEOFENCE_ALERT_DATA GeofenceAlertData ;
        GNSS_BREADCRUMBING_ALERT_DATA BreadcrumbAlertData;
        GNSS_GEOFENCES_TRACKINGSTATUS_DATA GeofencesTrackingStatus ;
        GNSS_DRIVER_REQUEST_DATA DriverRequestData;
        BYTE CustomData[ANYSIZE_ARRAY] ;
    } ;
} GNSS_EVENT, *PGNSS_EVENT;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    FILETIME UtcTime ;
    ULONG TimeUncertainty ;
} GNSS_AGNSS_INJECTTIME, *PGNSS_AGNSS_INJECTTIME;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG Age ;
    GNSS_FIXDATA_BASIC BasicData ;
    GNSS_FIXDATA_ACCURACY AccuracyData ;
} GNSS_AGNSS_INJECTPOSITION, *PGNSS_AGNSS_INJECTPOSITION;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG BlobOui;
    ULONG BlobVersion ;
    ULONG AgnssFormat ;
    ULONG BlobSize ;
    BYTE BlobData[ANYSIZE_ARRAY] ;
} GNSS_AGNSS_INJECTBLOB, *PGNSS_AGNSS_INJECTBLOB;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    GNSS_AGNSS_REQUEST_TYPE InjectionType ;
    NTSTATUS InjectionStatus ;
    ULONG InjectionDataSize ;
    BYTE Unused[512] ;
    union
    {
        GNSS_AGNSS_INJECTTIME Time ;
        GNSS_AGNSS_INJECTPOSITION Position ;
        GNSS_AGNSS_INJECTBLOB BlobData ;
    } ;
} GNSS_AGNSS_INJECT, *PGNSS_AGNSS_INJECT;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    CHAR SuplHslp[MAX_SERVER_URL_NAME] ;
    CHAR SuplHslpFromImsi[MAX_SERVER_URL_NAME] ;
    ULONG Reserved;
    BYTE Unused[512] ;
} GNSS_SUPL_HSLP_CONFIG, *PGNSS_SUPL_HSLP_CONFIG;
typedef enum
{
    GNSS_Supl_Cert_Inject = 0x01,
    GNSS_Supl_Cert_Delete = 0x02,
    GNSS_Supl_Cert_Purge = 0x03,
} GNSS_SUPL_CERT_ACTION;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    GNSS_SUPL_CERT_ACTION CertAction;
    CHAR SuplCertName[MAX_PATH] ;
    ULONG CertSize;
    BYTE Unused[512] ;
    BYTE CertData[ANYSIZE_ARRAY] ;
} GNSS_SUPL_CERT_CONFIG, *PGNSS_SUPL_CERT_CONFIG;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    CHAR MPC[MAX_SERVER_URL_NAME] ;
    CHAR PDE[MAX_SERVER_URL_NAME] ;
    BYTE ApplicationTypeIndicator_MR ;
    BYTE Unused[512] ;
} GNSS_V2UPL_CONFIG, *PGNSS_V2UPL_CONFIG;
typedef enum
{
    GNSS_Ni_UserResponseAccept = 0x01,
    GNSS_Ni_UserResponseDeny = 0x02,
    GNSS_Ni_UserResponseTimeout = 0x03,
} GNSS_NI_USER_RESPONSE;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG RequestId;
    GNSS_NI_USER_RESPONSE UserResponse;
} GNSS_NI_RESPONSE, *PGNSS_NI_RESPONSE;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    NTSTATUS TestResultStatus ;
    double SignalToNoiseRatio ;
    double Frequency ;
    BYTE Unused[512] ;
} GNSS_CWTESTDATA, *PGNSS_CWTESTDATA;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    ULONG TestType;
    BYTE Unused[512] ;
    ULONG InBufLen ;
    BYTE InBuffer[ANYSIZE_ARRAY];
} GNSS_SELFTESTCONFIG, *PGNSS_SELFTESTCONFIG;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    NTSTATUS TestResultStatus ;
    ULONG Result ;
    ULONG PinFailedBitMask ;
    BYTE Unused[512] ;
    ULONG OutBufLen ;
    BYTE OutBuffer[ANYSIZE_ARRAY] ;
} GNSS_SELFTESTRESULT, *PGNSS_SELFTESTRESULT;
typedef struct
{
    ULONG Size ;
    ULONG Version ;
    WCHAR ManufacturerID[25] ;
    WCHAR HardwareID[25] ;
    WCHAR FirmwareVersion[20] ;
    BYTE Unused[512] ;
} GNSS_CHIPSETINFO, *PGNSS_CHIPSETINFO;
#pragma warning(pop)
#endif
