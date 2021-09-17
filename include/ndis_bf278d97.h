#include <ntddk.h>
EXTERN_C_START
       
typedef enum _NET_PNP_EVENT_CODE
{
    NetEventSetPower,
    NetEventQueryPower,
    NetEventQueryRemoveDevice,
    NetEventCancelRemoveDevice,
    NetEventReconfigure,
    NetEventBindList,
    NetEventBindsComplete,
    NetEventPnPCapabilities,
    NetEventPause,
    NetEventRestart,
    NetEventPortActivation,
    NetEventPortDeactivation,
    NetEventIMReEnableDevice,
    NetEventNDKEnable,
    NetEventNDKDisable,
    NetEventFilterPreDetach,
    NetEventBindFailed,
    NetEventSwitchActivate,
    NetEventAllowBindsAbove,
    NetEventInhibitBindsAbove,
    NetEventAllowStart,
    NetEventRequirePause,
    NetEventUploadGftFlowEntries,
    NetEventMaximum
} NET_PNP_EVENT_CODE, *PNET_PNP_EVENT_CODE;
typedef struct _NET_PNP_EVENT
{
    NET_PNP_EVENT_CODE NetEvent;
    PVOID Buffer;
    ULONG BufferLength;
    ULONG_PTR NdisReserved[4];
    ULONG_PTR TransportReserved[4];
    ULONG_PTR TdiReserved[4];
    ULONG_PTR TdiClientReserved[4];
} NET_PNP_EVENT, *PNET_PNP_EVENT;
typedef enum _NET_DEVICE_POWER_STATE
{
    NetDeviceStateUnspecified = 0,
    NetDeviceStateD0,
    NetDeviceStateD1,
    NetDeviceStateD2,
    NetDeviceStateD3,
    NetDeviceStateMaximum
} NET_DEVICE_POWER_STATE, *PNET_DEVICE_POWER_STATE;
       
#error NDIS_MINIPORT_DRIVER macro is reserved
#error NDIS_WDF macro is reserved
#include <ntstatus.h>
#include <netevent.h>
#include <driverspecs.h>
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef signed int INT, *PINT;
typedef unsigned int UINT, *PUINT;
typedef UNICODE_STRING NDIS_STRING, *PNDIS_STRING;
typedef PCUNICODE_STRING PCNDIS_STRING;
__drv_Mode_impl(NDIS_INCLUDED)
# error NDIS_STRICT must be defined to 1, or not defined at all
typedef PVOID NDIS_HANDLE, *PNDIS_HANDLE;
typedef _Return_type_success_(return >= 0) int NDIS_STATUS, *PNDIS_STATUS;
#if !NDIS_API_VERSION_AVAILABLE(NDIS_MINIPORT_MAJOR_VERSION, NDIS_MINIPORT_MINOR_VERSION)
# error NDIS: This NDIS API version is not supported on the target architecture.
#endif
#include <ndis/version.h>
    (sizeof(datatype), __annotation(L"ms-contexttype", purpose, L ## #datatype))
#include <ntddndis.h>
typedef CM_MCA_POS_DATA NDIS_MCA_POS_DATA, *PNDIS_MCA_POS_DATA;
typedef CM_EISA_SLOT_INFORMATION NDIS_EISA_SLOT_INFORMATION, *PNDIS_EISA_SLOT_INFORMATION;
typedef CM_EISA_FUNCTION_INFORMATION NDIS_EISA_FUNCTION_INFORMATION, *PNDIS_EISA_FUNCTION_INFORMATION;
                            NdisMoveMappedMemory(Destination,Source,Length)
                            NdisMoveMappedMemory(Destination,Source,Length)
typedef struct _NDIS_SPIN_LOCK
{
    KSPIN_LOCK SpinLock;
    KIRQL OldIrql;
} NDIS_SPIN_LOCK, * PNDIS_SPIN_LOCK;
typedef struct _NDIS_EVENT
{
    KEVENT Event;
} NDIS_EVENT, *PNDIS_EVENT;
struct _NDIS_WORK_ITEM;
typedef
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
VOID NDIS_PROC_CALLBACK(
    _In_ struct _NDIS_WORK_ITEM * WorkItem,
    _In_opt_ PVOID Context);
typedef NDIS_PROC_CALLBACK *NDIS_PROC;
typedef struct _NDIS_WORK_ITEM
{
    PVOID Context;
    NDIS_PROC Routine;
    UCHAR WrapperReserved[8*sizeof(PVOID)];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM;
typedef KINTERRUPT_MODE NDIS_INTERRUPT_MODE, *PNDIS_INTERRUPT_MODE;
typedef enum _NDIS_PARAMETER_TYPE
{
    NdisParameterInteger,
    NdisParameterHexInteger,
    NdisParameterString,
    NdisParameterMultiString,
    NdisParameterBinary
} NDIS_PARAMETER_TYPE, *PNDIS_PARAMETER_TYPE;
typedef struct
{
    USHORT Length;
    _Field_size_bytes_(Length)
    PVOID Buffer;
} BINARY_DATA;
typedef struct _NDIS_CONFIGURATION_PARAMETER
{
    NDIS_PARAMETER_TYPE ParameterType;
    union
    {
        ULONG IntegerData;
        NDIS_STRING StringData;
        BINARY_DATA BinaryData;
    } ParameterData;
} NDIS_CONFIGURATION_PARAMETER, *PNDIS_CONFIGURATION_PARAMETER;
typedef enum _NDIS_PROCESSOR_TYPE
{
    NdisProcessorX86,
    NdisProcessorMips,
    NdisProcessorAlpha,
    NdisProcessorPpc,
    NdisProcessorAmd64,
    NdisProcessorIA64,
    NdisProcessorArm,
    NdisProcessorArm64
} NDIS_PROCESSOR_TYPE, *PNDIS_PROCESSOR_TYPE;
typedef enum _NDIS_ENVIRONMENT_TYPE
{
    NdisEnvironmentWindows,
    NdisEnvironmentWindowsNt
} NDIS_ENVIRONMENT_TYPE, *PNDIS_ENVIRONMENT_TYPE;
typedef enum _NDIS_INTERFACE_TYPE
{
    NdisInterfaceInternal = Internal,
    NdisInterfaceIsa = Isa,
    NdisInterfaceEisa = Eisa,
    NdisInterfaceMca = MicroChannel,
    NdisInterfaceTurboChannel = TurboChannel,
    NdisInterfacePci = PCIBus,
    NdisInterfacePcMcia = PCMCIABus,
    NdisInterfaceCBus = CBus,
    NdisInterfaceMPIBus = MPIBus,
    NdisInterfaceMPSABus = MPSABus,
    NdisInterfaceProcessorInternal = ProcessorInternal,
    NdisInterfaceInternalPowerBus = InternalPowerBus,
    NdisInterfacePNPISABus = PNPISABus,
    NdisInterfacePNPBus = PNPBus,
    NdisInterfaceUSB,
    NdisInterfaceIrda,
    NdisInterface1394,
    NdisMaximumInterfaceType
} NDIS_INTERFACE_TYPE, *PNDIS_INTERFACE_TYPE;
typedef CM_PARTIAL_RESOURCE_LIST NDIS_RESOURCE_LIST, *PNDIS_RESOURCE_LIST;
typedef struct _NDIS_WAN_LINE_UP
{
    IN ULONG LinkSpeed;
    IN ULONG MaximumTotalSize;
    IN NDIS_WAN_QUALITY Quality;
    IN USHORT SendWindow;
    IN UCHAR RemoteAddress[6];
    IN OUT UCHAR LocalAddress[6];
    IN ULONG ProtocolBufferLength;
    IN PUCHAR ProtocolBuffer;
    IN USHORT ProtocolType;
    IN OUT NDIS_STRING DeviceName;
} NDIS_WAN_LINE_UP, *PNDIS_WAN_LINE_UP;
typedef struct _NDIS_WAN_LINE_DOWN
{
    IN UCHAR RemoteAddress[6];
    IN UCHAR LocalAddress[6];
} NDIS_WAN_LINE_DOWN, *PNDIS_WAN_LINE_DOWN;
typedef struct _NDIS_WAN_FRAGMENT
{
    IN UCHAR RemoteAddress[6];
    IN UCHAR LocalAddress[6];
} NDIS_WAN_FRAGMENT, *PNDIS_WAN_FRAGMENT;
typedef struct _NDIS_WAN_GET_STATS
{
    IN UCHAR LocalAddress[6];
    OUT ULONG BytesSent;
    OUT ULONG BytesRcvd;
    OUT ULONG FramesSent;
    OUT ULONG FramesRcvd;
    OUT ULONG CRCErrors;
    OUT ULONG TimeoutErrors;
    OUT ULONG AlignmentErrors;
    OUT ULONG SerialOverrunErrors;
    OUT ULONG FramingErrors;
    OUT ULONG BufferOverrunErrors;
    OUT ULONG BytesTransmittedUncompressed;
    OUT ULONG BytesReceivedUncompressed;
    OUT ULONG BytesTransmittedCompressed;
    OUT ULONG BytesReceivedCompressed;
} NDIS_WAN_GET_STATS, *PNDIS_WAN_GET_STATS;
typedef MDL NDIS_BUFFER, *PNDIS_BUFFER;
typedef enum _NDIS_CLASS_ID
{
    NdisClass802_3Priority,
    NdisClassWirelessWanMbxMailbox,
    NdisClassIrdaPacketInfo,
    NdisClassAtmAALInfo
} NDIS_CLASS_ID;
typedef struct _MEDIA_SPECIFIC_INFORMATION
{
    UINT NextEntryOffset;
    NDIS_CLASS_ID ClassId;
    UINT Size;
    UCHAR ClassInformation[1];
} MEDIA_SPECIFIC_INFORMATION, *PMEDIA_SPECIFIC_INFORMATION;
typedef enum _NDIS_PER_PACKET_INFO
{
    TcpIpChecksumPacketInfo,
    IpSecPacketInfo,
    TcpLargeSendPacketInfo,
    ClassificationHandlePacketInfo,
    NdisReserved,
    ScatterGatherListPacketInfo,
    Ieee8021QInfo,
    OriginalPacketInfo,
    PacketCancelId,
    OriginalNetBufferList,
    CachedNetBufferList,
    ShortPacketPaddingInfo,
    MaxPerPacketInfo
} NDIS_PER_PACKET_INFO, *PNDIS_PER_PACKET_INFO;
typedef struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO
{
    union
    {
        struct
        {
            ULONG NdisPacketChecksumV4:1;
            ULONG NdisPacketChecksumV6:1;
            ULONG NdisPacketTcpChecksum:1;
            ULONG NdisPacketUdpChecksum:1;
            ULONG NdisPacketIpChecksum:1;
        } Transmit;
        struct
        {
            ULONG NdisPacketTcpChecksumFailed:1;
            ULONG NdisPacketUdpChecksumFailed:1;
            ULONG NdisPacketIpChecksumFailed:1;
            ULONG NdisPacketTcpChecksumSucceeded:1;
            ULONG NdisPacketUdpChecksumSucceeded:1;
            ULONG NdisPacketIpChecksumSucceeded:1;
            ULONG NdisPacketLoopback:1;
        } Receive;
        ULONG Value;
    };
} NDIS_TCP_IP_CHECKSUM_PACKET_INFO, *PNDIS_TCP_IP_CHECKSUM_PACKET_INFO;
typedef struct _NDIS_PACKET_8021Q_INFO
{
    union
    {
        struct
        {
            UINT32 UserPriority:3;
            UINT32 CanonicalFormatId:1;
            UINT32 VlanId:12;
            UINT32 Reserved:16;
        } TagHeader;
        PVOID Value;
    };
} NDIS_PACKET_8021Q_INFO, *PNDIS_PACKET_8021Q_INFO;
typedef ULONG NDIS_AF, *PNDIS_AF;
typedef struct
{
    NDIS_AF AddressFamily;
    ULONG MajorVersion;
    ULONG MinorVersion;
} CO_ADDRESS_FAMILY, *PCO_ADDRESS_FAMILY;
typedef struct
{
    ULONG SapType;
    ULONG SapLength;
    UCHAR Sap[1];
} CO_SAP, *PCO_SAP;
typedef PHYSICAL_ADDRESS NDIS_PHYSICAL_ADDRESS, *PNDIS_PHYSICAL_ADDRESS;
typedef struct _NDIS_PHYSICAL_ADDRESS_UNIT
{
    NDIS_PHYSICAL_ADDRESS PhysicalAddress;
    UINT Length;
} NDIS_PHYSICAL_ADDRESS_UNIT, *PNDIS_PHYSICAL_ADDRESS_UNIT;
        ((_PhysicalAddress).HighPart)
     ((_PhysicalAddress).HighPart) = (_Value)
    ((_PhysicalAddress).LowPart)
    ((_PhysicalAddress).LowPart) = (_Value)
    { (ULONG)(_Low), (LONG)(_High) }
typedef struct _REFERENCE
{
    KSPIN_LOCK SpinLock;
    USHORT ReferenceCount;
    BOOLEAN Closing;
} REFERENCE, * PREFERENCE;
#pragma deprecated(NDIS_OPEN_RECEIVE_NOT_REENTRANT)
_IRQL_requires_max_(HIGH_LEVEL)
VOID
__inline
NdisAllocateSpinLock(_Out_ PNDIS_SPIN_LOCK SpinLock)
{
    KeInitializeSpinLock(&SpinLock->SpinLock);
}
_IRQL_requires_max_(HIGH_LEVEL)
VOID
__inline
NdisFreeSpinLock(_In_ PNDIS_SPIN_LOCK SpinLock)
{
    UNREFERENCED_PARAMETER(SpinLock);
}
{ \
    KeAcquireSpinLockAtDpcLevel(&(_SpinLock)->SpinLock); \
}
    { \
        KeQuerySystemTime(_pSystemTime); \
    }
    ExInterlockedAddUlong(_Addend, _Increment, &(_SpinLock)->SpinLock)
    ExInterlockedInsertHeadList(_ListHead, _ListEntry, &(_SpinLock)->SpinLock)
    ExInterlockedInsertTailList(_ListHead, _ListEntry, &(_SpinLock)->SpinLock)
    ExInterlockedRemoveHeadList(_ListHead, &(_SpinLock)->SpinLock)
    ExInterlockedPushEntryList(ListHead, ListEntry, &(Lock)->SpinLock)
    ExInterlockedPopEntryList(ListHead, &(Lock)->SpinLock)
typedef union _NDIS_RW_LOCK_REFCOUNT
{
    ULONG RefCount;
    UCHAR cacheLine[16];
} NDIS_RW_LOCK_REFCOUNT;
typedef struct _NDIS_RW_LOCK
{
    union
    {
        struct
        {
            KSPIN_LOCK SpinLock;
            PVOID Context;
        };
        UCHAR Reserved[16];
    };
    union
    {
        NDIS_RW_LOCK_REFCOUNT RefCount[MAXIMUM_PROCESSORS];
        ULONG RefCountEx[sizeof(NDIS_RW_LOCK_REFCOUNT)/sizeof(ULONG)
                                           * MAXIMUM_PROCESSORS];
        struct
        {
            KSPIN_LOCK RefCountLock;
            volatile ULONG SharedRefCount;
            volatile BOOLEAN WriterWaiting;
        };
    };
} NDIS_RW_LOCK, *PNDIS_RW_LOCK;
typedef struct _LOCK_STATE
{
    USHORT LockState;
    KIRQL OldIrql;
} LOCK_STATE, *PLOCK_STATE;
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisInitializeReadWriteLock(
    _Out_ PNDIS_RW_LOCK Lock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_raises_(DISPATCH_LEVEL)
EXPORT
VOID
NdisAcquireReadWriteLock(
    _Inout_ _Acquires_lock_(_Curr_) PNDIS_RW_LOCK Lock,
    _In_ BOOLEAN fWrite,
    _Out_ _IRQL_saves_
    _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
                                                        PLOCK_STATE LockState
    );
_IRQL_requires_(DISPATCH_LEVEL)
EXPORT
VOID
NdisReleaseReadWriteLock(
    _Inout_ _Releases_lock_(_Curr_) PNDIS_RW_LOCK Lock,
    _In_ _IRQL_restores_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
                                                        PLOCK_STATE LockState
    );
    ExInterlockedAddLargeStatistic((PLARGE_INTEGER)_Addend, _Increment)
    ExInterlockedPushEntrySList(SListHead, SListEntry, &(Lock)->SpinLock)
    ExInterlockedPopEntrySList(SListHead, &(Lock)->SpinLock)
_IRQL_requires_max_(APC_LEVEL)
_Success_(*Status >= 0)
EXPORT
VOID
NdisOpenConfigurationKeyByName(
    _At_(*Status, _Must_inspect_result_)
    _Out_ PNDIS_STATUS Status,
    _In_ NDIS_HANDLE ConfigurationHandle,
    _In_ PNDIS_STRING SubKeyName,
    _Out_ PNDIS_HANDLE SubKeyHandle
    );
_IRQL_requires_max_(APC_LEVEL)
_Success_(*Status >= 0)
EXPORT
VOID
NdisOpenConfigurationKeyByIndex(
    _At_(*Status, _Must_inspect_result_)
    _Out_ PNDIS_STATUS Status,
    _In_ NDIS_HANDLE ConfigurationHandle,
    _In_ ULONG Index,
    _Out_ PNDIS_STRING KeyName,
    _Out_ PNDIS_HANDLE KeyHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
_Success_(*Status >= 0)
EXPORT
VOID
NdisReadConfiguration(
    _At_(*Status, _Must_inspect_result_)
    _Out_ PNDIS_STATUS Status,
    _Out_ PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
    _In_ NDIS_HANDLE ConfigurationHandle,
    _In_ PNDIS_STRING Keyword,
    _In_ NDIS_PARAMETER_TYPE ParameterType
    );
_IRQL_requires_(PASSIVE_LEVEL)
_Success_(*Status >= 0)
EXPORT
VOID
NdisWriteConfiguration(
    _At_(*Status, _Must_inspect_result_)
    _Out_ PNDIS_STATUS Status,
    _In_ NDIS_HANDLE ConfigurationHandle,
    _In_ PNDIS_STRING Keyword,
    _In_ PNDIS_CONFIGURATION_PARAMETER ParameterValue
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisCloseConfiguration(
    _In_ __drv_freesMem(mem) NDIS_HANDLE ConfigurationHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
_Success_(*Status >= 0)
EXPORT
VOID
NdisReadNetworkAddress(
    _At_(*Status, _Must_inspect_result_)
    _Out_ PNDIS_STATUS Status,
    _Outptr_result_bytebuffer_to_(*NetworkAddressLength, *NetworkAddressLength) PVOID *NetworkAddress,
    _Out_ PUINT NetworkAddressLength,
    _In_ NDIS_HANDLE ConfigurationHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCopyBuffer(
    _Out_ PNDIS_STATUS Status,
    _Out_ PNDIS_BUFFER * Buffer,
    _In_ NDIS_HANDLE PoolHandle,
    _In_ PVOID MemoryDescriptor,
    _In_ UINT Offset,
    _In_ UINT Length
    );
    { \
        if ((_MacOptions) & NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA) \
        { \
            RtlCopyMemory(_Destination, _Source, _Length); \
        } \
        else \
        { \
            PUCHAR _Src = (PUCHAR)(_Source); \
            PUCHAR _Dest = (PUCHAR)(_Destination); \
            PUCHAR _End = _Dest + (_Length); \
            while (_Dest < _End) \
            { \
                *_Dest++ = *_Src++; \
            } \
        } \
    }
{ \
    if (ARGUMENT_PRESENT(_VirtualAddress)) \
    { \
        *(PVOID *)(_VirtualAddress) = MmGetSystemAddressForMdlSafe(_Buffer, _Priority); \
    } \
    *(_Length) = MmGetMdlByteCount(_Buffer); \
}
{ \
    *(_Offset) = MmGetMdlByteOffset(_Buffer); \
    *(_Length) = MmGetMdlByteCount(_Buffer); \
}
    (MmGetMdlByteCount(_Buffer)==0 ? \
                1 : \
                (ADDRESS_AND_SIZE_TO_SPAN_PAGES( \
                        MmGetMdlVirtualAddress(_Buffer), \
                        MmGetMdlByteCount(_Buffer))))
    (*(ArraySize) = NDIS_BUFFER_TO_SPAN_PAGES(Buffer))
{ \
    *(NextBuffer) = (CurrentBuffer)->Next; \
}
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(return == 0)
EXPORT
NDIS_STATUS
NdisAllocateMemoryWithTag(
    _At_(*VirtualAddress, __drv_allocatesMem(Mem))
    _Outptr_result_bytebuffer_(Length)
          PVOID * VirtualAddress,
    _In_ UINT Length,
    _In_ ULONG Tag
    );
_When_(MemoryFlags==0,
    _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(MemoryFlags==NDIS_MEMORY_NONCACHED,
    _IRQL_requires_max_(APC_LEVEL))
_When_(MemoryFlags==NDIS_MEMORY_CONTIGUOUS,
    _IRQL_requires_(PASSIVE_LEVEL))
EXPORT
VOID
NdisFreeMemory(
    _In_reads_bytes_(Length) __drv_freesMem(Mem)
            PVOID VirtualAddress,
    _In_ UINT Length,
    _In_ _Pre_satisfies_(MemoryFlags ==0 || MemoryFlags == NDIS_MEMORY_NONCACHED || MemoryFlags ==NDIS_MEMORY_CONTIGUOUS)
            UINT MemoryFlags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisInitializeEvent(
    _Out_ PNDIS_EVENT Event
);
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisSetEvent(
    _In_ PNDIS_EVENT Event
);
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisResetEvent(
    _In_ PNDIS_EVENT Event
);
_When_(MsToWait !=0, _Check_return_)
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
BOOLEAN
NdisWaitEvent(
    _In_ PNDIS_EVENT Event,
    _In_ UINT MsToWait
);
        KeFlushIoBuffers((Buffer),!(WriteToDevice), TRUE)
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
ULONG
NdisGetSharedDataAlignment(
    VOID
    );
        WRITE_PORT_UCHAR((PUCHAR)(Port),(UCHAR)(Data))
        WRITE_PORT_USHORT((PUSHORT)(Port),(USHORT)(Data))
        WRITE_PORT_ULONG((PULONG)(Port),(ULONG)(Data))
        WRITE_PORT_BUFFER_UCHAR((PUCHAR)(Port),(PUCHAR)(Buffer),(Length))
{ \
        ULONG_PTR _Port = (ULONG_PTR)(Port); \
        PUSHORT _Current = (Buffer); \
        PUSHORT _End = _Current + (Length); \
        for ( ; _Current < _End; ++_Current) \
        { \
            WRITE_PORT_USHORT((PUSHORT)_Port,*(UNALIGNED USHORT *)_Current);\
        } \
}
{ \
        ULONG_PTR _Port = (ULONG_PTR)(Port); \
        PULONG _Current = (Buffer); \
        PULONG _End = _Current + (Length); \
        for ( ; _Current < _End; ++_Current) \
        { \
            WRITE_PORT_ULONG((PULONG)_Port,*(UNALIGNED ULONG *)_Current); \
        } \
}
        *(Data) = READ_PORT_UCHAR((PUCHAR)(Port))
        *(Data) = READ_PORT_USHORT((PUSHORT)(Port))
        *(Data) = READ_PORT_ULONG((PULONG)(Port))
        READ_PORT_BUFFER_UCHAR((PUCHAR)(Port),(PUCHAR)(Buffer),(Length))
{ \
        ULONG_PTR _Port = (ULONG_PTR)(Port); \
        PUSHORT _Current = (Buffer); \
        PUSHORT _End = _Current + (Length); \
        for ( ; _Current < _End; ++_Current) \
        { \
            *(UNALIGNED USHORT *)_Current = READ_PORT_USHORT((PUSHORT)_Port); \
        } \
}
{ \
        ULONG_PTR _Port = (ULONG_PTR)(Port); \
        PULONG _Current = (Buffer); \
        PULONG _End = _Current + (Length); \
        for ( ; _Current < _End; ++_Current) \
        { \
            *(UNALIGNED ULONG *)_Current = READ_PORT_ULONG((PULONG)_Port); \
        } \
}
    { \
        WRITE_REGISTER_UCHAR((Register),(Data)); \
        READ_REGISTER_UCHAR(Register); \
    }
    { \
        WRITE_REGISTER_USHORT((Register),(Data)); \
        READ_REGISTER_USHORT(Register); \
    }
    { \
        WRITE_REGISTER_ULONG((Register),(Data)); \
        READ_REGISTER_ULONG(Register); \
    }
            RtlEqualUnicodeString(_String1, _String2, _CaseInsensitive)
            RtlEqualUnicodeString(_String1, _String2, _CaseInsensitive)
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID __cdecl
NdisWriteErrorLogEntry(
    _In_ NDIS_HANDLE NdisAdapterHandle,
    _In_ NDIS_ERROR_CODE ErrorCode,
    _In_ ULONG NumberOfErrorValues,
    ...
    );
_IRQL_requires_(PASSIVE_LEVEL)
_Success_(Destination->Buffer != 0)
EXPORT
VOID
NdisInitializeString(
    _Out_ _At_(Destination->Buffer, __drv_allocatesMem(Mem))
        PNDIS_STRING Destination,
    _In_ _Null_terminated_ PUCHAR Source
    );
typedef struct _NDIS_WRAPPER_HANDLE NDIS_WRAPPER_HANDLE, *PNDIS_WRAPPER_HANDLE;
typedef struct _NDIS_PROTOCOL_BLOCK NDIS_PROTOCOL_BLOCK, *PNDIS_PROTOCOL_BLOCK;
typedef struct _NDIS_OPEN_BLOCK NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK;
typedef struct _NDIS_M_DRIVER_BLOCK NDIS_M_DRIVER_BLOCK, *PNDIS_M_DRIVER_BLOCK;
typedef struct _NDIS_MINIPORT_BLOCK NDIS_MINIPORT_BLOCK,*PNDIS_MINIPORT_BLOCK;
typedef struct _CO_CALL_PARAMETERS CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS;
typedef struct _CO_MEDIA_PARAMETERS CO_MEDIA_PARAMETERS, *PCO_MEDIA_PARAMETERS;
typedef struct _NDIS_CALL_MANAGER_CHARACTERISTICS *PNDIS_CALL_MANAGER_CHARACTERISTICS;
typedef struct _NDIS_OFFLOAD NDIS_OFFLOAD, *PNDIS_OFFLOAD;
typedef struct _NDIS_AF_LIST NDIS_AF_LIST, *PNDIS_AF_LIST;
typedef struct _X_FILTER ETH_FILTER, *PETH_FILTER;
typedef struct _X_FILTER TR_FILTER, *PTR_FILTER;
typedef struct _X_FILTER NULL_FILTER, *PNULL_FILTER;
typedef
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_requires_same_
_Function_class_(NDIS_TIMER_FUNCTION)
VOID
(NDIS_TIMER_FUNCTION) (
    _In_ PVOID SystemSpecific1,
    _In_ PVOID FunctionContext,
    _In_ PVOID SystemSpecific2,
    _In_ PVOID SystemSpecific3
    );
typedef NDIS_TIMER_FUNCTION (*PNDIS_TIMER_FUNCTION);
typedef struct _NDIS_TIMER
{
    KTIMER Timer;
    KDPC Dpc;
} NDIS_TIMER, *PNDIS_TIMER;
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisInitializeTimer(
    _Inout_ PNDIS_TIMER Timer,
    _In_ PNDIS_TIMER_FUNCTION TimerFunction,
    _In_opt_ _Points_to_data_
              PVOID FunctionContext
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCancelTimer(
    _In_ PNDIS_TIMER Timer,
    _Out_ _At_(*TimerCancelled, _Must_inspect_result_)
          PBOOLEAN TimerCancelled
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisSetTimer(
    _In_ PNDIS_TIMER Timer,
    _In_ UINT MillisecondsToDelay
    );
EXPORT
VOID
NdisSetPeriodicTimer(
    _In_ PNDIS_TIMER NdisTimer,
    _In_ UINT MillisecondsPeriod
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisSetTimerEx(
    _In_ PNDIS_TIMER NdisTimer,
    _In_ UINT MillisecondsToDelay,
    _In_ _Points_to_data_
          PVOID FunctionContext
    );
_IRQL_requires_max_(HIGH_LEVEL)
EXPORT
CCHAR
NdisSystemProcessorCount(
    VOID
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
PVOID
NdisGetRoutineAddress(
    _In_ PNDIS_STRING NdisRoutineName
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
UINT
NdisGetVersion(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
NdisInitializeNPagedLookasideList(
    _Out_ PNPAGED_LOOKASIDE_LIST Lookaside,
    _In_opt_ PALLOCATE_FUNCTION Allocate,
    _In_opt_ PFREE_FUNCTION Free,
    _In_ ULONG Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag,
    _In_ USHORT Depth
    )
{
    UINT Version;
    Version = NdisGetVersion();
    if (Version >= NDIS_RUNTIME_VERSION_630)
    {
        Flags |= POOL_NX_ALLOCATION;
    }
    ExInitializeNPagedLookasideList(
        Lookaside,
        Allocate,
        Free,
        Flags,
        Size,
        Tag,
        Depth);
}
#pragma warning(pop)
       
       
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(pop)
       
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(pop)
       
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CO_CREATE_VC)
NDIS_STATUS
(PROTOCOL_CO_CREATE_VC)(
    _In_ NDIS_HANDLE ProtocolAfContext,
    _In_ NDIS_HANDLE NdisVcHandle,
    _Out_ PNDIS_HANDLE ProtocolVcContext
    );
typedef PROTOCOL_CO_CREATE_VC (*CO_CREATE_VC_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CO_DELETE_VC)
NDIS_STATUS
(PROTOCOL_CO_DELETE_VC)(
    _In_ NDIS_HANDLE ProtocolVcContext
    );
typedef PROTOCOL_CO_DELETE_VC (*CO_DELETE_VC_HANDLER);
typedef
_IRQL_requires_(PASSIVE_LEVEL)
_Function_class_(PROTOCOL_CO_AF_REGISTER_NOTIFY)
VOID
(PROTOCOL_CO_AF_REGISTER_NOTIFY)(
    _In_ NDIS_HANDLE ProtocolBindingContext,
    _In_ PCO_ADDRESS_FAMILY AddressFamily
    );
typedef PROTOCOL_CO_AF_REGISTER_NOTIFY (*CO_AF_REGISTER_NOTIFY_HANDLER);
typedef PROTOCOL_CO_AF_REGISTER_NOTIFY PROTCOL_CO_AF_REGISTER_NOTIFY;
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisReEnumerateProtocolBindings(
    _In_ NDIS_HANDLE NdisProtocolHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisWriteEventLogEntry(
    _In_ _Points_to_data_
             PVOID LogHandle,
    _In_ NDIS_STATUS EventCode,
    _In_ ULONG UniqueEventValue,
    _In_ USHORT NumStrings,
    _In_opt_ PVOID StringsList,
    _In_ ULONG DataSize,
    _In_reads_bytes_opt_(DataSize)
             PVOID Data
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisQueryAdapterInstanceName(
    _Out_ PNDIS_STRING pAdapterInstanceName,
    _In_ NDIS_HANDLE NdisBindingHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisQueryBindInstanceName(
    _Out_ PNDIS_STRING pAdapterInstanceName,
    _In_ NDIS_HANDLE BindingContext
    );
typedef
NTSTATUS
(*TDI_REGISTER_CALLBACK)(
    _In_ PUNICODE_STRING DeviceName,
    _Out_ HANDLE * TdiHandle
    );
typedef
NTSTATUS
(*TDI_PNP_HANDLER)(
    _In_ PUNICODE_STRING UpperComponent,
    _In_ PUNICODE_STRING LowerComponent,
    _In_ PUNICODE_STRING BindList,
    _In_ PVOID ReconfigBuffer,
    _In_ UINT ReconfigBufferSize,
    _In_ UINT Operation
    );
EXPORT
VOID
NdisRegisterTdiCallBack(
    _In_ TDI_REGISTER_CALLBACK RegisterCallback,
    _In_ TDI_PNP_HANDLER PnPHandler
    );
EXPORT
VOID
NdisDeregisterTdiCallBack(
    VOID
    );
                        NdisBindingHandle, \
                        NdisLinkHandle, \
                        WanPacket) \
{ \
    *(Status) = \
        ((((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.WanSendHandler))( \
            ((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.BindingHandle, \
            (NdisLinkHandle), \
            (PNDIS_PACKET)(WanPacket)); \
}
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
UCHAR
NdisGeneratePartialCancelId(
    VOID
    );
#include <xfilter.h>
DECLARE_NDIS_HANDLE(NDIS_MINIPORT_DRIVER_CONTEXT);
DECLARE_NDIS_HANDLE(NDIS_MINIPORT_DRIVER_HANDLE);
DECLARE_NDIS_HANDLE(NDIS_MINIPORT_ADAPTER_CONTEXT);
DECLARE_NDIS_HANDLE(NDIS_MINIPORT_ADAPTER_HANDLE);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(MINIPORT_CO_CREATE_VC)
NDIS_STATUS
(MINIPORT_CO_CREATE_VC)(
    _In_ NDIS_HANDLE MiniportAdapterContext,
    _In_ NDIS_HANDLE NdisVcHandle,
    _Out_ PNDIS_HANDLE MiniportVcContext
    );
typedef MINIPORT_CO_CREATE_VC (*W_CO_CREATE_VC_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(MINIPORT_CO_DELETE_VC)
NDIS_STATUS
(MINIPORT_CO_DELETE_VC)(
    _In_ NDIS_HANDLE MiniportVcContext
    );
typedef MINIPORT_CO_DELETE_VC (*W_CO_DELETE_VC_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(MINIPORT_CO_ACTIVATE_VC)
NDIS_STATUS
(MINIPORT_CO_ACTIVATE_VC)(
    _In_ NDIS_HANDLE MiniportVcContext,
    _Inout_ PCO_CALL_PARAMETERS CallParameters
    );
typedef MINIPORT_CO_ACTIVATE_VC (*W_CO_ACTIVATE_VC_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(MINIPORT_CO_DEACTIVATE_VC)
NDIS_STATUS
(MINIPORT_CO_DEACTIVATE_VC)(
    _In_ NDIS_HANDLE MiniportVcContext
    );
typedef MINIPORT_CO_DEACTIVATE_VC (*W_CO_DEACTIVATE_VC_HANDLER);
typedef enum _NDIS_DEVICE_PNP_EVENT
{
    NdisDevicePnPEventQueryRemoved,
    NdisDevicePnPEventRemoved,
    NdisDevicePnPEventSurpriseRemoved,
    NdisDevicePnPEventQueryStopped,
    NdisDevicePnPEventStopped,
    NdisDevicePnPEventPowerProfileChanged,
    NdisDevicePnPEventMaximum
} NDIS_DEVICE_PNP_EVENT, *PNDIS_DEVICE_PNP_EVENT;
typedef enum _NDIS_POWER_PROFILE
{
    NdisPowerProfileBattery,
    NdisPowerProfileAcOnLine
} NDIS_POWER_PROFILE, *PNDIS_POWER_PROFILE;
typedef struct _NDIS_MINIPORT_TIMER
{
    KTIMER Timer;
    KDPC Dpc;
    PNDIS_TIMER_FUNCTION MiniportTimerFunction;
    PVOID MiniportTimerContext;
    PNDIS_MINIPORT_BLOCK Miniport;
    struct _NDIS_MINIPORT_TIMER *NextTimer;
} NDIS_MINIPORT_TIMER, *PNDIS_MINIPORT_TIMER;
typedef struct _NDIS_DMA_DESCRIPTION
{
    BOOLEAN DemandMode;
    BOOLEAN AutoInitialize;
    BOOLEAN DmaChannelSpecified;
    DMA_WIDTH DmaWidth;
    DMA_SPEED DmaSpeed;
    ULONG DmaPort;
    ULONG DmaChannel;
} NDIS_DMA_DESCRIPTION, *PNDIS_DMA_DESCRIPTION;
typedef struct _NDIS_DMA_BLOCK
{
    PVOID MapRegisterBase;
    KEVENT AllocationEvent;
    PVOID SystemAdapterObject;
    PVOID Miniport;
    BOOLEAN InProgress;
} NDIS_DMA_BLOCK, *PNDIS_DMA_BLOCK;
EXPORT
VOID
NdisSetupDmaTransfer(
    OUT PNDIS_STATUS Status,
    IN NDIS_HANDLE NdisDmaHandle,
    IN PNDIS_BUFFER Buffer,
    IN ULONG Offset,
    IN ULONG Length,
    IN BOOLEAN WriteToDevice
    );
EXPORT
VOID
NdisCompleteDmaTransfer(
    OUT PNDIS_STATUS Status,
    IN NDIS_HANDLE NdisDmaHandle,
    IN PNDIS_BUFFER Buffer,
    IN ULONG Offset,
    IN ULONG Length,
    IN BOOLEAN WriteToDevice
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisMRegisterDmaChannel(
    _Out_ PNDIS_HANDLE MiniportDmaHandle,
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ UINT DmaChannel,
    _In_ BOOLEAN Dma32BitAddresses,
    _In_ PNDIS_DMA_DESCRIPTION DmaDescription,
    _In_ ULONG MaximumLength
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisMDeregisterDmaChannel(
    _In_ NDIS_HANDLE MiniportDmaHandle
    );
        NdisSetupDmaTransfer(_S, _H, _B, _O, _L, _M_)
        NdisCompleteDmaTransfer(_S, _H, _B, _O, _L, _M_)
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
ULONG
NdisMReadDmaCounter(
    _In_ NDIS_HANDLE MiniportDmaHandle
    );
DECLSPEC_DEPRECATED_DDK
EXPORT
VOID
NdisUpdateSharedMemory(
    IN NDIS_HANDLE NdisAdapterHandle,
    IN ULONG Length,
    IN PVOID VirtualAddress,
    IN NDIS_PHYSICAL_ADDRESS PhysicalAddress
    );
typedef struct
{
    union
    {
        PETH_FILTER EthDB;
        PNULL_FILTER NullDB;
    };
    PTR_FILTER TrDB;
    PVOID YYYDB;
    PVOID XXXDB;
} FILTERDBS, *PFILTERDBS;
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisIMAssociateMiniport(
    _In_ NDIS_HANDLE DriverHandle,
    _In_ NDIS_HANDLE ProtocolHandle
    );
typedef UCHAR NDIS_DMA_SIZE;
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisMRegisterIoPortRange(
    _Out_ PVOID * PortOffset,
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ UINT InitialPort,
    _In_ UINT NumberOfPorts
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisMDeregisterIoPortRange(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ UINT InitialPort,
    _In_ UINT NumberOfPorts,
    _In_ PVOID PortOffset
    );
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisMMapIoSpace(
    _Outptr_result_bytebuffer_(Length) PVOID * VirtualAddress,
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ NDIS_PHYSICAL_ADDRESS PhysicalAddress,
    _In_ UINT Length
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisMUnmapIoSpace(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_reads_bytes_(Length) PVOID VirtualAddress,
    _In_ UINT Length
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMSetPeriodicTimer(
    _In_ PNDIS_MINIPORT_TIMER Timer,
    _In_ UINT MillisecondPeriod
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMInitializeTimer(
    _In_ OUT PNDIS_MINIPORT_TIMER Timer,
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ PNDIS_TIMER_FUNCTION TimerFunction,
    _In_ PVOID FunctionContext
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMCancelTimer(
    _In_ PNDIS_MINIPORT_TIMER Timer,
    _Out_ _At_(*TimerCancelled, _Must_inspect_result_)
          PBOOLEAN TimerCancelled
    );
_IRQL_requires_max_(APC_LEVEL)
EXPORT
VOID
NdisMSleep(
    _In_ ULONG MicrosecondsToSleep
    );
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
ULONG
NdisMGetDmaAlignment(
    _In_ NDIS_HANDLE MiniportAdapterHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisMAllocateSharedMemory(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ ULONG Length,
    _In_ BOOLEAN Cached,
    _Outptr_result_bytebuffer_(Length) _At_(*VirtualAddress, _Must_inspect_result_)
          PVOID * VirtualAddress,
    _Out_ _At_(*PhysicalAddress, _Must_inspect_result_)
          PNDIS_PHYSICAL_ADDRESS PhysicalAddress
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMFreeSharedMemory(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ ULONG Length,
    _In_ BOOLEAN Cached,
    _In_reads_bytes_(Length) PVOID VirtualAddress,
    _In_ NDIS_PHYSICAL_ADDRESS PhysicalAddress
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisIMInitializeDeviceInstanceEx(
    _In_ NDIS_HANDLE DriverHandle,
    _In_ PNDIS_STRING DriverInstance,
    _In_opt_ NDIS_HANDLE DeviceContext
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisIMCancelInitializeDeviceInstance(
    _In_ NDIS_HANDLE DriverHandle,
    _In_ PNDIS_STRING DeviceInstance
    );
_IRQL_requires_max_(APC_LEVEL)
EXPORT
NDIS_HANDLE
NdisIMGetBindingContext(
    _In_ NDIS_HANDLE NdisBindingHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisIMDeInitializeDeviceInstance(
    _In_ NDIS_HANDLE NdisMiniportHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisMRemoveMiniport(
    _In_ NDIS_HANDLE MiniportHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisMCreateLog(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ UINT Size,
    _Out_ PNDIS_HANDLE LogHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisMCloseLog(
    _In_ NDIS_HANDLE LogHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisMWriteLogData(
    _In_ NDIS_HANDLE LogHandle,
    _In_reads_bytes_(LogBufferSize)
         PVOID LogBuffer,
    _In_ UINT LogBufferSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMFlushLog(
    _In_ NDIS_HANDLE LogHandle
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
VOID
NdisMGetDeviceProperty(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _Outptr_opt_ PDEVICE_OBJECT* PhysicalDeviceObject,
    _Outptr_opt_ PDEVICE_OBJECT* FunctionalDeviceObject,
    _Outptr_opt_ PDEVICE_OBJECT* NextDeviceObject,
    _Outptr_opt_result_maybenull_
                    PCM_RESOURCE_LIST* AllocatedResources,
    _Outptr_opt_result_maybenull_
                    PCM_RESOURCE_LIST* AllocatedResourcesTranslated
    );
_IRQL_requires_(PASSIVE_LEVEL)
EXPORT
NDIS_STATUS
NdisMQueryAdapterInstanceName(
    _Out_ PNDIS_STRING pAdapterInstanceName,
    _In_ NDIS_HANDLE MiniportHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMCoActivateVcComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisMCoDeactivateVcComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisVcHandle
    );
EXPORT
NDIS_STATUS
NdisMCmRegisterAddressFamily(
    IN NDIS_HANDLE MiniportAdapterHandle,
    IN PCO_ADDRESS_FAMILY AddressFamily,
    IN PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
    IN UINT SizeOfCmCharacteristics
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisMCmCreateVc(
    _In_ NDIS_HANDLE MiniportAdapterHandle,
    _In_ NDIS_HANDLE NdisAfHandle,
    _In_ NDIS_HANDLE MiniportVcContext,
    _Out_ PNDIS_HANDLE NdisVcHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisMCmDeleteVc(
    _In_ NDIS_HANDLE NdisVcHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisMCmActivateVc(
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisMCmDeactivateVc(
    _In_ NDIS_HANDLE NdisVcHandle
    );
                                        NdisCmOpenAddressFamilyComplete(_S_, _H_, _C_)
                                         NdisCmNotifyCloseAddressFamily(_AH_)
                                        NdisCmCloseAddressFamilyComplete(_S_, _H_)
                                        NdisCmRegisterSapComplete(_S_, _H_, _C_)
                                        NdisCmDeregisterSapComplete(_S_, _H_)
                                        NdisCmMakeCallComplete(_S_, _VH_, _PH_, _CC_, _CP_)
                                        NdisCmCloseCallComplete(_S_, _VH_, _PH_)
                                        NdisCmAddPartyComplete(_S_, _H_, _C_, _P_)
                                        NdisCmDropPartyComplete(_S_, _H_)
                                        NdisCmDispatchIncomingCall(_SH_, _VH_, _CP_)
                                        NdisCmDispatchCallConnected(_H_)
                                        NdisCmModifyCallQoSComplete(_S_, _H_, _P_)
                                        NdisCmDispatchIncomingCallQoSChange(_H_, _P_)
                                        NdisCmDispatchIncomingCloseCall(_S_, _H_, _B_, _Z_)
                                        NdisCmDispatchIncomingDropParty(_S_, _H_, _B_, _Z_)
       
typedef struct _CO_CALL_PARAMETERS CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS;
typedef struct _CO_MEDIA_PARAMETERS CO_MEDIA_PARAMETERS, *PCO_MEDIA_PARAMETERS;
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_OPEN_AF_COMPLETE)
VOID
(PROTOCOL_CL_OPEN_AF_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolAfContext,
    _In_ NDIS_HANDLE NdisAfHandle
    );
typedef PROTOCOL_CL_OPEN_AF_COMPLETE (*CL_OPEN_AF_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_CLOSE_AF_COMPLETE)
VOID
(PROTOCOL_CL_CLOSE_AF_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolAfContext
    );
typedef PROTOCOL_CL_CLOSE_AF_COMPLETE (*CL_CLOSE_AF_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_REGISTER_SAP_COMPLETE)
VOID
(PROTOCOL_CL_REGISTER_SAP_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolSapContext,
    _In_ PCO_SAP Sap,
    _In_ NDIS_HANDLE NdisSapHandle
    );
typedef PROTOCOL_CL_REGISTER_SAP_COMPLETE (*CL_REG_SAP_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_DEREGISTER_SAP_COMPLETE)
VOID
(PROTOCOL_CL_DEREGISTER_SAP_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolSapContext
    );
typedef PROTOCOL_CL_DEREGISTER_SAP_COMPLETE (*CL_DEREG_SAP_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_MAKE_CALL_COMPLETE)
VOID
(PROTOCOL_CL_MAKE_CALL_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolVcContext,
    _In_opt_ NDIS_HANDLE NdisPartyHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CL_MAKE_CALL_COMPLETE (*CL_MAKE_CALL_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_CLOSE_CALL_COMPLETE)
VOID
(PROTOCOL_CL_CLOSE_CALL_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolVcContext,
    _In_opt_ NDIS_HANDLE ProtocolPartyContext
    );
typedef PROTOCOL_CL_CLOSE_CALL_COMPLETE (*CL_CLOSE_CALL_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_ADD_PARTY_COMPLETE)
VOID
(PROTOCOL_CL_ADD_PARTY_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolPartyContext,
    _In_ NDIS_HANDLE NdisPartyHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CL_ADD_PARTY_COMPLETE (*CL_ADD_PARTY_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_DROP_PARTY_COMPLETE)
VOID
(PROTOCOL_CL_DROP_PARTY_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolPartyContext
    );
typedef PROTOCOL_CL_DROP_PARTY_COMPLETE (*CL_DROP_PARTY_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_INCOMING_CALL)
NDIS_STATUS
(PROTOCOL_CL_INCOMING_CALL)(
    _In_ NDIS_HANDLE ProtocolSapContext,
    _In_ NDIS_HANDLE ProtocolVcContext,
    _Inout_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CL_INCOMING_CALL (*CL_INCOMING_CALL_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_CALL_CONNECTED)
VOID
(PROTOCOL_CL_CALL_CONNECTED)(
    _In_ NDIS_HANDLE ProtocolVcContext
    );
typedef PROTOCOL_CL_CALL_CONNECTED (*CL_CALL_CONNECTED_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_INCOMING_CLOSE_CALL)
VOID
(PROTOCOL_CL_INCOMING_CLOSE_CALL)(
    _In_ NDIS_STATUS CloseStatus,
    _In_ NDIS_HANDLE ProtocolVcContext,
    _In_opt_ PVOID CloseData,
    _In_opt_ UINT Size
    );
typedef PROTOCOL_CL_INCOMING_CLOSE_CALL (*CL_INCOMING_CLOSE_CALL_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_INCOMING_DROP_PARTY)
VOID
(PROTOCOL_CL_INCOMING_DROP_PARTY)(
    _In_ NDIS_STATUS DropStatus,
    _In_ NDIS_HANDLE ProtocolPartyContext,
    _In_opt_ PVOID CloseData,
    _In_opt_ UINT Size
    );
typedef PROTOCOL_CL_INCOMING_DROP_PARTY (*CL_INCOMING_DROP_PARTY_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_MODIFY_CALL_QOS_COMPLETE)
VOID
(PROTOCOL_CL_MODIFY_CALL_QOS_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE ProtocolVcContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CL_MODIFY_CALL_QOS_COMPLETE (*CL_MODIFY_CALL_QOS_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CL_INCOMING_CALL_QOS_CHANGE)
VOID
(PROTOCOL_CL_INCOMING_CALL_QOS_CHANGE)(
    _In_ NDIS_HANDLE ProtocolVcContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CL_INCOMING_CALL_QOS_CHANGE (*CL_INCOMING_CALL_QOS_CHANGE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_OPEN_AF)
NDIS_STATUS
(PROTOCOL_CM_OPEN_AF)(
    _In_ NDIS_HANDLE CallMgrBindingContext,
    _In_ PCO_ADDRESS_FAMILY AddressFamily,
    _In_ NDIS_HANDLE NdisAfHandle,
    _Out_ PNDIS_HANDLE CallMgrAfContext
    );
typedef PROTOCOL_CM_OPEN_AF (*CM_OPEN_AF_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_CLOSE_AF)
NDIS_STATUS
(PROTOCOL_CM_CLOSE_AF)(
    _In_ NDIS_HANDLE CallMgrAfContext
    );
typedef PROTOCOL_CM_CLOSE_AF (*CM_CLOSE_AF_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_REG_SAP)
NDIS_STATUS
(PROTOCOL_CM_REG_SAP)(
    _In_ NDIS_HANDLE CallMgrAfContext,
    _In_ PCO_SAP Sap,
    _In_ NDIS_HANDLE NdisSapHandle,
    _Out_ PNDIS_HANDLE CallMgrSapContext
    );
typedef PROTOCOL_CM_REG_SAP (*CM_REG_SAP_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_DEREGISTER_SAP)
NDIS_STATUS
(PROTOCOL_CM_DEREGISTER_SAP)(
    _In_ NDIS_HANDLE CallMgrSapContext
    );
typedef PROTOCOL_CM_DEREGISTER_SAP (*CM_DEREG_SAP_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_MAKE_CALL)
NDIS_STATUS
(PROTOCOL_CM_MAKE_CALL)(
    _In_ NDIS_HANDLE CallMgrVcContext,
    _Inout_ PCO_CALL_PARAMETERS CallParameters,
    _In_opt_ NDIS_HANDLE NdisPartyHandle,
    _Out_opt_ PNDIS_HANDLE CallMgrPartyContext
    );
typedef PROTOCOL_CM_MAKE_CALL (*CM_MAKE_CALL_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_CLOSE_CALL)
NDIS_STATUS
(PROTOCOL_CM_CLOSE_CALL)(
    _In_ NDIS_HANDLE CallMgrVcContext,
    _In_opt_ NDIS_HANDLE CallMgrPartyContext,
    _In_opt_ PVOID CloseData,
    _In_opt_ UINT Size
    );
typedef PROTOCOL_CM_CLOSE_CALL (*CM_CLOSE_CALL_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_MODIFY_QOS_CALL)
NDIS_STATUS
(PROTOCOL_CM_MODIFY_QOS_CALL)(
    _In_ NDIS_HANDLE CallMgrVcContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CM_MODIFY_QOS_CALL (*CM_MODIFY_CALL_QOS_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_INCOMING_CALL_COMPLETE)
VOID
(PROTOCOL_CM_INCOMING_CALL_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE CallMgrVcContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CM_INCOMING_CALL_COMPLETE (*CM_INCOMING_CALL_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_ACTIVATE_VC_COMPLETE)
VOID
(PROTOCOL_CM_ACTIVATE_VC_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE CallMgrVcContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
typedef PROTOCOL_CM_ACTIVATE_VC_COMPLETE (*CM_ACTIVATE_VC_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_DEACTIVATE_VC_COMPLETE)
VOID
(PROTOCOL_CM_DEACTIVATE_VC_COMPLETE)(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE CallMgrVcContext
    );
typedef PROTOCOL_CM_DEACTIVATE_VC_COMPLETE (*CM_DEACTIVATE_VC_COMPLETE_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_ADD_PARTY)
NDIS_STATUS
(PROTOCOL_CM_ADD_PARTY)(
    _In_ NDIS_HANDLE CallMgrVcContext,
    _Inout_ PCO_CALL_PARAMETERS CallParameters,
    _In_ NDIS_HANDLE NdisPartyHandle,
    _Out_ PNDIS_HANDLE CallMgrPartyContext
    );
typedef PROTOCOL_CM_ADD_PARTY (*CM_ADD_PARTY_HANDLER);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Function_class_(PROTOCOL_CM_DROP_PARTY)
NDIS_STATUS
(PROTOCOL_CM_DROP_PARTY)(
    _In_ NDIS_HANDLE CallMgrPartyContext,
    _In_opt_ PVOID CloseData,
    _In_opt_ UINT Size
    );
typedef PROTOCOL_CM_DROP_PARTY (*CM_DROP_PARTY_HANDLER);
typedef struct _CO_ADDRESS
{
    ULONG AddressSize;
    UCHAR Address[1];
} CO_ADDRESS, *PCO_ADDRESS;
typedef struct _CO_ADDRESS_LIST
{
    ULONG NumberOfAddressesAvailable;
    ULONG NumberOfAddresses;
    CO_ADDRESS AddressList;
} CO_ADDRESS_LIST, *PCO_ADDRESS_LIST;
#include <qos.h>
typedef struct _CO_SPECIFIC_PARAMETERS
{
    ULONG ParamType;
    ULONG Length;
    UCHAR Parameters[1];
} CO_SPECIFIC_PARAMETERS, *PCO_SPECIFIC_PARAMETERS;
typedef struct _CO_CALL_MANAGER_PARAMETERS
{
    FLOWSPEC Transmit;
    FLOWSPEC Receive;
    CO_SPECIFIC_PARAMETERS CallMgrSpecific;
} CO_CALL_MANAGER_PARAMETERS, *PCO_CALL_MANAGER_PARAMETERS;
typedef struct _CO_MEDIA_PARAMETERS
{
    ULONG Flags;
    ULONG ReceivePriority;
    ULONG ReceiveSizeHint;
    CO_SPECIFIC_PARAMETERS POINTER_ALIGNMENT MediaSpecific;
} CO_MEDIA_PARAMETERS, *PCO_MEDIA_PARAMETERS;
typedef struct _CO_CALL_PARAMETERS
{
    ULONG Flags;
    PCO_CALL_MANAGER_PARAMETERS CallMgrParameters;
    PCO_MEDIA_PARAMETERS MediaParameters;
} CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS;
typedef struct _CO_PVC
{
    NDIS_HANDLE NdisAfHandle;
    CO_SPECIFIC_PARAMETERS PvcParameters;
} CO_PVC,*PCO_PVC;
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCoAssignInstanceName(
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PNDIS_STRING BaseInstanceName,
    _Out_opt_ PNDIS_STRING VcInstanceName
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCoCreateVc(
    _In_ NDIS_HANDLE NdisBindingHandle,
    _In_opt_ NDIS_HANDLE NdisAfHandle,
    _In_ NDIS_HANDLE ProtocolVcContext,
    _Inout_ PNDIS_HANDLE NdisVcHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCoDeleteVc(
    _In_ NDIS_HANDLE NdisVcHandle
    );
typedef struct _VAR_STRING
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulStringFormat;
    ULONG ulStringSize;
    ULONG ulStringOffset;
} VAR_STRING, *PVAR_STRING;
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCoGetTapiCallId(
    _In_ NDIS_HANDLE NdisVcHandle,
    _Inout_ PVAR_STRING TapiCallId
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClCloseAddressFamily(
    _In_ NDIS_HANDLE NdisAfHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClRegisterSap(
    _In_ NDIS_HANDLE NdisAfHandle,
    _In_ NDIS_HANDLE ProtocolSapContext,
    _In_ PCO_SAP Sap,
    _Out_ PNDIS_HANDLE NdisSapHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClDeregisterSap(
    _In_ NDIS_HANDLE NdisSapHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClMakeCall(
    _In_ NDIS_HANDLE NdisVcHandle,
    _Inout_ PCO_CALL_PARAMETERS CallParameters,
    _In_opt_ NDIS_HANDLE ProtocolPartyContext,
    _Out_opt_ PNDIS_HANDLE NdisPartyHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClCloseCall(
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_opt_ NDIS_HANDLE NdisPartyHandle,
    _In_reads_bytes_opt_(Size) PVOID Buffer,
    _In_ UINT Size
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClModifyCallQoS(
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisClIncomingCallComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClAddParty(
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ NDIS_HANDLE ProtocolPartyContext,
    _Inout_ PCO_CALL_PARAMETERS CallParameters,
    _Out_ PNDIS_HANDLE NdisPartyHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClDropParty(
    _In_ NDIS_HANDLE NdisPartyHandle,
    _In_reads_bytes_opt_(Size) PVOID Buffer,
    _In_opt_ UINT Size
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisClGetProtocolVcContextFromTapiCallId(
    _In_ UNICODE_STRING TapiCallId,
    _Out_ PNDIS_HANDLE ProtocolVcContext
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmOpenAddressFamilyComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisAfHandle,
    _In_ NDIS_HANDLE CallMgrAfContext
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmCloseAddressFamilyComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisAfHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmRegisterSapComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisSapHandle,
    _In_ NDIS_HANDLE CallMgrSapContext
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmDeregisterSapComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisSapHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCmActivateVc(
    _In_ NDIS_HANDLE NdisVcHandle,
    _Inout_ PCO_CALL_PARAMETERS CallParameters
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCmDeactivateVc(
    _In_ NDIS_HANDLE NdisVcHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmMakeCallComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_opt_ NDIS_HANDLE NdisPartyHandle,
    _In_opt_ NDIS_HANDLE CallMgrPartyContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmCloseCallComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_opt_ NDIS_HANDLE NdisPartyHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmAddPartyComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisPartyHandle,
    _In_opt_ NDIS_HANDLE CallMgrPartyContext,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmDropPartyComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisPartyHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
NDIS_STATUS
NdisCmDispatchIncomingCall(
    _In_ NDIS_HANDLE NdisSapHandle,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmDispatchCallConnected(
    _In_ NDIS_HANDLE NdisVcHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmModifyCallQoSComplete(
    _In_ NDIS_STATUS Status,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmDispatchIncomingCallQoSChange(
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_ PCO_CALL_PARAMETERS CallParameters
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmDispatchIncomingCloseCall(
    _In_ NDIS_STATUS CloseStatus,
    _In_ NDIS_HANDLE NdisVcHandle,
    _In_reads_bytes_opt_(Size) PVOID Buffer,
    _In_ UINT Size
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
EXPORT
VOID
NdisCmDispatchIncomingDropParty(
    _In_ NDIS_STATUS DropStatus,
    _In_ NDIS_HANDLE NdisPartyHandle,
    _In_reads_bytes_opt_(Size) PVOID Buffer,
    _In_ UINT Size
    );
       
       
EXTERN_C_END
