#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <tapi.h>
extern "C" {
typedef enum
{
    FAXLOG_LEVEL_NONE = 0,
    FAXLOG_LEVEL_MIN,
    FAXLOG_LEVEL_MED,
    FAXLOG_LEVEL_MAX
} FAX_ENUM_LOG_LEVELS;
typedef enum
{
    FAXLOG_CATEGORY_INIT = 1,
    FAXLOG_CATEGORY_OUTBOUND,
    FAXLOG_CATEGORY_INBOUND,
    FAXLOG_CATEGORY_UNKNOWN
} FAX_ENUM_LOG_CATEGORIES;
typedef struct _FAX_LOG_CATEGORYA
{
    LPCSTR Name;
    DWORD Category;
    DWORD Level;
} FAX_LOG_CATEGORYA, *PFAX_LOG_CATEGORYA;
typedef struct _FAX_LOG_CATEGORYW
{
    LPCWSTR Name;
    DWORD Category;
    DWORD Level;
} FAX_LOG_CATEGORYW, *PFAX_LOG_CATEGORYW;
typedef FAX_LOG_CATEGORYW FAX_LOG_CATEGORY;
typedef PFAX_LOG_CATEGORYW PFAX_LOG_CATEGORY;
typedef struct _FAX_TIME
{
    WORD Hour;
    WORD Minute;
} FAX_TIME, *PFAX_TIME;
typedef struct _FAX_CONFIGURATIONA
{
    DWORD SizeOfStruct;
    DWORD Retries;
    DWORD RetryDelay;
    DWORD DirtyDays;
    BOOL Branding;
    BOOL UseDeviceTsid;
    BOOL ServerCp;
    BOOL PauseServerQueue;
    FAX_TIME StartCheapTime;
    FAX_TIME StopCheapTime;
    BOOL ArchiveOutgoingFaxes;
    LPCSTR ArchiveDirectory;
    LPCSTR Reserved;
} FAX_CONFIGURATIONA, *PFAX_CONFIGURATIONA;
typedef struct _FAX_CONFIGURATIONW
{
    DWORD SizeOfStruct;
    DWORD Retries;
    DWORD RetryDelay;
    DWORD DirtyDays;
    BOOL Branding;
    BOOL UseDeviceTsid;
    BOOL ServerCp;
    BOOL PauseServerQueue;
    FAX_TIME StartCheapTime;
    FAX_TIME StopCheapTime;
    BOOL ArchiveOutgoingFaxes;
    LPCWSTR ArchiveDirectory;
    LPCWSTR Reserved;
} FAX_CONFIGURATIONW, *PFAX_CONFIGURATIONW;
typedef FAX_CONFIGURATIONW FAX_CONFIGURATION;
typedef PFAX_CONFIGURATIONW PFAX_CONFIGURATION;
typedef enum
{
    JC_UNKNOWN = 0,
    JC_DELETE,
    JC_PAUSE,
    JC_RESUME
} FAX_ENUM_JOB_COMMANDS;
typedef struct _FAX_DEVICE_STATUSA
{
    DWORD SizeOfStruct;
    LPCSTR CallerId;
    LPCSTR Csid;
    DWORD CurrentPage;
    DWORD DeviceId;
    LPCSTR DeviceName;
    LPCSTR DocumentName;
    DWORD JobType;
    LPCSTR PhoneNumber;
    LPCSTR RoutingString;
    LPCSTR SenderName;
    LPCSTR RecipientName;
    DWORD Size;
    FILETIME StartTime;
    DWORD Status;
    LPCSTR StatusString;
    FILETIME SubmittedTime;
    DWORD TotalPages;
    LPCSTR Tsid;
    LPCSTR UserName;
} FAX_DEVICE_STATUSA, *PFAX_DEVICE_STATUSA;
typedef struct _FAX_DEVICE_STATUSW
{
    DWORD SizeOfStruct;
    LPCWSTR CallerId;
    LPCWSTR Csid;
    DWORD CurrentPage;
    DWORD DeviceId;
    LPCWSTR DeviceName;
    LPCWSTR DocumentName;
    DWORD JobType;
    LPCWSTR PhoneNumber;
    LPCWSTR RoutingString;
    LPCWSTR SenderName;
    LPCWSTR RecipientName;
    DWORD Size;
    FILETIME StartTime;
    DWORD Status;
    LPCWSTR StatusString;
    FILETIME SubmittedTime;
    DWORD TotalPages;
    LPCWSTR Tsid;
    LPCWSTR UserName;
} FAX_DEVICE_STATUSW, *PFAX_DEVICE_STATUSW;
typedef FAX_DEVICE_STATUSW FAX_DEVICE_STATUS;
typedef PFAX_DEVICE_STATUSW PFAX_DEVICE_STATUS;
typedef struct _FAX_JOB_ENTRYA
{
    DWORD SizeOfStruct;
    DWORD JobId;
    LPCSTR UserName;
    DWORD JobType;
    DWORD QueueStatus;
    DWORD Status;
    DWORD Size;
    DWORD PageCount;
    LPCSTR RecipientNumber;
    LPCSTR RecipientName;
    LPCSTR Tsid;
    LPCSTR SenderName;
    LPCSTR SenderCompany;
    LPCSTR SenderDept;
    LPCSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCSTR DeliveryReportAddress;
    LPCSTR DocumentName;
} FAX_JOB_ENTRYA, *PFAX_JOB_ENTRYA;
typedef struct _FAX_JOB_ENTRYW
{
    DWORD SizeOfStruct;
    DWORD JobId;
    LPCWSTR UserName;
    DWORD JobType;
    DWORD QueueStatus;
    DWORD Status;
    DWORD Size;
    DWORD PageCount;
    LPCWSTR RecipientNumber;
    LPCWSTR RecipientName;
    LPCWSTR Tsid;
    LPCWSTR SenderName;
    LPCWSTR SenderCompany;
    LPCWSTR SenderDept;
    LPCWSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCWSTR DeliveryReportAddress;
    LPCWSTR DocumentName;
} FAX_JOB_ENTRYW, *PFAX_JOB_ENTRYW;
typedef FAX_JOB_ENTRYW FAX_JOB_ENTRY;
typedef PFAX_JOB_ENTRYW PFAX_JOB_ENTRY;
typedef struct _FAX_PORT_INFOA
{
    DWORD SizeOfStruct;
    DWORD DeviceId;
    DWORD State;
    DWORD Flags;
    DWORD Rings;
    DWORD Priority;
    LPCSTR DeviceName;
    LPCSTR Tsid;
    LPCSTR Csid;
} FAX_PORT_INFOA, *PFAX_PORT_INFOA;
typedef struct _FAX_PORT_INFOW
{
    DWORD SizeOfStruct;
    DWORD DeviceId;
    DWORD State;
    DWORD Flags;
    DWORD Rings;
    DWORD Priority;
    LPCWSTR DeviceName;
    LPCWSTR Tsid;
    LPCWSTR Csid;
} FAX_PORT_INFOW, *PFAX_PORT_INFOW;
typedef FAX_PORT_INFOW FAX_PORT_INFO;
typedef PFAX_PORT_INFOW PFAX_PORT_INFO;
typedef struct _FAX_ROUTING_METHODA
{
    DWORD SizeOfStruct;
    DWORD DeviceId;
    BOOL Enabled;
    LPCSTR DeviceName;
    LPCSTR Guid;
    LPCSTR FriendlyName;
    LPCSTR FunctionName;
    LPCSTR ExtensionImageName;
    LPCSTR ExtensionFriendlyName;
} FAX_ROUTING_METHODA, *PFAX_ROUTING_METHODA;
typedef struct _FAX_ROUTING_METHODW
{
    DWORD SizeOfStruct;
    DWORD DeviceId;
    BOOL Enabled;
    LPCWSTR DeviceName;
    LPCWSTR Guid;
    LPCWSTR FriendlyName;
    LPCWSTR FunctionName;
    LPCWSTR ExtensionImageName;
    LPCWSTR ExtensionFriendlyName;
} FAX_ROUTING_METHODW, *PFAX_ROUTING_METHODW;
typedef FAX_ROUTING_METHODW FAX_ROUTING_METHOD;
typedef PFAX_ROUTING_METHODW PFAX_ROUTING_METHOD;
typedef struct _FAX_GLOBAL_ROUTING_INFOA
{
    DWORD SizeOfStruct;
    DWORD Priority;
    LPCSTR Guid;
    LPCSTR FriendlyName;
    LPCSTR FunctionName;
    LPCSTR ExtensionImageName;
    LPCSTR ExtensionFriendlyName;
} FAX_GLOBAL_ROUTING_INFOA, *PFAX_GLOBAL_ROUTING_INFOA;
typedef struct _FAX_GLOBAL_ROUTING_INFOW
{
    DWORD SizeOfStruct;
    DWORD Priority;
    LPCWSTR Guid;
    LPCWSTR FriendlyName;
    LPCWSTR FunctionName;
    LPCWSTR ExtensionImageName;
    LPCWSTR ExtensionFriendlyName;
} FAX_GLOBAL_ROUTING_INFOW, *PFAX_GLOBAL_ROUTING_INFOW;
typedef FAX_GLOBAL_ROUTING_INFOW FAX_GLOBAL_ROUTING_INFO;
typedef PFAX_GLOBAL_ROUTING_INFOW PFAX_GLOBAL_ROUTING_INFO;
typedef struct _FAX_COVERPAGE_INFOA
{
    DWORD SizeOfStruct;
    LPCSTR CoverPageName;
    BOOL UseServerCoverPage;
    LPCSTR RecName;
    LPCSTR RecFaxNumber;
    LPCSTR RecCompany;
    LPCSTR RecStreetAddress;
    LPCSTR RecCity;
    LPCSTR RecState;
    LPCSTR RecZip;
    LPCSTR RecCountry;
    LPCSTR RecTitle;
    LPCSTR RecDepartment;
    LPCSTR RecOfficeLocation;
    LPCSTR RecHomePhone;
    LPCSTR RecOfficePhone;
    LPCSTR SdrName;
    LPCSTR SdrFaxNumber;
    LPCSTR SdrCompany;
    LPCSTR SdrAddress;
    LPCSTR SdrTitle;
    LPCSTR SdrDepartment;
    LPCSTR SdrOfficeLocation;
    LPCSTR SdrHomePhone;
    LPCSTR SdrOfficePhone;
    LPCSTR Note;
    LPCSTR Subject;
    SYSTEMTIME TimeSent;
    DWORD PageCount;
} FAX_COVERPAGE_INFOA, *PFAX_COVERPAGE_INFOA;
typedef struct _FAX_COVERPAGE_INFOW
{
    DWORD SizeOfStruct;
    LPCWSTR CoverPageName;
    BOOL UseServerCoverPage;
    LPCWSTR RecName;
    LPCWSTR RecFaxNumber;
    LPCWSTR RecCompany;
    LPCWSTR RecStreetAddress;
    LPCWSTR RecCity;
    LPCWSTR RecState;
    LPCWSTR RecZip;
    LPCWSTR RecCountry;
    LPCWSTR RecTitle;
    LPCWSTR RecDepartment;
    LPCWSTR RecOfficeLocation;
    LPCWSTR RecHomePhone;
    LPCWSTR RecOfficePhone;
    LPCWSTR SdrName;
    LPCWSTR SdrFaxNumber;
    LPCWSTR SdrCompany;
    LPCWSTR SdrAddress;
    LPCWSTR SdrTitle;
    LPCWSTR SdrDepartment;
    LPCWSTR SdrOfficeLocation;
    LPCWSTR SdrHomePhone;
    LPCWSTR SdrOfficePhone;
    LPCWSTR Note;
    LPCWSTR Subject;
    SYSTEMTIME TimeSent;
    DWORD PageCount;
} FAX_COVERPAGE_INFOW, *PFAX_COVERPAGE_INFOW;
typedef FAX_COVERPAGE_INFOW FAX_COVERPAGE_INFO;
typedef PFAX_COVERPAGE_INFOW PFAX_COVERPAGE_INFO;
typedef enum
{
    JSA_NOW = 0,
    JSA_SPECIFIC_TIME,
    JSA_DISCOUNT_PERIOD
} FAX_ENUM_JOB_SEND_ATTRIBUTES;
typedef enum
{
    DRT_NONE = 0x0000,
    DRT_EMAIL = 0x0001,
    DRT_INBOX = 0x0002
} FAX_ENUM_DELIVERY_REPORT_TYPES;
typedef struct _FAX_JOB_PARAMA
{
    DWORD SizeOfStruct;
    LPCSTR RecipientNumber;
    LPCSTR RecipientName;
    LPCSTR Tsid;
    LPCSTR SenderName;
    LPCSTR SenderCompany;
    LPCSTR SenderDept;
    LPCSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCSTR DeliveryReportAddress;
    LPCSTR DocumentName;
    HCALL CallHandle;
    DWORD_PTR Reserved[3];
} FAX_JOB_PARAMA, *PFAX_JOB_PARAMA;
typedef struct _FAX_JOB_PARAMW
{
    DWORD SizeOfStruct;
    LPCWSTR RecipientNumber;
    LPCWSTR RecipientName;
    LPCWSTR Tsid;
    LPCWSTR SenderName;
    LPCWSTR SenderCompany;
    LPCWSTR SenderDept;
    LPCWSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCWSTR DeliveryReportAddress;
    LPCWSTR DocumentName;
    HCALL CallHandle;
    DWORD_PTR Reserved[3];
} FAX_JOB_PARAMW, *PFAX_JOB_PARAMW;
typedef FAX_JOB_PARAMW FAX_JOB_PARAM;
typedef PFAX_JOB_PARAMW PFAX_JOB_PARAM;
typedef struct _FAX_EVENTA
{
    DWORD SizeOfStruct;
    FILETIME TimeStamp;
    DWORD DeviceId;
    DWORD EventId;
    DWORD JobId;
} FAX_EVENTA, *PFAX_EVENTA;
typedef struct _FAX_EVENTW
{
    DWORD SizeOfStruct;
    FILETIME TimeStamp;
    DWORD DeviceId;
    DWORD EventId;
    DWORD JobId;
} FAX_EVENTW, *PFAX_EVENTW;
typedef FAX_EVENTW FAX_EVENT;
typedef PFAX_EVENTW PFAX_EVENT;
typedef struct _FAX_PRINT_INFOA
{
    DWORD SizeOfStruct;
    LPCSTR DocName;
    LPCSTR RecipientName;
    LPCSTR RecipientNumber;
    LPCSTR SenderName;
    LPCSTR SenderCompany;
    LPCSTR SenderDept;
    LPCSTR SenderBillingCode;
    LPCSTR Reserved;
    LPCSTR DrEmailAddress;
    LPCSTR OutputFileName;
} FAX_PRINT_INFOA, *PFAX_PRINT_INFOA;
typedef struct _FAX_PRINT_INFOW
{
    DWORD SizeOfStruct;
    LPCWSTR DocName;
    LPCWSTR RecipientName;
    LPCWSTR RecipientNumber;
    LPCWSTR SenderName;
    LPCWSTR SenderCompany;
    LPCWSTR SenderDept;
    LPCWSTR SenderBillingCode;
    LPCWSTR Reserved;
    LPCWSTR DrEmailAddress;
    LPCWSTR OutputFileName;
} FAX_PRINT_INFOW, *PFAX_PRINT_INFOW;
typedef FAX_PRINT_INFOW FAX_PRINT_INFO;
typedef PFAX_PRINT_INFOW PFAX_PRINT_INFO;
typedef struct _FAX_CONTEXT_INFOA
{
    DWORD SizeOfStruct;
    HDC hDC;
    CHAR ServerName[MAX_COMPUTERNAME_LENGTH+1];
} FAX_CONTEXT_INFOA, *PFAX_CONTEXT_INFOA;
typedef struct _FAX_CONTEXT_INFOW
{
    DWORD SizeOfStruct;
    HDC hDC;
    WCHAR ServerName[MAX_COMPUTERNAME_LENGTH+1];
} FAX_CONTEXT_INFOW, *PFAX_CONTEXT_INFOW;
typedef FAX_CONTEXT_INFOW FAX_CONTEXT_INFO;
typedef PFAX_CONTEXT_INFOW PFAX_CONTEXT_INFO;
WINFAXAPI
BOOL
WINAPI
FaxConnectFaxServerA(
    IN LPCSTR MachineName OPTIONAL,
    OUT LPHANDLE FaxHandle
    );
WINFAXAPI
BOOL
WINAPI
FaxConnectFaxServerW(
    IN LPCWSTR MachineName OPTIONAL,
    OUT LPHANDLE FaxHandle
    );
typedef BOOL
(WINAPI *PFAXCONNECTFAXSERVERA)(
    IN LPCSTR MachineName OPTIONAL,
    OUT LPHANDLE FaxHandle
    );
typedef BOOL
(WINAPI *PFAXCONNECTFAXSERVERW)(
    IN LPCWSTR MachineName OPTIONAL,
    OUT LPHANDLE FaxHandle
    );
WINFAXAPI
BOOL
WINAPI
FaxClose(
    IN HANDLE FaxHandle
    );
typedef BOOL
(WINAPI *PFAXCLOSE)(
    IN HANDLE FaxHandle
    );
typedef enum
{
    PORT_OPEN_QUERY = 1,
    PORT_OPEN_MODIFY
} FAX_ENUM_PORT_OPEN_TYPE;
WINFAXAPI
BOOL
WINAPI
FaxOpenPort(
    IN HANDLE FaxHandle,
    IN DWORD DeviceId,
    IN DWORD Flags,
    OUT LPHANDLE FaxPortHandle
    );
typedef BOOL
(WINAPI *PFAXOPENPORT)(
    IN HANDLE FaxHandle,
    IN DWORD DeviceId,
    IN DWORD Flags,
    OUT LPHANDLE FaxPortHandle
    );
WINFAXAPI
BOOL
WINAPI
FaxCompleteJobParamsA(
    IN OUT PFAX_JOB_PARAMA *JobParams,
    IN OUT PFAX_COVERPAGE_INFOA *CoverpageInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxCompleteJobParamsW(
    IN OUT PFAX_JOB_PARAMW *JobParams,
    IN OUT PFAX_COVERPAGE_INFOW *CoverpageInfo
    );
typedef BOOL
(WINAPI *PFAXCOMPLETEJOBPARAMSA)(
    IN OUT PFAX_JOB_PARAMA *JobParams,
    IN OUT PFAX_COVERPAGE_INFOA *CoverpageInfo
    );
typedef BOOL
(WINAPI *PFAXCOMPLETEJOBPARAMSW)(
    IN OUT PFAX_JOB_PARAMW *JobParams,
    IN OUT PFAX_COVERPAGE_INFOW *CoverpageInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxSendDocumentA(
    IN HANDLE FaxHandle,
    IN LPCSTR FileName,
    IN PFAX_JOB_PARAMA JobParams,
    IN const FAX_COVERPAGE_INFOA *CoverpageInfo, OPTIONAL
    OUT LPDWORD FaxJobId OPTIONAL
    );
WINFAXAPI
BOOL
WINAPI
FaxSendDocumentW(
    IN HANDLE FaxHandle,
    IN LPCWSTR FileName,
    IN PFAX_JOB_PARAMW JobParams,
    IN const FAX_COVERPAGE_INFOW *CoverpageInfo, OPTIONAL
    OUT LPDWORD FaxJobId OPTIONAL
    );
typedef BOOL
(WINAPI *PFAXSENDDOCUMENTA)(
    IN HANDLE FaxHandle,
    IN LPCSTR FileName,
    IN PFAX_JOB_PARAMA JobParams,
    IN const FAX_COVERPAGE_INFOA *CoverpageInfo, OPTIONAL
    OUT LPDWORD FaxJobId OPTIONAL
    );
typedef BOOL
(WINAPI *PFAXSENDDOCUMENTW)(
    IN HANDLE FaxHandle,
    IN LPCWSTR FileName,
    IN PFAX_JOB_PARAMW JobParams,
    IN const FAX_COVERPAGE_INFOW *CoverpageInfo, OPTIONAL
    OUT LPDWORD FaxJobId OPTIONAL
    );
typedef BOOL
(CALLBACK *PFAX_RECIPIENT_CALLBACKA)(
    IN HANDLE FaxHandle,
    IN DWORD RecipientNumber,
    IN LPVOID Context,
    IN OUT PFAX_JOB_PARAMA JobParams,
    IN OUT PFAX_COVERPAGE_INFOA CoverpageInfo OPTIONAL
    );
typedef BOOL
(CALLBACK *PFAX_RECIPIENT_CALLBACKW)(
    IN HANDLE FaxHandle,
    IN DWORD RecipientNumber,
    IN LPVOID Context,
    IN OUT PFAX_JOB_PARAMW JobParams,
    IN OUT PFAX_COVERPAGE_INFOW CoverpageInfo OPTIONAL
    );
WINFAXAPI
BOOL
WINAPI
FaxSendDocumentForBroadcastA(
    IN HANDLE FaxHandle,
    IN LPCSTR FileName,
    OUT LPDWORD FaxJobId,
    IN PFAX_RECIPIENT_CALLBACKA FaxRecipientCallback,
    IN LPVOID Context
    );
WINFAXAPI
BOOL
WINAPI
FaxSendDocumentForBroadcastW(
    IN HANDLE FaxHandle,
    IN LPCWSTR FileName,
    OUT LPDWORD FaxJobId,
    IN PFAX_RECIPIENT_CALLBACKW FaxRecipientCallback,
    IN LPVOID Context
    );
typedef BOOL
(WINAPI *PFAXSENDDOCUMENTFORBROADCASTA)(
    IN HANDLE FaxHandle,
    IN LPCSTR FileName,
    OUT LPDWORD FaxJobId,
    IN PFAX_RECIPIENT_CALLBACKA FaxRecipientCallback,
    IN LPVOID Context
    );
typedef BOOL
(WINAPI *PFAXSENDDOCUMENTFORBROADCASTW)(
    IN HANDLE FaxHandle,
    IN LPCWSTR FileName,
    OUT LPDWORD FaxJobId,
    IN PFAX_RECIPIENT_CALLBACKW FaxRecipientCallback,
    IN LPVOID Context
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumJobsA(
    IN HANDLE FaxHandle,
    OUT PFAX_JOB_ENTRYA *JobEntry,
    OUT LPDWORD JobsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumJobsW(
    IN HANDLE FaxHandle,
    OUT PFAX_JOB_ENTRYW *JobEntry,
    OUT LPDWORD JobsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMJOBSA)(
    IN HANDLE FaxHandle,
    OUT PFAX_JOB_ENTRYA *JobEntry,
    OUT LPDWORD JobsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMJOBSW)(
    IN HANDLE FaxHandle,
    OUT PFAX_JOB_ENTRYW *JobEntry,
    OUT LPDWORD JobsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxGetJobA(
   IN HANDLE FaxHandle,
   IN DWORD JobId,
   OUT PFAX_JOB_ENTRYA *JobEntry
   );
WINFAXAPI
BOOL
WINAPI
FaxGetJobW(
   IN HANDLE FaxHandle,
   IN DWORD JobId,
   OUT PFAX_JOB_ENTRYW *JobEntry
   );
typedef BOOL
(WINAPI *PFAXGETJOBA)(
    IN HANDLE FaxHandle,
    IN DWORD JobId,
    OUT PFAX_JOB_ENTRYA *JobEntry
    );
typedef BOOL
(WINAPI *PFAXGETJOBW)(
    IN HANDLE FaxHandle,
    IN DWORD JobId,
    OUT PFAX_JOB_ENTRYW *JobEntry
    );
WINFAXAPI
BOOL
WINAPI
FaxSetJobA(
   IN HANDLE FaxHandle,
   IN DWORD JobId,
   IN DWORD Command,
   IN const FAX_JOB_ENTRYA *JobEntry
   );
WINFAXAPI
BOOL
WINAPI
FaxSetJobW(
   IN HANDLE FaxHandle,
   IN DWORD JobId,
   IN DWORD Command,
   IN const FAX_JOB_ENTRYW *JobEntry
   );
typedef BOOL
(WINAPI *PFAXSETJOBA)(
    IN HANDLE FaxHandle,
    IN DWORD JobId,
    IN DWORD Command,
    IN const FAX_JOB_ENTRYA *JobEntry
    );
typedef BOOL
(WINAPI *PFAXSETJOBW)(
    IN HANDLE FaxHandle,
    IN DWORD JobId,
    IN DWORD Command,
    IN const FAX_JOB_ENTRYW *JobEntry
    );
WINFAXAPI
BOOL
WINAPI
FaxGetPageData(
   IN HANDLE FaxHandle,
   IN DWORD JobId,
   OUT LPBYTE *Buffer,
   OUT LPDWORD BufferSize,
   OUT LPDWORD ImageWidth,
   OUT LPDWORD ImageHeight
   );
typedef BOOL
(WINAPI *PFAXGETPAGEDATA)(
   IN HANDLE FaxHandle,
   IN DWORD JobId,
   OUT LPBYTE *Buffer,
   OUT LPDWORD BufferSize,
   OUT LPDWORD ImageWidth,
   OUT LPDWORD ImageHeight
   );
WINFAXAPI
BOOL
WINAPI
FaxGetDeviceStatusA(
    IN HANDLE FaxPortHandle,
    OUT PFAX_DEVICE_STATUSA *DeviceStatus
    );
WINFAXAPI
BOOL
WINAPI
FaxGetDeviceStatusW(
    IN HANDLE FaxPortHandle,
    OUT PFAX_DEVICE_STATUSW *DeviceStatus
    );
typedef BOOL
(WINAPI *PFAXGETDEVICESTATUSA)(
    IN HANDLE FaxPortHandle,
    OUT PFAX_DEVICE_STATUSA *DeviceStatus
    );
typedef BOOL
(WINAPI *PFAXGETDEVICESTATUSW)(
    IN HANDLE FaxPortHandle,
    OUT PFAX_DEVICE_STATUSW *DeviceStatus
    );
WINFAXAPI
BOOL
WINAPI
FaxAbort(
    IN HANDLE FaxHandle,
    IN DWORD JobId
    );
typedef BOOL
(WINAPI *PFAXABORT)(
    IN HANDLE FaxHandle,
    IN DWORD JobId
    );
WINFAXAPI
BOOL
WINAPI
FaxGetConfigurationA(
    IN HANDLE FaxHandle,
    OUT PFAX_CONFIGURATIONA *FaxConfig
    );
WINFAXAPI
BOOL
WINAPI
FaxGetConfigurationW(
    IN HANDLE FaxHandle,
    OUT PFAX_CONFIGURATIONW *FaxConfig
    );
typedef BOOL
(WINAPI *PFAXGETCONFIGURATIONA)(
    IN HANDLE FaxHandle,
    OUT PFAX_CONFIGURATIONA *FaxConfig
    );
typedef BOOL
(WINAPI *PFAXGETCONFIGURATIONW)(
    IN HANDLE FaxHandle,
    OUT PFAX_CONFIGURATIONW *FaxConfig
    );
WINFAXAPI
BOOL
WINAPI
FaxSetConfigurationA(
    IN HANDLE FaxHandle,
    IN const FAX_CONFIGURATIONA *FaxConfig
    );
WINFAXAPI
BOOL
WINAPI
FaxSetConfigurationW(
    IN HANDLE FaxHandle,
    IN const FAX_CONFIGURATIONW *FaxConfig
    );
typedef BOOL
(WINAPI *PFAXSETCONFIGURATIONA)(
    IN HANDLE FaxHandle,
    IN const FAX_CONFIGURATIONA *FaxConfig
    );
typedef BOOL
(WINAPI *PFAXSETCONFIGURATIONW)(
    IN HANDLE FaxHandle,
    IN const FAX_CONFIGURATIONW *FaxConfig
    );
WINFAXAPI
BOOL
WINAPI
FaxGetLoggingCategoriesA(
    IN HANDLE FaxHandle,
    OUT PFAX_LOG_CATEGORYA *Categories,
    OUT LPDWORD NumberCategories
    );
WINFAXAPI
BOOL
WINAPI
FaxGetLoggingCategoriesW(
    IN HANDLE FaxHandle,
    OUT PFAX_LOG_CATEGORYW *Categories,
    OUT LPDWORD NumberCategories
    );
typedef BOOL
(WINAPI *PFAXGETLOGGINGCATEGORIESA)(
    IN HANDLE FaxHandle,
    OUT PFAX_LOG_CATEGORYA *Categories,
    OUT LPDWORD NumberCategories
    );
typedef BOOL
(WINAPI *PFAXGETLOGGINGCATEGORIESW)(
    IN HANDLE FaxHandle,
    OUT PFAX_LOG_CATEGORYW *Categories,
    OUT LPDWORD NumberCategories
    );
WINFAXAPI
BOOL
WINAPI
FaxSetLoggingCategoriesA(
    IN HANDLE FaxHandle,
    IN const FAX_LOG_CATEGORYA *Categories,
    IN DWORD NumberCategories
    );
WINFAXAPI
BOOL
WINAPI
FaxSetLoggingCategoriesW(
    IN HANDLE FaxHandle,
    IN const FAX_LOG_CATEGORYW *Categories,
    IN DWORD NumberCategories
    );
typedef BOOL
(WINAPI *PFAXSETLOGGINGCATEGORIESA)(
    IN HANDLE FaxHandle,
    IN const FAX_LOG_CATEGORYA *Categories,
    IN DWORD NumberCategories
    );
typedef BOOL
(WINAPI *PFAXSETLOGGINGCATEGORIESW)(
    IN HANDLE FaxHandle,
    IN const FAX_LOG_CATEGORYW *Categories,
    IN DWORD NumberCategories
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumPortsA(
    IN HANDLE FaxHandle,
    OUT PFAX_PORT_INFOA *PortInfo,
    OUT LPDWORD PortsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumPortsW(
    IN HANDLE FaxHandle,
    OUT PFAX_PORT_INFOW *PortInfo,
    OUT LPDWORD PortsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMPORTSA)(
    IN HANDLE FaxHandle,
    OUT PFAX_PORT_INFOA *PortInfo,
    OUT LPDWORD PortsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMPORTSW)(
    IN HANDLE FaxHandle,
    OUT PFAX_PORT_INFOW *PortInfo,
    OUT LPDWORD PortsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxGetPortA(
    IN HANDLE FaxPortHandle,
    OUT PFAX_PORT_INFOA *PortInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxGetPortW(
    IN HANDLE FaxPortHandle,
    OUT PFAX_PORT_INFOW *PortInfo
    );
typedef BOOL
(WINAPI *PFAXGETPORTA)(
    IN HANDLE FaxPortHandle,
    OUT PFAX_PORT_INFOA *PortInfo
    );
typedef BOOL
(WINAPI *PFAXGETPORTW)(
    IN HANDLE FaxPortHandle,
    OUT PFAX_PORT_INFOW *PortInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxSetPortA(
    IN HANDLE FaxPortHandle,
    IN const FAX_PORT_INFOA *PortInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxSetPortW(
    IN HANDLE FaxPortHandle,
    IN const FAX_PORT_INFOW *PortInfo
    );
typedef BOOL
(WINAPI *PFAXSETPORTA)(
    IN HANDLE FaxPortHandle,
    IN const FAX_PORT_INFOA *PortInfo
    );
typedef BOOL
(WINAPI *PFAXSETPORTW)(
    IN HANDLE FaxPortHandle,
    IN const FAX_PORT_INFOW *PortInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumRoutingMethodsA(
    IN HANDLE FaxPortHandle,
    OUT PFAX_ROUTING_METHODA *RoutingMethod,
    OUT LPDWORD MethodsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumRoutingMethodsW(
    IN HANDLE FaxPortHandle,
    OUT PFAX_ROUTING_METHODW *RoutingMethod,
    OUT LPDWORD MethodsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMROUTINGMETHODSA)(
    IN HANDLE FaxPortHandle,
    OUT PFAX_ROUTING_METHODA *RoutingMethod,
    OUT LPDWORD MethodsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMROUTINGMETHODSW)(
    IN HANDLE FaxPortHandle,
    OUT PFAX_ROUTING_METHODW *RoutingMethod,
    OUT LPDWORD MethodsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxEnableRoutingMethodA(
    IN HANDLE FaxPortHandle,
    IN LPCSTR RoutingGuid,
    IN BOOL Enabled
    );
WINFAXAPI
BOOL
WINAPI
FaxEnableRoutingMethodW(
    IN HANDLE FaxPortHandle,
    IN LPCWSTR RoutingGuid,
    IN BOOL Enabled
    );
typedef BOOL
(WINAPI *PFAXENABLEROUTINGMETHODA)(
    IN HANDLE FaxPortHandle,
    IN LPCSTR RoutingGuid,
    IN BOOL Enabled
    );
typedef BOOL
(WINAPI *PFAXENABLEROUTINGMETHODW)(
    IN HANDLE FaxPortHandle,
    IN LPCWSTR RoutingGuid,
    IN BOOL Enabled
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumGlobalRoutingInfoA(
    IN HANDLE FaxHandle,
    OUT PFAX_GLOBAL_ROUTING_INFOA *RoutingInfo,
    OUT LPDWORD MethodsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxEnumGlobalRoutingInfoW(
    IN HANDLE FaxHandle,
    OUT PFAX_GLOBAL_ROUTING_INFOW *RoutingInfo,
    OUT LPDWORD MethodsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMGLOBALROUTINGINFOA)(
    IN HANDLE FaxHandle,
    OUT PFAX_GLOBAL_ROUTING_INFOA *RoutingInfo,
    OUT LPDWORD MethodsReturned
    );
typedef BOOL
(WINAPI *PFAXENUMGLOBALROUTINGINFOW)(
    IN HANDLE FaxHandle,
    OUT PFAX_GLOBAL_ROUTING_INFOW *RoutingInfo,
    OUT LPDWORD MethodsReturned
    );
WINFAXAPI
BOOL
WINAPI
FaxSetGlobalRoutingInfoA(
    IN HANDLE FaxHandle,
    IN const FAX_GLOBAL_ROUTING_INFOA *RoutingInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxSetGlobalRoutingInfoW(
    IN HANDLE FaxHandle,
    IN const FAX_GLOBAL_ROUTING_INFOW *RoutingInfo
    );
typedef BOOL
(WINAPI *PFAXSETGLOBALROUTINGINFOA)(
    IN HANDLE FaxPortHandle,
    IN const FAX_GLOBAL_ROUTING_INFOA *RoutingInfo
    );
typedef BOOL
(WINAPI *PFAXSETGLOBALROUTINGINFOW)(
    IN HANDLE FaxPortHandle,
    IN const FAX_GLOBAL_ROUTING_INFOW *RoutingInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxGetRoutingInfoA(
    IN HANDLE FaxPortHandle,
    IN LPCSTR RoutingGuid,
    OUT LPBYTE *RoutingInfoBuffer,
    OUT LPDWORD RoutingInfoBufferSize
    );
WINFAXAPI
BOOL
WINAPI
FaxGetRoutingInfoW(
    IN HANDLE FaxPortHandle,
    IN LPCWSTR RoutingGuid,
    OUT LPBYTE *RoutingInfoBuffer,
    OUT LPDWORD RoutingInfoBufferSize
    );
typedef BOOL
(WINAPI *PFAXGETROUTINGINFOA)(
    IN HANDLE FaxPortHandle,
    IN LPCSTR RoutingGuid,
    OUT LPBYTE *RoutingInfoBuffer,
    OUT LPDWORD RoutingInfoBufferSize
    );
typedef BOOL
(WINAPI *PFAXGETROUTINGINFOW)(
    IN HANDLE FaxPortHandle,
    IN LPCWSTR RoutingGuid,
    OUT LPBYTE *RoutingInfoBuffer,
    OUT LPDWORD RoutingInfoBufferSize
    );
WINFAXAPI
BOOL
WINAPI
FaxSetRoutingInfoA(
    IN HANDLE FaxPortHandle,
    IN LPCSTR RoutingGuid,
    IN const BYTE *RoutingInfoBuffer,
    IN DWORD RoutingInfoBufferSize
    );
WINFAXAPI
BOOL
WINAPI
FaxSetRoutingInfoW(
    IN HANDLE FaxPortHandle,
    IN LPCWSTR RoutingGuid,
    IN const BYTE *RoutingInfoBuffer,
    IN DWORD RoutingInfoBufferSize
    );
typedef BOOL
(WINAPI *PFAXSETROUTINGINFOA)(
    IN HANDLE FaxPortHandle,
    IN LPCSTR RoutingGuid,
    IN const BYTE *RoutingInfoBuffer,
    IN DWORD RoutingInfoBufferSize
    );
typedef BOOL
(WINAPI *PFAXSETROUTINGINFOW)(
    IN HANDLE FaxPortHandle,
    IN LPCWSTR RoutingGuid,
    IN const BYTE *RoutingInfoBuffer,
    IN DWORD RoutingInfoBufferSize
    );
WINFAXAPI
BOOL
WINAPI
FaxInitializeEventQueue(
    IN HANDLE FaxHandle,
    IN HANDLE CompletionPort,
    IN ULONG_PTR CompletionKey,
    IN HWND hWnd,
    IN UINT MessageStart
    );
typedef BOOL
(WINAPI *PFAXINITIALIZEEVENTQUEUE)(
    IN HANDLE FaxHandle,
    IN HANDLE CompletionPort,
    IN ULONG_PTR CompletionKey,
    IN HWND hWnd,
    IN UINT MessageStart
    );
WINFAXAPI
VOID
WINAPI
FaxFreeBuffer(
    LPVOID Buffer
    );
typedef VOID
(WINAPI *PFAXFREEBUFFER)(
    LPVOID Buffer
    );
WINFAXAPI
BOOL
WINAPI
FaxStartPrintJobA(
    IN LPCSTR PrinterName,
    IN const FAX_PRINT_INFOA *PrintInfo,
    OUT LPDWORD FaxJobId,
    OUT PFAX_CONTEXT_INFOA FaxContextInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxStartPrintJobW(
    IN LPCWSTR PrinterName,
    IN const FAX_PRINT_INFOW *PrintInfo,
    OUT LPDWORD FaxJobId,
    OUT PFAX_CONTEXT_INFOW FaxContextInfo
    );
typedef BOOL
(WINAPI *PFAXSTARTPRINTJOBA)(
    IN LPCSTR PrinterName,
    IN const FAX_PRINT_INFOA *PrintInfo,
    OUT LPDWORD FaxJobId,
    OUT PFAX_CONTEXT_INFOA FaxContextInfo
    );
typedef BOOL
(WINAPI *PFAXSTARTPRINTJOBW)(
    IN LPCWSTR PrinterName,
    IN const FAX_PRINT_INFOW *PrintInfo,
    OUT LPDWORD FaxJobId,
    OUT PFAX_CONTEXT_INFOW FaxContextInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxPrintCoverPageA(
    IN const FAX_CONTEXT_INFOA *FaxContextInfo,
    IN const FAX_COVERPAGE_INFOA *CoverPageInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxPrintCoverPageW(
    IN const FAX_CONTEXT_INFOW *FaxContextInfo,
    IN const FAX_COVERPAGE_INFOW *CoverPageInfo
    );
typedef BOOL
(WINAPI *PFAXPRINTCOVERPAGEA)(
    IN const FAX_CONTEXT_INFOA *FaxContextInfo,
    IN const FAX_COVERPAGE_INFOA *CoverPageInfo
    );
typedef BOOL
(WINAPI *PFAXPRINTCOVERPAGEW)(
    IN const FAX_CONTEXT_INFOW *FaxContextInfo,
    IN const FAX_COVERPAGE_INFOW *CoverPageInfo
    );
WINFAXAPI
BOOL
WINAPI
FaxRegisterServiceProviderW(
    IN LPCWSTR DeviceProvider,
    IN LPCWSTR FriendlyName,
    IN LPCWSTR ImageName,
    IN LPCWSTR TspName
    );
typedef BOOL
(WINAPI *PFAXREGISTERSERVICEPROVIDERW)(
    IN LPCWSTR DeviceProvider,
    IN LPCWSTR FriendlyName,
    IN LPCWSTR ImageName,
    IN LPCWSTR TspName
    );
WINFAXAPI
BOOL
WINAPI
FaxUnregisterServiceProviderW(
    IN LPCWSTR DeviceProvider
    );
typedef BOOL
(WINAPI *PFAXUNREGISTERSERVICEPROVIDERW)(
    IN LPCWSTR DeviceProvider
    );
typedef BOOL
(CALLBACK *PFAX_ROUTING_INSTALLATION_CALLBACKW)(
    IN HANDLE FaxHandle,
    IN LPVOID Context,
    IN OUT LPWSTR MethodName,
    IN OUT LPWSTR FriendlyName,
    IN OUT LPWSTR FunctionName,
    IN OUT LPWSTR Guid
    );
WINFAXAPI
BOOL
WINAPI
FaxRegisterRoutingExtensionW(
    IN HANDLE FaxHandle,
    IN LPCWSTR ExtensionName,
    IN LPCWSTR FriendlyName,
    IN LPCWSTR ImageName,
    IN PFAX_ROUTING_INSTALLATION_CALLBACKW CallBack,
    IN LPVOID Context
    );
typedef BOOL
(WINAPI *PFAXREGISTERROUTINGEXTENSIONW)(
    IN HANDLE FaxHandle,
    IN LPCWSTR ExtensionName,
    IN LPCWSTR FriendlyName,
    IN LPCWSTR ImageName,
    IN PFAX_ROUTING_INSTALLATION_CALLBACKW CallBack,
    IN LPVOID Context
    );
WINFAXAPI
BOOL
WINAPI
FaxUnregisterRoutingExtensionA(
    IN HANDLE hFaxHandle,
    IN LPCSTR lpctstrExtensionName
);
WINFAXAPI
BOOL
WINAPI
FaxUnregisterRoutingExtensionW(
    IN HANDLE hFaxHandle,
    IN LPCWSTR lpctstrExtensionName
);
WINFAXAPI
BOOL
WINAPI
FaxAccessCheck(
    IN HANDLE FaxHandle,
    IN DWORD AccessMask
    );
typedef BOOL
(WINAPI *PFAXACCESSCHECK)(
    IN HANDLE FaxHandle,
    IN DWORD AccessMask
    );
                                 FAX_JOB_QUERY |\
                                 FAX_CONFIG_QUERY |\
                                 FAX_PORT_QUERY)
                                 FAX_JOB_SUBMIT )
                                 FAX_JOB_SUBMIT |\
                                 FAX_JOB_QUERY |\
                                 FAX_CONFIG_QUERY |\
                                 FAX_CONFIG_SET |\
                                 FAX_PORT_QUERY |\
                                 FAX_PORT_SET |\
                                 FAX_JOB_MANAGE)
}
#endif
#pragma endregion
