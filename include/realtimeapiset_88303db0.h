       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
QueryThreadCycleTime(
    _In_ HANDLE ThreadHandle,
    _Out_ PULONG64 CycleTime
    );
WINBASEAPI
BOOL
WINAPI
QueryProcessCycleTime(
    _In_ HANDLE ProcessHandle,
    _Out_ PULONG64 CycleTime
    );
WINBASEAPI
BOOL
WINAPI
QueryIdleProcessorCycleTime(
    _Inout_ PULONG BufferLength,
    _Out_writes_bytes_opt_(*BufferLength) PULONG64 ProcessorIdleCycleTime
    );
WINBASEAPI
BOOL
WINAPI
QueryIdleProcessorCycleTimeEx(
    _In_ USHORT Group,
    _Inout_ PULONG BufferLength,
    _Out_writes_bytes_opt_(*BufferLength) PULONG64 ProcessorIdleCycleTime
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
VOID
WINAPI
QueryInterruptTimePrecise(
    _Out_ PULONGLONG lpInterruptTimePrecise
    );
WINBASEAPI
VOID
WINAPI
QueryUnbiasedInterruptTimePrecise(
    _Out_ PULONGLONG lpUnbiasedInterruptTimePrecise
    );
WINBASEAPI
VOID
WINAPI
QueryInterruptTime(
    _Out_ PULONGLONG lpInterruptTime
    );
WINBASEAPI
BOOL
WINAPI
QueryUnbiasedInterruptTime(
    _Out_ PULONGLONG UnbiasedTime
    );
WINBASEAPI
HRESULT
WINAPI
QueryAuxiliaryCounterFrequency(
    _Out_ PULONGLONG lpAuxiliaryCounterFrequency
    );
WINBASEAPI
HRESULT
WINAPI
ConvertAuxiliaryCounterToPerformanceCounter(
    _In_ ULONGLONG ullAuxiliaryCounterValue,
    _Out_ PULONGLONG lpPerformanceCounterValue,
    _Out_opt_ PULONGLONG lpConversionError
    );
WINBASEAPI
HRESULT
WINAPI
ConvertPerformanceCounterToAuxiliaryCounter(
    _In_ ULONGLONG ullPerformanceCounterValue,
    _Out_ PULONGLONG lpAuxiliaryCounterValue,
    _Out_opt_ PULONGLONG lpConversionError
    );
#endif
#pragma endregion
}
