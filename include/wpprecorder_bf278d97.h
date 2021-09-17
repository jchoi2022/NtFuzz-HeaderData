       
#include <ntstrsafe.h>
extern "C" {
DECLARE_HANDLE(RECORDER_LOG);
DECLARE_HANDLE(WPP_RECORDER_COUNTER);
typedef struct _WPP_TRIAGE_INFO {
    ULONG WppAutoLogHeaderSize;
    ULONG WppDriverContextOffset;
    ULONG WppAutoLogHeaderSizeOffset;
    ULONG WppSizeOfAutoLogHeaderSizeField;
    ULONG WppDriverContextSize;
} WPP_TRIAGE_INFO, *PWPP_TRIAGE_INFO;
typedef struct _RECORDER_CONFIGURE_PARAMS {
    ULONG Size;
    BOOLEAN CreateDefaultLog;
} RECORDER_CONFIGURE_PARAMS, *PRECORDER_CONFIGURE_PARAMS;
FORCEINLINE
VOID
RECORDER_CONFIGURE_PARAMS_INIT(
    _Out_
        PRECORDER_CONFIGURE_PARAMS Params
    )
{
    Params->Size = sizeof(*Params);
    Params->CreateDefaultLog = TRUE;
}
__drv_maxIRQL(PASSIVE_LEVEL)
VOID
imp_WppRecorderConfigure(
    _In_
        PVOID WppCb,
    _In_
        PRECORDER_CONFIGURE_PARAMS ConfigureParams
    );
    imp_WppRecorderConfigure(WPP_CB, ConfigureParams)
typedef struct _RECORDER_LOG_CREATE_PARAMS {
    ULONG Size;
    ULONG LogTag;
    ULONG TotalBufferSize;
    ULONG ErrorPartitionSize;
    ULONG_PTR LogIdentifierAppendValue;
    BOOLEAN LogIdentifierAppendValueSet;
    ULONG LogIdentifierSize;
    _Field_size_(LogIdentifierSize)
    CHAR LogIdentifier[RECORDER_LOG_IDENTIFIER_MAX_CHARS];
} RECORDER_LOG_CREATE_PARAMS, *PRECORDER_LOG_CREATE_PARAMS;
FORCEINLINE
VOID
RECORDER_LOG_CREATE_PARAMS_INIT(
    _Out_
        PRECORDER_LOG_CREATE_PARAMS Params,
    _In_opt_
        PSTR LogIdentifier
    )
{
    Params->Size = sizeof(*Params);
    Params->TotalBufferSize = RECORDER_LOG_DEFAULT_BUFFER_SIZE;
    Params->ErrorPartitionSize = RECORDER_LOG_DEFAULT_ERR_PARTITION_SIZE;
    Params->LogIdentifier[0] = '\0';
    Params->LogIdentifierSize = sizeof(Params->LogIdentifier);
    Params->LogIdentifierAppendValue = 0;
    Params->LogIdentifierAppendValueSet = FALSE;
    Params->LogTag = 0;
    if (LogIdentifier != NULL) {
        RtlStringCchCopyA(Params->LogIdentifier,
                          ARRAYSIZE(Params->LogIdentifier),
                          LogIdentifier);
    }
}
FORCEINLINE
VOID
RECORDER_LOG_CREATE_PARAMS_INIT_APPEND_POINTER(
    _Out_
        PRECORDER_LOG_CREATE_PARAMS Params,
    _In_opt_
        PSTR LogIdentifier,
    _In_
        PVOID LogIdentifierAppendPointer
    )
{
    RECORDER_LOG_CREATE_PARAMS_INIT(Params, LogIdentifier);
    Params->LogIdentifierAppendValue = (ULONG_PTR) LogIdentifierAppendPointer;
    Params->LogIdentifierAppendValueSet = TRUE;
}
__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
imp_WppRecorderLogCreate(
    _In_
        PVOID WppCb,
    _In_
        PRECORDER_LOG_CREATE_PARAMS CreateParams,
    _Out_
        RECORDER_LOG * RecorderLog
    );
    imp_WppRecorderLogCreate(WPP_CB, CreateParams, RecorderLog)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
imp_WppRecorderLogDelete(
    _In_
       PVOID WppCb,
    _In_
        RECORDER_LOG RecorderLog
    );
    imp_WppRecorderLogDelete(WPP_CB, RecorderLog)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
imp_WppRecorderLogSetIdentifier(
    _In_
       PVOID WppCb,
    _In_
        RECORDER_LOG RecorderLog,
    _In_
        PSTR LogIdentifier
    );
    imp_WppRecorderLogSetIdentifier(WPP_CB, RecorderLog, LogIdentifier)
__drv_maxIRQL(DISPATCH_LEVEL)
RECORDER_LOG
imp_WppRecorderLogGetDefault(
    _In_
        PVOID WppCb
    );
    imp_WppRecorderLogGetDefault(WPP_CB)
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
imp_WppRecorderIsDefaultLogAvailable(
    _In_
        PVOID WppCb
    );
    imp_WppRecorderIsDefaultLogAvailable(WPP_CB)
__drv_maxIRQL(DISPATCH_LEVEL)
WPP_RECORDER_COUNTER
imp_WppRecorderGetCounterHandle(
    _In_
        PVOID WppCb
    );
    imp_WppRecorderGetCounterHandle(WPP_CB)
__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
imp_WppRecorderLinkCounters(
    _In_
        PVOID WppCb,
    _In_
        WPP_RECORDER_COUNTER CounterOwner
    );
    imp_WppRecorderLinkCounters(WPP_CB, CounterOwner)
__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
imp_WppRecorderGetTriageInfo(
    _In_
        PVOID WppCb,
    _Out_
        PWPP_TRIAGE_INFO WppTriageInfo
    );
    imp_WppRecorderGetTriageInfo(WPP_CB, WppTriageInfo)
__drv_maxIRQL(HIGH_LEVEL)
NTSTATUS
imp_WppRecorderDumpLiveDriverData(
    _In_
        PVOID WppCb,
    _Out_ __deref_ecount(*OutBufferLength)
        PVOID * OutBuffer,
    _Out_
        PULONG OutBufferLength,
    _Out_
        LPGUID Guid
    );
    imp_WppRecorderDumpLiveDriverData(WPP_CB, OutBuffer, OutBufferLength, Guid)
__drv_maxIRQL(HIGH_LEVEL)
NTSTATUS
imp_WppRecorderLogDumpLiveData(
    _In_
        PVOID WppCb,
    _In_
        RECORDER_LOG RecorderLog,
    _Out_ __deref_ecount(*OutBufferLength)
        PVOID * OutBuffer,
    _Out_
        PULONG OutBufferLength,
    _Out_
        LPGUID Guid
    );
    imp_WppRecorderLogDumpLiveData(WPP_CB, RecorderLog, OutBuffer, OutBufferLength, Guid)
}
    (lvl < TRACE_LEVEL_VERBOSE || WPP_CONTROL(WPP_BIT_ ## flags).AutoLogVerboseEnabled)
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_ARGS (ifr, lvl, flags)
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_FILTER (ifr, lvl, flags)
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_ARGS (ifr, lvl, flags)
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_FILTER (ifr, lvl, flags)
