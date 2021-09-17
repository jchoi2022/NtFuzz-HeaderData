       
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <wmistr.h>
#include <evntrace.h>
#include <evntprov.h>
extern "C" {
typedef struct _EVENT_HEADER_EXTENDED_DATA_ITEM {
    USHORT Reserved1;
    USHORT ExtType;
    struct {
        USHORT Linkage : 1;
        USHORT Reserved2 : 15;
    };
    USHORT DataSize;
    ULONGLONG DataPtr;
} EVENT_HEADER_EXTENDED_DATA_ITEM, *PEVENT_HEADER_EXTENDED_DATA_ITEM;
typedef struct _EVENT_EXTENDED_ITEM_INSTANCE {
    ULONG InstanceId;
    ULONG ParentInstanceId;
    GUID ParentGuid;
} EVENT_EXTENDED_ITEM_INSTANCE, *PEVENT_EXTENDED_ITEM_INSTANCE;
typedef struct _EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID {
    GUID RelatedActivityId;
} EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID, *PEVENT_EXTENDED_ITEM_RELATED_ACTIVITYID;
typedef struct _EVENT_EXTENDED_ITEM_TS_ID {
    ULONG SessionId;
} EVENT_EXTENDED_ITEM_TS_ID, *PEVENT_EXTENDED_ITEM_TS_ID;
typedef struct _EVENT_EXTENDED_ITEM_STACK_TRACE32 {
    ULONG64 MatchId;
    ULONG Address[ANYSIZE_ARRAY];
} EVENT_EXTENDED_ITEM_STACK_TRACE32, *PEVENT_EXTENDED_ITEM_STACK_TRACE32;
typedef struct _EVENT_EXTENDED_ITEM_STACK_TRACE64 {
    ULONG64 MatchId;
    ULONG64 Address[ANYSIZE_ARRAY];
} EVENT_EXTENDED_ITEM_STACK_TRACE64, *PEVENT_EXTENDED_ITEM_STACK_TRACE64;
typedef struct _EVENT_EXTENDED_ITEM_PEBS_INDEX {
    ULONG64 PebsIndex;
} EVENT_EXTENDED_ITEM_PEBS_INDEX, *PEVENT_EXTENDED_ITEM_PEBS_INDEX;
typedef struct _EVENT_EXTENDED_ITEM_PMC_COUNTERS {
    ULONG64 Counter[ANYSIZE_ARRAY];
} EVENT_EXTENDED_ITEM_PMC_COUNTERS, *PEVENT_EXTENDED_ITEM_PMC_COUNTERS;
typedef struct _EVENT_EXTENDED_ITEM_PROCESS_START_KEY {
    ULONG64 ProcessStartKey;
} EVENT_EXTENDED_ITEM_PROCESS_START_KEY, *PEVENT_EXTENDED_ITEM_PROCESS_START_KEY;
typedef struct _EVENT_EXTENDED_ITEM_EVENT_KEY {
    ULONG64 Key;
} EVENT_EXTENDED_ITEM_EVENT_KEY, *PEVENT_EXTENDED_ITEM_EVENT_KEY;
typedef struct _EVENT_HEADER {
    USHORT Size;
    USHORT HeaderType;
    USHORT Flags;
    USHORT EventProperty;
    ULONG ThreadId;
    ULONG ProcessId;
    LARGE_INTEGER TimeStamp;
    GUID ProviderId;
    EVENT_DESCRIPTOR EventDescriptor;
    union {
        struct {
            ULONG KernelTime;
            ULONG UserTime;
        } DUMMYSTRUCTNAME;
        ULONG64 ProcessorTime;
    } DUMMYUNIONNAME;
    GUID ActivityId;
} EVENT_HEADER, *PEVENT_HEADER;
typedef struct _EVENT_RECORD {
    EVENT_HEADER EventHeader;
    ETW_BUFFER_CONTEXT BufferContext;
    USHORT ExtendedDataCount;
    USHORT UserDataLength;
    PEVENT_HEADER_EXTENDED_DATA_ITEM
                        ExtendedData;
    PVOID UserData;
    PVOID UserContext;
} EVENT_RECORD, *PEVENT_RECORD;
typedef const EVENT_RECORD *PCEVENT_RECORD;
EVNTCONS_INLINE
ULONG
GetEventProcessorIndex (
    _In_ PCEVENT_RECORD EventRecord
    )
{
    if ((EventRecord->EventHeader.Flags & EVENT_HEADER_FLAG_PROCESSOR_INDEX) != 0) {
        return EventRecord->BufferContext.ProcessorIndex;
    } else {
        return EventRecord->BufferContext.ProcessorNumber;
    }
}
typedef enum {
    EtwProviderTraitTypeGroup = 1,
    EtwProviderTraitDecodeGuid = 2,
    EtwProviderTraitTypeMax
} ETW_PROVIDER_TRAIT_TYPE;
EVNTCONS_INLINE
VOID
EtwGetTraitFromProviderTraits(
    _In_ PVOID ProviderTraits,
    _In_ UCHAR TraitType,
    _Out_ PVOID* Trait,
    _Out_ PUSHORT Size
    )
{
    USHORT const ByteCount = *(USHORT UNALIGNED*)ProviderTraits;
    PUCHAR Ptr = (PUCHAR)ProviderTraits;
    UCHAR const* PtrEnd = Ptr + ByteCount;
    *Trait = NULL;
    *Size = 0;
    if (ByteCount < 3) {
        return;
    }
    Ptr += 2;
    Ptr += strnlen((PCSTR)Ptr, ByteCount - 3u);
    Ptr += 1;
    while (Ptr < PtrEnd) {
        USHORT const TraitByteCount = *(USHORT const UNALIGNED*)Ptr;
        if (TraitByteCount < 3) {
            return;
        }
        if ((Ptr[2] == TraitType) &&
            (Ptr + TraitByteCount <= PtrEnd)) {
            *Trait = (PVOID)(Ptr + 3);
            *Size = TraitByteCount - 3u;
            return;
        }
        Ptr += TraitByteCount;
    }
    return;
}
typedef enum {
    EventSecuritySetDACL,
    EventSecuritySetSACL,
    EventSecurityAddDACL,
    EventSecurityAddSACL,
    EventSecurityMax
} EVENTSECURITYOPERATION;
ULONG
EVNTAPI
EventAccessControl(
    _In_ LPGUID Guid,
    _In_ ULONG Operation,
    _In_ PSID Sid,
    _In_ ULONG Rights,
    _In_ BOOLEAN AllowOrDeny
    );
ULONG
EVNTAPI
EventAccessQuery(
    _In_ LPGUID Guid,
    _Out_writes_bytes_opt_(*BufferSize) PSECURITY_DESCRIPTOR Buffer,
    _Inout_ PULONG BufferSize
    );
ULONG
EVNTAPI
EventAccessRemove(
    _In_ LPGUID Guid
    );
}
#endif
#pragma endregion
