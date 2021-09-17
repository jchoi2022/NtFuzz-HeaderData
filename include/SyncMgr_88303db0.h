#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISyncMgrHandlerCollection ISyncMgrHandlerCollection;
typedef interface ISyncMgrHandler ISyncMgrHandler;
typedef interface ISyncMgrHandlerInfo ISyncMgrHandlerInfo;
typedef interface ISyncMgrSyncItemContainer ISyncMgrSyncItemContainer;
typedef interface ISyncMgrSyncItem ISyncMgrSyncItem;
typedef interface ISyncMgrSyncItemInfo ISyncMgrSyncItemInfo;
typedef interface IEnumSyncMgrSyncItems IEnumSyncMgrSyncItems;
typedef interface ISyncMgrSessionCreator ISyncMgrSessionCreator;
typedef interface ISyncMgrSyncCallback ISyncMgrSyncCallback;
typedef interface ISyncMgrUIOperation ISyncMgrUIOperation;
typedef interface ISyncMgrEventLinkUIOperation ISyncMgrEventLinkUIOperation;
typedef interface ISyncMgrScheduleWizardUIOperation ISyncMgrScheduleWizardUIOperation;
typedef interface ISyncMgrSyncResult ISyncMgrSyncResult;
typedef interface ISyncMgrControl ISyncMgrControl;
typedef interface ISyncMgrEventStore ISyncMgrEventStore;
typedef interface ISyncMgrEvent ISyncMgrEvent;
typedef interface IEnumSyncMgrEvents IEnumSyncMgrEvents;
typedef interface ISyncMgrConflictStore ISyncMgrConflictStore;
typedef interface IEnumSyncMgrConflict IEnumSyncMgrConflict;
typedef interface ISyncMgrConflict ISyncMgrConflict;
typedef interface ISyncMgrResolutionHandler ISyncMgrResolutionHandler;
typedef interface ISyncMgrConflictPresenter ISyncMgrConflictPresenter;
typedef interface ISyncMgrConflictResolveInfo ISyncMgrConflictResolveInfo;
typedef interface ISyncMgrConflictFolder ISyncMgrConflictFolder;
typedef interface ISyncMgrConflictItems ISyncMgrConflictItems;
typedef interface ISyncMgrConflictResolutionItems ISyncMgrConflictResolutionItems;
typedef class SyncMgrClient SyncMgrClient;
typedef class SyncMgrControl SyncMgrControl;
typedef class SyncMgrScheduleWizard SyncMgrScheduleWizard;
typedef class SyncMgrFolder SyncMgrFolder;
typedef class SyncSetupFolder SyncSetupFolder;
typedef class ConflictFolder ConflictFolder;
typedef class SyncResultsFolder SyncResultsFolder;
typedef class SimpleConflictPresenter SimpleConflictPresenter;
#include "objidl.h"
#include "oleidl.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrHandlerCollection;
    typedef struct ISyncMgrHandlerCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrHandlerCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrHandlerCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrHandlerCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandlerEnumerator )(
            __RPC__in ISyncMgrHandlerCollection * This,
                        __RPC__deref_out_opt IEnumString **ppenum);
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )(
            __RPC__in ISyncMgrHandlerCollection * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } ISyncMgrHandlerCollectionVtbl;
    interface ISyncMgrHandlerCollection
    {
        CONST_VTBL struct ISyncMgrHandlerCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHandlerEnumerator(This,ppenum) )
    ( (This)->lpVtbl -> BindToHandler(This,pszHandlerID,riid,ppv) )
typedef
enum SYNCMGR_HANDLER_CAPABILITIES
    {
        SYNCMGR_HCM_NONE = 0,
        SYNCMGR_HCM_PROVIDES_ICON = 0x1,
        SYNCMGR_HCM_EVENT_STORE = 0x2,
        SYNCMGR_HCM_CONFLICT_STORE = 0x4,
        SYNCMGR_HCM_SUPPORTS_CONCURRENT_SESSIONS = 0x10,
        SYNCMGR_HCM_CAN_BROWSE_CONTENT = 0x10000,
        SYNCMGR_HCM_CAN_SHOW_SCHEDULE = 0x20000,
        SYNCMGR_HCM_QUERY_BEFORE_ACTIVATE = 0x100000,
        SYNCMGR_HCM_QUERY_BEFORE_DEACTIVATE = 0x200000,
        SYNCMGR_HCM_QUERY_BEFORE_ENABLE = 0x400000,
        SYNCMGR_HCM_QUERY_BEFORE_DISABLE = 0x800000,
        SYNCMGR_HCM_VALID_MASK = 0xf30017
    } SYNCMGR_HANDLER_CAPABILITIES;
typedef
enum SYNCMGR_HANDLER_POLICIES
    {
        SYNCMGR_HPM_NONE = 0,
        SYNCMGR_HPM_PREVENT_ACTIVATE = 0x1,
        SYNCMGR_HPM_PREVENT_DEACTIVATE = 0x2,
        SYNCMGR_HPM_PREVENT_ENABLE = 0x4,
        SYNCMGR_HPM_PREVENT_DISABLE = 0x8,
        SYNCMGR_HPM_PREVENT_START_SYNC = 0x10,
        SYNCMGR_HPM_PREVENT_STOP_SYNC = 0x20,
        SYNCMGR_HPM_DISABLE_ENABLE = 0x100,
        SYNCMGR_HPM_DISABLE_DISABLE = 0x200,
        SYNCMGR_HPM_DISABLE_START_SYNC = 0x400,
        SYNCMGR_HPM_DISABLE_STOP_SYNC = 0x800,
        SYNCMGR_HPM_DISABLE_BROWSE = 0x1000,
        SYNCMGR_HPM_DISABLE_SCHEDULE = 0x2000,
        SYNCMGR_HPM_HIDDEN_BY_DEFAULT = 0x10000,
        SYNCMGR_HPM_BACKGROUND_SYNC_ONLY = ( SYNCMGR_HPM_PREVENT_START_SYNC | SYNCMGR_HPM_PREVENT_STOP_SYNC ) ,
        SYNCMGR_HPM_VALID_MASK = 0x12f3f
    } SYNCMGR_HANDLER_POLICIES;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrHandler;
    typedef struct ISyncMgrHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ISyncMgrHandler * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetHandlerInfo )(
            __RPC__in ISyncMgrHandler * This,
                        __RPC__deref_out_opt ISyncMgrHandlerInfo **ppHandlerInfo);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in ISyncMgrHandler * This,
                       __RPC__in REFGUID rguidObjectID,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in ISyncMgrHandler * This,
                        __RPC__out SYNCMGR_HANDLER_CAPABILITIES *pmCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetPolicies )(
            __RPC__in ISyncMgrHandler * This,
                        __RPC__out SYNCMGR_HANDLER_POLICIES *pmPolicies);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in ISyncMgrHandler * This,
                       BOOL fActivate);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in ISyncMgrHandler * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in ISyncMgrHandler * This,
                                             __RPC__in_ecount_full(cItems) LPCWSTR *ppszItemIDs,
                       ULONG cItems,
                               __RPC__in_opt HWND hwndOwner,
                       __RPC__in_opt ISyncMgrSessionCreator *pSessionCreator,
                               __RPC__in_opt IUnknown *punk);
        END_INTERFACE
    } ISyncMgrHandlerVtbl;
    interface ISyncMgrHandler
    {
        CONST_VTBL struct ISyncMgrHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,ppszName) )
    ( (This)->lpVtbl -> GetHandlerInfo(This,ppHandlerInfo) )
    ( (This)->lpVtbl -> GetObject(This,rguidObjectID,riid,ppv) )
    ( (This)->lpVtbl -> GetCapabilities(This,pmCapabilities) )
    ( (This)->lpVtbl -> GetPolicies(This,pmPolicies) )
    ( (This)->lpVtbl -> Activate(This,fActivate) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
    ( (This)->lpVtbl -> Synchronize(This,ppszItemIDs,cItems,hwndOwner,pSessionCreator,punk) )
typedef
enum SYNCMGR_HANDLER_TYPE
    {
        SYNCMGR_HT_UNSPECIFIED = 0,
        SYNCMGR_HT_APPLICATION = 1,
        SYNCMGR_HT_DEVICE = 2,
        SYNCMGR_HT_FOLDER = 3,
        SYNCMGR_HT_SERVICE = 4,
        SYNCMGR_HT_COMPUTER = 5,
        SYNCMGR_HT_MIN = 0,
        SYNCMGR_HT_MAX = SYNCMGR_HT_COMPUTER
    } SYNCMGR_HANDLER_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrHandlerInfo;
    typedef struct ISyncMgrHandlerInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrHandlerInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrHandlerInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrHandlerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ISyncMgrHandlerInfo * This,
                        __RPC__out SYNCMGR_HANDLER_TYPE *pnType);
        HRESULT ( STDMETHODCALLTYPE *GetTypeLabel )(
            __RPC__in ISyncMgrHandlerInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszTypeLabel);
        HRESULT ( STDMETHODCALLTYPE *GetComment )(
            __RPC__in ISyncMgrHandlerInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszComment);
        HRESULT ( STDMETHODCALLTYPE *GetLastSyncTime )(
            __RPC__in ISyncMgrHandlerInfo * This,
                        __RPC__out FILETIME *pftLastSync);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            __RPC__in ISyncMgrHandlerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            __RPC__in ISyncMgrHandlerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            __RPC__in ISyncMgrHandlerInfo * This);
        END_INTERFACE
    } ISyncMgrHandlerInfoVtbl;
    interface ISyncMgrHandlerInfo
    {
        CONST_VTBL struct ISyncMgrHandlerInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pnType) )
    ( (This)->lpVtbl -> GetTypeLabel(This,ppszTypeLabel) )
    ( (This)->lpVtbl -> GetComment(This,ppszComment) )
    ( (This)->lpVtbl -> GetLastSyncTime(This,pftLastSync) )
    ( (This)->lpVtbl -> IsActive(This) )
    ( (This)->lpVtbl -> IsEnabled(This) )
    ( (This)->lpVtbl -> IsConnected(This) )
EXTERN_C const IID IID_ISyncMgrSyncItemContainer;
    typedef struct ISyncMgrSyncItemContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSyncItemContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSyncItemContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSyncItemContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetSyncItem )(
            __RPC__in ISyncMgrSyncItemContainer * This,
                                    __RPC__in_string LPCWSTR pszItemID,
                        __RPC__deref_out_opt ISyncMgrSyncItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *GetSyncItemEnumerator )(
            __RPC__in ISyncMgrSyncItemContainer * This,
                        __RPC__deref_out_opt IEnumSyncMgrSyncItems **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetSyncItemCount )(
            __RPC__in ISyncMgrSyncItemContainer * This,
                        __RPC__out ULONG *pcItems);
        END_INTERFACE
    } ISyncMgrSyncItemContainerVtbl;
    interface ISyncMgrSyncItemContainer
    {
        CONST_VTBL struct ISyncMgrSyncItemContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSyncItem(This,pszItemID,ppItem) )
    ( (This)->lpVtbl -> GetSyncItemEnumerator(This,ppenum) )
    ( (This)->lpVtbl -> GetSyncItemCount(This,pcItems) )
typedef
enum SYNCMGR_ITEM_CAPABILITIES
    {
        SYNCMGR_ICM_NONE = 0,
        SYNCMGR_ICM_PROVIDES_ICON = 0x1,
        SYNCMGR_ICM_EVENT_STORE = 0x2,
        SYNCMGR_ICM_CONFLICT_STORE = 0x4,
        SYNCMGR_ICM_CAN_DELETE = 0x10,
        SYNCMGR_ICM_CAN_BROWSE_CONTENT = 0x10000,
        SYNCMGR_ICM_QUERY_BEFORE_ENABLE = 0x100000,
        SYNCMGR_ICM_QUERY_BEFORE_DISABLE = 0x200000,
        SYNCMGR_ICM_QUERY_BEFORE_DELETE = 0x400000,
        SYNCMGR_ICM_VALID_MASK = 0x710017
    } SYNCMGR_ITEM_CAPABILITIES;
typedef
enum SYNCMGR_ITEM_POLICIES
    {
        SYNCMGR_IPM_NONE = 0,
        SYNCMGR_IPM_PREVENT_ENABLE = 0x1,
        SYNCMGR_IPM_PREVENT_DISABLE = 0x2,
        SYNCMGR_IPM_PREVENT_START_SYNC = 0x4,
        SYNCMGR_IPM_PREVENT_STOP_SYNC = 0x8,
        SYNCMGR_IPM_DISABLE_ENABLE = 0x10,
        SYNCMGR_IPM_DISABLE_DISABLE = 0x20,
        SYNCMGR_IPM_DISABLE_START_SYNC = 0x40,
        SYNCMGR_IPM_DISABLE_STOP_SYNC = 0x80,
        SYNCMGR_IPM_DISABLE_BROWSE = 0x100,
        SYNCMGR_IPM_DISABLE_DELETE = 0x200,
        SYNCMGR_IPM_HIDDEN_BY_DEFAULT = 0x10000,
        SYNCMGR_IPM_VALID_MASK = 0x102ff
    } SYNCMGR_ITEM_POLICIES;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrSyncItem;
    typedef struct ISyncMgrSyncItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSyncItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSyncItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSyncItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemID )(
            __RPC__in ISyncMgrSyncItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszItemID);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ISyncMgrSyncItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetItemInfo )(
            __RPC__in ISyncMgrSyncItem * This,
                        __RPC__deref_out_opt ISyncMgrSyncItemInfo **ppItemInfo);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in ISyncMgrSyncItem * This,
                       __RPC__in REFGUID rguidObjectID,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in ISyncMgrSyncItem * This,
                        __RPC__out SYNCMGR_ITEM_CAPABILITIES *pmCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetPolicies )(
            __RPC__in ISyncMgrSyncItem * This,
                        __RPC__out SYNCMGR_ITEM_POLICIES *pmPolicies);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in ISyncMgrSyncItem * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ISyncMgrSyncItem * This);
        END_INTERFACE
    } ISyncMgrSyncItemVtbl;
    interface ISyncMgrSyncItem
    {
        CONST_VTBL struct ISyncMgrSyncItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemID(This,ppszItemID) )
    ( (This)->lpVtbl -> GetName(This,ppszName) )
    ( (This)->lpVtbl -> GetItemInfo(This,ppItemInfo) )
    ( (This)->lpVtbl -> GetObject(This,rguidObjectID,riid,ppv) )
    ( (This)->lpVtbl -> GetCapabilities(This,pmCapabilities) )
    ( (This)->lpVtbl -> GetPolicies(This,pmPolicies) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_ISyncMgrSyncItemInfo;
    typedef struct ISyncMgrSyncItemInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSyncItemInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSyncItemInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSyncItemInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeLabel )(
            __RPC__in ISyncMgrSyncItemInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszTypeLabel);
        HRESULT ( STDMETHODCALLTYPE *GetComment )(
            __RPC__in ISyncMgrSyncItemInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszComment);
        HRESULT ( STDMETHODCALLTYPE *GetLastSyncTime )(
            __RPC__in ISyncMgrSyncItemInfo * This,
                        __RPC__out FILETIME *pftLastSync);
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            __RPC__in ISyncMgrSyncItemInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            __RPC__in ISyncMgrSyncItemInfo * This);
        END_INTERFACE
    } ISyncMgrSyncItemInfoVtbl;
    interface ISyncMgrSyncItemInfo
    {
        CONST_VTBL struct ISyncMgrSyncItemInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeLabel(This,ppszTypeLabel) )
    ( (This)->lpVtbl -> GetComment(This,ppszComment) )
    ( (This)->lpVtbl -> GetLastSyncTime(This,pftLastSync) )
    ( (This)->lpVtbl -> IsEnabled(This) )
    ( (This)->lpVtbl -> IsConnected(This) )
EXTERN_C const IID IID_IEnumSyncMgrSyncItems;
    typedef struct IEnumSyncMgrSyncItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSyncMgrSyncItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSyncMgrSyncItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSyncMgrSyncItems * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSyncMgrSyncItems * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) ISyncMgrSyncItem **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSyncMgrSyncItems * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSyncMgrSyncItems * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSyncMgrSyncItems * This,
                        __RPC__deref_out_opt IEnumSyncMgrSyncItems **ppenum);
        END_INTERFACE
    } IEnumSyncMgrSyncItemsVtbl;
    interface IEnumSyncMgrSyncItems
    {
        CONST_VTBL struct IEnumSyncMgrSyncItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef
enum SYNCMGR_PROGRESS_STATUS
    {
        SYNCMGR_PS_UPDATING = 1,
        SYNCMGR_PS_UPDATING_INDETERMINATE = 2,
        SYNCMGR_PS_SUCCEEDED = 3,
        SYNCMGR_PS_FAILED = 4,
        SYNCMGR_PS_CANCELED = 5,
        SYNCMGR_PS_DISCONNECTED = 6,
        SYNCMGR_PS_MAX = SYNCMGR_PS_DISCONNECTED
    } SYNCMGR_PROGRESS_STATUS;
typedef
enum SYNCMGR_CANCEL_REQUEST
    {
        SYNCMGR_CR_NONE = 0,
        SYNCMGR_CR_CANCEL_ITEM = 1,
        SYNCMGR_CR_CANCEL_ALL = 2,
        SYNCMGR_CR_MAX = SYNCMGR_CR_CANCEL_ALL
    } SYNCMGR_CANCEL_REQUEST;
typedef
enum SYNCMGR_EVENT_LEVEL
    {
        SYNCMGR_EL_INFORMATION = 1,
        SYNCMGR_EL_WARNING = 2,
        SYNCMGR_EL_ERROR = 3,
        SYNCMGR_EL_MAX = SYNCMGR_EL_ERROR
    } SYNCMGR_EVENT_LEVEL;
typedef
enum SYNCMGR_EVENT_FLAGS
    {
        SYNCMGR_EF_NONE = 0,
        SYNCMGR_EF_VALID = 0
    } SYNCMGR_EVENT_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrSessionCreator;
    typedef struct ISyncMgrSessionCreatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSessionCreator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSessionCreator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSessionCreator * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            __RPC__in ISyncMgrSessionCreator * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                                __RPC__in_ecount_full_opt(cItems) LPCWSTR *ppszItemIDs,
                       ULONG cItems,
                        __RPC__deref_out_opt ISyncMgrSyncCallback **ppCallback);
        END_INTERFACE
    } ISyncMgrSessionCreatorVtbl;
    interface ISyncMgrSessionCreator
    {
        CONST_VTBL struct ISyncMgrSessionCreatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSession(This,pszHandlerID,ppszItemIDs,cItems,ppCallback) )
EXTERN_C const IID IID_ISyncMgrSyncCallback;
    typedef struct ISyncMgrSyncCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSyncCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSyncCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSyncCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ReportProgress )(
            __RPC__in ISyncMgrSyncCallback * This,
                                    __RPC__in_string LPCWSTR pszItemID,
                                       __RPC__in_opt_string LPCWSTR pszProgressText,
                       SYNCMGR_PROGRESS_STATUS nStatus,
                       ULONG uCurrentStep,
                       ULONG uMaxStep,
                                    __RPC__inout_opt SYNCMGR_CANCEL_REQUEST *pnCancelRequest);
        HRESULT ( STDMETHODCALLTYPE *SetHandlerProgressText )(
            __RPC__in ISyncMgrSyncCallback * This,
                                    __RPC__in_string LPCWSTR pszProgressText,
                                    __RPC__inout_opt SYNCMGR_CANCEL_REQUEST *pnCancelRequest);
        HRESULT ( STDMETHODCALLTYPE *ReportEvent )(
            __RPC__in ISyncMgrSyncCallback * This,
                                       __RPC__in_opt_string LPCWSTR pszItemID,
                       SYNCMGR_EVENT_LEVEL nLevel,
                       SYNCMGR_EVENT_FLAGS nFlags,
                                    __RPC__in_string LPCWSTR pszName,
                                    __RPC__in_string LPCWSTR pszDescription,
                                       __RPC__in_opt_string LPCWSTR pszLinkText,
                                       __RPC__in_opt_string LPCWSTR pszLinkReference,
                                       __RPC__in_opt_string LPCWSTR pszContext,
                        __RPC__out GUID *pguidEventID);
        HRESULT ( STDMETHODCALLTYPE *CanContinue )(
            __RPC__in ISyncMgrSyncCallback * This,
                                    __RPC__in_string LPCWSTR pszItemID);
        HRESULT ( STDMETHODCALLTYPE *QueryForAdditionalItems )(
            __RPC__in ISyncMgrSyncCallback * This,
                        __RPC__deref_out_opt IEnumString **ppenumItemIDs,
                        __RPC__deref_out_opt IEnumUnknown **ppenumPunks);
        HRESULT ( STDMETHODCALLTYPE *AddItemToSession )(
            __RPC__in ISyncMgrSyncCallback * This,
                                    __RPC__in_string LPCWSTR pszItemID);
        HRESULT ( STDMETHODCALLTYPE *AddIUnknownToSession )(
            __RPC__in ISyncMgrSyncCallback * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *ProposeItem )(
            __RPC__in ISyncMgrSyncCallback * This,
                       __RPC__in_opt ISyncMgrSyncItem *pNewItem);
        HRESULT ( STDMETHODCALLTYPE *CommitItem )(
            __RPC__in ISyncMgrSyncCallback * This,
                                    __RPC__in_string LPCWSTR pszItemID);
        HRESULT ( STDMETHODCALLTYPE *ReportManualSync )(
            __RPC__in ISyncMgrSyncCallback * This);
        END_INTERFACE
    } ISyncMgrSyncCallbackVtbl;
    interface ISyncMgrSyncCallback
    {
        CONST_VTBL struct ISyncMgrSyncCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportProgress(This,pszItemID,pszProgressText,nStatus,uCurrentStep,uMaxStep,pnCancelRequest) )
    ( (This)->lpVtbl -> SetHandlerProgressText(This,pszProgressText,pnCancelRequest) )
    ( (This)->lpVtbl -> ReportEvent(This,pszItemID,nLevel,nFlags,pszName,pszDescription,pszLinkText,pszLinkReference,pszContext,pguidEventID) )
    ( (This)->lpVtbl -> CanContinue(This,pszItemID) )
    ( (This)->lpVtbl -> QueryForAdditionalItems(This,ppenumItemIDs,ppenumPunks) )
    ( (This)->lpVtbl -> AddItemToSession(This,pszItemID) )
    ( (This)->lpVtbl -> AddIUnknownToSession(This,punk) )
    ( (This)->lpVtbl -> ProposeItem(This,pNewItem) )
    ( (This)->lpVtbl -> CommitItem(This,pszItemID) )
    ( (This)->lpVtbl -> ReportManualSync(This) )
EXTERN_C const IID IID_ISyncMgrUIOperation;
    typedef struct ISyncMgrUIOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrUIOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrUIOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrUIOperation * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in ISyncMgrUIOperation * This,
                               __RPC__in_opt HWND hwndOwner);
        END_INTERFACE
    } ISyncMgrUIOperationVtbl;
    interface ISyncMgrUIOperation
    {
        CONST_VTBL struct ISyncMgrUIOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Run(This,hwndOwner) )
EXTERN_C const IID IID_ISyncMgrEventLinkUIOperation;
    typedef struct ISyncMgrEventLinkUIOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrEventLinkUIOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrEventLinkUIOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrEventLinkUIOperation * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in ISyncMgrEventLinkUIOperation * This,
                               __RPC__in_opt HWND hwndOwner);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in ISyncMgrEventLinkUIOperation * This,
                       __RPC__in REFGUID rguidEventID,
                       __RPC__in_opt ISyncMgrEvent *pEvent);
        END_INTERFACE
    } ISyncMgrEventLinkUIOperationVtbl;
    interface ISyncMgrEventLinkUIOperation
    {
        CONST_VTBL struct ISyncMgrEventLinkUIOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Run(This,hwndOwner) )
    ( (This)->lpVtbl -> Init(This,rguidEventID,pEvent) )
EXTERN_C const IID IID_ISyncMgrScheduleWizardUIOperation;
    typedef struct ISyncMgrScheduleWizardUIOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrScheduleWizardUIOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrScheduleWizardUIOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrScheduleWizardUIOperation * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in ISyncMgrScheduleWizardUIOperation * This,
                               __RPC__in_opt HWND hwndOwner);
        HRESULT ( STDMETHODCALLTYPE *InitWizard )(
            __RPC__in ISyncMgrScheduleWizardUIOperation * This,
                                    __RPC__in_string LPCWSTR pszHandlerID);
        END_INTERFACE
    } ISyncMgrScheduleWizardUIOperationVtbl;
    interface ISyncMgrScheduleWizardUIOperation
    {
        CONST_VTBL struct ISyncMgrScheduleWizardUIOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Run(This,hwndOwner) )
    ( (This)->lpVtbl -> InitWizard(This,pszHandlerID) )
EXTERN_C const IID IID_ISyncMgrSyncResult;
    typedef struct ISyncMgrSyncResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrSyncResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrSyncResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrSyncResult * This);
        HRESULT ( STDMETHODCALLTYPE *Result )(
            __RPC__in ISyncMgrSyncResult * This,
                       SYNCMGR_PROGRESS_STATUS nStatus,
                       UINT cError,
                       UINT cConflicts);
        END_INTERFACE
    } ISyncMgrSyncResultVtbl;
    interface ISyncMgrSyncResult
    {
        CONST_VTBL struct ISyncMgrSyncResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Result(This,nStatus,cError,cConflicts) )
typedef
enum SYNCMGR_CONTROL_FLAGS
    {
        SYNCMGR_CF_NONE = 0,
        SYNCMGR_CF_NOWAIT = 0,
        SYNCMGR_CF_WAIT = 0x1,
        SYNCMGR_CF_NOUI = 0x2,
        SYNCMGR_CF_VALID = 0x3
    } SYNCMGR_CONTROL_FLAGS;
typedef
enum SYNCMGR_SYNC_CONTROL_FLAGS
    {
        SYNCMGR_SCF_NONE = 0,
        SYNCMGR_SCF_IGNORE_IF_ALREADY_SYNCING = 0x1,
        SYNCMGR_SCF_VALID = 0x1
    } SYNCMGR_SYNC_CONTROL_FLAGS;
typedef
enum SYNCMGR_UPDATE_REASON
    {
        SYNCMGR_UR_ADDED = 0,
        SYNCMGR_UR_CHANGED = 1,
        SYNCMGR_UR_REMOVED = 2,
        SYNCMGR_UR_MAX = SYNCMGR_UR_REMOVED
    } SYNCMGR_UPDATE_REASON;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrControl;
    typedef struct ISyncMgrControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrControl * This);
        HRESULT ( STDMETHODCALLTYPE *StartHandlerSync )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                               __RPC__in_opt HWND hwndOwner,
                               __RPC__in_opt IUnknown *punk,
                       SYNCMGR_SYNC_CONTROL_FLAGS nSyncControlFlags,
                               __RPC__in_opt ISyncMgrSyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *StartItemSync )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                             __RPC__in_ecount_full(cItems) LPCWSTR *ppszItemIDs,
                       ULONG cItems,
                               __RPC__in_opt HWND hwndOwner,
                               __RPC__in_opt IUnknown *punk,
                       SYNCMGR_SYNC_CONTROL_FLAGS nSyncControlFlags,
                               __RPC__in_opt ISyncMgrSyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *StartSyncAll )(
            __RPC__in ISyncMgrControl * This,
                               __RPC__in_opt HWND hwndOwner);
        HRESULT ( STDMETHODCALLTYPE *StopHandlerSync )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID);
        HRESULT ( STDMETHODCALLTYPE *StopItemSync )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                             __RPC__in_ecount_full(cItems) LPCWSTR *ppszItemIDs,
                       ULONG cItems);
        HRESULT ( STDMETHODCALLTYPE *StopSyncAll )(
            __RPC__in ISyncMgrControl * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateHandlerCollection )(
            __RPC__in ISyncMgrControl * This,
                       __RPC__in REFCLSID rclsidCollectionID,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *UpdateHandler )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *UpdateItem )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                    __RPC__in_string LPCWSTR pszItemID,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *UpdateEvents )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                       __RPC__in_opt_string LPCWSTR pszItemID,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *UpdateConflict )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                       __RPC__in_opt_string LPCWSTR pszItemID,
                       __RPC__in_opt ISyncMgrConflict *pConflict,
                       SYNCMGR_UPDATE_REASON nReason);
        HRESULT ( STDMETHODCALLTYPE *UpdateConflicts )(
            __RPC__in ISyncMgrControl * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                       __RPC__in_opt_string LPCWSTR pszItemID,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *ActivateHandler )(
            __RPC__in ISyncMgrControl * This,
                       BOOL fActivate,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                               __RPC__in_opt HWND hwndOwner,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *EnableHandler )(
            __RPC__in ISyncMgrControl * This,
                       BOOL fEnable,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                               __RPC__in_opt HWND hwndOwner,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        HRESULT ( STDMETHODCALLTYPE *EnableItem )(
            __RPC__in ISyncMgrControl * This,
                       BOOL fEnable,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                    __RPC__in_string LPCWSTR pszItemID,
                               __RPC__in_opt HWND hwndOwner,
                       SYNCMGR_CONTROL_FLAGS nControlFlags);
        END_INTERFACE
    } ISyncMgrControlVtbl;
    interface ISyncMgrControl
    {
        CONST_VTBL struct ISyncMgrControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartHandlerSync(This,pszHandlerID,hwndOwner,punk,nSyncControlFlags,pResult) )
    ( (This)->lpVtbl -> StartItemSync(This,pszHandlerID,ppszItemIDs,cItems,hwndOwner,punk,nSyncControlFlags,pResult) )
    ( (This)->lpVtbl -> StartSyncAll(This,hwndOwner) )
    ( (This)->lpVtbl -> StopHandlerSync(This,pszHandlerID) )
    ( (This)->lpVtbl -> StopItemSync(This,pszHandlerID,ppszItemIDs,cItems) )
    ( (This)->lpVtbl -> StopSyncAll(This) )
    ( (This)->lpVtbl -> UpdateHandlerCollection(This,rclsidCollectionID,nControlFlags) )
    ( (This)->lpVtbl -> UpdateHandler(This,pszHandlerID,nControlFlags) )
    ( (This)->lpVtbl -> UpdateItem(This,pszHandlerID,pszItemID,nControlFlags) )
    ( (This)->lpVtbl -> UpdateEvents(This,pszHandlerID,pszItemID,nControlFlags) )
    ( (This)->lpVtbl -> UpdateConflict(This,pszHandlerID,pszItemID,pConflict,nReason) )
    ( (This)->lpVtbl -> UpdateConflicts(This,pszHandlerID,pszItemID,nControlFlags) )
    ( (This)->lpVtbl -> ActivateHandler(This,fActivate,pszHandlerID,hwndOwner,nControlFlags) )
    ( (This)->lpVtbl -> EnableHandler(This,fEnable,pszHandlerID,hwndOwner,nControlFlags) )
    ( (This)->lpVtbl -> EnableItem(This,fEnable,pszHandlerID,pszItemID,hwndOwner,nControlFlags) )
EXTERN_C const IID IID_ISyncMgrEventStore;
    typedef struct ISyncMgrEventStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrEventStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrEventStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrEventStore * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventEnumerator )(
            __RPC__in ISyncMgrEventStore * This,
                        __RPC__deref_out_opt IEnumSyncMgrEvents **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetEventCount )(
            __RPC__in ISyncMgrEventStore * This,
                        __RPC__out ULONG *pcEvents);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ISyncMgrEventStore * This,
                       __RPC__in REFGUID rguidEventID,
                        __RPC__deref_out_opt ISyncMgrEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *RemoveEvent )(
            __RPC__in ISyncMgrEventStore * This,
                                     __RPC__in_ecount_full(cEvents) GUID *pguidEventIDs,
                       ULONG cEvents);
        END_INTERFACE
    } ISyncMgrEventStoreVtbl;
    interface ISyncMgrEventStore
    {
        CONST_VTBL struct ISyncMgrEventStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventEnumerator(This,ppenum) )
    ( (This)->lpVtbl -> GetEventCount(This,pcEvents) )
    ( (This)->lpVtbl -> GetEvent(This,rguidEventID,ppEvent) )
    ( (This)->lpVtbl -> RemoveEvent(This,pguidEventIDs,cEvents) )
EXTERN_C const IID IID_ISyncMgrEvent;
    typedef struct ISyncMgrEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventID )(
            __RPC__in ISyncMgrEvent * This,
                             __RPC__out GUID *pguidEventID);
        HRESULT ( STDMETHODCALLTYPE *GetHandlerID )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszHandlerID);
        HRESULT ( STDMETHODCALLTYPE *GetItemID )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszItemID);
        HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            __RPC__in ISyncMgrEvent * This,
                             __RPC__out SYNCMGR_EVENT_LEVEL *pnLevel);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in ISyncMgrEvent * This,
                             __RPC__out SYNCMGR_EVENT_FLAGS *pnFlags);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            __RPC__in ISyncMgrEvent * This,
                             __RPC__out FILETIME *pfCreationTime);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetLinkText )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszLinkText);
        HRESULT ( STDMETHODCALLTYPE *GetLinkReference )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszLinkReference);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ISyncMgrEvent * This,
                                     __RPC__deref_out_opt_string LPWSTR *ppszContext);
        END_INTERFACE
    } ISyncMgrEventVtbl;
    interface ISyncMgrEvent
    {
        CONST_VTBL struct ISyncMgrEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventID(This,pguidEventID) )
    ( (This)->lpVtbl -> GetHandlerID(This,ppszHandlerID) )
    ( (This)->lpVtbl -> GetItemID(This,ppszItemID) )
    ( (This)->lpVtbl -> GetLevel(This,pnLevel) )
    ( (This)->lpVtbl -> GetFlags(This,pnFlags) )
    ( (This)->lpVtbl -> GetTime(This,pfCreationTime) )
    ( (This)->lpVtbl -> GetName(This,ppszName) )
    ( (This)->lpVtbl -> GetDescription(This,ppszDescription) )
    ( (This)->lpVtbl -> GetLinkText(This,ppszLinkText) )
    ( (This)->lpVtbl -> GetLinkReference(This,ppszLinkReference) )
    ( (This)->lpVtbl -> GetContext(This,ppszContext) )
EXTERN_C const IID IID_IEnumSyncMgrEvents;
    typedef struct IEnumSyncMgrEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSyncMgrEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSyncMgrEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSyncMgrEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSyncMgrEvents * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) ISyncMgrEvent **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSyncMgrEvents * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSyncMgrEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSyncMgrEvents * This,
                        __RPC__deref_out_opt IEnumSyncMgrEvents **ppenum);
        END_INTERFACE
    } IEnumSyncMgrEventsVtbl;
    interface IEnumSyncMgrEvents
    {
        CONST_VTBL struct IEnumSyncMgrEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef struct SYNCMGR_CONFLICT_ID_INFO
    {
                   BYTE_BLOB *pblobID;
                   BYTE_BLOB *pblobExtra;
    } SYNCMGR_CONFLICT_ID_INFO;
typedef struct SYNCMGR_CONFLICT_ID_INFO *PSYNCMGR_CONFLICT_ID_INFO;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrConflictStore;
    typedef struct ISyncMgrConflictStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrConflictStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrConflictStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrConflictStore * This);
        HRESULT ( STDMETHODCALLTYPE *EnumConflicts )(
            __RPC__in ISyncMgrConflictStore * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                       __RPC__in_opt_string LPCWSTR pszItemID,
                        __RPC__deref_out_opt IEnumSyncMgrConflict **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *BindToConflict )(
            __RPC__in ISyncMgrConflictStore * This,
                       __RPC__in const SYNCMGR_CONFLICT_ID_INFO *pConflictIdInfo,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *RemoveConflicts )(
            __RPC__in ISyncMgrConflictStore * This,
                                __RPC__in_ecount_full(cConflicts) const SYNCMGR_CONFLICT_ID_INFO *rgConflictIdInfo,
                       DWORD cConflicts);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISyncMgrConflictStore * This,
                                    __RPC__in_string LPCWSTR pszHandlerID,
                                       __RPC__in_opt_string LPCWSTR pszItemID,
                        __RPC__out DWORD *pnConflicts);
        END_INTERFACE
    } ISyncMgrConflictStoreVtbl;
    interface ISyncMgrConflictStore
    {
        CONST_VTBL struct ISyncMgrConflictStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumConflicts(This,pszHandlerID,pszItemID,ppEnum) )
    ( (This)->lpVtbl -> BindToConflict(This,pConflictIdInfo,riid,ppv) )
    ( (This)->lpVtbl -> RemoveConflicts(This,rgConflictIdInfo,cConflicts) )
    ( (This)->lpVtbl -> GetCount(This,pszHandlerID,pszItemID,pnConflicts) )
EXTERN_C const IID IID_IEnumSyncMgrConflict;
    typedef struct IEnumSyncMgrConflictVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSyncMgrConflict * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSyncMgrConflict * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSyncMgrConflict * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSyncMgrConflict * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) ISyncMgrConflict **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSyncMgrConflict * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSyncMgrConflict * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSyncMgrConflict * This,
                        __RPC__deref_out_opt IEnumSyncMgrConflict **ppenum);
        END_INTERFACE
    } IEnumSyncMgrConflictVtbl;
    interface IEnumSyncMgrConflict
    {
        CONST_VTBL struct IEnumSyncMgrConflictVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef
enum SYNCMGR_CONFLICT_ITEM_TYPE
    {
        SYNCMGR_CIT_UPDATED = 0x1,
        SYNCMGR_CIT_DELETED = 0x2
    } SYNCMGR_CONFLICT_ITEM_TYPE;
typedef DWORD SYNCMGR_CONFLICT_ITEM_TYPE_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrConflict;
    typedef struct ISyncMgrConflictVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrConflict * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrConflict * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrConflict * This);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ISyncMgrConflict * This,
                       __RPC__in REFPROPERTYKEY propkey,
                        __RPC__out PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *GetConflictIdInfo )(
            __RPC__in ISyncMgrConflict * This,
                        __RPC__out SYNCMGR_CONFLICT_ID_INFO *pConflictIdInfo);
        HRESULT ( STDMETHODCALLTYPE *GetItemsArray )(
            __RPC__in ISyncMgrConflict * This,
                        __RPC__deref_out_opt ISyncMgrConflictItems **ppArray);
        HRESULT ( STDMETHODCALLTYPE *Resolve )(
            __RPC__in ISyncMgrConflict * This,
                       __RPC__in_opt ISyncMgrConflictResolveInfo *pResolveInfo);
        HRESULT ( STDMETHODCALLTYPE *GetResolutionHandler )(
            __RPC__in ISyncMgrConflict * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvResolutionHandler);
        END_INTERFACE
    } ISyncMgrConflictVtbl;
    interface ISyncMgrConflict
    {
        CONST_VTBL struct ISyncMgrConflictVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperty(This,propkey,ppropvar) )
    ( (This)->lpVtbl -> GetConflictIdInfo(This,pConflictIdInfo) )
    ( (This)->lpVtbl -> GetItemsArray(This,ppArray) )
    ( (This)->lpVtbl -> Resolve(This,pResolveInfo) )
    ( (This)->lpVtbl -> GetResolutionHandler(This,riid,ppvResolutionHandler) )
typedef
enum SYNCMGR_RESOLUTION_ABILITIES
    {
        SYNCMGR_RA_KEEPOTHER = 0x1,
        SYNCMGR_RA_KEEPRECENT = 0x2,
        SYNCMGR_RA_REMOVEFROMSYNCSET = 0x4,
        SYNCMGR_RA_KEEP_SINGLE = 0x8,
        SYNCMGR_RA_KEEP_MULTIPLE = 0x10,
        SYNCMGR_RA_VALID = 0x1f
    } SYNCMGR_RESOLUTION_ABILITIES;
typedef DWORD SYNCMGR_RESOLUTION_ABILITIES_FLAGS;
typedef
enum SYNCMGR_RESOLUTION_FEEDBACK
    {
        SYNCMGR_RF_CONTINUE = 0,
        SYNCMGR_RF_REFRESH = ( SYNCMGR_RF_CONTINUE + 1 ) ,
        SYNCMGR_RF_CANCEL = ( SYNCMGR_RF_REFRESH + 1 )
    } SYNCMGR_RESOLUTION_FEEDBACK;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrResolutionHandler;
    typedef struct ISyncMgrResolutionHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrResolutionHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrResolutionHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrResolutionHandler * This);
        HRESULT ( STDMETHODCALLTYPE *QueryAbilities )(
            __RPC__in ISyncMgrResolutionHandler * This,
                        __RPC__out SYNCMGR_RESOLUTION_ABILITIES_FLAGS *pdwAbilities);
        HRESULT ( STDMETHODCALLTYPE *KeepOther )(
            __RPC__in ISyncMgrResolutionHandler * This,
                       __RPC__in_opt IShellItem *psiOther,
                        __RPC__out SYNCMGR_RESOLUTION_FEEDBACK *pFeedback);
        HRESULT ( STDMETHODCALLTYPE *KeepRecent )(
            __RPC__in ISyncMgrResolutionHandler * This,
                        __RPC__out SYNCMGR_RESOLUTION_FEEDBACK *pFeedback);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSyncSet )(
            __RPC__in ISyncMgrResolutionHandler * This,
                        __RPC__out SYNCMGR_RESOLUTION_FEEDBACK *pFeedback);
        HRESULT ( STDMETHODCALLTYPE *KeepItems )(
            __RPC__in ISyncMgrResolutionHandler * This,
                       __RPC__in_opt ISyncMgrConflictResolutionItems *pArray,
                        __RPC__out SYNCMGR_RESOLUTION_FEEDBACK *pFeedback);
        END_INTERFACE
    } ISyncMgrResolutionHandlerVtbl;
    interface ISyncMgrResolutionHandler
    {
        CONST_VTBL struct ISyncMgrResolutionHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryAbilities(This,pdwAbilities) )
    ( (This)->lpVtbl -> KeepOther(This,psiOther,pFeedback) )
    ( (This)->lpVtbl -> KeepRecent(This,pFeedback) )
    ( (This)->lpVtbl -> RemoveFromSyncSet(This,pFeedback) )
    ( (This)->lpVtbl -> KeepItems(This,pArray,pFeedback) )
EXTERN_C const IID IID_ISyncMgrConflictPresenter;
    typedef struct ISyncMgrConflictPresenterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrConflictPresenter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrConflictPresenter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrConflictPresenter * This);
        HRESULT ( STDMETHODCALLTYPE *PresentConflict )(
            __RPC__in ISyncMgrConflictPresenter * This,
                       __RPC__in_opt ISyncMgrConflict *pConflict,
                       __RPC__in_opt ISyncMgrConflictResolveInfo *pResolveInfo);
        END_INTERFACE
    } ISyncMgrConflictPresenterVtbl;
    interface ISyncMgrConflictPresenter
    {
        CONST_VTBL struct ISyncMgrConflictPresenterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PresentConflict(This,pConflict,pResolveInfo) )
typedef
enum SYNCMGR_PRESENTER_NEXT_STEP
    {
        SYNCMGR_PNS_CONTINUE = 0,
        SYNCMGR_PNS_DEFAULT = ( SYNCMGR_PNS_CONTINUE + 1 ) ,
        SYNCMGR_PNS_CANCEL = ( SYNCMGR_PNS_DEFAULT + 1 )
    } SYNCMGR_PRESENTER_NEXT_STEP;
typedef
enum SYNCMGR_PRESENTER_CHOICE
    {
        SYNCMGR_PC_NO_CHOICE = 0,
        SYNCMGR_PC_KEEP_ONE = ( SYNCMGR_PC_NO_CHOICE + 1 ) ,
        SYNCMGR_PC_KEEP_MULTIPLE = ( SYNCMGR_PC_KEEP_ONE + 1 ) ,
        SYNCMGR_PC_KEEP_RECENT = ( SYNCMGR_PC_KEEP_MULTIPLE + 1 ) ,
        SYNCMGR_PC_REMOVE_FROM_SYNC_SET = ( SYNCMGR_PC_KEEP_RECENT + 1 ) ,
        SYNCMGR_PC_SKIP = ( SYNCMGR_PC_REMOVE_FROM_SYNC_SET + 1 )
    } SYNCMGR_PRESENTER_CHOICE;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrConflictResolveInfo;
    typedef struct ISyncMgrConflictResolveInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncMgrConflictResolveInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncMgrConflictResolveInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncMgrConflictResolveInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetIterationInfo )(
            ISyncMgrConflictResolveInfo * This,
                        UINT *pnCurrentConflict,
                        UINT *pcConflicts,
                        UINT *pcRemainingForApplyToAll);
        HRESULT ( STDMETHODCALLTYPE *GetPresenterNextStep )(
            ISyncMgrConflictResolveInfo * This,
                        SYNCMGR_PRESENTER_NEXT_STEP *pnPresenterNextStep);
        HRESULT ( STDMETHODCALLTYPE *GetPresenterChoice )(
            ISyncMgrConflictResolveInfo * This,
                        SYNCMGR_PRESENTER_CHOICE *pnPresenterChoice,
                        BOOL *pfApplyToAll);
        HRESULT ( STDMETHODCALLTYPE *GetItemChoiceCount )(
            ISyncMgrConflictResolveInfo * This,
                        UINT *pcChoices);
        HRESULT ( STDMETHODCALLTYPE *GetItemChoice )(
            ISyncMgrConflictResolveInfo * This,
                       UINT iChoice,
                        UINT *piChoiceIndex);
        HRESULT ( STDMETHODCALLTYPE *SetPresenterNextStep )(
            ISyncMgrConflictResolveInfo * This,
                       SYNCMGR_PRESENTER_NEXT_STEP nPresenterNextStep);
        HRESULT ( STDMETHODCALLTYPE *SetPresenterChoice )(
            ISyncMgrConflictResolveInfo * This,
                       SYNCMGR_PRESENTER_CHOICE nPresenterChoice,
                       BOOL fApplyToAll);
        HRESULT ( STDMETHODCALLTYPE *SetItemChoices )(
            ISyncMgrConflictResolveInfo * This,
                                     UINT *prgiConflictItemIndexes,
                       UINT cChoices);
        END_INTERFACE
    } ISyncMgrConflictResolveInfoVtbl;
    interface ISyncMgrConflictResolveInfo
    {
        CONST_VTBL struct ISyncMgrConflictResolveInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIterationInfo(This,pnCurrentConflict,pcConflicts,pcRemainingForApplyToAll) )
    ( (This)->lpVtbl -> GetPresenterNextStep(This,pnPresenterNextStep) )
    ( (This)->lpVtbl -> GetPresenterChoice(This,pnPresenterChoice,pfApplyToAll) )
    ( (This)->lpVtbl -> GetItemChoiceCount(This,pcChoices) )
    ( (This)->lpVtbl -> GetItemChoice(This,iChoice,piChoiceIndex) )
    ( (This)->lpVtbl -> SetPresenterNextStep(This,nPresenterNextStep) )
    ( (This)->lpVtbl -> SetPresenterChoice(This,nPresenterChoice,fApplyToAll) )
    ( (This)->lpVtbl -> SetItemChoices(This,prgiConflictItemIndexes,cChoices) )
EXTERN_C const IID IID_ISyncMgrConflictFolder;
    typedef struct ISyncMgrConflictFolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncMgrConflictFolder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncMgrConflictFolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncMgrConflictFolder * This);
        HRESULT ( STDMETHODCALLTYPE *GetConflictIDList )(
            ISyncMgrConflictFolder * This,
                       ISyncMgrConflict *pConflict,
                        PIDLIST_RELATIVE *ppidlConflict);
        END_INTERFACE
    } ISyncMgrConflictFolderVtbl;
    interface ISyncMgrConflictFolder
    {
        CONST_VTBL struct ISyncMgrConflictFolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConflictIDList(This,pConflict,ppidlConflict) )
typedef struct CONFIRM_CONFLICT_ITEM
    {
    IShellItem2 *pShellItem;
    LPWSTR pszOriginalName;
    LPWSTR pszAlternateName;
    LPWSTR pszLocationShort;
    LPWSTR pszLocationFull;
    SYNCMGR_CONFLICT_ITEM_TYPE nType;
    } CONFIRM_CONFLICT_ITEM;
typedef struct CONFIRM_CONFLICT_RESULT_INFO
    {
    LPWSTR pszNewName;
    UINT iItemIndex;
    } CONFIRM_CONFLICT_RESULT_INFO;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncMgrConflictItems;
    typedef struct ISyncMgrConflictItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrConflictItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrConflictItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrConflictItems * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISyncMgrConflictItems * This,
                        __RPC__out UINT *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in ISyncMgrConflictItems * This,
                       UINT iIndex,
                        __RPC__out CONFIRM_CONFLICT_ITEM *pItemInfo);
        END_INTERFACE
    } ISyncMgrConflictItemsVtbl;
    interface ISyncMgrConflictItems
    {
        CONST_VTBL struct ISyncMgrConflictItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetItem(This,iIndex,pItemInfo) )
EXTERN_C const IID IID_ISyncMgrConflictResolutionItems;
    typedef struct ISyncMgrConflictResolutionItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncMgrConflictResolutionItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncMgrConflictResolutionItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncMgrConflictResolutionItems * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISyncMgrConflictResolutionItems * This,
                        __RPC__out UINT *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in ISyncMgrConflictResolutionItems * This,
                       UINT iIndex,
                        __RPC__out CONFIRM_CONFLICT_RESULT_INFO *pItemInfo);
        END_INTERFACE
    } ISyncMgrConflictResolutionItemsVtbl;
    interface ISyncMgrConflictResolutionItems
    {
        CONST_VTBL struct ISyncMgrConflictResolutionItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetItem(This,iIndex,pItemInfo) )
EXTERN_C const IID LIBID_SyncMgrObjects;
EXTERN_C const CLSID CLSID_SyncMgrClient;
class DECLSPEC_UUID("1202db60-1dac-42c5-aed5-1abdd432248e")
SyncMgrClient;
EXTERN_C const CLSID CLSID_SyncMgrControl;
class DECLSPEC_UUID("1a1f4206-0688-4e7f-be03-d82ec69df9a5")
SyncMgrControl;
EXTERN_C const CLSID CLSID_SyncMgrScheduleWizard;
class DECLSPEC_UUID("8d8b8e30-c451-421b-8553-d2976afa648c")
SyncMgrScheduleWizard;
EXTERN_C const CLSID CLSID_SyncMgrFolder;
class DECLSPEC_UUID("9c73f5e5-7ae7-4e32-a8e8-8d23b85255bf")
SyncMgrFolder;
EXTERN_C const CLSID CLSID_SyncSetupFolder;
class DECLSPEC_UUID("2e9e59c0-b437-4981-a647-9c34b9b90891")
SyncSetupFolder;
EXTERN_C const CLSID CLSID_ConflictFolder;
class DECLSPEC_UUID("289978ac-a101-4341-a817-21eba7fd046d")
ConflictFolder;
EXTERN_C const CLSID CLSID_SyncResultsFolder;
class DECLSPEC_UUID("71d99464-3b6b-475c-b241-e15883207529")
SyncResultsFolder;
EXTERN_C const CLSID CLSID_SimpleConflictPresenter;
class DECLSPEC_UUID("7a0f6ab7-ed84-46b6-b47e-02aa159a152b")
SimpleConflictPresenter;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0027_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
