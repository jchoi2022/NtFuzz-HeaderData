#include <pshpack8.h>
typedef enum _PosEventType
{
    InvalidEvent = 0,
    _MinEventType = 1,
    ReleaseDeviceRequested = 1,
    StatusUpdated = 2,
    BarcodeScannerTriggerPressed = 3,
    BarcodeScannerTriggerReleased = 4,
    BarcodeScannerDataReceived = 5,
    BarcodeScannerErrorOccurred = 6,
    BarcodeScannerImagePreviewReceived = 7,
    MagneticStripeReaderDataReceived = 8,
    MagneticStripeReaderErrorOccurred = 9,
    _Max = 14,
} PosEventType;
typedef struct _PosEventDataHeader
{
    PosEventType EventType;
    UINT32 DataLength;
} PosEventDataHeader;
typedef struct _PosStatusUpdatedEventData
{
    PosEventDataHeader Header;
    UINT32 Status;
    UINT32 ExtendedStatus;
} PosStatusUpdatedEventData;
typedef struct _PosStringType
{
    UINT32 DataLengthInBytes;
} PosStringType;
typedef struct _PosProfileType
{
    UINT32 BufferSize;
    UINT32 ProfileCount;
} PosProfileType;
typedef struct _PosStatisticsHeader
{
    UINT32 EntryCount;
    PosDeviceInformation DeviceInformation;
    UINT32 DataLength;
}PosStatisticsHeader;
typedef struct _PosValueStatisticsEntry
{
    _Field_z_ wchar_t EntryName[STATISTICS_STRING_SIZE];
    volatile LONG Value;
}PosValueStatisticsEntry;
typedef struct _PosBarcodeScannerDataReceivedEventData
{
    PosEventDataHeader Header;
    UINT32 DataType;
    UINT32 ScanDataLength;
    UINT32 ScanDataLabelLength;
} PosBarcodeScannerDataReceivedEventData;
typedef struct _PosBarcodeScannerErrorOccurredEventData
{
    PosEventDataHeader Header;
    LONG IsRetriable;
    DriverUnifiedPosErrorSeverity Severity;
    UINT32 VendorErrorCode;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;
    UINT32 MessageLength;
    PosBarcodeScannerDataReceivedEventData PartialData;
} PosBarcodeScannerErrorOccurredEventData;
typedef struct _PosBarcodeScanDataTypeData
{
    UINT32 dataLengthInBytes;
    UINT32 scanDataTypes_0;
} PosBarcodeScanDataTypeData;
typedef struct _PosEventDataHeader PosBarcodeScannerImagePreviewEventData;
typedef enum _PosDeviceControlType
{
    _MinDeviceControlType = 0,
    Invalid = 0,
    GetProperty = 1,
    SetProperty = 2,
    ClaimDevice = 3,
    ReleaseDevice = 4,
    RetainDevice = 5,
    RetrieveStatistics = 6,
    ResetStatistics = 7,
    UpdateStatistics = 8,
    CheckHealth = 9,
    GetDeviceBasics = 10,
    BarcodeScannerInjectEvent = 11,
    MsrRetrieveDeviceAuthentication = 12,
    MsrAuthenticateDevice = 13,
    MsrDeAuthenticateDevice = 14,
    MsrUpdateKey = 15,
    StartBarcodeScannerSoftwareTrigger = 16,
    StopBarcodeScannerSoftwareTrigger = 17,
    BarcodeScannerGetSymbologyAttributes = 80,
    BarcodeScannerSetSymbologyAttributes = 81,
    _MaxDeviceControlType = 97,
} PosDeviceControlType;
typedef struct _PosDeviceBasicsType
{
    UINT32 Version;
    PosDeviceType DeviceType;
    UINT32 RecommendedBufferSize;
} PosDeviceBasicsType;
typedef enum _PosPropertyId
{
    IsEnabled = 1,
    IsDisabledOnDataReceived = 4,
    PowerState = 352,
    BarcodeScannerIsDecodeDataEnabled = 5,
    BarcodeScannerCapabilities = 6,
    BarcodeScannerSupportedSymbologies = 7,
    BarcodeScannerActiveSymbologies = 8,
    BarcodeScannerSupportedProfiles = 9,
    BarcodeScannerActiveProfile = 10,
    MagneticStripeReaderIsDecodeDataEnabled = 11,
    MagneticStripeReaderCapabilities = 12,
    MagneticStripeReaderSupportedCardTypes = 13,
    MagneticStripeReaderDeviceAuthenticationProtocol = 14,
    MagneticStripeReaderErrorReportingType = 15,
    MagneticStripeReaderTracksToRead = 16,
    MagneticStripeReaderIsTransmitSentinelsEnabled = 17,
    MagneticStripeReaderIsDeviceAuthenticated = 18,
    MagneticStripeReaderDataEncryptionAlgorithm = 19,
    BarcodeScannerVideoDeviceId = 20,
} PosPropertyId;
typedef struct _PosBarcodeScannerCapabilitiesType
{
    DriverUnifiedPosPowerReportingType PowerReportingType;
    LONG IsStatisticsReportingSupported;
    LONG IsStatisticsUpdatingSupported;
    LONG IsImagePreviewSupported;
} PosBarcodeScannerCapabilitiesType;
typedef struct _PosBarcodeScannerCapabilitiesType2
{
    PosBarcodeScannerCapabilitiesType PosBarcodeScannerCapabilities;
    LONG IsSoftwareTriggerSupported;
} PosBarcodeScannerCapabilitiesType2;
typedef struct _PosMagneticStripeReaderCapabilitiesType
{
    DriverUnifiedPosPowerReportingType PowerReportingType;
    LONG IsStatisticsReportingSupported;
    LONG IsStatisticsUpdatingSupported;
    UINT32 CardAuthenticationLength;
    UINT32 SupportedEncryptionAlgorithms;
    DriverMagneticStripeReaderAuthenticationLevel AuthenticationLevel;
    LONG IsIsoSupported;
    LONG IsJisOneSupported;
    LONG IsJisTwoSupported;
    LONG IsTrackDataMaskingSupported;
    LONG IsTransmitSentinelsSupported;
} PosMagneticStripeReaderCapabilitiesType;
#pragma endregion
#pragma region ioctldefinitions
    CTL_CODE(FILE_DEVICE_POINT_OF_SERVICE, POINT_OF_SERVICE_COMMON_IOCTL_BASE + ((UINT32)enumname), METHOD_BUFFERED, FILE_READ_ACCESS)
    CTL_CODE(FILE_DEVICE_POINT_OF_SERVICE, POINT_OF_SERVICE_COMMON_IOCTL_BASE + ((UINT32)enumname), METHOD_BUFFERED, FILE_WRITE_ACCESS)
    (((x) >= MIN_POINT_OF_SERVICE_IOCTL_READ && (x) <= MAX_POINT_OF_SERVICE_IOCTL_READ) || ((x) >= MIN_POINT_OF_SERVICE_IOCTL_WRITE && (x) <= MAX_POINT_OF_SERVICE_IOCTL_WRITE))
    READABLE_POS_IOCTL(GetProperty)
    POS_IOCTL(SetProperty)
    POS_IOCTL(ClaimDevice)
    POS_IOCTL(ReleaseDevice)
    POS_IOCTL(RetainDevice)
    READABLE_POS_IOCTL(RetrieveStatistics)
    POS_IOCTL(ResetStatistics)
    POS_IOCTL(UpdateStatistics)
    POS_IOCTL(CheckHealth)
    READABLE_POS_IOCTL(GetDeviceBasics)
    POS_IOCTL(BarcodeScannerInjectEvent)
    POS_IOCTL(MsrRetrieveDeviceAuthentication)
    POS_IOCTL(MsrAuthenticateDevice)
    POS_IOCTL(MsrDeAuthenticateDevice)
    POS_IOCTL(MsrUpdateKey)
    POS_IOCTL(StartBarcodeScannerSoftwareTrigger)
    POS_IOCTL(StopBarcodeScannerSoftwareTrigger)
    READABLE_POS_IOCTL(BarcodeScannerGetSymbologyAttributes)
    POS_IOCTL(BarcodeScannerSetSymbologyAttributes)
DEFINE_GUID(GUID_DEVINTERFACE_POS_SCANNER,
    0xC243FFBD, 0x3AFC, 0x45E9, 0xB3, 0xD3, 0x2B, 0xA1, 0x8B, 0xC7, 0xEB, 0xC5);
DEFINE_GUID(GUID_DEVINTERFACE_POS_MSR,
    0x2A9FE532, 0x0CDC, 0x44F9, 0x98, 0x27, 0x76, 0x19, 0x2F, 0x2C, 0xA2, 0xFB);
DEFINE_GUID(GUID_DEVINTERFACE_POS_PRINTER,
    0xC7BC9B22, 0x21F0, 0x4F0D, 0x9B, 0xB6, 0x66, 0xC2, 0x29, 0xB8, 0xCD, 0x33);
DEFINE_GUID(GUID_DEVINTERFACE_POS_CASHDRAWER,
    0x772e18f2, 0x8925, 0x4229, 0xa5, 0xac, 0x64, 0x53, 0xcb, 0x48, 0x2f, 0xda);
DEFINE_GUID(GUID_DEVINTERFACE_POS_LINEDISPLAY,
    0x4fc9541c, 0xfe6, 0x4480, 0xa4, 0xf6, 0x94, 0x95, 0xa0, 0xd1, 0x7c, 0xd2);
#pragma endregion
typedef enum _MsrCardType
{
    MsrCardType_Unknown,
    MsrCardType_Bank,
    MsrCardType_Aamva,
    MsrCardType_ExtendedBase,
} MsrCardType;
typedef enum _MsrDataEncryption
{
    MsrDataEncryption_None,
    MsrDataEncryption_3DEA_DUKPT,
    MsrDataEncryption_AES,
    MsrDataEncryption_ExtendedBase
} MsrDataEncryption;
typedef enum _MsrAuthenticationProtocol
{
    MsrAuthenticationProtocolType_None = 0,
    MsrAuthenticationProtocolType_ChallengeResponse,
} MsrAuthenticationProtocolType;
typedef enum _MsrTrackIds
{
    MsrTrackIds_None = 0x0,
    MsrTrackIds_Track1 = 0x1,
    MsrTrackIds_Track2 = 0x2,
    MsrTrackIds_Track3 = 0x4,
    MsrTrackIds_Track4 = 0x8
} MsrTrackIds;
typedef enum _MsrErrorReportingType
{
    MsrErrorReportingType_CardLevel = 0,
    MsrErrorReportingType_TrackLevel
} MsrErrorReportingType;
typedef enum _MsrTrackErrorType
{
    MsrTrackErrorType_Unknown = -1,
    MsrTrackErrorType_None = 0,
    MsrTrackErrorType_StartSentinelError = 1,
    MsrTrackErrorType_EndSentinelError = 2,
    MsrTrackErrorType_ParityError = 3,
    MsrTrackErrorType_LrcError = 4
} MsrTrackErrorType;
typedef enum _MsrStatusUpdateType
{
    MsrStatusUpdateType_Online = 0,
    MsrStatusUpdateType_Off,
    MsrStatusUpdateType_Offline,
    MsrStatusUpdateType_OffOrOffline,
    MsrStatusUpdateType_Unauthenticated,
    MsrStatusUpdateType_Authenticated,
    MsrStatusUpdateType_Extended
} MsrStatusUpdateType;
typedef enum _MsrStatisticsEntryType
{
    MsrStatisticsEntryType_Invalid = -1,
    MsrStatisticsEntryType_HoursPoweredCount,
    MsrStatisticsEntryType_CommunicationErrorCount,
    MsrStatisticsEntryType_GoodReadCount,
    MsrStatisticsEntryType_FailedReadCount,
    MsrStatisticsEntryType_UnreadableCardCount,
    MsrStatisticsEntryType_GoodWriteCount,
    MsrStatisticsEntryType_FailedWriteCount,
    MsrStatisticsEntryType_MissingStartSentinelTrack1Count,
    MsrStatisticsEntryType_ParityLRCErrorTrack1Count,
    MsrStatisticsEntryType_MissingStartSentinelTrack2Count,
    MsrStatisticsEntryType_ParityLRCErrorTrack2Count,
    MsrStatisticsEntryType_MissingStartSentinelTrack3Count,
    MsrStatisticsEntryType_ParityLRCErrorTrack3Count,
    MsrStatisticsEntryType_MissingStartSentinelTrack4Count,
    MsrStatisticsEntryType_ParityLRCErrorTrack4Count,
    MsrStatisticsEntryType_GoodCardAuthenticationDataCount,
    MsrStatisticsEntryType_FailedCardAuthenticationDataCount,
    MsrStatisticsEntryType_ChallengeRequestCount,
    MsrStatisticsEntryType_GoodDeviceAuthenticationCount,
    MsrStatisticsEntryType_FailedDeviceAuthenticationCount,
    MsrStatisticsEntryType_Count
} MstStatisticsEntryType;
#pragma pack(push,1)
typedef struct _MSR_DATA_RECEIVED {
    MsrCardType CardType;
    unsigned char Track1EncryptedDataLength;
    unsigned char Track2EncryptedDataLength;
    unsigned char Track3EncryptedDataLength;
    unsigned char Track4EncryptedDataLength;
    unsigned char Track1EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track2EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track3EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track4EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track1MaskedDataLength;
    unsigned char Track2MaskedDataLength;
    unsigned char Track3MaskedDataLength;
    unsigned char Track4MaskedDataLength;
    unsigned char Track1MaskedData[MSR_TRACK_SIZE];
    unsigned char Track2MaskedData[MSR_TRACK_SIZE];
    unsigned char Track3MaskedData[MSR_TRACK_SIZE];
    unsigned char Track4MaskedData[MSR_TRACK_SIZE];
    unsigned char Track1DiscretionaryDataLength;
    unsigned char Track2DiscretionaryDataLength;
    unsigned char Track1DiscretionaryData[MSR_TRACK_SIZE];
    unsigned char Track2DiscretionaryData[MSR_TRACK_SIZE];
    unsigned char CardAuthenicationDataLength;
    unsigned char CardAuthenticationDataAbsoluteLength;
    unsigned char CardAuthenicationData[MSR_CARD_AUTHENTICATION_DATA_SIZE];
    unsigned char AdditionalSecurityInformationLength;
    unsigned char AdditionalSecurityInformation[MSR_ADDITIONAL_SECURITY_INFORMATION_SIZE];
} MSR_DATA_RECEIVED, *PMSR_DATA_RECEIVED;
typedef struct _MSR_SUPPORTED_CARD_TYPES {
    unsigned char Count;
    unsigned int CardTypes[MSR_CARD_TYPE_MAX_COUNT];
} MSR_SUPPORTED_CARD_TYPES, *PMSR_SUPPORTED_CARD_TYPES;
typedef struct _MSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA {
    unsigned char KeySerialNumber[MSR_KEY_SERIAL_NUMBER_SIZE];
    unsigned char Challenge1[MSR_CHALLENGE_SIZE];
    unsigned char Challenge2[MSR_CHALLENGE_SIZE];
} MSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA, *PMSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA;
typedef struct _MSR_AUTHENTICATE_DEVICE {
    unsigned char Size;
    unsigned char Challenge1[MSR_CHALLENGE_SIZE];
    unsigned char SessionId[MSR_SESSION_ID_SIZE];
} MSR_AUTHENTICATE_DEVICE, *PMSR_AUTHENTICATE_DEVICE;
typedef struct _MSR_DEAUTHENTICATE_DEVICE {
    unsigned char Challenge2[MSR_CHALLENGE_SIZE];
} MSR_DEAUTHENTICATE_DEVICE, *PMSR_DEAUTHENTICATE_DEVICE;
typedef struct _MSR_UPDATE_KEY{
    unsigned char KeyLength;
    unsigned char KeyNameLength;
    unsigned char Key[MSR_KEY_SIZE];
    unsigned char KeyName[MSR_KEY_NAME_SIZE];
} MSR_UPDATE_KEY, *PMSR_UPDATE_KEY;
typedef struct _MSR_ERROR_EVENT
{
    PosEventDataHeader Header;
    MsrTrackErrorType Track1Status;
    MsrTrackErrorType Track2Status;
    MsrTrackErrorType Track3Status;
    MsrTrackErrorType Track4Status;
    DriverUnifiedPosErrorSeverity Severity;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;
    MSR_DATA_RECEIVED CardData;
    wchar_t Message[MSR_ERROR_MAX_MESSAGE_LENGTH];
} MSR_ERROR_EVENT, *PMSR_ERROR_EVENT;
#pragma pack(pop)
#include <poppack.h>
