       
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef struct _PERF_COUNTERSET_INFO {
    GUID CounterSetGuid;
    GUID ProviderGuid;
    ULONG NumCounters;
    ULONG InstanceType;
} PERF_COUNTERSET_INFO, * PPERF_COUNTERSET_INFO;
typedef struct _PERF_COUNTER_INFO {
    ULONG CounterId;
    ULONG Type;
    ULONGLONG Attrib;
    ULONG Size;
    ULONG DetailLevel;
    LONG Scale;
    ULONG Offset;
} PERF_COUNTER_INFO, * PPERF_COUNTER_INFO;
typedef struct _PERF_COUNTERSET_INSTANCE {
    GUID CounterSetGuid;
    ULONG dwSize;
    ULONG InstanceId;
    ULONG InstanceNameOffset;
    ULONG InstanceNameSize;
} PERF_COUNTERSET_INSTANCE, * PPERF_COUNTERSET_INSTANCE;
typedef struct _PERF_COUNTER_IDENTITY {
    GUID CounterSetGuid;
    ULONG BufferSize;
    ULONG CounterId;
    ULONG InstanceId;
    ULONG MachineOffset;
    ULONG NameOffset;
    ULONG Reserved;
} PERF_COUNTER_IDENTITY, * PPERF_COUNTER_IDENTITY;
typedef ULONG (
WINAPI
* PERFLIBREQUEST)(
    IN ULONG RequestCode,
    IN PVOID Buffer,
    IN ULONG BufferSize
);
ULONG WINAPI
PerfStartProvider(
    _In_ LPGUID ProviderGuid,
    _In_opt_ PERFLIBREQUEST ControlCallback,
    _Out_ HANDLE * phProvider
);
typedef LPVOID (CALLBACK * PERF_MEM_ALLOC)(IN SIZE_T AllocSize, IN LPVOID pContext);
typedef void (CALLBACK * PERF_MEM_FREE)(IN LPVOID pBuffer, IN LPVOID pContext);
typedef struct _PROVIDER_CONTEXT {
    DWORD ContextSize;
    DWORD Reserved;
    PERFLIBREQUEST ControlCallback;
    PERF_MEM_ALLOC MemAllocRoutine;
    PERF_MEM_FREE MemFreeRoutine;
    LPVOID pMemContext;
} PERF_PROVIDER_CONTEXT, * PPERF_PROVIDER_CONTEXT;
ULONG WINAPI
PerfStartProviderEx(
    _In_ LPGUID ProviderGuid,
    _In_opt_ PPERF_PROVIDER_CONTEXT ProviderContext,
    _Out_ PHANDLE Provider
    );
ULONG WINAPI
PerfStartProvider(
    _In_ LPGUID ProviderGuid,
    _In_opt_ PERFLIBREQUEST ControlCallback,
    _Out_ PHANDLE Provider
    );
ULONG WINAPI
PerfStopProvider(
    _In_ HANDLE ProviderHandle
    );
ULONG WINAPI
PerfSetCounterSetInfo(
    _In_ HANDLE ProviderHandle,
    _Inout_updates_bytes_(TemplateSize) PPERF_COUNTERSET_INFO Template,
    _In_ ULONG TemplateSize
    );
PPERF_COUNTERSET_INSTANCE WINAPI
PerfCreateInstance(
    _In_ HANDLE ProviderHandle,
    _In_ LPCGUID CounterSetGuid,
    _In_ PCWSTR Name,
    _In_ ULONG Id
    );
ULONG WINAPI
PerfDeleteInstance(
    _In_ HANDLE Provider,
    _In_ PPERF_COUNTERSET_INSTANCE InstanceBlock
    );
PPERF_COUNTERSET_INSTANCE WINAPI
PerfQueryInstance(
    _In_ HANDLE ProviderHandle,
    _In_ LPCGUID CounterSetGuid,
    _In_ PCWSTR Name,
    _In_ ULONG Id
    );
ULONG WINAPI
PerfSetCounterRefValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ PVOID Address
    );
ULONG WINAPI
PerfSetULongCounterValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ ULONG Value
    );
ULONG WINAPI
PerfSetULongLongCounterValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ ULONGLONG Value
    );
ULONG WINAPI
PerfIncrementULongCounterValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ ULONG Value
    );
ULONG WINAPI
PerfIncrementULongLongCounterValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ ULONGLONG Value
    );
ULONG WINAPI
PerfDecrementULongCounterValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ ULONG Value
    );
ULONG WINAPI
PerfDecrementULongLongCounterValue(
    _In_ HANDLE Provider,
    _Inout_ PPERF_COUNTERSET_INSTANCE Instance,
    _In_ ULONG CounterId,
    _In_ ULONGLONG Value
    );
typedef struct _PERF_INSTANCE_HEADER {
    ULONG Size;
    ULONG InstanceId;
} PERF_INSTANCE_HEADER, *PPERF_INSTANCE_HEADER;
typedef enum _PerfRegInfoType {
    PERF_REG_COUNTERSET_STRUCT = 1,
    PERF_REG_COUNTER_STRUCT,
    PERF_REG_COUNTERSET_NAME_STRING,
    PERF_REG_COUNTERSET_HELP_STRING,
    PERF_REG_COUNTER_NAME_STRINGS,
    PERF_REG_COUNTER_HELP_STRINGS,
    PERF_REG_PROVIDER_NAME,
    PERF_REG_PROVIDER_GUID,
    PERF_REG_COUNTERSET_ENGLISH_NAME,
    PERF_REG_COUNTER_ENGLISH_NAMES
} PerfRegInfoType;
typedef struct _PERF_COUNTERSET_REG_INFO {
    GUID CounterSetGuid;
    ULONG CounterSetType;
    ULONG DetailLevel;
    ULONG NumCounters;
    ULONG InstanceType;
} PERF_COUNTERSET_REG_INFO, * PPERF_COUNTERSET_REG_INFO;
typedef struct _PERF_COUNTER_REG_INFO {
    ULONG CounterId;
    ULONG Type;
    ULONGLONG Attrib;
    ULONG DetailLevel;
    LONG DefaultScale;
    ULONG BaseCounterId;
    ULONG PerfTimeId;
    ULONG PerfFreqId;
    ULONG MultiId;
    ULONG AggregateFunc;
    ULONG Reserved;
} PERF_COUNTER_REG_INFO, * PPERF_COUNTER_REG_INFO;
typedef struct _STRING_BUFFER_HEADER {
    DWORD dwSize;
    DWORD dwCounters;
} PERF_STRING_BUFFER_HEADER, *PPERF_STRING_BUFFER_HEADER;
typedef struct _STRING_COUNTER_HEADER {
    DWORD dwCounterId;
    DWORD dwOffset;
} PERF_STRING_COUNTER_HEADER, *PPERF_STRING_COUNTER_HEADER;
typedef struct _PERF_COUNTER_IDENTIFIER {
    GUID CounterSetGuid;
    ULONG Status;
    ULONG Size;
    ULONG CounterId;
    ULONG InstanceId;
    ULONG Index;
    ULONG Reserved;
} PERF_COUNTER_IDENTIFIER, * PPERF_COUNTER_IDENTIFIER;
typedef struct _PERF_DATA_HEADER {
    ULONG dwTotalSize;
    ULONG dwNumCounters;
    LONGLONG PerfTimeStamp;
    LONGLONG PerfTime100NSec;
    LONGLONG PerfFreq;
    SYSTEMTIME SystemTime;
} PERF_DATA_HEADER, * PPERF_DATA_HEADER;
typedef enum _PerfCounterDataType {
    PERF_ERROR_RETURN = 0,
    PERF_SINGLE_COUNTER = 1,
    PERF_MULTIPLE_COUNTERS = 2,
    PERF_MULTIPLE_INSTANCES = 4,
    PERF_COUNTERSET = 6
} PerfCounterDataType;
typedef struct _PERF_COUNTER_HEADER {
    ULONG dwStatus;
    PerfCounterDataType dwType;
    ULONG dwSize;
    ULONG Reserved;
} PERF_COUNTER_HEADER, * PPERF_COUNTER_HEADER;
typedef struct _PERF_MULTI_INSTANCES {
    ULONG dwTotalSize;
    ULONG dwInstances;
} PERF_MULTI_INSTANCES, * PPERF_MULTI_INSTANCES;
typedef struct _PERF_MULTI_COUNTERS {
    ULONG dwSize;
    ULONG dwCounters;
} PERF_MULTI_COUNTERS, * PPERF_MULTI_COUNTERS;
typedef struct _PERF_COUNTER_DATA {
    ULONG dwDataSize;
    ULONG dwSize;
} PERF_COUNTER_DATA, * PPERF_COUNTER_DATA;
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfEnumerateCounterSet(
    _In_opt_z_ LPCWSTR szMachine,
    _Out_opt_cap_post_count_(cCounterSetIds, *pcCounterSetIdsActual) LPGUID pCounterSetIds,
    DWORD cCounterSetIds,
    _Out_ LPDWORD pcCounterSetIdsActual
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfEnumerateCounterSetInstances(
    _In_opt_z_ LPCWSTR szMachine,
    _In_ LPCGUID pCounterSetId,
    _Out_opt_bytecap_post_bytecount_(cbInstances, *pcbInstancesActual) PPERF_INSTANCE_HEADER pInstances,
    DWORD cbInstances,
    _Out_ LPDWORD pcbInstancesActual
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfQueryCounterSetRegistrationInfo(
    _In_opt_z_ LPCWSTR szMachine,
    _In_ LPCGUID pCounterSetId,
    PerfRegInfoType requestCode,
    DWORD requestLangId,
    _Out_opt_bytecap_post_bytecount_(cbRegInfo, *pcbRegInfoActual) LPBYTE pbRegInfo,
    DWORD cbRegInfo,
    _Out_ LPDWORD pcbRegInfoActual
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfOpenQueryHandle(
    _In_opt_z_ LPCWSTR szMachine,
    _Out_ HANDLE * phQuery
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfCloseQueryHandle(
    _In_ HANDLE hQuery
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfQueryCounterInfo(
    _In_ HANDLE hQuery,
    _Out_opt_bytecap_post_bytecount_(cbCounters, *pcbCountersActual) PPERF_COUNTER_IDENTIFIER pCounters,
    DWORD cbCounters,
    _Out_ LPDWORD pcbCountersActual
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfQueryCounterData(
    _In_ HANDLE hQuery,
    _Out_opt_bytecap_post_bytecount_(cbCounterBlock, *pcbCounterBlockActual) PPERF_DATA_HEADER pCounterBlock,
    DWORD cbCounterBlock,
    _Out_ LPDWORD pcbCounterBlockActual
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfAddCounters(
    _In_ HANDLE hQuery,
    _Inout_bytecount_(cbCounters) PPERF_COUNTER_IDENTIFIER pCounters,
    DWORD cbCounters
    );
_Success_(return == ERROR_SUCCESS)
ULONG
WINAPI
PerfDeleteCounters(
    _In_ HANDLE hQuery,
    _Inout_bytecount_(cbCounters) PPERF_COUNTER_IDENTIFIER pCounters,
    DWORD cbCounters
    );
}
#endif
#pragma endregion
