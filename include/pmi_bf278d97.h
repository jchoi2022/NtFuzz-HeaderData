DEFINE_GUID(GUID_DEVICE_POWER_METER,
            0xe849804e,
            0xc719, 0x43d8, 0xac, 0x88, 0x96, 0xb8, 0x94, 0xc1, 0x91, 0xe2);
typedef enum {
    PmiReportedCapabilities,
    PmiMeteredHardware,
    PmiCapabilitiesMax
} PMI_CAPABILITIES_TYPE;
typedef enum {
    PmiMeasurementTypeInput,
    PmiMeasurementTypeOutput,
    PmiMeasurementTypeMax
} PMI_MEASUREMENT_TYPE;
typedef enum {
    PmiMeasurementUnitMilliWatt,
    PmiMeasurementUnitMax
} PMI_MEASUREMENT_UNIT;
typedef enum {
    PmiMeasurementConfiguration,
    PmiBudgetingConfiguration,
    PmiThresholdConfiguration,
    PmiConfigurationMax
} PMI_CONFIGURATION_TYPE;
typedef enum {
    PmiCapabilitiesChangedEvent,
    PmiThresholdEvent,
    PmiConfigurationChangedEvent,
    PmiBudgetEvent,
    PmiAveragingIntervalChangedEvent,
    PmiEventMax
} PMI_EVENT_TYPE;
typedef struct _PMI_REPORTED_CAPABILITIES {
    ULONG Flags;
    PMI_MEASUREMENT_UNIT MeasurementUnit;
    PMI_MEASUREMENT_TYPE MeasurementType;
    ULONG Accuracy;
    ULONG SamplingPeriod;
    ULONG MinimumAverageInterval;
    ULONG MaximumAverageInterval;
    ULONG Hysteresis;
    BOOLEAN Writeable;
    ULONG MinBudget;
    ULONG MaxBudget;
    WCHAR ModelNumber[PMI_NAME_MAX];
    WCHAR SerialNumber[PMI_NAME_MAX];
    WCHAR OEMInformation[PMI_NAME_MAX];
} PMI_REPORTED_CAPABILITIES, *PPMI_REPORTED_CAPABILITIES;
typedef struct _PMI_METERED_HARDWARE_INFORMATION {
    ULONG MeteredHardwareCount;
    WCHAR MeteredHardware[ANYSIZE_ARRAY];
} PMI_METERED_HARDWARE_INFORMATION, *PPMI_METERED_HARDWARE_INFORMATION;
typedef struct _PMI_CAPABILITIES {
    ULONG Version;
    ULONG Size;
    PMI_CAPABILITIES_TYPE CapabilityType;
    union {
        PMI_REPORTED_CAPABILITIES ReportedCapabilities;
        PMI_METERED_HARDWARE_INFORMATION MeteredHardwareInformation;
    } Capabilities;
} PMI_CAPABILITIES, *PPMI_CAPABILITIES;
typedef struct _PMI_MEASUREMENT_CONFIGURATION {
    ULONG AveragingInterval;
} PMI_MEASUREMENT_CONFIGURATION, *PPMI_MEASUREMENT_CONFIGURATION;
typedef struct _PMI_BUDGETING_CONFIGURATION {
    ULONG ConfiguredBudget;
} PMI_BUDGETING_CONFIGURATION, *PPMI_BUDGETING_CONFIGURATION;
typedef struct _PMI_THRESHOLD_CONFIGURATION {
    ULONG LowerThreshold;
    ULONG UpperThreshold;
} PMI_THRESHOLD_CONFIGURATION, *PPMI_THRESHOLD_CONFIGURATION;
typedef struct _PMI_CONFIGURATION {
    ULONG Version;
    USHORT Size;
    PMI_CONFIGURATION_TYPE ConfigurationType;
    union {
        PMI_MEASUREMENT_CONFIGURATION MeasurementConfiguration;
        PMI_BUDGETING_CONFIGURATION BudgetingConfiguration;
        PMI_THRESHOLD_CONFIGURATION ThresholdConfiguration;
    } Configuration;
} PMI_CONFIGURATION, *PPMI_CONFIGURATION;
typedef struct _PMI_MEASUREMENT_DATA {
    ULONG Version;
    ULONG CurrentPower;
} PMI_MEASUREMENT_DATA, *PPMI_MEASUREMENT_DATA;
typedef struct _PMI_EVENT {
    ULONG Version;
    PMI_EVENT_TYPE EventType;
} PMI_EVENT, *PPMI_EVENT;
