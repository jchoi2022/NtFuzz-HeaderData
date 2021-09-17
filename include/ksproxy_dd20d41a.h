#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
    0x423c13a2L, 0x2070, 0x11d0, 0x9e, 0xf7, 0x00, 0xaa, 0x00, 0xa2, 0x16, 0xa1
    0x7bb38260L, 0xd19c, 0x11d2, 0xb3, 0x8a, 0x00, 0xa0, 0xc9, 0x5e, 0xc2, 0x2e
    0xb61178d1L, 0xa2d9, 0x11cf, 0x9e, 0x53, 0x00, 0xaa, 0x00, 0xa2, 0x16, 0xa1
    0xe539cd90L, 0xa8b4, 0x11d1, 0x81, 0x89, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
    0x5ffbaa02L, 0x49a3, 0x11d0, 0x9f, 0x36, 0x00, 0xaa, 0x00, 0xa2, 0x16, 0xa1
    0x827D1A0EL, 0x0F73, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
    0xD3ABC7E0L, 0x9A61, 0x11D0, 0xA4, 0x0D, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
    0x5C5CBD84L, 0xE755, 0x11D0, 0xAC, 0x18, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
    0x8da64899L, 0xc0d9, 0x11d0, 0x84, 0x13, 0x00, 0x00, 0xf8, 0x22, 0xfe, 0x8a
    0x091bb63aL, 0x603f, 0x11d1, 0xb0, 0x67, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
    0x31EFAC30L, 0x515C, 0x11d0, 0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93
    0x28F54683L, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
    0x28F54685L, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
    0x7F40EAC0L, 0x3947, 0x11D2, 0x87, 0x4E, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
    0x17CCA71BL, 0xECD7, 0x11D0, 0xB9, 0x08, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDEX(IID_IKsObject);
DEFINE_GUIDEX(IID_IKsPin);
DEFINE_GUIDEX(IID_IKsPinEx);
DEFINE_GUIDEX(IID_IKsPinPipe);
DEFINE_GUIDEX(IID_IKsDataTypeHandler);
DEFINE_GUIDEX(IID_IKsDataTypeCompletion);
DEFINE_GUIDEX(IID_IKsInterfaceHandler);
DEFINE_GUIDEX(IID_IKsClockPropertySet);
DEFINE_GUIDEX(IID_IKsAllocator);
DEFINE_GUIDEX(IID_IKsAllocatorEx);
typedef enum {
    KsAllocatorMode_User,
    KsAllocatorMode_Kernel
} KSALLOCATORMODE;
typedef enum {
    FramingProp_Uninitialized,
    FramingProp_None,
    FramingProp_Old,
    FramingProp_Ex
} FRAMING_PROP;
typedef FRAMING_PROP *PFRAMING_PROP;
typedef enum {
    Framing_Cache_Update,
    Framing_Cache_ReadLast,
    Framing_Cache_ReadOrig,
    Framing_Cache_Write
} FRAMING_CACHE_OPS;
typedef struct {
    LONGLONG MinTotalNominator;
    LONGLONG MaxTotalNominator;
    LONGLONG TotalDenominator;
} OPTIMAL_WEIGHT_TOTALS;
typedef struct IPin IPin;
typedef struct IKsPin IKsPin;
typedef struct IKsAllocator IKsAllocator;
typedef struct IKsAllocatorEx IKsAllocatorEx;
typedef enum {
    PipeState_DontCare,
    PipeState_RangeNotFixed,
    PipeState_RangeFixed,
    PipeState_CompressionUnknown,
    PipeState_Finalized
} PIPE_STATE;
typedef struct _PIPE_DIMENSIONS {
    KS_COMPRESSION AllocatorPin;
    KS_COMPRESSION MaxExpansionPin;
    KS_COMPRESSION EndPin;
} PIPE_DIMENSIONS, *PPIPE_DIMENSIONS;
typedef enum {
    Pipe_Allocator_None,
    Pipe_Allocator_FirstPin,
    Pipe_Allocator_LastPin,
    Pipe_Allocator_MiddlePin
} PIPE_ALLOCATOR_PLACE;
typedef PIPE_ALLOCATOR_PLACE *PPIPE_ALLOCATOR_PLACE;
typedef enum {
    KS_MemoryTypeDontCare = 0,
    KS_MemoryTypeKernelPaged,
    KS_MemoryTypeKernelNonPaged,
    KS_MemoryTypeDeviceHostMapped,
    KS_MemoryTypeDeviceSpecific,
    KS_MemoryTypeUser,
    KS_MemoryTypeAnyHost
} KS_LogicalMemoryType;
typedef KS_LogicalMemoryType *PKS_LogicalMemoryType;
typedef struct _PIPE_TERMINATION {
    ULONG Flags;
    ULONG OutsideFactors;
    ULONG Weigth;
    KS_FRAMING_RANGE PhysicalRange;
    KS_FRAMING_RANGE_WEIGHTED OptimalRange;
    KS_COMPRESSION Compression;
} PIPE_TERMINATION;
typedef struct _ALLOCATOR_PROPERTIES_EX
    {
    long cBuffers;
    long cbBuffer;
    long cbAlign;
    long cbPrefix;
    GUID MemoryType;
    GUID BusType;
    PIPE_STATE State;
    PIPE_TERMINATION Input;
    PIPE_TERMINATION Output;
    ULONG Strategy;
    ULONG Flags;
    ULONG Weight;
    KS_LogicalMemoryType LogicalMemoryType;
    PIPE_ALLOCATOR_PLACE AllocatorPlace;
    PIPE_DIMENSIONS Dimensions;
    KS_FRAMING_RANGE PhysicalRange;
    IKsAllocatorEx* PrevSegment;
    ULONG CountNextSegments;
    IKsAllocatorEx** NextSegments;
    ULONG InsideFactors;
    ULONG NumberPins;
} ALLOCATOR_PROPERTIES_EX;
typedef ALLOCATOR_PROPERTIES_EX *PALLOCATOR_PROPERTIES_EX;
struct DECLSPEC_UUID("5C5CBD84-E755-11D0-AC18-00A0C9223196") IKsClockPropertySet;
DECLARE_INTERFACE_(IKsClockPropertySet, IUnknown)
{
    STDMETHOD(KsGetTime)(
        THIS_
        _Out_ LONGLONG* Time
    ) PURE;
    STDMETHOD(KsSetTime)(
        THIS_
        _In_ LONGLONG Time
    ) PURE;
    STDMETHOD(KsGetPhysicalTime)(
        THIS_
        _Out_ LONGLONG* Time
    ) PURE;
    STDMETHOD(KsSetPhysicalTime)(
        THIS_
        _In_ LONGLONG Time
    ) PURE;
    STDMETHOD(KsGetCorrelatedTime)(
        THIS_
        _Out_ KSCORRELATED_TIME* CorrelatedTime
    ) PURE;
    STDMETHOD(KsSetCorrelatedTime)(
        THIS_
        _In_ KSCORRELATED_TIME* CorrelatedTime
    ) PURE;
    STDMETHOD(KsGetCorrelatedPhysicalTime)(
        THIS_
        _Out_ KSCORRELATED_TIME* CorrelatedTime
    ) PURE;
    STDMETHOD(KsSetCorrelatedPhysicalTime)(
        THIS_
        _In_ KSCORRELATED_TIME* CorrelatedTime
    ) PURE;
    STDMETHOD(KsGetResolution)(
        THIS_
        _Out_ KSRESOLUTION* Resolution
    ) PURE;
    STDMETHOD(KsGetState)(
        THIS_
        _Out_ KSSTATE* State
    ) PURE;
};
interface DECLSPEC_UUID("8da64899-c0d9-11d0-8413-0000f822fe8a") IKsAllocator;
DECLARE_INTERFACE_(IKsAllocator, IUnknown)
{
    STDMETHOD_(HANDLE, KsGetAllocatorHandle)(
        THIS
    ) PURE;
    STDMETHOD_(KSALLOCATORMODE, KsGetAllocatorMode)(
        THIS
    ) PURE;
    STDMETHOD(KsGetAllocatorStatus)(
        THIS_
        _Out_ PKSSTREAMALLOCATOR_STATUS AllocatorStatus
    ) PURE;
    STDMETHOD_(VOID, KsSetAllocatorMode)(
        THIS_
        _In_ KSALLOCATORMODE Mode
    ) PURE;
};
interface DECLSPEC_UUID("091bb63a-603f-11d1-b067-00a0c9062802") IKsAllocatorEx;
DECLARE_INTERFACE_(IKsAllocatorEx, IKsAllocator)
{
    STDMETHOD_(PALLOCATOR_PROPERTIES_EX, KsGetProperties)(
        THIS
    ) PURE;
    STDMETHOD_(VOID, KsSetProperties)(
        THIS_
        _In_ PALLOCATOR_PROPERTIES_EX
    ) PURE;
    STDMETHOD_(VOID, KsSetAllocatorHandle)(
        THIS_
        _In_ HANDLE AllocatorHandle
    ) PURE;
    STDMETHOD_(HANDLE, KsCreateAllocatorAndGetHandle)(
        THIS_
        _In_ IKsPin* KsPin
    ) PURE;
};
typedef enum {
    KsPeekOperation_PeekOnly,
    KsPeekOperation_AddRef
} KSPEEKOPERATION;
typedef struct _KSSTREAM_SEGMENT *PKSSTREAM_SEGMENT;
interface DECLSPEC_UUID("b61178d1-a2d9-11cf-9e53-00aa00a216a1") IKsPin;
DECLARE_INTERFACE_(IKsPin, IUnknown)
{
    STDMETHOD(KsQueryMediums)(
        THIS_
        _Outptr_ PKSMULTIPLE_ITEM* MediumList
    ) PURE;
    STDMETHOD(KsQueryInterfaces)(
        THIS_
        _Outptr_ PKSMULTIPLE_ITEM* InterfaceList
    ) PURE;
    STDMETHOD(KsCreateSinkPinHandle)(
        THIS_
        _In_ KSPIN_INTERFACE& Interface,
        _In_ KSPIN_MEDIUM& Medium
    ) PURE;
    STDMETHOD(KsGetCurrentCommunication)(
        THIS_
        _Out_opt_ KSPIN_COMMUNICATION *Communication,
        _Out_opt_ KSPIN_INTERFACE *Interface,
        _Out_opt_ KSPIN_MEDIUM *Medium
    ) PURE;
    STDMETHOD(KsPropagateAcquire)(
        THIS
    ) PURE;
    STDMETHOD(KsDeliver)(
        THIS_
        _In_ IMediaSample* Sample,
        _In_ ULONG Flags
    ) PURE;
    STDMETHOD(KsMediaSamplesCompleted)(
        THIS_
        _In_ PKSSTREAM_SEGMENT StreamSegment
    ) PURE;
    STDMETHOD_(IMemAllocator *, KsPeekAllocator)(
        THIS_
        _In_ KSPEEKOPERATION Operation
    ) PURE;
    STDMETHOD(KsReceiveAllocator)(
        THIS_
        _In_opt_ IMemAllocator *MemAllocator
    ) PURE;
    STDMETHOD(KsRenegotiateAllocator)(
        THIS
    ) PURE;
    STDMETHOD_(LONG, KsIncrementPendingIoCount)(
        THIS
    ) PURE;
    STDMETHOD_(LONG, KsDecrementPendingIoCount)(
        THIS
    ) PURE;
    STDMETHOD(KsQualityNotify)(
        THIS_
        _In_ ULONG Proportion,
        _In_ REFERENCE_TIME TimeDelta
    ) PURE;
};
interface DECLSPEC_UUID("7bb38260-d19c-11d2-b38a-00a0c95ec22e") IKsPinEx;
DECLARE_INTERFACE_(IKsPinEx, IKsPin)
{
    STDMETHOD_(VOID, KsNotifyError)(
        THIS_
        _In_ IMediaSample* Sample,
        _In_ HRESULT hr
    ) PURE;
};
interface DECLSPEC_UUID("e539cd90-a8b4-11d1-8189-00a0c9062802") IKsPinPipe;
DECLARE_INTERFACE_(IKsPinPipe, IUnknown)
{
    STDMETHOD(KsGetPinFramingCache)(
        THIS_
        _Out_ PKSALLOCATOR_FRAMING_EX *FramingEx,
        _Out_ PFRAMING_PROP FramingProp,
        _In_ FRAMING_CACHE_OPS Option
    ) PURE;
    STDMETHOD(KsSetPinFramingCache)(
        THIS_
        _In_ PKSALLOCATOR_FRAMING_EX FramingEx,
        _In_ PFRAMING_PROP FramingProp,
        _In_ FRAMING_CACHE_OPS Option
    ) PURE;
    STDMETHOD_(IPin*, KsGetConnectedPin)(
        THIS
    ) PURE;
    STDMETHOD_(IKsAllocatorEx*, KsGetPipe)(
        THIS_
        _In_ KSPEEKOPERATION Operation
    ) PURE;
    STDMETHOD(KsSetPipe)(
        THIS_
        _In_ IKsAllocatorEx *KsAllocator
    ) PURE;
    STDMETHOD_(ULONG, KsGetPipeAllocatorFlag)(
        THIS
    ) PURE;
    STDMETHOD(KsSetPipeAllocatorFlag)(
        THIS_
        _In_ ULONG Flag
    ) PURE;
    STDMETHOD_(GUID, KsGetPinBusCache)(
        THIS
    ) PURE;
    STDMETHOD(KsSetPinBusCache)(
        THIS_
        _In_ GUID Bus
    ) PURE;
    STDMETHOD_(PWCHAR, KsGetPinName)(
        THIS
    ) PURE;
    STDMETHOD_(PWCHAR, KsGetFilterName)(
        THIS
    ) PURE;
};
interface DECLSPEC_UUID("CD5EBE6B-8B6E-11D1-8AE0-00A0C9223196") IKsPinFactory;
DECLARE_INTERFACE_(IKsPinFactory, IUnknown)
{
    STDMETHOD(KsPinFactory)(
        THIS_
        _Out_ ULONG* PinFactory
    ) PURE;
};
typedef enum {
    KsIoOperation_Write,
    KsIoOperation_Read
} KSIOOPERATION;
interface DECLSPEC_UUID("5ffbaa02-49a3-11d0-9f36-00aa00a216a1") IKsDataTypeHandler;
DECLARE_INTERFACE_(IKsDataTypeHandler, IUnknown)
{
    STDMETHOD(KsCompleteIoOperation)(
        THIS_
        _Inout_ IMediaSample *Sample,
        _Inout_ PVOID StreamHeader,
        _In_ KSIOOPERATION IoOperation,
        _In_ BOOL Cancelled
    ) PURE;
    STDMETHOD(KsIsMediaTypeInRanges)(
        THIS_
        _In_ PVOID DataRanges
        ) PURE;
    STDMETHOD(KsPrepareIoOperation)(
        THIS_
        _Inout_ IMediaSample *Sample,
        _Inout_ PVOID StreamHeader,
        _In_ KSIOOPERATION IoOperation
    ) PURE;
    STDMETHOD(KsQueryExtendedSize)(
        THIS_
        _Out_ ULONG* ExtendedSize
    ) PURE;
    STDMETHOD(KsSetMediaType)(
        THIS_
        _In_ const AM_MEDIA_TYPE* AmMediaType
    ) PURE;
};
interface DECLSPEC_UUID("827D1A0E-0F73-11D2-B27A-00A0C9223196") IKsDataTypeCompletion;
DECLARE_INTERFACE_(IKsDataTypeCompletion, IUnknown)
{
    STDMETHOD(KsCompleteMediaType)(
        THIS_
        _In_ HANDLE FilterHandle,
        _In_ ULONG PinFactoryId,
        _Inout_ AM_MEDIA_TYPE* AmMediaType
    ) PURE;
};
interface DECLSPEC_UUID("D3ABC7E0-9A61-11d0-A40D-00A0C9223196") IKsInterfaceHandler;
DECLARE_INTERFACE_(IKsInterfaceHandler, IUnknown)
{
    STDMETHOD(KsSetPin)(
        THIS_
        _In_ IKsPin *KsPin
    ) PURE;
    STDMETHOD(KsProcessMediaSamples)(
        THIS_
        _In_ IKsDataTypeHandler *KsDataTypeHandler,
        _In_reads_(SampleCount) IMediaSample** SampleList,
        _Inout_ PLONG SampleCount,
        _In_ KSIOOPERATION IoOperation,
        _Out_ PKSSTREAM_SEGMENT *StreamSegment
    ) PURE;
    STDMETHOD(KsCompleteIo)(
        THIS_
        _Inout_ PKSSTREAM_SEGMENT StreamSegment
    ) PURE;
};
typedef struct _KSSTREAM_SEGMENT {
    IKsInterfaceHandler *KsInterfaceHandler;
    IKsDataTypeHandler *KsDataTypeHandler;
    KSIOOPERATION IoOperation;
    HANDLE CompletionEvent;
} KSSTREAM_SEGMENT;
interface DECLSPEC_UUID("423c13a2-2070-11d0-9ef7-00aa00a216a1") IKsObject;
DECLARE_INTERFACE_(IKsObject, IUnknown)
{
    STDMETHOD_(HANDLE, KsGetObjectHandle)(
        THIS
    ) PURE;
};
interface DECLSPEC_UUID("97ebaacb-95bd-11d0-a3ea-00a0c9223196") IKsQualityForwarder;
DECLARE_INTERFACE_(IKsQualityForwarder, IKsObject)
{
    STDMETHOD_(VOID, KsFlushClient)(
        THIS_
        _In_ IKsPin* Pin
    ) PURE;
};
interface DECLSPEC_UUID("412bd695-f84b-46c1-ac73-54196dbc8fa7") IKsNotifyEvent;
DECLARE_INTERFACE_(IKsNotifyEvent, IUnknown)
{
    STDMETHOD(KsNotifyEvent)(
        THIS_
        _In_ ULONG Event,
        _In_ ULONG_PTR lParam1,
        _In_ ULONG_PTR lParam2
    ) PURE;
};
KSDDKAPI
HRESULT
WINAPI
KsResolveRequiredAttributes(
    _In_ PKSDATARANGE DataRange,
    _In_opt_ PKSMULTIPLE_ITEM Attributes
    );
KSDDKAPI
HRESULT
WINAPI
KsOpenDefaultDevice(
    _In_ REFGUID Category,
    _In_ ACCESS_MASK Access,
    _Out_ PHANDLE DeviceHandle
    );
KSDDKAPI
HRESULT
WINAPI
KsSynchronousDeviceControl(
    _In_ HANDLE Handle,
    _In_ ULONG IoControl,
    _In_reads_bytes_opt_(InLength) PVOID InBuffer,
    _In_ ULONG InLength,
    _Out_writes_bytes_opt_(OutLength) PVOID OutBuffer,
    _In_ ULONG OutLength,
    _Inout_opt_ PULONG BytesReturned
    );
KSDDKAPI
HRESULT
WINAPI
KsGetMultiplePinFactoryItems(
    _In_ HANDLE FilterHandle,
    _In_ ULONG PinFactoryId,
    _In_ ULONG PropertyId,
    _Outptr_ PVOID* Items
    );
KSDDKAPI
HRESULT
WINAPI
KsGetMediaTypeCount(
    _In_ HANDLE FilterHandle,
    _In_ ULONG PinFactoryId,
    _Out_ ULONG* MediaTypeCount
    );
KSDDKAPI
HRESULT
WINAPI
KsGetMediaType(
    _In_ int Position,
    _Out_ AM_MEDIA_TYPE* AmMediaType,
    _In_ HANDLE FilterHandle,
    _In_ ULONG PinFactoryId
    );
DEFINE_GUIDEX(IID_IKsPropertySet);
DEFINE_GUIDEX(IID_IKsControl);
DEFINE_GUIDEX(IID_IKsAggregateControl);
DEFINE_GUIDEX(IID_IKsTopology);
DEFINE_GUIDSTRUCT("17CCA71B-ECD7-11D0-B908-00A0C9223196", CLSID_Proxy);
interface DECLSPEC_UUID("31EFAC30-515C-11d0-A9AA-00aa0061be93") IKsPropertySet;
DECLARE_INTERFACE_(IKsPropertySet, IUnknown)
{
    STDMETHOD(Set)(
        THIS_
        _In_ REFGUID PropSet,
        _In_ ULONG Id,
        _In_reads_bytes_(InstanceLength) LPVOID InstanceData,
        _In_ ULONG InstanceLength,
        _In_reads_bytes_(DataLength) LPVOID PropertyData,
        _In_ ULONG DataLength
    ) PURE;
    STDMETHOD(Get)(
        THIS_
        _In_ REFGUID PropSet,
        _In_ ULONG Id,
        _In_reads_bytes_(InstanceLength) LPVOID InstanceData,
        _In_ ULONG InstanceLength,
        _Out_writes_bytes_(DataLength) LPVOID PropertyData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
    ) PURE;
    STDMETHOD(QuerySupported)(
        THIS_
        _In_ REFGUID PropSet,
        _In_ ULONG Id,
        _Out_ ULONG* TypeSupport
    ) PURE;
};
interface DECLSPEC_UUID("28F54685-06FD-11D2-B27A-00A0C9223196") IKsControl;
DECLARE_INTERFACE_(IKsControl, IUnknown)
{
    STDMETHOD(KsProperty)(
        THIS_
        _In_reads_bytes_(PropertyLength) PKSPROPERTY Property,
        _In_ ULONG PropertyLength,
        _Inout_updates_bytes_(DataLength) LPVOID PropertyData,
        _In_ ULONG DataLength,
        _Inout_opt_ ULONG* BytesReturned
    ) PURE;
    STDMETHOD(KsMethod)(
        THIS_
        _In_reads_bytes_(MethodLength) PKSMETHOD Method,
        _In_ ULONG MethodLength,
        _Inout_updates_bytes_(DataLength) LPVOID MethodData,
        _In_ ULONG DataLength,
        _Inout_opt_ ULONG* BytesReturned
    ) PURE;
    STDMETHOD(KsEvent)(
        THIS_
        _In_reads_bytes_opt_(EventLength) PKSEVENT Event,
        _In_ ULONG EventLength,
        _Inout_updates_bytes_(DataLength) LPVOID EventData,
        _In_ ULONG DataLength,
        _Inout_opt_ ULONG* BytesReturned
    ) PURE;
};
interface DECLSPEC_UUID("7F40EAC0-3947-11D2-874E-00A0C9223196") IKsAggregateControl;
DECLARE_INTERFACE_(IKsAggregateControl, IUnknown)
{
    STDMETHOD(KsAddAggregate)(
        THIS_
        _In_ REFGUID AggregateClass
    ) PURE;
    STDMETHOD(KsRemoveAggregate)(
        THIS_
        _In_ REFGUID AggregateClass
    ) PURE;
};
interface DECLSPEC_UUID("28F54683-06FD-11D2-B27A-00A0C9223196") IKsTopology;
DECLARE_INTERFACE_(IKsTopology, IUnknown)
{
    STDMETHOD(CreateNodeInstance)(
        THIS_
        _In_ ULONG NodeId,
        _In_ ULONG Flags,
        _In_ ACCESS_MASK DesiredAccess,
        _In_opt_ IUnknown* UnkOuter,
        _In_ REFGUID InterfaceId,
        _Out_ LPVOID* Interface
    ) PURE;
};
}
#endif
#pragma endregion
