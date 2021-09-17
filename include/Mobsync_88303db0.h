#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISyncMgrSynchronizeCallback ISyncMgrSynchronizeCallback;
typedef interface ISyncMgrEnumItems ISyncMgrEnumItems;
typedef interface ISyncMgrSynchronize ISyncMgrSynchronize;
typedef interface ISyncMgrSynchronizeInvoke ISyncMgrSynchronizeInvoke;
typedef interface ISyncMgrRegister ISyncMgrRegister;
typedef class SyncMgr SyncMgr;
#include "objidl.h"
#include "oleidl.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer ISyncMgrSynchronizeCallback *LPSYNCMGRSYNCHRONIZECALLBACK;
typedef
enum _tagSYNCMGRSTATUS
    {
        SYNCMGRSTATUS_STOPPED = 0,
        SYNCMGRSTATUS_SKIPPED = 0x1,
        SYNCMGRSTATUS_PENDING = 0x2,
        SYNCMGRSTATUS_UPDATING = 0x3,
        SYNCMGRSTATUS_SUCCEEDED = 0x4,
        SYNCMGRSTATUS_FAILED = 0x5,
        SYNCMGRSTATUS_PAUSED = 0x6,
        SYNCMGRSTATUS_RESUMING = 0x7,
        SYNCMGRSTATUS_UPDATING_INDETERMINATE = 0x8,
        SYNCMGRSTATUS_DELETED = 0x100
    } SYNCMGRSTATUS;
typedef struct _tagSYNCMGRPROGRESSITEM
    {
    DWORD cbSize;
    UINT mask;
    LPCWSTR lpcStatusText;
    DWORD dwStatusType;
    int iProgValue;
    int iMaxValue;
    } SYNCMGRPROGRESSITEM;
typedef struct _tagSYNCMGRPROGRESSITEM *LPSYNCMGRPROGRESSITEM;
typedef
enum _tagSYNCMGRLOGLEVEL
    {
        SYNCMGRLOGLEVEL_INFORMATION = 0x1,
        SYNCMGRLOGLEVEL_WARNING = 0x2,
        SYNCMGRLOGLEVEL_ERROR = 0x3,
        SYNCMGRLOGLEVEL_LOGLEVELMAX = 0x3
    } SYNCMGRLOGLEVEL;
typedef
enum _tagSYNCMGRERRORFLAGS
    {
        SYNCMGRERRORFLAG_ENABLEJUMPTEXT = 0x1
    } SYNCMGRERRORFLAGS;
typedef struct _tagSYNCMGRLOGERRORINFO
    {
    DWORD cbSize;
    DWORD mask;
    DWORD dwSyncMgrErrorFlags;
    GUID ErrorID;
    GUID ItemID;
    } SYNCMGRLOGERRORINFO;
typedef struct _tagSYNCMGRLOGERRORINFO *LPSYNCMGRLOGERRORINFO;
EXTERN_C const IID IID_ISyncMgrSynchronizeCallback;
    typedef struct ISyncMgrSynchronizeCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSynchronizeCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSynchronizeCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ShowPropertiesCompleted )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *PrepareForSyncCompleted )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *SynchronizeCompleted )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *ShowErrorCompleted )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       HRESULT hr,
                       ULONG cItems,
                                        __RPC__in_ecount_full_opt(cItems) const GUID *pItemIDs);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *Progress )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       __RPC__in REFGUID ItemID,
                               __RPC__in_opt const SYNCMGRPROGRESSITEM *pSyncProgressItem);
        HRESULT ( STDMETHODCALLTYPE *LogError )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       DWORD dwErrorLevel,
                       __RPC__in LPCWSTR pszErrorText,
                               __RPC__in_opt const SYNCMGRLOGERRORINFO *pSyncLogError);
        HRESULT ( STDMETHODCALLTYPE *DeleteLogError )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                       __RPC__in REFGUID ErrorID,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *EstablishConnection )(
            __RPC__in ISyncMgrSynchronizeCallback * This,
                               __RPC__in_opt LPCWSTR pwszConnection,
                       DWORD dwReserved);
        END_INTERFACE
    } ISyncMgrSynchronizeCallbackVtbl;
    interface ISyncMgrSynchronizeCallback
    {
        CONST_VTBL struct ISyncMgrSynchronizeCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowPropertiesCompleted(This,hr) )
    ( (This)->lpVtbl -> PrepareForSyncCompleted(This,hr) )
    ( (This)->lpVtbl -> SynchronizeCompleted(This,hr) )
    ( (This)->lpVtbl -> ShowErrorCompleted(This,hr,cItems,pItemIDs) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
    ( (This)->lpVtbl -> Progress(This,ItemID,pSyncProgressItem) )
    ( (This)->lpVtbl -> LogError(This,dwErrorLevel,pszErrorText,pSyncLogError) )
    ( (This)->lpVtbl -> DeleteLogError(This,ErrorID,dwReserved) )
    ( (This)->lpVtbl -> EstablishConnection(This,pwszConnection,dwReserved) )
typedef __RPC_unique_pointer ISyncMgrEnumItems *LPSYNCMGRENUMITEMS;
typedef
enum _tagSYNCMGRITEMFLAGS
    {
        SYNCMGRITEM_HASPROPERTIES = 0x1,
        SYNCMGRITEM_TEMPORARY = 0x2,
        SYNCMGRITEM_ROAMINGUSER = 0x4,
        SYNCMGRITEM_LASTUPDATETIME = 0x8,
        SYNCMGRITEM_MAYDELETEITEM = 0x10,
        SYNCMGRITEM_HIDDEN = 0x20
    } SYNCMGRITEMFLAGS;
typedef struct _tagSYNCMGRITEM
    {
    DWORD cbSize;
    DWORD dwFlags;
    GUID ItemID;
    DWORD dwItemState;
    HICON hIcon;
    WCHAR wszItemName[ 128 ];
    FILETIME ftLastUpdate;
    } SYNCMGRITEM;
typedef struct _tagSYNCMGRITEM *LPSYNCMGRITEM;
EXTERN_C const IID IID_ISyncMgrEnumItems;
    typedef struct ISyncMgrEnumItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrEnumItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrEnumItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrEnumItems * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in ISyncMgrEnumItems * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) SYNCMGRITEM *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in ISyncMgrEnumItems * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISyncMgrEnumItems * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ISyncMgrEnumItems * This,
                        __RPC__deref_out_opt ISyncMgrEnumItems **ppenum);
        END_INTERFACE
    } ISyncMgrEnumItemsVtbl;
    interface ISyncMgrEnumItems
    {
        CONST_VTBL struct ISyncMgrEnumItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef __RPC_unique_pointer ISyncMgrSynchronize *LPSYNCMGROnSynchronize;
typedef
enum _tagSYNCMGRFLAG
    {
        SYNCMGRFLAG_CONNECT = 0x1,
        SYNCMGRFLAG_PENDINGDISCONNECT = 0x2,
        SYNCMGRFLAG_MANUAL = 0x3,
        SYNCMGRFLAG_IDLE = 0x4,
        SYNCMGRFLAG_INVOKE = 0x5,
        SYNCMGRFLAG_SCHEDULED = 0x6,
        SYNCMGRFLAG_EVENTMASK = 0xff,
        SYNCMGRFLAG_SETTINGS = 0x100,
        SYNCMGRFLAG_MAYBOTHERUSER = 0x200
    } SYNCMGRFLAG;
typedef
enum _tagSYNCMGRHANDLERFLAGS
    {
        SYNCMGRHANDLER_HASPROPERTIES = 0x1,
        SYNCMGRHANDLER_MAYESTABLISHCONNECTION = 0x2,
        SYNCMGRHANDLER_ALWAYSLISTHANDLER = 0x4,
        SYNCMGRHANDLER_HIDDEN = 0x8
    } SYNCMGRHANDLERFLAGS;
typedef struct _tagSYNCMGRHANDLERINFO
    {
    DWORD cbSize;
    HICON hIcon;
    DWORD SyncMgrHandlerFlags;
    WCHAR wszHandlerName[ 32 ];
    } SYNCMGRHANDLERINFO;
typedef struct _tagSYNCMGRHANDLERINFO *LPSYNCMGRHANDLERINFO;
typedef
enum _tagSYNCMGRITEMSTATE
    {
        SYNCMGRITEMSTATE_UNCHECKED = 0,
        SYNCMGRITEMSTATE_CHECKED = 0x1
    } SYNCMGRITEMSTATE;
EXTERN_C const IID IID_ISyncMgrSynchronize;
    typedef struct ISyncMgrSynchronizeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSynchronize * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSynchronize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSynchronize * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISyncMgrSynchronize * This,
                       DWORD dwReserved,
                       DWORD dwSyncMgrFlags,
                       DWORD cbCookie,
                                        __RPC__in_ecount_full_opt(cbCookie) const BYTE *lpCookie);
        HRESULT ( STDMETHODCALLTYPE *GetHandlerInfo )(
            __RPC__in ISyncMgrSynchronize * This,
                        __RPC__deref_out_opt SYNCMGRHANDLERINFO **ppSyncMgrHandlerInfo);
        HRESULT ( STDMETHODCALLTYPE *EnumSyncMgrItems )(
            __RPC__in ISyncMgrSynchronize * This,
                        __RPC__deref_out_opt ISyncMgrEnumItems **ppSyncMgrEnumItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )(
            __RPC__in ISyncMgrSynchronize * This,
                       __RPC__in REFGUID ItemID,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )(
            __RPC__in ISyncMgrSynchronize * This,
                       __RPC__in HWND hWndParent,
                       __RPC__in REFGUID ItemID);
        HRESULT ( STDMETHODCALLTYPE *SetProgressCallback )(
            __RPC__in ISyncMgrSynchronize * This,
                               __RPC__in_opt ISyncMgrSynchronizeCallback *lpCallBack);
        HRESULT ( STDMETHODCALLTYPE *PrepareForSync )(
            __RPC__in ISyncMgrSynchronize * This,
                       ULONG cbNumItems,
                                __RPC__in_ecount_full(cbNumItems) GUID *pItemIDs,
                       __RPC__in HWND hWndParent,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in ISyncMgrSynchronize * This,
                       __RPC__in HWND hWndParent);
        HRESULT ( STDMETHODCALLTYPE *SetItemStatus )(
            __RPC__in ISyncMgrSynchronize * This,
                       __RPC__in REFGUID pItemID,
                       DWORD dwSyncMgrStatus);
        HRESULT ( STDMETHODCALLTYPE *ShowError )(
            __RPC__in ISyncMgrSynchronize * This,
                       __RPC__in HWND hWndParent,
                       __RPC__in REFGUID ErrorID);
        END_INTERFACE
    } ISyncMgrSynchronizeVtbl;
    interface ISyncMgrSynchronize
    {
        CONST_VTBL struct ISyncMgrSynchronizeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,dwReserved,dwSyncMgrFlags,cbCookie,lpCookie) )
    ( (This)->lpVtbl -> GetHandlerInfo(This,ppSyncMgrHandlerInfo) )
    ( (This)->lpVtbl -> EnumSyncMgrItems(This,ppSyncMgrEnumItems) )
    ( (This)->lpVtbl -> GetItemObject(This,ItemID,riid,ppv) )
    ( (This)->lpVtbl -> ShowProperties(This,hWndParent,ItemID) )
    ( (This)->lpVtbl -> SetProgressCallback(This,lpCallBack) )
    ( (This)->lpVtbl -> PrepareForSync(This,cbNumItems,pItemIDs,hWndParent,dwReserved) )
    ( (This)->lpVtbl -> Synchronize(This,hWndParent) )
    ( (This)->lpVtbl -> SetItemStatus(This,pItemID,dwSyncMgrStatus) )
    ( (This)->lpVtbl -> ShowError(This,hWndParent,ErrorID) )
typedef __RPC_unique_pointer ISyncMgrSynchronizeInvoke *LPSYNCMGRSYNCHRONIZEINVOKE;
typedef
enum _tagSYNCMGRINVOKEFLAGS
    {
        SYNCMGRINVOKE_STARTSYNC = 0x2,
        SYNCMGRINVOKE_MINIMIZED = 0x4
    } SYNCMGRINVOKEFLAGS;
EXTERN_C const IID IID_ISyncMgrSynchronizeInvoke;
    typedef struct ISyncMgrSynchronizeInvokeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSynchronizeInvoke * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSynchronizeInvoke * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSynchronizeInvoke * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateItems )(
            __RPC__in ISyncMgrSynchronizeInvoke * This,
                       DWORD dwInvokeFlags,
                       __RPC__in REFCLSID clsid,
                       DWORD cbCookie,
                                        __RPC__in_ecount_full_opt(cbCookie) const BYTE *pCookie);
        HRESULT ( STDMETHODCALLTYPE *UpdateAll )(
            __RPC__in ISyncMgrSynchronizeInvoke * This);
        END_INTERFACE
    } ISyncMgrSynchronizeInvokeVtbl;
    interface ISyncMgrSynchronizeInvoke
    {
        CONST_VTBL struct ISyncMgrSynchronizeInvokeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdateItems(This,dwInvokeFlags,clsid,cbCookie,pCookie) )
    ( (This)->lpVtbl -> UpdateAll(This) )
typedef __RPC_unique_pointer ISyncMgrRegister *LPSYNCMGRREGISTER;
typedef
enum _tagSYNCMGRREGISTERFLAGS
    {
        SYNCMGRREGISTERFLAG_CONNECT = 0x1,
        SYNCMGRREGISTERFLAG_PENDINGDISCONNECT = 0x2,
        SYNCMGRREGISTERFLAG_IDLE = 0x4
    } SYNCMGRREGISTERFLAGS;
EXTERN_C const IID IID_ISyncMgrRegister;
    typedef struct ISyncMgrRegisterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrRegister * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrRegister * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrRegister * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterSyncMgrHandler )(
            __RPC__in ISyncMgrRegister * This,
                       __RPC__in REFCLSID clsidHandler,
                               __RPC__in_opt LPCWSTR pwszDescription,
                       DWORD dwSyncMgrRegisterFlags);
        HRESULT ( STDMETHODCALLTYPE *UnregisterSyncMgrHandler )(
            __RPC__in ISyncMgrRegister * This,
                       __RPC__in REFCLSID clsidHandler,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetHandlerRegistrationInfo )(
            __RPC__in ISyncMgrRegister * This,
                       __RPC__in REFCLSID clsidHandler,
                            __RPC__inout LPDWORD pdwSyncMgrRegisterFlags);
        END_INTERFACE
    } ISyncMgrRegisterVtbl;
    interface ISyncMgrRegister
    {
        CONST_VTBL struct ISyncMgrRegisterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterSyncMgrHandler(This,clsidHandler,pwszDescription,dwSyncMgrRegisterFlags) )
    ( (This)->lpVtbl -> UnregisterSyncMgrHandler(This,clsidHandler,dwReserved) )
    ( (This)->lpVtbl -> GetHandlerRegistrationInfo(This,clsidHandler,pdwSyncMgrRegisterFlags) )
EXTERN_C const IID LIBID_SyncObjects;
EXTERN_C const CLSID CLSID_SyncMgr;
class DECLSPEC_UUID("6295DF27-35EE-11d1-8707-00C04FD93327")
SyncMgr;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_0006_v0_0_s_ifspec;
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
