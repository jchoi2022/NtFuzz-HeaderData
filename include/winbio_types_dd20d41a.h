#pragma warning( push )
#pragma warning( disable : 4324 )
extern "C"{
typedef ULONG WINBIO_UNIT_ID, *PWINBIO_UNIT_ID;
typedef ULONG WINBIO_SESSION_HANDLE, *PWINBIO_SESSION_HANDLE;
typedef WINBIO_SESSION_HANDLE WINBIO_FRAMEWORK_HANDLE, *PWINBIO_FRAMEWORK_HANDLE;
typedef GUID WINBIO_UUID, *PWINBIO_UUID;
typedef WCHAR WINBIO_STRING[WINBIO_MAX_STRING_LEN];
typedef WINBIO_STRING *PWINBIO_STRING;
typedef struct _WINBIO_VERSION {
    DWORD MajorVersion;
    DWORD MinorVersion;
} WINBIO_VERSION, *PWINBIO_VERSION;
typedef ULONG WINBIO_IDENTITY_TYPE, *PWINBIO_IDENTITY_TYPE;
const WINBIO_IDENTITY_TYPE WINBIO_ID_TYPE_NULL = (WINBIO_IDENTITY_TYPE)0;
const WINBIO_IDENTITY_TYPE WINBIO_ID_TYPE_WILDCARD = (WINBIO_IDENTITY_TYPE)1;
const WINBIO_IDENTITY_TYPE WINBIO_ID_TYPE_GUID = (WINBIO_IDENTITY_TYPE)2;
const WINBIO_IDENTITY_TYPE WINBIO_ID_TYPE_SID = (WINBIO_IDENTITY_TYPE)3;
const WINBIO_IDENTITY_TYPE WINBIO_ID_TYPE_SECURE_ID = (WINBIO_IDENTITY_TYPE)4;
const ULONG SECURITY_MAX_SID_SIZE = (ULONG)68;
const ULONG WINBIO_IDENTITY_SECURE_ID_SIZE = (ULONG)32;
typedef union switch(WINBIO_IDENTITY_TYPE Type) _WINBIO_IDENTITY {
    case WINBIO_ID_TYPE_NULL: ULONG Null;
    case WINBIO_ID_TYPE_WILDCARD: ULONG Wildcard;
    case WINBIO_ID_TYPE_GUID: GUID TemplateGuid;
    case WINBIO_ID_TYPE_SID: struct {
                                        ULONG Size;
                                        UCHAR Data[SECURITY_MAX_SID_SIZE];
                                    } AccountSid;
    case WINBIO_ID_TYPE_SECURE_ID: UCHAR SecureId[WINBIO_IDENTITY_SECURE_ID_SIZE];
} WINBIO_IDENTITY;
typedef WINBIO_IDENTITY *PWINBIO_IDENTITY;
typedef ULONG32 WINBIO_BIOMETRIC_TYPE, *PWINBIO_BIOMETRIC_TYPE;
const WINBIO_BIOMETRIC_TYPE WINBIO_STANDARD_TYPE_MASK = (WINBIO_BIOMETRIC_TYPE)0x00FFFFFF;
const WINBIO_BIOMETRIC_TYPE WINBIO_NO_TYPE_AVAILABLE = (WINBIO_BIOMETRIC_TYPE)0x00000000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_MULTIPLE = (WINBIO_BIOMETRIC_TYPE)0x00000001;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_FACIAL_FEATURES = (WINBIO_BIOMETRIC_TYPE)0x00000002;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_VOICE = (WINBIO_BIOMETRIC_TYPE)0x00000004;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_FINGERPRINT = (WINBIO_BIOMETRIC_TYPE)0x00000008;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_IRIS = (WINBIO_BIOMETRIC_TYPE)0x00000010;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_RETINA = (WINBIO_BIOMETRIC_TYPE)0x00000020;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_HAND_GEOMETRY = (WINBIO_BIOMETRIC_TYPE)0x00000040;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_SIGNATURE_DYNAMICS = (WINBIO_BIOMETRIC_TYPE)0x00000080;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_KEYSTROKE_DYNAMICS = (WINBIO_BIOMETRIC_TYPE)0x00000100;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_LIP_MOVEMENT = (WINBIO_BIOMETRIC_TYPE)0x00000200;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_THERMAL_FACE_IMAGE = (WINBIO_BIOMETRIC_TYPE)0x00000400;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_THERMAL_HAND_IMAGE = (WINBIO_BIOMETRIC_TYPE)0x00000800;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_GAIT = (WINBIO_BIOMETRIC_TYPE)0x00001000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_SCENT = (WINBIO_BIOMETRIC_TYPE)0x00002000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_DNA = (WINBIO_BIOMETRIC_TYPE)0x00004000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_EAR_SHAPE = (WINBIO_BIOMETRIC_TYPE)0x00008000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_FINGER_GEOMETRY = (WINBIO_BIOMETRIC_TYPE)0x00010000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_PALM_PRINT = (WINBIO_BIOMETRIC_TYPE)0x00020000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_VEIN_PATTERN = (WINBIO_BIOMETRIC_TYPE)0x00040000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_FOOT_PRINT = (WINBIO_BIOMETRIC_TYPE)0x00080000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_OTHER = (WINBIO_BIOMETRIC_TYPE)0x40000000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_PASSWORD = (WINBIO_BIOMETRIC_TYPE)0x80000000;
const WINBIO_BIOMETRIC_TYPE WINBIO_TYPE_ANY = (WINBIO_BIOMETRIC_TYPE)(WINBIO_STANDARD_TYPE_MASK | WINBIO_TYPE_OTHER | WINBIO_TYPE_PASSWORD);
typedef ULONG WINBIO_BIOMETRIC_SENSOR_SUBTYPE, *PWINBIO_BIOMETRIC_SENSOR_SUBTYPE;
typedef ULONG WINBIO_CAPABILITIES, *PWINBIO_CAPABILITIES;
typedef USHORT WINBIO_SCP_VERSION;
typedef USHORT WINBIO_SCP_FLAGS;
typedef struct _WINBIO_SECURE_CONNECTION_PARAMS {
    DWORD PayloadSize;
    WINBIO_SCP_VERSION Version;
    WINBIO_SCP_FLAGS Flags;
} WINBIO_SECURE_CONNECTION_PARAMS, *PWINBIO_SECURE_CONNECTION_PARAMS;
typedef struct _WINBIO_SECURE_CONNECTION_DATA {
    DWORD Size;
    WINBIO_SCP_VERSION Version;
    WINBIO_SCP_FLAGS Flags;
    DWORD ModelCertificateSize;
    DWORD IntermediateCA1Size;
    DWORD IntermediateCA2Size;
} WINBIO_SECURE_CONNECTION_DATA, *PWINBIO_SECURE_CONNECTION_DATA;
typedef ULONG WINBIO_WAKE_REASON, *PWINBIO_WAKE_REASON;
typedef ULONG WINBIO_SENSOR_STATUS, *PWINBIO_SENSOR_STATUS;
typedef DWORD WINBIO_INDICATOR_STATUS, *PWINBIO_INDICATOR_STATUS;
typedef ULONG WINBIO_SENSOR_MODE, *PWINBIO_SENSOR_MODE;
typedef UCHAR WINBIO_BIOMETRIC_SUBTYPE, *PWINBIO_BIOMETRIC_SUBTYPE;
typedef ULONG WINBIO_UNIT_SECURITY_LEVEL, *PWINBIO_UNIT_SECURITY_LEVEL;
typedef ULONG WINBIO_REJECT_DETAIL, *PWINBIO_REJECT_DETAIL;
typedef struct _WINBIO_BIR_DATA {
    ULONG Size;
    ULONG Offset;
} WINBIO_BIR_DATA;
typedef WINBIO_BIR_DATA *PWINBIO_BIR_DATA;
typedef struct _WINBIO_BIR {
    WINBIO_BIR_DATA HeaderBlock;
    WINBIO_BIR_DATA StandardDataBlock;
    WINBIO_BIR_DATA VendorDataBlock;
    WINBIO_BIR_DATA SignatureBlock;
} WINBIO_BIR;
typedef WINBIO_BIR *PWINBIO_BIR;
                                         WINBIO_BIR_FIELD_PATRON_ID | \
                                         WINBIO_BIR_FIELD_INDEX | \
                                         WINBIO_BIR_FIELD_CHALLENGE | \
                                         WINBIO_BIR_FIELD_PAYLOAD )
typedef UCHAR WINBIO_BIR_VERSION, *PWINBIO_BIR_VERSION;
typedef UCHAR WINBIO_BIR_DATA_FLAGS, *PWINBIO_BIR_DATA_FLAGS;
typedef UCHAR WINBIO_BIR_PURPOSE, *PWINBIO_BIR_PURPOSE;
typedef CHAR WINBIO_BIR_QUALITY, *PWINBIO_BIR_QUALITY;
typedef struct _WINBIO_REGISTERED_FORMAT {
    USHORT Owner;
    USHORT Type;
} WINBIO_REGISTERED_FORMAT, *PWINBIO_REGISTERED_FORMAT;
typedef struct _WINBIO_BIR_HEADER {
    USHORT ValidFields;
    WINBIO_BIR_VERSION HeaderVersion;
    WINBIO_BIR_VERSION PatronHeaderVersion;
    WINBIO_BIR_DATA_FLAGS DataFlags;
    WINBIO_BIOMETRIC_TYPE Type;
    WINBIO_BIOMETRIC_SUBTYPE Subtype;
    WINBIO_BIR_PURPOSE Purpose;
    WINBIO_BIR_QUALITY DataQuality;
    LARGE_INTEGER CreationDate;
    struct {
        LARGE_INTEGER BeginDate;
        LARGE_INTEGER EndDate;
    } ValidityPeriod;
    WINBIO_REGISTERED_FORMAT BiometricDataFormat;
    WINBIO_REGISTERED_FORMAT ProductId;
} WINBIO_BIR_HEADER;
typedef WINBIO_BIR_HEADER *PWINBIO_BIR_HEADER;
typedef struct _WINBIO_BDB_ANSI_381_HEADER {
    ULONG64 RecordLength;
    ULONG FormatIdentifier;
    ULONG VersionNumber;
    WINBIO_REGISTERED_FORMAT ProductId;
    USHORT CaptureDeviceId;
    USHORT ImageAcquisitionLevel;
    USHORT HorizontalScanResolution;
    USHORT VerticalScanResolution;
    USHORT HorizontalImageResolution;
    USHORT VerticalImageResolution;
    UCHAR ElementCount;
    UCHAR ScaleUnits;
    UCHAR PixelDepth;
    UCHAR ImageCompressionAlg;
    USHORT Reserved;
} WINBIO_BDB_ANSI_381_HEADER;
typedef WINBIO_BDB_ANSI_381_HEADER *PWINBIO_BDB_ANSI_381_HEADER;
typedef struct _WINBIO_BDB_ANSI_381_RECORD {
    ULONG BlockLength;
    USHORT HorizontalLineLength;
    USHORT VerticalLineLength;
    WINBIO_BIOMETRIC_SUBTYPE Position;
    UCHAR CountOfViews;
    UCHAR ViewNumber;
    UCHAR ImageQuality;
    UCHAR ImpressionType;
    UCHAR Reserved;
} WINBIO_BDB_ANSI_381_RECORD;
typedef WINBIO_BDB_ANSI_381_RECORD *PWINBIO_BDB_ANSI_381_RECORD;
typedef struct _WINBIO_SECURE_BUFFER_HEADER_V1 {
    ULONG Type;
    ULONG Size;
    ULONG Flags;
    ULONGLONG ValidationTag;
} WINBIO_SECURE_BUFFER_HEADER_V1, *PWINBIO_SECURE_BUFFER_HEADER_V1;
typedef ULONG WINBIO_POOL_TYPE, *PWINBIO_POOL_TYPE;
typedef ULONG WINBIO_SESSION_FLAGS, *PWINBIO_SESSION_FLAGS;
typedef ULONG WINBIO_COMPONENT, *PWINBIO_COMPONENT;
typedef ULONG WINBIO_EVENT_TYPE, *PWINBIO_EVENT_TYPE;
const WINBIO_EVENT_TYPE WINBIO_EVENT_ERROR = (WINBIO_EVENT_TYPE)0xFFFFFFFF;
const WINBIO_EVENT_TYPE WINBIO_EVENT_FP_UNCLAIMED = (WINBIO_EVENT_TYPE)0x00000001;
const WINBIO_EVENT_TYPE WINBIO_EVENT_FP_UNCLAIMED_IDENTIFY = (WINBIO_EVENT_TYPE)0x00000002;
typedef union switch(WINBIO_EVENT_TYPE Type) _WINBIO_EVENT {
    case WINBIO_EVENT_FP_UNCLAIMED: struct {
                                                    WINBIO_UNIT_ID UnitId;
                                                    WINBIO_REJECT_DETAIL RejectDetail;
                                                } Unclaimed;
    case WINBIO_EVENT_FP_UNCLAIMED_IDENTIFY: struct {
                                                    WINBIO_UNIT_ID UnitId;
                                                    WINBIO_IDENTITY Identity;
                                                    WINBIO_BIOMETRIC_SUBTYPE SubFactor;
                                                    WINBIO_REJECT_DETAIL RejectDetail;
                                                } UnclaimedIdentify;
    case WINBIO_EVENT_ERROR: struct {
                                                    HRESULT ErrorCode;
                                                } Error;
} WINBIO_EVENT, *PWINBIO_EVENT;
typedef ULONG64 WINBIO_PROTECTION_TICKET, *PWINBIO_PROTECTION_TICKET;
typedef ULONG WINBIO_PRESENCE_CHANGE, *PWINBIO_PRESENCE_CHANGE;
typedef [switch_type(WINBIO_BIOMETRIC_TYPE)] union _WINBIO_PRESENCE_PROPERTIES {
    [case(WINBIO_NO_TYPE_AVAILABLE)]
        ULONG32 Null;
    [case(WINBIO_TYPE_FACIAL_FEATURES)]
        struct {
            RECT BoundingBox;
            LONG Distance;
            struct {
                WINBIO_UUID AdapterId;
                ULONG Data[WINBIO_OPAQUE_ENGINE_DATA_ITEM_COUNT];
            } OpaqueEngineData;
        } FacialFeatures;
    [case(WINBIO_TYPE_IRIS)]
        struct {
            RECT EyeBoundingBox_1;
            RECT EyeBoundingBox_2;
            POINT PupilCenter_1;
            POINT PupilCenter_2;
            LONG Distance;
        } Iris;
} WINBIO_PRESENCE_PROPERTIES, *PWINBIO_PRESENCE_PROPERTIES;
typedef struct _WINBIO_PRESENCE {
    WINBIO_BIOMETRIC_TYPE Factor;
    WINBIO_BIOMETRIC_SUBTYPE SubFactor;
    HRESULT Status;
    WINBIO_REJECT_DETAIL RejectDetail;
    WINBIO_IDENTITY Identity;
    ULONGLONG TrackingId;
    WINBIO_PROTECTION_TICKET Ticket;
    [switch_is(Factor)] WINBIO_PRESENCE_PROPERTIES Properties;
    struct {
        ULONG Size;
        UCHAR Data[32];
    } Authorization;
} WINBIO_PRESENCE, *PWINBIO_PRESENCE;
typedef struct _WINBIO_BSP_SCHEMA {
    WINBIO_BIOMETRIC_TYPE BiometricFactor;
    WINBIO_UUID BspId;
    WINBIO_STRING Description;
    WINBIO_STRING Vendor;
    WINBIO_VERSION Version;
} WINBIO_BSP_SCHEMA, *PWINBIO_BSP_SCHEMA;
typedef struct _WINBIO_UNIT_SCHEMA {
    WINBIO_UNIT_ID UnitId;
    WINBIO_POOL_TYPE PoolType;
    WINBIO_BIOMETRIC_TYPE BiometricFactor;
    WINBIO_BIOMETRIC_SENSOR_SUBTYPE SensorSubType;
    WINBIO_CAPABILITIES Capabilities;
    WINBIO_STRING DeviceInstanceId;
    WINBIO_STRING Description;
    WINBIO_STRING Manufacturer;
    WINBIO_STRING Model;
    WINBIO_STRING SerialNumber;
    WINBIO_VERSION FirmwareVersion;
} WINBIO_UNIT_SCHEMA, *PWINBIO_UNIT_SCHEMA;
typedef struct _WINBIO_STORAGE_SCHEMA {
    WINBIO_BIOMETRIC_TYPE BiometricFactor;
    WINBIO_UUID DatabaseId;
    WINBIO_UUID DataFormat;
    ULONG Attributes;
    WINBIO_STRING FilePath;
    WINBIO_STRING ConnectionString;
} WINBIO_STORAGE_SCHEMA, *PWINBIO_STORAGE_SCHEMA;
typedef ULONG WINBIO_FRAMEWORK_CHANGE_TYPE, *PWINBIO_FRAMEWORK_CHANGE_TYPE;
const ULONG WINBIO_MAX_SAMPLE_BUFFER_SIZE = 0x7FFFFFFF;
typedef ULONG WINBIO_OPERATION_TYPE, *PWINBIO_OPERATION_TYPE;
typedef ULONG32 WINBIO_PROPERTY_TYPE, *PWINBIO_PROPERTY_TYPE;
const ULONG WINBIO_MAX_SET_PROPERTY_BUFFER_SIZE = 0x1000;
typedef ULONG32 WINBIO_PROPERTY_ID, *PWINBIO_PROPERTY_ID;
typedef ULONG WINBIO_ORIENTATION, *PWINBIO_ORIENTATION;
typedef struct _WINBIO_EXTENDED_SENSOR_INFO {
    WINBIO_CAPABILITIES GenericSensorCapabilities;
    WINBIO_BIOMETRIC_TYPE Factor;
    [switch_is(Factor)] union
    {
        [case(WINBIO_NO_TYPE_AVAILABLE)]
            ULONG32 Null;
        [case(WINBIO_TYPE_FACIAL_FEATURES)]
            struct {
                RECT FrameSize;
                POINT FrameOffset;
                WINBIO_ORIENTATION MandatoryOrientation;
                struct {
                    WCHAR ColorSensorId[260];
                    WCHAR InfraredSensorId[260];
                    UINT32 InfraredSensorRotationAngle;
                } HardwareInfo;
            } FacialFeatures;
        [case(WINBIO_TYPE_FINGERPRINT)]
            struct {
                ULONG32 Reserved;
            } Fingerprint;
        [case(WINBIO_TYPE_IRIS)]
            struct {
                RECT FrameSize;
                POINT FrameOffset;
                WINBIO_ORIENTATION MandatoryOrientation;
            } Iris;
        [case(WINBIO_TYPE_VOICE)]
            struct {
                ULONG32 Reserved;
            } Voice;
    } Specific;
} WINBIO_EXTENDED_SENSOR_INFO, *PWINBIO_EXTENDED_SENSOR_INFO;
typedef struct _WINBIO_EXTENDED_ENGINE_INFO {
    WINBIO_CAPABILITIES GenericEngineCapabilities;
    WINBIO_BIOMETRIC_TYPE Factor;
    [switch_is(Factor)] union
    {
        [case(WINBIO_NO_TYPE_AVAILABLE)]
            ULONG32 Null;
        [case(WINBIO_TYPE_FACIAL_FEATURES)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
                struct {
                    ULONG32 Null;
                } EnrollmentRequirements;
            } FacialFeatures;
        [case(WINBIO_TYPE_FINGERPRINT)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
                struct {
                    ULONG GeneralSamples;
                    ULONG Center;
                    ULONG TopEdge;
                    ULONG BottomEdge;
                    ULONG LeftEdge;
                    ULONG RightEdge;
                } EnrollmentRequirements;
            } Fingerprint;
        [case(WINBIO_TYPE_IRIS)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
                struct {
                    ULONG32 Null;
                } EnrollmentRequirements;
            } Iris;
        [case(WINBIO_TYPE_VOICE)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
                struct {
                    ULONG32 Null;
                } EnrollmentRequirements;
            } Voice;
    } Specific;
} WINBIO_EXTENDED_ENGINE_INFO, *PWINBIO_EXTENDED_ENGINE_INFO;
typedef struct _WINBIO_EXTENDED_STORAGE_INFO {
    WINBIO_CAPABILITIES GenericStorageCapabilities;
    WINBIO_BIOMETRIC_TYPE Factor;
    [switch_is(Factor)] union
    {
        [case(WINBIO_NO_TYPE_AVAILABLE)]
            ULONG32 Null;
        [case(WINBIO_TYPE_FACIAL_FEATURES)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
            } FacialFeatures;
        [case(WINBIO_TYPE_FINGERPRINT)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
            } Fingerprint;
        [case(WINBIO_TYPE_IRIS)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
            } Iris;
        [case(WINBIO_TYPE_VOICE)]
            struct {
                WINBIO_CAPABILITIES Capabilities;
            } Voice;
    } Specific;
} WINBIO_EXTENDED_STORAGE_INFO, *PWINBIO_EXTENDED_STORAGE_INFO;
typedef struct _WINBIO_EXTENDED_ENROLLMENT_STATUS {
    HRESULT TemplateStatus;
    WINBIO_REJECT_DETAIL RejectDetail;
    ULONG PercentComplete;
    WINBIO_BIOMETRIC_TYPE Factor;
    WINBIO_BIOMETRIC_SUBTYPE SubFactor;
    [switch_is(Factor)] union
    {
        [case(WINBIO_NO_TYPE_AVAILABLE)]
            ULONG32 Null;
        [case(WINBIO_TYPE_FACIAL_FEATURES)]
            struct {
                RECT BoundingBox;
                LONG Distance;
                struct {
                    WINBIO_UUID AdapterId;
                    ULONG Data[WINBIO_OPAQUE_ENGINE_DATA_ITEM_COUNT];
                } OpaqueEngineData;
            } FacialFeatures;
        [case(WINBIO_TYPE_FINGERPRINT)]
            struct {
                ULONG GeneralSamples;
                ULONG Center;
                ULONG TopEdge;
                ULONG BottomEdge;
                ULONG LeftEdge;
                ULONG RightEdge;
            } Fingerprint;
        [case(WINBIO_TYPE_IRIS)]
            struct {
                RECT EyeBoundingBox_1;
                RECT EyeBoundingBox_2;
                POINT PupilCenter_1;
                POINT PupilCenter_2;
                LONG Distance;
                ULONG GridPointCompletionPercent;
                UINT16 GridPointIndex;
                struct
                {
                    double X;
                    double Y;
                    double Z;
                } Point3D;
                BOOL StopCaptureAndShowCriticalFeedback;
            } Iris;
        [case(WINBIO_TYPE_VOICE)]
            struct {
                ULONG32 Reserved;
            } Voice;
    } Specific;
} WINBIO_EXTENDED_ENROLLMENT_STATUS, *PWINBIO_EXTENDED_ENROLLMENT_STATUS;
typedef struct _WINBIO_EXTENDED_UNIT_STATUS {
    WINBIO_SENSOR_STATUS Availability;
    ULONG ReasonCode;
} WINBIO_EXTENDED_UNIT_STATUS, *PWINBIO_EXTENDED_UNIT_STATUS;
typedef struct _WINBIO_FP_BU_STATE {
    BOOL SensorAttached;
    HRESULT CreationResult;
} WINBIO_FP_BU_STATE, *PWINBIO_FP_BU_STATE;
typedef enum _WINBIO_ANTI_SPOOF_POLICY_ACTION
{
    WINBIO_ANTI_SPOOF_DISABLE = 0x00000000,
    WINBIO_ANTI_SPOOF_ENABLE = 0x00000001,
    WINBIO_ANTI_SPOOF_REMOVE = 0x00000002,
} WINBIO_ANTI_SPOOF_POLICY_ACTION, *PWINBIO_ANTI_SPOOF_POLICY_ACTION;
typedef enum _WINBIO_POLICY_SOURCE
{
    WINBIO_POLICY_UNKNOWN = 0x00000000,
    WINBIO_POLICY_DEFAULT = 0x00000001,
    WINBIO_POLICY_LOCAL = 0x00000002,
    WINBIO_POLICY_ADMIN = 0x00000003,
} WINBIO_POLICY_SOURCE, *PWINBIO_POLICY_SOURCE;
typedef struct _WINBIO_ANTI_SPOOF_POLICY {
    WINBIO_ANTI_SPOOF_POLICY_ACTION Action;
    WINBIO_POLICY_SOURCE Source;
} WINBIO_ANTI_SPOOF_POLICY, *PWINBIO_ANTI_SPOOF_POLICY;
typedef enum _WINBIO_CREDENTIAL_TYPE
{
    WINBIO_CREDENTIAL_PASSWORD = 0x00000001,
    WINBIO_CREDENTIAL_ALL = 0xffffffff,
} WINBIO_CREDENTIAL_TYPE;
typedef enum _WINBIO_CREDENTIAL_FORMAT
{
    WINBIO_PASSWORD_GENERIC = 0x00000001,
    WINBIO_PASSWORD_PACKED = 0x00000002,
    WINBIO_PASSWORD_PROTECTED = 0x00000003,
} WINBIO_CREDENTIAL_FORMAT;
typedef enum _WINBIO_CREDENTIAL_STATE {
    WINBIO_CREDENTIAL_NOT_SET = 0x00000001,
    WINBIO_CREDENTIAL_SET = 0x00000002,
} WINBIO_CREDENTIAL_STATE, *PWINBIO_CREDENTIAL_STATE;
typedef ULONG32 WINBIO_SETTING_SOURCE_TYPE, *PWINBIO_SETTING_SOURCE_TYPE;
typedef struct _WINBIO_EXTENDED_ENROLLMENT_PARAMETERS {
    SIZE_T Size;
    WINBIO_BIOMETRIC_SUBTYPE SubFactor;
} WINBIO_EXTENDED_ENROLLMENT_PARAMETERS, *PWINBIO_EXTENDED_ENROLLMENT_PARAMETERS;
typedef struct _WINBIO_ACCOUNT_POLICY {
    WINBIO_IDENTITY Identity;
    WINBIO_ANTI_SPOOF_POLICY_ACTION AntiSpoofBehavior;
} WINBIO_ACCOUNT_POLICY, *PWINBIO_ACCOUNT_POLICY;
typedef struct _WINBIO_PROTECTION_POLICY
{
    ULONG Version;
    WINBIO_IDENTITY Identity;
    WINBIO_UUID DatabaseId;
    ULONGLONG UserState;
    SIZE_T PolicySize;
    UCHAR Policy[128];
} WINBIO_PROTECTION_POLICY, *PWINBIO_PROTECTION_POLICY;
typedef ULONG32 WINBIO_MATCH_TYPE, *PWINBIO_MATCH_TYPE;
typedef ULONG32 WINBIO_PROTECTION_TYPE, *PWINBIO_PROTECTION_TYPE;
typedef struct _WINBIO_GESTURE_METADATA
{
    SIZE_T Size;
    WINBIO_BIOMETRIC_TYPE BiometricType;
    WINBIO_MATCH_TYPE MatchType;
    WINBIO_PROTECTION_TYPE ProtectionType;
} WINBIO_GESTURE_METADATA, *PWINBIO_GESTURE_METADATA;
const ULONG WINBIO_MAX_PRIVATE_SENSOR_TYPE_INFO_BUFFER_SIZE = 0x1000;
}
#pragma warning( pop )
