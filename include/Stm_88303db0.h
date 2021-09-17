#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
typedef struct _IPX_SERVER_ENTRY
{
    USHORT Type;
    UCHAR Name[48];
    UCHAR Network[4];
    UCHAR Node[6];
    UCHAR Socket[2];
    USHORT HopCount;
} IPX_SERVER_ENTRY, *PIPX_SERVER_ENTRY;
typedef struct _IPX_SERVICE
{
    ULONG InterfaceIndex;
    ULONG Protocol;
    IPX_SERVER_ENTRY Server;
} IPX_SERVICE, *PIPX_SERVICE;
typedef
BOOL
(WINAPI * PIS_SERVICE)(
      IN USHORT Type,
      IN PUCHAR Name,
      OUT PIPX_SERVICE Service OPTIONAL
      );
typedef
HANDLE
(WINAPI * PCREATE_SERVICE_ENUMERATION_HANDLE)(
    IN DWORD ExclusionFlags,
    IN PIPX_SERVICE CriteriaService
    );
typedef
DWORD
(WINAPI * PENUMERATE_GET_NEXT_SERVICE)(
    IN HANDLE EnumerationHandle,
    OUT PIPX_SERVICE Service
    );
typedef
DWORD
(WINAPI * PCLOSE_SERVICE_ENUMERATION_HANDLE)(
    IN HANDLE EnumerationHandle
    );
typedef
ULONG
(WINAPI * PGET_SERVICE_COUNT)(
 VOID
 );
typedef
DWORD
(WINAPI * PCREATE_STATIC_SERVICE)(IN ULONG InterfaceIndex,
         IN PIPX_SERVER_ENTRY ServerEntry);
typedef
DWORD
(WINAPI * PDELETE_STATIC_SERVICE)(IN ULONG InterfaceIndex,
         IN PIPX_SERVER_ENTRY ServerEntry);
typedef
DWORD
(WINAPI * PBLOCK_CONVERT_SERVICES_TO_STATIC) (
 IN ULONG InterfaceIndex
 );
typedef
DWORD
(WINAPI * PBLOCK_DELETE_STATIC_SERVICES)(
 IN ULONG InterfaceIndex
 );
typedef
DWORD
(WINAPI * PGET_FIRST_ORDERED_SERVICE)(
    IN DWORD OrderingMethod,
    IN DWORD ExclusionFlags,
    IN OUT PIPX_SERVICE Service
    );
typedef
DWORD
(WINAPI * PGET_NEXT_ORDERED_SERVICE)(
    IN DWORD OrderingMethod,
    IN DWORD ExclusionFlags,
    IN OUT PIPX_SERVICE Service
    );
typedef
DWORD
(WINAPI * PDO_UPDATE_SERVICES) (
    IN ULONG InterfaceIndex
    );
typedef
BOOL
(WINAPI * PGET_SERVICE_ID)(
      IN USHORT Type,
      IN PUCHAR Name,
      OUT PULONG ServiceID
      );
typedef
BOOL
(WINAPI * PGET_SERVICE_FROM_ID)(
      IN ULONG ServiceID,
      OUT PIPX_SERVICE Service
      );
typedef
DWORD
(WINAPI * PGET_NEXT_SERVICE_FROM_ID)(
      IN ULONG ServiceID,
      OUT PIPX_SERVICE NextService,
      OUT PULONG NextServiceID
      );
typedef struct _MPR40_SERVICE_CHARACTERISTICS
{
    DWORD dwVersion;
    DWORD dwProtocolId;
    DWORD fSupportedFunctionality;
    PIS_SERVICE pfnIsService;
    PDO_UPDATE_SERVICES pfnUpdateServices;
    PCREATE_SERVICE_ENUMERATION_HANDLE pfnCreateServiceEnumerationHandle;
    PENUMERATE_GET_NEXT_SERVICE pfnEnumerateGetNextService;
    PCLOSE_SERVICE_ENUMERATION_HANDLE pfnCloseServiceEnumerationHandle;
    PGET_SERVICE_COUNT pfnGetServiceCount;
    PCREATE_STATIC_SERVICE pfnCreateStaticService;
    PDELETE_STATIC_SERVICE pfnDeleteStaticService;
    PBLOCK_CONVERT_SERVICES_TO_STATIC pfnBlockConvertServicesToStatic;
    PBLOCK_DELETE_STATIC_SERVICES pfnBlockDeleteStaticServices;
    PGET_FIRST_ORDERED_SERVICE pfnGetFirstOrderedService;
    PGET_NEXT_ORDERED_SERVICE pfnGetNextOrderedService;
}MPR40_SERVICE_CHARACTERISTICS;
typedef struct _MPR50_SERVICE_CHARACTERISTICS
{
    MPR40_SERVICE_CHARACTERISTICS mscMpr40ServiceChars;
}MPR50_SERVICE_CHARACTERISTICS;
typedef MPR_SERVICE_CHARACTERISTICS *PMPR_SERVICE_CHARACTERISTICS;
#pragma warning(default:4201)
#endif
#pragma endregion
