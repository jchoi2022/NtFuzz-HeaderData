#include <winapifamily.h>
#pragma region Desktop Family or EventLogService Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_EVENTLOGSERVICE)
extern "C"
{
typedef HANDLE EVT_HANDLE, *PEVT_HANDLE;
typedef enum _EVT_VARIANT_TYPE
{
    EvtVarTypeNull = 0,
    EvtVarTypeString = 1,
    EvtVarTypeAnsiString = 2,
    EvtVarTypeSByte = 3,
    EvtVarTypeByte = 4,
    EvtVarTypeInt16 = 5,
    EvtVarTypeUInt16 = 6,
    EvtVarTypeInt32 = 7,
    EvtVarTypeUInt32 = 8,
    EvtVarTypeInt64 = 9,
    EvtVarTypeUInt64 = 10,
    EvtVarTypeSingle = 11,
    EvtVarTypeDouble = 12,
    EvtVarTypeBoolean = 13,
    EvtVarTypeBinary = 14,
    EvtVarTypeGuid = 15,
    EvtVarTypeSizeT = 16,
    EvtVarTypeFileTime = 17,
    EvtVarTypeSysTime = 18,
    EvtVarTypeSid = 19,
    EvtVarTypeHexInt32 = 20,
    EvtVarTypeHexInt64 = 21,
    EvtVarTypeEvtHandle = 32,
    EvtVarTypeEvtXml = 35
} EVT_VARIANT_TYPE;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _EVT_VARIANT
{
    union
    {
        BOOL BooleanVal;
        INT8 SByteVal;
        INT16 Int16Val;
        INT32 Int32Val;
        INT64 Int64Val;
        UINT8 ByteVal;
        UINT16 UInt16Val;
        UINT32 UInt32Val;
        UINT64 UInt64Val;
        float SingleVal;
        double DoubleVal;
        ULONGLONG FileTimeVal;
        SYSTEMTIME* SysTimeVal;
        GUID* GuidVal;
        LPCWSTR StringVal;
        LPCSTR AnsiStringVal;
        PBYTE BinaryVal;
        PSID SidVal;
        size_t SizeTVal;
        BOOL* BooleanArr;
        INT8* SByteArr;
        INT16* Int16Arr;
        INT32* Int32Arr;
        INT64* Int64Arr;
        UINT8* ByteArr;
        UINT16* UInt16Arr;
        UINT32* UInt32Arr;
        UINT64* UInt64Arr;
        float* SingleArr;
        double* DoubleArr;
        FILETIME* FileTimeArr;
        SYSTEMTIME* SysTimeArr;
        GUID* GuidArr;
        LPWSTR* StringArr;
        LPSTR* AnsiStringArr;
        PSID* SidArr;
        size_t* SizeTArr;
        EVT_HANDLE EvtHandleVal;
        LPCWSTR XmlVal;
        LPCWSTR* XmlValArr;
    };
    DWORD Count;
    DWORD Type;
} EVT_VARIANT, *PEVT_VARIANT;
#pragma warning(pop)
typedef enum _EVT_LOGIN_CLASS
{
    EvtRpcLogin = 1
} EVT_LOGIN_CLASS;
typedef enum _EVT_RPC_LOGIN_FLAGS
{
    EvtRpcLoginAuthDefault = 0,
    EvtRpcLoginAuthNegotiate,
    EvtRpcLoginAuthKerberos,
    EvtRpcLoginAuthNTLM
} EVT_RPC_LOGIN_FLAGS;
typedef struct _EVT_RPC_LOGIN
{
    LPWSTR Server;
    LPWSTR User;
    LPWSTR Domain;
    LPWSTR Password;
    DWORD Flags;
} EVT_RPC_LOGIN;
EVT_HANDLE
WINAPI
EvtOpenSession(
    EVT_LOGIN_CLASS LoginClass,
    _When_((LoginClass == EvtRpcLogin), _In_reads_bytes_(sizeof(EVT_RPC_LOGIN))) PVOID Login,
    _Reserved_ DWORD Timeout,
    _Reserved_ DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtClose(
    _In_ _Post_invalid_ EVT_HANDLE Object
    );
BOOL
WINAPI
EvtCancel(
    _In_opt_ EVT_HANDLE Object
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
EvtGetExtendedStatus(
    DWORD BufferSize,
    _Out_writes_to_opt_(BufferSize,*BufferUsed) LPWSTR Buffer,
    _Out_ PDWORD BufferUsed
    );
typedef enum _EVT_QUERY_FLAGS
{
    EvtQueryChannelPath = 0x1,
    EvtQueryFilePath = 0x2,
    EvtQueryForwardDirection = 0x100,
    EvtQueryReverseDirection = 0x200,
    EvtQueryTolerateQueryErrors = 0x1000
} EVT_QUERY_FLAGS;
typedef enum _EVT_SEEK_FLAGS
{
    EvtSeekRelativeToFirst = 1,
    EvtSeekRelativeToLast = 2,
    EvtSeekRelativeToCurrent = 3,
    EvtSeekRelativeToBookmark = 4,
    EvtSeekOriginMask = 7,
    EvtSeekStrict = 0x10000,
} EVT_SEEK_FLAGS;
EVT_HANDLE
WINAPI
EvtQuery(
    _In_opt_ EVT_HANDLE Session,
    _In_opt_z_ LPCWSTR Path,
    _In_opt_z_ LPCWSTR Query,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtNext(
    _In_ EVT_HANDLE ResultSet,
    DWORD EventsSize,
    _Out_writes_to_(EventsSize,*Returned) PEVT_HANDLE Events,
    DWORD Timeout,
    DWORD Flags,
    _Out_range_(0,EventsSize) PDWORD Returned
    );
BOOL
WINAPI
EvtSeek(
    _In_ EVT_HANDLE ResultSet,
    LONGLONG Position,
    _In_opt_ EVT_HANDLE Bookmark,
    _Reserved_ DWORD Timeout,
    DWORD Flags
    );
typedef enum _EVT_SUBSCRIBE_FLAGS
{
    EvtSubscribeToFutureEvents = 1,
    EvtSubscribeStartAtOldestRecord = 2,
    EvtSubscribeStartAfterBookmark = 3,
    EvtSubscribeOriginMask = 3,
    EvtSubscribeTolerateQueryErrors = 0x1000,
    EvtSubscribeStrict = 0x10000,
} EVT_SUBSCRIBE_FLAGS;
typedef enum _EVT_SUBSCRIBE_NOTIFY_ACTION
{
    EvtSubscribeActionError = 0,
    EvtSubscribeActionDeliver
} EVT_SUBSCRIBE_NOTIFY_ACTION;
typedef DWORD (WINAPI *EVT_SUBSCRIBE_CALLBACK)(
    EVT_SUBSCRIBE_NOTIFY_ACTION Action,
    _Maybenull_ PVOID UserContext,
    _In_ EVT_HANDLE Event );
EVT_HANDLE
WINAPI
EvtSubscribe(
    _In_opt_ EVT_HANDLE Session,
    _In_opt_ HANDLE SignalEvent,
    _In_opt_z_ LPCWSTR ChannelPath,
    _In_opt_z_ LPCWSTR Query,
    _In_opt_ EVT_HANDLE Bookmark,
    _Maybenull_ PVOID Context,
    _Maybenull_ EVT_SUBSCRIBE_CALLBACK Callback,
    DWORD Flags
    );
typedef enum _EVT_SYSTEM_PROPERTY_ID
{
    EvtSystemProviderName = 0,
    EvtSystemProviderGuid,
    EvtSystemEventID,
    EvtSystemQualifiers,
    EvtSystemLevel,
    EvtSystemTask,
    EvtSystemOpcode,
    EvtSystemKeywords,
    EvtSystemTimeCreated,
    EvtSystemEventRecordId,
    EvtSystemActivityID,
    EvtSystemRelatedActivityID,
    EvtSystemProcessID,
    EvtSystemThreadID,
    EvtSystemChannel,
    EvtSystemComputer,
    EvtSystemUserID,
    EvtSystemVersion,
    EvtSystemPropertyIdEND
} EVT_SYSTEM_PROPERTY_ID;
typedef enum _EVT_RENDER_CONTEXT_FLAGS
{
    EvtRenderContextValues = 0,
    EvtRenderContextSystem,
    EvtRenderContextUser
 } EVT_RENDER_CONTEXT_FLAGS;
typedef enum _EVT_RENDER_FLAGS
{
    EvtRenderEventValues = 0,
    EvtRenderEventXml,
    EvtRenderBookmark
 } EVT_RENDER_FLAGS;
EVT_HANDLE
WINAPI
EvtCreateRenderContext(
    DWORD ValuePathsCount,
    _In_reads_opt_(ValuePathsCount) LPCWSTR* ValuePaths,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtRender(
    _In_opt_ EVT_HANDLE Context,
    _In_ EVT_HANDLE Fragment,
    DWORD Flags,
    DWORD BufferSize,
    _Out_writes_bytes_to_opt_(BufferSize,*BufferUsed) PVOID Buffer,
    _Out_ PDWORD BufferUsed,
    _Out_ PDWORD PropertyCount
    );
typedef enum _EVT_FORMAT_MESSAGE_FLAGS
{
    EvtFormatMessageEvent = 1,
    EvtFormatMessageLevel,
    EvtFormatMessageTask,
    EvtFormatMessageOpcode,
    EvtFormatMessageKeyword,
    EvtFormatMessageChannel,
    EvtFormatMessageProvider,
    EvtFormatMessageId,
    EvtFormatMessageXml,
 } EVT_FORMAT_MESSAGE_FLAGS;
_Success_(return != 0)
BOOL
WINAPI
EvtFormatMessage(
    _In_opt_ EVT_HANDLE PublisherMetadata,
    _In_opt_ EVT_HANDLE Event,
    DWORD MessageId,
    DWORD ValueCount,
    _In_reads_opt_(ValueCount) PEVT_VARIANT Values,
    DWORD Flags,
    DWORD BufferSize,
    _Out_writes_to_opt_(BufferSize,*BufferUsed) LPWSTR Buffer,
    _Out_ PDWORD BufferUsed
    );
typedef enum _EVT_OPEN_LOG_FLAGS
{
    EvtOpenChannelPath = 0x1,
    EvtOpenFilePath = 0x2
} EVT_OPEN_LOG_FLAGS;
typedef enum _EVT_LOG_PROPERTY_ID
{
    EvtLogCreationTime = 0,
    EvtLogLastAccessTime,
    EvtLogLastWriteTime,
    EvtLogFileSize,
    EvtLogAttributes,
    EvtLogNumberOfLogRecords,
    EvtLogOldestRecordNumber,
    EvtLogFull,
} EVT_LOG_PROPERTY_ID;
EVT_HANDLE
WINAPI
EvtOpenLog(
    _In_opt_ EVT_HANDLE Session,
    _In_z_ LPCWSTR Path,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtGetLogInfo(
    _In_ EVT_HANDLE Log,
    EVT_LOG_PROPERTY_ID PropertyId,
    DWORD PropertyValueBufferSize,
    _Out_writes_bytes_to_opt_(PropertyValueBufferSize,*PropertyValueBufferUsed) PEVT_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
BOOL
WINAPI
EvtClearLog(
    _In_opt_ EVT_HANDLE Session,
    _In_z_ LPCWSTR ChannelPath,
    _In_opt_z_ LPCWSTR TargetFilePath,
    DWORD Flags
    );
typedef enum _EVT_EXPORTLOG_FLAGS
{
    EvtExportLogChannelPath = 0x1,
    EvtExportLogFilePath = 0x2,
    EvtExportLogTolerateQueryErrors = 0x1000,
    EvtExportLogOverwrite = 0x2000
} EVT_EXPORTLOG_FLAGS;
BOOL
WINAPI
EvtExportLog(
    _In_opt_ EVT_HANDLE Session,
    _In_opt_z_ LPCWSTR Path,
    _In_opt_z_ LPCWSTR Query,
    _In_z_ LPCWSTR TargetFilePath,
    DWORD Flags
    );
BOOL
WINAPI
EvtArchiveExportedLog(
    _In_opt_ EVT_HANDLE Session,
    _In_z_ LPCWSTR LogFilePath,
    LCID Locale,
    DWORD Flags
    );
typedef enum _EVT_CHANNEL_CONFIG_PROPERTY_ID
{
    EvtChannelConfigEnabled = 0,
    EvtChannelConfigIsolation,
    EvtChannelConfigType,
    EvtChannelConfigOwningPublisher,
    EvtChannelConfigClassicEventlog,
    EvtChannelConfigAccess,
    EvtChannelLoggingConfigRetention,
    EvtChannelLoggingConfigAutoBackup,
    EvtChannelLoggingConfigMaxSize,
    EvtChannelLoggingConfigLogFilePath,
    EvtChannelPublishingConfigLevel,
    EvtChannelPublishingConfigKeywords,
    EvtChannelPublishingConfigControlGuid,
    EvtChannelPublishingConfigBufferSize,
    EvtChannelPublishingConfigMinBuffers,
    EvtChannelPublishingConfigMaxBuffers,
    EvtChannelPublishingConfigLatency,
    EvtChannelPublishingConfigClockType,
    EvtChannelPublishingConfigSidType,
    EvtChannelPublisherList,
    EvtChannelPublishingConfigFileMax,
    EvtChannelConfigPropertyIdEND
} EVT_CHANNEL_CONFIG_PROPERTY_ID;
typedef enum _EVT_CHANNEL_TYPE
{
    EvtChannelTypeAdmin = 0,
    EvtChannelTypeOperational,
    EvtChannelTypeAnalytic,
    EvtChannelTypeDebug
} EVT_CHANNEL_TYPE;
typedef enum _EVT_CHANNEL_ISOLATION_TYPE
{
    EvtChannelIsolationTypeApplication = 0,
    EvtChannelIsolationTypeSystem,
    EvtChannelIsolationTypeCustom
} EVT_CHANNEL_ISOLATION_TYPE;
typedef enum _EVT_CHANNEL_CLOCK_TYPE
{
    EvtChannelClockTypeSystemTime = 0,
    EvtChannelClockTypeQPC
} EVT_CHANNEL_CLOCK_TYPE;
typedef enum _EVT_CHANNEL_SID_TYPE
{
    EvtChannelSidTypeNone = 0,
    EvtChannelSidTypePublishing
} EVT_CHANNEL_SID_TYPE;
EVT_HANDLE
WINAPI
EvtOpenChannelEnum(
    _In_opt_ EVT_HANDLE Session,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtNextChannelPath(
    _In_ EVT_HANDLE ChannelEnum,
    DWORD ChannelPathBufferSize,
    _Out_writes_to_opt_(ChannelPathBufferSize,*ChannelPathBufferUsed) LPWSTR ChannelPathBuffer,
    _Out_ PDWORD ChannelPathBufferUsed
    );
EVT_HANDLE
WINAPI
EvtOpenChannelConfig(
    _In_opt_ EVT_HANDLE Session,
    _In_z_ LPCWSTR ChannelPath,
    DWORD Flags
    );
BOOL
WINAPI
EvtSaveChannelConfig(
    _In_ EVT_HANDLE ChannelConfig,
    DWORD Flags
    );
BOOL
WINAPI
EvtSetChannelConfigProperty(
    _In_ EVT_HANDLE ChannelConfig,
    EVT_CHANNEL_CONFIG_PROPERTY_ID PropertyId,
    DWORD Flags,
    _In_ PEVT_VARIANT PropertyValue
    );
_Success_(return != 0)
BOOL
WINAPI
EvtGetChannelConfigProperty(
    _In_ EVT_HANDLE ChannelConfig,
    EVT_CHANNEL_CONFIG_PROPERTY_ID PropertyId,
    DWORD Flags,
    DWORD PropertyValueBufferSize,
    _Out_writes_bytes_to_opt_(PropertyValueBufferSize,*PropertyValueBufferUsed) PEVT_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
typedef enum _EVT_CHANNEL_REFERENCE_FLAGS
{
    EvtChannelReferenceImported = 0x1,
} EVT_CHANNEL_REFERENCE_FLAGS;
typedef enum _EVT_PUBLISHER_METADATA_PROPERTY_ID
{
    EvtPublisherMetadataPublisherGuid = 0,
    EvtPublisherMetadataResourceFilePath,
    EvtPublisherMetadataParameterFilePath,
    EvtPublisherMetadataMessageFilePath,
    EvtPublisherMetadataHelpLink,
    EvtPublisherMetadataPublisherMessageID,
    EvtPublisherMetadataChannelReferences,
    EvtPublisherMetadataChannelReferencePath,
    EvtPublisherMetadataChannelReferenceIndex,
    EvtPublisherMetadataChannelReferenceID,
    EvtPublisherMetadataChannelReferenceFlags,
    EvtPublisherMetadataChannelReferenceMessageID,
    EvtPublisherMetadataLevels,
    EvtPublisherMetadataLevelName,
    EvtPublisherMetadataLevelValue,
    EvtPublisherMetadataLevelMessageID,
    EvtPublisherMetadataTasks,
    EvtPublisherMetadataTaskName,
    EvtPublisherMetadataTaskEventGuid,
    EvtPublisherMetadataTaskValue,
    EvtPublisherMetadataTaskMessageID,
    EvtPublisherMetadataOpcodes,
    EvtPublisherMetadataOpcodeName,
    EvtPublisherMetadataOpcodeValue,
    EvtPublisherMetadataOpcodeMessageID,
    EvtPublisherMetadataKeywords,
    EvtPublisherMetadataKeywordName,
    EvtPublisherMetadataKeywordValue,
    EvtPublisherMetadataKeywordMessageID,
    EvtPublisherMetadataPropertyIdEND
} EVT_PUBLISHER_METADATA_PROPERTY_ID;
EVT_HANDLE
WINAPI
EvtOpenPublisherEnum(
    _In_opt_ EVT_HANDLE Session,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtNextPublisherId(
    _In_ EVT_HANDLE PublisherEnum,
    DWORD PublisherIdBufferSize,
    _Out_writes_to_opt_(PublisherIdBufferSize,*PublisherIdBufferUsed) LPWSTR PublisherIdBuffer,
    _Out_ PDWORD PublisherIdBufferUsed
    );
EVT_HANDLE
WINAPI
EvtOpenPublisherMetadata(
    _In_opt_ EVT_HANDLE Session,
    _In_z_ LPCWSTR PublisherId,
    _In_opt_z_ LPCWSTR LogFilePath,
    LCID Locale,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtGetPublisherMetadataProperty(
    _In_ EVT_HANDLE PublisherMetadata,
    EVT_PUBLISHER_METADATA_PROPERTY_ID PropertyId,
    DWORD Flags,
    DWORD PublisherMetadataPropertyBufferSize,
    _Out_writes_bytes_to_opt_(PublisherMetadataPropertyBufferSize,*PublisherMetadataPropertyBufferUsed) PEVT_VARIANT PublisherMetadataPropertyBuffer,
    _Out_ PDWORD PublisherMetadataPropertyBufferUsed
    );
typedef enum _EVT_EVENT_METADATA_PROPERTY_ID
{
    EventMetadataEventID,
    EventMetadataEventVersion,
    EventMetadataEventChannel,
    EventMetadataEventLevel,
    EventMetadataEventOpcode,
    EventMetadataEventTask,
    EventMetadataEventKeyword,
    EventMetadataEventMessageID,
    EventMetadataEventTemplate,
    EvtEventMetadataPropertyIdEND
} EVT_EVENT_METADATA_PROPERTY_ID;
EVT_HANDLE
WINAPI
EvtOpenEventMetadataEnum(
    _In_ EVT_HANDLE PublisherMetadata,
    DWORD Flags
    );
EVT_HANDLE
WINAPI
EvtNextEventMetadata(
    _In_ EVT_HANDLE EventMetadataEnum,
    DWORD Flags
    );
_Success_(return != 0)
BOOL
WINAPI
EvtGetEventMetadataProperty(
    _In_ EVT_HANDLE EventMetadata,
    EVT_EVENT_METADATA_PROPERTY_ID PropertyId,
    DWORD Flags,
    DWORD EventMetadataPropertyBufferSize,
    _Out_writes_bytes_to_opt_(EventMetadataPropertyBufferSize,*EventMetadataPropertyBufferUsed) PEVT_VARIANT EventMetadataPropertyBuffer,
    _Out_ PDWORD EventMetadataPropertyBufferUsed
    );
typedef HANDLE EVT_OBJECT_ARRAY_PROPERTY_HANDLE;
_Success_(return != 0)
BOOL
WINAPI
EvtGetObjectArraySize(
    _In_ EVT_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    _Out_ PDWORD ObjectArraySize
    );
_Success_(return != 0)
BOOL
WINAPI
EvtGetObjectArrayProperty(
    _In_ EVT_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray,
    DWORD PropertyId,
    DWORD ArrayIndex,
    DWORD Flags,
    DWORD PropertyValueBufferSize,
    _Out_writes_bytes_to_opt_(PropertyValueBufferSize,*PropertyValueBufferUsed) PEVT_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
typedef enum _EVT_QUERY_PROPERTY_ID
{
    EvtQueryNames,
    EvtQueryStatuses,
    EvtQueryPropertyIdEND
} EVT_QUERY_PROPERTY_ID;
typedef enum _EVT_EVENT_PROPERTY_ID
{
    EvtEventQueryIDs = 0,
    EvtEventPath,
    EvtEventPropertyIdEND
} EVT_EVENT_PROPERTY_ID;
_Success_(return != 0)
BOOL
WINAPI
EvtGetQueryInfo(
    _In_ EVT_HANDLE QueryOrSubscription,
    EVT_QUERY_PROPERTY_ID PropertyId,
    DWORD PropertyValueBufferSize,
    _Out_writes_bytes_to_opt_(PropertyValueBufferSize,*PropertyValueBufferUsed) PEVT_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
EVT_HANDLE
WINAPI
EvtCreateBookmark(
    _In_opt_z_ LPCWSTR BookmarkXml
    );
BOOL
WINAPI
EvtUpdateBookmark(
    _In_ EVT_HANDLE Bookmark,
    _In_ EVT_HANDLE Event
    );
_Success_(return != 0)
BOOL
WINAPI
EvtGetEventInfo(
    _In_ EVT_HANDLE Event,
    EVT_EVENT_PROPERTY_ID PropertyId,
    DWORD PropertyValueBufferSize,
    _Out_writes_bytes_to_opt_(PropertyValueBufferSize,*PropertyValueBufferUsed) PEVT_VARIANT PropertyValueBuffer,
    _Out_ PDWORD PropertyValueBufferUsed
    );
}
#endif
#pragma endregion
