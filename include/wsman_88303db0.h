#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
#include <specstrings.h>
#error "Define WSMAN_API_VERSION_1_0 or WSMAN_API_VERSION_1_1 before including wsman.h"
extern "C" {
typedef struct _WSMAN_DATA_TEXT
{
    DWORD bufferLength;
    _In_reads_(bufferLength) PCWSTR buffer;
}WSMAN_DATA_TEXT;
typedef struct _WSMAN_DATA_BINARY
{
    DWORD dataLength;
    _In_reads_(dataLength) BYTE *data;
}WSMAN_DATA_BINARY;
enum WSManDataType
{
    WSMAN_DATA_NONE = 0,
    WSMAN_DATA_TYPE_TEXT = 1,
    WSMAN_DATA_TYPE_BINARY = 2,
    WSMAN_DATA_TYPE_DWORD = 4
};
typedef enum WSManDataType WSManDataType;
typedef struct _WSMAN_DATA
{
    WSManDataType type;
    union
    {
        WSMAN_DATA_TEXT text;
        WSMAN_DATA_BINARY binaryData;
        DWORD number;
    };
} WSMAN_DATA;
typedef struct _WSMAN_ERROR
{
    DWORD code;
    _In_opt_ PCWSTR errorDetail;
    _In_opt_ PCWSTR language;
    _In_opt_ PCWSTR machineName;
    _In_opt_ PCWSTR pluginName;
} WSMAN_ERROR;
typedef struct _WSMAN_USERNAME_PASSWORD_CREDS
{
    _In_ PCWSTR username;
    _In_ PCWSTR password;
} WSMAN_USERNAME_PASSWORD_CREDS;
enum WSManAuthenticationFlags
{
    WSMAN_FLAG_DEFAULT_AUTHENTICATION = 0x0,
    WSMAN_FLAG_NO_AUTHENTICATION = 0x1,
    WSMAN_FLAG_AUTH_DIGEST = 0x2,
    WSMAN_FLAG_AUTH_NEGOTIATE = 0x4,
    WSMAN_FLAG_AUTH_BASIC = 0x8,
    WSMAN_FLAG_AUTH_KERBEROS = 0x10,
    WSMAN_FLAG_AUTH_CREDSSP = 0x80,
    WSMAN_FLAG_AUTH_CLIENT_CERTIFICATE = 0x20
};
typedef struct _WSMAN_AUTHENTICATION_CREDENTIALS
{
    DWORD authenticationMechanism;
    union
    {
        WSMAN_USERNAME_PASSWORD_CREDS userAccount;
        PCWSTR certificateThumbprint;
    };
}WSMAN_AUTHENTICATION_CREDENTIALS;
typedef struct _WSMAN_OPTION
{
    PCWSTR name;
    PCWSTR value;
    BOOL mustComply;
} WSMAN_OPTION;
typedef struct _WSMAN_OPTION_SET
{
    DWORD optionsCount;
    _In_reads_opt_(optionsCount) WSMAN_OPTION *options;
    BOOL optionsMustUnderstand;
} WSMAN_OPTION_SET;
typedef struct _WSMAN_OPTION_SETEX
{
    DWORD optionsCount;
    _In_reads_opt_(optionsCount) WSMAN_OPTION *options;
    BOOL optionsMustUnderstand;
    _In_reads_opt_(optionsCount) PCWSTR *optionTypes;
} WSMAN_OPTION_SETEX;
typedef struct _WSMAN_KEY
{
    PCWSTR key;
    PCWSTR value;
} WSMAN_KEY;
typedef struct _WSMAN_SELECTOR_SET
{
    DWORD numberKeys;
    _In_reads_opt_(numberKeys) WSMAN_KEY *keys;
} WSMAN_SELECTOR_SET;
typedef struct _WSMAN_FRAGMENT
{
    _In_ PCWSTR path;
    _In_opt_ PCWSTR dialect;
} WSMAN_FRAGMENT;
typedef struct _WSMAN_FILTER
{
    _In_ PCWSTR filter;
    _In_opt_ PCWSTR dialect;
} WSMAN_FILTER;
typedef struct _WSMAN_OPERATION_INFO
{
    _In_opt_ WSMAN_FRAGMENT fragment;
    _In_opt_ WSMAN_FILTER filter;
    _In_opt_ WSMAN_SELECTOR_SET selectorSet;
    _In_opt_ WSMAN_OPTION_SET optionSet;
    _In_opt_ void *reserved;
             DWORD version;
} WSMAN_OPERATION_INFO;
typedef struct _WSMAN_OPERATION_INFOEX
{
    _In_opt_ WSMAN_FRAGMENT fragment;
    _In_opt_ WSMAN_FILTER filter;
    _In_opt_ WSMAN_SELECTOR_SET selectorSet;
    _In_opt_ WSMAN_OPTION_SETEX optionSet;
             DWORD version;
    _In_opt_ PCWSTR uiLocale;
    _In_opt_ PCWSTR dataLocale;
} WSMAN_OPERATION_INFOEX;
typedef struct WSMAN_API *WSMAN_API_HANDLE;
DWORD WINAPI WSManInitialize(
    DWORD flags,
    _Out_ WSMAN_API_HANDLE *apiHandle
    );
DWORD WINAPI WSManDeinitialize(
    _Inout_opt_ WSMAN_API_HANDLE apiHandle,
    DWORD flags
    );
DWORD WINAPI WSManGetErrorMessage(
    _In_ WSMAN_API_HANDLE apiHandle,
    _Reserved_ DWORD flags,
    _In_opt_ PCWSTR languageCode,
    DWORD errorCode,
    DWORD messageLength,
    _Out_writes_to_opt_(messageLength, *messageLengthUsed) PWSTR message,
    _Out_ DWORD* messageLengthUsed
    );
enum WSManProxyAccessType
{
    WSMAN_OPTION_PROXY_IE_PROXY_CONFIG = 1,
    WSMAN_OPTION_PROXY_WINHTTP_PROXY_CONFIG = 2,
    WSMAN_OPTION_PROXY_AUTO_DETECT = 4,
    WSMAN_OPTION_PROXY_NO_PROXY_SERVER = 8,
};
typedef struct _WSMAN_PROXY_INFO
{
    DWORD accessType;
    _In_opt_ WSMAN_AUTHENTICATION_CREDENTIALS authenticationCredentials;
} WSMAN_PROXY_INFO;
typedef struct WSMAN_SESSION *WSMAN_SESSION_HANDLE;
DWORD WINAPI WSManCreateSession(
    _In_ WSMAN_API_HANDLE apiHandle,
    _In_opt_ PCWSTR connection,
    DWORD flags,
    _In_opt_ WSMAN_AUTHENTICATION_CREDENTIALS *serverAuthenticationCredentials,
    _In_opt_ WSMAN_PROXY_INFO *proxyInfo,
    _Out_ WSMAN_SESSION_HANDLE *session
    );
DWORD WINAPI WSManCloseSession(
    _Inout_opt_ WSMAN_SESSION_HANDLE session,
    DWORD flags
    );
enum WSManSessionOption
{
    WSMAN_OPTION_DEFAULT_OPERATION_TIMEOUTMS = 1,
    WSMAN_OPTION_MAX_RETRY_TIME = 11,
    WSMAN_OPTION_TIMEOUTMS_CREATE_SHELL = 12,
    WSMAN_OPTION_TIMEOUTMS_RUN_SHELL_COMMAND =13,
    WSMAN_OPTION_TIMEOUTMS_RECEIVE_SHELL_OUTPUT =14,
    WSMAN_OPTION_TIMEOUTMS_SEND_SHELL_INPUT = 15,
    WSMAN_OPTION_TIMEOUTMS_SIGNAL_SHELL = 16,
    WSMAN_OPTION_TIMEOUTMS_CLOSE_SHELL = 17,
    WSMAN_OPTION_SKIP_CA_CHECK = 18,
    WSMAN_OPTION_SKIP_CN_CHECK = 19,
    WSMAN_OPTION_UNENCRYPTED_MESSAGES = 20,
    WSMAN_OPTION_UTF16 = 21,
    WSMAN_OPTION_ENABLE_SPN_SERVER_PORT = 22,
    WSMAN_OPTION_MACHINE_ID = 23,
    WSMAN_OPTION_LOCALE = 25,
    WSMAN_OPTION_UI_LANGUAGE = 26,
    WSMAN_OPTION_MAX_ENVELOPE_SIZE_KB = 28,
    WSMAN_OPTION_SHELL_MAX_DATA_SIZE_PER_MESSAGE_KB = 29,
    WSMAN_OPTION_REDIRECT_LOCATION = 30,
    WSMAN_OPTION_SKIP_REVOCATION_CHECK = 31,
    WSMAN_OPTION_ALLOW_NEGOTIATE_IMPLICIT_CREDENTIALS = 32,
    WSMAN_OPTION_USE_SSL = 33,
    WSMAN_OPTION_USE_INTEARACTIVE_TOKEN = 34
};
typedef enum WSManSessionOption WSManSessionOption;
DWORD WINAPI WSManSetSessionOption(
    _In_ WSMAN_SESSION_HANDLE session,
    WSManSessionOption option,
    _In_ WSMAN_DATA *data
    );
DWORD WINAPI WSManGetSessionOptionAsDword(
    _In_ WSMAN_SESSION_HANDLE session,
    WSManSessionOption option,
    _Inout_ DWORD *value
    );
_Success_(return == NO_ERROR)
DWORD WINAPI WSManGetSessionOptionAsString(
    _In_ WSMAN_SESSION_HANDLE session,
    WSManSessionOption option,
    DWORD stringLength,
    _Out_writes_to_opt_(stringLength, *stringLengthUsed) PWSTR string,
    _Out_ DWORD* stringLengthUsed
    );
typedef struct WSMAN_OPERATION *WSMAN_OPERATION_HANDLE;
enum WSManCallbackFlags
{
    WSMAN_FLAG_CALLBACK_END_OF_OPERATION = 0x1,
    WSMAN_FLAG_CALLBACK_END_OF_STREAM = 0x8,
    WSMAN_FLAG_CALLBACK_SHELL_SUPPORTS_DISCONNECT = 0x20,
    WSMAN_FLAG_CALLBACK_SHELL_AUTODISCONNECTED = 0x40,
    WSMAN_FLAG_CALLBACK_NETWORK_FAILURE_DETECTED = 0x100,
    WSMAN_FLAG_CALLBACK_RETRYING_AFTER_NETWORK_FAILURE = 0x200,
    WSMAN_FLAG_CALLBACK_RECONNECTED_AFTER_NETWORK_FAILURE = 0x400,
    WSMAN_FLAG_CALLBACK_SHELL_AUTODISCONNECTING = 0x800,
    WSMAN_FLAG_CALLBACK_RETRY_ABORTED_DUE_TO_INTERNAL_ERROR = 0x1000,
    WSMAN_FLAG_CALLBACK_RECEIVE_DELAY_STREAM_REQUEST_PROCESSED = 0X2000
};
DWORD WINAPI WSManCloseOperation(
    _Inout_opt_ WSMAN_OPERATION_HANDLE operationHandle,
    DWORD flags
    );
typedef struct WSMAN_SHELL *WSMAN_SHELL_HANDLE;
typedef struct WSMAN_COMMAND *WSMAN_COMMAND_HANDLE;
typedef struct _WSMAN_STREAM_ID_SET
{
    DWORD streamIDsCount;
    _In_reads_opt_(streamIDsCount) PCWSTR *streamIDs;
} WSMAN_STREAM_ID_SET;
typedef struct _WSMAN_ENVIRONMENT_VARIABLE
{
    PCWSTR name;
    PCWSTR value;
} WSMAN_ENVIRONMENT_VARIABLE;
typedef struct _WSMAN_ENVIRONMENT_VARIABLE_SET
{
    DWORD varsCount;
    _In_reads_opt_(varsCount) WSMAN_ENVIRONMENT_VARIABLE *vars;
} WSMAN_ENVIRONMENT_VARIABLE_SET;
typedef struct _WSMAN_SHELL_STARTUP_INFO_V10
{
    WSMAN_STREAM_ID_SET *inputStreamSet;
    WSMAN_STREAM_ID_SET *outputStreamSet;
    DWORD idleTimeoutMs;
    PCWSTR workingDirectory;
    WSMAN_ENVIRONMENT_VARIABLE_SET *variableSet;
} WSMAN_SHELL_STARTUP_INFO_V10;
typedef struct _WSMAN_SHELL_STARTUP_INFO_V11 : _WSMAN_SHELL_STARTUP_INFO_V10
{
    PCWSTR name;
} WSMAN_SHELL_STARTUP_INFO_V11;
typedef struct _WSMAN_SHELL_DISCONNECT_INFO
{
    DWORD idleTimeoutMs;
} WSMAN_SHELL_DISCONNECT_INFO;
enum WSManShellFlag
{
    WSMAN_FLAG_NO_COMPRESSION = 0x1,
    WSMAN_FLAG_DELETE_SERVER_SESSION = 0x2,
    WSMAN_FLAG_SERVER_BUFFERING_MODE_DROP = 0x4,
    WSMAN_FLAG_SERVER_BUFFERING_MODE_BLOCK = 0x8,
    WSMAN_FLAG_RECEIVE_DELAY_OUTPUT_STREAM = 0X10
};
typedef enum WSManShellFlag WSManShellFlag;
typedef struct _WSMAN_RECEIVE_DATA_RESULT
{
    PCWSTR streamId;
    WSMAN_DATA streamData;
    PCWSTR commandState;
    DWORD exitCode;
} WSMAN_RECEIVE_DATA_RESULT;
typedef void (CALLBACK *WSMAN_SHELL_COMPLETION_FUNCTION)(
    _In_opt_ PVOID operationContext,
    DWORD flags,
    _In_ WSMAN_ERROR *error,
    _In_ WSMAN_SHELL_HANDLE shell,
    _In_opt_ WSMAN_COMMAND_HANDLE command,
    _In_opt_ WSMAN_OPERATION_HANDLE operationHandle,
    _In_opt_ WSMAN_RECEIVE_DATA_RESULT *data
    );
typedef struct _WSMAN_SHELL_ASYNC
{
    _In_opt_ PVOID operationContext;
    _In_ WSMAN_SHELL_COMPLETION_FUNCTION completionFunction;
} WSMAN_SHELL_ASYNC;
void WINAPI WSManCreateShell(
    _Inout_ WSMAN_SESSION_HANDLE session,
    DWORD flags,
    _In_ PCWSTR resourceUri,
    _In_opt_ WSMAN_SHELL_STARTUP_INFO *startupInfo,
    _In_opt_ WSMAN_OPTION_SET *options,
    _In_opt_ WSMAN_DATA *createXml,
    _In_ WSMAN_SHELL_ASYNC *async,
    _Out_ WSMAN_SHELL_HANDLE *shell
);
typedef struct _WSMAN_COMMAND_ARG_SET
{
    DWORD argsCount;
    _In_reads_opt_(argsCount) PCWSTR *args;
} WSMAN_COMMAND_ARG_SET;
void WINAPI WSManRunShellCommand(
    _Inout_ WSMAN_SHELL_HANDLE shell,
    DWORD flags,
    _In_ PCWSTR commandLine,
    _In_opt_ WSMAN_COMMAND_ARG_SET *args,
    _In_opt_ WSMAN_OPTION_SET *options,
    _In_ WSMAN_SHELL_ASYNC *async,
    _Out_ WSMAN_COMMAND_HANDLE *command
);
void WINAPI WSManSignalShell(
    _In_ WSMAN_SHELL_HANDLE shell,
    _In_opt_ WSMAN_COMMAND_HANDLE command,
    DWORD flags,
    _In_ PCWSTR code,
    _In_ WSMAN_SHELL_ASYNC *async,
    _Out_ WSMAN_OPERATION_HANDLE *signalOperation
);
void WINAPI WSManReceiveShellOutput(
    _Inout_ WSMAN_SHELL_HANDLE shell,
    _In_opt_ WSMAN_COMMAND_HANDLE command,
    DWORD flags,
    _In_opt_ WSMAN_STREAM_ID_SET *desiredStreamSet,
    _In_ WSMAN_SHELL_ASYNC *async,
    _Out_ WSMAN_OPERATION_HANDLE *receiveOperation
);
void WINAPI WSManSendShellInput(
    _In_ WSMAN_SHELL_HANDLE shell,
    _In_opt_ WSMAN_COMMAND_HANDLE command,
    DWORD flags,
    _In_ PCWSTR streamId,
    _In_ WSMAN_DATA *streamData,
    BOOL endOfStream,
    _In_ WSMAN_SHELL_ASYNC *async,
    _Out_ WSMAN_OPERATION_HANDLE *sendOperation
);
void WINAPI WSManCloseCommand(
    _Inout_opt_ WSMAN_COMMAND_HANDLE commandHandle,
    DWORD flags,
    _In_ WSMAN_SHELL_ASYNC *async
    );
void WINAPI WSManCloseShell(
    _Inout_opt_ WSMAN_SHELL_HANDLE shellHandle,
    DWORD flags,
    _In_ WSMAN_SHELL_ASYNC *async
    );
typedef struct _WSMAN_CERTIFICATE_DETAILS
{
    PCWSTR subject;
    PCWSTR issuerName;
    PCWSTR issuerThumbprint;
    PCWSTR subjectName;
} WSMAN_CERTIFICATE_DETAILS;
typedef struct _WSMAN_SENDER_DETAILS
{
    PCWSTR senderName;
    PCWSTR authenticationMechanism;
    WSMAN_CERTIFICATE_DETAILS *certificateDetails;
    HANDLE clientToken;
    PCWSTR httpURL;
} WSMAN_SENDER_DETAILS;
typedef struct _WSMAN_PLUGIN_REQUEST
{
    WSMAN_SENDER_DETAILS *senderDetails;
    PCWSTR locale;
    PCWSTR resourceUri;
    WSMAN_OPERATION_INFO *operationInfo;
    volatile BOOL shutdownNotification;
    HANDLE shutdownNotificationHandle;
    PCWSTR dataLocale;
} WSMAN_PLUGIN_REQUEST;
DWORD WINAPI WSManPluginReportContext(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ PVOID context
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_RELEASE_SHELL_CONTEXT)(
    _In_ PVOID shellContext
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_RELEASE_COMMAND_CONTEXT)(
    _In_ PVOID shellContext,
    _In_ PVOID commandContext
    );
DWORD WINAPI WSManPluginReceiveResult(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_opt_ PCWSTR stream,
    _In_opt_ WSMAN_DATA *streamResult,
    _In_opt_ PCWSTR commandState,
    _In_ DWORD exitCode
    );
DWORD WINAPI WSManPluginOperationComplete(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ DWORD errorCode,
    _In_opt_ PCWSTR extendedInformation
    );
DWORD WINAPI WSManPluginGetOperationParameters (
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _Out_ WSMAN_DATA *data
    );
DWORD WINAPI WSManPluginGetConfiguration (
  _In_ PVOID pluginContext,
  _In_ DWORD flags,
  _Out_ WSMAN_DATA *data
);
DWORD WINAPI WSManPluginReportCompletion(
  _In_ PVOID pluginContext,
  _In_ DWORD flags
);
DWORD WINAPI WSManPluginFreeRequestDetails(_In_ WSMAN_PLUGIN_REQUEST *requestDetails);
typedef DWORD (WINAPI *WSMAN_PLUGIN_STARTUP)(
    _In_ DWORD flags,
    _In_ PCWSTR applicationIdentification,
    _In_opt_ PCWSTR extraInfo,
    _Out_ PVOID *pluginContext
    );
typedef DWORD (WINAPI *WSMAN_PLUGIN_SHUTDOWN)(
    _In_opt_ PVOID pluginContext,
    _In_ DWORD flags,
    _In_ DWORD reason
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_SHELL)(
    _In_ PVOID pluginContext,
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_opt_ WSMAN_SHELL_STARTUP_INFO *startupInfo,
    _In_opt_ WSMAN_DATA *inboundShellInformation
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_COMMAND)(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ PVOID shellContext,
    _In_ PCWSTR commandLine,
    _In_opt_ WSMAN_COMMAND_ARG_SET *arguments
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_SEND)(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ PVOID shellContext,
    _In_opt_ PVOID commandContext,
    _In_ PCWSTR stream,
    _In_ WSMAN_DATA *inboundData
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_RECEIVE)(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ PVOID shellContext,
    _In_opt_ PVOID commandContext,
    _In_opt_ WSMAN_STREAM_ID_SET *streamSet
    );
typedef VOID (WINAPI *WSMAN_PLUGIN_SIGNAL)(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ PVOID shellContext,
    _In_opt_ PVOID commandContext,
    _In_ PCWSTR code
    );
typedef VOID (WINAPI* WSMAN_PLUGIN_CONNECT)(
    _In_ WSMAN_PLUGIN_REQUEST *requestDetails,
    _In_ DWORD flags,
    _In_ PVOID shellContext,
    _In_opt_ PVOID commandContext,
    _In_opt_ WSMAN_DATA *inboundConnectInformation
     );
typedef struct _WSMAN_AUTHZ_QUOTA
{
    DWORD maxAllowedConcurrentShells;
    DWORD maxAllowedConcurrentOperations;
    DWORD timeslotSize;
    DWORD maxAllowedOperationsPerTimeslot;
} WSMAN_AUTHZ_QUOTA;
typedef VOID (WINAPI * WSMAN_PLUGIN_AUTHORIZE_USER)(
    _In_ PVOID pluginContext,
    _In_ WSMAN_SENDER_DETAILS *senderDetails,
    _In_ DWORD flags
    );
typedef VOID (WINAPI * WSMAN_PLUGIN_AUTHORIZE_OPERATION)(
    _In_ PVOID pluginContext,
    _In_ WSMAN_SENDER_DETAILS *senderDetails,
    _In_ DWORD flags,
    _In_ DWORD operation,
    _In_ PCWSTR action,
    _In_ PCWSTR resourceUri
    );
typedef VOID (WINAPI * WSMAN_PLUGIN_AUTHORIZE_QUERY_QUOTA)(
    _In_ PVOID pluginContext,
    _In_ WSMAN_SENDER_DETAILS *senderDetails,
    _In_ DWORD flags
    );
typedef VOID (WINAPI * WSMAN_PLUGIN_AUTHORIZE_RELEASE_CONTEXT)(
    _In_ PVOID userAuthorizationContext
    );
DWORD WINAPI WSManPluginAuthzUserComplete (
    _In_ WSMAN_SENDER_DETAILS *senderDetails,
    _In_ DWORD flags,
    _In_opt_ PVOID userAuthorizationContext,
    _In_opt_ HANDLE impersonationToken,
    _In_ BOOL userIsAdministrator,
    _In_ DWORD errorCode,
    _In_opt_ PCWSTR extendedErrorInformation
    );
DWORD WINAPI WSManPluginAuthzOperationComplete (
    _In_ WSMAN_SENDER_DETAILS *senderDetails,
    _In_ DWORD flags,
    _In_opt_ PVOID userAuthorizationContext,
    _In_ DWORD errorCode,
    _In_opt_ PCWSTR extendedErrorInformation
    );
DWORD WINAPI WSManPluginAuthzQueryQuotaComplete (
    _In_ WSMAN_SENDER_DETAILS *senderDetails,
    _In_ DWORD flags,
    _In_opt_ WSMAN_AUTHZ_QUOTA *quota,
    _In_ DWORD errorCode,
    _In_opt_ PCWSTR extendedErrorInformation
    );
}
#endif
#pragma endregion
