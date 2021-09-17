#include <winapifamily.h>
#include <unknwn.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
STDAPI OnDemandGetRoutingHint(
        _In_ PCWSTR destinationHostName,
        _Out_ DWORD* interfaceIndex);
typedef void (WINAPI *ONDEMAND_NOTIFICATION_CALLBACK) (_In_opt_ void*);
STDAPI OnDemandRegisterNotification(
        _In_ ONDEMAND_NOTIFICATION_CALLBACK callback,
        _In_opt_ void* callbackContext,
        _Out_ HANDLE* registrationHandle);
STDAPI OnDemandUnRegisterNotification(_In_ HANDLE registrationHandle);
       
typedef struct _NET_INTERFACE_CONTEXT
{
    ULONG InterfaceIndex;
    LPWSTR ConfigurationName;
} NET_INTERFACE_CONTEXT;
typedef struct _NET_INTERFACE_CONTEXT_TABLE
{
    HANDLE InterfaceContextHandle;
    UINT NumberOfEntries;
    NET_INTERFACE_CONTEXT* InterfaceContextArray;
} NET_INTERFACE_CONTEXT_TABLE;
STDAPI GetInterfaceContextTableForHostName(
    _In_opt_ PCWSTR HostName,
    _In_opt_ PCWSTR ProxyName,
    _In_ DWORD Flags,
    _In_opt_bytecount_(ConnectionProfileFilterRawDataSize) BYTE* ConnectionProfileFilterRawData,
    _In_ DWORD ConnectionProfileFilterRawDataSize,
    _Outptr_ NET_INTERFACE_CONTEXT_TABLE** InterfaceContextTable);
STDAPI_(VOID) FreeInterfaceContextTable(
    _In_ NET_INTERFACE_CONTEXT_TABLE* InterfaceContextTable);
#endif
#pragma endregion
