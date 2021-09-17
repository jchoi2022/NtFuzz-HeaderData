#include <fdi_fci_types.h>
#include <basetsd.h>
#include <specstrings.h>
typedef _Null_terminated_ char* LPSTR;
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum {
    FDIERROR_NONE,
    FDIERROR_CABINET_NOT_FOUND,
    FDIERROR_NOT_A_CABINET,
    FDIERROR_UNKNOWN_CABINET_VERSION,
    FDIERROR_CORRUPT_CABINET,
    FDIERROR_ALLOC_FAIL,
    FDIERROR_BAD_COMPR_TYPE,
    FDIERROR_MDI_FAIL,
    FDIERROR_TARGET_FILE,
    FDIERROR_RESERVE_MISMATCH,
    FDIERROR_WRONG_CABINET,
    FDIERROR_USER_ABORT,
    FDIERROR_EOF,
} FDIERROR;
typedef void FAR *HFDI;
typedef struct {
    long cbCabinet;
    USHORT cFolders;
    USHORT cFiles;
    USHORT setID;
    USHORT iCabinet;
    BOOL fReserve;
    BOOL hasprev;
    BOOL hasnext;
} FDICABINETINFO;
typedef FDICABINETINFO FAR *PFDICABINETINFO;
typedef enum {
    fdidtNEW_CABINET,
    fdidtNEW_FOLDER,
    fdidtDECRYPT,
} FDIDECRYPTTYPE;
typedef struct {
    FDIDECRYPTTYPE fdidt;
    void FAR *pvUser;
    union {
        struct {
            void FAR *pHeaderReserve;
            USHORT cbHeaderReserve;
            USHORT setID;
            int iCabinet;
        } cabinet;
        struct {
            void FAR *pFolderReserve;
            USHORT cbFolderReserve;
            USHORT iFolder;
        } folder;
        struct {
            void FAR *pDataReserve;
            USHORT cbDataReserve;
            void FAR *pbData;
            USHORT cbData;
            BOOL fSplit;
            USHORT cbPartial;
        } decrypt;
    };
} FDIDECRYPT;
typedef FDIDECRYPT FAR *PFDIDECRYPT;
typedef void HUGE * (FAR DIAMONDAPI *PFNALLOC)(ULONG cb);
typedef void (FAR DIAMONDAPI *PFNFREE)(_In_opt_ void HUGE *pv);
typedef INT_PTR (FAR DIAMONDAPI *PFNOPEN) (_In_ LPSTR pszFile, int oflag, int pmode);
typedef UINT (FAR DIAMONDAPI *PFNREAD) (_In_ INT_PTR hf, _Out_writes_bytes_(cb) void FAR *pv, UINT cb);
typedef UINT (FAR DIAMONDAPI *PFNWRITE)(_In_ INT_PTR hf, _In_reads_bytes_(cb) void FAR *pv, UINT cb);
typedef int (FAR DIAMONDAPI *PFNCLOSE)(_In_ INT_PTR hf);
typedef long (FAR DIAMONDAPI *PFNSEEK) (_In_ INT_PTR hf, long dist, int seektype);
typedef int (FAR DIAMONDAPI *PFNFDIDECRYPT)(PFDIDECRYPT pfdid);
typedef struct {
    long cb;
    char FAR *psz1;
    char FAR *psz2;
    char FAR *psz3;
    void FAR *pv;
    INT_PTR hf;
    USHORT date;
    USHORT time;
    USHORT attribs;
    USHORT setID;
    USHORT iCabinet;
    USHORT iFolder;
    FDIERROR fdie;
} FDINOTIFICATION, FAR *PFDINOTIFICATION;
typedef enum {
    fdintCABINET_INFO,
    fdintPARTIAL_FILE,
    fdintCOPY_FILE,
    fdintCLOSE_FILE_INFO,
    fdintNEXT_CABINET,
    fdintENUMERATE,
} FDINOTIFICATIONTYPE;
typedef INT_PTR (FAR DIAMONDAPI *PFNFDINOTIFY)(FDINOTIFICATIONTYPE fdint,
                                               PFDINOTIFICATION pfdin);
                                                  PFDINOTIFICATION pfdin)
typedef struct {
    char ach[2];
    long cbFile;
} FDISPILLFILE;
typedef FDISPILLFILE *PFDISPILLFILE;
HFDI FAR DIAMONDAPI FDICreate(__callback PFNALLOC pfnalloc,
                              __callback PFNFREE pfnfree,
                              __callback PFNOPEN pfnopen,
                              __callback PFNREAD pfnread,
                              __callback PFNWRITE pfnwrite,
                              __callback PFNCLOSE pfnclose,
                              __callback PFNSEEK pfnseek,
                              int cpuType,
                              _Inout_ PERF perf);
BOOL FAR DIAMONDAPI FDIIsCabinet(_In_ HFDI hfdi,
                                 _In_ INT_PTR hf,
                                 _Out_opt_ PFDICABINETINFO pfdici);
BOOL FAR DIAMONDAPI FDICopy(_In_ HFDI hfdi,
                            _In_ LPSTR pszCabinet,
                            _In_ LPSTR pszCabPath,
                            int flags,
                            __callback PFNFDINOTIFY pfnfdin,
                            __callback PFNFDIDECRYPT pfnfdid,
                            _In_opt_ void FAR *pvUser);
BOOL FAR DIAMONDAPI FDIDestroy(_In_ HFDI hfdi);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOL FAR DIAMONDAPI FDITruncateCabinet(_In_ HFDI hfdi,
                                       _In_ LPSTR pszCabinetName,
                                       USHORT iFolderToDelete);
#endif
#pragma endregion
}
