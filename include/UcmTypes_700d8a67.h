    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _UCM_TYPEC_OPERATING_MODE {
    UcmTypeCOperatingModeInvalid = 0x0,
    UcmTypeCOperatingModeDfp = 0x1,
    UcmTypeCOperatingModeUfp = 0x2,
    UcmTypeCOperatingModeDrp = 0x4,
} UCM_TYPEC_OPERATING_MODE;
typedef enum _UCM_TYPEC_PARTNER {
    UcmTypeCPartnerInvalid = 0,
    UcmTypeCPartnerUfp,
    UcmTypeCPartnerDfp,
    UcmTypeCPartnerPoweredCableNoUfp,
    UcmTypeCPartnerPoweredCableWithUfp,
    UcmTypeCPartnerAudioAccessory,
    UcmTypeCPartnerDebugAccessory,
} UCM_TYPEC_PARTNER;
typedef enum _UCM_TYPEC_CURRENT {
    UcmTypeCCurrentInvalid = 0x0,
    UcmTypeCCurrentDefaultUsb = 0x1,
    UcmTypeCCurrent1500mA = 0x2,
    UcmTypeCCurrent3000mA = 0x4,
} UCM_TYPEC_CURRENT;
typedef enum _UCM_POWER_ROLE {
    UcmPowerRoleInvalid = 0x0,
    UcmPowerRoleSink = 0x1,
    UcmPowerRoleSource = 0x2,
} UCM_POWER_ROLE;
typedef enum _UCM_DATA_ROLE {
    UcmDataRoleInvalid = 0,
    UcmDataRoleDfp,
    UcmDataRoleUfp,
} UCM_DATA_ROLE;
typedef enum _UCM_PD_CONN_STATE {
    UcmPdConnStateInvalid = 0x0,
    UcmPdConnStateNotSupported,
    UcmPdConnStateNegotiationFailed,
    UcmPdConnStateNegotiationSucceeded,
} UCM_PD_CONN_STATE;
typedef enum _UCM_CHARGING_STATE {
    UcmChargingStateInvalid = 0x0,
    UcmChargingStateNotCharging,
    UcmChargingStateNominalCharging,
    UcmChargingStateSlowCharging,
    UcmChargingStateTrickleCharging,
} UCM_CHARGING_STATE, *PUCM_CHARGING_STATE;
typedef union _UCM_PD_POWER_DATA_OBJECT
{
    ULONG Ul;
    struct {
        unsigned Reserved : 30;
        unsigned Type : 2;
    } Common;
    struct {
        unsigned MaximumCurrentIn10mA : 10;
        unsigned VoltageIn50mV : 10;
        unsigned PeakCurrent : 2;
        unsigned Reserved : 3;
        unsigned DataRoleSwap : 1;
        unsigned UsbCommunicationCapable : 1;
        unsigned ExternallyPowered : 1;
        unsigned UsbSuspendSupported : 1;
        unsigned DualRolePower : 1;
        unsigned FixedSupply : 2;
    } FixedSupplyPdo;
    struct {
        unsigned MaximumCurrentIn10mA : 10;
        unsigned MinimumVoltageIn50mV : 10;
        unsigned MaximumVoltageIn50mV : 10;
        unsigned VariableSupportNonBattery : 2;
    } VariableSupplyNonBatteryPdo;
    struct {
        unsigned MaximumAllowablePowerIn250mW : 10;
        unsigned MinimumVoltageIn50mV : 10;
        unsigned MaximumVoltageIn50mV : 10;
        unsigned Battery : 2;
    } BatterySupplyPdo;
} UCM_PD_POWER_DATA_OBJECT, *PUCM_PD_POWER_DATA_OBJECT;
C_ASSERT(sizeof(UCM_PD_POWER_DATA_OBJECT) == 4);
typedef enum _UCM_PD_POWER_DATA_OBJECT_TYPE
{
    UcmPdPdoTypeFixedSupply = 0,
    UcmPdPdoTypeBatterySupply = 1,
    UcmPdPdoTypeVariableSupplyNonBattery = 2
} UCM_PD_POWER_DATA_OBJECT_TYPE;
UCM_PD_POWER_DATA_OBJECT_TYPE
FORCEINLINE
UCM_PD_POWER_DATA_OBJECT_GET_TYPE(
    _In_ PUCM_PD_POWER_DATA_OBJECT Pdo
    )
{
    return (UCM_PD_POWER_DATA_OBJECT_TYPE)Pdo->Common.Type;
}
VOID
FORCEINLINE
UCM_PD_POWER_DATA_OBJECT_INIT_FIXED(
    _Out_ PUCM_PD_POWER_DATA_OBJECT Pdo
    )
{
    RtlZeroMemory(Pdo, sizeof(*Pdo));
    Pdo->FixedSupplyPdo.FixedSupply = UcmPdPdoTypeFixedSupply;
}
VOID
FORCEINLINE
UCM_PD_POWER_DATA_OBJECT_INIT_VARIABLE_NON_BATTERY(
    _Out_ PUCM_PD_POWER_DATA_OBJECT Pdo
    )
{
    RtlZeroMemory(Pdo, sizeof(*Pdo));
    Pdo->VariableSupplyNonBatteryPdo.VariableSupportNonBattery = UcmPdPdoTypeVariableSupplyNonBattery;
}
VOID
FORCEINLINE
UCM_PD_POWER_DATA_OBJECT_INIT_BATTERY(
    _Out_ PUCM_PD_POWER_DATA_OBJECT Pdo
    )
{
    RtlZeroMemory(Pdo, sizeof(*Pdo));
    Pdo->BatterySupplyPdo.Battery = UcmPdPdoTypeBatterySupply;
}
VOID
FORCEINLINE
UCM_PD_POWER_DATA_OBJECT_INIT_ULONG(
    _Out_ PUCM_PD_POWER_DATA_OBJECT Pdo,
    _In_ ULONG UlongInLittleEndian
    )
{
    RtlZeroMemory(Pdo, sizeof(*Pdo));
    Pdo->Ul = UlongInLittleEndian;
}
typedef union _UCM_PD_REQUEST_DATA_OBJECT
{
    ULONG Ul;
    struct {
        unsigned Reserved1 : 28;
        unsigned ObjectPosition : 3;
        unsigned Reserved2 : 1;
    } Common;
    struct {
        unsigned MaximumOperatingCurrentIn10mA : 10;
        unsigned OperatingCurrentIn10mA : 10;
        unsigned Reserved1 : 4;
        unsigned NoUsbSuspend : 1;
        unsigned UsbCommunicationCapable : 1;
        unsigned CapabilityMismatch : 1;
        unsigned GiveBackFlag : 1;
        unsigned ObjectPosition : 3;
        unsigned Reserved2 : 1;
    } FixedAndVariableRdo;
    struct {
        unsigned MaximumOperatingPowerIn250mW : 10;
        unsigned OperatingPowerIn250mW : 10;
        unsigned Reserved1 : 4;
        unsigned NoUsbSuspend : 1;
        unsigned UsbCommunicationCapable : 1;
        unsigned CapabilityMismatch : 1;
        unsigned GiveBackFlag : 1;
        unsigned ObjectPosition : 3;
        unsigned Reserved2 : 1;
    } BatteryRdo;
} UCM_PD_REQUEST_DATA_OBJECT, *PUCM_PD_REQUEST_DATA_OBJECT;
C_ASSERT(sizeof(UCM_PD_REQUEST_DATA_OBJECT) == 4);
VOID
FORCEINLINE
UCM_PD_REQUEST_DATA_OBJECT_INIT_ULONG(
    _Out_ PUCM_PD_REQUEST_DATA_OBJECT Rdo,
    _In_ ULONG UlongInLittleEndian
    )
{
    RtlZeroMemory(Rdo, sizeof(*Rdo));
    Rdo->Ul = UlongInLittleEndian;
}
WDF_EXTERN_C_END
