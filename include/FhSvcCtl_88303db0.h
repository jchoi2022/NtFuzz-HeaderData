#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum {
    BackupInvalidStopReason = 0,
    BackupLimitUserBusyMachineOnAC = 1,
    BackupLimitUserIdleMachineOnDC = 2,
    BackupLimitUserBusyMachineOnDC = 3,
    BackupCancelled = 4
} FhBackupStopReason;
DECLARE_HANDLE (FH_SERVICE_PIPE_HANDLE);
__declspec(deprecated("FhServiceOpenPipe is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceOpenPipe(
    _In_ BOOL StartServiceIfStopped,
    _Out_ FH_SERVICE_PIPE_HANDLE *Pipe
    );
__declspec(deprecated("FhServiceClosePipe is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceClosePipe(
    _In_ FH_SERVICE_PIPE_HANDLE Pipe
    );
__declspec(deprecated("FhServiceStartBackup is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceStartBackup(
    _In_ FH_SERVICE_PIPE_HANDLE Pipe,
    _In_ BOOL LowPriorityIo
    );
__declspec(deprecated("FhServiceStopBackup is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceStopBackup(
    _In_ FH_SERVICE_PIPE_HANDLE Pipe,
    _In_ BOOL StopTracking
    );
__declspec(deprecated("FhServiceReloadConfiguration is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceReloadConfiguration(
    _In_ FH_SERVICE_PIPE_HANDLE Pipe
    );
__declspec(deprecated("FhServiceBlockBackup is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceBlockBackup(
    _In_ FH_SERVICE_PIPE_HANDLE Pipe
    );
__declspec(deprecated("FhServiceUnblockBackup is deprecated and might not work on all platforms. For more info, see MSDN."))
HRESULT
WINAPI
FhServiceUnblockBackup(
    _In_ FH_SERVICE_PIPE_HANDLE Pipe
    );
#endif
#pragma endregion
}
