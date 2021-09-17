#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXFeedsManager IXFeedsManager;
typedef interface IXFeedsEnum IXFeedsEnum;
typedef interface IXFeedFolder IXFeedFolder;
typedef interface IXFeedFolderEvents IXFeedFolderEvents;
typedef interface IXFeed IXFeed;
typedef interface IXFeed2 IXFeed2;
typedef interface IXFeedEvents IXFeedEvents;
typedef interface IXFeedItem IXFeedItem;
typedef interface IXFeedItem2 IXFeedItem2;
typedef interface IXFeedEnclosure IXFeedEnclosure;
typedef interface IFeedsManager IFeedsManager;
typedef interface IFeedsEnum IFeedsEnum;
typedef interface IFeedFolder IFeedFolder;
typedef interface IFeedFolderEvents IFeedFolderEvents;
typedef interface IFeed IFeed;
typedef interface IFeed2 IFeed2;
typedef interface IFeedEvents IFeedEvents;
typedef interface IFeedItem IFeedItem;
typedef interface IFeedItem2 IFeedItem2;
typedef interface IFeedEnclosure IFeedEnclosure;
typedef class FeedsManager FeedsManager;
typedef class FeedFolderWatcher FeedFolderWatcher;
typedef class FeedWatcher FeedWatcher;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CLSID_XFeedsManager, 0xfe6b11c3, 0xc72e, 0x4061, 0x86, 0xc6, 0x9d, 0x16, 0x31, 0x21, 0xf2, 0x29);
typedef
enum FEEDS_BACKGROUNDSYNC_ACTION
    {
        FBSA_DISABLE = 0,
        FBSA_ENABLE = 1,
        FBSA_RUNNOW = 2
    } FEEDS_BACKGROUNDSYNC_ACTION;
typedef
enum FEEDS_BACKGROUNDSYNC_STATUS
    {
        FBSS_DISABLED = 0,
        FBSS_ENABLED = 1
    } FEEDS_BACKGROUNDSYNC_STATUS;
typedef
enum FEEDS_EVENTS_SCOPE
    {
        FES_ALL = 0,
        FES_SELF_ONLY = 1,
        FES_SELF_AND_CHILDREN_ONLY = 2
    } FEEDS_EVENTS_SCOPE;
typedef
enum FEEDS_EVENTS_MASK
    {
        FEM_FOLDEREVENTS = 0x1,
        FEM_FEEDEVENTS = 0x2
    } FEEDS_EVENTS_MASK;
typedef
enum FEEDS_XML_SORT_PROPERTY
    {
        FXSP_NONE = 0,
        FXSP_PUBDATE = 1,
        FXSP_DOWNLOADTIME = 2
    } FEEDS_XML_SORT_PROPERTY;
typedef
enum FEEDS_XML_SORT_ORDER
    {
        FXSO_NONE = 0,
        FXSO_ASCENDING = 1,
        FXSO_DESCENDING = 2
    } FEEDS_XML_SORT_ORDER;
typedef
enum FEEDS_XML_FILTER_FLAGS
    {
        FXFF_ALL = 0,
        FXFF_UNREAD = 0x1,
        FXFF_READ = 0x2
    } FEEDS_XML_FILTER_FLAGS;
typedef
enum FEEDS_XML_INCLUDE_FLAGS
    {
        FXIF_NONE = 0,
        FXIF_CF_EXTENSIONS = 0x1
    } FEEDS_XML_INCLUDE_FLAGS;
typedef
enum FEEDS_DOWNLOAD_STATUS
    {
        FDS_NONE = 0,
        FDS_PENDING = 1,
        FDS_DOWNLOADING = 2,
        FDS_DOWNLOADED = 3,
        FDS_DOWNLOAD_FAILED = 4
    } FEEDS_DOWNLOAD_STATUS;
typedef
enum FEEDS_SYNC_SETTING
    {
        FSS_DEFAULT = 0,
        FSS_INTERVAL = 1,
        FSS_MANUAL = 2,
        FSS_SUGGESTED = 3
    } FEEDS_SYNC_SETTING;
typedef
enum FEEDS_DOWNLOAD_ERROR
    {
        FDE_NONE = 0,
        FDE_DOWNLOAD_FAILED = 1,
        FDE_INVALID_FEED_FORMAT = 2,
        FDE_NORMALIZATION_FAILED = 3,
        FDE_PERSISTENCE_FAILED = 4,
        FDE_DOWNLOAD_BLOCKED = 5,
        FDE_CANCELED = 6,
        FDE_UNSUPPORTED_AUTH = 7,
        FDE_BACKGROUND_DOWNLOAD_DISABLED = 8,
        FDE_NOT_EXIST = 9,
        FDE_UNSUPPORTED_MSXML = 10,
        FDE_UNSUPPORTED_DTD = 11,
        FDE_DOWNLOAD_SIZE_LIMIT_EXCEEDED = 12,
        FDE_ACCESS_DENIED = 13,
        FDE_AUTH_FAILED = 14,
        FDE_INVALID_AUTH = 15
    } FEEDS_DOWNLOAD_ERROR;
typedef
enum FEEDS_EVENTS_ITEM_COUNT_FLAGS
    {
        FEICF_READ_ITEM_COUNT_CHANGED = 0x1,
        FEICF_UNREAD_ITEM_COUNT_CHANGED = 0x2
    } FEEDS_EVENTS_ITEM_COUNT_FLAGS;
typedef int FEICF;
typedef
enum FEEDS_ERROR_CODE
    {
        FEC_E_ERRORBASE = 0xc0040200L,
        FEC_E_INVALIDMSXMLPROPERTY = FEC_E_ERRORBASE,
        FEC_E_DOWNLOADSIZELIMITEXCEEDED = ( FEC_E_INVALIDMSXMLPROPERTY + 1 )
    } FEEDS_ERROR_CODE;
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXFeedsManager;
    typedef struct IXFeedsManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedsManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedsManager * This);
        HRESULT ( STDMETHODCALLTYPE *RootFolder )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszUrl,
                        __RPC__out BOOL *pbSubscribed);
        HRESULT ( STDMETHODCALLTYPE *ExistsFeed )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszPath,
                        __RPC__out BOOL *pbFeedExists);
        HRESULT ( STDMETHODCALLTYPE *GetFeed )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetFeedByUrl )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszUrl,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ExistsFolder )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszPath,
                        __RPC__out BOOL *pbFolderExists);
        HRESULT ( STDMETHODCALLTYPE *GetFolder )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *DeleteFeed )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteFolder )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSync )(
            __RPC__in IXFeedsManager * This,
                       FEEDS_BACKGROUNDSYNC_ACTION fbsa);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncStatus )(
            __RPC__in IXFeedsManager * This,
                        __RPC__out FEEDS_BACKGROUNDSYNC_STATUS *pfbss);
        HRESULT ( STDMETHODCALLTYPE *DefaultInterval )(
            __RPC__in IXFeedsManager * This,
                        __RPC__out UINT *puiInterval);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultInterval )(
            __RPC__in IXFeedsManager * This,
                       UINT uiInterval);
        HRESULT ( STDMETHODCALLTYPE *AsyncSyncAll )(
            __RPC__in IXFeedsManager * This);
        HRESULT ( STDMETHODCALLTYPE *Normalize )(
            __RPC__in IXFeedsManager * This,
                       __RPC__in_opt IStream *pStreamIn,
                        __RPC__deref_out_opt IStream **ppStreamOut);
        HRESULT ( STDMETHODCALLTYPE *ItemCountLimit )(
            __RPC__in IXFeedsManager * This,
                        __RPC__out UINT *puiItemCountLimit);
        END_INTERFACE
    } IXFeedsManagerVtbl;
    interface IXFeedsManager
    {
        CONST_VTBL struct IXFeedsManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RootFolder(This,riid,ppv) )
    ( (This)->lpVtbl -> IsSubscribed(This,pszUrl,pbSubscribed) )
    ( (This)->lpVtbl -> ExistsFeed(This,pszPath,pbFeedExists) )
    ( (This)->lpVtbl -> GetFeed(This,pszPath,riid,ppv) )
    ( (This)->lpVtbl -> GetFeedByUrl(This,pszUrl,riid,ppv) )
    ( (This)->lpVtbl -> ExistsFolder(This,pszPath,pbFolderExists) )
    ( (This)->lpVtbl -> GetFolder(This,pszPath,riid,ppv) )
    ( (This)->lpVtbl -> DeleteFeed(This,pszPath) )
    ( (This)->lpVtbl -> DeleteFolder(This,pszPath) )
    ( (This)->lpVtbl -> BackgroundSync(This,fbsa) )
    ( (This)->lpVtbl -> BackgroundSyncStatus(This,pfbss) )
    ( (This)->lpVtbl -> DefaultInterval(This,puiInterval) )
    ( (This)->lpVtbl -> SetDefaultInterval(This,uiInterval) )
    ( (This)->lpVtbl -> AsyncSyncAll(This) )
    ( (This)->lpVtbl -> Normalize(This,pStreamIn,ppStreamOut) )
    ( (This)->lpVtbl -> ItemCountLimit(This,puiItemCountLimit) )
EXTERN_C const IID IID_IXFeedsEnum;
    typedef struct IXFeedsEnumVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedsEnum * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedsEnum * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedsEnum * This);
        HRESULT ( STDMETHODCALLTYPE *Count )(
            __RPC__in IXFeedsEnum * This,
                        __RPC__out UINT *puiCount);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IXFeedsEnum * This,
                       UINT uiIndex,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IXFeedsEnumVtbl;
    interface IXFeedsEnum
    {
        CONST_VTBL struct IXFeedsEnumVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Count(This,puiCount) )
    ( (This)->lpVtbl -> Item(This,uiIndex,riid,ppv) )
EXTERN_C const IID IID_IXFeedFolder;
    typedef struct IXFeedFolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedFolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedFolder * This);
        HRESULT ( STDMETHODCALLTYPE *Feeds )(
            __RPC__in IXFeedFolder * This,
                        __RPC__deref_out_opt IXFeedsEnum **ppfe);
        HRESULT ( STDMETHODCALLTYPE *Subfolders )(
            __RPC__in IXFeedFolder * This,
                        __RPC__deref_out_opt IXFeedsEnum **ppfe);
        HRESULT ( STDMETHODCALLTYPE *CreateFeed )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in LPCWSTR pszName,
                       __RPC__in LPCWSTR pszUrl,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateSubfolder )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in LPCWSTR pszName,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ExistsFeed )(
            __RPC__in IXFeedFolder * This,
            __RPC__in LPCWSTR pszName,
            __RPC__in BOOL *pbFeedExists);
        HRESULT ( STDMETHODCALLTYPE *ExistsSubfolder )(
            __RPC__in IXFeedFolder * This,
            __RPC__in LPCWSTR pszName,
            __RPC__in BOOL *pbSubfolderExists);
        HRESULT ( STDMETHODCALLTYPE *GetFeed )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in LPCWSTR pszName,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetSubfolder )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in LPCWSTR pszName,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IXFeedFolder * This);
        HRESULT ( STDMETHODCALLTYPE *Name )(
            __RPC__in IXFeedFolder * This,
                        __RPC__deref_out_opt LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in LPCWSTR pszName);
        HRESULT ( STDMETHODCALLTYPE *Path )(
            __RPC__in IXFeedFolder * This,
                        __RPC__deref_out_opt LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *Parent )(
            __RPC__in IXFeedFolder * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *IsRoot )(
            __RPC__in IXFeedFolder * This,
                        __RPC__out BOOL *pbIsRootFeedFolder);
        HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
            __RPC__in IXFeedFolder * This,
                       FEEDS_EVENTS_SCOPE scope,
                       FEEDS_EVENTS_MASK mask,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *TotalUnreadItemCount )(
            __RPC__in IXFeedFolder * This,
                        __RPC__out UINT *puiTotalUnreadItemCount);
        HRESULT ( STDMETHODCALLTYPE *TotalItemCount )(
            __RPC__in IXFeedFolder * This,
                        __RPC__out UINT *puiTotalItemCount);
        END_INTERFACE
    } IXFeedFolderVtbl;
    interface IXFeedFolder
    {
        CONST_VTBL struct IXFeedFolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Feeds(This,ppfe) )
    ( (This)->lpVtbl -> Subfolders(This,ppfe) )
    ( (This)->lpVtbl -> CreateFeed(This,pszName,pszUrl,riid,ppv) )
    ( (This)->lpVtbl -> CreateSubfolder(This,pszName,riid,ppv) )
    ( (This)->lpVtbl -> ExistsFeed(This,pszName,pbFeedExists) )
    ( (This)->lpVtbl -> ExistsSubfolder(This,pszName,pbSubfolderExists) )
    ( (This)->lpVtbl -> GetFeed(This,pszName,riid,ppv) )
    ( (This)->lpVtbl -> GetSubfolder(This,pszName,riid,ppv) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Name(This,ppszName) )
    ( (This)->lpVtbl -> Rename(This,pszName) )
    ( (This)->lpVtbl -> Path(This,ppszPath) )
    ( (This)->lpVtbl -> Move(This,pszPath) )
    ( (This)->lpVtbl -> Parent(This,riid,ppv) )
    ( (This)->lpVtbl -> IsRoot(This,pbIsRootFeedFolder) )
    ( (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv) )
    ( (This)->lpVtbl -> TotalUnreadItemCount(This,puiTotalUnreadItemCount) )
    ( (This)->lpVtbl -> TotalItemCount(This,puiTotalItemCount) )
EXTERN_C const IID IID_IXFeedFolderEvents;
    typedef struct IXFeedFolderEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedFolderEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedFolderEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IXFeedFolderEvents * This);
        HRESULT ( STDMETHODCALLTYPE *FolderAdded )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FolderDeleted )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FolderRenamed )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FolderMovedFrom )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FolderMovedTo )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FolderItemCountChanged )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       FEICF feicfFlags);
        HRESULT ( STDMETHODCALLTYPE *FeedAdded )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedDeleted )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedRenamed )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FeedUrlChanged )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedMovedFrom )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FeedMovedTo )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FeedDownloading )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedDownloadCompleted )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       FEEDS_DOWNLOAD_ERROR fde);
        HRESULT ( STDMETHODCALLTYPE *FeedItemCountChanged )(
            __RPC__in IXFeedFolderEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       FEICF feicfFlags);
        END_INTERFACE
    } IXFeedFolderEventsVtbl;
    interface IXFeedFolderEvents
    {
        CONST_VTBL struct IXFeedFolderEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> FolderAdded(This,pszPath) )
    ( (This)->lpVtbl -> FolderDeleted(This,pszPath) )
    ( (This)->lpVtbl -> FolderRenamed(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FolderMovedFrom(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FolderMovedTo(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FolderItemCountChanged(This,pszPath,feicfFlags) )
    ( (This)->lpVtbl -> FeedAdded(This,pszPath) )
    ( (This)->lpVtbl -> FeedDeleted(This,pszPath) )
    ( (This)->lpVtbl -> FeedRenamed(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FeedUrlChanged(This,pszPath) )
    ( (This)->lpVtbl -> FeedMovedFrom(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FeedMovedTo(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FeedDownloading(This,pszPath) )
    ( (This)->lpVtbl -> FeedDownloadCompleted(This,pszPath,fde) )
    ( (This)->lpVtbl -> FeedItemCountChanged(This,pszPath,feicfFlags) )
EXTERN_C const IID IID_IXFeed;
    typedef struct IXFeedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeed * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeed * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeed * This);
        HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IXFeed * This,
                       UINT uiItemCount,
                       FEEDS_XML_SORT_PROPERTY sortProperty,
                       FEEDS_XML_SORT_ORDER sortOrder,
                       FEEDS_XML_FILTER_FLAGS filterFlags,
                       FEEDS_XML_INCLUDE_FLAGS includeFlags,
                        __RPC__deref_out_opt IStream **pps);
        HRESULT ( STDMETHODCALLTYPE *Name )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IXFeed * This,
                       __RPC__in LPCWSTR pszName);
        HRESULT ( STDMETHODCALLTYPE *Url )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *SetUrl )(
            __RPC__in IXFeed * This,
                       __RPC__in LPCWSTR pszUrl);
        HRESULT ( STDMETHODCALLTYPE *LocalId )(
            __RPC__in IXFeed * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Path )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IXFeed * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *Parent )(
            __RPC__in IXFeed * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *LastWriteTime )(
            __RPC__in IXFeed * This,
                        __RPC__out SYSTEMTIME *pstLastWriteTime);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IXFeed * This);
        HRESULT ( STDMETHODCALLTYPE *Download )(
            __RPC__in IXFeed * This);
        HRESULT ( STDMETHODCALLTYPE *AsyncDownload )(
            __RPC__in IXFeed * This);
        HRESULT ( STDMETHODCALLTYPE *CancelAsyncDownload )(
            __RPC__in IXFeed * This);
        HRESULT ( STDMETHODCALLTYPE *SyncSetting )(
            __RPC__in IXFeed * This,
                        __RPC__out FEEDS_SYNC_SETTING *pfss);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSetting )(
            __RPC__in IXFeed * This,
                       FEEDS_SYNC_SETTING fss);
        HRESULT ( STDMETHODCALLTYPE *Interval )(
            __RPC__in IXFeed * This,
                        __RPC__out UINT *puiInterval);
        HRESULT ( STDMETHODCALLTYPE *SetInterval )(
            __RPC__in IXFeed * This,
                       UINT uiInterval);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadTime )(
            __RPC__in IXFeed * This,
                        __RPC__out SYSTEMTIME *pstLastDownloadTime);
        HRESULT ( STDMETHODCALLTYPE *LocalEnclosurePath )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *Items )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt IXFeedsEnum **ppfe);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IXFeed * This,
                       UINT uiId,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *MarkAllItemsRead )(
            __RPC__in IXFeed * This);
        HRESULT ( STDMETHODCALLTYPE *MaxItemCount )(
            __RPC__in IXFeed * This,
                        __RPC__out UINT *puiMaxItemCount);
        HRESULT ( STDMETHODCALLTYPE *SetMaxItemCount )(
            __RPC__in IXFeed * This,
                       UINT uiMaxItemCount);
        HRESULT ( STDMETHODCALLTYPE *DownloadEnclosuresAutomatically )(
            __RPC__in IXFeed * This,
                        __RPC__out BOOL *pbDownloadEnclosuresAutomatically);
        HRESULT ( STDMETHODCALLTYPE *SetDownloadEnclosuresAutomatically )(
            __RPC__in IXFeed * This,
                       BOOL bDownloadEnclosuresAutomatically);
        HRESULT ( STDMETHODCALLTYPE *DownloadStatus )(
            __RPC__in IXFeed * This,
                        __RPC__out FEEDS_DOWNLOAD_STATUS *pfds);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadError )(
            __RPC__in IXFeed * This,
                        __RPC__out FEEDS_DOWNLOAD_ERROR *pfde);
        HRESULT ( STDMETHODCALLTYPE *Merge )(
            __RPC__in IXFeed * This,
                       __RPC__in_opt IStream *pStream,
                       __RPC__in LPCWSTR pszUrl);
        HRESULT ( STDMETHODCALLTYPE *DownloadUrl )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Title )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszTitle);
        HRESULT ( STDMETHODCALLTYPE *Description )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *Link )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszHomePage);
        HRESULT ( STDMETHODCALLTYPE *Image )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszImageUrl);
        HRESULT ( STDMETHODCALLTYPE *LastBuildDate )(
            __RPC__in IXFeed * This,
                        __RPC__out SYSTEMTIME *pstLastBuildDate);
        HRESULT ( STDMETHODCALLTYPE *PubDate )(
            __RPC__in IXFeed * This,
                        __RPC__out SYSTEMTIME *pstPubDate);
        HRESULT ( STDMETHODCALLTYPE *Ttl )(
            __RPC__in IXFeed * This,
                        __RPC__out UINT *puiTtl);
        HRESULT ( STDMETHODCALLTYPE *Language )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszLanguage);
        HRESULT ( STDMETHODCALLTYPE *Copyright )(
            __RPC__in IXFeed * This,
                        __RPC__deref_out_opt LPWSTR *ppszCopyright);
        HRESULT ( STDMETHODCALLTYPE *IsList )(
            __RPC__in IXFeed * This,
                        __RPC__out BOOL *pbIsList);
        HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
            __RPC__in IXFeed * This,
                       FEEDS_EVENTS_SCOPE scope,
                       FEEDS_EVENTS_MASK mask,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *UnreadItemCount )(
            __RPC__in IXFeed * This,
                        __RPC__out UINT *puiUnreadItemCount);
        HRESULT ( STDMETHODCALLTYPE *ItemCount )(
            __RPC__in IXFeed * This,
                        __RPC__out UINT *puiItemCount);
        END_INTERFACE
    } IXFeedVtbl;
    interface IXFeed
    {
        CONST_VTBL struct IXFeedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps) )
    ( (This)->lpVtbl -> Name(This,ppszName) )
    ( (This)->lpVtbl -> Rename(This,pszName) )
    ( (This)->lpVtbl -> Url(This,ppszUrl) )
    ( (This)->lpVtbl -> SetUrl(This,pszUrl) )
    ( (This)->lpVtbl -> LocalId(This,pguid) )
    ( (This)->lpVtbl -> Path(This,ppszPath) )
    ( (This)->lpVtbl -> Move(This,pszPath) )
    ( (This)->lpVtbl -> Parent(This,riid,ppv) )
    ( (This)->lpVtbl -> LastWriteTime(This,pstLastWriteTime) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Download(This) )
    ( (This)->lpVtbl -> AsyncDownload(This) )
    ( (This)->lpVtbl -> CancelAsyncDownload(This) )
    ( (This)->lpVtbl -> SyncSetting(This,pfss) )
    ( (This)->lpVtbl -> SetSyncSetting(This,fss) )
    ( (This)->lpVtbl -> Interval(This,puiInterval) )
    ( (This)->lpVtbl -> SetInterval(This,uiInterval) )
    ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
    ( (This)->lpVtbl -> LocalEnclosurePath(This,ppszPath) )
    ( (This)->lpVtbl -> Items(This,ppfe) )
    ( (This)->lpVtbl -> GetItem(This,uiId,riid,ppv) )
    ( (This)->lpVtbl -> MarkAllItemsRead(This) )
    ( (This)->lpVtbl -> MaxItemCount(This,puiMaxItemCount) )
    ( (This)->lpVtbl -> SetMaxItemCount(This,uiMaxItemCount) )
    ( (This)->lpVtbl -> DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> DownloadStatus(This,pfds) )
    ( (This)->lpVtbl -> LastDownloadError(This,pfde) )
    ( (This)->lpVtbl -> Merge(This,pStream,pszUrl) )
    ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
    ( (This)->lpVtbl -> Title(This,ppszTitle) )
    ( (This)->lpVtbl -> Description(This,ppszDescription) )
    ( (This)->lpVtbl -> Link(This,ppszHomePage) )
    ( (This)->lpVtbl -> Image(This,ppszImageUrl) )
    ( (This)->lpVtbl -> LastBuildDate(This,pstLastBuildDate) )
    ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
    ( (This)->lpVtbl -> Ttl(This,puiTtl) )
    ( (This)->lpVtbl -> Language(This,ppszLanguage) )
    ( (This)->lpVtbl -> Copyright(This,ppszCopyright) )
    ( (This)->lpVtbl -> IsList(This,pbIsList) )
    ( (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv) )
    ( (This)->lpVtbl -> UnreadItemCount(This,puiUnreadItemCount) )
    ( (This)->lpVtbl -> ItemCount(This,puiItemCount) )
EXTERN_C const IID IID_IXFeed2;
    typedef struct IXFeed2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeed2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeed2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IXFeed2 * This,
                       UINT uiItemCount,
                       FEEDS_XML_SORT_PROPERTY sortProperty,
                       FEEDS_XML_SORT_ORDER sortOrder,
                       FEEDS_XML_FILTER_FLAGS filterFlags,
                       FEEDS_XML_INCLUDE_FLAGS includeFlags,
                        __RPC__deref_out_opt IStream **pps);
        HRESULT ( STDMETHODCALLTYPE *Name )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IXFeed2 * This,
                       __RPC__in LPCWSTR pszName);
        HRESULT ( STDMETHODCALLTYPE *Url )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *SetUrl )(
            __RPC__in IXFeed2 * This,
                       __RPC__in LPCWSTR pszUrl);
        HRESULT ( STDMETHODCALLTYPE *LocalId )(
            __RPC__in IXFeed2 * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Path )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IXFeed2 * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *Parent )(
            __RPC__in IXFeed2 * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *LastWriteTime )(
            __RPC__in IXFeed2 * This,
                        __RPC__out SYSTEMTIME *pstLastWriteTime);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IXFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *Download )(
            __RPC__in IXFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *AsyncDownload )(
            __RPC__in IXFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *CancelAsyncDownload )(
            __RPC__in IXFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *SyncSetting )(
            __RPC__in IXFeed2 * This,
                        __RPC__out FEEDS_SYNC_SETTING *pfss);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSetting )(
            __RPC__in IXFeed2 * This,
                       FEEDS_SYNC_SETTING fss);
        HRESULT ( STDMETHODCALLTYPE *Interval )(
            __RPC__in IXFeed2 * This,
                        __RPC__out UINT *puiInterval);
        HRESULT ( STDMETHODCALLTYPE *SetInterval )(
            __RPC__in IXFeed2 * This,
                       UINT uiInterval);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadTime )(
            __RPC__in IXFeed2 * This,
                        __RPC__out SYSTEMTIME *pstLastDownloadTime);
        HRESULT ( STDMETHODCALLTYPE *LocalEnclosurePath )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *Items )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt IXFeedsEnum **ppfe);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IXFeed2 * This,
                       UINT uiId,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *MarkAllItemsRead )(
            __RPC__in IXFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *MaxItemCount )(
            __RPC__in IXFeed2 * This,
                        __RPC__out UINT *puiMaxItemCount);
        HRESULT ( STDMETHODCALLTYPE *SetMaxItemCount )(
            __RPC__in IXFeed2 * This,
                       UINT uiMaxItemCount);
        HRESULT ( STDMETHODCALLTYPE *DownloadEnclosuresAutomatically )(
            __RPC__in IXFeed2 * This,
                        __RPC__out BOOL *pbDownloadEnclosuresAutomatically);
        HRESULT ( STDMETHODCALLTYPE *SetDownloadEnclosuresAutomatically )(
            __RPC__in IXFeed2 * This,
                       BOOL bDownloadEnclosuresAutomatically);
        HRESULT ( STDMETHODCALLTYPE *DownloadStatus )(
            __RPC__in IXFeed2 * This,
                        __RPC__out FEEDS_DOWNLOAD_STATUS *pfds);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadError )(
            __RPC__in IXFeed2 * This,
                        __RPC__out FEEDS_DOWNLOAD_ERROR *pfde);
        HRESULT ( STDMETHODCALLTYPE *Merge )(
            __RPC__in IXFeed2 * This,
                       __RPC__in_opt IStream *pStream,
                       __RPC__in LPCWSTR pszUrl);
        HRESULT ( STDMETHODCALLTYPE *DownloadUrl )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Title )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszTitle);
        HRESULT ( STDMETHODCALLTYPE *Description )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *Link )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszHomePage);
        HRESULT ( STDMETHODCALLTYPE *Image )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszImageUrl);
        HRESULT ( STDMETHODCALLTYPE *LastBuildDate )(
            __RPC__in IXFeed2 * This,
                        __RPC__out SYSTEMTIME *pstLastBuildDate);
        HRESULT ( STDMETHODCALLTYPE *PubDate )(
            __RPC__in IXFeed2 * This,
                        __RPC__out SYSTEMTIME *pstPubDate);
        HRESULT ( STDMETHODCALLTYPE *Ttl )(
            __RPC__in IXFeed2 * This,
                        __RPC__out UINT *puiTtl);
        HRESULT ( STDMETHODCALLTYPE *Language )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszLanguage);
        HRESULT ( STDMETHODCALLTYPE *Copyright )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszCopyright);
        HRESULT ( STDMETHODCALLTYPE *IsList )(
            __RPC__in IXFeed2 * This,
                        __RPC__out BOOL *pbIsList);
        HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
            __RPC__in IXFeed2 * This,
                       FEEDS_EVENTS_SCOPE scope,
                       FEEDS_EVENTS_MASK mask,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *UnreadItemCount )(
            __RPC__in IXFeed2 * This,
                        __RPC__out UINT *puiUnreadItemCount);
        HRESULT ( STDMETHODCALLTYPE *ItemCount )(
            __RPC__in IXFeed2 * This,
                        __RPC__out UINT *puiItemCount);
        HRESULT ( STDMETHODCALLTYPE *GetItemByEffectiveId )(
            __RPC__in IXFeed2 * This,
                       UINT uiEffectiveId,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *LastItemDownloadTime )(
            __RPC__in IXFeed2 * This,
                        __RPC__out SYSTEMTIME *pstLastItemDownloadTime);
        HRESULT ( STDMETHODCALLTYPE *Username )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszUsername);
        HRESULT ( STDMETHODCALLTYPE *Password )(
            __RPC__in IXFeed2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszPassword);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IXFeed2 * This,
                       __RPC__in LPCWSTR pszUsername,
                       __RPC__in LPCWSTR pszPassword);
        HRESULT ( STDMETHODCALLTYPE *ClearCredentials )(
            __RPC__in IXFeed2 * This);
        END_INTERFACE
    } IXFeed2Vtbl;
    interface IXFeed2
    {
        CONST_VTBL struct IXFeed2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps) )
    ( (This)->lpVtbl -> Name(This,ppszName) )
    ( (This)->lpVtbl -> Rename(This,pszName) )
    ( (This)->lpVtbl -> Url(This,ppszUrl) )
    ( (This)->lpVtbl -> SetUrl(This,pszUrl) )
    ( (This)->lpVtbl -> LocalId(This,pguid) )
    ( (This)->lpVtbl -> Path(This,ppszPath) )
    ( (This)->lpVtbl -> Move(This,pszPath) )
    ( (This)->lpVtbl -> Parent(This,riid,ppv) )
    ( (This)->lpVtbl -> LastWriteTime(This,pstLastWriteTime) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Download(This) )
    ( (This)->lpVtbl -> AsyncDownload(This) )
    ( (This)->lpVtbl -> CancelAsyncDownload(This) )
    ( (This)->lpVtbl -> SyncSetting(This,pfss) )
    ( (This)->lpVtbl -> SetSyncSetting(This,fss) )
    ( (This)->lpVtbl -> Interval(This,puiInterval) )
    ( (This)->lpVtbl -> SetInterval(This,uiInterval) )
    ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
    ( (This)->lpVtbl -> LocalEnclosurePath(This,ppszPath) )
    ( (This)->lpVtbl -> Items(This,ppfe) )
    ( (This)->lpVtbl -> GetItem(This,uiId,riid,ppv) )
    ( (This)->lpVtbl -> MarkAllItemsRead(This) )
    ( (This)->lpVtbl -> MaxItemCount(This,puiMaxItemCount) )
    ( (This)->lpVtbl -> SetMaxItemCount(This,uiMaxItemCount) )
    ( (This)->lpVtbl -> DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> DownloadStatus(This,pfds) )
    ( (This)->lpVtbl -> LastDownloadError(This,pfde) )
    ( (This)->lpVtbl -> Merge(This,pStream,pszUrl) )
    ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
    ( (This)->lpVtbl -> Title(This,ppszTitle) )
    ( (This)->lpVtbl -> Description(This,ppszDescription) )
    ( (This)->lpVtbl -> Link(This,ppszHomePage) )
    ( (This)->lpVtbl -> Image(This,ppszImageUrl) )
    ( (This)->lpVtbl -> LastBuildDate(This,pstLastBuildDate) )
    ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
    ( (This)->lpVtbl -> Ttl(This,puiTtl) )
    ( (This)->lpVtbl -> Language(This,ppszLanguage) )
    ( (This)->lpVtbl -> Copyright(This,ppszCopyright) )
    ( (This)->lpVtbl -> IsList(This,pbIsList) )
    ( (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv) )
    ( (This)->lpVtbl -> UnreadItemCount(This,puiUnreadItemCount) )
    ( (This)->lpVtbl -> ItemCount(This,puiItemCount) )
    ( (This)->lpVtbl -> GetItemByEffectiveId(This,uiEffectiveId,riid,ppv) )
    ( (This)->lpVtbl -> LastItemDownloadTime(This,pstLastItemDownloadTime) )
    ( (This)->lpVtbl -> Username(This,ppszUsername) )
    ( (This)->lpVtbl -> Password(This,ppszPassword) )
    ( (This)->lpVtbl -> SetCredentials(This,pszUsername,pszPassword) )
    ( (This)->lpVtbl -> ClearCredentials(This) )
EXTERN_C const IID IID_IXFeedEvents;
    typedef struct IXFeedEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IXFeedEvents * This);
        HRESULT ( STDMETHODCALLTYPE *FeedDeleted )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedRenamed )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FeedUrlChanged )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedMoved )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       __RPC__in LPCWSTR pszOldPath);
        HRESULT ( STDMETHODCALLTYPE *FeedDownloading )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *FeedDownloadCompleted )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       FEEDS_DOWNLOAD_ERROR fde);
        HRESULT ( STDMETHODCALLTYPE *FeedItemCountChanged )(
            __RPC__in IXFeedEvents * This,
                       __RPC__in LPCWSTR pszPath,
                       FEICF feicfFlags);
        END_INTERFACE
    } IXFeedEventsVtbl;
    interface IXFeedEvents
    {
        CONST_VTBL struct IXFeedEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> FeedDeleted(This,pszPath) )
    ( (This)->lpVtbl -> FeedRenamed(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FeedUrlChanged(This,pszPath) )
    ( (This)->lpVtbl -> FeedMoved(This,pszPath,pszOldPath) )
    ( (This)->lpVtbl -> FeedDownloading(This,pszPath) )
    ( (This)->lpVtbl -> FeedDownloadCompleted(This,pszPath,fde) )
    ( (This)->lpVtbl -> FeedItemCountChanged(This,pszPath,feicfFlags) )
EXTERN_C const IID IID_IXFeedItem;
    typedef struct IXFeedItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedItem * This);
        HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IXFeedItem * This,
                       FEEDS_XML_INCLUDE_FLAGS fxif,
                        __RPC__deref_out_opt IStream **pps);
        HRESULT ( STDMETHODCALLTYPE *Title )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszTitle);
        HRESULT ( STDMETHODCALLTYPE *Link )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Guid )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszGuid);
        HRESULT ( STDMETHODCALLTYPE *Description )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *PubDate )(
            __RPC__in IXFeedItem * This,
                        __RPC__out SYSTEMTIME *pstPubDate);
        HRESULT ( STDMETHODCALLTYPE *Comments )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Author )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszAuthor);
        HRESULT ( STDMETHODCALLTYPE *Enclosure )(
            __RPC__in IXFeedItem * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *IsRead )(
            __RPC__in IXFeedItem * This,
                        __RPC__out BOOL *pbIsRead);
        HRESULT ( STDMETHODCALLTYPE *SetIsRead )(
            __RPC__in IXFeedItem * This,
                       BOOL bIsRead);
        HRESULT ( STDMETHODCALLTYPE *LocalId )(
            __RPC__in IXFeedItem * This,
                        __RPC__out UINT *puiId);
        HRESULT ( STDMETHODCALLTYPE *Parent )(
            __RPC__in IXFeedItem * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IXFeedItem * This);
        HRESULT ( STDMETHODCALLTYPE *DownloadUrl )(
            __RPC__in IXFeedItem * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadTime )(
            __RPC__in IXFeedItem * This,
                        __RPC__out SYSTEMTIME *pstLastDownloadTime);
        HRESULT ( STDMETHODCALLTYPE *Modified )(
            __RPC__in IXFeedItem * This,
                        __RPC__out SYSTEMTIME *pstModifiedTime);
        END_INTERFACE
    } IXFeedItemVtbl;
    interface IXFeedItem
    {
        CONST_VTBL struct IXFeedItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Xml(This,fxif,pps) )
    ( (This)->lpVtbl -> Title(This,ppszTitle) )
    ( (This)->lpVtbl -> Link(This,ppszUrl) )
    ( (This)->lpVtbl -> Guid(This,ppszGuid) )
    ( (This)->lpVtbl -> Description(This,ppszDescription) )
    ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
    ( (This)->lpVtbl -> Comments(This,ppszUrl) )
    ( (This)->lpVtbl -> Author(This,ppszAuthor) )
    ( (This)->lpVtbl -> Enclosure(This,riid,ppv) )
    ( (This)->lpVtbl -> IsRead(This,pbIsRead) )
    ( (This)->lpVtbl -> SetIsRead(This,bIsRead) )
    ( (This)->lpVtbl -> LocalId(This,puiId) )
    ( (This)->lpVtbl -> Parent(This,riid,ppv) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
    ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
    ( (This)->lpVtbl -> Modified(This,pstModifiedTime) )
EXTERN_C const IID IID_IXFeedItem2;
    typedef struct IXFeedItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedItem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IXFeedItem2 * This,
                       FEEDS_XML_INCLUDE_FLAGS fxif,
                        __RPC__deref_out_opt IStream **pps);
        HRESULT ( STDMETHODCALLTYPE *Title )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszTitle);
        HRESULT ( STDMETHODCALLTYPE *Link )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Guid )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszGuid);
        HRESULT ( STDMETHODCALLTYPE *Description )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *PubDate )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__out SYSTEMTIME *pstPubDate);
        HRESULT ( STDMETHODCALLTYPE *Comments )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Author )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszAuthor);
        HRESULT ( STDMETHODCALLTYPE *Enclosure )(
            __RPC__in IXFeedItem2 * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *IsRead )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__out BOOL *pbIsRead);
        HRESULT ( STDMETHODCALLTYPE *SetIsRead )(
            __RPC__in IXFeedItem2 * This,
                       BOOL bIsRead);
        HRESULT ( STDMETHODCALLTYPE *LocalId )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__out UINT *puiId);
        HRESULT ( STDMETHODCALLTYPE *Parent )(
            __RPC__in IXFeedItem2 * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IXFeedItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *DownloadUrl )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadTime )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__out SYSTEMTIME *pstLastDownloadTime);
        HRESULT ( STDMETHODCALLTYPE *Modified )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__out SYSTEMTIME *pstModifiedTime);
        HRESULT ( STDMETHODCALLTYPE *EffectiveId )(
            __RPC__in IXFeedItem2 * This,
                        __RPC__out UINT *puiEffectiveId);
        END_INTERFACE
    } IXFeedItem2Vtbl;
    interface IXFeedItem2
    {
        CONST_VTBL struct IXFeedItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Xml(This,fxif,pps) )
    ( (This)->lpVtbl -> Title(This,ppszTitle) )
    ( (This)->lpVtbl -> Link(This,ppszUrl) )
    ( (This)->lpVtbl -> Guid(This,ppszGuid) )
    ( (This)->lpVtbl -> Description(This,ppszDescription) )
    ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
    ( (This)->lpVtbl -> Comments(This,ppszUrl) )
    ( (This)->lpVtbl -> Author(This,ppszAuthor) )
    ( (This)->lpVtbl -> Enclosure(This,riid,ppv) )
    ( (This)->lpVtbl -> IsRead(This,pbIsRead) )
    ( (This)->lpVtbl -> SetIsRead(This,bIsRead) )
    ( (This)->lpVtbl -> LocalId(This,puiId) )
    ( (This)->lpVtbl -> Parent(This,riid,ppv) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
    ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
    ( (This)->lpVtbl -> Modified(This,pstModifiedTime) )
    ( (This)->lpVtbl -> EffectiveId(This,puiEffectiveId) )
EXTERN_C const IID IID_IXFeedEnclosure;
    typedef struct IXFeedEnclosureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXFeedEnclosure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXFeedEnclosure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXFeedEnclosure * This);
        HRESULT ( STDMETHODCALLTYPE *Url )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *Type )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__deref_out_opt LPWSTR *ppszMimeType);
        HRESULT ( STDMETHODCALLTYPE *Length )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__out UINT *puiLength);
        HRESULT ( STDMETHODCALLTYPE *AsyncDownload )(
            __RPC__in IXFeedEnclosure * This);
        HRESULT ( STDMETHODCALLTYPE *CancelAsyncDownload )(
            __RPC__in IXFeedEnclosure * This);
        HRESULT ( STDMETHODCALLTYPE *DownloadStatus )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__out FEEDS_DOWNLOAD_STATUS *pfds);
        HRESULT ( STDMETHODCALLTYPE *LastDownloadError )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__out FEEDS_DOWNLOAD_ERROR *pfde);
        HRESULT ( STDMETHODCALLTYPE *LocalPath )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__deref_out_opt LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *Parent )(
            __RPC__in IXFeedEnclosure * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *DownloadUrl )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__deref_out_opt LPWSTR *ppszUrl);
        HRESULT ( STDMETHODCALLTYPE *DownloadMimeType )(
            __RPC__in IXFeedEnclosure * This,
                        __RPC__deref_out_opt LPWSTR *ppszMimeType);
        HRESULT ( STDMETHODCALLTYPE *RemoveFile )(
            __RPC__in IXFeedEnclosure * This);
        HRESULT ( STDMETHODCALLTYPE *SetFile )(
            __RPC__in IXFeedEnclosure * This,
                       __RPC__in LPCWSTR pszDownloadUrl,
                       __RPC__in LPCWSTR pszDownloadFilePath,
                       __RPC__in LPCWSTR pszDownloadMimeType,
                       __RPC__in LPCWSTR pszEnclosureFilename);
        END_INTERFACE
    } IXFeedEnclosureVtbl;
    interface IXFeedEnclosure
    {
        CONST_VTBL struct IXFeedEnclosureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Url(This,ppszUrl) )
    ( (This)->lpVtbl -> Type(This,ppszMimeType) )
    ( (This)->lpVtbl -> Length(This,puiLength) )
    ( (This)->lpVtbl -> AsyncDownload(This) )
    ( (This)->lpVtbl -> CancelAsyncDownload(This) )
    ( (This)->lpVtbl -> DownloadStatus(This,pfds) )
    ( (This)->lpVtbl -> LastDownloadError(This,pfde) )
    ( (This)->lpVtbl -> LocalPath(This,ppszPath) )
    ( (This)->lpVtbl -> Parent(This,riid,ppv) )
    ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
    ( (This)->lpVtbl -> DownloadMimeType(This,ppszMimeType) )
    ( (This)->lpVtbl -> RemoveFile(This) )
    ( (This)->lpVtbl -> SetFile(This,pszDownloadUrl,pszDownloadFilePath,pszDownloadMimeType,pszEnclosureFilename) )
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
EXTERN_C const IID LIBID_Feeds;
EXTERN_C const IID IID_IFeedsManager;
    typedef struct IFeedsManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedsManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedsManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedsManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedsManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedsManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedsManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedsManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RootFolder )(
            __RPC__in IFeedsManager * This,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR feedUrl,
                                __RPC__out VARIANT_BOOL *subscribed);
                               HRESULT ( STDMETHODCALLTYPE *ExistsFeed )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR feedPath,
                                __RPC__out VARIANT_BOOL *exists);
                               HRESULT ( STDMETHODCALLTYPE *GetFeed )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR feedPath,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *GetFeedByUrl )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR feedUrl,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *ExistsFolder )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR folderPath,
                                __RPC__out VARIANT_BOOL *exists);
                               HRESULT ( STDMETHODCALLTYPE *GetFolder )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR folderPath,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *DeleteFeed )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR feedPath);
                               HRESULT ( STDMETHODCALLTYPE *DeleteFolder )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR folderPath);
                               HRESULT ( STDMETHODCALLTYPE *BackgroundSync )(
            __RPC__in IFeedsManager * This,
                       FEEDS_BACKGROUNDSYNC_ACTION action);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackgroundSyncStatus )(
            __RPC__in IFeedsManager * This,
                                __RPC__out FEEDS_BACKGROUNDSYNC_STATUS *status);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultInterval )(
            __RPC__in IFeedsManager * This,
                                __RPC__out LONG *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultInterval )(
            __RPC__in IFeedsManager * This,
                       LONG minutes);
                               HRESULT ( STDMETHODCALLTYPE *AsyncSyncAll )(
            __RPC__in IFeedsManager * This);
                               HRESULT ( STDMETHODCALLTYPE *Normalize )(
            __RPC__in IFeedsManager * This,
                       __RPC__in BSTR feedXmlIn,
                                __RPC__deref_out_opt BSTR *feedXmlOut);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemCountLimit )(
            __RPC__in IFeedsManager * This,
                                __RPC__out LONG *itemCountLimit);
        END_INTERFACE
    } IFeedsManagerVtbl;
    interface IFeedsManager
    {
        CONST_VTBL struct IFeedsManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RootFolder(This,disp) )
    ( (This)->lpVtbl -> IsSubscribed(This,feedUrl,subscribed) )
    ( (This)->lpVtbl -> ExistsFeed(This,feedPath,exists) )
    ( (This)->lpVtbl -> GetFeed(This,feedPath,disp) )
    ( (This)->lpVtbl -> GetFeedByUrl(This,feedUrl,disp) )
    ( (This)->lpVtbl -> ExistsFolder(This,folderPath,exists) )
    ( (This)->lpVtbl -> GetFolder(This,folderPath,disp) )
    ( (This)->lpVtbl -> DeleteFeed(This,feedPath) )
    ( (This)->lpVtbl -> DeleteFolder(This,folderPath) )
    ( (This)->lpVtbl -> BackgroundSync(This,action) )
    ( (This)->lpVtbl -> get_BackgroundSyncStatus(This,status) )
    ( (This)->lpVtbl -> get_DefaultInterval(This,minutes) )
    ( (This)->lpVtbl -> put_DefaultInterval(This,minutes) )
    ( (This)->lpVtbl -> AsyncSyncAll(This) )
    ( (This)->lpVtbl -> Normalize(This,feedXmlIn,feedXmlOut) )
    ( (This)->lpVtbl -> get_ItemCountLimit(This,itemCountLimit) )
EXTERN_C const IID IID_IFeedsEnum;
    typedef struct IFeedsEnumVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedsEnum * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedsEnum * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedsEnum * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedsEnum * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedsEnum * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedsEnum * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedsEnum * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFeedsEnum * This,
                                __RPC__out LONG *count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IFeedsEnum * This,
                       LONG index,
                                __RPC__deref_out_opt IDispatch **disp);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFeedsEnum * This,
                                __RPC__deref_out_opt IEnumVARIANT **enumVar);
        END_INTERFACE
    } IFeedsEnumVtbl;
    interface IFeedsEnum
    {
        CONST_VTBL struct IFeedsEnumVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> Item(This,index,disp) )
    ( (This)->lpVtbl -> get__NewEnum(This,enumVar) )
EXTERN_C const IID IID_IFeedFolder;
    typedef struct IFeedFolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedFolder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedFolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedFolder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedFolder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedFolder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedFolder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedFolder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Feeds )(
            __RPC__in IFeedFolder * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subfolders )(
            __RPC__in IFeedFolder * This,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *CreateFeed )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR feedName,
                       __RPC__in BSTR feedUrl,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *CreateSubfolder )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR folderName,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *ExistsFeed )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR feedName,
                                __RPC__out VARIANT_BOOL *exists);
                               HRESULT ( STDMETHODCALLTYPE *GetFeed )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR feedName,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *ExistsSubfolder )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR folderName,
                                __RPC__out VARIANT_BOOL *exists);
                               HRESULT ( STDMETHODCALLTYPE *GetSubfolder )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR folderName,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFeedFolder * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFeedFolder * This,
                                __RPC__deref_out_opt BSTR *folderName);
                               HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR folderName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFeedFolder * This,
                                __RPC__deref_out_opt BSTR *folderPath);
                               HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IFeedFolder * This,
                       __RPC__in BSTR newParentPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IFeedFolder * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRoot )(
            __RPC__in IFeedFolder * This,
                                __RPC__out VARIANT_BOOL *isRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalUnreadItemCount )(
            __RPC__in IFeedFolder * This,
                                __RPC__out LONG *count);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalItemCount )(
            __RPC__in IFeedFolder * This,
                                __RPC__out LONG *count);
                               HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
            __RPC__in IFeedFolder * This,
                       FEEDS_EVENTS_SCOPE scope,
                       FEEDS_EVENTS_MASK mask,
                                __RPC__deref_out_opt IDispatch **disp);
        END_INTERFACE
    } IFeedFolderVtbl;
    interface IFeedFolder
    {
        CONST_VTBL struct IFeedFolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Feeds(This,disp) )
    ( (This)->lpVtbl -> get_Subfolders(This,disp) )
    ( (This)->lpVtbl -> CreateFeed(This,feedName,feedUrl,disp) )
    ( (This)->lpVtbl -> CreateSubfolder(This,folderName,disp) )
    ( (This)->lpVtbl -> ExistsFeed(This,feedName,exists) )
    ( (This)->lpVtbl -> GetFeed(This,feedName,disp) )
    ( (This)->lpVtbl -> ExistsSubfolder(This,folderName,exists) )
    ( (This)->lpVtbl -> GetSubfolder(This,folderName,disp) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_Name(This,folderName) )
    ( (This)->lpVtbl -> Rename(This,folderName) )
    ( (This)->lpVtbl -> get_Path(This,folderPath) )
    ( (This)->lpVtbl -> Move(This,newParentPath) )
    ( (This)->lpVtbl -> get_Parent(This,disp) )
    ( (This)->lpVtbl -> get_IsRoot(This,isRoot) )
    ( (This)->lpVtbl -> get_TotalUnreadItemCount(This,count) )
    ( (This)->lpVtbl -> get_TotalItemCount(This,count) )
    ( (This)->lpVtbl -> GetWatcher(This,scope,mask,disp) )
EXTERN_C const IID IID_IFeedFolderEvents;
    typedef struct IFeedFolderEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedFolderEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedFolderEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedFolderEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedFolderEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedFolderEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IFeedFolderEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *FolderAdded )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FolderDeleted )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FolderRenamed )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FolderMovedFrom )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FolderMovedTo )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FolderItemCountChanged )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       LONG itemCountType);
                               HRESULT ( STDMETHODCALLTYPE *FeedAdded )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedDeleted )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedRenamed )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FeedUrlChanged )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedMovedFrom )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FeedMovedTo )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FeedDownloading )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedDownloadCompleted )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       FEEDS_DOWNLOAD_ERROR error);
                               HRESULT ( STDMETHODCALLTYPE *FeedItemCountChanged )(
            __RPC__in IFeedFolderEvents * This,
                       __RPC__in const BSTR path,
                       LONG itemCountType);
        END_INTERFACE
    } IFeedFolderEventsVtbl;
    interface IFeedFolderEvents
    {
        CONST_VTBL struct IFeedFolderEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> FolderAdded(This,path) )
    ( (This)->lpVtbl -> FolderDeleted(This,path) )
    ( (This)->lpVtbl -> FolderRenamed(This,path,oldPath) )
    ( (This)->lpVtbl -> FolderMovedFrom(This,path,oldPath) )
    ( (This)->lpVtbl -> FolderMovedTo(This,path,oldPath) )
    ( (This)->lpVtbl -> FolderItemCountChanged(This,path,itemCountType) )
    ( (This)->lpVtbl -> FeedAdded(This,path) )
    ( (This)->lpVtbl -> FeedDeleted(This,path) )
    ( (This)->lpVtbl -> FeedRenamed(This,path,oldPath) )
    ( (This)->lpVtbl -> FeedUrlChanged(This,path) )
    ( (This)->lpVtbl -> FeedMovedFrom(This,path,oldPath) )
    ( (This)->lpVtbl -> FeedMovedTo(This,path,oldPath) )
    ( (This)->lpVtbl -> FeedDownloading(This,path) )
    ( (This)->lpVtbl -> FeedDownloadCompleted(This,path,error) )
    ( (This)->lpVtbl -> FeedItemCountChanged(This,path,itemCountType) )
EXTERN_C const IID IID_IFeed;
    typedef struct IFeedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeed * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeed * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeed * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeed * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeed * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeed * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeed * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IFeed * This,
                       LONG count,
                       FEEDS_XML_SORT_PROPERTY sortProperty,
                       FEEDS_XML_SORT_ORDER sortOrder,
                       FEEDS_XML_FILTER_FLAGS filterFlags,
                       FEEDS_XML_INCLUDE_FLAGS includeFlags,
                                __RPC__deref_out_opt BSTR *xml);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *name);
                               HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IFeed * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Url )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *put_Url )(
            __RPC__in IFeed * This,
                       __RPC__in BSTR feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *feedGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *path);
                               HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IFeed * This,
                       __RPC__in BSTR newParentPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWriteTime )(
            __RPC__in IFeed * This,
                                __RPC__out DATE *lastWrite);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFeed * This);
                               HRESULT ( STDMETHODCALLTYPE *Download )(
            __RPC__in IFeed * This);
                               HRESULT ( STDMETHODCALLTYPE *AsyncDownload )(
            __RPC__in IFeed * This);
                               HRESULT ( STDMETHODCALLTYPE *CancelAsyncDownload )(
            __RPC__in IFeed * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SyncSetting )(
            __RPC__in IFeed * This,
                                __RPC__out FEEDS_SYNC_SETTING *syncSetting);
                                        HRESULT ( STDMETHODCALLTYPE *put_SyncSetting )(
            __RPC__in IFeed * This,
                       FEEDS_SYNC_SETTING syncSetting);
                                        HRESULT ( STDMETHODCALLTYPE *get_Interval )(
            __RPC__in IFeed * This,
                                __RPC__out LONG *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_Interval )(
            __RPC__in IFeed * This,
                       LONG minutes);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadTime )(
            __RPC__in IFeed * This,
                                __RPC__out DATE *lastDownload);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalEnclosurePath )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_Items )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IFeed * This,
                       LONG itemId,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *title);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *get_Link )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *homePage);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *imageUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastBuildDate )(
            __RPC__in IFeed * This,
                                __RPC__out DATE *lastBuildDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_PubDate )(
            __RPC__in IFeed * This,
                                __RPC__out DATE *lastPopulateDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Ttl )(
            __RPC__in IFeed * This,
                                __RPC__out LONG *ttl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Language )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *language);
                                        HRESULT ( STDMETHODCALLTYPE *get_Copyright )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *copyright);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxItemCount )(
            __RPC__in IFeed * This,
                                __RPC__out LONG *count);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxItemCount )(
            __RPC__in IFeed * This,
                       LONG count);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadEnclosuresAutomatically )(
            __RPC__in IFeed * This,
                                __RPC__out VARIANT_BOOL *downloadEnclosuresAutomatically);
                                        HRESULT ( STDMETHODCALLTYPE *put_DownloadEnclosuresAutomatically )(
            __RPC__in IFeed * This,
                       VARIANT_BOOL downloadEnclosuresAutomatically);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadStatus )(
            __RPC__in IFeed * This,
                                __RPC__out FEEDS_DOWNLOAD_STATUS *status);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadError )(
            __RPC__in IFeed * This,
                                __RPC__out FEEDS_DOWNLOAD_ERROR *error);
                               HRESULT ( STDMETHODCALLTYPE *Merge )(
            __RPC__in IFeed * This,
                       __RPC__in BSTR feedXml,
                       __RPC__in BSTR feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IFeed * This,
                                __RPC__deref_out_opt BSTR *feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsList )(
            __RPC__in IFeed * This,
                                __RPC__out VARIANT_BOOL *isList);
                               HRESULT ( STDMETHODCALLTYPE *MarkAllItemsRead )(
            __RPC__in IFeed * This);
                               HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
            __RPC__in IFeed * This,
                       FEEDS_EVENTS_SCOPE scope,
                       FEEDS_EVENTS_MASK mask,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_UnreadItemCount )(
            __RPC__in IFeed * This,
                                __RPC__out LONG *count);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemCount )(
            __RPC__in IFeed * This,
                                __RPC__out LONG *count);
        END_INTERFACE
    } IFeedVtbl;
    interface IFeed
    {
        CONST_VTBL struct IFeedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> Rename(This,name) )
    ( (This)->lpVtbl -> get_Url(This,feedUrl) )
    ( (This)->lpVtbl -> put_Url(This,feedUrl) )
    ( (This)->lpVtbl -> get_LocalId(This,feedGuid) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> Move(This,newParentPath) )
    ( (This)->lpVtbl -> get_Parent(This,disp) )
    ( (This)->lpVtbl -> get_LastWriteTime(This,lastWrite) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Download(This) )
    ( (This)->lpVtbl -> AsyncDownload(This) )
    ( (This)->lpVtbl -> CancelAsyncDownload(This) )
    ( (This)->lpVtbl -> get_SyncSetting(This,syncSetting) )
    ( (This)->lpVtbl -> put_SyncSetting(This,syncSetting) )
    ( (This)->lpVtbl -> get_Interval(This,minutes) )
    ( (This)->lpVtbl -> put_Interval(This,minutes) )
    ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
    ( (This)->lpVtbl -> get_LocalEnclosurePath(This,path) )
    ( (This)->lpVtbl -> get_Items(This,disp) )
    ( (This)->lpVtbl -> GetItem(This,itemId,disp) )
    ( (This)->lpVtbl -> get_Title(This,title) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> get_Link(This,homePage) )
    ( (This)->lpVtbl -> get_Image(This,imageUrl) )
    ( (This)->lpVtbl -> get_LastBuildDate(This,lastBuildDate) )
    ( (This)->lpVtbl -> get_PubDate(This,lastPopulateDate) )
    ( (This)->lpVtbl -> get_Ttl(This,ttl) )
    ( (This)->lpVtbl -> get_Language(This,language) )
    ( (This)->lpVtbl -> get_Copyright(This,copyright) )
    ( (This)->lpVtbl -> get_MaxItemCount(This,count) )
    ( (This)->lpVtbl -> put_MaxItemCount(This,count) )
    ( (This)->lpVtbl -> get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> get_DownloadStatus(This,status) )
    ( (This)->lpVtbl -> get_LastDownloadError(This,error) )
    ( (This)->lpVtbl -> Merge(This,feedXml,feedUrl) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,feedUrl) )
    ( (This)->lpVtbl -> get_IsList(This,isList) )
    ( (This)->lpVtbl -> MarkAllItemsRead(This) )
    ( (This)->lpVtbl -> GetWatcher(This,scope,mask,disp) )
    ( (This)->lpVtbl -> get_UnreadItemCount(This,count) )
    ( (This)->lpVtbl -> get_ItemCount(This,count) )
EXTERN_C const IID IID_IFeed2;
    typedef struct IFeed2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeed2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeed2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeed2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeed2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeed2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeed2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeed2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IFeed2 * This,
                       LONG count,
                       FEEDS_XML_SORT_PROPERTY sortProperty,
                       FEEDS_XML_SORT_ORDER sortOrder,
                       FEEDS_XML_FILTER_FLAGS filterFlags,
                       FEEDS_XML_INCLUDE_FLAGS includeFlags,
                                __RPC__deref_out_opt BSTR *xml);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *name);
                               HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IFeed2 * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Url )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *put_Url )(
            __RPC__in IFeed2 * This,
                       __RPC__in BSTR feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *feedGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *path);
                               HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IFeed2 * This,
                       __RPC__in BSTR newParentPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWriteTime )(
            __RPC__in IFeed2 * This,
                                __RPC__out DATE *lastWrite);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFeed2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Download )(
            __RPC__in IFeed2 * This);
                               HRESULT ( STDMETHODCALLTYPE *AsyncDownload )(
            __RPC__in IFeed2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CancelAsyncDownload )(
            __RPC__in IFeed2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SyncSetting )(
            __RPC__in IFeed2 * This,
                                __RPC__out FEEDS_SYNC_SETTING *syncSetting);
                                        HRESULT ( STDMETHODCALLTYPE *put_SyncSetting )(
            __RPC__in IFeed2 * This,
                       FEEDS_SYNC_SETTING syncSetting);
                                        HRESULT ( STDMETHODCALLTYPE *get_Interval )(
            __RPC__in IFeed2 * This,
                                __RPC__out LONG *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_Interval )(
            __RPC__in IFeed2 * This,
                       LONG minutes);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadTime )(
            __RPC__in IFeed2 * This,
                                __RPC__out DATE *lastDownload);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalEnclosurePath )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_Items )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IFeed2 * This,
                       LONG itemId,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *title);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *get_Link )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *homePage);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *imageUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastBuildDate )(
            __RPC__in IFeed2 * This,
                                __RPC__out DATE *lastBuildDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_PubDate )(
            __RPC__in IFeed2 * This,
                                __RPC__out DATE *lastPopulateDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Ttl )(
            __RPC__in IFeed2 * This,
                                __RPC__out LONG *ttl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Language )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *language);
                                        HRESULT ( STDMETHODCALLTYPE *get_Copyright )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *copyright);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxItemCount )(
            __RPC__in IFeed2 * This,
                                __RPC__out LONG *count);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxItemCount )(
            __RPC__in IFeed2 * This,
                       LONG count);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadEnclosuresAutomatically )(
            __RPC__in IFeed2 * This,
                                __RPC__out VARIANT_BOOL *downloadEnclosuresAutomatically);
                                        HRESULT ( STDMETHODCALLTYPE *put_DownloadEnclosuresAutomatically )(
            __RPC__in IFeed2 * This,
                       VARIANT_BOOL downloadEnclosuresAutomatically);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadStatus )(
            __RPC__in IFeed2 * This,
                                __RPC__out FEEDS_DOWNLOAD_STATUS *status);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadError )(
            __RPC__in IFeed2 * This,
                                __RPC__out FEEDS_DOWNLOAD_ERROR *error);
                               HRESULT ( STDMETHODCALLTYPE *Merge )(
            __RPC__in IFeed2 * This,
                       __RPC__in BSTR feedXml,
                       __RPC__in BSTR feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *feedUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsList )(
            __RPC__in IFeed2 * This,
                                __RPC__out VARIANT_BOOL *isList);
                               HRESULT ( STDMETHODCALLTYPE *MarkAllItemsRead )(
            __RPC__in IFeed2 * This);
                               HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
            __RPC__in IFeed2 * This,
                       FEEDS_EVENTS_SCOPE scope,
                       FEEDS_EVENTS_MASK mask,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_UnreadItemCount )(
            __RPC__in IFeed2 * This,
                                __RPC__out LONG *count);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemCount )(
            __RPC__in IFeed2 * This,
                                __RPC__out LONG *count);
                               HRESULT ( STDMETHODCALLTYPE *GetItemByEffectiveId )(
            __RPC__in IFeed2 * This,
                       LONG itemEffectiveId,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastItemDownloadTime )(
            __RPC__in IFeed2 * This,
                                __RPC__out DATE *lastItemDownloadTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Username )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *username);
                                        HRESULT ( STDMETHODCALLTYPE *get_Password )(
            __RPC__in IFeed2 * This,
                                __RPC__deref_out_opt BSTR *password);
                               HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IFeed2 * This,
                       __RPC__in BSTR username,
                       __RPC__in BSTR password);
                               HRESULT ( STDMETHODCALLTYPE *ClearCredentials )(
            __RPC__in IFeed2 * This);
        END_INTERFACE
    } IFeed2Vtbl;
    interface IFeed2
    {
        CONST_VTBL struct IFeed2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> Rename(This,name) )
    ( (This)->lpVtbl -> get_Url(This,feedUrl) )
    ( (This)->lpVtbl -> put_Url(This,feedUrl) )
    ( (This)->lpVtbl -> get_LocalId(This,feedGuid) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> Move(This,newParentPath) )
    ( (This)->lpVtbl -> get_Parent(This,disp) )
    ( (This)->lpVtbl -> get_LastWriteTime(This,lastWrite) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Download(This) )
    ( (This)->lpVtbl -> AsyncDownload(This) )
    ( (This)->lpVtbl -> CancelAsyncDownload(This) )
    ( (This)->lpVtbl -> get_SyncSetting(This,syncSetting) )
    ( (This)->lpVtbl -> put_SyncSetting(This,syncSetting) )
    ( (This)->lpVtbl -> get_Interval(This,minutes) )
    ( (This)->lpVtbl -> put_Interval(This,minutes) )
    ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
    ( (This)->lpVtbl -> get_LocalEnclosurePath(This,path) )
    ( (This)->lpVtbl -> get_Items(This,disp) )
    ( (This)->lpVtbl -> GetItem(This,itemId,disp) )
    ( (This)->lpVtbl -> get_Title(This,title) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> get_Link(This,homePage) )
    ( (This)->lpVtbl -> get_Image(This,imageUrl) )
    ( (This)->lpVtbl -> get_LastBuildDate(This,lastBuildDate) )
    ( (This)->lpVtbl -> get_PubDate(This,lastPopulateDate) )
    ( (This)->lpVtbl -> get_Ttl(This,ttl) )
    ( (This)->lpVtbl -> get_Language(This,language) )
    ( (This)->lpVtbl -> get_Copyright(This,copyright) )
    ( (This)->lpVtbl -> get_MaxItemCount(This,count) )
    ( (This)->lpVtbl -> put_MaxItemCount(This,count) )
    ( (This)->lpVtbl -> get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
    ( (This)->lpVtbl -> get_DownloadStatus(This,status) )
    ( (This)->lpVtbl -> get_LastDownloadError(This,error) )
    ( (This)->lpVtbl -> Merge(This,feedXml,feedUrl) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,feedUrl) )
    ( (This)->lpVtbl -> get_IsList(This,isList) )
    ( (This)->lpVtbl -> MarkAllItemsRead(This) )
    ( (This)->lpVtbl -> GetWatcher(This,scope,mask,disp) )
    ( (This)->lpVtbl -> get_UnreadItemCount(This,count) )
    ( (This)->lpVtbl -> get_ItemCount(This,count) )
    ( (This)->lpVtbl -> GetItemByEffectiveId(This,itemEffectiveId,disp) )
    ( (This)->lpVtbl -> get_LastItemDownloadTime(This,lastItemDownloadTime) )
    ( (This)->lpVtbl -> get_Username(This,username) )
    ( (This)->lpVtbl -> get_Password(This,password) )
    ( (This)->lpVtbl -> SetCredentials(This,username,password) )
    ( (This)->lpVtbl -> ClearCredentials(This) )
EXTERN_C const IID IID_IFeedEvents;
    typedef struct IFeedEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IFeedEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *FeedDeleted )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedRenamed )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FeedUrlChanged )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedMoved )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path,
                       __RPC__in const BSTR oldPath);
                               HRESULT ( STDMETHODCALLTYPE *FeedDownloading )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *FeedDownloadCompleted )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path,
                       FEEDS_DOWNLOAD_ERROR error);
                               HRESULT ( STDMETHODCALLTYPE *FeedItemCountChanged )(
            __RPC__in IFeedEvents * This,
                       __RPC__in const BSTR path,
                       LONG itemCountType);
        END_INTERFACE
    } IFeedEventsVtbl;
    interface IFeedEvents
    {
        CONST_VTBL struct IFeedEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> FeedDeleted(This,path) )
    ( (This)->lpVtbl -> FeedRenamed(This,path,oldPath) )
    ( (This)->lpVtbl -> FeedUrlChanged(This,path) )
    ( (This)->lpVtbl -> FeedMoved(This,path,oldPath) )
    ( (This)->lpVtbl -> FeedDownloading(This,path) )
    ( (This)->lpVtbl -> FeedDownloadCompleted(This,path,error) )
    ( (This)->lpVtbl -> FeedItemCountChanged(This,path,itemCountType) )
EXTERN_C const IID IID_IFeedItem;
    typedef struct IFeedItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IFeedItem * This,
                       FEEDS_XML_INCLUDE_FLAGS includeFlags,
                                __RPC__deref_out_opt BSTR *xml);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *title);
                                        HRESULT ( STDMETHODCALLTYPE *get_Link )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *linkUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *itemGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *get_PubDate )(
            __RPC__in IFeedItem * This,
                                __RPC__out DATE *pubDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Comments )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *comments);
                                        HRESULT ( STDMETHODCALLTYPE *get_Author )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *author);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enclosure )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRead )(
            __RPC__in IFeedItem * This,
                                __RPC__out VARIANT_BOOL *isRead);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsRead )(
            __RPC__in IFeedItem * This,
                       VARIANT_BOOL isRead);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
            __RPC__in IFeedItem * This,
                                __RPC__out LONG *itemId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFeedItem * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IFeedItem * This,
                                __RPC__deref_out_opt BSTR *itemUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadTime )(
            __RPC__in IFeedItem * This,
                                __RPC__out DATE *lastDownload);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in IFeedItem * This,
                                __RPC__out DATE *modified);
        END_INTERFACE
    } IFeedItemVtbl;
    interface IFeedItem
    {
        CONST_VTBL struct IFeedItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Xml(This,includeFlags,xml) )
    ( (This)->lpVtbl -> get_Title(This,title) )
    ( (This)->lpVtbl -> get_Link(This,linkUrl) )
    ( (This)->lpVtbl -> get_Guid(This,itemGuid) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> get_PubDate(This,pubDate) )
    ( (This)->lpVtbl -> get_Comments(This,comments) )
    ( (This)->lpVtbl -> get_Author(This,author) )
    ( (This)->lpVtbl -> get_Enclosure(This,disp) )
    ( (This)->lpVtbl -> get_IsRead(This,isRead) )
    ( (This)->lpVtbl -> put_IsRead(This,isRead) )
    ( (This)->lpVtbl -> get_LocalId(This,itemId) )
    ( (This)->lpVtbl -> get_Parent(This,disp) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,itemUrl) )
    ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
    ( (This)->lpVtbl -> get_Modified(This,modified) )
EXTERN_C const IID IID_IFeedItem2;
    typedef struct IFeedItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedItem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedItem2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedItem2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedItem2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedItem2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Xml )(
            __RPC__in IFeedItem2 * This,
                       FEEDS_XML_INCLUDE_FLAGS includeFlags,
                                __RPC__deref_out_opt BSTR *xml);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *title);
                                        HRESULT ( STDMETHODCALLTYPE *get_Link )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *linkUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *itemGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *get_PubDate )(
            __RPC__in IFeedItem2 * This,
                                __RPC__out DATE *pubDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Comments )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *comments);
                                        HRESULT ( STDMETHODCALLTYPE *get_Author )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *author);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enclosure )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRead )(
            __RPC__in IFeedItem2 * This,
                                __RPC__out VARIANT_BOOL *isRead);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsRead )(
            __RPC__in IFeedItem2 * This,
                       VARIANT_BOOL isRead);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
            __RPC__in IFeedItem2 * This,
                                __RPC__out LONG *itemId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt IDispatch **disp);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFeedItem2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IFeedItem2 * This,
                                __RPC__deref_out_opt BSTR *itemUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadTime )(
            __RPC__in IFeedItem2 * This,
                                __RPC__out DATE *lastDownload);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in IFeedItem2 * This,
                                __RPC__out DATE *modified);
                                        HRESULT ( STDMETHODCALLTYPE *get_EffectiveId )(
            __RPC__in IFeedItem2 * This,
                                __RPC__out LONG *effectiveId);
        END_INTERFACE
    } IFeedItem2Vtbl;
    interface IFeedItem2
    {
        CONST_VTBL struct IFeedItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Xml(This,includeFlags,xml) )
    ( (This)->lpVtbl -> get_Title(This,title) )
    ( (This)->lpVtbl -> get_Link(This,linkUrl) )
    ( (This)->lpVtbl -> get_Guid(This,itemGuid) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> get_PubDate(This,pubDate) )
    ( (This)->lpVtbl -> get_Comments(This,comments) )
    ( (This)->lpVtbl -> get_Author(This,author) )
    ( (This)->lpVtbl -> get_Enclosure(This,disp) )
    ( (This)->lpVtbl -> get_IsRead(This,isRead) )
    ( (This)->lpVtbl -> put_IsRead(This,isRead) )
    ( (This)->lpVtbl -> get_LocalId(This,itemId) )
    ( (This)->lpVtbl -> get_Parent(This,disp) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,itemUrl) )
    ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
    ( (This)->lpVtbl -> get_Modified(This,modified) )
    ( (This)->lpVtbl -> get_EffectiveId(This,effectiveId) )
EXTERN_C const IID IID_IFeedEnclosure;
    typedef struct IFeedEnclosureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFeedEnclosure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFeedEnclosure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFeedEnclosure * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFeedEnclosure * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFeedEnclosure * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFeedEnclosure * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFeedEnclosure * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Url )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__deref_out_opt BSTR *enclosureUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__deref_out_opt BSTR *mimeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__out LONG *length);
                               HRESULT ( STDMETHODCALLTYPE *AsyncDownload )(
            __RPC__in IFeedEnclosure * This);
                               HRESULT ( STDMETHODCALLTYPE *CancelAsyncDownload )(
            __RPC__in IFeedEnclosure * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadStatus )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__out FEEDS_DOWNLOAD_STATUS *status);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDownloadError )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__out FEEDS_DOWNLOAD_ERROR *error);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalPath )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__deref_out_opt BSTR *localPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__deref_out_opt IDispatch **disp);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__deref_out_opt BSTR *enclosureUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadMimeType )(
            __RPC__in IFeedEnclosure * This,
                                __RPC__deref_out_opt BSTR *mimeType);
                               HRESULT ( STDMETHODCALLTYPE *RemoveFile )(
            __RPC__in IFeedEnclosure * This);
                               HRESULT ( STDMETHODCALLTYPE *SetFile )(
            __RPC__in IFeedEnclosure * This,
                       __RPC__in BSTR downloadUrl,
                       __RPC__in BSTR downloadFilePath,
                       __RPC__in BSTR downloadMimeType,
                       __RPC__in BSTR enclosureFilename);
        END_INTERFACE
    } IFeedEnclosureVtbl;
    interface IFeedEnclosure
    {
        CONST_VTBL struct IFeedEnclosureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Url(This,enclosureUrl) )
    ( (This)->lpVtbl -> get_Type(This,mimeType) )
    ( (This)->lpVtbl -> get_Length(This,length) )
    ( (This)->lpVtbl -> AsyncDownload(This) )
    ( (This)->lpVtbl -> CancelAsyncDownload(This) )
    ( (This)->lpVtbl -> get_DownloadStatus(This,status) )
    ( (This)->lpVtbl -> get_LastDownloadError(This,error) )
    ( (This)->lpVtbl -> get_LocalPath(This,localPath) )
    ( (This)->lpVtbl -> get_Parent(This,disp) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,enclosureUrl) )
    ( (This)->lpVtbl -> get_DownloadMimeType(This,mimeType) )
    ( (This)->lpVtbl -> RemoveFile(This) )
    ( (This)->lpVtbl -> SetFile(This,downloadUrl,downloadFilePath,downloadMimeType,enclosureFilename) )
EXTERN_C const CLSID CLSID_FeedsManager;
class DECLSPEC_UUID("faeb54c4-f66f-4806-83a0-805299f5e3ad")
FeedsManager;
EXTERN_C const CLSID CLSID_FeedFolderWatcher;
class DECLSPEC_UUID("281001ed-7765-4cb0-84af-e9b387af01ff")
FeedFolderWatcher;
EXTERN_C const CLSID CLSID_FeedWatcher;
class DECLSPEC_UUID("18a6737b-f433-4687-89bc-a1b4dfb9f123")
FeedWatcher;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_0011_v0_0_s_ifspec;
}
