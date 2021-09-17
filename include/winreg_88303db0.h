#include <winapifamily.h>
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <macwin32.h>
extern "C" {
#pragma region Application Family or Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef _Return_type_success_(return==ERROR_SUCCESS) LONG LSTATUS;
typedef ACCESS_MASK REGSAM;
struct val_context {
    int valuelen;
    LPVOID value_context;
    LPVOID val_buff_ptr;
};
typedef struct val_context FAR *PVALCONTEXT;
typedef struct pvalueA {
    LPSTR pv_valuename;
    int pv_valuelen;
    LPVOID pv_value_context;
    DWORD pv_type;
}PVALUEA, FAR *PPVALUEA;
typedef struct pvalueW {
    LPWSTR pv_valuename;
    int pv_valuelen;
    LPVOID pv_value_context;
    DWORD pv_type;
}PVALUEW, FAR *PPVALUEW;
typedef PVALUEW PVALUE;
typedef PPVALUEW PPVALUE;
typedef
DWORD __cdecl
QUERYHANDLER (LPVOID keycontext, PVALCONTEXT val_list, DWORD num_vals,
          LPVOID outputbuffer, DWORD FAR *total_outlen, DWORD input_blen);
typedef QUERYHANDLER FAR *PQUERYHANDLER;
typedef struct provider_info {
    PQUERYHANDLER pi_R0_1val;
    PQUERYHANDLER pi_R0_allvals;
    PQUERYHANDLER pi_R3_1val;
    PQUERYHANDLER pi_R3_allvals;
    DWORD pi_flags;
    LPVOID pi_key_context;
}REG_PROVIDER;
typedef struct provider_info FAR *PPROVIDER;
typedef struct value_entA {
    LPSTR ve_valuename;
    DWORD ve_valuelen;
    DWORD_PTR ve_valueptr;
    DWORD ve_type;
}VALENTA, FAR *PVALENTA;
typedef struct value_entW {
    LPWSTR ve_valuename;
    DWORD ve_valuelen;
    DWORD_PTR ve_valueptr;
    DWORD ve_type;
}VALENTW, FAR *PVALENTW;
typedef VALENTW VALENT;
typedef PVALENTW PVALENT;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
LSTATUS
APIENTRY
RegCloseKey(
    _In_ HKEY hKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegOverridePredefKey (
    _In_ HKEY hKey,
    _In_opt_ HKEY hNewHKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenUserClassesRoot(
    _In_ HANDLE hToken,
    _Reserved_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenCurrentUser(
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegDisablePredefinedCache(
    VOID
    );
WINADVAPI
LSTATUS
APIENTRY
RegDisablePredefinedCacheEx(
    VOID
    );
WINADVAPI
LSTATUS
APIENTRY
RegConnectRegistryA (
    _In_opt_ LPCSTR lpMachineName,
    _In_ HKEY hKey,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegConnectRegistryW (
    _In_opt_ LPCWSTR lpMachineName,
    _In_ HKEY hKey,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegConnectRegistryExA (
    _In_opt_ LPCSTR lpMachineName,
    _In_ HKEY hKey,
    _In_ ULONG Flags,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegConnectRegistryExW (
    _In_opt_ LPCWSTR lpMachineName,
    _In_ HKEY hKey,
    _In_ ULONG Flags,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegCreateKeyA (
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegCreateKeyW (
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegCreateKeyExA(
    _In_ HKEY hKey,
    _In_ LPCSTR lpSubKey,
    _Reserved_ DWORD Reserved,
    _In_opt_ LPSTR lpClass,
    _In_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _Out_ PHKEY phkResult,
    _Out_opt_ LPDWORD lpdwDisposition
    );
WINADVAPI
LSTATUS
APIENTRY
RegCreateKeyExW(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpSubKey,
    _Reserved_ DWORD Reserved,
    _In_opt_ LPWSTR lpClass,
    _In_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _Out_ PHKEY phkResult,
    _Out_opt_ LPDWORD lpdwDisposition
    );
WINADVAPI
LSTATUS
APIENTRY
RegCreateKeyTransactedA (
    _In_ HKEY hKey,
    _In_ LPCSTR lpSubKey,
    _Reserved_ DWORD Reserved,
    _In_opt_ LPSTR lpClass,
    _In_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _Out_ PHKEY phkResult,
    _Out_opt_ LPDWORD lpdwDisposition,
    _In_ HANDLE hTransaction,
    _Reserved_ PVOID pExtendedParemeter
    );
WINADVAPI
LSTATUS
APIENTRY
RegCreateKeyTransactedW (
    _In_ HKEY hKey,
    _In_ LPCWSTR lpSubKey,
    _Reserved_ DWORD Reserved,
    _In_opt_ LPWSTR lpClass,
    _In_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _Out_ PHKEY phkResult,
    _Out_opt_ LPDWORD lpdwDisposition,
    _In_ HANDLE hTransaction,
    _Reserved_ PVOID pExtendedParemeter
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyA (
    _In_ HKEY hKey,
    _In_ LPCSTR lpSubKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyW (
    _In_ HKEY hKey,
    _In_ LPCWSTR lpSubKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyExA(
    _In_ HKEY hKey,
    _In_ LPCSTR lpSubKey,
    _In_ REGSAM samDesired,
    _Reserved_ DWORD Reserved
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyExW(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpSubKey,
    _In_ REGSAM samDesired,
    _Reserved_ DWORD Reserved
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyTransactedA (
    _In_ HKEY hKey,
    _In_ LPCSTR lpSubKey,
    _In_ REGSAM samDesired,
    _Reserved_ DWORD Reserved,
    _In_ HANDLE hTransaction,
    _Reserved_ PVOID pExtendedParameter
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyTransactedW (
    _In_ HKEY hKey,
    _In_ LPCWSTR lpSubKey,
    _In_ REGSAM samDesired,
    _Reserved_ DWORD Reserved,
    _In_ HANDLE hTransaction,
    _Reserved_ PVOID pExtendedParameter
    );
WINADVAPI
LONG
APIENTRY
RegDisableReflectionKey (
    _In_ HKEY hBase
    );
WINADVAPI
LONG
APIENTRY
RegEnableReflectionKey (
    _In_ HKEY hBase
    );
WINADVAPI
LONG
APIENTRY
RegQueryReflectionKey (
    _In_ HKEY hBase,
    _Out_ BOOL *bIsReflectionDisabled
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteValueA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpValueName
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteValueW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpValueName
    );
WINADVAPI
LSTATUS
APIENTRY
RegEnumKeyA (
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_opt_(cchName) LPSTR lpName,
    _In_ DWORD cchName
    );
WINADVAPI
LSTATUS
APIENTRY
RegEnumKeyW (
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_opt_(cchName) LPWSTR lpName,
    _In_ DWORD cchName
    );
WINADVAPI
LSTATUS
APIENTRY
RegEnumKeyExA(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_opt_(*lpcchName,*lpcchName + 1) LPSTR lpName,
    _Inout_ LPDWORD lpcchName,
    _Reserved_ LPDWORD lpReserved,
    _Out_writes_to_opt_(*lpcchClass,*lpcchClass + 1) LPSTR lpClass,
    _Inout_opt_ LPDWORD lpcchClass,
    _Out_opt_ PFILETIME lpftLastWriteTime
    );
WINADVAPI
LSTATUS
APIENTRY
RegEnumKeyExW(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_opt_(*lpcchName,*lpcchName + 1) LPWSTR lpName,
    _Inout_ LPDWORD lpcchName,
    _Reserved_ LPDWORD lpReserved,
    _Out_writes_to_opt_(*lpcchClass,*lpcchClass + 1) LPWSTR lpClass,
    _Inout_opt_ LPDWORD lpcchClass,
    _Out_opt_ PFILETIME lpftLastWriteTime
    );
WINADVAPI
LSTATUS
APIENTRY
RegEnumValueA(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_opt_(*lpcchValueName,*lpcchValueName + 1) LPSTR lpValueName,
    _Inout_ LPDWORD lpcchValueName,
    _Reserved_ LPDWORD lpReserved,
    _Out_opt_ LPDWORD lpType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) __out_data_source(REGISTRY) LPBYTE lpData,
    _Inout_opt_ LPDWORD lpcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegEnumValueW(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_opt_(*lpcchValueName,*lpcchValueName + 1) LPWSTR lpValueName,
    _Inout_ LPDWORD lpcchValueName,
    _Reserved_ LPDWORD lpReserved,
    _Out_opt_ LPDWORD lpType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) __out_data_source(REGISTRY) LPBYTE lpData,
    _Inout_opt_ LPDWORD lpcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegFlushKey(
    _In_ HKEY hKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegGetKeySecurity(
    _In_ HKEY hKey,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_opt_(*lpcbSecurityDescriptor) PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _Inout_ LPDWORD lpcbSecurityDescriptor
    );
WINADVAPI
LSTATUS
APIENTRY
RegLoadKeyA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_ LPCSTR lpFile
    );
WINADVAPI
LSTATUS
APIENTRY
RegLoadKeyW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_ LPCWSTR lpFile
    );
WINADVAPI
LSTATUS
APIENTRY
RegNotifyChangeKeyValue(
    _In_ HKEY hKey,
    _In_ BOOL bWatchSubtree,
    _In_ DWORD dwNotifyFilter,
    _In_opt_ HANDLE hEvent,
    _In_ BOOL fAsynchronous
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenKeyA (
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenKeyW (
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenKeyExA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_opt_ DWORD ulOptions,
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenKeyExW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_opt_ DWORD ulOptions,
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenKeyTransactedA (
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_opt_ DWORD ulOptions,
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult,
    _In_ HANDLE hTransaction,
    _Reserved_ PVOID pExtendedParemeter
    );
WINADVAPI
LSTATUS
APIENTRY
RegOpenKeyTransactedW (
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_opt_ DWORD ulOptions,
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult,
    _In_ HANDLE hTransaction,
    _Reserved_ PVOID pExtendedParemeter
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryInfoKeyA(
    _In_ HKEY hKey,
    _Out_writes_to_opt_(*lpcchClass,*lpcchClass + 1) LPSTR lpClass,
    _Inout_opt_ LPDWORD lpcchClass,
    _Reserved_ LPDWORD lpReserved,
    _Out_opt_ LPDWORD lpcSubKeys,
    _Out_opt_ LPDWORD lpcbMaxSubKeyLen,
    _Out_opt_ LPDWORD lpcbMaxClassLen,
    _Out_opt_ LPDWORD lpcValues,
    _Out_opt_ LPDWORD lpcbMaxValueNameLen,
    _Out_opt_ LPDWORD lpcbMaxValueLen,
    _Out_opt_ LPDWORD lpcbSecurityDescriptor,
    _Out_opt_ PFILETIME lpftLastWriteTime
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryInfoKeyW(
    _In_ HKEY hKey,
    _Out_writes_to_opt_(*lpcchClass,*lpcchClass + 1) LPWSTR lpClass,
    _Inout_opt_ LPDWORD lpcchClass,
    _Reserved_ LPDWORD lpReserved,
    _Out_opt_ LPDWORD lpcSubKeys,
    _Out_opt_ LPDWORD lpcbMaxSubKeyLen,
    _Out_opt_ LPDWORD lpcbMaxClassLen,
    _Out_opt_ LPDWORD lpcValues,
    _Out_opt_ LPDWORD lpcbMaxValueNameLen,
    _Out_opt_ LPDWORD lpcbMaxValueLen,
    _Out_opt_ LPDWORD lpcbSecurityDescriptor,
    _Out_opt_ PFILETIME lpftLastWriteTime
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryValueA (
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) __out_data_source(REGISTRY) LPSTR lpData,
    _Inout_opt_ PLONG lpcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryValueW (
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) __out_data_source(REGISTRY) LPWSTR lpData,
    _Inout_opt_ PLONG lpcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryMultipleValuesA(
    _In_ HKEY hKey,
    _Out_writes_(num_vals) PVALENTA val_list,
    _In_ DWORD num_vals,
    _Out_writes_bytes_to_opt_(*ldwTotsize, *ldwTotsize) __out_data_source(REGISTRY) LPSTR lpValueBuf,
    _Inout_opt_ LPDWORD ldwTotsize
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryMultipleValuesW(
    _In_ HKEY hKey,
    _Out_writes_(num_vals) PVALENTW val_list,
    _In_ DWORD num_vals,
    _Out_writes_bytes_to_opt_(*ldwTotsize, *ldwTotsize) __out_data_source(REGISTRY) LPWSTR lpValueBuf,
    _Inout_opt_ LPDWORD ldwTotsize
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryValueExA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpValueName,
    _Reserved_ LPDWORD lpReserved,
    _Out_opt_ LPDWORD lpType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) __out_data_source(REGISTRY) LPBYTE lpData,
    _When_(lpData == NULL,_Out_opt_) _When_(lpData != NULL,_Inout_opt_) LPDWORD lpcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegQueryValueExW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpValueName,
    _Reserved_ LPDWORD lpReserved,
    _Out_opt_ LPDWORD lpType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) __out_data_source(REGISTRY) LPBYTE lpData,
    _When_(lpData == NULL,_Out_opt_) _When_(lpData != NULL,_Inout_opt_) LPDWORD lpcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegReplaceKeyA (
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_ LPCSTR lpNewFile,
    _In_ LPCSTR lpOldFile
    );
WINADVAPI
LSTATUS
APIENTRY
RegReplaceKeyW (
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_ LPCWSTR lpNewFile,
    _In_ LPCWSTR lpOldFile
    );
WINADVAPI
LSTATUS
APIENTRY
RegRestoreKeyA(
    _In_ HKEY hKey,
    _In_ LPCSTR lpFile,
    _In_ DWORD dwFlags
    );
WINADVAPI
LSTATUS
APIENTRY
RegRestoreKeyW(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpFile,
    _In_ DWORD dwFlags
    );
WINADVAPI
LSTATUS
APIENTRY
RegRenameKey(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKeyName,
    _In_ LPCWSTR lpNewKeyName
    );
WINADVAPI
LSTATUS
APIENTRY
RegSaveKeyA (
    _In_ HKEY hKey,
    _In_ LPCSTR lpFile,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINADVAPI
LSTATUS
APIENTRY
RegSaveKeyW (
    _In_ HKEY hKey,
    _In_ LPCWSTR lpFile,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetKeySecurity(
    _In_ HKEY hKey,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetValueA (
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) LPCSTR lpData,
    _In_ DWORD cbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetValueW (
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) LPCWSTR lpData,
    _In_ DWORD cbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetValueExA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpValueName,
    _Reserved_ DWORD Reserved,
    _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) CONST BYTE* lpData,
    _In_ DWORD cbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetValueExW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpValueName,
    _Reserved_ DWORD Reserved,
    _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) CONST BYTE* lpData,
    _In_ DWORD cbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegUnLoadKeyA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegUnLoadKeyW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyValueA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_opt_ LPCSTR lpValueName
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteKeyValueW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_opt_ LPCWSTR lpValueName
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetKeyValueA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey,
    _In_opt_ LPCSTR lpValueName,
    _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) LPCVOID lpData,
    _In_ DWORD cbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegSetKeyValueW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_opt_ LPCWSTR lpValueName,
    _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) LPCVOID lpData,
    _In_ DWORD cbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteTreeA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR lpSubKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegDeleteTreeW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR lpSubKey
    );
WINADVAPI
LSTATUS
APIENTRY
RegCopyTreeA (
    _In_ HKEY hKeySrc,
    _In_opt_ LPCSTR lpSubKey,
    _In_ HKEY hKeyDest
    );
WINADVAPI
LSTATUS
APIENTRY
RegGetValueA(
    _In_ HKEY hkey,
    _In_opt_ LPCSTR lpSubKey,
    _In_opt_ LPCSTR lpValue,
    _In_ DWORD dwFlags,
    _Out_opt_ LPDWORD pdwType,
    _When_((dwFlags & 0x7F) == RRF_RT_REG_SZ ||
               (dwFlags & 0x7F) == RRF_RT_REG_EXPAND_SZ ||
               (dwFlags & 0x7F) == (RRF_RT_REG_SZ | RRF_RT_REG_EXPAND_SZ) ||
               *pdwType == REG_SZ ||
               *pdwType == REG_EXPAND_SZ, _Post_z_)
        _When_((dwFlags & 0x7F) == RRF_RT_REG_MULTI_SZ ||
               *pdwType == REG_MULTI_SZ, _Post_ _NullNull_terminated_)
    _Out_writes_bytes_to_opt_(*pcbData,*pcbData) PVOID pvData,
    _Inout_opt_ LPDWORD pcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegGetValueW(
    _In_ HKEY hkey,
    _In_opt_ LPCWSTR lpSubKey,
    _In_opt_ LPCWSTR lpValue,
    _In_ DWORD dwFlags,
    _Out_opt_ LPDWORD pdwType,
    _When_((dwFlags & 0x7F) == RRF_RT_REG_SZ ||
               (dwFlags & 0x7F) == RRF_RT_REG_EXPAND_SZ ||
               (dwFlags & 0x7F) == (RRF_RT_REG_SZ | RRF_RT_REG_EXPAND_SZ) ||
               *pdwType == REG_SZ ||
               *pdwType == REG_EXPAND_SZ, _Post_z_)
        _When_((dwFlags & 0x7F) == RRF_RT_REG_MULTI_SZ ||
               *pdwType == REG_MULTI_SZ, _Post_ _NullNull_terminated_)
    _Out_writes_bytes_to_opt_(*pcbData,*pcbData) PVOID pvData,
    _Inout_opt_ LPDWORD pcbData
    );
WINADVAPI
LSTATUS
APIENTRY
RegCopyTreeW(
    _In_ HKEY hKeySrc,
    _In_opt_ LPCWSTR lpSubKey,
    _In_ HKEY hKeyDest
    );
WINADVAPI
LSTATUS
APIENTRY
RegLoadMUIStringA(
    _In_ HKEY hKey,
    _In_opt_ LPCSTR pszValue,
    _Out_writes_bytes_opt_(cbOutBuf) LPSTR pszOutBuf,
    _In_ DWORD cbOutBuf,
    _Out_opt_ LPDWORD pcbData,
    _In_ DWORD Flags,
    _In_opt_ LPCSTR pszDirectory
    );
WINADVAPI
LSTATUS
APIENTRY
RegLoadMUIStringW(
    _In_ HKEY hKey,
    _In_opt_ LPCWSTR pszValue,
    _Out_writes_bytes_opt_(cbOutBuf) LPWSTR pszOutBuf,
    _In_ DWORD cbOutBuf,
    _Out_opt_ LPDWORD pcbData,
    _In_ DWORD Flags,
    _In_opt_ LPCWSTR pszDirectory
    );
WINADVAPI
LSTATUS
APIENTRY
RegLoadAppKeyA(
    _In_ LPCSTR lpFile,
    _Out_ PHKEY phkResult,
    _In_ REGSAM samDesired,
    _In_ DWORD dwOptions,
    _Reserved_ DWORD Reserved
    );
WINADVAPI
LSTATUS
APIENTRY
RegLoadAppKeyW(
    _In_ LPCWSTR lpFile,
    _Out_ PHKEY phkResult,
    _In_ REGSAM samDesired,
    _In_ DWORD dwOptions,
    _Reserved_ DWORD Reserved
    );
__drv_preferredFunction("InitiateSystemShutdownEx", "Legacy API. Rearchitect to avoid Reboot")
WINADVAPI
BOOL
APIENTRY
InitiateSystemShutdownA(
    _In_opt_ LPSTR lpMachineName,
    _In_opt_ LPSTR lpMessage,
    _In_ DWORD dwTimeout,
    _In_ BOOL bForceAppsClosed,
    _In_ BOOL bRebootAfterShutdown
    );
__drv_preferredFunction("InitiateSystemShutdownEx", "Legacy API. Rearchitect to avoid Reboot")
WINADVAPI
BOOL
APIENTRY
InitiateSystemShutdownW(
    _In_opt_ LPWSTR lpMachineName,
    _In_opt_ LPWSTR lpMessage,
    _In_ DWORD dwTimeout,
    _In_ BOOL bForceAppsClosed,
    _In_ BOOL bRebootAfterShutdown
    );
WINADVAPI
BOOL
APIENTRY
AbortSystemShutdownA(
    _In_opt_ LPSTR lpMachineName
    );
WINADVAPI
BOOL
APIENTRY
AbortSystemShutdownW(
    _In_opt_ LPWSTR lpMachineName
    );
#include <reason.h>
__drv_preferredFunction("a design alternative", "Rearchitect to avoid Reboot")
_When_(((dwReason==0 && lpMessage==0)) || dwReason>=0xd0000000,
    __drv_reportError("Requires a valid dwReason or lpMessage"))
WINADVAPI
BOOL
APIENTRY
InitiateSystemShutdownExA(
    _In_opt_ LPSTR lpMachineName,
    _In_opt_ LPSTR lpMessage,
    _In_ DWORD dwTimeout,
    _In_ BOOL bForceAppsClosed,
    _In_ BOOL bRebootAfterShutdown,
    _In_ DWORD dwReason
    );
__drv_preferredFunction("a design alternative", "Rearchitect to avoid Reboot")
_When_(((dwReason==0 && lpMessage==0)) || dwReason>=0xd0000000,
    __drv_reportError("Requires a valid dwReason or lpMessage"))
WINADVAPI
BOOL
APIENTRY
InitiateSystemShutdownExW(
    _In_opt_ LPWSTR lpMachineName,
    _In_opt_ LPWSTR lpMessage,
    _In_ DWORD dwTimeout,
    _In_ BOOL bForceAppsClosed,
    _In_ BOOL bRebootAfterShutdown,
    _In_ DWORD dwReason
    );
WINADVAPI
DWORD
APIENTRY
InitiateShutdownA(
    _In_opt_ LPSTR lpMachineName,
    _In_opt_ LPSTR lpMessage,
    _In_ DWORD dwGracePeriod,
    _In_ DWORD dwShutdownFlags,
    _In_ DWORD dwReason
    );
WINADVAPI
DWORD
APIENTRY
InitiateShutdownW(
    _In_opt_ LPWSTR lpMachineName,
    _In_opt_ LPWSTR lpMessage,
    _In_ DWORD dwGracePeriod,
    _In_ DWORD dwShutdownFlags,
    _In_ DWORD dwReason
    );
WINADVAPI
DWORD
APIENTRY
CheckForHiberboot(
    _Inout_ PBOOLEAN pHiberboot,
    _In_ BOOLEAN bClearFlag
    );
WINADVAPI
LSTATUS
APIENTRY
RegSaveKeyExA(
    _In_ HKEY hKey,
    _In_ LPCSTR lpFile,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ DWORD Flags
    );
WINADVAPI
LSTATUS
APIENTRY
RegSaveKeyExW(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpFile,
    _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ DWORD Flags
    );
#endif
#pragma endregion
}
