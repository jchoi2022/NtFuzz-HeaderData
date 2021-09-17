#include "winbio_types.h"
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DEFINE_GUID( GUID_DEVINTERFACE_BIOMETRIC_READER,
             0xe2b5183a, 0x99ea, 0x4cc3, 0xad, 0x6b, 0x80, 0xca, 0x8d, 0x71, 0x5b, 0x80);
                                                (code), \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS)
typedef struct _WINBIO_SENSOR_ATTRIBUTES {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_VERSION WinBioVersion;
    WINBIO_BIOMETRIC_TYPE SensorType;
    WINBIO_BIOMETRIC_SENSOR_SUBTYPE SensorSubType;
    WINBIO_CAPABILITIES Capabilities;
    WINBIO_STRING ManufacturerName;
    WINBIO_STRING ModelName;
    WINBIO_STRING SerialNumber;
    WINBIO_VERSION FirmwareVersion;
    DWORD SupportedFormatEntries;
    WINBIO_REGISTERED_FORMAT SupportedFormat[1];
} WINBIO_SENSOR_ATTRIBUTES, *PWINBIO_SENSOR_ATTRIBUTES;
typedef struct _WINBIO_DATA{
    DWORD Size;
    BYTE Data[1];
} WINBIO_DATA, *PWINBIO_DATA;
typedef struct _WINBIO_UPDATE_FIRMWARE {
    DWORD PayloadSize;
    WINBIO_DATA FirmwareData;
} WINBIO_UPDATE_FIRMWARE, *PWINBIO_UPDATE_FIRMWARE;
typedef struct _WINBIO_CALIBRATION_INFO {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_DATA CalibrationData;
} WINBIO_CALIBRATION_INFO, *PWINBIO_CALIBRATION_INFO;
typedef struct _WINBIO_DIAGNOSTICS {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_SENSOR_STATUS SensorStatus;
    WINBIO_DATA VendorDiagnostics;
} WINBIO_DIAGNOSTICS, *PWINBIO_DIAGNOSTICS;
typedef struct _WINBIO_BLANK_PAYLOAD {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
} WINBIO_BLANK_PAYLOAD, *PWINBIO_BLANK_PAYLOAD;
typedef struct _WINBIO_CAPTURE_PARAMETERS {
    DWORD PayloadSize;
    WINBIO_BIR_PURPOSE Purpose;
    WINBIO_REGISTERED_FORMAT Format;
    WINBIO_UUID VendorFormat;
    WINBIO_BIR_DATA_FLAGS Flags;
} WINBIO_CAPTURE_PARAMETERS, *PWINBIO_CAPTURE_PARAMETERS;
typedef struct _WINBIO_CAPTURE_DATA {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_SENSOR_STATUS SensorStatus;
    WINBIO_REJECT_DETAIL RejectDetail;
    WINBIO_DATA CaptureData;
} WINBIO_CAPTURE_DATA, *PWINBIO_CAPTURE_DATA;
typedef struct _WINBIO_SUPPORTED_ALGORITHMS {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    DWORD NumberOfAlgorithms;
    WINBIO_DATA AlgorithmData;
} WINBIO_SUPPORTED_ALGORITHMS, *PWINBIO_SUPPORTED_ALGORITHMS;
typedef struct _WINBIO_GET_INDICATOR {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_INDICATOR_STATUS IndicatorStatus;
} WINBIO_GET_INDICATOR, *PWINBIO_GET_INDICATOR;
typedef struct _WINBIO_SET_INDICATOR {
    DWORD PayloadSize;
    WINBIO_INDICATOR_STATUS IndicatorStatus;
} WINBIO_SET_INDICATOR, *PWINBIO_SET_INDICATOR;
typedef struct _WINBIO_PRIVATE_SENSOR_TYPE_INFO {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_DATA PrivateSensorTypeInfo;
} WINBIO_PRIVATE_SENSOR_TYPE_INFO, *PWINBIO_PRIVATE_SENSOR_TYPE_INFO;
typedef struct _WINBIO_ENCRYPTED_CAPTURE_PARAMS {
    DWORD PayloadSize;
    WINBIO_BIR_PURPOSE Purpose;
    WINBIO_REGISTERED_FORMAT Format;
    WINBIO_UUID VendorFormat;
    WINBIO_BIR_DATA_FLAGS Flags;
    DWORD NonceSize;
} WINBIO_ENCRYPTED_CAPTURE_PARAMS, *PWINBIO_ENCRYPTED_CAPTURE_PARAMS;
typedef struct _WINBIO_NOTIFY_WAKE {
    DWORD PayloadSize;
    HRESULT WinBioHresult;
    WINBIO_WAKE_REASON Reason;
} WINBIO_NOTIFY_WAKE, *PWINBIO_NOTIFY_WAKE;
}
#endif
#pragma endregion
