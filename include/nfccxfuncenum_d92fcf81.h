extern PNFCCX_DRIVER_GLOBALS NfccxDriverGlobals;
typedef enum _NFCCXFUNCENUM {
    NfcCxDeviceInitConfigTableIndex = 0,
    NfcCxDeviceInitializeTableIndex = 1,
    NfcCxDeviceDeinitializeTableIndex = 2,
    NfcCxHardwareEventTableIndex = 3,
    NfcCxNciReadNotificationTableIndex = 4,
    NfcCxSetRfDiscoveryConfigTableIndex = 5,
    NfcCxSetLlcpConfigTableIndex = 6,
    NfcCxRegisterSequenceHandlerTableIndex = 7,
    NfcCxUnregisterSequenceHandlerTableIndex = 8,
    NfcCxReleaseHardwareControlTableIndex = 9,
    NfcCxReacquireHardwareControlTableIndex = 10,
    NfccxFunctionTableNumEntries = 11,
} NFCCXFUNCENUM;
