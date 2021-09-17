       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef GUID SLID;
typedef PVOID HSLC;
typedef PVOID HSLP;
typedef enum _tagSLDATATYPE
{
    SL_DATA_NONE = REG_NONE,
    SL_DATA_SZ = REG_SZ,
    SL_DATA_DWORD = REG_DWORD,
    SL_DATA_BINARY = REG_BINARY,
    SL_DATA_MULTI_SZ = REG_MULTI_SZ,
    SL_DATA_SUM = 100,
} SLDATATYPE;
typedef enum _tagSLIDTYPE
{
    SL_ID_APPLICATION = 0,
    SL_ID_PRODUCT_SKU,
    SL_ID_LICENSE_FILE,
    SL_ID_LICENSE,
    SL_ID_PKEY,
    SL_ID_ALL_LICENSES,
    SL_ID_ALL_LICENSE_FILES,
    SL_ID_STORE_TOKEN,
    SL_ID_LAST
} SLIDTYPE;
typedef enum _tagSLLICENSINGSTATUS
{
    SL_LICENSING_STATUS_UNLICENSED,
    SL_LICENSING_STATUS_LICENSED,
    SL_LICENSING_STATUS_IN_GRACE_PERIOD,
    SL_LICENSING_STATUS_NOTIFICATION,
    SL_LICENSING_STATUS_LAST
} SLLICENSINGSTATUS;
typedef struct _tagSL_LICENSING_STATUS
{
    SLID SkuId;
    SLLICENSINGSTATUS eStatus;
    DWORD dwGraceTime;
    DWORD dwTotalGraceDays;
    HRESULT hrReason;
    UINT64 qwValidityExpiration;
} SL_LICENSING_STATUS;
typedef enum _tagSL_ACTIVATION_TYPE
{
    SL_ACTIVATION_TYPE_DEFAULT = 0,
    SL_ACTIVATION_TYPE_ACTIVE_DIRECTORY = 1,
} SL_ACTIVATION_TYPE;
typedef struct _tagSL_ACTIVATION_INFO_HEADER
{
    DWORD cbSize;
    SL_ACTIVATION_TYPE type;
} SL_ACTIVATION_INFO_HEADER;
typedef struct _tagSL_AD_ACTIVATION_INFO
{
    SL_ACTIVATION_INFO_HEADER header;
    PCWSTR pwszProductKey;
    PCWSTR pwszActivationObjectName;
} SL_AD_ACTIVATION_INFO;
typedef enum
{
    SL_REFERRALTYPE_SKUID = 0,
    SL_REFERRALTYPE_APPID,
    SL_REFERRALTYPE_OVERRIDE_SKUID,
    SL_REFERRALTYPE_OVERRIDE_APPID,
    SL_REFERRALTYPE_BEST_MATCH,
} SLREFERRALTYPE;
typedef enum _SL_GENUINE_STATE
{
    SL_GEN_STATE_IS_GENUINE = 0,
    SL_GEN_STATE_INVALID_LICENSE,
    SL_GEN_STATE_TAMPERED,
    SL_GEN_STATE_OFFLINE,
    SL_GEN_STATE_LAST,
} SL_GENUINE_STATE;
typedef struct _tagSL_NONGENUINE_UI_OPTIONS
{
    DWORD cbSize;
    CONST SLID* pComponentId;
    HRESULT hResultUI;
} SL_NONGENUINE_UI_OPTIONS;
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLOpen(
    _Out_ HSLC* phSLC
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLClose(
    _In_ HSLC hSLC
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLInstallProofOfPurchase(
    _In_ HSLC hSLC,
    _In_ PCWSTR pwszPKeyAlgorithm,
    _In_ PCWSTR pwszPKeyString,
    _In_ UINT cbPKeySpecificData,
    _In_reads_bytes_opt_(cbPKeySpecificData) PBYTE pbPKeySpecificData,
    _Out_ SLID* pPkeyId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLInstallProofOfPurchaseEx(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pApplicationId,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_ PCWSTR pwszPKeyAlgorithm,
    _In_ PCWSTR pwszPKeyString,
    _In_ UINT cbPKeySpecificData,
    _In_reads_bytes_opt_(cbPKeySpecificData) PBYTE pbPKeySpecificData,
    _Out_ SLID* pPkeyId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLUninstallProofOfPurchase(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pPKeyId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLInstallLicense(
    _In_ HSLC hSLC,
    _In_ UINT cbLicenseBlob,
    _In_reads_bytes_(cbLicenseBlob) CONST BYTE* pbLicenseBlob,
    _Out_ SLID* pLicenseFileId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLUninstallLicense(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pLicenseFileId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLConsumeRight(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pAppId,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_opt_ PCWSTR pwszRightName,
    _Reserved_ PVOID pvReserved
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetProductSkuInformation(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pProductSkuId,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetPKeyInformation(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pPKeyId,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetLicenseInformation(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pSLLicenseId,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetLicensingStatusInformation(
    _In_ HSLC hSLC,
    _In_opt_ CONST SLID* pAppID,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_opt_ PCWSTR pwszRightName,
    _Out_ UINT* pnStatusCount,
    _Outptr_result_buffer_(*pnStatusCount) SL_LICENSING_STATUS** ppLicensingStatus
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetPolicyInformation(
    _In_ HSLC hSLC,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetPolicyInformationDWORD(
    _In_ HSLC hSLC,
    _In_ PCWSTR pwszValueName,
    _Out_ DWORD* pdwValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetServiceInformation(
    _In_ HSLC hSLC,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetApplicationInformation(
    _In_ HSLC hSLC,
    _In_ const SLID* pApplicationId,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLActivateProduct(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pProductSkuId,
    _In_opt_ UINT cbAppSpecificData,
    _In_opt_ CONST PVOID pvAppSpecificData,
    _In_opt_ CONST SL_ACTIVATION_INFO_HEADER* pActivationInfo,
    _In_opt_ PCWSTR pwszProxyServer,
    _In_opt_ WORD wProxyPort
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetServerStatus(
    _In_ PCWSTR pwszServerURL,
    _In_ PCWSTR pwszAcquisitionType,
    _In_opt_ PCWSTR pwszProxyServer,
    _In_opt_ WORD wProxyPort,
    _Out_ HRESULT* phrStatus
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetActiveLicenseInfo(
    _In_ HSLC hSLC,
    _Reserved_ CONST SLID* pReserved,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLDepositStoreToken(
    _In_ HSLC hSLC,
    _In_ UINT cbValue,
    _In_reads_bytes_(cbValue) CONST BYTE* pbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLReArm(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pApplicationId,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_ DWORD dwFlags
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGenerateOfflineInstallationId(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pProductSkuId,
    _Outptr_ PWSTR* ppwszInstallationId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGenerateOfflineInstallationIdEx(
    _In_ HSLC hSLC,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_opt_ CONST SL_ACTIVATION_INFO_HEADER* pActivationInfo,
    _Outptr_ PWSTR* ppwszInstallationId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLDepositOfflineConfirmationId(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pProductSkuId,
    _In_ PCWSTR pwszInstallationId,
    _In_ PCWSTR pwszConfirmationId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLDepositOfflineConfirmationIdEx(
    _In_ HSLC hSLC,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_opt_ CONST SL_ACTIVATION_INFO_HEADER* pActivationInfo,
    _In_ PCWSTR pwszInstallationId,
    _In_ PCWSTR pwszConfirmationId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetPKeyId(
    _In_ HSLC hSLC,
    _In_ PCWSTR pwszPKeyAlgorithm,
    _In_ PCWSTR pwszPKeyString,
    _In_ UINT cbPKeySpecificData,
    _In_reads_bytes_opt_(cbPKeySpecificData) CONST BYTE* pbPKeySpecificData,
    _Out_ SLID* pPKeyId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetInstalledProductKeyIds(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pProductSkuId,
    _Out_ UINT* pnProductKeyIds,
    _Outptr_result_buffer_(*pnProductKeyIds) SLID** ppProductKeyIds
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLSetCurrentProductKey(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pProductSkuId,
    _In_ CONST SLID* pProductKeyId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetSLIDList(
    _In_ HSLC hSLC,
    _In_ SLIDTYPE eQueryIdType,
    _In_opt_ CONST SLID* pQueryId,
    _In_ SLIDTYPE eReturnIdType,
    _Out_ UINT* pnReturnIds,
    _Outptr_result_buffer_(*pnReturnIds) SLID** ppReturnIds
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetLicenseFileId(
    _In_ HSLC hSLC,
    _In_ UINT cbLicenseBlob,
    _In_reads_bytes_(cbLicenseBlob) CONST BYTE* pbLicenseBlob,
    _Out_ SLID* pLicenseFileId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetLicense(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pLicenseFileId,
    _Out_ UINT* pcbLicenseFile,
    _Outptr_result_bytebuffer_(*pcbLicenseFile) PBYTE* ppbLicenseFile
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLFireEvent(
    _In_ HSLC hSLC,
    _In_ PCWSTR pwszEventId,
    _In_ CONST SLID* pApplicationId
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLRegisterEvent(
    _In_opt_ HSLC hSLC,
    _In_ PCWSTR pwszEventId,
    _In_ CONST SLID* pApplicationId,
    _In_ HANDLE hEvent
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLUnregisterEvent(
    _In_opt_ HSLC hSLC,
    _In_ PCWSTR pwszEventId,
    _In_ CONST SLID* pApplicationId,
    _In_ HANDLE hEvent
    );
HRESULT
WINAPI
SLGetWindowsInformation(
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
HRESULT
WINAPI
SLGetWindowsInformationDWORD(
    _In_ PCWSTR pwszValueName,
    _Out_ DWORD* pdwValue
    );
HRESULT
WINAPI
SLIsGenuineLocal(
    _In_ CONST SLID* pAppId,
    _Out_ SL_GENUINE_STATE* pGenuineState,
    _Inout_opt_ SL_NONGENUINE_UI_OPTIONS* pUIOptions
    );
HRESULT
WINAPI
SLIsGenuineLocalEx(
    _In_ CONST SLID* pAppId,
    _In_opt_ CONST SLID* pSkuId,
    _Out_ SL_GENUINE_STATE* pGenuineState
    );
HRESULT
WINAPI
SLAcquireGenuineTicket(
    _Outptr_result_bytebuffer_(*pcbTicketBlob) VOID** ppTicketBlob,
    _Out_ UINT* pcbTicketBlob,
    _In_ PCWSTR pwszTemplateId,
    _In_ PCWSTR pwszServerUrl,
    _In_opt_ PCWSTR pwszClientToken
    );
HRESULT
WINAPI
SLSetGenuineInformation(
    _In_ CONST SLID* pQueryId,
    _In_ PCWSTR pwszValueName,
    _In_ SLDATATYPE eDataType,
    _In_opt_ UINT cbValue,
    _In_reads_bytes_opt_(cbValue) CONST BYTE* pbValue
    );
HRESULT
WINAPI
SLGetReferralInformation(
    _In_ HSLC hSLC,
    _In_ SLREFERRALTYPE eReferralType,
    _In_ CONST SLID* pSkuOrAppId,
    _In_ PCWSTR pwszValueName,
    _Outptr_ PWSTR* ppwszValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLPersistRTSPayloadOverride(
    _In_ HSLC hSLC,
    _In_ CONST SLID* pApplicationId,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_reads_bytes_(cbData) BYTE* pbData,
    _In_ DWORD cbData
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLPersistApplicationPolicies(
    _In_ CONST SLID* pApplicationId,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_ DWORD dwFlags
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetApplicationPolicy(
    _In_ HSLP hPolicyContext,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLLoadApplicationPolicies(
    _In_ CONST SLID* pApplicationId,
    _In_opt_ CONST SLID* pProductSkuId,
    _In_ DWORD dwFlags,
    _Out_ HSLP* phPolicyContext
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLUnloadApplicationPolicies(
    _In_ HSLP hPolicyContext,
    _In_ DWORD dwFlags
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLGetAuthenticationResult(
    _In_ HSLC hSLC,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) PBYTE* ppbValue
    );
__control_entrypoint(DllExport)
HRESULT
WINAPI
SLSetAuthenticationData(
    _In_ HSLC hSLC,
    _In_opt_ UINT cbValue,
    _In_reads_bytes_opt_(cbValue) CONST BYTE* pbValue
    );
HRESULT
WINAPI
SLGetGenuineInformation(
    _In_ CONST SLID* pQueryId,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) BYTE** ppbValue
    );
HRESULT
WINAPI
SLGetGenuineInformationEx(
    _In_ CONST SLID* pAppId,
    _In_ PCWSTR pwszValueName,
    _Out_opt_ SLDATATYPE* peDataType,
    _Out_ UINT* pcbValue,
    _Outptr_result_bytebuffer_(*pcbValue) BYTE** ppbValue
    );
HRESULT
WINAPI
SLGatherMigrationBlob(
    _In_ BOOL bMigratableOnly,
    _In_opt_ LPCWSTR pwszEncryptorUri,
    _In_ HANDLE hFile
    );
HRESULT
WINAPI
SLGatherMigrationBlobEx(
    __in DWORD dwFlags,
    __in_opt LPCWSTR pwszEncryptorUri,
    __in HANDLE hFile
    );
HRESULT
WINAPI
SLDepositMigrationBlob(
    _In_ HANDLE hFile
    );
}
typedef struct _SL_SYSTEM_POLICY_INFORMATION {
    PVOID Reserved1[2];
    ULONG Reserved2[3];
} SL_SYSTEM_POLICY_INFORMATION, *PSL_SYSTEM_POLICY_INFORMATION;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
STDAPI
SLQueryLicenseValueFromApp(
    _In_ PCWSTR valueName,
    _Out_opt_ ULONG* valueType,
    _Out_writes_bytes_to_opt_(dataSize, *resultDataSize) PVOID dataBuffer,
    _In_ ULONG dataSize,
    _Out_ ULONG* resultDataSize
    );
#endif
#pragma endregion
