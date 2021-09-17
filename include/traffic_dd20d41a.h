#include <winapifamily.h>
#pragma region Desktop Family or Traffic Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_TRAFFIC)
extern "C" {
#include <qosobjs.h>
typedef
VOID (CALLBACK * TCI_NOTIFY_HANDLER)(
    _In_ HANDLE ClRegCtx,
    _In_ HANDLE ClIfcCtx,
    _In_ ULONG Event,
    _In_ HANDLE SubCode,
    _In_ ULONG BufSize,
    _In_reads_bytes_(BufSize) PVOID Buffer
    );
typedef
VOID (CALLBACK * TCI_ADD_FLOW_COMPLETE_HANDLER)(
    _In_ HANDLE ClFlowCtx,
    _In_ ULONG Status
    );
typedef
VOID (CALLBACK * TCI_MOD_FLOW_COMPLETE_HANDLER)(
    _In_ HANDLE ClFlowCtx,
    _In_ ULONG Status
    );
typedef
VOID (CALLBACK * TCI_DEL_FLOW_COMPLETE_HANDLER)(
    _In_ HANDLE ClFlowCtx,
    _In_ ULONG Status
    );
typedef struct _TCI_CLIENT_FUNC_LIST {
    TCI_NOTIFY_HANDLER ClNotifyHandler;
    TCI_ADD_FLOW_COMPLETE_HANDLER ClAddFlowCompleteHandler;
    TCI_MOD_FLOW_COMPLETE_HANDLER ClModifyFlowCompleteHandler;
    TCI_DEL_FLOW_COMPLETE_HANDLER ClDeleteFlowCompleteHandler;
} TCI_CLIENT_FUNC_LIST, *PTCI_CLIENT_FUNC_LIST;
typedef struct _ADDRESS_LIST_DESCRIPTOR {
    ULONG MediaType;
    NETWORK_ADDRESS_LIST AddressList;
} ADDRESS_LIST_DESCRIPTOR, *PADDRESS_LIST_DESCRIPTOR;
typedef struct _TC_IFC_DESCRIPTOR {
    ULONG Length;
    LPWSTR pInterfaceName;
    LPWSTR pInterfaceID;
    ADDRESS_LIST_DESCRIPTOR AddressListDesc;
} TC_IFC_DESCRIPTOR, *PTC_IFC_DESCRIPTOR;
typedef struct _TC_SUPPORTED_INFO_BUFFER {
    USHORT InstanceIDLength;
    WCHAR InstanceID[MAX_STRING_LENGTH];
    ULONG64 InterfaceLuid;
    ADDRESS_LIST_DESCRIPTOR AddrListDesc;
} TC_SUPPORTED_INFO_BUFFER, *PTC_SUPPORTED_INFO_BUFFER;
typedef struct _TC_GEN_FILTER {
    USHORT AddressType;
    ULONG PatternSize;
    _Field_size_bytes_(PatternSize) PVOID Pattern;
    _Field_size_bytes_(PatternSize) PVOID Mask;
} TC_GEN_FILTER, *PTC_GEN_FILTER;
typedef struct _TC_GEN_FLOW {
    FLOWSPEC SendingFlowspec;
    FLOWSPEC ReceivingFlowspec;
    ULONG TcObjectsLength;
    QOS_OBJECT_HDR TcObjects[1];
} TC_GEN_FLOW, *PTC_GEN_FLOW;
typedef struct _IP_PATTERN {
    ULONG Reserved1;
    ULONG Reserved2;
    ULONG SrcAddr;
    ULONG DstAddr;
    union {
        struct { USHORT s_srcport,s_dstport; } S_un_ports;
        struct { UCHAR s_type,s_code; USHORT filler; } S_un_icmp;
        ULONG S_Spi;
    } S_un;
    UCHAR ProtocolId;
    UCHAR Reserved3[3];
} IP_PATTERN, *PIP_PATTERN;
typedef struct _IPX_PATTERN {
    struct {
        ULONG NetworkAddress;
        UCHAR NodeAddress[6];
        USHORT Socket;
    } Src, Dest;
} IPX_PATTERN, *PIPX_PATTERN;
typedef struct _ENUMERATION_BUFFER {
    ULONG Length;
    ULONG OwnerProcessId;
    USHORT FlowNameLength;
    WCHAR FlowName[MAX_STRING_LENGTH];
    PTC_GEN_FLOW pFlow;
    ULONG NumberOfFilters;
    TC_GEN_FILTER GenericFilter[1];
} ENUMERATION_BUFFER, *PENUMERATION_BUFFER;
ULONG
APIENTRY
TcRegisterClient(
    _In_ ULONG TciVersion,
    _In_ HANDLE ClRegCtx,
    _In_ PTCI_CLIENT_FUNC_LIST ClientHandlerList,
    _Out_ PHANDLE pClientHandle
    );
ULONG
APIENTRY
TcEnumerateInterfaces(
    _In_ HANDLE ClientHandle,
    _Inout_ PULONG pBufferSize,
    _Out_ PTC_IFC_DESCRIPTOR InterfaceBuffer
    );
ULONG
APIENTRY
TcOpenInterfaceA(
    _In_ LPSTR pInterfaceName,
    _In_ HANDLE ClientHandle,
    _In_ HANDLE ClIfcCtx,
    _Out_ PHANDLE pIfcHandle
    );
ULONG
APIENTRY
TcOpenInterfaceW(
    _In_ LPWSTR pInterfaceName,
    _In_ HANDLE ClientHandle,
    _In_ HANDLE ClIfcCtx,
    _Out_ PHANDLE pIfcHandle
    );
ULONG
APIENTRY
TcCloseInterface(
    _In_ HANDLE IfcHandle
    );
ULONG
APIENTRY
TcQueryInterface(
    _In_ HANDLE IfcHandle,
    _In_ LPGUID pGuidParam,
    _In_ BOOLEAN NotifyChange,
    _Inout_ PULONG pBufferSize,
    _Out_writes_bytes_(*pBufferSize) PVOID Buffer
    );
ULONG
APIENTRY
TcSetInterface(
    _In_ HANDLE IfcHandle,
    _In_ LPGUID pGuidParam,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PVOID Buffer
    );
ULONG
APIENTRY
TcQueryFlowA(
    _In_ LPSTR pFlowName,
    _In_ LPGUID pGuidParam,
    _Inout_ PULONG pBufferSize,
    _Out_writes_bytes_(*pBufferSize) PVOID Buffer
    );
ULONG
APIENTRY
TcQueryFlowW(
    _In_ LPWSTR pFlowName,
    _In_ LPGUID pGuidParam,
    _Inout_ PULONG pBufferSize,
    _Out_writes_bytes_(*pBufferSize) PVOID Buffer
    );
ULONG
APIENTRY
TcSetFlowA(
    _In_ LPSTR pFlowName,
    _In_ LPGUID pGuidParam,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PVOID Buffer
    );
ULONG
APIENTRY
TcSetFlowW(
    _In_ LPWSTR pFlowName,
    _In_ LPGUID pGuidParam,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PVOID Buffer
    );
ULONG
APIENTRY
TcAddFlow(
    _In_ HANDLE IfcHandle,
    _In_ HANDLE ClFlowCtx,
    _In_ ULONG Flags,
    _In_ PTC_GEN_FLOW pGenericFlow,
    _Out_ PHANDLE pFlowHandle
    );
ULONG
APIENTRY
TcGetFlowNameA(
    _In_ HANDLE FlowHandle,
    _In_ ULONG StrSize,
    _Out_writes_(StrSize) LPSTR pFlowName
    );
ULONG
APIENTRY
TcGetFlowNameW(
    _In_ HANDLE FlowHandle,
    _In_ ULONG StrSize,
    _Out_writes_(StrSize) LPWSTR pFlowName
    );
ULONG
APIENTRY
TcModifyFlow(
    _In_ HANDLE FlowHandle,
    _In_ PTC_GEN_FLOW pGenericFlow
    );
ULONG
APIENTRY
TcAddFilter(
    _In_ HANDLE FlowHandle,
    _In_ PTC_GEN_FILTER pGenericFilter,
    _Out_ PHANDLE pFilterHandle
    );
ULONG
APIENTRY
TcDeregisterClient(
    _In_ HANDLE ClientHandle
    );
ULONG
APIENTRY
TcDeleteFlow(
    _In_ HANDLE FlowHandle
    );
ULONG
APIENTRY
TcDeleteFilter(
    _In_ HANDLE FilterHandle
    );
ULONG
APIENTRY
TcEnumerateFlows(
    _In_ HANDLE IfcHandle,
    _Inout_ PHANDLE pEnumHandle,
    _Inout_ PULONG pFlowCount,
    _Inout_ PULONG pBufSize,
    _Out_ PENUMERATION_BUFFER Buffer
    );
}
#endif
#pragma endregion
