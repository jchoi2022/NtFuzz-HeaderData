#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windef.h>
#include <winnt.h>
#include <objerror.h>
#include <objbase.h>
#include <stddef.h>
#include "limits.h"
extern "C" {
typedef PBYTE LPBYTE;
typedef PULONG LPULONG;
typedef ULONG_PTR LHANDLE, *LPLHANDLE;
typedef struct _FILETIME
{
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME, FAR * LPFILETIME;
typedef struct
{
    BYTE abFlags[4];
    BYTE ab[MAPI_DIM];
} ENTRYID, FAR *LPENTRYID;
    struct _ENTRYID_ ## _name \
{ \
    BYTE abFlags[4]; \
    BYTE ab[_cb]; \
} _name
typedef struct _MAPIUID
{
    BYTE ab[16];
} MAPIUID, FAR * LPMAPIUID;
                        (((ULONG)0xFFFF0000 & ulPropTag) | ulPropType)
typedef struct _SPropTagArray
{
    ULONG cValues;
    _Field_size_(cValues)
    ULONG aulPropTag[MAPI_DIM];
} SPropTagArray, *LPSPropTagArray;
    (offsetof(SPropTagArray,aulPropTag) + (_ctag)*sizeof(ULONG))
    (offsetof(SPropTagArray,aulPropTag) + \
    (UINT)((_lparray)->cValues)*sizeof(ULONG))
struct _SPropTagArray_ ## _name \
{ \
    _Field_range_(==,_ctag) ULONG cValues; \
    _Field_size_(_ctag) ULONG aulPropTag[_ctag]; \
} _name
typedef struct _SPropValue SPropValue;
typedef CY CURRENCY;
typedef struct _SBinary
{
    ULONG cb;
    _Field_size_bytes_(cb) LPBYTE lpb;
} SBinary;
typedef SBinary* LPSBinary;
typedef struct _SShortArray
{
    ULONG cValues;
    short *lpi;
} SShortArray;
typedef struct _SGuidArray
{
    ULONG cValues;
    GUID *lpguid;
} SGuidArray;
typedef struct _SRealArray
{
    ULONG cValues;
    float *lpflt;
} SRealArray;
typedef struct _SLongArray
{
    ULONG cValues;
    LONG *lpl;
} SLongArray;
typedef struct _SLargeIntegerArray
{
    ULONG cValues;
    LARGE_INTEGER *lpli;
} SLargeIntegerArray;
typedef struct _SDateTimeArray
{
    ULONG cValues;
    FILETIME *lpft;
} SDateTimeArray;
typedef struct _SAppTimeArray
{
    ULONG cValues;
    double *lpat;
} SAppTimeArray;
typedef struct _SCurrencyArray
{
    ULONG cValues;
    CURRENCY *lpcur;
} SCurrencyArray;
typedef struct _SBinaryArray
{
    ULONG cValues;
    SBinary *lpbin;
} SBinaryArray;
typedef struct _SDoubleArray
{
    ULONG cValues;
    double *lpdbl;
} SDoubleArray;
typedef struct _SWStringArray
{
    ULONG cValues;
    LPWSTR *lppszW;
} SWStringArray;
typedef struct _SLPSTRArray
{
    ULONG cValues;
    LPSTR *lppszA;
} SLPSTRArray;
typedef union _PV
{
    short int i;
    LONG l;
    ULONG ul;
    float flt;
    double dbl;
    unsigned short int b;
    CURRENCY cur;
    double at;
    FILETIME ft;
    LPSTR lpszA;
    SBinary bin;
    LPWSTR lpszW;
    GUID *lpguid;
    LARGE_INTEGER li;
    SShortArray MVi;
    SLongArray MVl;
    SRealArray MVflt;
    SDoubleArray MVdbl;
    SCurrencyArray MVcur;
    SAppTimeArray MVat;
    SDateTimeArray MVft;
    SBinaryArray MVbin;
    SLPSTRArray MVszA;
    SWStringArray MVszW;
    SGuidArray MVguid;
    SLargeIntegerArray MVli;
    SCODE err;
    LONG x;
} __UPV;
typedef struct _SPropValue
{
    ULONG ulPropTag;
    ULONG dwAlignPad;
    union _PV Value;
} SPropValue, *LPSPropValue;
typedef struct _SPropProblem
{
    ULONG ulIndex;
    ULONG ulPropTag;
    SCODE scode;
} SPropProblem, *LPSPropProblem;
typedef struct _SPropProblemArray
{
    ULONG cProblem;
    SPropProblem aProblem[MAPI_DIM];
} SPropProblemArray, *LPSPropProblemArray;
    (offsetof(SPropProblemArray,aProblem) + (_cprob)*sizeof(SPropProblem))
    (offsetof(SPropProblemArray,aProblem) + \
    (UINT) ((_lparray)->cProblem*sizeof(SPropProblem)))
struct _SPropProblemArray_ ## _name \
{ \
    ULONG cProblem; \
    SPropProblem aProblem[_cprob]; \
} _name
typedef SBinaryArray ENTRYLIST, FAR *LPENTRYLIST;
typedef struct {
    ULONG cb;
    BYTE abEntry[MAPI_DIM];
} FLATENTRY, FAR *LPFLATENTRY;
typedef struct {
    ULONG cEntries;
    ULONG cbEntries;
    BYTE abEntries[MAPI_DIM];
} FLATENTRYLIST, FAR *LPFLATENTRYLIST;
typedef struct {
    ULONG cb;
    BYTE ab[MAPI_DIM];
} MTSID, FAR *LPMTSID;
typedef struct {
    ULONG cMTSIDs;
    ULONG cbMTSIDs;
    BYTE abMTSIDs[MAPI_DIM];
} FLATMTSIDLIST, FAR *LPFLATMTSIDLIST;
typedef struct _ADRENTRY
{
    ULONG ulReserved1;
    ULONG cValues;
    LPSPropValue rgPropVals;
} ADRENTRY, FAR * LPADRENTRY;
typedef struct _ADRLIST
{
    ULONG cEntries;
    _Field_size_(cEntries)
    ADRENTRY aEntries[MAPI_DIM];
} ADRLIST, FAR * LPADRLIST;
    (offsetof(ADRLIST,aEntries) + (_centries)*sizeof(ADRENTRY))
    (offsetof(ADRLIST,aEntries) + (UINT)(_lpadrlist)->cEntries*sizeof(ADRENTRY))
struct _ADRLIST_ ## _name \
{ \
    _Field_range_(==, _centries) ULONG cEntries; \
    _Field_size_(_centries) ADRENTRY aEntries[_centries]; \
} _name
typedef struct _SRow
{
    ULONG ulAdrEntryPad;
    ULONG cValues;
    LPSPropValue lpProps;
} SRow, FAR * LPSRow;
typedef struct _SRowSet
{
    ULONG cRows;
    SRow aRow[MAPI_DIM];
} SRowSet, FAR * LPSRowSet;
    (((_crow) >= (ULONG_MAX/(ULONG)sizeof(SRow))) || ((CbNewSRowSet(_crow)) < ((CbNewSRowSet(0)))))
                                    (UINT)((_lprowset)->cRows*sizeof(SRow)))
struct _SRowSet_ ## _name \
{ \
    ULONG cRows; \
    SRow aRow[_crow]; \
} _name
typedef SCODE (STDMETHODCALLTYPE ALLOCATEBUFFER)(
    ULONG cbSize,
    LPVOID* lppBuffer
);
typedef SCODE (STDMETHODCALLTYPE ALLOCATEMORE)(
    ULONG cbSize,
    LPVOID lpObject,
    LPVOID * lppBuffer
);
typedef ULONG (STDAPICALLTYPE FREEBUFFER)(
    LPVOID lpBuffer
);
typedef ALLOCATEBUFFER *LPALLOCATEBUFFER;
typedef ALLOCATEMORE * LPALLOCATEMORE;
typedef FREEBUFFER * LPFREEBUFFER;
        DECLARE_INTERFACE(iface)
        DECLARE_INTERFACE_(iface, baseiface)
        interface iface; typedef iface FAR * piface
        STDMETHODIMP_(type) prefix##method
        typedef type (STDMETHODCALLTYPE prefix##method##_METHOD)
    MAPIMETHOD(QueryInterface) \
        (THIS_ REFIID riid, LPVOID FAR * ppvObj) IPURE; \
    MAPIMETHOD_(ULONG,AddRef) (THIS) IPURE; \
    MAPIMETHOD_(ULONG,Release) (THIS) IPURE; \
typedef const IID FAR * LPCIID;
DECLARE_MAPI_INTERFACE_PTR(IMsgStore, LPMDB);
DECLARE_MAPI_INTERFACE_PTR(IMAPIFolder, LPMAPIFOLDER);
DECLARE_MAPI_INTERFACE_PTR(IMessage, LPMESSAGE);
DECLARE_MAPI_INTERFACE_PTR(IAttach, LPATTACH);
DECLARE_MAPI_INTERFACE_PTR(IAddrBook, LPADRBOOK);
DECLARE_MAPI_INTERFACE_PTR(IABContainer, LPABCONT);
DECLARE_MAPI_INTERFACE_PTR(IMailUser, LPMAILUSER);
DECLARE_MAPI_INTERFACE_PTR(IDistList, LPDISTLIST);
DECLARE_MAPI_INTERFACE_PTR(IMAPIStatus, LPMAPISTATUS);
DECLARE_MAPI_INTERFACE_PTR(IMAPITable, LPMAPITABLE);
DECLARE_MAPI_INTERFACE_PTR(IProfSect, LPPROFSECT);
DECLARE_MAPI_INTERFACE_PTR(IMAPIProp, LPMAPIPROP);
DECLARE_MAPI_INTERFACE_PTR(IMAPIContainer, LPMAPICONTAINER);
DECLARE_MAPI_INTERFACE_PTR(IMAPIAdviseSink, LPMAPIADVISESINK);
DECLARE_MAPI_INTERFACE_PTR(IMAPIProgress, LPMAPIPROGRESS);
DECLARE_MAPI_INTERFACE_PTR(IProviderAdmin, LPPROVIDERADMIN);
typedef struct _MAPIERROR
{
    ULONG ulVersion;
    LPTSTR lpszError;
    LPTSTR lpszComponent;
    ULONG ulLowLevelError;
    ULONG ulContext;
} MAPIERROR, *LPMAPIERROR;
typedef struct _ERROR_NOTIFICATION
{
    ULONG cbEntryID;
    LPENTRYID lpEntryID;
    SCODE scode;
    ULONG ulFlags;
    LPMAPIERROR lpMAPIError;
} ERROR_NOTIFICATION;
typedef struct _NEWMAIL_NOTIFICATION
{
    ULONG cbEntryID;
    LPENTRYID lpEntryID;
    ULONG cbParentID;
    LPENTRYID lpParentID;
    ULONG ulFlags;
    LPTSTR lpszMessageClass;
    ULONG ulMessageFlags;
} NEWMAIL_NOTIFICATION;
typedef struct _OBJECT_NOTIFICATION
{
    ULONG cbEntryID;
    LPENTRYID lpEntryID;
    ULONG ulObjType;
    ULONG cbParentID;
    LPENTRYID lpParentID;
    ULONG cbOldID;
    LPENTRYID lpOldID;
    ULONG cbOldParentID;
    LPENTRYID lpOldParentID;
    LPSPropTagArray lpPropTagArray;
} OBJECT_NOTIFICATION;
typedef struct _TABLE_NOTIFICATION
{
    ULONG ulTableEvent;
    HRESULT hResult;
    SPropValue propIndex;
    SPropValue propPrior;
    SRow row;
    ULONG ulPad;
} TABLE_NOTIFICATION;
typedef struct _EXTENDED_NOTIFICATION
{
    ULONG ulEvent;
    ULONG cb;
    LPBYTE pbEventParameters;
} EXTENDED_NOTIFICATION;
typedef struct
{
    ULONG cbEntryID;
    LPENTRYID lpEntryID;
    ULONG cValues;
    LPSPropValue lpPropVals;
} STATUS_OBJECT_NOTIFICATION;
typedef struct _NOTIFICATION
{
    ULONG ulEventType;
    ULONG ulAlignPad;
    union
    {
        ERROR_NOTIFICATION err;
        NEWMAIL_NOTIFICATION newmail;
        OBJECT_NOTIFICATION obj;
        TABLE_NOTIFICATION tab;
        EXTENDED_NOTIFICATION ext;
        STATUS_OBJECT_NOTIFICATION statobj;
    } info;
} NOTIFICATION, FAR * LPNOTIFICATION;
    MAPIMETHOD_(ULONG, OnNotify) \
        (THIS_ ULONG cNotif, \
                LPNOTIFICATION lpNotifications) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIAdviseSink, IUnknown)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIADVISESINK_METHODS(PURE)
};
typedef long (STDAPICALLTYPE NOTIFCALLBACK) (
    LPVOID lpvContext,
    ULONG cNotification,
    LPNOTIFICATION lpNotifications);
typedef NOTIFCALLBACK FAR * LPNOTIFCALLBACK;
    MAPIMETHOD(Progress) \
        (THIS_ ULONG ulValue, \
                ULONG ulCount, \
                ULONG ulTotal) IPURE; \
    MAPIMETHOD(GetFlags) \
        (THIS_ ULONG FAR * lpulFlags) IPURE; \
    MAPIMETHOD(GetMax) \
        (THIS_ ULONG FAR * lpulMax) IPURE; \
    MAPIMETHOD(GetMin) \
        (THIS_ ULONG FAR * lpulMin) IPURE; \
    MAPIMETHOD(SetLimits) \
        (THIS_ LPULONG lpulMin, \
                LPULONG lpulMax, \
                LPULONG lpulFlags) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIProgress, IUnknown)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROGRESS_METHODS(PURE)
};
typedef struct _MAPINAMEID
{
    LPGUID lpguid;
    ULONG ulKind;
    union {
        LONG lID;
        LPWSTR lpwstrName;
    } Kind;
} MAPINAMEID, FAR * LPMAPINAMEID;
    MAPIMETHOD(GetLastError) \
        (THIS_ HRESULT hResult, \
                ULONG ulFlags, \
                LPMAPIERROR FAR * lppMAPIError) IPURE; \
    MAPIMETHOD(SaveChanges) \
        (THIS_ ULONG ulFlags) IPURE; \
    MAPIMETHOD(GetProps) \
        (THIS_ LPSPropTagArray lpPropTagArray, \
                ULONG ulFlags, \
                ULONG FAR * lpcValues, \
                LPSPropValue FAR * lppPropArray) IPURE; \
    MAPIMETHOD(GetPropList) \
        (THIS_ ULONG ulFlags, \
                LPSPropTagArray FAR * lppPropTagArray) IPURE; \
    MAPIMETHOD(OpenProperty) \
        (THIS_ ULONG ulPropTag, \
                LPCIID lpiid, \
                ULONG ulInterfaceOptions, \
                ULONG ulFlags, \
                LPUNKNOWN FAR * lppUnk) IPURE; \
    MAPIMETHOD(SetProps) \
        (THIS_ ULONG cValues, \
                LPSPropValue lpPropArray, \
                LPSPropProblemArray FAR * lppProblems) IPURE; \
    MAPIMETHOD(DeleteProps) \
        (THIS_ LPSPropTagArray lpPropTagArray, \
                LPSPropProblemArray FAR * lppProblems) IPURE; \
    MAPIMETHOD(CopyTo) \
        (THIS_ ULONG ciidExclude, \
                LPCIID rgiidExclude, \
                LPSPropTagArray lpExcludeProps, \
                ULONG_PTR ulUIParam, \
                LPMAPIPROGRESS lpProgress, \
                LPCIID lpInterface, \
                LPVOID lpDestObj, \
                ULONG ulFlags, \
                LPSPropProblemArray FAR * lppProblems) IPURE; \
    MAPIMETHOD(CopyProps) \
        (THIS_ LPSPropTagArray lpIncludeProps, \
                ULONG_PTR ulUIParam, \
                LPMAPIPROGRESS lpProgress, \
                LPCIID lpInterface, \
                LPVOID lpDestObj, \
                ULONG ulFlags, \
                LPSPropProblemArray FAR * lppProblems) IPURE; \
    MAPIMETHOD(GetNamesFromIDs) \
        (THIS_ LPSPropTagArray FAR * lppPropTags, \
                LPGUID lpPropSetGuid, \
                ULONG ulFlags, \
                ULONG FAR * lpcPropNames, \
                LPMAPINAMEID FAR * FAR * lpppPropNames) IPURE; \
    MAPIMETHOD(GetIDsFromNames) \
        (THIS_ ULONG cPropNames, \
                LPMAPINAMEID FAR * lppPropNames, \
                ULONG ulFlags, \
                LPSPropTagArray FAR * lppPropTags) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIProp, IUnknown)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
};
typedef struct _SSortOrder
{
    ULONG ulPropTag;
    ULONG ulOrder;
} SSortOrder, FAR * LPSSortOrder;
typedef struct _SSortOrderSet
{
    ULONG cSorts;
    ULONG cCategories;
    ULONG cExpanded;
    SSortOrder aSort[MAPI_DIM];
} SSortOrderSet, FAR * LPSSortOrderSet;
    (offsetof(SSortOrderSet,aSort) + (_csort)*sizeof(SSortOrder))
    (offsetof(SSortOrderSet,aSort) + \
    (UINT)((_lpset)->cSorts*sizeof(SSortOrder)))
struct _SSortOrderSet_ ## _name \
{ \
    ULONG cSorts; \
    ULONG cCategories; \
    ULONG cExpanded; \
    SSortOrder aSort[_csort]; \
} _name
typedef ULONG BOOKMARK;
typedef struct _SRestriction FAR * LPSRestriction;
typedef struct _SAndRestriction
{
    ULONG cRes;
    LPSRestriction lpRes;
} SAndRestriction;
typedef struct _SOrRestriction
{
    ULONG cRes;
    LPSRestriction lpRes;
} SOrRestriction;
typedef struct _SNotRestriction
{
    ULONG ulReserved;
    LPSRestriction lpRes;
} SNotRestriction;
typedef struct _SContentRestriction
{
    ULONG ulFuzzyLevel;
    ULONG ulPropTag;
    LPSPropValue lpProp;
} SContentRestriction;
typedef struct _SBitMaskRestriction
{
    ULONG relBMR;
    ULONG ulPropTag;
    ULONG ulMask;
} SBitMaskRestriction;
typedef struct _SPropertyRestriction
{
    ULONG relop;
    ULONG ulPropTag;
    LPSPropValue lpProp;
} SPropertyRestriction;
typedef struct _SComparePropsRestriction
{
    ULONG relop;
    ULONG ulPropTag1;
    ULONG ulPropTag2;
} SComparePropsRestriction;
typedef struct _SSizeRestriction
{
    ULONG relop;
    ULONG ulPropTag;
    ULONG cb;
} SSizeRestriction;
typedef struct _SExistRestriction
{
    ULONG ulReserved1;
    ULONG ulPropTag;
    ULONG ulReserved2;
} SExistRestriction;
typedef struct _SSubRestriction
{
    ULONG ulSubObject;
    LPSRestriction lpRes;
} SSubRestriction;
typedef struct _SCommentRestriction
{
    ULONG cValues;
    LPSRestriction lpRes;
    LPSPropValue lpProp;
} SCommentRestriction;
typedef struct _SRestriction
{
    ULONG rt;
    union
    {
        SComparePropsRestriction resCompareProps;
        SAndRestriction resAnd;
        SOrRestriction resOr;
        SNotRestriction resNot;
        SContentRestriction resContent;
        SPropertyRestriction resProperty;
        SBitMaskRestriction resBitMask;
        SSizeRestriction resSize;
        SExistRestriction resExist;
        SSubRestriction resSub;
        SCommentRestriction resComment;
    } res;
} SRestriction;
    MAPIMETHOD(GetLastError) \
        (THIS_ HRESULT hResult, \
                ULONG ulFlags, \
                LPMAPIERROR FAR * lppMAPIError) IPURE; \
    MAPIMETHOD(Advise) \
        (THIS_ ULONG ulEventMask, \
                LPMAPIADVISESINK lpAdviseSink, \
                ULONG FAR * lpulConnection) IPURE; \
    MAPIMETHOD(Unadvise) \
        (THIS_ ULONG ulConnection) IPURE; \
    MAPIMETHOD(GetStatus) \
        (THIS_ ULONG FAR * lpulTableStatus, \
                ULONG FAR * lpulTableType) IPURE; \
    MAPIMETHOD(SetColumns) \
        (THIS_ LPSPropTagArray lpPropTagArray, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(QueryColumns) \
        (THIS_ ULONG ulFlags, \
                LPSPropTagArray FAR * lpPropTagArray) IPURE; \
    MAPIMETHOD(GetRowCount) \
        (THIS_ ULONG ulFlags, \
                ULONG FAR * lpulCount) IPURE; \
    MAPIMETHOD(SeekRow) \
        (THIS_ BOOKMARK bkOrigin, \
                LONG lRowCount, \
                LONG FAR * lplRowsSought) IPURE; \
    MAPIMETHOD(SeekRowApprox) \
        (THIS_ ULONG ulNumerator, \
                ULONG ulDenominator) IPURE; \
    MAPIMETHOD(QueryPosition) \
        (THIS_ ULONG FAR * lpulRow, \
                ULONG FAR * lpulNumerator, \
                ULONG FAR * lpulDenominator) IPURE; \
    MAPIMETHOD(FindRow) \
        (THIS_ LPSRestriction lpRestriction, \
                BOOKMARK bkOrigin, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(Restrict) \
        (THIS_ LPSRestriction lpRestriction, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(CreateBookmark) \
        (THIS_ BOOKMARK FAR * lpbkPosition) IPURE; \
    MAPIMETHOD(FreeBookmark) \
        (THIS_ BOOKMARK bkPosition) IPURE; \
    MAPIMETHOD(SortTable) \
        (THIS_ LPSSortOrderSet lpSortCriteria, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(QuerySortOrder) \
        (THIS_ LPSSortOrderSet FAR * lppSortCriteria) IPURE; \
    MAPIMETHOD(QueryRows) \
        (THIS_ LONG lRowCount, \
                ULONG ulFlags, \
                LPSRowSet FAR * lppRows) IPURE; \
    MAPIMETHOD(Abort) (THIS) IPURE; \
    MAPIMETHOD(ExpandRow) \
        (THIS_ ULONG cbInstanceKey, \
                LPBYTE pbInstanceKey, \
                ULONG ulRowCount, \
                ULONG ulFlags, \
                LPSRowSet FAR * lppRows, \
                ULONG FAR * lpulMoreRows) IPURE; \
    MAPIMETHOD(CollapseRow) \
        (THIS_ ULONG cbInstanceKey, \
                LPBYTE pbInstanceKey, \
                ULONG ulFlags, \
                ULONG FAR * lpulRowCount) IPURE; \
    MAPIMETHOD(WaitForCompletion) \
        (THIS_ ULONG ulFlags, \
                ULONG ulTimeout, \
                ULONG FAR * lpulTableStatus) IPURE; \
    MAPIMETHOD(GetCollapseState) \
        (THIS_ ULONG ulFlags, \
                ULONG cbInstanceKey, \
                LPBYTE lpbInstanceKey, \
                ULONG FAR * lpcbCollapseState, \
                LPBYTE FAR * lppbCollapseState) IPURE; \
    MAPIMETHOD(SetCollapseState) \
        (THIS_ ULONG ulFlags, \
                ULONG cbCollapseState, \
                LPBYTE pbCollapseState, \
                BOOKMARK FAR * lpbkLocation) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPITable, IUnknown)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPITABLE_METHODS(PURE)
};
{ 0x98, 0x15, 0xAC, 0x08, 0xAA, 0xB0, 0x10, 0x1A, \
    0x8C, 0x93, 0x08, 0x00, 0x2B, 0x2A, 0x56, 0xC2 }
DECLARE_MAPI_INTERFACE_(IProfSect, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IPROFSECT_METHODS(PURE)
};
    MAPIMETHOD(ValidateState) \
        (THIS_ _In_opt_ ULONG_PTR ulUIParam, \
                         ULONG ulFlags) IPURE; \
    MAPIMETHOD(SettingsDialog) \
        (THIS_ _In_opt_ ULONG_PTR ulUIParam, \
                         ULONG ulFlags) IPURE; \
    MAPIMETHOD(ChangePassword) \
        (THIS_ _In_ LPTSTR lpOldPass, \
                _In_ LPTSTR lpNewPass, \
                     ULONG ulFlags) IPURE; \
    MAPIMETHOD(FlushQueues) \
        (THIS_ _In_opt_ ULONG_PTR ulUIParam, \
                         ULONG cbTargetTransport, \
                _In_reads_opt_(cbTargetTransport) LPENTRYID lpTargetTransport, \
                         ULONG ulFlags) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIStatus, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMAPISTATUS_METHODS(PURE)
};
    MAPIMETHOD(GetContentsTable) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(GetHierarchyTable) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(OpenEntry) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                            LPCIID lpInterface, \
                            ULONG ulFlags, \
                _Out_ ULONG FAR * lpulObjType, \
                _Outptr_ LPUNKNOWN FAR * lppUnk) IPURE; \
    MAPIMETHOD(SetSearchCriteria) \
        (THIS_ _In_opt_ LPSRestriction lpRestriction, \
                _In_opt_ LPENTRYLIST lpContainerList, \
                         ULONG ulSearchFlags) IPURE; \
    MAPIMETHOD(GetSearchCriteria) \
        (THIS_ ULONG ulFlags, \
                _Outptr_result_maybenull_ LPSRestriction FAR * lppRestriction, \
                _Outptr_result_maybenull_ LPENTRYLIST FAR * lppContainerList, \
                _Out_opt_ ULONG FAR * lpulSearchState)IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIContainer, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMAPICONTAINER_METHODS(PURE)
};
typedef struct _flaglist
{
    ULONG cFlags;
    _Field_size_(cFlags)
    ULONG ulFlag[MAPI_DIM];
} FlagList, FAR * LPFlagList;
    MAPIMETHOD(CreateEntry) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                ULONG ulCreateFlags, \
                _Outptr_ LPMAPIPROP FAR * lppMAPIPropEntry) IPURE; \
    MAPIMETHOD(CopyEntries) \
        (THIS_ _In_ LPENTRYLIST lpEntries, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                         ULONG ulFlags) IPURE; \
    MAPIMETHOD(DeleteEntries) \
        (THIS_ _In_ LPENTRYLIST lpEntries, \
                     ULONG ulFlags) IPURE; \
    MAPIMETHOD(ResolveNames) \
        (THIS_ _In_opt_ LPSPropTagArray lpPropTagArray, \
                         ULONG ulFlags, \
                _In_ LPADRLIST lpAdrList, \
                _Out_ LPFlagList lpFlagList) IPURE; \
DECLARE_MAPI_INTERFACE_(IABContainer, IMAPIContainer)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMAPICONTAINER_METHODS(PURE)
    MAPI_IABCONTAINER_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_(IMailUser, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMAILUSER_METHODS(PURE)
};
    MAPIMETHOD(CreateEntry) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                ULONG ulCreateFlags, \
                _Outptr_ LPMAPIPROP FAR * lppMAPIPropEntry) IPURE; \
    MAPIMETHOD(CopyEntries) \
        (THIS_ _In_ LPENTRYLIST lpEntries, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(DeleteEntries) \
        (THIS_ _In_ LPENTRYLIST lpEntries, \
                     ULONG ulFlags) IPURE; \
    MAPIMETHOD(ResolveNames) \
        (THIS_ _In_opt_ LPSPropTagArray lpPropTagArray, \
                         ULONG ulFlags, \
                _In_ LPADRLIST lpAdrList, \
                _Out_ LPFlagList lpFlagList) IPURE; \
DECLARE_MAPI_INTERFACE_(IDistList, IMAPIContainer)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMAPICONTAINER_METHODS(PURE)
    MAPI_IDISTLIST_METHODS(PURE)
};
    MAPIMETHOD(CreateMessage) \
        (THIS_ LPCIID lpInterface, \
                ULONG ulFlags, \
                _Outptr_ LPMESSAGE FAR * lppMessage) IPURE; \
    MAPIMETHOD(CopyMessages) \
        (THIS_ _In_ LPENTRYLIST lpMsgList, \
                _In_opt_ LPCIID lpInterface, \
                _In_ LPVOID lpDestFolder, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(DeleteMessages) \
        (THIS_ _In_ LPENTRYLIST lpMsgList, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(CreateFolder) \
        (THIS_ ULONG ulFolderType, \
                _In_ LPTSTR lpszFolderName, \
                _In_opt_ LPTSTR lpszFolderComment, \
                _In_opt_ LPCIID lpInterface, \
                         ULONG ulFlags, \
                _Outptr_ LPMAPIFOLDER FAR * lppFolder) IPURE; \
    MAPIMETHOD(CopyFolder) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                _In_opt_ LPCIID lpInterface, \
                _In_ LPVOID lpDestFolder, \
                _In_ LPTSTR lpszNewFolderName, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                         ULONG ulFlags) IPURE; \
    MAPIMETHOD(DeleteFolder) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                         ULONG ulFlags) IPURE; \
    MAPIMETHOD(SetReadFlags) \
        (THIS_ _In_ LPENTRYLIST lpMsgList, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(GetMessageStatus) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                      ULONG ulFlags, \
                _Out_ ULONG FAR * lpulMessageStatus) IPURE; \
    MAPIMETHOD(SetMessageStatus) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                      ULONG ulNewStatus, \
                      ULONG ulNewStatusMask, \
                _Out_ ULONG FAR * lpulOldStatus) IPURE; \
    MAPIMETHOD(SaveContentsSort) \
        (THIS_ _In_ LPSSortOrderSet lpSortCriteria, \
                     ULONG ulFlags) IPURE; \
    MAPIMETHOD(EmptyFolder) \
        (THIS_ _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                         ULONG ulFlags) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIFolder, IMAPIContainer)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMAPICONTAINER_METHODS(PURE)
    MAPI_IMAPIFOLDER_METHODS(PURE)
};
    MAPIMETHOD(Advise) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_opt_(cbEntryID) LPENTRYID lpEntryID, \
                      ULONG ulEventMask, \
                _In_ LPMAPIADVISESINK lpAdviseSink, \
                _Out_ ULONG FAR * lpulConnection) IPURE; \
    MAPIMETHOD(Unadvise) \
        (THIS_ _In_ ULONG ulConnection) IPURE; \
    MAPIMETHOD(CompareEntryIDs) \
        (THIS_ ULONG cbEntryID1, \
                _In_reads_bytes_(cbEntryID1) LPENTRYID lpEntryID1, \
                      ULONG cbEntryID2, \
                _In_reads_bytes_(cbEntryID2) LPENTRYID lpEntryID2, \
                      ULONG ulFlags, \
                _Out_ ULONG FAR * lpulResult) IPURE; \
    MAPIMETHOD(OpenEntry) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                _In_opt_ LPCIID lpInterface, \
                         ULONG ulFlags, \
                _Out_ ULONG FAR * lpulObjType, \
                _Outptr_ LPUNKNOWN FAR * ppUnk) IPURE; \
    MAPIMETHOD(SetReceiveFolder) \
        (THIS_ _In_opt_ LPTSTR lpszMessageClass, \
                         ULONG ulFlags, \
                         ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID) IPURE; \
    MAPIMETHOD(GetReceiveFolder) \
        (THIS_ _In_opt_ LPTSTR lpszMessageClass, \
                         ULONG ulFlags, \
                _Out_ ULONG FAR * lpcbEntryID, \
                _Outptr_result_bytebuffer_(*lpcbEntryID) LPENTRYID FAR * lppEntryID, \
                _Outptr_result_maybenull_ LPTSTR FAR * lppszExplicitClass) IPURE; \
    MAPIMETHOD(GetReceiveFolderTable) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(StoreLogoff) \
        (THIS_ _Inout_ ULONG FAR * lpulFlags) IPURE; \
    MAPIMETHOD(AbortSubmit) \
        (THIS_ ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(GetOutgoingQueue) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(SetLockState) \
        (THIS_ _In_ LPMESSAGE lpMessage, \
                     ULONG ulLockState) IPURE; \
    MAPIMETHOD(FinishedMsg) \
        (THIS_ ULONG ulFlags, \
                ULONG cbEntryID, \
                _In_reads_bytes_(cbEntryID) LPENTRYID lpEntryID) IPURE; \
    MAPIMETHOD(NotifyNewMail) \
        (THIS_ _In_ LPNOTIFICATION lpNotification) IPURE; \
DECLARE_MAPI_INTERFACE_(IMsgStore, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMSGSTORE_METHODS(PURE)
};
    MAPIMETHOD(GetAttachmentTable) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(OpenAttach) \
        (THIS_ ULONG ulAttachmentNum, \
                _In_opt_ LPCIID lpInterface, \
                         ULONG ulFlags, \
                _Outptr_ LPATTACH FAR * lppAttach) IPURE; \
    MAPIMETHOD(CreateAttach) \
        (THIS_ _In_opt_ LPCIID lpInterface, \
                            ULONG ulFlags, \
                _Out_ ULONG FAR * lpulAttachmentNum, \
                _Outptr_ LPATTACH FAR * lppAttach) IPURE; \
    MAPIMETHOD(DeleteAttach) \
        (THIS_ ULONG ulAttachmentNum, \
                _In_opt_ ULONG_PTR ulUIParam, \
                _In_opt_ LPMAPIPROGRESS lpProgress, \
                ULONG ulFlags) IPURE; \
    MAPIMETHOD(GetRecipientTable) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(ModifyRecipients) \
        (THIS_ ULONG ulFlags, \
                _In_ LPADRLIST lpMods) IPURE; \
    MAPIMETHOD(SubmitMessage) \
        (THIS_ ULONG ulFlags) IPURE; \
    MAPIMETHOD(SetReadFlag) \
        (THIS_ ULONG ulFlags) IPURE; \
DECLARE_MAPI_INTERFACE_(IMessage, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IMESSAGE_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_(IAttach, IMAPIProp)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPIPROP_METHODS(PURE)
    MAPI_IATTACH_METHODS(PURE)
};
typedef BOOL (STDMETHODCALLTYPE ACCELERATEABSDI)(ULONG_PTR ulUIParam,
                                                LPVOID lpvmsg);
typedef ACCELERATEABSDI FAR * LPFNABSDI;
typedef void (STDMETHODCALLTYPE DISMISSMODELESS)(ULONG_PTR ulUIParam,
                                                LPVOID lpvContext);
typedef DISMISSMODELESS FAR * LPFNDISMISS;
typedef SCODE (STDMETHODCALLTYPE FAR * LPFNBUTTON)(
    ULONG_PTR ulUIParam,
    LPVOID lpvContext,
    ULONG cbEntryID,
    LPENTRYID lpSelection,
    ULONG ulFlags
);
typedef struct _ADRPARM
{
    ULONG cbABContEntryID;
    LPENTRYID lpABContEntryID;
    ULONG ulFlags;
    LPVOID lpReserved;
    ULONG ulHelpContext;
    LPTSTR lpszHelpFileName;
    LPFNABSDI lpfnABSDI;
    LPFNDISMISS lpfnDismiss;
    LPVOID lpvDismissContext;
    LPTSTR lpszCaption;
    LPTSTR lpszNewEntryTitle;
    LPTSTR lpszDestWellsTitle;
    ULONG cDestFields;
    ULONG nDestFieldFocus;
    LPTSTR FAR * lppszDestTitles;
    ULONG FAR * lpulDestComps;
    LPSRestriction lpContRestriction;
    LPSRestriction lpHierRestriction;
} ADRPARM, FAR * LPADRPARM;
    MAPIMETHOD(GetLastError) \
        (THIS_ HRESULT hResult, \
                ULONG ulFlags, \
                _Outptr_ LPMAPIERROR FAR * lppMAPIError) IPURE; \
    MAPIMETHOD(Activate) \
        (THIS_ ULONG ulFlags, \
                _In_opt_ ULONG_PTR ulUIParam) IPURE; \
    MAPIMETHOD(GetState) \
        (THIS_ ULONG ulFlags, \
                ULONG FAR * lpulState) IPURE; \
DECLARE_MAPI_INTERFACE_(IMAPIControl, IUnknown)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPICONTROL_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IMAPIControl, LPMAPICONTROL);
typedef struct _DTBLLABEL
{
    ULONG ulbLpszLabelName;
    ULONG ulFlags;
} DTBLLABEL, FAR * LPDTBLLABEL;
struct _DTBLLABEL_ ## u \
{ \
    DTBLLABEL dtbllabel; \
    TCHAR lpszLabelName[n]; \
} u
typedef struct _DTBLEDIT
{
    ULONG ulbLpszCharsAllowed;
    ULONG ulFlags;
    ULONG ulNumCharsAllowed;
    ULONG ulPropTag;
} DTBLEDIT, FAR * LPDTBLEDIT;
struct _DTBLEDIT_ ## u \
{ \
    DTBLEDIT dtbledit; \
    TCHAR lpszCharsAllowed[n]; \
} u
typedef struct _DTBLLBX
{
    ULONG ulFlags;
    ULONG ulPRSetProperty;
    ULONG ulPRTableName;
} DTBLLBX, FAR * LPDTBLLBX;
typedef struct _DTBLCOMBOBOX
{
    ULONG ulbLpszCharsAllowed;
    ULONG ulFlags;
    ULONG ulNumCharsAllowed;
    ULONG ulPRPropertyName;
    ULONG ulPRTableName;
} DTBLCOMBOBOX, FAR * LPDTBLCOMBOBOX;
struct _DTBLCOMBOBOX_ ## u \
{ \
    DTBLCOMBOBOX dtblcombobox; \
    TCHAR lpszCharsAllowed[n]; \
} u
typedef struct _DTBLDDLBX
{
    ULONG ulFlags;
    ULONG ulPRDisplayProperty;
    ULONG ulPRSetProperty;
    ULONG ulPRTableName;
} DTBLDDLBX, FAR * LPDTBLDDLBX;
typedef struct _DTBLCHECKBOX
{
    ULONG ulbLpszLabel;
    ULONG ulFlags;
    ULONG ulPRPropertyName;
} DTBLCHECKBOX, FAR * LPDTBLCHECKBOX;
struct _DTBLCHECKBOX_ ## u \
{ \
    DTBLCHECKBOX dtblcheckbox; \
    TCHAR lpszLabel[n]; \
} u
typedef struct _DTBLGROUPBOX
{
    ULONG ulbLpszLabel;
    ULONG ulFlags;
} DTBLGROUPBOX, FAR * LPDTBLGROUPBOX;
struct _DTBLGROUPBOX_ ## u \
{ \
    DTBLGROUPBOX dtblgroupbox; \
    TCHAR lpszLabel[n]; \
} u
typedef struct _DTBLBUTTON
{
    ULONG ulbLpszLabel;
    ULONG ulFlags;
    ULONG ulPRControl;
} DTBLBUTTON, FAR * LPDTBLBUTTON;
struct _DTBLBUTTON_ ## u \
{ \
    DTBLBUTTON dtblbutton; \
    TCHAR lpszLabel[n]; \
} u
typedef struct _DTBLPAGE
{
    ULONG ulbLpszLabel;
    ULONG ulFlags;
    ULONG ulbLpszComponent;
    ULONG ulContext;
} DTBLPAGE, FAR * LPDTBLPAGE;
struct _DTBLPAGE_ ## u \
{ \
    DTBLPAGE dtblpage; \
    TCHAR lpszLabel[n]; \
    TCHAR lpszComponent[n1]; \
} u
typedef struct _DTBLRADIOBUTTON
{
    ULONG ulbLpszLabel;
    ULONG ulFlags;
    ULONG ulcButtons;
    ULONG ulPropTag;
    long lReturnValue;
} DTBLRADIOBUTTON, FAR * LPDTBLRADIOBUTTON;
struct _DTBLRADIOBUTTON_ ## u \
{ \
    DTBLRADIOBUTTON dtblradiobutton; \
    TCHAR lpszLabel[n]; \
} u
typedef struct _DTBLMVLISTBOX
{
    ULONG ulFlags;
    ULONG ulMVPropTag;
} DTBLMVLISTBOX, FAR * LPDTBLMVLISTBOX;
typedef struct _DTBLMVDDLBX
{
    ULONG ulFlags;
    ULONG ulMVPropTag;
} DTBLMVDDLBX, FAR * LPDTBLMVDDLBX;
    MAPIMETHOD(GetLastError) \
        (THIS_ HRESULT hResult, \
                ULONG ulFlags, \
                _Outptr_ LPMAPIERROR FAR * lppMAPIError) IPURE; \
    MAPIMETHOD(GetProviderTable) \
        (THIS_ ULONG ulFlags, \
                _Outptr_ LPMAPITABLE FAR * lppTable) IPURE; \
    MAPIMETHOD(CreateProvider) \
        (THIS_ _In_ LPTSTR lpszProvider, \
                         ULONG cValues, \
                _In_reads_(cValues) LPSPropValue lpProps, \
                _In_opt_ ULONG_PTR ulUIParam, \
                         ULONG ulFlags, \
                _Out_ MAPIUID FAR * lpUID) IPURE; \
    MAPIMETHOD(DeleteProvider) \
        (THIS_ _In_ LPMAPIUID lpUID) IPURE; \
    MAPIMETHOD(OpenProfileSection) \
        (THIS_ _In_opt_ LPMAPIUID lpUID, \
                _In_opt_ LPCIID lpInterface, \
                            ULONG ulFlags, \
                _Outptr_ LPPROFSECT FAR * lppProfSect) IPURE; \
DECLARE_MAPI_INTERFACE_(IProviderAdmin, IUnknown)
{
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IPROVIDERADMIN_METHODS(PURE)
};
typedef HANDLE HANDLE_16;
typedef WPARAM WPARAM_16;
}
#endif
#pragma endregion
