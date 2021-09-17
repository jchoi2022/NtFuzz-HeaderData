       
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <wmistr.h>
#include <evntrace.h>
#include <evntcons.h>
#pragma warning(push)
#pragma warning (disable:4201)
#pragma warning (disable:4214)
typedef _Return_type_success_(return == ERROR_SUCCESS) ULONG TDHSTATUS;
typedef HANDLE TDH_HANDLE, *PTDH_HANDLE;
typedef struct _EVENT_MAP_ENTRY {
    ULONG OutputOffset;
    union {
        ULONG Value;
        ULONG InputOffset;
    };
} EVENT_MAP_ENTRY;
typedef EVENT_MAP_ENTRY *PEVENT_MAP_ENTRY;
typedef enum _MAP_FLAGS {
    EVENTMAP_INFO_FLAG_MANIFEST_VALUEMAP = 0x1,
    EVENTMAP_INFO_FLAG_MANIFEST_BITMAP = 0x2,
    EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP = 0x4,
    EVENTMAP_INFO_FLAG_WBEM_VALUEMAP = 0x8,
    EVENTMAP_INFO_FLAG_WBEM_BITMAP = 0x10,
    EVENTMAP_INFO_FLAG_WBEM_FLAG = 0x20,
    EVENTMAP_INFO_FLAG_WBEM_NO_MAP = 0x40
} MAP_FLAGS;
typedef enum _MAP_VALUETYPE {
    EVENTMAP_ENTRY_VALUETYPE_ULONG,
    EVENTMAP_ENTRY_VALUETYPE_STRING
} MAP_VALUETYPE;
typedef struct _EVENT_MAP_INFO {
    ULONG NameOffset;
    MAP_FLAGS Flag;
    ULONG EntryCount;
    union {
        MAP_VALUETYPE MapEntryValueType;
        ULONG FormatStringOffset;
    };
    _Field_size_(EntryCount) EVENT_MAP_ENTRY MapEntryArray[ANYSIZE_ARRAY];
} EVENT_MAP_INFO;
typedef EVENT_MAP_INFO *PEVENT_MAP_INFO;
enum _TDH_IN_TYPE {
    TDH_INTYPE_NULL,
    TDH_INTYPE_UNICODESTRING,
    TDH_INTYPE_ANSISTRING,
    TDH_INTYPE_INT8,
    TDH_INTYPE_UINT8,
    TDH_INTYPE_INT16,
    TDH_INTYPE_UINT16,
    TDH_INTYPE_INT32,
    TDH_INTYPE_UINT32,
    TDH_INTYPE_INT64,
    TDH_INTYPE_UINT64,
    TDH_INTYPE_FLOAT,
    TDH_INTYPE_DOUBLE,
    TDH_INTYPE_BOOLEAN,
    TDH_INTYPE_BINARY,
    TDH_INTYPE_GUID,
    TDH_INTYPE_POINTER,
    TDH_INTYPE_FILETIME,
    TDH_INTYPE_SYSTEMTIME,
    TDH_INTYPE_SID,
    TDH_INTYPE_HEXINT32,
    TDH_INTYPE_HEXINT64,
    TDH_INTYPE_MANIFEST_COUNTEDSTRING,
    TDH_INTYPE_MANIFEST_COUNTEDANSISTRING,
    TDH_INTYPE_RESERVED24,
    TDH_INTYPE_MANIFEST_COUNTEDBINARY,
    TDH_INTYPE_COUNTEDSTRING = 300,
    TDH_INTYPE_COUNTEDANSISTRING,
    TDH_INTYPE_REVERSEDCOUNTEDSTRING,
    TDH_INTYPE_REVERSEDCOUNTEDANSISTRING,
    TDH_INTYPE_NONNULLTERMINATEDSTRING,
    TDH_INTYPE_NONNULLTERMINATEDANSISTRING,
    TDH_INTYPE_UNICODECHAR,
    TDH_INTYPE_ANSICHAR,
    TDH_INTYPE_SIZET,
    TDH_INTYPE_HEXDUMP,
    TDH_INTYPE_WBEMSID
};
enum _TDH_OUT_TYPE {
    TDH_OUTTYPE_NULL,
    TDH_OUTTYPE_STRING,
    TDH_OUTTYPE_DATETIME,
    TDH_OUTTYPE_BYTE,
    TDH_OUTTYPE_UNSIGNEDBYTE,
    TDH_OUTTYPE_SHORT,
    TDH_OUTTYPE_UNSIGNEDSHORT,
    TDH_OUTTYPE_INT,
    TDH_OUTTYPE_UNSIGNEDINT,
    TDH_OUTTYPE_LONG,
    TDH_OUTTYPE_UNSIGNEDLONG,
    TDH_OUTTYPE_FLOAT,
    TDH_OUTTYPE_DOUBLE,
    TDH_OUTTYPE_BOOLEAN,
    TDH_OUTTYPE_GUID,
    TDH_OUTTYPE_HEXBINARY,
    TDH_OUTTYPE_HEXINT8,
    TDH_OUTTYPE_HEXINT16,
    TDH_OUTTYPE_HEXINT32,
    TDH_OUTTYPE_HEXINT64,
    TDH_OUTTYPE_PID,
    TDH_OUTTYPE_TID,
    TDH_OUTTYPE_PORT,
    TDH_OUTTYPE_IPV4,
    TDH_OUTTYPE_IPV6,
    TDH_OUTTYPE_SOCKETADDRESS,
    TDH_OUTTYPE_CIMDATETIME,
    TDH_OUTTYPE_ETWTIME,
    TDH_OUTTYPE_XML,
    TDH_OUTTYPE_ERRORCODE,
    TDH_OUTTYPE_WIN32ERROR,
    TDH_OUTTYPE_NTSTATUS,
    TDH_OUTTYPE_HRESULT,
    TDH_OUTTYPE_CULTURE_INSENSITIVE_DATETIME,
    TDH_OUTTYPE_JSON,
    TDH_OUTTYPE_UTF8,
    TDH_OUTTYPE_PKCS7_WITH_TYPE_INFO,
    TDH_OUTTYPE_CODE_POINTER,
    TDH_OUTTYPE_DATETIME_UTC,
    TDH_OUTTYPE_REDUCEDSTRING = 300,
    TDH_OUTTYPE_NOPRINT
};
typedef enum _PROPERTY_FLAGS
{
   PropertyStruct = 0x1,
   PropertyParamLength = 0x2,
   PropertyParamCount = 0x4,
   PropertyWBEMXmlFragment = 0x8,
   PropertyParamFixedLength = 0x10,
   PropertyParamFixedCount = 0x20,
   PropertyHasTags = 0x40,
   PropertyHasCustomSchema = 0x80,
} PROPERTY_FLAGS;
typedef struct _EVENT_PROPERTY_INFO {
    PROPERTY_FLAGS Flags;
    ULONG NameOffset;
    union {
        struct _nonStructType {
            USHORT InType;
            USHORT OutType;
            ULONG MapNameOffset;
        } nonStructType;
        struct _structType {
            USHORT StructStartIndex;
            USHORT NumOfStructMembers;
            ULONG padding;
        } structType;
        struct _customSchemaType {
            USHORT InType;
            USHORT OutType;
            ULONG CustomSchemaOffset;
        } customSchemaType;
    };
    union {
        USHORT count;
        USHORT countPropertyIndex;
    };
    union {
        USHORT length;
        USHORT lengthPropertyIndex;
    };
    union {
        ULONG Reserved;
        struct {
            ULONG Tags : 28;
        };
    };
} EVENT_PROPERTY_INFO;
typedef EVENT_PROPERTY_INFO *PEVENT_PROPERTY_INFO;
typedef enum _DECODING_SOURCE {
    DecodingSourceXMLFile,
    DecodingSourceWbem,
    DecodingSourceWPP,
    DecodingSourceTlg,
    DecodingSourceMax
} DECODING_SOURCE;
typedef enum _TEMPLATE_FLAGS
{
    TEMPLATE_EVENT_DATA = 1,
    TEMPLATE_USER_DATA = 2,
    TEMPLATE_CONTROL_GUID = 4
} TEMPLATE_FLAGS;
typedef struct _TRACE_EVENT_INFO {
    GUID ProviderGuid;
    GUID EventGuid;
    EVENT_DESCRIPTOR EventDescriptor;
    DECODING_SOURCE DecodingSource;
    ULONG ProviderNameOffset;
    ULONG LevelNameOffset;
    ULONG ChannelNameOffset;
    ULONG KeywordsNameOffset;
    ULONG TaskNameOffset;
    ULONG OpcodeNameOffset;
    ULONG EventMessageOffset;
    ULONG ProviderMessageOffset;
    ULONG BinaryXMLOffset;
    ULONG BinaryXMLSize;
    union {
        ULONG EventNameOffset;
        ULONG ActivityIDNameOffset;
    };
    union {
        ULONG EventAttributesOffset;
        ULONG RelatedActivityIDNameOffset;
    };
    ULONG PropertyCount;
    _Field_range_(0, PropertyCount) ULONG TopLevelPropertyCount;
    union {
        TEMPLATE_FLAGS Flags;
        struct {
            ULONG Reserved : 4;
            ULONG Tags : 28;
        };
    };
    _Field_size_(PropertyCount) EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} TRACE_EVENT_INFO;
typedef TRACE_EVENT_INFO *PTRACE_EVENT_INFO;
typedef struct _PROPERTY_DATA_DESCRIPTOR {
    ULONGLONG PropertyName;
    ULONG ArrayIndex;
    ULONG Reserved;
} PROPERTY_DATA_DESCRIPTOR;
typedef PROPERTY_DATA_DESCRIPTOR *PPROPERTY_DATA_DESCRIPTOR;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _PAYLOAD_OPERATOR {
    PAYLOADFIELD_EQ = 0,
    PAYLOADFIELD_NE = 1,
    PAYLOADFIELD_LE = 2,
    PAYLOADFIELD_GT = 3,
    PAYLOADFIELD_LT = 4,
    PAYLOADFIELD_GE = 5,
    PAYLOADFIELD_BETWEEN = 6,
    PAYLOADFIELD_NOTBETWEEN = 7,
    PAYLOADFIELD_MODULO = 8,
    PAYLOADFIELD_CONTAINS = 20,
    PAYLOADFIELD_DOESNTCONTAIN = 21,
    PAYLOADFIELD_IS = 30,
    PAYLOADFIELD_ISNOT = 31,
    PAYLOADFIELD_INVALID = 32
} PAYLOAD_OPERATOR;
typedef struct _PAYLOAD_FILTER_PREDICATE {
    LPWSTR FieldName;
    USHORT CompareOp;
    LPWSTR Value;
} PAYLOAD_FILTER_PREDICATE, *PPAYLOAD_FILTER_PREDICATE;
TDHSTATUS
__stdcall
TdhCreatePayloadFilter(
    _In_ LPCGUID ProviderGuid,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ BOOLEAN EventMatchANY,
    _In_ ULONG PayloadPredicateCount,
    _In_reads_(PayloadPredicateCount) PPAYLOAD_FILTER_PREDICATE PayloadPredicates,
    _Outptr_result_maybenull_ PVOID* PayloadFilter
    );
TDHSTATUS
__stdcall
TdhDeletePayloadFilter(
    _Inout_ PVOID* PayloadFilter
    );
TDHSTATUS
__stdcall
TdhAggregatePayloadFilters(
    _In_ ULONG PayloadFilterCount,
    _In_reads_(PayloadFilterCount) PVOID* PayloadFilterPtrs,
    _In_reads_opt_(PayloadFilterCount) PBOOLEAN EventMatchALLFlags,
    _Out_ PEVENT_FILTER_DESCRIPTOR EventFilterDescriptor
    );
TDHSTATUS
__stdcall
TdhCleanupPayloadEventFilterDescriptor(
    _Inout_ PEVENT_FILTER_DESCRIPTOR EventFilterDescriptor
    );
typedef struct _PROVIDER_FILTER_INFO {
    UCHAR Id;
    UCHAR Version;
    ULONG MessageOffset;
    ULONG Reserved;
    ULONG PropertyCount;
    _Field_size_(PropertyCount) EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FILTER_INFO, *PPROVIDER_FILTER_INFO;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _EVENT_FIELD_TYPE {
    EventKeywordInformation = 0,
    EventLevelInformation,
    EventChannelInformation,
    EventTaskInformation,
    EventOpcodeInformation,
    EventInformationMax
} EVENT_FIELD_TYPE;
typedef struct _PROVIDER_FIELD_INFO {
    ULONG NameOffset;
    ULONG DescriptionOffset;
    ULONGLONG Value;
} PROVIDER_FIELD_INFO;
typedef PROVIDER_FIELD_INFO *PPROVIDER_FIELD_INFO;
typedef struct _PROVIDER_FIELD_INFOARRAY {
    ULONG NumberOfElements;
    EVENT_FIELD_TYPE FieldType;
    PROVIDER_FIELD_INFO FieldInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FIELD_INFOARRAY;
typedef PROVIDER_FIELD_INFOARRAY *PPROVIDER_FIELD_INFOARRAY;
typedef struct _TRACE_PROVIDER_INFO {
    GUID ProviderGuid;
    ULONG SchemaSource;
    ULONG ProviderNameOffset;
} TRACE_PROVIDER_INFO;
typedef TRACE_PROVIDER_INFO *PTRACE_PROVIDER_INFO;
typedef struct _PROVIDER_ENUMERATION_INFO {
    ULONG NumberOfProviders;
    ULONG Reserved;
    _Field_size_(NumberOfProviders) TRACE_PROVIDER_INFO TraceProviderInfoArray[ANYSIZE_ARRAY];
} PROVIDER_ENUMERATION_INFO;
typedef PROVIDER_ENUMERATION_INFO *PPROVIDER_ENUMERATION_INFO;
typedef struct _PROVIDER_EVENT_INFO {
    ULONG NumberOfEvents;
    ULONG Reserved;
    _Field_size_(NumberOfEvents) EVENT_DESCRIPTOR EventDescriptorsArray[ANYSIZE_ARRAY];
} PROVIDER_EVENT_INFO;
typedef PROVIDER_EVENT_INFO *PPROVIDER_EVENT_INFO;
typedef enum _TDH_CONTEXT_TYPE {
    TDH_CONTEXT_WPP_TMFFILE,
    TDH_CONTEXT_WPP_TMFSEARCHPATH,
    TDH_CONTEXT_WPP_GMT,
    TDH_CONTEXT_POINTERSIZE,
    TDH_CONTEXT_PDB_PATH,
    TDH_CONTEXT_MAXIMUM
} TDH_CONTEXT_TYPE;
typedef struct _TDH_CONTEXT {
    ULONGLONG ParameterValue;
    TDH_CONTEXT_TYPE ParameterType;
    ULONG ParameterSize;
} TDH_CONTEXT;
typedef TDH_CONTEXT *PTDH_CONTEXT;
TDHSTATUS
__stdcall
TdhGetEventInformation(
    _In_ PEVENT_RECORD Event,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT TdhContext,
    _Out_writes_bytes_opt_(*BufferSize) PTRACE_EVENT_INFO Buffer,
    _Inout_ PULONG BufferSize
    );
TDHSTATUS
__stdcall
TdhGetEventMapInformation(
    _In_ PEVENT_RECORD pEvent,
    _In_ PWSTR pMapName,
    _Out_writes_bytes_opt_(*pBufferSize) PEVENT_MAP_INFO pBuffer,
    _Inout_ ULONG* pBufferSize
    );
TDHSTATUS
__stdcall
TdhGetPropertySize(
    _In_ PEVENT_RECORD pEvent,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT pTdhContext,
    _In_ ULONG PropertyDataCount,
    _In_reads_(PropertyDataCount) PPROPERTY_DATA_DESCRIPTOR pPropertyData,
    _Out_ ULONG* pPropertySize
    );
TDHSTATUS
__stdcall
TdhGetProperty(
    _In_ PEVENT_RECORD pEvent,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT pTdhContext,
    _In_ ULONG PropertyDataCount,
    _In_reads_(PropertyDataCount) PPROPERTY_DATA_DESCRIPTOR pPropertyData,
    _In_ ULONG BufferSize,
    _Out_writes_bytes_(BufferSize) PBYTE pBuffer
    );
TDHSTATUS
__stdcall
TdhEnumerateProviders(
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_ENUMERATION_INFO pBuffer,
    _Inout_ ULONG* pBufferSize
    );
TDHSTATUS
__stdcall
TdhQueryProviderFieldInformation(
    _In_ LPGUID pGuid,
    _In_ ULONGLONG EventFieldValue,
    _In_ EVENT_FIELD_TYPE EventFieldType,
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_FIELD_INFOARRAY pBuffer,
    _Inout_ ULONG* pBufferSize
    );
TDHSTATUS
__stdcall
TdhEnumerateProviderFieldInformation(
    _In_ LPGUID pGuid,
    _In_ EVENT_FIELD_TYPE EventFieldType,
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_FIELD_INFOARRAY pBuffer,
    _Inout_ ULONG* pBufferSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
TDHSTATUS
__stdcall
TdhEnumerateProviderFilters(
    _In_ LPGUID Guid,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT TdhContext,
    _Out_ ULONG* FilterCount,
    _Out_writes_bytes_opt_(*BufferSize) PPROVIDER_FILTER_INFO* Buffer,
    _Inout_ ULONG* BufferSize
    );
#endif
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
TDHSTATUS
__stdcall
TdhLoadManifest(
    _In_ PWSTR Manifest
    );
TDHSTATUS
__stdcall
TdhLoadManifestFromMemory(
    _In_reads_bytes_(cbData) LPCVOID pData,
    _In_ ULONG cbData
    );
TDHSTATUS
__stdcall
TdhUnloadManifest(
    _In_ PWSTR Manifest
    );
TDHSTATUS
__stdcall
TdhUnloadManifestFromMemory(
    _In_reads_bytes_(cbData) LPCVOID pData,
    _In_ ULONG cbData
    );
TDHSTATUS
__stdcall
TdhFormatProperty(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_opt_ PEVENT_MAP_INFO MapInfo,
    _In_ ULONG PointerSize,
    _In_ USHORT PropertyInType,
    _In_ USHORT PropertyOutType,
    _In_ USHORT PropertyLength,
    _In_ USHORT UserDataLength,
    _In_reads_bytes_(UserDataLength) PBYTE UserData,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_opt_(*BufferSize) PWCHAR Buffer,
    _Out_ PUSHORT UserDataConsumed
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
TDHSTATUS
__stdcall
TdhOpenDecodingHandle(
    _Out_ PTDH_HANDLE Handle
    );
TDHSTATUS
__stdcall
TdhSetDecodingParameter(
    _In_ TDH_HANDLE Handle,
    _In_ PTDH_CONTEXT TdhContext
    );
TDHSTATUS
__stdcall
TdhGetDecodingParameter(
    _In_ TDH_HANDLE Handle,
    _Inout_ PTDH_CONTEXT TdhContext
    );
TDHSTATUS
__stdcall
TdhGetWppProperty(
    _In_ TDH_HANDLE Handle,
    _In_ PEVENT_RECORD EventRecord,
    _In_ PWSTR PropertyName,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_(*BufferSize) PBYTE Buffer
    );
TDHSTATUS
__stdcall
TdhGetWppMessage(
    _In_ TDH_HANDLE Handle,
    _In_ PEVENT_RECORD EventRecord,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_(*BufferSize) PBYTE Buffer
    );
TDHSTATUS
__stdcall
TdhCloseDecodingHandle(
    _In_ TDH_HANDLE Handle
    );
TDHSTATUS
__stdcall
TdhLoadManifestFromBinary(
    _In_ PWSTR BinaryPath
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
TDHSTATUS
__stdcall
TdhEnumerateManifestProviderEvents(
    _In_ LPGUID ProviderGuid,
    _Out_writes_bytes_opt_(*BufferSize) PPROVIDER_EVENT_INFO Buffer,
    _Inout_ ULONG* BufferSize
    );
TDHSTATUS
__stdcall
TdhGetManifestEventInformation(
    _In_ LPGUID ProviderGuid,
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _Out_writes_bytes_opt_(*BufferSize) PTRACE_EVENT_INFO Buffer,
    _Inout_ ULONG* BufferSize
    );
TDH_INLINE
PWSTR
EMI_MAP_NAME(
    _In_ PEVENT_MAP_INFO MapInfo
    )
{
    return (MapInfo->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)MapInfo + MapInfo->NameOffset);
}
TDH_INLINE
PWSTR
EMI_MAP_FORMAT(
    _In_ PEVENT_MAP_INFO MapInfo
    )
{
    if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) &&
        (MapInfo->FormatStringOffset)) {
        return (PWSTR)((PBYTE)MapInfo + MapInfo->FormatStringOffset);
    } else {
        return NULL;
    }
}
TDH_INLINE
PWSTR
EMI_MAP_OUTPUT(
    _In_ PEVENT_MAP_INFO MapInfo,
    _In_ PEVENT_MAP_ENTRY Map
    )
{
    return (Map->OutputOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)MapInfo + Map->OutputOffset);
}
TDH_INLINE
PWSTR
EMI_MAP_INPUT(
    _In_ PEVENT_MAP_INFO MapInfo,
    _In_ PEVENT_MAP_ENTRY Map
    )
{
    if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) &&
        (Map->InputOffset != 0)) {
        return (PWSTR)((PBYTE)MapInfo + Map->InputOffset);
    } else {
        return NULL;
    }
}
TDH_INLINE
PWSTR
TEI_MAP_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->nonStructType.MapNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + Property->nonStructType.MapNameOffset);
}
TDH_INLINE
PWSTR
TEI_PROPERTY_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + Property->NameOffset);
}
TDH_INLINE
PWSTR
TEI_PROVIDER_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ProviderNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderNameOffset);
}
TDH_INLINE
PWSTR
TEI_LEVEL_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->LevelNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->LevelNameOffset);
}
TDH_INLINE
PWSTR
TEI_CHANNEL_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ChannelNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ChannelNameOffset);
}
TDH_INLINE
PWSTR
TEI_KEYWORDS_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->KeywordsNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->KeywordsNameOffset);
}
TDH_INLINE
PWSTR
TEI_TASK_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->TaskNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->TaskNameOffset);
}
TDH_INLINE
PWSTR
TEI_OPCODE_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->OpcodeNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->OpcodeNameOffset);
}
TDH_INLINE
PWSTR
TEI_EVENT_MESSAGE(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->EventMessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->EventMessageOffset);
}
TDH_INLINE
PWSTR
TEI_PROVIDER_MESSAGE(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ProviderMessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderMessageOffset);
}
TDH_INLINE
PWSTR
TEI_ACTIVITYID_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ActivityIDNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ActivityIDNameOffset);
}
TDH_INLINE
PWSTR
TEI_RELATEDACTIVITYID_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->RelatedActivityIDNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->RelatedActivityIDNameOffset);
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
TDH_INLINE
PWSTR
PFI_FILTER_MESSAGE(
    _In_ PPROVIDER_FILTER_INFO FilterInfo
    )
{
    return (FilterInfo->MessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FilterInfo + FilterInfo->MessageOffset);
}
TDH_INLINE
PWSTR
PFI_PROPERTY_NAME(
    _In_ PPROVIDER_FILTER_INFO FilterInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FilterInfo + Property->NameOffset);
}
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
TDH_INLINE
PWSTR
PFI_FIELD_NAME(
    _In_ PPROVIDER_FIELD_INFOARRAY FieldInfoArray,
    _In_ PPROVIDER_FIELD_INFO FieldInfo
    )
{
    return (FieldInfo->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->NameOffset);
}
TDH_INLINE
PWSTR
PFI_FIELD_MESSAGE(
    _In_ PPROVIDER_FIELD_INFOARRAY FieldInfoArray,
    _In_ PPROVIDER_FIELD_INFO FieldInfo
    )
{
    return (FieldInfo->DescriptionOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->DescriptionOffset);
}
TDH_INLINE
PWSTR
PEI_PROVIDER_NAME(
    _In_ PPROVIDER_ENUMERATION_INFO ProviderEnum,
    _In_ PTRACE_PROVIDER_INFO ProviderInfo
    )
{
    return (ProviderInfo->ProviderNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)ProviderEnum + ProviderInfo->ProviderNameOffset);
}
#pragma warning(pop)
}
#endif
#pragma endregion
