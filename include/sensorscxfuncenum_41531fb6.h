extern PSENSORSCX_DRIVER_GLOBALS SensorscxDriverGlobals;
typedef enum _SENSORSCXFUNCENUM {
    SensorsCxDeviceInitConfigTableIndex = 0,
    SensorsCxDeviceInitializeTableIndex = 1,
    SensorsCxSensorCreateTableIndex = 2,
    SensorsCxSensorInitializeTableIndex = 3,
    SensorsCxSensorDataReadyTableIndex = 4,
    SensorsCxDeviceGetSensorListTableIndex = 5,
    SensorsCxSensorHistoryRetrievalCompletedTableIndex = 6,
    SensorsCxStateChangeTableIndex = 7,
    SensorscxFunctionTableNumEntries = 8,
} SENSORSCXFUNCENUM;
