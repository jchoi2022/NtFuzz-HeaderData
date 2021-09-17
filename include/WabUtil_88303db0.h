#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DECLARE_MAPI_INTERFACE_PTR(ITableData, LPTABLEDATA);
typedef void (STDAPICALLTYPE CALLERRELEASE)(
 ULONG ulCallerData,
 LPTABLEDATA lpTblData,
 LPMAPITABLE lpVue
);
 MAPIMETHOD(HrGetView) \
  (THIS_ LPSSortOrderSet lpSSortOrderSet, \
    CALLERRELEASE FAR * lpfCallerRelease, \
    ULONG ulCallerData, \
    LPMAPITABLE FAR * lppMAPITable) IPURE; \
 MAPIMETHOD(HrModifyRow) \
  (THIS_ LPSRow) IPURE; \
 MAPIMETHOD(HrDeleteRow) \
  (THIS_ LPSPropValue lpSPropValue) IPURE; \
 MAPIMETHOD(HrQueryRow) \
  (THIS_ LPSPropValue lpsPropValue, \
    LPSRow FAR * lppSRow, \
    ULONG FAR * lpuliRow) IPURE; \
 MAPIMETHOD(HrEnumRow) \
  (THIS_ ULONG ulRowNumber, \
    LPSRow FAR * lppSRow) IPURE; \
 MAPIMETHOD(HrNotify) \
  (THIS_ ULONG ulFlags, \
    ULONG cValues, \
    LPSPropValue lpSPropValue) IPURE; \
 MAPIMETHOD(HrInsertRow) \
  (THIS_ ULONG uliRow, \
    LPSRow lpSRow) IPURE; \
 MAPIMETHOD(HrModifyRows) \
  (THIS_ ULONG ulFlags, \
    LPSRowSet lpSRowSet) IPURE; \
 MAPIMETHOD(HrDeleteRows) \
  (THIS_ ULONG ulFlags, \
    LPSRowSet lprowsetToDelete, \
    ULONG FAR * cRowsDeleted) IPURE; \
DECLARE_MAPI_INTERFACE_(ITableData, IUnknown)
{
 BEGIN_INTERFACE
 MAPI_IUNKNOWN_METHODS(PURE)
 MAPI_ITABLEDATA_METHODS(PURE)
};
STDAPI_(SCODE)
CreateTable( LPCIID lpInterface,
    ALLOCATEBUFFER FAR * lpAllocateBuffer,
    ALLOCATEMORE FAR * lpAllocateMore,
    FREEBUFFER FAR * lpFreeBuffer,
    LPVOID lpvReserved,
    ULONG ulTableType,
    ULONG ulPropTagIndexColumn,
    LPSPropTagArray lpSPropTagArrayColumns,
    LPTABLEDATA FAR * lppTableData );
 MAPIMETHOD(HrSetObjAccess) \
  (THIS_ ULONG ulAccess) IPURE; \
 MAPIMETHOD(HrSetPropAccess) \
  (THIS_ LPSPropTagArray lpPropTagArray, \
    ULONG FAR * rgulAccess) IPURE; \
 MAPIMETHOD(HrGetPropAccess) \
  (THIS_ LPSPropTagArray FAR * lppPropTagArray, \
    ULONG FAR * FAR * lprgulAccess) IPURE; \
 MAPIMETHOD(HrAddObjProps) \
  (THIS_ LPSPropTagArray lppPropTagArray, \
    LPSPropProblemArray FAR * lprgulAccess) IPURE;
DECLARE_MAPI_INTERFACE_(IPropData, IMAPIProp)
{
 BEGIN_INTERFACE
 MAPI_IUNKNOWN_METHODS(PURE)
 MAPI_IMAPIPROP_METHODS(PURE)
 MAPI_IPROPDATA_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IPropData, LPPROPDATA);
STDAPI_(SCODE)
CreateIProp( LPCIID lpInterface,
    ALLOCATEBUFFER FAR * lpAllocateBuffer,
    ALLOCATEMORE FAR * lpAllocateMore,
    FREEBUFFER FAR * lpFreeBuffer,
    LPVOID lpvReserved,
    LPPROPDATA FAR * lppPropData );
STDAPI_(SCODE)
WABCreateIProp( LPCIID lpInterface,
    ALLOCATEBUFFER FAR * lpAllocateBuffer,
    ALLOCATEMORE FAR * lpAllocateMore,
    FREEBUFFER FAR * lpFreeBuffer,
    LPVOID lpvReserved,
    LPPROPDATA FAR * lppPropData );
typedef BOOL (STDAPICALLTYPE FNIDLE) (LPVOID);
typedef FNIDLE FAR *PFNIDLE;
typedef void FAR *FTG;
typedef FTG FAR *PFTG;
STDAPI_(LONG)
MAPIInitIdle (LPVOID lpvReserved);
STDAPI_(VOID)
MAPIDeinitIdle (VOID);
STDAPI_(FTG)
FtgRegisterIdleRoutine (PFNIDLE lpfnIdle, LPVOID lpvIdleParam,
 short priIdle, ULONG csecIdle, USHORT iroIdle);
STDAPI_(void)
DeregisterIdleRoutine (FTG ftg);
STDAPI_(void)
EnableIdleRoutine (FTG ftg, BOOL fEnable);
STDAPI_(void)
ChangeIdleRoutine (FTG ftg, PFNIDLE lpfnIdle, LPVOID lpvIdleParam,
 short priIdle, ULONG csecIdle, USHORT iroIdle, USHORT ircIdle);
STDAPI_(LPMALLOC) MAPIGetDefaultMalloc(VOID);
STDMETHODIMP OpenStreamOnFile(
    _In_ LPALLOCATEBUFFER lpAllocateBuffer,
    _In_ LPFREEBUFFER lpFreeBuffer,
             ULONG ulFlags,
    _In_ LPTSTR lpszFileName,
    _In_opt_ LPTSTR lpszPrefix,
    _Outptr_ LPSTREAM FAR * lppStream);
typedef HRESULT (STDMETHODCALLTYPE FAR * LPOPENSTREAMONFILE) (
    _In_ LPALLOCATEBUFFER lpAllocateBuffer,
    _In_ LPFREEBUFFER lpFreeBuffer,
             ULONG ulFlags,
    _In_ LPTSTR lpszFileName,
    _In_opt_ LPTSTR lpszPrefix,
    _Outptr_ LPSTREAM FAR * lppStream);
STDAPI_(SCODE)
PropCopyMore( LPSPropValue lpSPropValueDest,
     LPSPropValue lpSPropValueSrc,
     ALLOCATEMORE * lpfAllocMore,
     LPVOID lpvObject );
STDAPI_(ULONG)
UlPropSize( LPSPropValue lpSPropValue );
STDAPI_(BOOL)
FEqualNames( LPMAPINAMEID lpName1, LPMAPINAMEID lpName2 );
STDAPI_(void)
GetInstance(LPSPropValue lpPropMv, LPSPropValue lpPropSv, ULONG uliInst);
extern unsigned char rgchCsds[];
extern unsigned char rgchCids[];
extern unsigned char rgchCsdi[];
extern unsigned char rgchCidi[];
STDAPI_(BOOL)
FPropContainsProp( LPSPropValue lpSPropValueDst,
       LPSPropValue lpSPropValueSrc,
       ULONG ulFuzzyLevel );
STDAPI_(BOOL)
FPropCompareProp( LPSPropValue lpSPropValue1,
      ULONG ulRelOp,
      LPSPropValue lpSPropValue2 );
STDAPI_(LONG)
LPropCompareProp( LPSPropValue lpSPropValueA,
      LPSPropValue lpSPropValueB );
STDAPI_(HRESULT)
HrAddColumns( LPMAPITABLE lptbl,
    LPSPropTagArray lpproptagColumnsNew,
    LPALLOCATEBUFFER lpAllocateBuffer,
    LPFREEBUFFER lpFreeBuffer);
STDAPI_(HRESULT)
HrAddColumnsEx( LPMAPITABLE lptbl,
    LPSPropTagArray lpproptagColumnsNew,
    LPALLOCATEBUFFER lpAllocateBuffer,
    LPFREEBUFFER lpFreeBuffer,
    void (FAR *lpfnFilterColumns)(LPSPropTagArray ptaga));
STDAPI
HrAllocAdviseSink( LPNOTIFCALLBACK lpfnCallback,
       LPVOID lpvContext,
       LPMAPIADVISESINK FAR *lppAdviseSink );
STDAPI
HrThisThreadAdviseSink( LPMAPIADVISESINK lpAdviseSink,
      LPMAPIADVISESINK FAR *lppAdviseSink);
STDAPI HrDispatchNotifications (ULONG ulFlags);
typedef struct {
 ULONG ulCtlType;
 ULONG ulCtlFlags;
 LPBYTE lpbNotif;
 ULONG cbNotif;
 LPTSTR lpszFilter;
 ULONG ulItemID;
 union {
  LPVOID lpv;
  LPDTBLLABEL lplabel;
  LPDTBLEDIT lpedit;
  LPDTBLLBX lplbx;
  LPDTBLCOMBOBOX lpcombobox;
  LPDTBLDDLBX lpddlbx;
  LPDTBLCHECKBOX lpcheckbox;
  LPDTBLGROUPBOX lpgroupbox;
  LPDTBLBUTTON lpbutton;
  LPDTBLRADIOBUTTON lpradiobutton;
  LPDTBLMVLISTBOX lpmvlbx;
  LPDTBLMVDDLBX lpmvddlbx;
  LPDTBLPAGE lppage;
 } ctl;
} DTCTL, FAR *LPDTCTL;
typedef struct {
 ULONG cctl;
 LPTSTR lpszResourceName;
 union {
  LPTSTR lpszComponent;
  ULONG ulItemID;
 };
 LPDTCTL lpctl;
} DTPAGE, FAR *LPDTPAGE;
STDAPI
BuildDisplayTable( LPALLOCATEBUFFER lpAllocateBuffer,
     LPALLOCATEMORE lpAllocateMore,
     LPFREEBUFFER lpFreeBuffer,
     LPMALLOC lpMalloc,
     HINSTANCE hInstance,
     UINT cPages,
     LPDTPAGE lpPage,
     ULONG ulFlags,
     LPMAPITABLE * lppTable,
     LPTABLEDATA * lppTblData );
STDAPI_(SCODE)
ScCountNotifications(int cNotifications, LPNOTIFICATION lpNotifications,
  ULONG FAR *lpcb);
STDAPI_(SCODE)
ScCopyNotifications(int cNotification, LPNOTIFICATION lpNotifications,
  LPVOID lpvDst, ULONG FAR *lpcb);
STDAPI_(SCODE)
ScRelocNotifications(int cNotification, LPNOTIFICATION lpNotifications,
  LPVOID lpvBaseOld, LPVOID lpvBaseNew, ULONG FAR *lpcb);
STDAPI_(SCODE)
ScCountProps(int cValues, LPSPropValue lpPropArray, ULONG FAR *lpcb);
STDAPI_(LPSPropValue)
LpValFindProp(ULONG ulPropTag, ULONG cValues, LPSPropValue lpPropArray);
STDAPI_(SCODE)
ScCopyProps(int cValues, LPSPropValue lpPropArray, LPVOID lpvDst,
  ULONG FAR *lpcb);
STDAPI_(SCODE)
ScRelocProps(int cValues, LPSPropValue lpPropArray,
  LPVOID lpvBaseOld, LPVOID lpvBaseNew, ULONG FAR *lpcb);
STDAPI_(SCODE)
ScDupPropset(int cValues, LPSPropValue lpPropArray,
  LPALLOCATEBUFFER lpAllocateBuffer, LPSPropValue FAR *lppPropArray);
STDAPI_(ULONG) UlAddRef(LPVOID lpunk);
STDAPI_(ULONG) UlRelease(LPVOID lpunk);
STDAPI HrGetOneProp(LPMAPIPROP lpMapiProp, ULONG ulPropTag,
      LPSPropValue FAR *lppProp);
STDAPI HrSetOneProp(LPMAPIPROP lpMapiProp,
      LPSPropValue lpProp);
STDAPI_(BOOL) FPropExists(LPMAPIPROP lpMapiProp, ULONG ulPropTag);
STDAPI_(LPSPropValue) PpropFindProp(LPSPropValue lpPropArray, ULONG cValues,
      ULONG ulPropTag);
STDAPI_(void) FreePadrlist(LPADRLIST lpAdrlist);
STDAPI_(void) FreeProws(LPSRowSet lpRows);
STDAPI HrQueryAllRows(LPMAPITABLE lpTable,
      LPSPropTagArray lpPropTags,
      LPSRestriction lpRestriction,
      LPSSortOrderSet lpSortOrderSet,
      LONG crowsMax,
      LPSRowSet FAR *lppRows);
STDAPI_(LPTSTR) SzFindCh(LPCTSTR lpsz, USHORT ch);
STDAPI_(LPTSTR) SzFindLastCh(LPCTSTR lpsz, USHORT ch);
STDAPI_(LPTSTR) SzFindSz(LPCTSTR lpsz, LPCTSTR lpszKey);
STDAPI_(unsigned int) UFromSz(LPCTSTR lpsz);
STDAPI_(SCODE) ScUNCFromLocalPath(_In_ LPSTR lpszLocal, _In_reads_(cchUNC) LPSTR lpszUNC,
                        UINT cchUNC);
STDAPI_(SCODE) ScLocalPathFromUNC(_In_ LPSTR lpszUNC, _In_reads_(cchLocal) LPSTR lpszLocal,
                        UINT cchLocal);
STDAPI_(FILETIME) FtAddFt(FILETIME ftAddend1, FILETIME ftAddend2);
STDAPI_(FILETIME) FtMulDwDw(DWORD ftMultiplicand, DWORD ftMultiplier);
STDAPI_(FILETIME) FtMulDw(DWORD ftMultiplier, FILETIME ftMultiplicand);
STDAPI_(FILETIME) FtSubFt(FILETIME ftMinuend, FILETIME ftSubtrahend);
STDAPI_(FILETIME) FtNegFt(FILETIME ft);
STDAPI_(SCODE) ScCreateConversationIndex (ULONG cbParent,
       LPBYTE lpbParent,
       ULONG FAR * lpcbConvIndex,
       LPBYTE FAR * lppbConvIndex);
STDAPI WrapStoreEntryID (ULONG ulFlags, _In_ LPTSTR lpszDLLName, ULONG cbOrigEntry,
    _In_reads_bytes_(cbOrigEntry) LPENTRYID lpOrigEntry, _Out_ ULONG *lpcbWrappedEntry, _Out_writes_bytes_(*lpcbWrappedEntry) LPENTRYID *lppWrappedEntry);
STDAPI_(HRESULT)
RTFSync (LPMESSAGE lpMessage, ULONG ulFlags, BOOL FAR * lpfMessageUpdated);
STDAPI_(HRESULT)
WrapCompressedRTFStream (LPSTREAM lpCompressedRTFStream,
  ULONG ulFlags, LPSTREAM FAR * lpUncompressedRTFStream);
STDAPI_(SCODE) ScInitMapiUtil(ULONG ulFlags);
STDAPI_(VOID) DeinitMapiUtil(VOID);
typedef HRESULT (STDAPICALLTYPE DISPATCHNOTIFICATIONS)(ULONG ulFlags);
typedef DISPATCHNOTIFICATIONS FAR * LPDISPATCHNOTIFICATIONS;
typedef SCODE (STDAPICALLTYPE CREATECONVERSATIONINDEX)(ULONG cbParent,
 LPBYTE lpbParent, ULONG FAR *lpcbConvIndex, LPBYTE FAR *lppbConvIndex);
typedef CREATECONVERSATIONINDEX FAR *LPCREATECONVERSATIONINDEX;
}
#endif
#pragma endregion
