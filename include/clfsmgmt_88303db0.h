       
#include <winapifamily.h>
#pragma region Desktop Family or BootableSku Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU)
extern "C" {
typedef enum _CLFS_MGMT_POLICY_TYPE {
    ClfsMgmtPolicyMaximumSize = 0x0,
    ClfsMgmtPolicyMinimumSize,
    ClfsMgmtPolicyNewContainerSize,
    ClfsMgmtPolicyGrowthRate,
    ClfsMgmtPolicyLogTail,
    ClfsMgmtPolicyAutoShrink,
    ClfsMgmtPolicyAutoGrow,
    ClfsMgmtPolicyNewContainerPrefix,
    ClfsMgmtPolicyNewContainerSuffix,
    ClfsMgmtPolicyNewContainerExtension,
    ClfsMgmtPolicyInvalid
} CLFS_MGMT_POLICY_TYPE, *PCLFS_MGMT_POLICY_TYPE;
typedef struct _CLFS_MGMT_POLICY {
    ULONG Version;
    ULONG LengthInBytes;
    ULONG PolicyFlags;
    CLFS_MGMT_POLICY_TYPE PolicyType;
    union {
        struct {
            ULONG Containers;
        } MaximumSize;
        struct {
            ULONG Containers;
        } MinimumSize;
        struct {
            ULONG SizeInBytes;
        } NewContainerSize;
        struct {
            ULONG AbsoluteGrowthInContainers;
            ULONG RelativeGrowthPercentage;
        } GrowthRate;
        struct {
            ULONG MinimumAvailablePercentage;
            ULONG MinimumAvailableContainers;
        } LogTail;
        struct {
            ULONG Percentage;
        } AutoShrink;
        struct {
            ULONG Enabled;
        } AutoGrow;
        struct {
            USHORT PrefixLengthInBytes;
            WCHAR PrefixString[1];
        } NewContainerPrefix;
        struct {
            ULONGLONG NextContainerSuffix;
        } NewContainerSuffix;
        struct {
            USHORT ExtensionLengthInBytes;
            WCHAR ExtensionString[1];
        } NewContainerExtension;
    } PolicyParameters;
} CLFS_MGMT_POLICY, *PCLFS_MGMT_POLICY;
typedef enum _CLFS_MGMT_NOTIFICATION_TYPE
{
    ClfsMgmtAdvanceTailNotification = 0,
    ClfsMgmtLogFullHandlerNotification,
    ClfsMgmtLogUnpinnedNotification,
    ClfsMgmtLogWriteNotification
} CLFS_MGMT_NOTIFICATION_TYPE, *PCLFS_MGMT_NOTIFICATION_TYPE;
typedef struct _CLFS_MGMT_NOTIFICATION
{
    CLFS_MGMT_NOTIFICATION_TYPE Notification;
    CLFS_LSN Lsn;
    USHORT LogIsPinned;
} CLFS_MGMT_NOTIFICATION, *PCLFS_MGMT_NOTIFICATION;
typedef
NTSTATUS
(*PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PCLFS_LSN TargetLsn,
    _In_ PVOID ClientData
    );
typedef
VOID
(*PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ NTSTATUS OperationStatus,
    _In_ BOOLEAN LogIsPinned,
    _In_ PVOID ClientData
    );
typedef
VOID
(*PCLFS_CLIENT_LOG_UNPINNED_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PVOID ClientData
    );
typedef
VOID
(*PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ NTSTATUS OperationStatus,
    _In_ PVOID ClientData
    );
typedef struct _CLFS_MGMT_CLIENT_REGISTRATION {
    ULONG Version;
    PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK AdvanceTailCallback;
    PVOID AdvanceTailCallbackData;
    PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK LogGrowthCompleteCallback;
    PVOID LogGrowthCompleteCallbackData;
    PCLFS_CLIENT_LOG_UNPINNED_CALLBACK LogUnpinnedCallback;
    PVOID LogUnpinnedCallbackData;
} CLFS_MGMT_CLIENT_REGISTRATION, *PCLFS_MGMT_CLIENT_REGISTRATION;
typedef PVOID CLFS_MGMT_CLIENT, *PCLFS_MGMT_CLIENT;
CLFSUSER_API
NTSTATUS
ClfsMgmtRegisterManagedClient(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PCLFS_MGMT_CLIENT_REGISTRATION RegistrationData,
    _Out_ PCLFS_MGMT_CLIENT ClientCookie
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtDeregisterManagedClient(
    _In_ CLFS_MGMT_CLIENT ClientCookie
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtTailAdvanceFailure(
    _In_ CLFS_MGMT_CLIENT Client,
    _In_ NTSTATUS Reason
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtHandleLogFileFull(
    _In_ CLFS_MGMT_CLIENT Client
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtInstallPolicy(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_reads_bytes_(PolicyLength) PCLFS_MGMT_POLICY Policy,
    _In_ ULONG PolicyLength
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtQueryPolicy(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ CLFS_MGMT_POLICY_TYPE PolicyType,
    _Out_writes_bytes_(*PolicyLength) PCLFS_MGMT_POLICY Policy,
    _Out_ PULONG PolicyLength
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtRemovePolicy(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ CLFS_MGMT_POLICY_TYPE PolicyType
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtSetLogFileSize(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PULONGLONG NewSizeInContainers,
    _Out_opt_ PULONGLONG ResultingSizeInContainers,
    _In_opt_ PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
    _In_opt_ PVOID CompletionRoutineData
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtSetLogFileSizeAsClient(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_opt_ PCLFS_MGMT_CLIENT ClientCookie,
    _In_ PULONGLONG NewSizeInContainers,
    _Out_opt_ PULONGLONG ResultingSizeInContainers,
    _In_opt_ PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
    _In_opt_ PVOID CompletionRoutineData
    );
}
#endif
#pragma endregion
