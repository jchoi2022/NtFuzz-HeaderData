#include <winapifamily.h>
#pragma region Desktop Family and or PerfCounter Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_PERFCOUNTER)
#pragma warning ( disable : 4201)
#include <windows.h>
#include <winperf.h>
extern "C" {
typedef LONG PDH_STATUS;
typedef HANDLE PDH_HCOUNTER;
typedef HANDLE PDH_HQUERY;
typedef HANDLE PDH_HLOG;
typedef PDH_HCOUNTER HCOUNTER;
typedef PDH_HQUERY HQUERY;
typedef PDH_HLOG HLOG;
typedef struct _PDH_RAW_COUNTER {
    volatile DWORD CStatus;
    FILETIME TimeStamp;
    LONGLONG FirstValue;
    LONGLONG SecondValue;
    DWORD MultiCount;
} PDH_RAW_COUNTER, * PPDH_RAW_COUNTER;
typedef struct _PDH_RAW_COUNTER_ITEM_A {
    LPSTR szName;
    PDH_RAW_COUNTER RawValue;
} PDH_RAW_COUNTER_ITEM_A, * PPDH_RAW_COUNTER_ITEM_A;
typedef struct _PDH_RAW_COUNTER_ITEM_W {
    LPWSTR szName;
    PDH_RAW_COUNTER RawValue;
} PDH_RAW_COUNTER_ITEM_W, * PPDH_RAW_COUNTER_ITEM_W;
typedef struct _PDH_FMT_COUNTERVALUE {
    DWORD CStatus;
    union {
        LONG longValue;
        double doubleValue;
        LONGLONG largeValue;
        LPCSTR AnsiStringValue;
        LPCWSTR WideStringValue;
    };
} PDH_FMT_COUNTERVALUE, * PPDH_FMT_COUNTERVALUE;
typedef struct _PDH_FMT_COUNTERVALUE_ITEM_A {
    LPSTR szName;
    PDH_FMT_COUNTERVALUE FmtValue;
} PDH_FMT_COUNTERVALUE_ITEM_A, * PPDH_FMT_COUNTERVALUE_ITEM_A;
typedef struct _PDH_FMT_COUNTERVALUE_ITEM_W {
    LPWSTR szName;
    PDH_FMT_COUNTERVALUE FmtValue;
} PDH_FMT_COUNTERVALUE_ITEM_W, * PPDH_FMT_COUNTERVALUE_ITEM_W;
typedef struct _PDH_STATISTICS {
    DWORD dwFormat;
    DWORD count;
    PDH_FMT_COUNTERVALUE min;
    PDH_FMT_COUNTERVALUE max;
    PDH_FMT_COUNTERVALUE mean;
} PDH_STATISTICS, * PPDH_STATISTICS;
typedef struct _PDH_COUNTER_PATH_ELEMENTS_A {
    LPSTR szMachineName;
    LPSTR szObjectName;
    LPSTR szInstanceName;
    LPSTR szParentInstance;
    DWORD dwInstanceIndex;
    LPSTR szCounterName;
} PDH_COUNTER_PATH_ELEMENTS_A, * PPDH_COUNTER_PATH_ELEMENTS_A;
typedef struct _PDH_COUNTER_PATH_ELEMENTS_W {
    LPWSTR szMachineName;
    LPWSTR szObjectName;
    LPWSTR szInstanceName;
    LPWSTR szParentInstance;
    DWORD dwInstanceIndex;
    LPWSTR szCounterName;
} PDH_COUNTER_PATH_ELEMENTS_W, * PPDH_COUNTER_PATH_ELEMENTS_W;
typedef struct _PDH_DATA_ITEM_PATH_ELEMENTS_A {
    LPSTR szMachineName;
    GUID ObjectGUID;
    DWORD dwItemId;
    LPSTR szInstanceName;
} PDH_DATA_ITEM_PATH_ELEMENTS_A, * PPDH_DATA_ITEM_PATH_ELEMENTS_A;
typedef struct _PDH_DATA_ITEM_PATH_ELEMENTS_W {
    LPWSTR szMachineName;
    GUID ObjectGUID;
    DWORD dwItemId;
    LPWSTR szInstanceName;
} PDH_DATA_ITEM_PATH_ELEMENTS_W, * PPDH_DATA_ITEM_PATH_ELEMENTS_W;
typedef struct _PDH_COUNTER_INFO_A {
    DWORD dwLength;
    DWORD dwType;
    DWORD CVersion;
    DWORD CStatus;
    LONG lScale;
    LONG lDefaultScale;
    DWORD_PTR dwUserData;
    DWORD_PTR dwQueryUserData;
    LPSTR szFullPath;
    union {
        PDH_DATA_ITEM_PATH_ELEMENTS_A DataItemPath;
        PDH_COUNTER_PATH_ELEMENTS_A CounterPath;
        struct {
            LPSTR szMachineName;
            LPSTR szObjectName;
            LPSTR szInstanceName;
            LPSTR szParentInstance;
            DWORD dwInstanceIndex;
            LPSTR szCounterName;
        };
    };
    LPSTR szExplainText;
    DWORD DataBuffer[1];
} PDH_COUNTER_INFO_A, * PPDH_COUNTER_INFO_A;
typedef struct _PDH_COUNTER_INFO_W {
    DWORD dwLength;
    DWORD dwType;
    DWORD CVersion;
    DWORD CStatus;
    LONG lScale;
    LONG lDefaultScale;
    DWORD_PTR dwUserData;
    DWORD_PTR dwQueryUserData;
    LPWSTR szFullPath;
    union {
        PDH_DATA_ITEM_PATH_ELEMENTS_W DataItemPath;
        PDH_COUNTER_PATH_ELEMENTS_W CounterPath;
        struct {
            LPWSTR szMachineName;
            LPWSTR szObjectName;
            LPWSTR szInstanceName;
            LPWSTR szParentInstance;
            DWORD dwInstanceIndex;
            LPWSTR szCounterName;
        };
    };
    LPWSTR szExplainText;
    DWORD DataBuffer[1];
} PDH_COUNTER_INFO_W, * PPDH_COUNTER_INFO_W;
typedef struct _PDH_TIME_INFO {
    LONGLONG StartTime;
    LONGLONG EndTime;
    DWORD SampleCount;
} PDH_TIME_INFO, * PPDH_TIME_INFO;
typedef struct _PDH_RAW_LOG_RECORD {
    DWORD dwStructureSize;
    DWORD dwRecordType;
    DWORD dwItems;
    UCHAR RawBytes[1];
} PDH_RAW_LOG_RECORD, * PPDH_RAW_LOG_RECORD;
typedef struct _PDH_LOG_SERVICE_QUERY_INFO_A {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwLogQuota;
    LPSTR szLogFileCaption;
    LPSTR szDefaultDir;
    LPSTR szBaseFileName;
    DWORD dwFileType;
    DWORD dwReserved;
    union {
        struct {
            DWORD PdlAutoNameInterval;
            DWORD PdlAutoNameUnits;
            LPSTR PdlCommandFilename;
            LPSTR PdlCounterList;
            DWORD PdlAutoNameFormat;
            DWORD PdlSampleInterval;
            FILETIME PdlLogStartTime;
            FILETIME PdlLogEndTime;
        };
        struct {
            DWORD TlNumberOfBuffers;
            DWORD TlMinimumBuffers;
            DWORD TlMaximumBuffers;
            DWORD TlFreeBuffers;
            DWORD TlBufferSize;
            DWORD TlEventsLost;
            DWORD TlLoggerThreadId;
            DWORD TlBuffersWritten;
            DWORD TlLogHandle;
            LPSTR TlLogFileName;
        };
    };
} PDH_LOG_SERVICE_QUERY_INFO_A, * PPDH_LOG_SERVICE_QUERY_INFO_A;
typedef struct _PDH_LOG_SERVICE_QUERY_INFO_W {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwLogQuota;
    LPWSTR szLogFileCaption;
    LPWSTR szDefaultDir;
    LPWSTR szBaseFileName;
    DWORD dwFileType;
    DWORD dwReserved;
    union {
        struct {
            DWORD PdlAutoNameInterval;
            DWORD PdlAutoNameUnits;
            LPWSTR PdlCommandFilename;
            LPWSTR PdlCounterList;
            DWORD PdlAutoNameFormat;
            DWORD PdlSampleInterval;
            FILETIME PdlLogStartTime;
            FILETIME PdlLogEndTime;
        };
        struct {
            DWORD TlNumberOfBuffers;
            DWORD TlMinimumBuffers;
            DWORD TlMaximumBuffers;
            DWORD TlFreeBuffers;
            DWORD TlBufferSize;
            DWORD TlEventsLost;
            DWORD TlLoggerThreadId;
            DWORD TlBuffersWritten;
            DWORD TlLogHandle;
            LPWSTR TlLogFileName;
        };
    };
} PDH_LOG_SERVICE_QUERY_INFO_W, * PPDH_LOG_SERVICE_QUERY_INFO_W;
PDH_FUNCTION
PdhGetDllVersion(
    _Out_opt_ LPDWORD lpdwVersion
);
PDH_FUNCTION
PdhOpenQueryW(
    _In_opt_ LPCWSTR szDataSource,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HQUERY * phQuery
);
PDH_FUNCTION
PdhOpenQueryA(
    _In_opt_ LPCSTR szDataSource,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HQUERY * phQuery
);
PDH_FUNCTION
PdhAddCounterW(
    _In_ PDH_HQUERY hQuery,
    _In_ LPCWSTR szFullCounterPath,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HCOUNTER * phCounter
);
PDH_FUNCTION
PdhAddCounterA(
    _In_ PDH_HQUERY hQuery,
    _In_ LPCSTR szFullCounterPath,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HCOUNTER * phCounter
);
PDH_FUNCTION
PdhAddEnglishCounterW(
    _In_ PDH_HQUERY hQuery,
    _In_ LPCWSTR szFullCounterPath,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HCOUNTER * phCounter
);
PDH_FUNCTION
PdhAddEnglishCounterA(
    _In_ PDH_HQUERY hQuery,
    _In_ LPCSTR szFullCounterPath,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HCOUNTER * phCounter
);
PDH_FUNCTION
PdhCollectQueryDataWithTime(
    _Inout_ PDH_HQUERY hQuery,
    _Out_ LONGLONG * pllTimeStamp
);
PDH_FUNCTION
PdhValidatePathExW(
    _In_opt_ PDH_HLOG hDataSource,
    _In_ LPCWSTR szFullPathBuffer
);
PDH_FUNCTION
PdhValidatePathExA(
    _In_opt_ PDH_HLOG hDataSource,
    _In_ LPCSTR szFullPathBuffer
);
PDH_FUNCTION
PdhRemoveCounter(
    _In_ PDH_HCOUNTER hCounter
);
PDH_FUNCTION
PdhCollectQueryData(
    _Inout_ PDH_HQUERY hQuery
);
PDH_FUNCTION
PdhCloseQuery(
    _Inout_ PDH_HQUERY hQuery
);
PDH_FUNCTION
PdhGetFormattedCounterValue(
    _In_ PDH_HCOUNTER hCounter,
    _In_ DWORD dwFormat,
    _Out_opt_ LPDWORD lpdwType,
    _Out_ PPDH_FMT_COUNTERVALUE pValue
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetFormattedCounterArrayA(
    _In_ PDH_HCOUNTER hCounter,
    _In_ DWORD dwFormat,
    _Inout_ LPDWORD lpdwBufferSize,
    _Out_ LPDWORD lpdwItemCount,
    _Out_writes_bytes_opt_(* lpdwBufferSize) PPDH_FMT_COUNTERVALUE_ITEM_A ItemBuffer
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetFormattedCounterArrayW(
    _In_ PDH_HCOUNTER hCounter,
    _In_ DWORD dwFormat,
    _Inout_ LPDWORD lpdwBufferSize,
    _Out_ LPDWORD lpdwItemCount,
    _Out_writes_bytes_opt_(* lpdwBufferSize) PPDH_FMT_COUNTERVALUE_ITEM_W ItemBuffer
);
PDH_FUNCTION
PdhGetRawCounterValue(
    _In_ PDH_HCOUNTER hCounter,
    _Out_opt_ LPDWORD lpdwType,
    _Out_ PPDH_RAW_COUNTER pValue
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetRawCounterArrayA(
    _In_ PDH_HCOUNTER hCounter,
    _Inout_ LPDWORD lpdwBufferSize,
    _Out_ LPDWORD lpdwItemCount,
    _Out_writes_bytes_opt_(* lpdwBufferSize) PPDH_RAW_COUNTER_ITEM_A ItemBuffer
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetRawCounterArrayW(
    _In_ PDH_HCOUNTER hCounter,
    _Inout_ LPDWORD lpdwBufferSize,
    _Out_ LPDWORD lpdwItemCount,
    _Out_writes_bytes_opt_(* lpdwBufferSize) PPDH_RAW_COUNTER_ITEM_W ItemBuffer
);
PDH_FUNCTION
PdhCalculateCounterFromRawValue(
    _In_ PDH_HCOUNTER hCounter,
    _In_ DWORD dwFormat,
    _In_ PPDH_RAW_COUNTER rawValue1,
    _In_ PPDH_RAW_COUNTER rawValue2,
    _Out_ PPDH_FMT_COUNTERVALUE fmtValue
);
PDH_FUNCTION
PdhComputeCounterStatistics(
    _In_ PDH_HCOUNTER hCounter,
    _In_ DWORD dwFormat,
    _In_ DWORD dwFirstEntry,
    _In_ DWORD dwNumEntries,
    _In_ PPDH_RAW_COUNTER lpRawValueArray,
    _Out_ PPDH_STATISTICS data
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetCounterInfoW(
    _In_ PDH_HCOUNTER hCounter,
    _In_ BOOLEAN bRetrieveExplainText,
    _Inout_ LPDWORD pdwBufferSize,
    _Out_writes_bytes_opt_(* pdwBufferSize) PPDH_COUNTER_INFO_W lpBuffer
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetCounterInfoA(
    _In_ PDH_HCOUNTER hCounter,
    _In_ BOOLEAN bRetrieveExplainText,
    _Inout_ LPDWORD pdwBufferSize,
    _Out_writes_bytes_opt_(* pdwBufferSize) PPDH_COUNTER_INFO_A lpBuffer
);
PDH_FUNCTION
PdhSetCounterScaleFactor(
    _Inout_ PDH_HCOUNTER hCounter,
    _In_ LONG lFactor
);
PDH_FUNCTION
PdhConnectMachineW(
    _In_opt_ LPCWSTR szMachineName
);
PDH_FUNCTION
PdhConnectMachineA(
    _In_opt_ LPCSTR szMachineName
);
PDH_FUNCTION
PdhEnumMachinesW(
    _In_opt_ LPCWSTR szDataSource,
    _Out_writes_opt_(* pcchBufferSize) PZZWSTR mszMachineList,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhEnumMachinesA(
    _In_opt_ LPCSTR szDataSource,
    _Out_writes_opt_(* pcchBufferSize) PZZSTR mszMachineList,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhEnumObjectsW(
    _In_opt_ LPCWSTR szDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) PZZWSTR mszObjectList,
    _Inout_ LPDWORD pcchBufferSize,
    _In_ DWORD dwDetailLevel,
    _In_ BOOL bRefresh
);
PDH_FUNCTION
PdhEnumObjectsA(
    _In_opt_ LPCSTR szDataSource,
    _In_opt_ LPCSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) PZZSTR mszObjectList,
    _Inout_ LPDWORD pcchBufferSize,
    _In_ DWORD dwDetailLevel,
    _In_ BOOL bRefresh
);
PDH_FUNCTION
PdhEnumObjectItemsW(
    _In_opt_ LPCWSTR szDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _In_ LPCWSTR szObjectName,
    _Out_writes_opt_(* pcchCounterListLength) PZZWSTR mszCounterList,
    _Inout_ LPDWORD pcchCounterListLength,
    _Out_writes_opt_(* pcchInstanceListLength) PZZWSTR mszInstanceList,
    _Inout_ LPDWORD pcchInstanceListLength,
    _In_ DWORD dwDetailLevel,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhEnumObjectItemsA(
    _In_opt_ LPCSTR szDataSource,
    _In_opt_ LPCSTR szMachineName,
    _In_ LPCSTR szObjectName,
    _Out_writes_opt_(* pcchCounterListLength) PZZSTR mszCounterList,
    _Inout_ LPDWORD pcchCounterListLength,
    _Out_writes_opt_(* pcchInstanceListLength) PZZSTR mszInstanceList,
    _Inout_ LPDWORD pcchInstanceListLength,
    _In_ DWORD dwDetailLevel,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhMakeCounterPathW(
    _In_ PPDH_COUNTER_PATH_ELEMENTS_W pCounterPathElements,
    _Out_writes_opt_(* pcchBufferSize) LPWSTR szFullPathBuffer,
    _Inout_ LPDWORD pcchBufferSize,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhMakeCounterPathA(
    _In_ PPDH_COUNTER_PATH_ELEMENTS_A pCounterPathElements,
    _Out_writes_opt_(* pcchBufferSize) LPSTR szFullPathBuffer,
    _Inout_ LPDWORD pcchBufferSize,
    _In_ DWORD dwFlags
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhParseCounterPathW(
    _In_ LPCWSTR szFullPathBuffer,
    _Out_writes_bytes_opt_(* pdwBufferSize) PPDH_COUNTER_PATH_ELEMENTS_W pCounterPathElements,
    _Inout_ LPDWORD pdwBufferSize,
    _In_ DWORD dwFlags
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhParseCounterPathA(
    _In_ LPCSTR szFullPathBuffer,
    _Out_writes_bytes_opt_(* pdwBufferSize) PPDH_COUNTER_PATH_ELEMENTS_A pCounterPathElements,
    _Inout_ LPDWORD pdwBufferSize,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhParseInstanceNameW(
    _In_ LPCWSTR szInstanceString,
    _Out_writes_opt_(* pcchInstanceNameLength) LPWSTR szInstanceName,
    _Inout_ LPDWORD pcchInstanceNameLength,
    _Out_writes_opt_(* pcchParentNameLength) LPWSTR szParentName,
    _Inout_ LPDWORD pcchParentNameLength,
    _Out_ LPDWORD lpIndex
);
PDH_FUNCTION
PdhParseInstanceNameA(
    _In_ LPCSTR szInstanceString,
    _Out_writes_opt_(* pcchInstanceNameLength) LPSTR szInstanceName,
    _Inout_ LPDWORD pcchInstanceNameLength,
    _Out_writes_opt_(* pcchParentNameLength) LPSTR szParentName,
    _Inout_ LPDWORD pcchParentNameLength,
    _Out_ LPDWORD lpIndex
);
PDH_FUNCTION
PdhValidatePathW(
    _In_ LPCWSTR szFullPathBuffer
);
PDH_FUNCTION
PdhValidatePathA(
    _In_ LPCSTR szFullPathBuffer
);
PDH_FUNCTION
PdhGetDefaultPerfObjectW(
    _In_opt_ LPCWSTR szDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) LPWSTR szDefaultObjectName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfObjectA(
    _In_opt_ LPCSTR szDataSource,
    _In_opt_ LPCSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) LPSTR szDefaultObjectName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfCounterW(
    _In_opt_ LPCWSTR szDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _In_ LPCWSTR szObjectName,
    _Out_writes_opt_(* pcchBufferSize) LPWSTR szDefaultCounterName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfCounterA(
    _In_opt_ LPCSTR szDataSource,
    _In_opt_ LPCSTR szMachineName,
    _In_ LPCSTR szObjectName,
    _Out_writes_opt_(* pcchBufferSize) LPSTR szDefaultCounterName,
    _Inout_ LPDWORD pcchBufferSize
);
typedef PDH_STATUS (__stdcall * CounterPathCallBack)(DWORD_PTR);
#pragma warning ( disable : 4214 )
typedef struct _BrowseDlgConfig_HW {
    DWORD bIncludeInstanceIndex:1,
            bSingleCounterPerAdd:1,
            bSingleCounterPerDialog:1,
            bLocalCountersOnly:1,
            bWildCardInstances:1,
            bHideDetailBox:1,
            bInitializePath:1,
            bDisableMachineSelection:1,
            bIncludeCostlyObjects:1,
            bShowObjectBrowser:1,
            bReserved:22;
    HWND hWndOwner;
    PDH_HLOG hDataSource;
    LPWSTR szReturnPathBuffer;
    DWORD cchReturnPathLength;
    CounterPathCallBack pCallBack;
    DWORD_PTR dwCallBackArg;
    PDH_STATUS CallBackStatus;
    DWORD dwDefaultDetailLevel;
    LPWSTR szDialogBoxCaption;
} PDH_BROWSE_DLG_CONFIG_HW, * PPDH_BROWSE_DLG_CONFIG_HW;
typedef struct _BrowseDlgConfig_HA {
    DWORD bIncludeInstanceIndex:1,
            bSingleCounterPerAdd:1,
            bSingleCounterPerDialog:1,
            bLocalCountersOnly:1,
            bWildCardInstances:1,
            bHideDetailBox:1,
            bInitializePath:1,
            bDisableMachineSelection:1,
            bIncludeCostlyObjects:1,
            bShowObjectBrowser:1,
            bReserved:22;
    HWND hWndOwner;
    PDH_HLOG hDataSource;
    LPSTR szReturnPathBuffer;
    DWORD cchReturnPathLength;
    CounterPathCallBack pCallBack;
    DWORD_PTR dwCallBackArg;
    PDH_STATUS CallBackStatus;
    DWORD dwDefaultDetailLevel;
    LPSTR szDialogBoxCaption;
} PDH_BROWSE_DLG_CONFIG_HA, * PPDH_BROWSE_DLG_CONFIG_HA;
typedef struct _BrowseDlgConfig_W {
    DWORD bIncludeInstanceIndex:1,
            bSingleCounterPerAdd:1,
            bSingleCounterPerDialog:1,
            bLocalCountersOnly:1,
            bWildCardInstances:1,
            bHideDetailBox:1,
            bInitializePath:1,
            bDisableMachineSelection:1,
            bIncludeCostlyObjects:1,
            bShowObjectBrowser:1,
            bReserved:22;
    HWND hWndOwner;
    LPWSTR szDataSource;
    LPWSTR szReturnPathBuffer;
    DWORD cchReturnPathLength;
    CounterPathCallBack pCallBack;
    DWORD_PTR dwCallBackArg;
    PDH_STATUS CallBackStatus;
    DWORD dwDefaultDetailLevel;
    LPWSTR szDialogBoxCaption;
} PDH_BROWSE_DLG_CONFIG_W, * PPDH_BROWSE_DLG_CONFIG_W;
typedef struct _BrowseDlgConfig_A {
    DWORD bIncludeInstanceIndex:1,
            bSingleCounterPerAdd:1,
            bSingleCounterPerDialog:1,
            bLocalCountersOnly:1,
            bWildCardInstances:1,
            bHideDetailBox:1,
            bInitializePath:1,
            bDisableMachineSelection:1,
            bIncludeCostlyObjects:1,
            bShowObjectBrowser:1,
            bReserved:22;
    HWND hWndOwner;
    LPSTR szDataSource;
    _Field_size_(cchReturnPathLength) LPSTR szReturnPathBuffer;
    DWORD cchReturnPathLength;
    CounterPathCallBack pCallBack;
    DWORD_PTR dwCallBackArg;
    PDH_STATUS CallBackStatus;
    DWORD dwDefaultDetailLevel;
    LPSTR szDialogBoxCaption;
} PDH_BROWSE_DLG_CONFIG_A, * PPDH_BROWSE_DLG_CONFIG_A;
#pragma warning ( default : 4214 )
PDH_FUNCTION
PdhBrowseCountersW(
    _In_ PPDH_BROWSE_DLG_CONFIG_W pBrowseDlgData
);
PDH_FUNCTION
PdhBrowseCountersA(
    _In_ PPDH_BROWSE_DLG_CONFIG_A pBrowseDlgData
);
PDH_FUNCTION
PdhExpandCounterPathW(
    _In_ LPCWSTR szWildCardPath,
    _Out_writes_opt_(* pcchPathListLength) PZZWSTR mszExpandedPathList,
    _Inout_ LPDWORD pcchPathListLength
);
PDH_FUNCTION
PdhExpandCounterPathA(
    _In_ LPCSTR szWildCardPath,
    _Out_writes_opt_(* pcchPathListLength) PZZSTR mszExpandedPathList,
    _Inout_ LPDWORD pcchPathListLength
);
PDH_FUNCTION
PdhLookupPerfNameByIndexW(
    _In_opt_ LPCWSTR szMachineName,
    _In_ DWORD dwNameIndex,
    _Out_writes_opt_(* pcchNameBufferSize) LPWSTR szNameBuffer,
    _Inout_ LPDWORD pcchNameBufferSize
);
PDH_FUNCTION
PdhLookupPerfNameByIndexA(
    _In_opt_ LPCSTR szMachineName,
    _In_ DWORD dwNameIndex,
    _Out_writes_opt_(* pcchNameBufferSize) LPSTR szNameBuffer,
    _Inout_ LPDWORD pcchNameBufferSize
);
PDH_FUNCTION
PdhLookupPerfIndexByNameW(
    _In_opt_ LPCWSTR szMachineName,
    _In_ LPCWSTR szNameBuffer,
    _Out_ LPDWORD pdwIndex
);
PDH_FUNCTION
PdhLookupPerfIndexByNameA(
    _In_opt_ LPCSTR szMachineName,
    _In_ LPCSTR szNameBuffer,
    _Out_ LPDWORD pdwIndex
);
PDH_FUNCTION
PdhExpandWildCardPathA(
    _In_opt_ LPCSTR szDataSource,
    _In_ LPCSTR szWildCardPath,
    _Out_writes_opt_(* pcchPathListLength) PZZSTR mszExpandedPathList,
    _Inout_ LPDWORD pcchPathListLength,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhExpandWildCardPathW(
    _In_opt_ LPCWSTR szDataSource,
    _In_ LPCWSTR szWildCardPath,
    _Out_writes_opt_(* pcchPathListLength) PZZWSTR mszExpandedPathList,
    _Inout_ LPDWORD pcchPathListLength,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhOpenLogW(
    _In_ LPCWSTR szLogFileName,
    _In_ DWORD dwAccessFlags,
    _Inout_ LPDWORD lpdwLogType,
    _In_opt_ PDH_HQUERY hQuery,
    _In_ DWORD dwMaxSize,
    _In_opt_ LPCWSTR szUserCaption,
    _Out_ PDH_HLOG * phLog
);
PDH_FUNCTION
PdhOpenLogA(
    _In_ LPCSTR szLogFileName,
    _In_ DWORD dwAccessFlags,
    _Inout_ LPDWORD lpdwLogType,
    _In_opt_ PDH_HQUERY hQuery,
    _In_ DWORD dwMaxSize,
    _In_opt_ LPCSTR szUserCaption,
    _Out_ PDH_HLOG * phLog
);
PDH_FUNCTION
PdhUpdateLogW(
    _In_ PDH_HLOG hLog,
    _In_opt_ LPCWSTR szUserString
);
PDH_FUNCTION
PdhUpdateLogA(
    _In_ PDH_HLOG hLog,
    _In_opt_ LPCSTR szUserString
);
PDH_FUNCTION
PdhUpdateLogFileCatalog(
    _In_ PDH_HLOG hLog
);
PDH_FUNCTION
PdhGetLogFileSize(
    _In_ PDH_HLOG hLog,
    _Out_ LONGLONG * llSize
);
PDH_FUNCTION
PdhCloseLog(
    _In_ PDH_HLOG hLog,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhSelectDataSourceW(
    _In_ HWND hWndOwner,
    _In_ DWORD dwFlags,
    _Inout_updates_(* pcchBufferLength) LPWSTR szDataSource,
    _Inout_ LPDWORD pcchBufferLength
);
PDH_FUNCTION
PdhSelectDataSourceA(
    _In_ HWND hWndOwner,
    _In_ DWORD dwFlags,
    _Inout_updates_(* pcchBufferLength) LPSTR szDataSource,
    _Inout_ LPDWORD pcchBufferLength
);
BOOL
__stdcall
PdhIsRealTimeQuery(
    _In_ PDH_HQUERY hQuery
);
PDH_FUNCTION
PdhSetQueryTimeRange(
    _In_ PDH_HQUERY hQuery,
    _In_ PPDH_TIME_INFO pInfo
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetDataSourceTimeRangeW(
    _In_opt_ LPCWSTR szDataSource,
    _Out_ LPDWORD pdwNumEntries,
    _Out_writes_bytes_(* pdwBufferSize) PPDH_TIME_INFO pInfo,
    _Inout_ LPDWORD pdwBufferSize
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetDataSourceTimeRangeA(
    _In_opt_ LPCSTR szDataSource,
    _Out_ LPDWORD pdwNumEntries,
    _Out_writes_bytes_(* pdwBufferSize) PPDH_TIME_INFO pInfo,
    _Inout_ LPDWORD pdwBufferSize
);
PDH_FUNCTION
PdhCollectQueryDataEx(
    _In_ PDH_HQUERY hQuery,
    _In_ DWORD dwIntervalTime,
    _In_ HANDLE hNewDataEvent
);
PDH_FUNCTION
PdhFormatFromRawValue(
    _In_ DWORD dwCounterType,
    _In_ DWORD dwFormat,
    _In_ LONGLONG * pTimeBase,
    _In_ PPDH_RAW_COUNTER pRawValue1,
    _In_ PPDH_RAW_COUNTER pRawValue2,
    _Out_ PPDH_FMT_COUNTERVALUE pFmtValue
);
PDH_FUNCTION
PdhGetCounterTimeBase(
    _In_ PDH_HCOUNTER hCounter,
    _Out_ LONGLONG * pTimeBase
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhReadRawLogRecord(
    _In_ PDH_HLOG hLog,
    _In_ FILETIME ftRecord,
    _Out_writes_bytes_opt_(* pdwBufferLength) PPDH_RAW_LOG_RECORD pRawLogRecord,
    _Inout_ LPDWORD pdwBufferLength
);
PDH_FUNCTION
PdhSetDefaultRealTimeDataSource(
    _In_ DWORD dwDataSourceId
);
PDH_FUNCTION
PdhBindInputDataSourceW(
    _Out_ PDH_HLOG * phDataSource,
    _In_opt_ LPCWSTR LogFileNameList
);
PDH_FUNCTION
PdhBindInputDataSourceA(
    _Out_ PDH_HLOG * phDataSource,
    _In_opt_ LPCSTR LogFileNameList
);
PDH_FUNCTION
PdhOpenQueryH(
    _In_opt_ PDH_HLOG hDataSource,
    _In_ DWORD_PTR dwUserData,
    _Out_ PDH_HQUERY * phQuery
);
PDH_FUNCTION
PdhEnumMachinesHW(
    _In_opt_ PDH_HLOG hDataSource,
    _Out_writes_opt_(* pcchBufferSize) PZZWSTR mszMachineList,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhEnumMachinesHA(
    _In_opt_ PDH_HLOG hDataSource,
    _Out_writes_opt_(* pcchBufferSize) PZZSTR mszMachineList,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhEnumObjectsHW(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) PZZWSTR mszObjectList,
    _Inout_ LPDWORD pcchBufferSize,
    _In_ DWORD dwDetailLevel,
    _In_ BOOL bRefresh
) ;
PDH_FUNCTION
PdhEnumObjectsHA(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) PZZSTR mszObjectList,
    _Inout_ LPDWORD pcchBufferSize,
    _In_ DWORD dwDetailLevel,
    _In_ BOOL bRefresh
);
PDH_FUNCTION
PdhEnumObjectItemsHW(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _In_ LPCWSTR szObjectName,
    _Out_writes_opt_(* pcchCounterListLength) PZZWSTR mszCounterList,
    _Inout_ LPDWORD pcchCounterListLength,
    _Out_writes_opt_(* pcchInstanceListLength) PZZWSTR mszInstanceList,
    _Inout_ LPDWORD pcchInstanceListLength,
    _In_ DWORD dwDetailLevel,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhEnumObjectItemsHA(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCSTR szMachineName,
    _In_ LPCSTR szObjectName,
    _Out_writes_opt_(* pcchCounterListLength) PZZSTR mszCounterList,
    _Inout_ LPDWORD pcchCounterListLength,
    _Out_writes_opt_(* pcchInstanceListLength) PZZSTR mszInstanceList,
    _Inout_ LPDWORD pcchInstanceListLength,
    _In_ DWORD dwDetailLevel,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhExpandWildCardPathHW(
    _In_opt_ PDH_HLOG hDataSource,
    _In_ LPCWSTR szWildCardPath,
    _Out_writes_opt_(* pcchPathListLength) PZZWSTR mszExpandedPathList,
    _Inout_ LPDWORD pcchPathListLength,
    _In_ DWORD dwFlags
);
PDH_FUNCTION
PdhExpandWildCardPathHA(
    _In_opt_ PDH_HLOG hDataSource,
    _In_ LPCSTR szWildCardPath,
    _Out_writes_opt_(* pcchPathListLength) PZZSTR mszExpandedPathList,
    _Inout_ LPDWORD pcchPathListLength,
    _In_ DWORD dwFlags
);
_Success_(return == ERROR_SUCCESS)
PDH_FUNCTION
PdhGetDataSourceTimeRangeH(
    _Inout_opt_ PDH_HLOG hDataSource,
    _Out_ LPDWORD pdwNumEntries,
    _Out_writes_bytes_(* pdwBufferSize) PPDH_TIME_INFO pInfo,
    _Inout_ LPDWORD pdwBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfObjectHW(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) LPWSTR szDefaultObjectName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfObjectHA(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCSTR szMachineName,
    _Out_writes_opt_(* pcchBufferSize) LPSTR szDefaultObjectName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfCounterHW(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCWSTR szMachineName,
    _In_ LPCWSTR szObjectName,
    _Out_writes_opt_(* pcchBufferSize) LPWSTR szDefaultCounterName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhGetDefaultPerfCounterHA(
    _In_opt_ PDH_HLOG hDataSource,
    _In_opt_ LPCSTR szMachineName,
    _In_ LPCSTR szObjectName,
    _Out_writes_opt_(* pcchBufferSize) LPSTR szDefaultCounterName,
    _Inout_ LPDWORD pcchBufferSize
);
PDH_FUNCTION
PdhBrowseCountersHW(
    _In_ PPDH_BROWSE_DLG_CONFIG_HW pBrowseDlgData
);
PDH_FUNCTION
PdhBrowseCountersHA(
    _In_ PPDH_BROWSE_DLG_CONFIG_HA pBrowseDlgData
);
PDH_FUNCTION
PdhVerifySQLDBW(
    _In_ LPCWSTR szDataSource
);
PDH_FUNCTION
PdhVerifySQLDBA(
    _In_ LPCSTR szDataSource
);
PDH_FUNCTION
PdhCreateSQLTablesW(
    _In_ LPCWSTR szDataSource
);
PDH_FUNCTION
PdhCreateSQLTablesA(
    _In_ LPCSTR szDataSource
);
PDH_FUNCTION
PdhEnumLogSetNamesW(
    _In_ LPCWSTR szDataSource,
    _Out_writes_opt_(* pcchBufferLength) PZZWSTR mszDataSetNameList,
    _Inout_ LPDWORD pcchBufferLength
);
PDH_FUNCTION
PdhEnumLogSetNamesA(
    _In_ LPCSTR szDataSource,
    _Out_writes_opt_(* pcchBufferLength) PZZSTR mszDataSetNameList,
    _Inout_ LPDWORD pcchBufferLength
);
PDH_FUNCTION
PdhGetLogSetGUID(
    _In_ PDH_HLOG hLog,
    _Out_opt_ GUID * pGuid,
    _Out_opt_ int * pRunId
);
PDH_FUNCTION
PdhSetLogSetRunID(
    _Inout_ PDH_HLOG hLog,
    _In_ int RunId
);
#pragma warning ( default : 4201 )
}
#endif
#pragma endregion
