extern PPOSCX_DRIVER_GLOBALS PoscxDriverGlobals;
typedef enum _POSCXFUNCENUM {
    PosCxClaimDeviceTableIndex = 0,
    PosCxInitTableIndex = 1,
    PosCxRetainDeviceTableIndex = 2,
    PosCxRemoteRequestReleaseTableIndex = 3,
    PosCxReleaseDeviceTableIndex = 4,
    PosCxIsDeviceOwnerTableIndex = 5,
    PosCxGetDeviceInterfaceTagTableIndex = 6,
    PosCxPutPendingEventTableIndex = 7,
    PosCxPutPendingEventMemoryTableIndex = 8,
    PosCxGetPendingEventTableIndex = 9,
    PosCxCleanupEventsTableIndex = 10,
    PosCxCleanPendingRequestsTableIndex = 11,
    PosCxIsPosAppTableIndex = 12,
    PosCxMarkPosAppTableIndex = 13,
    PosCxOpenTableIndex = 14,
    PosCxCloseTableIndex = 15,
    PoscxFunctionTableNumEntries = 16,
} POSCXFUNCENUM;
