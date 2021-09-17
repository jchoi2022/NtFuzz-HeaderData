#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _DHCPAPI_PARAMS {
    ULONG Flags;
    ULONG OptionId;
    BOOL IsVendor;
        [size_is(nBytesData)] LPBYTE Data;
    DWORD nBytesData;
} DHCPAPI_PARAMS, *PDHCPAPI_PARAMS, *LPDHCPAPI_PARAMS;
typedef struct _DHCPAPI_PARAMS
DHCPCAPI_PARAMS, *PDHCPCAPI_PARAMS, *LPDHCPCAPI_PARAMS;
typedef struct _DHCPCAPI_PARAMS_ARARAY {
    ULONG nParams;
        [size_is(nParams)] LPDHCPCAPI_PARAMS Params;
} DHCPCAPI_PARAMS_ARRAY, *PDHCPCAPI_PARAMS_ARRAY, *LPDHCPCAPI_PARAMS_ARRAY;
typedef struct _DHCPCAPI_CLASSID {
    ULONG Flags;
        [size_is(nBytesData)] LPBYTE Data;
        ULONG nBytesData;
} DHCPCAPI_CLASSID, *PDHCPCAPI_CLASSID, *LPDHCPCAPI_CLASSID;
DWORD
APIENTRY
DhcpCApiInitialize(
    OUT LPDWORD Version
);
VOID
APIENTRY
DhcpCApiCleanup(
    VOID
);
DWORD
APIENTRY
DhcpRequestParams(
    IN DWORD Flags,
    IN LPVOID Reserved,
    _In_ LPWSTR AdapterName,
    IN LPDHCPCAPI_CLASSID ClassId,
    IN DHCPCAPI_PARAMS_ARRAY SendParams,
    IN OUT DHCPCAPI_PARAMS_ARRAY RecdParams,
    _Out_writes_bytes_to_(*pSize, *pSize) LPBYTE Buffer,
    _Inout_ LPDWORD pSize,
    _In_ LPWSTR RequestIdStr
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DWORD
APIENTRY
DhcpUndoRequestParams(
    _Reserved_ DWORD Flags,
    _Reserved_ LPVOID Reserved,
    _In_ LPWSTR AdapterName,
    _In_ LPWSTR RequestIdStr
);
DWORD
APIENTRY
DhcpRegisterParamChange(
    IN DWORD Flags,
    _Reserved_ LPVOID Reserved,
    _In_ LPWSTR AdapterName,
    IN LPDHCPCAPI_CLASSID ClassId,
    IN DHCPCAPI_PARAMS_ARRAY Params,
    IN OUT LPVOID Handle
);
DWORD
APIENTRY
DhcpDeRegisterParamChange(
    IN DWORD Flags,
    IN LPVOID Reserved,
    IN LPVOID Event
);
DWORD
APIENTRY
DhcpRemoveDNSRegistrations(
    VOID
    );
DWORD
APIENTRY
DhcpGetOriginalSubnetMask(
    IN LPCWSTR sAdapterName,
    OUT DWORD *dwSubnetMask
);
#endif
#pragma endregion
}
