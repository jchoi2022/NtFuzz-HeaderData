       
#pragma warning(push)
#pragma warning(disable:4201)
#include <pshpack1.h>
typedef enum _USBC_PARTNER {
    UsbCPartnerInvalid = 0,
    UsbCPartnerUfp,
    UsbCPartnerDfp,
    UsbCPartnerPoweredCableNoUfp,
    UsbCPartnerPoweredCableWithUfp,
    UsbCPartnerAudioAccessory,
    UsbCPartnerDebugAccessory
} USBC_PARTNER;
typedef enum _USBC_TYPEC_OPERATING_MODE
{
    UsbCOperatingModeInvalid = 0x0,
    UsbCOperatingModeDfp = 0x1,
    UsbCOperatingModeUfp = 0x2,
    UsbCOperatingModeDrp = 0x4
} USBC_TYPEC_OPERATING_MODE;
typedef enum _USBC_CURRENT {
    UsbCCurrentInvalid = 0x0,
    UsbCCurrentDefaultUsb = 0x1,
    UsbCCurrent1500mA = 0x2,
    UsbCCurrent3000mA = 0x4,
} USBC_CURRENT;
typedef enum _USBC_POWER_ROLE {
    UsbCPowerRoleInvalid = 0x0,
    UsbCPowerRoleSink = 0x1,
    UsbCPowerRoleSource = 0x2,
} USBC_POWER_ROLE;
typedef enum _USBC_DATA_ROLE {
    UsbCDataRoleInvalid = 0,
    UsbCDataRoleDfp,
    UsbCDataRoleUfp,
} USBC_DATA_ROLE;
typedef enum _USBC_CHARGING_STATE {
    UsbCChargingStateInvalid = 0x0,
    UsbCChargingStateNotCharging,
    UsbCChargingStateNominalCharging,
    UsbCChargingStateSlowCharging,
    UsbCChargingStateTrickleCharging,
} USBC_CHARGING_STATE;
typedef enum _USBC_PD_CONN_STATE {
    UsbCPdConnStateInvalid = 0x0,
    UsbCPdConnStateNotSupported,
    UsbCPdConnStateNegotiationFailed,
    UsbCPdConnStateNegotiationSucceeded,
} USBC_PD_CONN_STATE;
typedef union _USBC_PD_REQUEST_DATA_OBJECT
{
    UINT32 U;
    struct {
        UINT32 Reserved1 : 28;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved2 : 1;
    } Common;
    struct {
        UINT32 MaximumOperatingCurrentIn10mA : 10;
        UINT32 OperatingCurrentIn10mA : 10;
        UINT32 Reserved1 : 6;
        UINT32 CapabilityMismatch : 1;
        UINT32 GiveBackFlag : 1;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved2 : 1;
    } FixedAndVariableRdo;
    struct {
        UINT32 MaximumOperatingPowerIn250mW : 10;
        UINT32 OperatingPowerIn250mW : 10;
        UINT32 Reserved1 : 6;
        UINT32 CapabilityMismatch : 1;
        UINT32 GiveBackFlag : 1;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved2 : 1;
    } BatteryRdo;
} USBC_PD_REQUEST_DATA_OBJECT, *PUSBC_PD_REQUEST_DATA_OBJECT;
typedef union _USBC_PD_POWER_DATA_OBJECT
{
    UINT32 U;
    struct {
        UINT32 Reserved : 30;
        UINT32 Type : 2;
    } Common;
    struct {
        UINT32 MaximumCurrentIn10mA : 10;
        UINT32 VoltageIn50mV : 10;
        UINT32 PeakCurrent : 2;
        UINT32 Reserved1 : 3;
        UINT32 DataRoleSwap : 1;
        UINT32 UsbCommunicationCapable : 1;
        UINT32 ExternallyPowered : 1;
        UINT32 UsbSuspendSupported : 1;
        UINT32 DualRolePower : 1;
        UINT32 FixedSupply : 2;
    } FixedSupplyPdo;
    struct {
        UINT32 MaximumAllowablePowerIn250mW : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 Battery : 2;
    } BatterySupplyPdo;
    struct {
        UINT32 MaximumCurrentIn10mA : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 VariableSupportNonBattery : 2;
    } VariableSupplyNonBatteryPdo;
    struct {
        UINT32 OperationalCurrentIn10mA : 10;
        UINT32 VoltageIn50mV : 10;
        UINT32 Reserved : 5;
        UINT32 DataRoleSwap : 1;
        UINT32 UsbCommunicationCapable : 1;
        UINT32 ExternallyPowered : 1;
        UINT32 HigherCapability : 1;
        UINT32 DualRolePower : 1;
        UINT32 FixedSupply : 2;
    } FixedSupplyPdoSink;
    struct {
        UINT32 OperationalPowerIn250mW : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 Battery : 2;
    } BatterySupplyPdoSink;
    struct {
        UINT32 OperationalCurrentIn10mA : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 VariableSupportNonBattery : 2;
    } VariableSupplyNonBatteryPdoSink;
} USBC_PD_POWER_DATA_OBJECT, *PUSBC_PD_POWER_DATA_OBJECT;
C_ASSERT(sizeof(USBC_PD_POWER_DATA_OBJECT) == 4);
typedef enum _USBC_PD_POWER_DATA_OBJECT_TYPE
{
    UsbCPdPdoTypeFixedSupply = 0,
    UsbCPdPdoTypeBatterySupply = 1,
    UsbCPdPdoTypeVariableSupplyNonBattery = 2
} USBC_PD_POWER_DATA_OBJECT_TYPE;
USBC_PD_POWER_DATA_OBJECT_TYPE
FORCEINLINE
USBC_PD_POWER_DATA_OBJECT_GET_TYPE(
    _In_ PUSBC_PD_POWER_DATA_OBJECT Pdo
    )
{
    return (USBC_PD_POWER_DATA_OBJECT_TYPE)Pdo->Common.Type;
}
typedef struct _USBC_PD_ALTERNATE_MODE
{
    UINT16 SVID;
    UINT32 Mode;
} USBC_PD_ALTERNATE_MODE, *PUSBC_PD_ALTERNATE_MODE;
typedef enum _USBC_UCSI_SET_POWER_LEVEL_C_CURRENT
{
    UsbCUcsiSetPowerLevelCCurrentPpmDefault = 0,
    UsbCUcsiSetPowerLevelCCurrent3000mA = 1,
    UsbCUcsiSetPowerLevelCCurrent1500mA = 2,
    UsbCUcsiSetPowerLevelCCurrentDefaultUsb = 3
} USBC_UCSI_SET_POWER_LEVEL_C_CURRENT, *PUSBPM_UCSI_SET_POWER_LEVEL_C_CURRENT;
#pragma warning(pop)
#include <poppack.h>
