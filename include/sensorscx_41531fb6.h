#include "SensorsDef.h"
    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef VOID (*PSENSORSCX_EXPORTED_INTERFACES)(VOID);
extern PSENSORSCX_EXPORTED_INTERFACES SensorscxFunctions [];
typedef struct _WDF_DRIVER_GLOBALS SENSORSCX_DRIVER_GLOBALS, *PSENSORSCX_DRIVER_GLOBALS;
typedef WDFOBJECT SENSOROBJECT, *PSENSOROBJECT;
#include "SensorsCxFuncEnum.h"
typedef
_Function_class_(EVT_SENSOR_DRIVER_START_SENSOR)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_START_SENSOR(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_START_SENSOR *PFN_SENSOR_DRIVER_START_SENSOR;
typedef
_Function_class_(EVT_SENSOR_DRIVER_STOP_SENSOR)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_STOP_SENSOR(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_STOP_SENSOR *PFN_SENSOR_DRIVER_STOP_SENSOR;
typedef
_Function_class_(EVT_SENSOR_DRIVER_START_SENSOR_HISTORY)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_START_SENSOR_HISTORY(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_START_SENSOR_HISTORY *PFN_SENSOR_DRIVER_START_SENSOR_HISTORY;
typedef
_Function_class_(EVT_SENSOR_DRIVER_STOP_SENSOR_HISTORY)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_STOP_SENSOR_HISTORY(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_STOP_SENSOR_HISTORY *PFN_SENSOR_DRIVER_STOP_SENSOR_HISTORY;
typedef
_Function_class_(EVT_SENSOR_DRIVER_ENABLE_WAKE)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_ENABLE_WAKE(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_ENABLE_WAKE *PFN_SENSOR_DRIVER_ENABLE_WAKE;
typedef
_Function_class_(EVT_SENSOR_DRIVER_DISABLE_WAKE)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_DISABLE_WAKE(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_DISABLE_WAKE *PFN_SENSOR_DRIVER_DISABLE_WAKE;
typedef
_Function_class_(EVT_SENSOR_DRIVER_CLEAR_SENSOR_HISTORY)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_CLEAR_SENSOR_HISTORY(
    _In_
    SENSOROBJECT Sensor
    );
typedef EVT_SENSOR_DRIVER_CLEAR_SENSOR_HISTORY *PFN_SENSOR_DRIVER_CLEAR_SENSOR_HISTORY;
typedef
_Function_class_(EVT_SENSOR_DRIVER_START_HISTORY_RETRIEVAL)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_START_HISTORY_RETRIEVAL(
    _In_
    SENSOROBJECT Sensor,
    _Inout_updates_bytes_(HistorySizeInBytes)
    PSENSOR_COLLECTION_LIST pHistory,
    _In_
    ULONG HistorySizeInBytes
    );
typedef EVT_SENSOR_DRIVER_START_HISTORY_RETRIEVAL *PFN_SENSOR_DRIVER_START_HISTORY_RETRIEVAL;
typedef
_Function_class_(EVT_SENSOR_DRIVER_CANCEL_HISTORY_RETRIEVAL)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_CANCEL_HISTORY_RETRIEVAL(
    _In_
    SENSOROBJECT Sensor,
    _Out_
    PULONG pBytesWritten
    );
typedef EVT_SENSOR_DRIVER_CANCEL_HISTORY_RETRIEVAL *PFN_SENSOR_DRIVER_CANCEL_HISTORY_RETRIEVAL;
typedef
_Function_class_(EVT_SENSOR_DRIVER_GET_SUPPORTED_DATA_FIELDS)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_GET_SUPPORTED_DATA_FIELDS(
    _In_
    SENSOROBJECT Sensor,
    _Inout_opt_
    PSENSOR_PROPERTY_LIST pDataFields,
    _Out_
    PULONG pSize
    );
typedef EVT_SENSOR_DRIVER_GET_SUPPORTED_DATA_FIELDS *PFN_SENSOR_DRIVER_GET_SUPPORTED_DATA_FIELDS;
typedef
_Function_class_(EVT_SENSOR_DRIVER_GET_PROPERTIES)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_GET_PROPERTIES(
    _In_
    SENSOROBJECT Sensor,
    _Inout_opt_
    PSENSOR_COLLECTION_LIST pProperties,
    _Out_
    PULONG pSize
    );
typedef EVT_SENSOR_DRIVER_GET_PROPERTIES *PFN_SENSOR_DRIVER_GET_PROPERTIES;
typedef
_Function_class_(EVT_SENSOR_DRIVER_GET_DATA_FIELD_PROPERTIES)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_GET_DATA_FIELD_PROPERTIES(
    _In_
    SENSOROBJECT Sensor,
    _In_
    const PROPERTYKEY *pDataField,
    _Inout_opt_
    PSENSOR_COLLECTION_LIST pProperties,
    _Out_
    PULONG pSize
    );
typedef EVT_SENSOR_DRIVER_GET_DATA_FIELD_PROPERTIES *PFN_SENSOR_DRIVER_GET_DATA_FIELD_PROPERTIES;
typedef
_Function_class_(EVT_SENSOR_DRIVER_GET_DATA_INTERVAL)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_GET_DATA_INTERVAL(
    _In_
    SENSOROBJECT Sensor,
    _Out_
    PULONG pDataRateMs
    );
typedef EVT_SENSOR_DRIVER_GET_DATA_INTERVAL *PFN_SENSOR_DRIVER_GET_DATA_INTERVAL;
typedef
_Function_class_(EVT_SENSOR_DRIVER_SET_DATA_INTERVAL)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_SET_DATA_INTERVAL(
    _In_
    SENSOROBJECT Sensor,
    _In_
    ULONG DataRateMs
    );
typedef EVT_SENSOR_DRIVER_SET_DATA_INTERVAL *PFN_SENSOR_DRIVER_SET_DATA_INTERVAL;
typedef
_Function_class_(EVT_SENSOR_DRIVER_GET_DATA_THRESHOLDS)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_GET_DATA_THRESHOLDS(
    _In_
    SENSOROBJECT Sensor,
    _Inout_opt_
    PSENSOR_COLLECTION_LIST pThresholds,
    _Out_
    PULONG pSize
    );
typedef EVT_SENSOR_DRIVER_GET_DATA_THRESHOLDS *PFN_SENSOR_DRIVER_GET_DATA_THRESHOLDS;
typedef
_Function_class_(EVT_SENSOR_DRIVER_SET_DATA_THRESHOLDS)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_SET_DATA_THRESHOLDS(
    _In_
    SENSOROBJECT Sensor,
    _In_
    PSENSOR_COLLECTION_LIST pThresholds
    );
typedef EVT_SENSOR_DRIVER_SET_DATA_THRESHOLDS *PFN_SENSOR_DRIVER_SET_DATA_THRESHOLDS;
typedef
_Function_class_(EVT_SENSOR_DRIVER_DEVICE_IO_CONTROL)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_DEVICE_IO_CONTROL(
    _In_
    SENSOROBJECT Sensor,
    _In_
    WDFREQUEST Request,
    _In_
    size_t OutputBufferLength,
    _In_
    size_t InputBufferLength,
    _In_
    ULONG IoControlCode
    );
typedef EVT_SENSOR_DRIVER_DEVICE_IO_CONTROL *PFN_SENSOR_DRIVER_DEVICE_IO_CONTROL;
typedef
_Function_class_(EVT_SENSOR_DRIVER_SET_BATCH_LATENCY)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_SET_BATCH_LATENCY(
    _In_
    SENSOROBJECT Sensor,
    _In_
    ULONG BatchLatencyMs
    );
typedef EVT_SENSOR_DRIVER_SET_BATCH_LATENCY *PFN_SENSOR_DRIVER_SET_BATCH_LATENCY;
typedef
_Function_class_(EVT_SENSOR_DRIVER_START_STATE_CHANGE_NOTIFICATION)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_START_STATE_CHANGE_NOTIFICATION(
    _In_
    SENSOROBJECT Sensors
    );
typedef EVT_SENSOR_DRIVER_START_STATE_CHANGE_NOTIFICATION *PFN_SENSOR_DRIVER_START_STATE_CHANGE_NOTIFICATION;
typedef
_Function_class_(EVT_SENSOR_DRIVER_STOP_STATE_CHANGE_NOTIFICATION)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_SENSOR_DRIVER_STOP_STATE_CHANGE_NOTIFICATION(
    _In_
    SENSOROBJECT Sensors
    );
typedef EVT_SENSOR_DRIVER_STOP_STATE_CHANGE_NOTIFICATION *PFN_SENSOR_DRIVER_STOP_STATE_CHANGE_NOTIFICATION;
typedef struct _SENSOR_CONTROLLER_CONFIG
{
    ULONG Size;
    WDF_TRI_STATE DriverIsPowerPolicyOwner;
    PFN_SENSOR_DRIVER_START_SENSOR EvtSensorStart;
    PFN_SENSOR_DRIVER_STOP_SENSOR EvtSensorStop;
    PFN_SENSOR_DRIVER_GET_SUPPORTED_DATA_FIELDS EvtSensorGetSupportedDataFields;
    PFN_SENSOR_DRIVER_GET_DATA_FIELD_PROPERTIES EvtSensorGetDataFieldProperties;
    PFN_SENSOR_DRIVER_GET_DATA_INTERVAL EvtSensorGetDataInterval;
    PFN_SENSOR_DRIVER_SET_DATA_INTERVAL EvtSensorSetDataInterval;
    PFN_SENSOR_DRIVER_GET_DATA_THRESHOLDS EvtSensorGetDataThresholds;
    PFN_SENSOR_DRIVER_SET_DATA_THRESHOLDS EvtSensorSetDataThresholds;
    PFN_SENSOR_DRIVER_GET_PROPERTIES EvtSensorGetProperties;
    PFN_SENSOR_DRIVER_DEVICE_IO_CONTROL EvtSensorDeviceIoControl;
    PFN_SENSOR_DRIVER_START_SENSOR_HISTORY EvtSensorStartHistory;
    PFN_SENSOR_DRIVER_STOP_SENSOR_HISTORY EvtSensorStopHistory;
    PFN_SENSOR_DRIVER_CLEAR_SENSOR_HISTORY EvtSensorClearHistory;
    PFN_SENSOR_DRIVER_START_HISTORY_RETRIEVAL EvtSensorStartHistoryRetrieval;
    PFN_SENSOR_DRIVER_CANCEL_HISTORY_RETRIEVAL EvtSensorCancelHistoryRetrieval;
    PFN_SENSOR_DRIVER_SET_BATCH_LATENCY EvtSensorSetBatchLatency;
    PFN_SENSOR_DRIVER_START_STATE_CHANGE_NOTIFICATION EvtSensorStartStateChangeNotification;
    PFN_SENSOR_DRIVER_STOP_STATE_CHANGE_NOTIFICATION EvtSensorStopStateChangeNotification;
    PFN_SENSOR_DRIVER_ENABLE_WAKE EvtSensorEnableWake;
    PFN_SENSOR_DRIVER_DISABLE_WAKE EvtSensorDisableWake;
} SENSOR_CONTROLLER_CONFIG, *PSENSOR_CONTROLLER_CONFIG;
VOID
FORCEINLINE
SENSOR_CONTROLLER_CONFIG_INIT(
    _Out_ PSENSOR_CONTROLLER_CONFIG pConfig
    )
{
    RtlZeroMemory(pConfig, sizeof(SENSOR_CONTROLLER_CONFIG));
    pConfig->Size = sizeof(SENSOR_CONTROLLER_CONFIG);
    pConfig->DriverIsPowerPolicyOwner = WdfUseDefault;
}
typedef struct _SENSOR_CONFIG
{
    ULONG Size;
    PSENSOR_COLLECTION_LIST pEnumerationList;
} SENSOR_CONFIG, *PSENSOR_CONFIG;
VOID
FORCEINLINE
SENSOR_CONFIG_INIT(
    _Out_ PSENSOR_CONFIG pConfig
    )
{
    RtlZeroMemory(pConfig, sizeof(SENSOR_CONFIG));
    pConfig->Size = sizeof(SENSOR_CONFIG);
}
typedef
WDFAPI
NTSTATUS
(*PFN_SENSORSCXDEVICEINITCONFIG)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT pFxDeviceInit,
    _Inout_
    PWDF_OBJECT_ATTRIBUTES pFdoAttributes,
    _In_
    ULONG Flags
    );
NTSTATUS
FORCEINLINE
SensorsCxDeviceInitConfig(
    _Inout_
    PWDFDEVICE_INIT pFxDeviceInit,
    _Inout_
    PWDF_OBJECT_ATTRIBUTES pFdoAttributes,
    _In_
    ULONG Flags
    )
{
    return ((PFN_SENSORSCXDEVICEINITCONFIG) SensorscxFunctions[SensorsCxDeviceInitConfigTableIndex])(SensorscxDriverGlobals, pFxDeviceInit, pFdoAttributes, Flags);
}
typedef
WDFAPI
NTSTATUS
(*PFN_SENSORSCXDEVICEINITIALIZE)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PSENSOR_CONTROLLER_CONFIG pSensorConfig
    );
NTSTATUS
FORCEINLINE
SensorsCxDeviceInitialize(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PSENSOR_CONTROLLER_CONFIG pSensorConfig
    )
{
    return ((PFN_SENSORSCXDEVICEINITIALIZE) SensorscxFunctions[SensorsCxDeviceInitializeTableIndex])(SensorscxDriverGlobals, FxDevice, pSensorConfig);
}
typedef
WDFAPI
NTSTATUS
(*PFN_SENSORSCXSENSORCREATE)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _In_
    PWDF_OBJECT_ATTRIBUTES pSensorAttributes,
    _Out_
    PSENSOROBJECT pSensor
    );
NTSTATUS
FORCEINLINE
SensorsCxSensorCreate(
    _In_
    WDFDEVICE FxDevice,
    _In_
    PWDF_OBJECT_ATTRIBUTES pSensorAttributes,
    _Out_
    PSENSOROBJECT pSensor
    )
{
    return ((PFN_SENSORSCXSENSORCREATE) SensorscxFunctions[SensorsCxSensorCreateTableIndex])(SensorscxDriverGlobals, FxDevice, pSensorAttributes, pSensor);
}
typedef
WDFAPI
NTSTATUS
(*PFN_SENSORSCXSENSORINITIALIZE)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SENSOROBJECT Sensor,
    _In_
    PSENSOR_CONFIG pSensorConfig
    );
NTSTATUS
FORCEINLINE
SensorsCxSensorInitialize(
    _In_
    SENSOROBJECT Sensor,
    _In_
    PSENSOR_CONFIG pSensorConfig
    )
{
    return ((PFN_SENSORSCXSENSORINITIALIZE) SensorscxFunctions[SensorsCxSensorInitializeTableIndex])(SensorscxDriverGlobals, Sensor, pSensorConfig);
}
typedef
WDFAPI
VOID
(*PFN_SENSORSCXSENSORDATAREADY)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SENSOROBJECT Sensor,
    _In_
    PSENSOR_COLLECTION_LIST pSensorData
    );
VOID
FORCEINLINE
SensorsCxSensorDataReady(
    _In_
    SENSOROBJECT Sensor,
    _In_
    PSENSOR_COLLECTION_LIST pSensorData
    )
{
    ((PFN_SENSORSCXSENSORDATAREADY) SensorscxFunctions[SensorsCxSensorDataReadyTableIndex])(SensorscxDriverGlobals, Sensor, pSensorData);
}
typedef
WDFAPI
VOID
(*PFN_SENSORSCXSENSORHISTORYRETRIEVALCOMPLETED)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SENSOROBJECT Sensor,
    _In_
    ULONG BytesWritten,
    _In_
    NTSTATUS InStatus
    );
VOID
FORCEINLINE
SensorsCxSensorHistoryRetrievalCompleted(
    _In_
    SENSOROBJECT Sensor,
    _In_
    ULONG BytesWritten,
    _In_
    NTSTATUS InStatus
    )
{
    ((PFN_SENSORSCXSENSORHISTORYRETRIEVALCOMPLETED) SensorscxFunctions[SensorsCxSensorHistoryRetrievalCompletedTableIndex])(SensorscxDriverGlobals, Sensor, BytesWritten, InStatus);
}
typedef
WDFAPI
NTSTATUS
(*PFN_SENSORSCXDEVICEGETSENSORLIST)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE FxDevice,
    _Out_writes_(*pListCount)
    SENSOROBJECT* pSensorList,
    _Inout_
    PULONG pListCount
    );
NTSTATUS
FORCEINLINE
SensorsCxDeviceGetSensorList(
    _In_
    WDFDEVICE FxDevice,
    _Out_writes_(*pListCount)
    SENSOROBJECT* pSensorList,
    _Inout_
    PULONG pListCount
    )
{
    return ((PFN_SENSORSCXDEVICEGETSENSORLIST) SensorscxFunctions[SensorsCxDeviceGetSensorListTableIndex])(SensorscxDriverGlobals, FxDevice, pSensorList, pListCount);
}
typedef
WDFAPI
VOID
(*PFN_SENSORSCXSTATECHANGE)(
    _In_
    PSENSORSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    SENSOROBJECT Sensor,
    _In_
    SENSOR_STATE State
    );
VOID
FORCEINLINE
SensorsCxStateChange(
    _In_
    SENSOROBJECT Sensor,
    _In_
    SENSOR_STATE State
    )
{
    ((PFN_SENSORSCXSTATECHANGE) SensorscxFunctions[SensorsCxStateChangeTableIndex])(SensorscxDriverGlobals, Sensor, State);
}
WDF_EXTERN_C_END
