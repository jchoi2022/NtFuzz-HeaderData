#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITravelLogEntry ITravelLogEntry;
typedef interface ITravelLogClient ITravelLogClient;
typedef interface IEnumTravelLogEntry IEnumTravelLogEntry;
typedef interface ITravelLogStg ITravelLogStg;
#include "objidl.h"
#include "oleidl.h"
#include "shtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
typedef struct _WINDOWDATA
    {
    DWORD dwWindowID;
    UINT uiCP;
    PIDLIST_ABSOLUTE pidl;
                   LPWSTR lpszUrl;
                   LPWSTR lpszUrlLocation;
                   LPWSTR lpszTitle;
    } WINDOWDATA;
typedef WINDOWDATA *LPWINDOWDATA;
typedef const WINDOWDATA *LPCWINDOWDATA;
extern RPC_IF_HANDLE __MIDL_itf_tlogstg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlogstg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITravelLogEntry;
    typedef struct ITravelLogEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITravelLogEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITravelLogEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITravelLogEntry * This);
                                        HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            __RPC__in ITravelLogEntry * This,
                        __RPC__deref_out_opt LPWSTR *ppszTitle);
                                        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            __RPC__in ITravelLogEntry * This,
                        __RPC__deref_out_opt LPWSTR *ppszURL);
        END_INTERFACE
    } ITravelLogEntryVtbl;
    interface ITravelLogEntry
    {
        CONST_VTBL struct ITravelLogEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTitle(This,ppszTitle) )
    ( (This)->lpVtbl -> GetURL(This,ppszURL) )
EXTERN_C const IID IID_ITravelLogClient;
    typedef struct ITravelLogClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITravelLogClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITravelLogClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITravelLogClient * This);
                                        HRESULT ( STDMETHODCALLTYPE *FindWindowByIndex )(
            __RPC__in ITravelLogClient * This,
                       DWORD dwID,
                        __RPC__deref_out_opt IUnknown **ppunk);
                                        HRESULT ( STDMETHODCALLTYPE *GetWindowData )(
            __RPC__in ITravelLogClient * This,
                       __RPC__in_opt IStream *pStream,
                        __RPC__out LPWINDOWDATA pWinData);
                                        HRESULT ( STDMETHODCALLTYPE *LoadHistoryPosition )(
            __RPC__in ITravelLogClient * This,
                       __RPC__in LPWSTR pszUrlLocation,
                       DWORD dwPosition);
        END_INTERFACE
    } ITravelLogClientVtbl;
    interface ITravelLogClient
    {
        CONST_VTBL struct ITravelLogClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindWindowByIndex(This,dwID,ppunk) )
    ( (This)->lpVtbl -> GetWindowData(This,pStream,pWinData) )
    ( (This)->lpVtbl -> LoadHistoryPosition(This,pszUrlLocation,dwPosition) )
EXTERN_C const IID IID_IEnumTravelLogEntry;
    typedef struct IEnumTravelLogEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTravelLogEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTravelLogEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTravelLogEntry * This);
                                        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTravelLogEntry * This,
                       ULONG cElt,
                                            __RPC__out_ecount_part(cElt, *pcEltFetched) ITravelLogEntry **rgElt,
                        __RPC__out ULONG *pcEltFetched);
                                        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTravelLogEntry * This,
                       ULONG cElt);
                                        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTravelLogEntry * This);
                                        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTravelLogEntry * This,
                        __RPC__deref_out_opt IEnumTravelLogEntry **ppEnum);
        END_INTERFACE
    } IEnumTravelLogEntryVtbl;
    interface IEnumTravelLogEntry
    {
        CONST_VTBL struct IEnumTravelLogEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
    ( (This)->lpVtbl -> Skip(This,cElt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
enum tagTLENUMF
    {
        TLEF_RELATIVE_INCLUDE_CURRENT = 0x1,
        TLEF_RELATIVE_BACK = 0x10,
        TLEF_RELATIVE_FORE = 0x20,
        TLEF_INCLUDE_UNINVOKEABLE = 0x40,
        TLEF_ABSOLUTE = 0x31,
        TLEF_EXCLUDE_SUBFRAME_ENTRIES = 0x80,
        TLEF_EXCLUDE_ABOUT_PAGES = 0x100
    } ;
typedef DWORD TLENUMF;
EXTERN_C const IID IID_ITravelLogStg;
    typedef struct ITravelLogStgVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITravelLogStg * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITravelLogStg * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITravelLogStg * This);
                                        HRESULT ( STDMETHODCALLTYPE *CreateEntry )(
            __RPC__in ITravelLogStg * This,
                       __RPC__in LPCWSTR pszUrl,
                       __RPC__in LPCWSTR pszTitle,
                       __RPC__in_opt ITravelLogEntry *ptleRelativeTo,
                       BOOL fPrepend,
                        __RPC__deref_out_opt ITravelLogEntry **pptle);
                                        HRESULT ( STDMETHODCALLTYPE *TravelTo )(
            __RPC__in ITravelLogStg * This,
                       __RPC__in_opt ITravelLogEntry *ptle);
                                        HRESULT ( STDMETHODCALLTYPE *EnumEntries )(
            __RPC__in ITravelLogStg * This,
                       TLENUMF flags,
                        __RPC__deref_out_opt IEnumTravelLogEntry **ppenum);
                                        HRESULT ( STDMETHODCALLTYPE *FindEntries )(
            __RPC__in ITravelLogStg * This,
                       TLENUMF flags,
                       __RPC__in LPCWSTR pszUrl,
                        __RPC__deref_out_opt IEnumTravelLogEntry **ppenum);
                                        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITravelLogStg * This,
                       TLENUMF flags,
                        __RPC__out DWORD *pcEntries);
                                        HRESULT ( STDMETHODCALLTYPE *RemoveEntry )(
            __RPC__in ITravelLogStg * This,
                       __RPC__in_opt ITravelLogEntry *ptle);
                                        HRESULT ( STDMETHODCALLTYPE *GetRelativeEntry )(
            __RPC__in ITravelLogStg * This,
                       int iOffset,
                        __RPC__deref_out_opt ITravelLogEntry **ptle);
        END_INTERFACE
    } ITravelLogStgVtbl;
    interface ITravelLogStg
    {
        CONST_VTBL struct ITravelLogStgVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateEntry(This,pszUrl,pszTitle,ptleRelativeTo,fPrepend,pptle) )
    ( (This)->lpVtbl -> TravelTo(This,ptle) )
    ( (This)->lpVtbl -> EnumEntries(This,flags,ppenum) )
    ( (This)->lpVtbl -> FindEntries(This,flags,pszUrl,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,flags,pcEntries) )
    ( (This)->lpVtbl -> RemoveEntry(This,ptle) )
    ( (This)->lpVtbl -> GetRelativeEntry(This,iOffset,ptle) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tlogstg_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlogstg_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * );
void __RPC_USER PIDLIST_ABSOLUTE_UserFree( __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * );
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * );
void __RPC_USER PIDLIST_ABSOLUTE_UserFree64( __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * );
}
