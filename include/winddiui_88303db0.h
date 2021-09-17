#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <compstui.h>
extern "C" {
typedef struct _PRINTPROCESSOR_CAPS_1 {
    DWORD dwLevel;
    DWORD dwNupOptions;
    DWORD dwPageOrderFlags;
    DWORD dwNumberOfCopies;
} PRINTPROCESSOR_CAPS_1, *PPRINTPROCESSOR_CAPS_1;
LONG WINAPI
DrvDevicePropertySheets(
    _In_opt_ PPROPSHEETUI_INFO pPSUIInfo,
    LPARAM lParam
    );
typedef struct _DEVICEPROPERTYHEADER {
    WORD cbSize;
    WORD Flags;
    HANDLE hPrinter;
    LPTSTR pszPrinterName;
} DEVICEPROPERTYHEADER, *PDEVICEPROPERTYHEADER;
LONG WINAPI
DrvDocumentPropertySheets(
    _In_opt_ PPROPSHEETUI_INFO pPSUIInfo,
    LPARAM lParam
    );
typedef struct _DOCUMENTPROPERTYHEADER {
    WORD cbSize;
    WORD Reserved;
    HANDLE hPrinter;
    LPTSTR pszPrinterName;
    PDEVMODE pdmIn;
    PDEVMODE pdmOut;
    DWORD cbOut;
    DWORD fMode;
} DOCUMENTPROPERTYHEADER, *PDOCUMENTPROPERTYHEADER;
_Success_(return == 1)
BOOL WINAPI
DrvConvertDevMode(
    _In_ LPTSTR pPrinterName,
    _In_ PDEVMODE pdmIn,
    _Out_writes_bytes_(*pcbNeeded) PDEVMODE pdmOut,
    _Inout_ PLONG pcbNeeded,
    _In_ DWORD fMode
    );
typedef struct _DEVQUERYPRINT_INFO {
    WORD cbSize;
    WORD Level;
    HANDLE hPrinter;
    DEVMODE *pDevMode;
    LPWSTR pszErrorStr;
    DWORD cchErrorStr;
    DWORD cchNeeded;
    } DEVQUERYPRINT_INFO, *PDEVQUERYPRINT_INFO;
BOOL WINAPI
DevQueryPrintEx(
    _Inout_ PDEVQUERYPRINT_INFO pDQPInfo
    );
typedef struct _DRIVER_UPGRADE_INFO_1 {
    LPTSTR pPrinterName;
    LPTSTR pOldDriverDirectory;
} DRIVER_UPGRADE_INFO_1, *PDRIVER_UPGRADE_INFO_1;
typedef struct _DRIVER_UPGRADE_INFO_2 {
    LPTSTR pPrinterName;
    LPTSTR pOldDriverDirectory;
    DWORD cVersion;
    LPTSTR pName;
    LPTSTR pEnvironment;
    LPTSTR pDriverPath;
    LPTSTR pDataFile;
    LPTSTR pConfigFile;
    LPTSTR pHelpFile;
    LPTSTR pDependentFiles;
    LPTSTR pMonitorName;
    LPTSTR pDefaultDataType;
    LPTSTR pszzPreviousNames;
} DRIVER_UPGRADE_INFO_2, *PDRIVER_UPGRADE_INFO_2;
BOOL WINAPI
DrvUpgradePrinter(
    _In_range_(1, 2) DWORD Level,
    _When_(Level == 1, _In_reads_bytes_opt_(sizeof(DRIVER_UPGRADE_INFO_1)))
    _When_(Level == 2, _In_reads_bytes_opt_(sizeof(DRIVER_UPGRADE_INFO_2)))
                   LPBYTE pDriverUpgradeInfo
    );
typedef struct _DOCEVENT_FILTER {
    UINT cbSize;
    UINT cElementsAllocated;
    UINT cElementsNeeded;
    UINT cElementsReturned;
    DWORD aDocEventCall[ANYSIZE_ARRAY];
} DOCEVENT_FILTER, *PDOCEVENT_FILTER;
typedef struct _DOCEVENT_CREATEDCPRE {
    PWSTR pszDriver;
    PWSTR pszDevice;
    PDEVMODEW pdm;
    BOOL bIC;
} DOCEVENT_CREATEDCPRE, *PDCEVENT_CREATEDCPRE;
typedef struct _DOCEVENT_ESCAPE {
    int iEscape;
    int cjInput;
    PVOID pvInData;
} DOCEVENT_ESCAPE, *PDOCEVENT_ESCAPE;
int WINAPI
DrvDocumentEvent(
    HANDLE hPrinter,
    HDC hdc,
    int iEsc,
    ULONG cbIn,
    _In_reads_bytes_(cbIn) PVOID pvIn,
    ULONG cbOut,
    _Out_writes_bytes_(cbOut) PVOID pvOut
);
typedef struct _PRINTER_EVENT_ATTRIBUTES_INFO {
    DWORD cbSize;
    DWORD dwOldAttributes;
    DWORD dwNewAttributes;
} PRINTER_EVENT_ATTRIBUTES_INFO, *PPRINTER_EVENT_ATTRIBUTES_INFO;
BOOL WINAPI
DrvPrinterEvent(
    _In_ LPWSTR pPrinterName,
    int DriverEvent,
    DWORD Flags,
    LPARAM lParam
);
BOOL WINAPI
DrvDriverEvent(
                            DWORD dwDriverEvent,
    _In_range_(1, 3) DWORD dwLevel,
    _When_(dwLevel == 1, _In_reads_bytes_opt_(sizeof(DRIVER_INFO_1)))
    _When_(dwLevel == 2, _In_reads_bytes_opt_(sizeof(DRIVER_INFO_2)))
    _When_(dwLevel == 3, _In_reads_bytes_opt_(sizeof(DRIVER_INFO_3)))
                            LPBYTE pDriverInfo,
                            LPARAM lParam
);
typedef struct _ATTRIBUTE_INFO_1 {
    DWORD dwJobNumberOfPagesPerSide;
    DWORD dwDrvNumberOfPagesPerSide;
    DWORD dwNupBorderFlags;
    DWORD dwJobPageOrderFlags;
    DWORD dwDrvPageOrderFlags;
    DWORD dwJobNumberOfCopies;
    DWORD dwDrvNumberOfCopies;
} ATTRIBUTE_INFO_1, *PATTRIBUTE_INFO_1;
typedef struct _ATTRIBUTE_INFO_2 {
    DWORD dwJobNumberOfPagesPerSide;
    DWORD dwDrvNumberOfPagesPerSide;
    DWORD dwNupBorderFlags;
    DWORD dwJobPageOrderFlags;
    DWORD dwDrvPageOrderFlags;
    DWORD dwJobNumberOfCopies;
    DWORD dwDrvNumberOfCopies;
    DWORD dwColorOptimization;
} ATTRIBUTE_INFO_2, *PATTRIBUTE_INFO_2;
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
BOOL WINAPI
DrvQueryJobAttributes(
    _In_ HANDLE hPrinter,
    _In_ PDEVMODE pDevMode,
    _In_range_(1, 4) DWORD dwLevel,
    _When_(dwLevel == 1, _Out_writes_bytes_(sizeof(ATTRIBUTE_INFO_1)))
    _When_(dwLevel == 2, _Out_writes_bytes_(sizeof(ATTRIBUTE_INFO_2)))
    _When_(dwLevel == 3, _Out_writes_bytes_(sizeof(ATTRIBUTE_INFO_3)))
    _When_(dwLevel == 4, _Out_writes_bytes_(sizeof(ATTRIBUTE_INFO_4)))
                        LPBYTE lpAttributeInfo
);
BOOL WINAPI
DrvQueryColorProfile(
    _In_ HANDLE hPrinter,
    _In_ PDEVMODEW pdevmode,
    _In_ ULONG ulQueryMode,
    _Out_writes_(*pcbProfileData) VOID *pvProfileData,
    _Inout_ ULONG *pcbProfileData,
    _Out_ FLONG *pflProfileData
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
HANDLE WINAPI
DrvSplStartDoc(
    HANDLE hPrinter,
    DWORD JobId
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
BOOL WINAPI
DrvSplWritePrinter(
    HANDLE hDriver,
    LPVOID pBuf,
    DWORD cbBuf,
    LPDWORD pcWritten
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
VOID WINAPI
DrvSplEndDoc(
    HANDLE hDriver
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
VOID WINAPI
DrvSplClose(
    HANDLE hDriver
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
BOOL WINAPI
DrvSplStartPage(
    HANDLE hDriver
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
BOOL WINAPI
DrvSplEndPage(
    HANDLE hDriver
);
__drv_preferredFunction("DrvDocumentEvent", "Obsolete")
VOID WINAPI
DrvSplAbort(
    HANDLE hDriver
);
DWORD
DrvSplDeviceCaps(
                                                    HANDLE hPrinter,
    _In_ PWSTR pszDeviceName,
                                                    WORD Capability,
    _At_((TCHAR*)pOutput, _Out_writes_opt_(cchBufSize)) PVOID pOutput,
                                                    DWORD cchBufSize,
    _In_opt_ PDEVMODE pDevmode
    );
DWORD
WINAPI
DrvDeviceCapabilities(
    HANDLE hPrinter,
    _In_ PWSTR pszDeviceName,
    WORD Capability,
    _Out_writes_to_opt_(_Inexpressible_("Size of the buffer is dependent on Capability"),_Inexpressible_("Amount filled is dependent on Capability")) PVOID pOutput,
    _In_opt_ PDEVMODE pDevmode
    );
}
#endif
#pragma endregion
