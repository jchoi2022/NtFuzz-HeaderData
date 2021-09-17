#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_HANDLE(HCONVLIST);
DECLARE_HANDLE(HCONV);
DECLARE_HANDLE(HSZ);
DECLARE_HANDLE(HDDEDATA);
typedef struct tagHSZPAIR {
    HSZ hszSvc;
    HSZ hszTopic;
} HSZPAIR, FAR *PHSZPAIR;
typedef struct tagCONVCONTEXT {
    UINT cb;
    UINT wFlags;
    UINT wCountryID;
    int iCodePage;
    DWORD dwLangID;
    DWORD dwSecurity;
    SECURITY_QUALITY_OF_SERVICE qos;
} CONVCONTEXT, FAR *PCONVCONTEXT;
typedef struct tagCONVINFO {
    DWORD cb;
    DWORD_PTR hUser;
    HCONV hConvPartner;
    HSZ hszSvcPartner;
    HSZ hszServiceReq;
    HSZ hszTopic;
    HSZ hszItem;
    UINT wFmt;
    UINT wType;
    UINT wStatus;
    UINT wConvst;
    UINT wLastError;
    HCONVLIST hConvList;
    CONVCONTEXT ConvCtxt;
    HWND hwnd;
    HWND hwndPartner;
} CONVINFO, FAR *PCONVINFO;
typedef HDDEDATA CALLBACK FNCALLBACK(UINT wType, UINT wFmt, HCONV hConv,
        HSZ hsz1, HSZ hsz2, HDDEDATA hData, ULONG_PTR dwData1, ULONG_PTR dwData2);
typedef HDDEDATA (CALLBACK *PFNCALLBACK)(UINT wType, UINT wFmt, HCONV hConv,
        HSZ hsz1, HSZ hsz2, HDDEDATA hData, ULONG_PTR dwData1, ULONG_PTR dwData2);
UINT
WINAPI
DdeInitializeA(
    _Inout_ LPDWORD pidInst,
    _In_ PFNCALLBACK pfnCallback,
    _In_ DWORD afCmd,
    _Reserved_ DWORD ulRes);
UINT
WINAPI
DdeInitializeW(
    _Inout_ LPDWORD pidInst,
    _In_ PFNCALLBACK pfnCallback,
    _In_ DWORD afCmd,
    _Reserved_ DWORD ulRes);
BOOL
WINAPI
DdeUninitialize(
    _In_ DWORD idInst);
HCONVLIST
WINAPI
DdeConnectList(
    _In_ DWORD idInst,
    _In_ HSZ hszService,
    _In_ HSZ hszTopic,
    _In_ HCONVLIST hConvList,
    _In_opt_ PCONVCONTEXT pCC);
HCONV
WINAPI
DdeQueryNextServer(
    _In_ HCONVLIST hConvList,
    _In_ HCONV hConvPrev);
BOOL
WINAPI
DdeDisconnectList(
    _In_ HCONVLIST hConvList);
HCONV
WINAPI
DdeConnect(
    _In_ DWORD idInst,
    _In_ HSZ hszService,
    _In_ HSZ hszTopic,
    _In_opt_ PCONVCONTEXT pCC);
BOOL
WINAPI
DdeDisconnect(
    _In_ HCONV hConv);
HCONV
WINAPI
DdeReconnect(
    _In_ HCONV hConv);
UINT
WINAPI
DdeQueryConvInfo(
    _In_ HCONV hConv,
    _In_ DWORD idTransaction,
    _Inout_ PCONVINFO pConvInfo);
BOOL
WINAPI
DdeSetUserHandle(
    _In_ HCONV hConv,
    _In_ DWORD id,
    _In_ DWORD_PTR hUser);
BOOL
WINAPI
DdeAbandonTransaction(
    _In_ DWORD idInst,
    _In_ HCONV hConv,
    _In_ DWORD idTransaction);
BOOL
WINAPI
DdePostAdvise(
    _In_ DWORD idInst,
    _In_ HSZ hszTopic,
    _In_ HSZ hszItem);
BOOL
WINAPI
DdeEnableCallback(
    _In_ DWORD idInst,
    _In_ HCONV hConv,
    _In_ UINT wCmd);
BOOL
WINAPI
DdeImpersonateClient(
    _In_ HCONV hConv);
HDDEDATA
WINAPI
DdeNameService(
    _In_ DWORD idInst,
    _In_opt_ HSZ hsz1,
    _In_opt_ HSZ hsz2,
    _In_ UINT afCmd);
HDDEDATA
WINAPI
DdeClientTransaction(
    _In_opt_ LPBYTE pData,
    _In_ DWORD cbData,
    _In_ HCONV hConv,
    _In_opt_ HSZ hszItem,
    _In_ UINT wFmt,
    _In_ UINT wType,
    _In_ DWORD dwTimeout,
    _Out_opt_ LPDWORD pdwResult);
HDDEDATA
WINAPI
DdeCreateDataHandle(
    _In_ DWORD idInst,
    _In_reads_bytes_opt_(cb) LPBYTE pSrc,
    _In_ DWORD cb,
    _In_ DWORD cbOff,
    _In_opt_ HSZ hszItem,
    _In_ UINT wFmt,
    _In_ UINT afCmd);
HDDEDATA
WINAPI
DdeAddData(
    _In_ HDDEDATA hData,
    _In_reads_bytes_(cb) LPBYTE pSrc,
    _In_ DWORD cb,
    _In_ DWORD cbOff);
DWORD
WINAPI
DdeGetData(
    _In_ HDDEDATA hData,
    _Out_writes_bytes_opt_(cbMax) LPBYTE pDst,
    _In_ DWORD cbMax,
    _In_ DWORD cbOff);
LPBYTE
WINAPI
DdeAccessData(
    _In_ HDDEDATA hData,
    _Out_opt_ LPDWORD pcbDataSize);
BOOL
WINAPI
DdeUnaccessData(
    _In_ HDDEDATA hData);
BOOL
WINAPI
DdeFreeDataHandle(
    _In_ HDDEDATA hData);
UINT
WINAPI
DdeGetLastError(
    _In_ DWORD idInst);
HSZ
WINAPI
DdeCreateStringHandleA(
    _In_ DWORD idInst,
    _In_ LPCSTR psz,
    _In_ int iCodePage);
HSZ
WINAPI
DdeCreateStringHandleW(
    _In_ DWORD idInst,
    _In_ LPCWSTR psz,
    _In_ int iCodePage);
DWORD
WINAPI
DdeQueryStringA(
    _In_ DWORD idInst,
    _In_ HSZ hsz,
    _Out_writes_opt_(cchMax) LPSTR psz,
    _In_ DWORD cchMax,
    _In_ int iCodePage);
DWORD
WINAPI
DdeQueryStringW(
    _In_ DWORD idInst,
    _In_ HSZ hsz,
    _Out_writes_opt_(cchMax) LPWSTR psz,
    _In_ DWORD cchMax,
    _In_ int iCodePage);
BOOL
WINAPI
DdeFreeStringHandle(
    _In_ DWORD idInst,
    _In_ HSZ hsz);
BOOL
WINAPI
DdeKeepStringHandle(
    _In_ DWORD idInst,
    _In_ HSZ hsz);
int
WINAPI
DdeCmpStringHandles(
    _In_ HSZ hsz1,
    _In_ HSZ hsz2);
typedef struct tagDDEML_MSG_HOOK_DATA {
    UINT_PTR uiLo;
    UINT_PTR uiHi;
    DWORD cbData;
    DWORD Data[8];
} DDEML_MSG_HOOK_DATA, *PDDEML_MSG_HOOK_DATA;
typedef struct tagMONMSGSTRUCT {
    UINT cb;
    HWND hwndTo;
    DWORD dwTime;
    HANDLE hTask;
    UINT wMsg;
    WPARAM wParam;
    LPARAM lParam;
    DDEML_MSG_HOOK_DATA dmhd;
} MONMSGSTRUCT, *PMONMSGSTRUCT;
typedef struct tagMONCBSTRUCT {
    UINT cb;
    DWORD dwTime;
    HANDLE hTask;
    DWORD dwRet;
    UINT wType;
    UINT wFmt;
    HCONV hConv;
    HSZ hsz1;
    HSZ hsz2;
    HDDEDATA hData;
    ULONG_PTR dwData1;
    ULONG_PTR dwData2;
    CONVCONTEXT cc;
    DWORD cbData;
    DWORD Data[8];
} MONCBSTRUCT, *PMONCBSTRUCT;
typedef struct tagMONHSZSTRUCTA {
    UINT cb;
    BOOL fsAction;
    DWORD dwTime;
    HSZ hsz;
    HANDLE hTask;
    CHAR str[1];
} MONHSZSTRUCTA, *PMONHSZSTRUCTA;
typedef struct tagMONHSZSTRUCTW {
    UINT cb;
    BOOL fsAction;
    DWORD dwTime;
    HSZ hsz;
    HANDLE hTask;
    WCHAR str[1];
} MONHSZSTRUCTW, *PMONHSZSTRUCTW;
typedef MONHSZSTRUCTW MONHSZSTRUCT;
typedef PMONHSZSTRUCTW PMONHSZSTRUCT;
typedef struct tagMONERRSTRUCT {
    UINT cb;
    UINT wLastError;
    DWORD dwTime;
    HANDLE hTask;
} MONERRSTRUCT, *PMONERRSTRUCT;
typedef struct tagMONLINKSTRUCT {
    UINT cb;
    DWORD dwTime;
    HANDLE hTask;
    BOOL fEstablished;
    BOOL fNoData;
    HSZ hszSvc;
    HSZ hszTopic;
    HSZ hszItem;
    UINT wFmt;
    BOOL fServer;
    HCONV hConvServer;
    HCONV hConvClient;
} MONLINKSTRUCT, *PMONLINKSTRUCT;
typedef struct tagMONCONVSTRUCT {
    UINT cb;
    BOOL fConnect;
    DWORD dwTime;
    HANDLE hTask;
    HSZ hszSvc;
    HSZ hszTopic;
    HCONV hConvClient;
    HCONV hConvServer;
} MONCONVSTRUCT, *PMONCONVSTRUCT;
#endif
#pragma endregion
}
