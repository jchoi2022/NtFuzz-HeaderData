#include <commctrl.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef LONG (WINAPI *PFAXROUTEADDFILE)(DWORD JobId, LPCWSTR FileName, GUID *Guid);
typedef LONG (WINAPI *PFAXROUTEDELETEFILE)(DWORD JobId, LPCWSTR FileName);
typedef BOOL (WINAPI *PFAXROUTEGETFILE)(DWORD JobId, DWORD Index, _Out_writes_bytes_opt_(*RequiredSize) LPWSTR FileNameBuffer, LPDWORD RequiredSize);
typedef BOOL (WINAPI *PFAXROUTEENUMFILE)(DWORD JobId, GUID *GuidOwner, GUID *GuidCaller, LPCWSTR FileName, PVOID Context);
typedef BOOL (WINAPI *PFAXROUTEENUMFILES)(DWORD JobId, GUID *Guid,PFAXROUTEENUMFILE FileEnumerator, PVOID Context);
typedef BOOL (WINAPI *PFAXROUTEMODIFYROUTINGDATA)(DWORD JobId, LPCWSTR RoutingGuid, LPBYTE RoutingData, DWORD RoutingDataSize );
typedef struct _FAX_ROUTE_CALLBACKROUTINES {
    DWORD SizeOfStruct;
    PFAXROUTEADDFILE FaxRouteAddFile;
    PFAXROUTEDELETEFILE FaxRouteDeleteFile;
    PFAXROUTEGETFILE FaxRouteGetFile;
    PFAXROUTEENUMFILES FaxRouteEnumFiles;
    PFAXROUTEMODIFYROUTINGDATA FaxRouteModifyRoutingData;
} FAX_ROUTE_CALLBACKROUTINES, *PFAX_ROUTE_CALLBACKROUTINES;
typedef struct _FAX_ROUTE {
    DWORD SizeOfStruct;
    DWORD JobId;
    DWORDLONG ElapsedTime;
    DWORDLONG ReceiveTime;
    DWORD PageCount;
    LPCWSTR Csid;
    LPCWSTR Tsid;
    LPCWSTR CallerId;
    LPCWSTR RoutingInfo;
    LPCWSTR ReceiverName;
    LPCWSTR ReceiverNumber;
    LPCWSTR DeviceName;
    DWORD DeviceId;
    LPBYTE RoutingInfoData;
    DWORD RoutingInfoDataSize;
} FAX_ROUTE, *PFAX_ROUTE;
enum FAXROUTE_ENABLE {
    QUERY_STATUS = -1,
    STATUS_DISABLE = 0,
    STATUS_ENABLE = 1
};
BOOL WINAPI
FaxRouteInitialize(
    IN HANDLE HeapHandle,
    IN PFAX_ROUTE_CALLBACKROUTINES FaxRouteCallbackRoutines
    );
BOOL WINAPI
FaxRouteDeviceEnable(
    IN LPCWSTR RoutingGuid,
    IN DWORD DeviceId,
    IN LONG Enabled
    );
BOOL WINAPI
FaxRouteDeviceChangeNotification(
    IN DWORD DeviceId,
    IN BOOL NewDevice
    );
BOOL WINAPI
FaxRouteGetRoutingInfo(
    IN LPCWSTR RoutingGuid,
    IN DWORD DeviceId,
    IN LPBYTE RoutingInfo,
    OUT LPDWORD RoutingInfoSize
    );
BOOL WINAPI
FaxRouteSetRoutingInfo(
    IN LPCWSTR RoutingGuid,
    IN DWORD DeviceId,
    IN const BYTE *RoutingInfo,
    IN DWORD RoutingInfoSize
    );
typedef BOOL (WINAPI *PFAXROUTEINITIALIZE) (HANDLE,PFAX_ROUTE_CALLBACKROUTINES);
typedef BOOL (WINAPI *PFAXROUTEMETHOD) (const FAX_ROUTE*,PVOID*,LPDWORD);
typedef BOOL (WINAPI *PFAXROUTEDEVICEENABLE) (LPCWSTR,DWORD,LONG);
typedef BOOL (WINAPI *PFAXROUTEDEVICECHANGENOTIFICATION) (DWORD,BOOL);
typedef BOOL (WINAPI *PFAXROUTEGETROUTINGINFO) (LPCWSTR,DWORD,LPBYTE,LPDWORD);
typedef BOOL (WINAPI *PFAXROUTESETROUTINGINFO) (LPCWSTR,DWORD,const BYTE*,DWORD);
}
#endif
#pragma endregion
