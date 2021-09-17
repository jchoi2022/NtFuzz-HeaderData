#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
ADsGetObject(
    LPCWSTR lpszPathName,
    REFIID riid,
    VOID * * ppObject
    );
HRESULT WINAPI
ADsBuildEnumerator(
    IADsContainer *pADsContainer,
    IEnumVARIANT **ppEnumVariant
    );
HRESULT WINAPI
ADsFreeEnumerator(
    IEnumVARIANT *pEnumVariant
    );
HRESULT WINAPI
ADsEnumerateNext(
    IEnumVARIANT *pEnumVariant,
    ULONG cElements,
    VARIANT FAR *pvar,
    ULONG FAR *pcElementsFetched
    );
HRESULT WINAPI
ADsBuildVarArrayStr(
    _In_reads_(dwPathNames) LPWSTR * lppPathNames,
    DWORD dwPathNames,
    VARIANT * pVar
    );
HRESULT WINAPI
ADsBuildVarArrayInt(
    LPDWORD lpdwObjectTypes,
    DWORD dwObjectTypes,
    VARIANT * pVar
    );
HRESULT WINAPI
ADsOpenObject(
    LPCWSTR lpszPathName,
    LPCWSTR lpszUserName,
    LPCWSTR lpszPassword,
    DWORD dwReserved,
    REFIID riid,
    void FAR * FAR * ppObject
    );
HRESULT WINAPI
ADsGetLastError(
    OUT LPDWORD lpError,
    _Out_writes_(dwErrorBufLen) LPWSTR lpErrorBuf,
    IN DWORD dwErrorBufLen,
    _Out_writes_(dwNameBufLen) LPWSTR lpNameBuf,
    IN DWORD dwNameBufLen
    );
VOID WINAPI
ADsSetLastError(
    IN DWORD dwErr,
    IN LPCWSTR pszError,
    IN LPCWSTR pszProvider
    );
VOID WINAPI
ADsFreeAllErrorRecords(
    VOID);
LPVOID WINAPI
AllocADsMem(
    DWORD cb
);
BOOL WINAPI
FreeADsMem(
   LPVOID pMem
);
LPVOID WINAPI
ReallocADsMem(
   LPVOID pOldMem,
   DWORD cbOld,
   DWORD cbNew
);
LPWSTR WINAPI
AllocADsStr(
    LPCWSTR pStr
);
BOOL WINAPI
FreeADsStr(
   _In_ LPWSTR pStr
);
BOOL WINAPI
ReallocADsStr(
   _Inout_ LPWSTR *ppStr,
   _In_ LPWSTR pStr
);
HRESULT WINAPI
ADsEncodeBinaryData (
   PBYTE pbSrcData,
   DWORD dwSrcLen,
   _Outptr_ LPWSTR * ppszDestData
   );
HRESULT WINAPI
ADsDecodeBinaryData (
   LPCWSTR szSrcData,
   PBYTE *ppbDestData,
   ULONG *pdwDestLen
   );
HRESULT WINAPI
PropVariantToAdsType(
    VARIANT * pVariant,
    DWORD dwNumVariant,
    PADSVALUE *ppAdsValues,
    PDWORD pdwNumValues
    );
HRESULT WINAPI
AdsTypeToPropVariant(
    PADSVALUE pAdsValues,
    DWORD dwNumValues,
    VARIANT * pVariant
    );
void WINAPI
AdsFreeAdsValues(
    PADSVALUE pAdsValues,
    DWORD dwNumValues
    );
HRESULT WINAPI
BinarySDToSecurityDescriptor(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    VARIANT *pVarsec,
    LPCWSTR pszServerName,
    LPCWSTR userName,
    LPCWSTR passWord,
    DWORD dwFlags
    );
HRESULT WINAPI
SecurityDescriptorToBinarySD(
    VARIANT vVarSecDes,
    PSECURITY_DESCRIPTOR * ppSecurityDescriptor,
    PDWORD pdwSDLength,
    LPCWSTR pszServerName,
    LPCWSTR userName,
    LPCWSTR passWord,
    DWORD dwFlags
    );
#endif
#pragma endregion
}
