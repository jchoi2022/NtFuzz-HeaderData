#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <SpecStrings.h>
#include <objbase.h>
#include <shtypes.h>
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <pshpack8.h>
typedef interface IBindCtx IBindCtx;
extern "C" {
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LWSTDAPI_(PCSTR) StrChrA(_In_ PCSTR pszStart, WORD wMatch);
LWSTDAPI_(PCWSTR) StrChrW(_In_ PCWSTR pszStart, WCHAR wMatch);
LWSTDAPI_(PCSTR) StrChrIA(_In_ PCSTR pszStart, WORD wMatch);
LWSTDAPI_(PCWSTR) StrChrIW(_In_ PCWSTR pszStart, WCHAR wMatch);
LWSTDAPI_(PCWSTR) StrChrNW(_In_ PCWSTR pszStart, WCHAR wMatch, UINT cchMax);
LWSTDAPI_(PCWSTR) StrChrNIW(_In_ PCWSTR pszStart, WCHAR wMatch, UINT cchMax);
LWSTDAPI_(int) StrCmpNA(_In_ PCSTR psz1, _In_ PCSTR psz2, int nChar);
LWSTDAPI_(int) StrCmpNW(_In_ PCWSTR psz1, _In_ PCWSTR psz2, int nChar);
LWSTDAPI_(int) StrCmpNIA(_In_ PCSTR psz1, _In_ PCSTR psz2, int nChar);
LWSTDAPI_(int) StrCmpNIW(_In_ PCWSTR psz1, _In_ PCWSTR psz2, int nChar);
LWSTDAPI_(int) StrCSpnA(_In_ PCSTR pszStr, _In_ PCSTR pszSet);
LWSTDAPI_(int) StrCSpnW(_In_ PCWSTR pszStr, _In_ PCWSTR pszSet);
LWSTDAPI_(int) StrCSpnIA(_In_ PCSTR pszStr, _In_ PCSTR pszSet);
LWSTDAPI_(int) StrCSpnIW(_In_ PCWSTR pszStr, _In_ PCWSTR pszSet);
LWSTDAPI_(PSTR) StrDupA(_In_ PCSTR pszSrch);
LWSTDAPI_(PWSTR) StrDupW(_In_ PCWSTR pszSrch);
enum tagSFBS_FLAGS
{
    SFBS_FLAGS_ROUND_TO_NEAREST_DISPLAYED_DIGIT = 0x0001,
    SFBS_FLAGS_TRUNCATE_UNDISPLAYED_DECIMAL_DIGITS = 0x0002,
};
typedef int SFBS_FLAGS;
LWSTDAPI StrFormatByteSizeEx(ULONGLONG ull, SFBS_FLAGS flags, _Out_writes_(cchBuf) PWSTR pszBuf, _In_range_(>,0) UINT cchBuf);
LWSTDAPI_(PSTR) StrFormatByteSizeA(DWORD dw, _Out_writes_(cchBuf) PSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PSTR) StrFormatByteSize64A(LONGLONG qdw, _Out_writes_(cchBuf) PSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PWSTR) StrFormatByteSizeW(LONGLONG qdw, _Out_writes_(cchBuf) PWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PWSTR) StrFormatKBSizeW(LONGLONG qdw, _Out_writes_(cchBuf) PWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PSTR) StrFormatKBSizeA(LONGLONG qdw, _Out_writes_(cchBuf) PSTR pszBuf, UINT cchBuf);
LWSTDAPI_(int) StrFromTimeIntervalA(_Out_writes_(cchMax) PSTR pszOut, UINT cchMax, DWORD dwTimeMS, int digits);
LWSTDAPI_(int) StrFromTimeIntervalW(_Out_writes_(cchMax) PWSTR pszOut, UINT cchMax, DWORD dwTimeMS, int digits);
LWSTDAPI_(BOOL) StrIsIntlEqualA(BOOL fCaseSens, _In_ PCSTR pszString1, _In_ PCSTR pszString2, int nChar);
LWSTDAPI_(BOOL) StrIsIntlEqualW(BOOL fCaseSens, _In_ PCWSTR pszString1, _In_ PCWSTR pszString2, int nChar);
LWSTDAPI_(PSTR) StrNCatA(_Inout_updates_(cchMax) PSTR psz1, PCSTR psz2, int cchMax);
LWSTDAPI_(PWSTR) StrNCatW(_Inout_updates_(cchMax) PWSTR psz1, PCWSTR psz2, int cchMax);
LWSTDAPI_(PCSTR) StrPBrkA(_In_ PCSTR psz, _In_ PCSTR pszSet);
LWSTDAPI_(PCWSTR) StrPBrkW(_In_ PCWSTR psz, _In_ PCWSTR pszSet);
LWSTDAPI_(PCSTR) StrRChrA(_In_ PCSTR pszStart, _In_opt_ PCSTR pszEnd, WORD wMatch);
LWSTDAPI_(PCWSTR) StrRChrW(_In_ PCWSTR pszStart, _In_opt_ PCWSTR pszEnd, WCHAR wMatch);
LWSTDAPI_(PCSTR) StrRChrIA(_In_ PCSTR pszStart, _In_opt_ PCSTR pszEnd, WORD wMatch);
LWSTDAPI_(PCWSTR) StrRChrIW(_In_ PCWSTR pszStart, _In_opt_ PCWSTR pszEnd, WCHAR wMatch);
LWSTDAPI_(PCSTR) StrRStrIA(_In_ PCSTR pszSource, _In_opt_ PCSTR pszLast, _In_ PCSTR pszSrch);
LWSTDAPI_(PCWSTR) StrRStrIW(_In_ PCWSTR pszSource, _In_opt_ PCWSTR pszLast, _In_ PCWSTR pszSrch);
LWSTDAPI_(int) StrSpnA(_In_ PCSTR psz, _In_ PCSTR pszSet);
LWSTDAPI_(int) StrSpnW(_In_ PCWSTR psz, _In_ PCWSTR pszSet);
LWSTDAPI_(PCSTR) StrStrA(_In_ PCSTR pszFirst, _In_ PCSTR pszSrch);
LWSTDAPI_(PCWSTR) StrStrW(_In_ PCWSTR pszFirst, _In_ PCWSTR pszSrch);
LWSTDAPI_(PCSTR) StrStrIA(_In_ PCSTR pszFirst, _In_ PCSTR pszSrch);
LWSTDAPI_(PCWSTR) StrStrIW(_In_ PCWSTR pszFirst, _In_ PCWSTR pszSrch);
LWSTDAPI_(PCWSTR) StrStrNW(_In_ PCWSTR pszFirst, _In_ PCWSTR pszSrch, UINT cchMax);
LWSTDAPI_(PCWSTR) StrStrNIW(_In_ PCWSTR pszFirst, _In_ PCWSTR pszSrch, UINT cchMax);
typedef int STIF_FLAGS;
LWSTDAPI_(int) StrToIntA(_In_ PCSTR pszSrc);
LWSTDAPI_(int) StrToIntW(_In_ PCWSTR pszSrc);
LWSTDAPI_(BOOL) StrToIntExA(_In_ PCSTR pszString, STIF_FLAGS dwFlags, _Out_ int * piRet);
LWSTDAPI_(BOOL) StrToIntExW(_In_ PCWSTR pszString, STIF_FLAGS dwFlags, _Out_ int * piRet);
LWSTDAPI_(BOOL) StrToInt64ExA(_In_ PCSTR pszString, STIF_FLAGS dwFlags, _Out_ LONGLONG * pllRet);
LWSTDAPI_(BOOL) StrToInt64ExW(_In_ PCWSTR pszString, STIF_FLAGS dwFlags, _Out_ LONGLONG * pllRet);
LWSTDAPI_(BOOL) StrTrimA(_Inout_ PSTR psz, _In_ PCSTR pszTrimChars);
LWSTDAPI_(BOOL) StrTrimW(_Inout_ PWSTR psz, _In_ PCWSTR pszTrimChars);
LWSTDAPI_(PWSTR) StrCatW(_Inout_ PWSTR psz1, _In_ PCWSTR psz2);
LWSTDAPI_(int) StrCmpW(_In_ PCWSTR psz1, _In_ PCWSTR psz2);
LWSTDAPI_(int) StrCmpIW(_In_ PCWSTR psz1, _In_ PCWSTR psz2);
LWSTDAPI_(PWSTR) StrCpyW(_Out_ PWSTR psz1, _In_ PCWSTR psz2);
LWSTDAPI_(PWSTR) StrCpyNW(_Out_writes_(cchMax) PWSTR pszDst, _In_ PCWSTR pszSrc, int cchMax);
LWSTDAPI_(PWSTR) StrCatBuffW(_Inout_updates_(cchDestBuffSize) PWSTR pszDest, _In_ PCWSTR pszSrc, int cchDestBuffSize);
LWSTDAPI_(PSTR) StrCatBuffA(_Inout_updates_(cchDestBuffSize) PSTR pszDest, _In_ PCSTR pszSrc, int cchDestBuffSize);
LWSTDAPI_(BOOL) ChrCmpIA(WORD w1, WORD w2);
LWSTDAPI_(BOOL) ChrCmpIW(WCHAR w1, WCHAR w2);
LWSTDAPI_(int) wvnsprintfA(_Out_writes_(cchDest) PSTR pszDest, _In_ int cchDest, _In_ _Printf_format_string_ PCSTR pszFmt, _In_ va_list arglist);
LWSTDAPI_(int) wvnsprintfW(_Out_writes_(cchDest) PWSTR pszDest, _In_ int cchDest, _In_ _Printf_format_string_ PCWSTR pszFmt, _In_ va_list arglist);
LWSTDAPIV_(int) wnsprintfA(_Out_writes_(cchDest) PSTR pszDest, _In_ int cchDest, _In_ _Printf_format_string_ PCSTR pszFmt, ...);
LWSTDAPIV_(int) wnsprintfW(_Out_writes_(cchDest) PWSTR pszDest, _In_ int cchDest, _In_ _Printf_format_string_ PCWSTR pszFmt, ...);
LWSTDAPI StrRetToStrA(_Inout_ STRRET *pstr, _In_opt_ PCUITEMID_CHILD pidl, _Outptr_ LPSTR *ppsz);
LWSTDAPI StrRetToStrW(_Inout_ STRRET *pstr, _In_opt_ PCUITEMID_CHILD pidl, _Outptr_ LPWSTR *ppsz);
LWSTDAPI StrRetToBufA(_Inout_ STRRET *pstr, _In_opt_ PCUITEMID_CHILD pidl, _Out_writes_(cchBuf) LPSTR pszBuf, UINT cchBuf);
LWSTDAPI StrRetToBufW(_Inout_ STRRET *pstr, _In_opt_ PCUITEMID_CHILD pidl, _Out_writes_(cchBuf) LPWSTR pszBuf, UINT cchBuf);
LWSTDAPI SHStrDupA(_In_ LPCSTR psz, _Outptr_result_nullonfailure_ LPWSTR *ppwsz);
LWSTDAPI SHStrDupW(_In_ LPCWSTR psz, _Outptr_result_nullonfailure_ LPWSTR *ppwsz);
#pragma warning(push)
#pragma warning(disable:6387)
inline HRESULT SHLocalStrDupW(_In_ PCWSTR psz, _Outptr_result_maybenull_ PWSTR *ppsz)
{
    *ppsz = StrDupW(psz);
    return *ppsz ? S_OK : E_OUTOFMEMORY;
}
inline HRESULT SHLocalStrDupA(_In_ PCSTR psz, _Outptr_result_maybenull_ PSTR *ppsz)
{
    *ppsz = StrDupA(psz);
    return *ppsz ? S_OK : E_OUTOFMEMORY;
}
#pragma warning(pop)
LWSTDAPI_(int) StrCmpLogicalW(_In_ PCWSTR psz1, _In_ PCWSTR psz2);
LWSTDAPI_(DWORD) StrCatChainW(_Out_writes_(cchDst) PWSTR pszDst, DWORD cchDst, DWORD ichAt, _In_ PCWSTR pszSrc);
LWSTDAPI StrRetToBSTR(_Inout_ STRRET *pstr, _In_opt_ PCUITEMID_CHILD pidl, _Outptr_ BSTR *pbstr);
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
LWSTDAPI SHLoadIndirectString(_In_ PCWSTR pszSource, _Out_writes_(cchOutBuf) PWSTR pszOutBuf, _In_ UINT cchOutBuf, _Reserved_ void **ppvReserved);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LWSTDAPI_(BOOL) IsCharSpaceA(CHAR wch);
LWSTDAPI_(BOOL) IsCharSpaceW(WCHAR wch);
LWSTDAPI_(int) StrCmpCA(_In_ LPCSTR pszStr1, _In_ LPCSTR pszStr2);
LWSTDAPI_(int) StrCmpCW(_In_ LPCWSTR pszStr1, _In_ LPCWSTR pszStr2);
LWSTDAPI_(int) StrCmpICA(_In_ LPCSTR pszStr1, _In_ LPCSTR pszStr2);
LWSTDAPI_(int) StrCmpICW(_In_ LPCWSTR pszStr1, _In_ LPCWSTR pszStr2);
LWSTDAPI_(int) StrCmpNCA(_In_ LPCSTR pszStr1, _In_ LPCSTR pszStr2, int nChar);
LWSTDAPI_(int) StrCmpNCW(_In_ LPCWSTR pszStr1, _In_ LPCWSTR pszStr2, int nChar);
LWSTDAPI_(int) StrCmpNICA(_In_ LPCSTR pszStr1, _In_ LPCSTR pszStr2, int nChar);
LWSTDAPI_(int) StrCmpNICW(_In_ LPCWSTR pszStr1, _In_ LPCWSTR pszStr2, int nChar);
LWSTDAPI_(BOOL) IntlStrEqWorkerA(BOOL fCaseSens, _In_reads_(nChar) LPCSTR lpString1, _In_reads_(nChar) LPCSTR lpString2, int nChar);
LWSTDAPI_(BOOL) IntlStrEqWorkerW(BOOL fCaseSens, _In_reads_(nChar) LPCWSTR lpString1, _In_reads_(nChar) LPCWSTR lpString2, int nChar);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LWSTDAPI_(LPSTR) PathAddBackslashA(_Inout_updates_(MAX_PATH) LPSTR pszPath);
LWSTDAPI_(LPWSTR) PathAddBackslashW(_Inout_updates_(MAX_PATH) LPWSTR pszPath);
LWSTDAPI_(BOOL) PathAddExtensionA(_Inout_updates_(MAX_PATH) LPSTR pszPath, _In_opt_ LPCSTR pszExt);
LWSTDAPI_(BOOL) PathAddExtensionW(_Inout_updates_(MAX_PATH) LPWSTR pszPath, _In_opt_ LPCWSTR pszExt);
LWSTDAPI_(BOOL) PathAppendA(_Inout_updates_(MAX_PATH) LPSTR pszPath, _In_ LPCSTR pszMore);
LWSTDAPI_(BOOL) PathAppendW(_Inout_updates_(MAX_PATH) LPWSTR pszPath, _In_ LPCWSTR pszMore);
LWSTDAPI_(LPSTR) PathBuildRootA(_Out_writes_(4) LPSTR pszRoot, int iDrive);
LWSTDAPI_(LPWSTR) PathBuildRootW(_Out_writes_(4) LPWSTR pszRoot, int iDrive);
LWSTDAPI_(BOOL) PathCanonicalizeA(_Out_writes_(MAX_PATH) LPSTR pszBuf, _In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathCanonicalizeW(_Out_writes_(MAX_PATH) LPWSTR pszBuf, _In_ LPCWSTR pszPath);
LWSTDAPI_(LPSTR) PathCombineA(_Out_writes_(MAX_PATH) LPSTR pszDest, _In_opt_ LPCSTR pszDir, _In_opt_ LPCSTR pszFile);
LWSTDAPI_(LPWSTR) PathCombineW(_Out_writes_(MAX_PATH) LPWSTR pszDest, _In_opt_ LPCWSTR pszDir, _In_opt_ LPCWSTR pszFile);
LWSTDAPI_(BOOL) PathCompactPathA(_In_opt_ HDC hDC, _Inout_updates_(MAX_PATH) LPSTR pszPath, _In_ UINT dx);
LWSTDAPI_(BOOL) PathCompactPathW(_In_opt_ HDC hDC, _Inout_updates_(MAX_PATH) LPWSTR pszPath, _In_ UINT dx);
LWSTDAPI_(BOOL) PathCompactPathExA(_Out_writes_(cchMax) LPSTR pszOut, _In_ LPCSTR pszSrc, _In_ UINT cchMax, _In_ DWORD dwFlags);
LWSTDAPI_(BOOL) PathCompactPathExW(_Out_writes_(cchMax) LPWSTR pszOut, _In_ LPCWSTR pszSrc, _In_ UINT cchMax, _In_ DWORD dwFlags);
LWSTDAPI_(int) PathCommonPrefixA(_In_ LPCSTR pszFile1, _In_ LPCSTR pszFile2, _Out_writes_opt_(MAX_PATH) LPSTR achPath);
LWSTDAPI_(int) PathCommonPrefixW(_In_ LPCWSTR pszFile1, _In_ LPCWSTR pszFile2, _Out_writes_opt_(MAX_PATH) LPWSTR achPath);
LWSTDAPI_(BOOL) PathFileExistsA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathFileExistsW(_In_ LPCWSTR pszPath);
LWSTDAPI_(LPCSTR) PathFindExtensionA(_In_ LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathFindExtensionW(_In_ LPCWSTR pszPath);
LWSTDAPI_(LPCSTR) PathFindFileNameA(_In_ LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathFindFileNameW(_In_ LPCWSTR pszPath);
LWSTDAPI_(LPCSTR) PathFindNextComponentA(_In_ LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathFindNextComponentW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathFindOnPathA(_Inout_updates_(MAX_PATH) LPSTR pszPath, _In_opt_ PZPCSTR ppszOtherDirs);
LWSTDAPI_(BOOL) PathFindOnPathW(_Inout_updates_(MAX_PATH) LPWSTR pszPath, _In_opt_ PZPCWSTR ppszOtherDirs);
LWSTDAPI_(LPCSTR) PathFindSuffixArrayA(_In_ LPCSTR pszPath, _In_reads_(iArraySize) const LPCSTR *apszSuffix, _In_ int iArraySize);
LWSTDAPI_(LPCWSTR) PathFindSuffixArrayW(_In_ LPCWSTR pszPath, _In_reads_(iArraySize) const LPCWSTR *apszSuffix, _In_ int iArraySize);
LWSTDAPI_(LPCSTR) PathGetArgsA(_In_ LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathGetArgsW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsLFNFileSpecA(_In_ LPCSTR pszName);
LWSTDAPI_(BOOL) PathIsLFNFileSpecW(_In_ LPCWSTR pszName);
LWSTDAPI_(UINT) PathGetCharTypeA(_In_ UCHAR ch);
LWSTDAPI_(UINT) PathGetCharTypeW(_In_ WCHAR ch);
LWSTDAPI_(int) PathGetDriveNumberA(_In_ LPCSTR pszPath);
LWSTDAPI_(int) PathGetDriveNumberW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsDirectoryA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsDirectoryW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsDirectoryEmptyA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsDirectoryEmptyW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsFileSpecA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsFileSpecW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsPrefixA(_In_ LPCSTR pszPrefix, _In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsPrefixW(_In_ LPCWSTR pszPrefix, _In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsRelativeA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsRelativeW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsRootA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsRootW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsSameRootA(_In_ LPCSTR pszPath1, _In_ LPCSTR pszPath2);
LWSTDAPI_(BOOL) PathIsSameRootW(_In_ LPCWSTR pszPath1, _In_ LPCWSTR pszPath2);
LWSTDAPI_(BOOL) PathIsUNCA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsNetworkPathA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsNetworkPathW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCServerA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCServerW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCServerShareA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCServerShareW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsContentTypeA(_In_ LPCSTR pszPath, _In_ LPCSTR pszContentType);
LWSTDAPI_(BOOL) PathIsContentTypeW(_In_ LPCWSTR pszPath, _In_ LPCWSTR pszContentType);
LWSTDAPI_(BOOL) PathIsURLA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsURLW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathMakePrettyA(_Inout_ LPSTR pszPath);
LWSTDAPI_(BOOL) PathMakePrettyW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(BOOL) PathMatchSpecA(_In_ LPCSTR pszFile, _In_ LPCSTR pszSpec);
LWSTDAPI_(BOOL) PathMatchSpecW(_In_ LPCWSTR pszFile, _In_ LPCWSTR pszSpec);
LWSTDAPI PathMatchSpecExA(_In_ LPCSTR pszFile, _In_ LPCSTR pszSpec, _In_ DWORD dwFlags);
LWSTDAPI PathMatchSpecExW(_In_ LPCWSTR pszFile, _In_ LPCWSTR pszSpec, _In_ DWORD dwFlags);
LWSTDAPI_(int) PathParseIconLocationA(_Inout_ LPSTR pszIconFile);
LWSTDAPI_(int) PathParseIconLocationW(_Inout_ LPWSTR pszIconFile);
LWSTDAPI_(BOOL) PathQuoteSpacesA(_Inout_updates_(MAX_PATH) LPSTR lpsz);
LWSTDAPI_(BOOL) PathQuoteSpacesW(_Inout_updates_(MAX_PATH) LPWSTR lpsz);
LWSTDAPI_(BOOL) PathRelativePathToA(_Out_writes_(MAX_PATH) LPSTR pszPath, _In_ LPCSTR pszFrom, _In_ DWORD dwAttrFrom, _In_ LPCSTR pszTo, _In_ DWORD dwAttrTo);
LWSTDAPI_(BOOL) PathRelativePathToW(_Out_writes_(MAX_PATH) LPWSTR pszPath, _In_ LPCWSTR pszFrom, _In_ DWORD dwAttrFrom, _In_ LPCWSTR pszTo, _In_ DWORD dwAttrTo);
LWSTDAPI_(void) PathRemoveArgsA(_Inout_ LPSTR pszPath);
LWSTDAPI_(void) PathRemoveArgsW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(LPSTR) PathRemoveBackslashA(_Inout_ LPSTR pszPath);
LWSTDAPI_(LPWSTR) PathRemoveBackslashW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(void) PathRemoveBlanksA(_Inout_ LPSTR pszPath);
LWSTDAPI_(void) PathRemoveBlanksW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(void) PathRemoveExtensionA(_Inout_ LPSTR pszPath);
LWSTDAPI_(void) PathRemoveExtensionW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(BOOL) PathRemoveFileSpecA(_Inout_ LPSTR pszPath);
LWSTDAPI_(BOOL) PathRemoveFileSpecW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(BOOL) PathRenameExtensionA(_Inout_updates_(MAX_PATH) LPSTR pszPath, _In_ LPCSTR pszExt);
LWSTDAPI_(BOOL) PathRenameExtensionW(_Inout_updates_(MAX_PATH) LPWSTR pszPath, _In_ LPCWSTR pszExt);
LWSTDAPI_(BOOL) PathSearchAndQualifyA(_In_ LPCSTR pszPath, _Out_writes_(cchBuf) LPSTR pszBuf, _In_ UINT cchBuf);
LWSTDAPI_(BOOL) PathSearchAndQualifyW(_In_ LPCWSTR pszPath, _Out_writes_(cchBuf) LPWSTR pszBuf, _In_ UINT cchBuf);
LWSTDAPI_(void) PathSetDlgItemPathA(_In_ HWND hDlg, int id, LPCSTR pszPath);
LWSTDAPI_(void) PathSetDlgItemPathW(_In_ HWND hDlg, int id, LPCWSTR pszPath);
LWSTDAPI_(LPCSTR) PathSkipRootA(_In_ LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathSkipRootW(_In_ LPCWSTR pszPath);
LWSTDAPI_(void) PathStripPathA(_Inout_ LPSTR pszPath);
LWSTDAPI_(void) PathStripPathW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(BOOL) PathStripToRootA(_Inout_ LPSTR pszPath);
LWSTDAPI_(BOOL) PathStripToRootW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(BOOL) PathUnquoteSpacesA(_Inout_ LPSTR lpsz);
LWSTDAPI_(BOOL) PathUnquoteSpacesW(_Inout_ LPWSTR lpsz);
LWSTDAPI_(BOOL) PathMakeSystemFolderA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathMakeSystemFolderW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathUnmakeSystemFolderA(_In_ LPCSTR pszPath);
LWSTDAPI_(BOOL) PathUnmakeSystemFolderW(_In_ LPCWSTR pszPath);
LWSTDAPI_(BOOL) PathIsSystemFolderA(_In_opt_ LPCSTR pszPath, _In_ DWORD dwAttrb);
LWSTDAPI_(BOOL) PathIsSystemFolderW(_In_opt_ LPCWSTR pszPath, _In_ DWORD dwAttrb);
LWSTDAPI_(void) PathUndecorateA(_Inout_ LPSTR pszPath);
LWSTDAPI_(void) PathUndecorateW(_Inout_ LPWSTR pszPath);
LWSTDAPI_(BOOL) PathUnExpandEnvStringsA(_In_ LPCSTR pszPath, _Out_writes_(cchBuf) LPSTR pszBuf, _In_ UINT cchBuf);
LWSTDAPI_(BOOL) PathUnExpandEnvStringsW(_In_ LPCWSTR pszPath, _Out_writes_(cchBuf) LPWSTR pszBuf, _In_ UINT cchBuf);
typedef enum
{
    URL_SCHEME_INVALID = -1,
    URL_SCHEME_UNKNOWN = 0,
    URL_SCHEME_FTP,
    URL_SCHEME_HTTP,
    URL_SCHEME_GOPHER,
    URL_SCHEME_MAILTO,
    URL_SCHEME_NEWS,
    URL_SCHEME_NNTP,
    URL_SCHEME_TELNET,
    URL_SCHEME_WAIS,
    URL_SCHEME_FILE,
    URL_SCHEME_MK,
    URL_SCHEME_HTTPS,
    URL_SCHEME_SHELL,
    URL_SCHEME_SNEWS,
    URL_SCHEME_LOCAL,
    URL_SCHEME_JAVASCRIPT,
    URL_SCHEME_VBSCRIPT,
    URL_SCHEME_ABOUT,
    URL_SCHEME_RES,
    URL_SCHEME_MSSHELLROOTED,
    URL_SCHEME_MSSHELLIDLIST,
    URL_SCHEME_MSHELP,
    URL_SCHEME_MSSHELLDEVICE,
    URL_SCHEME_WILDCARD,
    URL_SCHEME_SEARCH_MS,
    URL_SCHEME_SEARCH,
    URL_SCHEME_KNOWNFOLDER,
    URL_SCHEME_MAXVALUE,
} URL_SCHEME;
typedef enum
{
    URL_PART_NONE = 0,
    URL_PART_SCHEME = 1,
    URL_PART_HOSTNAME,
    URL_PART_USERNAME,
    URL_PART_PASSWORD,
    URL_PART_PORT,
    URL_PART_QUERY,
} URL_PART;
typedef enum
{
    URLIS_URL,
    URLIS_OPAQUE,
    URLIS_NOHISTORY,
    URLIS_FILEURL,
    URLIS_APPLIABLE,
    URLIS_DIRECTORY,
    URLIS_HASQUERY,
} URLIS;
LWSTDAPI_(int) UrlCompareA(_In_ PCSTR psz1, _In_ PCSTR psz2, BOOL fIgnoreSlash);
LWSTDAPI_(int) UrlCompareW(_In_ PCWSTR psz1, _In_ PCWSTR psz2, BOOL fIgnoreSlash);
LWSTDAPI UrlCombineA(_In_ PCSTR pszBase, _In_ PCSTR pszRelative, _Out_writes_to_opt_(*pcchCombined, *pcchCombined) PSTR pszCombined, _Inout_ DWORD *pcchCombined, DWORD dwFlags);
LWSTDAPI UrlCombineW(_In_ PCWSTR pszBase, _In_ PCWSTR pszRelative, _Out_writes_to_opt_(*pcchCombined, *pcchCombined) PWSTR pszCombined, _Inout_ DWORD *pcchCombined, DWORD dwFlags);
LWSTDAPI UrlCanonicalizeA(_In_ PCSTR pszUrl, _Out_writes_to_(*pcchCanonicalized, *pcchCanonicalized) PSTR pszCanonicalized, _Inout_ DWORD *pcchCanonicalized, DWORD dwFlags);
LWSTDAPI UrlCanonicalizeW(_In_ PCWSTR pszUrl, _Out_writes_to_(*pcchCanonicalized, *pcchCanonicalized) PWSTR pszCanonicalized, _Inout_ DWORD *pcchCanonicalized, DWORD dwFlags);
LWSTDAPI_(BOOL) UrlIsOpaqueA(_In_ PCSTR pszURL);
LWSTDAPI_(BOOL) UrlIsOpaqueW(_In_ PCWSTR pszURL);
LWSTDAPI_(BOOL) UrlIsNoHistoryA(_In_ PCSTR pszURL);
LWSTDAPI_(BOOL) UrlIsNoHistoryW(_In_ PCWSTR pszURL);
LWSTDAPI_(BOOL) UrlIsA(_In_ PCSTR pszUrl, URLIS UrlIs);
LWSTDAPI_(BOOL) UrlIsW(_In_ PCWSTR pszUrl, URLIS UrlIs);
LWSTDAPI_(LPCSTR) UrlGetLocationA(_In_ PCSTR pszURL);
LWSTDAPI_(LPCWSTR) UrlGetLocationW(_In_ PCWSTR pszURL);
LWSTDAPI UrlUnescapeA(_Inout_ PSTR pszUrl, _Out_writes_to_opt_(*pcchUnescaped, *pcchUnescaped) PSTR pszUnescaped, _Inout_opt_ DWORD *pcchUnescaped, DWORD dwFlags);
LWSTDAPI UrlUnescapeW(_Inout_ PWSTR pszUrl, _Out_writes_to_opt_(*pcchUnescaped, *pcchUnescaped) PWSTR pszUnescaped, _Inout_opt_ DWORD *pcchUnescaped, DWORD dwFlags);
LWSTDAPI UrlEscapeA(_In_ PCSTR pszUrl, _Out_writes_to_(*pcchEscaped, *pcchEscaped) PSTR pszEscaped, _Inout_ DWORD *pcchEscaped, DWORD dwFlags);
LWSTDAPI UrlEscapeW(_In_ PCWSTR pszUrl, _Out_writes_to_(*pcchEscaped, *pcchEscaped) PWSTR pszEscaped, _Inout_ DWORD *pcchEscaped, DWORD dwFlags);
LWSTDAPI UrlCreateFromPathA(_In_ PCSTR pszPath, _Out_writes_to_(*pcchUrl, *pcchUrl) PSTR pszUrl, _Inout_ DWORD *pcchUrl, DWORD dwFlags);
LWSTDAPI UrlCreateFromPathW(_In_ PCWSTR pszPath, _Out_writes_to_(*pcchUrl, *pcchUrl) PWSTR pszUrl, _Inout_ DWORD *pcchUrl, DWORD dwFlags);
LWSTDAPI PathCreateFromUrlA(_In_ PCSTR pszUrl, _Out_writes_to_(*pcchPath, *pcchPath) PSTR pszPath, _Inout_ DWORD *pcchPath, DWORD dwFlags);
LWSTDAPI PathCreateFromUrlW(_In_ PCWSTR pszUrl, _Out_writes_to_(*pcchPath, *pcchPath) PWSTR pszPath, _Inout_ DWORD *pcchPath, DWORD dwFlags);
LWSTDAPI PathCreateFromUrlAlloc(_In_ PCWSTR pszIn, _Outptr_ PWSTR *ppszOut, DWORD dwFlags);
LWSTDAPI UrlHashA(_In_ PCSTR pszUrl, _Out_writes_bytes_(cbHash) BYTE *pbHash, DWORD cbHash);
LWSTDAPI UrlHashW(_In_ PCWSTR pszUrl, _Out_writes_bytes_(cbHash) BYTE *pbHash, DWORD cbHash);
LWSTDAPI UrlGetPartW(_In_ PCWSTR pszIn, _Out_writes_(*pcchOut) PWSTR pszOut, _Inout_ DWORD *pcchOut, DWORD dwPart, DWORD dwFlags);
LWSTDAPI UrlGetPartA(_In_ PCSTR pszIn, _Out_writes_(*pcchOut) PSTR pszOut, _Inout_ DWORD *pcchOut, DWORD dwPart, DWORD dwFlags);
LWSTDAPI UrlApplySchemeA(_In_ PCSTR pszIn, _Out_writes_(*pcchOut) PSTR pszOut, _Inout_ DWORD *pcchOut, DWORD dwFlags);
LWSTDAPI UrlApplySchemeW(_In_ PCWSTR pszIn, _Out_writes_(*pcchOut) PWSTR pszOut, _Inout_ DWORD *pcchOut, DWORD dwFlags);
LWSTDAPI HashData(_In_reads_bytes_(cbData) BYTE *pbData, DWORD cbData, _Out_writes_bytes_(cbHash) BYTE *pbHash, DWORD cbHash);
LWSTDAPI UrlFixupW(_In_ PCWSTR pcszUrl, _Out_writes_(cchMax) PWSTR pszTranslatedUrl, DWORD cchMax);
typedef struct tagPARSEDURLA {
    DWORD cbSize;
    LPCSTR pszProtocol;
    UINT cchProtocol;
    LPCSTR pszSuffix;
    UINT cchSuffix;
    UINT nScheme;
    } PARSEDURLA, * PPARSEDURLA;
typedef struct tagPARSEDURLW {
    DWORD cbSize;
    LPCWSTR pszProtocol;
    UINT cchProtocol;
    LPCWSTR pszSuffix;
    UINT cchSuffix;
    UINT nScheme;
    } PARSEDURLW, * PPARSEDURLW;
typedef PARSEDURLW PARSEDURL;
typedef PPARSEDURLW PPARSEDURL;
LWSTDAPI ParseURLA(_In_ LPCSTR pcszURL, _Inout_ PARSEDURLA * ppu);
LWSTDAPI ParseURLW(_In_ LPCWSTR pcszURL, _Inout_ PARSEDURLW * ppu);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LWSTDAPI_(LSTATUS) SHDeleteEmptyKeyA(_In_ HKEY hkey, _In_opt_ LPCSTR pszSubKey);
LWSTDAPI_(LSTATUS) SHDeleteEmptyKeyW(_In_ HKEY hkey, _In_opt_ LPCWSTR pszSubKey);
LWSTDAPI_(LSTATUS) SHDeleteKeyA(_In_ HKEY hkey, _In_opt_ LPCSTR pszSubKey);
LWSTDAPI_(LSTATUS) SHDeleteKeyW(_In_ HKEY hkey, _In_opt_ LPCWSTR pszSubKey);
LWSTDAPI_(HKEY) SHRegDuplicateHKey(_In_ HKEY hkey);
LWSTDAPI_(LSTATUS) SHDeleteValueA(_In_ HKEY hkey, _In_opt_ LPCSTR pszSubKey, _In_ LPCSTR pszValue);
LWSTDAPI_(LSTATUS) SHDeleteValueW(_In_ HKEY hkey, _In_opt_ LPCWSTR pszSubKey, _In_ LPCWSTR pszValue);
LWSTDAPI_(LSTATUS) SHGetValueA(
    _In_ HKEY hkey,
    _In_opt_ LPCSTR pszSubKey,
    _In_opt_ LPCSTR pszValue,
    _Out_opt_ DWORD *pdwType,
    _Out_writes_bytes_opt_(*pcbData) void *pvData,
    _Inout_opt_ DWORD *pcbData);
LWSTDAPI_(LSTATUS) SHGetValueW(
    _In_ HKEY hkey,
    _In_opt_ LPCWSTR pszSubKey,
    _In_opt_ LPCWSTR pszValue,
    _Out_opt_ DWORD *pdwType,
    _Out_writes_bytes_opt_(*pcbData) void *pvData,
    _Inout_opt_ DWORD *pcbData);
LWSTDAPI_(LSTATUS) SHSetValueA(_In_ HKEY hkey, _In_opt_ LPCSTR pszSubKey, _In_opt_ LPCSTR pszValue, _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) LPCVOID pvData, _In_ DWORD cbData);
LWSTDAPI_(LSTATUS) SHSetValueW(_In_ HKEY hkey, _In_opt_ LPCWSTR pszSubKey, _In_opt_ LPCWSTR pszValue, _In_ DWORD dwType,
    _In_reads_bytes_opt_(cbData) LPCVOID pvData, _In_ DWORD cbData);
LWSTDAPI_(LSTATUS) SHQueryValueExA(
    _In_ HKEY hkey,
    _In_opt_ LPCSTR pszValue,
    _Reserved_ DWORD *pdwReserved,
    _Out_opt_ DWORD *pdwType,
    _Out_writes_bytes_to_opt_(*pcbData,*pcbData) void *pvData,
    _Inout_opt_ DWORD *pcbData);
LWSTDAPI_(LSTATUS) SHQueryValueExW(
    _In_ HKEY hkey,
    _In_opt_ LPCWSTR pszValue,
    _Reserved_ DWORD *pdwReserved,
    _Out_opt_ DWORD *pdwType,
    _Out_writes_bytes_to_opt_(*pcbData,*pcbData) void *pvData,
    _Inout_opt_ DWORD *pcbData);
LWSTDAPI_(LSTATUS) SHEnumKeyExA(_In_ HKEY hkey, _In_ DWORD dwIndex, _Out_writes_(*pcchName) LPSTR pszName, _Inout_ LPDWORD pcchName);
LWSTDAPI_(LSTATUS) SHEnumKeyExW(_In_ HKEY hkey, _In_ DWORD dwIndex, _Out_writes_(*pcchName) LPWSTR pszName, _Inout_ LPDWORD pcchName);
LWSTDAPI_(LSTATUS) SHEnumValueA(_In_ HKEY hkey, _In_ DWORD dwIndex, _Out_writes_opt_(*pcchValueName) PSTR pszValueName,
    _Inout_opt_ LPDWORD pcchValueName, _Out_opt_ LPDWORD pdwType, _Out_writes_bytes_to_opt_(*pcbData,*pcbData) void *pvData,
    _Inout_opt_ LPDWORD pcbData);
LWSTDAPI_(LSTATUS) SHEnumValueW(_In_ HKEY hkey, _In_ DWORD dwIndex, _Out_writes_opt_(*pcchValueName) PWSTR pszValueName,
    _Inout_opt_ LPDWORD pcchValueName, _Out_opt_ LPDWORD pdwType, _Out_writes_bytes_to_opt_(*pcbData,*pcbData) void *pvData,
    _Inout_opt_ LPDWORD pcbData);
LWSTDAPI_(LSTATUS) SHQueryInfoKeyA(_In_ HKEY hkey, _Out_opt_ LPDWORD pcSubKeys, _Out_opt_ LPDWORD pcchMaxSubKeyLen, _Out_opt_ LPDWORD pcValues, _Out_opt_ LPDWORD pcchMaxValueNameLen);
LWSTDAPI_(LSTATUS) SHQueryInfoKeyW(_In_ HKEY hkey, _Out_opt_ LPDWORD pcSubKeys, _Out_opt_ LPDWORD pcchMaxSubKeyLen, _Out_opt_ LPDWORD pcValues, _Out_opt_ LPDWORD pcchMaxValueNameLen);
LWSTDAPI_(LSTATUS) SHCopyKeyA(_In_ HKEY hkeySrc, _In_opt_ LPCSTR pszSrcSubKey, _In_ HKEY hkeyDest, _Reserved_ DWORD fReserved);
LWSTDAPI_(LSTATUS) SHCopyKeyW(_In_ HKEY hkeySrc, _In_opt_ LPCWSTR pszSrcSubKey, _In_ HKEY hkeyDest, _Reserved_ DWORD fReserved);
LWSTDAPI_(LSTATUS) SHRegGetPathA(_In_ HKEY hKey, _In_opt_ LPCSTR pcszSubKey, _In_opt_ LPCSTR pcszValue, _Out_writes_(MAX_PATH) LPSTR pszPath, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegGetPathW(_In_ HKEY hKey, _In_opt_ LPCWSTR pcszSubKey, _In_opt_ LPCWSTR pcszValue, _Out_writes_(MAX_PATH) LPWSTR pszPath, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegSetPathA(_In_ HKEY hKey, _In_opt_ LPCSTR pcszSubKey, _In_opt_ LPCSTR pcszValue, _In_ LPCSTR pcszPath, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegSetPathW(_In_ HKEY hKey, _In_opt_ LPCWSTR pcszSubKey, _In_opt_ LPCWSTR pcszValue, _In_ LPCWSTR pcszPath, _In_ DWORD dwFlags);
typedef enum
{
    SHREGDEL_DEFAULT = 0x00000000,
    SHREGDEL_HKCU = 0x00000001,
    SHREGDEL_HKLM = 0x00000010,
    SHREGDEL_BOTH = 0x00000011,
} SHREGDEL_FLAGS;
typedef enum
{
    SHREGENUM_DEFAULT = 0x00000000,
    SHREGENUM_HKCU = 0x00000001,
    SHREGENUM_HKLM = 0x00000010,
    SHREGENUM_BOTH = 0x00000011,
} SHREGENUM_FLAGS;
typedef HANDLE HUSKEY;
typedef HUSKEY *PHUSKEY;
LWSTDAPI_(LSTATUS) SHRegCreateUSKeyA(_In_ LPCSTR pszPath, _In_ REGSAM samDesired, _In_opt_ HUSKEY hRelativeUSKey, _Out_ PHUSKEY phNewUSKey, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegCreateUSKeyW(_In_ LPCWSTR pwzPath, _In_ REGSAM samDesired, _In_opt_ HUSKEY hRelativeUSKey, _Out_ PHUSKEY phNewUSKey, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegOpenUSKeyA(_In_ LPCSTR pszPath, _In_ REGSAM samDesired, _In_opt_ HUSKEY hRelativeUSKey, _Out_ PHUSKEY phNewUSKey, _In_ BOOL fIgnoreHKCU);
LWSTDAPI_(LSTATUS) SHRegOpenUSKeyW(_In_ LPCWSTR pwzPath, _In_ REGSAM samDesired, _In_opt_ HUSKEY hRelativeUSKey, _Out_ PHUSKEY phNewUSKey, _In_ BOOL fIgnoreHKCU);
LWSTDAPI_(LSTATUS) SHRegQueryUSValueA(
    _In_ HUSKEY hUSKey,
    _In_opt_ LPCSTR pszValue,
    _Inout_opt_ DWORD * pdwType,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void * pvData,
    _Inout_opt_ DWORD * pcbData,
    _In_ BOOL fIgnoreHKCU,
    _In_reads_bytes_opt_(dwDefaultDataSize) void * pvDefaultData,
    _In_opt_ DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS) SHRegQueryUSValueW(
    _In_ HUSKEY hUSKey,
    _In_opt_ LPCWSTR pszValue,
    _Inout_opt_ DWORD * pdwType,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void * pvData,
    _Inout_opt_ DWORD * pcbData,
    _In_ BOOL fIgnoreHKCU,
    _In_reads_bytes_opt_(dwDefaultDataSize) void * pvDefaultData,
    _In_opt_ DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS) SHRegWriteUSValueA(_In_ HUSKEY hUSKey, _In_ LPCSTR pszValue, _In_ DWORD dwType, _In_reads_bytes_(cbData) const void *pvData, _In_ DWORD cbData, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegWriteUSValueW(_In_ HUSKEY hUSKey, _In_ LPCWSTR pwzValue, _In_ DWORD dwType, _In_reads_bytes_(cbData) const void *pvData, _In_ DWORD cbData, _In_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteUSValueA(_In_ HUSKEY hUSKey, _In_ LPCSTR pszValue, _In_ SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteUSValueW(_In_ HUSKEY hUSKey, _In_ LPCWSTR pwzValue, _In_ SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteEmptyUSKeyW(_In_ HUSKEY hUSKey, _In_ LPCWSTR pwzSubKey, _In_ SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteEmptyUSKeyA(_In_ HUSKEY hUSKey, _In_ LPCSTR pszSubKey, _In_ SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSKeyA(_In_ HUSKEY hUSKey, _In_ DWORD dwIndex, _Out_writes_to_(*pcchName,*pcchName) LPSTR pszName, _Inout_ LPDWORD pcchName, _In_ SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSKeyW(_In_ HUSKEY hUSKey, _In_ DWORD dwIndex, _Out_writes_to_(*pcchName,*pcchName) LPWSTR pwzName, _Inout_ LPDWORD pcchName, _In_ SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSValueA(_In_ HUSKEY hUSkey, _In_ DWORD dwIndex,
    _Out_writes_to_(*pcchValueName,*pcchValueName) LPSTR pszValueName, _Inout_ LPDWORD pcchValueName, _Out_opt_ LPDWORD pdwType,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData, _Inout_opt_ LPDWORD pcbData, _In_ SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSValueW(_In_ HUSKEY hUSkey, _In_ DWORD dwIndex,
    _Out_writes_to_(*pcchValueName,*pcchValueName) LPWSTR pszValueName, _Inout_ LPDWORD pcchValueName, _Out_opt_ LPDWORD pdwType,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData, _Inout_opt_ LPDWORD pcbData, _In_ SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegQueryInfoUSKeyA(_In_ HUSKEY hUSKey, _Out_opt_ LPDWORD pcSubKeys, _Out_opt_ LPDWORD pcchMaxSubKeyLen, _Out_opt_ LPDWORD pcValues, _Out_opt_ LPDWORD pcchMaxValueNameLen, _In_ SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegQueryInfoUSKeyW(_In_ HUSKEY hUSKey, _Out_opt_ LPDWORD pcSubKeys, _Out_opt_ LPDWORD pcchMaxSubKeyLen, _Out_opt_ LPDWORD pcValues, _Out_opt_ LPDWORD pcchMaxValueNameLen, _In_ SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegCloseUSKey(_In_ HUSKEY hUSKey);
STDAPI_(LSTATUS) SHRegGetUSValueA(
    _In_ LPCSTR pszSubKey,
    _In_opt_ LPCSTR pszValue,
    _Inout_opt_ DWORD *pdwType,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_opt_ DWORD *pcbData,
    _In_ BOOL fIgnoreHKCU,
    _In_reads_bytes_opt_(dwDefaultDataSize) void *pvDefaultData,
    _In_ DWORD dwDefaultDataSize);
STDAPI_(LSTATUS) SHRegGetUSValueW(
    _In_ LPCWSTR pszSubKey,
    _In_opt_ LPCWSTR pszValue,
    _Inout_opt_ DWORD *pdwType,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_opt_ DWORD *pcbData,
    _In_ BOOL fIgnoreHKCU,
    _In_reads_bytes_opt_(dwDefaultDataSize) void *pvDefaultData,
    _In_ DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS) SHRegSetUSValueA(_In_ LPCSTR pszSubKey, _In_ LPCSTR pszValue, _In_ DWORD dwType, _In_reads_bytes_opt_(cbData) const void *pvData, _In_opt_ DWORD cbData, _In_opt_ DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegSetUSValueW(_In_ LPCWSTR pwzSubKey, _In_ LPCWSTR pwzValue, _In_ DWORD dwType, _In_reads_bytes_opt_(cbData) const void *pvData, _In_opt_ DWORD cbData, _In_opt_ DWORD dwFlags);
LWSTDAPI_(int) SHRegGetIntW(_In_ HKEY hk, _In_opt_ PCWSTR pwzKey, _In_ int iDefault);
LWSTDAPI_(BOOL) SHRegGetBoolUSValueA(_In_ LPCSTR pszSubKey, _In_opt_ LPCSTR pszValue, _In_ BOOL fIgnoreHKCU, _In_ BOOL fDefault);
LWSTDAPI_(BOOL) SHRegGetBoolUSValueW(_In_ LPCWSTR pszSubKey, _In_opt_ LPCWSTR pszValue, _In_ BOOL fIgnoreHKCU, _In_ BOOL fDefault);
enum
{
    ASSOCF_NONE = 0x00000000,
    ASSOCF_INIT_NOREMAPCLSID = 0x00000001,
    ASSOCF_INIT_BYEXENAME = 0x00000002,
    ASSOCF_OPEN_BYEXENAME = 0x00000002,
    ASSOCF_INIT_DEFAULTTOSTAR = 0x00000004,
    ASSOCF_INIT_DEFAULTTOFOLDER = 0x00000008,
    ASSOCF_NOUSERSETTINGS = 0x00000010,
    ASSOCF_NOTRUNCATE = 0x00000020,
    ASSOCF_VERIFY = 0x00000040,
    ASSOCF_REMAPRUNDLL = 0x00000080,
    ASSOCF_NOFIXUPS = 0x00000100,
    ASSOCF_IGNOREBASECLASS = 0x00000200,
    ASSOCF_INIT_IGNOREUNKNOWN = 0x00000400,
    ASSOCF_INIT_FIXED_PROGID = 0x00000800,
    ASSOCF_IS_PROTOCOL = 0x00001000,
    ASSOCF_INIT_FOR_FILE = 0x00002000,
    ASSOCF_IS_FULL_URI = 0x00004000,
    ASSOCF_PER_MACHINE_ONLY = 0x00008000,
    ASSOCF_APP_TO_APP = 0x00010000,
};
typedef DWORD ASSOCF;
typedef enum
{
    ASSOCSTR_COMMAND = 1,
    ASSOCSTR_EXECUTABLE,
    ASSOCSTR_FRIENDLYDOCNAME,
    ASSOCSTR_FRIENDLYAPPNAME,
    ASSOCSTR_NOOPEN,
    ASSOCSTR_SHELLNEWVALUE,
    ASSOCSTR_DDECOMMAND,
    ASSOCSTR_DDEIFEXEC,
    ASSOCSTR_DDEAPPLICATION,
    ASSOCSTR_DDETOPIC,
    ASSOCSTR_INFOTIP,
    ASSOCSTR_QUICKTIP,
    ASSOCSTR_TILEINFO,
    ASSOCSTR_CONTENTTYPE,
    ASSOCSTR_DEFAULTICON,
    ASSOCSTR_SHELLEXTENSION,
    ASSOCSTR_DROPTARGET,
    ASSOCSTR_DELEGATEEXECUTE,
    ASSOCSTR_SUPPORTED_URI_PROTOCOLS,
    ASSOCSTR_PROGID,
    ASSOCSTR_APPID,
    ASSOCSTR_APPPUBLISHER,
    ASSOCSTR_APPICONREFERENCE,
    ASSOCSTR_MAX
} ASSOCSTR;
typedef enum
{
    ASSOCKEY_SHELLEXECCLASS = 1,
    ASSOCKEY_APP,
    ASSOCKEY_CLASS,
    ASSOCKEY_BASECLASS,
    ASSOCKEY_MAX
} ASSOCKEY;
typedef enum
{
    ASSOCDATA_MSIDESCRIPTOR = 1,
    ASSOCDATA_NOACTIVATEHANDLER,
    ASSOCDATA_UNUSED1,
    ASSOCDATA_HASPERUSERASSOC,
    ASSOCDATA_EDITFLAGS,
    ASSOCDATA_VALUE,
    ASSOCDATA_MAX
} ASSOCDATA;
typedef enum
{
    ASSOCENUM_NONE
} ASSOCENUM;
typedef enum
{
    FTA_None = 0x00000000,
    FTA_Exclude = 0x00000001,
    FTA_Show = 0x00000002,
    FTA_HasExtension = 0x00000004,
    FTA_NoEdit = 0x00000008,
    FTA_NoRemove = 0x00000010,
    FTA_NoNewVerb = 0x00000020,
    FTA_NoEditVerb = 0x00000040,
    FTA_NoRemoveVerb = 0x00000080,
    FTA_NoEditDesc = 0x00000100,
    FTA_NoEditIcon = 0x00000200,
    FTA_NoEditDflt = 0x00000400,
    FTA_NoEditVerbCmd = 0x00000800,
    FTA_NoEditVerbExe = 0x00001000,
    FTA_NoDDE = 0x00002000,
    FTA_NoEditMIME = 0x00008000,
    FTA_OpenIsSafe = 0x00010000,
    FTA_AlwaysUnsafe = 0x00020000,
    FTA_NoRecentDocs = 0x00100000,
    FTA_SafeForElevation = 0x00200000,
    FTA_AlwaysUseDirectInvoke = 0x00400000,
} FILETYPEATTRIBUTEFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(FILETYPEATTRIBUTEFLAGS)
DECLARE_INTERFACE_IID_( IQueryAssociations, IUnknown, "c46ca590-3c3f-11d2-bee6-0000f805ca57" )
{
    STDMETHOD (Init)(THIS_ _In_ ASSOCF flags, _In_opt_ LPCWSTR pszAssoc, _In_opt_ HKEY hkProgid, _In_opt_ HWND hwnd) PURE;
    STDMETHOD (GetString)(THIS_ _In_ ASSOCF flags, _In_ ASSOCSTR str, _In_opt_ LPCWSTR pszExtra, _Out_writes_opt_(*pcchOut) LPWSTR pszOut, _Inout_ DWORD *pcchOut) PURE;
    STDMETHOD (GetKey)(THIS_ _In_ ASSOCF flags, _In_ ASSOCKEY key, _In_opt_ LPCWSTR pszExtra, _Out_ HKEY *phkeyOut) PURE;
    STDMETHOD (GetData)(THIS_ _In_ ASSOCF flags, _In_ ASSOCDATA data, _In_opt_ LPCWSTR pszExtra, _Out_writes_bytes_opt_(*pcbOut) void * pvOut, _Inout_opt_ DWORD *pcbOut) PURE;
    STDMETHOD (GetEnum)(THIS_ _In_ ASSOCF flags, _In_ ASSOCENUM assocenum, _In_opt_ LPCWSTR pszExtra, _In_ REFIID riid, _Outptr_ void **ppvOut) PURE;
};
LWSTDAPI AssocCreate(_In_ CLSID clsid, _In_ REFIID riid, _Outptr_ void **ppv);
STDAPI_(DWORD) SHGetAssocKeys(_In_ IQueryAssociations *pqa, _Out_writes_to_(cKeys, return) HKEY *rgKeys, DWORD cKeys);
LWSTDAPI AssocQueryStringA(_In_ ASSOCF flags, _In_ ASSOCSTR str, _In_ LPCSTR pszAssoc, _In_opt_ LPCSTR pszExtra, _Out_writes_opt_(*pcchOut) LPSTR pszOut, _Inout_ DWORD *pcchOut);
LWSTDAPI AssocQueryStringW(_In_ ASSOCF flags, _In_ ASSOCSTR str, _In_ LPCWSTR pszAssoc, _In_opt_ LPCWSTR pszExtra, _Out_writes_opt_(*pcchOut) LPWSTR pszOut, _Inout_ DWORD *pcchOut);
LWSTDAPI AssocQueryStringByKeyA(_In_ ASSOCF flags, _In_ ASSOCSTR str, _In_ HKEY hkAssoc, _In_opt_ LPCSTR pszExtra, _Out_writes_opt_(*pcchOut) LPSTR pszOut, _Inout_ DWORD *pcchOut);
LWSTDAPI AssocQueryStringByKeyW(_In_ ASSOCF flags, _In_ ASSOCSTR str, _In_ HKEY hkAssoc, _In_opt_ LPCWSTR pszExtra, _Out_writes_opt_(*pcchOut) LPWSTR pszOut, _Inout_ DWORD *pcchOut);
LWSTDAPI AssocQueryKeyA(_In_ ASSOCF flags, _In_ ASSOCKEY key, _In_ LPCSTR pszAssoc, _In_opt_ LPCSTR pszExtra, _Out_ HKEY *phkeyOut);
LWSTDAPI AssocQueryKeyW(_In_ ASSOCF flags, _In_ ASSOCKEY key, _In_ LPCWSTR pszAssoc, _In_opt_ LPCWSTR pszExtra, _Out_ HKEY *phkeyOut);
LWSTDAPI AssocGetPerceivedType(_In_ PCWSTR pszExt, _Out_ PERCEIVED *ptype, _Out_ PERCEIVEDFLAG *pflag, _Outptr_opt_ PWSTR *ppszType);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef interface IStream IStream;
LWSTDAPI_(IStream *) SHOpenRegStreamA(_In_ HKEY hkey, _In_opt_ LPCSTR pszSubkey, _In_opt_ LPCSTR pszValue, _In_ DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStreamW(_In_ HKEY hkey, _In_opt_ LPCWSTR pszSubkey, _In_opt_ LPCWSTR pszValue, _In_ DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStream2A(_In_ HKEY hkey, _In_opt_ LPCSTR pszSubkey, _In_opt_ LPCSTR pszValue, _In_ DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStream2W(_In_ HKEY hkey, _In_opt_ LPCWSTR pszSubkey, _In_opt_ LPCWSTR pszValue, _In_ DWORD grfMode);
LWSTDAPI SHCreateStreamOnFileA(_In_ LPCSTR pszFile, _In_ DWORD grfMode, _Outptr_ IStream **ppstm);
LWSTDAPI SHCreateStreamOnFileW(_In_ LPCWSTR pszFile, _In_ DWORD grfMode, _Outptr_ IStream **ppstm);
LWSTDAPI_(IStream *) SHCreateMemStream(_In_reads_bytes_opt_(cbInit) const BYTE *pInit, _In_ UINT cbInit);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    LWSTDAPI_(void) IUnknown_Set(_Inout_ IUnknown ** ppunk, _In_opt_ IUnknown * punk);
    LWSTDAPI_(void) IUnknown_AtomicRelease(_Inout_opt_ void ** ppunk);
    LWSTDAPI IUnknown_GetWindow(_In_ IUnknown* punk, _Out_ HWND* phwnd);
    LWSTDAPI IUnknown_SetSite(_In_ IUnknown *punk, _In_opt_ IUnknown *punkSite);
    LWSTDAPI IUnknown_GetSite(_In_ IUnknown *punk, _In_ REFIID riid, _Outptr_ void **ppv);
    LWSTDAPI IUnknown_QueryService(_In_opt_ IUnknown* punk, _In_ REFGUID guidService, _In_ REFIID riid, _COM_Outptr_ void ** ppvOut);
LWSTDAPI IStream_Read(_In_ IStream *pstm, _Out_writes_bytes_all_(cb) void *pv, _In_ ULONG cb);
LWSTDAPI IStream_Write(_In_ IStream *pstm, _In_reads_bytes_(cb) const void *pv, _In_ ULONG cb);
LWSTDAPI IStream_Reset(_In_ IStream *pstm);
LWSTDAPI IStream_Size(_In_ IStream *pstm, _Out_ ULARGE_INTEGER *pui);
typedef interface IConnectionPoint IConnectionPoint;
LWSTDAPI ConnectToConnectionPoint(_In_opt_ IUnknown* punk, _In_ REFIID riidEvent, BOOL fConnect, _In_ IUnknown* punkTarget, _Out_ DWORD* pdwCookie, _Outptr_opt_ IConnectionPoint** ppcpOut);
LWSTDAPI IStream_ReadPidl(_In_ IStream *pstm, _Outptr_ PIDLIST_RELATIVE *ppidlOut);
LWSTDAPI IStream_WritePidl(_In_ IStream *pstm, _In_ PCUIDLIST_RELATIVE pidlWrite);
LWSTDAPI IStream_ReadStr(_In_ IStream *pstm, _Outptr_ PWSTR *ppsz);
LWSTDAPI IStream_WriteStr(_In_ IStream *pstm, _In_ PCWSTR psz);
LWSTDAPI IStream_Copy(_In_ IStream *pstmFrom, _In_ IStream *pstmTo, DWORD cb);
LWSTDAPI_(int) SHFormatDateTimeA(_In_ const FILETIME UNALIGNED * pft, _Inout_opt_ DWORD * pdwFlags, _Out_writes_(cchBuf) LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(int) SHFormatDateTimeW(_In_ const FILETIME UNALIGNED * pft, _Inout_opt_ DWORD * pdwFlags, _Out_writes_(cchBuf) LPWSTR pszBuf, UINT cchBuf);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Success_(return > 0)
LWSTDAPI_(int) SHAnsiToUnicode(_In_ PCSTR pszSrc, _Out_writes_(cwchBuf) PWSTR pwszDst, _In_ int cwchBuf);
_Success_(return > 0)
LWSTDAPI_(int) SHAnsiToAnsi(_In_ PCSTR pszSrc, _Out_writes_(cchBuf) PSTR pszDst, _In_ int cchBuf);
_Success_(return > 0)
LWSTDAPI_(int) SHUnicodeToAnsi(_In_ PCWSTR pwszSrc, _Out_writes_(cchBuf) PSTR pszDst, _In_ int cchBuf);
_Success_(return > 0)
LWSTDAPI_(int) SHUnicodeToUnicode(_In_ PCWSTR pwzSrc, _Out_writes_(cwchBuf) PWSTR pwzDst, _In_ int cwchBuf);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LWSTDAPI_(int) SHMessageBoxCheckA(_In_opt_ HWND hwnd, _In_ LPCSTR pszText, _In_ LPCSTR pszCaption, UINT uType, int iDefault, _In_ LPCSTR pszRegVal);
LWSTDAPI_(int) SHMessageBoxCheckW(_In_opt_ HWND hwnd, _In_ LPCWSTR pszText, _In_ LPCWSTR pszCaption, UINT uType, int iDefault, _In_ LPCWSTR pszRegVal);
LWSTDAPI_(LRESULT) SHSendMessageBroadcastA(_In_ UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam);
LWSTDAPI_(LRESULT) SHSendMessageBroadcastW(_In_ UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam);
LWSTDAPI_(CHAR) SHStripMneumonicA(_Inout_ LPSTR pszMenu);
LWSTDAPI_(WCHAR) SHStripMneumonicW(_Inout_ LPWSTR pszMenu);
LWSTDAPI_(BOOL) IsOS(DWORD dwOS);
typedef enum
{
    GLOBALCOUNTER_SEARCHMANAGER,
    GLOBALCOUNTER_SEARCHOPTIONS,
    GLOBALCOUNTER_FOLDERSETTINGSCHANGE,
    GLOBALCOUNTER_RATINGS,
    GLOBALCOUNTER_APPROVEDSITES,
    GLOBALCOUNTER_RESTRICTIONS,
    GLOBALCOUNTER_SHELLSETTINGSCHANGED,
    GLOBALCOUNTER_SYSTEMPIDLCHANGE,
    GLOBALCOUNTER_OVERLAYMANAGER,
    GLOBALCOUNTER_QUERYASSOCIATIONS,
    GLOBALCOUNTER_IESESSIONS,
    GLOBALCOUNTER_IEONLY_SESSIONS,
    GLOBALCOUNTER_APPLICATION_DESTINATIONS,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_CSCSYNCINPROGRESS,
    GLOBALCOUNTER_BITBUCKETNUMDELETERS,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_SHARES,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_A,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_B,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_C,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_D,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_E,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_F,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_G,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_H,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_I,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_J,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_K,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_L,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_M,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_N,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_O,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_P,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Q,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_R,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_S,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_T,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_U,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_V,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_W,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_X,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Y,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Z,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_RECYCLEDIRTYCOUNT_SERVERDRIVE,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_RECYCLEGLOBALDIRTYCOUNT,
    GLOBALCOUNTER_RECYCLEBINENUM,
    GLOBALCOUNTER_RECYCLEBINCORRUPTED,
    GLOBALCOUNTER_RATINGS_STATECOUNTER,
    GLOBALCOUNTER_PRIVATE_PROFILE_CACHE,
    GLOBALCOUNTER_INTERNETTOOLBAR_LAYOUT,
    GLOBALCOUNTER_FOLDERDEFINITION_CACHE,
    GLOBALCOUNTER_COMMONPLACES_LIST_CACHE,
    GLOBALCOUNTER_PRIVATE_PROFILE_CACHE_MACHINEWIDE,
    GLOBALCOUNTER_ASSOCCHANGED,
    GLOBALCOUNTER_APP_ITEMS_STATE_STORE_CACHE,
    GLOBALCOUNTER_SETTINGSYNC_ENABLED,
    GLOBALCOUNTER_APPSFOLDER_FILETYPEASSOCIATION_COUNTER,
    GLOBALCOUNTER_USERINFOCHANGED,
    GLOBALCOUNTER_SYNC_ENGINE_INFORMATION_CACHE_MACHINEWIDE,
    GLOBALCOUNTER_BANNERS_DATAMODEL_CACHE_MACHINEWIDE,
    GLOBALCOUNTER_MAXIMUMVALUE
} SHGLOBALCOUNTER;
LWSTDAPI_(long) SHGlobalCounterGetValue(const SHGLOBALCOUNTER id);
LWSTDAPI_(long) SHGlobalCounterIncrement(const SHGLOBALCOUNTER id);
LWSTDAPI_(long) SHGlobalCounterDecrement(const SHGLOBALCOUNTER id);
LWSTDAPI_(UINT) WhichPlatform(void);
typedef struct
{
    const IID * piid;
    DWORD dwOffset;
} QITAB, *LPQITAB;
typedef const QITAB *LPCQITAB;
    { &__uuidof(Ifoo), OFFSETOFCLASS(Iimpl, Cthis) }
    { (IID*) &Ifoo, OFFSETOFCLASS(Iimpl, Cthis) }
STDAPI QISearch(_Inout_ void* that, _In_ LPCQITAB pqit, _In_ REFIID riid, _COM_Outptr_ void **ppv);
    #undef STATIC_CAST
    #define STATIC_CAST(typ) (typ)
    ((DWORD)(DWORD_PTR)(STATIC_CAST(base*)((derived*)8))-8)
LWSTDAPI_(BOOL) SHIsLowMemoryMachine(DWORD dwType);
LWSTDAPI_(int) GetMenuPosFromID(_In_ HMENU hmenu, UINT id);
LWSTDAPI SHGetInverseCMAP(_Out_writes_bytes_(cbMap) BYTE *pbMap, ULONG cbMap);
LWSTDAPI SHAutoComplete(_In_ HWND hwndEdit, DWORD dwFlags);
LWSTDAPI SHCreateThreadRef(_Inout_ LONG *pcRef, _Outptr_ IUnknown **ppunk);
LWSTDAPI SHSetThreadRef(_In_opt_ IUnknown *punk);
LWSTDAPI SHGetThreadRef(_COM_Outptr_ IUnknown **ppunk);
LWSTDAPI_(BOOL) SHSkipJunction(_In_opt_ IBindCtx* pbc, _In_ const CLSID *pclsid);
enum
{
    CTF_INSIST = 0x00000001,
    CTF_THREAD_REF = 0x00000002,
    CTF_PROCESS_REF = 0x00000004,
    CTF_COINIT_STA = 0x00000008,
    CTF_COINIT = 0x00000008,
    CTF_FREELIBANDEXIT = 0x00000010,
    CTF_REF_COUNTED = 0x00000020,
    CTF_WAIT_ALLOWCOM = 0x00000040,
    CTF_UNUSED = 0x00000080,
    CTF_INHERITWOW64 = 0x00000100,
    CTF_WAIT_NO_REENTRANCY = 0x00000200,
    CTF_KEYBOARD_LOCALE = 0x00000400,
    CTF_OLEINITIALIZE = 0x00000800,
    CTF_COINIT_MTA = 0x00001000,
    CTF_NOADDREFLIB = 0x00002000,
};
typedef DWORD SHCT_FLAGS;
LWSTDAPI_(BOOL) SHCreateThread(_In_ LPTHREAD_START_ROUTINE pfnThreadProc, _In_opt_ void *pData, _In_ SHCT_FLAGS flags, _In_opt_ LPTHREAD_START_ROUTINE pfnCallback);
LWSTDAPI_(BOOL) SHCreateThreadWithHandle(_In_ LPTHREAD_START_ROUTINE pfnThreadProc, _In_opt_ void *pData, _In_ SHCT_FLAGS flags, _In_opt_ LPTHREAD_START_ROUTINE pfnCallback, _Out_opt_ HANDLE *pHandle);
LWSTDAPI_(void) SetProcessReference(_In_opt_ IUnknown *punk);
LWSTDAPI GetProcessReference(_COM_Outptr_ IUnknown **punk);
LWSTDAPI SHReleaseThreadRef(void);
LWSTDAPI_(HPALETTE) SHCreateShellPalette(_In_opt_ HDC hdc);
LWSTDAPI_(void) ColorRGBToHLS(COLORREF clrRGB, _Out_ WORD* pwHue, _Out_ WORD* pwLuminance, _Out_ WORD* pwSaturation);
LWSTDAPI_(COLORREF) ColorHLSToRGB(WORD wHue, WORD wLuminance, WORD wSaturation);
LWSTDAPI_(COLORREF) ColorAdjustLuma(COLORREF clrRGB, int n, BOOL fScale);
typedef struct _DLLVERSIONINFO
{
    DWORD cbSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformID;
} DLLVERSIONINFO;
typedef struct _DLLVERSIONINFO2
{
    DLLVERSIONINFO info1;
    DWORD dwFlags;
    ULONGLONG ullVersion;
} DLLVERSIONINFO2;
        (((ULONGLONG)(major) << 48) | \
         ((ULONGLONG)(minor) << 32) | \
         ((ULONGLONG)(build) << 16) | \
         ((ULONGLONG)( qfe) << 0))
typedef HRESULT (CALLBACK* DLLGETVERSIONPROC)(DLLVERSIONINFO *);
STDAPI DllInstall(BOOL bInstall, _In_opt_ PCWSTR pszCmdLine);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#include <poppack.h>
#endif
#pragma endregion
