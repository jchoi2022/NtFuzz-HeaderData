       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <specstrings.h>
#include <ndattrib.h>
extern "C" {
struct SOCKET_ADDRESS_LIST;
typedef PVOID NDFHANDLE;
STDAPI
NdfCreateIncident(
    _In_ LPCWSTR helperClassName,
    ULONG celt,
    _In_reads_(celt) HELPER_ATTRIBUTE *attributes,
    _Outptr_ NDFHANDLE *handle);
STDAPI
NdfCreateWinSockIncident(
    SOCKET sock,
    _In_opt_ LPCWSTR host,
    USHORT port,
    _In_opt_ LPCWSTR appId,
    _In_opt_ SID *userId,
    _Outptr_ NDFHANDLE *handle);
STDAPI
NdfCreateWebIncident(
    _In_ LPCWSTR url,
    _Outptr_ NDFHANDLE *handle);
STDAPI
NdfCreateWebIncidentEx(
       _In_ LPCWSTR url,
       BOOL useWinHTTP,
       _In_opt_ LPWSTR moduleName,
       _Outptr_ NDFHANDLE *handle);
STDAPI NdfCreateSharingIncident(
    _In_ LPCWSTR UNCPath,
    _Outptr_ NDFHANDLE *handle);
STDAPI NdfCreateDNSIncident(
    _In_ LPCWSTR hostname,
    WORD queryType,
    _Outptr_ NDFHANDLE *handle);
STDAPI NdfCreateConnectivityIncident(
    _Outptr_ NDFHANDLE *handle);
STDAPI NdfCreateNetConnectionIncident(
    _Outptr_ NDFHANDLE *handle,
    GUID id);
STDAPI NdfCreatePnrpIncident(
    _In_ LPCWSTR cloudname,
    _In_opt_ LPCWSTR peername,
    _In_ BOOL diagnosePublish,
    _In_opt_ LPCWSTR appId,
    _Outptr_ NDFHANDLE *handle);
STDAPI NdfCreateInboundIncident(
    _In_opt_ LPCWSTR applicationID,
    _In_opt_ LPCWSTR serviceID,
    _In_opt_ SID * userID,
    _In_opt_ const SOCKADDR_STORAGE *localTarget,
    IPPROTO protocol,
    DWORD dwFlags,
    _Outptr_ NDFHANDLE *handle
    );
HRESULT WINAPI
NdfCreateGroupingIncident(
 _In_opt_ LPCWSTR CloudName,
 _In_opt_ LPCWSTR GroupName,
 _In_opt_ LPCWSTR Identity,
 _In_opt_ LPCWSTR Invitation,
 _In_opt_ SOCKET_ADDRESS_LIST * Addresses,
 _In_opt_ LPCWSTR appId,
 _Outptr_ NDFHANDLE *handle);
STDAPI
NdfExecuteDiagnosis(
    _In_ NDFHANDLE handle,
    _In_opt_ HWND hwnd
    );
STDAPI
NdfCloseIncident(
    NDFHANDLE handle);
STDAPI
NdfDiagnoseIncident(
    _In_ NDFHANDLE Handle,
    _Out_ ULONG *RootCauseCount,
    _Outptr_result_buffer_(*RootCauseCount)
    RootCauseInfo **RootCauses,
    DWORD dwWait=INFINITE,
    DWORD dwFlags=0
);
STDAPI
NdfRepairIncident(
      _In_ NDFHANDLE Handle,
      _In_ RepairInfoEx *RepairEx,
      DWORD dwWait=INFINITE
      );
STDAPI
NdfCancelIncident(
      _In_ NDFHANDLE Handle
      );
STDAPI
NdfGetTraceFile(
      _In_ NDFHANDLE Handle,
      _Outptr_ LPCWSTR *TraceFileLocation
      );
}
#endif
#pragma endregion
