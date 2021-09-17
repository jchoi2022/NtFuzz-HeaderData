       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef unsigned long( WINAPIV *READEMBEDPROC ) ( void*, void*, const unsigned long );
typedef unsigned long( WINAPIV *WRITEEMBEDPROC ) ( void*, const void*, const unsigned long );
typedef struct
{
    unsigned short usStructSize;
    unsigned short usRefStrSize;
    unsigned short *pusRefStr;
}TTLOADINFO;
typedef struct
{
    unsigned short usStructSize;
    unsigned short usRootStrSize;
    unsigned short *pusRootStr;
}TTEMBEDINFO;
typedef struct
{
    unsigned long ulStructSize;
    long lTestFromSize;
    long lTestToSize;
    unsigned long ulCharSet;
    unsigned short usReserved1;
    unsigned short usCharCodeCount;
    unsigned short* pusCharCodeSet;
}TTVALIDATIONTESTSPARAMS;
typedef struct
{
    unsigned long ulStructSize;
    long lTestFromSize;
    long lTestToSize;
    unsigned long ulCharSet;
    unsigned short usReserved1;
    unsigned short usCharCodeCount;
    unsigned long* pulCharCodeSet;
}TTVALIDATIONTESTSPARAMSEX;
LONG WINAPI TTEmbedFont
(
    _In_ HDC hDC,
    _In_ ULONG ulFlags,
    _In_ ULONG ulCharSet,
    _Out_ ULONG* pulPrivStatus,
    _Out_ ULONG* pulStatus,
    __callback WRITEEMBEDPROC lpfnWriteToStream,
    _In_ LPVOID lpvWriteStream,
    _In_reads_(usCharCodeCount) USHORT* pusCharCodeSet,
    _In_ USHORT usCharCodeCount,
    _In_ USHORT usLanguage,
    _In_opt_ TTEMBEDINFO* pTTEmbedInfo
);
LONG WINAPI TTEmbedFontFromFileA
(
    _In_ HDC hDC,
    _In_ LPCSTR szFontFileName,
    _In_ USHORT usTTCIndex,
    _In_ ULONG ulFlags,
    _In_ ULONG ulCharSet,
    _Out_ ULONG* pulPrivStatus,
    _Out_ ULONG* pulStatus,
    __callback WRITEEMBEDPROC lpfnWriteToStream,
    _In_ LPVOID lpvWriteStream,
    _In_reads_(usCharCodeCount) USHORT* pusCharCodeSet,
    _In_ USHORT usCharCodeCount,
    _In_ USHORT usLanguage,
    _In_opt_ TTEMBEDINFO* pTTEmbedInfo
);
LONG WINAPI TTLoadEmbeddedFont
(
    _Out_ HANDLE* phFontReference,
    _In_ ULONG ulFlags,
    _Out_ ULONG* pulPrivStatus,
    _In_ ULONG ulPrivs,
    _Out_ ULONG* pulStatus,
    _In_ READEMBEDPROC lpfnReadFromStream,
    _In_ LPVOID lpvReadStream,
    _In_opt_ LPWSTR szWinFamilyName,
    _In_opt_ LPSTR szMacFamilyName,
    _In_opt_ TTLOADINFO* pTTLoadInfo
);
LONG WINAPI TTGetEmbeddedFontInfo
(
    _In_ ULONG ulFlags,
    _Out_ ULONG* pulPrivStatus,
    _In_ ULONG ulPrivs,
    _Out_ ULONG* pulStatus,
    __callback READEMBEDPROC lpfnReadFromStream,
    _In_ LPVOID lpvReadStream,
    _In_opt_ TTLOADINFO* pTTLoadInfo
);
LONG WINAPI TTDeleteEmbeddedFont
(
    _In_ HANDLE hFontReference,
    _In_ ULONG ulFlags,
    _Out_ ULONG* pulStatus
);
LONG WINAPI TTGetEmbeddingType
(
    _In_ HDC hDC,
    _Out_ ULONG* pulEmbedType
);
LONG WINAPI TTCharToUnicode
(
    _In_ HDC hDC,
    _In_reads_(ulCharCodeSize) UCHAR* pucCharCodes,
    _In_ ULONG ulCharCodeSize,
    _Out_writes_(ulShortCodeSize) USHORT* pusShortCodes,
    _In_ ULONG ulShortCodeSize,
    _In_ ULONG ulFlags
);
LONG WINAPI TTRunValidationTests
(
    _In_ HDC hDC,
    _In_ TTVALIDATIONTESTSPARAMS* pTestParam
);
LONG WINAPI TTIsEmbeddingEnabled
(
    _In_ HDC hDC,
    _Out_ BOOL* pbEnabled
);
LONG WINAPI TTIsEmbeddingEnabledForFacename
(
    _In_ LPCSTR lpszFacename,
    _Out_ BOOL* pbEnabled
);
LONG WINAPI TTEnableEmbeddingForFacename
(
    _In_ LPCSTR lpszFacename,
    _In_ BOOL bEnable
);
LONG WINAPI TTEmbedFontEx
(
    _In_ HDC hDC,
    _In_ ULONG ulFlags,
    _In_ ULONG ulCharSet,
    _Out_ ULONG* pulPrivStatus,
    _Out_ ULONG* pulStatus,
    __callback WRITEEMBEDPROC lpfnWriteToStream,
    _In_ LPVOID lpvWriteStream,
    _In_reads_(usCharCodeCount) ULONG* pulCharCodeSet,
    _In_ USHORT usCharCodeCount,
    _In_ USHORT usLanguage,
    _In_opt_ TTEMBEDINFO* pTTEmbedInfo
);
LONG WINAPI TTRunValidationTestsEx
(
    _In_ HDC hDC,
    _In_ TTVALIDATIONTESTSPARAMSEX* pTestParam
);
LONG WINAPI TTGetNewFontName
(
    _In_ HANDLE* phFontReference,
    _Out_writes_(cchMaxWinName) LPWSTR wzWinFamilyName,
    _In_ LONG cchMaxWinName,
    _Out_writes_(cchMaxMacName) LPSTR szMacFamilyName,
    _In_ LONG cchMaxMacName
);
}
#endif
#pragma endregion
