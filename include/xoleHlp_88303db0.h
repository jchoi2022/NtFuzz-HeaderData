#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
const DWORD OLE_TM_CONFIG_VERSION_1 = 1;
const DWORD OLE_TM_CONFIG_VERSION_2 = 2;
typedef enum _APPLICATIONTYPE
{
    LOCAL_APPLICATIONTYPE,
    CLUSTERRESOURCE_APPLICATIONTYPE
} APPLICATIONTYPE;
const DWORD OLE_TM_FLAG_NONE = 0x00000000;
const DWORD OLE_TM_FLAG_NODEMANDSTART = 0x00000001;
const DWORD OLE_TM_FLAG_NOAGILERECOVERY = 0x00000002;
const DWORD OLE_TM_FLAG_QUERY_SERVICE_LOCKSTATUS = 0x80000000;
const DWORD OLE_TM_FLAG_INTERNAL_TO_TM = 0x40000000;
typedef struct _OLE_TM_CONFIG_PARAMS_V1
{
    DWORD dwVersion;
    DWORD dwcConcurrencyHint;
} OLE_TM_CONFIG_PARAMS_V1;
typedef struct _OLE_TM_CONFIG_PARAMS_V2
{
    DWORD dwVersion;
    DWORD dwcConcurrencyHint;
    APPLICATIONTYPE applicationType;
    GUID clusterResourceId;
} OLE_TM_CONFIG_PARAMS_V2;
EXTERN_C HRESULT __cdecl DtcGetTransactionManager(
                                             _In_opt_ LPSTR i_pszHost,
                                             _In_opt_ LPSTR i_pszTmName,
                                             REFIID i_riid,
                                             DWORD i_dwReserved1,
                                             WORD i_wcbReserved2,
                                             _In_reads_bytes_opt_(i_wcbReserved2) void * i_pvReserved2,
                                              void** o_ppvObject
                                    );
EXTERN_C HRESULT __cdecl DtcGetTransactionManagerC(
                                             _In_opt_ LPSTR i_pszHost,
                                             _In_opt_ LPSTR i_pszTmName,
                                             REFIID i_riid,
                                             DWORD i_dwReserved1,
                                             WORD i_wcbReserved2,
                                             _In_reads_bytes_opt_(i_wcbReserved2) void * i_pvReserved2,
                                              void ** o_ppvObject
                                    );
EXTERN_C HRESULT __cdecl DtcGetTransactionManagerExA(
                                             _In_opt_ LPSTR i_pszHost,
                                             _In_opt_ LPSTR i_pszTmName,
                                             REFIID i_riid,
                                             DWORD i_grfOptions,
                                             void * i_pvConfigParams,
                                              void ** o_ppvObject
                                    );
EXTERN_C HRESULT __cdecl DtcGetTransactionManagerExW(
                                             _In_opt_ LPWSTR i_pwszHost,
                                             _In_opt_ LPWSTR i_pwszTmName,
                                             REFIID i_riid,
                                             DWORD i_grfOptions,
                                             void * i_pvConfigParams,
                                              void ** o_ppvObject
                                    );
EXTERN_GUID(CLSID_MSDtcTransactionManager, 0x5b18ab61, 0x91d, 0x11d1, 0x97, 0xdf, 0x0, 0xc0, 0x4f, 0xb9, 0x61, 0x8a);
EXTERN_GUID(CLSID_MSDtcTransaction, 0x39f8d76b, 0x928, 0x11d1, 0x97, 0xdf, 0x0, 0xc0, 0x4f, 0xb9, 0x61, 0x8a);
#endif
#pragma endregion
