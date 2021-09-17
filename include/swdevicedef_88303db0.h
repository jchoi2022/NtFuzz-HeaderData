       
typedef
[v1_enum]
enum _SW_DEVICE_CAPABILITIES
{
    SWDeviceCapabilitiesNone = 0x00000000,
    SWDeviceCapabilitiesRemovable = 0x00000001,
    SWDeviceCapabilitiesSilentInstall = 0x00000002,
    SWDeviceCapabilitiesNoDisplayInUI = 0x00000004,
    SWDeviceCapabilitiesDriverRequired = 0x00000008
} SW_DEVICE_CAPABILITIES, *PSW_DEVICE_CAPABILITIES;
typedef struct _SW_DEVICE_CREATE_INFO
{
    ULONG cbSize;
    __in PCWSTR pszInstanceId;
    __in_opt PCZZWSTR pszzHardwareIds;
    __in_opt PCZZWSTR pszzCompatibleIds;
    __in_opt const GUID *pContainerId;
    ULONG CapabilityFlags;
    __in_opt PCWSTR pszDeviceDescription;
    __in_opt PCWSTR pszDeviceLocation;
    __in_opt const SECURITY_DESCRIPTOR *pSecurityDescriptor;
} SW_DEVICE_CREATE_INFO, *PSW_DEVICE_CREATE_INFO;
typedef
[v1_enum]
enum _SW_DEVICE_LIFETIME
{
    SWDeviceLifetimeHandle,
    SWDeviceLifetimeParentPresent,
    SWDeviceLifetimeMax
} SW_DEVICE_LIFETIME, *PSW_DEVICE_LIFETIME;
