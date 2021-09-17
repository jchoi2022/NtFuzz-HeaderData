       
#include <winapifamily.h>
#include <BthLEDef.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"{
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTGetServices(
    _In_ HANDLE hDevice,
    _In_ USHORT ServicesBufferCount,
    _Out_writes_to_opt_(ServicesBufferCount, *ServicesBufferActual) PBTH_LE_GATT_SERVICE ServicesBuffer,
    _Out_ USHORT* ServicesBufferActual,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTGetIncludedServices(
    _In_ HANDLE hDevice,
    _In_opt_ PBTH_LE_GATT_SERVICE ParentService,
    _In_ USHORT IncludedServicesBufferCount,
    _Out_writes_to_opt_(IncludedServicesBufferCount, *IncludedServicesBufferActual) PBTH_LE_GATT_SERVICE IncludedServicesBuffer,
    _Out_ USHORT* IncludedServicesBufferActual,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTGetCharacteristics(
    _In_ HANDLE hDevice,
    _In_opt_ PBTH_LE_GATT_SERVICE Service,
    _In_ USHORT CharacteristicsBufferCount,
    _Out_writes_to_opt_(CharacteristicsBufferCount, *CharacteristicsBufferActual) PBTH_LE_GATT_CHARACTERISTIC CharacteristicsBuffer,
    _Out_ USHORT* CharacteristicsBufferActual,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTGetDescriptors(
    _In_ HANDLE hDevice,
    _In_ PBTH_LE_GATT_CHARACTERISTIC Characteristic,
    _In_ USHORT DescriptorsBufferCount,
    _Out_writes_to_opt_(DescriptorsBufferCount, *DescriptorsBufferActual) PBTH_LE_GATT_DESCRIPTOR DescriptorsBuffer,
    _Out_ USHORT* DescriptorsBufferActual,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTGetCharacteristicValue(
    _In_ HANDLE hDevice,
    _In_ PBTH_LE_GATT_CHARACTERISTIC Characteristic,
    _In_ ULONG CharacteristicValueDataSize,
    _Out_opt_ PBTH_LE_GATT_CHARACTERISTIC_VALUE CharacteristicValue,
    _Out_opt_ USHORT* CharacteristicValueSizeRequired,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTGetDescriptorValue(
    _In_ HANDLE hDevice,
    _In_ PBTH_LE_GATT_DESCRIPTOR Descriptor,
    _In_ ULONG DescriptorValueDataSize,
    _Out_opt_ PBTH_LE_GATT_DESCRIPTOR_VALUE DescriptorValue,
    _Out_opt_ USHORT* DescriptorValueSizeRequired,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTBeginReliableWrite(
    _In_ HANDLE hDevice,
    _Out_ PBTH_LE_GATT_RELIABLE_WRITE_CONTEXT ReliableWriteContext,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTSetCharacteristicValue(
    _In_ HANDLE hDevice,
    _In_ PBTH_LE_GATT_CHARACTERISTIC Characteristic,
    _In_ PBTH_LE_GATT_CHARACTERISTIC_VALUE CharacteristicValue,
    _In_opt_ BTH_LE_GATT_RELIABLE_WRITE_CONTEXT ReliableWriteContext,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTEndReliableWrite(
    _In_ HANDLE hDevice,
    _In_ BTH_LE_GATT_RELIABLE_WRITE_CONTEXT ReliableWriteContext,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTAbortReliableWrite(
    _In_ HANDLE hDevice,
    _In_ BTH_LE_GATT_RELIABLE_WRITE_CONTEXT ReliableWriteContext,
    _In_ ULONG Flags
    );
_Success_(S_OK == return)
HRESULT WINAPI
BluetoothGATTSetDescriptorValue(
    _In_ HANDLE hDevice,
    _In_ PBTH_LE_GATT_DESCRIPTOR Descriptor,
    _In_ PBTH_LE_GATT_DESCRIPTOR_VALUE DescriptorValue,
    _In_ ULONG Flags
    );
HRESULT WINAPI
BluetoothGATTRegisterEvent(
    _In_ HANDLE hService,
    _In_ BTH_LE_GATT_EVENT_TYPE EventType,
    _In_ PVOID EventParameterIn,
    _In_ PFNBLUETOOTH_GATT_EVENT_CALLBACK Callback,
    _In_opt_ PVOID CallbackContext,
    _Out_ BLUETOOTH_GATT_EVENT_HANDLE * pEventHandle,
    _In_ ULONG Flags
    );
HRESULT WINAPI
BluetoothGATTUnregisterEvent(
    _In_ BLUETOOTH_GATT_EVENT_HANDLE EventHandle,
    _In_ ULONG Flags
    );
    }
#endif
#pragma endregion
