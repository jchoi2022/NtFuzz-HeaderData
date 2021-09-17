#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef int (CALLBACK* EMFPLAYPROC)( HDC, INT, HANDLE );
HANDLE WINAPI GdiGetSpoolFileHandle(
    LPWSTR pwszPrinterName,
    LPDEVMODEW pDevmode,
    LPWSTR pwszDocName);
BOOL WINAPI GdiDeleteSpoolFileHandle(
    HANDLE SpoolFileHandle);
DWORD WINAPI GdiGetPageCount(
    HANDLE SpoolFileHandle);
HDC WINAPI GdiGetDC(
    HANDLE SpoolFileHandle);
HANDLE WINAPI GdiGetPageHandle(
    HANDLE SpoolFileHandle,
    DWORD Page,
    LPDWORD pdwPageType);
BOOL WINAPI GdiStartDocEMF(
    HANDLE SpoolFileHandle,
    DOCINFOW *pDocInfo);
BOOL WINAPI GdiStartPageEMF(
    HANDLE SpoolFileHandle);
BOOL WINAPI GdiPlayPageEMF(
    HANDLE SpoolFileHandle,
    HANDLE hemf,
    RECT *prectDocument,
    RECT *prectBorder,
    RECT *prectClip);
BOOL WINAPI GdiEndPageEMF(
    HANDLE SpoolFileHandle,
    DWORD dwOptimization);
BOOL WINAPI GdiEndDocEMF(
    HANDLE SpoolFileHandle);
BOOL WINAPI GdiGetDevmodeForPage(
    HANDLE SpoolFileHandle,
    DWORD dwPageNumber,
    PDEVMODEW *pCurrDM,
    PDEVMODEW *pLastDM);
BOOL WINAPI GdiResetDCEMF(
    HANDLE SpoolFileHandle,
    PDEVMODEW pCurrDM);
#endif
#pragma endregion
