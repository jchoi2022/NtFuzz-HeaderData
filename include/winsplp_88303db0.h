#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
extern "C" {
typedef enum
{
    kInvalidJobState=0,
    kLogJobPrinted,
    kLogJobRendered,
    kLogJobError,
    kLogJobPipelineError,
    kLogOfflineFileFull
} EBranchOfficeJobEventType;
typedef struct
{
    DWORD Status;
    LPWSTR pDocumentName;
    LPWSTR pUserName;
    LPWSTR pMachineName;
    LPWSTR pPrinterName;
    LPWSTR pPortName;
    LONGLONG Size;
    DWORD TotalPages;
} BranchOfficeJobDataPrinted, *PBranchOfficeJobDataPrinted;
typedef struct
{
    DWORD LastError;
    LPWSTR pDocumentName;
    LPWSTR pUserName;
    LPWSTR pPrinterName;
    LPWSTR pDataType;
    LONGLONG TotalSize;
    LONGLONG PrintedSize;
    DWORD TotalPages;
    DWORD PrintedPages;
    LPWSTR pMachineName;
    LPWSTR pJobError;
    LPWSTR pErrorDescription;
} BranchOfficeJobDataError, *PBranchOfficeJobDataError;
typedef struct
{
    LONGLONG Size;
    DWORD ICMMethod;
    short Color;
    short PrintQuality;
    short YResolution;
    short Copies;
    short TTOption;
} BranchOfficeJobDataRendered, *PBranchOfficeJobDataRendered;
typedef struct
{
    LPWSTR pDocumentName;
    LPWSTR pPrinterName;
    LPWSTR pExtraErrorInfo;
} BranchOfficeJobDataPipelineFailed, *PBranchOfficeJobDataPipelineFailed;
typedef struct
{
    LPWSTR pMachineName;
} BranchOfficeLogOfflineFileFull, *PBranchOfficeLogOfflineFileFull;
typedef struct
{
    EBranchOfficeJobEventType eEventType;
    DWORD JobId;
    union
    {
        BranchOfficeJobDataPrinted LogJobPrinted;
        BranchOfficeJobDataRendered LogJobRendered;
        BranchOfficeJobDataError LogJobError;
        BranchOfficeJobDataPipelineFailed LogPipelineFailed;
        BranchOfficeLogOfflineFileFull LogOfflineFileFull;
    } JobInfo;
} BranchOfficeJobData, *PBranchOfficeJobData;
typedef struct
{
    DWORD cJobDataEntries;
    BranchOfficeJobData JobData[ 1 ];
} BranchOfficeJobDataContainer, *PBranchOfficeJobDataContainer, *LPBranchOfficeJobDataContainer;
DWORD
WINAPI
LogJobInfoForBranchOffice(
    _In_ HANDLE hPrinter,
    _In_ PBranchOfficeJobDataContainer pJobDataContainer
    );
    #define __ATTRIBUTE_INFO_3__
    typedef struct _ATTRIBUTE_INFO_3 {
        DWORD dwJobNumberOfPagesPerSide;
        DWORD dwDrvNumberOfPagesPerSide;
        DWORD dwNupBorderFlags;
        DWORD dwJobPageOrderFlags;
        DWORD dwDrvPageOrderFlags;
        DWORD dwJobNumberOfCopies;
        DWORD dwDrvNumberOfCopies;
        DWORD dwColorOptimization;
        short dmPrintQuality;
        short dmYResolution;
    } ATTRIBUTE_INFO_3, *PATTRIBUTE_INFO_3;
    #define __ATTRIBUTE_INFO_4__
    typedef struct _ATTRIBUTE_INFO_4 {
        DWORD dwJobNumberOfPagesPerSide;
        DWORD dwDrvNumberOfPagesPerSide;
        DWORD dwNupBorderFlags;
        DWORD dwJobPageOrderFlags;
        DWORD dwDrvPageOrderFlags;
        DWORD dwJobNumberOfCopies;
        DWORD dwDrvNumberOfCopies;
        DWORD dwColorOptimization;
        short dmPrintQuality;
        short dmYResolution;
        DWORD dwDuplexFlags;
        DWORD dwNupDirection;
        DWORD dwBookletFlags;
        DWORD dwScalingPercentX;
        DWORD dwScalingPercentY;
    } ATTRIBUTE_INFO_4, *PATTRIBUTE_INFO_4;
    #define REVERSE_PAGES_FOR_REVERSE_DUPLEX ( 0x00000001 )
    #define DONT_SEND_EXTRA_PAGES_FOR_DUPLEX ( 0x00000001 << 1 )
    #define RIGHT_THEN_DOWN ( 0x00000001 )
    #define DOWN_THEN_RIGHT ( 0x00000001 << 1 )
    #define LEFT_THEN_DOWN ( 0x00000001 << 2 )
    #define DOWN_THEN_LEFT ( 0x00000001 << 3 )
    #define BOOKLET_EDGE_LEFT ( 0x00000000 )
    #define BOOKLET_EDGE_RIGHT ( 0x00000001 )
typedef struct _PRINTER_NOTIFY_INIT {
    DWORD Size;
    DWORD Reserved;
    DWORD PollTime;
} PRINTER_NOTIFY_INIT, *PPRINTER_NOTIFY_INIT, *LPPRINTER_NOTIFY_INIT;
typedef struct _SPLCLIENT_INFO_1{
    DWORD dwSize;
    LPWSTR pMachineName;
    LPWSTR pUserName;
    DWORD dwBuildNum;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    WORD wProcessorArchitecture;
} SPLCLIENT_INFO_1, *PSPLCLIENT_INFO_1, *LPSPLCLIENT_INFO_1;
typedef struct _SPLCLIENT_INFO_2_V1{
    ULONG_PTR hSplPrinter;
} SPLCLIENT_INFO_2_W2K;
typedef struct _SPLCLIENT_INFO_2_V2{
    DWORD64 hSplPrinter;
} SPLCLIENT_INFO_2_WINXP;
typedef struct _SPLCLIENT_INFO_2_V3{
    UINT64 hSplPrinter;
} SPLCLIENT_INFO_2_LONGHORN;
#if (OSVER(NTDDI_VERSION) == NTDDI_W2K)
    typedef SPLCLIENT_INFO_2_W2K SPLCLIENT_INFO_2, *PSPLCLIENT_INFO_2, *LPSPLCLIENT_INFO_2;
#elif ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) || (OSVER(NTDDI_VERSION) == NTDDI_WS03))
    typedef SPLCLIENT_INFO_2_WINXP SPLCLIENT_INFO_2, *PSPLCLIENT_INFO_2, *LPSPLCLIENT_INFO_2;
#else
    typedef SPLCLIENT_INFO_2_LONGHORN SPLCLIENT_INFO_2, *PSPLCLIENT_INFO_2, *LPSPLCLIENT_INFO_2;
#endif
    typedef struct _SPLCLIENT_INFO_3_VISTA
    {
        UINT cbSize;
        DWORD dwFlags;
        DWORD dwSize;
        PWSTR pMachineName;
        PWSTR pUserName;
        DWORD dwBuildNum;
        DWORD dwMajorVersion;
        DWORD dwMinorVersion;
        WORD wProcessorArchitecture;
        UINT64 hSplPrinter;
    } SPLCLIENT_INFO_3_VISTA;
    typedef SPLCLIENT_INFO_3_VISTA SPLCLIENT_INFO_3, *PSPLCLIENT_INFO_3, *LPSPLCLIENT_INFO_3;
typedef struct _PRINTPROVIDOR
{
    BOOL (*fpOpenPrinter)(
        _In_opt_ PWSTR pPrinterName,
        _Out_ PHANDLE phPrinter,
        _In_opt_ PPRINTER_DEFAULTS pDefault
        );
    BOOL (*fpSetJob)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _In_ DWORD Level,
        _In_reads_opt_(_Inexpressible_(0))
             LPBYTE pJob,
        _In_ DWORD Command
        );
    BOOL (*fpGetJob)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
              LPBYTE pJob,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
        );
    BOOL (*fpEnumJobs)(
        _In_ HANDLE hPrinter,
        _In_ DWORD FirstJob,
        _In_ DWORD NoJobs,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
              LPBYTE pJob,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    HANDLE (*fpAddPrinter)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pPrinter
        );
    BOOL (*fpDeletePrinter)(_In_ HANDLE hPrinter);
    BOOL (*fpSetPrinter)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0))
             LPBYTE pPrinter,
        _In_ DWORD Command
        );
    BOOL (*fpGetPrinter)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
               LPBYTE pPrinter,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
        );
    BOOL (*fpEnumPrinters)(
        _In_ DWORD Flags,
        _In_opt_ LPWSTR Name,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pPrinterEnum,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpAddPrinterDriver)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pDriverInfo
        );
    BOOL (*fpEnumPrinterDrivers)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pDriverInfo,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpGetPrinterDriver)(
        _In_ HANDLE hPrinter,
        _In_opt_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pDriverInfo,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
        );
    BOOL (*fpGetPrinterDriverDirectory)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pDriverDirectory,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
        );
    BOOL (*fpDeletePrinterDriver)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ LPWSTR pDriverName
        );
    BOOL (*fpAddPrintProcessor)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ LPWSTR pPathName,
        _In_ LPWSTR pPrintProcessorName
        );
    BOOL (*fpEnumPrintProcessors)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pPrintProcessorInfo,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpGetPrintProcessorDirectory)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pPrintProcessorInfo,
        _In_ DWORD cbBuf,
        _In_ LPDWORD pcbNeeded
        );
    BOOL (*fpDeletePrintProcessor)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ LPWSTR pPrintProcessorName
        );
    BOOL (*fpEnumPrintProcessorDatatypes)(
        _In_opt_ LPWSTR pName,
        _In_ LPWSTR pPrintProcessorName,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                  LPBYTE pDataypes,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    DWORD (*fpStartDocPrinter)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pDocInfo);
    BOOL (*fpStartPagePrinter)(_In_ HANDLE hPrinter);
    BOOL (*fpWritePrinter)(
        _In_ HANDLE hPrinter,
        _In_reads_bytes_(cbBuf)
              LPVOID pBuf,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcWritten
        );
    BOOL (*fpEndPagePrinter)(_In_ HANDLE hPrinter);
    BOOL (*fpAbortPrinter)(_In_ HANDLE hPrinter);
    BOOL (*fpReadPrinter)(
        _In_ HANDLE hPrinter,
        _Out_writes_bytes_to_opt_(cbBuf, *pNoBytesRead)
              LPVOID pBuf,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pNoBytesRead
        );
    BOOL (*fpEndDocPrinter)(_In_ HANDLE hPrinter);
    BOOL (*fpAddJob)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
              LPBYTE pData,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
        );
    BOOL (*fpScheduleJob)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId
        );
    DWORD (*fpGetPrinterData)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pValueName,
        _Out_opt_ LPDWORD pType,
        _Out_writes_bytes_to_opt_(nSize, *pcbNeeded)
                  LPBYTE pData,
        _In_ DWORD nSize,
        _Out_ LPDWORD pcbNeeded
        );
    DWORD (*fpSetPrinterData)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pValueName,
        _In_ DWORD Type,
        _In_reads_bytes_(cbData)
             LPBYTE pData,
        _In_ DWORD cbData
        );
    DWORD (*fpWaitForPrinterChange)(_In_ HANDLE hPrinter, _In_ DWORD Flags);
    BOOL (*fpClosePrinter)(_In_ HANDLE hPrinter);
    BOOL (*fpAddForm)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pForm
         );
    BOOL (*fpDeleteForm)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pFormName
        );
    BOOL (*fpGetForm)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pFormName,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
              LPBYTE pForm,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
        );
    BOOL (*fpSetForm)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pFormName,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pForm
        );
    BOOL (*fpEnumForms)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
               LPBYTE pForm,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpEnumMonitors)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                  LPBYTE pMonitors,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpEnumPorts)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pPorts,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpAddPort)(
        _In_opt_ LPWSTR pName,
        _In_ HWND hWnd,
        _In_ LPWSTR pMonitorName
        );
    BOOL (*fpConfigurePort)(
        _In_opt_ LPWSTR pName,
        _In_ HWND hWnd,
        _In_ LPWSTR pPortName
        );
    BOOL (*fpDeletePort)(
        _In_opt_ LPWSTR pName,
        _In_ HWND hWnd,
        _In_ LPWSTR pPortName
        );
    HANDLE (*fpCreatePrinterIC)(
        _In_ HANDLE hPrinter,
        _In_opt_ LPDEVMODEW pDevMode
        );
    BOOL (*fpPlayGdiScriptOnPrinterIC)(
        _In_ HANDLE hPrinterIC,
        _In_reads_bytes_(cIn)
              LPBYTE pIn,
        _In_ DWORD cIn,
        _Out_writes_bytes_(cOut)
              LPBYTE pOut,
        _In_ DWORD cOut,
        _In_ DWORD ul
        );
    BOOL (*fpDeletePrinterIC)(_In_ HANDLE hPrinterIC);
    BOOL (*fpAddPrinterConnection)(_In_ LPWSTR pName);
    BOOL (*fpDeletePrinterConnection)(_In_ LPWSTR pName);
    DWORD (*fpPrinterMessageBox)(
        _In_ HANDLE hPrinter,
        _In_ DWORD Error,
        _In_ HWND hWnd,
        _In_ LPWSTR pText,
        _In_ LPWSTR pCaption,
        _In_ DWORD dwType
        );
    BOOL (*fpAddMonitor)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pMonitorInfo
        );
    BOOL (*fpDeleteMonitor)(
        _In_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ LPWSTR pMonitorName
        );
    BOOL (*fpResetPrinter)(
        _In_ HANDLE hPrinter,
        _In_ LPPRINTER_DEFAULTS pDefault
        );
    BOOL (*fpGetPrinterDriverEx)(
        _In_ HANDLE hPrinter,
        _In_opt_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pDriverInfo,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _In_ DWORD dwClientMajorVersion,
        _In_ DWORD dwClientMinorVersion,
        _Out_ PDWORD pdwServerMajorVersion,
        _Out_ PDWORD pdwServerMinorVersion
        );
    BOOL (*fpFindFirstPrinterChangeNotification)(
        _In_ HANDLE hPrinter,
        _In_ DWORD fdwFlags,
        _In_ DWORD fdwOptions,
        _Inout_ HANDLE hNotify,
        _Out_ PDWORD pfdwStatus,
        _In_ PVOID pPrinterNotifyOptions,
        _In_ PVOID pPrinterNotifyInit
        );
    BOOL (*fpFindClosePrinterChangeNotification)(_In_ HANDLE hPrinter);
    BOOL (*fpAddPortEx)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE lpBuffer,
        _In_ LPWSTR lpMonitorName
        );
    BOOL (*fpShutDown)(_In_opt_ LPVOID pvReserved);
    BOOL (*fpRefreshPrinterChangeNotification)(
         _In_ HANDLE hPrinter,
         _In_ DWORD Reserved,
         _In_opt_ PVOID pvReserved,
         _In_ PVOID pPrinterNotifyInfo
         );
    BOOL (*fpOpenPrinterEx)(
         _In_opt_ LPWSTR pPrinterName,
         _Out_ LPHANDLE phPrinter,
         _In_opt_ LPPRINTER_DEFAULTS pDefault,
         _In_reads_opt_(_Inexpressible_(0)) LPBYTE pClientInfo,
         _In_ DWORD Level
         );
    HANDLE (*fpAddPrinterEx)(
         _In_opt_ LPWSTR pName,
         _In_ DWORD Level,
         _In_reads_(_Inexpressible_(0)) LPBYTE pPrinter,
         _In_reads_opt_(_Inexpressible_(0)) LPBYTE pClientInfo,
         _In_ DWORD ClientInfoLevel
         );
    BOOL (*fpSetPort)(
         _In_opt_ LPWSTR pName,
         _In_ LPWSTR pPortName,
         _In_ DWORD Level,
         _In_reads_(_Inexpressible_(0)) LPBYTE pPortInfo
         );
    DWORD (*fpEnumPrinterData)(
        _In_ HANDLE hPrinter,
        _In_ DWORD dwIndex,
        _Out_writes_bytes_to_opt_(cbValueName, *pcbValueName)
                   LPWSTR pValueName,
        _In_ DWORD cbValueName,
        _Out_ LPDWORD pcbValueName,
        _Out_opt_ LPDWORD pType,
        _Out_writes_bytes_to_opt_(cbData, *pcbData)
                   LPBYTE pData,
        _In_ DWORD cbData,
        _Out_ LPDWORD pcbData
        );
    DWORD (*fpDeletePrinterData)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pValueName
        );
    DWORD (*fpClusterSplOpen)(
        _In_ LPCTSTR pszServer,
        _In_ LPCTSTR pszResource,
        _Out_ PHANDLE phSpooler,
        _In_ LPCTSTR pszName,
        _In_ LPCTSTR pszAddress
        );
    DWORD (*fpClusterSplClose)(_In_ HANDLE hSpooler);
    DWORD (*fpClusterSplIsAlive)(_In_ HANDLE hSpooler);
    DWORD (*fpSetPrinterDataEx)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pKeyName,
        _In_ LPCWSTR pValueName,
        _In_ DWORD Type,
        _In_reads_bytes_(cbData)
                            LPBYTE pData,
        _In_ DWORD cbData
        );
    DWORD (*fpGetPrinterDataEx)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pKeyName,
        _In_ LPCWSTR pValueName,
        _Out_opt_ LPDWORD pType,
        _Out_writes_bytes_to_opt_(nSize, *pcbNeeded)
                  LPBYTE pData,
        _In_ DWORD nSize,
        _Out_ LPDWORD pcbNeeded
        );
    DWORD (*fpEnumPrinterDataEx)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pKeyName,
        _Out_writes_bytes_to_opt_(cbEnumValues, *pcbEnumValues)
               LPBYTE pEnumValues,
        _In_ DWORD cbEnumValues,
        _Out_ LPDWORD pcbEnumValues,
        _Out_ LPDWORD pnEnumValues
        );
    DWORD (*fpEnumPrinterKey)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pKeyName,
        _Out_writes_bytes_to_opt_(cbSubkey, *pcbSubkey)
               LPWSTR pSubkey,
        _In_ DWORD cbSubkey,
        _Out_ LPDWORD pcbSubkey
        );
    DWORD (*fpDeletePrinterDataEx)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pKeyName,
        _In_ LPCWSTR pValueName
        );
    DWORD (*fpDeletePrinterKey)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pKeyName
        );
    BOOL (*fpSeekPrinter)(
        _In_ HANDLE hPrinter,
        _In_ LARGE_INTEGER liDistanceToMove,
        _Out_ PLARGE_INTEGER pliNewPointer,
        _In_ DWORD dwMoveMethod,
        _In_ BOOL bWrite
        );
    BOOL (*fpDeletePrinterDriverEx)(
        _In_opt_ LPWSTR pName,
        _In_opt_ LPWSTR pEnvironment,
        _In_ LPWSTR pDriverName,
        _In_ DWORD dwDeleteFlag,
        _In_ DWORD dwVersionNum
        );
    BOOL (*fpAddPerMachineConnection)(
        _In_opt_ LPCWSTR pServer,
        _In_ LPCWSTR pPrinterName,
        _In_ LPCWSTR pPrintServer,
        _In_ LPCWSTR pProvider
        );
    BOOL (*fpDeletePerMachineConnection)(
        _In_opt_ LPCWSTR pServer,
        _In_ LPCWSTR pPrinterName
        );
    BOOL (*fpEnumPerMachineConnections)(
        _In_opt_ LPCWSTR pServer,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
                 LPBYTE pPrinterEnum,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _Out_ LPDWORD pcReturned
        );
    BOOL (*fpXcvData)(
        _In_ HANDLE hXcv,
        _In_ LPCWSTR pszDataName,
        _In_reads_bytes_(cbInputData)
               PBYTE pInputData,
        _In_ DWORD cbInputData,
        _Out_writes_bytes_to_opt_(cbOutputData, *pcbOutputNeeded)
               PBYTE pOutputData,
        _In_ DWORD cbOutputData,
        _Out_ PDWORD pcbOutputNeeded,
        _Out_ PDWORD pdwStatus
        );
    BOOL (*fpAddPrinterDriverEx)(
        _In_opt_ LPWSTR pName,
        _In_ DWORD Level,
        _In_reads_(_Inexpressible_(0)) LPBYTE pDriverInfo,
        _In_ DWORD dwFileCopyFlags
        );
    BOOL (*fpSplReadPrinter)(
        _In_ HANDLE hPrinter,
        _Outptr_result_bytebuffer_(cbBuf)
              LPBYTE *pBuf,
        _In_ DWORD cbBuf
        );
    BOOL (*fpDriverUnloadComplete)(_In_ LPWSTR pDriverFile);
    BOOL (*fpGetSpoolFileInfo)(
        _In_ HANDLE hPrinter,
        _Outptr_result_maybenull_ LPWSTR *pSpoolDir,
        _Out_ LPHANDLE phFile,
        _In_ HANDLE hSpoolerProcess,
        _In_ HANDLE hAppProcess
        );
    BOOL (*fpCommitSpoolData)(
        _In_ HANDLE hPrinter,
        _In_ DWORD cbCommit
        );
    BOOL (*fpCloseSpoolFileHandle)(_In_ HANDLE hPrinter);
    BOOL (*fpFlushPrinter)(
        _In_ HANDLE hPrinter,
        _In_reads_bytes_(cbBuf)
              LPBYTE pBuf,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcWritten,
        _In_ DWORD cSleep
        );
    DWORD (*fpSendRecvBidiData)(
        _In_ HANDLE hPrinter,
        _In_ LPCWSTR pAction,
        _In_ PBIDI_REQUEST_CONTAINER pReqData,
        _Outptr_ PBIDI_RESPONSE_CONTAINER* ppResData
        );
    BOOL (*fpAddPrinterConnection2)(
        _In_ LPCWSTR pName,
        _In_ DWORD dwLevel,
        _In_reads_(_Inexpressible_(0)) PVOID pInfo
        );
    HRESULT (*fpGetPrintClassObject)(
        _In_ PCWSTR,
            const IID&,
        _Outptr_ VOID**
        );
    HRESULT (*fpReportJobProcessingProgress)(
        _In_ HANDLE hPrinter,
        _In_ ULONG jobId,
        _In_ EPrintXPSJobOperation jobOperation,
        _In_ EPrintXPSJobProgress jobProgress
        );
    VOID (*fpEnumAndLogProvidorObjects)(
        _In_ DWORD dwLevel,
        _Out_ VOID *pfOut
        );
    HRESULT (*fpInternalGetPrinterDriver)(
        _In_ HANDLE hPrinter,
        _In_ LPWSTR pEnvironment,
        _In_ DWORD Level,
        _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
               LPBYTE pDriverInfo,
        _In_ DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded,
        _In_ DWORD dwClientMajorVersion,
        _In_ DWORD dwClientMinorVersion,
        _Out_ PDWORD pdwServerMajorVersion,
        _Out_ PDWORD pdwServerMinorVersion
        );
    HRESULT (*fpFindCompatibleDriver)(
        _In_ LPCWSTR pcszPnpId,
        _In_ LPCWSTR pcszPortName,
        _Out_writes_(cchManufacturerName)
              LPWSTR pszManufacturerName,
        _In_ DWORD cchManufacturerName,
        _Out_ LPDWORD pcchRequiredManufacturerNameSize,
        _Out_writes_(cchModelName)
              LPWSTR pszModelName,
        _In_ DWORD cchModelName,
        _Out_ LPDWORD pcchRequiredModelNameSize,
        _Out_ LPDWORD pdwRank0Matches
        );
    DWORD
    (*fpGetJobNamedPropertyValue)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _In_ PCWSTR pszName,
        _Out_ PrintPropertyValue *pValue
        );
    DWORD
    (*fpSetJobNamedProperty)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _In_ const PrintNamedProperty *pProperty
        );
    DWORD
    (*fpDeleteJobNamedProperty)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _In_ PCWSTR pszName
        );
    DWORD
    (*fpEnumJobNamedProperties)(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _Out_ DWORD *pcProperties,
        _Outptr_result_buffer_(*pcProperties)
              PrintNamedProperty **ppProperties
        );
    DWORD
    (WINAPI *fpPowerEvent)(
        _In_ DWORD event,
        _In_opt_ POWERBROADCAST_SETTING *pPowerSetting
        );
    DWORD
    (*fpGetUserPropertyBag)(
        _In_ HANDLE hPrinter,
        _Out_ HKEY *phKey
        );
    BOOL
    (*fpCanShutdown)();
    DWORD
    (*fpLogJobInfoForBranchOffice)(
        _In_ HANDLE hPrinter,
        _In_ PBranchOfficeJobDataContainer pJobDataContainer
        );
    DWORD (*fpRegeneratePrintDeviceCapabilities)(
        _In_ HANDLE hPrinter
        );
}
PRINTPROVIDOR, *LPPRINTPROVIDOR;
BOOL
InitializePrintProvidor(
   _Out_writes_bytes_(cbPrintProvidor)
            LPPRINTPROVIDOR pPrintProvidor,
   _In_ DWORD cbPrintProvidor,
   _In_opt_ LPWSTR pFullRegistryPath
);
typedef struct _PRINTPROCESSOROPENDATA {
    PDEVMODE pDevMode;
    LPWSTR pDatatype;
    LPWSTR pParameters;
    LPWSTR pDocumentName;
    DWORD JobId;
    LPWSTR pOutputFile;
    LPWSTR pPrinterName;
} PRINTPROCESSOROPENDATA, *PPRINTPROCESSOROPENDATA, *LPPRINTPROCESSOROPENDATA;
HANDLE
OpenPrintProcessor(
    _In_ LPWSTR pPrinterName,
    _In_ PPRINTPROCESSOROPENDATA pPrintProcessorOpenData
);
BOOL
PrintDocumentOnPrintProcessor(
    _In_ HANDLE hPrintProcessor,
    _In_ LPWSTR pDocumentName
);
BOOL
ClosePrintProcessor(
    _Inout_ HANDLE hPrintProcessor
);
BOOL
ControlPrintProcessor(
    _In_ HANDLE hPrintProcessor,
    _In_ DWORD Command
);
DWORD
GetPrintProcessorCapabilities(
    _In_ LPTSTR pValueName,
    _In_ DWORD dwAttributes,
    _Out_writes_bytes_(nSize) LPBYTE pData,
    _In_ DWORD nSize,
    _Out_ LPDWORD pcbNeeded
);
    BOOL
    GetJobAttributes(
        _In_ LPWSTR pPrinterName,
        _In_ LPDEVMODEW pDevmode,
        _Out_ PATTRIBUTE_INFO_3 pAttributeInfo
        );
    BOOL
    GetJobAttributesEx(
        _In_ LPWSTR pPrinterName,
        _In_ LPDEVMODEW pDevmode,
        _In_ DWORD dwLevel,
        _Out_writes_bytes_(nSize) LPBYTE pAttributeInfo,
        _In_ DWORD nSize,
        _In_ DWORD dwFlags
        );
    #define FILL_WITH_DEFAULTS 0x1
BOOL
InitializeMonitor(
    _In_ LPWSTR pRegistryRoot
    );
BOOL
OpenPort(
    _In_ LPWSTR pName,
    _Out_ PHANDLE pHandle
    );
BOOL
WritePort(
    _In_ HANDLE hPort,
    _In_reads_bytes_(cbBuf) LPBYTE pBuffer,
                        DWORD cbBuf,
    _Out_ LPDWORD pcbWritten
    );
BOOL
ReadPort(
    _In_ HANDLE hPort,
    _Out_writes_bytes_(cbBuffer) LPBYTE pBuffer,
                            DWORD cbBuffer,
    _Out_ LPDWORD pcbRead
);
BOOL
ClosePort(
    _In_ HANDLE hPort
    );
BOOL
XcvOpenPort(
    _In_ LPCWSTR pszObject,
            ACCESS_MASK GrantedAccess,
    _Out_ PHANDLE phXcv
    );
DWORD
XcvDataPort(
    _In_ HANDLE hXcv,
    _In_ LPCWSTR pszDataName,
    _In_reads_bytes_(cbInputData) PBYTE pInputData,
                                DWORD cbInputData,
    _Out_writes_bytes_(cbOutputData) PBYTE pOutputData,
                                DWORD cbOutputData,
    _Out_ PDWORD pcbOutputNeeded
    );
BOOL
XcvClosePort(
    _In_ HANDLE hXcv
   );
_Success_(return != FALSE)
BOOL
WINAPI
AddPortUI
(
    _In_opt_ PCWSTR pszServer,
    _In_ HWND hWnd,
    _In_ PCWSTR pszMonitorNameIn,
    _Out_opt_ PWSTR *ppszPortNameOut
);
BOOL
WINAPI
ConfigurePortUI
(
    _In_ PCWSTR pszServer,
    _In_ HWND hWnd,
    _In_ PCWSTR pszPortName
);
BOOL
WINAPI
DeletePortUI
(
    _In_ PCWSTR pszServer,
    _In_ HWND hWnd,
    _In_ PCWSTR pszPortName
);
BOOL
SplDeleteSpoolerPortStart(
    _In_ PCWSTR pPortName
    );
BOOL
SplDeleteSpoolerPortEnd(
    _In_ PCWSTR pName,
    _In_ BOOL bDeletePort
    );
    #define HKEYMONITOR HANDLE
typedef struct _MONITORREG {
    DWORD cbSize;
    LONG
    (WINAPI *fpCreateKey)(
        _In_ HKEYMONITOR hcKey,
        _In_ LPCTSTR pszSubKey,
        _In_ DWORD dwOptions,
        _In_ REGSAM samDesired,
        _In_opt_ PSECURITY_ATTRIBUTES pSecurityAttributes,
        _Out_ HKEYMONITOR *phckResult,
        _Out_opt_ PDWORD pdwDisposition,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpOpenKey)(
        _In_ HKEYMONITOR hcKey,
        _In_ LPCTSTR pszSubKey,
        _In_ REGSAM samDesired,
        _Out_ HKEYMONITOR *phkResult,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpCloseKey)(
        _In_ HKEYMONITOR hcKey,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpDeleteKey)(
        _In_ HKEYMONITOR hcKey,
        _In_ LPCTSTR pszSubKey,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpEnumKey)(
        _In_ HKEYMONITOR hcKey,
        _In_ DWORD dwIndex,
        _Inout_updates_to_(*pcchName, *pcchName)
                  LPTSTR pszName,
        _Inout_ PDWORD pcchName,
        _Out_opt_ PFILETIME pftLastWriteTime,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpQueryInfoKey)(
        _In_ HKEYMONITOR hcKey,
        _Out_opt_ PDWORD pcSubKeys,
        _Out_opt_ PDWORD pcbKey,
        _Out_opt_ PDWORD pcValues,
        _Out_opt_ PDWORD pcbValue,
        _Out_opt_ PDWORD pcbData,
        _Out_opt_ PDWORD pcbSecurityDescriptor,
        _Out_opt_ PFILETIME pftLastWriteTime,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpSetValue)(
        _In_ HKEYMONITOR hcKey,
        _In_ LPCTSTR pszValue,
        _In_ DWORD dwType,
        _In_reads_bytes_(cbData)
             const BYTE* pData,
        _In_ DWORD cbData,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpDeleteValue)(
        _In_ HKEYMONITOR hcKey,
        _In_ LPCTSTR pszValue,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpEnumValue)(
        _In_ HKEYMONITOR hcKey,
        _In_ DWORD dwIndex,
        _Inout_updates_to_(*pcbValue, *pcbValue)
                  LPTSTR pszValue,
        _Inout_ PDWORD pcbValue,
        _Out_opt_ PDWORD pTyp,
        _Out_writes_bytes_to_opt_(*pcbData, *pcbData)
                  PBYTE pData,
        _Inout_ PDWORD pcbData,
        _In_ HANDLE hSpooler
        );
    LONG
    (WINAPI *fpQueryValue)(
        _In_ HKEYMONITOR hcKey,
        _In_ LPCTSTR pszValue,
        _Out_opt_ PDWORD pType,
        _Out_writes_bytes_to_opt_(*pcbData, *pcbData)
                  PBYTE pData,
        _Inout_ PDWORD pcbData,
        _In_ HANDLE hSpooler
        );
} MONITORREG, *PMONITORREG;
typedef struct _MONITORINIT {
    DWORD cbSize;
    HANDLE hSpooler;
    HKEYMONITOR hckRegistryRoot;
    PMONITORREG pMonitorReg;
    BOOL bLocal;
    LPCWSTR pszServerName;
} MONITORINIT, *PMONITORINIT;
typedef struct _MONITOR
{
    BOOL (WINAPI *pfnEnumPorts)
    (
    _In_opt_ LPWSTR pName,
    _In_ DWORD Level,
    _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
             LPBYTE pPorts,
    _In_ DWORD cbBuf,
    _Out_ LPDWORD pcbNeeded,
    _Out_ LPDWORD pcReturned
    );
    BOOL (WINAPI *pfnOpenPort)
    (
    _In_ LPWSTR pName,
    _Out_ PHANDLE pHandle
    );
    BOOL (WINAPI *pfnOpenPortEx)
    (
    _In_ LPWSTR pPortName,
    _In_ LPWSTR pPrinterName,
    _Out_ PHANDLE pHandle,
    _In_ struct _MONITOR FAR *pMonitor
    );
    BOOL (WINAPI *pfnStartDocPort)
    (
    _In_ HANDLE hPort,
    _In_ LPWSTR pPrinterName,
    _In_ DWORD JobId,
    _In_ DWORD Level,
    _In_reads_(_Inexpressible_(0))
            LPBYTE pDocInfo
    );
    BOOL (WINAPI *pfnWritePort)
    (
    _In_ HANDLE hPort,
    _In_reads_bytes_(cbBuf)
            LPBYTE pBuffer,
    _In_ DWORD cbBuf,
    _Out_ LPDWORD pcbWritten
    );
    BOOL (WINAPI *pfnReadPort)
    (
    _In_ HANDLE hPort,
    _Out_writes_bytes_to_(cbBuffer, *pcbRead)
            LPBYTE pBuffer,
    _In_ DWORD cbBuffer,
    _Out_ LPDWORD pcbRead
    );
    BOOL (WINAPI *pfnEndDocPort)
    (
    _In_ HANDLE hPort
    );
    BOOL (WINAPI *pfnClosePort)
    (
    _In_ HANDLE hPort
    );
    BOOL (WINAPI *pfnAddPort)
    (
    _In_ LPWSTR pName,
    _In_ HWND hWnd,
    _In_ LPWSTR pMonitorName
    );
    BOOL (WINAPI *pfnAddPortEx)
    (
    _In_ LPWSTR pName,
    _In_ DWORD Level,
    _In_reads_(_Inexpressible_(0))
         LPBYTE lpBuffer,
    _In_ LPWSTR lpMonitorName
    );
    BOOL (WINAPI *pfnConfigurePort)
    (
    _In_ LPWSTR pName,
    _In_ HWND hWnd,
    _In_ LPWSTR pPortName
    );
    BOOL (WINAPI *pfnDeletePort)
    (
    _In_ LPWSTR pName,
    _In_ HWND hWnd,
    _In_ LPWSTR pPortName
    );
    BOOL (WINAPI *pfnGetPrinterDataFromPort)
    (
    _In_ HANDLE hPort,
    _In_ DWORD ControlID,
    _In_ LPWSTR pValueName,
    _In_reads_bytes_(cbInBuffer)
          LPWSTR lpInBuffer,
    _In_ DWORD cbInBuffer,
    _Out_writes_bytes_to_opt_(cbOutBuffer, *lpcbReturned)
          LPWSTR lpOutBuffer,
    _In_ DWORD cbOutBuffer,
    _Out_ LPDWORD lpcbReturned
    );
    BOOL (WINAPI *pfnSetPortTimeOuts)
    (
    _In_ HANDLE hPort,
    _In_ LPCOMMTIMEOUTS lpCTO,
    _In_ DWORD reserved
    );
    BOOL (WINAPI *pfnXcvOpenPort)
    (
    _In_ LPCWSTR pszObject,
    _In_ ACCESS_MASK GrantedAccess,
    _Out_ PHANDLE phXcv
    );
    DWORD (WINAPI *pfnXcvDataPort)
    (
    _In_ HANDLE hXcv,
    _In_ LPCWSTR pszDataName,
    _In_reads_bytes_(cbInputData)
          PBYTE pInputData,
    _In_ DWORD cbInputData,
    _Out_writes_bytes_to_opt_(cbOutputData, *pcbOutputNeeded)
          PBYTE pOutputData,
    _In_ DWORD cbOutputData,
    _Out_ PDWORD pcbOutputNeeded
    );
    BOOL (WINAPI *pfnXcvClosePort)
    (
    _In_ HANDLE hXcv
    );
} MONITOR, FAR *LPMONITOR;
typedef struct _MONITOREX
{
    DWORD dwMonitorSize;
    MONITOR Monitor;
} MONITOREX, FAR *LPMONITOREX;
typedef struct _MONITOR2
{
    DWORD cbSize;
    BOOL (WINAPI *pfnEnumPorts)
    (
    _In_ HANDLE hMonitor,
    _In_opt_ LPWSTR pName,
    _In_ DWORD Level,
    _Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
             LPBYTE pPorts,
    _In_ DWORD cbBuf,
    _Out_ LPDWORD pcbNeeded,
    _Out_ LPDWORD pcReturned
    );
    BOOL (WINAPI *pfnOpenPort)
    (
    _In_ HANDLE hMonitor,
    _In_ LPWSTR pName,
    _Out_ PHANDLE pHandle
    );
    BOOL (WINAPI *pfnOpenPortEx)
    (
    _In_ HANDLE hMonitor,
    _In_ HANDLE hMonitorPort,
    _In_ LPWSTR pPortName,
    _In_ LPWSTR pPrinterName,
    _Out_ PHANDLE pHandle,
    _In_ struct _MONITOR2 FAR *pMonitor2
    );
    BOOL (WINAPI *pfnStartDocPort)
    (
    _In_ HANDLE hPort,
    _In_ LPWSTR pPrinterName,
    _In_ DWORD JobId,
    _In_ DWORD Level,
    _In_reads_(_Inexpressible_(0))
            LPBYTE pDocInfo
    );
    BOOL (WINAPI *pfnWritePort)
    (
    _In_ HANDLE hPort,
    _In_reads_bytes_(cbBuf)
            LPBYTE pBuffer,
    _In_ DWORD cbBuf,
    _Out_ LPDWORD pcbWritten
    );
    BOOL (WINAPI *pfnReadPort)
    (
    _In_ HANDLE hPort,
    _Out_writes_bytes_to_opt_(cbBuffer, *pcbRead)
            LPBYTE pBuffer,
    _In_ DWORD cbBuffer,
    _Out_ LPDWORD pcbRead
    );
    BOOL (WINAPI *pfnEndDocPort)
    (
    _In_ HANDLE hPort
    );
    BOOL (WINAPI *pfnClosePort)
    (
    _In_ HANDLE hPort
    );
    BOOL (WINAPI *pfnAddPort)
    (
    _In_ HANDLE hMonitor,
    _In_ LPWSTR pName,
    _In_ HWND hWnd,
    _In_ LPWSTR pMonitorName
    );
    BOOL (WINAPI *pfnAddPortEx)
    (
    _In_ HANDLE hMonitor,
    _In_ LPWSTR pName,
    _In_ DWORD Level,
    _In_reads_(_Inexpressible_(0))
         LPBYTE lpBuffer,
    _In_ LPWSTR lpMonitorName
    );
    BOOL (WINAPI *pfnConfigurePort)
    (
    _In_ HANDLE hMonitor,
    _In_ LPWSTR pName,
    _In_ HWND hWnd,
    _In_ LPWSTR pPortName
    );
    BOOL (WINAPI *pfnDeletePort)
    (
    _In_ HANDLE hMonitor,
    _In_ LPWSTR pName,
    _In_ HWND hWnd,
    _In_ LPWSTR pPortName
    );
    BOOL (WINAPI *pfnGetPrinterDataFromPort)
    (
    _In_ HANDLE hPort,
    _In_ DWORD ControlID,
    _In_ LPWSTR pValueName,
    _In_reads_bytes_(cbInBuffer)
          LPWSTR lpInBuffer,
    _In_ DWORD cbInBuffer,
    _Out_writes_bytes_to_opt_(cbOutBuffer, *lpcbReturned)
          LPWSTR lpOutBuffer,
    _In_ DWORD cbOutBuffer,
    _Out_ LPDWORD lpcbReturned
    );
    BOOL (WINAPI *pfnSetPortTimeOuts)
    (
    _In_ HANDLE hPort,
    _In_ LPCOMMTIMEOUTS lpCTO,
    _In_ DWORD reserved
    );
    BOOL (WINAPI *pfnXcvOpenPort)
    (
    _In_ HANDLE hMonitor,
    _In_ LPCWSTR pszObject,
    _In_ ACCESS_MASK GrantedAccess,
    _Out_ PHANDLE phXcv
    );
    DWORD (WINAPI *pfnXcvDataPort)
    (
    _In_ HANDLE hXcv,
    _In_ LPCWSTR pszDataName,
    _In_reads_bytes_(cbInputData)
          PBYTE pInputData,
    _In_ DWORD cbInputData,
    _Out_writes_bytes_to_opt_(cbOutputData, *pcbOutputNeeded)
          PBYTE pOutputData,
    _In_ DWORD cbOutputData,
    _Out_ PDWORD pcbOutputNeeded
    );
    BOOL (WINAPI *pfnXcvClosePort)
    (
    _In_ HANDLE hXcv
    );
    VOID (WINAPI *pfnShutdown)
    (
    _In_ HANDLE hMonitor
    );
    DWORD (WINAPI *pfnSendRecvBidiDataFromPort)
    (
        _In_ HANDLE hPort,
        _In_ DWORD dwAccessBit,
        _In_ LPCWSTR pAction,
        _In_ PBIDI_REQUEST_CONTAINER pReqData,
        _Outptr_ PBIDI_RESPONSE_CONTAINER *ppResData
    );
    DWORD (WINAPI *pfnNotifyUsedPorts)
    (
        _In_ HANDLE hMonitor,
        _In_ DWORD cPorts,
        _In_reads_(cPorts) PCWSTR *ppszPorts
    );
    DWORD (WINAPI *pfnNotifyUnusedPorts)
    (
        _In_ HANDLE hMonitor,
        _In_ DWORD cPorts,
        _In_reads_(cPorts) PCWSTR *ppszPorts
    );
    DWORD (WINAPI *pfnPowerEvent)
    (
        _In_ HANDLE hMonitor,
        _In_ DWORD event,
        _In_opt_ POWERBROADCAST_SETTING *pSettings
    );
}
MONITOR2, *PMONITOR2, FAR *LPMONITOR2;
    #define MONITOR2_SIZE_WIN2K ( sizeof(DWORD) + (sizeof(PVOID)*18) )
typedef struct _MONITORUI
{
    DWORD dwMonitorUISize;
    BOOL (WINAPI *pfnAddPortUI)
    (
        _At_(return, _Success_(return != 0))
        _In_opt_ PCWSTR pszServer,
        _In_ HWND hWnd,
        _In_ PCWSTR pszMonitorNameIn,
        _Out_opt_ PWSTR *ppszPortNameOut
    );
    BOOL (WINAPI *pfnConfigurePortUI)
    (
        _In_opt_ PCWSTR pName,
        _In_ HWND hWnd,
        _In_ PCWSTR pPortName
    );
    BOOL (WINAPI *pfnDeletePortUI)
    (
        _In_opt_ PCWSTR pszServer,
        _In_ HWND hWnd,
        _In_ PCWSTR pszPortName
    );
} MONITORUI, FAR *PMONITORUI;
HANDLE
CreatePrinterIC(
    _In_ HANDLE hPrinter,
    _In_opt_ LPDEVMODEW pDevMode
    );
BOOL
PlayGdiScriptOnPrinterIC(
    _In_ HANDLE hPrinterIC,
    _In_reads_bytes_(cIn) LPBYTE pIn,
    _In_ DWORD cIn,
    _Out_writes_bytes_(cOut) LPBYTE pOut,
    _In_ DWORD cOut,
    _In_ DWORD ul
    );
BOOL
DeletePrinterIC(
    _In_ HANDLE hPrinterIC
    );
BOOL
DevQueryPrint(
    _In_ HANDLE hPrinter,
    _In_ LPDEVMODE pDevMode,
    _Out_ DWORD* pResID
    );
HANDLE
RevertToPrinterSelf(
    VOID
    );
BOOL
ImpersonatePrinterClient(
    _In_ HANDLE hToken
    );
BOOL
ReplyPrinterChangeNotification(
    _In_ HANDLE hPrinter,
                DWORD fdwChangeFlags,
    _Out_opt_ PDWORD pdwResult,
    _In_opt_ PVOID pPrinterNotifyInfo
    );
BOOL
ReplyPrinterChangeNotificationEx(
    _In_ HANDLE hNotify,
            DWORD dwColor,
            DWORD fdwFlags,
    _Out_ PDWORD pdwResult,
    _In_ PVOID pPrinterNotifyInfo
    );
BOOL
PartialReplyPrinterChangeNotification(
    _In_ HANDLE hPrinter,
    _In_opt_ PPRINTER_NOTIFY_INFO_DATA pDataSrc
    );
PPRINTER_NOTIFY_INFO
RouterAllocPrinterNotifyInfo(
    DWORD cPrinterNotifyInfoData
    );
BOOL
RouterFreePrinterNotifyInfo(
    _In_opt_ PPRINTER_NOTIFY_INFO pInfo
    );
    PBIDI_RESPONSE_CONTAINER
    RouterAllocBidiResponseContainer(
        _In_ DWORD Count
        );
    PVOID
    RouterAllocBidiMem (
        _In_ size_t NumBytes
        );
    DWORD
    RouterFreeBidiResponseContainer(
        _In_ PBIDI_RESPONSE_CONTAINER pData
        );
    VOID
    RouterFreeBidiMem (
        _In_ PVOID pMemPointer
        );
BOOL
AppendPrinterNotifyInfoData(
_In_ PPRINTER_NOTIFY_INFO pInfoDest,
_In_opt_ PPRINTER_NOTIFY_INFO_DATA pDataSrc,
                DWORD fdwFlags
);
    typedef BOOL (CALLBACK *ROUTER_NOTIFY_CALLBACK)(
        _In_ DWORD dwCommand,
        _In_ PVOID pContext,
        _In_ DWORD dwColor,
        _In_ PPRINTER_NOTIFY_INFO pNofityInfo,
        _In_ DWORD fdwFlags,
        _Out_ PDWORD pdwResult
        );
    typedef enum _NOTIFICATION_CALLBACK_COMMANDS
    {
        NOTIFICATION_COMMAND_NOTIFY,
        NOTIFICATION_COMMAND_CONTEXT_ACQUIRE,
        NOTIFICATION_COMMAND_CONTEXT_RELEASE
    } NOTIFICATION_CALLBACK_COMMANDS;
    typedef struct _NOTIFICATION_CONFIG_1
    {
        UINT cbSize;
        DWORD fdwFlags;
        ROUTER_NOTIFY_CALLBACK pfnNotifyCallback;
        PVOID pContext;
    } NOTIFICATION_CONFIG_1, *PNOTIFICATION_CONFIG_1;
    typedef enum _NOTIFICATION_CONFIG_FLAGS
    {
        NOTIFICATION_CONFIG_CREATE_EVENT = 1 << 0,
        NOTIFICATION_CONFIG_REGISTER_CALLBACK = 1 << 1,
        NOTIFICATION_CONFIG_EVENT_TRIGGER = 1 << 2,
        NOTIFICATION_CONFIG_ASYNC_CHANNEL = 1 << 3
    } NOTIFICATION_CONFIG_FLAGS;
DWORD
CallRouterFindFirstPrinterChangeNotification(
    _In_ HANDLE hPrinterRPC,
            DWORD fdwFilterFlags,
            DWORD fdwOptions,
    _In_ HANDLE hNotify,
    _In_ PPRINTER_NOTIFY_OPTIONS pPrinterNotifyOptions
    );
BOOL
ProvidorFindFirstPrinterChangeNotification(
    _In_ HANDLE hPrinter,
                DWORD fdwFlags,
                DWORD fdwOptions,
    _In_ HANDLE hNotify,
    _In_opt_ PVOID pPrinterNotifyOptions,
    _Out_opt_ PVOID pvReserved1
    );
BOOL
ProvidorFindClosePrinterChangeNotification(
    _In_ HANDLE hPrinter
    );
BOOL
SpoolerFindFirstPrinterChangeNotification(
    _In_ HANDLE hPrinter,
                DWORD fdwFilterFlags,
                DWORD fdwOptions,
    _In_ PVOID pPrinterNotifyOptions,
    _In_opt_ PVOID pvReserved,
    _In_ PVOID pNotificationConfig,
    _Out_opt_ PHANDLE phNotify,
    _Out_opt_ PHANDLE phEvent
    );
BOOL
SpoolerFindNextPrinterChangeNotification(
    _In_ HANDLE hPrinter,
    _Out_ LPDWORD pfdwChange,
    _In_opt_ LPVOID pPrinterNotifyOptions,
    _Inout_opt_ LPVOID *ppPrinterNotifyInfo
    );
    BOOL
    SpoolerRefreshPrinterChangeNotification(
    _In_ HANDLE hPrinter,
    _In_ DWORD dwColor,
    _In_ PPRINTER_NOTIFY_OPTIONS pOptions,
    _Inout_opt_ PPRINTER_NOTIFY_INFO *ppInfo
        );
VOID
SpoolerFreePrinterNotifyInfo(
    _In_ PPRINTER_NOTIFY_INFO pInfo
    );
BOOL
SpoolerFindClosePrinterChangeNotification(
    _In_ HANDLE hPrinter
    );
LPMONITOR2
WINAPI
InitializePrintMonitor2(
    _In_ PMONITORINIT pMonitorInit,
    _Out_ PHANDLE phMonitor
    );
BOOL
WINAPI
InitializeMonitorEx(
    _In_ LPWSTR pRegistryRoot,
    _Out_ LPMONITOR pMonitor
    );
LPMONITOREX
WINAPI
InitializePrintMonitor(
    _In_ LPWSTR pRegistryRoot
    );
PMONITORUI
WINAPI
InitializePrintMonitorUI(
    VOID
    );
BOOL
WINAPI
SpoolerCopyFileEvent(
    _In_ LPWSTR pszPrinterName,
    _In_ LPWSTR pszKey,
    _In_ DWORD dwCopyFileEvent
    );
DWORD
WINAPI
GenerateCopyFilePaths(
    _In_ LPCWSTR pszPrinterName,
    _In_ LPCWSTR pszDirectory,
    _In_ LPBYTE pSplClientInfo,
    _In_ DWORD dwLevel,
    _Inout_updates_(*pcchSourceDirSize)
               LPWSTR pszSourceDir,
    _Inout_ LPDWORD pcchSourceDirSize,
    _Inout_updates_(*pcchTargetDirSize)
               LPWSTR pszTargetDir,
    _Inout_ LPDWORD pcchTargetDirSize,
    _In_ DWORD dwFlags
    );
    typedef enum {
        kMessageBox = 0
    } UI_TYPE;
    typedef struct {
        DWORD cbSize;
        LPWSTR pTitle;
        LPWSTR pMessage;
        DWORD Style;
        DWORD dwTimeout;
        BOOL bWait;
    } MESSAGEBOX_PARAMS, *PMESSAGEBOX_PARAMS;
    typedef struct {
        UI_TYPE UIType;
        MESSAGEBOX_PARAMS MessageBoxParams;
    } SHOWUIPARAMS, *PSHOWUIPARAMS;
    BOOL
    SplPromptUIInUsersSession(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _In_ PSHOWUIPARAMS pUIParams,
        _Out_ DWORD *pResponse
        );
    DWORD
    SplIsSessionZero(
        _In_ HANDLE hPrinter,
        _In_ DWORD JobId,
        _Out_ BOOL *pIsSessionZero
        );
    HRESULT
    WINAPI
    AddPrintDeviceObject(
        _In_ HANDLE hPrinter,
        _Out_ HANDLE *phDeviceObject
        );
    HRESULT
    WINAPI
    UpdatePrintDeviceObject(
        _In_ HANDLE hPrinter,
        _In_ HANDLE hDeviceObject
        );
    HRESULT
    WINAPI
    RemovePrintDeviceObject(
        _In_ HANDLE hDeviceObject
        );
}
#pragma warning(default:4201)
#endif
#pragma endregion
