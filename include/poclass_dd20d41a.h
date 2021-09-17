#include <devpropdef.h>
#include <winapifamily.h>
DEFINE_DEVPROPKEY(PROCESSOR_NUMBER_PKEY,
                  0x5724c81d,
                  0xd5af,
                  0x4c1f,
                  0xa1, 0x03, 0xa0, 0x6e, 0x28, 0xf2, 0x04, 0xc6,
                  1);
DEFINE_GUID( GUID_DEVICE_BATTERY, 0x72631e54L, 0x78A4, 0x11d0, 0xbc, 0xf7, 0x00, 0xaa, 0x00, 0xb7, 0xb3, 0x2a );
DEFINE_GUID( GUID_DEVICE_APPLICATIONLAUNCH_BUTTON, 0x629758eel, 0x986e, 0x4d9e, 0x8e, 0x47, 0xde, 0x27, 0xf8, 0xab, 0x05, 0x4d );
DEFINE_GUID( GUID_DEVICE_SYS_BUTTON, 0x4AFA3D53L, 0x74A7, 0x11d0, 0xbe, 0x5e, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x57 );
DEFINE_GUID( GUID_DEVICE_LID, 0x4AFA3D52L, 0x74A7, 0x11d0, 0xbe, 0x5e, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x57 );
DEFINE_GUID( GUID_DEVICE_THERMAL_ZONE, 0x4AFA3D51L, 0x74A7, 0x11d0, 0xbe, 0x5e, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x57 );
DEFINE_GUID(GUID_DEVICE_FAN, 0x05ecd13dL, 0x81da, 0x4a2a, 0x8a, 0x4c, 0x52, 0x4f, 0x23, 0xdd, 0x4d, 0xc9 );
DEFINE_GUID( GUID_DEVICE_PROCESSOR, 0x97fadb10L, 0x4e33, 0x40ae, 0x35, 0x9c, 0x8b, 0xef, 0x02, 0x9d, 0xbd, 0xd0 );
DEFINE_GUID( GUID_DEVICE_MEMORY, 0x3fd0f03dL, 0x92e0, 0x45fb, 0xb7, 0x5c, 0x5e, 0xd8, 0xff, 0xb0, 0x10, 0x21 );
DEFINE_GUID( GUID_DEVICE_ACPI_TIME, 0x97f99bf6L, 0x4497, 0x4f18, 0xbb, 0x22, 0x4b, 0x9f, 0xb2, 0xfb, 0xef, 0x9c );
DEFINE_GUID( GUID_DEVICE_MESSAGE_INDICATOR, 0XCD48A365L, 0xfa94, 0x4ce2, 0xa2, 0x32, 0xa1, 0xb7, 0x64, 0xe5, 0xd8, 0xb4 );
DEFINE_GUID( GUID_CLASS_INPUT, 0x4D1E55B2L, 0xF16F, 0x11CF, 0x88, 0xCB, 0x00, 0x11, 0x11, 0x00, 0x00, 0x30 );
DEFINE_GUID(GUID_DEVINTERFACE_THERMAL_COOLING,
0xdbe4373d, 0x3c81, 0x40cb, 0xac, 0xe4, 0xe0, 0xe5, 0xd0, 0x5f, 0xc, 0x9f);
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum {
    BatteryInformation,
    BatteryGranularityInformation,
    BatteryTemperature,
    BatteryEstimatedTime,
    BatteryDeviceName,
    BatteryManufactureDate,
    BatteryManufactureName,
    BatteryUniqueID,
    BatterySerialNumber
} BATTERY_QUERY_INFORMATION_LEVEL;
typedef struct _BATTERY_QUERY_INFORMATION {
    ULONG BatteryTag;
    BATTERY_QUERY_INFORMATION_LEVEL InformationLevel;
    ULONG AtRate;
} BATTERY_QUERY_INFORMATION, *PBATTERY_QUERY_INFORMATION;
typedef struct _BATTERY_INFORMATION {
    ULONG Capabilities;
    UCHAR Technology;
    UCHAR Reserved[3];
    UCHAR Chemistry[4];
    ULONG DesignedCapacity;
    ULONG FullChargedCapacity;
    ULONG DefaultAlert1;
    ULONG DefaultAlert2;
    ULONG CriticalBias;
    ULONG CycleCount;
} BATTERY_INFORMATION, *PBATTERY_INFORMATION;
typedef enum _BATTERY_CHARGING_SOURCE_TYPE {
    BatteryChargingSourceType_AC = 1,
    BatteryChargingSourceType_USB,
    BatteryChargingSourceType_Wireless,
    BatteryChargingSourceType_Max
} BATTERY_CHARGING_SOURCE_TYPE, *PBATTERY_CHARGING_SOURCE_TYPE;
typedef struct _BATTERY_CHARGING_SOURCE {
    BATTERY_CHARGING_SOURCE_TYPE Type;
    ULONG MaxCurrent;
} BATTERY_CHARGING_SOURCE, *PBATTERY_CHARGING_SOURCE;
typedef GUID BATTERY_CHARGER_ID, *PBATTERY_CHARGER_ID;
typedef struct _BATTERY_CHARGING_SOURCE_INFORMATION {
    BATTERY_CHARGING_SOURCE_TYPE Type;
    BOOLEAN SourceOnline;
} BATTERY_CHARGING_SOURCE_INFORMATION, *PBATTERY_CHARGING_SOURCE_INFORMATION;
typedef enum _USB_CHARGER_PORT
{
    UsbChargerPort_Legacy,
    UsbChargerPort_TypeC,
    UsbChargerPort_Max
} USB_CHARGER_PORT, *PUSB_CHARGER_PORT;
typedef enum {
    BatteryCriticalBias,
    BatteryCharge,
    BatteryDischarge,
    BatteryChargingSource,
    BatteryChargerId,
    BatteryChargerStatus
} BATTERY_SET_INFORMATION_LEVEL;
typedef struct _BATTERY_SET_INFORMATION {
    ULONG BatteryTag;
    BATTERY_SET_INFORMATION_LEVEL InformationLevel;
    UCHAR Buffer[1];
} BATTERY_SET_INFORMATION, *PBATTERY_SET_INFORMATION;
typedef struct _BATTERY_CHARGER_STATUS
{
    BATTERY_CHARGING_SOURCE_TYPE Type;
    ULONG VaData[1];
} BATTERY_CHARGER_STATUS, *PBATTERY_CHARGER_STATUS;
typedef struct _BATTERY_USB_CHARGER_STATUS
{
    BATTERY_CHARGING_SOURCE_TYPE Type;
    ULONG Reserved;
    ULONG Flags;
    ULONG MaxCurrent;
    ULONG Voltage;
    USB_CHARGER_PORT PortType;
    ULONGLONG PortId;
    PVOID PowerSourceInformation;
    BATTERY_CHARGER_ID OemCharger;
} BATTERY_USB_CHARGER_STATUS, *PBATTERY_USB_CHARGER_STATUS;
typedef struct _BATTERY_WAIT_STATUS {
    ULONG BatteryTag;
    ULONG Timeout;
    ULONG PowerState;
    ULONG LowCapacity;
    ULONG HighCapacity;
} BATTERY_WAIT_STATUS, *PBATTERY_WAIT_STATUS;
typedef struct _BATTERY_STATUS {
    ULONG PowerState;
    ULONG Capacity;
    ULONG Voltage;
    LONG Rate;
} BATTERY_STATUS, *PBATTERY_STATUS;
typedef struct _BATTERY_MANUFACTURE_DATE
{
    UCHAR Day;
    UCHAR Month;
    USHORT Year;
} BATTERY_MANUFACTURE_DATE, *PBATTERY_MANUFACTURE_DATE;
        CTL_CODE(FILE_DEVICE_BATTERY, 0x10, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x11, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x12, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x13, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x14, METHOD_BUFFERED, FILE_READ_ACCESS)
typedef struct _THERMAL_INFORMATION {
    ULONG ThermalStamp;
    ULONG ThermalConstant1;
    ULONG ThermalConstant2;
    KAFFINITY Processors;
    ULONG SamplingPeriod;
    ULONG CurrentTemperature;
    ULONG PassiveTripPoint;
    ULONG CriticalTripPoint;
    UCHAR ActiveTripPointCount;
    ULONG ActiveTripPoint[MAX_ACTIVE_COOLING_LEVELS];
} THERMAL_INFORMATION, *PTHERMAL_INFORMATION;
typedef struct _THERMAL_WAIT_READ {
    ULONG Timeout;
    ULONG LowTemperature;
    ULONG HighTemperature;
} THERMAL_WAIT_READ, *PTHERMAL_WAIT_READ;
typedef struct _THERMAL_POLICY {
    ULONG Version;
    BOOLEAN WaitForUpdate;
    BOOLEAN Hibernate;
    BOOLEAN Critical;
    BOOLEAN ThermalStandby;
    ULONG ActivationReasons;
    ULONG PassiveLimit;
    ULONG ActiveLevel;
    BOOLEAN OverThrottled;
} THERMAL_POLICY, *PTHERMAL_POLICY;
        CTL_CODE(FILE_DEVICE_BATTERY, 0x20, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x21, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x22, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x23, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x24, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x25, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x30, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x40, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x50, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x51, METHOD_BUFFERED, FILE_READ_ACCESS)
typedef struct {
    ULONG PhysicalID;
    ULONG PBlkAddress;
    UCHAR PBlkLength;
} PROCESSOR_OBJECT_INFO, *PPROCESSOR_OBJECT_INFO;
typedef struct {
    ULONG PhysicalID;
    ULONG PBlkAddress;
    UCHAR PBlkLength;
    ULONG InitialApicId;
} PROCESSOR_OBJECT_INFO_EX, *PPROCESSOR_OBJECT_INFO_EX;
        CTL_CODE(FILE_DEVICE_BATTERY, 0x60, METHOD_BUFFERED, FILE_READ_ACCESS)
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma pack(push,1)
typedef struct _PCC_HEADER {
    ULONG Signature;
    USHORT HeaderLength;
    UCHAR MajorVersion;
    UCHAR MinorVersion;
    union {
        struct {
            ULONG SciDoorbell:1;
            ULONG Reserved:31;
        };
        ULONG AsULong;
    } SupportedFeatures;
    union {
        struct {
            USHORT CommandCode:8;
            USHORT ReservedZ:7;
            USHORT SciDoorbell:1;
        };
        USHORT AsUShort;
    } Command;
    union {
        struct {
            USHORT CommandComplete:1;
            USHORT SciReceived:1;
            USHORT Error:1;
            USHORT Reserved:13;
        };
        USHORT AsUShort;
    } Status;
    ULONG Latency;
    ULONG MinimumCommandInterval;
    ULONG MaximumCommandInterval;
    ULONG NominalFrequency;
    ULONG MinimumFrequency;
    ULONG MinimumUnthrottledFrequency;
} PCC_HEADER, *PPCC_HEADER;
typedef struct _PCC_INPUT_BUFFER {
    UCHAR ControlEnabled;
    union {
        struct {
            UCHAR ReservedZ[3];
        } GetAverageFrequency;
        struct {
            UCHAR DesiredFrequency;
            UCHAR ReservedZ[2];
        } SetDesiredFrequency;
    };
} PCC_INPUT_BUFFER, *PPCC_INPUT_BUFFER;
typedef union _PCC_OUTPUT_BUFFER {
    struct {
        UCHAR AverageFrequency;
        UCHAR FrequencyLimit;
        UCHAR Reserved[2];
    } GetAverageFrequency;
    struct {
        UCHAR Reserved[4];
    } SetDesiredFrequency;
} PCC_OUTPUT_BUFFER, *PPCC_OUTPUT_BUFFER;
#pragma pack(pop)
#pragma warning(pop)
_Function_class_(PROCESSOR_PCC_DOORBELL_CALLBACK)
_IRQL_requires_same_
typedef
VOID
(PROCESSOR_PCC_DOORBELL_CALLBACK)(
    _In_ ULONG Status,
    _In_ ULONG_PTR Context
    );
typedef PROCESSOR_PCC_DOORBELL_CALLBACK *PPROCESSOR_PCC_DOORBELL_CALLBACK;
_Function_class_(PROCESSOR_PCC_RING_DOORBELL)
_IRQL_requires_same_
typedef
NTSTATUS
(PROCESSOR_PCC_RING_DOORBELL)(
    _In_ UCHAR Command,
    _In_ PPROCESSOR_PCC_DOORBELL_CALLBACK Callback,
    _In_ ULONG_PTR Context
    );
typedef PROCESSOR_PCC_RING_DOORBELL *PPROCESSOR_PCC_RING_DOORBELL;
typedef struct _PROCESSOR_PCC_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPROCESSOR_PCC_RING_DOORBELL PccRingDoorbell;
    PPCC_HEADER PccHeader;
    ULONG PccHeaderLength;
} PROCESSOR_PCC_INTERFACE_STANDARD, *PPROCESSOR_PCC_INTERFACE_STANDARD;
typedef
_Function_class_(DEVICE_ACTIVE_COOLING)
VOID
DEVICE_ACTIVE_COOLING (
    _Inout_opt_ PVOID Context,
    _In_ BOOLEAN Engaged
    );
typedef DEVICE_ACTIVE_COOLING *PDEVICE_ACTIVE_COOLING;
typedef
_Function_class_(DEVICE_PASSIVE_COOLING)
VOID
DEVICE_PASSIVE_COOLING (
    _Inout_opt_ PVOID Context,
    _In_ ULONG Percentage
    );
typedef DEVICE_PASSIVE_COOLING *PDEVICE_PASSIVE_COOLING;
typedef struct _THERMAL_COOLING_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    ULONG Flags;
    PDEVICE_ACTIVE_COOLING ActiveCooling;
    PDEVICE_PASSIVE_COOLING PassiveCooling;
} THERMAL_COOLING_INTERFACE, *PTHERMAL_COOLING_INTERFACE;
typedef THERMAL_COOLING_INTERFACE THERMAL_DEVICE_INTERFACE;
typedef THERMAL_COOLING_INTERFACE *PTHERMAL_DEVICE_INTERFACE;
typedef enum _THERMAL_DEVICE_INTERFACE_FLAGS {
    ThermalDeviceFlagActiveCooling = 1,
    ThermalDeviceFlagPassiveCooling = 2
} THERMAL_DEVICE_INTERFACE_FLAGS, *PTHERMAL_DEVICE_INTERFACE_FLAGS;
        CTL_CODE(FILE_DEVICE_BATTERY, 0x70, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x80, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x81, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x82, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x83, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
typedef struct _WAKE_ALARM_INFORMATION {
    ULONG TimerIdentifier;
    ULONG Timeout;
} WAKE_ALARM_INFORMATION, *PWAKE_ALARM_INFORMATION;
        CTL_CODE(FILE_DEVICE_BATTERY, 0x84, METHOD_BUFFERED, FILE_READ_DATA)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x85, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x86, METHOD_BUFFERED, FILE_READ_DATA)
typedef struct _ACPI_REAL_TIME {
    UINT16 Year;
    UINT8 Month;
    UINT8 Day;
    UINT8 Hour;
    UINT8 Minute;
    UINT8 Second;
    UINT8 Valid;
    UINT16 Milliseconds;
    INT16 TimeZone;
    UINT8 DayLight;
    UINT8 Reserved1[3];
} ACPI_REAL_TIME, *PACPI_REAL_TIME;
#endif
#pragma endregion
