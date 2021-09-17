extern PUCX_DRIVER_GLOBALS UcxDriverGlobals;
typedef enum _UCXFUNCENUM {
    UcxIoDeviceControlTableIndex = 0,
    UcxControllerCreateTableIndex = 1,
    UcxControllerNeedsResetTableIndex = 2,
    UcxControllerResetCompleteTableIndex = 3,
    UcxControllerSetFailedTableIndex = 4,
    UcxRootHubCreateTableIndex = 5,
    UcxRootHubPortChangedTableIndex = 6,
    UcxUsbDeviceCreateTableIndex = 7,
    UcxUsbDeviceInitSetEventCallbacksTableIndex = 8,
    UcxUsbDeviceRemoteWakeNotificationTableIndex = 9,
    UcxEndpointCreateTableIndex = 10,
    UcxEndpointGetStaticStreamsReferencedTableIndex = 11,
    UcxEndpointNeedToCancelTransfersTableIndex = 12,
    UcxEndpointInitSetEventCallbacksTableIndex = 13,
    UcxDefaultEndpointInitSetEventCallbacksTableIndex = 14,
    UcxEndpointSetWdfIoQueueTableIndex = 15,
    UcxEndpointPurgeCompleteTableIndex = 16,
    UcxEndpointAbortCompleteTableIndex = 17,
    UcxEndpointNoPingResponseErrorTableIndex = 18,
    UcxStaticStreamsSetStreamInfoTableIndex = 19,
    UcxStaticStreamsCreateTableIndex = 20,
    UcxInitializeDeviceInitTableIndex = 21,
    UcxControllerSetIdStringsTableIndex = 22,
    UcxControllerNotifyTransportCharacteristicsChangeTableIndex = 23,
    UcxFunctionTableNumEntries = 24,
} UCXFUNCENUM;
