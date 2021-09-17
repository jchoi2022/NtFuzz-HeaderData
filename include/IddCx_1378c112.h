#include <Opmapi.h>
#include <Dxgi.h>
#include <d3d11_4.h>
    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#error Include WDF.H first
#pragma warning(push)
#pragma warning(disable : 4201)
DECLARE_HANDLE(IDDCX_ADAPTER);
DECLARE_HANDLE(IDDCX_MONITOR);
DECLARE_HANDLE(IDDCX_SWAPCHAIN);
DECLARE_HANDLE(IDDCX_OPMCTX);
#pragma region Enum Declarations
enum IDDCX_FEATURE_IMPLEMENTATION : UINT
{
    IDDCX_FEATURE_IMPLEMENTATION_UNINITIALIZED = 0,
    IDDCX_FEATURE_IMPLEMENTATION_NONE = 1,
    IDDCX_FEATURE_IMPLEMENTATION_HARDWARE = 2,
    IDDCX_FEATURE_IMPLEMENTATION_SOFTWARE = 3,
};
enum IDDCX_TRANSMISSION_TYPE : UINT
{
    IDDCX_TRANSMISSION_TYPE_UNINITIALIZED = 0,
    IDDCX_TRANSMISSION_TYPE_WIRED_USB = 0x1,
    IDDCX_TRANSMISSION_TYPE_WIRED_MIRACAST = 0x2,
    IDDCX_TRANSMISSION_TYPE_WIRED_OTHER = 0x3,
    IDDCX_TRANSMISSION_TYPE_WIRELESS_MAUSB = 0x4,
    IDDCX_TRANSMISSION_TYPE_WIRELESS_USB_OTHER = 0x5,
    IDDCX_TRANSMISSION_TYPE_WIRELESS_WIFI_OTHER = 0x6,
    IDDCX_TRANSMISSION_TYPE_WIRELESS_MIRACAST = 0x7,
    IDDCX_TRANSMISSION_TYPE_WIRELESS_OTHER = 0x8,
    IDDCX_TRANSMISSION_TYPE_NETWORK_OTHER = 0x9,
    IDDCX_TRANSMISSION_TYPE_OTHER = 0xFFFFFFFF,
};
enum IDDCX_ADAPTER_FLAGS : UINT
{
    IDDCX_ADAPTER_FLAGS_NONE = 0,
    IDDCX_ADAPTER_FLAGS_USE_SMALLEST_MODE = 1,
    IDDCX_ADAPTER_FLAGS_CAN_USE_MOVE_REGIONS = 2,
    IDDCX_ADAPTER_FLAGS_REMOTE_SESSION_DRIVER = 4,
};
enum IDDCX_MONITOR_DESCRIPTION_TYPE : UINT
{
    IDDCX_MONITOR_DESCRIPTION_TYPE_UNINITIALIZED = 0,
    IDDCX_MONITOR_DESCRIPTION_TYPE_EDID = 1,
    IDDCX_MONITOR_DESCRIPTION_TYPE_DISPLAYID_AND_EDID = 2,
};
enum IDDCX_MONITOR_MODE_ORIGIN : UINT
{
    IDDCX_MONITOR_MODE_ORIGIN_UNINITIALIZED = 0,
    IDDCX_MONITOR_MODE_ORIGIN_MONITORDESCRIPTOR = 1,
    IDDCX_MONITOR_MODE_ORIGIN_DRIVER = 2,
};
enum IDDCX_UPDATE_REASON : UINT
{
    IDDCX_UPDATE_REASON_UNINITIALIZED = 0,
    IDDCX_UPDATE_REASON_POWER_CONSTRAINTS = 1,
    IDDCX_UPDATE_REASON_HOST_LINK_BANDWIDTH = 2,
    IDDCX_UPDATE_REASON_DISPLAY_LINK_BANDWIDTH = 3,
    IDDCX_UPDATE_REASON_CONFIGURATION_CONSTRAINTS = 4,
    IDDCX_UPDATE_REASON_OTHER = 5,
};
enum IDDCX_PATH_FLAGS : UINT
{
    IDDCX_PATH_FLAGS_NONE = 0,
    IDDCX_PATH_FLAGS_CHANGED = 1,
    IDDCX_PATH_FLAGS_ACTIVE = 2,
};
enum IDDCX_XOR_CURSOR_SUPPORT : UINT
{
    IDDCX_XOR_CURSOR_SUPPORT_UNINITIALIZED = 0,
    IDDCX_XOR_CURSOR_SUPPORT_NONE = 1,
    IDDCX_XOR_CURSOR_SUPPORT_FULL = 2,
    IDDCX_XOR_CURSOR_SUPPORT_EMULATION = 3,
};
enum IDDCX_CURSOR_SHAPE_TYPE : UINT
{
    IDDCX_CURSOR_SHAPE_TYPE_UNINITIALIZED = 0,
    IDDCX_CURSOR_SHAPE_TYPE_MASKED_COLOR = 1,
    IDDCX_CURSOR_SHAPE_TYPE_ALPHA = 2,
};
enum IDDCX_FRAME_STATUS : UINT
{
    IDDCX_FRAME_STATUS_UNINITIALIZED = 0,
    IDDCX_FRAME_STATUS_COMPLETED = 1,
    IDDCX_FRAME_STATUS_DROPPED = 2,
    IDDCX_FRAME_STATUS_ERROR = 3,
};
enum IDDCX_FRAME_STATISTICS_STEP_TYPE : UINT
{
    IDDCX_FRAME_STATISTICS_STEP_TYPE_UNINITIALIZED = 0,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_COLOR_CONVERT_START = 0x1,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_COLOR_CONVERT_END = 0x2,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_ENCODE_START = 0x3,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_ENCODE_END = 0x4,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_ENCRYPT_START = 0x5,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_ENCRYPT_END = 0x6,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_MUX_START = 0x7,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_MUX_END = 0x8,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_1 = 0x100,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_2 = 0x101,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_3 = 0x102,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_4 = 0x103,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_5 = 0x104,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_6 = 0x105,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_7 = 0x106,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_8 = 0x107,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_9 = 0x108,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_10 = 0x109,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_256 = 0x1FF,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_START_INTERVAL_1 = 0x200,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_END_INTERVAL_1 = 0x300,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_START_INTERVAL_2 = 0x201,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_END_INTERVAL_2 = 0x301,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_START_INTERVAL_3 = 0x202,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_END_INTERVAL_3 = 0x302,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_START_INTERVAL_256 = 0x2FF,
    IDDCX_FRAME_STATISTICS_STEP_TYPE_DRIVER_DEFINED_END_INTERVAL_256 = 0x3FF,
};
enum IDDCX_FRAME_STATISTICS_FLAGS : UINT
{
    IDDCX_FRAME_STATISTICS_FLAGS_NONE = 0,
    IDDCX_FRAME_STATISTICS_FLAGS_REDUCED_COLOR_FIDELITY = 1,
};
enum IDDCX_GAMMARAMP_TYPE : UINT
{
    IDDCX_GAMMARAMP_TYPE_UNINITIALIZED = 0,
    IDDCX_GAMMARAMP_TYPE_DEFAULT = 1,
    IDDCX_GAMMARAMP_TYPE_RGB256x3x16 = 2,
};
#pragma endregion
typedef VOID (*PFN_IDD_CX)(VOID);
extern PFN_IDD_CX IddFunctions[];
typedef struct IDD_DRIVER_GLOBALS IDD_DRIVER_GLOBALS, *PIDD_DRIVER_GLOBALS;
#include "IddCxFuncEnum.h"
#pragma region Forward Declarations
struct IDD_CX_CLIENT_CONFIG;
struct IDDCX_ENDPOINT_VERSION;
struct IDDCX_ENDPOINT_DIAGNOSTIC_INFO;
struct IDDCX_ADAPTER_CAPS;
struct IDARG_IN_ADAPTER_INIT_FINISHED;
struct IDARG_IN_ADAPTER_INIT;
struct IDARG_OUT_ADAPTER_INIT;
struct IDDCX_MONITOR_DESCRIPTION;
struct IDDCX_MONITOR_INFO;
struct IDARG_IN_MONITORCREATE;
struct IDARG_OUT_MONITORCREATE;
struct IDARG_OUT_MONITORARRIVAL;
struct IDDCX_MONITOR_MODE;
struct IDARG_IN_PARSEMONITORDESCRIPTION;
struct IDARG_OUT_PARSEMONITORDESCRIPTION;
struct IDARG_IN_GETDEFAULTDESCRIPTIONMODES;
struct IDARG_OUT_GETDEFAULTDESCRIPTIONMODES;
struct IDDCX_TARGET_MODE;
struct IDARG_IN_QUERYTARGETMODES;
struct IDARG_OUT_QUERYTARGETMODES;
struct IDARG_IN_UPDATEMODES;
struct IDARG_IN_MAXDISPLAYPIPELINERATE;
struct IDDCX_PATH;
struct IDARG_IN_COMMITMODES;
struct IDDCX_CURSOR_CAPS;
struct IDARG_IN_SETUP_HWCURSOR;
struct IDDCX_CURSOR_SHAPE_INFO;
struct IDARG_IN_QUERY_HWCURSOR;
struct IDARG_OUT_QUERY_HWCURSOR;
struct IDARG_IN_SETSWAPCHAIN;
struct IDDCX_METADATA;
struct IDARG_IN_SWAPCHAINSETDEVICE;
struct IDARG_OUT_RELEASEANDACQUIREBUFFER;
struct IDARG_IN_GETDIRTYRECTS;
struct IDARG_OUT_GETDIRTYRECTS;
struct IDDCX_MOVEREGION;
struct IDARG_IN_GETMOVEREGIONS;
struct IDARG_OUT_GETMOVEREGIONS;
struct IDDCX_FRAME_STATISTICS_STEP;
struct IDDCX_FRAME_STATISTICS;
struct IDARG_IN_REPORTFRAMESTATISTICS;
struct IDARG_IN_I2C_TRANSMIT;
struct IDARG_IN_SET_GAMMARAMP;
struct IDARG_IN_I2C_RECEIVE;
struct IDARG_IN_OPM_GET_CERTIFICATE_SIZE;
struct IDARG_OUT_OPM_GET_CERTIFICATE_SIZE;
struct IDARG_IN_OPM_GET_CERTIFICATE;
struct IDARG_IN_OPM_CREATE_PROTECTED_OUTPUT;
struct IDDCX_OPM_GET_RANDOM_NUMBER;
struct IDARG_OUT_OPM_GET_RANDOM_NUMBER;
struct IDDCX_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS;
struct IDARG_IN_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS;
struct IDARG_IN_OPM_GET_INFOMATION;
struct IDDCX_OPM_GET_INFO_PARAMETERS;
struct IDDCX_OPM_REQUESTED_INFORMATION;
struct IDARG_OUT_OPM_GET_INFOMATION;
struct IDDCX_OPM_CONFIGURE_PARAMETERS;
struct IDARG_IN_OPM_CONFIGURE_PROTECTED_OUTPUT;
struct IDARG_OUT_GETVERSION;
struct IDARG_IN_REPORTCRITICALERROR;
struct IDARG_IN_SETSRMLIST;
struct IDARG_IN_GETSRMLISTVERSION;
struct IDARG_OUT_GETSRMLISTVERSION;
struct IDARG_IN_ADAPTERSETRENDERADAPTER;
struct IDDCX_DISPLAYCONFIGPATH;
struct IDARG_IN_ADAPTERDISPLAYCONFIGUPDATE;
struct IDARG_OUT_MONITORGETPHYSICALSIZE;
#pragma endregion
#pragma region Driver Callback Definitions
#pragma region Device Callbacks
typedef
_Function_class_(EVT_IDD_CX_DEVICE_IO_CONTROL)
_IRQL_requires_same_
VOID
EVT_IDD_CX_DEVICE_IO_CONTROL(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request,
    _In_
    size_t OutputBufferLength,
    _In_
    size_t InputBufferLength,
    _In_
    ULONG IoControlCode
    );
typedef EVT_IDD_CX_DEVICE_IO_CONTROL *PFN_IDD_CX_DEVICE_IO_CONTROL;
typedef
_Function_class_(EVT_IDD_CX_PARSE_MONITOR_DESCRIPTION)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_PARSE_MONITOR_DESCRIPTION(
    _In_
    const IDARG_IN_PARSEMONITORDESCRIPTION* pInArgs,
    _Out_
    IDARG_OUT_PARSEMONITORDESCRIPTION* pOutArgs
    );
typedef EVT_IDD_CX_PARSE_MONITOR_DESCRIPTION *PFN_IDD_CX_PARSE_MONITOR_DESCRIPTION;
#pragma endregion
#pragma region Adapter Callbacks
typedef
_Function_class_(EVT_IDD_CX_ADAPTER_INIT_FINISHED)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_ADAPTER_INIT_FINISHED(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    const IDARG_IN_ADAPTER_INIT_FINISHED* pInArgs
    );
typedef EVT_IDD_CX_ADAPTER_INIT_FINISHED *PFN_IDD_CX_ADAPTER_INIT_FINISHED;
typedef
_Function_class_(EVT_IDD_CX_ADAPTER_COMMIT_MODES)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_ADAPTER_COMMIT_MODES(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    const IDARG_IN_COMMITMODES* pInArgs
    );
typedef EVT_IDD_CX_ADAPTER_COMMIT_MODES *PFN_IDD_CX_ADAPTER_COMMIT_MODES;
#pragma endregion
#pragma region Monitor Callbacks
typedef
_Function_class_(EVT_IDD_CX_MONITOR_GET_DEFAULT_DESCRIPTION_MODES)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_GET_DEFAULT_DESCRIPTION_MODES(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    const IDARG_IN_GETDEFAULTDESCRIPTIONMODES* pInArgs,
    _Out_
    IDARG_OUT_GETDEFAULTDESCRIPTIONMODES* pOutArgs
    );
typedef EVT_IDD_CX_MONITOR_GET_DEFAULT_DESCRIPTION_MODES *PFN_IDD_CX_MONITOR_GET_DEFAULT_DESCRIPTION_MODES;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_QUERY_TARGET_MODES)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_QUERY_TARGET_MODES(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    const IDARG_IN_QUERYTARGETMODES* pInArgs,
    _Out_
    IDARG_OUT_QUERYTARGETMODES* pOutArgs
    );
typedef EVT_IDD_CX_MONITOR_QUERY_TARGET_MODES *PFN_IDD_CX_MONITOR_QUERY_TARGET_MODES;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_ASSIGN_SWAPCHAIN)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_ASSIGN_SWAPCHAIN(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    const IDARG_IN_SETSWAPCHAIN* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_ASSIGN_SWAPCHAIN *PFN_IDD_CX_MONITOR_ASSIGN_SWAPCHAIN;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_UNASSIGN_SWAPCHAIN)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_UNASSIGN_SWAPCHAIN(
    _In_
    IDDCX_MONITOR MonitorObject
    );
typedef EVT_IDD_CX_MONITOR_UNASSIGN_SWAPCHAIN *PFN_IDD_CX_MONITOR_UNASSIGN_SWAPCHAIN;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_I2C_TRANSMIT)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_I2C_TRANSMIT(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    const IDARG_IN_I2C_TRANSMIT* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_I2C_TRANSMIT *PFN_IDD_CX_MONITOR_I2C_TRANSMIT;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_I2C_RECEIVE)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_I2C_RECEIVE(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    const IDARG_IN_I2C_RECEIVE* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_I2C_RECEIVE *PFN_IDD_CX_MONITOR_I2C_RECEIVE;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_SET_GAMMA_RAMP)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_SET_GAMMA_RAMP(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    const IDARG_IN_SET_GAMMARAMP* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_SET_GAMMA_RAMP *PFN_IDD_CX_MONITOR_SET_GAMMA_RAMP;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_GET_CERTIFICATE_SIZE)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_GET_CERTIFICATE_SIZE(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    const IDARG_IN_OPM_GET_CERTIFICATE_SIZE* pInArgs,
    _Out_
    IDARG_OUT_OPM_GET_CERTIFICATE_SIZE* pOutArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_GET_CERTIFICATE_SIZE *PFN_IDD_CX_MONITOR_OPM_GET_CERTIFICATE_SIZE;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_GET_CERTIFICATE)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_GET_CERTIFICATE(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    const IDARG_IN_OPM_GET_CERTIFICATE* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_GET_CERTIFICATE *PFN_IDD_CX_MONITOR_OPM_GET_CERTIFICATE;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_CREATE_PROTECTED_OUTPUT)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_CREATE_PROTECTED_OUTPUT(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    IDDCX_OPMCTX OpmCxtObject,
    _In_
    const IDARG_IN_OPM_CREATE_PROTECTED_OUTPUT* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_CREATE_PROTECTED_OUTPUT *PFN_IDD_CX_MONITOR_OPM_CREATE_PROTECTED_OUTPUT;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_GET_RANDOM_NUMBER)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_GET_RANDOM_NUMBER(
    _In_
    IDDCX_OPMCTX OpmCxtObject,
    _Out_
    IDARG_OUT_OPM_GET_RANDOM_NUMBER* pOutArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_GET_RANDOM_NUMBER *PFN_IDD_CX_MONITOR_OPM_GET_RANDOM_NUMBER;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS(
    _In_
    IDDCX_OPMCTX OpmCxtObject,
    _In_
    const IDARG_IN_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS *PFN_IDD_CX_MONITOR_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_GET_INFOMATION)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_GET_INFOMATION(
    _In_
    IDDCX_OPMCTX OpmCxtObject,
    _In_
    const IDARG_IN_OPM_GET_INFOMATION* pInArgs,
    _Out_
    IDARG_OUT_OPM_GET_INFOMATION* pOutArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_GET_INFOMATION *PFN_IDD_CX_MONITOR_OPM_GET_INFOMATION;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_CONFIGURE_PROTECTED_OUTPUT)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_CONFIGURE_PROTECTED_OUTPUT(
    _In_
    IDDCX_OPMCTX OpmCxtObject,
    _In_
    const IDARG_IN_OPM_CONFIGURE_PROTECTED_OUTPUT* pInArgs
    );
typedef EVT_IDD_CX_MONITOR_OPM_CONFIGURE_PROTECTED_OUTPUT *PFN_IDD_CX_MONITOR_OPM_CONFIGURE_PROTECTED_OUTPUT;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_OPM_DESTROY_PROTECTED_OUTPUT)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_OPM_DESTROY_PROTECTED_OUTPUT(
    _In_
    IDDCX_OPMCTX OpmCxtObject
    );
typedef EVT_IDD_CX_MONITOR_OPM_DESTROY_PROTECTED_OUTPUT *PFN_IDD_CX_MONITOR_OPM_DESTROY_PROTECTED_OUTPUT;
typedef
_Function_class_(EVT_IDD_CX_MONITOR_GET_PHYSICAL_SIZE)
_IRQL_requires_same_
NTSTATUS
EVT_IDD_CX_MONITOR_GET_PHYSICAL_SIZE(
    _In_
    IDDCX_MONITOR MonitorObject,
    _Out_
    IDARG_OUT_MONITORGETPHYSICALSIZE* pOutArgs
    );
typedef EVT_IDD_CX_MONITOR_GET_PHYSICAL_SIZE *PFN_IDD_CX_MONITOR_GET_PHYSICAL_SIZE;
#pragma endregion
#pragma endregion
#pragma region Structure Definitions
typedef struct IDD_DRIVER_GLOBALS
{
    ULONG Reserved;
} IDD_DRIVER_GLOBALS, *PIDD_DRIVER_GLOBALS;
struct IDD_CX_CLIENT_CONFIG
{
    ULONG Size;
    PFN_IDD_CX_DEVICE_IO_CONTROL EvtIddCxDeviceIoControl;
    PFN_IDD_CX_PARSE_MONITOR_DESCRIPTION EvtIddCxParseMonitorDescription;
    PFN_IDD_CX_ADAPTER_INIT_FINISHED EvtIddCxAdapterInitFinished;
    PFN_IDD_CX_ADAPTER_COMMIT_MODES EvtIddCxAdapterCommitModes;
    PFN_IDD_CX_MONITOR_GET_DEFAULT_DESCRIPTION_MODES EvtIddCxMonitorGetDefaultDescriptionModes;
    PFN_IDD_CX_MONITOR_QUERY_TARGET_MODES EvtIddCxMonitorQueryTargetModes;
    PFN_IDD_CX_MONITOR_ASSIGN_SWAPCHAIN EvtIddCxMonitorAssignSwapChain;
    PFN_IDD_CX_MONITOR_UNASSIGN_SWAPCHAIN EvtIddCxMonitorUnassignSwapChain;
    PFN_IDD_CX_MONITOR_I2C_TRANSMIT EvtIddCxMonitorI2CTransmit;
    PFN_IDD_CX_MONITOR_I2C_RECEIVE EvtIddCxMonitorI2CReceive;
    PFN_IDD_CX_MONITOR_SET_GAMMA_RAMP EvtIddCxMonitorSetGammaRamp;
    PFN_IDD_CX_MONITOR_OPM_GET_CERTIFICATE_SIZE EvtIddCxMonitorOPMGetCertificateSize;
    PFN_IDD_CX_MONITOR_OPM_GET_CERTIFICATE EvtIddCxMonitorOPMGetCertificate;
    PFN_IDD_CX_MONITOR_OPM_CREATE_PROTECTED_OUTPUT EvtIddCxMonitorOPMCreateProtectedOutput;
    PFN_IDD_CX_MONITOR_OPM_GET_RANDOM_NUMBER EvtIddCxMonitorOPMGetRandomNumber;
    PFN_IDD_CX_MONITOR_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS EvtIddCxMonitorOPMSetSigningKeyAndSequenceNumbers;
    PFN_IDD_CX_MONITOR_OPM_GET_INFOMATION EvtIddCxMonitorOPMGetInformation;
    PFN_IDD_CX_MONITOR_OPM_CONFIGURE_PROTECTED_OUTPUT EvtIddCxMonitorOPMConfigureProtectedOutput;
    PFN_IDD_CX_MONITOR_OPM_DESTROY_PROTECTED_OUTPUT EvtIddCxMonitorOPMDestroyProtectedOutput;
    PFN_IDD_CX_MONITOR_GET_PHYSICAL_SIZE EvtIddCxMonitorGetPhysicalSize;
};
struct IDDCX_ENDPOINT_VERSION
{
    UINT Size;
    UINT MajorVer;
    UINT MinorVer;
    UINT Build;
    UINT64 SKU;
};
struct IDDCX_ENDPOINT_DIAGNOSTIC_INFO
{
    UINT Size;
    IDDCX_TRANSMISSION_TYPE TransmissionType;
    PCWSTR pEndPointFriendlyName;
    PCWSTR pEndPointModelName;
    PCWSTR pEndPointManufacturerName;
    IDDCX_ENDPOINT_VERSION* pHardwareVersion;
    IDDCX_ENDPOINT_VERSION* pFirmwareVersion;
    IDDCX_FEATURE_IMPLEMENTATION GammaSupport;
};
struct IDDCX_ADAPTER_CAPS
{
    UINT Size;
    IDDCX_ADAPTER_FLAGS Flags;
    UINT64 MaxDisplayPipelineRate;
    UINT MaxMonitorsSupported;
    IDDCX_ENDPOINT_DIAGNOSTIC_INFO EndPointDiagnostics;
    UINT StaticDesktopReencodeFrameCount;
};
struct IDARG_IN_ADAPTER_INIT
{
    WDFDEVICE WdfDevice;
    IDDCX_ADAPTER_CAPS* pCaps;
    PWDF_OBJECT_ATTRIBUTES ObjectAttributes;
};
struct IDARG_OUT_ADAPTER_INIT
{
    IDDCX_ADAPTER AdapterObject;
};
struct IDARG_IN_ADAPTER_INIT_FINISHED
{
    NTSTATUS AdapterInitStatus;
};
struct IDDCX_MONITOR_DESCRIPTION
{
    UINT Size;
    IDDCX_MONITOR_DESCRIPTION_TYPE Type;
    UINT DataSize;
    _Field_size_full_(DataSize) PVOID pData;
};
struct IDDCX_MONITOR_INFO
{
    UINT Size;
    DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY MonitorType;
    UINT ConnectorIndex;
    IDDCX_MONITOR_DESCRIPTION MonitorDescription;
    GUID MonitorContainerId;
};
struct IDARG_IN_MONITORCREATE
{
    PWDF_OBJECT_ATTRIBUTES ObjectAttributes;
    IDDCX_MONITOR_INFO* pMonitorInfo;
};
struct IDARG_OUT_MONITORCREATE
{
    IDDCX_MONITOR MonitorObject;
};
struct IDARG_OUT_MONITORARRIVAL
{
    LUID OsAdapterLuid;
    UINT OsTargetId;
};
struct IDDCX_MONITOR_MODE
{
    UINT Size;
    IDDCX_MONITOR_MODE_ORIGIN Origin;
    DISPLAYCONFIG_VIDEO_SIGNAL_INFO MonitorVideoSignalInfo;
};
struct IDARG_IN_PARSEMONITORDESCRIPTION
{
    IDDCX_MONITOR_DESCRIPTION MonitorDescription;
    UINT MonitorModeBufferInputCount;
    _Field_size_opt_(MonitorModeBufferInputCount) IDDCX_MONITOR_MODE* pMonitorModes;
};
struct IDARG_OUT_PARSEMONITORDESCRIPTION
{
    UINT MonitorModeBufferOutputCount;
    UINT PreferredMonitorModeIdx;
};
struct IDARG_IN_GETDEFAULTDESCRIPTIONMODES
{
    UINT DefaultMonitorModeBufferInputCount;
    _Field_size_opt_(DefaultMonitorModeBufferInputCount) IDDCX_MONITOR_MODE* pDefaultMonitorModes;
};
struct IDARG_OUT_GETDEFAULTDESCRIPTIONMODES
{
    UINT DefaultMonitorModeBufferOutputCount;
    UINT PreferredMonitorModeIdx;
};
struct IDDCX_TARGET_MODE
{
    UINT Size;
    DISPLAYCONFIG_TARGET_MODE TargetVideoSignalInfo;
    UINT64 RequiredBandwidth;
};
struct IDARG_IN_QUERYTARGETMODES
{
    IDDCX_MONITOR_DESCRIPTION MonitorDescription;
    UINT TargetModeBufferInputCount;
    _Field_size_(TargetModeBufferInputCount) IDDCX_TARGET_MODE* pTargetModes;
};
struct IDARG_OUT_QUERYTARGETMODES
{
    UINT TargetModeBufferOutputCount;
};
struct IDARG_IN_UPDATEMODES
{
    IDDCX_UPDATE_REASON Reason;
    UINT TargetModeCount;
    _Field_size_(TargetModeCount) IDDCX_TARGET_MODE* pTargetModes;
};
struct IDARG_IN_MAXDISPLAYPIPELINERATE
{
    IDDCX_UPDATE_REASON Reason;
    UINT64 MaxDisplayPipelineRate;
};
struct IDDCX_PATH
{
    UINT Size;
    IDDCX_MONITOR MonitorObject;
    IDDCX_PATH_FLAGS Flags;
    DISPLAYCONFIG_VIDEO_SIGNAL_INFO TargetVideoSignalInfo;
};
struct IDARG_IN_COMMITMODES
{
    UINT PathCount;
    _Field_size_(PathCount) IDDCX_PATH* pPaths;
};
struct IDDCX_CURSOR_CAPS
{
    UINT Size;
    IDDCX_XOR_CURSOR_SUPPORT ColorXorCursorSupport;
    BOOL AlphaCursorSupport;
    UINT MaxX;
    UINT MaxY;
};
struct IDARG_IN_SETUP_HWCURSOR
{
    IDDCX_CURSOR_CAPS CursorInfo;
    HANDLE hNewCursorDataAvailable;
};
struct IDDCX_CURSOR_SHAPE_INFO
{
    UINT Size;
    UINT ShapeId;
    IDDCX_CURSOR_SHAPE_TYPE CursorType;
    UINT Width;
    UINT Height;
    UINT Pitch;
    UINT XHot;
    UINT YHot;
};
struct IDARG_IN_QUERY_HWCURSOR
{
    DWORD LastShapeId;
    UINT ShapeBufferSizeInBytes;
    _Field_size_bytes_(ShapeBufferSizeInBytes) PBYTE pShapeBuffer;
};
struct IDARG_OUT_QUERY_HWCURSOR
{
    BOOL IsCursorVisible;
    INT X;
    INT Y;
    BOOL IsCursorShapeUpdated;
    IDDCX_CURSOR_SHAPE_INFO CursorShapeInfo;
};
struct IDARG_IN_SETSWAPCHAIN
{
    IDDCX_SWAPCHAIN hSwapChain;
    HANDLE hNextSurfaceAvailable;
    LUID RenderAdapterLuid;
};
struct IDDCX_METADATA
{
    UINT Size;
    UINT PresentationFrameNumber;
    UINT DirtyRectCount;
    UINT MoveRegionCount;
    BOOL HwProtectedSurface;
    UINT64 PresentDisplayQPCTime;
    IDXGIResource* pSurface;
};
struct IDARG_IN_SWAPCHAINSETDEVICE
{
    IDXGIDevice* pDevice;
};
struct IDARG_OUT_RELEASEANDACQUIREBUFFER
{
    IDDCX_METADATA MetaData;
};
struct IDARG_IN_GETDIRTYRECTS
{
    UINT DirtyRectInCount;
    _Field_size_full_(DirtyRectInCount) RECT* pDirtyRects;
};
struct IDARG_OUT_GETDIRTYRECTS
{
    UINT DirtyRectOutCount;
};
struct IDDCX_MOVEREGION
{
    UINT Size;
    POINT SourcePoint;
    RECT DestRect;
};
struct IDARG_IN_GETMOVEREGIONS
{
    UINT MoveRegionInCount;
    _Field_size_full_(MoveRegionInCount) IDDCX_MOVEREGION* pMoveRegions;
};
struct IDARG_OUT_GETMOVEREGIONS
{
    UINT MoveRegionOutCount;
};
struct IDDCX_FRAME_STATISTICS_STEP
{
    UINT Size;
    IDDCX_FRAME_STATISTICS_STEP_TYPE Type;
    UINT64 QpcTime;
    UINT32 Data[2];
};
struct IDDCX_FRAME_STATISTICS
{
    UINT Size;
    UINT PresentationFrameNumber;
    IDDCX_FRAME_STATUS FrameStatus;
    UINT ReEncodeNumber;
    UINT FrameSliceTotal;
    UINT CurrentSlice;
    UINT64 FrameAcquireQpcTime;
    UINT FrameProcessingStepsCount;
    _Field_size_(FrameProcessingStepsCount) IDDCX_FRAME_STATISTICS_STEP* pFrameProcessingStep;
    UINT64 SendStartQpcTime;
    UINT64 SendStopQpcTime;
    UINT64 SendCompleteQpcTime;
    IDDCX_FRAME_STATISTICS_FLAGS Flags;
    UINT ProcessedPixelCount;
    UINT FrameSizeInBytes;
};
struct IDARG_IN_REPORTFRAMESTATISTICS
{
    IDDCX_FRAME_STATISTICS FrameStatistics;
};
struct IDARG_IN_I2C_TRANSMIT
{
    UINT SevenBitI2CAddress;
    UINT DataSizeInBytes;
    _Field_size_full_(DataSizeInBytes) PVOID pData;
};
struct IDARG_IN_SET_GAMMARAMP
{
    IDDCX_GAMMARAMP_TYPE Type;
    UINT GammaRampSizeInBytes;
    _Field_size_bytes_opt_(GammaRampSizeInBytes) PVOID pGammaRampData;
};
struct IDARG_IN_I2C_RECEIVE
{
    UINT SevenBitI2CAddress;
    UINT Flags;
    UINT DataSizeInBytes;
    _Field_size_full_(DataSizeInBytes) PVOID pData;
};
struct IDARG_IN_OPM_GET_CERTIFICATE_SIZE
{
    OPM_VIDEO_OUTPUT_SEMANTICS CertificateType;
};
struct IDARG_OUT_OPM_GET_CERTIFICATE_SIZE
{
    UINT CertificateSize;
};
struct IDARG_IN_OPM_GET_CERTIFICATE
{
    OPM_VIDEO_OUTPUT_SEMANTICS CertificateType;
    UINT CertificateBufferSizeInBytes;
    _Field_size_full_(CertificateBufferSizeInBytes) PVOID pCertificate;
};
struct IDARG_IN_OPM_CREATE_PROTECTED_OUTPUT
{
    OPM_VIDEO_OUTPUT_SEMANTICS VideoOutputSemantics;
};
struct IDDCX_OPM_GET_RANDOM_NUMBER
{
    UINT Size;
    OPM_RANDOM_NUMBER RandomNumber;
};
struct IDARG_OUT_OPM_GET_RANDOM_NUMBER
{
    IDDCX_OPM_GET_RANDOM_NUMBER RandomNumber;
};
struct IDDCX_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS
{
    UINT Size;
    OPM_ENCRYPTED_INITIALIZATION_PARAMETERS EncryptedParameters;
};
struct IDARG_IN_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS
{
    IDDCX_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS EncryptedParameters;
};
struct IDDCX_OPM_GET_INFO_PARAMETERS
{
    UINT Size;
    OPM_GET_INFO_PARAMETERS GetInfoParameters;
};
struct IDARG_IN_OPM_GET_INFOMATION
{
    IDDCX_OPM_GET_INFO_PARAMETERS GetInfoParameters;
};
struct IDDCX_OPM_REQUESTED_INFORMATION
{
    UINT Size;
    OPM_REQUESTED_INFORMATION RequestedInformation;
};
struct IDARG_OUT_OPM_GET_INFOMATION
{
    IDDCX_OPM_REQUESTED_INFORMATION RequestedInformation;
};
struct IDDCX_OPM_CONFIGURE_PARAMETERS
{
    UINT Size;
    OPM_CONFIGURE_PARAMETERS ConfigParameters;
};
struct IDARG_IN_OPM_CONFIGURE_PROTECTED_OUTPUT
{
    IDDCX_OPM_CONFIGURE_PARAMETERS ConfigParameters;
    UINT AdditionalParametersSizeInBytes;
    _Field_size_full_(AdditionalParametersSizeInBytes) PVOID pAdditionalParameters;
};
struct IDARG_OUT_GETVERSION
{
    ULONG IddCxVersion;
};
struct IDARG_IN_REPORTCRITICALERROR
{
    ULONG MajorErrorCode;
    ULONG MinorErrorCode;
};
struct IDARG_IN_SETSRMLIST
{
    UINT SrmListSizeInBytes;
    _Field_size_full_(SrmListSizeInBytes) PVOID pSrmList;
};
struct IDARG_IN_GETSRMLISTVERSION
{
    UINT SrmListVersionBufferInputCount;
    _Field_size_opt_(SrmListVersionBufferInputCount) PVOID pSrmListVerion;
};
struct IDARG_OUT_GETSRMLISTVERSION
{
    UINT SrmListVersionBufferOutputCount;
};
struct IDARG_IN_ADAPTERSETRENDERADAPTER
{
    LUID PreferredRenderAdapter;
};
struct IDDCX_DISPLAYCONFIGPATH
{
    UINT Size;
    IDDCX_MONITOR MonitorObject;
    POINT Position;
    DISPLAYCONFIG_2DREGION Resolution;
    DISPLAYCONFIG_ROTATION Rotation;
    DISPLAYCONFIG_RATIONAL RefreshRate;
    UINT VSyncFreqDivider;
    UINT MonitorScaleFactor;
    UINT PhysicalWidthOverride;
    UINT PhysicalHeightOverride;
};
struct IDARG_IN_ADAPTERDISPLAYCONFIGUPDATE
{
    UINT PathCount;
    _Field_size_(PathCount) IDDCX_DISPLAYCONFIGPATH* pPaths;
};
struct IDARG_OUT_MONITORGETPHYSICALSIZE
{
    UINT PhysicalWidth;
    UINT PhysicalHeight;
};
#pragma endregion
#pragma region Structure Initialization
VOID
FORCEINLINE
IDD_CX_CLIENT_CONFIG_INIT(
    _Out_ IDD_CX_CLIENT_CONFIG* Config
    )
{
    RtlZeroMemory(Config, sizeof(IDD_CX_CLIENT_CONFIG));
    Config->Size = IDD_STRUCTURE_SIZE(IDD_CX_CLIENT_CONFIG);
}
#pragma endregion
#pragma region Indirect Display APIs
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXDEVICEINITCONFIG)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    CONST IDD_CX_CLIENT_CONFIG* Config
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxDeviceInitConfig(
    _Inout_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    CONST IDD_CX_CLIENT_CONFIG* Config
    )
{
    return ((PFN_IDDCXDEVICEINITCONFIG) IddFunctions[IddCxDeviceInitConfigTableIndex])(IddDriverGlobals, DeviceInit, Config);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXDEVICEINITIALIZE)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxDeviceInitialize(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_IDDCXDEVICEINITIALIZE) IddFunctions[IddCxDeviceInitializeTableIndex])(IddDriverGlobals, Device);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXADAPTERINITASYNC)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    CONST IDARG_IN_ADAPTER_INIT* pInArgs,
    _Out_
    IDARG_OUT_ADAPTER_INIT* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxAdapterInitAsync(
    _In_
    CONST IDARG_IN_ADAPTER_INIT* pInArgs,
    _Out_
    IDARG_OUT_ADAPTER_INIT* pOutArgs
    )
{
    return ((PFN_IDDCXADAPTERINITASYNC) IddFunctions[IddCxAdapterInitAsyncTableIndex])(IddDriverGlobals, pInArgs, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORCREATE)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_MONITORCREATE* pInArgs,
    _Out_
    IDARG_OUT_MONITORCREATE* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorCreate(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_MONITORCREATE* pInArgs,
    _Out_
    IDARG_OUT_MONITORCREATE* pOutArgs
    )
{
    return ((PFN_IDDCXMONITORCREATE) IddFunctions[IddCxMonitorCreateTableIndex])(IddDriverGlobals, AdapterObject, pInArgs, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORARRIVAL)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR AdapterObject,
    _Out_
    IDARG_OUT_MONITORARRIVAL* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorArrival(
    _In_
    IDDCX_MONITOR AdapterObject,
    _Out_
    IDARG_OUT_MONITORARRIVAL* pOutArgs
    )
{
    return ((PFN_IDDCXMONITORARRIVAL) IddFunctions[IddCxMonitorArrivalTableIndex])(IddDriverGlobals, AdapterObject, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORDEPARTURE)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR MonitorObject
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorDeparture(
    _In_
    IDDCX_MONITOR MonitorObject
    )
{
    return ((PFN_IDDCXMONITORDEPARTURE) IddFunctions[IddCxMonitorDepartureTableIndex])(IddDriverGlobals, MonitorObject);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORUPDATEMODES)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_UPDATEMODES* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorUpdateModes(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_UPDATEMODES* pInArgs
    )
{
    return ((PFN_IDDCXMONITORUPDATEMODES) IddFunctions[IddCxMonitorUpdateModesTableIndex])(IddDriverGlobals, MonitorObject, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXADAPTERUPDATEMAXDISPLAYPIPELINERATE)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_ADAPTER hOsAdapterContext,
    _In_
    CONST IDARG_IN_MAXDISPLAYPIPELINERATE* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxAdapterUpdateMaxDisplayPipelineRate(
    _In_
    IDDCX_ADAPTER hOsAdapterContext,
    _In_
    CONST IDARG_IN_MAXDISPLAYPIPELINERATE* pInArgs
    )
{
    return ((PFN_IDDCXADAPTERUPDATEMAXDISPLAYPIPELINERATE) IddFunctions[IddCxAdapterUpdateMaxDisplayPipelineRateTableIndex])(IddDriverGlobals, hOsAdapterContext, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORSETUPHARDWARECURSOR)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_SETUP_HWCURSOR* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorSetupHardwareCursor(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_SETUP_HWCURSOR* pInArgs
    )
{
    return ((PFN_IDDCXMONITORSETUPHARDWARECURSOR) IddFunctions[IddCxMonitorSetupHardwareCursorTableIndex])(IddDriverGlobals, MonitorObject, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORQUERYHARDWARECURSOR)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_QUERY_HWCURSOR* pInArgs,
    _Out_
    IDARG_OUT_QUERY_HWCURSOR* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorQueryHardwareCursor(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_QUERY_HWCURSOR* pInArgs,
    _Out_
    IDARG_OUT_QUERY_HWCURSOR* pOutArgs
    )
{
    return ((PFN_IDDCXMONITORQUERYHARDWARECURSOR) IddFunctions[IddCxMonitorQueryHardwareCursorTableIndex])(IddDriverGlobals, MonitorObject, pInArgs, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
HRESULT
(*PFN_IDDCXSWAPCHAINSETDEVICE)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_SWAPCHAINSETDEVICE* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
HRESULT
IddCxSwapChainSetDevice(
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_SWAPCHAINSETDEVICE* pInArgs
    )
{
    return ((PFN_IDDCXSWAPCHAINSETDEVICE) IddFunctions[IddCxSwapChainSetDeviceTableIndex])(IddDriverGlobals, SwapChainObject, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
HRESULT
(*PFN_IDDCXSWAPCHAINRELEASEANDACQUIREBUFFER)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _Out_
    IDARG_OUT_RELEASEANDACQUIREBUFFER* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
HRESULT
IddCxSwapChainReleaseAndAcquireBuffer(
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _Out_
    IDARG_OUT_RELEASEANDACQUIREBUFFER* pOutArgs
    )
{
    return ((PFN_IDDCXSWAPCHAINRELEASEANDACQUIREBUFFER) IddFunctions[IddCxSwapChainReleaseAndAcquireBufferTableIndex])(IddDriverGlobals, SwapChainObject, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
HRESULT
(*PFN_IDDCXSWAPCHAINGETDIRTYRECTS)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_GETDIRTYRECTS* pInArgs,
    _Out_
    IDARG_OUT_GETDIRTYRECTS* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
HRESULT
IddCxSwapChainGetDirtyRects(
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_GETDIRTYRECTS* pInArgs,
    _Out_
    IDARG_OUT_GETDIRTYRECTS* pOutArgs
    )
{
    return ((PFN_IDDCXSWAPCHAINGETDIRTYRECTS) IddFunctions[IddCxSwapChainGetDirtyRectsTableIndex])(IddDriverGlobals, SwapChainObject, pInArgs, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
HRESULT
(*PFN_IDDCXSWAPCHAINGETMOVEREGIONS)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_GETMOVEREGIONS* pInArgs,
    _Out_
    IDARG_OUT_GETMOVEREGIONS* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
HRESULT
IddCxSwapChainGetMoveRegions(
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_GETMOVEREGIONS* pInArgs,
    _Out_
    IDARG_OUT_GETMOVEREGIONS* pOutArgs
    )
{
    return ((PFN_IDDCXSWAPCHAINGETMOVEREGIONS) IddFunctions[IddCxSwapChainGetMoveRegionsTableIndex])(IddDriverGlobals, SwapChainObject, pInArgs, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
HRESULT
(*PFN_IDDCXSWAPCHAINFINISHEDPROCESSINGFRAME)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_SWAPCHAIN SwapChainObject
    );
_Must_inspect_result_
FORCEINLINE
HRESULT
IddCxSwapChainFinishedProcessingFrame(
    _In_
    IDDCX_SWAPCHAIN SwapChainObject
    )
{
    return ((PFN_IDDCXSWAPCHAINFINISHEDPROCESSINGFRAME) IddFunctions[IddCxSwapChainFinishedProcessingFrameTableIndex])(IddDriverGlobals, SwapChainObject);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXSWAPCHAINREPORTFRAMESTATISTICS)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_REPORTFRAMESTATISTICS* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxSwapChainReportFrameStatistics(
    _In_
    IDDCX_SWAPCHAIN SwapChainObject,
    _In_
    CONST IDARG_IN_REPORTFRAMESTATISTICS* pInArgs
    )
{
    return ((PFN_IDDCXSWAPCHAINREPORTFRAMESTATISTICS) IddFunctions[IddCxSwapChainReportFrameStatisticsTableIndex])(IddDriverGlobals, SwapChainObject, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXGETVERSION)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _Out_
    IDARG_OUT_GETVERSION* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxGetVersion(
    _Out_
    IDARG_OUT_GETVERSION* pOutArgs
    )
{
    return ((PFN_IDDCXGETVERSION) IddFunctions[IddCxGetVersionTableIndex])(IddDriverGlobals, pOutArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXREPORTCRITICALERROR)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_opt_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_REPORTCRITICALERROR* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxReportCriticalError(
    _In_opt_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_REPORTCRITICALERROR* pInArgs
    )
{
    return ((PFN_IDDCXREPORTCRITICALERROR) IddFunctions[IddCxReportCriticalErrorTableIndex])(IddDriverGlobals, AdapterObject, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORSETSRMLIST)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_SETSRMLIST* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorSetSrmList(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_SETSRMLIST* pInArgs
    )
{
    return ((PFN_IDDCXMONITORSETSRMLIST) IddFunctions[IddCxMonitorSetSrmListTableIndex])(IddDriverGlobals, MonitorObject, pInArgs);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXMONITORGETSRMLISTVERSION)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_GETSRMLISTVERSION* pInArgs,
    _Out_
    IDARG_OUT_GETSRMLISTVERSION* pOutArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxMonitorGetSrmListVersion(
    _In_
    IDDCX_MONITOR MonitorObject,
    _In_
    CONST IDARG_IN_GETSRMLISTVERSION* pInArgs,
    _Out_
    IDARG_OUT_GETSRMLISTVERSION* pOutArgs
    )
{
    return ((PFN_IDDCXMONITORGETSRMLISTVERSION) IddFunctions[IddCxMonitorGetSrmListVersionTableIndex])(IddDriverGlobals, MonitorObject, pInArgs, pOutArgs);
}
typedef
WDFAPI
VOID
(*PFN_IDDCXADAPTERSETRENDERADAPTER)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_ADAPTERSETRENDERADAPTER* pInArgs
    );
FORCEINLINE
VOID
IddCxAdapterSetRenderAdapter(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_ADAPTERSETRENDERADAPTER* pInArgs
    )
{
    if (IDD_IS_FUNCTION_AVAILABLE(IddCxAdapterSetRenderAdapter)) {
        ((PFN_IDDCXADAPTERSETRENDERADAPTER) IddFunctions[IddCxAdapterSetRenderAdapterTableIndex])(IddDriverGlobals, AdapterObject, pInArgs);
    }
    else {
        ((PFN_WDFDRIVERERRORREPORTAPIMISSING) WdfFunctions[WdfDriverErrorReportApiMissingTableIndex])(WdfDriverGlobals, WdfGetDriver(), IddFrameworkExtensionName, IddCxAdapterSetRenderAdapterTableIndex, FALSE);
    }
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_IDDCXADAPTERDISPLAYCONFIGUPDATE)(
    _In_
    PIDD_DRIVER_GLOBALS DriverGlobals,
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_ADAPTERDISPLAYCONFIGUPDATE* pInArgs
    );
_Must_inspect_result_
FORCEINLINE
NTSTATUS
IddCxAdapterDisplayConfigUpdate(
    _In_
    IDDCX_ADAPTER AdapterObject,
    _In_
    CONST IDARG_IN_ADAPTERDISPLAYCONFIGUPDATE* pInArgs
    )
{
    if (IDD_IS_FUNCTION_AVAILABLE(IddCxAdapterDisplayConfigUpdate)) {
        return ((PFN_IDDCXADAPTERDISPLAYCONFIGUPDATE) IddFunctions[IddCxAdapterDisplayConfigUpdateTableIndex])(IddDriverGlobals, AdapterObject, pInArgs);
    }
    else {
        return ((PFN_WDFDRIVERERRORREPORTAPIMISSING) WdfFunctions[WdfDriverErrorReportApiMissingTableIndex])(WdfDriverGlobals, WdfGetDriver(), IddFrameworkExtensionName, IddCxAdapterDisplayConfigUpdateTableIndex, TRUE);
    }
}
#pragma endregion
WDF_EXTERN_C_END
