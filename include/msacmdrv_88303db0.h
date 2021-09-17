#error MSACM.H to be included first
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "pshpack1.h"
extern "C" {
                                         ((long)(mnr)<<16)| \
                                         ((long)bld))
typedef struct tACMDRVOPENDESCA
{
    DWORD cbStruct;
    FOURCC fccType;
    FOURCC fccComp;
    DWORD dwVersion;
    DWORD dwFlags;
    DWORD dwError;
    LPCSTR pszSectionName;
    LPCSTR pszAliasName;
    DWORD dnDevNode;
} ACMDRVOPENDESCA, *PACMDRVOPENDESCA, FAR *LPACMDRVOPENDESCA;
typedef struct tACMDRVOPENDESCW
{
    DWORD cbStruct;
    FOURCC fccType;
    FOURCC fccComp;
    DWORD dwVersion;
    DWORD dwFlags;
    DWORD dwError;
    LPCWSTR pszSectionName;
    LPCWSTR pszAliasName;
    DWORD dnDevNode;
} ACMDRVOPENDESCW, *PACMDRVOPENDESCW, FAR *LPACMDRVOPENDESCW;
typedef struct tACMDRVSTREAMINSTANCE
{
    DWORD cbStruct;
    LPWAVEFORMATEX pwfxSrc;
    LPWAVEFORMATEX pwfxDst;
    LPWAVEFILTER pwfltr;
    DWORD_PTR dwCallback;
    DWORD_PTR dwInstance;
    DWORD fdwOpen;
    DWORD fdwDriver;
    DWORD_PTR dwDriver;
    HACMSTREAM has;
} ACMDRVSTREAMINSTANCE, *PACMDRVSTREAMINSTANCE, FAR *LPACMDRVSTREAMINSTANCE;
typedef struct tACMDRVSTREAMHEADER FAR *LPACMDRVSTREAMHEADER;
typedef struct tACMDRVSTREAMHEADER
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
    DWORD fdwConvert;
    LPACMDRVSTREAMHEADER padshNext;
    DWORD fdwDriver;
    DWORD_PTR dwDriver;
    DWORD fdwPrepared;
    DWORD_PTR dwPrepared;
    LPBYTE pbPreparedSrc;
    DWORD cbPreparedSrcLength;
    LPBYTE pbPreparedDst;
    DWORD cbPreparedDstLength;
} ACMDRVSTREAMHEADER, *PACMDRVSTREAMHEADER;
typedef struct tACMDRVSTREAMSIZE
{
    DWORD cbStruct;
    DWORD fdwSize;
    DWORD cbSrcLength;
    DWORD cbDstLength;
} ACMDRVSTREAMSIZE, *PACMDRVSTREAMSIZE, FAR *LPACMDRVSTREAMSIZE;
typedef struct tACMDRVFORMATSUGGEST
{
    DWORD cbStruct;
    DWORD fdwSuggest;
    LPWAVEFORMATEX pwfxSrc;
    DWORD cbwfxSrc;
    LPWAVEFORMATEX pwfxDst;
    DWORD cbwfxDst;
} ACMDRVFORMATSUGGEST, *PACMDRVFORMATSUGGEST, FAR *LPACMDRVFORMATSUGGEST;
#include "poppack.h"
}
#endif
#pragma endregion
