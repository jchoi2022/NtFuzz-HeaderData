#include <windef.h>
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
        unsigned short bAppReturnCode:8,
                 reserved:6,
                 fBusy:1,
   fAck:1;
} DDEACK;
typedef struct {
        unsigned short reserved:14,
                 fDeferUpd:1,
   fAckReq:1;
 short cfFormat;
} DDEADVISE;
typedef struct {
 unsigned short unused:12,
                 fResponse:1,
                 fRelease:1,
                 reserved:1,
                 fAckReq:1;
 short cfFormat;
 BYTE Value[1];
} DDEDATA;
typedef struct {
 unsigned short unused:13,
   fRelease:1,
   fReserved:2;
 short cfFormat;
 BYTE Value[1];
} DDEPOKE;
typedef struct {
        unsigned short unused:13,
                 fRelease:1,
                 fDeferUpd:1,
   fAckReq:1;
 short cfFormat;
} DDELN;
typedef struct {
 unsigned short unused:12,
                 fAck:1,
                 fRelease:1,
                 fReserved:1,
                 fAckReq:1;
 short cfFormat;
 BYTE rgb[1];
} DDEUP;
BOOL
WINAPI
DdeSetQualityOfService(
    HWND hwndClient,
    CONST SECURITY_QUALITY_OF_SERVICE *pqosNew,
    PSECURITY_QUALITY_OF_SERVICE pqosPrev);
BOOL
WINAPI
ImpersonateDdeClientWindow(
    HWND hWndClient,
    HWND hWndServer);
LPARAM APIENTRY PackDDElParam(_In_ UINT msg, _In_ UINT_PTR uiLo, _In_ UINT_PTR uiHi);
BOOL APIENTRY UnpackDDElParam(_In_ UINT msg, _In_ LPARAM lParam, _Out_ PUINT_PTR puiLo, _Out_ PUINT_PTR puiHi);
BOOL APIENTRY FreeDDElParam(_In_ UINT msg, _In_ LPARAM lParam);
LPARAM APIENTRY ReuseDDElParam(LPARAM lParam, UINT msgIn, UINT msgOut, UINT_PTR uiLo, UINT_PTR uiHi);
#endif
#pragma endregion
}
