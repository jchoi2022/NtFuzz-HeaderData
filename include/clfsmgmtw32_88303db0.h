#include <winapifamily.h>
#pragma region Desktop Family or BootableSku Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU)
#include <clfsmgmt.h>
extern "C"
{
typedef
VOID
(*PLOG_TAIL_ADVANCE_CALLBACK) (
    IN HANDLE hLogFile,
    IN CLFS_LSN lsnTarget,
    IN PVOID pvClientContext
    );
typedef
VOID
(*PLOG_FULL_HANDLER_CALLBACK) (
    IN HANDLE hLogFile,
    IN DWORD dwError,
    IN BOOL fLogIsPinned,
    IN PVOID pvClientContext
    );
typedef
VOID
(*PLOG_UNPINNED_CALLBACK) (
    IN HANDLE hLogFile,
    IN PVOID pvClientContext
    );
typedef struct _LOG_MANAGEMENT_CALLBACKS
{
    PVOID CallbackContext;
    PLOG_TAIL_ADVANCE_CALLBACK AdvanceTailCallback;
    PLOG_FULL_HANDLER_CALLBACK LogFullHandlerCallback;
    PLOG_UNPINNED_CALLBACK LogUnpinnedCallback;
} LOG_MANAGEMENT_CALLBACKS, *PLOG_MANAGEMENT_CALLBACKS;
CLFSUSER_API BOOL WINAPI RegisterManageableLogClient (
    IN HANDLE hLog,
    IN PLOG_MANAGEMENT_CALLBACKS pCallbacks
    );
CLFSUSER_API BOOL WINAPI DeregisterManageableLogClient (
    IN HANDLE hLog
    );
CLFSUSER_API BOOL WINAPI ReadLogNotification (
    IN HANDLE hLog,
    OUT PCLFS_MGMT_NOTIFICATION pNotification,
    IN LPOVERLAPPED lpOverlapped
    );
CLFSUSER_API BOOL WINAPI InstallLogPolicy (
    IN HANDLE hLog,
    IN PCLFS_MGMT_POLICY pPolicy
    );
CLFSUSER_API BOOL WINAPI RemoveLogPolicy (
    IN HANDLE hLog,
    IN CLFS_MGMT_POLICY_TYPE ePolicyType
    );
CLFSUSER_API BOOL WINAPI QueryLogPolicy (
    IN HANDLE hLog,
    IN CLFS_MGMT_POLICY_TYPE ePolicyType,
    OUT PCLFS_MGMT_POLICY pPolicyBuffer,
    IN OUT PULONG pcbPolicyBuffer
    );
CLFSUSER_API BOOL WINAPI SetLogFileSizeWithPolicy(
    IN HANDLE hLog,
    IN PULONGLONG pDesiredSize,
    OUT PULONGLONG pResultingSize
    );
CLFSUSER_API BOOL WINAPI HandleLogFull(
    IN HANDLE hLog
    );
CLFSUSER_API BOOL WINAPI LogTailAdvanceFailure(
    IN HANDLE hLog,
    IN DWORD dwReason
    );
CLFSUSER_API BOOL WINAPI RegisterForLogWriteNotification (
    IN HANDLE hLog,
    IN ULONG cbThreshold,
    IN BOOL fEnable
    );
}
#endif
#pragma endregion
