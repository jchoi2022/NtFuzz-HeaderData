#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
 MAPIMETHOD(OpenEntry) \
  (THIS_ ULONG cbEntryID, \
    LPENTRYID lpEntryID, \
    LPCIID lpInterface, \
    ULONG ulFlags, \
    ULONG FAR * lpulObjType, \
    LPUNKNOWN FAR * lppUnk) IPURE; \
 MAPIMETHOD(CompareEntryIDs) \
  (THIS_ ULONG cbEntryID1, \
    LPENTRYID lpEntryID1, \
    ULONG cbEntryID2, \
    LPENTRYID lpEntryID2, \
    ULONG ulFlags, \
    ULONG FAR * lpulResult) IPURE; \
 MAPIMETHOD(Advise) \
  (THIS_ ULONG cbEntryID, \
    LPENTRYID lpEntryID, \
    ULONG ulEventMask, \
    LPMAPIADVISESINK lpAdviseSink, \
    ULONG FAR * lpulConnection) IPURE; \
 MAPIMETHOD(Unadvise) \
  (THIS_ ULONG ulConnection) IPURE; \
 MAPIMETHOD(CreateOneOff) \
  (THIS_ LPTSTR lpszName, \
    LPTSTR lpszAdrType, \
    LPTSTR lpszAddress, \
    ULONG ulFlags, \
    ULONG FAR * lpcbEntryID, \
    LPENTRYID FAR * lppEntryID) IPURE; \
 MAPIMETHOD(NewEntry) \
  (THIS_ ULONG ulUIParam, \
    ULONG ulFlags, \
    ULONG cbEIDContainer, \
    LPENTRYID lpEIDContainer, \
    ULONG cbEIDNewEntryTpl, \
    LPENTRYID lpEIDNewEntryTpl, \
    ULONG FAR * lpcbEIDNewEntry, \
    LPENTRYID FAR * lppEIDNewEntry) IPURE; \
 MAPIMETHOD(ResolveName) \
  (THIS_ ULONG_PTR ulUIParam, \
    ULONG ulFlags, \
    LPTSTR lpszNewEntryTitle, \
    LPADRLIST lpAdrList) IPURE; \
 MAPIMETHOD(Address) \
  (THIS_ ULONG FAR * lpulUIParam, \
    LPADRPARM lpAdrParms, \
    LPADRLIST FAR * lppAdrList) IPURE; \
 MAPIMETHOD(Details) \
  (THIS_ ULONG_PTR FAR * lpulUIParam, \
    LPFNDISMISS lpfnDismiss, \
    LPVOID lpvDismissContext, \
    ULONG cbEntryID, \
    LPENTRYID lpEntryID, \
    LPFNBUTTON lpfButtonCallback, \
    LPVOID lpvButtonContext, \
    LPTSTR lpszButtonText, \
    ULONG ulFlags) IPURE; \
 MAPIMETHOD(RecipOptions) \
  (THIS_ ULONG ulUIParam, \
    ULONG ulFlags, \
    LPADRENTRY lpRecip) IPURE; \
 MAPIMETHOD(QueryDefaultRecipOpt) \
  (THIS_ LPTSTR lpszAdrType, \
    ULONG ulFlags, \
    ULONG FAR * lpcValues, \
    LPSPropValue FAR * lppOptions) IPURE; \
 MAPIMETHOD(GetPAB) \
  (THIS_ ULONG FAR * lpcbEntryID, \
    LPENTRYID FAR * lppEntryID) IPURE; \
 MAPIMETHOD(SetPAB) \
  (THIS_ ULONG cbEntryID, \
    LPENTRYID lpEntryID) IPURE; \
 MAPIMETHOD(GetDefaultDir) \
  (THIS_ ULONG FAR * lpcbEntryID, \
    LPENTRYID FAR * lppEntryID) IPURE; \
 MAPIMETHOD(SetDefaultDir) \
  (THIS_ ULONG cbEntryID, \
    LPENTRYID lpEntryID) IPURE; \
 MAPIMETHOD(GetSearchPath) \
  (THIS_ ULONG ulFlags, \
    LPSRowSet FAR * lppSearchPath) IPURE; \
 MAPIMETHOD(SetSearchPath) \
  (THIS_ ULONG ulFlags, \
    LPSRowSet lpSearchPath) IPURE; \
 MAPIMETHOD(PrepareRecips) \
  (THIS_ ULONG ulFlags, \
    LPSPropTagArray lpPropTagArray, \
    LPADRLIST lpRecipList) IPURE; \
DECLARE_MAPI_INTERFACE_(IAddrBook, IMAPIProp)
{
 BEGIN_INTERFACE
 MAPI_IUNKNOWN_METHODS(PURE)
 MAPI_IMAPIPROP_METHODS(PURE)
 MAPI_IADDRBOOK_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IAddrBook, LPADRBOOK);
#endif
#pragma endregion
