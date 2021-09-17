       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct DRVCONFIGINFOEX {
    DWORD dwDCISize;
    LPCWSTR lpszDCISectionName;
    LPCWSTR lpszDCIAliasName;
    DWORD dnDevNode;
} DRVCONFIGINFOEX, *PDRVCONFIGINFOEX, NEAR *NPDRVCONFIGINFOEX, FAR *LPDRVCONFIGINFOEX;
BOOL
APIENTRY
DriverCallback(
    DWORD_PTR dwCallback,
    DWORD dwFlags,
    HDRVR hDevice,
    DWORD dwMsg,
    DWORD_PTR dwUser,
    DWORD_PTR dwParam1,
    DWORD_PTR dwParam2
    );
                                                                             LONG
WINAPI
sndOpenSound(
    _In_ LPCWSTR EventName,
    _In_ LPCWSTR AppName,
    _In_ INT32 Flags,
    _Outptr_ PHANDLE FileHandle
    );
typedef DWORD (APIENTRY *DRIVERMSGPROC)(DWORD, DWORD, DWORD_PTR, DWORD_PTR, DWORD_PTR);
UINT
APIENTRY
mmDrvInstall(
    HDRVR hDriver,
    LPCWSTR wszDrvEntry,
    DRIVERMSGPROC drvMessage,
    UINT wFlags
    );
typedef DWORD FOURCC;
typedef char _huge * HPSTR;
DECLARE_HANDLE(HMMIO);
typedef LRESULT (CALLBACK MMIOPROC)(LPSTR lpmmioinfo, UINT uMsg,
            LPARAM lParam1, LPARAM lParam2);
typedef MMIOPROC FAR *LPMMIOPROC;
typedef struct _MMIOINFO
{
        DWORD dwFlags;
        FOURCC fccIOProc;
        LPMMIOPROC pIOProc;
        UINT wErrorRet;
        HTASK htask;
        LONG cchBuffer;
        HPSTR pchBuffer;
        HPSTR pchNext;
        HPSTR pchEndRead;
        HPSTR pchEndWrite;
        LONG lBufOffset;
        LONG lDiskOffset;
        DWORD adwInfo[3];
        DWORD dwReserved1;
        DWORD dwReserved2;
        HMMIO hmmio;
} MMIOINFO, *PMMIOINFO, NEAR *NPMMIOINFO, FAR *LPMMIOINFO;
typedef const MMIOINFO FAR *LPCMMIOINFO;
typedef struct _MMCKINFO
{
        FOURCC ckid;
        DWORD cksize;
        FOURCC fccType;
        DWORD dwDataOffset;
        DWORD dwFlags;
} MMCKINFO, *PMMCKINFO, NEAR *NPMMCKINFO, FAR *LPMMCKINFO;
typedef const MMCKINFO *LPCMMCKINFO;
WINMMAPI
FOURCC
WINAPI
mmioStringToFOURCCA(
    LPCSTR sz,
    _In_ UINT uFlags
    );
WINMMAPI
FOURCC
WINAPI
mmioStringToFOURCCW(
    LPCWSTR sz,
    _In_ UINT uFlags
    );
WINMMAPI
LPMMIOPROC
WINAPI
mmioInstallIOProcA(
    _In_ FOURCC fccIOProc,
    _In_opt_ LPMMIOPROC pIOProc,
    _In_ DWORD dwFlags
    );
WINMMAPI
LPMMIOPROC
WINAPI
mmioInstallIOProcW(
    _In_ FOURCC fccIOProc,
    _In_opt_ LPMMIOPROC pIOProc,
    _In_ DWORD dwFlags
    );
WINMMAPI
HMMIO
WINAPI
mmioOpenA(
    _Inout_updates_bytes_opt_(128) LPSTR pszFileName,
    _Inout_opt_ LPMMIOINFO pmmioinfo,
    _In_ DWORD fdwOpen
    );
WINMMAPI
HMMIO
WINAPI
mmioOpenW(
    _Inout_updates_bytes_opt_(128) LPWSTR pszFileName,
    _Inout_opt_ LPMMIOINFO pmmioinfo,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
mmioRenameA(
    _In_ LPCSTR pszFileName,
    _In_ LPCSTR pszNewFileName,
    _In_opt_ LPCMMIOINFO pmmioinfo,
    _In_ DWORD fdwRename
    );
WINMMAPI
MMRESULT
WINAPI
mmioRenameW(
    _In_ LPCWSTR pszFileName,
    _In_ LPCWSTR pszNewFileName,
    _In_opt_ LPCMMIOINFO pmmioinfo,
    _In_ DWORD fdwRename
    );
WINMMAPI
MMRESULT
WINAPI
mmioClose(
    _In_ HMMIO hmmio,
    _In_ UINT fuClose
    );
WINMMAPI
LONG
WINAPI
mmioRead(
    _In_ HMMIO hmmio,
    _Out_writes_bytes_(cch) HPSTR pch,
    _In_ LONG cch
    );
WINMMAPI
LONG
WINAPI
mmioWrite(
    _In_ HMMIO hmmio,
    _In_reads_bytes_(cch) const char _huge * pch,
    _In_ LONG cch
    );
WINMMAPI
LONG
WINAPI
mmioSeek(
    _In_ HMMIO hmmio,
    _In_ LONG lOffset,
    _In_ int iOrigin
    );
WINMMAPI
MMRESULT
WINAPI
mmioGetInfo(
    _In_ HMMIO hmmio,
    _Out_ LPMMIOINFO pmmioinfo,
    _In_ UINT fuInfo
    );
WINMMAPI
MMRESULT
WINAPI
mmioSetInfo(
    _In_ HMMIO hmmio,
    _In_ LPCMMIOINFO pmmioinfo,
    _In_ UINT fuInfo
    );
WINMMAPI
MMRESULT
WINAPI
mmioSetBuffer(
    _In_ HMMIO hmmio,
    _Out_writes_opt_(cchBuffer) LPSTR pchBuffer,
    _In_ LONG cchBuffer,
    _In_ UINT fuBuffer
    );
WINMMAPI
MMRESULT
WINAPI
mmioFlush(
    _In_ HMMIO hmmio,
    _In_ UINT fuFlush
    );
WINMMAPI
MMRESULT
WINAPI
mmioAdvance(
    _In_ HMMIO hmmio,
    _In_opt_ LPMMIOINFO pmmioinfo,
    _In_ UINT fuAdvance
    );
WINMMAPI
LRESULT
WINAPI
mmioSendMessage(
    _In_ HMMIO hmmio,
    _In_ UINT uMsg,
    _In_opt_ LPARAM lParam1,
    _In_opt_ LPARAM lParam2
    );
WINMMAPI
MMRESULT
WINAPI
mmioDescend(
    _In_ HMMIO hmmio,
    _Inout_ LPMMCKINFO pmmcki,
    _In_opt_ const MMCKINFO FAR * pmmckiParent,
    _In_ UINT fuDescend
    );
WINMMAPI
MMRESULT
WINAPI
mmioAscend(
    _In_ HMMIO hmmio,
    _In_ LPMMCKINFO pmmcki,
    _In_ UINT fuAscend
    );
WINMMAPI
MMRESULT
WINAPI
mmioCreateChunk(
    _In_ HMMIO hmmio,
    _In_ LPMMCKINFO pmmcki,
    _In_ UINT fuCreate
    );
#endif
#pragma endregion
}
