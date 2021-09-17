#include <fdi_fci_types.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <specstrings.h>
typedef _Null_terminated_ char* LPSTR;
#include <basetsd.h>
extern "C" {
typedef enum {
FCIERR_NONE,
FCIERR_OPEN_SRC,
FCIERR_READ_SRC,
FCIERR_ALLOC_FAIL,
FCIERR_TEMP_FILE,
FCIERR_BAD_COMPR_TYPE,
FCIERR_CAB_FILE,
FCIERR_USER_ABORT,
FCIERR_MCI_FAIL,
FCIERR_CAB_FORMAT_LIMIT
} FCIERROR;
typedef void * HFCI;
typedef struct {
    ULONG cb;
    ULONG cbFolderThresh;
    UINT cbReserveCFHeader;
    UINT cbReserveCFFolder;
    UINT cbReserveCFData;
    int iCab;
    int iDisk;
    int fFailOnIncompressible;
    USHORT setID;
    char szDisk[CB_MAX_DISK_NAME];
    char szCab[CB_MAX_CABINET_NAME];
    char szCabPath[CB_MAX_CAB_PATH];
} CCAB;
typedef CCAB *PCCAB;
typedef void HUGE * (FAR DIAMONDAPI *PFNFCIALLOC)(ULONG cb);
typedef void (FAR DIAMONDAPI *PFNFCIFREE)(void HUGE *memory);
typedef INT_PTR (FAR DIAMONDAPI *PFNFCIOPEN) (_In_ LPSTR pszFile, int oflag, int pmode, int FAR *err, void FAR *pv);
typedef UINT (FAR DIAMONDAPI *PFNFCIREAD) (INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv);
typedef UINT (FAR DIAMONDAPI *PFNFCIWRITE)(INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv);
typedef int (FAR DIAMONDAPI *PFNFCICLOSE)(INT_PTR hf, int FAR *err, void FAR *pv);
typedef long (FAR DIAMONDAPI *PFNFCISEEK) (INT_PTR hf, long dist, int seektype, int FAR *err, void FAR *pv);
typedef int (FAR DIAMONDAPI *PFNFCIDELETE) (_In_ LPSTR pszFile, int FAR *err, void FAR *pv);
typedef BOOL (DIAMONDAPI *PFNFCIGETNEXTCABINET)(PCCAB pccab,
                                                ULONG cbPrevCab,
                                                void FAR *pv);
                                                   ULONG cbPrevCab, \
                                                   void FAR *pv)
typedef int (DIAMONDAPI *PFNFCIFILEPLACED)(PCCAB pccab,
                                           _In_ LPSTR pszFile,
                                           long cbFile,
                                           BOOL fContinuation,
                                           void FAR *pv);
                                              _In_ LPSTR pszFile, \
                                              long cbFile, \
                                              BOOL fContinuation, \
                                              void FAR *pv)
typedef INT_PTR (DIAMONDAPI *PFNFCIGETOPENINFO)(_In_ LPSTR pszName,
                                                USHORT *pdate,
                                                USHORT *ptime,
                                                USHORT *pattribs,
                                                int FAR *err,
                                                void FAR *pv);
                                                   USHORT *pdate, \
                                                   USHORT *ptime, \
                                                   USHORT *pattribs, \
                                                   int FAR *err, \
                                                   void FAR *pv)
typedef long (DIAMONDAPI *PFNFCISTATUS)(UINT typeStatus,
                                        ULONG cb1,
                                        ULONG cb2,
                                        void FAR *pv);
                                           ULONG cb1, \
                                           ULONG cb2, \
                                           void FAR *pv)
typedef BOOL (DIAMONDAPI *PFNFCIGETTEMPFILE)(_Out_writes_bytes_(cbTempName) char *pszTempName,
                                             _In_range_(>=, MAX_PATH) int cbTempName,
                                             void FAR *pv);
                                                _In_range_(>=, MAX_PATH) int cbTempName, \
                                                void FAR *pv)
HFCI DIAMONDAPI FCICreate(_In_ PERF perf,
                          __callback PFNFCIFILEPLACED pfnfcifp,
                          __callback PFNFCIALLOC pfna,
                          __callback PFNFCIFREE pfnf,
                          __callback PFNFCIOPEN pfnopen,
                          __callback PFNFCIREAD pfnread,
                          __callback PFNFCIWRITE pfnwrite,
                          __callback PFNFCICLOSE pfnclose,
                          __callback PFNFCISEEK pfnseek,
                          __callback PFNFCIDELETE pfndelete,
                          __callback PFNFCIGETTEMPFILE pfnfcigtf,
                          _In_ PCCAB pccab,
                          _In_opt_ void FAR *pv
                         );
BOOL DIAMONDAPI FCIAddFile(_In_ HFCI hfci,
                           _In_ LPSTR pszSourceFile,
                           _In_ LPSTR pszFileName,
                           BOOL fExecute,
                           __callback PFNFCIGETNEXTCABINET pfnfcignc,
                           __callback PFNFCISTATUS pfnfcis,
                           __callback PFNFCIGETOPENINFO pfnfcigoi,
                           TCOMP typeCompress
                          );
BOOL DIAMONDAPI FCIFlushCabinet(_In_ HFCI hfci,
                                BOOL fGetNextCab,
                                __callback PFNFCIGETNEXTCABINET pfnfcignc,
                                __callback PFNFCISTATUS pfnfcis
                               );
BOOL DIAMONDAPI FCIFlushFolder(_In_ HFCI hfci,
                               __callback PFNFCIGETNEXTCABINET pfnfcignc,
                               __callback PFNFCISTATUS pfnfcis
                              );
BOOL DIAMONDAPI FCIDestroy (_In_ HFCI hfci);
}
#endif
#pragma endregion
