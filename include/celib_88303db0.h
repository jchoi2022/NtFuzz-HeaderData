#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stdio.h>
     (CERT_KEY_CERT_SIGN_KEY_USAGE | CERT_DIGITAL_SIGNATURE_KEY_USAGE | \
      CERT_CRL_SIGN_KEY_USAGE)
    (assert(sizeof((*p1)) == sizeof(*(p2))), (DWORD)((p1) - (p2)))
 _LeaveErrorStr2((hr), label, (pszMessage), NULL, S_OK)
 _LeaveErrorStr2((hr), label, (pszMessage), NULL, (hr2))
 _LeaveErrorStr2((hr), label, (pszMessage), (pwszData), S_OK)
    { \
 ceERRORPRINTLINESTR((pszMessage), (pwszData), (hr)); \
 goto label; \
    }
 _LeaveIfErrorStr2((hr), label, (pszMessage), NULL, S_OK)
 _LeaveIfErrorStr2((hr), label, (pszMessage), NULL, (hr2))
 _LeaveIfErrorStr2((hr), label, (pszMessage), (pwszData), S_OK)
    { \
 if (S_OK != (hr)) \
 { \
     ceERRORPRINTLINESTR((pszMessage), (pwszData), (hr)); \
     goto label; \
 } \
    }
    ceERRORPRINTLINESTR((pszMessage), (pwsz), (hr))
    _PrintErrorStr((hr), (pszMessage), (pwsz))
    _PrintErrorStr((hr), (pszMessage), NULL)
    _PrintErrorStr((hr), (pszMessage), NULL)
    { \
 if (S_OK != (hr)) \
 { \
     ceERRORPRINTLINESTR((pszMessage), (pwsz), (hr)); \
 } \
    }
    _PrintIfErrorStr((hr), (pszMessage), (pwsz))
    _PrintIfErrorStr((hr), (pszMessage), NULL)
    _PrintIfErrorStr((hr), (pszMessage), NULL)
    _JumpError((hr), label, (pszMessage))
    { \
 ceERRORPRINTLINESTR((pszMessage), NULL, (hr)); \
 goto label; \
    }
    { \
 if (S_OK != (hr)) \
 { \
     ceERRORPRINTLINESTR((pszMessage), (pwsz), (hr)); \
     goto label; \
 } \
    }
    _JumpIfErrorStr((hr), label, (pszMessage), NULL)
    _JumpIfErrorStr((hr), label, (pszMessage), NULL)
    _JumpIfErrorStr((hr), label, (pszMessage), NULL)
typedef _NullNull_terminated_ WCHAR * CSPZZWSTR;
typedef _NullNull_terminated_ WCHAR const * CSPCZZWSTR;
typedef _Null_terminated_ PCWSTR const * CSPCZPCWSTR;
int WINAPIV ceDbgPrintf(BOOL fDebug, char const *pszfmt, ...);
VOID
ceErrorPrintLine(
    IN char const *pszFile,
    IN DWORD line,
    IN char const *pszMessage,
    IN WCHAR const *pwszData,
    IN HRESULT hr);
HRESULT
ceHLastError(VOID);
HRESULT
ceHError(
    IN HRESULT hr);
enum ENUM_PERIOD
{
    ENUM_PERIOD_INVALID = -1,
    ENUM_PERIOD_SECONDS = 0,
    ENUM_PERIOD_MINUTES,
    ENUM_PERIOD_HOURS,
    ENUM_PERIOD_DAYS,
    ENUM_PERIOD_WEEKS,
    ENUM_PERIOD_MONTHS,
    ENUM_PERIOD_YEARS
};
    __pragma(prefast(suppress: __WARNING_325, "Intentional NULL check, avoid SysStringLen")) \
    (NULL == str || 0 == SysStringByteLen(str))
    __pragma(prefast(suppress: __WARNING_325, "Intentional NULL check")) \
    (NULL == str)
HMODULE
ceLoadSystem32Library(
    IN WCHAR const *pwszLibFileName);
typedef struct _LLFILETIME
{
    union {
 LONGLONG ll;
 FILETIME ft;
    };
} LLFILETIME;
__inline VOID
ceAddToFileTime(
    IN OUT FILETIME *pft,
    IN LONGLONG ll)
{
    LLFILETIME llft;
    llft.ft = *pft;
    llft.ll += ll;
    *pft = llft.ft;
}
__inline LONGLONG
ceSubtractFileTimes(
    IN FILETIME const *pft1,
    IN FILETIME const *pft2)
{
    LLFILETIME llft1;
    LLFILETIME llft2;
    llft1.ft = *pft1;
    llft2.ft = *pft2;
    return(llft1.ll - llft2.ll);
}
HRESULT
ceMakeExprDate(
    IN OUT DATE *pDate,
    IN LONG lDelta,
    IN enum ENUM_PERIOD enumPeriod);
HRESULT
ceTranslatePeriodUnits(
    IN WCHAR const *pwszPeriod,
    IN LONG lCount,
    OUT enum ENUM_PERIOD *penumPeriod,
    OUT LONG *plCount);
WCHAR const *
ceGetOIDNameA(
    IN char const *pszObjId);
WCHAR const *
ceGetOIDName(
    IN WCHAR const *pwszObjId);
BOOL
ceDecodeObject(
    IN DWORD dwEncodingType,
    IN LPCSTR lpszStructType,
    IN BYTE const *pbEncoded,
    IN DWORD cbEncoded,
    IN BOOL fCoTaskMemAlloc,
    OUT VOID **ppvStructInfo,
    OUT DWORD *pcbStructInfo);
BOOL
ceDecodeObjectEx(
    IN DWORD dwEncodingType,
    IN LPCSTR lpszStructType,
    IN BYTE const *pbEncoded,
    IN DWORD cbEncoded,
    IN DWORD dwFlags,
    OUT VOID **ppvStructInfo,
    OUT DWORD *pcbStructInfo);
BOOL
ceEncodeObject(
    DWORD dwEncodingType,
    IN LPCSTR lpszStructType,
    IN VOID const *pvStructInfo,
    IN DWORD dwFlags,
    IN BOOL fCoTaskMemAlloc,
    OUT BYTE **ppbEncoded,
    OUT DWORD *pcbEncoded);
VOID
ceGetBStrBuffer(
    _In_opt_ BSTR str,
    _Out_ DWORD *pcbOut,
    _Outptr_result_buffer_(*pcbOut) PBYTE *ppbOut);
BSTR
ceAllocBStrBlob(
    _In_reads_bytes_opt_(cbIn) BYTE const *pbIn,
    _In_ DWORD cbIn);
HRESULT
ceDecodeCertString(
    _In_ BSTR const bstrIn,
    _In_ DWORD Flags,
    _Outptr_result_bytebuffer_(*pcbOut) BYTE **ppbOut,
    _Out_ DWORD *pcbOut);
HRESULT
ceEncodeCertString(
    _In_reads_bytes_(cbIn) BYTE const *pbIn,
    _In_ DWORD cbIn,
    _In_ DWORD Flags,
    _Outptr_ BSTR *pbstrOut);
WCHAR *
ceDuplicateString(
    IN WCHAR const *pwsz);
HRESULT
ceDupString(
    IN WCHAR const *pwszIn,
    _Outptr_ PWSTR *ppwszOut);
BOOL
ceConvertWszToSz(
    _Outptr_ PSTR *ppsz,
    IN WCHAR const *pwc,
    IN LONG cb);
BOOL
ceConvertWszToBstr(
    OUT BSTR *pbstr,
    IN WCHAR const *pwc,
    IN LONG cb);
BOOL
ceConvertSzToWsz(
    _Outptr_ PWSTR *ppwsz,
    IN char const *pch,
    IN LONG cch);
BOOL
ceConvertSzToBstr(
    OUT BSTR *pbstr,
    IN CHAR const *pch,
    IN LONG cch);
HRESULT
ceDateToFileTime(
    IN DATE const *pDate,
    OUT FILETIME *pft);
HRESULT
ceFileTimeToDate(
    IN FILETIME const *pft,
    OUT DATE *pDate);
HRESULT
ceVerifyObjIdA(
    IN char const *pszObjId);
HRESULT
ceVerifyObjId(
    IN WCHAR const *pwszObjId);
HRESULT
ceVerifyAndConvertWszToSzObjIds(
    _In_opt_ CSPZZWSTR ppwszObjIds,
   _Out_ DWORD* pdwcObjIds,
    _Outptr_ PZPSTR *pppszObjIds);
HRESULT
ceVerifyAltNameString(
    IN LONG NameChoice,
    IN BSTR strName);
HRESULT
ceDispatchSetErrorInfo(
    IN HRESULT hrError,
    IN WCHAR const *pwszDescription,
    OPTIONAL IN WCHAR const *pwszProgId,
    OPTIONAL IN IID const *piid);
VOID
ceDispatchClearErrorInfo(VOID);
VOID
ceInitErrorMessageText(
    IN HMODULE hMod,
    IN DWORD idsUnexpected,
    IN DWORD idsUnknownErrorCode);
WCHAR const *
ceGetErrorMessageText(
    IN HRESULT hr,
    IN BOOL fHResultString);
WCHAR const *
ceGetErrorMessageTextEx(
    IN HRESULT hr,
    IN BOOL fHResultString,
    IN OPTIONAL WCHAR const * const *papwszInsertionText);
WCHAR const *
ceHResultToString(
    _Inout_ PWSTR awchr,
    IN HRESULT hr);
HRESULT
ceFormatCertsrvStringArray(
    IN BOOL fURL,
    IN LPCWSTR pwszServerName_p1_2,
    IN LPCWSTR pwszSanitizedName_p3_7,
    IN DWORD iCert_p4,
    IN DWORD iCertTarget_p4,
    IN LPCWSTR pwszDomainDN_p5,
    IN LPCWSTR pwszConfigDN_p6,
    IN DWORD iCRL_p8,
    IN BOOL fDeltaCRL_p9,
    IN BOOL fDSAttrib_p10_11,
    IN DWORD cStrings,
    IN LPCWSTR *apwszStringsIn,
    _Outptr_ LPWSTR *apwszStringsOut);
HRESULT
ceBuildPathAndExt(
    IN WCHAR const *pwszDir,
    IN WCHAR const *pwszFile,
    OPTIONAL IN WCHAR const *pwszExt,
    _Outptr_ PWSTR *ppwszPath);
HRESULT
ceInternetCanonicalizeUrl(
    IN WCHAR const *pwszIn,
    _Outptr_ PWSTR *ppwszOut);
int
ceWtoI(
    IN WCHAR const *pwszDigitString,
    OUT BOOL *pfValid);
int
celstrcmpiL(
    IN WCHAR const *pwsz1,
    IN WCHAR const *pwsz2);
HRESULT
ceIsConfigLocal(
    _In_ PCWSTR pwszConfig,
    _Outptr_opt_ PCWSTR *ppwszMachine,
    _Out_ BOOL *pfLocal);
#endif
#pragma endregion
