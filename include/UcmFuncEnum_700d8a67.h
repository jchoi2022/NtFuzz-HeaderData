extern PUCM_DRIVER_GLOBALS UcmDriverGlobals;
typedef enum _UCMFUNCENUM {
    UcmInitializeDeviceTableIndex = 0,
    UcmConnectorCreateTableIndex = 1,
    UcmConnectorTypeCAttachTableIndex = 2,
    UcmConnectorTypeCDetachTableIndex = 3,
    UcmConnectorTypeCCurrentAdChangedTableIndex = 4,
    UcmConnectorPdSourceCapsTableIndex = 5,
    UcmConnectorPdPartnerSourceCapsTableIndex = 6,
    UcmConnectorPdConnectionStateChangedTableIndex = 7,
    UcmConnectorChargingStateChangedTableIndex = 8,
    UcmConnectorDataDirectionChangedTableIndex = 9,
    UcmConnectorPowerDirectionChangedTableIndex = 10,
    UcmFunctionTableNumEntries = 11,
} UCMFUNCENUM;
