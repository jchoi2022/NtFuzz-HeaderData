#include <winapifamily.h>
#pragma region Desktop Family or SecureStartup Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_SECURESTARTUP)
typedef signed int INT32, *PINT32;
typedef const INT32 *PCINT32;
typedef unsigned int UINT32, *PUINT32;
typedef const UINT32 *PCUINT32;
typedef VOID *PVOID;
typedef const VOID *PCVOID;
typedef INT32 BOOL, *PBOOL;
typedef const BOOL *PCBOOL;
typedef UINT8 BYTE, *PBYTE;
typedef const BYTE *PCBYTE;
typedef BOOL TBS_BOOL;
typedef UINT32 TBS_RESULT;
typedef PVOID TBS_HCONTEXT, *PTBS_HCONTEXT;
typedef UINT32 TBS_COMMAND_PRIORITY;
typedef UINT32 TBS_COMMAND_LOCALITY;
typedef UINT32 TBS_OWNERAUTH_TYPE;
typedef UINT32 TBS_HANDLE;
typedef struct tdTBS_CONTEXT_PARAMS
{
    UINT32 version;
} TBS_CONTEXT_PARAMS, *PTBS_CONTEXT_PARAMS;
typedef const TBS_CONTEXT_PARAMS *PCTBS_CONTEXT_PARAMS;
TBS_RESULT WINAPI
Tbsi_Context_Create(
    _In_ PCTBS_CONTEXT_PARAMS pContextParams,
    _Out_ PTBS_HCONTEXT phContext);
TBS_RESULT WINAPI
Tbsip_Context_Close(
    _In_ TBS_HCONTEXT hContext);
TBS_RESULT WINAPI
Tbsip_Submit_Command(
    _In_ TBS_HCONTEXT hContext,
    _In_ TBS_COMMAND_LOCALITY Locality,
    _In_ TBS_COMMAND_PRIORITY Priority,
    _In_reads_bytes_(cbCommand) PCBYTE pabCommand,
    _In_ UINT32 cbCommand,
    _Out_writes_bytes_(*pcbResult) PBYTE pabResult,
    _Inout_ PUINT32 pcbResult);
TBS_RESULT WINAPI
Tbsip_Cancel_Commands(
    _In_ TBS_HCONTEXT hContext);
TBS_RESULT WINAPI
Tbsi_Physical_Presence_Command(
    _In_ TBS_HCONTEXT hContext,
    _In_reads_bytes_(cbInput) PCBYTE pabInput,
    _In_ UINT32 cbInput,
    _Out_writes_bytes_(*pcbOutput) PBYTE pabOutput,
    _Out_ PUINT32 pcbOutput);
_Success_(return == TBS_SUCCESS)
TBS_RESULT WINAPI
Tbsi_Get_TCG_Log(
    _In_ TBS_HCONTEXT hContext,
    _Out_writes_bytes_to_opt_(*pOutputBufLen, *pOutputBufLen) PBYTE pOutputBuf,
    _Inout_ PUINT32 pOutputBufLen);
#pragma warning(push)
#pragma warning(disable: 4201)
typedef struct tdTBS_CONTEXT_PARAMS2
{
    UINT32 version;
    union
    {
        struct
        {
            UINT32 requestRaw : 1;
            UINT32 includeTpm12 : 1;
            UINT32 includeTpm20 : 1;
        };
        UINT32 asUINT32;
    };
} TBS_CONTEXT_PARAMS2, *PTBS_CONTEXT_PARAMS2;
typedef const TBS_CONTEXT_PARAMS2 *PCTBS_CONTEXT_PARAMS2;
#pragma warning(pop)
typedef struct tdTPM_WNF_PROVISIONING
{
    UINT32 status;
    BYTE message[28];
} TPM_WNF_PROVISIONING;
typedef struct _TPM_DEVICE_INFO
{
    UINT32 structVersion;
    UINT32 tpmVersion;
    UINT32 tpmInterfaceType;
    UINT32 tpmImpRevision;
} TPM_DEVICE_INFO, *PTPM_DEVICE_INFO;
typedef const TPM_DEVICE_INFO *PCTPM_DEVICE_INFO;
TBS_RESULT WINAPI
Tbsi_GetDeviceInfo(
    _In_ UINT32 Size,
    _Out_writes_bytes_(Size) PVOID Info);
_Success_(return == TBS_SUCCESS)
TBS_RESULT WINAPI
Tbsi_Get_OwnerAuth(
    _In_ TBS_HCONTEXT hContext,
    _In_ TBS_OWNERAUTH_TYPE ownerauthType,
    _Out_writes_bytes_to_opt_(*pOutputBufLen, *pOutputBufLen) PBYTE pOutputBuf,
    _Inout_ PUINT32 pOutputBufLen);
TBS_RESULT WINAPI
Tbsi_Revoke_Attestation();
HRESULT
GetDeviceID(
    _Out_writes_bytes_to_opt_(cbWindowsAIK, *pcbResult) PBYTE pbWindowsAIK,
    _In_ UINT32 cbWindowsAIK,
    _Out_ PUINT32 pcbResult,
    _Out_opt_ BOOL *pfProtectedByTPM);
HRESULT
GetDeviceIDString(
    _Out_writes_to_opt_(cchWindowsAIK, *pcchResult) PWSTR pszWindowsAIK,
    _In_ UINT32 cchWindowsAIK,
    _Out_ PUINT32 pcchResult,
    _Out_opt_ BOOL *pfProtectedByTPM);
TBS_RESULT WINAPI
Tbsi_Create_Windows_Key(
    __in TBS_HANDLE keyHandle);
_Success_(return == TBS_SUCCESS)
TBS_RESULT WINAPI
Tbsi_Get_TCG_Log_Ex(
    _In_ UINT32 logType,
    _Out_writes_bytes_opt_(*pcbOutput) PBYTE pbOutput,
    _Inout_ PUINT32 pcbOutput);
#endif
#pragma endregion
