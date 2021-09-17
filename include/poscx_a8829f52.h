    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef VOID (*PPOSCX_EXPORTED_INTERFACES)(VOID);
extern PPOSCX_EXPORTED_INTERFACES PoscxFunctions [];
typedef struct _WDF_DRIVER_GLOBALS POSCX_DRIVER_GLOBALS, *PPOSCX_DRIVER_GLOBALS;
typedef WDFOBJECT POSOBJECT, *PPOSOBJECT;
#include "PoscxFuncEnum.h"
typedef enum _POS_CX_EVENT_DEST {
    POS_CX_EVENT_DEST_INVALID = 0,
    POS_CX_EVENT_DEST_DEVICE_OWNER = 1,
    POS_CX_EVENT_DEST_ALL = 2,
    POS_CX_EVENT_DEST__MAX,
} POS_CX_EVENT_DEST;
typedef enum _POS_CX_EVENT_PRIORITY {
    POS_CX_EVENT_PRIORITY_INVALID = 0,
    POS_CX_EVENT_PRIORITY_DATA = 1,
    POS_CX_EVENT_PRIORITY_CONTROL = 2,
    POS_CX_EVENT_PRIORITY__MAX,
} POS_CX_EVENT_PRIORITY;
typedef enum _POS_CX_EVENT_ATTRIBUTES {
    POS_CX_EVENT_ATTR_DATA = ((POS_CX_EVENT_DEST_DEVICE_OWNER << 8) | POS_CX_EVENT_PRIORITY_DATA),
    POS_CX_EVENT_ATTR_CONTROL = ((POS_CX_EVENT_DEST_DEVICE_OWNER << 8) | POS_CX_EVENT_PRIORITY_CONTROL),
    POS_CX_EVENT_ATTR_BCAST_CONTROL = ((POS_CX_EVENT_DEST_ALL << 8) | POS_CX_EVENT_PRIORITY_CONTROL),
} POS_CX_EVENT_ATTRIBUTES;
typedef
_Function_class_(EVT_POS_CX_DEVICE_OWNERSHIP_CHANGE)
_IRQL_requires_same_
VOID
EVT_POS_CX_DEVICE_OWNERSHIP_CHANGE(
    _In_
    WDFDEVICE device,
    _In_opt_
    WDFFILEOBJECT oldOwnerFileObj,
    _In_opt_
    WDFFILEOBJECT newOwnerFileObj
    );
typedef EVT_POS_CX_DEVICE_OWNERSHIP_CHANGE *PFN_POS_CX_DEVICE_OWNERSHIP_CHANGE;
typedef
_Function_class_(EVT_POS_CX_DEVICE_REMOTE_CLAIM)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_POS_CX_DEVICE_REMOTE_CLAIM(
    _In_
    WDFDEVICE device,
    ULONG deviceInterfaceTag
    );
typedef EVT_POS_CX_DEVICE_REMOTE_CLAIM *PFN_POS_CX_DEVICE_REMOTE_CLAIM;
typedef
_Function_class_(EVT_POS_CX_DEVICE_REMOTE_RELEASE)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_POS_CX_DEVICE_REMOTE_RELEASE(
    _In_
    WDFDEVICE device,
    ULONG deviceInterfaceTag
    );
typedef EVT_POS_CX_DEVICE_REMOTE_RELEASE *PFN_POS_CX_DEVICE_REMOTE_RELEASE;
typedef
_Function_class_(EVT_POS_CX_DEVICE_REMOTE_RETAIN)
_IRQL_requires_same_
_Check_return_
NTSTATUS
EVT_POS_CX_DEVICE_REMOTE_RETAIN(
    _In_
    WDFDEVICE device,
    ULONG deviceInterfaceTag
    );
typedef EVT_POS_CX_DEVICE_REMOTE_RETAIN *PFN_POS_CX_DEVICE_REMOTE_RETAIN;
typedef struct _POS_CX_ATTRIBUTES {
    PFN_POS_CX_DEVICE_OWNERSHIP_CHANGE EvtDeviceOwnershipChange;
    PFN_POS_CX_DEVICE_REMOTE_CLAIM EvtDeviceRemoteClaim;
    PFN_POS_CX_DEVICE_REMOTE_RELEASE EvtDeviceRemoteRelease;
    PFN_POS_CX_DEVICE_REMOTE_RETAIN EvtDeviceRemoteRetain;
} POS_CX_ATTRIBUTES;
VOID
FORCEINLINE
POS_CX_ATTRIBUTES_INIT(
    _Out_ POS_CX_ATTRIBUTES *PosCxAttrPtr
    )
{
    RtlZeroMemory(PosCxAttrPtr, sizeof(*PosCxAttrPtr));
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXCLAIMDEVICE)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFREQUEST request
    );
NTSTATUS
FORCEINLINE
PosCxClaimDevice(
    _In_
    WDFDEVICE device,
    _In_
    WDFREQUEST request
    )
{
    return ((PFN_POSCXCLAIMDEVICE) PoscxFunctions[PosCxClaimDeviceTableIndex])(PoscxDriverGlobals, device, request);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXINIT)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    POS_CX_ATTRIBUTES* posCxAttrPtr
    );
NTSTATUS
FORCEINLINE
PosCxInit(
    _In_
    WDFDEVICE device,
    _In_
    POS_CX_ATTRIBUTES* posCxAttrPtr
    )
{
    return ((PFN_POSCXINIT) PoscxFunctions[PosCxInitTableIndex])(PoscxDriverGlobals, device, posCxAttrPtr);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXRETAINDEVICE)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFREQUEST request
    );
NTSTATUS
FORCEINLINE
PosCxRetainDevice(
    _In_
    WDFDEVICE device,
    _In_
    WDFREQUEST request
    )
{
    return ((PFN_POSCXRETAINDEVICE) PoscxFunctions[PosCxRetainDeviceTableIndex])(PoscxDriverGlobals, device, request);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXREMOTEREQUESTRELEASE)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    ULONG deviceInterfaceTag
    );
NTSTATUS
FORCEINLINE
PosCxRemoteRequestRelease(
    _In_
    WDFDEVICE device,
    _In_
    ULONG deviceInterfaceTag
    )
{
    return ((PFN_POSCXREMOTEREQUESTRELEASE) PoscxFunctions[PosCxRemoteRequestReleaseTableIndex])(PoscxDriverGlobals, device, deviceInterfaceTag);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXRELEASEDEVICE)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    );
NTSTATUS
FORCEINLINE
PosCxReleaseDevice(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    )
{
    return ((PFN_POSCXRELEASEDEVICE) PoscxFunctions[PosCxReleaseDeviceTableIndex])(PoscxDriverGlobals, device, fileObject);
}
typedef
WDFAPI
BOOLEAN
(*PFN_POSCXISDEVICEOWNER)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    );
BOOLEAN
FORCEINLINE
PosCxIsDeviceOwner(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    )
{
    return ((PFN_POSCXISDEVICEOWNER) PoscxFunctions[PosCxIsDeviceOwnerTableIndex])(PoscxDriverGlobals, device, fileObject);
}
typedef
WDFAPI
ULONG
(*PFN_POSCXGETDEVICEINTERFACETAG)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFFILEOBJECT fileObject
    );
ULONG
FORCEINLINE
PosCxGetDeviceInterfaceTag(
    _In_
    WDFFILEOBJECT fileObject
    )
{
    return ((PFN_POSCXGETDEVICEINTERFACETAG) PoscxFunctions[PosCxGetDeviceInterfaceTagTableIndex])(PoscxDriverGlobals, fileObject);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXPUTPENDINGEVENT)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    ULONG deviceInterfaceTag,
    _In_
    ULONG eventType,
    _In_
    size_t rawEventDataSize,
    _In_reads_opt_(rawEventDataSize)
    PVOID rawEventDataPtr,
    _In_
    POS_CX_EVENT_ATTRIBUTES eventAttr
    );
NTSTATUS
FORCEINLINE
PosCxPutPendingEvent(
    _In_
    WDFDEVICE device,
    _In_
    ULONG deviceInterfaceTag,
    _In_
    ULONG eventType,
    _In_
    size_t rawEventDataSize,
    _In_reads_opt_(rawEventDataSize)
    PVOID rawEventDataPtr,
    _In_
    POS_CX_EVENT_ATTRIBUTES eventAttr
    )
{
    return ((PFN_POSCXPUTPENDINGEVENT) PoscxFunctions[PosCxPutPendingEventTableIndex])(PoscxDriverGlobals, device, deviceInterfaceTag, eventType, rawEventDataSize, rawEventDataPtr, eventAttr);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXPUTPENDINGEVENTMEMORY)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    ULONG deviceInterfaceTag,
    _In_
    WDFMEMORY eventMemory,
    _In_
    POS_CX_EVENT_ATTRIBUTES eventAttr
    );
NTSTATUS
FORCEINLINE
PosCxPutPendingEventMemory(
    _In_
    WDFDEVICE device,
    _In_
    ULONG deviceInterfaceTag,
    _In_
    WDFMEMORY eventMemory,
    _In_
    POS_CX_EVENT_ATTRIBUTES eventAttr
    )
{
    return ((PFN_POSCXPUTPENDINGEVENTMEMORY) PoscxFunctions[PosCxPutPendingEventMemoryTableIndex])(PoscxDriverGlobals, device, deviceInterfaceTag, eventMemory, eventAttr);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXGETPENDINGEVENT)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFREQUEST request
    );
NTSTATUS
FORCEINLINE
PosCxGetPendingEvent(
    _In_
    WDFDEVICE device,
    _In_
    WDFREQUEST request
    )
{
    return ((PFN_POSCXGETPENDINGEVENT) PoscxFunctions[PosCxGetPendingEventTableIndex])(PoscxDriverGlobals, device, request);
}
typedef
WDFAPI
VOID
(*PFN_POSCXCLEANUPEVENTS)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    );
VOID
FORCEINLINE
PosCxCleanupEvents(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    )
{
    ((PFN_POSCXCLEANUPEVENTS) PoscxFunctions[PosCxCleanupEventsTableIndex])(PoscxDriverGlobals, device, fileObject);
}
typedef
WDFAPI
VOID
(*PFN_POSCXCLEANPENDINGREQUESTS)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_opt_
    WDFFILEOBJECT callerFileObj,
    _In_
    NTSTATUS completionStatus
    );
VOID
FORCEINLINE
PosCxCleanPendingRequests(
    _In_
    WDFDEVICE device,
    _In_opt_
    WDFFILEOBJECT callerFileObj,
    _In_
    NTSTATUS completionStatus
    )
{
    ((PFN_POSCXCLEANPENDINGREQUESTS) PoscxFunctions[PosCxCleanPendingRequestsTableIndex])(PoscxDriverGlobals, device, callerFileObj, completionStatus);
}
typedef
WDFAPI
BOOLEAN
(*PFN_POSCXISPOSAPP)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    );
BOOLEAN
FORCEINLINE
PosCxIsPosApp(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    )
{
    return ((PFN_POSCXISPOSAPP) PoscxFunctions[PosCxIsPosAppTableIndex])(PoscxDriverGlobals, device, fileObject);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXMARKPOSAPP)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject,
    _In_
    BOOLEAN isPosApp
    );
NTSTATUS
FORCEINLINE
PosCxMarkPosApp(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject,
    _In_
    BOOLEAN isPosApp
    )
{
    return ((PFN_POSCXMARKPOSAPP) PoscxFunctions[PosCxMarkPosAppTableIndex])(PoscxDriverGlobals, device, fileObject, isPosApp);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXOPEN)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject,
    _In_
    ULONG deviceInterfaceTag
    );
NTSTATUS
FORCEINLINE
PosCxOpen(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject,
    _In_
    ULONG deviceInterfaceTag
    )
{
    return ((PFN_POSCXOPEN) PoscxFunctions[PosCxOpenTableIndex])(PoscxDriverGlobals, device, fileObject, deviceInterfaceTag);
}
typedef
WDFAPI
NTSTATUS
(*PFN_POSCXCLOSE)(
    _In_
    PPOSCX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    );
NTSTATUS
FORCEINLINE
PosCxClose(
    _In_
    WDFDEVICE device,
    _In_
    WDFFILEOBJECT fileObject
    )
{
    return ((PFN_POSCXCLOSE) PoscxFunctions[PosCxCloseTableIndex])(PoscxDriverGlobals, device, fileObject);
}
WDF_EXTERN_C_END
