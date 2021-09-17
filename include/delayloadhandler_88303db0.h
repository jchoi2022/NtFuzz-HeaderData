       
extern "C" {
typedef struct _DELAYLOAD_PROC_DESCRIPTOR {
    ULONG ImportDescribedByName;
    union {
        LPCSTR Name;
        ULONG Ordinal;
    } Description;
} DELAYLOAD_PROC_DESCRIPTOR, *PDELAYLOAD_PROC_DESCRIPTOR;
typedef struct _DELAYLOAD_INFO {
    ULONG Size;
    PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor;
    PIMAGE_THUNK_DATA ThunkAddress;
    LPCSTR TargetDllName;
    DELAYLOAD_PROC_DESCRIPTOR TargetApiDescriptor;
    PVOID TargetModuleBase;
    PVOID Unused;
    ULONG LastError;
} DELAYLOAD_INFO, *PDELAYLOAD_INFO;
typedef
PVOID
(WINAPI *PDELAYLOAD_FAILURE_DLL_CALLBACK) (
    _In_ ULONG NotificationReason,
    _In_ PDELAYLOAD_INFO DelayloadInfo
    );
extern PDELAYLOAD_FAILURE_DLL_CALLBACK __pfnDliFailureHook2;
}
