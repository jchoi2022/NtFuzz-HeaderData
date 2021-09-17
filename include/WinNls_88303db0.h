#include <winapifamily.h>
extern "C" {
#include <datetimeapi.h>
#include <libloaderapi.h>
       
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#include <macwin32.h>
typedef DWORD LGRPID;
typedef DWORD LCTYPE;
typedef DWORD CALTYPE;
typedef DWORD CALID;
DEPRECATED("Use Unicode. The information in this structure cannot represent all encodings accurately and may be unreliable on many machines. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[MAX_DEFAULTCHAR];
    BYTE LeadByte[MAX_LEADBYTES];
} CPINFO, *LPCPINFO;
typedef DWORD GEOTYPE;
typedef DWORD GEOCLASS;
typedef LONG GEOID;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
DEPRECATED("Use Unicode. The information in this structure cannot represent all encodings accurately and may be unreliable on many machines. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef struct _cpinfoexA {
    UINT MaxCharSize;
    BYTE DefaultChar[MAX_DEFAULTCHAR];
    BYTE LeadByte[MAX_LEADBYTES];
    WCHAR UnicodeDefaultChar;
    UINT CodePage;
    CHAR CodePageName[MAX_PATH];
} CPINFOEXA, *LPCPINFOEXA;
DEPRECATED("Use Unicode. The information in this structure cannot represent all encodings accurately and may be unreliable on many machines. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef struct _cpinfoexW {
    UINT MaxCharSize;
    BYTE DefaultChar[MAX_DEFAULTCHAR];
    BYTE LeadByte[MAX_LEADBYTES];
    WCHAR UnicodeDefaultChar;
    UINT CodePage;
    WCHAR CodePageName[MAX_PATH];
} CPINFOEXW, *LPCPINFOEXW;
typedef CPINFOEXW CPINFOEX;
typedef LPCPINFOEXW LPCPINFOEX;
typedef struct _numberfmtA {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPSTR lpDecimalSep;
    LPSTR lpThousandSep;
    UINT NegativeOrder;
} NUMBERFMTA, *LPNUMBERFMTA;
typedef struct _numberfmtW {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPWSTR lpDecimalSep;
    LPWSTR lpThousandSep;
    UINT NegativeOrder;
} NUMBERFMTW, *LPNUMBERFMTW;
typedef NUMBERFMTW NUMBERFMT;
typedef LPNUMBERFMTW LPNUMBERFMT;
typedef struct _currencyfmtA {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPSTR lpDecimalSep;
    LPSTR lpThousandSep;
    UINT NegativeOrder;
    UINT PositiveOrder;
    LPSTR lpCurrencySymbol;
} CURRENCYFMTA, *LPCURRENCYFMTA;
typedef struct _currencyfmtW {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPWSTR lpDecimalSep;
    LPWSTR lpThousandSep;
    UINT NegativeOrder;
    UINT PositiveOrder;
    LPWSTR lpCurrencySymbol;
} CURRENCYFMTW, *LPCURRENCYFMTW;
typedef CURRENCYFMTW CURRENCYFMT;
typedef LPCURRENCYFMTW LPCURRENCYFMT;
enum SYSNLS_FUNCTION{
    COMPARE_STRING = 0x0001,
};
typedef DWORD NLS_FUNCTION;
typedef struct _nlsversioninfo{
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
    DWORD dwEffectiveId;
    GUID guidCustomVersion;
} NLSVERSIONINFO, *LPNLSVERSIONINFO;
typedef struct _nlsversioninfoex{
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
    DWORD dwEffectiveId;
    GUID guidCustomVersion;
} NLSVERSIONINFOEX, *LPNLSVERSIONINFOEX;
enum SYSGEOTYPE {
    GEO_NATION = 0x0001,
    GEO_LATITUDE = 0x0002,
    GEO_LONGITUDE = 0x0003,
    GEO_ISO2 = 0x0004,
    GEO_ISO3 = 0x0005,
    GEO_RFC1766 = 0x0006,
    GEO_LCID = 0x0007,
    GEO_FRIENDLYNAME= 0x0008,
    GEO_OFFICIALNAME= 0x0009,
    GEO_TIMEZONES = 0x000A,
    GEO_OFFICIALLANGUAGES = 0x000B,
    GEO_ISO_UN_NUMBER = 0x000C,
    GEO_PARENT = 0x000D,
    GEO_DIALINGCODE = 0x000E,
    GEO_CURRENCYCODE= 0x000F,
    GEO_CURRENCYSYMBOL= 0x0010,
    GEO_NAME = 0x0011,
    GEO_ID = 0x0012
};
DEPRECATED("The Geo Class concept is obsolete and no longer supported.  GetGeoInfoEx is preferred. Set DISABLE_NLS_DEPRECATION to disable this warning.")
enum SYSGEOCLASS {
    GEOCLASS_NATION = 16,
    GEOCLASS_REGION = 14,
    GEOCLASS_ALL = 0
};
typedef enum _NORM_FORM {
    NormalizationOther = 0,
    NormalizationC = 0x1,
    NormalizationD = 0x2,
    NormalizationKC = 0x5,
    NormalizationKD = 0x6
} NORM_FORM;
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef BOOL (CALLBACK* LANGUAGEGROUP_ENUMPROCA)(LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef BOOL (CALLBACK* LANGGROUPLOCALE_ENUMPROCA)(LGRPID, LCID, LPSTR, LONG_PTR);
typedef BOOL (CALLBACK* UILANGUAGE_ENUMPROCA)(LPSTR, LONG_PTR);
typedef BOOL (CALLBACK* CODEPAGE_ENUMPROCA)(LPSTR);
typedef BOOL (CALLBACK* DATEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (CALLBACK* DATEFMT_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (CALLBACK* TIMEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (CALLBACK* CALINFO_ENUMPROCA)(LPSTR);
typedef BOOL (CALLBACK* CALINFO_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (CALLBACK* LOCALE_ENUMPROCA)(LPSTR);
typedef BOOL (CALLBACK* LOCALE_ENUMPROCW)(LPWSTR);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef BOOL (CALLBACK* LANGUAGEGROUP_ENUMPROCW)(LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
typedef BOOL (CALLBACK* LANGGROUPLOCALE_ENUMPROCW)(LGRPID, LCID, LPWSTR, LONG_PTR);
typedef BOOL (CALLBACK* UILANGUAGE_ENUMPROCW)(LPWSTR, LONG_PTR);
typedef BOOL (CALLBACK* CODEPAGE_ENUMPROCW)(LPWSTR);
typedef BOOL (CALLBACK* DATEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (CALLBACK* DATEFMT_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (CALLBACK* TIMEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (CALLBACK* CALINFO_ENUMPROCW)(LPWSTR);
typedef BOOL (CALLBACK* CALINFO_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (CALLBACK* GEO_ENUMPROC)(GEOID);
typedef BOOL (CALLBACK* GEO_ENUMNAMEPROC)(PWSTR, LPARAM);
typedef struct _FILEMUIINFO {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwFileType;
    BYTE pChecksum[16];
    BYTE pServiceChecksum[16];
    DWORD dwLanguageNameOffset;
    DWORD dwTypeIDMainSize;
    DWORD dwTypeIDMainOffset;
    DWORD dwTypeNameMainOffset;
    DWORD dwTypeIDMUISize;
    DWORD dwTypeIDMUIOffset;
    DWORD dwTypeNameMUIOffset;
    BYTE abBuffer[8];
} FILEMUIINFO, *PFILEMUIINFO;
#include <stringapiset.h>
    ((LPWSTR)((pInfo->dwLanguageNameOffset>0)?(ULONG_PTR)pInfo+pInfo->dwLanguageNameOffset:NULL))
    ((DWORD*)((pInfo->dwTypeIDMainOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeIDMainOffset:NULL))
    (((iType<pInfo->dwTypeIDMainSize)&&(pInfo->dwTypeIDMainOffset>0))?*((DWORD*)((ULONG_PTR)pInfo+pInfo->dwTypeIDMainOffset)+iType):0)
    ((LPWSTR)((pInfo->dwTypeNameMainOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeNameMainOffset:NULL))
    ((DWORD*)((pInfo->dwTypeIDMUIOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeIDMUIOffset:NULL))
    (((iType<pInfo->dwTypeIDMUISize)&&(pInfo->dwTypeIDMUIOffset>0))?*((DWORD*)((ULONG_PTR)pInfo+pInfo->dwTypeIDMUIOffset)+iType):0)
    ((LPWSTR)((pInfo->dwTypeNameMUIOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeNameMUIOffset:NULL))
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
IsValidCodePage(
    _In_ UINT CodePage);
WINBASEAPI
UINT
WINAPI
GetACP(void);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
UINT
WINAPI
GetOEMCP(void);
#endif
#pragma endregion
#pragma region Desktop or Pc Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP |WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
DEPRECATED("Use Unicode. The information in this structure cannot represent all encodings accuratedly and may be unreliable on many machines. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
GetCPInfo(
    _In_ UINT CodePage,
    _Out_ LPCPINFO lpCPInfo);
#endif
#pragma endregion
#pragma region Desktop or Pc Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP |WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
DEPRECATED("Use Unicode. The information in this structure cannot represent all encodings accurately and may be unreliable on many machines. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
GetCPInfoExA(
    _In_ UINT CodePage,
    _In_ DWORD dwFlags,
    _Out_ LPCPINFOEXA lpCPInfoEx);
DEPRECATED("Use Unicode. The information in this structure cannot represent all encodings accurately and may be unreliable on many machines. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
GetCPInfoExW(
    _In_ UINT CodePage,
    _In_ DWORD dwFlags,
    _Out_ LPCPINFOEXW lpCPInfoEx);
#endif
#pragma endregion
#pragma region Desktop or OneCore or Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEPRECATED("CompareStringEx is preferred. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
int
WINAPI
CompareStringA(
    _In_ LCID Locale,
    _In_ DWORD dwCmpFlags,
    _In_reads_(cchCount1) PCNZCH lpString1,
    _In_ int cchCount1,
    _In_reads_(cchCount2) PCNZCH lpString2,
    _In_ int cchCount2);
#endif
#pragma endregion
#pragma region Desktop or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
FindNLSString(
    _In_ LCID Locale,
    _In_ DWORD dwFindNLSStringFlags,
    _In_reads_(cchSource) LPCWSTR lpStringSource,
    _In_ int cchSource,
    _In_reads_(cchValue) LPCWSTR lpStringValue,
    _In_ int cchValue,
    _Out_opt_ LPINT pcchFound);
WINBASEAPI
int
WINAPI
LCMapStringW(
    _In_ LCID Locale,
    _In_ DWORD dwMapFlags,
    _In_reads_(cchSrc) LPCWSTR lpSrcStr,
    _In_ int cchSrc,
    _Out_writes_opt_(_Inexpressible_(cchDest)) LPWSTR lpDestStr,
    _In_ int cchDest);
WINBASEAPI
int
WINAPI
LCMapStringA(
    _In_ LCID Locale,
    _In_ DWORD dwMapFlags,
    _In_reads_(cchSrc) LPCSTR lpSrcStr,
    _In_ int cchSrc,
    _Out_writes_opt_(_Inexpressible_(cchDest)) LPSTR lpDestStr,
    _In_ int cchDest);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
GetLocaleInfoW(
    _In_ LCID Locale,
    _In_ LCTYPE LCType,
    _Out_writes_opt_(cchData) LPWSTR lpLCData,
    _In_ int cchData);
WINBASEAPI
int
WINAPI
GetLocaleInfoA(
    _In_ LCID Locale,
    _In_ LCTYPE LCType,
    _Out_writes_opt_(cchData) LPSTR lpLCData,
    _In_ int cchData
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetLocaleInfoA(
    _In_ LCID Locale,
    _In_ LCTYPE LCType,
    _In_ LPCSTR lpLCData);
WINBASEAPI
BOOL
WINAPI
SetLocaleInfoW(
    _In_ LCID Locale,
    _In_ LCTYPE LCType,
    _In_ LPCWSTR lpLCData);
WINBASEAPI
int
WINAPI
GetCalendarInfoA(
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType,
    _Out_writes_opt_(cchData) LPSTR lpCalData,
    _In_ int cchData,
    _Out_opt_ LPDWORD lpValue);
WINBASEAPI
int
WINAPI
GetCalendarInfoW(
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType,
    _Out_writes_opt_(cchData) LPWSTR lpCalData,
    _In_ int cchData,
    _Out_opt_ LPDWORD lpValue);
WINBASEAPI
BOOL
WINAPI
SetCalendarInfoA(
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType,
    _In_ LPCSTR lpCalData);
WINBASEAPI
BOOL
WINAPI
SetCalendarInfoW(
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType,
    _In_ LPCWSTR lpCalData);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
LoadStringByReference(
    _In_ DWORD Flags,
    _In_opt_ PCWSTR Language,
    _In_ PCWSTR SourceString,
    _Out_writes_opt_(cchBuffer) PWSTR Buffer,
    _In_ ULONG cchBuffer,
    _In_opt_ PCWSTR Directory,
    _Out_opt_ PULONG pcchBufferOut
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
DEPRECATED("Use Unicode. The information provided by this structure is inaccurate for some encodings and may be unreliable on many machines.")
WINBASEAPI
BOOL
WINAPI
IsDBCSLeadByte(
    _In_ BYTE TestChar
    );
DEPRECATED("Use Unicode. The information provided by this structure is inaccurate for some encodings and may be unreliable on many machines.")
WINBASEAPI
BOOL
WINAPI
IsDBCSLeadByteEx(
    _In_ UINT CodePage,
    _In_ BYTE TestChar
    );
WINBASEAPI
LCID
WINAPI
LocaleNameToLCID(
    _In_ LPCWSTR lpName,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
LCIDToLocaleName(
    _In_ LCID Locale,
    _Out_writes_opt_(cchName) LPWSTR lpName,
    _In_ int cchName,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
int
WINAPI
GetDurationFormat(
    _In_ LCID Locale,
    _In_ DWORD dwFlags,
    _In_opt_ CONST SYSTEMTIME *lpDuration,
    _In_ ULONGLONG ullDuration,
    _In_opt_ LPCWSTR lpFormat,
    _Out_writes_opt_(cchDuration) LPWSTR lpDurationStr,
    _In_ int cchDuration);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
GetNumberFormatA(
    _In_ LCID Locale,
    _In_ DWORD dwFlags,
    _In_ LPCSTR lpValue,
    _In_opt_ CONST NUMBERFMTA *lpFormat,
    _Out_writes_opt_(cchNumber) LPSTR lpNumberStr,
    _In_ int cchNumber);
WINBASEAPI
int
WINAPI
GetNumberFormatW(
    _In_ LCID Locale,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpValue,
    _In_opt_ CONST NUMBERFMTW *lpFormat,
    _Out_writes_opt_(cchNumber) LPWSTR lpNumberStr,
    _In_ int cchNumber);
WINBASEAPI
int
WINAPI
GetCurrencyFormatA(
    _In_ LCID Locale,
    _In_ DWORD dwFlags,
    _In_ LPCSTR lpValue,
    _In_opt_ CONST CURRENCYFMTA *lpFormat,
    _Out_writes_opt_(cchCurrency) LPSTR lpCurrencyStr,
    _In_ int cchCurrency);
WINBASEAPI
int
WINAPI
GetCurrencyFormatW(
    _In_ LCID Locale,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpValue,
    _In_opt_ CONST CURRENCYFMTW *lpFormat,
    _Out_writes_opt_(cchCurrency) LPWSTR lpCurrencyStr,
    _In_ int cchCurrency);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
EnumCalendarInfoA(
    _In_ CALINFO_ENUMPROCA lpCalInfoEnumProc,
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType);
WINBASEAPI
BOOL
WINAPI
EnumCalendarInfoW(
    _In_ CALINFO_ENUMPROCW lpCalInfoEnumProc,
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType);
WINBASEAPI
BOOL
WINAPI
EnumCalendarInfoExA(
    _In_ CALINFO_ENUMPROCEXA lpCalInfoEnumProcEx,
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType);
WINBASEAPI
BOOL
WINAPI
EnumCalendarInfoExW(
    _In_ CALINFO_ENUMPROCEXW lpCalInfoEnumProcEx,
    _In_ LCID Locale,
    _In_ CALID Calendar,
    _In_ CALTYPE CalType);
WINBASEAPI
BOOL
WINAPI
EnumTimeFormatsA(
    _In_ TIMEFMT_ENUMPROCA lpTimeFmtEnumProc,
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumTimeFormatsW(
    _In_ TIMEFMT_ENUMPROCW lpTimeFmtEnumProc,
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumDateFormatsA(
    _In_ DATEFMT_ENUMPROCA lpDateFmtEnumProc,
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumDateFormatsW(
    _In_ DATEFMT_ENUMPROCW lpDateFmtEnumProc,
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumDateFormatsExA(
    _In_ DATEFMT_ENUMPROCEXA lpDateFmtEnumProcEx,
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumDateFormatsExW(
    _In_ DATEFMT_ENUMPROCEXW lpDateFmtEnumProcEx,
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
IsValidLanguageGroup(
    _In_ LGRPID LanguageGroup,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
GetNLSVersion(
    _In_ NLS_FUNCTION Function,
    _In_ LCID Locale,
    _Inout_ LPNLSVERSIONINFO lpVersionInformation);
WINBASEAPI
BOOL
WINAPI
IsValidLocale(
    _In_ LCID Locale,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
DEPRECATED("The GeoID concept is obsolete. Use GetGeoInfoEx instead. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
int
WINAPI
GetGeoInfoA(
    _In_ GEOID Location,
    _In_ GEOTYPE GeoType,
    _Out_writes_opt_(cchData) LPSTR lpGeoData,
    _In_ int cchData,
    _In_ LANGID LangId);
DEPRECATED("The GeoID concept is obsolete. Use GetGeoInfoEx instead. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
int
WINAPI
GetGeoInfoW(
    _In_ GEOID Location,
    _In_ GEOTYPE GeoType,
    _Out_writes_opt_(cchData) LPWSTR lpGeoData,
    _In_ int cchData,
    _In_ LANGID LangId);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
GetGeoInfoEx(
    _In_ PWSTR location,
    _In_ GEOTYPE geoType,
    _Out_writes_opt_(geoDataCount) PWSTR geoData,
    _In_ int geoDataCount);
#endif
#pragma endregion
#pragma region Desktop or PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
DEPRECATED("The GeoID concept is obsolete. Use EnumSystemGoNames instead. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
EnumSystemGeoID(
    _In_ GEOCLASS GeoClass,
    _In_ GEOID ParentGeoId,
    _In_ GEO_ENUMPROC lpGeoEnumProc);
WINBASEAPI
BOOL
WINAPI
EnumSystemGeoNames(
    _In_ GEOCLASS geoClass,
    _In_ GEO_ENUMNAMEPROC geoEnumProc,
    _In_opt_ LPARAM data);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
DEPRECATED("The GeoID concept is obsolete. Use GetUserDefaultGeoName instead. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
GEOID
WINAPI
GetUserGeoID(
    _In_ GEOCLASS GeoClass);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
GetUserDefaultGeoName(
    _Out_writes_z_(geoNameCount) LPWSTR geoName,
    _In_ int geoNameCount
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEPRECATED("The GeoID concept is obsolete. Use SetUserGeoName instead. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
SetUserGeoID(
    _In_ GEOID GeoId);
WINBASEAPI
BOOL
WINAPI
SetUserGeoName(
    _In_ PWSTR geoName);
WINBASEAPI
LCID
WINAPI
ConvertDefaultLocale(
    _In_ LCID Locale);
WINBASEAPI
LANGID
WINAPI
GetSystemDefaultUILanguage(void);
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
LCID
WINAPI
GetThreadLocale(void);
WINBASEAPI
BOOL
WINAPI
SetThreadLocale(
    _In_ LCID Locale
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
LANGID
WINAPI
GetUserDefaultUILanguage(void);
#endif
WINBASEAPI
LANGID
WINAPI
GetUserDefaultLangID(void);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
LANGID
WINAPI
GetSystemDefaultLangID(void);
WINBASEAPI
LCID
WINAPI
GetSystemDefaultLCID(void);
WINBASEAPI
LCID
WINAPI
GetUserDefaultLCID(void);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
LANGID
WINAPI
SetThreadUILanguage(_In_ LANGID LangId);
WINBASEAPI
LANGID
WINAPI
GetThreadUILanguage(void);
WINBASEAPI
BOOL
WINAPI
GetProcessPreferredUILanguages(
    _In_ DWORD dwFlags,
    _Out_ PULONG pulNumLanguages,
    _Out_writes_opt_(*pcchLanguagesBuffer) PZZWSTR pwszLanguagesBuffer,
    _Inout_ PULONG pcchLanguagesBuffer
);
WINBASEAPI
BOOL
WINAPI
SetProcessPreferredUILanguages(
    _In_ DWORD dwFlags,
    _In_opt_ PCZZWSTR pwszLanguagesBuffer,
    _Out_opt_ PULONG pulNumLanguages
);
#endif
#pragma endregion
#pragma region Desktop Family or Phone Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PHONE_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
GetUserPreferredUILanguages (
    _In_ DWORD dwFlags,
    _Out_ PULONG pulNumLanguages,
    _Out_writes_opt_(*pcchLanguagesBuffer) PZZWSTR pwszLanguagesBuffer,
    _Inout_ PULONG pcchLanguagesBuffer
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetSystemPreferredUILanguages (
    _In_ DWORD dwFlags,
    _Out_ PULONG pulNumLanguages,
    _Out_writes_opt_(*pcchLanguagesBuffer) PZZWSTR pwszLanguagesBuffer,
    _Inout_ PULONG pcchLanguagesBuffer
);
WINBASEAPI
BOOL
WINAPI
GetThreadPreferredUILanguages(
    _In_ DWORD dwFlags,
    _Out_ PULONG pulNumLanguages,
    _Out_writes_opt_(*pcchLanguagesBuffer) PZZWSTR pwszLanguagesBuffer,
    _Inout_ PULONG pcchLanguagesBuffer
);
WINBASEAPI
BOOL
WINAPI
SetThreadPreferredUILanguages(
    _In_ DWORD dwFlags,
    _In_opt_ PCZZWSTR pwszLanguagesBuffer,
    _Out_opt_ PULONG pulNumLanguages
);
WINBASEAPI
_Success_(return!=FALSE)
BOOL
WINAPI
GetFileMUIInfo(
                        DWORD dwFlags,
    _In_ PCWSTR pcwszFilePath,
    _Inout_updates_bytes_to_opt_(*pcbFileMUIInfo,*pcbFileMUIInfo) PFILEMUIINFO pFileMUIInfo,
    _Inout_ DWORD* pcbFileMUIInfo);
WINBASEAPI
BOOL
WINAPI
GetFileMUIPath(
    _In_ DWORD dwFlags,
    _In_ PCWSTR pcwszFilePath ,
    _Inout_updates_opt_ (*pcchLanguage) PWSTR pwszLanguage,
    _Inout_ PULONG pcchLanguage,
    _Out_writes_opt_ (*pcchFileMUIPath) PWSTR pwszFileMUIPath,
    _Inout_ PULONG pcchFileMUIPath,
    _Inout_ PULONGLONG pululEnumerator
);
WINBASEAPI
BOOL
WINAPI
GetUILanguageInfo(
    _In_ DWORD dwFlags,
    _In_ PCZZWSTR pwmszLanguage,
    _Out_writes_opt_(*pcchFallbackLanguages) PZZWSTR pwszFallbackLanguages,
    _Inout_opt_ PDWORD pcchFallbackLanguages,
    _Out_ PDWORD pAttributes
);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINBASEAPI
BOOL
WINAPI
NotifyUILanguageChange(
    _In_ DWORD dwFlags,
    _In_opt_ PCWSTR pcwstrNewLanguage,
    _In_opt_ PCWSTR pcwstrPreviousLanguage,
    _In_ DWORD dwReserved,
    _Out_opt_ PDWORD pdwStatusRtrn
);
#endif
#pragma endregion
#pragma region Desktop or OneCore or Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
GetStringTypeExA(
    _In_ LCID Locale,
    _In_ DWORD dwInfoType,
    _In_reads_(cchSrc) LPCSTR lpSrcStr,
    _In_ int cchSrc,
    _Out_writes_(cchSrc) LPWORD lpCharType);
WINBASEAPI
BOOL
WINAPI
GetStringTypeA(
    _In_ LCID Locale,
    _In_ DWORD dwInfoType,
    _In_reads_(cchSrc) LPCSTR lpSrcStr,
    _In_ int cchSrc,
    _Out_ LPWORD lpCharType);
WINBASEAPI
int
WINAPI
FoldStringA(
    _In_ DWORD dwMapFlags,
    _In_reads_(cchSrc) LPCSTR lpSrcStr,
    _In_ int cchSrc,
    _Out_writes_opt_(cchDest) LPSTR lpDestStr,
    _In_ int cchDest);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
EnumSystemLocalesA(
    _In_ LOCALE_ENUMPROCA lpLocaleEnumProc,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumSystemLocalesW(
    _In_ LOCALE_ENUMPROCW lpLocaleEnumProc,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
EnumSystemLanguageGroupsA(
    _In_ LANGUAGEGROUP_ENUMPROCA lpLanguageGroupEnumProc,
    _In_ DWORD dwFlags,
    _In_ LONG_PTR lParam);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
EnumSystemLanguageGroupsW(
    _In_ LANGUAGEGROUP_ENUMPROCW lpLanguageGroupEnumProc,
    _In_ DWORD dwFlags,
    _In_ LONG_PTR lParam);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
EnumLanguageGroupLocalesA(
    _In_ LANGGROUPLOCALE_ENUMPROCA lpLangGroupLocaleEnumProc,
    _In_ LGRPID LanguageGroup,
    _In_ DWORD dwFlags,
    _In_ LONG_PTR lParam);
DEPRECATED("The Language Group concept is obsolete and no longer supported. Set DISABLE_NLS_DEPRECATION to disable this warning.")
WINBASEAPI
BOOL
WINAPI
EnumLanguageGroupLocalesW(
    _In_ LANGGROUPLOCALE_ENUMPROCW lpLangGroupLocaleEnumProc,
    _In_ LGRPID LanguageGroup,
    _In_ DWORD dwFlags,
    _In_ LONG_PTR lParam);
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
EnumUILanguagesA(
    _In_ UILANGUAGE_ENUMPROCA lpUILanguageEnumProc,
    _In_ DWORD dwFlags,
    _In_ LONG_PTR lParam);
WINBASEAPI
BOOL
WINAPI
EnumUILanguagesW(
    _In_ UILANGUAGE_ENUMPROCW lpUILanguageEnumProc,
    _In_ DWORD dwFlags,
    _In_ LONG_PTR lParam);
#endif
#endif
#pragma endregion
#pragma region Desktop or PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
EnumSystemCodePagesA(
    _In_ CODEPAGE_ENUMPROCA lpCodePageEnumProc,
    _In_ DWORD dwFlags);
WINBASEAPI
BOOL
WINAPI
EnumSystemCodePagesW(
    _In_ CODEPAGE_ENUMPROCW lpCodePageEnumProc,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINNORMALIZEAPI
int
WINAPI IdnToAscii(_In_ DWORD dwFlags,
                  _In_reads_(cchUnicodeChar) LPCWSTR lpUnicodeCharStr,
                  _In_ int cchUnicodeChar,
                  _Out_writes_opt_(cchASCIIChar) LPWSTR lpASCIICharStr,
                  _In_ int cchASCIIChar);
WINNORMALIZEAPI
int
WINAPI IdnToUnicode(_In_ DWORD dwFlags,
                    _In_reads_(cchASCIIChar) LPCWSTR lpASCIICharStr,
                    _In_ int cchASCIIChar,
                    _Out_writes_opt_(cchUnicodeChar) LPWSTR lpUnicodeCharStr,
                    _In_ int cchUnicodeChar);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINNORMALIZEAPI
int
WINAPI IdnToNameprepUnicode(_In_ DWORD dwFlags,
                            _In_reads_(cchUnicodeChar) LPCWSTR lpUnicodeCharStr,
                            _In_ int cchUnicodeChar,
                            _Out_writes_opt_(cchNameprepChar) LPWSTR lpNameprepCharStr,
                            _In_ int cchNameprepChar);
WINNORMALIZEAPI
int
WINAPI NormalizeString( _In_ NORM_FORM NormForm,
                        _In_reads_(cwSrcLength) LPCWSTR lpSrcString,
                        _In_ int cwSrcLength,
                        _Out_writes_opt_(cwDstLength) LPWSTR lpDstString,
                        _In_ int cwDstLength );
WINNORMALIZEAPI
BOOL
WINAPI IsNormalizedString( _In_ NORM_FORM NormForm,
                           _In_reads_(cwLength) LPCWSTR lpString,
                           _In_ int cwLength );
WINBASEAPI
BOOL
WINAPI VerifyScripts(
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpLocaleScripts,
    _In_ int cchLocaleScripts,
    _In_ LPCWSTR lpTestScripts,
    _In_ int cchTestScripts);
WINBASEAPI
int
WINAPI GetStringScripts(
        _In_ DWORD dwFlags,
        _In_ LPCWSTR lpString,
        _In_ int cchString,
        _Out_writes_opt_(cchScripts) LPWSTR lpScripts,
        _In_ int cchScripts);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
GetLocaleInfoEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ LCTYPE LCType,
    _Out_writes_to_opt_(cchData, return) LPWSTR lpLCData,
    _In_ int cchData
);
#endif
#pragma endregion
#pragma region Desktop or PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
GetCalendarInfoEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ CALID Calendar,
    _In_opt_ LPCWSTR lpReserved,
    _In_ CALTYPE CalType,
    _Out_writes_opt_(cchData) LPWSTR lpCalData,
    _In_ int cchData,
    _Out_opt_ LPDWORD lpValue
);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
WINBASEAPI
int
WINAPI
GetDurationFormatEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwFlags,
    _In_opt_ CONST SYSTEMTIME *lpDuration,
    _In_ ULONGLONG ullDuration,
    _In_opt_ LPCWSTR lpFormat,
    _Out_writes_opt_(cchDuration) LPWSTR lpDurationStr,
    _In_ int cchDuration
);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
GetNumberFormatEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpValue,
    _In_opt_ CONST NUMBERFMTW *lpFormat,
    _Out_writes_opt_(cchNumber) LPWSTR lpNumberStr,
    _In_ int cchNumber
);
WINBASEAPI
int
WINAPI
GetCurrencyFormatEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpValue,
    _In_opt_ CONST CURRENCYFMTW *lpFormat,
    _Out_writes_opt_(cchCurrency) LPWSTR lpCurrencyStr,
    _In_ int cchCurrency
);
WINBASEAPI
int
WINAPI
GetUserDefaultLocaleName(
    _Out_writes_(cchLocaleName) LPWSTR lpLocaleName,
    _In_ int cchLocaleName
);
#endif
#pragma endregion
#pragma region Desktop or PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
GetSystemDefaultLocaleName(
    _Out_writes_(cchLocaleName) LPWSTR lpLocaleName,
    _In_ int cchLocaleName
);
WINBASEAPI
BOOL
WINAPI
IsNLSDefinedString(
    _In_ NLS_FUNCTION Function,
    _In_ DWORD dwFlags,
    _In_ LPNLSVERSIONINFO lpVersionInformation,
    _In_reads_(cchStr) LPCWSTR lpString,
    _In_ INT cchStr);
WINBASEAPI
BOOL
WINAPI
GetNLSVersionEx(
    _In_ NLS_FUNCTION function,
    _In_opt_ LPCWSTR lpLocaleName,
    _Inout_ LPNLSVERSIONINFOEX lpVersionInformation
);
WINBASEAPI
DWORD
WINAPI
IsValidNLSVersion(
    _In_ NLS_FUNCTION function,
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ LPNLSVERSIONINFOEX lpVersionInformation
);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Gamaes Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
FindNLSStringEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwFindNLSStringFlags,
    _In_reads_(cchSource) LPCWSTR lpStringSource,
    _In_ int cchSource,
    _In_reads_(cchValue) LPCWSTR lpStringValue,
    _In_ int cchValue,
    _Out_opt_ LPINT pcchFound,
    _In_opt_ LPNLSVERSIONINFO lpVersionInformation,
    _In_opt_ LPVOID lpReserved,
    _In_opt_ LPARAM sortHandle
);
_When_((dwMapFlags & (LCMAP_SORTKEY | LCMAP_BYTEREV | LCMAP_HASH | LCMAP_SORTHANDLE)) != 0, _At_((LPBYTE) lpDestStr, _Out_writes_bytes_opt_(cchDest)))
_When_(cchSrc != -1, _At_((WCHAR *) lpSrcStr, _Out_writes_opt_(cchSrc)))
_When_(cchDest != -1, _At_((WCHAR *) lpDestStr, _Out_writes_opt_(cchDest)))
WINBASEAPI
int
WINAPI
LCMapStringEx(
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwMapFlags,
    _In_reads_(cchSrc) LPCWSTR lpSrcStr,
    _In_ int cchSrc,
    _Out_writes_opt_(cchDest) LPWSTR lpDestStr,
    _In_ int cchDest,
    _In_opt_ LPNLSVERSIONINFO lpVersionInformation,
    _In_opt_ LPVOID lpReserved,
    _In_opt_ LPARAM sortHandle
);
WINBASEAPI
BOOL
WINAPI
IsValidLocaleName(
    _In_ LPCWSTR lpLocaleName
);
#endif
#pragma endregion
#pragma region Desktop or PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
typedef BOOL (CALLBACK* CALINFO_ENUMPROCEXEX)(LPWSTR, CALID, LPWSTR, LPARAM);
WINBASEAPI
BOOL
WINAPI
EnumCalendarInfoExEx(
    _In_ CALINFO_ENUMPROCEXEX pCalInfoEnumProcExEx,
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ CALID Calendar,
    _In_opt_ LPCWSTR lpReserved,
    _In_ CALTYPE CalType,
    _In_ LPARAM lParam
);
typedef BOOL (CALLBACK* DATEFMT_ENUMPROCEXEX)(LPWSTR, CALID, LPARAM);
WINBASEAPI
BOOL
WINAPI
EnumDateFormatsExEx(
    _In_ DATEFMT_ENUMPROCEXEX lpDateFmtEnumProcExEx,
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwFlags,
    _In_ LPARAM lParam
);
typedef BOOL (CALLBACK* TIMEFMT_ENUMPROCEX)(LPWSTR, LPARAM);
WINBASEAPI
BOOL
WINAPI
EnumTimeFormatsEx(
    _In_ TIMEFMT_ENUMPROCEX lpTimeFmtEnumProcEx,
    _In_opt_ LPCWSTR lpLocaleName,
    _In_ DWORD dwFlags,
    _In_ LPARAM lParam
);
#endif
#pragma endregion
#pragma region Desktop or PC Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef BOOL (CALLBACK* LOCALE_ENUMPROCEX)(LPWSTR, DWORD, LPARAM);
WINBASEAPI
BOOL
WINAPI
EnumSystemLocalesEx(
    _In_ LOCALE_ENUMPROCEX lpLocaleEnumProcEx,
    _In_ DWORD dwFlags,
    _In_ LPARAM lParam,
    _In_opt_ LPVOID lpReserved
);
#endif
#pragma endregion
#pragma region Application Family or OneCore or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
int
WINAPI
ResolveLocaleName(
    _In_opt_ LPCWSTR lpNameToResolve,
    _Out_writes_opt_(cchLocaleName) LPWSTR lpLocaleName,
    _In_ int cchLocaleName
);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
       
}
