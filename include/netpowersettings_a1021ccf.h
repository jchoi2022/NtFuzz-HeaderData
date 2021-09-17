    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETPOWERSETTINGSGETWAKEPATTERNCOUNT)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetPowerSettingsGetWakePatternCount(
    _In_
    NETPOWERSETTINGS NetPowerSettings
    )
{
    return ((PFN_NETPOWERSETTINGSGETWAKEPATTERNCOUNT) NetFunctions[NetPowerSettingsGetWakePatternCountTableIndex])(NetDriverGlobals, NetPowerSettings);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
PNDIS_PM_WOL_PATTERN
(*PFN_NETPOWERSETTINGSGETWAKEPATTERN)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    ULONG Index
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
PNDIS_PM_WOL_PATTERN
NetPowerSettingsGetWakePattern(
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    ULONG Index
    )
{
    return ((PFN_NETPOWERSETTINGSGETWAKEPATTERN) NetFunctions[NetPowerSettingsGetWakePatternTableIndex])(NetDriverGlobals, NetPowerSettings, Index);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETPOWERSETTINGSISWAKEPATTERNENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    NDIS_PM_WOL_PATTERN* NdisPmWolPattern
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetPowerSettingsIsWakePatternEnabled(
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    NDIS_PM_WOL_PATTERN* NdisPmWolPattern
    )
{
    return ((PFN_NETPOWERSETTINGSISWAKEPATTERNENABLED) NetFunctions[NetPowerSettingsIsWakePatternEnabledTableIndex])(NetDriverGlobals, NetPowerSettings, NdisPmWolPattern);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETPOWERSETTINGSGETENABLEDWAKEUPFLAGS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetPowerSettingsGetEnabledWakeUpFlags(
    _In_
    NETPOWERSETTINGS NetPowerSettings
    )
{
    return ((PFN_NETPOWERSETTINGSGETENABLEDWAKEUPFLAGS) NetFunctions[NetPowerSettingsGetEnabledWakeUpFlagsTableIndex])(NetDriverGlobals, NetPowerSettings);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETPOWERSETTINGSGETENABLEDWAKEPATTERNFLAGS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetPowerSettingsGetEnabledWakePatternFlags(
    _In_
    NETPOWERSETTINGS NetPowerSettings
    )
{
    return ((PFN_NETPOWERSETTINGSGETENABLEDWAKEPATTERNFLAGS) NetFunctions[NetPowerSettingsGetEnabledWakePatternFlagsTableIndex])(NetDriverGlobals, NetPowerSettings);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETPOWERSETTINGSGETENABLEDPROTOCOLOFFLOADFLAGS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetPowerSettingsGetEnabledProtocolOffloadFlags(
    _In_
    NETPOWERSETTINGS NetPowerSettings
    )
{
    return ((PFN_NETPOWERSETTINGSGETENABLEDPROTOCOLOFFLOADFLAGS) NetFunctions[NetPowerSettingsGetEnabledProtocolOffloadFlagsTableIndex])(NetDriverGlobals, NetPowerSettings);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETPOWERSETTINGSGETENABLEDMEDIASPECIFICWAKEUPEVENTS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetPowerSettingsGetEnabledMediaSpecificWakeUpEvents(
    _In_
    NETPOWERSETTINGS NetPowerSettings
    )
{
    return ((PFN_NETPOWERSETTINGSGETENABLEDMEDIASPECIFICWAKEUPEVENTS) NetFunctions[NetPowerSettingsGetEnabledMediaSpecificWakeUpEventsTableIndex])(NetDriverGlobals, NetPowerSettings);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETPOWERSETTINGSGETPROTOCOLOFFLOADCOUNT)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetPowerSettingsGetProtocolOffloadCount(
    _In_
    NETPOWERSETTINGS NetPowerSettings
    )
{
    return ((PFN_NETPOWERSETTINGSGETPROTOCOLOFFLOADCOUNT) NetFunctions[NetPowerSettingsGetProtocolOffloadCountTableIndex])(NetDriverGlobals, NetPowerSettings);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
PNDIS_PM_PROTOCOL_OFFLOAD
(*PFN_NETPOWERSETTINGSGETPROTOCOLOFFLOAD)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    ULONG Index
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
PNDIS_PM_PROTOCOL_OFFLOAD
NetPowerSettingsGetProtocolOffload(
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    ULONG Index
    )
{
    return ((PFN_NETPOWERSETTINGSGETPROTOCOLOFFLOAD) NetFunctions[NetPowerSettingsGetProtocolOffloadTableIndex])(NetDriverGlobals, NetPowerSettings, Index);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETPOWERSETTINGSISPROTOCOLOFFLOADENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    NDIS_PM_PROTOCOL_OFFLOAD* NdisProtocolOffload
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetPowerSettingsIsProtocolOffloadEnabled(
    _In_
    NETPOWERSETTINGS NetPowerSettings,
    _In_
    NDIS_PM_PROTOCOL_OFFLOAD* NdisProtocolOffload
    )
{
    return ((PFN_NETPOWERSETTINGSISPROTOCOLOFFLOADENABLED) NetFunctions[NetPowerSettingsIsProtocolOffloadEnabledTableIndex])(NetDriverGlobals, NetPowerSettings, NdisProtocolOffload);
}
WDF_EXTERN_C_END
