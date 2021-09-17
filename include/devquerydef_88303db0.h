       
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <devfiltertypes.h>
typedef
[v1_enum]
enum
_DEV_OBJECT_TYPE
{
    DevObjectTypeUnknown,
    DevObjectTypeDeviceInterface,
    DevObjectTypeDeviceContainer,
    DevObjectTypeDevice,
    DevObjectTypeDeviceInterfaceClass,
    DevObjectTypeAEP,
    DevObjectTypeAEPContainer,
    DevObjectTypeDeviceInstallerClass,
    DevObjectTypeDeviceInterfaceDisplay,
    DevObjectTypeDeviceContainerDisplay,
    DevObjectTypeAEPService,
    DevObjectTypeDevicePanel,
} DEV_OBJECT_TYPE, *PDEV_OBJECT_TYPE;
typedef
[v1_enum]
enum _DEV_QUERY_FLAGS
{
    DevQueryFlagNone = 0x0,
    DevQueryFlagUpdateResults = 0x1,
    DevQueryFlagAllProperties = 0x2,
    DevQueryFlagLocalize = 0x4,
    DevQueryFlagAsyncClose = 0x8
} DEV_QUERY_FLAGS, *PDEV_QUERY_FLAGS;
typedef
[v1_enum]
enum _DEV_QUERY_STATE
{
    DevQueryStateInitialized,
    DevQueryStateEnumCompleted,
    DevQueryStateAborted,
    DevQueryStateClosed
} DEV_QUERY_STATE, *PDEV_QUERY_STATE;
typedef
[v1_enum]
enum _DEV_QUERY_RESULT_ACTION
{
    DevQueryResultStateChange,
    DevQueryResultAdd,
    DevQueryResultUpdate,
    DevQueryResultRemove
} DEV_QUERY_RESULT_ACTION, *PDEV_QUERY_RESULT_ACTION;
typedef struct _DEV_OBJECT
{
    DEV_OBJECT_TYPE ObjectType;
    __in PCWSTR pszObjectId;
    [range(0, 10000)]
    __in ULONG cPropertyCount;
    [size_is(cPropertyCount)]
    __field_ecount_opt(cPropertyCount) const DEVPROPERTY *pProperties;
} DEV_OBJECT, *PDEV_OBJECT;
typedef struct _DEV_QUERY_RESULT_ACTION_DATA
{
    DEV_QUERY_RESULT_ACTION Action;
    [switch_is(Action)]
    [switch_type(DEV_QUERY_RESULT_ACTION)]
    union _DEV_QUERY_RESULT_UPDATE_PAYLOAD
    {
        [case (DevQueryResultStateChange)]
        DEV_QUERY_STATE State;
        [case (DevQueryResultAdd, DevQueryResultUpdate, DevQueryResultRemove)]
        DEV_OBJECT DeviceObject;
    } Data;
} DEV_QUERY_RESULT_ACTION_DATA, *PDEV_QUERY_RESULT_ACTION_DATA;
typedef struct _DEV_QUERY_PARAMETER {
    DEVPROPKEY Key;
    DEVPROPTYPE Type;
    ULONG BufferSize;
    [size_is(BufferSize)] PBYTE Buffer;
} DEV_QUERY_PARAMETER, *PDEV_QUERY_PARAMETER;
#endif
