       
#include <winapifamily.h>
#include <minwindef.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4200)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
DEFINE_GUID(GUID_BLUETOOTHLE_DEVICE_INTERFACE, 0x781aee18, 0x7733, 0x4ce4, 0xad, 0xd0, 0x91, 0xf4, 0x1c, 0x67, 0xb5, 0x92);
DEFINE_GUID(GUID_BLUETOOTH_GATT_SERVICE_DEVICE_INTERFACE, 0x6e3bb679, 0x4372, 0x40c8, 0x9e, 0xaa, 0x45, 0x09, 0xdf, 0x26, 0x0c, 0xd8);
DEFINE_GUID(BTH_LE_ATT_BLUETOOTH_BASE_GUID, 0x00000000, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB);
                                                                    (0x2A04)
            ((a >> BTH_LE_GAP_APPEARANCE_CATEGORY_OFFSET) & BTH_LE_GAP_APPEARANCE_CATEGORY_MASK)
            a = ((a & ~BTH_LE_GAP_APPEARANCE_CATEGORY_MASK) | (c << BTH_LE_GAP_APPEARANCE_CATEGORY_OFFSET))
            ((UCHAR)(a & BTH_LE_GAP_APPEARANCE_SUB_CATEGORY_MASK))
            a = ((a & ~BTH_LE_GAP_APPEARANCE_SUB_CATEGORY_MASK) | s)
                                                            0x0011
                                                            0x0051
                                                            0x01
                                                            0x01
                                                            0x01
                                                            0x02
                                                            0x05
                                                            0x08
                                                            0x01
                                                            0x02
                                                            0x03
                                                            0x01
                                                            0x02
                                                            0x03
                                                            0x04
                                                            0x05
                                                            0x01
                                                            0x02
                                                            0x01
                                                            0x02
                                                            0x03
                                                            0x04
( BLUETOOTH_GATT_FLAG_NONE \
| BLUETOOTH_GATT_FLAG_CONNECTION_ENCRYPTED \
| BLUETOOTH_GATT_FLAG_CONNECTION_AUTHENTICATED \
| BLUETOOTH_GATT_FLAG_FORCE_READ_FROM_DEVICE \
| BLUETOOTH_GATT_FLAG_FORCE_READ_FROM_CACHE \
| BLUETOOTH_GATT_FLAG_SIGNED_WRITE \
| BLUETOOTH_GATT_FLAG_WRITE_WITHOUT_RESPONSE \
| BLUETOOTH_GATT_FLAG_RETURN_ALL \
)
typedef HANDLE BLUETOOTH_GATT_EVENT_HANDLE;
typedef struct _BTH_LE_UUID {
    BOOLEAN IsShortUuid;
    [switch_type(BOOLEAN), switch_is((BOOLEAN)IsShortUuid)]
    union {
        [case(TRUE)]
        USHORT ShortUuid;
        [case(FALSE)]
        GUID LongUuid;
    } Value;
} BTH_LE_UUID, *PBTH_LE_UUID;
typedef struct _BTH_LE_GATT_SERVICE {
    BTH_LE_UUID ServiceUuid;
    USHORT AttributeHandle;
} BTH_LE_GATT_SERVICE, *PBTH_LE_GATT_SERVICE;
typedef enum _BTH_LE_GATT_DESCRIPTOR_TYPE {
    CharacteristicExtendedProperties,
    CharacteristicUserDescription,
    ClientCharacteristicConfiguration,
    ServerCharacteristicConfiguration,
    CharacteristicFormat,
    CharacteristicAggregateFormat,
    CustomDescriptor
} BTH_LE_GATT_DESCRIPTOR_TYPE, *PBTH_LE_GATT_DESCRIPTOR_TYPE;
typedef struct _BTH_LE_GATT_CHARACTERISTIC {
    USHORT ServiceHandle;
    BTH_LE_UUID CharacteristicUuid;
    USHORT AttributeHandle;
    USHORT CharacteristicValueHandle;
    BOOLEAN IsBroadcastable;
    BOOLEAN IsReadable;
    BOOLEAN IsWritable;
    BOOLEAN IsWritableWithoutResponse;
    BOOLEAN IsSignedWritable;
    BOOLEAN IsNotifiable;
    BOOLEAN IsIndicatable;
    BOOLEAN HasExtendedProperties;
} BTH_LE_GATT_CHARACTERISTIC, *PBTH_LE_GATT_CHARACTERISTIC;
typedef struct _BTH_LE_GATT_CHARACTERISTIC_VALUE {
    ULONG DataSize;
    [size_is(DataSize)] UCHAR Data[*];
} BTH_LE_GATT_CHARACTERISTIC_VALUE, *PBTH_LE_GATT_CHARACTERISTIC_VALUE;
typedef struct _BTH_LE_GATT_DESCRIPTOR {
    USHORT ServiceHandle;
    USHORT CharacteristicHandle;
    BTH_LE_GATT_DESCRIPTOR_TYPE DescriptorType;
    BTH_LE_UUID DescriptorUuid;
    USHORT AttributeHandle;
} BTH_LE_GATT_DESCRIPTOR, *PBTH_LE_GATT_DESCRIPTOR;
typedef struct _BTH_LE_GATT_DESCRIPTOR_VALUE {
    BTH_LE_GATT_DESCRIPTOR_TYPE DescriptorType;
    BTH_LE_UUID DescriptorUuid;
    [switch_type(BTH_LE_GATT_DESCRIPTOR_TYPE),
            switch_is((BTH_LE_GATT_DESCRIPTOR_TYPE)DescriptorType)]
    union {
        [case(CharacteristicExtendedProperties)]
        struct {
            BOOLEAN IsReliableWriteEnabled;
            BOOLEAN IsAuxiliariesWritable;
        } CharacteristicExtendedProperties;
        [case(ClientCharacteristicConfiguration)]
        struct {
            BOOLEAN IsSubscribeToNotification;
            BOOLEAN IsSubscribeToIndication;
        } ClientCharacteristicConfiguration;
        [case(ServerCharacteristicConfiguration)]
        struct {
            BOOLEAN IsBroadcast;
        } ServerCharacteristicConfiguration;
        [case(CharacteristicFormat)]
        struct {
            UCHAR Format;
            UCHAR Exponent;
            BTH_LE_UUID Unit;
            UCHAR NameSpace;
            BTH_LE_UUID Description;
        } CharacteristicFormat;
        [default]
            ;
    };
    ULONG DataSize;
    [size_is(DataSize)] UCHAR Data[*];
} BTH_LE_GATT_DESCRIPTOR_VALUE, *PBTH_LE_GATT_DESCRIPTOR_VALUE;
typedef enum _BTH_LE_GATT_EVENT_TYPE {
    CharacteristicValueChangedEvent,
} BTH_LE_GATT_EVENT_TYPE;
typedef VOID (CALLBACK *PFNBLUETOOTH_GATT_EVENT_CALLBACK)(
    _In_ BTH_LE_GATT_EVENT_TYPE EventType,
    _In_ PVOID EventOutParameter,
    _In_opt_ PVOID Context
);
typedef struct _BLUETOOTH_GATT_VALUE_CHANGED_EVENT_REGISTRATION {
    USHORT NumCharacteristics;
    BTH_LE_GATT_CHARACTERISTIC Characteristics[1];
} BLUETOOTH_GATT_VALUE_CHANGED_EVENT_REGISTRATION, *PBLUETOOTH_GATT_VALUE_CHANGED_EVENT_REGISTRATION;
typedef struct _BLUETOOTH_GATT_VALUE_CHANGED_EVENT {
    USHORT ChangedAttributeHandle;
    size_t CharacteristicValueDataSize;
    PBTH_LE_GATT_CHARACTERISTIC_VALUE CharacteristicValue;
} BLUETOOTH_GATT_VALUE_CHANGED_EVENT, *PBLUETOOTH_GATT_VALUE_CHANGED_EVENT;
typedef ULONG64 BTH_LE_GATT_RELIABLE_WRITE_CONTEXT, *PBTH_LE_GATT_RELIABLE_WRITE_CONTEXT;
extern "C"{
FORCEINLINE
BOOLEAN
IsBthLEUuidMatch(
    _In_ BTH_LE_UUID uuid1,
    _In_ BTH_LE_UUID uuid2
    )
{
    BTH_LE_UUID tempLongUuid = {0};
    tempLongUuid.IsShortUuid = FALSE;
    tempLongUuid.Value.LongUuid = BTH_LE_ATT_BLUETOOTH_BASE_GUID;
    if (uuid1.IsShortUuid && uuid2.IsShortUuid) {
        return (uuid1.Value.ShortUuid == uuid2.Value.ShortUuid);
    } else if (!uuid1.IsShortUuid && !uuid2.IsShortUuid) {
        return (0 == memcmp(&uuid1.Value.LongUuid, &uuid2.Value.LongUuid, sizeof(GUID)));
    } else if (uuid1.IsShortUuid) {
        tempLongUuid.Value.LongUuid.Data1 += uuid1.Value.ShortUuid;
        return (0 == memcmp(&tempLongUuid, &uuid2.Value.LongUuid, sizeof(GUID)));
    } else if (uuid2.IsShortUuid) {
        tempLongUuid.Value.LongUuid.Data1 += uuid2.Value.ShortUuid;
        return (0 == memcmp(&uuid1.Value.LongUuid, &tempLongUuid.Value.LongUuid, sizeof(GUID)));
    }
    return FALSE;
}
    }
#pragma warning(pop)
#endif
#pragma endregion
