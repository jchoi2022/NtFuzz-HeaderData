#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
typedef enum DTC_STATUS_
{
 DTC_STATUS_UNKNOWN = 0,
 DTC_STATUS_STARTING = 1,
 DTC_STATUS_STARTED = 2,
 DTC_STATUS_PAUSING = 3,
 DTC_STATUS_PAUSED = 4,
 DTC_STATUS_CONTINUING = 5,
 DTC_STATUS_STOPPING = 6,
 DTC_STATUS_STOPPED = 7,
 DTC_STATUS_E_CANTCONTROL = 8,
 DTC_STATUS_FAILED = 9
} DTC_STATUS;
typedef HRESULT (__cdecl * DTC_GET_TRANSACTION_MANAGER)(
                  char * pszHost,
                  char * pszTmName,
                  REFIID rid,
                  DWORD dwReserved1,
                  WORD wcbReserved2,
                  void FAR * pvReserved2,
                  void** ppvObject ) ;
typedef HRESULT (__cdecl * DTC_GET_TRANSACTION_MANAGER_EX_A)(
                  char * i_pszHost,
                  char * i_pszTmName,
                  REFIID i_riid,
                  DWORD i_grfOptions,
                  void * i_pvConfigParams,
                   void ** o_ppvObject
         );
typedef HRESULT (__cdecl * DTC_GET_TRANSACTION_MANAGER_EX_W)(
                  WCHAR * i_pwszHost,
                  WCHAR * i_pwszTmName,
                  REFIID i_riid,
                  DWORD i_grfOptions,
                  void * i_pvConfigParams,
                   void ** o_ppvObject
         );
typedef HRESULT ( * DTC_INSTALL_CLIENT ) (
            LPTSTR i_pszRemoteTmHostName,
            DWORD i_dwProtocol,
            DWORD i_dwOverwrite );
const DWORD DTC_INSTALL_OVERWRITE_CLIENT = 0x00000001;
const DWORD DTC_INSTALL_OVERWRITE_SERVER = 0x00000002;
EXTERN_C
{
 DTC_GET_TRANSACTION_MANAGER __cdecl LoadDtcHelper (void);
 DTC_GET_TRANSACTION_MANAGER_EX_A __cdecl LoadDtcHelperExA (void);
 DTC_GET_TRANSACTION_MANAGER_EX_W __cdecl LoadDtcHelperExW (void);
 void __cdecl FreeDtcHelper (void);
 HMODULE __cdecl GetDtcLocaleResourceHandle(void);
 HRESULT __cdecl Initialize (void);
 HRESULT __cdecl Uninitialize (void);
 DTC_STATUS __cdecl GetDTCStatusW (_In_ LPWSTR wszHostName);
 DTC_STATUS __cdecl GetDTCStatusA (_In_ LPSTR szHostName);
 HRESULT __cdecl StartDTCW (_In_ LPWSTR wszHostName);
 HRESULT __cdecl StartDTCA (_In_ LPSTR szHostName);
 HRESULT __cdecl StopDTCW (_In_ LPWSTR wszHostName);
 HRESULT __cdecl StopDTCA (_In_ LPSTR szHostName);
 HRESULT __cdecl DtcInstallClient(_In_ LPTSTR i_pszRemoteTmHostName, DWORD i_dwProtocol, DWORD i_dwOverwrite);
}
#endif
#pragma endregion
