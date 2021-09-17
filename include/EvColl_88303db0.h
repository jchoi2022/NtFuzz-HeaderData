#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
typedef HANDLE EC_HANDLE;
typedef HANDLE EC_OBJECT_ARRAY_PROPERTY_HANDLE;
typedef enum _EC_SUBSCRIPTION_PROPERTY_ID
{
    EcSubscriptionEnabled = 0,
    EcSubscriptionEventSources,
    EcSubscriptionEventSourceAddress,
    EcSubscriptionEventSourceEnabled,
    EcSubscriptionEventSourceUserName,
    EcSubscriptionEventSourcePassword,
    EcSubscriptionDescription,
    EcSubscriptionURI,
    EcSubscriptionConfigurationMode,
    EcSubscriptionExpires,
    EcSubscriptionQuery,
    EcSubscriptionTransportName,
    EcSubscriptionTransportPort,
    EcSubscriptionDeliveryMode,
    EcSubscriptionDeliveryMaxItems,
    EcSubscriptionDeliveryMaxLatencyTime,
    EcSubscriptionHeartbeatInterval,
    EcSubscriptionLocale,
    EcSubscriptionContentFormat,
    EcSubscriptionLogFile,
    EcSubscriptionPublisherName,
    EcSubscriptionCredentialsType,
    EcSubscriptionCommonUserName,
    EcSubscriptionCommonPassword,
    EcSubscriptionHostName,
    EcSubscriptionReadExistingEvents,
    EcSubscriptionDialect,
    EcSubscriptionType,
    EcSubscriptionAllowedIssuerCAs,
    EcSubscriptionAllowedSubjects,
    EcSubscriptionDeniedSubjects,
    EcSubscriptionAllowedSourceDomainComputers,
    EcSubscriptionPropertyIdEND
} EC_SUBSCRIPTION_PROPERTY_ID;
typedef enum _EC_SUBSCRIPTION_CREDENTIALS_TYPE {
    EcSubscriptionCredDefault = 0,
    EcSubscriptionCredNegotiate,
    EcSubscriptionCredDigest,
    EcSubscriptionCredBasic,
    EcSubscriptionCredLocalMachine
} EC_SUBSCRIPTION_CREDENTIALS_TYPE;
typedef enum _EC_SUBSCRIPTION_TYPE {
    EcSubscriptionTypeSourceInitiated = 0,
    EcSubscriptionTypeCollectorInitiated = 1
} EC_SUBSCRIPTION_TYPE;
typedef enum _EC_SUBSCRIPTION_RUNTIME_STATUS_INFO_ID
{
    EcSubscriptionRunTimeStatusActive = 0,
    EcSubscriptionRunTimeStatusLastError,
    EcSubscriptionRunTimeStatusLastErrorMessage,
    EcSubscriptionRunTimeStatusLastErrorTime,
    EcSubscriptionRunTimeStatusNextRetryTime,
    EcSubscriptionRunTimeStatusEventSources,
    EcSubscriptionRunTimeStatusLastHeartbeatTime,
    EcSubscriptionRunTimeStatusInfoIdEND
} EC_SUBSCRIPTION_RUNTIME_STATUS_INFO_ID;
typedef enum _EC_VARIANT_TYPE
{
    EcVarTypeNull = 0,
    EcVarTypeBoolean,
    EcVarTypeUInt32,
    EcVarTypeDateTime,
    EcVarTypeString,
    EcVarObjectArrayPropertyHandle
} EC_VARIANT_TYPE;
typedef struct _EC_VARIANT
{
    union
    {
        BOOL BooleanVal;
        UINT32 UInt32Val;
        ULONGLONG DateTimeVal;
        LPCWSTR StringVal;
        PBYTE BinaryVal;
        BOOL* BooleanArr;
        INT32* Int32Arr;
        LPWSTR* StringArr;
        EC_OBJECT_ARRAY_PROPERTY_HANDLE PropertyHandleVal;
    };
    DWORD Count;
    DWORD Type;
} EC_VARIANT, *PEC_VARIANT;
typedef enum _EC_SUBSCRIPTION_CONFIGURATION_MODE
{
    EcConfigurationModeNormal = 0,
    EcConfigurationModeCustom,
    EcConfigurationModeMinLatency,
    EcConfigurationModeMinBandwidth
} EC_SUBSCRIPTION_CONFIGURATION_MODE;
typedef enum _EC_SUBSCRIPTION_DELIVERY_MODE
{
    EcDeliveryModePull = 1,
    EcDeliveryModePush
} EC_SUBSCRIPTION_DELIVERY_MODE;
typedef enum _EC_SUBSCRIPTION_CONTENT_FORMAT
{
    EcContentFormatEvents = 1,
    EcContentFormatRenderedText
} EC_SUBSCRIPTION_CONTENT_FORMAT;
typedef enum _EC_SUBSCRIPTION_RUNTIME_STATUS_ACTIVE_STATUS
{
    EcRuntimeStatusActiveStatusDisabled = 1,
    EcRuntimeStatusActiveStatusActive,
    EcRuntimeStatusActiveStatusInactive,
    EcRuntimeStatusActiveStatusTrying
} EC_SUBSCRIPTION_RUNTIME_STATUS_ACTIVE_STATUS;
EC_HANDLE WINAPI EcOpenSubscriptionEnum(
    DWORD Flags
    );
BOOL WINAPI EcEnumNextSubscription(
    EC_HANDLE SubscriptionEnum,
    DWORD SubscriptionNameBufferSize,
    _Out_writes_to_opt_(SubscriptionNameBufferSize,*SubscriptionNameBufferUsed)
    LPWSTR SubscriptionNameBuffer,
    _Out_ PDWORD SubscriptionNameBufferUsed
    );
EC_HANDLE WINAPI EcOpenSubscription(
    LPCWSTR SubscriptionName,
    DWORD AccessMask,
    DWORD Flags
    );
BOOL WINAPI EcSetSubscriptionProperty(
    EC_HANDLE Subscription,
    EC_SUBSCRIPTION_PROPERTY_ID PropertyId,
    DWORD Flags,
    PEC_VARIANT PropertyValue
    );
BOOL WINAPI EcGetSubscriptionProperty(
    EC_HANDLE Subscription,
    EC_SUBSCRIPTION_PROPERTY_ID PropertyId,
    DWORD Flags,
    DWORD PropertyValueBufferSize,
    PEC_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
BOOL WINAPI EcSaveSubscription(
    EC_HANDLE Subscription,
    DWORD Flags
    );
BOOL WINAPI EcDeleteSubscription(
    LPCWSTR SubscriptionName,
    DWORD Flags
    );
BOOL WINAPI EcGetObjectArraySize(
    EC_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    _Out_ PDWORD ObjectArraySize
    );
BOOL WINAPI EcSetObjectArrayProperty(
    EC_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    EC_SUBSCRIPTION_PROPERTY_ID PropertyId,
    DWORD ArrayIndex,
    DWORD Flags,
    PEC_VARIANT PropertyValue
    );
BOOL WINAPI EcGetObjectArrayProperty(
    EC_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    EC_SUBSCRIPTION_PROPERTY_ID PropertyId,
    DWORD ArrayIndex,
    DWORD Flags,
    DWORD PropertyValueBufferSize,
    PEC_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
BOOL WINAPI EcInsertObjectArrayElement(
    EC_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    DWORD ArrayIndex
    );
BOOL WINAPI EcRemoveObjectArrayElement(
    EC_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    DWORD ArrayIndex
    );
BOOL WINAPI EcGetSubscriptionRunTimeStatus(
    LPCWSTR SubscriptionName,
    EC_SUBSCRIPTION_RUNTIME_STATUS_INFO_ID StatusInfoId,
    LPCWSTR EventSourceName,
    DWORD Flags,
    DWORD StatusValueBufferSize,
    PEC_VARIANT StatusValueBuffer,
    _Out_ PDWORD StatusValueBufferUsed
    );
BOOL WINAPI EcRetrySubscription(
    LPCWSTR SubscriptionName,
    LPCWSTR EventSourceName,
    DWORD Flags
    );
BOOL WINAPI EcClose(
    EC_HANDLE Object
    );
}
#endif
#pragma endregion
