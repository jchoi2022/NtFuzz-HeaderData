#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef GUID *LPGUID;
#include <spapidef.h>
#include <commctrl.h>
#include <devpropdef.h>
#include <pshpack8.h>
extern "C" {
typedef PVOID HINF;
typedef struct _INFCONTEXT {
    PVOID Inf;
    PVOID CurrentInf;
    UINT Section;
    UINT Line;
} INFCONTEXT, *PINFCONTEXT;
typedef struct _SP_INF_INFORMATION {
    DWORD InfStyle;
    DWORD InfCount;
    BYTE VersionData[ANYSIZE_ARRAY];
} SP_INF_INFORMATION, *PSP_INF_INFORMATION;
typedef struct _SP_ALTPLATFORM_INFO_V3 {
    DWORD cbSize;
    DWORD Platform;
    DWORD MajorVersion;
    DWORD MinorVersion;
    WORD ProcessorArchitecture;
    union {
        WORD Reserved;
        WORD Flags;
    } DUMMYUNIONNAME;
    DWORD FirstValidatedMajorVersion;
    DWORD FirstValidatedMinorVersion;
    BYTE ProductType;
    WORD SuiteMask;
    DWORD BuildNumber;
} SP_ALTPLATFORM_INFO_V3, *PSP_ALTPLATFORM_INFO_V3;
typedef struct _SP_ALTPLATFORM_INFO_V2 {
    DWORD cbSize;
    DWORD Platform;
    DWORD MajorVersion;
    DWORD MinorVersion;
    WORD ProcessorArchitecture;
    union {
        WORD Reserved;
        WORD Flags;
    } DUMMYUNIONNAME;
    DWORD FirstValidatedMajorVersion;
    DWORD FirstValidatedMinorVersion;
} SP_ALTPLATFORM_INFO_V2, *PSP_ALTPLATFORM_INFO_V2;
typedef struct _SP_ALTPLATFORM_INFO_V1 {
    DWORD cbSize;
    DWORD Platform;
    DWORD MajorVersion;
    DWORD MinorVersion;
    WORD ProcessorArchitecture;
    WORD Reserved;
} SP_ALTPLATFORM_INFO_V1, *PSP_ALTPLATFORM_INFO_V1;
typedef SP_ALTPLATFORM_INFO_V2 SP_ALTPLATFORM_INFO;
typedef PSP_ALTPLATFORM_INFO_V2 PSP_ALTPLATFORM_INFO;
typedef struct _SP_ORIGINAL_FILE_INFO_A {
    DWORD cbSize;
    CHAR OriginalInfName[MAX_PATH];
    CHAR OriginalCatalogName[MAX_PATH];
} SP_ORIGINAL_FILE_INFO_A, *PSP_ORIGINAL_FILE_INFO_A;
typedef struct _SP_ORIGINAL_FILE_INFO_W {
    DWORD cbSize;
    WCHAR OriginalInfName[MAX_PATH];
    WCHAR OriginalCatalogName[MAX_PATH];
} SP_ORIGINAL_FILE_INFO_W, *PSP_ORIGINAL_FILE_INFO_W;
typedef SP_ORIGINAL_FILE_INFO_W SP_ORIGINAL_FILE_INFO;
typedef PSP_ORIGINAL_FILE_INFO_W PSP_ORIGINAL_FILE_INFO;
typedef UINT (CALLBACK* PSP_FILE_CALLBACK_A)(
    IN PVOID Context,
    IN UINT Notification,
    IN UINT_PTR Param1,
    IN UINT_PTR Param2
    );
typedef UINT (CALLBACK* PSP_FILE_CALLBACK_W)(
    IN PVOID Context,
    IN UINT Notification,
    IN UINT_PTR Param1,
    IN UINT_PTR Param2
    );
typedef struct _FILEPATHS_A {
    PCSTR Target;
    PCSTR Source;
    UINT Win32Error;
    DWORD Flags;
} FILEPATHS_A, *PFILEPATHS_A;
typedef struct _FILEPATHS_W {
    PCWSTR Target;
    PCWSTR Source;
    UINT Win32Error;
    DWORD Flags;
} FILEPATHS_W, *PFILEPATHS_W;
typedef FILEPATHS_W FILEPATHS;
typedef PFILEPATHS_W PFILEPATHS;
typedef struct _FILEPATHS_SIGNERINFO_A {
    PCSTR Target;
    PCSTR Source;
    UINT Win32Error;
    DWORD Flags;
    PCSTR DigitalSigner;
    PCSTR Version;
    PCSTR CatalogFile;
} FILEPATHS_SIGNERINFO_A, *PFILEPATHS_SIGNERINFO_A;
typedef struct _FILEPATHS_SIGNERINFO_W {
    PCWSTR Target;
    PCWSTR Source;
    UINT Win32Error;
    DWORD Flags;
    PCWSTR DigitalSigner;
    PCWSTR Version;
    PCWSTR CatalogFile;
} FILEPATHS_SIGNERINFO_W, *PFILEPATHS_SIGNERINFO_W;
typedef FILEPATHS_SIGNERINFO_W FILEPATHS_SIGNERINFO;
typedef PFILEPATHS_SIGNERINFO_W PFILEPATHS_SIGNERINFO;
typedef struct _SOURCE_MEDIA_A {
    PCSTR Reserved;
    PCSTR Tagfile;
    PCSTR Description;
    PCSTR SourcePath;
    PCSTR SourceFile;
    DWORD Flags;
} SOURCE_MEDIA_A, *PSOURCE_MEDIA_A;
typedef struct _SOURCE_MEDIA_W {
    PCWSTR Reserved;
    PCWSTR Tagfile;
    PCWSTR Description;
    PCWSTR SourcePath;
    PCWSTR SourceFile;
    DWORD Flags;
} SOURCE_MEDIA_W, *PSOURCE_MEDIA_W;
typedef SOURCE_MEDIA_W SOURCE_MEDIA;
typedef PSOURCE_MEDIA_W PSOURCE_MEDIA;
typedef struct _CABINET_INFO_A {
    PCSTR CabinetPath;
    PCSTR CabinetFile;
    PCSTR DiskName;
    USHORT SetId;
    USHORT CabinetNumber;
} CABINET_INFO_A, *PCABINET_INFO_A;
typedef struct _CABINET_INFO_W {
    PCWSTR CabinetPath;
    PCWSTR CabinetFile;
    PCWSTR DiskName;
    USHORT SetId;
    USHORT CabinetNumber;
} CABINET_INFO_W, *PCABINET_INFO_W;
typedef CABINET_INFO_W CABINET_INFO;
typedef PCABINET_INFO_W PCABINET_INFO;
typedef struct _FILE_IN_CABINET_INFO_A {
    PCSTR NameInCabinet;
    DWORD FileSize;
    DWORD Win32Error;
    WORD DosDate;
    WORD DosTime;
    WORD DosAttribs;
    CHAR FullTargetName[MAX_PATH];
} FILE_IN_CABINET_INFO_A, *PFILE_IN_CABINET_INFO_A;
typedef struct _FILE_IN_CABINET_INFO_W {
    PCWSTR NameInCabinet;
    DWORD FileSize;
    DWORD Win32Error;
    WORD DosDate;
    WORD DosTime;
    WORD DosAttribs;
    WCHAR FullTargetName[MAX_PATH];
} FILE_IN_CABINET_INFO_W, *PFILE_IN_CABINET_INFO_W;
typedef FILE_IN_CABINET_INFO_W FILE_IN_CABINET_INFO;
typedef PFILE_IN_CABINET_INFO_W PFILE_IN_CABINET_INFO;
typedef struct _SP_REGISTER_CONTROL_STATUSA {
    DWORD cbSize;
    PCSTR FileName;
    DWORD Win32Error;
    DWORD FailureCode;
} SP_REGISTER_CONTROL_STATUSA, *PSP_REGISTER_CONTROL_STATUSA;
typedef struct _SP_REGISTER_CONTROL_STATUSW {
    DWORD cbSize;
    PCWSTR FileName;
    DWORD Win32Error;
    DWORD FailureCode;
} SP_REGISTER_CONTROL_STATUSW, *PSP_REGISTER_CONTROL_STATUSW;
typedef SP_REGISTER_CONTROL_STATUSW SP_REGISTER_CONTROL_STATUS;
typedef PSP_REGISTER_CONTROL_STATUSW PSP_REGISTER_CONTROL_STATUS;
typedef PVOID HSPFILEQ;
typedef struct _SP_FILE_COPY_PARAMS_A {
    DWORD cbSize;
    HSPFILEQ QueueHandle;
    PCSTR SourceRootPath; OPTIONAL
    PCSTR SourcePath; OPTIONAL
    PCSTR SourceFilename;
    PCSTR SourceDescription; OPTIONAL
    PCSTR SourceTagfile; OPTIONAL
    PCSTR TargetDirectory;
    PCSTR TargetFilename; OPTIONAL
    DWORD CopyStyle;
    HINF LayoutInf; OPTIONAL
    PCSTR SecurityDescriptor; OPTIONAL
} SP_FILE_COPY_PARAMS_A, *PSP_FILE_COPY_PARAMS_A;
typedef struct _SP_FILE_COPY_PARAMS_W {
    DWORD cbSize;
    HSPFILEQ QueueHandle;
    PCWSTR SourceRootPath; OPTIONAL
    PCWSTR SourcePath; OPTIONAL
    PCWSTR SourceFilename;
    PCWSTR SourceDescription; OPTIONAL
    PCWSTR SourceTagfile; OPTIONAL
    PCWSTR TargetDirectory;
    PCWSTR TargetFilename; OPTIONAL
    DWORD CopyStyle;
    HINF LayoutInf; OPTIONAL
    PCWSTR SecurityDescriptor; OPTIONAL
} SP_FILE_COPY_PARAMS_W, *PSP_FILE_COPY_PARAMS_W;
typedef SP_FILE_COPY_PARAMS_W SP_FILE_COPY_PARAMS;
typedef PSP_FILE_COPY_PARAMS_W PSP_FILE_COPY_PARAMS;
typedef PVOID HDSKSPC;
typedef PVOID HDEVINFO;
typedef struct _SP_DEVINFO_DATA {
    DWORD cbSize;
    GUID ClassGuid;
    DWORD DevInst;
    ULONG_PTR Reserved;
} SP_DEVINFO_DATA, *PSP_DEVINFO_DATA;
typedef struct _SP_DEVICE_INTERFACE_DATA {
    DWORD cbSize;
    GUID InterfaceClassGuid;
    DWORD Flags;
    ULONG_PTR Reserved;
} SP_DEVICE_INTERFACE_DATA, *PSP_DEVICE_INTERFACE_DATA;
typedef SP_DEVICE_INTERFACE_DATA SP_INTERFACE_DEVICE_DATA;
typedef PSP_DEVICE_INTERFACE_DATA PSP_INTERFACE_DEVICE_DATA;
typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A {
    DWORD cbSize;
    CHAR DevicePath[ANYSIZE_ARRAY];
} SP_DEVICE_INTERFACE_DETAIL_DATA_A, *PSP_DEVICE_INTERFACE_DETAIL_DATA_A;
typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_W {
    DWORD cbSize;
    WCHAR DevicePath[ANYSIZE_ARRAY];
} SP_DEVICE_INTERFACE_DETAIL_DATA_W, *PSP_DEVICE_INTERFACE_DETAIL_DATA_W;
typedef SP_DEVICE_INTERFACE_DETAIL_DATA_W SP_DEVICE_INTERFACE_DETAIL_DATA;
typedef PSP_DEVICE_INTERFACE_DETAIL_DATA_W PSP_DEVICE_INTERFACE_DETAIL_DATA;
typedef SP_DEVICE_INTERFACE_DETAIL_DATA_W SP_INTERFACE_DEVICE_DETAIL_DATA_W;
typedef PSP_DEVICE_INTERFACE_DETAIL_DATA_W PSP_INTERFACE_DEVICE_DETAIL_DATA_W;
typedef SP_DEVICE_INTERFACE_DETAIL_DATA_A SP_INTERFACE_DEVICE_DETAIL_DATA_A;
typedef PSP_DEVICE_INTERFACE_DETAIL_DATA_A PSP_INTERFACE_DEVICE_DETAIL_DATA_A;
typedef SP_INTERFACE_DEVICE_DETAIL_DATA_W SP_INTERFACE_DEVICE_DETAIL_DATA;
typedef PSP_INTERFACE_DEVICE_DETAIL_DATA_W PSP_INTERFACE_DEVICE_DETAIL_DATA;
typedef struct _SP_DEVINFO_LIST_DETAIL_DATA_A {
    DWORD cbSize;
    GUID ClassGuid;
    HANDLE RemoteMachineHandle;
    CHAR RemoteMachineName[SP_MAX_MACHINENAME_LENGTH];
} SP_DEVINFO_LIST_DETAIL_DATA_A, *PSP_DEVINFO_LIST_DETAIL_DATA_A;
typedef struct _SP_DEVINFO_LIST_DETAIL_DATA_W {
    DWORD cbSize;
    GUID ClassGuid;
    HANDLE RemoteMachineHandle;
    WCHAR RemoteMachineName[SP_MAX_MACHINENAME_LENGTH];
} SP_DEVINFO_LIST_DETAIL_DATA_W, *PSP_DEVINFO_LIST_DETAIL_DATA_W;
typedef SP_DEVINFO_LIST_DETAIL_DATA_W SP_DEVINFO_LIST_DETAIL_DATA;
typedef PSP_DEVINFO_LIST_DETAIL_DATA_W PSP_DEVINFO_LIST_DETAIL_DATA;
typedef UINT DI_FUNCTION;
typedef struct _SP_DEVINSTALL_PARAMS_A {
    DWORD cbSize;
    DWORD Flags;
    DWORD FlagsEx;
    HWND hwndParent;
    PSP_FILE_CALLBACK InstallMsgHandler;
    PVOID InstallMsgHandlerContext;
    HSPFILEQ FileQueue;
    ULONG_PTR ClassInstallReserved;
    DWORD Reserved;
    CHAR DriverPath[MAX_PATH];
} SP_DEVINSTALL_PARAMS_A, *PSP_DEVINSTALL_PARAMS_A;
typedef struct _SP_DEVINSTALL_PARAMS_W {
    DWORD cbSize;
    DWORD Flags;
    DWORD FlagsEx;
    HWND hwndParent;
    PSP_FILE_CALLBACK InstallMsgHandler;
    PVOID InstallMsgHandlerContext;
    HSPFILEQ FileQueue;
    ULONG_PTR ClassInstallReserved;
    DWORD Reserved;
    WCHAR DriverPath[MAX_PATH];
} SP_DEVINSTALL_PARAMS_W, *PSP_DEVINSTALL_PARAMS_W;
typedef SP_DEVINSTALL_PARAMS_W SP_DEVINSTALL_PARAMS;
typedef PSP_DEVINSTALL_PARAMS_W PSP_DEVINSTALL_PARAMS;
typedef struct _SP_CLASSINSTALL_HEADER {
    DWORD cbSize;
    DI_FUNCTION InstallFunction;
} SP_CLASSINSTALL_HEADER, *PSP_CLASSINSTALL_HEADER;
typedef struct _SP_ENABLECLASS_PARAMS {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    GUID ClassGuid;
    DWORD EnableMessage;
} SP_ENABLECLASS_PARAMS, *PSP_ENABLECLASS_PARAMS;
typedef struct _SP_PROPCHANGE_PARAMS {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    DWORD StateChange;
    DWORD Scope;
    DWORD HwProfile;
} SP_PROPCHANGE_PARAMS, *PSP_PROPCHANGE_PARAMS;
typedef struct _SP_REMOVEDEVICE_PARAMS {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    DWORD Scope;
    DWORD HwProfile;
} SP_REMOVEDEVICE_PARAMS, *PSP_REMOVEDEVICE_PARAMS;
typedef struct _SP_UNREMOVEDEVICE_PARAMS {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    DWORD Scope;
    DWORD HwProfile;
} SP_UNREMOVEDEVICE_PARAMS, *PSP_UNREMOVEDEVICE_PARAMS;
typedef struct _SP_SELECTDEVICE_PARAMS_A {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    CHAR Title[MAX_TITLE_LEN];
    CHAR Instructions[MAX_INSTRUCTION_LEN];
    CHAR ListLabel[MAX_LABEL_LEN];
    CHAR SubTitle[MAX_SUBTITLE_LEN];
    BYTE Reserved[2];
} SP_SELECTDEVICE_PARAMS_A, *PSP_SELECTDEVICE_PARAMS_A;
typedef struct _SP_SELECTDEVICE_PARAMS_W {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    WCHAR Title[MAX_TITLE_LEN];
    WCHAR Instructions[MAX_INSTRUCTION_LEN];
    WCHAR ListLabel[MAX_LABEL_LEN];
    WCHAR SubTitle[MAX_SUBTITLE_LEN];
} SP_SELECTDEVICE_PARAMS_W, *PSP_SELECTDEVICE_PARAMS_W;
typedef SP_SELECTDEVICE_PARAMS_W SP_SELECTDEVICE_PARAMS;
typedef PSP_SELECTDEVICE_PARAMS_W PSP_SELECTDEVICE_PARAMS;
typedef BOOL (CALLBACK* PDETECT_PROGRESS_NOTIFY)(
     IN PVOID ProgressNotifyParam,
     IN DWORD DetectComplete
     );
typedef struct _SP_DETECTDEVICE_PARAMS {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    PDETECT_PROGRESS_NOTIFY DetectProgressNotify;
    PVOID ProgressNotifyParam;
} SP_DETECTDEVICE_PARAMS, *PSP_DETECTDEVICE_PARAMS;
typedef struct _SP_INSTALLWIZARD_DATA {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    DWORD Flags;
    HPROPSHEETPAGE DynamicPages[MAX_INSTALLWIZARD_DYNAPAGES];
    DWORD NumDynamicPages;
    DWORD DynamicPageFlags;
    DWORD PrivateFlags;
    LPARAM PrivateData;
    HWND hwndWizardDlg;
} SP_INSTALLWIZARD_DATA, *PSP_INSTALLWIZARD_DATA;
typedef struct _SP_NEWDEVICEWIZARD_DATA {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    DWORD Flags;
    HPROPSHEETPAGE DynamicPages[MAX_INSTALLWIZARD_DYNAPAGES];
    DWORD NumDynamicPages;
    HWND hwndWizardDlg;
} SP_NEWDEVICEWIZARD_DATA, *PSP_NEWDEVICEWIZARD_DATA;
typedef SP_NEWDEVICEWIZARD_DATA SP_ADDPROPERTYPAGE_DATA;
typedef PSP_NEWDEVICEWIZARD_DATA PSP_ADDPROPERTYPAGE_DATA;
typedef struct _SP_TROUBLESHOOTER_PARAMS_A {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    CHAR ChmFile[MAX_PATH];
    CHAR HtmlTroubleShooter[MAX_PATH];
} SP_TROUBLESHOOTER_PARAMS_A, *PSP_TROUBLESHOOTER_PARAMS_A;
typedef struct _SP_TROUBLESHOOTER_PARAMS_W {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    WCHAR ChmFile[MAX_PATH];
    WCHAR HtmlTroubleShooter[MAX_PATH];
} SP_TROUBLESHOOTER_PARAMS_W, *PSP_TROUBLESHOOTER_PARAMS_W;
typedef SP_TROUBLESHOOTER_PARAMS_W SP_TROUBLESHOOTER_PARAMS;
typedef PSP_TROUBLESHOOTER_PARAMS_W PSP_TROUBLESHOOTER_PARAMS;
typedef struct _SP_POWERMESSAGEWAKE_PARAMS_A {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    CHAR PowerMessageWake[LINE_LEN*2];
} SP_POWERMESSAGEWAKE_PARAMS_A, *PSP_POWERMESSAGEWAKE_PARAMS_A;
typedef struct _SP_POWERMESSAGEWAKE_PARAMS_W {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    WCHAR PowerMessageWake[LINE_LEN*2];
} SP_POWERMESSAGEWAKE_PARAMS_W, *PSP_POWERMESSAGEWAKE_PARAMS_W;
typedef SP_POWERMESSAGEWAKE_PARAMS_W SP_POWERMESSAGEWAKE_PARAMS;
typedef PSP_POWERMESSAGEWAKE_PARAMS_W PSP_POWERMESSAGEWAKE_PARAMS;
typedef struct _SP_DRVINFO_DATA_V2_A {
    DWORD cbSize;
    DWORD DriverType;
    ULONG_PTR Reserved;
    CHAR Description[LINE_LEN];
    CHAR MfgName[LINE_LEN];
    CHAR ProviderName[LINE_LEN];
    FILETIME DriverDate;
    DWORDLONG DriverVersion;
} SP_DRVINFO_DATA_V2_A, *PSP_DRVINFO_DATA_V2_A;
typedef struct _SP_DRVINFO_DATA_V2_W {
    DWORD cbSize;
    DWORD DriverType;
    ULONG_PTR Reserved;
    WCHAR Description[LINE_LEN];
    WCHAR MfgName[LINE_LEN];
    WCHAR ProviderName[LINE_LEN];
    FILETIME DriverDate;
    DWORDLONG DriverVersion;
} SP_DRVINFO_DATA_V2_W, *PSP_DRVINFO_DATA_V2_W;
typedef struct _SP_DRVINFO_DATA_V1_A {
    DWORD cbSize;
    DWORD DriverType;
    ULONG_PTR Reserved;
    CHAR Description[LINE_LEN];
    CHAR MfgName[LINE_LEN];
    CHAR ProviderName[LINE_LEN];
} SP_DRVINFO_DATA_V1_A, *PSP_DRVINFO_DATA_V1_A;
typedef struct _SP_DRVINFO_DATA_V1_W {
    DWORD cbSize;
    DWORD DriverType;
    ULONG_PTR Reserved;
    WCHAR Description[LINE_LEN];
    WCHAR MfgName[LINE_LEN];
    WCHAR ProviderName[LINE_LEN];
} SP_DRVINFO_DATA_V1_W, *PSP_DRVINFO_DATA_V1_W;
typedef SP_DRVINFO_DATA_V1_W SP_DRVINFO_DATA_V1;
typedef PSP_DRVINFO_DATA_V1_W PSP_DRVINFO_DATA_V1;
typedef SP_DRVINFO_DATA_V2_W SP_DRVINFO_DATA_V2;
typedef PSP_DRVINFO_DATA_V2_W PSP_DRVINFO_DATA_V2;
typedef SP_DRVINFO_DATA_V2_A SP_DRVINFO_DATA_A;
typedef PSP_DRVINFO_DATA_V2_A PSP_DRVINFO_DATA_A;
typedef SP_DRVINFO_DATA_V2_W SP_DRVINFO_DATA_W;
typedef PSP_DRVINFO_DATA_V2_W PSP_DRVINFO_DATA_W;
typedef SP_DRVINFO_DATA_V2 SP_DRVINFO_DATA;
typedef PSP_DRVINFO_DATA_V2 PSP_DRVINFO_DATA;
typedef struct _SP_DRVINFO_DETAIL_DATA_A {
    DWORD cbSize;
    FILETIME InfDate;
    DWORD CompatIDsOffset;
    DWORD CompatIDsLength;
    ULONG_PTR Reserved;
    CHAR SectionName[LINE_LEN];
    CHAR InfFileName[MAX_PATH];
    CHAR DrvDescription[LINE_LEN];
    CHAR HardwareID[ANYSIZE_ARRAY];
} SP_DRVINFO_DETAIL_DATA_A, *PSP_DRVINFO_DETAIL_DATA_A;
typedef struct _SP_DRVINFO_DETAIL_DATA_W {
    DWORD cbSize;
    FILETIME InfDate;
    DWORD CompatIDsOffset;
    DWORD CompatIDsLength;
    ULONG_PTR Reserved;
    WCHAR SectionName[LINE_LEN];
    WCHAR InfFileName[MAX_PATH];
    WCHAR DrvDescription[LINE_LEN];
    WCHAR HardwareID[ANYSIZE_ARRAY];
} SP_DRVINFO_DETAIL_DATA_W, *PSP_DRVINFO_DETAIL_DATA_W;
typedef SP_DRVINFO_DETAIL_DATA_W SP_DRVINFO_DETAIL_DATA;
typedef PSP_DRVINFO_DETAIL_DATA_W PSP_DRVINFO_DETAIL_DATA;
typedef struct _SP_DRVINSTALL_PARAMS {
    DWORD cbSize;
    DWORD Rank;
    DWORD Flags;
    DWORD_PTR PrivateData;
    DWORD Reserved;
} SP_DRVINSTALL_PARAMS, *PSP_DRVINSTALL_PARAMS;
typedef DWORD (CALLBACK* PSP_DETSIG_CMPPROC)(
    IN HDEVINFO DeviceInfoSet,
    IN PSP_DEVINFO_DATA NewDeviceData,
    IN PSP_DEVINFO_DATA ExistingDeviceData,
    IN PVOID CompareContext OPTIONAL
    );
typedef struct _COINSTALLER_CONTEXT_DATA {
    BOOL PostProcessing;
    DWORD InstallResult;
    PVOID PrivateData;
} COINSTALLER_CONTEXT_DATA, *PCOINSTALLER_CONTEXT_DATA;
typedef struct _SP_CLASSIMAGELIST_DATA {
    DWORD cbSize;
    HIMAGELIST ImageList;
    ULONG_PTR Reserved;
} SP_CLASSIMAGELIST_DATA, *PSP_CLASSIMAGELIST_DATA;
typedef struct _SP_PROPSHEETPAGE_REQUEST {
    DWORD cbSize;
    DWORD PageRequested;
    HDEVINFO DeviceInfoSet;
    PSP_DEVINFO_DATA DeviceInfoData;
} SP_PROPSHEETPAGE_REQUEST, *PSP_PROPSHEETPAGE_REQUEST;
typedef struct _SP_BACKUP_QUEUE_PARAMS_V2_A {
    DWORD cbSize;
    CHAR FullInfPath[MAX_PATH];
    INT FilenameOffset;
    CHAR ReinstallInstance[MAX_PATH];
} SP_BACKUP_QUEUE_PARAMS_V2_A, *PSP_BACKUP_QUEUE_PARAMS_V2_A;
typedef struct _SP_BACKUP_QUEUE_PARAMS_V2_W {
    DWORD cbSize;
    WCHAR FullInfPath[MAX_PATH];
    INT FilenameOffset;
    WCHAR ReinstallInstance[MAX_PATH];
} SP_BACKUP_QUEUE_PARAMS_V2_W, *PSP_BACKUP_QUEUE_PARAMS_V2_W;
typedef struct _SP_BACKUP_QUEUE_PARAMS_V1_A {
    DWORD cbSize;
    CHAR FullInfPath[MAX_PATH];
    INT FilenameOffset;
} SP_BACKUP_QUEUE_PARAMS_V1_A, *PSP_BACKUP_QUEUE_PARAMS_V1_A;
typedef struct _SP_BACKUP_QUEUE_PARAMS_V1_W {
    DWORD cbSize;
    WCHAR FullInfPath[MAX_PATH];
    INT FilenameOffset;
} SP_BACKUP_QUEUE_PARAMS_V1_W, *PSP_BACKUP_QUEUE_PARAMS_V1_W;
typedef SP_BACKUP_QUEUE_PARAMS_V1_W SP_BACKUP_QUEUE_PARAMS_V1;
typedef PSP_BACKUP_QUEUE_PARAMS_V1_W PSP_BACKUP_QUEUE_PARAMS_V1;
typedef SP_BACKUP_QUEUE_PARAMS_V2_W SP_BACKUP_QUEUE_PARAMS_V2;
typedef PSP_BACKUP_QUEUE_PARAMS_V2_W PSP_BACKUP_QUEUE_PARAMS_V2;
typedef SP_BACKUP_QUEUE_PARAMS_V2_A SP_BACKUP_QUEUE_PARAMS_A;
typedef PSP_BACKUP_QUEUE_PARAMS_V2_A PSP_BACKUP_QUEUE_PARAMS_A;
typedef SP_BACKUP_QUEUE_PARAMS_V2_W SP_BACKUP_QUEUE_PARAMS_W;
typedef PSP_BACKUP_QUEUE_PARAMS_V2_W PSP_BACKUP_QUEUE_PARAMS_W;
typedef SP_BACKUP_QUEUE_PARAMS_V2 SP_BACKUP_QUEUE_PARAMS;
typedef PSP_BACKUP_QUEUE_PARAMS_V2 PSP_BACKUP_QUEUE_PARAMS;
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupGetInfInformationA(
    _In_ LPCVOID InfSpec,
    _In_ DWORD SearchControl,
    _Out_writes_bytes_to_opt_(ReturnBufferSize, *RequiredSize) PSP_INF_INFORMATION ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupGetInfInformationW(
    _In_ LPCVOID InfSpec,
    _In_ DWORD SearchControl,
    _Out_writes_bytes_to_opt_(ReturnBufferSize, *RequiredSize) PSP_INF_INFORMATION ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryInfFileInformationA(
    _In_ PSP_INF_INFORMATION InfInformation,
    _In_ UINT InfIndex,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryInfFileInformationW(
    _In_ PSP_INF_INFORMATION InfInformation,
    _In_ UINT InfIndex,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryInfOriginalFileInformationA(
    _In_ PSP_INF_INFORMATION InfInformation,
    _In_ UINT InfIndex,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _Out_ PSP_ORIGINAL_FILE_INFO_A OriginalFileInfo
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryInfOriginalFileInformationW(
    _In_ PSP_INF_INFORMATION InfInformation,
    _In_ UINT InfIndex,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _Out_ PSP_ORIGINAL_FILE_INFO_W OriginalFileInfo
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryInfVersionInformationA(
    _In_ PSP_INF_INFORMATION InfInformation,
    _In_ UINT InfIndex,
    _In_opt_ PCSTR Key,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryInfVersionInformationW(
    _In_ PSP_INF_INFORMATION InfInformation,
    _In_ UINT InfIndex,
    _In_opt_ PCWSTR Key,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetInfDriverStoreLocationA(
    _In_ PCSTR FileName,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _In_opt_ PCSTR LocaleName,
    _Out_writes_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetInfDriverStoreLocationW(
    _In_ PCWSTR FileName,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _In_opt_ PCWSTR LocaleName,
    _Out_writes_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetInfPublishedNameA(
    _In_ PCSTR DriverStoreLocation,
    _Out_writes_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetInfPublishedNameW(
    _In_ PCWSTR DriverStoreLocation,
    _Out_writes_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetInfFileListA(
    _In_opt_ PCSTR DirectoryPath,
    _In_ DWORD InfStyle,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetInfFileListW(
    _In_opt_ PCWSTR DirectoryPath,
    _In_ DWORD InfStyle,
    _Out_writes_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
HINF
WINAPI
SetupOpenInfFileW(
    _In_ PCWSTR FileName,
    _In_opt_ PCWSTR InfClass,
    _In_ DWORD InfStyle,
    _Out_opt_ PUINT ErrorLine
    );
WINSETUPAPI
HINF
WINAPI
SetupOpenInfFileA(
    _In_ PCSTR FileName,
    _In_opt_ PCSTR InfClass,
    _In_ DWORD InfStyle,
    _Out_opt_ PUINT ErrorLine
    );
WINSETUPAPI
HINF
WINAPI
SetupOpenMasterInf(
    VOID
    );
WINSETUPAPI
BOOL
WINAPI
SetupOpenAppendInfFileW(
    _In_opt_ PCWSTR FileName,
    _In_ HINF InfHandle,
    _Out_opt_ PUINT ErrorLine
    );
WINSETUPAPI
BOOL
WINAPI
SetupOpenAppendInfFileA(
    _In_opt_ PCSTR FileName,
    _In_ HINF InfHandle,
    _Out_opt_ PUINT ErrorLine
    );
WINSETUPAPI
VOID
WINAPI
SetupCloseInfFile(
    _In_ HINF InfHandle
    );
WINSETUPAPI
BOOL
WINAPI
SetupFindFirstLineA(
    _In_ HINF InfHandle,
    _In_ PCSTR Section,
    _In_opt_ PCSTR Key,
    _Out_ PINFCONTEXT Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupFindFirstLineW(
    _In_ HINF InfHandle,
    _In_ PCWSTR Section,
    _In_opt_ PCWSTR Key,
    _Out_ PINFCONTEXT Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupFindNextLine(
    _In_ PINFCONTEXT ContextIn,
    _Out_ PINFCONTEXT ContextOut
    );
WINSETUPAPI
BOOL
WINAPI
SetupFindNextMatchLineA(
    _In_ PINFCONTEXT ContextIn,
    _In_opt_ PCSTR Key,
    _Out_ PINFCONTEXT ContextOut
    );
WINSETUPAPI
BOOL
WINAPI
SetupFindNextMatchLineW(
    _In_ PINFCONTEXT ContextIn,
    _In_opt_ PCWSTR Key,
    _Out_ PINFCONTEXT ContextOut
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetLineByIndexA(
    _In_ HINF InfHandle,
    _In_ PCSTR Section,
    _In_ DWORD Index,
    _Out_ PINFCONTEXT Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetLineByIndexW(
    _In_ HINF InfHandle,
    _In_ PCWSTR Section,
    _In_ DWORD Index,
    _Out_ PINFCONTEXT Context
    );
WINSETUPAPI
LONG
WINAPI
SetupGetLineCountA(
    _In_ HINF InfHandle,
    _In_ PCSTR Section
    );
WINSETUPAPI
LONG
WINAPI
SetupGetLineCountW(
    _In_ HINF InfHandle,
    _In_ PCWSTR Section
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetLineTextA(
    _In_opt_ PINFCONTEXT Context,
    _In_opt_ HINF InfHandle,
    _In_opt_ PCSTR Section,
    _In_opt_ PCSTR Key,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetLineTextW(
    _In_opt_ PINFCONTEXT Context,
    _In_opt_ HINF InfHandle,
    _In_opt_ PCWSTR Section,
    _In_opt_ PCWSTR Key,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
DWORD
WINAPI
SetupGetFieldCount(
    _In_ PINFCONTEXT Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetStringFieldA(
    _In_ PINFCONTEXT Context,
    _In_ DWORD FieldIndex,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetStringFieldW(
    _In_ PINFCONTEXT Context,
    _In_ DWORD FieldIndex,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetIntField(
    _In_ PINFCONTEXT Context,
    _In_ DWORD FieldIndex,
    _Out_ PINT IntegerValue
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetMultiSzFieldA(
    _In_ PINFCONTEXT Context,
    _In_ DWORD FieldIndex,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ LPDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetMultiSzFieldW(
    _In_ PINFCONTEXT Context,
    _In_ DWORD FieldIndex,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ LPDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupGetBinaryField(
    _In_ PINFCONTEXT Context,
    _In_ DWORD FieldIndex,
    _Out_writes_bytes_to_opt_(ReturnBufferSize, *RequiredSize) PBYTE ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ LPDWORD RequiredSize
    );
WINSETUPAPI
DWORD
WINAPI
SetupGetFileCompressionInfoA(
    _In_ PCSTR SourceFileName,
    _Out_ PSTR *ActualSourceFileName,
    _Out_ PDWORD SourceFileSize,
    _Out_ PDWORD TargetFileSize,
    _Out_ PUINT CompressionType
    );
WINSETUPAPI
DWORD
WINAPI
SetupGetFileCompressionInfoW(
    _In_ PCWSTR SourceFileName,
    _Out_ PWSTR *ActualSourceFileName,
    _Out_ PDWORD SourceFileSize,
    _Out_ PDWORD TargetFileSize,
    _Out_ PUINT CompressionType
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetFileCompressionInfoExA(
    _In_ PCSTR SourceFileName,
    _In_reads_opt_(ActualSourceFileNameBufferLen) PSTR ActualSourceFileNameBuffer,
    _In_ DWORD ActualSourceFileNameBufferLen,
    _Out_opt_ PDWORD RequiredBufferLen,
    _Out_ PDWORD SourceFileSize,
    _Out_ PDWORD TargetFileSize,
    _Out_ PUINT CompressionType
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetFileCompressionInfoExW(
    _In_ PCWSTR SourceFileName,
    _In_reads_opt_(ActualSourceFileNameBufferLen) PWSTR ActualSourceFileNameBuffer,
    _In_ DWORD ActualSourceFileNameBufferLen,
    _Out_opt_ PDWORD RequiredBufferLen,
    _Out_ PDWORD SourceFileSize,
    _Out_ PDWORD TargetFileSize,
    _Out_ PUINT CompressionType
    );
WINSETUPAPI
DWORD
WINAPI
SetupDecompressOrCopyFileA(
    _In_ PCSTR SourceFileName,
    _In_ PCSTR TargetFileName,
    _In_opt_ PUINT CompressionType
    );
WINSETUPAPI
DWORD
WINAPI
SetupDecompressOrCopyFileW(
    _In_ PCWSTR SourceFileName,
    _In_ PCWSTR TargetFileName,
    _In_opt_ PUINT CompressionType
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetSourceFileLocationA(
    _In_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCSTR FileName,
    _Out_ PUINT SourceId,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetSourceFileLocationW(
    _In_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCWSTR FileName,
    _Out_ PUINT SourceId,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetSourceFileSizeA(
    _In_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCSTR FileName,
    _In_opt_ PCSTR Section,
    _Out_ PDWORD FileSize,
    _In_ UINT RoundingFactor
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetSourceFileSizeW(
    _In_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCWSTR FileName,
    _In_opt_ PCWSTR Section,
    _Out_ PDWORD FileSize,
    _In_ UINT RoundingFactor
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetTargetPathA(
    _In_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCSTR Section,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetTargetPathW(
    _In_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCWSTR Section,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetSourceListA(
    _In_ DWORD Flags,
    _In_reads_(SourceCount) PCSTR *SourceList,
    _In_ UINT SourceCount
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetSourceListW(
    _In_ DWORD Flags,
    _In_reads_(SourceCount) PCWSTR *SourceList,
    _In_ UINT SourceCount
    );
WINSETUPAPI
BOOL
WINAPI
SetupCancelTemporarySourceList(
    VOID
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddToSourceListA(
    _In_ DWORD Flags,
    _In_ PCSTR Source
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddToSourceListW(
    _In_ DWORD Flags,
    _In_ PCWSTR Source
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveFromSourceListA(
    _In_ DWORD Flags,
    _In_ PCSTR Source
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveFromSourceListW(
    _In_ DWORD Flags,
    _In_ PCWSTR Source
    );
WINSETUPAPI
BOOL
WINAPI
SetupQuerySourceListA(
    _In_ DWORD Flags,
    _Outptr_result_buffer_(*Count) PCSTR **List,
    _Out_ PUINT Count
    );
WINSETUPAPI
BOOL
WINAPI
SetupQuerySourceListW(
    _In_ DWORD Flags,
    _Outptr_result_buffer_(*Count) PCWSTR **List,
    _Out_ PUINT Count
    );
WINSETUPAPI
BOOL
WINAPI
SetupFreeSourceListA(
    _Inout_ _At_(*List, _Pre_readable_size_(Count) _Post_null_) PCSTR **List,
    _In_ UINT Count
    );
WINSETUPAPI
BOOL
WINAPI
SetupFreeSourceListW(
    _Inout_ _At_(*List, _Pre_readable_size_(Count) _Post_null_) PCWSTR **List,
    _In_ UINT Count
    );
WINSETUPAPI
UINT
WINAPI
SetupPromptForDiskA(
    _In_ HWND hwndParent,
    _In_opt_ PCSTR DialogTitle,
    _In_opt_ PCSTR DiskName,
    _In_opt_ PCSTR PathToSource,
    _In_ PCSTR FileSought,
    _In_opt_ PCSTR TagFile,
    _In_ DWORD DiskPromptStyle,
    _Out_writes_opt_(PathBufferSize) PSTR PathBuffer,
    _In_ DWORD PathBufferSize,
    _Out_opt_ PDWORD PathRequiredSize
    );
WINSETUPAPI
UINT
WINAPI
SetupPromptForDiskW(
    _In_ HWND hwndParent,
    _In_opt_ PCWSTR DialogTitle,
    _In_opt_ PCWSTR DiskName,
    _In_opt_ PCWSTR PathToSource,
    _In_ PCWSTR FileSought,
    _In_opt_ PCWSTR TagFile,
    _In_ DWORD DiskPromptStyle,
    _Out_writes_opt_(PathBufferSize) PWSTR PathBuffer,
    _In_ DWORD PathBufferSize,
    _Out_opt_ PDWORD PathRequiredSize
    );
WINSETUPAPI
UINT
WINAPI
SetupCopyErrorA(
    _In_ HWND hwndParent,
    _In_opt_ PCSTR DialogTitle,
    _In_opt_ PCSTR DiskName,
    _In_ PCSTR PathToSource,
    _In_ PCSTR SourceFile,
    _In_opt_ PCSTR TargetPathFile,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style,
    _Out_writes_opt_(PathBufferSize) PSTR PathBuffer,
    _In_ DWORD PathBufferSize,
    _Out_opt_ PDWORD PathRequiredSize
    );
WINSETUPAPI
UINT
WINAPI
SetupCopyErrorW(
    _In_ HWND hwndParent,
    _In_opt_ PCWSTR DialogTitle,
    _In_opt_ PCWSTR DiskName,
    _In_ PCWSTR PathToSource,
    _In_ PCWSTR SourceFile,
    _In_opt_ PCWSTR TargetPathFile,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style,
    _Out_writes_opt_(PathBufferSize) PWSTR PathBuffer,
    _In_ DWORD PathBufferSize,
    _Out_opt_ PDWORD PathRequiredSize
    );
WINSETUPAPI
UINT
WINAPI
SetupRenameErrorA(
    _In_ HWND hwndParent,
    _In_opt_ PCSTR DialogTitle,
    _In_ PCSTR SourceFile,
    _In_ PCSTR TargetFile,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style
    );
WINSETUPAPI
UINT
WINAPI
SetupRenameErrorW(
    _In_ HWND hwndParent,
    _In_opt_ PCWSTR DialogTitle,
    _In_ PCWSTR SourceFile,
    _In_ PCWSTR TargetFile,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style
    );
WINSETUPAPI
UINT
WINAPI
SetupDeleteErrorA(
    _In_ HWND hwndParent,
    _In_opt_ PCSTR DialogTitle,
    _In_ PCSTR File,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style
    );
WINSETUPAPI
UINT
WINAPI
SetupDeleteErrorW(
    _In_ HWND hwndParent,
    _In_opt_ PCWSTR DialogTitle,
    _In_ PCWSTR File,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style
    );
WINSETUPAPI
UINT
WINAPI
SetupBackupErrorA(
    _In_ HWND hwndParent,
    _In_opt_ PCSTR DialogTitle,
    _In_ PCSTR SourceFile,
    _In_opt_ PCSTR TargetFile,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style
    );
WINSETUPAPI
UINT
WINAPI
SetupBackupErrorW(
    _In_ HWND hwndParent,
    _In_opt_ PCWSTR DialogTitle,
    _In_ PCWSTR SourceFile,
    _In_opt_ PCWSTR TargetFile,
    _In_ UINT Win32ErrorCode,
    _In_ DWORD Style
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetDirectoryIdA(
    _In_ HINF InfHandle,
    _In_ DWORD Id,
    _In_opt_ PCSTR Directory
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetDirectoryIdW(
    _In_ HINF InfHandle,
    _In_ DWORD Id,
    _In_opt_ PCWSTR Directory
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetDirectoryIdExA(
    _In_ HINF InfHandle,
    _In_ DWORD Id,
    _In_opt_ PCSTR Directory,
    _In_ DWORD Flags,
    _Reserved_ DWORD Reserved1,
    _Reserved_ PVOID Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetDirectoryIdExW(
    _In_ HINF InfHandle,
    _In_ DWORD Id,
    _In_opt_ PCWSTR Directory,
    _In_ DWORD Flags,
    _Reserved_ DWORD Reserved1,
    _Reserved_ PVOID Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetSourceInfoA(
    _In_ HINF InfHandle,
    _In_ UINT SourceId,
    _In_ UINT InfoDesired,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetSourceInfoW(
    _In_ HINF InfHandle,
    _In_ UINT SourceId,
    _In_ UINT InfoDesired,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFileA(
    _In_opt_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCSTR SourceFile,
    _In_opt_ PCSTR SourcePathRoot,
    _In_opt_ PCSTR DestinationName,
    _In_ DWORD CopyStyle,
    _In_opt_ PSP_FILE_CALLBACK_A CopyMsgHandler,
    _In_opt_ PVOID Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFileW(
    _In_opt_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCWSTR SourceFile,
    _In_opt_ PCWSTR SourcePathRoot,
    _In_opt_ PCWSTR DestinationName,
    _In_ DWORD CopyStyle,
    _In_opt_ PSP_FILE_CALLBACK_W CopyMsgHandler,
    _In_opt_ PVOID Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFileExA(
    _In_opt_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCSTR SourceFile,
    _In_opt_ PCSTR SourcePathRoot,
    _In_opt_ PCSTR DestinationName,
    _In_ DWORD CopyStyle,
    _In_opt_ PSP_FILE_CALLBACK_A CopyMsgHandler,
    _In_opt_ PVOID Context,
    _Out_ PBOOL FileWasInUse
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFileExW(
    _In_opt_ HINF InfHandle,
    _In_opt_ PINFCONTEXT InfContext,
    _In_opt_ PCWSTR SourceFile,
    _In_opt_ PCWSTR SourcePathRoot,
    _In_opt_ PCWSTR DestinationName,
    _In_ DWORD CopyStyle,
    _In_opt_ PSP_FILE_CALLBACK_W CopyMsgHandler,
    _In_opt_ PVOID Context,
    _Out_ PBOOL FileWasInUse
    );
WINSETUPAPI
HSPFILEQ
WINAPI
SetupOpenFileQueue(
    VOID
    );
WINSETUPAPI
BOOL
WINAPI
SetupCloseFileQueue(
    _In_ HSPFILEQ QueueHandle
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetFileQueueAlternatePlatformA(
    _In_ HSPFILEQ QueueHandle,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _In_opt_ PCSTR AlternateDefaultCatalogFile
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetFileQueueAlternatePlatformW(
    _In_ HSPFILEQ QueueHandle,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _In_opt_ PCWSTR AlternateDefaultCatalogFile
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetPlatformPathOverrideA(
    _In_opt_ PCSTR Override
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetPlatformPathOverrideW(
    _In_opt_ PCWSTR Override
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueCopyA(
    _In_ HSPFILEQ QueueHandle,
    _In_opt_ PCSTR SourceRootPath,
    _In_opt_ PCSTR SourcePath,
    _In_ PCSTR SourceFilename,
    _In_opt_ PCSTR SourceDescription,
    _In_opt_ PCSTR SourceTagfile,
    _In_ PCSTR TargetDirectory,
    _In_opt_ PCSTR TargetFilename,
    _In_ DWORD CopyStyle
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueCopyW(
    _In_ HSPFILEQ QueueHandle,
    _In_opt_ PCWSTR SourceRootPath,
    _In_opt_ PCWSTR SourcePath,
    _In_ PCWSTR SourceFilename,
    _In_opt_ PCWSTR SourceDescription,
    _In_opt_ PCWSTR SourceTagfile,
    _In_ PCWSTR TargetDirectory,
    _In_opt_ PCWSTR TargetFilename,
    _In_ DWORD CopyStyle
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueCopyIndirectA(
    _In_ PSP_FILE_COPY_PARAMS_A CopyParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueCopyIndirectW(
    _In_ PSP_FILE_COPY_PARAMS_W CopyParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueDefaultCopyA(
    _In_ HSPFILEQ QueueHandle,
    _In_ HINF InfHandle,
    _In_opt_ PCSTR SourceRootPath,
    _In_ PCSTR SourceFilename,
    _In_opt_ PCSTR TargetFilename,
    _In_ DWORD CopyStyle
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueDefaultCopyW(
    _In_ HSPFILEQ QueueHandle,
    _In_ HINF InfHandle,
    _In_opt_ PCWSTR SourceRootPath,
    _In_ PCWSTR SourceFilename,
    _In_opt_ PCWSTR TargetFilename,
    _In_ DWORD CopyStyle
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueCopySectionA(
    _In_ HSPFILEQ QueueHandle,
    _In_opt_ PCSTR SourceRootPath,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCSTR Section,
    _In_ DWORD CopyStyle
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueCopySectionW(
    _In_ HSPFILEQ QueueHandle,
    _In_opt_ PCWSTR SourceRootPath,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCWSTR Section,
    _In_ DWORD CopyStyle
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueDeleteA(
    _In_ HSPFILEQ QueueHandle,
    _In_ PCSTR PathPart1,
    _In_opt_ PCSTR PathPart2
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueDeleteW(
    _In_ HSPFILEQ QueueHandle,
    _In_ PCWSTR PathPart1,
    _In_opt_ PCWSTR PathPart2
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueDeleteSectionA(
    _In_ HSPFILEQ QueueHandle,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCSTR Section
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueDeleteSectionW(
    _In_ HSPFILEQ QueueHandle,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCWSTR Section
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueRenameA(
    _In_ HSPFILEQ QueueHandle,
    _In_ PCSTR SourcePath,
    _In_opt_ PCSTR SourceFilename,
    _In_opt_ PCSTR TargetPath,
    _In_ PCSTR TargetFilename
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueRenameW(
    _In_ HSPFILEQ QueueHandle,
    _In_ PCWSTR SourcePath,
    _In_opt_ PCWSTR SourceFilename,
    _In_opt_ PCWSTR TargetPath,
    _In_ PCWSTR TargetFilename
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueRenameSectionA(
    _In_ HSPFILEQ QueueHandle,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCSTR Section
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueueRenameSectionW(
    _In_ HSPFILEQ QueueHandle,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCWSTR Section
    );
WINSETUPAPI
BOOL
WINAPI
SetupCommitFileQueueA(
    _In_opt_ HWND Owner,
    _In_ HSPFILEQ QueueHandle,
    _In_ PSP_FILE_CALLBACK_A MsgHandler,
    _In_ PVOID Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupCommitFileQueueW(
    _In_opt_ HWND Owner,
    _In_ HSPFILEQ QueueHandle,
    _In_ PSP_FILE_CALLBACK_W MsgHandler,
    _In_ PVOID Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupScanFileQueueA(
    _In_ HSPFILEQ FileQueue,
    _In_ DWORD Flags,
    _In_opt_ HWND Window,
    _In_opt_ PSP_FILE_CALLBACK_A CallbackRoutine,
    _In_opt_ PVOID CallbackContext,
    _Out_ PDWORD Result
    );
WINSETUPAPI
BOOL
WINAPI
SetupScanFileQueueW(
    _In_ HSPFILEQ FileQueue,
    _In_ DWORD Flags,
    _In_opt_ HWND Window,
    _In_opt_ PSP_FILE_CALLBACK_W CallbackRoutine,
    _In_opt_ PVOID CallbackContext,
    _Out_ PDWORD Result
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetFileQueueCount(
    _In_ HSPFILEQ FileQueue,
    _In_ UINT SubQueueFileOp,
    _Out_ PUINT NumOperations
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetFileQueueFlags(
    _In_ HSPFILEQ FileQueue,
    _Out_ PDWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetFileQueueFlags(
    _In_ HSPFILEQ FileQueue,
    _In_ DWORD FlagMask,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupCopyOEMInfA(
    _In_ PCSTR SourceInfFileName,
    _In_opt_ PCSTR OEMSourceMediaLocation,
    _In_ DWORD OEMSourceMediaType,
    _In_ DWORD CopyStyle,
    _Out_writes_opt_(DestinationInfFileNameSize) PSTR DestinationInfFileName,
    _In_ DWORD DestinationInfFileNameSize,
    _Out_opt_ PDWORD RequiredSize,
    _Out_opt_ PSTR *DestinationInfFileNameComponent
    );
WINSETUPAPI
BOOL
WINAPI
SetupCopyOEMInfW(
    _In_ PCWSTR SourceInfFileName,
    _In_opt_ PCWSTR OEMSourceMediaLocation,
    _In_ DWORD OEMSourceMediaType,
    _In_ DWORD CopyStyle,
    _Out_writes_opt_(DestinationInfFileNameSize) PWSTR DestinationInfFileName,
    _In_ DWORD DestinationInfFileNameSize,
    _Out_opt_ PDWORD RequiredSize,
    _Out_opt_ PWSTR *DestinationInfFileNameComponent
    );
WINSETUPAPI
BOOL
WINAPI
SetupUninstallOEMInfA(
    _In_ PCSTR InfFileName,
    _In_ DWORD Flags,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupUninstallOEMInfW(
    _In_ PCWSTR InfFileName,
    _In_ DWORD Flags,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupUninstallNewlyCopiedInfs(
    _In_ HSPFILEQ FileQueue,
    _In_ DWORD Flags,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
HDSKSPC
WINAPI
SetupCreateDiskSpaceListA(
    _Reserved_ PVOID Reserved1,
    _Reserved_ DWORD Reserved2,
    _In_ UINT Flags
    );
WINSETUPAPI
HDSKSPC
WINAPI
SetupCreateDiskSpaceListW(
    _Reserved_ PVOID Reserved1,
    _Reserved_ DWORD Reserved2,
    _In_ UINT Flags
    );
WINSETUPAPI
HDSKSPC
WINAPI
SetupDuplicateDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _Reserved_ PVOID Reserved1,
    _Reserved_ DWORD Reserved2,
    _In_ UINT Flags
    );
WINSETUPAPI
HDSKSPC
WINAPI
SetupDuplicateDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _Reserved_ PVOID Reserved1,
    _Reserved_ DWORD Reserved2,
    _In_ UINT Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDestroyDiskSpaceList(
    _Inout_ HDSKSPC DiskSpace
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryDrivesInDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _Out_writes_opt_(ReturnBufferSize) PSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryDrivesInDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _Out_writes_opt_(ReturnBufferSize) PWSTR ReturnBuffer,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQuerySpaceRequiredOnDriveA(
    _In_ HDSKSPC DiskSpace,
    _In_ PCSTR DriveSpec,
    _Out_ LONGLONG *SpaceRequired,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupQuerySpaceRequiredOnDriveW(
    _In_ HDSKSPC DiskSpace,
    _In_ PCWSTR DriveSpec,
    _Out_ LONGLONG *SpaceRequired,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAdjustDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ LPCSTR DriveRoot,
    _In_ LONGLONG Amount,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAdjustDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ LPCWSTR DriveRoot,
    _In_ LONGLONG Amount,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddToDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ PCSTR TargetFilespec,
    _In_ LONGLONG FileSize,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddToDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ PCWSTR TargetFilespec,
    _In_ LONGLONG FileSize,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddSectionToDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCSTR SectionName,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddSectionToDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCWSTR SectionName,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddInstallSectionToDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF LayoutInfHandle,
    _In_ PCSTR SectionName,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupAddInstallSectionToDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF LayoutInfHandle,
    _In_ PCWSTR SectionName,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveFromDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ PCSTR TargetFilespec,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveFromDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ PCWSTR TargetFilespec,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveSectionFromDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCSTR SectionName,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveSectionFromDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF ListInfHandle,
    _In_ PCWSTR SectionName,
    _In_ UINT Operation,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveInstallSectionFromDiskSpaceListA(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF LayoutInfHandle,
    _In_ PCSTR SectionName,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveInstallSectionFromDiskSpaceListW(
    _In_ HDSKSPC DiskSpace,
    _In_ HINF InfHandle,
    _In_opt_ HINF LayoutInfHandle,
    _In_ PCWSTR SectionName,
    _Reserved_ PVOID Reserved1,
    _Reserved_ UINT Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupIterateCabinetA(
    _In_ PCSTR CabinetFile,
    _Reserved_ DWORD Reserved,
    _In_ PSP_FILE_CALLBACK_A MsgHandler,
    _In_ PVOID Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupIterateCabinetW(
    _In_ PCWSTR CabinetFile,
    _Reserved_ DWORD Reserved,
    _In_ PSP_FILE_CALLBACK_W MsgHandler,
    _In_ PVOID Context
    );
WINSETUPAPI
INT
WINAPI
SetupPromptReboot(
    _In_opt_ HSPFILEQ FileQueue,
    _In_opt_ HWND Owner,
    _In_ BOOL ScanOnly
    );
WINSETUPAPI
PVOID
WINAPI
SetupInitDefaultQueueCallback(
    _In_opt_ HWND OwnerWindow
    );
WINSETUPAPI
PVOID
WINAPI
SetupInitDefaultQueueCallbackEx(
    _In_opt_ HWND OwnerWindow,
    _In_opt_ HWND AlternateProgressWindow,
    _In_ UINT ProgressMessage,
    _Reserved_ DWORD Reserved1,
    _Reserved_ PVOID Reserved2
    );
WINSETUPAPI
VOID
WINAPI
SetupTermDefaultQueueCallback(
    _In_ PVOID Context
    );
WINSETUPAPI
UINT
WINAPI
SetupDefaultQueueCallbackA(
    _In_ PVOID Context,
    _In_ UINT Notification,
    _In_ UINT_PTR Param1,
    _In_ UINT_PTR Param2
    );
WINSETUPAPI
UINT
WINAPI
SetupDefaultQueueCallbackW(
    _In_ PVOID Context,
    _In_ UINT Notification,
    _In_ UINT_PTR Param1,
    _In_ UINT_PTR Param2
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFromInfSectionA(
    _In_opt_ HWND Owner,
    _In_ HINF InfHandle,
    _In_ PCSTR SectionName,
    _In_ UINT Flags,
    _In_opt_ HKEY RelativeKeyRoot,
    _In_opt_ PCSTR SourceRootPath,
    _In_ UINT CopyFlags,
    _In_opt_ PSP_FILE_CALLBACK_A MsgHandler,
    _In_opt_ PVOID Context,
    _In_opt_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFromInfSectionW(
    _In_opt_ HWND Owner,
    _In_ HINF InfHandle,
    _In_ PCWSTR SectionName,
    _In_ UINT Flags,
    _In_opt_ HKEY RelativeKeyRoot,
    _In_opt_ PCWSTR SourceRootPath,
    _In_ UINT CopyFlags,
    _In_opt_ PSP_FILE_CALLBACK_W MsgHandler,
    _In_opt_ PVOID Context,
    _In_opt_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFilesFromInfSectionA(
    _In_ HINF InfHandle,
    _In_opt_ HINF LayoutInfHandle,
    _In_ HSPFILEQ FileQueue,
    _In_ PCSTR SectionName,
    _In_opt_ PCSTR SourceRootPath,
    _In_ UINT CopyFlags
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallFilesFromInfSectionW(
    _In_ HINF InfHandle,
    _In_opt_ HINF LayoutInfHandle,
    _In_ HSPFILEQ FileQueue,
    _In_ PCWSTR SectionName,
    _In_opt_ PCWSTR SourceRootPath,
    _In_ UINT CopyFlags
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallServicesFromInfSectionA(
    _In_ HINF InfHandle,
    _In_ PCSTR SectionName,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallServicesFromInfSectionW(
    _In_ HINF InfHandle,
    _In_ PCWSTR SectionName,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallServicesFromInfSectionExA(
    _In_ HINF InfHandle,
    _In_ PCSTR SectionName,
    _In_ DWORD Flags,
    _In_opt_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Reserved_ PVOID Reserved1,
    _Reserved_ PVOID Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupInstallServicesFromInfSectionExW(
    _In_ HINF InfHandle,
    _In_ PCWSTR SectionName,
    _In_ DWORD Flags,
    _In_opt_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Reserved_ PVOID Reserved1,
    _Reserved_ PVOID Reserved2
    );
VOID
WINAPI
InstallHinfSectionA(
    _In_ HWND Window,
    _In_ HINSTANCE ModuleHandle,
    _In_ PCSTR CommandLine,
    _In_ INT ShowCommand
    );
VOID
WINAPI
InstallHinfSectionW(
    _In_ HWND Window,
    _In_ HINSTANCE ModuleHandle,
    _In_ PCWSTR CommandLine,
    _In_ INT ShowCommand
    );
typedef PVOID HSPFILELOG;
WINSETUPAPI
HSPFILELOG
WINAPI
SetupInitializeFileLogA(
    _In_opt_ PCSTR LogFileName,
    _In_ DWORD Flags
    );
WINSETUPAPI
HSPFILELOG
WINAPI
SetupInitializeFileLogW(
    _In_opt_ PCWSTR LogFileName,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupTerminateFileLog(
    _In_ HSPFILELOG FileLogHandle
    );
WINSETUPAPI
BOOL
WINAPI
SetupLogFileA(
    _In_ HSPFILELOG FileLogHandle,
    _In_opt_ PCSTR LogSectionName,
    _In_ PCSTR SourceFilename,
    _In_ PCSTR TargetFilename,
    _In_ DWORD Checksum,
    _In_opt_ PCSTR DiskTagfile,
    _In_opt_ PCSTR DiskDescription,
    _In_opt_ PCSTR OtherInfo,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupLogFileW(
    _In_ HSPFILELOG FileLogHandle,
    _In_opt_ PCWSTR LogSectionName,
    _In_ PCWSTR SourceFilename,
    _In_ PCWSTR TargetFilename,
    _In_ DWORD Checksum,
    _In_opt_ PCWSTR DiskTagfile,
    _In_opt_ PCWSTR DiskDescription,
    _In_opt_ PCWSTR OtherInfo,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveFileLogEntryA(
    _In_ HSPFILELOG FileLogHandle,
    _In_opt_ PCSTR LogSectionName,
    _In_opt_ PCSTR TargetFilename
    );
WINSETUPAPI
BOOL
WINAPI
SetupRemoveFileLogEntryW(
    _In_ HSPFILELOG FileLogHandle,
    _In_opt_ PCWSTR LogSectionName,
    _In_opt_ PCWSTR TargetFilename
    );
typedef enum {
    SetupFileLogSourceFilename,
    SetupFileLogChecksum,
    SetupFileLogDiskTagfile,
    SetupFileLogDiskDescription,
    SetupFileLogOtherInfo,
    SetupFileLogMax
} SetupFileLogInfo;
WINSETUPAPI
BOOL
WINAPI
SetupQueryFileLogA(
    _In_ HSPFILELOG FileLogHandle,
    _In_opt_ PCSTR LogSectionName,
    _In_ PCSTR TargetFilename,
    _In_ SetupFileLogInfo DesiredInfo,
    _Out_writes_opt_(ReturnBufferSize) PSTR DataOut,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupQueryFileLogW(
    _In_ HSPFILELOG FileLogHandle,
    _In_opt_ PCWSTR LogSectionName,
    _In_ PCWSTR TargetFilename,
    _In_ SetupFileLogInfo DesiredInfo,
    _Out_writes_opt_(ReturnBufferSize) PWSTR DataOut,
    _In_ DWORD ReturnBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupOpenLog (
    _In_ BOOL Erase
    );
WINSETUPAPI
BOOL
WINAPI
SetupLogErrorA (
    _In_ LPCSTR MessageString,
    _In_ LogSeverity Severity
    );
WINSETUPAPI
BOOL
WINAPI
SetupLogErrorW (
    _In_ LPCWSTR MessageString,
    _In_ LogSeverity Severity
    );
WINSETUPAPI
VOID
WINAPI
SetupCloseLog (
    VOID
    );
WINSETUPAPI
SP_LOG_TOKEN
WINAPI
SetupGetThreadLogToken(
    VOID
    );
WINSETUPAPI
VOID
WINAPI
SetupSetThreadLogToken(
    _In_ SP_LOG_TOKEN LogToken
    );
WINSETUPAPI
VOID
WINAPI
SetupWriteTextLog(
    _In_ SP_LOG_TOKEN LogToken,
    _In_ DWORD Category,
    _In_ DWORD Flags,
    _In_ PCSTR MessageStr,
    ...
    );
WINSETUPAPI
VOID
WINAPI
SetupWriteTextLogError(
    _In_ SP_LOG_TOKEN LogToken,
    _In_ DWORD Category,
    _In_ DWORD LogFlags,
    _In_ DWORD Error,
    _In_ PCSTR MessageStr,
    ...
    );
WINSETUPAPI
VOID
WINAPI
SetupWriteTextLogInfLine(
    _In_ SP_LOG_TOKEN LogToken,
    _In_ DWORD Flags,
    _In_ HINF InfHandle,
    _In_ PINFCONTEXT Context
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetBackupInformationA(
    _In_ HSPFILEQ QueueHandle,
    _Inout_ PSP_BACKUP_QUEUE_PARAMS_A BackupParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetBackupInformationW(
    _In_ HSPFILEQ QueueHandle,
    _Inout_ PSP_BACKUP_QUEUE_PARAMS_W BackupParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupPrepareQueueForRestoreA(
    _In_ HSPFILEQ QueueHandle,
    _In_ PCSTR BackupPath,
    _In_ DWORD RestoreFlags
    );
WINSETUPAPI
BOOL
WINAPI
SetupPrepareQueueForRestoreW(
    _In_ HSPFILEQ QueueHandle,
    _In_ PCWSTR BackupPath,
    _In_ DWORD RestoreFlags
    );
WINSETUPAPI
BOOL
WINAPI
SetupSetNonInteractiveMode(
    _In_ BOOL NonInteractiveFlag
    );
WINSETUPAPI
BOOL
WINAPI
SetupGetNonInteractiveMode(
    VOID
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiCreateDeviceInfoList(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ HWND hwndParent
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiCreateDeviceInfoListExA(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ HWND hwndParent,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiCreateDeviceInfoListExW(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ HWND hwndParent,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInfoListClass(
    _In_ HDEVINFO DeviceInfoSet,
    _Out_ LPGUID ClassGuid
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInfoListDetailA(
    _In_ HDEVINFO DeviceInfoSet,
    _Out_ PSP_DEVINFO_LIST_DETAIL_DATA_A DeviceInfoSetDetailData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInfoListDetailW(
    _In_ HDEVINFO DeviceInfoSet,
    _Out_ PSP_DEVINFO_LIST_DETAIL_DATA_W DeviceInfoSetDetailData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiCreateDeviceInfoA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PCSTR DeviceName,
    _In_ CONST GUID *ClassGuid,
    _In_opt_ PCSTR DeviceDescription,
    _In_opt_ HWND hwndParent,
    _In_ DWORD CreationFlags,
    _Out_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiCreateDeviceInfoW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PCWSTR DeviceName,
    _In_ CONST GUID *ClassGuid,
    _In_opt_ PCWSTR DeviceDescription,
    _In_opt_ HWND hwndParent,
    _In_ DWORD CreationFlags,
    _Out_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiOpenDeviceInfoA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PCSTR DeviceInstanceId,
    _In_opt_ HWND hwndParent,
    _In_ DWORD OpenFlags,
    _Out_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiOpenDeviceInfoW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PCWSTR DeviceInstanceId,
    _In_opt_ HWND hwndParent,
    _In_ DWORD OpenFlags,
    _Out_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInstanceIdA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_writes_opt_(DeviceInstanceIdSize) PSTR DeviceInstanceId,
    _In_ DWORD DeviceInstanceIdSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInstanceIdW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_writes_opt_(DeviceInstanceIdSize) PWSTR DeviceInstanceId,
    _In_ DWORD DeviceInstanceIdSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDeleteDeviceInfo(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiEnumDeviceInfo(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ DWORD MemberIndex,
    _Out_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDestroyDeviceInfoList(
    _In_ HDEVINFO DeviceInfoSet
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiEnumDeviceInterfaces(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ CONST GUID *InterfaceClassGuid,
    _In_ DWORD MemberIndex,
    _Out_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiCreateDeviceInterfaceA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ CONST GUID *InterfaceClassGuid,
    _In_opt_ PCSTR ReferenceString,
    _In_ DWORD CreationFlags,
    _Out_opt_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiCreateDeviceInterfaceW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ CONST GUID *InterfaceClassGuid,
    _In_opt_ PCWSTR ReferenceString,
    _In_ DWORD CreationFlags,
    _Out_opt_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiOpenDeviceInterfaceA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PCSTR DevicePath,
    _In_ DWORD OpenFlags,
    _Out_opt_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiOpenDeviceInterfaceW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PCWSTR DevicePath,
    _In_ DWORD OpenFlags,
    _Out_opt_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInterfaceAlias(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _In_ CONST GUID *AliasInterfaceClassGuid,
    _Out_ PSP_DEVICE_INTERFACE_DATA AliasDeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDeleteDeviceInterfaceData(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiRemoveDeviceInterface(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData
    );
_Success_(return != FALSE)
_At_((LPSTR)DeviceInterfaceDetailData->DevicePath, _Post_z_)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInterfaceDetailA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Inout_updates_bytes_to_opt_(DeviceInterfaceDetailDataSize, *RequiredSize) PSP_DEVICE_INTERFACE_DETAIL_DATA_A DeviceInterfaceDetailData,
    _In_ DWORD DeviceInterfaceDetailDataSize,
    _Out_opt_ _Out_range_(>=, sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA_A)) PDWORD RequiredSize,
    _Out_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
_Success_(return != FALSE)
_At_((LPWSTR)DeviceInterfaceDetailData->DevicePath, _Post_z_)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInterfaceDetailW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Out_writes_bytes_to_opt_(DeviceInterfaceDetailDataSize, *RequiredSize) PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData,
    _In_ DWORD DeviceInterfaceDetailDataSize,
    _Out_opt_ _Out_range_(>=, sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA_W)) PDWORD RequiredSize,
    _Out_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallDeviceInterfaces(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDeviceInterfaceDefault(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _In_ DWORD Flags,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiRegisterDeviceInfo(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Flags,
    _In_opt_ PSP_DETSIG_CMPPROC CompareProc,
    _In_opt_ PVOID CompareContext,
    _Out_opt_ PSP_DEVINFO_DATA DupDeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiBuildDriverInfoList(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD DriverType
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiCancelDriverInfoSearch(
    _In_ HDEVINFO DeviceInfoSet
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiEnumDriverInfoA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD DriverType,
    _In_ DWORD MemberIndex,
    _Out_ PSP_DRVINFO_DATA_A DriverInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiEnumDriverInfoW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD DriverType,
    _In_ DWORD MemberIndex,
    _Out_ PSP_DRVINFO_DATA_W DriverInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetSelectedDriverA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_ PSP_DRVINFO_DATA_A DriverInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetSelectedDriverW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_ PSP_DRVINFO_DATA_W DriverInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetSelectedDriverA(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Inout_opt_ PSP_DRVINFO_DATA_A DriverInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetSelectedDriverW(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Inout_opt_ PSP_DRVINFO_DATA_W DriverInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDriverInfoDetailA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DRVINFO_DATA_A DriverInfoData,
    _Inout_updates_bytes_opt_(DriverInfoDetailDataSize) PSP_DRVINFO_DETAIL_DATA_A DriverInfoDetailData,
    _In_ DWORD DriverInfoDetailDataSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDriverInfoDetailW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DRVINFO_DATA_W DriverInfoData,
    _Inout_updates_bytes_opt_(DriverInfoDetailDataSize) PSP_DRVINFO_DETAIL_DATA_W DriverInfoDetailData,
    _In_ DWORD DriverInfoDetailDataSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDestroyDriverInfoList(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD DriverType
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiGetClassDevsA(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ PCSTR Enumerator,
    _In_opt_ HWND hwndParent,
    _In_ DWORD Flags
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiGetClassDevsW(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ PCWSTR Enumerator,
    _In_opt_ HWND hwndParent,
    _In_ DWORD Flags
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiGetClassDevsExA(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ PCSTR Enumerator,
    _In_opt_ HWND hwndParent,
    _In_ DWORD Flags,
    _In_opt_ HDEVINFO DeviceInfoSet,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Check_return_
WINSETUPAPI
HDEVINFO
WINAPI
SetupDiGetClassDevsExW(
    _In_opt_ CONST GUID *ClassGuid,
    _In_opt_ PCWSTR Enumerator,
    _In_opt_ HWND hwndParent,
    _In_ DWORD Flags,
    _In_opt_ HDEVINFO DeviceInfoSet,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetINFClassA(
    _In_ PCSTR InfName,
    _Out_ LPGUID ClassGuid,
    _Out_writes_(ClassNameSize) PSTR ClassName,
    _In_ DWORD ClassNameSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetINFClassW(
    _In_ PCWSTR InfName,
    _Out_ LPGUID ClassGuid,
    _Out_writes_(ClassNameSize) PWSTR ClassName,
    _In_ DWORD ClassNameSize,
    _Out_opt_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiBuildClassInfoList(
    _In_ DWORD Flags,
    _Out_writes_to_opt_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiBuildClassInfoListExA(
    _In_ DWORD Flags,
    _Out_writes_to_opt_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiBuildClassInfoListExW(
    _In_ DWORD Flags,
    _Out_writes_to_opt_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassDescriptionA(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassDescriptionSize) PSTR ClassDescription,
    _In_ DWORD ClassDescriptionSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassDescriptionW(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassDescriptionSize) PWSTR ClassDescription,
    _In_ DWORD ClassDescriptionSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassDescriptionExA(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassDescriptionSize) PSTR ClassDescription,
    _In_ DWORD ClassDescriptionSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassDescriptionExW(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassDescriptionSize) PWSTR ClassDescription,
    _In_ DWORD ClassDescriptionSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiCallClassInstaller(
    _In_ DI_FUNCTION InstallFunction,
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSelectDevice(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSelectBestCompatDrv(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallDevice(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallDriverFiles(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiRegisterCoDeviceInstallers(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiRemoveDevice(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiUnremoveDevice(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiRestartDevices(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiChangeState(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallClassA(
    _In_opt_ HWND hwndParent,
    _In_ PCSTR InfFileName,
    _In_ DWORD Flags,
    _In_opt_ HSPFILEQ FileQueue
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallClassW(
    _In_opt_ HWND hwndParent,
    _In_ PCWSTR InfFileName,
    _In_ DWORD Flags,
    _In_opt_ HSPFILEQ FileQueue
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallClassExA(
    _In_opt_ HWND hwndParent,
    _In_opt_ PCSTR InfFileName,
    _In_ DWORD Flags,
    _In_opt_ HSPFILEQ FileQueue,
    _In_opt_ CONST GUID *InterfaceClassGuid,
    _Reserved_ PVOID Reserved1,
    _Reserved_ PVOID Reserved2
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiInstallClassExW(
    _In_opt_ HWND hwndParent,
    _In_opt_ PCWSTR InfFileName,
    _In_ DWORD Flags,
    _In_opt_ HSPFILEQ FileQueue,
    _In_opt_ CONST GUID *InterfaceClassGuid,
    _Reserved_ PVOID Reserved1,
    _Reserved_ PVOID Reserved2
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiOpenClassRegKey(
    _In_opt_ CONST GUID *ClassGuid,
    _In_ REGSAM samDesired
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiOpenClassRegKeyExA(
    _In_opt_ CONST GUID *ClassGuid,
    _In_ REGSAM samDesired,
    _In_ DWORD Flags,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiOpenClassRegKeyExW(
    _In_opt_ CONST GUID *ClassGuid,
    _In_ REGSAM samDesired,
    _In_ DWORD Flags,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiCreateDeviceInterfaceRegKeyA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Reserved_ DWORD Reserved,
    _In_ REGSAM samDesired,
    _In_opt_ HINF InfHandle,
    _In_opt_ PCSTR InfSectionName
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiCreateDeviceInterfaceRegKeyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Reserved_ DWORD Reserved,
    _In_ REGSAM samDesired,
    _In_opt_ HINF InfHandle,
    _In_opt_ PCWSTR InfSectionName
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiOpenDeviceInterfaceRegKey(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Reserved_ DWORD Reserved,
    _In_ REGSAM samDesired
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDeleteDeviceInterfaceRegKey(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Reserved_ DWORD Reserved
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiCreateDevRegKeyA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Scope,
    _In_ DWORD HwProfile,
    _In_ DWORD KeyType,
    _In_opt_ HINF InfHandle,
    _In_opt_ PCSTR InfSectionName
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiCreateDevRegKeyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Scope,
    _In_ DWORD HwProfile,
    _In_ DWORD KeyType,
    _In_opt_ HINF InfHandle,
    _In_opt_ PCWSTR InfSectionName
    );
_Check_return_
WINSETUPAPI
HKEY
WINAPI
SetupDiOpenDevRegKey(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Scope,
    _In_ DWORD HwProfile,
    _In_ DWORD KeyType,
    _In_ REGSAM samDesired
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDeleteDevRegKey(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Scope,
    _In_ DWORD HwProfile,
    _In_ DWORD KeyType
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileList(
    _Out_writes_to_(HwProfileListSize, *RequiredSize) PDWORD HwProfileList,
    _In_ DWORD HwProfileListSize,
    _Out_ PDWORD RequiredSize,
    _Out_opt_ PDWORD CurrentlyActiveIndex
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileListExA(
    _Out_writes_to_(HwProfileListSize, *RequiredSize) PDWORD HwProfileList,
    _In_ DWORD HwProfileListSize,
    _Out_ PDWORD RequiredSize,
    _Out_opt_ PDWORD CurrentlyActiveIndex,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileListExW(
    _Out_writes_to_(HwProfileListSize, *RequiredSize) PDWORD HwProfileList,
    _In_ DWORD HwProfileListSize,
    _Out_ PDWORD RequiredSize,
    _Out_opt_ PDWORD CurrentlyActiveIndex,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDevicePropertyKeys(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_writes_opt_(PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _In_ DWORD PropertyKeyCount,
    _Out_opt_ PDWORD RequiredPropertyKeyCount,
    _In_ DWORD Flags
    );
_Success_(return != FALSE)
_When_(*PropertyType == DEVPROP_TYPE_STRING, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_INDIRECT, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_LIST, _At_((PZZWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDevicePropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDevicePropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInterfacePropertyKeys(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _Out_writes_opt_(PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _In_ DWORD PropertyKeyCount,
    _Out_opt_ PDWORD RequiredPropertyKeyCount,
    _In_ DWORD Flags
    );
_Success_(return != FALSE)
_When_(*PropertyType == DEVPROP_TYPE_STRING, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_INDIRECT, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_LIST, _At_((PZZWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInterfacePropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDeviceInterfacePropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVICE_INTERFACE_DATA DeviceInterfaceData,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassPropertyKeys(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_opt_(PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _In_ DWORD PropertyKeyCount,
    _Out_opt_ PDWORD RequiredPropertyKeyCount,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassPropertyKeysExW(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_opt_(PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _In_ DWORD PropertyKeyCount,
    _Out_opt_ PDWORD RequiredPropertyKeyCount,
    _In_ DWORD Flags,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
_When_(*PropertyType == DEVPROP_TYPE_STRING, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_INDIRECT, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_LIST, _At_((PZZWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassPropertyW(
    _In_ CONST GUID *ClassGuid,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_ DWORD Flags
    );
_Success_(return != FALSE)
_When_(*PropertyType == DEVPROP_TYPE_STRING, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_INDIRECT, _At_((PWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
_When_(*PropertyType == DEVPROP_TYPE_STRING_LIST, _At_((PZZWSTR) PropertyBuffer, _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize)))
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassPropertyExW(
    _In_ CONST GUID *ClassGuid,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_ DWORD Flags,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetClassPropertyW(
    _In_ CONST GUID *ClassGuid,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetClassPropertyExW(
    _In_ CONST GUID *ClassGuid,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _In_ DWORD Flags,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
_When_((*PropertyRegDataType == REG_SZ), _At_((PSTR) PropertyBuffer, _Post_valid_))
_When_((*PropertyRegDataType == REG_MULTI_SZ), _At_((PZZSTR) PropertyBuffer, _Post_valid_))
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceRegistryPropertyA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Property,
    _Out_opt_ PDWORD PropertyRegDataType,
    _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
_When_((*PropertyRegDataType == REG_SZ), _At_((PWSTR) PropertyBuffer, _Post_valid_))
_When_((*PropertyRegDataType == REG_MULTI_SZ), _At_((PZZWSTR) PropertyBuffer, _Post_valid_))
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceRegistryPropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Property,
    _Out_opt_ PDWORD PropertyRegDataType,
    _Out_writes_bytes_to_opt_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassRegistryPropertyA(
    _In_ CONST GUID *ClassGuid,
    _In_ DWORD Property,
    _Out_opt_ PDWORD PropertyRegDataType,
    _Out_writes_bytes_to_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassRegistryPropertyW(
    _In_ CONST GUID *ClassGuid,
    _In_ DWORD Property,
    _Out_opt_ PDWORD PropertyRegDataType,
    _Out_writes_bytes_to_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDeviceRegistryPropertyA(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Property,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST BYTE *PropertyBuffer,
    _In_ DWORD PropertyBufferSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDeviceRegistryPropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Property,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST BYTE *PropertyBuffer,
    _In_ DWORD PropertyBufferSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetClassRegistryPropertyA(
    _In_ CONST GUID *ClassGuid,
    _In_ DWORD Property,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST BYTE *PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetClassRegistryPropertyW(
    _In_ CONST GUID *ClassGuid,
    _In_ DWORD Property,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST BYTE *PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInstallParamsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_ PSP_DEVINSTALL_PARAMS_A DeviceInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDeviceInstallParamsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_ PSP_DEVINSTALL_PARAMS_W DeviceInstallParams
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassInstallParamsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_writes_bytes_to_opt_(ClassInstallParamsSize, *RequiredSize) PSP_CLASSINSTALL_HEADER ClassInstallParams,
    _In_ DWORD ClassInstallParamsSize,
    _Out_opt_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassInstallParamsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _Out_writes_bytes_to_opt_(ClassInstallParamsSize, *RequiredSize) PSP_CLASSINSTALL_HEADER ClassInstallParams,
    _In_ DWORD ClassInstallParamsSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDeviceInstallParamsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DEVINSTALL_PARAMS_A DeviceInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDeviceInstallParamsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DEVINSTALL_PARAMS_W DeviceInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetClassInstallParamsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_reads_bytes_opt_(ClassInstallParamsSize) PSP_CLASSINSTALL_HEADER ClassInstallParams,
    _In_ DWORD ClassInstallParamsSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetClassInstallParamsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_reads_bytes_opt_(ClassInstallParamsSize) PSP_CLASSINSTALL_HEADER ClassInstallParams,
    _In_ DWORD ClassInstallParamsSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDriverInstallParamsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DRVINFO_DATA_A DriverInfoData,
    _Out_ PSP_DRVINSTALL_PARAMS DriverInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetDriverInstallParamsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DRVINFO_DATA_W DriverInfoData,
    _Out_ PSP_DRVINSTALL_PARAMS DriverInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDriverInstallParamsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DRVINFO_DATA_A DriverInfoData,
    _In_ PSP_DRVINSTALL_PARAMS DriverInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetDriverInstallParamsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_DRVINFO_DATA_W DriverInfoData,
    _In_ PSP_DRVINSTALL_PARAMS DriverInstallParams
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiLoadClassIcon(
    _In_ CONST GUID *ClassGuid,
    _Out_opt_ HICON *LargeIcon,
    _Out_opt_ PINT MiniIconIndex
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiLoadDeviceIcon(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ UINT cxIcon,
    _In_ UINT cyIcon,
    _In_ DWORD Flags,
    _Out_ HICON *hIcon
    );
WINSETUPAPI
INT
WINAPI
SetupDiDrawMiniIcon(
    _In_ HDC hdc,
    _In_ RECT rc,
    _In_ INT MiniIconIndex,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassBitmapIndex(
    _In_opt_ CONST GUID *ClassGuid,
    _Out_ PINT MiniIconIndex
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassImageList(
    _Out_ PSP_CLASSIMAGELIST_DATA ClassImageListData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassImageListExA(
    _Out_ PSP_CLASSIMAGELIST_DATA ClassImageListData,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassImageListExW(
    _Out_ PSP_CLASSIMAGELIST_DATA ClassImageListData,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassImageIndex(
    _In_ PSP_CLASSIMAGELIST_DATA ClassImageListData,
    _In_ CONST GUID *ClassGuid,
    _Out_ PINT ImageIndex
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiDestroyClassImageList(
    _In_ PSP_CLASSIMAGELIST_DATA ClassImageListData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassDevPropertySheetsA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ LPPROPSHEETHEADERA PropertySheetHeader,
    _In_ DWORD PropertySheetHeaderPageListSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_ DWORD PropertySheetType
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetClassDevPropertySheetsW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ LPPROPSHEETHEADERW PropertySheetHeader,
    _In_ DWORD PropertySheetHeaderPageListSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_ DWORD PropertySheetType
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiAskForOEMDisk(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSelectOEMDrv(
    _In_opt_ HWND hwndParent,
    _In_ HDEVINFO DeviceInfoSet,
    _Inout_opt_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiClassNameFromGuidA(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassNameSize) PSTR ClassName,
    _In_ DWORD ClassNameSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiClassNameFromGuidW(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassNameSize) PWSTR ClassName,
    _In_ DWORD ClassNameSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiClassNameFromGuidExA(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassNameSize) PSTR ClassName,
    _In_ DWORD ClassNameSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiClassNameFromGuidExW(
    _In_ CONST GUID *ClassGuid,
    _Out_writes_(ClassNameSize) PWSTR ClassName,
    _In_ DWORD ClassNameSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiClassGuidsFromNameA(
    _In_ PCSTR ClassName,
    _Out_writes_to_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiClassGuidsFromNameW(
    _In_ PCWSTR ClassName,
    _Out_writes_to_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiClassGuidsFromNameExA(
    _In_ PCSTR ClassName,
    _Out_writes_to_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiClassGuidsFromNameExW(
    _In_ PCWSTR ClassName,
    _Out_writes_to_(ClassGuidListSize, *RequiredSize) LPGUID ClassGuidList,
    _In_ DWORD ClassGuidListSize,
    _Out_ PDWORD RequiredSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileFriendlyNameA(
    _In_ DWORD HwProfile,
    _Out_writes_(FriendlyNameSize) PSTR FriendlyName,
    _In_ DWORD FriendlyNameSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileFriendlyNameW(
    _In_ DWORD HwProfile,
    _Out_writes_(FriendlyNameSize) PWSTR FriendlyName,
    _In_ DWORD FriendlyNameSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileFriendlyNameExA(
    _In_ DWORD HwProfile,
    _Out_writes_(FriendlyNameSize) PSTR FriendlyName,
    _In_ DWORD FriendlyNameSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetHwProfileFriendlyNameExW(
    _In_ DWORD HwProfile,
    _Out_writes_(FriendlyNameSize) PWSTR FriendlyName,
    _In_ DWORD FriendlyNameSize,
    _Out_opt_ PDWORD RequiredSize,
    _In_opt_ PCWSTR MachineName,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
HPROPSHEETPAGE
WINAPI
SetupDiGetWizardPage(
    _In_ HDEVINFO DeviceInfoSet,
    _In_opt_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PSP_INSTALLWIZARD_DATA InstallWizardData,
    _In_ DWORD PageType,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetSelectedDevice(
    _In_ HDEVINFO DeviceInfoSet,
    _Out_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiSetSelectedDevice(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetActualModelsSectionA(
    _In_ PINFCONTEXT Context,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _Out_writes_opt_(InfSectionWithExtSize) PSTR InfSectionWithExt,
    _In_ DWORD InfSectionWithExtSize,
    _Out_opt_ PDWORD RequiredSize,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetActualModelsSectionW(
    _In_ PINFCONTEXT Context,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _Out_writes_opt_(InfSectionWithExtSize) PWSTR InfSectionWithExt,
    _In_ DWORD InfSectionWithExtSize,
    _Out_opt_ PDWORD RequiredSize,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetActualSectionToInstallA(
    _In_ HINF InfHandle,
    _In_ PCSTR InfSectionName,
    _Out_writes_opt_(InfSectionWithExtSize) PSTR InfSectionWithExt,
    _In_ DWORD InfSectionWithExtSize,
    _Out_opt_ PDWORD RequiredSize,
    _Out_opt_ PSTR *Extension
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetActualSectionToInstallW(
    _In_ HINF InfHandle,
    _In_ PCWSTR InfSectionName,
    _Out_writes_opt_(InfSectionWithExtSize) PWSTR InfSectionWithExt,
    _In_ DWORD InfSectionWithExtSize,
    _Out_opt_ PDWORD RequiredSize,
    _Out_opt_ PWSTR *Extension
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetActualSectionToInstallExA(
    _In_ HINF InfHandle,
    _In_ PCSTR InfSectionName,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _Out_writes_opt_(InfSectionWithExtSize) PSTR InfSectionWithExt,
    _In_ DWORD InfSectionWithExtSize,
    _Out_opt_ PDWORD RequiredSize,
    _Out_opt_ PSTR *Extension,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupDiGetActualSectionToInstallExW(
    _In_ HINF InfHandle,
    _In_ PCWSTR InfSectionName,
    _In_opt_ PSP_ALTPLATFORM_INFO AlternatePlatformInfo,
    _Out_writes_opt_(InfSectionWithExtSize) PWSTR InfSectionWithExt,
    _In_ DWORD InfSectionWithExtSize,
    _Out_opt_ PDWORD RequiredSize,
    _Out_opt_ PWSTR *Extension,
    _Reserved_ PVOID Reserved
    );
WINSETUPAPI
BOOL
WINAPI
SetupEnumInfSectionsA (
    _In_ HINF InfHandle,
    _In_ UINT Index,
    _Out_writes_opt_(Size) PSTR Buffer,
    _In_ UINT Size,
    _Out_opt_ UINT *SizeNeeded
    );
WINSETUPAPI
BOOL
WINAPI
SetupEnumInfSectionsW (
    _In_ HINF InfHandle,
    _In_ UINT Index,
    _Out_writes_opt_(Size) PWSTR Buffer,
    _In_ UINT Size,
    _Out_opt_ UINT *SizeNeeded
    );
typedef struct _SP_INF_SIGNER_INFO_V1_A {
    DWORD cbSize;
    CHAR CatalogFile[MAX_PATH];
    CHAR DigitalSigner[MAX_PATH];
    CHAR DigitalSignerVersion[MAX_PATH];
} SP_INF_SIGNER_INFO_V1_A, *PSP_INF_SIGNER_INFO_V1_A;
typedef struct _SP_INF_SIGNER_INFO_V1_W {
    DWORD cbSize;
    WCHAR CatalogFile[MAX_PATH];
    WCHAR DigitalSigner[MAX_PATH];
    WCHAR DigitalSignerVersion[MAX_PATH];
} SP_INF_SIGNER_INFO_V1_W, *PSP_INF_SIGNER_INFO_V1_W;
typedef SP_INF_SIGNER_INFO_V1_W SP_INF_SIGNER_INFO_V1;
typedef PSP_INF_SIGNER_INFO_V1_W PSP_INF_SIGNER_INFO_V1;
typedef struct _SP_INF_SIGNER_INFO_V2_A {
    DWORD cbSize;
    CHAR CatalogFile[MAX_PATH];
    CHAR DigitalSigner[MAX_PATH];
    CHAR DigitalSignerVersion[MAX_PATH];
    DWORD SignerScore;
} SP_INF_SIGNER_INFO_V2_A, *PSP_INF_SIGNER_INFO_V2_A;
typedef struct _SP_INF_SIGNER_INFO_V2_W {
    DWORD cbSize;
    WCHAR CatalogFile[MAX_PATH];
    WCHAR DigitalSigner[MAX_PATH];
    WCHAR DigitalSignerVersion[MAX_PATH];
    DWORD SignerScore;
} SP_INF_SIGNER_INFO_V2_W, *PSP_INF_SIGNER_INFO_V2_W;
typedef SP_INF_SIGNER_INFO_V2_W SP_INF_SIGNER_INFO_V2;
typedef PSP_INF_SIGNER_INFO_V2_W PSP_INF_SIGNER_INFO_V2;
typedef SP_INF_SIGNER_INFO_V2_A SP_INF_SIGNER_INFO_A;
typedef PSP_INF_SIGNER_INFO_V2_A PSP_INF_SIGNER_INFO_A;
typedef SP_INF_SIGNER_INFO_V2_W SP_INF_SIGNER_INFO_W;
typedef PSP_INF_SIGNER_INFO_V2_W PSP_INF_SIGNER_INFO_W;
typedef SP_INF_SIGNER_INFO_V2 SP_INF_SIGNER_INFO;
typedef PSP_INF_SIGNER_INFO_V2 PSP_INF_SIGNER_INFO;
WINSETUPAPI
BOOL
WINAPI
SetupVerifyInfFileA(
    _In_ PCSTR InfName,
    _In_opt_ PSP_ALTPLATFORM_INFO AltPlatformInfo,
    _Inout_ PSP_INF_SIGNER_INFO_A InfSignerInfo
    );
WINSETUPAPI
BOOL
WINAPI
SetupVerifyInfFileW(
    _In_ PCWSTR InfName,
    _In_opt_ PSP_ALTPLATFORM_INFO AltPlatformInfo,
    _Inout_ PSP_INF_SIGNER_INFO_W InfSignerInfo
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetCustomDevicePropertyA(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PCSTR CustomPropertyName,
    _In_ DWORD Flags,
    _Out_opt_ PDWORD PropertyRegDataType,
    _Out_writes_bytes_to_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
_Success_(return != FALSE)
WINSETUPAPI
BOOL
WINAPI
SetupDiGetCustomDevicePropertyW(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ PCWSTR CustomPropertyName,
    _In_ DWORD Flags,
    _Out_opt_ PDWORD PropertyRegDataType,
    _Out_writes_bytes_to_(PropertyBufferSize, *RequiredSize) PBYTE PropertyBuffer,
    _In_ DWORD PropertyBufferSize,
    _Out_opt_ PDWORD RequiredSize
    );
WINSETUPAPI
BOOL
WINAPI
SetupConfigureWmiFromInfSectionA(
    _In_ HINF InfHandle,
    _In_ PCSTR SectionName,
    _In_ DWORD Flags
    );
WINSETUPAPI
BOOL
WINAPI
SetupConfigureWmiFromInfSectionW(
    _In_ HINF InfHandle,
    _In_ PCWSTR SectionName,
    _In_ DWORD Flags
    );
}
#include <poppack.h>
#endif
#pragma endregion
