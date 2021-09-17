       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(push, Old, 1)
typedef struct _WMP_WMDM_METADATA_ROUND_TRIP_PC2DEVICE
{
    DWORD dwChangesSinceTransactionID;
    DWORD dwResultSetStartingIndex;
} WMP_WMDM_METADATA_ROUND_TRIP_PC2DEVICE;
typedef struct _WMP_WMDM_METADATA_ROUND_TRIP_DEVICE2PC
{
    DWORD dwCurrentTransactionID;
    DWORD dwReturnedObjectCount;
    DWORD dwUnretrievedObjectCount;
    DWORD dwDeletedObjectStartingOffset;
    DWORD dwFlags;
    WCHAR wsObjectPathnameList[1];
} WMP_WMDM_METADATA_ROUND_TRIP_DEVICE2PC;
#pragma pack(pop, Old)
__inline BOOL WMPNotifyDeviceArrival()
{
    return( ::PostMessage( HWND_BROADCAST, ::RegisterWindowMessageA( "WMPlayer_PluginAddRemove" ), 2, 0 ) );
}
__inline BOOL WMPNotifyDeviceRemoval()
{
    return( ::PostMessage( HWND_BROADCAST, ::RegisterWindowMessageA( "WMPlayer_PluginAddRemove" ), 3, 0 ) );
}
#endif
#pragma endregion
