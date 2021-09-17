    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_Function_class_(EVT_NET_ADAPTER_OFFLOAD_SET_LSO)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_ADAPTER_OFFLOAD_SET_LSO(
    _In_
    NETADAPTER Adapter,
    _In_
    NETOFFLOAD Offload
);
typedef EVT_NET_ADAPTER_OFFLOAD_SET_LSO *PFN_NET_ADAPTER_OFFLOAD_SET_LSO;
typedef struct _NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES
{
    ULONG Size;
    BOOLEAN IPv4;
    BOOLEAN IPv6;
    SIZE_T MaximumOffloadSize;
    SIZE_T MinimumSegmentCount;
    PFN_NET_ADAPTER_OFFLOAD_SET_LSO
        EvtAdapterOffloadSetLso;
} NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES;
inline
void
NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES_INIT(
    _Out_ NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES * LsoCapabilities,
    _In_ BOOLEAN IPv4,
    _In_ BOOLEAN IPv6,
    _In_ SIZE_T MaximumOffloadSize,
    _In_ SIZE_T MinimumSegmentCount,
    _In_ PFN_NET_ADAPTER_OFFLOAD_SET_LSO EvtAdapterOffloadSetLso
)
{
    RtlZeroMemory(LsoCapabilities, sizeof(NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES));
    LsoCapabilities->Size = sizeof(NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES);
    LsoCapabilities->IPv4 = IPv4;
    LsoCapabilities->IPv6 = IPv6;
    LsoCapabilities->MaximumOffloadSize = MaximumOffloadSize;
    LsoCapabilities->MinimumSegmentCount = MinimumSegmentCount;
    LsoCapabilities->EvtAdapterOffloadSetLso = EvtAdapterOffloadSetLso;
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTEROFFLOADSETLSOCAPABILITIES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES* HardwareCapabilities
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterOffloadSetLsoCapabilities(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_OFFLOAD_LSO_CAPABILITIES* HardwareCapabilities
    )
{
    ((PFN_NETADAPTEROFFLOADSETLSOCAPABILITIES) NetFunctions[NetAdapterOffloadSetLsoCapabilitiesTableIndex])(NetDriverGlobals, Adapter, HardwareCapabilities);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETOFFLOADISLSOIPV4ENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETOFFLOAD Offload
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetOffloadIsLsoIPv4Enabled(
    _In_
    NETOFFLOAD Offload
    )
{
    return ((PFN_NETOFFLOADISLSOIPV4ENABLED) NetFunctions[NetOffloadIsLsoIPv4EnabledTableIndex])(NetDriverGlobals, Offload);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETOFFLOADISLSOIPV6ENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETOFFLOAD Offload
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetOffloadIsLsoIPv6Enabled(
    _In_
    NETOFFLOAD Offload
    )
{
    return ((PFN_NETOFFLOADISLSOIPV6ENABLED) NetFunctions[NetOffloadIsLsoIPv6EnabledTableIndex])(NetDriverGlobals, Offload);
}
WDF_EXTERN_C_END
