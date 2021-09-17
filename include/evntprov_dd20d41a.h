       
#include <winapifamily.h>
    #define EVNTPROV_PFORCEINLINE __forceinline
extern "C" {
typedef ULONGLONG REGHANDLE, *PREGHANDLE;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    union {
        ULONG Reserved;
        struct {
            UCHAR Type;
            UCHAR Reserved1;
            USHORT Reserved2;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;
#pragma warning(pop)
typedef struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;
typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;
typedef struct _EVENT_FILTER_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    ULONG Type;
} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;
typedef struct _EVENT_FILTER_HEADER {
    USHORT Id;
    UCHAR Version;
    UCHAR Reserved[5];
    ULONGLONG InstanceId;
    ULONG Size;
    ULONG NextOffset;
} EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER;
typedef struct _EVENT_FILTER_EVENT_ID {
    BOOLEAN FilterIn;
    UCHAR Reserved;
    USHORT Count;
    USHORT Events[ANYSIZE_ARRAY];
} EVENT_FILTER_EVENT_ID, *PEVENT_FILTER_EVENT_ID;
typedef struct _EVENT_FILTER_EVENT_NAME {
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    UCHAR Level;
    BOOLEAN FilterIn;
    USHORT NameCount;
    UCHAR Names[ANYSIZE_ARRAY];
} EVENT_FILTER_EVENT_NAME, *PEVENT_FILTER_EVENT_NAME;
typedef struct _EVENT_FILTER_LEVEL_KW {
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    UCHAR Level;
    BOOLEAN FilterIn;
} EVENT_FILTER_LEVEL_KW, *PEVENT_FILTER_LEVEL_KW;
typedef enum _EVENT_INFO_CLASS {
    EventProviderBinaryTrackInfo,
    EventProviderSetReserved1,
    EventProviderSetTraits,
    EventProviderUseDescriptorType,
    MaxEventInfo
} EVENT_INFO_CLASS;
typedef
VOID
(NTAPI *PENABLECALLBACK) (
    _In_ LPCGUID SourceId,
    _In_ ULONG IsEnabled,
    _In_ UCHAR Level,
    _In_ ULONGLONG MatchAnyKeyword,
    _In_ ULONGLONG MatchAllKeyword,
    _In_opt_ PEVENT_FILTER_DESCRIPTOR FilterData,
    _Inout_opt_ PVOID CallbackContext
    );
#pragma region Application Family or OneCore Family or GameCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
ULONG
EVNTAPI
EventRegister(
    _In_ LPCGUID ProviderId,
    _In_opt_ PENABLECALLBACK EnableCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PREGHANDLE RegHandle
    );
ULONG
EVNTAPI
EventUnregister(
    _In_ REGHANDLE RegHandle
    );
ULONG
EVNTAPI
EventSetInformation(
    _In_ REGHANDLE RegHandle,
    _In_ EVENT_INFO_CLASS InformationClass,
    _In_reads_bytes_(InformationLength) PVOID EventInformation,
    _In_ ULONG InformationLength
    );
BOOLEAN
EVNTAPI
EventEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    );
BOOLEAN
EVNTAPI
EventProviderEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword
    );
ULONG
EVNTAPI
EventWrite(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_range_(0, MAX_EVENT_DATA_DESCRIPTORS) ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
ULONG
EVNTAPI
EventWriteTransfer(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_range_(0, MAX_EVENT_DATA_DESCRIPTORS) ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
ULONG
EVNTAPI
EventWriteEx(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG64 Filter,
    _In_ ULONG Flags,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_range_(0, MAX_EVENT_DATA_DESCRIPTORS) ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
ULONG
EVNTAPI
EventWriteString(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword,
    _In_ PCWSTR String
    );
ULONG
EVNTAPI
EventActivityIdControl(
    _In_ ULONG ControlCode,
    _Inout_ LPGUID ActivityId
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or GameCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
EVNTPROV_PFORCEINLINE
VOID
EventDataDescCreate(
    _Out_ PEVENT_DATA_DESCRIPTOR EventDataDescriptor,
    _In_reads_bytes_(DataSize) const VOID* DataPtr,
    _In_ ULONG DataSize
    )
{
    EventDataDescriptor->Ptr = (ULONGLONG)(ULONG_PTR)DataPtr;
    EventDataDescriptor->Size = DataSize;
    EventDataDescriptor->Reserved = 0;
    return;
}
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or GameCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
EVNTPROV_PFORCEINLINE
VOID
EventDescCreate(
    _Out_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT Id,
    _In_ UCHAR Version,
    _In_ UCHAR Channel,
    _In_ UCHAR Level,
    _In_ USHORT Task,
    _In_ UCHAR Opcode,
    _In_ ULONGLONG Keyword
    )
{
    EventDescriptor->Id = Id;
    EventDescriptor->Version = Version;
    EventDescriptor->Channel = Channel;
    EventDescriptor->Level = Level;
    EventDescriptor->Task = Task;
    EventDescriptor->Opcode = Opcode;
    EventDescriptor->Keyword = Keyword;
    return;
}
EVNTPROV_PFORCEINLINE
VOID
EventDescZero(
    _Out_ PEVENT_DESCRIPTOR EventDescriptor
    )
{
    memset(EventDescriptor, 0, sizeof(EVENT_DESCRIPTOR));
    return;
}
EVNTPROV_PFORCEINLINE
USHORT
EventDescGetId(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Id);
}
EVNTPROV_PFORCEINLINE
UCHAR
EventDescGetVersion(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Version);
}
EVNTPROV_PFORCEINLINE
USHORT
EventDescGetTask(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Task);
}
EVNTPROV_PFORCEINLINE
UCHAR
EventDescGetOpcode(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Opcode);
}
EVNTPROV_PFORCEINLINE
UCHAR
EventDescGetChannel(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Channel);
}
EVNTPROV_PFORCEINLINE
UCHAR
EventDescGetLevel(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Level);
}
EVNTPROV_PFORCEINLINE
ULONGLONG
EventDescGetKeyword(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Keyword);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetId(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT Id
    )
{
    EventDescriptor->Id = Id;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetVersion(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Version
    )
{
    EventDescriptor->Version = Version;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetTask(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT Task
    )
{
    EventDescriptor->Task = Task;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetOpcode(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Opcode
    )
{
    EventDescriptor->Opcode = Opcode;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetLevel(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Level
    )
{
    EventDescriptor->Level = Level;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetChannel(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Channel
    )
{
    EventDescriptor->Channel = Channel;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetKeyword(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONGLONG Keyword
    )
{
    EventDescriptor->Keyword = Keyword;
    return (EventDescriptor);
}
EVNTPROV_PFORCEINLINE
PEVENT_DESCRIPTOR
EventDescOrKeyword(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONGLONG Keyword
    )
{
    EventDescriptor->Keyword |= Keyword;
    return (EventDescriptor);
}
#endif
#pragma endregion
}
