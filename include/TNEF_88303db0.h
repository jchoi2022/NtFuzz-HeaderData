#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _STnefProblem
{
 ULONG ulComponent;
 ULONG ulAttribute;
 ULONG ulPropTag;
 SCODE scode;
} STnefProblem;
typedef struct _STnefProblemArray
{
 ULONG cProblem;
 STnefProblem aProblem[MAPI_DIM];
} STnefProblemArray, FAR * LPSTnefProblemArray;
 (offsetof(STnefProblemArray,aProblem) + (_cprob)*sizeof(STnefProblem))
 (offsetof(STnefProblemArray,aProblem) + \
 (UINT) ((_lparray)->cProblem*sizeof(STnefProblem)))
DECLARE_MAPI_INTERFACE_PTR(ITnef, LPITNEF);
 MAPIMETHOD(AddProps) \
  (THIS_ ULONG ulFlags, \
    ULONG ulElemID, \
    LPVOID lpvData, \
    LPSPropTagArray lpPropList) IPURE; \
 MAPIMETHOD(ExtractProps) \
  (THIS_ ULONG ulFlags, \
    LPSPropTagArray lpPropList, \
    LPSTnefProblemArray FAR * lpProblems) IPURE; \
 MAPIMETHOD(Finish) \
  (THIS_ ULONG ulFlags, \
    WORD FAR * lpKey, \
    LPSTnefProblemArray FAR * lpProblems) IPURE; \
 MAPIMETHOD(OpenTaggedBody) \
  (THIS_ LPMESSAGE lpMessage, \
    ULONG ulFlags, \
    LPSTREAM FAR * lppStream) IPURE; \
 MAPIMETHOD(SetProps) \
  (THIS_ ULONG ulFlags, \
    ULONG ulElemID, \
    ULONG cValues, \
    LPSPropValue lpProps) IPURE; \
 MAPIMETHOD(EncodeRecips) \
  (THIS_ ULONG ulFlags, \
    LPMAPITABLE lpRecipientTable) IPURE; \
 MAPIMETHOD(FinishComponent) \
  (THIS_ ULONG ulFlags, \
    ULONG ulComponentID, \
    LPSPropTagArray lpCustomPropList, \
    LPSPropValue lpCustomProps, \
    LPSPropTagArray lpPropList, \
    LPSTnefProblemArray FAR * lpProblems) IPURE; \
DECLARE_MAPI_INTERFACE_(ITnef, IUnknown)
{
 BEGIN_INTERFACE
 MAPI_IUNKNOWN_METHODS(PURE)
 MAPI_ITNEF_METHODS(PURE)
};
_Check_return_
STDMETHODIMP OpenTnefStream(
 LPVOID lpvSupport,
 LPSTREAM lpStream,
 _In_ LPTSTR lpszStreamName,
 ULONG ulFlags,
 LPMESSAGE lpMessage,
 WORD wKeyVal,
 LPITNEF FAR * lppTNEF);
typedef
_Check_return_
HRESULT (STDMETHODCALLTYPE FAR * LPOPENTNEFSTREAM) (
 LPVOID lpvSupport,
 LPSTREAM lpStream,
 _In_ LPTSTR lpszStreamName,
 ULONG ulFlags,
 LPMESSAGE lpMessage,
 WORD wKeyVal,
 LPITNEF FAR * lppTNEF);
_Check_return_
STDMETHODIMP OpenTnefStreamEx(
 LPVOID lpvSupport,
 LPSTREAM lpStream,
 _In_ LPTSTR lpszStreamName,
 ULONG ulFlags,
 LPMESSAGE lpMessage,
 WORD wKeyVal,
 LPADRBOOK lpAdressBook,
 LPITNEF FAR * lppTNEF);
typedef HRESULT (STDMETHODCALLTYPE FAR * LPOPENTNEFSTREAMEX) (
 LPVOID lpvSupport,
 LPSTREAM lpStream,
 _In_ LPTSTR lpszStreamName,
 ULONG ulFlags,
 LPMESSAGE lpMessage,
 WORD wKeyVal,
 LPADRBOOK lpAdressBook,
 LPITNEF FAR * lppTNEF);
STDMETHODIMP GetTnefStreamCodepage (
 LPSTREAM lpStream,
 ULONG FAR * lpulCodepage,
 ULONG FAR * lpulSubCodepage);
typedef HRESULT (STDMETHODCALLTYPE FAR * LPGETTNEFSTREAMCODEPAGE) (
 LPSTREAM lpStream,
 ULONG FAR * lpulCodepage,
 ULONG FAR * lpulSubCodepage);
typedef WORD ATYP;
enum { atypNull, atypFile, atypOle, atypPicture, atypMax };
#include <pshpack1.h>
typedef struct _renddata
{
 ATYP atyp;
 ULONG ulPosition;
 WORD dxWidth;
 WORD dyHeight;
 DWORD dwFlags;
} RENDDATA, *PRENDDATA;
#include <poppack.h>
#include <pshpack1.h>
typedef struct _dtr
{
 WORD wYear;
 WORD wMonth;
 WORD wDay;
 WORD wHour;
 WORD wMinute;
 WORD wSecond;
 WORD wDayOfWeek;
} DTR;
#include <poppack.h>
typedef struct _trp
{
 WORD trpid;
 WORD cbgrtrp;
 WORD cch;
 WORD cbRgb;
} TRP, *PTRP, *PGRTRP, FAR * LPTRP;
typedef DWORD XTYPE;
typedef struct _ADDR_ALIAS
{
 char rgchName[cbDisplayName];
 char rgchEName[cbEmailName];
 char rgchSrvr[cbSeverName];
 ULONG dibDetail;
 WORD type;
} ADDRALIAS, FAR * LPADDRALIAS;
typedef struct _NSID
{
 DWORD dwSize;
 unsigned char uchType[cbTYPE];
 XTYPE xtype;
 LONG lTime;
 union
 {
  ADDRALIAS alias;
  char rgchInterNet[1];
 } address;
} NSID, * LPNSID;
}
#endif
#pragma endregion
