#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#error MMREG.H version 142 or greater to be included first
#include "pshpack1.h"
extern "C" {
    #define ACMAPI WINAPI
DECLARE_HANDLE(HACMDRIVERID);
typedef HACMDRIVERID *PHACMDRIVERID;
typedef HACMDRIVERID FAR *LPHACMDRIVERID;
DECLARE_HANDLE(HACMDRIVER);
typedef HACMDRIVER *PHACMDRIVER;
typedef HACMDRIVER FAR *LPHACMDRIVER;
DECLARE_HANDLE(HACMSTREAM);
typedef HACMSTREAM *PHACMSTREAM;
typedef HACMSTREAM FAR *LPHACMSTREAM;
DECLARE_HANDLE(HACMOBJ);
typedef HACMOBJ *PHACMOBJ;
typedef HACMOBJ FAR *LPHACMOBJ;
typedef UINT MMRESULT;
DWORD ACMAPI acmGetVersion
(
    void
);
MMRESULT ACMAPI acmMetrics
(
    HACMOBJ hao,
    UINT uMetric,
    LPVOID pMetric
);
typedef BOOL (CALLBACK *ACMDRIVERENUMCB)
(
    HACMDRIVERID hadid,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmDriverEnum
(
    ACMDRIVERENUMCB fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
MMRESULT ACMAPI acmDriverID
(
    HACMOBJ hao,
    LPHACMDRIVERID phadid,
    DWORD fdwDriverID
);
MMRESULT ACMAPI acmDriverAddA
(
    LPHACMDRIVERID phadid,
    HINSTANCE hinstModule,
    LPARAM lParam,
    DWORD dwPriority,
    DWORD fdwAdd
);
MMRESULT ACMAPI acmDriverAddW
(
    LPHACMDRIVERID phadid,
    HINSTANCE hinstModule,
    LPARAM lParam,
    DWORD dwPriority,
    DWORD fdwAdd
);
typedef LRESULT (CALLBACK *ACMDRIVERPROC)(DWORD_PTR, HACMDRIVERID, UINT, LPARAM, LPARAM);
typedef ACMDRIVERPROC FAR *LPACMDRIVERPROC;
MMRESULT ACMAPI acmDriverRemove
(
    HACMDRIVERID hadid,
    DWORD fdwRemove
);
MMRESULT ACMAPI acmDriverOpen
(
    LPHACMDRIVER phad,
    HACMDRIVERID hadid,
    DWORD fdwOpen
);
MMRESULT ACMAPI acmDriverClose
(
    HACMDRIVER had,
    DWORD fdwClose
);
LRESULT ACMAPI acmDriverMessage
(
    HACMDRIVER had,
    UINT uMsg,
    LPARAM lParam1,
    LPARAM lParam2
);
MMRESULT ACMAPI acmDriverPriority
(
    HACMDRIVERID hadid,
    DWORD dwPriority,
    DWORD fdwPriority
);
typedef struct tACMDRIVERDETAILSA
{
    DWORD cbStruct;
    FOURCC fccType;
    FOURCC fccComp;
    WORD wMid;
    WORD wPid;
    DWORD vdwACM;
    DWORD vdwDriver;
    DWORD fdwSupport;
    DWORD cFormatTags;
    DWORD cFilterTags;
    HICON hicon;
    char szShortName[ACMDRIVERDETAILS_SHORTNAME_CHARS];
    char szLongName[ACMDRIVERDETAILS_LONGNAME_CHARS];
    char szCopyright[ACMDRIVERDETAILS_COPYRIGHT_CHARS];
    char szLicensing[ACMDRIVERDETAILS_LICENSING_CHARS];
    char szFeatures[ACMDRIVERDETAILS_FEATURES_CHARS];
} ACMDRIVERDETAILSA, *PACMDRIVERDETAILSA, FAR *LPACMDRIVERDETAILSA;
typedef struct tACMDRIVERDETAILSW
{
    DWORD cbStruct;
    FOURCC fccType;
    FOURCC fccComp;
    WORD wMid;
    WORD wPid;
    DWORD vdwACM;
    DWORD vdwDriver;
    DWORD fdwSupport;
    DWORD cFormatTags;
    DWORD cFilterTags;
    HICON hicon;
    WCHAR szShortName[ACMDRIVERDETAILS_SHORTNAME_CHARS];
    WCHAR szLongName[ACMDRIVERDETAILS_LONGNAME_CHARS];
    WCHAR szCopyright[ACMDRIVERDETAILS_COPYRIGHT_CHARS];
    WCHAR szLicensing[ACMDRIVERDETAILS_LICENSING_CHARS];
    WCHAR szFeatures[ACMDRIVERDETAILS_FEATURES_CHARS];
} ACMDRIVERDETAILSW, *PACMDRIVERDETAILSW, FAR *LPACMDRIVERDETAILSW;
MMRESULT ACMAPI acmDriverDetailsA
(
    HACMDRIVERID hadid,
    LPACMDRIVERDETAILSA padd,
    DWORD fdwDetails
);
MMRESULT ACMAPI acmDriverDetailsW
(
    HACMDRIVERID hadid,
    LPACMDRIVERDETAILSW padd,
    DWORD fdwDetails
);
typedef struct tACMFORMATTAGDETAILSA
{
    DWORD cbStruct;
    DWORD dwFormatTagIndex;
    DWORD dwFormatTag;
    DWORD cbFormatSize;
    DWORD fdwSupport;
    DWORD cStandardFormats;
    char szFormatTag[ACMFORMATTAGDETAILS_FORMATTAG_CHARS];
} ACMFORMATTAGDETAILSA, *PACMFORMATTAGDETAILSA, FAR *LPACMFORMATTAGDETAILSA;
typedef struct tACMFORMATTAGDETAILSW
{
    DWORD cbStruct;
    DWORD dwFormatTagIndex;
    DWORD dwFormatTag;
    DWORD cbFormatSize;
    DWORD fdwSupport;
    DWORD cStandardFormats;
    WCHAR szFormatTag[ACMFORMATTAGDETAILS_FORMATTAG_CHARS];
} ACMFORMATTAGDETAILSW, *PACMFORMATTAGDETAILSW, FAR *LPACMFORMATTAGDETAILSW;
MMRESULT ACMAPI acmFormatTagDetailsA
(
    HACMDRIVER had,
    LPACMFORMATTAGDETAILSA paftd,
    DWORD fdwDetails
);
MMRESULT ACMAPI acmFormatTagDetailsW
(
    HACMDRIVER had,
    LPACMFORMATTAGDETAILSW paftd,
    DWORD fdwDetails
);
typedef BOOL (CALLBACK *ACMFORMATTAGENUMCBA)
(
    HACMDRIVERID hadid,
    LPACMFORMATTAGDETAILSA paftd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFormatTagEnumA
(
    HACMDRIVER had,
    LPACMFORMATTAGDETAILSA paftd,
    ACMFORMATTAGENUMCBA fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef BOOL (CALLBACK *ACMFORMATTAGENUMCBW)
(
    HACMDRIVERID hadid,
    LPACMFORMATTAGDETAILSW paftd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFormatTagEnumW
(
    HACMDRIVER had,
    LPACMFORMATTAGDETAILSW paftd,
    ACMFORMATTAGENUMCBW fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef struct tACMFORMATDETAILSA
{
    DWORD cbStruct;
    DWORD dwFormatIndex;
    DWORD dwFormatTag;
    DWORD fdwSupport;
    LPWAVEFORMATEX pwfx;
    DWORD cbwfx;
    char szFormat[ACMFORMATDETAILS_FORMAT_CHARS];
} ACMFORMATDETAILSA, *PACMFORMATDETAILSA, FAR *LPACMFORMATDETAILSA;
typedef struct tACMFORMATDETAILSW
{
    DWORD cbStruct;
    DWORD dwFormatIndex;
    DWORD dwFormatTag;
    DWORD fdwSupport;
    LPWAVEFORMATEX pwfx;
    DWORD cbwfx;
    WCHAR szFormat[ACMFORMATDETAILS_FORMAT_CHARS];
} ACMFORMATDETAILSW, *PACMFORMATDETAILSW, FAR *LPACMFORMATDETAILSW;
MMRESULT ACMAPI acmFormatDetailsA
(
    HACMDRIVER had,
    LPACMFORMATDETAILSA pafd,
    DWORD fdwDetails
);
MMRESULT ACMAPI acmFormatDetailsW
(
    HACMDRIVER had,
    LPACMFORMATDETAILSW pafd,
    DWORD fdwDetails
);
typedef BOOL (CALLBACK *ACMFORMATENUMCBA)
(
    HACMDRIVERID hadid,
    LPACMFORMATDETAILSA pafd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFormatEnumA
(
    HACMDRIVER had,
    LPACMFORMATDETAILSA pafd,
    ACMFORMATENUMCBA fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef BOOL (CALLBACK *ACMFORMATENUMCBW)
(
    HACMDRIVERID hadid,
    LPACMFORMATDETAILSW pafd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFormatEnumW
(
    HACMDRIVER had,
    LPACMFORMATDETAILSW pafd,
    ACMFORMATENUMCBW fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
MMRESULT ACMAPI acmFormatSuggest
(
    HACMDRIVER had,
    LPWAVEFORMATEX pwfxSrc,
    LPWAVEFORMATEX pwfxDst,
    DWORD cbwfxDst,
    DWORD fdwSuggest
);
typedef UINT (CALLBACK *ACMFORMATCHOOSEHOOKPROCA)
(
    HWND hwnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam
);
typedef UINT (CALLBACK *ACMFORMATCHOOSEHOOKPROCW)
(
    HWND hwnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam
);
typedef struct tACMFORMATCHOOSEA
{
    DWORD cbStruct;
    DWORD fdwStyle;
    HWND hwndOwner;
    LPWAVEFORMATEX pwfx;
    DWORD cbwfx;
    LPCSTR pszTitle;
    char szFormatTag[ACMFORMATTAGDETAILS_FORMATTAG_CHARS];
    char szFormat[ACMFORMATDETAILS_FORMAT_CHARS];
    LPSTR pszName;
    DWORD cchName;
    DWORD fdwEnum;
    LPWAVEFORMATEX pwfxEnum;
    HINSTANCE hInstance;
    LPCSTR pszTemplateName;
    LPARAM lCustData;
    ACMFORMATCHOOSEHOOKPROCA pfnHook;
} ACMFORMATCHOOSEA, *PACMFORMATCHOOSEA, FAR *LPACMFORMATCHOOSEA;
typedef struct tACMFORMATCHOOSEW
{
    DWORD cbStruct;
    DWORD fdwStyle;
    HWND hwndOwner;
    LPWAVEFORMATEX pwfx;
    DWORD cbwfx;
    LPCWSTR pszTitle;
    WCHAR szFormatTag[ACMFORMATTAGDETAILS_FORMATTAG_CHARS];
    WCHAR szFormat[ACMFORMATDETAILS_FORMAT_CHARS];
    LPWSTR pszName;
    DWORD cchName;
    DWORD fdwEnum;
    LPWAVEFORMATEX pwfxEnum;
    HINSTANCE hInstance;
    LPCWSTR pszTemplateName;
    LPARAM lCustData;
    ACMFORMATCHOOSEHOOKPROCW pfnHook;
} ACMFORMATCHOOSEW, *PACMFORMATCHOOSEW, FAR *LPACMFORMATCHOOSEW;
MMRESULT ACMAPI acmFormatChooseA
(
    LPACMFORMATCHOOSEA pafmtc
);
MMRESULT ACMAPI acmFormatChooseW
(
    LPACMFORMATCHOOSEW pafmtc
);
typedef struct tACMFILTERTAGDETAILSA
{
    DWORD cbStruct;
    DWORD dwFilterTagIndex;
    DWORD dwFilterTag;
    DWORD cbFilterSize;
    DWORD fdwSupport;
    DWORD cStandardFilters;
    char szFilterTag[ACMFILTERTAGDETAILS_FILTERTAG_CHARS];
} ACMFILTERTAGDETAILSA, *PACMFILTERTAGDETAILSA, FAR *LPACMFILTERTAGDETAILSA;
typedef struct tACMFILTERTAGDETAILSW
{
    DWORD cbStruct;
    DWORD dwFilterTagIndex;
    DWORD dwFilterTag;
    DWORD cbFilterSize;
    DWORD fdwSupport;
    DWORD cStandardFilters;
    WCHAR szFilterTag[ACMFILTERTAGDETAILS_FILTERTAG_CHARS];
} ACMFILTERTAGDETAILSW, *PACMFILTERTAGDETAILSW, FAR *LPACMFILTERTAGDETAILSW;
MMRESULT ACMAPI acmFilterTagDetailsA
(
    HACMDRIVER had,
    LPACMFILTERTAGDETAILSA paftd,
    DWORD fdwDetails
);
MMRESULT ACMAPI acmFilterTagDetailsW
(
    HACMDRIVER had,
    LPACMFILTERTAGDETAILSW paftd,
    DWORD fdwDetails
);
typedef BOOL (CALLBACK *ACMFILTERTAGENUMCBA)
(
    HACMDRIVERID hadid,
    LPACMFILTERTAGDETAILSA paftd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFilterTagEnumA
(
    HACMDRIVER had,
    LPACMFILTERTAGDETAILSA paftd,
    ACMFILTERTAGENUMCBA fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef BOOL (CALLBACK *ACMFILTERTAGENUMCBW)
(
    HACMDRIVERID hadid,
    LPACMFILTERTAGDETAILSW paftd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFilterTagEnumW
(
    HACMDRIVER had,
    LPACMFILTERTAGDETAILSW paftd,
    ACMFILTERTAGENUMCBW fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef struct tACMFILTERDETAILSA
{
    DWORD cbStruct;
    DWORD dwFilterIndex;
    DWORD dwFilterTag;
    DWORD fdwSupport;
    LPWAVEFILTER pwfltr;
    DWORD cbwfltr;
    char szFilter[ACMFILTERDETAILS_FILTER_CHARS];
} ACMFILTERDETAILSA, *PACMFILTERDETAILSA, FAR *LPACMFILTERDETAILSA;
typedef struct tACMFILTERDETAILSW
{
    DWORD cbStruct;
    DWORD dwFilterIndex;
    DWORD dwFilterTag;
    DWORD fdwSupport;
    LPWAVEFILTER pwfltr;
    DWORD cbwfltr;
    WCHAR szFilter[ACMFILTERDETAILS_FILTER_CHARS];
} ACMFILTERDETAILSW, *PACMFILTERDETAILSW, FAR *LPACMFILTERDETAILSW;
MMRESULT ACMAPI acmFilterDetailsA
(
    HACMDRIVER had,
    LPACMFILTERDETAILSA pafd,
    DWORD fdwDetails
);
MMRESULT ACMAPI acmFilterDetailsW
(
    HACMDRIVER had,
    LPACMFILTERDETAILSW pafd,
    DWORD fdwDetails
);
typedef BOOL (CALLBACK *ACMFILTERENUMCBA)
(
    HACMDRIVERID hadid,
    LPACMFILTERDETAILSA pafd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFilterEnumA
(
    HACMDRIVER had,
    LPACMFILTERDETAILSA pafd,
    ACMFILTERENUMCBA fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef BOOL (CALLBACK *ACMFILTERENUMCBW)
(
    HACMDRIVERID hadid,
    LPACMFILTERDETAILSW pafd,
    DWORD_PTR dwInstance,
    DWORD fdwSupport
);
MMRESULT ACMAPI acmFilterEnumW
(
    HACMDRIVER had,
    LPACMFILTERDETAILSW pafd,
    ACMFILTERENUMCBW fnCallback,
    DWORD_PTR dwInstance,
    DWORD fdwEnum
);
typedef UINT (CALLBACK *ACMFILTERCHOOSEHOOKPROCA)
(
    HWND hwnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam
);
typedef UINT (CALLBACK *ACMFILTERCHOOSEHOOKPROCW)
(
    HWND hwnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam
);
typedef struct tACMFILTERCHOOSEA
{
    DWORD cbStruct;
    DWORD fdwStyle;
    HWND hwndOwner;
    LPWAVEFILTER pwfltr;
    DWORD cbwfltr;
    LPCSTR pszTitle;
    char szFilterTag[ACMFILTERTAGDETAILS_FILTERTAG_CHARS];
    char szFilter[ACMFILTERDETAILS_FILTER_CHARS];
    LPSTR pszName;
    DWORD cchName;
    DWORD fdwEnum;
    LPWAVEFILTER pwfltrEnum;
    HINSTANCE hInstance;
    LPCSTR pszTemplateName;
    LPARAM lCustData;
    ACMFILTERCHOOSEHOOKPROCA pfnHook;
} ACMFILTERCHOOSEA, *PACMFILTERCHOOSEA, FAR *LPACMFILTERCHOOSEA;
typedef struct tACMFILTERCHOOSEW
{
    DWORD cbStruct;
    DWORD fdwStyle;
    HWND hwndOwner;
    LPWAVEFILTER pwfltr;
    DWORD cbwfltr;
    LPCWSTR pszTitle;
    WCHAR szFilterTag[ACMFILTERTAGDETAILS_FILTERTAG_CHARS];
    WCHAR szFilter[ACMFILTERDETAILS_FILTER_CHARS];
    LPWSTR pszName;
    DWORD cchName;
    DWORD fdwEnum;
    LPWAVEFILTER pwfltrEnum;
    HINSTANCE hInstance;
    LPCWSTR pszTemplateName;
    LPARAM lCustData;
    ACMFILTERCHOOSEHOOKPROCW pfnHook;
} ACMFILTERCHOOSEW, *PACMFILTERCHOOSEW, FAR *LPACMFILTERCHOOSEW;
MMRESULT ACMAPI acmFilterChooseA
(
    LPACMFILTERCHOOSEA pafltrc
);
MMRESULT ACMAPI acmFilterChooseW
(
    LPACMFILTERCHOOSEW pafltrc
);
typedef struct tACMSTREAMHEADER
{
    DWORD cbStruct;
    DWORD fdwStatus;
    DWORD_PTR dwUser;
    LPBYTE pbSrc;
    DWORD cbSrcLength;
    DWORD cbSrcLengthUsed;
    DWORD_PTR dwSrcUser;
    LPBYTE pbDst;
    DWORD cbDstLength;
    DWORD cbDstLengthUsed;
    DWORD_PTR dwDstUser;
    DWORD dwReservedDriver[_DRVRESERVED];
} ACMSTREAMHEADER, *PACMSTREAMHEADER, FAR *LPACMSTREAMHEADER;
MMRESULT ACMAPI acmStreamOpen
(
    LPHACMSTREAM phas,
    HACMDRIVER had,
    LPWAVEFORMATEX pwfxSrc,
    LPWAVEFORMATEX pwfxDst,
    LPWAVEFILTER pwfltr,
    DWORD_PTR dwCallback,
    DWORD_PTR dwInstance,
    DWORD fdwOpen
);
MMRESULT ACMAPI acmStreamClose
(
    HACMSTREAM has,
    DWORD fdwClose
);
MMRESULT ACMAPI acmStreamSize
(
    HACMSTREAM has,
    DWORD cbInput,
    LPDWORD pdwOutputBytes,
    DWORD fdwSize
);
MMRESULT ACMAPI acmStreamReset
(
    HACMSTREAM has,
    DWORD fdwReset
);
MMRESULT ACMAPI acmStreamMessage
(
    HACMSTREAM has,
    UINT uMsg,
    LPARAM lParam1,
    LPARAM lParam2
);
MMRESULT ACMAPI acmStreamConvert
(
    HACMSTREAM has,
    LPACMSTREAMHEADER pash,
    DWORD fdwConvert
);
MMRESULT ACMAPI acmStreamPrepareHeader
(
    HACMSTREAM has,
    LPACMSTREAMHEADER pash,
    DWORD fdwPrepare
);
MMRESULT ACMAPI acmStreamUnprepareHeader
(
    HACMSTREAM has,
    LPACMSTREAMHEADER pash,
    DWORD fdwUnprepare
);
#include "poppack.h"
}
#endif
#pragma endregion
