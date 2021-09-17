#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum TimeProvCmd {
    TPC_TimeJumped,
    TPC_UpdateConfig,
    TPC_PollIntervalChanged,
    TPC_GetSamples,
    TPC_NetTopoChange,
    TPC_Query,
    TPC_Shutdown,
    TPC_GetMetaDataSamples
} TimeProvCmd;
typedef enum TimeSysInfo {
    TSI_LastSyncTime,
    TSI_ClockTickSize,
    TSI_ClockPrecision,
    TSI_CurrentTime,
    TSI_PhaseOffset,
    TSI_TickCount,
    TSI_LeapFlags,
    TSI_Stratum,
    TSI_ReferenceIdentifier,
    TSI_PollInterval,
    TSI_RootDelay,
    TSI_RootDispersion,
    TSI_TSFlags,
    TSI_SeriviceRole,
    TSI_CurrentUtcOffset,
} TimeSysInfo;
typedef enum TimeJumpedFlags {
    TJF_Default=0,
    TJF_UserRequested=1,
} TimeJumpedFlags;
typedef enum NetTopoChangeFlags {
    NTC_Default=0,
    NTC_UserRequested=1,
} NetTopoChangeFlags;
typedef enum TimeProvState {
    TPS_Running,
    TPS_Error,
} TimeProvState;
struct SetProviderStatusInfo;
typedef void (__stdcall
         SetProviderStatusInfoFreeFunc)
         (IN struct SetProviderStatusInfo *pspsi);
typedef struct SetProviderStatusInfo {
    TimeProvState tpsCurrentState;
    DWORD dwStratum;
    LPWSTR wszProvName;
    HANDLE hWaitEvent;
    SetProviderStatusInfoFreeFunc *pfnFree;
    HRESULT *pHr;
    DWORD *pdwSysStratum;
} SetProviderStatusInfo;
typedef HRESULT (__stdcall
         GetTimeSysInfoFunc)(
            IN TimeSysInfo eInfo,
            OUT void * pvInfo
            );
typedef HRESULT (__stdcall
         LogTimeProvEventFunc)(
            IN WORD wType,
            IN WCHAR * wszProvName,
            IN WCHAR * wszMessage);
typedef HRESULT (__stdcall
         AlertSamplesAvailFunc)(
            void
            );
typedef HRESULT (__stdcall SetProviderStatusFunc)
         (IN SetProviderStatusInfo *pspsi);
typedef struct TimeProvSysCallbacks {
    DWORD dwSize;
    GetTimeSysInfoFunc * pfnGetTimeSysInfo;
    LogTimeProvEventFunc * pfnLogTimeProvEvent;
    AlertSamplesAvailFunc * pfnAlertSamplesAvail;
    SetProviderStatusFunc * pfnSetProviderStatus;
} TimeProvSysCallbacks;
typedef void * TimeProvArgs;
typedef struct TimeSample {
    DWORD dwSize;
    DWORD dwRefid;
      signed __int64 toOffset;
      signed __int64 toDelay;
    unsigned __int64 tpDispersion;
    unsigned __int64 nSysTickCount;
      signed __int64 nSysPhaseOffset;
    BYTE nLeapFlags;
    BYTE nStratum;
    DWORD dwTSFlags;
    WCHAR wszUniqueName[256];
} TimeSample;
typedef struct MetaDataSample {
    DWORD dwSize;
    DWORD dwRefid;
    unsigned __int64 tpDispersion;
    unsigned __int64 nSysTickCount;
    BYTE nLeapFlags;
    BYTE nStratum;
    DWORD dwTSFlags;
    WCHAR wszUniqueName[256];
} MetaDataSample;
typedef struct TpcGetSamplesArgs {
    BYTE * pbSampleBuf;
    DWORD cbSampleBuf;
    DWORD dwSamplesReturned;
    DWORD dwSamplesAvailable;
} TpcGetSamplesArgs;
typedef struct TpcGetMetaDataSamplesArgs {
    BYTE * pbSampleBuf;
    DWORD cbSampleBuf;
    DWORD dwSamplesReturned;
    DWORD dwSamplesAvailable;
} TpcGetMetaDataSamplesArgs;
typedef struct TpcTimeJumpedArgs {
    TimeJumpedFlags tjfFlags;
} TpcTimeJumpedArgs;
typedef struct TpcNetTopoChangeArgs {
    NetTopoChangeFlags ntcfFlags;
} TpcNetTopoChangeArgs;
typedef void * TimeProvHandle;
HRESULT __stdcall
    TimeProvOpen(
        _In_ IN PWSTR wszName,
        _In_ IN TimeProvSysCallbacks * pSysCallbacks,
        _Out_ OUT TimeProvHandle * phTimeProv);
HRESULT __stdcall
    TimeProvCommand(
        _In_ IN TimeProvHandle hTimeProv,
        _In_ IN TimeProvCmd eCmd,
        _In_ IN TimeProvArgs pvArgs);
HRESULT __stdcall
    TimeProvClose(
        _In_ IN TimeProvHandle hTimeProv);
}
#endif
#pragma endregion
