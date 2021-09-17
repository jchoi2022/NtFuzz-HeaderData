#include <pshpack8.h>
typedef enum DriverUnifiedPosErrorSeverity
{
    UnknownErrorSeverity = 0,
    Warning = 1,
    Recoverable = 2,
    Unrecoverable = 3,
    AssistanceRequired = 4,
    Fatal = 5
}DriverUnifiedPosErrorSeverity;
typedef enum DriverUnifiedPosPowerReportingType
{
    UnknownPowerReportingType = 0,
    Standard = 1,
    Advanced = 2
} DriverUnifiedPosPowerReportingType;
typedef enum DriverUnifiedPosPowerState
{
    PowerStateUnknown = 2000,
    PowerStateOnline,
    PowerStateOff,
    PowerStateOffline,
    PowerStateOffOffline
} DriverUnifiedPosPowerState;
typedef enum DriverUnifiedPosHealthCheckLevel
{
    UnknownHealthCheckLevel = 0,
    POSInternal = 1,
    External = 2,
    Interactive = 3
} DriverUnifiedPosHealthCheckLevel;
typedef enum DriverUnifiedPosErrorReason
{
    UnknownErrorReason = 0,
    NoService = 1,
    Disabled = 2,
    Illegal = 3,
    NoHardware = 4,
    Closed = 5,
    Offline = 6,
    Failure = 7,
    Timeout = 8,
    Busy = 9,
    Extended = 10,
} DriverUnifiedPosErrorReason;
typedef enum DriverMagneticStripeReaderAuthenticationLevel
{
    NotSupported = 0,
    Optional = 1,
    Required = 2
} DriverMagneticStripeReaderAuthenticationLevel;
typedef enum _BarcodeSymbology
{
    PosUnknown = 0,
    Ean8 = 101,
    Ean8Add2 = 102,
    Ean8Add5 = 103,
    Eanv = 104,
    EanvAdd2 = 105,
    EanvAdd5 = 106,
    Ean13 = 107,
    Ean13Add2 = 108,
    Ean13Add5 = 109,
    Isbn = 110,
    IsbnAdd5 = 111,
    Ismn = 112,
    IsmnAdd2 = 113,
    IsmnAdd5 = 114,
    Issn = 115,
    IssnAdd2 = 116,
    IssnAdd5 = 117,
    Ean99 = 118,
    Ean99Add2 = 119,
    Ean99Add5 = 120,
    Upca = 121,
    UpcaAdd2 = 122,
    UpcaAdd5 = 123,
    Upce = 124,
    UpceAdd2 = 125,
    UpceAdd5 = 126,
    UpcCoupon = 127,
    TfStd = 128,
    TfDis = 129,
    TfInt = 130,
    TfInd = 131,
    TfMat = 132,
    TfIata = 133,
    Gs1DatabarType1 = 134,
    Gs1DatabarType2 = 135,
    Gs1DatabarType3 = 136,
    Code39 = 137,
    Code39Ex = 138,
    Trioptic39 = 139,
    Code32 = 140,
    Pzn = 141,
    Code93 = 142,
    Code93Ex = 143,
    Code128 = 144,
    Gs1128 = 145,
    Gs1128Coupon = 146,
    UccEan128 = 147,
    Sisac = 148,
    Isbt = 149,
    Codabar = 150,
    Code11 = 151,
    Msi = 152,
    Plessey = 153,
    Telepen = 154,
    Code16k = 155,
    CodablockA = 156,
    CodablockF = 157,
    Codablock128 = 158,
    Code49 = 159,
    Aztec = 160,
    DataCode = 161,
    DataMatrix = 162,
    HanXin = 163,
    Maxicode = 164,
    MicroPdf417 = 165,
    MicroQr = 166,
    Pdf417 = 167,
    Qr = 168,
    MsTag = 169,
    Ccab = 170,
    Ccc = 171,
    Tlc39 = 172,
    AusPost = 173,
    CanPost = 174,
    ChinaPost = 175,
    DutchKix = 176,
    InfoMail = 177,
    ItalianPost25 = 178,
    ItalianPost39 = 179,
    JapanPost = 180,
    KoreanPost = 181,
    SwedenPost = 182,
    UkPost = 183,
    UsIntelligent = 184,
    UsIntelligentPkg = 185,
    UsPlanet = 186,
    UsPostNet = 187,
    Us4StateFics = 188,
    OcrA = 189,
    OcrB = 190,
    Micr = 191,
    Gs1DWCode = 192,
    ExtendedBase = 501
} BarcodeSymbology;
typedef enum _BarcodeSymbologyDecodeLengthType
{
    DecodeLengthType_AnyLength = 0,
    DecodeLengthType_Discrete = 1,
    DecodeLengthType_Range = 2
} BarcodeSymbologyDecodeLengthType;
typedef struct _BarcodeSymbologyAttributesData
{
    BarcodeSymbology Symbology;
    UINT32 IsCheckDigitValidationSupported;
    UINT32 IsCheckDigitValidationEnabled;
    UINT32 IsCheckDigitTransmissionSupported;
    UINT32 IsCheckDigitTransmissionEnabled;
    UINT32 IsDecodeLengthSupported;
    BarcodeSymbologyDecodeLengthType DecodeLengthType;
    UINT32 DecodeLength1;
    UINT32 DecodeLength2;
} BarcodeSymbologyAttributesData;
typedef enum _BarcodeStatus
{
    BarcodeStatusUpdateType_Online = 0,
    BarcodeStatusUpdateType_Off = 1,
    BarcodeStatusUpdateType_Offline = 2,
    BarcodeStatusUpdateType_OffOrOffline = 3,
    BarcodeStatusUpdateType_Extended = 4
} BarcodeStatus;
typedef struct _PosDeviceInformation
{
    _Field_z_ wchar_t UnifiedPOSVersion[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t DeviceCategory[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t ManufacturerName[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t ModelName[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t SerialNumber[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t ManufactureDate[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t MechanicalRevision[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t FirmwareRevision[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t Interface[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t InstallationDate[STATISTICS_STRING_SIZE];
} PosDeviceInformation;
typedef enum _PosDeviceType
{
    PosDeviceType_Unknown = 0,
    PosDeviceType_BarcodeScanner = 1,
    PosDeviceType_MagneticStripeReader = 2,
    PosDeviceType_Max = 6
} PosDeviceType;
#include <poppack.h>
