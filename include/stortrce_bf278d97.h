#include <stdarg.h>
typedef PVOID STORAGE_TRACE_CONTEXT;
typedef
VOID
(*STOR_CLEANUP_TRACING) (
        _In_ PVOID Arg1
        );
typedef struct _STORAGE_TRACE_INIT_INFO {
    ULONG Size;
    ULONG NumDiagEventRecords;
    ULONG DiagEventRecordUserDataSize;
    ULONG NumErrorLogRecords;
    GUID TraceGuid;
    STOR_CLEANUP_TRACING TraceCleanupRoutine;
    PVOID DriverObject;
    PVOID TraceContext;
} STORAGE_TRACE_INIT_INFO, *PSTORAGE_TRACE_INIT_INFO;
typedef struct _STORAGE_DIAG_EVENT_RECORD {
    ULONG Size;
    ULONG Reserved;
    UCHAR Info[1];
} STORAGE_DIAG_EVENT_RECORD, *PSTORAGE_DIAG_EVENT_RECORD;
typedef struct _STORAGE_TRACE_DPS_INFO {
    GUID EventId;
    ULONG Flags;
    ULONG Status;
    ULONG NumContexts;
    PVOID Contexts;
    ULONG UserDataSize;
} STORAGE_TRACE_DPS_INFO, *PSTORAGE_TRACE_DPS_INFO;
typedef struct _STORAGE_ERRORLOG_PACKET {
    UCHAR MajorFunctionCode;
    UCHAR RetryCount;
    USHORT DumpDataSize;
    USHORT NumberOfStrings;
    USHORT StringOffset;
    USHORT EventCategory;
    ULONG ErrorCode;
    ULONG UniqueErrorValue;
    ULONG FinalStatus;
    ULONG SequenceNumber;
    ULONG IoControlCode;
    LARGE_INTEGER DeviceOffset;
    ULONG DumpData[1];
} STORAGE_ERRORLOG_PACKET, *PSTORAGE_ERRORLOG_PACKET;
typedef enum _STORAGE_TRACE_NOTIFY_TYPE {
    InitTracing = 1000,
    CleanupTracing,
    TraceMessage = 2000,
    InitGlobalLogger,
    WMIRegistrationControl,
    WmiQueryTraceInfo,
    InitUnicodeString,
    TraceDebugPrint,
    AllocDiagEvent = 3000,
    FreeDiagEvent,
    LogDiagEvent,
    WriteErrorLogRecord = 4000,
    AllocErrorLog,
    FreeErrorLog
} STORAGE_TRACE_NOTIFY_TYPE, *PSTORAGE_TRACE_NOTIFY_TYPE;
typedef struct _STOR_DEBUGPRINT_ARGS {
    PCHAR Message;
    va_list ArgList;
} STOR_DEBUGPRINT_ARGS, *PSTOR_DEBUGPRINT_ARGS;
typedef struct _STOR_INIT_TRACING_ARGS {
    PVOID InitInfo;
    ULONG Result;
} STOR_INIT_TRACING_ARGS, *PSTOR_INIT_TRACING_ARGS;
typedef struct _STOR_CLEANUP_TRACING_ARGS {
    PVOID TraceContext;
} STOR_CLEANUP_TRACING_ARGS, *PSTOR_CLEANUP_TRACING_ARGS;
typedef struct _STOR_WRITE_EL_RECORD_ARGS {
    PVOID TraceContext;
    PVOID ErrorLogPacket;
} STOR_WRITE_EL_RECORD_ARGS, *PSTOR_WRITE_EL_RECORD_ARGS;
typedef struct _STOR_ALLOC_EL_RECORD_ARGS {
    PVOID TraceContext;
    ULONG Size;
    PSTORAGE_ERRORLOG_PACKET Result;
} STOR_ALLOC_EL_RECORD_ARGS, *PSTOR_ALLOC_EL_RECORD_ARGS;
typedef struct _STOR_FREE_EL_RECORD_ARGS {
    PVOID TraceContext;
    PSTORAGE_ERRORLOG_PACKET ErrorLogPacket;
} STOR_FREE_EL_RECORD_ARGS, *PSTOR_FREE_EL_RECORD_ARGS;
typedef struct _STOR_LOG_DIAG_EVENT_ARGS {
    PVOID TraceContext;
    PVOID ContextEvent;
    ULONG result;
} STOR_LOG_DIAG_EVENT_ARGS, *PSTOR_LOG_DIAG_EVENT_ARGS;
typedef struct _STOR_ALLOC_DIAG_EVENT_ARGS {
    PVOID TraceContext;
    ULONG UserDataSize;
    BOOLEAN Allocate;
    PVOID result;
} STOR_ALLOC_DIAG_EVENT_ARGS, *PSTOR_ALLOC_DIAG_EVENT_ARGS;
typedef struct _STOR_FREE_DIAG_EVENT_ARGS {
    PVOID TraceContext;
    PVOID EventRecord;
} STOR_FREE_DIAG_EVENT_ARGS, *PSTOR_FREE_DIAG_EVENT_ARGS;
typedef struct _STOR_WMI_TRACE_MESSAGE_ARGS {
    ULONG64 TraceHandle;
    ULONG MessageFlags;
    LPCGUID MessageGuid;
    USHORT MessageNumber;
    va_list Args;
    ULONG result;
} STOR_WMI_TRACE_MESSAGE_ARGS, *PSTOR_WMI_TRACE_MESSAGE_ARGS;
typedef struct _STOR_INIT_UNICODE_STRING_ARGS {
    PVOID DestinationString;
    PCWSTR SourceString;
} STOR_INIT_UNICODE_STRING_ARGS, *PSTOR_INIT_UNICODE_STRING_ARGS;
typedef struct _STOR_WMI_REGCONTROL_ARGS {
    PVOID DeviceObject;
    ULONG Action;
    ULONG result;
} STOR_WMI_REGCONTROL_ARGS, *PSTOR_WMI_REGCONTROL_ARGS;
typedef struct _STOR_WMI_QUERYTRACEINFO_ARGS {
    ULONG TraceInformationClass;
    PVOID TraceInformation;
    ULONG TraceInformationLength;
    PULONG RequiredLength;
    PVOID Buffer;
    ULONG result;
} STOR_WMI_QUERYTRACEINFO_ARGS, *PSTOR_WMI_QUERYTRACEINFO_ARGS;
typedef struct _STOR_INITGLOBALLOGGER_ARGS {
    LPCGUID ControlGuid;
    PVOID Logger;
    PVOID Flags;
    PVOID Level;
} STOR_INITGLOBALLOGGER_ARGS, *PSTOR_INITGLOBALLOGGER_ARGS;
{ \
    ULONG _i = count; \
    while (_i) { \
        *((char *)dst+_i-1) = (char)val; \
        _i--; \
    } \
}
ULONG
__inline
StorInitTracing(
    _In_ PVOID InitInfo
    )
{
    STOR_INIT_TRACING_ARGS args = {0};
    args.InitInfo = InitInfo;
    args.Result = 0xC00000BB;
    _PortTraceNotification(TraceNotification, NULL, InitTracing, &args);
    return args.Result;
}
VOID
__inline
StorCleanupTracing(
    _In_ PVOID TraceContext
    )
{
    STOR_CLEANUP_TRACING_ARGS args = {0};
    args.TraceContext = TraceContext;
    _PortTraceNotification(TraceNotification, NULL, CleanupTracing, &args);
}
ULONG
__inline
StorTraceDiagLogEvent(
    _In_ PVOID DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ PVOID Event
    )
{
    STOR_LOG_DIAG_EVENT_ARGS args = {0};
    args.TraceContext = TraceContext;
    args.ContextEvent = Event;
    _PortTraceNotification(TraceNotification, DeviceExtension, LogDiagEvent, &args);
    return args.result;
}
PVOID
__inline
StorTraceDiagAllocEvent(
    _In_ PVOID DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ ULONG DataSize,
    _In_ BOOLEAN Allocate
    )
{
    STOR_ALLOC_DIAG_EVENT_ARGS args = {0};
    args.TraceContext = TraceContext;
    args.UserDataSize = DataSize;
    args.Allocate = Allocate;
    _PortTraceNotification(TraceNotification, DeviceExtension, AllocDiagEvent, &args);
    return args.result;
}
VOID
__inline
StorTraceDiagFreeEvent(
    _In_ PVOID DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ PVOID Event
    )
{
    STOR_FREE_DIAG_EVENT_ARGS args = {0};
    args.TraceContext = TraceContext;
    args.EventRecord = Event;
    _PortTraceNotification(TraceNotification, DeviceExtension, FreeDiagEvent, &args);
}
VOID
__inline
StorTraceErrorWriteRecord(
    _In_ PVOID DeviceExtension,
    _In_ PVOID Arg1,
    _In_ PVOID Arg2
    )
{
    STOR_WRITE_EL_RECORD_ARGS args = {0};
    args.TraceContext = Arg1;
    args.ErrorLogPacket = Arg2;
    _PortTraceNotification(TraceNotification, DeviceExtension, WriteErrorLogRecord, &args);
}
PSTORAGE_ERRORLOG_PACKET
__inline
StorTraceErrorAllocRecord(
    _In_ PVOID DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ ULONG Size
    )
{
    STOR_ALLOC_EL_RECORD_ARGS args = {0};
    args.TraceContext = TraceContext;
    args.Size = Size;
    _PortTraceNotification(TraceNotification, DeviceExtension, AllocErrorLog, &args);
    return args.Result;
}
VOID
__inline
StorTraceErrorFreeRecord(
    _In_ PVOID DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ PSTORAGE_ERRORLOG_PACKET ErrorLogPacket
    )
{
    STOR_FREE_EL_RECORD_ARGS args = {0};
    args.TraceContext = TraceContext;
    args.ErrorLogPacket = ErrorLogPacket;
    _PortTraceNotification(TraceNotification, DeviceExtension, FreeErrorLog, &args);
}
ULONG
__inline
StorWmiTraceMessage(
    _In_ ULONG64 Arg1,
    _In_ ULONG Arg2,
    _In_ LPCGUID Arg3,
    _In_ USHORT Arg4,
    ...
    )
{
    STOR_WMI_TRACE_MESSAGE_ARGS args = {0};
    va_list ap;
    va_start(ap, Arg4);
    args.TraceHandle = Arg1;
    args.MessageFlags = Arg2;
    args.MessageGuid = Arg3;
    args.MessageNumber = Arg4;
    args.Args = ap;
    _PortTraceNotification(TraceNotification, NULL, TraceMessage, &args);
    return args.result;
}
VOID
__inline
StorRtlInitUnicodeString(
    _Out_ PVOID Arg1,
    _In_ PCWSTR Arg2
    )
{
    STOR_INIT_UNICODE_STRING_ARGS args;
    args.DestinationString = Arg1;
    args.SourceString = Arg2;
    _PortTraceNotification(TraceNotification, NULL, InitUnicodeString, &args);
}
VOID
__inline
StorWppInitGlobalLogger(
    _In_ LPCGUID Arg1,
    _In_ PVOID Arg2,
    _In_ PVOID Arg3,
    _In_ PVOID Arg4
    )
{
    STOR_INITGLOBALLOGGER_ARGS args = {0};
    args.ControlGuid = Arg1;
    args.Logger = Arg2;
    args.Flags = Arg3;
    args.Level = Arg4;
    _PortTraceNotification(TraceNotification, NULL, InitGlobalLogger, &args);
}
ULONG
__inline
StorIoWMIRegistrationControl(
    _In_ PVOID Arg1,
    _In_ ULONG Arg2
    )
{
    STOR_WMI_REGCONTROL_ARGS args = {0};
    args.DeviceObject = Arg1;
    args.Action = Arg2;
    _PortTraceNotification(TraceNotification, NULL, WMIRegistrationControl, &args);
    return args.result;
}
ULONG
__inline
StorWmiQueryTraceInformation(
    _In_ ULONG Arg1,
    _Out_ PVOID Arg2,
    _In_ ULONG Arg3,
    _Out_ PULONG Arg4,
    _In_ PVOID Arg5
    )
{
    STOR_WMI_QUERYTRACEINFO_ARGS args = {0};
    args.TraceInformationClass = Arg1;
    args.TraceInformation = Arg2;
    args.TraceInformationLength = Arg3;
    args.RequiredLength = Arg4;
    args.Buffer = Arg5;
    _PortTraceNotification(TraceNotification, NULL, WmiQueryTraceInfo, &args);
    return args.result;
}
