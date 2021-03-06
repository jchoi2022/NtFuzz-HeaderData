#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CLSID_DsQuery, 0x8a23e65e, 0x31c2, 0x11d0, 0x89, 0x1c, 0x0, 0xa0, 0x24, 0xab, 0x2d, 0xbb);
DEFINE_GUID(CLSID_DsFindObjects, 0x83ee3fe1, 0x57d9, 0x11d0, 0xb9, 0x32, 0x0, 0xa0, 0x24, 0xab, 0x2d, 0xbb);
DEFINE_GUID(CLSID_DsFindPeople, 0x83ee3fe2, 0x57d9, 0x11d0, 0xb9, 0x32, 0x0, 0xa0, 0x24, 0xab, 0x2d, 0xbb);
DEFINE_GUID(CLSID_DsFindPrinter, 0xb577f070, 0x7ee2, 0x11d0, 0x91, 0x3f, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsFindComputer, 0x16006700, 0x87ad, 0x11d0, 0x91, 0x40, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsFindVolume, 0xc1b3cbf1, 0x886a, 0x11d0, 0x91, 0x40, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsFindContainer, 0xc1b3cbf2, 0x886a, 0x11d0, 0x91, 0x40, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsFindAdvanced, 0x83ee3fe3, 0x57d9, 0x11d0, 0xb9, 0x32, 0x0, 0xa0, 0x24, 0xab, 0x2d, 0xbb);
DEFINE_GUID(CLSID_DsFindDomainController, 0x538c7b7e, 0xd25e, 0x11d0, 0x97, 0x42, 0x0, 0xa0, 0xc9, 0x6, 0xaf, 0x45);
DEFINE_GUID(CLSID_DsFindWriteableDomainController, 0x7cbef079, 0xaa84, 0x444b, 0xbc, 0x70, 0x68, 0xe4, 0x12, 0x83, 0xea, 0xbc);
DEFINE_GUID(CLSID_DsFindFrsMembers, 0x94ce4b18, 0xb3d3, 0x11d1, 0xb9, 0xb4, 0x0, 0xc0, 0x4f, 0xd8, 0xd5, 0xb0);
typedef struct
{
    DWORD cbStruct;
    DWORD dwFlags;
    LPWSTR pDefaultScope;
    LPWSTR pDefaultSaveLocation;
    LPWSTR pUserName;
    LPWSTR pPassword;
    LPWSTR pServer;
} DSQUERYINITPARAMS, * LPDSQUERYINITPARAMS;
typedef struct
{
    DWORD dwFlags;
    INT fmt;
    INT cx;
    INT idsName;
    LONG offsetProperty;
    DWORD dwReserved;
} DSCOLUMN, * LPDSCOLUMN;
typedef struct
{
    DWORD cbStruct;
    DWORD dwFlags;
    HINSTANCE hInstance;
    LONG offsetQuery;
    LONG iColumns;
    DWORD dwReserved;
    DSCOLUMN aColumns[1];
} DSQUERYPARAMS, * LPDSQUERYPARAMS;
typedef struct
{
    DWORD cbStruct;
    LONG cClasses;
    DWORD offsetClass[1];
} DSQUERYCLASSLIST, * LPDSQUERYCLASSLIST;
#endif
#pragma endregion
