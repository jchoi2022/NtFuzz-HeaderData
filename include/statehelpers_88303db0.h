       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <windows.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
LSTATUS
WINAPI
GetRegistryValueWithFallbackW(
    __in HKEY hkeyPrimary,
    __in_opt LPCWSTR pwszPrimarySubKey,
    __in HKEY hkeyFallback,
    __in_opt LPCWSTR pwszFallbackSubKey,
    __in PCWSTR pwszValue,
    __in DWORD dwFlags,
    __out_opt LPDWORD pdwType,
    _When_((dwFlags & 0x7F) == RRF_RT_REG_SZ ||
    (dwFlags & 0x7F) == RRF_RT_REG_EXPAND_SZ ||
        (dwFlags & 0x7F) == (RRF_RT_REG_SZ | RRF_RT_REG_EXPAND_SZ) ||
        *pdwType == REG_SZ ||
        *pdwType == REG_EXPAND_SZ, __out_z)
    _When_((dwFlags & 0x7F) == RRF_RT_REG_MULTI_SZ ||
        *pdwType == REG_MULTI_SZ, __post __nullnullterminated) __out_bcount_part_opt(cbDataIn, *pcbDataOut) PVOID pvData,
    __in DWORD cbDataIn,
    __out_opt LPDWORD pcbDataOut
    );
#endif
#pragma endregion
}
