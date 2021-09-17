extern PMBB_DRIVER_GLOBALS MbbDriverGlobals;
typedef enum _MBBFUNCENUM {
    MbbDeviceInitConfigTableIndex = 0,
    MbbDeviceInitializeTableIndex = 1,
    MbbDeviceSetMbimParametersTableIndex = 2,
    MbbDeviceResponseAvailableTableIndex = 3,
    MbbDeviceSendDeviceServiceSessionDataCompleteTableIndex = 4,
    MbbDeviceReceiveDeviceServiceSessionDataTableIndex = 5,
    MbbAdapterInitializeTableIndex = 6,
    MbbAdapterGetSessionIdTableIndex = 7,
    MbbRequestGetBufferTableIndex = 8,
    MbbRequestGetCorrelationIdTableIndex = 9,
    MbbRequestCompleteTableIndex = 10,
    MbbRequestCompleteWithInformationTableIndex = 11,
    MbbDeviceSetOptionalParametersTableIndex = 12,
    MbbFunctionTableNumEntries = 13,
} MBBFUNCENUM;
