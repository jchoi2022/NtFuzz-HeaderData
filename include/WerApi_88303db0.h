#include <winapifamily.h>
       
#include <specstrings.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef HANDLE HREPORT;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _WER_REPORT_UI
{
    WerUIAdditionalDataDlgHeader = 1,
    WerUIIconFilePath = 2,
    WerUIConsentDlgHeader = 3,
    WerUIConsentDlgBody = 4,
    WerUIOnlineSolutionCheckText = 5,
    WerUIOfflineSolutionCheckText = 6,
    WerUICloseText = 7,
    WerUICloseDlgHeader = 8,
    WerUICloseDlgBody = 9,
    WerUICloseDlgButtonText = 10,
    WerUIMax
} WER_REPORT_UI;
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef enum _WER_REGISTER_FILE_TYPE
{
    WerRegFileTypeUserDocument = 1,
    WerRegFileTypeOther = 2,
    WerRegFileTypeMax
} WER_REGISTER_FILE_TYPE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _WER_FILE_TYPE
{
    WerFileTypeMicrodump = 1,
    WerFileTypeMinidump = 2,
    WerFileTypeHeapdump = 3,
    WerFileTypeUserDocument = 4,
    WerFileTypeOther = 5,
    WerFileTypeTriagedump = 6,
    WerFileTypeCustomDump = 7,
    WerFileTypeAuxiliaryDump = 8,
    WerFileTypeEtlTrace = 9,
    WerFileTypeMax
} WER_FILE_TYPE;
typedef enum _WER_SUBMIT_RESULT
{
    WerReportQueued = 1,
    WerReportUploaded = 2,
    WerReportDebug = 3,
    WerReportFailed = 4,
    WerDisabled = 5,
    WerReportCancelled = 6,
    WerDisabledQueue = 7,
    WerReportAsync = 8,
    WerCustomAction = 9,
    WerThrottled = 10,
    WerReportUploadedCab = 11,
    WerStorageLocationNotFound = 12,
    WerSubmitResultMax
} WER_SUBMIT_RESULT, *PWER_SUBMIT_RESULT;
typedef enum _WER_REPORT_TYPE
{
    WerReportNonCritical = 0,
    WerReportCritical = 1,
    WerReportApplicationCrash = 2,
    WerReportApplicationHang = 3,
    WerReportKernel = 4,
    WerReportInvalid
} WER_REPORT_TYPE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _WER_REPORT_INFORMATION
{
    DWORD dwSize;
    HANDLE hProcess;
    WCHAR wzConsentKey[64];
    WCHAR wzFriendlyEventName[128];
    WCHAR wzApplicationName[128];
    WCHAR wzApplicationPath[MAX_PATH];
    WCHAR wzDescription[512];
    HWND hwndParent;
} WER_REPORT_INFORMATION, *PWER_REPORT_INFORMATION;
typedef struct _WER_REPORT_INFORMATION_V3
{
    DWORD dwSize;
    HANDLE hProcess;
    WCHAR wzConsentKey[64];
    WCHAR wzFriendlyEventName[128];
    WCHAR wzApplicationName[128];
    WCHAR wzApplicationPath[MAX_PATH];
    WCHAR wzDescription[512];
    HWND hwndParent;
    WCHAR wzNamespacePartner[64];
    WCHAR wzNamespaceGroup[64];
} WER_REPORT_INFORMATION_V3, *PWER_REPORT_INFORMATION_V3;
typedef struct _WER_DUMP_CUSTOM_OPTIONS
{
    DWORD dwSize;
    DWORD dwMask;
    DWORD dwDumpFlags;
    BOOL bOnlyThisThread;
    DWORD dwExceptionThreadFlags;
    DWORD dwOtherThreadFlags;
    DWORD dwExceptionThreadExFlags;
    DWORD dwOtherThreadExFlags;
    DWORD dwPreferredModuleFlags;
    DWORD dwOtherModuleFlags;
    WCHAR wzPreferredModuleList[WER_MAX_PREFERRED_MODULES_BUFFER];
} WER_DUMP_CUSTOM_OPTIONS, *PWER_DUMP_CUSTOM_OPTIONS;
typedef struct _WER_DUMP_CUSTOM_OPTIONS_V2
{
    DWORD dwSize;
    DWORD dwMask;
    DWORD dwDumpFlags;
    BOOL bOnlyThisThread;
    DWORD dwExceptionThreadFlags;
    DWORD dwOtherThreadFlags;
    DWORD dwExceptionThreadExFlags;
    DWORD dwOtherThreadExFlags;
    DWORD dwPreferredModuleFlags;
    DWORD dwOtherModuleFlags;
    WCHAR wzPreferredModuleList[WER_MAX_PREFERRED_MODULES_BUFFER];
    DWORD dwPreferredModuleResetFlags;
    DWORD dwOtherModuleResetFlags;
} WER_DUMP_CUSTOM_OPTIONS_V2, *PWER_DUMP_CUSTOM_OPTIONS_V2;
typedef struct _WER_REPORT_INFORMATION_V4
{
    DWORD dwSize;
    HANDLE hProcess;
    WCHAR wzConsentKey[64];
    WCHAR wzFriendlyEventName[128];
    WCHAR wzApplicationName[128];
    WCHAR wzApplicationPath[MAX_PATH];
    WCHAR wzDescription[512];
    HWND hwndParent;
    WCHAR wzNamespacePartner[64];
    WCHAR wzNamespaceGroup[64];
    BYTE rgbApplicationIdentity[16];
    HANDLE hSnapshot;
    HANDLE hDeleteFilesImpersonationToken;
} WER_REPORT_INFORMATION_V4, *PWER_REPORT_INFORMATION_V4;
typedef WER_REPORT_INFORMATION_V4 const* PCWER_REPORT_INFORMATION_V4;
typedef struct _WER_REPORT_INFORMATION_V5
{
    DWORD dwSize;
    HANDLE hProcess;
    WCHAR wzConsentKey[64];
    WCHAR wzFriendlyEventName[128];
    WCHAR wzApplicationName[128];
    WCHAR wzApplicationPath[MAX_PATH];
    WCHAR wzDescription[512];
    HWND hwndParent;
    WCHAR wzNamespacePartner[64];
    WCHAR wzNamespaceGroup[64];
    BYTE rgbApplicationIdentity[16];
    HANDLE hSnapshot;
    HANDLE hDeleteFilesImpersonationToken;
    WER_SUBMIT_RESULT submitResultMax;
} WER_REPORT_INFORMATION_V5, *PWER_REPORT_INFORMATION_V5;
typedef WER_REPORT_INFORMATION_V5 const *PCWER_REPORT_INFORMATION_V5;
typedef struct _WER_DUMP_CUSTOM_OPTIONS_V3
{
    DWORD dwSize;
    DWORD dwMask;
    DWORD dwDumpFlags;
    BOOL bOnlyThisThread;
    DWORD dwExceptionThreadFlags;
    DWORD dwOtherThreadFlags;
    DWORD dwExceptionThreadExFlags;
    DWORD dwOtherThreadExFlags;
    DWORD dwPreferredModuleFlags;
    DWORD dwOtherModuleFlags;
    WCHAR wzPreferredModuleList[WER_MAX_PREFERRED_MODULES_BUFFER];
    DWORD dwPreferredModuleResetFlags;
    DWORD dwOtherModuleResetFlags;
    PVOID pvDumpKey;
    HANDLE hSnapshot;
    DWORD dwThreadID;
} WER_DUMP_CUSTOM_OPTIONS_V3, *PWER_DUMP_CUSTOM_OPTIONS_V3;
typedef WER_DUMP_CUSTOM_OPTIONS_V3 const* PCWER_DUMP_CUSTOM_OPTIONS_V3;
typedef struct _WER_EXCEPTION_INFORMATION
{
    PEXCEPTION_POINTERS pExceptionPointers;
    BOOL bClientPointers;
} WER_EXCEPTION_INFORMATION, *PWER_EXCEPTION_INFORMATION;
typedef enum _WER_CONSENT
{
    WerConsentNotAsked = 1,
    WerConsentApproved = 2,
    WerConsentDenied = 3,
    WerConsentAlwaysPrompt = 4,
    WerConsentMax
}WER_CONSENT;
HRESULT
WINAPI
WerReportCreate(
    _In_ PCWSTR pwzEventType,
    _In_ WER_REPORT_TYPE repType,
    _In_opt_ PWER_REPORT_INFORMATION pReportInformation,
    _Out_ HREPORT *phReportHandle
    );
HRESULT
WINAPI
WerReportSetParameter(
    _In_ HREPORT hReportHandle,
    _In_ DWORD dwparamID,
    _In_opt_ PCWSTR pwzName,
    _In_ PCWSTR pwzValue
    );
HRESULT
WINAPI
WerReportAddFile(
    _In_ HREPORT hReportHandle,
    _In_ PCWSTR pwzPath,
    _In_ WER_FILE_TYPE repFileType,
    _In_ DWORD dwFileFlags
    );
HRESULT
WINAPI
WerReportSetUIOption(
    _In_ HREPORT hReportHandle,
    _In_ WER_REPORT_UI repUITypeID,
    _In_ PCWSTR pwzValue
    );
HRESULT
WINAPI
WerReportSubmit(
    _In_ HREPORT hReportHandle,
    _In_ WER_CONSENT consent,
    _In_ DWORD dwFlags,
    _Out_opt_ PWER_SUBMIT_RESULT pSubmitResult
    );
typedef enum _WER_DUMP_TYPE
{
    WerDumpTypeNone = 0,
    WerDumpTypeMicroDump = 1,
    WerDumpTypeMiniDump = 2,
    WerDumpTypeHeapDump = 3,
    WerDumpTypeTriageDump = 4,
    WerDumpTypeMax = 5
} WER_DUMP_TYPE;
HRESULT
WINAPI
WerReportAddDump(
    _In_ HREPORT hReportHandle,
    _In_ HANDLE hProcess,
    _In_opt_ HANDLE hThread,
    _In_ WER_DUMP_TYPE dumpType,
    _In_opt_ PWER_EXCEPTION_INFORMATION pExceptionParam,
    _In_opt_ PWER_DUMP_CUSTOM_OPTIONS pDumpCustomOptions,
    _In_ DWORD dwFlags
    );
HRESULT
WINAPI
WerReportCloseHandle(
    _In_ HREPORT hReportHandle
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
HRESULT
WINAPI
WerRegisterFile(
    _In_ PCWSTR pwzFile,
    _In_ WER_REGISTER_FILE_TYPE regFileType,
    _In_ DWORD dwFlags
    );
HRESULT
WINAPI
WerUnregisterFile(
    _In_ PCWSTR pwzFilePath
    );
HRESULT
WINAPI
WerRegisterMemoryBlock(
    _In_ PVOID pvAddress,
    _In_ DWORD dwSize
    );
HRESULT
WINAPI
WerUnregisterMemoryBlock(
    _In_ PVOID pvAddress
    );
STDAPI
WerRegisterExcludedMemoryBlock(
    _In_ const void* address,
    _In_ DWORD size
    );
STDAPI
WerUnregisterExcludedMemoryBlock(
    _In_ const void* address
    );
STDAPI
WerRegisterCustomMetadata(
    _In_ PCWSTR key,
    _In_ PCWSTR value
    );
STDAPI
WerUnregisterCustomMetadata(
    _In_ PCWSTR key
    );
STDAPI
WerRegisterAdditionalProcess(
    _In_ DWORD processId,
    _In_ DWORD captureExtraInfoForThreadId
    );
STDAPI
WerUnregisterAdditionalProcess(
    _In_ DWORD processId
    );
STDAPI
WerRegisterAppLocalDump(
    _In_ PCWSTR localAppDataRelativePath
    );
STDAPI
WerUnregisterAppLocalDump();
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
HRESULT
WINAPI
WerSetFlags(
    _In_ DWORD dwFlags
    );
HRESULT
WINAPI
WerGetFlags(
    _In_ HANDLE hProcess,
    _Out_ PDWORD pdwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT
WINAPI
WerAddExcludedApplication(
    _In_ PCWSTR pwzExeName,
    _In_ BOOL bAllUsers
    );
HRESULT
WINAPI
WerRemoveExcludedApplication(
    _In_ PCWSTR pwzExeName,
    _In_ BOOL bAllUsers
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
HRESULT
WINAPI
WerRegisterRuntimeExceptionModule(
    _In_ PCWSTR pwszOutOfProcessCallbackDll,
    _In_ PVOID pContext
    );
HRESULT
WINAPI
WerUnregisterRuntimeExceptionModule(
    _In_ PCWSTR pwszOutOfProcessCallbackDll,
    _In_ PVOID pContext
    );
typedef struct _WER_RUNTIME_EXCEPTION_INFORMATION
{
    DWORD dwSize;
    HANDLE hProcess;
    HANDLE hThread;
    EXCEPTION_RECORD exceptionRecord;
    CONTEXT context;
    PCWSTR pwszReportId;
} WER_RUNTIME_EXCEPTION_INFORMATION, *PWER_RUNTIME_EXCEPTION_INFORMATION;
typedef
HRESULT
(* PFN_WER_RUNTIME_EXCEPTION_EVENT)(
    _In_ PVOID pContext,
    _In_ const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
    _Out_ BOOL * pbOwnershipClaimed,
    _Out_writes_(*pchSize) PWSTR pwszEventName,
    _Inout_ PDWORD pchSize,
    _Out_ PDWORD pdwSignatureCount
    );
typedef
HRESULT
(* PFN_WER_RUNTIME_EXCEPTION_EVENT_SIGNATURE)(
    _In_ PVOID pContext,
    _In_ const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
    _In_ DWORD dwIndex,
    _Out_writes_(*pchName) PWSTR pwszName,
    _Inout_ PDWORD pchName,
    _Out_writes_(*pchValue) PWSTR pwszValue,
    _Inout_ PDWORD pchValue
    );
typedef
HRESULT
(* PFN_WER_RUNTIME_EXCEPTION_DEBUGGER_LAUNCH)(
    _In_ PVOID pContext,
    _In_ const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
    _Out_ PBOOL pbIsCustomDebugger,
    _Out_writes_(*pchDebuggerLaunch) PWSTR pwszDebuggerLaunch,
    _Inout_ PDWORD pchDebuggerLaunch,
    _Out_ PBOOL pbIsDebuggerAutolaunch
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum _REPORT_STORE_TYPES
{
    E_STORE_USER_ARCHIVE=0,
    E_STORE_USER_QUEUE=1,
    E_STORE_MACHINE_ARCHIVE=2,
    E_STORE_MACHINE_QUEUE=3,
    E_STORE_INVALID=4
} REPORT_STORE_TYPES;
typedef PVOID HREPORTSTORE, *PHREPORTSTORE;
typedef struct _WER_REPORT_PARAMETER
{
    WCHAR Name[WER_MAX_SIGNATURE_NAME_LENGTH+1];
    WCHAR Value[WER_MAX_PARAM_LENGTH];
}WER_REPORT_PARAMETER, PWER_REPORT_PARAMETER;
typedef struct _WER_REPORT_SIGNATURE
{
    WCHAR EventName[WER_MAX_EVENT_NAME_LENGTH+1];
    WER_REPORT_PARAMETER Parameters[WER_MAX_PARAM_COUNT];
} WER_REPORT_SIGNATURE, *PWER_REPORT_SIGNATURE;
typedef struct _WER_REPORT_METADATA_V2
{
    WER_REPORT_SIGNATURE Signature;
    GUID BucketId;
    GUID ReportId;
    FILETIME CreationTime;
    ULONGLONG SizeInBytes;
    WCHAR CabId[MAX_PATH];
    DWORD ReportStatus;
    GUID ReportIntegratorId;
    DWORD NumberOfFiles;
    DWORD SizeOfFileNames;
    WCHAR* FileNames;
} WER_REPORT_METADATA_V2, *PWER_REPORT_METADATA_V2;
typedef struct _WER_REPORT_METADATA_V3
{
    WER_REPORT_SIGNATURE Signature;
    GUID BucketId;
    GUID ReportId;
    FILETIME CreationTime;
    ULONGLONG SizeInBytes;
    WCHAR CabId[MAX_PATH];
    DWORD ReportStatus;
    GUID ReportIntegratorId;
    DWORD NumberOfFiles;
    DWORD SizeOfFileNames;
    WCHAR* FileNames;
    WCHAR FriendlyEventName[WER_MAX_FRIENDLY_EVENT_NAME_LENGTH];
    WCHAR ApplicationName[WER_MAX_APPLICATION_NAME_LENGTH];
    WCHAR ApplicationPath[MAX_PATH];
    WCHAR Description[WER_MAX_DESCRIPTION_LENGTH];
    WCHAR BucketIdString[WER_MAX_BUCKET_ID_STRING_LENGTH];
    ULONGLONG LegacyBucketId;
} WER_REPORT_METADATA_V3, *PWER_REPORT_METADATA_V3;
__control_entrypoint(DllExport)
HRESULT
WerStoreOpen(
    _In_ REPORT_STORE_TYPES repStoreType,
    _Out_ PHREPORTSTORE phReportStore
    );
__control_entrypoint(DllExport)
VOID
WerStoreClose(
    _In_opt_ _Post_invalid_ HREPORTSTORE hReportStore
    );
__control_entrypoint(DllExport)
HRESULT
WerStoreGetFirstReportKey(
    _In_ HREPORTSTORE hReportStore,
    _Outptr_result_maybenull_z_ PCWSTR* ppszReportKey
    );
__control_entrypoint(DllExport)
HRESULT
WerStoreGetNextReportKey(
    _In_ HREPORTSTORE hReportStore,
    _Outptr_result_maybenull_z_ PCWSTR* ppszReportKey
    );
__control_entrypoint(DllExport)
HRESULT
WerStoreQueryReportMetadataV2(
    _In_ HREPORTSTORE hReportStore,
    _In_ PCWSTR pszReportKey,
    _Out_ PWER_REPORT_METADATA_V2 pReportMetadata
    );
__control_entrypoint(DllExport)
HRESULT
WerStoreQueryReportMetadataV3(
    _In_ HREPORTSTORE hReportStore,
    _In_ PCWSTR pszReportKey,
    _Out_ PWER_REPORT_METADATA_V3 pReportMetadata
);
__control_entrypoint(DllExport)
VOID
WerFreeString(
    _In_ PCWSTR pwszStr
    );
__control_entrypoint(DllExport)
HRESULT
WerStorePurge();
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
__control_entrypoint(DllExport)
HRESULT
WerStoreGetReportCount(
    _In_ HREPORTSTORE hReportStore,
    _Out_ DWORD* pdwReportCount
    );
__control_entrypoint(DllExport)
HRESULT
WerStoreGetSizeOnDisk(
    _In_ HREPORTSTORE hReportStore,
    _Out_ ULONGLONG* pqwSizeInBytes
    );
typedef struct _WER_REPORT_METADATA_V1
{
    WER_REPORT_SIGNATURE Signature;
    GUID BucketId;
    GUID ReportId;
    FILETIME CreationTime;
    ULONGLONG SizeInBytes;
} WER_REPORT_METADATA_V1, *PWER_REPORT_METADATA_V1;
__control_entrypoint(DllExport)
HRESULT
WerStoreQueryReportMetadataV1(
    _In_ HREPORTSTORE hReportStore,
    _In_ PCWSTR pszReportKey,
    _Out_ PWER_REPORT_METADATA_V1 pReportMetadata
    );
__control_entrypoint(DllExport)
HRESULT
WerStoreUploadReport(
    _In_ HREPORTSTORE hReportStore,
    _In_ PCWSTR pszReportKey,
    _In_ DWORD dwFlags,
    _Out_opt_ PWER_SUBMIT_RESULT pSubmitResult
    );
#endif
#pragma endregion
}
