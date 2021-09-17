       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <bthdef.h>
extern "C" {
typedef ULONGLONG BTH_ADDR;
typedef struct _BLUETOOTH_ADDRESS {
    union {
        BTH_ADDR ullLong;
        BYTE rgBytes[ 6 ];
    };
} BLUETOOTH_ADDRESS_STRUCT;
typedef struct _BLUETOOTH_LOCAL_SERVICE_INFO {
    BOOL Enabled;
    BLUETOOTH_ADDRESS btAddr;
    WCHAR szName[ BLUETOOTH_MAX_SERVICE_NAME_SIZE ];
    WCHAR szDeviceString[ BLUETOOTH_DEVICE_NAME_SIZE ];
} BLUETOOTH_LOCAL_SERVICE_INFO_STRUCT;
typedef BLUETOOTH_LOCAL_SERVICE_INFO * PBLUETOOTH_LOCAL_SERVICE_INFO;
typedef struct _BLUETOOTH_FIND_RADIO_PARAMS {
    DWORD dwSize;
} BLUETOOTH_FIND_RADIO_PARAMS;
typedef HANDLE HBLUETOOTH_RADIO_FIND;
_Must_inspect_result_
_Success_(return != NULL)
HBLUETOOTH_RADIO_FIND
WINAPI
BluetoothFindFirstRadio(
    _In_ const BLUETOOTH_FIND_RADIO_PARAMS * pbtfrp,
    _Out_ HANDLE * phRadio
    );
_Must_inspect_result_
_Success_(return)
BOOL
WINAPI
BluetoothFindNextRadio(
    _In_ HBLUETOOTH_RADIO_FIND hFind,
    _Out_ HANDLE * phRadio
    );
BOOL
WINAPI
BluetoothFindRadioClose(
    _In_ HBLUETOOTH_RADIO_FIND hFind
    );
typedef struct _BLUETOOTH_RADIO_INFO {
    DWORD dwSize;
    BLUETOOTH_ADDRESS address;
    WCHAR szName[ BLUETOOTH_MAX_NAME_SIZE ];
    ULONG ulClassofDevice;
    USHORT lmpSubversion;
    USHORT manufacturer;
} BLUETOOTH_RADIO_INFO, *PBLUETOOTH_RADIO_INFO;
_Must_inspect_result_
DWORD
WINAPI
BluetoothGetRadioInfo(
    _In_ HANDLE hRadio,
    _Inout_ PBLUETOOTH_RADIO_INFO pRadioInfo
    );
typedef struct _BLUETOOTH_DEVICE_INFO {
    _Field_range_(==, sizeof(BLUETOOTH_DEVICE_INFO_STRUCT))
    DWORD dwSize;
    BLUETOOTH_ADDRESS Address;
    ULONG ulClassofDevice;
    BOOL fConnected;
    BOOL fRemembered;
    BOOL fAuthenticated;
    SYSTEMTIME stLastSeen;
    SYSTEMTIME stLastUsed;
    WCHAR szName[ BLUETOOTH_MAX_NAME_SIZE ];
} BLUETOOTH_DEVICE_INFO_STRUCT;
typedef BLUETOOTH_DEVICE_INFO * PBLUETOOTH_DEVICE_INFO;
typedef struct _BLUETOOTH_DEVICE_SEARCH_PARAMS {
    DWORD dwSize;
    BOOL fReturnAuthenticated;
    BOOL fReturnRemembered;
    BOOL fReturnUnknown;
    BOOL fReturnConnected;
    BOOL fIssueInquiry;
    UCHAR cTimeoutMultiplier;
    HANDLE hRadio;
} BLUETOOTH_DEVICE_SEARCH_PARAMS;
typedef HANDLE HBLUETOOTH_DEVICE_FIND;
_Must_inspect_result_
_Success_(return != NULL)
HBLUETOOTH_DEVICE_FIND
WINAPI
BluetoothFindFirstDevice(
    _In_ const BLUETOOTH_DEVICE_SEARCH_PARAMS * pbtsp,
    _Inout_ BLUETOOTH_DEVICE_INFO * pbtdi
    );
_Must_inspect_result_
BOOL
WINAPI
BluetoothFindNextDevice(
    _In_ HBLUETOOTH_DEVICE_FIND hFind,
    _Inout_ BLUETOOTH_DEVICE_INFO * pbtdi
    );
BOOL
WINAPI
BluetoothFindDeviceClose(
    _In_ HBLUETOOTH_DEVICE_FIND hFind
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothGetDeviceInfo(
    _In_opt_ HANDLE hRadio,
    _Inout_ BLUETOOTH_DEVICE_INFO * pbtdi
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothUpdateDeviceRecord(
    _In_ const BLUETOOTH_DEVICE_INFO * pbtdi
    );
DWORD
WINAPI
BluetoothRemoveDevice(
    _In_ const BLUETOOTH_ADDRESS * pAddress
    );
typedef struct _BLUETOOTH_COD_PAIRS {
    ULONG ulCODMask;
    LPCWSTR pcszDescription;
} BLUETOOTH_COD_PAIRS;
typedef BOOL (WINAPI *PFN_DEVICE_CALLBACK)(LPVOID pvParam, const BLUETOOTH_DEVICE_INFO * pDevice);
typedef struct _BLUETOOTH_SELECT_DEVICE_PARAMS {
    DWORD dwSize;
    ULONG cNumOfClasses;
    BLUETOOTH_COD_PAIRS * prgClassOfDevices;
    LPWSTR pszInfo;
    HWND hwndParent;
    BOOL fForceAuthentication;
    BOOL fShowAuthenticated;
    BOOL fShowRemembered;
    BOOL fShowUnknown;
    BOOL fAddNewDeviceWizard;
    BOOL fSkipServicesPage;
    PFN_DEVICE_CALLBACK pfnDeviceCallback;
    LPVOID pvParam;
    DWORD cNumDevices;
    _Field_size_opt_(cNumDevices) PBLUETOOTH_DEVICE_INFO pDevices;
} BLUETOOTH_SELECT_DEVICE_PARAMS;
_Must_inspect_result_
BOOL
WINAPI
BluetoothSelectDevices(
    _Inout_ BLUETOOTH_SELECT_DEVICE_PARAMS * pbtsdp
    );
BOOL
WINAPI
BluetoothSelectDevicesFree(
    _Inout_ BLUETOOTH_SELECT_DEVICE_PARAMS * pbtsdp
    );
BOOL
WINAPI
BluetoothDisplayDeviceProperties(
    _In_opt_ HWND hwndParent,
    _Inout_ BLUETOOTH_DEVICE_INFO * pbtdi
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothAuthenticateDevice(
    _In_opt_ HWND hwndParent,
    _In_opt_ HANDLE hRadio,
    _Inout_ BLUETOOTH_DEVICE_INFO * pbtbi,
    _In_reads_opt_(ulPasskeyLength) PWSTR pszPasskey,
    _In_ ULONG ulPasskeyLength
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothAuthenticateMultipleDevices(
    _In_opt_ HWND hwndParent,
    _In_opt_ HANDLE hRadio,
    _In_ DWORD cDevices,
    _Inout_updates_(cDevices) BLUETOOTH_DEVICE_INFO * rgbtdi
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothSetServiceState(
    _In_opt_ HANDLE hRadio,
    _In_ const BLUETOOTH_DEVICE_INFO * pbtdi,
    _In_ const GUID * pGuidService,
    _In_ DWORD dwServiceFlags
    );
_Must_inspect_result_
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
BluetoothEnumerateInstalledServices(
    _In_opt_ HANDLE hRadio,
    _In_ const BLUETOOTH_DEVICE_INFO * pbtdi,
    _Inout_ DWORD * pcServiceInout,
    _Out_writes_to_opt_(*pcServiceInout, *pcServiceInout) GUID * pGuidServices
    );
BOOL
WINAPI
BluetoothEnableDiscovery(
    _In_opt_ HANDLE hRadio,
    _In_ BOOL fEnabled
    );
_Must_inspect_result_
BOOL
WINAPI
BluetoothIsDiscoverable(
    _In_opt_ HANDLE hRadio
    );
_Must_inspect_result_
BOOL
WINAPI
BluetoothEnableIncomingConnections(
    _In_opt_ HANDLE hRadio,
    _In_ BOOL fEnabled
    );
_Must_inspect_result_
BOOL
WINAPI
BluetoothIsConnectable(
    _In_opt_ HANDLE hRadio
    );
typedef HANDLE HBLUETOOTH_AUTHENTICATION_REGISTRATION;
typedef BOOL (CALLBACK *PFN_AUTHENTICATION_CALLBACK)(LPVOID pvParam, PBLUETOOTH_DEVICE_INFO pDevice);
_Must_inspect_result_
DWORD
WINAPI
BluetoothRegisterForAuthentication(
    _In_opt_ const BLUETOOTH_DEVICE_INFO * pbtdi,
    _Out_ HBLUETOOTH_AUTHENTICATION_REGISTRATION * phRegHandle,
    _In_opt_ PFN_AUTHENTICATION_CALLBACK pfnCallback,
    _In_opt_ PVOID pvParam
    );
BOOL
WINAPI
BluetoothUnregisterAuthentication(
    _In_ HBLUETOOTH_AUTHENTICATION_REGISTRATION hRegHandle
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothSendAuthenticationResponse(
    _In_opt_ HANDLE hRadio,
    _In_ const BLUETOOTH_DEVICE_INFO * pbtdi,
    _In_ LPCWSTR pszPasskey
    );
typedef struct _SDP_ELEMENT_DATA {
    SDP_TYPE type;
    SDP_SPECIFICTYPE specificType;
    union {
        SDP_LARGE_INTEGER_16 int128;
        LONGLONG int64;
        LONG int32;
        SHORT int16;
        CHAR int8;
        SDP_ULARGE_INTEGER_16 uint128;
        ULONGLONG uint64;
        ULONG uint32;
        USHORT uint16;
        UCHAR uint8;
        UCHAR booleanVal;
        GUID uuid128;
        ULONG uuid32;
        USHORT uuid16;
        struct {
            LPBYTE value;
            ULONG length;
        } string;
        struct {
            LPBYTE value;
            ULONG length;
        } url;
        struct {
            LPBYTE value;
            ULONG length;
        } sequence;
        struct {
            LPBYTE value;
            ULONG length;
        } alternative;
    } data;
} SDP_ELEMENT_DATA, *PSDP_ELEMENT_DATA;
_Must_inspect_result_
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
BluetoothSdpGetElementData(
    _In_reads_bytes_(cbSdpStreamLength) LPBYTE pSdpStream,
    _In_ ULONG cbSdpStreamLength,
    _Out_ PSDP_ELEMENT_DATA pData
    );
typedef HANDLE HBLUETOOTH_CONTAINER_ELEMENT;
_Must_inspect_result_
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
BluetoothSdpGetContainerElementData(
    _In_reads_bytes_(cbContainerLength) LPBYTE pContainerStream,
    _In_ ULONG cbContainerLength,
    _Inout_ HBLUETOOTH_CONTAINER_ELEMENT* pElement,
    _Out_ PSDP_ELEMENT_DATA pData
    );
_Must_inspect_result_
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
BluetoothSdpGetAttributeValue(
    _In_reads_bytes_(cbRecordLength) LPBYTE pRecordStream,
    _In_ ULONG cbRecordLength,
    _In_ USHORT usAttributeId,
    _Out_ PSDP_ELEMENT_DATA pAttributeData
    );
typedef struct _SDP_STRING_TYPE_DATA {
    USHORT encoding;
    USHORT mibeNum;
    USHORT attributeId;
} SDP_STRING_TYPE_DATA, *PSDP_STRING_TYPE_DATA;
_Must_inspect_result_
_Success_(return == 0)
DWORD
WINAPI
BluetoothSdpGetString(
    _In_reads_bytes_(cbRecordLength) LPBYTE pRecordStream,
    _In_ ULONG cbRecordLength,
    _In_opt_ const PSDP_STRING_TYPE_DATA pStringData,
    _In_ USHORT usStringOffset,
    _Out_writes_to_(*pcchStringLength, *pcchStringLength) PWSTR pszString,
    _Inout_ PULONG pcchStringLength
    );
typedef BOOL (CALLBACK *PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK)(
    _In_ ULONG uAttribId,
    _In_reads_bytes_(cbStreamSize) LPBYTE pValueStream,
    _In_ ULONG cbStreamSize,
    _In_opt_ LPVOID pvParam
    );
_Must_inspect_result_
BOOL
WINAPI
BluetoothSdpEnumAttributes(
    _In_reads_bytes_(cbStreamSize) LPBYTE pSDPStream,
    _In_ ULONG cbStreamSize,
    _In_ PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK pfnCallback,
    _In_ LPVOID pvParam
    );
_Must_inspect_result_
DWORD
WINAPI
BluetoothSetLocalServiceInfo(
      _In_opt_ HANDLE hRadioIn
    , _In_ const GUID * pClassGuid
    , _In_ ULONG ulInstance
    , _In_ const BLUETOOTH_LOCAL_SERVICE_INFO * pServiceInfoIn
    );
}
#endif
#pragma endregion
