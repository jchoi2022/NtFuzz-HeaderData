#include <winapifamily.h>
#include <prsht.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _PRINTER_INFO_1A {
    DWORD Flags;
    LPSTR pDescription;
    LPSTR pName;
    LPSTR pComment;
} PRINTER_INFO_1A, *PPRINTER_INFO_1A, *LPPRINTER_INFO_1A;
typedef struct _PRINTER_INFO_1W {
    DWORD Flags;
    LPWSTR pDescription;
    LPWSTR pName;
    LPWSTR pComment;
} PRINTER_INFO_1W, *PPRINTER_INFO_1W, *LPPRINTER_INFO_1W;
typedef PRINTER_INFO_1W PRINTER_INFO_1;
typedef PPRINTER_INFO_1W PPRINTER_INFO_1;
typedef LPPRINTER_INFO_1W LPPRINTER_INFO_1;
typedef struct _PRINTER_INFO_2A {
    LPSTR pServerName;
    LPSTR pPrinterName;
    LPSTR pShareName;
    LPSTR pPortName;
    LPSTR pDriverName;
    LPSTR pComment;
    LPSTR pLocation;
    LPDEVMODEA pDevMode;
    LPSTR pSepFile;
    LPSTR pPrintProcessor;
    LPSTR pDatatype;
    LPSTR pParameters;
    PSECURITY_DESCRIPTOR pSecurityDescriptor;
    DWORD Attributes;
    DWORD Priority;
    DWORD DefaultPriority;
    DWORD StartTime;
    DWORD UntilTime;
    DWORD Status;
    DWORD cJobs;
    DWORD AveragePPM;
} PRINTER_INFO_2A, *PPRINTER_INFO_2A, *LPPRINTER_INFO_2A;
typedef struct _PRINTER_INFO_2W {
    LPWSTR pServerName;
    LPWSTR pPrinterName;
    LPWSTR pShareName;
    LPWSTR pPortName;
    LPWSTR pDriverName;
    LPWSTR pComment;
    LPWSTR pLocation;
    LPDEVMODEW pDevMode;
    LPWSTR pSepFile;
    LPWSTR pPrintProcessor;
    LPWSTR pDatatype;
    LPWSTR pParameters;
    PSECURITY_DESCRIPTOR pSecurityDescriptor;
    DWORD Attributes;
    DWORD Priority;
    DWORD DefaultPriority;
    DWORD StartTime;
    DWORD UntilTime;
    DWORD Status;
    DWORD cJobs;
    DWORD AveragePPM;
} PRINTER_INFO_2W, *PPRINTER_INFO_2W, *LPPRINTER_INFO_2W;
typedef PRINTER_INFO_2W PRINTER_INFO_2;
typedef PPRINTER_INFO_2W PPRINTER_INFO_2;
typedef LPPRINTER_INFO_2W LPPRINTER_INFO_2;
typedef struct _PRINTER_INFO_3 {
    PSECURITY_DESCRIPTOR pSecurityDescriptor;
} PRINTER_INFO_3, *PPRINTER_INFO_3, *LPPRINTER_INFO_3;
typedef struct _PRINTER_INFO_4A {
    LPSTR pPrinterName;
    LPSTR pServerName;
    DWORD Attributes;
} PRINTER_INFO_4A, *PPRINTER_INFO_4A, *LPPRINTER_INFO_4A;
typedef struct _PRINTER_INFO_4W {
    LPWSTR pPrinterName;
    LPWSTR pServerName;
    DWORD Attributes;
} PRINTER_INFO_4W, *PPRINTER_INFO_4W, *LPPRINTER_INFO_4W;
typedef PRINTER_INFO_4W PRINTER_INFO_4;
typedef PPRINTER_INFO_4W PPRINTER_INFO_4;
typedef LPPRINTER_INFO_4W LPPRINTER_INFO_4;
typedef struct _PRINTER_INFO_5A {
    LPSTR pPrinterName;
    LPSTR pPortName;
    DWORD Attributes;
    DWORD DeviceNotSelectedTimeout;
    DWORD TransmissionRetryTimeout;
} PRINTER_INFO_5A, *PPRINTER_INFO_5A, *LPPRINTER_INFO_5A;
typedef struct _PRINTER_INFO_5W {
    LPWSTR pPrinterName;
    LPWSTR pPortName;
    DWORD Attributes;
    DWORD DeviceNotSelectedTimeout;
    DWORD TransmissionRetryTimeout;
} PRINTER_INFO_5W, *PPRINTER_INFO_5W, *LPPRINTER_INFO_5W;
typedef PRINTER_INFO_5W PRINTER_INFO_5;
typedef PPRINTER_INFO_5W PPRINTER_INFO_5;
typedef LPPRINTER_INFO_5W LPPRINTER_INFO_5;
typedef struct _PRINTER_INFO_6 {
    DWORD dwStatus;
} PRINTER_INFO_6, *PPRINTER_INFO_6, *LPPRINTER_INFO_6;
typedef struct _PRINTER_INFO_7A {
  LPSTR pszObjectGUID;
  DWORD dwAction;
} PRINTER_INFO_7A, *PPRINTER_INFO_7A, *LPPRINTER_INFO_7A;
typedef struct _PRINTER_INFO_7W {
  LPWSTR pszObjectGUID;
  DWORD dwAction;
} PRINTER_INFO_7W, *PPRINTER_INFO_7W, *LPPRINTER_INFO_7W;
typedef PRINTER_INFO_7W PRINTER_INFO_7;
typedef PPRINTER_INFO_7W PPRINTER_INFO_7;
typedef LPPRINTER_INFO_7W LPPRINTER_INFO_7;
typedef struct _PRINTER_INFO_8A {
    LPDEVMODEA pDevMode;
} PRINTER_INFO_8A, *PPRINTER_INFO_8A, *LPPRINTER_INFO_8A;
typedef struct _PRINTER_INFO_8W {
    LPDEVMODEW pDevMode;
} PRINTER_INFO_8W, *PPRINTER_INFO_8W, *LPPRINTER_INFO_8W;
typedef PRINTER_INFO_8W PRINTER_INFO_8;
typedef PPRINTER_INFO_8W PPRINTER_INFO_8;
typedef LPPRINTER_INFO_8W LPPRINTER_INFO_8;
typedef struct _PRINTER_INFO_9A {
    LPDEVMODEA pDevMode;
} PRINTER_INFO_9A, *PPRINTER_INFO_9A, *LPPRINTER_INFO_9A;
typedef struct _PRINTER_INFO_9W {
    LPDEVMODEW pDevMode;
} PRINTER_INFO_9W, *PPRINTER_INFO_9W, *LPPRINTER_INFO_9W;
typedef PRINTER_INFO_9W PRINTER_INFO_9;
typedef PPRINTER_INFO_9W PPRINTER_INFO_9;
typedef LPPRINTER_INFO_9W LPPRINTER_INFO_9;
    #define PRINTER_ATTRIBUTE_FAX 0x00004000
    #define PRINTER_ATTRIBUTE_TS 0x00008000
    #define PRINTER_ATTRIBUTE_PUSHED_USER 0x00020000
    #define PRINTER_ATTRIBUTE_PUSHED_MACHINE 0x00040000
    #define PRINTER_ATTRIBUTE_MACHINE 0x00080000
    #define PRINTER_ATTRIBUTE_FRIENDLY_NAME 0x00100000
    #define PRINTER_ATTRIBUTE_TS_GENERIC_DRIVER 0x00200000
    #define PRINTER_ATTRIBUTE_PER_USER 0x00400000
    #define PRINTER_ATTRIBUTE_ENTERPRISE_CLOUD 0x00800000
typedef struct _JOB_INFO_1A {
   DWORD JobId;
   LPSTR pPrinterName;
   LPSTR pMachineName;
   LPSTR pUserName;
   LPSTR pDocument;
   LPSTR pDatatype;
   LPSTR pStatus;
   DWORD Status;
   DWORD Priority;
   DWORD Position;
   DWORD TotalPages;
   DWORD PagesPrinted;
   SYSTEMTIME Submitted;
} JOB_INFO_1A, *PJOB_INFO_1A, *LPJOB_INFO_1A;
typedef struct _JOB_INFO_1W {
   DWORD JobId;
   LPWSTR pPrinterName;
   LPWSTR pMachineName;
   LPWSTR pUserName;
   LPWSTR pDocument;
   LPWSTR pDatatype;
   LPWSTR pStatus;
   DWORD Status;
   DWORD Priority;
   DWORD Position;
   DWORD TotalPages;
   DWORD PagesPrinted;
   SYSTEMTIME Submitted;
} JOB_INFO_1W, *PJOB_INFO_1W, *LPJOB_INFO_1W;
typedef JOB_INFO_1W JOB_INFO_1;
typedef PJOB_INFO_1W PJOB_INFO_1;
typedef LPJOB_INFO_1W LPJOB_INFO_1;
typedef struct _JOB_INFO_2A {
   DWORD JobId;
   LPSTR pPrinterName;
   LPSTR pMachineName;
   LPSTR pUserName;
   LPSTR pDocument;
   LPSTR pNotifyName;
   LPSTR pDatatype;
   LPSTR pPrintProcessor;
   LPSTR pParameters;
   LPSTR pDriverName;
   LPDEVMODEA pDevMode;
   LPSTR pStatus;
   PSECURITY_DESCRIPTOR pSecurityDescriptor;
   DWORD Status;
   DWORD Priority;
   DWORD Position;
   DWORD StartTime;
   DWORD UntilTime;
   DWORD TotalPages;
   DWORD Size;
   SYSTEMTIME Submitted;
   DWORD Time;
   DWORD PagesPrinted;
} JOB_INFO_2A, *PJOB_INFO_2A, *LPJOB_INFO_2A;
typedef struct _JOB_INFO_2W {
   DWORD JobId;
   LPWSTR pPrinterName;
   LPWSTR pMachineName;
   LPWSTR pUserName;
   LPWSTR pDocument;
   LPWSTR pNotifyName;
   LPWSTR pDatatype;
   LPWSTR pPrintProcessor;
   LPWSTR pParameters;
   LPWSTR pDriverName;
   LPDEVMODEW pDevMode;
   LPWSTR pStatus;
   PSECURITY_DESCRIPTOR pSecurityDescriptor;
   DWORD Status;
   DWORD Priority;
   DWORD Position;
   DWORD StartTime;
   DWORD UntilTime;
   DWORD TotalPages;
   DWORD Size;
   SYSTEMTIME Submitted;
   DWORD Time;
   DWORD PagesPrinted;
} JOB_INFO_2W, *PJOB_INFO_2W, *LPJOB_INFO_2W;
typedef JOB_INFO_2W JOB_INFO_2;
typedef PJOB_INFO_2W PJOB_INFO_2;
typedef LPJOB_INFO_2W LPJOB_INFO_2;
typedef struct _JOB_INFO_3 {
    DWORD JobId;
    DWORD NextJobId;
    DWORD Reserved;
} JOB_INFO_3, *PJOB_INFO_3, *LPJOB_INFO_3;
typedef struct _JOB_INFO_4A {
   DWORD JobId;
   LPSTR pPrinterName;
   LPSTR pMachineName;
   LPSTR pUserName;
   LPSTR pDocument;
   LPSTR pNotifyName;
   LPSTR pDatatype;
   LPSTR pPrintProcessor;
   LPSTR pParameters;
   LPSTR pDriverName;
   LPDEVMODEA pDevMode;
   LPSTR pStatus;
   PSECURITY_DESCRIPTOR pSecurityDescriptor;
   DWORD Status;
   DWORD Priority;
   DWORD Position;
   DWORD StartTime;
   DWORD UntilTime;
   DWORD TotalPages;
   DWORD Size;
   SYSTEMTIME Submitted;
   DWORD Time;
   DWORD PagesPrinted;
   LONG SizeHigh;
} JOB_INFO_4A, *PJOB_INFO_4A, *LPJOB_INFO_4A;
typedef struct _JOB_INFO_4W {
   DWORD JobId;
   LPWSTR pPrinterName;
   LPWSTR pMachineName;
   LPWSTR pUserName;
   LPWSTR pDocument;
   LPWSTR pNotifyName;
   LPWSTR pDatatype;
   LPWSTR pPrintProcessor;
   LPWSTR pParameters;
   LPWSTR pDriverName;
   LPDEVMODEW pDevMode;
   LPWSTR pStatus;
   PSECURITY_DESCRIPTOR pSecurityDescriptor;
   DWORD Status;
   DWORD Priority;
   DWORD Position;
   DWORD StartTime;
   DWORD UntilTime;
   DWORD TotalPages;
   DWORD Size;
   SYSTEMTIME Submitted;
   DWORD Time;
   DWORD PagesPrinted;
   LONG SizeHigh;
} JOB_INFO_4W, *PJOB_INFO_4W, *LPJOB_INFO_4W;
typedef JOB_INFO_4W JOB_INFO_4;
typedef PJOB_INFO_4W PJOB_INFO_4;
typedef LPJOB_INFO_4W LPJOB_INFO_4;
    #define JOB_CONTROL_RETAIN 8
    #define JOB_CONTROL_RELEASE 9
    #define JOB_STATUS_COMPLETE 0x00001000
    #define JOB_STATUS_RETAINED 0x00002000
    #define JOB_STATUS_RENDERING_LOCALLY 0x00004000
typedef struct _ADDJOB_INFO_1A {
    LPSTR Path;
    DWORD JobId;
} ADDJOB_INFO_1A, *PADDJOB_INFO_1A, *LPADDJOB_INFO_1A;
typedef struct _ADDJOB_INFO_1W {
    LPWSTR Path;
    DWORD JobId;
} ADDJOB_INFO_1W, *PADDJOB_INFO_1W, *LPADDJOB_INFO_1W;
typedef ADDJOB_INFO_1W ADDJOB_INFO_1;
typedef PADDJOB_INFO_1W PADDJOB_INFO_1;
typedef LPADDJOB_INFO_1W LPADDJOB_INFO_1;
typedef struct _DRIVER_INFO_1A {
    LPSTR pName;
} DRIVER_INFO_1A, *PDRIVER_INFO_1A, *LPDRIVER_INFO_1A;
typedef struct _DRIVER_INFO_1W {
    LPWSTR pName;
} DRIVER_INFO_1W, *PDRIVER_INFO_1W, *LPDRIVER_INFO_1W;
typedef DRIVER_INFO_1W DRIVER_INFO_1;
typedef PDRIVER_INFO_1W PDRIVER_INFO_1;
typedef LPDRIVER_INFO_1W LPDRIVER_INFO_1;
typedef struct _DRIVER_INFO_2A {
    DWORD cVersion;
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDriverPath;
    LPSTR pDataFile;
    LPSTR pConfigFile;
} DRIVER_INFO_2A, *PDRIVER_INFO_2A, *LPDRIVER_INFO_2A;
typedef struct _DRIVER_INFO_2W {
    DWORD cVersion;
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDriverPath;
    LPWSTR pDataFile;
    LPWSTR pConfigFile;
} DRIVER_INFO_2W, *PDRIVER_INFO_2W, *LPDRIVER_INFO_2W;
typedef DRIVER_INFO_2W DRIVER_INFO_2;
typedef PDRIVER_INFO_2W PDRIVER_INFO_2;
typedef LPDRIVER_INFO_2W LPDRIVER_INFO_2;
typedef struct _DRIVER_INFO_3A {
    DWORD cVersion;
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDriverPath;
    LPSTR pDataFile;
    LPSTR pConfigFile;
    LPSTR pHelpFile;
    LPSTR pDependentFiles;
    LPSTR pMonitorName;
    LPSTR pDefaultDataType;
} DRIVER_INFO_3A, *PDRIVER_INFO_3A, *LPDRIVER_INFO_3A;
typedef struct _DRIVER_INFO_3W {
    DWORD cVersion;
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDriverPath;
    LPWSTR pDataFile;
    LPWSTR pConfigFile;
    LPWSTR pHelpFile;
    LPWSTR pDependentFiles;
    LPWSTR pMonitorName;
    LPWSTR pDefaultDataType;
} DRIVER_INFO_3W, *PDRIVER_INFO_3W, *LPDRIVER_INFO_3W;
typedef DRIVER_INFO_3W DRIVER_INFO_3;
typedef PDRIVER_INFO_3W PDRIVER_INFO_3;
typedef LPDRIVER_INFO_3W LPDRIVER_INFO_3;
typedef struct _DRIVER_INFO_4A {
    DWORD cVersion;
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDriverPath;
    LPSTR pDataFile;
    LPSTR pConfigFile;
    LPSTR pHelpFile;
    LPSTR pDependentFiles;
    LPSTR pMonitorName;
    LPSTR pDefaultDataType;
    LPSTR pszzPreviousNames;
} DRIVER_INFO_4A, *PDRIVER_INFO_4A, *LPDRIVER_INFO_4A;
typedef struct _DRIVER_INFO_4W {
    DWORD cVersion;
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDriverPath;
    LPWSTR pDataFile;
    LPWSTR pConfigFile;
    LPWSTR pHelpFile;
    LPWSTR pDependentFiles;
    LPWSTR pMonitorName;
    LPWSTR pDefaultDataType;
    LPWSTR pszzPreviousNames;
} DRIVER_INFO_4W, *PDRIVER_INFO_4W, *LPDRIVER_INFO_4W;
typedef DRIVER_INFO_4W DRIVER_INFO_4;
typedef PDRIVER_INFO_4W PDRIVER_INFO_4;
typedef LPDRIVER_INFO_4W LPDRIVER_INFO_4;
typedef struct _DRIVER_INFO_5A {
    DWORD cVersion;
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDriverPath;
    LPSTR pDataFile;
    LPSTR pConfigFile;
    DWORD dwDriverAttributes;
    DWORD dwConfigVersion;
    DWORD dwDriverVersion;
} DRIVER_INFO_5A, *PDRIVER_INFO_5A, *LPDRIVER_INFO_5A;
typedef struct _DRIVER_INFO_5W {
    DWORD cVersion;
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDriverPath;
    LPWSTR pDataFile;
    LPWSTR pConfigFile;
    DWORD dwDriverAttributes;
    DWORD dwConfigVersion;
    DWORD dwDriverVersion;
} DRIVER_INFO_5W, *PDRIVER_INFO_5W, *LPDRIVER_INFO_5W;
typedef DRIVER_INFO_5W DRIVER_INFO_5;
typedef PDRIVER_INFO_5W PDRIVER_INFO_5;
typedef LPDRIVER_INFO_5W LPDRIVER_INFO_5;
typedef struct _DRIVER_INFO_6A {
    DWORD cVersion;
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDriverPath;
    LPSTR pDataFile;
    LPSTR pConfigFile;
    LPSTR pHelpFile;
    LPSTR pDependentFiles;
    LPSTR pMonitorName;
    LPSTR pDefaultDataType;
    LPSTR pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    LPSTR pszMfgName;
    LPSTR pszOEMUrl;
    LPSTR pszHardwareID;
    LPSTR pszProvider;
} DRIVER_INFO_6A, *PDRIVER_INFO_6A, *LPDRIVER_INFO_6A;
typedef struct _DRIVER_INFO_6W {
    DWORD cVersion;
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDriverPath;
    LPWSTR pDataFile;
    LPWSTR pConfigFile;
    LPWSTR pHelpFile;
    LPWSTR pDependentFiles;
    LPWSTR pMonitorName;
    LPWSTR pDefaultDataType;
    LPWSTR pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    LPWSTR pszMfgName;
    LPWSTR pszOEMUrl;
    LPWSTR pszHardwareID;
    LPWSTR pszProvider;
} DRIVER_INFO_6W, *PDRIVER_INFO_6W, *LPDRIVER_INFO_6W;
typedef DRIVER_INFO_6W DRIVER_INFO_6;
typedef PDRIVER_INFO_6W PDRIVER_INFO_6;
typedef LPDRIVER_INFO_6W LPDRIVER_INFO_6;
typedef struct _DRIVER_INFO_8A {
    DWORD cVersion;
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDriverPath;
    LPSTR pDataFile;
    LPSTR pConfigFile;
    LPSTR pHelpFile;
    LPSTR pDependentFiles;
    LPSTR pMonitorName;
    LPSTR pDefaultDataType;
    LPSTR pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    LPSTR pszMfgName;
    LPSTR pszOEMUrl;
    LPSTR pszHardwareID;
    LPSTR pszProvider;
    LPSTR pszPrintProcessor;
    LPSTR pszVendorSetup;
    LPSTR pszzColorProfiles;
    LPSTR pszInfPath;
    DWORD dwPrinterDriverAttributes;
    LPSTR pszzCoreDriverDependencies;
    FILETIME ftMinInboxDriverVerDate;
    DWORDLONG dwlMinInboxDriverVerVersion;
} DRIVER_INFO_8A, *PDRIVER_INFO_8A, *LPDRIVER_INFO_8A;
typedef struct _DRIVER_INFO_8W {
    DWORD cVersion;
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDriverPath;
    LPWSTR pDataFile;
    LPWSTR pConfigFile;
    LPWSTR pHelpFile;
    LPWSTR pDependentFiles;
    LPWSTR pMonitorName;
    LPWSTR pDefaultDataType;
    LPWSTR pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    LPWSTR pszMfgName;
    LPWSTR pszOEMUrl;
    LPWSTR pszHardwareID;
    LPWSTR pszProvider;
    LPWSTR pszPrintProcessor;
    LPWSTR pszVendorSetup;
    LPWSTR pszzColorProfiles;
    LPWSTR pszInfPath;
    DWORD dwPrinterDriverAttributes;
    LPWSTR pszzCoreDriverDependencies;
    FILETIME ftMinInboxDriverVerDate;
    DWORDLONG dwlMinInboxDriverVerVersion;
} DRIVER_INFO_8W, *PDRIVER_INFO_8W, *LPDRIVER_INFO_8W;
typedef DRIVER_INFO_8W DRIVER_INFO_8;
typedef PDRIVER_INFO_8W PDRIVER_INFO_8;
typedef LPDRIVER_INFO_8W LPDRIVER_INFO_8;
    #define APD_COPY_FROM_DIRECTORY 0x00000010
typedef struct _DOC_INFO_1A {
    LPSTR pDocName;
    LPSTR pOutputFile;
    LPSTR pDatatype;
} DOC_INFO_1A, *PDOC_INFO_1A, *LPDOC_INFO_1A;
typedef struct _DOC_INFO_1W {
    LPWSTR pDocName;
    LPWSTR pOutputFile;
    LPWSTR pDatatype;
} DOC_INFO_1W, *PDOC_INFO_1W, *LPDOC_INFO_1W;
typedef DOC_INFO_1W DOC_INFO_1;
typedef PDOC_INFO_1W PDOC_INFO_1;
typedef LPDOC_INFO_1W LPDOC_INFO_1;
typedef struct _FORM_INFO_1A {
    DWORD Flags;
    LPSTR pName;
    SIZEL Size;
    RECTL ImageableArea;
} FORM_INFO_1A, *PFORM_INFO_1A, *LPFORM_INFO_1A;
typedef struct _FORM_INFO_1W {
    DWORD Flags;
    LPWSTR pName;
    SIZEL Size;
    RECTL ImageableArea;
} FORM_INFO_1W, *PFORM_INFO_1W, *LPFORM_INFO_1W;
typedef FORM_INFO_1W FORM_INFO_1;
typedef PFORM_INFO_1W PFORM_INFO_1;
typedef LPFORM_INFO_1W LPFORM_INFO_1;
    #define STRING_NONE 0x00000001
    #define STRING_MUIDLL 0x00000002
    #define STRING_LANGPAIR 0x00000004
    #define MAX_FORM_KEYWORD_LENGTH 63+1
    typedef struct _FORM_INFO_2A {
        DWORD Flags;
        LPCSTR pName;
        SIZEL Size;
        RECTL ImageableArea;
        LPCSTR pKeyword;
        DWORD StringType;
        LPCSTR pMuiDll;
        DWORD dwResourceId;
        LPCSTR pDisplayName;
        LANGID wLangId;
    } FORM_INFO_2A, *PFORM_INFO_2A, *LPFORM_INFO_2A;
    typedef struct _FORM_INFO_2W {
        DWORD Flags;
        LPCWSTR pName;
        SIZEL Size;
        RECTL ImageableArea;
        LPCSTR pKeyword;
        DWORD StringType;
        LPCWSTR pMuiDll;
        DWORD dwResourceId;
        LPCWSTR pDisplayName;
        LANGID wLangId;
    } FORM_INFO_2W, *PFORM_INFO_2W, *LPFORM_INFO_2W;
typedef FORM_INFO_2W FORM_INFO_2;
typedef PFORM_INFO_2W PFORM_INFO_2;
typedef LPFORM_INFO_2W LPFORM_INFO_2;
typedef struct _DOC_INFO_2A {
    LPSTR pDocName;
    LPSTR pOutputFile;
    LPSTR pDatatype;
    DWORD dwMode;
    DWORD JobId;
} DOC_INFO_2A, *PDOC_INFO_2A, *LPDOC_INFO_2A;
typedef struct _DOC_INFO_2W {
    LPWSTR pDocName;
    LPWSTR pOutputFile;
    LPWSTR pDatatype;
    DWORD dwMode;
    DWORD JobId;
} DOC_INFO_2W, *PDOC_INFO_2W, *LPDOC_INFO_2W;
typedef DOC_INFO_2W DOC_INFO_2;
typedef PDOC_INFO_2W PDOC_INFO_2;
typedef LPDOC_INFO_2W LPDOC_INFO_2;
typedef struct _DOC_INFO_3A {
    LPSTR pDocName;
    LPSTR pOutputFile;
    LPSTR pDatatype;
    DWORD dwFlags;
} DOC_INFO_3A, *PDOC_INFO_3A, *LPDOC_INFO_3A;
typedef struct _DOC_INFO_3W {
    LPWSTR pDocName;
    LPWSTR pOutputFile;
    LPWSTR pDatatype;
    DWORD dwFlags;
} DOC_INFO_3W, *PDOC_INFO_3W, *LPDOC_INFO_3W;
typedef DOC_INFO_3W DOC_INFO_3;
typedef PDOC_INFO_3W PDOC_INFO_3;
typedef LPDOC_INFO_3W LPDOC_INFO_3;
typedef struct _PRINTPROCESSOR_INFO_1A {
    LPSTR pName;
} PRINTPROCESSOR_INFO_1A, *PPRINTPROCESSOR_INFO_1A, *LPPRINTPROCESSOR_INFO_1A;
typedef struct _PRINTPROCESSOR_INFO_1W {
    LPWSTR pName;
} PRINTPROCESSOR_INFO_1W, *PPRINTPROCESSOR_INFO_1W, *LPPRINTPROCESSOR_INFO_1W;
typedef PRINTPROCESSOR_INFO_1W PRINTPROCESSOR_INFO_1;
typedef PPRINTPROCESSOR_INFO_1W PPRINTPROCESSOR_INFO_1;
typedef LPPRINTPROCESSOR_INFO_1W LPPRINTPROCESSOR_INFO_1;
    typedef struct _PRINTPROCESSOR_CAPS_1 {
        DWORD dwLevel;
        DWORD dwNupOptions;
        DWORD dwPageOrderFlags;
        DWORD dwNumberOfCopies;
    } PRINTPROCESSOR_CAPS_1, *PPRINTPROCESSOR_CAPS_1;
    #define NORMAL_PRINT ( 0x00000000 )
    #define REVERSE_PRINT ( 0x00000001 )
    typedef struct _PRINTPROCESSOR_CAPS_2 {
        DWORD dwLevel;
        DWORD dwNupOptions;
        DWORD dwPageOrderFlags;
        DWORD dwNumberOfCopies;
        DWORD dwDuplexHandlingCaps;
        DWORD dwNupDirectionCaps;
        DWORD dwNupBorderCaps;
        DWORD dwBookletHandlingCaps;
        DWORD dwScalingCaps;
    } PRINTPROCESSOR_CAPS_2, *PPRINTPROCESSOR_CAPS_2;
    #define PPCAPS_RIGHT_THEN_DOWN ( 0x00000001 )
    #define PPCAPS_DOWN_THEN_RIGHT ( 0x00000001 << 1 )
    #define PPCAPS_LEFT_THEN_DOWN ( 0x00000001 << 2 )
    #define PPCAPS_DOWN_THEN_LEFT ( 0x00000001 << 3 )
    #define PPCAPS_BORDER_PRINT ( 0x00000001 )
    #define PPCAPS_BOOKLET_EDGE ( 0x00000001 )
    #define PPCAPS_REVERSE_PAGES_FOR_REVERSE_DUPLEX ( 0x00000001 )
    #define PPCAPS_DONT_SEND_EXTRA_PAGES_FOR_DUPLEX ( 0x00000001 << 1 )
    #define PPCAPS_SQUARE_SCALING ( 0x00000001 )
typedef struct _PORT_INFO_1A {
    LPSTR pName;
} PORT_INFO_1A, *PPORT_INFO_1A, *LPPORT_INFO_1A;
typedef struct _PORT_INFO_1W {
    LPWSTR pName;
} PORT_INFO_1W, *PPORT_INFO_1W, *LPPORT_INFO_1W;
typedef PORT_INFO_1W PORT_INFO_1;
typedef PPORT_INFO_1W PPORT_INFO_1;
typedef LPPORT_INFO_1W LPPORT_INFO_1;
typedef struct _PORT_INFO_2A {
    LPSTR pPortName;
    LPSTR pMonitorName;
    LPSTR pDescription;
    DWORD fPortType;
    DWORD Reserved;
} PORT_INFO_2A, *PPORT_INFO_2A, *LPPORT_INFO_2A;
typedef struct _PORT_INFO_2W {
    LPWSTR pPortName;
    LPWSTR pMonitorName;
    LPWSTR pDescription;
    DWORD fPortType;
    DWORD Reserved;
} PORT_INFO_2W, *PPORT_INFO_2W, *LPPORT_INFO_2W;
typedef PORT_INFO_2W PORT_INFO_2;
typedef PPORT_INFO_2W PPORT_INFO_2;
typedef LPPORT_INFO_2W LPPORT_INFO_2;
typedef struct _PORT_INFO_3A {
    DWORD dwStatus;
    LPSTR pszStatus;
    DWORD dwSeverity;
} PORT_INFO_3A, *PPORT_INFO_3A, *LPPORT_INFO_3A;
typedef struct _PORT_INFO_3W {
    DWORD dwStatus;
    LPWSTR pszStatus;
    DWORD dwSeverity;
} PORT_INFO_3W, *PPORT_INFO_3W, *LPPORT_INFO_3W;
typedef PORT_INFO_3W PORT_INFO_3;
typedef PPORT_INFO_3W PPORT_INFO_3;
typedef LPPORT_INFO_3W LPPORT_INFO_3;
typedef struct _MONITOR_INFO_1A{
    LPSTR pName;
} MONITOR_INFO_1A, *PMONITOR_INFO_1A, *LPMONITOR_INFO_1A;
typedef struct _MONITOR_INFO_1W{
    LPWSTR pName;
} MONITOR_INFO_1W, *PMONITOR_INFO_1W, *LPMONITOR_INFO_1W;
typedef MONITOR_INFO_1W MONITOR_INFO_1;
typedef PMONITOR_INFO_1W PMONITOR_INFO_1;
typedef LPMONITOR_INFO_1W LPMONITOR_INFO_1;
typedef struct _MONITOR_INFO_2A{
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDLLName;
} MONITOR_INFO_2A, *PMONITOR_INFO_2A, *LPMONITOR_INFO_2A;
typedef struct _MONITOR_INFO_2W{
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDLLName;
} MONITOR_INFO_2W, *PMONITOR_INFO_2W, *LPMONITOR_INFO_2W;
typedef MONITOR_INFO_2W MONITOR_INFO_2;
typedef PMONITOR_INFO_2W PMONITOR_INFO_2;
typedef LPMONITOR_INFO_2W LPMONITOR_INFO_2;
typedef struct _DATATYPES_INFO_1A{
    LPSTR pName;
} DATATYPES_INFO_1A, *PDATATYPES_INFO_1A, *LPDATATYPES_INFO_1A;
typedef struct _DATATYPES_INFO_1W{
    LPWSTR pName;
} DATATYPES_INFO_1W, *PDATATYPES_INFO_1W, *LPDATATYPES_INFO_1W;
typedef DATATYPES_INFO_1W DATATYPES_INFO_1;
typedef PDATATYPES_INFO_1W PDATATYPES_INFO_1;
typedef LPDATATYPES_INFO_1W LPDATATYPES_INFO_1;
typedef struct _PRINTER_DEFAULTSA{
    LPSTR pDatatype;
    LPDEVMODEA pDevMode;
    ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSA, *PPRINTER_DEFAULTSA, *LPPRINTER_DEFAULTSA;
typedef struct _PRINTER_DEFAULTSW{
    LPWSTR pDatatype;
    LPDEVMODEW pDevMode;
    ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSW, *PPRINTER_DEFAULTSW, *LPPRINTER_DEFAULTSW;
typedef PRINTER_DEFAULTSW PRINTER_DEFAULTS;
typedef PPRINTER_DEFAULTSW PPRINTER_DEFAULTS;
typedef LPPRINTER_DEFAULTSW LPPRINTER_DEFAULTS;
typedef struct _PRINTER_ENUM_VALUESA {
    LPSTR pValueName;
    DWORD cbValueName;
    DWORD dwType;
    LPBYTE pData;
    DWORD cbData;
} PRINTER_ENUM_VALUESA, *PPRINTER_ENUM_VALUESA, *LPPRINTER_ENUM_VALUESA;
typedef struct _PRINTER_ENUM_VALUESW {
    LPWSTR pValueName;
    DWORD cbValueName;
    DWORD dwType;
    LPBYTE pData;
    DWORD cbData;
} PRINTER_ENUM_VALUESW, *PPRINTER_ENUM_VALUESW, *LPPRINTER_ENUM_VALUESW;
typedef PRINTER_ENUM_VALUESW PRINTER_ENUM_VALUES;
typedef PPRINTER_ENUM_VALUESW PPRINTER_ENUM_VALUES;
typedef LPPRINTER_ENUM_VALUESW LPPRINTER_ENUM_VALUES;
_Success_(return != FALSE)
BOOL
WINAPI
EnumPrintersA(
_In_ DWORD Flags,
_In_opt_ LPSTR Name,
              DWORD Level,
_Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
              LPBYTE pPrinterEnum,
              DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
_Success_(return != FALSE)
BOOL
WINAPI
EnumPrintersW(
_In_ DWORD Flags,
_In_opt_ LPWSTR Name,
              DWORD Level,
_Out_writes_bytes_to_opt_(cbBuf, *pcbNeeded)
              LPBYTE pPrinterEnum,
              DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
HANDLE
WINAPI
GetSpoolFileHandle(
_In_ HANDLE hPrinter
);
HANDLE
WINAPI
CommitSpoolData(
_In_ HANDLE hPrinter,
_In_ HANDLE hSpoolFile,
        DWORD cbCommit
);
BOOL
WINAPI
CloseSpoolFileHandle(
_In_ HANDLE hPrinter,
_In_ HANDLE hSpoolFile
);
BOOL
WINAPI
OpenPrinterA(
_In_opt_ LPSTR pPrinterName,
_Out_ LPHANDLE phPrinter,
_In_opt_ LPPRINTER_DEFAULTSA pDefault
);
BOOL
WINAPI
OpenPrinterW(
_In_opt_ LPWSTR pPrinterName,
_Out_ LPHANDLE phPrinter,
_In_opt_ LPPRINTER_DEFAULTSW pDefault
);
BOOL
WINAPI
ResetPrinterA(
_In_ HANDLE hPrinter,
_In_opt_ LPPRINTER_DEFAULTSA pDefault
);
BOOL
WINAPI
ResetPrinterW(
_In_ HANDLE hPrinter,
_In_opt_ LPPRINTER_DEFAULTSW pDefault
);
BOOL
WINAPI
SetJobA(
_In_ HANDLE hPrinter,
                 DWORD JobId,
_In_range_(0, 4) DWORD Level,
_When_(Level == 0, _Reserved_)
_When_(Level == 1, _In_reads_bytes_opt_(sizeof(JOB_INFO_1)))
_When_(Level == 2, _In_reads_bytes_opt_(sizeof(JOB_INFO_2)))
_When_(Level == 4, _In_reads_bytes_opt_(sizeof(JOB_INFO_4)))
_When_(Level == 3, _In_reads_bytes_opt_(sizeof(JOB_INFO_3)))
                 LPBYTE pJob,
                 DWORD Command
);
BOOL
WINAPI
SetJobW(
_In_ HANDLE hPrinter,
                 DWORD JobId,
_In_range_(0, 4) DWORD Level,
_When_(Level == 0, _Reserved_)
_When_(Level == 1, _In_reads_bytes_opt_(sizeof(JOB_INFO_1)))
_When_(Level == 2, _In_reads_bytes_opt_(sizeof(JOB_INFO_2)))
_When_(Level == 4, _In_reads_bytes_opt_(sizeof(JOB_INFO_4)))
_When_(Level == 3, _In_reads_bytes_opt_(sizeof(JOB_INFO_3)))
                 LPBYTE pJob,
                 DWORD Command
);
BOOL
WINAPI
GetJobA(
_In_ HANDLE hPrinter,
      DWORD JobId,
      DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
      LPBYTE pJob,
      DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetJobW(
_In_ HANDLE hPrinter,
      DWORD JobId,
      DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
      LPBYTE pJob,
      DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
EnumJobsA(
_In_ HANDLE hPrinter,
      DWORD FirstJob,
      DWORD NoJobs,
      DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
      LPBYTE pJob,
      DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumJobsW(
_In_ HANDLE hPrinter,
      DWORD FirstJob,
      DWORD NoJobs,
      DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
      LPBYTE pJob,
      DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
HANDLE
WINAPI
AddPrinterA(
_In_opt_ LPSTR pName,
_In_range_(1, 2)
            DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(PRINTER_INFO_1)))
_When_(Level == 2, _In_reads_bytes_(sizeof(PRINTER_INFO_2)))
            LPBYTE pPrinter
);
HANDLE
WINAPI
AddPrinterW(
_In_opt_ LPWSTR pName,
_In_range_(1, 2)
            DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(PRINTER_INFO_1)))
_When_(Level == 2, _In_reads_bytes_(sizeof(PRINTER_INFO_2)))
            LPBYTE pPrinter
);
BOOL
WINAPI
DeletePrinter(
_Inout_ HANDLE hPrinter
);
BOOL
WINAPI
SetPrinterA(
    _In_ HANDLE hPrinter,
    _In_range_(0, 9) DWORD Level,
    _When_(Level == 0 && Command == PRINTER_CONTROL_SET_STATUS, _In_reads_bytes_(sizeof(DWORD)))
    _When_(Level == 0 && Command != PRINTER_CONTROL_SET_STATUS, _In_opt_)
    _When_(Level == 1, _In_reads_bytes_(sizeof(PRINTER_INFO_1)))
    _When_(Level == 2, _In_reads_bytes_(sizeof(PRINTER_INFO_2)))
    _When_(Level == 3, _In_reads_bytes_(sizeof(PRINTER_INFO_3)))
    _When_(Level == 4, _In_reads_bytes_(sizeof(PRINTER_INFO_4)))
    _When_(Level == 5, _In_reads_bytes_(sizeof(PRINTER_INFO_5)))
    _When_(Level == 6, _In_reads_bytes_(sizeof(PRINTER_INFO_6)))
    _When_(Level == 7, _In_reads_bytes_(sizeof(PRINTER_INFO_7)))
    _When_(Level == 8, _In_reads_bytes_(sizeof(PRINTER_INFO_8)))
    _When_(Level == 9, _In_reads_bytes_(sizeof(PRINTER_INFO_9)))
                     LPBYTE pPrinter,
    _In_ DWORD Command
    );
BOOL
WINAPI
SetPrinterW(
    _In_ HANDLE hPrinter,
    _In_range_(0, 9) DWORD Level,
    _When_(Level == 0 && Command == PRINTER_CONTROL_SET_STATUS, _In_reads_bytes_(sizeof(DWORD)))
    _When_(Level == 0 && Command != PRINTER_CONTROL_SET_STATUS, _In_opt_)
    _When_(Level == 1, _In_reads_bytes_(sizeof(PRINTER_INFO_1)))
    _When_(Level == 2, _In_reads_bytes_(sizeof(PRINTER_INFO_2)))
    _When_(Level == 3, _In_reads_bytes_(sizeof(PRINTER_INFO_3)))
    _When_(Level == 4, _In_reads_bytes_(sizeof(PRINTER_INFO_4)))
    _When_(Level == 5, _In_reads_bytes_(sizeof(PRINTER_INFO_5)))
    _When_(Level == 6, _In_reads_bytes_(sizeof(PRINTER_INFO_6)))
    _When_(Level == 7, _In_reads_bytes_(sizeof(PRINTER_INFO_7)))
    _When_(Level == 8, _In_reads_bytes_(sizeof(PRINTER_INFO_8)))
    _When_(Level == 9, _In_reads_bytes_(sizeof(PRINTER_INFO_9)))
                     LPBYTE pPrinter,
    _In_ DWORD Command
    );
BOOL
WINAPI
GetPrinterA(
_In_ HANDLE hPrinter,
      DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
      LPBYTE pPrinter,
      DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetPrinterW(
_In_ HANDLE hPrinter,
      DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
      LPBYTE pPrinter,
      DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
AddPrinterDriverA(
_In_opt_ LPSTR pName,
            DWORD Level,
_In_ LPBYTE pDriverInfo
);
BOOL
WINAPI
AddPrinterDriverW(
_In_opt_ LPWSTR pName,
            DWORD Level,
_In_ LPBYTE pDriverInfo
);
BOOL
WINAPI
AddPrinterDriverExA(
_In_opt_ LPSTR pName,
_In_range_(2, 8) DWORD Level,
_When_(Level == 2, _In_reads_bytes_(sizeof(DRIVER_INFO_2)))
_When_(Level == 3, _In_reads_bytes_(sizeof(DRIVER_INFO_3)))
_When_(Level == 4, _In_reads_bytes_(sizeof(DRIVER_INFO_4)))
_When_(Level == 6, _In_reads_bytes_(sizeof(DRIVER_INFO_6)))
_When_(Level == 8, _In_reads_bytes_(sizeof(DRIVER_INFO_8)))
                 PBYTE lpbDriverInfo,
_In_ DWORD dwFileCopyFlags
);
BOOL
WINAPI
AddPrinterDriverExW(
_In_opt_ LPWSTR pName,
_In_range_(2, 8) DWORD Level,
_When_(Level == 2, _In_reads_bytes_(sizeof(DRIVER_INFO_2)))
_When_(Level == 3, _In_reads_bytes_(sizeof(DRIVER_INFO_3)))
_When_(Level == 4, _In_reads_bytes_(sizeof(DRIVER_INFO_4)))
_When_(Level == 6, _In_reads_bytes_(sizeof(DRIVER_INFO_6)))
_When_(Level == 8, _In_reads_bytes_(sizeof(DRIVER_INFO_8)))
                 PBYTE lpbDriverInfo,
_In_ DWORD dwFileCopyFlags
);
BOOL
WINAPI
EnumPrinterDriversA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDriverInfo,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumPrinterDriversW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDriverInfo,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
GetPrinterDriverA(
_In_ HANDLE hPrinter,
_In_opt_ LPSTR pEnvironment,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDriverInfo,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetPrinterDriverW(
_In_ HANDLE hPrinter,
_In_opt_ LPWSTR pEnvironment,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDriverInfo,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetPrinterDriverDirectoryA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDriverDirectory,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetPrinterDriverDirectoryW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDriverDirectory,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
DeletePrinterDriverA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
_In_ LPSTR pDriverName
);
BOOL
WINAPI
DeletePrinterDriverW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
_In_ LPWSTR pDriverName
);
BOOL
WINAPI
DeletePrinterDriverExA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
_In_ LPSTR pDriverName,
            DWORD dwDeleteFlag,
            DWORD dwVersionFlag
);
BOOL
WINAPI
DeletePrinterDriverExW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
_In_ LPWSTR pDriverName,
            DWORD dwDeleteFlag,
            DWORD dwVersionFlag
);
BOOL
WINAPI
AddPrintProcessorA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
_In_ LPSTR pPathName,
_In_ LPSTR pPrintProcessorName
);
BOOL
WINAPI
AddPrintProcessorW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
_In_ LPWSTR pPathName,
_In_ LPWSTR pPrintProcessorName
);
BOOL
WINAPI
EnumPrintProcessorsA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
           DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
           LPBYTE pPrintProcessorInfo,
           DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumPrintProcessorsW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
           DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
           LPBYTE pPrintProcessorInfo,
           DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
GetPrintProcessorDirectoryA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
           DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
           LPBYTE pPrintProcessorInfo,
           DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetPrintProcessorDirectoryW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
           DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
           LPBYTE pPrintProcessorInfo,
           DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
_Success_(return != FALSE)
BOOL
WINAPI
EnumPrintProcessorDatatypesA(
_In_opt_ LPSTR pName,
_In_ LPSTR pPrintProcessorName,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDatatypes,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
_Success_(return != FALSE)
BOOL
WINAPI
EnumPrintProcessorDatatypesW(
_In_opt_ LPWSTR pName,
_In_ LPWSTR pPrintProcessorName,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pDatatypes,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
DeletePrintProcessorA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
_In_ LPSTR pPrintProcessorName
);
BOOL
WINAPI
DeletePrintProcessorW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
_In_ LPWSTR pPrintProcessorName
);
DWORD
WINAPI
StartDocPrinterA(
_In_ HANDLE hPrinter,
_In_range_(1, 3) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(DOC_INFO_1)))
_When_(Level == 3, _In_reads_bytes_(sizeof(DOC_INFO_3)))
                 LPBYTE pDocInfo
);
DWORD
WINAPI
StartDocPrinterW(
_In_ HANDLE hPrinter,
_In_range_(1, 3) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(DOC_INFO_1)))
_When_(Level == 3, _In_reads_bytes_(sizeof(DOC_INFO_3)))
                 LPBYTE pDocInfo
);
BOOL
WINAPI
StartPagePrinter(
_In_ HANDLE hPrinter
);
BOOL
WINAPI
WritePrinter(
_In_ HANDLE hPrinter,
_In_reads_bytes_(cbBuf)
        LPVOID pBuf,
        DWORD cbBuf,
_Out_ LPDWORD pcWritten
);
BOOL
WINAPI
FlushPrinter(
_In_ HANDLE hPrinter,
_In_reads_bytes_opt_(cbBuf)
        LPVOID pBuf,
        DWORD cbBuf,
_Out_ LPDWORD pcWritten,
        DWORD cSleep
);
BOOL
WINAPI
EndPagePrinter(
_In_ HANDLE hPrinter
);
BOOL
WINAPI
AbortPrinter(
_In_ HANDLE hPrinter
);
BOOL
WINAPI
ReadPrinter(
_In_ HANDLE hPrinter,
_Out_writes_bytes_(cbBuf)
        LPVOID pBuf,
        DWORD cbBuf,
_Out_ LPDWORD pNoBytesRead
);
BOOL
WINAPI
EndDocPrinter(
    _In_ HANDLE hPrinter
    );
BOOL
WINAPI
AddJobA(
_In_ HANDLE hPrinter,
        DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
        LPBYTE pData,
        DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
AddJobW(
_In_ HANDLE hPrinter,
        DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
        LPBYTE pData,
        DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
ScheduleJob(
_In_ HANDLE hPrinter,
        DWORD JobId
);
BOOL
WINAPI
PrinterProperties(
_In_ HWND hWnd,
_In_ HANDLE hPrinter
);
_When_(fMode == 0, _Post_satisfies_(return >= sizeof(DEVMODE)))
LONG
WINAPI
DocumentPropertiesA(
_In_opt_ HWND hWnd,
_In_ HANDLE hPrinter,
_In_ LPSTR pDeviceName,
_Out_opt_ PDEVMODEA pDevModeOutput,
_In_opt_ PDEVMODEA pDevModeInput,
                DWORD fMode
);
_When_(fMode == 0, _Post_satisfies_(return >= sizeof(DEVMODE)))
LONG
WINAPI
DocumentPropertiesW(
_In_opt_ HWND hWnd,
_In_ HANDLE hPrinter,
_In_ LPWSTR pDeviceName,
_Out_opt_ PDEVMODEW pDevModeOutput,
_In_opt_ PDEVMODEW pDevModeInput,
                DWORD fMode
);
LONG
WINAPI
AdvancedDocumentPropertiesA(
_In_ HWND hWnd,
_In_ HANDLE hPrinter,
_In_ LPSTR pDeviceName,
_Inout_opt_ PDEVMODEA pDevModeOutput,
_In_opt_ PDEVMODEA pDevModeInput
);
LONG
WINAPI
AdvancedDocumentPropertiesW(
_In_ HWND hWnd,
_In_ HANDLE hPrinter,
_In_ LPWSTR pDeviceName,
_Inout_opt_ PDEVMODEW pDevModeOutput,
_In_opt_ PDEVMODEW pDevModeInput
);
    LONG
    ExtDeviceMode(
    _In_opt_ HWND hWnd,
    _In_opt_ HANDLE hInst,
    _Inout_opt_ LPDEVMODEA pDevModeOutput,
    _In_opt_ LPSTR pDeviceName,
    _In_opt_ LPSTR pPort,
    _In_opt_ LPDEVMODEA pDevModeInput,
    _In_opt_ LPSTR pProfile,
                    DWORD fMode
    );
DWORD
WINAPI
GetPrinterDataA(
_In_ HANDLE hPrinter,
_In_ LPSTR pValueName,
_Out_opt_ LPDWORD pType,
_Out_writes_bytes_opt_(nSize)
             LPBYTE pData,
             DWORD nSize,
_Out_ LPDWORD pcbNeeded
);
DWORD
WINAPI
GetPrinterDataW(
_In_ HANDLE hPrinter,
_In_ LPWSTR pValueName,
_Out_opt_ LPDWORD pType,
_Out_writes_bytes_opt_(nSize)
             LPBYTE pData,
             DWORD nSize,
_Out_ LPDWORD pcbNeeded
);
DWORD
WINAPI
GetPrinterDataExA(
_In_ HANDLE hPrinter,
_In_ LPCSTR pKeyName,
_In_ LPCSTR pValueName,
_Out_opt_ LPDWORD pType,
_Out_writes_bytes_opt_(nSize)
             LPBYTE pData,
             DWORD nSize,
_Out_ LPDWORD pcbNeeded
);
DWORD
WINAPI
GetPrinterDataExW(
_In_ HANDLE hPrinter,
_In_ LPCWSTR pKeyName,
_In_ LPCWSTR pValueName,
_Out_opt_ LPDWORD pType,
_Out_writes_bytes_opt_(nSize)
             LPBYTE pData,
             DWORD nSize,
_Out_ LPDWORD pcbNeeded
);
DWORD
WINAPI
EnumPrinterDataA(
_In_ HANDLE hPrinter,
            DWORD dwIndex,
_Out_writes_bytes_(cbValueName)
            LPSTR pValueName,
            DWORD cbValueName,
_Out_ LPDWORD pcbValueName,
_Out_opt_ LPDWORD pType,
_Out_writes_to_opt_(cbData, *pcbData)
            LPBYTE pData,
            DWORD cbData,
_When_(pData != NULL, _Pre_notnull_)
_Out_opt_ LPDWORD pcbData
);
DWORD
WINAPI
EnumPrinterDataW(
_In_ HANDLE hPrinter,
            DWORD dwIndex,
_Out_writes_bytes_(cbValueName)
            LPWSTR pValueName,
            DWORD cbValueName,
_Out_ LPDWORD pcbValueName,
_Out_opt_ LPDWORD pType,
_Out_writes_to_opt_(cbData, *pcbData)
            LPBYTE pData,
            DWORD cbData,
_When_(pData != NULL, _Pre_notnull_)
_Out_opt_ LPDWORD pcbData
);
DWORD
WINAPI
EnumPrinterDataExA(
_In_ HANDLE hPrinter,
_In_ LPCSTR pKeyName,
_Out_writes_bytes_opt_(cbEnumValues)
        LPBYTE pEnumValues,
        DWORD cbEnumValues,
_Out_ LPDWORD pcbEnumValues,
_Out_ LPDWORD pnEnumValues
);
DWORD
WINAPI
EnumPrinterDataExW(
_In_ HANDLE hPrinter,
_In_ LPCWSTR pKeyName,
_Out_writes_bytes_opt_(cbEnumValues)
        LPBYTE pEnumValues,
        DWORD cbEnumValues,
_Out_ LPDWORD pcbEnumValues,
_Out_ LPDWORD pnEnumValues
);
DWORD
WINAPI
EnumPrinterKeyA(
_In_ HANDLE hPrinter,
_In_ LPCSTR pKeyName,
_Out_writes_bytes_opt_(cbSubkey)
        LPSTR pSubkey,
        DWORD cbSubkey,
_Out_ LPDWORD pcbSubkey
);
DWORD
WINAPI
EnumPrinterKeyW(
_In_ HANDLE hPrinter,
_In_ LPCWSTR pKeyName,
_Out_writes_bytes_opt_(cbSubkey)
        LPWSTR pSubkey,
        DWORD cbSubkey,
_Out_ LPDWORD pcbSubkey
);
DWORD
WINAPI
SetPrinterDataA(
_In_ HANDLE hPrinter,
_In_ LPSTR pValueName,
        DWORD Type,
_In_reads_bytes_(cbData)
        LPBYTE pData,
        DWORD cbData
);
DWORD
WINAPI
SetPrinterDataW(
_In_ HANDLE hPrinter,
_In_ LPWSTR pValueName,
        DWORD Type,
_In_reads_bytes_(cbData)
        LPBYTE pData,
        DWORD cbData
);
DWORD
WINAPI
SetPrinterDataExA(
_In_ HANDLE hPrinter,
_In_ LPCSTR pKeyName,
_In_ LPCSTR pValueName,
        DWORD Type,
_In_reads_bytes_(cbData)
        LPBYTE pData,
        DWORD cbData
);
DWORD
WINAPI
SetPrinterDataExW(
_In_ HANDLE hPrinter,
_In_ LPCWSTR pKeyName,
_In_ LPCWSTR pValueName,
        DWORD Type,
_In_reads_bytes_(cbData)
        LPBYTE pData,
        DWORD cbData
);
DWORD
WINAPI
DeletePrinterDataA(
_In_ HANDLE hPrinter,
_In_ LPSTR pValueName
);
DWORD
WINAPI
DeletePrinterDataW(
_In_ HANDLE hPrinter,
_In_ LPWSTR pValueName
);
DWORD
WINAPI
DeletePrinterDataExA(
_In_ HANDLE hPrinter,
_In_ LPCSTR pKeyName,
_In_ LPCSTR pValueName
);
DWORD
WINAPI
DeletePrinterDataExW(
_In_ HANDLE hPrinter,
_In_ LPCWSTR pKeyName,
_In_ LPCWSTR pValueName
);
DWORD
WINAPI
DeletePrinterKeyA(
_In_ HANDLE hPrinter,
_In_ LPCSTR pKeyName
);
DWORD
WINAPI
DeletePrinterKeyW(
_In_ HANDLE hPrinter,
_In_ LPCWSTR pKeyName
);
    #define PRINTER_NOTIFY_FIELD_FRIENDLY_NAME 0x1B
    #define PRINTER_NOTIFY_FIELD_BRANCH_OFFICE_PRINTING 0x1C
    #define SERVER_NOTIFY_FIELD_PRINT_DRIVER_ISOLATION_GROUP 0x00
    #define PRINTER_NOTIFY_CATEGORY_ALL 0x001000
 #define PRINTER_NOTIFY_CATEGORY_3D 0x002000
typedef struct _PRINTER_NOTIFY_OPTIONS_TYPE {
    WORD Type;
    WORD Reserved0;
    DWORD Reserved1;
    DWORD Reserved2;
    DWORD Count;
    PWORD pFields;
} PRINTER_NOTIFY_OPTIONS_TYPE, *PPRINTER_NOTIFY_OPTIONS_TYPE, *LPPRINTER_NOTIFY_OPTIONS_TYPE;
typedef struct _PRINTER_NOTIFY_OPTIONS {
    DWORD Version;
    DWORD Flags;
    DWORD Count;
    PPRINTER_NOTIFY_OPTIONS_TYPE pTypes;
} PRINTER_NOTIFY_OPTIONS, *PPRINTER_NOTIFY_OPTIONS, *LPPRINTER_NOTIFY_OPTIONS;
typedef struct _PRINTER_NOTIFY_INFO_DATA {
    WORD Type;
    WORD Field;
    DWORD Reserved;
    DWORD Id;
    union {
        DWORD adwData[2];
        struct {
            DWORD cbBuf;
            LPVOID pBuf;
        } Data;
    } NotifyData;
} PRINTER_NOTIFY_INFO_DATA, *PPRINTER_NOTIFY_INFO_DATA, *LPPRINTER_NOTIFY_INFO_DATA;
typedef struct _PRINTER_NOTIFY_INFO {
    DWORD Version;
    DWORD Flags;
    DWORD Count;
    PRINTER_NOTIFY_INFO_DATA aData[1];
} PRINTER_NOTIFY_INFO, *PPRINTER_NOTIFY_INFO, *LPPRINTER_NOTIFY_INFO;
    typedef struct _BINARY_CONTAINER{
        DWORD cbBuf;
        LPBYTE pData;
    } BINARY_CONTAINER, *PBINARY_CONTAINER;
    typedef struct _BIDI_DATA{
        DWORD dwBidiType;
        union {
            BOOL bData;
            LONG iData;
            LPWSTR sData;
            FLOAT fData;
            BINARY_CONTAINER biData;
            }u;
    } BIDI_DATA, *PBIDI_DATA, *LPBIDI_DATA;
    typedef struct _BIDI_REQUEST_DATA{
        DWORD dwReqNumber;
        LPWSTR pSchema;
        BIDI_DATA data;
    } BIDI_REQUEST_DATA , *PBIDI_REQUEST_DATA , *LPBIDI_REQUEST_DATA;
    typedef struct _BIDI_REQUEST_CONTAINER{
        DWORD Version;
        DWORD Flags;
        DWORD Count;
        BIDI_REQUEST_DATA aData[ 1 ];
    }BIDI_REQUEST_CONTAINER, *PBIDI_REQUEST_CONTAINER, *LPBIDI_REQUEST_CONTAINER;
    typedef struct _BIDI_RESPONSE_DATA{
        DWORD dwResult;
        DWORD dwReqNumber;
        LPWSTR pSchema;
        BIDI_DATA data;
    } BIDI_RESPONSE_DATA, *PBIDI_RESPONSE_DATA, *LPBIDI_RESPONSE_DATA;
    typedef struct _BIDI_RESPONSE_CONTAINER{
        DWORD Version;
        DWORD Flags;
        DWORD Count;
        BIDI_RESPONSE_DATA aData[ 1 ];
    } BIDI_RESPONSE_CONTAINER, *PBIDI_RESPONSE_CONTAINER, *LPBIDI_RESPONSE_CONTAINER;
    #define BIDI_ACTION_ENUM_SCHEMA L"EnumSchema"
    #define BIDI_ACTION_GET L"Get"
    #define BIDI_ACTION_SET L"Set"
    #define BIDI_ACTION_GET_ALL L"GetAll"
    #define BIDI_ACTION_GET_WITH_ARGUMENT L"GetWithArgument"
    typedef enum {
        BIDI_NULL = 0,
        BIDI_INT = 1,
        BIDI_FLOAT = 2,
        BIDI_BOOL = 3,
        BIDI_STRING = 4,
        BIDI_TEXT = 5,
        BIDI_ENUM = 6,
        BIDI_BLOB = 7
    } BIDI_TYPE;
    #define BIDI_ACCESS_ADMINISTRATOR 0x1
    #define BIDI_ACCESS_USER 0x2
    #define ERROR_BIDI_STATUS_OK 0
    #define ERROR_BIDI_NOT_SUPPORTED ERROR_NOT_SUPPORTED
    #define ERROR_BIDI_ERROR_BASE 13000
    #define ERROR_BIDI_STATUS_WARNING (ERROR_BIDI_ERROR_BASE + 1)
    #define ERROR_BIDI_SCHEMA_READ_ONLY (ERROR_BIDI_ERROR_BASE + 2)
    #define ERROR_BIDI_SERVER_OFFLINE (ERROR_BIDI_ERROR_BASE + 3)
    #define ERROR_BIDI_DEVICE_OFFLINE (ERROR_BIDI_ERROR_BASE + 4)
    #define ERROR_BIDI_SCHEMA_NOT_SUPPORTED (ERROR_BIDI_ERROR_BASE + 5)
    #define ERROR_BIDI_SET_DIFFERENT_TYPE (ERROR_BIDI_ERROR_BASE + 6)
    #define ERROR_BIDI_SET_MULTIPLE_SCHEMAPATH (ERROR_BIDI_ERROR_BASE + 7)
    #define ERROR_BIDI_SET_INVALID_SCHEMAPATH (ERROR_BIDI_ERROR_BASE + 8)
    #define ERROR_BIDI_SET_UNKNOWN_FAILURE (ERROR_BIDI_ERROR_BASE + 9)
    #define ERROR_BIDI_SCHEMA_WRITE_ONLY (ERROR_BIDI_ERROR_BASE + 10)
    #define ERROR_BIDI_GET_REQUIRES_ARGUMENT (ERROR_BIDI_ERROR_BASE + 11)
    #define ERROR_BIDI_GET_ARGUMENT_NOT_SUPPORTED (ERROR_BIDI_ERROR_BASE + 12)
    #define ERROR_BIDI_GET_MISSING_ARGUMENT (ERROR_BIDI_ERROR_BASE + 13)
    #define ERROR_BIDI_DEVICE_CONFIG_UNCHANGED (ERROR_BIDI_ERROR_BASE + 14)
    #define ERROR_BIDI_NO_LOCALIZED_RESOURCES (ERROR_BIDI_ERROR_BASE + 15)
    #define ERROR_BIDI_NO_BIDI_SCHEMA_EXTENSIONS (ERROR_BIDI_ERROR_BASE + 16)
    #define ERROR_BIDI_UNSUPPORTED_CLIENT_LANGUAGE (ERROR_BIDI_ERROR_BASE + 17)
    #define ERROR_BIDI_UNSUPPORTED_RESOURCE_FORMAT (ERROR_BIDI_ERROR_BASE + 18)
DWORD
WINAPI
WaitForPrinterChange(
_In_ HANDLE hPrinter,
     DWORD Flags
);
HANDLE
WINAPI
FindFirstPrinterChangeNotification(
_In_ HANDLE hPrinter,
         DWORD fdwFilter,
         DWORD fdwOptions,
_In_opt_ PVOID pPrinterNotifyOptions
    );
BOOL
WINAPI
FindNextPrinterChangeNotification(
_In_ HANDLE hChange,
_Out_opt_ PDWORD pdwChange,
_In_opt_ LPVOID pvReserved,
_Out_opt_ LPVOID *ppPrinterNotifyInfo
    );
BOOL
WINAPI
FreePrinterNotifyInfo(
_In_ PPRINTER_NOTIFY_INFO pPrinterNotifyInfo
    );
BOOL
WINAPI
FindClosePrinterChangeNotification(
_In_ HANDLE hChange
    );
DWORD
WINAPI
PrinterMessageBoxA(
_In_ HANDLE hPrinter,
       DWORD Error,
_In_ HWND hWnd,
_In_ LPSTR pText,
_In_ LPSTR pCaption,
       DWORD dwType
);
DWORD
WINAPI
PrinterMessageBoxW(
_In_ HANDLE hPrinter,
       DWORD Error,
_In_ HWND hWnd,
_In_ LPWSTR pText,
_In_ LPWSTR pCaption,
       DWORD dwType
);
BOOL
WINAPI
ClosePrinter(
_In_ HANDLE hPrinter
);
BOOL
WINAPI
AddFormA(
_In_ HANDLE hPrinter,
_In_range_(1, 2) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(FORM_INFO_1A)))
_When_(Level == 2, _In_reads_bytes_(sizeof(FORM_INFO_2A)))
                 LPBYTE pForm
);
BOOL
WINAPI
AddFormW(
_In_ HANDLE hPrinter,
_In_range_(1, 2) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(FORM_INFO_1W)))
_When_(Level == 2, _In_reads_bytes_(sizeof(FORM_INFO_2W)))
                 LPBYTE pForm
);
BOOL
WINAPI
DeleteFormA(
_In_ HANDLE hPrinter,
_In_ LPSTR pFormName
);
BOOL
WINAPI
DeleteFormW(
_In_ HANDLE hPrinter,
_In_ LPWSTR pFormName
);
BOOL
WINAPI
GetFormA(
_In_ HANDLE hPrinter,
_In_ LPSTR pFormName,
        DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
        LPBYTE pForm,
        DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
GetFormW(
_In_ HANDLE hPrinter,
_In_ LPWSTR pFormName,
        DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
        LPBYTE pForm,
        DWORD cbBuf,
_Out_ LPDWORD pcbNeeded
);
BOOL
WINAPI
SetFormA(
_In_ HANDLE hPrinter,
_In_ LPSTR pFormName,
_In_range_(1, 2) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(FORM_INFO_1A)))
_When_(Level == 2, _In_reads_bytes_(sizeof(FORM_INFO_2A)))
                 LPBYTE pForm
);
BOOL
WINAPI
SetFormW(
_In_ HANDLE hPrinter,
_In_ LPWSTR pFormName,
_In_range_(1, 2) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(FORM_INFO_1W)))
_When_(Level == 2, _In_reads_bytes_(sizeof(FORM_INFO_2W)))
                 LPBYTE pForm
);
BOOL
WINAPI
EnumFormsA(
_In_ HANDLE hPrinter,
        DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
        LPBYTE pForm,
        DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumFormsW(
_In_ HANDLE hPrinter,
        DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
        LPBYTE pForm,
        DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumMonitorsA(
_In_opt_ LPSTR pName,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pMonitor,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumMonitorsW(
_In_opt_ LPWSTR pName,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pMonitor,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
AddMonitorA(
_In_opt_ LPSTR pName,
            DWORD Level,
_In_reads_bytes_opt_(sizeof(MONITOR_INFO_2))
            LPBYTE pMonitors
);
BOOL
WINAPI
AddMonitorW(
_In_opt_ LPWSTR pName,
            DWORD Level,
_In_reads_bytes_opt_(sizeof(MONITOR_INFO_2))
            LPBYTE pMonitors
);
BOOL
WINAPI
DeleteMonitorA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
_In_ LPSTR pMonitorName
);
BOOL
WINAPI
DeleteMonitorW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
_In_ LPWSTR pMonitorName
);
BOOL
WINAPI
EnumPortsA(
_In_opt_ LPSTR pName,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pPort,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
EnumPortsW(
_In_opt_ LPWSTR pName,
            DWORD Level,
_Out_writes_bytes_opt_(cbBuf)
            LPBYTE pPort,
            DWORD cbBuf,
_Out_ LPDWORD pcbNeeded,
_Out_ LPDWORD pcReturned
);
BOOL
WINAPI
AddPortA(
_In_opt_ LPSTR pName,
_In_ HWND hWnd,
_In_ LPSTR pMonitorName
);
BOOL
WINAPI
AddPortW(
_In_opt_ LPWSTR pName,
_In_ HWND hWnd,
_In_ LPWSTR pMonitorName
);
BOOL
WINAPI
ConfigurePortA(
_In_opt_ LPSTR pName,
_In_ HWND hWnd,
_In_ LPSTR pPortName
);
BOOL
WINAPI
ConfigurePortW(
_In_opt_ LPWSTR pName,
_In_ HWND hWnd,
_In_ LPWSTR pPortName
);
BOOL
WINAPI
DeletePortA(
_In_opt_ LPSTR pName,
_In_ HWND hWnd,
_In_ LPSTR pPortName
);
BOOL
WINAPI
DeletePortW(
_In_opt_ LPWSTR pName,
_In_ HWND hWnd,
_In_ LPWSTR pPortName
);
BOOL
WINAPI
XcvDataW(
_In_ HANDLE hXcv,
_In_ PCWSTR pszDataName,
_In_reads_bytes_opt_(cbInputData)
            PBYTE pInputData,
            DWORD cbInputData,
_Out_writes_bytes_opt_(cbOutputData)
            PBYTE pOutputData,
            DWORD cbOutputData,
_Out_ PDWORD pcbOutputNeeded,
_Out_opt_ PDWORD pdwStatus
);
BOOL
WINAPI
GetDefaultPrinterA(
    _Out_writes_opt_(*pcchBuffer) LPSTR pszBuffer,
    _Inout_ LPDWORD pcchBuffer
    );
BOOL
WINAPI
GetDefaultPrinterW(
    _Out_writes_opt_(*pcchBuffer) LPWSTR pszBuffer,
    _Inout_ LPDWORD pcchBuffer
    );
BOOL
WINAPI
SetDefaultPrinterA(
_In_opt_ LPCSTR pszPrinter
    );
BOOL
WINAPI
SetDefaultPrinterW(
_In_opt_ LPCWSTR pszPrinter
    );
BOOL
WINAPI
SetPortA(
_In_opt_ LPSTR pName,
_In_ LPSTR pPortName,
            DWORD dwLevel,
_In_reads_bytes_(sizeof(PORT_INFO_3))
            LPBYTE pPortInfo
);
BOOL
WINAPI
SetPortW(
_In_opt_ LPWSTR pName,
_In_ LPWSTR pPortName,
            DWORD dwLevel,
_In_reads_bytes_(sizeof(PORT_INFO_3))
            LPBYTE pPortInfo
);
BOOL
WINAPI
AddPrinterConnectionA(
_In_ LPSTR pName
);
BOOL
WINAPI
AddPrinterConnectionW(
_In_ LPWSTR pName
);
BOOL
WINAPI
DeletePrinterConnectionA(
_In_ LPSTR pName
);
BOOL
WINAPI
DeletePrinterConnectionW(
_In_ LPWSTR pName
);
HANDLE
WINAPI
ConnectToPrinterDlg(
_In_ HWND hwnd,
       DWORD Flags
);
typedef struct _PROVIDOR_INFO_1A{
    LPSTR pName;
    LPSTR pEnvironment;
    LPSTR pDLLName;
} PROVIDOR_INFO_1A, *PPROVIDOR_INFO_1A, *LPPROVIDOR_INFO_1A;
typedef struct _PROVIDOR_INFO_1W{
    LPWSTR pName;
    LPWSTR pEnvironment;
    LPWSTR pDLLName;
} PROVIDOR_INFO_1W, *PPROVIDOR_INFO_1W, *LPPROVIDOR_INFO_1W;
typedef PROVIDOR_INFO_1W PROVIDOR_INFO_1;
typedef PPROVIDOR_INFO_1W PPROVIDOR_INFO_1;
typedef LPPROVIDOR_INFO_1W LPPROVIDOR_INFO_1;
typedef struct _PROVIDOR_INFO_2A{
    LPSTR pOrder;
} PROVIDOR_INFO_2A, *PPROVIDOR_INFO_2A, *LPPROVIDOR_INFO_2A;
typedef struct _PROVIDOR_INFO_2W{
    LPWSTR pOrder;
} PROVIDOR_INFO_2W, *PPROVIDOR_INFO_2W, *LPPROVIDOR_INFO_2W;
typedef PROVIDOR_INFO_2W PROVIDOR_INFO_2;
typedef PPROVIDOR_INFO_2W PPROVIDOR_INFO_2;
typedef LPPROVIDOR_INFO_2W LPPROVIDOR_INFO_2;
BOOL
WINAPI
AddPrintProvidorA(
_In_opt_ LPSTR pName,
_In_range_(1, 2) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(PROVIDOR_INFO_1)))
_When_(Level == 2, _In_reads_bytes_(sizeof(PROVIDOR_INFO_2)))
_In_ LPBYTE pProvidorInfo
);
BOOL
WINAPI
AddPrintProvidorW(
_In_opt_ LPWSTR pName,
_In_range_(1, 2) DWORD Level,
_When_(Level == 1, _In_reads_bytes_(sizeof(PROVIDOR_INFO_1)))
_When_(Level == 2, _In_reads_bytes_(sizeof(PROVIDOR_INFO_2)))
_In_ LPBYTE pProvidorInfo
);
BOOL
WINAPI
DeletePrintProvidorA(
_In_opt_ LPSTR pName,
_In_opt_ LPSTR pEnvironment,
_In_ LPSTR pPrintProvidorName
);
BOOL
WINAPI
DeletePrintProvidorW(
_In_opt_ LPWSTR pName,
_In_opt_ LPWSTR pEnvironment,
_In_ LPWSTR pPrintProvidorName
);
    BOOL
    WINAPI
    IsValidDevmodeA(
        _In_opt_ PDEVMODEA pDevmode,
                    size_t DevmodeSize
        );
    BOOL
    WINAPI
    IsValidDevmodeW(
        _In_opt_ PDEVMODEW pDevmode,
                    size_t DevmodeSize
        );
    #define SPLREG_OS_VERSION TEXT("OSVersion")
    #define SPLREG_ALLOW_USER_MANAGEFORMS TEXT("AllowUserManageForms")
    #define SPLREG_WEBSHAREMGMT TEXT("WebShareMgmt")
    #define JOB_ACCESS_READ 0x00000020
                              SERVER_ACCESS_ADMINISTER |\
                              SERVER_ACCESS_ENUMERATE)
                              SERVER_ACCESS_ENUMERATE)
                              SERVER_ACCESS_ADMINISTER |\
                              SERVER_ACCESS_ENUMERATE)
                              SERVER_ACCESS_ENUMERATE)
                               PRINTER_ACCESS_ADMINISTER |\
                               PRINTER_ACCESS_USE)
                               PRINTER_ACCESS_USE)
                               PRINTER_ACCESS_USE)
                               PRINTER_ACCESS_USE)
    #define JOB_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED |\
                                    JOB_ACCESS_ADMINISTER |\
                                    JOB_ACCESS_READ)
    #define JOB_READ (STANDARD_RIGHTS_READ |\
                                    JOB_ACCESS_READ)
                                JOB_ACCESS_ADMINISTER)
                                JOB_ACCESS_ADMINISTER)
    typedef enum _PRINTER_OPTION_FLAGS
    {
        PRINTER_OPTION_NO_CACHE = 1 << 0,
        PRINTER_OPTION_CACHE = 1 << 1,
        PRINTER_OPTION_CLIENT_CHANGE = 1 << 2,
        PRINTER_OPTION_NO_CLIENT_DATA = 1 << 3,
    } PRINTER_OPTION_FLAGS;
    typedef struct _PRINTER_OPTIONSA
    {
        UINT cbSize;
        DWORD dwFlags;
    } PRINTER_OPTIONSA, *PPRINTER_OPTIONSA, *LPPRINTER_OPTIONSA;
    typedef struct _PRINTER_OPTIONSW
    {
        UINT cbSize;
        DWORD dwFlags;
    } PRINTER_OPTIONSW, *PPRINTER_OPTIONSW, *LPPRINTER_OPTIONSW;
typedef PRINTER_OPTIONSW PRINTER_OPTIONS;
typedef PPRINTER_OPTIONSW PPRINTER_OPTIONS;
typedef LPPRINTER_OPTIONSW LPPRINTER_OPTIONS;
    BOOL
    WINAPI
    OpenPrinter2A(
    _In_opt_ LPCSTR pPrinterName,
    _Out_ LPHANDLE phPrinter,
    _In_opt_ PPRINTER_DEFAULTSA pDefault,
    _In_opt_ PPRINTER_OPTIONSA pOptions
    );
    BOOL
    WINAPI
    OpenPrinter2W(
    _In_opt_ LPCWSTR pPrinterName,
    _Out_ LPHANDLE phPrinter,
    _In_opt_ PPRINTER_DEFAULTSW pDefault,
    _In_opt_ PPRINTER_OPTIONSW pOptions
    );
    #define PRINTER_CONNECTION_MISMATCH 0x00000020
    #define PRINTER_CONNECTION_NO_UI 0x00000040
    typedef struct _PRINTER_CONNECTION_INFO_1A
    {
        DWORD dwFlags;
        LPSTR pszDriverName;
    } PRINTER_CONNECTION_INFO_1A, *PPRINTER_CONNECTION_INFO_1A;
    typedef struct _PRINTER_CONNECTION_INFO_1W
    {
        DWORD dwFlags;
        LPWSTR pszDriverName;
    } PRINTER_CONNECTION_INFO_1W, *PPRINTER_CONNECTION_INFO_1W;
typedef PRINTER_CONNECTION_INFO_1W PRINTER_CONNECTION_INFO_1;
typedef PPRINTER_CONNECTION_INFO_1W PPRINTER_CONNECTION_INFO_1;
    BOOL
    WINAPI
    AddPrinterConnection2A(
    _In_opt_ HWND hWnd,
    _In_ LPCSTR pszName,
                DWORD dwLevel,
    _In_ PVOID pConnectionInfo
        );
    BOOL
    WINAPI
    AddPrinterConnection2W(
    _In_opt_ HWND hWnd,
    _In_ LPCWSTR pszName,
                DWORD dwLevel,
    _In_ PVOID pConnectionInfo
        );
    HRESULT
    WINAPI
    InstallPrinterDriverFromPackageA(
    _In_opt_ LPCSTR pszServer,
    _In_opt_ LPCSTR pszInfPath,
    _In_ LPCSTR pszDriverName,
    _In_opt_ LPCSTR pszEnvironment,
    _In_ DWORD dwFlags
    );
    HRESULT
    WINAPI
    InstallPrinterDriverFromPackageW(
    _In_opt_ LPCWSTR pszServer,
    _In_opt_ LPCWSTR pszInfPath,
    _In_ LPCWSTR pszDriverName,
    _In_opt_ LPCWSTR pszEnvironment,
    _In_ DWORD dwFlags
    );
    HRESULT
    WINAPI
    UploadPrinterDriverPackageA(
    _In_opt_ LPCSTR pszServer,
    _In_ LPCSTR pszInfPath,
    _In_opt_ LPCSTR pszEnvironment,
    _In_ DWORD dwFlags,
    _In_ HWND hwnd,
    _Out_writes_(*pcchDestInfPath)
               LPSTR pszDestInfPath,
    _Inout_ PULONG pcchDestInfPath
    );
    HRESULT
    WINAPI
    UploadPrinterDriverPackageW(
    _In_opt_ LPCWSTR pszServer,
    _In_ LPCWSTR pszInfPath,
    _In_opt_ LPCWSTR pszEnvironment,
    _In_ DWORD dwFlags,
    _In_ HWND hwnd,
    _Out_writes_(*pcchDestInfPath)
               LPWSTR pszDestInfPath,
    _Inout_ PULONG pcchDestInfPath
    );
    typedef struct _CORE_PRINTER_DRIVERA
    {
        GUID CoreDriverGUID;
        FILETIME ftDriverDate;
        DWORDLONG dwlDriverVersion;
        CHAR szPackageID[MAX_PATH];
    } CORE_PRINTER_DRIVERA, *PCORE_PRINTER_DRIVERA;
    typedef struct _CORE_PRINTER_DRIVERW
    {
        GUID CoreDriverGUID;
        FILETIME ftDriverDate;
        DWORDLONG dwlDriverVersion;
        WCHAR szPackageID[MAX_PATH];
    } CORE_PRINTER_DRIVERW, *PCORE_PRINTER_DRIVERW;
typedef CORE_PRINTER_DRIVERW CORE_PRINTER_DRIVER;
typedef PCORE_PRINTER_DRIVERW PCORE_PRINTER_DRIVER;
    HRESULT
    WINAPI
    GetCorePrinterDriversA(
    _In_opt_ LPCSTR pszServer,
    _In_opt_ LPCSTR pszEnvironment,
    _In_ LPCSTR pszzCoreDriverDependencies,
    _In_ DWORD cCorePrinterDrivers,
    _Out_writes_(cCorePrinterDrivers) PCORE_PRINTER_DRIVERA pCorePrinterDrivers
    );
    HRESULT
    WINAPI
    GetCorePrinterDriversW(
    _In_opt_ LPCWSTR pszServer,
    _In_opt_ LPCWSTR pszEnvironment,
    _In_ LPCWSTR pszzCoreDriverDependencies,
    _In_ DWORD cCorePrinterDrivers,
    _Out_writes_(cCorePrinterDrivers) PCORE_PRINTER_DRIVERW pCorePrinterDrivers
    );
    HRESULT
    WINAPI
    CorePrinterDriverInstalledA(
    _In_opt_ LPCSTR pszServer,
    _In_opt_ LPCSTR pszEnvironment,
    _In_ GUID CoreDriverGUID,
    _In_ FILETIME ftDriverDate,
    _In_ DWORDLONG dwlDriverVersion,
    _Out_ BOOL *pbDriverInstalled
    );
    HRESULT
    WINAPI
    CorePrinterDriverInstalledW(
    _In_opt_ LPCWSTR pszServer,
    _In_opt_ LPCWSTR pszEnvironment,
    _In_ GUID CoreDriverGUID,
    _In_ FILETIME ftDriverDate,
    _In_ DWORDLONG dwlDriverVersion,
    _Out_ BOOL *pbDriverInstalled
    );
    HRESULT
    WINAPI
    GetPrinterDriverPackagePathA(
    _In_opt_ LPCSTR pszServer,
    _In_opt_ LPCSTR pszEnvironment,
    _In_opt_ LPCSTR pszLanguage,
    _In_ LPCSTR pszPackageID,
    _Inout_updates_opt_(cchDriverPackageCab) LPSTR pszDriverPackageCab,
    _In_opt_ DWORD cchDriverPackageCab,
    _Out_ LPDWORD pcchRequiredSize
    );
    HRESULT
    WINAPI
    GetPrinterDriverPackagePathW(
    _In_opt_ LPCWSTR pszServer,
    _In_opt_ LPCWSTR pszEnvironment,
    _In_opt_ LPCWSTR pszLanguage,
    _In_ LPCWSTR pszPackageID,
    _Inout_updates_opt_(cchDriverPackageCab) LPWSTR pszDriverPackageCab,
    _In_opt_ DWORD cchDriverPackageCab,
    _Out_ LPDWORD pcchRequiredSize
    );
    HRESULT
    WINAPI
    DeletePrinterDriverPackageA(
    _In_opt_ LPCSTR pszServer,
    _In_ LPCSTR pszInfPath,
    _In_opt_ LPCSTR pszEnvironment
    );
    HRESULT
    WINAPI
    DeletePrinterDriverPackageW(
    _In_opt_ LPCWSTR pszServer,
    _In_ LPCWSTR pszInfPath,
    _In_opt_ LPCWSTR pszEnvironment
    );
    typedef enum
    {
        kPropertyTypeString = 1,
        kPropertyTypeInt32,
        kPropertyTypeInt64,
        kPropertyTypeByte,
        kPropertyTypeTime,
        kPropertyTypeDevMode,
        kPropertyTypeSD,
        kPropertyTypeNotificationReply,
        kPropertyTypeNotificationOptions,
        kPropertyTypeBuffer
    } EPrintPropertyType;
    typedef enum
    {
        kAddingDocumentSequence = 0,
        kDocumentSequenceAdded = 1,
        kAddingFixedDocument = 2,
        kFixedDocumentAdded = 3,
        kAddingFixedPage = 4,
        kFixedPageAdded = 5,
        kResourceAdded = 6,
        kFontAdded = 7,
        kImageAdded = 8,
        kXpsDocumentCommitted = 9
    } EPrintXPSJobProgress;
    typedef enum
    {
        kJobProduction = 1,
        kJobConsumption
    } EPrintXPSJobOperation;
    typedef struct
    {
        EPrintPropertyType ePropertyType;
        union
        {
            BYTE propertyByte;
            PWSTR propertyString;
            LONG propertyInt32;
            LONGLONG propertyInt64;
            struct {
                DWORD cbBuf;
                LPVOID pBuf;
            } propertyBlob;
        } value;
    }PrintPropertyValue;
    typedef struct
    {
        WCHAR* propertyName;
        PrintPropertyValue propertyValue;
    }PrintNamedProperty;
    typedef struct
    {
        ULONG numberOfProperties;
        PrintNamedProperty* propertiesCollection;
    }PrintPropertiesCollection;
    HRESULT
    WINAPI
    ReportJobProcessingProgress(
    _In_ HANDLE printerHandle,
                ULONG jobId,
                EPrintXPSJobOperation jobOperation,
                EPrintXPSJobProgress jobProgress
        );
    BOOL
    WINAPI
    GetPrinterDriver2A(
        _In_opt_ HWND hWnd,
        _In_ HANDLE hPrinter,
        _In_opt_ LPSTR pEnvironment,
                    DWORD Level,
        _Out_writes_bytes_opt_(cbBuf)
                    LPBYTE pDriverInfo,
                    DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
    );
    BOOL
    WINAPI
    GetPrinterDriver2W(
        _In_opt_ HWND hWnd,
        _In_ HANDLE hPrinter,
        _In_opt_ LPWSTR pEnvironment,
                    DWORD Level,
        _Out_writes_bytes_opt_(cbBuf)
                    LPBYTE pDriverInfo,
                    DWORD cbBuf,
        _Out_ LPDWORD pcbNeeded
    );
typedef enum
{
    PRINT_EXECUTION_CONTEXT_APPLICATION = 0,
    PRINT_EXECUTION_CONTEXT_SPOOLER_SERVICE = 1,
    PRINT_EXECUTION_CONTEXT_SPOOLER_ISOLATION_HOST = 2,
    PRINT_EXECUTION_CONTEXT_FILTER_PIPELINE = 3,
    PRINT_EXECUTION_CONTEXT_WOW64 = 4
}
PRINT_EXECUTION_CONTEXT;
typedef struct
{
    PRINT_EXECUTION_CONTEXT context;
    DWORD clientAppPID;
}
PRINT_EXECUTION_DATA;
BOOL
WINAPI
GetPrintExecutionData(
    _Out_ PRINT_EXECUTION_DATA *pData
    );
DWORD
WINAPI
GetJobNamedPropertyValue(
    _In_ HANDLE hPrinter,
    _In_ DWORD JobId,
    _In_ PCWSTR pszName,
    _Out_ PrintPropertyValue *pValue
    );
void
WINAPI
FreePrintPropertyValue(
    _Inout_ PrintPropertyValue *pValue
    );
void
WINAPI
FreePrintNamedPropertyArray(
    _In_ DWORD cProperties,
    _Inout_opt_
        _At_(*ppProperties, _Pre_readable_size_(cProperties) _Post_null_)
                                      PrintNamedProperty **ppProperties
    );
DWORD
WINAPI
SetJobNamedProperty(
    _In_ HANDLE hPrinter,
    _In_ DWORD JobId,
    _In_ const PrintNamedProperty *pProperty
    );
DWORD
WINAPI
DeleteJobNamedProperty(
    _In_ HANDLE hPrinter,
    _In_ DWORD JobId,
    _In_ PCWSTR pszName
    );
DWORD
WINAPI
EnumJobNamedProperties(
    _In_ HANDLE hPrinter,
    _In_ DWORD JobId,
    _Out_ DWORD *pcProperties,
    _Outptr_result_buffer_(*pcProperties)
          PrintNamedProperty **ppProperties
    );
HRESULT
WINAPI
GetPrintOutputInfo(
    _In_ HWND hWnd,
    _In_ PCWSTR pszPrinter,
    _Outptr_ HANDLE *phFile,
    _Outptr_ PWSTR *ppszOutputFile
    );
#endif
#pragma endregion
}
