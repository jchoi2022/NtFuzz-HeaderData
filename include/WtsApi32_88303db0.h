#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
                                               WTS_SECURITY_VIRTUAL_CHANNELS | WTS_SECURITY_LOGOFF \
                                               WTS_SECURITY_DISCONNECT)
                                               WTS_SECURITY_SET_INFORMATION | WTS_SECURITY_RESET | \
                                               WTS_SECURITY_VIRTUAL_CHANNELS | WTS_SECURITY_REMOTE_CONTROL | \
                                               WTS_SECURITY_LOGON | \
                                               WTS_SECURITY_MESSAGE | \
                                               WTS_SECURITY_CONNECT | WTS_SECURITY_DISCONNECT)
typedef enum _WTS_CONNECTSTATE_CLASS {
    WTSActive,
    WTSConnected,
    WTSConnectQuery,
    WTSShadow,
    WTSDisconnected,
    WTSIdle,
    WTSListen,
    WTSReset,
    WTSDown,
    WTSInit,
} WTS_CONNECTSTATE_CLASS;
typedef struct _WTS_SERVER_INFOW {
    LPWSTR pServerName;
} WTS_SERVER_INFOW, * PWTS_SERVER_INFOW;
typedef struct _WTS_SERVER_INFOA {
    LPSTR pServerName;
} WTS_SERVER_INFOA, * PWTS_SERVER_INFOA;
typedef struct _WTS_SESSION_INFOW {
    DWORD SessionId;
    LPWSTR pWinStationName;
    WTS_CONNECTSTATE_CLASS State;
} WTS_SESSION_INFOW, * PWTS_SESSION_INFOW;
typedef struct _WTS_SESSION_INFOA {
    DWORD SessionId;
    LPSTR pWinStationName;
    WTS_CONNECTSTATE_CLASS State;
} WTS_SESSION_INFOA, * PWTS_SESSION_INFOA;
typedef struct _WTS_SESSION_INFO_1W {
    DWORD ExecEnvId;
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    LPWSTR pSessionName;
    LPWSTR pHostName;
    LPWSTR pUserName;
    LPWSTR pDomainName;
    LPWSTR pFarmName;
} WTS_SESSION_INFO_1W, * PWTS_SESSION_INFO_1W;
typedef struct _WTS_SESSION_INFO_1A {
    DWORD ExecEnvId;
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    LPSTR pSessionName;
    LPSTR pHostName;
    LPSTR pUserName;
    LPSTR pDomainName;
    LPSTR pFarmName;
} WTS_SESSION_INFO_1A, * PWTS_SESSION_INFO_1A;
typedef struct _WTS_PROCESS_INFOW {
    DWORD SessionId;
    DWORD ProcessId;
    LPWSTR pProcessName;
    PSID pUserSid;
} WTS_PROCESS_INFOW, * PWTS_PROCESS_INFOW;
typedef struct _WTS_PROCESS_INFOA {
    DWORD SessionId;
    DWORD ProcessId;
    LPSTR pProcessName;
    PSID pUserSid;
} WTS_PROCESS_INFOA, * PWTS_PROCESS_INFOA;
typedef enum _WTS_INFO_CLASS {
    WTSInitialProgram,
    WTSApplicationName,
    WTSWorkingDirectory,
    WTSOEMId,
    WTSSessionId,
    WTSUserName,
    WTSWinStationName,
    WTSDomainName,
    WTSConnectState,
    WTSClientBuildNumber,
    WTSClientName,
    WTSClientDirectory,
    WTSClientProductId,
    WTSClientHardwareId,
    WTSClientAddress,
    WTSClientDisplay,
    WTSClientProtocolType,
    WTSIdleTime,
    WTSLogonTime,
    WTSIncomingBytes,
    WTSOutgoingBytes,
    WTSIncomingFrames,
    WTSOutgoingFrames,
    WTSClientInfo,
    WTSSessionInfo,
    WTSSessionInfoEx,
    WTSConfigInfo,
    WTSValidationInfo,
    WTSSessionAddressV4,
    WTSIsRemoteSession
} WTS_INFO_CLASS;
typedef struct _WTSCONFIGINFOW {
    ULONG version;
    ULONG fConnectClientDrivesAtLogon;
    ULONG fConnectPrinterAtLogon;
    ULONG fDisablePrinterRedirection;
    ULONG fDisableDefaultMainClientPrinter;
    ULONG ShadowSettings;
    WCHAR LogonUserName[USERNAME_LENGTH + 1 ];
    WCHAR LogonDomain[DOMAIN_LENGTH + 1 ];
    WCHAR WorkDirectory[MAX_PATH + 1 ];
    WCHAR InitialProgram[MAX_PATH + 1 ];
    WCHAR ApplicationName[MAX_PATH + 1 ];
} WTSCONFIGINFOW, *PWTSCONFIGINFOW;
typedef struct _WTSCONFIGINFOA {
    ULONG version;
    ULONG fConnectClientDrivesAtLogon;
    ULONG fConnectPrinterAtLogon;
    ULONG fDisablePrinterRedirection;
    ULONG fDisableDefaultMainClientPrinter;
    ULONG ShadowSettings;
    CHAR LogonUserName[USERNAME_LENGTH + 1 ];
    CHAR LogonDomain[DOMAIN_LENGTH + 1 ];
    CHAR WorkDirectory[MAX_PATH + 1 ];
    CHAR InitialProgram[MAX_PATH + 1 ];
    CHAR ApplicationName[MAX_PATH + 1 ];
} WTSCONFIGINFOA, *PWTSCONFIGINFOA;
typedef struct _WTSINFOW {
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
    WCHAR WinStationName[WINSTATIONNAME_LENGTH];
    WCHAR Domain[DOMAIN_LENGTH];
    WCHAR UserName[USERNAME_LENGTH+1];
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER CurrentTime;
} WTSINFOW, * PWTSINFOW;
typedef struct _WTSINFOA {
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBy;
    CHAR WinStationName[WINSTATIONNAME_LENGTH];
    CHAR Domain[DOMAIN_LENGTH];
    CHAR UserName[USERNAME_LENGTH+1];
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER CurrentTime;
} WTSINFOA, * PWTSINFOA;
typedef struct _WTSINFOEX_LEVEL1_W {
    ULONG SessionId;
    WTS_CONNECTSTATE_CLASS SessionState;
    LONG SessionFlags;
    WCHAR WinStationName[WINSTATIONNAME_LENGTH + 1] ;
    WCHAR UserName[USERNAME_LENGTH + 1];
    WCHAR DomainName[DOMAIN_LENGTH + 1];
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER CurrentTime;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
} WTSINFOEX_LEVEL1_W, *PWTSINFOEX_LEVEL1_W;
typedef struct _WTSINFOEX_LEVEL1_A {
    ULONG SessionId;
    WTS_CONNECTSTATE_CLASS SessionState;
    LONG SessionFlags;
    CHAR WinStationName[WINSTATIONNAME_LENGTH + 1];
    CHAR UserName[USERNAME_LENGTH + 1];
    CHAR DomainName[DOMAIN_LENGTH + 1];
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER CurrentTime;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
} WTSINFOEX_LEVEL1_A, *PWTSINFOEX_LEVEL1_A;
typedef union _WTSINFOEX_LEVEL_W {
    WTSINFOEX_LEVEL1_W WTSInfoExLevel1;
} WTSINFOEX_LEVEL_W, *PWTSINFOEX_LEVEL_W;
typedef union _WTSINFOEX_LEVEL_A {
    WTSINFOEX_LEVEL1_A WTSInfoExLevel1;
} WTSINFOEX_LEVEL_A, *PWTSINFOEX_LEVEL_A;
typedef struct _WTSINFOEXW {
    DWORD Level;
    WTSINFOEX_LEVEL_W Data;
} WTSINFOEXW, *PWTSINFOEXW;
typedef struct _WTSINFOEXA {
    DWORD Level;
    WTSINFOEX_LEVEL_A Data;
} WTSINFOEXA, *PWTSINFOEXA;
typedef struct _WTSCLIENTW {
    WCHAR ClientName[ CLIENTNAME_LENGTH + 1 ];
    WCHAR Domain[ DOMAIN_LENGTH + 1 ];
    WCHAR UserName[ USERNAME_LENGTH + 1 ];
    WCHAR WorkDirectory[ MAX_PATH + 1];
    WCHAR InitialProgram[ MAX_PATH + 1];
    BYTE EncryptionLevel;
    ULONG ClientAddressFamily;
    USHORT ClientAddress[ CLIENTADDRESS_LENGTH + 1 ];
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    WCHAR ClientDirectory[ MAX_PATH + 1 ];
    ULONG ClientBuildNumber;
    ULONG ClientHardwareId;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    WCHAR DeviceId[ MAX_PATH + 1];
} WTSCLIENTW, * PWTSCLIENTW;
typedef struct _WTSCLIENTA {
    CHAR ClientName[ CLIENTNAME_LENGTH + 1 ];
    CHAR Domain[ DOMAIN_LENGTH + 1 ];
    CHAR UserName[ USERNAME_LENGTH + 1 ];
    CHAR WorkDirectory[ MAX_PATH + 1];
    CHAR InitialProgram[ MAX_PATH + 1 ];
    BYTE EncryptionLevel;
    ULONG ClientAddressFamily;
    USHORT ClientAddress[ CLIENTADDRESS_LENGTH + 1 ];
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    CHAR ClientDirectory[ MAX_PATH + 1 ];
    ULONG ClientBuildNumber;
    ULONG ClientHardwareId;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    CHAR DeviceId[ MAX_PATH + 1];
} WTSCLIENTA, * PWTSCLIENTA;
typedef struct _WTS_PRODUCT_INFOA
{
    CHAR CompanyName[PRODUCTINFO_COMPANYNAME_LENGTH];
    CHAR ProductID[PRODUCTINFO_PRODUCTID_LENGTH];
} PRODUCT_INFOA;
typedef struct _WTS_PRODUCT_INFOW
{
    WCHAR CompanyName[PRODUCTINFO_COMPANYNAME_LENGTH];
    WCHAR ProductID[PRODUCTINFO_PRODUCTID_LENGTH];
} PRODUCT_INFOW;
typedef struct _WTS_VALIDATION_INFORMATIONA {
    PRODUCT_INFOA ProductInfo;
    BYTE License[VALIDATIONINFORMATION_LICENSE_LENGTH];
    DWORD LicenseLength;
    BYTE HardwareID[VALIDATIONINFORMATION_HARDWAREID_LENGTH];
    DWORD HardwareIDLength;
} WTS_VALIDATION_INFORMATIONA, * PWTS_VALIDATION_INFORMATIONA;
typedef struct _WTS_VALIDATION_INFORMATIONW {
    PRODUCT_INFOW ProductInfo;
    BYTE License[VALIDATIONINFORMATION_LICENSE_LENGTH];
    DWORD LicenseLength;
    BYTE HardwareID[VALIDATIONINFORMATION_HARDWAREID_LENGTH];
    DWORD HardwareIDLength;
} WTS_VALIDATION_INFORMATIONW, * PWTS_VALIDATION_INFORMATIONW;
typedef struct _WTS_CLIENT_ADDRESS {
    DWORD AddressFamily;
    BYTE Address[20];
} WTS_CLIENT_ADDRESS, * PWTS_CLIENT_ADDRESS;
typedef struct _WTS_CLIENT_DISPLAY {
    DWORD HorizontalResolution;
    DWORD VerticalResolution;
    DWORD ColorDepth;
} WTS_CLIENT_DISPLAY, * PWTS_CLIENT_DISPLAY;
typedef enum _WTS_CONFIG_CLASS {
    WTSUserConfigInitialProgram,
    WTSUserConfigWorkingDirectory,
    WTSUserConfigfInheritInitialProgram,
    WTSUserConfigfAllowLogonTerminalServer,
    WTSUserConfigTimeoutSettingsConnections,
    WTSUserConfigTimeoutSettingsDisconnections,
    WTSUserConfigTimeoutSettingsIdle,
    WTSUserConfigfDeviceClientDrives,
    WTSUserConfigfDeviceClientPrinters,
    WTSUserConfigfDeviceClientDefaultPrinter,
    WTSUserConfigBrokenTimeoutSettings,
    WTSUserConfigReconnectSettings,
    WTSUserConfigModemCallbackSettings,
    WTSUserConfigModemCallbackPhoneNumber,
    WTSUserConfigShadowingSettings,
    WTSUserConfigTerminalServerProfilePath,
    WTSUserConfigTerminalServerHomeDir,
    WTSUserConfigTerminalServerHomeDirDrive,
    WTSUserConfigfTerminalServerRemoteHomeDir,
    WTSUserConfigUser,
} WTS_CONFIG_CLASS;
typedef enum _WTS_CONFIG_SOURCE {
    WTSUserConfigSourceSAM
} WTS_CONFIG_SOURCE;
typedef struct _WTSUSERCONFIGA {
    DWORD Source;
    DWORD InheritInitialProgram;
    DWORD AllowLogonTerminalServer;
    DWORD TimeoutSettingsConnections;
    DWORD TimeoutSettingsDisconnections;
    DWORD TimeoutSettingsIdle;
    DWORD DeviceClientDrives;
    DWORD DeviceClientPrinters;
    DWORD ClientDefaultPrinter;
    DWORD BrokenTimeoutSettings;
    DWORD ReconnectSettings;
    DWORD ShadowingSettings;
    DWORD TerminalServerRemoteHomeDir;
    CHAR InitialProgram[ MAX_PATH + 1 ];
    CHAR WorkDirectory[ MAX_PATH + 1 ];
    CHAR TerminalServerProfilePath[ MAX_PATH + 1 ];
    CHAR TerminalServerHomeDir[ MAX_PATH + 1 ];
    CHAR TerminalServerHomeDirDrive[ WTS_DRIVE_LENGTH + 1 ];
} WTSUSERCONFIGA, * PWTSUSERCONFIGA;
typedef struct _WTSUSERCONFIGW {
    DWORD Source;
    DWORD InheritInitialProgram;
    DWORD AllowLogonTerminalServer;
    DWORD TimeoutSettingsConnections;
    DWORD TimeoutSettingsDisconnections;
    DWORD TimeoutSettingsIdle;
    DWORD DeviceClientDrives;
    DWORD DeviceClientPrinters;
    DWORD ClientDefaultPrinter;
    DWORD BrokenTimeoutSettings;
    DWORD ReconnectSettings;
    DWORD ShadowingSettings;
    DWORD TerminalServerRemoteHomeDir;
    WCHAR InitialProgram[ MAX_PATH + 1 ];
    WCHAR WorkDirectory[ MAX_PATH + 1 ];
    WCHAR TerminalServerProfilePath[ MAX_PATH + 1 ];
    WCHAR TerminalServerHomeDir[ MAX_PATH + 1 ];
    WCHAR TerminalServerHomeDirDrive[ WTS_DRIVE_LENGTH + 1 ];
} WTSUSERCONFIGW, * PWTSUSERCONFIGW;
typedef enum _WTS_VIRTUAL_CLASS {
    WTSVirtualClientData,
    WTSVirtualFileHandle
} WTS_VIRTUAL_CLASS;
typedef struct _WTS_SESSION_ADDRESS {
    DWORD AddressFamily;
    BYTE Address[20];
} WTS_SESSION_ADDRESS, * PWTS_SESSION_ADDRESS;
BOOL WINAPI
WTSStopRemoteControlSession(
    IN ULONG LogonId
    );
BOOL WINAPI
WTSStartRemoteControlSessionW(
    _In_ LPWSTR pTargetServerName,
    IN ULONG TargetLogonId,
    IN BYTE HotkeyVk,
    IN USHORT HotkeyModifiers
    );
BOOL WINAPI
WTSStartRemoteControlSessionA(
    _In_ LPSTR pTargetServerName,
    IN ULONG TargetLogonId,
    IN BYTE HotkeyVk,
    IN USHORT HotkeyModifiers
    );
BOOL
WINAPI
WTSConnectSessionA(
    IN ULONG LogonId,
    IN ULONG TargetLogonId,
    _In_ PSTR pPassword,
    IN BOOL bWait
    );
BOOL
WINAPI
WTSConnectSessionW(
    IN ULONG LogonId,
    IN ULONG TargetLogonId,
    _In_ PWSTR pPassword,
    IN BOOL bWait
    );
BOOL
WINAPI
WTSEnumerateServersW(
    _In_ LPWSTR pDomainName,
    IN DWORD Reserved,
    IN DWORD Version,
    _Outptr_result_buffer_(*pCount) PWTS_SERVER_INFOW * ppServerInfo,
    _Out_ DWORD * pCount
    );
BOOL
WINAPI
WTSEnumerateServersA(
    _In_ LPSTR pDomainName,
    IN DWORD Reserved,
    IN DWORD Version,
    _Outptr_result_buffer_(*pCount) PWTS_SERVER_INFOA * ppServerInfo,
    _Out_ DWORD * pCount
    );
HANDLE
WINAPI
WTSOpenServerW(
    _In_ LPWSTR pServerName
    );
HANDLE
WINAPI
WTSOpenServerA(
    _In_ LPSTR pServerName
    );
HANDLE
WINAPI
WTSOpenServerExW(
    _In_ LPWSTR pServerName
    );
HANDLE
WINAPI
WTSOpenServerExA(
    _In_ LPSTR pServerName
    );
VOID
WINAPI
WTSCloseServer(
    IN HANDLE hServer
    );
BOOL
WINAPI
WTSEnumerateSessionsW(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    _Outptr_result_buffer_(*pCount) PWTS_SESSION_INFOW * ppSessionInfo,
    _Out_ DWORD * pCount
    );
BOOL
WINAPI
WTSEnumerateSessionsA(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    _Outptr_result_buffer_(*pCount) PWTS_SESSION_INFOA * ppSessionInfo,
    _Out_ DWORD * pCount
    );
BOOL
WINAPI
WTSEnumerateSessionsExW(
    _In_ HANDLE hServer,
    _Inout_ DWORD *pLevel,
    _In_ DWORD Filter,
    _Outptr_result_buffer_(*pCount) PWTS_SESSION_INFO_1W * ppSessionInfo,
    _Out_ DWORD * pCount );
BOOL
WINAPI
WTSEnumerateSessionsExA(
    _In_ HANDLE hServer,
    _Inout_ DWORD *pLevel,
    _In_ DWORD Filter,
    _Outptr_result_buffer_(*pCount) PWTS_SESSION_INFO_1A * ppSessionInfo,
    _Out_ DWORD * pCount );
BOOL
WINAPI
WTSEnumerateProcessesW(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    OUT PWTS_PROCESS_INFOW * ppProcessInfo,
    OUT DWORD * pCount
    );
BOOL
WINAPI
WTSEnumerateProcessesA(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    OUT PWTS_PROCESS_INFOA * ppProcessInfo,
    OUT DWORD * pCount
    );
BOOL
WINAPI
WTSTerminateProcess(
    IN HANDLE hServer,
    IN DWORD ProcessId,
    IN DWORD ExitCode
    );
BOOL
WINAPI
WTSQuerySessionInformationW(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN WTS_INFO_CLASS WTSInfoClass,
    _Outptr_result_bytebuffer_(*pBytesReturned) LPWSTR * ppBuffer,
    _Out_ DWORD * pBytesReturned
    );
BOOL
WINAPI
WTSQuerySessionInformationA(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN WTS_INFO_CLASS WTSInfoClass,
    _Outptr_result_bytebuffer_(*pBytesReturned) LPSTR * ppBuffer,
    _Out_ DWORD * pBytesReturned
    );
BOOL
WINAPI
WTSQueryUserConfigW(
    _In_ LPWSTR pServerName,
    _In_ LPWSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    _Outptr_result_bytebuffer_(*pBytesReturned) LPWSTR * ppBuffer,
    _Out_ DWORD * pBytesReturned
    );
BOOL
WINAPI
WTSQueryUserConfigA(
    _In_ LPSTR pServerName,
    _In_ LPSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    _Outptr_result_bytebuffer_(*pBytesReturned) LPSTR * ppBuffer,
    _Out_ DWORD * pBytesReturned
    );
BOOL
WINAPI
WTSSetUserConfigW(
    _In_ LPWSTR pServerName,
    _In_ LPWSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    _In_reads_bytes_(DataLength) LPWSTR pBuffer,
    IN DWORD DataLength
    );
BOOL
WINAPI
WTSSetUserConfigA(
    _In_ LPSTR pServerName,
    _In_ LPSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    _In_reads_bytes_(DataLength) LPSTR pBuffer,
    IN DWORD DataLength
    );
BOOL
WINAPI
WTSSendMessageW(
    IN HANDLE hServer,
    IN DWORD SessionId,
    _In_reads_bytes_(TitleLength) LPWSTR pTitle,
    IN DWORD TitleLength,
    _In_reads_bytes_(MessageLength) LPWSTR pMessage,
    IN DWORD MessageLength,
    IN DWORD Style,
    IN DWORD Timeout,
    _Out_ DWORD * pResponse,
    IN BOOL bWait
    );
BOOL
WINAPI
WTSSendMessageA(
    IN HANDLE hServer,
    IN DWORD SessionId,
    _In_reads_bytes_(TitleLength) LPSTR pTitle,
    IN DWORD TitleLength,
    _In_reads_bytes_(MessageLength) LPSTR pMessage,
    IN DWORD MessageLength,
    IN DWORD Style,
    IN DWORD Timeout,
    _Out_ DWORD * pResponse,
    IN BOOL bWait
    );
BOOL
WINAPI
WTSDisconnectSession(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN BOOL bWait
    );
BOOL
WINAPI
WTSLogoffSession(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN BOOL bWait
    );
BOOL
WINAPI
WTSShutdownSystem(
    IN HANDLE hServer,
    IN DWORD ShutdownFlag
    );
BOOL
WINAPI
WTSWaitSystemEvent(
    IN HANDLE hServer,
    IN DWORD EventMask,
    OUT DWORD * pEventFlags
    );
HANDLE
WINAPI
WTSVirtualChannelOpen(
    IN HANDLE hServer,
    IN DWORD SessionId,
    _In_ LPSTR pVirtualName
    );
HANDLE
WINAPI
WTSVirtualChannelOpenEx(
                     IN DWORD SessionId,
                     _In_ LPSTR pVirtualName,
                     IN DWORD flags
                     );
BOOL
WINAPI
WTSVirtualChannelClose(
    IN HANDLE hChannelHandle
    );
BOOL
WINAPI
WTSVirtualChannelRead(
    IN HANDLE hChannelHandle,
    IN ULONG TimeOut,
    _Out_writes_bytes_to_(BufferSize, *pBytesRead) PCHAR Buffer,
    IN ULONG BufferSize,
    _Out_ PULONG pBytesRead
    );
BOOL
WINAPI
WTSVirtualChannelWrite(
    IN HANDLE hChannelHandle,
    _In_reads_bytes_(Length) PCHAR Buffer,
    IN ULONG Length,
    _Out_ PULONG pBytesWritten
    );
BOOL
WINAPI
WTSVirtualChannelPurgeInput(
    IN HANDLE hChannelHandle
    );
BOOL
WINAPI
WTSVirtualChannelPurgeOutput(
    IN HANDLE hChannelHandle
    );
BOOL
WINAPI
WTSVirtualChannelQuery(
    IN HANDLE hChannelHandle,
    IN WTS_VIRTUAL_CLASS,
    OUT PVOID *ppBuffer,
    OUT DWORD *pBytesReturned
    );
VOID
WINAPI
WTSFreeMemory(
    IN PVOID pMemory
    );
BOOL
WINAPI
WTSRegisterSessionNotification(
    HWND hWnd,
    DWORD dwFlags
    );
BOOL
WINAPI
WTSUnRegisterSessionNotification(
    HWND hWnd
    );
BOOL
WINAPI
WTSRegisterSessionNotificationEx(
    IN HANDLE hServer,
    IN HWND hWnd,
    IN DWORD dwFlags
    );
BOOL
WINAPI
WTSUnRegisterSessionNotificationEx(
    IN HANDLE hServer,
    IN HWND hWnd
    );
BOOL
WINAPI
WTSQueryUserToken(
    ULONG SessionId,
    PHANDLE phToken
    );
typedef struct _WTS_PROCESS_INFO_EXW {
    DWORD SessionId;
    DWORD ProcessId;
    LPWSTR pProcessName;
    PSID pUserSid;
    DWORD NumberOfThreads;
    DWORD HandleCount;
    DWORD PagefileUsage;
    DWORD PeakPagefileUsage;
    DWORD WorkingSetSize;
    DWORD PeakWorkingSetSize;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER KernelTime;
} WTS_PROCESS_INFO_EXW, * PWTS_PROCESS_INFO_EXW;
typedef struct _WTS_PROCESS_INFO_EXA {
    DWORD SessionId;
    DWORD ProcessId;
    LPSTR pProcessName;
    PSID pUserSid;
    DWORD NumberOfThreads;
    DWORD HandleCount;
    DWORD PagefileUsage;
    DWORD PeakPagefileUsage;
    DWORD WorkingSetSize;
    DWORD PeakWorkingSetSize;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER KernelTime;
} WTS_PROCESS_INFO_EXA, * PWTS_PROCESS_INFO_EXA;
typedef enum _WTS_TYPE_CLASS {
    WTSTypeProcessInfoLevel0,
    WTSTypeProcessInfoLevel1,
    WTSTypeSessionInfoLevel1,
} WTS_TYPE_CLASS;
BOOL WINAPI
WTSFreeMemoryExW(
    _In_ WTS_TYPE_CLASS WTSTypeClass,
    _In_ PVOID pMemory,
    _In_ ULONG NumberOfEntries
);
BOOL WINAPI
WTSFreeMemoryExA(
    _In_ WTS_TYPE_CLASS WTSTypeClass,
    _In_ PVOID pMemory,
    _In_ ULONG NumberOfEntries
);
BOOL WINAPI
WTSEnumerateProcessesExW
(
    _In_ HANDLE hServer,
    _Inout_ DWORD *pLevel,
    _In_ DWORD SessionId,
    _Out_ LPWSTR *ppProcessInfo,
    _Out_ DWORD * pCount
);
BOOL WINAPI
WTSEnumerateProcessesExA
(
    _In_ HANDLE hServer,
    _Inout_ DWORD *pLevel,
    _In_ DWORD SessionId,
    _Out_ LPSTR *ppProcessInfo,
    _Out_ DWORD * pCount
);
typedef WCHAR WTSLISTENERNAMEW[WTS_LISTENER_NAME_LENGTH + 1 ];
typedef WTSLISTENERNAMEW *PWTSLISTENERNAMEW;
typedef CHAR WTSLISTENERNAMEA[WTS_LISTENER_NAME_LENGTH + 1 ];
typedef WTSLISTENERNAMEA *PWTSLISTENERNAMEA;
BOOL WINAPI
WTSEnumerateListenersW (
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _Out_writes_opt_(*pCount) PWTSLISTENERNAMEW pListeners,
  _Inout_ DWORD* pCount
);
BOOL WINAPI
WTSEnumerateListenersA (
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _Out_writes_opt_(*pCount) PWTSLISTENERNAMEA pListeners,
  _Inout_ DWORD* pCount
);
typedef struct _WTSLISTENERCONFIGW{
    ULONG version;
    ULONG fEnableListener;
    ULONG MaxConnectionCount;
    ULONG fPromptForPassword;
    ULONG fInheritColorDepth;
    ULONG ColorDepth;
    ULONG fInheritBrokenTimeoutSettings;
    ULONG BrokenTimeoutSettings;
    ULONG fDisablePrinterRedirection;
    ULONG fDisableDriveRedirection;
    ULONG fDisableComPortRedirection;
    ULONG fDisableLPTPortRedirection;
    ULONG fDisableClipboardRedirection;
    ULONG fDisableAudioRedirection;
    ULONG fDisablePNPRedirection;
    ULONG fDisableDefaultMainClientPrinter;
    ULONG LanAdapter;
    ULONG PortNumber;
    ULONG fInheritShadowSettings;
    ULONG ShadowSettings;
    ULONG TimeoutSettingsConnection;
    ULONG TimeoutSettingsDisconnection;
    ULONG TimeoutSettingsIdle;
    ULONG SecurityLayer;
    ULONG MinEncryptionLevel;
    ULONG UserAuthentication;
    WCHAR Comment[ WTS_COMMENT_LENGTH + 1 ];
    WCHAR LogonUserName[USERNAME_LENGTH + 1 ];
    WCHAR LogonDomain[DOMAIN_LENGTH + 1 ];
    WCHAR WorkDirectory[ MAX_PATH + 1 ];
    WCHAR InitialProgram[ MAX_PATH + 1 ];
} WTSLISTENERCONFIGW, *PWTSLISTENERCONFIGW;
typedef struct _WTSLISTENERCONFIGA{
    ULONG version;
    ULONG fEnableListener;
    ULONG MaxConnectionCount;
    ULONG fPromptForPassword;
    ULONG fInheritColorDepth;
    ULONG ColorDepth;
    ULONG fInheritBrokenTimeoutSettings;
    ULONG BrokenTimeoutSettings;
    ULONG fDisablePrinterRedirection;
    ULONG fDisableDriveRedirection;
    ULONG fDisableComPortRedirection;
    ULONG fDisableLPTPortRedirection;
    ULONG fDisableClipboardRedirection;
    ULONG fDisableAudioRedirection;
    ULONG fDisablePNPRedirection;
    ULONG fDisableDefaultMainClientPrinter;
    ULONG LanAdapter;
    ULONG PortNumber;
    ULONG fInheritShadowSettings;
    ULONG ShadowSettings;
    ULONG TimeoutSettingsConnection;
    ULONG TimeoutSettingsDisconnection;
    ULONG TimeoutSettingsIdle;
    ULONG SecurityLayer;
    ULONG MinEncryptionLevel;
    ULONG UserAuthentication;
    CHAR Comment[ WTS_COMMENT_LENGTH + 1 ];
    CHAR LogonUserName[USERNAME_LENGTH + 1 ];
    CHAR LogonDomain[DOMAIN_LENGTH + 1 ];
    CHAR WorkDirectory[ MAX_PATH + 1 ];
    CHAR InitialProgram[ MAX_PATH + 1 ];
} WTSLISTENERCONFIGA, *PWTSLISTENERCONFIGA;
BOOL WINAPI WTSQueryListenerConfigW (
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPWSTR pListenerName,
  _Out_ PWTSLISTENERCONFIGW pBuffer
);
BOOL WINAPI WTSQueryListenerConfigA (
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPSTR pListenerName,
  _Out_ PWTSLISTENERCONFIGA pBuffer
);
BOOL WINAPI WTSCreateListenerW (
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPWSTR pListenerName,
  _In_ PWTSLISTENERCONFIGW pBuffer,
  _In_ DWORD flag
);
BOOL WINAPI WTSCreateListenerA (
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPSTR pListenerName,
  _In_ PWTSLISTENERCONFIGA pBuffer,
  _In_ DWORD flag
);
BOOL WINAPI WTSSetListenerSecurityW(
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPWSTR pListenerName,
  _In_ SECURITY_INFORMATION SecurityInformation,
  _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor);
BOOL WINAPI WTSSetListenerSecurityA(
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPSTR pListenerName,
  _In_ SECURITY_INFORMATION SecurityInformation,
  _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor);
BOOL WINAPI WTSGetListenerSecurityW(
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPWSTR pListenerName,
  _In_ SECURITY_INFORMATION SecurityInformation,
  _Out_opt_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
  _In_ DWORD nLength,
  _Out_ LPDWORD lpnLengthNeeded);
BOOL WINAPI WTSGetListenerSecurityA(
  _In_ HANDLE hServer,
  _In_ PVOID pReserved,
  _In_ DWORD Reserved,
  _In_ LPSTR pListenerName,
  _In_ SECURITY_INFORMATION SecurityInformation,
  _Out_opt_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
  _In_ DWORD nLength,
  _Out_ LPDWORD lpnLengthNeeded);
BOOL
WTSEnableChildSessions(
    BOOL bEnable
    );
BOOL
WTSIsChildSessionsEnabled(
    _Out_ PBOOL pbEnabled
    );
BOOL
WTSGetChildSessionId(
    _Out_ PULONG pSessionId
    );
}
#endif
#pragma endregion
