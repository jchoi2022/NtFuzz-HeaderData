#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "stgprop.h"
STDAPI LoadIFilter( PCWSTR pwcsPath,
                    _In_ IUnknown * pUnkOuter,
                    _Outptr_ void ** ppIUnk );
STDAPI LoadIFilterEx( PCWSTR pwcsPath,
                      DWORD dwFlags,
                      REFIID riid,
                      _Outptr_ void ** ppIUnk );
STDAPI BindIFilterFromStorage(_In_ IStorage * pStg,
                              _In_ IUnknown * pUnkOuter,
                              _Outptr_ void ** ppIUnk );
STDAPI BindIFilterFromStream(_In_ IStream * pStm,
                             _In_ IUnknown * pUnkOuter,
                             _Outptr_ void ** ppIUnk );
    { 0xF9AE8980, 0x7E52, 0x11d0, \
      { 0x89, 0x64, 0x00, 0xC0, 0x4F, 0xD6, 0x11, 0xD7 } }
    { 0x41CF5AE0, 0xF75A, 0x4806, \
      { 0xBD, 0x87, 0x59, 0xC7, 0xD9, 0x24, 0x8E, 0xB9} }
    { 0xA9BD1526, 0x6A80, 0x11D0, \
      { 0x8C, 0x9D, 0x00, 0x20, 0xAF, 0x1D, 0x74, 0x0E } }
    { 0x63623309, 0x2d8b, 0x4d17, \
      { 0xb1, 0x52, 0x6e, 0x29, 0x56, 0xc2, 0x6a, 0x70 } }
    { 0xA7AC77ED, 0xF8D7, 0x11CE, \
      { 0xA7, 0x98, 0x00, 0x20, 0xF8, 0x00, 0x80, 0x25 } }
    { 0xafafaca5, 0xb5d1, 0x11d0, \
      { 0x8c, 0x62, 0x00, 0xc0, 0x4f, 0xc2, 0xdb, 0x8d } }
    { 0xaa6ee6b0, 0xe828, 0x11d0, \
      { 0xb2, 0x3e, 0x00, 0xaa, 0x00, 0x47, 0xfc, 0x01 } }
STDAPI SetCatalogState ( WCHAR const * pwcsCat,
                         WCHAR const * pwcsMachine,
                         DWORD dwNewState,
                         DWORD * pdwOldState );
#include <pshpack4.h>
typedef struct _CI_STATE
    {
    DWORD cbStruct;
    DWORD cWordList;
    DWORD cPersistentIndex;
    DWORD cQueries;
    DWORD cDocuments;
    DWORD cFreshTest;
    DWORD dwMergeProgress;
    DWORD eState;
    DWORD cFilteredDocuments;
    DWORD cTotalDocuments;
    DWORD cPendingScans;
    DWORD dwIndexSize;
    DWORD cUniqueKeys;
    DWORD cSecQDocuments;
    DWORD dwPropCacheSize;
    } CI_STATE;
#include <poppack.h>
#endif
#pragma endregion
