#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOfflineFilesEvents IOfflineFilesEvents;
typedef interface IOfflineFilesEvents2 IOfflineFilesEvents2;
typedef interface IOfflineFilesEvents3 IOfflineFilesEvents3;
typedef interface IOfflineFilesEvents4 IOfflineFilesEvents4;
typedef interface IOfflineFilesEventsFilter IOfflineFilesEventsFilter;
typedef interface IOfflineFilesErrorInfo IOfflineFilesErrorInfo;
typedef interface IOfflineFilesSyncErrorItemInfo IOfflineFilesSyncErrorItemInfo;
typedef interface IOfflineFilesSyncErrorInfo IOfflineFilesSyncErrorInfo;
typedef interface IOfflineFilesProgress IOfflineFilesProgress;
typedef interface IOfflineFilesSimpleProgress IOfflineFilesSimpleProgress;
typedef interface IOfflineFilesSyncProgress IOfflineFilesSyncProgress;
typedef interface IOfflineFilesSyncConflictHandler IOfflineFilesSyncConflictHandler;
typedef interface IOfflineFilesItemFilter IOfflineFilesItemFilter;
typedef interface IOfflineFilesItem IOfflineFilesItem;
typedef interface IOfflineFilesServerItem IOfflineFilesServerItem;
typedef interface IOfflineFilesShareItem IOfflineFilesShareItem;
typedef interface IOfflineFilesDirectoryItem IOfflineFilesDirectoryItem;
typedef interface IOfflineFilesFileItem IOfflineFilesFileItem;
typedef interface IEnumOfflineFilesItems IEnumOfflineFilesItems;
typedef interface IOfflineFilesItemContainer IOfflineFilesItemContainer;
typedef interface IOfflineFilesChangeInfo IOfflineFilesChangeInfo;
typedef interface IOfflineFilesDirtyInfo IOfflineFilesDirtyInfo;
typedef interface IOfflineFilesFileSysInfo IOfflineFilesFileSysInfo;
typedef interface IOfflineFilesPinInfo IOfflineFilesPinInfo;
typedef interface IOfflineFilesPinInfo2 IOfflineFilesPinInfo2;
typedef interface IOfflineFilesTransparentCacheInfo IOfflineFilesTransparentCacheInfo;
typedef interface IOfflineFilesGhostInfo IOfflineFilesGhostInfo;
typedef interface IOfflineFilesConnectionInfo IOfflineFilesConnectionInfo;
typedef interface IOfflineFilesShareInfo IOfflineFilesShareInfo;
typedef interface IOfflineFilesSuspend IOfflineFilesSuspend;
typedef interface IOfflineFilesSuspendInfo IOfflineFilesSuspendInfo;
typedef interface IOfflineFilesSetting IOfflineFilesSetting;
typedef interface IEnumOfflineFilesSettings IEnumOfflineFilesSettings;
typedef interface IOfflineFilesCache IOfflineFilesCache;
typedef interface IOfflineFilesCache2 IOfflineFilesCache2;
typedef class OfflineFilesSetting OfflineFilesSetting;
typedef class OfflineFilesCache OfflineFilesCache;
#include "oleidl.h"
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum tagOFFLINEFILES_ITEM_TYPE
    {
        OFFLINEFILES_ITEM_TYPE_FILE = 0,
        OFFLINEFILES_ITEM_TYPE_DIRECTORY = ( OFFLINEFILES_ITEM_TYPE_FILE + 1 ) ,
        OFFLINEFILES_ITEM_TYPE_SHARE = ( OFFLINEFILES_ITEM_TYPE_DIRECTORY + 1 ) ,
        OFFLINEFILES_ITEM_TYPE_SERVER = ( OFFLINEFILES_ITEM_TYPE_SHARE + 1 )
    } OFFLINEFILES_ITEM_TYPE;
typedef
enum tagOFFLINEFILES_ITEM_COPY
    {
        OFFLINEFILES_ITEM_COPY_LOCAL = 0,
        OFFLINEFILES_ITEM_COPY_REMOTE = ( OFFLINEFILES_ITEM_COPY_LOCAL + 1 ) ,
        OFFLINEFILES_ITEM_COPY_ORIGINAL = ( OFFLINEFILES_ITEM_COPY_REMOTE + 1 )
    } OFFLINEFILES_ITEM_COPY;
typedef
enum tagOFFLINEFILES_CONNECT_STATE
    {
        OFFLINEFILES_CONNECT_STATE_UNKNOWN = 0,
        OFFLINEFILES_CONNECT_STATE_OFFLINE = ( OFFLINEFILES_CONNECT_STATE_UNKNOWN + 1 ) ,
        OFFLINEFILES_CONNECT_STATE_ONLINE = ( OFFLINEFILES_CONNECT_STATE_OFFLINE + 1 ) ,
        OFFLINEFILES_CONNECT_STATE_TRANSPARENTLY_CACHED = ( OFFLINEFILES_CONNECT_STATE_ONLINE + 1 ) ,
        OFFLINEFILES_CONNECT_STATE_PARTLY_TRANSPARENTLY_CACHED = ( OFFLINEFILES_CONNECT_STATE_TRANSPARENTLY_CACHED + 1 )
    } OFFLINEFILES_CONNECT_STATE;
typedef
enum tagOFFLINEFILES_OFFLINE_REASON
    {
        OFFLINEFILES_OFFLINE_REASON_UNKNOWN = 0,
        OFFLINEFILES_OFFLINE_REASON_NOT_APPLICABLE = ( OFFLINEFILES_OFFLINE_REASON_UNKNOWN + 1 ) ,
        OFFLINEFILES_OFFLINE_REASON_CONNECTION_FORCED = ( OFFLINEFILES_OFFLINE_REASON_NOT_APPLICABLE + 1 ) ,
        OFFLINEFILES_OFFLINE_REASON_CONNECTION_SLOW = ( OFFLINEFILES_OFFLINE_REASON_CONNECTION_FORCED + 1 ) ,
        OFFLINEFILES_OFFLINE_REASON_CONNECTION_ERROR = ( OFFLINEFILES_OFFLINE_REASON_CONNECTION_SLOW + 1 ) ,
        OFFLINEFILES_OFFLINE_REASON_ITEM_VERSION_CONFLICT = ( OFFLINEFILES_OFFLINE_REASON_CONNECTION_ERROR + 1 ) ,
        OFFLINEFILES_OFFLINE_REASON_ITEM_SUSPENDED = ( OFFLINEFILES_OFFLINE_REASON_ITEM_VERSION_CONFLICT + 1 )
    } OFFLINEFILES_OFFLINE_REASON;
typedef
enum tagOFFLINEFILES_CACHING_MODE
    {
        OFFLINEFILES_CACHING_MODE_NONE = 0,
        OFFLINEFILES_CACHING_MODE_NOCACHING = ( OFFLINEFILES_CACHING_MODE_NONE + 1 ) ,
        OFFLINEFILES_CACHING_MODE_MANUAL = ( OFFLINEFILES_CACHING_MODE_NOCACHING + 1 ) ,
        OFFLINEFILES_CACHING_MODE_AUTO_DOC = ( OFFLINEFILES_CACHING_MODE_MANUAL + 1 ) ,
        OFFLINEFILES_CACHING_MODE_AUTO_PROGANDDOC = ( OFFLINEFILES_CACHING_MODE_AUTO_DOC + 1 )
    } OFFLINEFILES_CACHING_MODE;
typedef
enum tagOFFLINEFILES_OP_RESPONSE
    {
        OFFLINEFILES_OP_CONTINUE = 0,
        OFFLINEFILES_OP_RETRY = ( OFFLINEFILES_OP_CONTINUE + 1 ) ,
        OFFLINEFILES_OP_ABORT = ( OFFLINEFILES_OP_RETRY + 1 )
    } OFFLINEFILES_OP_RESPONSE;
typedef
enum tagOFFLINEFILES_EVENTS
    {
        OFFLINEFILES_EVENT_CACHEMOVED = 0,
        OFFLINEFILES_EVENT_CACHEISFULL = ( OFFLINEFILES_EVENT_CACHEMOVED + 1 ) ,
        OFFLINEFILES_EVENT_CACHEISCORRUPTED = ( OFFLINEFILES_EVENT_CACHEISFULL + 1 ) ,
        OFFLINEFILES_EVENT_ENABLED = ( OFFLINEFILES_EVENT_CACHEISCORRUPTED + 1 ) ,
        OFFLINEFILES_EVENT_ENCRYPTIONCHANGED = ( OFFLINEFILES_EVENT_ENABLED + 1 ) ,
        OFFLINEFILES_EVENT_SYNCBEGIN = ( OFFLINEFILES_EVENT_ENCRYPTIONCHANGED + 1 ) ,
        OFFLINEFILES_EVENT_SYNCFILERESULT = ( OFFLINEFILES_EVENT_SYNCBEGIN + 1 ) ,
        OFFLINEFILES_EVENT_SYNCCONFLICTRECADDED = ( OFFLINEFILES_EVENT_SYNCFILERESULT + 1 ) ,
        OFFLINEFILES_EVENT_SYNCCONFLICTRECUPDATED = ( OFFLINEFILES_EVENT_SYNCCONFLICTRECADDED + 1 ) ,
        OFFLINEFILES_EVENT_SYNCCONFLICTRECREMOVED = ( OFFLINEFILES_EVENT_SYNCCONFLICTRECUPDATED + 1 ) ,
        OFFLINEFILES_EVENT_SYNCEND = ( OFFLINEFILES_EVENT_SYNCCONFLICTRECREMOVED + 1 ) ,
        OFFLINEFILES_EVENT_BACKGROUNDSYNCBEGIN = ( OFFLINEFILES_EVENT_SYNCEND + 1 ) ,
        OFFLINEFILES_EVENT_BACKGROUNDSYNCEND = ( OFFLINEFILES_EVENT_BACKGROUNDSYNCBEGIN + 1 ) ,
        OFFLINEFILES_EVENT_NETTRANSPORTARRIVED = ( OFFLINEFILES_EVENT_BACKGROUNDSYNCEND + 1 ) ,
        OFFLINEFILES_EVENT_NONETTRANSPORTS = ( OFFLINEFILES_EVENT_NETTRANSPORTARRIVED + 1 ) ,
        OFFLINEFILES_EVENT_ITEMDISCONNECTED = ( OFFLINEFILES_EVENT_NONETTRANSPORTS + 1 ) ,
        OFFLINEFILES_EVENT_ITEMRECONNECTED = ( OFFLINEFILES_EVENT_ITEMDISCONNECTED + 1 ) ,
        OFFLINEFILES_EVENT_ITEMAVAILABLEOFFLINE = ( OFFLINEFILES_EVENT_ITEMRECONNECTED + 1 ) ,
        OFFLINEFILES_EVENT_ITEMNOTAVAILABLEOFFLINE = ( OFFLINEFILES_EVENT_ITEMAVAILABLEOFFLINE + 1 ) ,
        OFFLINEFILES_EVENT_ITEMPINNED = ( OFFLINEFILES_EVENT_ITEMNOTAVAILABLEOFFLINE + 1 ) ,
        OFFLINEFILES_EVENT_ITEMNOTPINNED = ( OFFLINEFILES_EVENT_ITEMPINNED + 1 ) ,
        OFFLINEFILES_EVENT_ITEMMODIFIED = ( OFFLINEFILES_EVENT_ITEMNOTPINNED + 1 ) ,
        OFFLINEFILES_EVENT_ITEMADDEDTOCACHE = ( OFFLINEFILES_EVENT_ITEMMODIFIED + 1 ) ,
        OFFLINEFILES_EVENT_ITEMDELETEDFROMCACHE = ( OFFLINEFILES_EVENT_ITEMADDEDTOCACHE + 1 ) ,
        OFFLINEFILES_EVENT_ITEMRENAMED = ( OFFLINEFILES_EVENT_ITEMDELETEDFROMCACHE + 1 ) ,
        OFFLINEFILES_EVENT_DATALOST = ( OFFLINEFILES_EVENT_ITEMRENAMED + 1 ) ,
        OFFLINEFILES_EVENT_PING = ( OFFLINEFILES_EVENT_DATALOST + 1 ) ,
        OFFLINEFILES_EVENT_ITEMRECONNECTBEGIN = ( OFFLINEFILES_EVENT_PING + 1 ) ,
        OFFLINEFILES_EVENT_ITEMRECONNECTEND = ( OFFLINEFILES_EVENT_ITEMRECONNECTBEGIN + 1 ) ,
        OFFLINEFILES_EVENT_CACHEEVICTBEGIN = ( OFFLINEFILES_EVENT_ITEMRECONNECTEND + 1 ) ,
        OFFLINEFILES_EVENT_CACHEEVICTEND = ( OFFLINEFILES_EVENT_CACHEEVICTBEGIN + 1 ) ,
        OFFLINEFILES_EVENT_POLICYCHANGEDETECTED = ( OFFLINEFILES_EVENT_CACHEEVICTEND + 1 ) ,
        OFFLINEFILES_EVENT_PREFERENCECHANGEDETECTED = ( OFFLINEFILES_EVENT_POLICYCHANGEDETECTED + 1 ) ,
        OFFLINEFILES_EVENT_SETTINGSCHANGESAPPLIED = ( OFFLINEFILES_EVENT_PREFERENCECHANGEDETECTED + 1 ) ,
        OFFLINEFILES_EVENT_TRANSPARENTCACHEITEMNOTIFY = ( OFFLINEFILES_EVENT_SETTINGSCHANGESAPPLIED + 1 ) ,
        OFFLINEFILES_EVENT_PREFETCHFILEBEGIN = ( OFFLINEFILES_EVENT_TRANSPARENTCACHEITEMNOTIFY + 1 ) ,
        OFFLINEFILES_EVENT_PREFETCHFILEEND = ( OFFLINEFILES_EVENT_PREFETCHFILEBEGIN + 1 ) ,
        OFFLINEFILES_EVENT_PREFETCHCLOSEHANDLEBEGIN = ( OFFLINEFILES_EVENT_PREFETCHFILEEND + 1 ) ,
        OFFLINEFILES_EVENT_PREFETCHCLOSEHANDLEEND = ( OFFLINEFILES_EVENT_PREFETCHCLOSEHANDLEBEGIN + 1 ) ,
        OFFLINEFILES_NUM_EVENTS = ( OFFLINEFILES_EVENT_PREFETCHCLOSEHANDLEEND + 1 )
    } OFFLINEFILES_EVENTS;
typedef
enum tagOFFLINEFILES_PATHFILTER_MATCH
    {
        OFFLINEFILES_PATHFILTER_SELF = 0,
        OFFLINEFILES_PATHFILTER_CHILD = ( OFFLINEFILES_PATHFILTER_SELF + 1 ) ,
        OFFLINEFILES_PATHFILTER_DESCENDENT = ( OFFLINEFILES_PATHFILTER_CHILD + 1 ) ,
        OFFLINEFILES_PATHFILTER_SELFORCHILD = ( OFFLINEFILES_PATHFILTER_DESCENDENT + 1 ) ,
        OFFLINEFILES_PATHFILTER_SELFORDESCENDENT = ( OFFLINEFILES_PATHFILTER_SELFORCHILD + 1 )
    } OFFLINEFILES_PATHFILTER_MATCH;
typedef
enum tagOFFLINEFILES_SYNC_CONFLICT_RESOLVE
    {
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_NONE = 0,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPLOCAL = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_NONE + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPREMOTE = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPLOCAL + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPALLCHANGES = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPREMOTE + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPLATEST = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPALLCHANGES + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_LOG = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_KEEPLATEST + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_SKIP = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_LOG + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_ABORT = ( OFFLINEFILES_SYNC_CONFLICT_RESOLVE_SKIP + 1 ) ,
        OFFLINEFILES_SYNC_CONFLICT_RESOLVE_NUMCODES = ( OFFLINEFILES_SYNC_CONFLICT_ABORT + 1 )
    } OFFLINEFILES_SYNC_CONFLICT_RESOLVE;
typedef
enum tagOFFLINEFILES_ITEM_TIME
    {
        OFFLINEFILES_ITEM_TIME_CREATION = 0,
        OFFLINEFILES_ITEM_TIME_LASTACCESS = ( OFFLINEFILES_ITEM_TIME_CREATION + 1 ) ,
        OFFLINEFILES_ITEM_TIME_LASTWRITE = ( OFFLINEFILES_ITEM_TIME_LASTACCESS + 1 )
    } OFFLINEFILES_ITEM_TIME;
typedef
enum tagOFFLINEFILES_COMPARE
    {
        OFFLINEFILES_COMPARE_EQ = 0,
        OFFLINEFILES_COMPARE_NEQ = ( OFFLINEFILES_COMPARE_EQ + 1 ) ,
        OFFLINEFILES_COMPARE_LT = ( OFFLINEFILES_COMPARE_NEQ + 1 ) ,
        OFFLINEFILES_COMPARE_GT = ( OFFLINEFILES_COMPARE_LT + 1 ) ,
        OFFLINEFILES_COMPARE_LTE = ( OFFLINEFILES_COMPARE_GT + 1 ) ,
        OFFLINEFILES_COMPARE_GTE = ( OFFLINEFILES_COMPARE_LTE + 1 )
    } OFFLINEFILES_COMPARE;
typedef
enum tagOFFLINEFILES_SETTING_VALUE_TYPE
    {
        OFFLINEFILES_SETTING_VALUE_UI4 = 0,
        OFFLINEFILES_SETTING_VALUE_BSTR = ( OFFLINEFILES_SETTING_VALUE_UI4 + 1 ) ,
        OFFLINEFILES_SETTING_VALUE_BSTR_DBLNULTERM = ( OFFLINEFILES_SETTING_VALUE_BSTR + 1 ) ,
        OFFLINEFILES_SETTING_VALUE_2DIM_ARRAY_BSTR_UI4 = ( OFFLINEFILES_SETTING_VALUE_BSTR_DBLNULTERM + 1 ) ,
        OFFLINEFILES_SETTING_VALUE_2DIM_ARRAY_BSTR_BSTR = ( OFFLINEFILES_SETTING_VALUE_2DIM_ARRAY_BSTR_UI4 + 1 )
    } OFFLINEFILES_SETTING_VALUE_TYPE;
typedef
enum tagOFFLINEFILES_SYNC_OPERATION
    {
        OFFLINEFILES_SYNC_OPERATION_CREATE_COPY_ON_SERVER = 0,
        OFFLINEFILES_SYNC_OPERATION_CREATE_COPY_ON_CLIENT = ( OFFLINEFILES_SYNC_OPERATION_CREATE_COPY_ON_SERVER + 1 ) ,
        OFFLINEFILES_SYNC_OPERATION_SYNC_TO_SERVER = ( OFFLINEFILES_SYNC_OPERATION_CREATE_COPY_ON_CLIENT + 1 ) ,
        OFFLINEFILES_SYNC_OPERATION_SYNC_TO_CLIENT = ( OFFLINEFILES_SYNC_OPERATION_SYNC_TO_SERVER + 1 ) ,
        OFFLINEFILES_SYNC_OPERATION_DELETE_SERVER_COPY = ( OFFLINEFILES_SYNC_OPERATION_SYNC_TO_CLIENT + 1 ) ,
        OFFLINEFILES_SYNC_OPERATION_DELETE_CLIENT_COPY = ( OFFLINEFILES_SYNC_OPERATION_DELETE_SERVER_COPY + 1 ) ,
        OFFLINEFILES_SYNC_OPERATION_PIN = ( OFFLINEFILES_SYNC_OPERATION_DELETE_CLIENT_COPY + 1 ) ,
        OFFLINEFILES_SYNC_OPERATION_PREPARE = ( OFFLINEFILES_SYNC_OPERATION_PIN + 1 )
    } OFFLINEFILES_SYNC_OPERATION;
typedef
enum tagOFFLINEFILES_SYNC_STATE
    {
        OFFLINEFILES_SYNC_STATE_Stable = 0,
        OFFLINEFILES_SYNC_STATE_FileOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_Stable + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileOnClient_NoServerCopy = ( OFFLINEFILES_SYNC_STATE_FileOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirOnClient_FileOnServer = ( OFFLINEFILES_SYNC_STATE_FileOnClient_NoServerCopy + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirOnClient_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DirOnClient_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirOnClient_NoServerCopy = ( OFFLINEFILES_SYNC_STATE_DirOnClient_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_NoServerCopy = ( OFFLINEFILES_SYNC_STATE_DirOnClient_NoServerCopy + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_NoServerCopy + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_FileOnServer = ( OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_DeletedOnServer = ( OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileChangedOnClient_ChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileCreatedOnClient_DeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileChangedOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_FileChangedOnClient_ChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileChangedOnClient_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileChangedOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileChangedOnClient_DeletedOnServer = ( OFFLINEFILES_SYNC_STATE_FileChangedOnClient_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileSparseOnClient_ChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileChangedOnClient_DeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileSparseOnClient_DeletedOnServer = ( OFFLINEFILES_SYNC_STATE_FileSparseOnClient_ChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileSparseOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_FileSparseOnClient_DeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileSparseOnClient_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileSparseOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_NoServerCopy = ( OFFLINEFILES_SYNC_STATE_FileSparseOnClient_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_NoServerCopy + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_FileOnServer = ( OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_DeletedOnServer = ( OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirChangedOnClient_FileOnServer = ( OFFLINEFILES_SYNC_STATE_DirCreatedOnClient_DeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirChangedOnClient_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DirChangedOnClient_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirChangedOnClient_ChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DirChangedOnClient_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirChangedOnClient_DeletedOnServer = ( OFFLINEFILES_SYNC_STATE_DirChangedOnClient_ChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_NoClientCopy_FileOnServer = ( OFFLINEFILES_SYNC_STATE_DirChangedOnClient_DeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_NoClientCopy_DirOnServer = ( OFFLINEFILES_SYNC_STATE_NoClientCopy_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_NoClientCopy_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_NoClientCopy_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_NoClientCopy_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_NoClientCopy_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DeletedOnClient_FileOnServer = ( OFFLINEFILES_SYNC_STATE_NoClientCopy_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DeletedOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_DeletedOnClient_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DeletedOnClient_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DeletedOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DeletedOnClient_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DeletedOnClient_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileSparseOnClient = ( OFFLINEFILES_SYNC_STATE_DeletedOnClient_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileChangedOnClient = ( OFFLINEFILES_SYNC_STATE_FileSparseOnClient + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileRenamedOnClient = ( OFFLINEFILES_SYNC_STATE_FileChangedOnClient + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirSparseOnClient = ( OFFLINEFILES_SYNC_STATE_FileRenamedOnClient + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirChangedOnClient = ( OFFLINEFILES_SYNC_STATE_DirSparseOnClient + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirRenamedOnClient = ( OFFLINEFILES_SYNC_STATE_DirChangedOnClient + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_DirRenamedOnClient + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileRenamedOnServer = ( OFFLINEFILES_SYNC_STATE_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileDeletedOnServer = ( OFFLINEFILES_SYNC_STATE_FileRenamedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileDeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirRenamedOnServer = ( OFFLINEFILES_SYNC_STATE_DirChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_DirDeletedOnServer = ( OFFLINEFILES_SYNC_STATE_DirRenamedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_FileOnServer = ( OFFLINEFILES_SYNC_STATE_DirDeletedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_FileChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_FileOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_DirOnServer = ( OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_FileChangedOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_DirChangedOnServer = ( OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_DirOnServer + 1 ) ,
        OFFLINEFILES_SYNC_STATE_NUMSTATES = ( OFFLINEFILES_SYNC_STATE_FileReplacedAndDeletedOnClient_DirChangedOnServer + 1 )
    } OFFLINEFILES_SYNC_STATE;
extern RPC_IF_HANDLE __MIDL_itf_cscobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cscobj_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IOfflineFilesEvents;
    typedef struct IOfflineFilesEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *CacheMoved )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath);
        HRESULT ( STDMETHODCALLTYPE *CacheIsFull )(
            __RPC__in IOfflineFilesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *CacheIsCorrupted )(
            __RPC__in IOfflineFilesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Enabled )(
            __RPC__in IOfflineFilesEvents * This,
                       BOOL bEnabled);
        HRESULT ( STDMETHODCALLTYPE *EncryptionChanged )(
            __RPC__in IOfflineFilesEvents * This,
                       BOOL bWasEncrypted,
                       BOOL bWasPartial,
                       BOOL bIsEncrypted,
                       BOOL bIsPartial);
        HRESULT ( STDMETHODCALLTYPE *SyncBegin )(
            __RPC__in IOfflineFilesEvents * This,
                       __RPC__in REFGUID rSyncId);
        HRESULT ( STDMETHODCALLTYPE *SyncFileResult )(
            __RPC__in IOfflineFilesEvents * This,
                       __RPC__in REFGUID rSyncId,
                               __RPC__in_string LPCWSTR pszFile,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecAdded )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecUpdated )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecRemoved )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncEnd )(
            __RPC__in IOfflineFilesEvents * This,
                       __RPC__in REFGUID rSyncId,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *NetTransportArrived )(
            __RPC__in IOfflineFilesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *NoNetTransports )(
            __RPC__in IOfflineFilesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *ItemDisconnected )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnected )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemAvailableOffline )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotAvailableOffline )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemPinned )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotPinned )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemModified )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType,
                       BOOL bModifiedData,
                       BOOL bModifiedAttributes);
        HRESULT ( STDMETHODCALLTYPE *ItemAddedToCache )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemDeletedFromCache )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemRenamed )(
            __RPC__in IOfflineFilesEvents * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *DataLost )(
            __RPC__in IOfflineFilesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in IOfflineFilesEvents * This);
        END_INTERFACE
    } IOfflineFilesEventsVtbl;
    interface IOfflineFilesEvents
    {
        CONST_VTBL struct IOfflineFilesEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CacheMoved(This,pszOldPath,pszNewPath) )
    ( (This)->lpVtbl -> CacheIsFull(This) )
    ( (This)->lpVtbl -> CacheIsCorrupted(This) )
    ( (This)->lpVtbl -> Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> EncryptionChanged(This,bWasEncrypted,bWasPartial,bIsEncrypted,bIsPartial) )
    ( (This)->lpVtbl -> SyncBegin(This,rSyncId) )
    ( (This)->lpVtbl -> SyncFileResult(This,rSyncId,pszFile,hrResult) )
    ( (This)->lpVtbl -> SyncConflictRecAdded(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecUpdated(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecRemoved(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncEnd(This,rSyncId,hrResult) )
    ( (This)->lpVtbl -> NetTransportArrived(This) )
    ( (This)->lpVtbl -> NoNetTransports(This) )
    ( (This)->lpVtbl -> ItemDisconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemReconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemModified(This,pszPath,ItemType,bModifiedData,bModifiedAttributes) )
    ( (This)->lpVtbl -> ItemAddedToCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemDeletedFromCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemRenamed(This,pszOldPath,pszNewPath,ItemType) )
    ( (This)->lpVtbl -> DataLost(This) )
    ( (This)->lpVtbl -> Ping(This) )
EXTERN_C const IID IID_IOfflineFilesEvents2;
    typedef struct IOfflineFilesEvents2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesEvents2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesEvents2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheMoved )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath);
        HRESULT ( STDMETHODCALLTYPE *CacheIsFull )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheIsCorrupted )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *Enabled )(
            __RPC__in IOfflineFilesEvents2 * This,
                       BOOL bEnabled);
        HRESULT ( STDMETHODCALLTYPE *EncryptionChanged )(
            __RPC__in IOfflineFilesEvents2 * This,
                       BOOL bWasEncrypted,
                       BOOL bWasPartial,
                       BOOL bIsEncrypted,
                       BOOL bIsPartial);
        HRESULT ( STDMETHODCALLTYPE *SyncBegin )(
            __RPC__in IOfflineFilesEvents2 * This,
                       __RPC__in REFGUID rSyncId);
        HRESULT ( STDMETHODCALLTYPE *SyncFileResult )(
            __RPC__in IOfflineFilesEvents2 * This,
                       __RPC__in REFGUID rSyncId,
                               __RPC__in_string LPCWSTR pszFile,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecAdded )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecUpdated )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecRemoved )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncEnd )(
            __RPC__in IOfflineFilesEvents2 * This,
                       __RPC__in REFGUID rSyncId,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *NetTransportArrived )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *NoNetTransports )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemDisconnected )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnected )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemAvailableOffline )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotAvailableOffline )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemPinned )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotPinned )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemModified )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType,
                       BOOL bModifiedData,
                       BOOL bModifiedAttributes);
        HRESULT ( STDMETHODCALLTYPE *ItemAddedToCache )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemDeletedFromCache )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemRenamed )(
            __RPC__in IOfflineFilesEvents2 * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *DataLost )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnectBegin )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnectEnd )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheEvictBegin )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheEvictEnd )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncBegin )(
            __RPC__in IOfflineFilesEvents2 * This,
                       DWORD dwSyncControlFlags);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncEnd )(
            __RPC__in IOfflineFilesEvents2 * This,
                       DWORD dwSyncControlFlags);
        HRESULT ( STDMETHODCALLTYPE *PolicyChangeDetected )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *PreferenceChangeDetected )(
            __RPC__in IOfflineFilesEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *SettingsChangesApplied )(
            __RPC__in IOfflineFilesEvents2 * This);
        END_INTERFACE
    } IOfflineFilesEvents2Vtbl;
    interface IOfflineFilesEvents2
    {
        CONST_VTBL struct IOfflineFilesEvents2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CacheMoved(This,pszOldPath,pszNewPath) )
    ( (This)->lpVtbl -> CacheIsFull(This) )
    ( (This)->lpVtbl -> CacheIsCorrupted(This) )
    ( (This)->lpVtbl -> Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> EncryptionChanged(This,bWasEncrypted,bWasPartial,bIsEncrypted,bIsPartial) )
    ( (This)->lpVtbl -> SyncBegin(This,rSyncId) )
    ( (This)->lpVtbl -> SyncFileResult(This,rSyncId,pszFile,hrResult) )
    ( (This)->lpVtbl -> SyncConflictRecAdded(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecUpdated(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecRemoved(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncEnd(This,rSyncId,hrResult) )
    ( (This)->lpVtbl -> NetTransportArrived(This) )
    ( (This)->lpVtbl -> NoNetTransports(This) )
    ( (This)->lpVtbl -> ItemDisconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemReconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemModified(This,pszPath,ItemType,bModifiedData,bModifiedAttributes) )
    ( (This)->lpVtbl -> ItemAddedToCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemDeletedFromCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemRenamed(This,pszOldPath,pszNewPath,ItemType) )
    ( (This)->lpVtbl -> DataLost(This) )
    ( (This)->lpVtbl -> Ping(This) )
    ( (This)->lpVtbl -> ItemReconnectBegin(This) )
    ( (This)->lpVtbl -> ItemReconnectEnd(This) )
    ( (This)->lpVtbl -> CacheEvictBegin(This) )
    ( (This)->lpVtbl -> CacheEvictEnd(This) )
    ( (This)->lpVtbl -> BackgroundSyncBegin(This,dwSyncControlFlags) )
    ( (This)->lpVtbl -> BackgroundSyncEnd(This,dwSyncControlFlags) )
    ( (This)->lpVtbl -> PolicyChangeDetected(This) )
    ( (This)->lpVtbl -> PreferenceChangeDetected(This) )
    ( (This)->lpVtbl -> SettingsChangesApplied(This) )
EXTERN_C const IID IID_IOfflineFilesEvents3;
    typedef struct IOfflineFilesEvents3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesEvents3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesEvents3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheMoved )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath);
        HRESULT ( STDMETHODCALLTYPE *CacheIsFull )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheIsCorrupted )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *Enabled )(
            __RPC__in IOfflineFilesEvents3 * This,
                       BOOL bEnabled);
        HRESULT ( STDMETHODCALLTYPE *EncryptionChanged )(
            __RPC__in IOfflineFilesEvents3 * This,
                       BOOL bWasEncrypted,
                       BOOL bWasPartial,
                       BOOL bIsEncrypted,
                       BOOL bIsPartial);
        HRESULT ( STDMETHODCALLTYPE *SyncBegin )(
            __RPC__in IOfflineFilesEvents3 * This,
                       __RPC__in REFGUID rSyncId);
        HRESULT ( STDMETHODCALLTYPE *SyncFileResult )(
            __RPC__in IOfflineFilesEvents3 * This,
                       __RPC__in REFGUID rSyncId,
                               __RPC__in_string LPCWSTR pszFile,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecAdded )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecUpdated )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecRemoved )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncEnd )(
            __RPC__in IOfflineFilesEvents3 * This,
                       __RPC__in REFGUID rSyncId,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *NetTransportArrived )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *NoNetTransports )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemDisconnected )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnected )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemAvailableOffline )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotAvailableOffline )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemPinned )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotPinned )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemModified )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType,
                       BOOL bModifiedData,
                       BOOL bModifiedAttributes);
        HRESULT ( STDMETHODCALLTYPE *ItemAddedToCache )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemDeletedFromCache )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemRenamed )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *DataLost )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnectBegin )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnectEnd )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheEvictBegin )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheEvictEnd )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncBegin )(
            __RPC__in IOfflineFilesEvents3 * This,
                       DWORD dwSyncControlFlags);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncEnd )(
            __RPC__in IOfflineFilesEvents3 * This,
                       DWORD dwSyncControlFlags);
        HRESULT ( STDMETHODCALLTYPE *PolicyChangeDetected )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *PreferenceChangeDetected )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *SettingsChangesApplied )(
            __RPC__in IOfflineFilesEvents3 * This);
        HRESULT ( STDMETHODCALLTYPE *TransparentCacheItemNotify )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_EVENTS EventType,
                       OFFLINEFILES_ITEM_TYPE ItemType,
                       BOOL bModifiedData,
                       BOOL bModifiedAttributes,
                               __RPC__in_string LPCWSTR pzsOldPath);
        HRESULT ( STDMETHODCALLTYPE *PrefetchFileBegin )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *PrefetchFileEnd )(
            __RPC__in IOfflineFilesEvents3 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       HRESULT hrResult);
        END_INTERFACE
    } IOfflineFilesEvents3Vtbl;
    interface IOfflineFilesEvents3
    {
        CONST_VTBL struct IOfflineFilesEvents3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CacheMoved(This,pszOldPath,pszNewPath) )
    ( (This)->lpVtbl -> CacheIsFull(This) )
    ( (This)->lpVtbl -> CacheIsCorrupted(This) )
    ( (This)->lpVtbl -> Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> EncryptionChanged(This,bWasEncrypted,bWasPartial,bIsEncrypted,bIsPartial) )
    ( (This)->lpVtbl -> SyncBegin(This,rSyncId) )
    ( (This)->lpVtbl -> SyncFileResult(This,rSyncId,pszFile,hrResult) )
    ( (This)->lpVtbl -> SyncConflictRecAdded(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecUpdated(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecRemoved(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncEnd(This,rSyncId,hrResult) )
    ( (This)->lpVtbl -> NetTransportArrived(This) )
    ( (This)->lpVtbl -> NoNetTransports(This) )
    ( (This)->lpVtbl -> ItemDisconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemReconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemModified(This,pszPath,ItemType,bModifiedData,bModifiedAttributes) )
    ( (This)->lpVtbl -> ItemAddedToCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemDeletedFromCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemRenamed(This,pszOldPath,pszNewPath,ItemType) )
    ( (This)->lpVtbl -> DataLost(This) )
    ( (This)->lpVtbl -> Ping(This) )
    ( (This)->lpVtbl -> ItemReconnectBegin(This) )
    ( (This)->lpVtbl -> ItemReconnectEnd(This) )
    ( (This)->lpVtbl -> CacheEvictBegin(This) )
    ( (This)->lpVtbl -> CacheEvictEnd(This) )
    ( (This)->lpVtbl -> BackgroundSyncBegin(This,dwSyncControlFlags) )
    ( (This)->lpVtbl -> BackgroundSyncEnd(This,dwSyncControlFlags) )
    ( (This)->lpVtbl -> PolicyChangeDetected(This) )
    ( (This)->lpVtbl -> PreferenceChangeDetected(This) )
    ( (This)->lpVtbl -> SettingsChangesApplied(This) )
    ( (This)->lpVtbl -> TransparentCacheItemNotify(This,pszPath,EventType,ItemType,bModifiedData,bModifiedAttributes,pzsOldPath) )
    ( (This)->lpVtbl -> PrefetchFileBegin(This,pszPath) )
    ( (This)->lpVtbl -> PrefetchFileEnd(This,pszPath,hrResult) )
EXTERN_C const IID IID_IOfflineFilesEvents4;
    typedef struct IOfflineFilesEvents4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesEvents4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesEvents4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheMoved )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath);
        HRESULT ( STDMETHODCALLTYPE *CacheIsFull )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheIsCorrupted )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *Enabled )(
            __RPC__in IOfflineFilesEvents4 * This,
                       BOOL bEnabled);
        HRESULT ( STDMETHODCALLTYPE *EncryptionChanged )(
            __RPC__in IOfflineFilesEvents4 * This,
                       BOOL bWasEncrypted,
                       BOOL bWasPartial,
                       BOOL bIsEncrypted,
                       BOOL bIsPartial);
        HRESULT ( STDMETHODCALLTYPE *SyncBegin )(
            __RPC__in IOfflineFilesEvents4 * This,
                       __RPC__in REFGUID rSyncId);
        HRESULT ( STDMETHODCALLTYPE *SyncFileResult )(
            __RPC__in IOfflineFilesEvents4 * This,
                       __RPC__in REFGUID rSyncId,
                               __RPC__in_string LPCWSTR pszFile,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecAdded )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecUpdated )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncConflictRecRemoved )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszConflictPath,
                       __RPC__in const FILETIME *pftConflictDateTime,
                       OFFLINEFILES_SYNC_STATE ConflictSyncState);
        HRESULT ( STDMETHODCALLTYPE *SyncEnd )(
            __RPC__in IOfflineFilesEvents4 * This,
                       __RPC__in REFGUID rSyncId,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *NetTransportArrived )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *NoNetTransports )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemDisconnected )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnected )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemAvailableOffline )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotAvailableOffline )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemPinned )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemNotPinned )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemModified )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType,
                       BOOL bModifiedData,
                       BOOL bModifiedAttributes);
        HRESULT ( STDMETHODCALLTYPE *ItemAddedToCache )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemDeletedFromCache )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *ItemRenamed )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszOldPath,
                               __RPC__in_string LPCWSTR pszNewPath,
                       OFFLINEFILES_ITEM_TYPE ItemType);
        HRESULT ( STDMETHODCALLTYPE *DataLost )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnectBegin )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *ItemReconnectEnd )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheEvictBegin )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *CacheEvictEnd )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncBegin )(
            __RPC__in IOfflineFilesEvents4 * This,
                       DWORD dwSyncControlFlags);
        HRESULT ( STDMETHODCALLTYPE *BackgroundSyncEnd )(
            __RPC__in IOfflineFilesEvents4 * This,
                       DWORD dwSyncControlFlags);
        HRESULT ( STDMETHODCALLTYPE *PolicyChangeDetected )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *PreferenceChangeDetected )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *SettingsChangesApplied )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *TransparentCacheItemNotify )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       OFFLINEFILES_EVENTS EventType,
                       OFFLINEFILES_ITEM_TYPE ItemType,
                       BOOL bModifiedData,
                       BOOL bModifiedAttributes,
                               __RPC__in_string LPCWSTR pzsOldPath);
        HRESULT ( STDMETHODCALLTYPE *PrefetchFileBegin )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *PrefetchFileEnd )(
            __RPC__in IOfflineFilesEvents4 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *PrefetchCloseHandleBegin )(
            __RPC__in IOfflineFilesEvents4 * This);
        HRESULT ( STDMETHODCALLTYPE *PrefetchCloseHandleEnd )(
            __RPC__in IOfflineFilesEvents4 * This,
                       DWORD dwClosedHandleCount,
                       DWORD dwOpenHandleCount,
                       HRESULT hrResult);
        END_INTERFACE
    } IOfflineFilesEvents4Vtbl;
    interface IOfflineFilesEvents4
    {
        CONST_VTBL struct IOfflineFilesEvents4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CacheMoved(This,pszOldPath,pszNewPath) )
    ( (This)->lpVtbl -> CacheIsFull(This) )
    ( (This)->lpVtbl -> CacheIsCorrupted(This) )
    ( (This)->lpVtbl -> Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> EncryptionChanged(This,bWasEncrypted,bWasPartial,bIsEncrypted,bIsPartial) )
    ( (This)->lpVtbl -> SyncBegin(This,rSyncId) )
    ( (This)->lpVtbl -> SyncFileResult(This,rSyncId,pszFile,hrResult) )
    ( (This)->lpVtbl -> SyncConflictRecAdded(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecUpdated(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncConflictRecRemoved(This,pszConflictPath,pftConflictDateTime,ConflictSyncState) )
    ( (This)->lpVtbl -> SyncEnd(This,rSyncId,hrResult) )
    ( (This)->lpVtbl -> NetTransportArrived(This) )
    ( (This)->lpVtbl -> NoNetTransports(This) )
    ( (This)->lpVtbl -> ItemDisconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemReconnected(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotAvailableOffline(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemNotPinned(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemModified(This,pszPath,ItemType,bModifiedData,bModifiedAttributes) )
    ( (This)->lpVtbl -> ItemAddedToCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemDeletedFromCache(This,pszPath,ItemType) )
    ( (This)->lpVtbl -> ItemRenamed(This,pszOldPath,pszNewPath,ItemType) )
    ( (This)->lpVtbl -> DataLost(This) )
    ( (This)->lpVtbl -> Ping(This) )
    ( (This)->lpVtbl -> ItemReconnectBegin(This) )
    ( (This)->lpVtbl -> ItemReconnectEnd(This) )
    ( (This)->lpVtbl -> CacheEvictBegin(This) )
    ( (This)->lpVtbl -> CacheEvictEnd(This) )
    ( (This)->lpVtbl -> BackgroundSyncBegin(This,dwSyncControlFlags) )
    ( (This)->lpVtbl -> BackgroundSyncEnd(This,dwSyncControlFlags) )
    ( (This)->lpVtbl -> PolicyChangeDetected(This) )
    ( (This)->lpVtbl -> PreferenceChangeDetected(This) )
    ( (This)->lpVtbl -> SettingsChangesApplied(This) )
    ( (This)->lpVtbl -> TransparentCacheItemNotify(This,pszPath,EventType,ItemType,bModifiedData,bModifiedAttributes,pzsOldPath) )
    ( (This)->lpVtbl -> PrefetchFileBegin(This,pszPath) )
    ( (This)->lpVtbl -> PrefetchFileEnd(This,pszPath,hrResult) )
    ( (This)->lpVtbl -> PrefetchCloseHandleBegin(This) )
    ( (This)->lpVtbl -> PrefetchCloseHandleEnd(This,dwClosedHandleCount,dwOpenHandleCount,hrResult) )
EXTERN_C const IID IID_IOfflineFilesEventsFilter;
    typedef struct IOfflineFilesEventsFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesEventsFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesEventsFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesEventsFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetPathFilter )(
            __RPC__in IOfflineFilesEventsFilter * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszFilter,
                        __RPC__out OFFLINEFILES_PATHFILTER_MATCH *pMatch);
        HRESULT ( STDMETHODCALLTYPE *GetIncludedEvents )(
            __RPC__in IOfflineFilesEventsFilter * This,
                       ULONG cElements,
                                            __RPC__out_ecount_part(cElements, *pcEvents) OFFLINEFILES_EVENTS *prgEvents,
                        __RPC__out ULONG *pcEvents);
        HRESULT ( STDMETHODCALLTYPE *GetExcludedEvents )(
            __RPC__in IOfflineFilesEventsFilter * This,
                       ULONG cElements,
                                            __RPC__out_ecount_part(cElements, *pcEvents) OFFLINEFILES_EVENTS *prgEvents,
                        __RPC__out ULONG *pcEvents);
        END_INTERFACE
    } IOfflineFilesEventsFilterVtbl;
    interface IOfflineFilesEventsFilter
    {
        CONST_VTBL struct IOfflineFilesEventsFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPathFilter(This,ppszFilter,pMatch) )
    ( (This)->lpVtbl -> GetIncludedEvents(This,cElements,prgEvents,pcEvents) )
    ( (This)->lpVtbl -> GetExcludedEvents(This,cElements,prgEvents,pcEvents) )
EXTERN_C const IID IID_IOfflineFilesErrorInfo;
    typedef struct IOfflineFilesErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetRawData )(
            __RPC__in IOfflineFilesErrorInfo * This,
                        __RPC__deref_out_opt BYTE_BLOB **ppBlob);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IOfflineFilesErrorInfo * This,
                        __RPC__deref_out_opt LPWSTR *ppszDescription);
        END_INTERFACE
    } IOfflineFilesErrorInfoVtbl;
    interface IOfflineFilesErrorInfo
    {
        CONST_VTBL struct IOfflineFilesErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRawData(This,ppBlob) )
    ( (This)->lpVtbl -> GetDescription(This,ppszDescription) )
EXTERN_C const IID IID_IOfflineFilesSyncErrorItemInfo;
    typedef struct IOfflineFilesSyncErrorItemInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSyncErrorItemInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSyncErrorItemInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSyncErrorItemInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetFileAttributes )(
            __RPC__in IOfflineFilesSyncErrorItemInfo * This,
                        __RPC__out DWORD *pdwAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetFileTimes )(
            __RPC__in IOfflineFilesSyncErrorItemInfo * This,
                        __RPC__out FILETIME *pftLastWrite,
                        __RPC__out FILETIME *pftChange);
        HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            __RPC__in IOfflineFilesSyncErrorItemInfo * This,
                        __RPC__out LARGE_INTEGER *pSize);
        END_INTERFACE
    } IOfflineFilesSyncErrorItemInfoVtbl;
    interface IOfflineFilesSyncErrorItemInfo
    {
        CONST_VTBL struct IOfflineFilesSyncErrorItemInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFileAttributes(This,pdwAttributes) )
    ( (This)->lpVtbl -> GetFileTimes(This,pftLastWrite,pftChange) )
    ( (This)->lpVtbl -> GetFileSize(This,pSize) )
EXTERN_C const IID IID_IOfflineFilesSyncErrorInfo;
    typedef struct IOfflineFilesSyncErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSyncErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSyncErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetRawData )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__deref_out_opt BYTE_BLOB **ppBlob);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__deref_out_opt LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetSyncOperation )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__out OFFLINEFILES_SYNC_OPERATION *pSyncOp);
        HRESULT ( STDMETHODCALLTYPE *GetItemChangeFlags )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__out DWORD *pdwItemChangeFlags);
        HRESULT ( STDMETHODCALLTYPE *InfoEnumerated )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__out BOOL *pbLocalEnumerated,
                        __RPC__out BOOL *pbRemoteEnumerated,
                        __RPC__out BOOL *pbOriginalEnumerated);
        HRESULT ( STDMETHODCALLTYPE *InfoAvailable )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__out BOOL *pbLocalInfo,
                        __RPC__out BOOL *pbRemoteInfo,
                        __RPC__out BOOL *pbOriginalInfo);
        HRESULT ( STDMETHODCALLTYPE *GetLocalInfo )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__deref_out_opt IOfflineFilesSyncErrorItemInfo **ppInfo);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteInfo )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__deref_out_opt IOfflineFilesSyncErrorItemInfo **ppInfo);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalInfo )(
            __RPC__in IOfflineFilesSyncErrorInfo * This,
                        __RPC__deref_out_opt IOfflineFilesSyncErrorItemInfo **ppInfo);
        END_INTERFACE
    } IOfflineFilesSyncErrorInfoVtbl;
    interface IOfflineFilesSyncErrorInfo
    {
        CONST_VTBL struct IOfflineFilesSyncErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRawData(This,ppBlob) )
    ( (This)->lpVtbl -> GetDescription(This,ppszDescription) )
    ( (This)->lpVtbl -> GetSyncOperation(This,pSyncOp) )
    ( (This)->lpVtbl -> GetItemChangeFlags(This,pdwItemChangeFlags) )
    ( (This)->lpVtbl -> InfoEnumerated(This,pbLocalEnumerated,pbRemoteEnumerated,pbOriginalEnumerated) )
    ( (This)->lpVtbl -> InfoAvailable(This,pbLocalInfo,pbRemoteInfo,pbOriginalInfo) )
    ( (This)->lpVtbl -> GetLocalInfo(This,ppInfo) )
    ( (This)->lpVtbl -> GetRemoteInfo(This,ppInfo) )
    ( (This)->lpVtbl -> GetOriginalInfo(This,ppInfo) )
EXTERN_C const IID IID_IOfflineFilesProgress;
    typedef struct IOfflineFilesProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesProgress * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IOfflineFilesProgress * This,
                        __RPC__out BOOL *pbAbort);
        HRESULT ( STDMETHODCALLTYPE *QueryAbort )(
            __RPC__in IOfflineFilesProgress * This,
                        __RPC__out BOOL *pbAbort);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IOfflineFilesProgress * This,
                       HRESULT hrResult);
        END_INTERFACE
    } IOfflineFilesProgressVtbl;
    interface IOfflineFilesProgress
    {
        CONST_VTBL struct IOfflineFilesProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This,pbAbort) )
    ( (This)->lpVtbl -> QueryAbort(This,pbAbort) )
    ( (This)->lpVtbl -> End(This,hrResult) )
EXTERN_C const IID IID_IOfflineFilesSimpleProgress;
    typedef struct IOfflineFilesSimpleProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSimpleProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSimpleProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSimpleProgress * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IOfflineFilesSimpleProgress * This,
                        __RPC__out BOOL *pbAbort);
        HRESULT ( STDMETHODCALLTYPE *QueryAbort )(
            __RPC__in IOfflineFilesSimpleProgress * This,
                        __RPC__out BOOL *pbAbort);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IOfflineFilesSimpleProgress * This,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *ItemBegin )(
            __RPC__in IOfflineFilesSimpleProgress * This,
                               __RPC__in_string LPCWSTR pszFile,
                        __RPC__out OFFLINEFILES_OP_RESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *ItemResult )(
            __RPC__in IOfflineFilesSimpleProgress * This,
                               __RPC__in_string LPCWSTR pszFile,
                       HRESULT hrResult,
                        __RPC__out OFFLINEFILES_OP_RESPONSE *pResponse);
        END_INTERFACE
    } IOfflineFilesSimpleProgressVtbl;
    interface IOfflineFilesSimpleProgress
    {
        CONST_VTBL struct IOfflineFilesSimpleProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This,pbAbort) )
    ( (This)->lpVtbl -> QueryAbort(This,pbAbort) )
    ( (This)->lpVtbl -> End(This,hrResult) )
    ( (This)->lpVtbl -> ItemBegin(This,pszFile,pResponse) )
    ( (This)->lpVtbl -> ItemResult(This,pszFile,hrResult,pResponse) )
EXTERN_C const IID IID_IOfflineFilesSyncProgress;
    typedef struct IOfflineFilesSyncProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSyncProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSyncProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSyncProgress * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IOfflineFilesSyncProgress * This,
                        __RPC__out BOOL *pbAbort);
        HRESULT ( STDMETHODCALLTYPE *QueryAbort )(
            __RPC__in IOfflineFilesSyncProgress * This,
                        __RPC__out BOOL *pbAbort);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IOfflineFilesSyncProgress * This,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *SyncItemBegin )(
            __RPC__in IOfflineFilesSyncProgress * This,
                               __RPC__in_string LPCWSTR pszFile,
                        __RPC__out OFFLINEFILES_OP_RESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *SyncItemResult )(
            __RPC__in IOfflineFilesSyncProgress * This,
                               __RPC__in_string LPCWSTR pszFile,
                       HRESULT hrResult,
                       __RPC__in_opt IOfflineFilesSyncErrorInfo *pErrorInfo,
                        __RPC__out OFFLINEFILES_OP_RESPONSE *pResponse);
        END_INTERFACE
    } IOfflineFilesSyncProgressVtbl;
    interface IOfflineFilesSyncProgress
    {
        CONST_VTBL struct IOfflineFilesSyncProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This,pbAbort) )
    ( (This)->lpVtbl -> QueryAbort(This,pbAbort) )
    ( (This)->lpVtbl -> End(This,hrResult) )
    ( (This)->lpVtbl -> SyncItemBegin(This,pszFile,pResponse) )
    ( (This)->lpVtbl -> SyncItemResult(This,pszFile,hrResult,pErrorInfo,pResponse) )
EXTERN_C const IID IID_IOfflineFilesSyncConflictHandler;
    typedef struct IOfflineFilesSyncConflictHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSyncConflictHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSyncConflictHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSyncConflictHandler * This);
        HRESULT ( STDMETHODCALLTYPE *ResolveConflict )(
            __RPC__in IOfflineFilesSyncConflictHandler * This,
                               __RPC__in_string LPCWSTR pszPath,
                       DWORD fStateKnown,
                       OFFLINEFILES_SYNC_STATE state,
                       DWORD fChangeDetails,
                        __RPC__out OFFLINEFILES_SYNC_CONFLICT_RESOLVE *pConflictResolution,
                                __RPC__deref_out_opt_string LPWSTR *ppszNewName);
        END_INTERFACE
    } IOfflineFilesSyncConflictHandlerVtbl;
    interface IOfflineFilesSyncConflictHandler
    {
        CONST_VTBL struct IOfflineFilesSyncConflictHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResolveConflict(This,pszPath,fStateKnown,state,fChangeDetails,pConflictResolution,ppszNewName) )
EXTERN_C const IID IID_IOfflineFilesItemFilter;
    typedef struct IOfflineFilesItemFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesItemFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesItemFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesItemFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetFilterFlags )(
            __RPC__in IOfflineFilesItemFilter * This,
                        __RPC__out ULONGLONG *pullFlags,
                        __RPC__out ULONGLONG *pullMask);
        HRESULT ( STDMETHODCALLTYPE *GetTimeFilter )(
            __RPC__in IOfflineFilesItemFilter * This,
                        __RPC__out FILETIME *pftTime,
                        __RPC__out BOOL *pbEvalTimeOfDay,
                        __RPC__out OFFLINEFILES_ITEM_TIME *pTimeType,
                        __RPC__out OFFLINEFILES_COMPARE *pCompare);
        HRESULT ( STDMETHODCALLTYPE *GetPatternFilter )(
            __RPC__in IOfflineFilesItemFilter * This,
                                         __RPC__out_ecount_full_string(cchPattern) LPWSTR pszPattern,
                       ULONG cchPattern);
        END_INTERFACE
    } IOfflineFilesItemFilterVtbl;
    interface IOfflineFilesItemFilter
    {
        CONST_VTBL struct IOfflineFilesItemFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFilterFlags(This,pullFlags,pullMask) )
    ( (This)->lpVtbl -> GetTimeFilter(This,pftTime,pbEvalTimeOfDay,pTimeType,pCompare) )
    ( (This)->lpVtbl -> GetPatternFilter(This,pszPattern,cchPattern) )
EXTERN_C const IID IID_IOfflineFilesItem;
    typedef struct IOfflineFilesItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IOfflineFilesItem * This,
                        __RPC__out OFFLINEFILES_ITEM_TYPE *pItemType);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOfflineFilesItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IOfflineFilesItem * This,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IOfflineFilesItem * This,
                       DWORD dwQueryFlags);
        HRESULT ( STDMETHODCALLTYPE *IsMarkedForDeletion )(
            __RPC__in IOfflineFilesItem * This,
                        __RPC__out BOOL *pbMarkedForDeletion);
        END_INTERFACE
    } IOfflineFilesItemVtbl;
    interface IOfflineFilesItem
    {
        CONST_VTBL struct IOfflineFilesItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemType(This,pItemType) )
    ( (This)->lpVtbl -> GetPath(This,ppszPath) )
    ( (This)->lpVtbl -> GetParentItem(This,ppItem) )
    ( (This)->lpVtbl -> Refresh(This,dwQueryFlags) )
    ( (This)->lpVtbl -> IsMarkedForDeletion(This,pbMarkedForDeletion) )
EXTERN_C const IID IID_IOfflineFilesServerItem;
    typedef struct IOfflineFilesServerItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesServerItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesServerItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesServerItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IOfflineFilesServerItem * This,
                        __RPC__out OFFLINEFILES_ITEM_TYPE *pItemType);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOfflineFilesServerItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IOfflineFilesServerItem * This,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IOfflineFilesServerItem * This,
                       DWORD dwQueryFlags);
        HRESULT ( STDMETHODCALLTYPE *IsMarkedForDeletion )(
            __RPC__in IOfflineFilesServerItem * This,
                        __RPC__out BOOL *pbMarkedForDeletion);
        END_INTERFACE
    } IOfflineFilesServerItemVtbl;
    interface IOfflineFilesServerItem
    {
        CONST_VTBL struct IOfflineFilesServerItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemType(This,pItemType) )
    ( (This)->lpVtbl -> GetPath(This,ppszPath) )
    ( (This)->lpVtbl -> GetParentItem(This,ppItem) )
    ( (This)->lpVtbl -> Refresh(This,dwQueryFlags) )
    ( (This)->lpVtbl -> IsMarkedForDeletion(This,pbMarkedForDeletion) )
EXTERN_C const IID IID_IOfflineFilesShareItem;
    typedef struct IOfflineFilesShareItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesShareItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesShareItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesShareItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IOfflineFilesShareItem * This,
                        __RPC__out OFFLINEFILES_ITEM_TYPE *pItemType);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOfflineFilesShareItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IOfflineFilesShareItem * This,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IOfflineFilesShareItem * This,
                       DWORD dwQueryFlags);
        HRESULT ( STDMETHODCALLTYPE *IsMarkedForDeletion )(
            __RPC__in IOfflineFilesShareItem * This,
                        __RPC__out BOOL *pbMarkedForDeletion);
        END_INTERFACE
    } IOfflineFilesShareItemVtbl;
    interface IOfflineFilesShareItem
    {
        CONST_VTBL struct IOfflineFilesShareItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemType(This,pItemType) )
    ( (This)->lpVtbl -> GetPath(This,ppszPath) )
    ( (This)->lpVtbl -> GetParentItem(This,ppItem) )
    ( (This)->lpVtbl -> Refresh(This,dwQueryFlags) )
    ( (This)->lpVtbl -> IsMarkedForDeletion(This,pbMarkedForDeletion) )
EXTERN_C const IID IID_IOfflineFilesDirectoryItem;
    typedef struct IOfflineFilesDirectoryItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesDirectoryItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesDirectoryItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesDirectoryItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IOfflineFilesDirectoryItem * This,
                        __RPC__out OFFLINEFILES_ITEM_TYPE *pItemType);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOfflineFilesDirectoryItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IOfflineFilesDirectoryItem * This,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IOfflineFilesDirectoryItem * This,
                       DWORD dwQueryFlags);
        HRESULT ( STDMETHODCALLTYPE *IsMarkedForDeletion )(
            __RPC__in IOfflineFilesDirectoryItem * This,
                        __RPC__out BOOL *pbMarkedForDeletion);
        END_INTERFACE
    } IOfflineFilesDirectoryItemVtbl;
    interface IOfflineFilesDirectoryItem
    {
        CONST_VTBL struct IOfflineFilesDirectoryItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemType(This,pItemType) )
    ( (This)->lpVtbl -> GetPath(This,ppszPath) )
    ( (This)->lpVtbl -> GetParentItem(This,ppItem) )
    ( (This)->lpVtbl -> Refresh(This,dwQueryFlags) )
    ( (This)->lpVtbl -> IsMarkedForDeletion(This,pbMarkedForDeletion) )
EXTERN_C const IID IID_IOfflineFilesFileItem;
    typedef struct IOfflineFilesFileItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesFileItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesFileItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesFileItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IOfflineFilesFileItem * This,
                        __RPC__out OFFLINEFILES_ITEM_TYPE *pItemType);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOfflineFilesFileItem * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IOfflineFilesFileItem * This,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IOfflineFilesFileItem * This,
                       DWORD dwQueryFlags);
        HRESULT ( STDMETHODCALLTYPE *IsMarkedForDeletion )(
            __RPC__in IOfflineFilesFileItem * This,
                        __RPC__out BOOL *pbMarkedForDeletion);
        HRESULT ( STDMETHODCALLTYPE *IsSparse )(
            __RPC__in IOfflineFilesFileItem * This,
                        __RPC__out BOOL *pbIsSparse);
        HRESULT ( STDMETHODCALLTYPE *IsEncrypted )(
            __RPC__in IOfflineFilesFileItem * This,
                        __RPC__out BOOL *pbIsEncrypted);
        END_INTERFACE
    } IOfflineFilesFileItemVtbl;
    interface IOfflineFilesFileItem
    {
        CONST_VTBL struct IOfflineFilesFileItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemType(This,pItemType) )
    ( (This)->lpVtbl -> GetPath(This,ppszPath) )
    ( (This)->lpVtbl -> GetParentItem(This,ppItem) )
    ( (This)->lpVtbl -> Refresh(This,dwQueryFlags) )
    ( (This)->lpVtbl -> IsMarkedForDeletion(This,pbMarkedForDeletion) )
    ( (This)->lpVtbl -> IsSparse(This,pbIsSparse) )
    ( (This)->lpVtbl -> IsEncrypted(This,pbIsEncrypted) )
EXTERN_C const IID IID_IEnumOfflineFilesItems;
    typedef struct IEnumOfflineFilesItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOfflineFilesItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOfflineFilesItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOfflineFilesItems * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumOfflineFilesItems * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IOfflineFilesItem **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOfflineFilesItems * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOfflineFilesItems * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOfflineFilesItems * This,
                        __RPC__deref_out_opt IEnumOfflineFilesItems **ppenum);
        END_INTERFACE
    } IEnumOfflineFilesItemsVtbl;
    interface IEnumOfflineFilesItems
    {
        CONST_VTBL struct IEnumOfflineFilesItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IOfflineFilesItemContainer;
    typedef struct IOfflineFilesItemContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesItemContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesItemContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesItemContainer * This);
        HRESULT ( STDMETHODCALLTYPE *EnumItems )(
            __RPC__in IOfflineFilesItemContainer * This,
                       DWORD dwQueryFlags,
                        __RPC__deref_out_opt IEnumOfflineFilesItems **ppenum);
        HRESULT ( STDMETHODCALLTYPE *EnumItemsEx )(
            __RPC__in IOfflineFilesItemContainer * This,
                               __RPC__in_opt IOfflineFilesItemFilter *pIncludeFileFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pIncludeDirFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pExcludeFileFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pExcludeDirFilter,
                       DWORD dwEnumFlags,
                       DWORD dwQueryFlags,
                        __RPC__deref_out_opt IEnumOfflineFilesItems **ppenum);
        END_INTERFACE
    } IOfflineFilesItemContainerVtbl;
    interface IOfflineFilesItemContainer
    {
        CONST_VTBL struct IOfflineFilesItemContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumItems(This,dwQueryFlags,ppenum) )
    ( (This)->lpVtbl -> EnumItemsEx(This,pIncludeFileFilter,pIncludeDirFilter,pExcludeFileFilter,pExcludeDirFilter,dwEnumFlags,dwQueryFlags,ppenum) )
EXTERN_C const IID IID_IOfflineFilesChangeInfo;
    typedef struct IOfflineFilesChangeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesChangeInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesChangeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesChangeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IOfflineFilesChangeInfo * This,
                        __RPC__out BOOL *pbDirty);
        HRESULT ( STDMETHODCALLTYPE *IsDeletedOffline )(
            __RPC__in IOfflineFilesChangeInfo * This,
                        __RPC__out BOOL *pbDeletedOffline);
        HRESULT ( STDMETHODCALLTYPE *IsCreatedOffline )(
            __RPC__in IOfflineFilesChangeInfo * This,
                        __RPC__out BOOL *pbCreatedOffline);
        HRESULT ( STDMETHODCALLTYPE *IsLocallyModifiedData )(
            __RPC__in IOfflineFilesChangeInfo * This,
                        __RPC__out BOOL *pbLocallyModifiedData);
        HRESULT ( STDMETHODCALLTYPE *IsLocallyModifiedAttributes )(
            __RPC__in IOfflineFilesChangeInfo * This,
                        __RPC__out BOOL *pbLocallyModifiedAttributes);
        HRESULT ( STDMETHODCALLTYPE *IsLocallyModifiedTime )(
            __RPC__in IOfflineFilesChangeInfo * This,
                        __RPC__out BOOL *pbLocallyModifiedTime);
        END_INTERFACE
    } IOfflineFilesChangeInfoVtbl;
    interface IOfflineFilesChangeInfo
    {
        CONST_VTBL struct IOfflineFilesChangeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsDirty(This,pbDirty) )
    ( (This)->lpVtbl -> IsDeletedOffline(This,pbDeletedOffline) )
    ( (This)->lpVtbl -> IsCreatedOffline(This,pbCreatedOffline) )
    ( (This)->lpVtbl -> IsLocallyModifiedData(This,pbLocallyModifiedData) )
    ( (This)->lpVtbl -> IsLocallyModifiedAttributes(This,pbLocallyModifiedAttributes) )
    ( (This)->lpVtbl -> IsLocallyModifiedTime(This,pbLocallyModifiedTime) )
EXTERN_C const IID IID_IOfflineFilesDirtyInfo;
    typedef struct IOfflineFilesDirtyInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesDirtyInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesDirtyInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesDirtyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *LocalDirtyByteCount )(
            __RPC__in IOfflineFilesDirtyInfo * This,
                        __RPC__out LARGE_INTEGER *pDirtyByteCount);
        HRESULT ( STDMETHODCALLTYPE *RemoteDirtyByteCount )(
            __RPC__in IOfflineFilesDirtyInfo * This,
                        __RPC__out LARGE_INTEGER *pDirtyByteCount);
        END_INTERFACE
    } IOfflineFilesDirtyInfoVtbl;
    interface IOfflineFilesDirtyInfo
    {
        CONST_VTBL struct IOfflineFilesDirtyInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LocalDirtyByteCount(This,pDirtyByteCount) )
    ( (This)->lpVtbl -> RemoteDirtyByteCount(This,pDirtyByteCount) )
EXTERN_C const IID IID_IOfflineFilesFileSysInfo;
    typedef struct IOfflineFilesFileSysInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesFileSysInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesFileSysInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesFileSysInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IOfflineFilesFileSysInfo * This,
                       OFFLINEFILES_ITEM_COPY copy,
                        __RPC__out DWORD *pdwAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetTimes )(
            __RPC__in IOfflineFilesFileSysInfo * This,
                       OFFLINEFILES_ITEM_COPY copy,
                        __RPC__out FILETIME *pftCreationTime,
                        __RPC__out FILETIME *pftLastWriteTime,
                        __RPC__out FILETIME *pftChangeTime,
                        __RPC__out FILETIME *pftLastAccessTime);
        HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            __RPC__in IOfflineFilesFileSysInfo * This,
                       OFFLINEFILES_ITEM_COPY copy,
                        __RPC__out LARGE_INTEGER *pSize);
        END_INTERFACE
    } IOfflineFilesFileSysInfoVtbl;
    interface IOfflineFilesFileSysInfo
    {
        CONST_VTBL struct IOfflineFilesFileSysInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttributes(This,copy,pdwAttributes) )
    ( (This)->lpVtbl -> GetTimes(This,copy,pftCreationTime,pftLastWriteTime,pftChangeTime,pftLastAccessTime) )
    ( (This)->lpVtbl -> GetFileSize(This,copy,pSize) )
EXTERN_C const IID IID_IOfflineFilesPinInfo;
    typedef struct IOfflineFilesPinInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesPinInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesPinInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesPinInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsPinned )(
            __RPC__in IOfflineFilesPinInfo * This,
                        __RPC__out BOOL *pbPinned);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForUser )(
            __RPC__in IOfflineFilesPinInfo * This,
                        __RPC__out BOOL *pbPinnedForUser,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForUserByPolicy )(
            __RPC__in IOfflineFilesPinInfo * This,
                        __RPC__out BOOL *pbPinnedForUser,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForComputer )(
            __RPC__in IOfflineFilesPinInfo * This,
                        __RPC__out BOOL *pbPinnedForComputer,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForFolderRedirection )(
            __RPC__in IOfflineFilesPinInfo * This,
                        __RPC__out BOOL *pbPinnedForFolderRedirection,
                        __RPC__out BOOL *pbInherit);
        END_INTERFACE
    } IOfflineFilesPinInfoVtbl;
    interface IOfflineFilesPinInfo
    {
        CONST_VTBL struct IOfflineFilesPinInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsPinned(This,pbPinned) )
    ( (This)->lpVtbl -> IsPinnedForUser(This,pbPinnedForUser,pbInherit) )
    ( (This)->lpVtbl -> IsPinnedForUserByPolicy(This,pbPinnedForUser,pbInherit) )
    ( (This)->lpVtbl -> IsPinnedForComputer(This,pbPinnedForComputer,pbInherit) )
    ( (This)->lpVtbl -> IsPinnedForFolderRedirection(This,pbPinnedForFolderRedirection,pbInherit) )
EXTERN_C const IID IID_IOfflineFilesPinInfo2;
    typedef struct IOfflineFilesPinInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesPinInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesPinInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *IsPinned )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                        __RPC__out BOOL *pbPinned);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForUser )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                        __RPC__out BOOL *pbPinnedForUser,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForUserByPolicy )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                        __RPC__out BOOL *pbPinnedForUser,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForComputer )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                        __RPC__out BOOL *pbPinnedForComputer,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPinnedForFolderRedirection )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                        __RPC__out BOOL *pbPinnedForFolderRedirection,
                        __RPC__out BOOL *pbInherit);
        HRESULT ( STDMETHODCALLTYPE *IsPartlyPinned )(
            __RPC__in IOfflineFilesPinInfo2 * This,
                        __RPC__out BOOL *pbPartlyPinned);
        END_INTERFACE
    } IOfflineFilesPinInfo2Vtbl;
    interface IOfflineFilesPinInfo2
    {
        CONST_VTBL struct IOfflineFilesPinInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsPinned(This,pbPinned) )
    ( (This)->lpVtbl -> IsPinnedForUser(This,pbPinnedForUser,pbInherit) )
    ( (This)->lpVtbl -> IsPinnedForUserByPolicy(This,pbPinnedForUser,pbInherit) )
    ( (This)->lpVtbl -> IsPinnedForComputer(This,pbPinnedForComputer,pbInherit) )
    ( (This)->lpVtbl -> IsPinnedForFolderRedirection(This,pbPinnedForFolderRedirection,pbInherit) )
    ( (This)->lpVtbl -> IsPartlyPinned(This,pbPartlyPinned) )
EXTERN_C const IID IID_IOfflineFilesTransparentCacheInfo;
    typedef struct IOfflineFilesTransparentCacheInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesTransparentCacheInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesTransparentCacheInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesTransparentCacheInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsTransparentlyCached )(
            __RPC__in IOfflineFilesTransparentCacheInfo * This,
                        __RPC__out BOOL *pbTransparentlyCached);
        END_INTERFACE
    } IOfflineFilesTransparentCacheInfoVtbl;
    interface IOfflineFilesTransparentCacheInfo
    {
        CONST_VTBL struct IOfflineFilesTransparentCacheInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsTransparentlyCached(This,pbTransparentlyCached) )
EXTERN_C const IID IID_IOfflineFilesGhostInfo;
    typedef struct IOfflineFilesGhostInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesGhostInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesGhostInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesGhostInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsGhosted )(
            __RPC__in IOfflineFilesGhostInfo * This,
                        __RPC__out BOOL *pbGhosted);
        END_INTERFACE
    } IOfflineFilesGhostInfoVtbl;
    interface IOfflineFilesGhostInfo
    {
        CONST_VTBL struct IOfflineFilesGhostInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsGhosted(This,pbGhosted) )
EXTERN_C const IID IID_IOfflineFilesConnectionInfo;
    typedef struct IOfflineFilesConnectionInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesConnectionInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesConnectionInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesConnectionInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectState )(
            __RPC__in IOfflineFilesConnectionInfo * This,
                        __RPC__out OFFLINEFILES_CONNECT_STATE *pConnectState,
                        __RPC__out OFFLINEFILES_OFFLINE_REASON *pOfflineReason);
        HRESULT ( STDMETHODCALLTYPE *SetConnectState )(
            __RPC__in IOfflineFilesConnectionInfo * This,
                               __RPC__in_opt HWND hwndParent,
                       DWORD dwFlags,
                       OFFLINEFILES_CONNECT_STATE ConnectState);
        HRESULT ( STDMETHODCALLTYPE *TransitionOnline )(
            __RPC__in IOfflineFilesConnectionInfo * This,
                               __RPC__in_opt HWND hwndParent,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *TransitionOffline )(
            __RPC__in IOfflineFilesConnectionInfo * This,
                               __RPC__in_opt HWND hwndParent,
                       DWORD dwFlags,
                       BOOL bForceOpenFilesClosed,
                        __RPC__out BOOL *pbOpenFilesPreventedTransition);
        END_INTERFACE
    } IOfflineFilesConnectionInfoVtbl;
    interface IOfflineFilesConnectionInfo
    {
        CONST_VTBL struct IOfflineFilesConnectionInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnectState(This,pConnectState,pOfflineReason) )
    ( (This)->lpVtbl -> SetConnectState(This,hwndParent,dwFlags,ConnectState) )
    ( (This)->lpVtbl -> TransitionOnline(This,hwndParent,dwFlags) )
    ( (This)->lpVtbl -> TransitionOffline(This,hwndParent,dwFlags,bForceOpenFilesClosed,pbOpenFilesPreventedTransition) )
EXTERN_C const IID IID_IOfflineFilesShareInfo;
    typedef struct IOfflineFilesShareInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesShareInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesShareInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesShareInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetShareItem )(
            __RPC__in IOfflineFilesShareInfo * This,
                        __RPC__deref_out_opt IOfflineFilesShareItem **ppShareItem);
        HRESULT ( STDMETHODCALLTYPE *GetShareCachingMode )(
            __RPC__in IOfflineFilesShareInfo * This,
                        __RPC__out OFFLINEFILES_CACHING_MODE *pCachingMode);
        HRESULT ( STDMETHODCALLTYPE *IsShareDfsJunction )(
            __RPC__in IOfflineFilesShareInfo * This,
                        __RPC__out BOOL *pbIsDfsJunction);
        END_INTERFACE
    } IOfflineFilesShareInfoVtbl;
    interface IOfflineFilesShareInfo
    {
        CONST_VTBL struct IOfflineFilesShareInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetShareItem(This,ppShareItem) )
    ( (This)->lpVtbl -> GetShareCachingMode(This,pCachingMode) )
    ( (This)->lpVtbl -> IsShareDfsJunction(This,pbIsDfsJunction) )
EXTERN_C const IID IID_IOfflineFilesSuspend;
    typedef struct IOfflineFilesSuspendVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSuspend * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSuspend * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSuspend * This);
        HRESULT ( STDMETHODCALLTYPE *SuspendRoot )(
            __RPC__in IOfflineFilesSuspend * This,
                       BOOL bSuspend);
        END_INTERFACE
    } IOfflineFilesSuspendVtbl;
    interface IOfflineFilesSuspend
    {
        CONST_VTBL struct IOfflineFilesSuspendVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SuspendRoot(This,bSuspend) )
EXTERN_C const IID IID_IOfflineFilesSuspendInfo;
    typedef struct IOfflineFilesSuspendInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSuspendInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSuspendInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSuspendInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsSuspended )(
            __RPC__in IOfflineFilesSuspendInfo * This,
                        __RPC__out BOOL *pbSuspended,
                        __RPC__out BOOL *pbSuspendedRoot);
        END_INTERFACE
    } IOfflineFilesSuspendInfoVtbl;
    interface IOfflineFilesSuspendInfo
    {
        CONST_VTBL struct IOfflineFilesSuspendInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSuspended(This,pbSuspended,pbSuspendedRoot) )
EXTERN_C const IID IID_IOfflineFilesSetting;
    typedef struct IOfflineFilesSettingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesSetting * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesSetting * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesSetting * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IOfflineFilesSetting * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetValueType )(
            __RPC__in IOfflineFilesSetting * This,
                        __RPC__out OFFLINEFILES_SETTING_VALUE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *GetPreference )(
            __RPC__in IOfflineFilesSetting * This,
                        __RPC__out VARIANT *pvarValue,
                       DWORD dwScope);
        HRESULT ( STDMETHODCALLTYPE *GetPreferenceScope )(
            __RPC__in IOfflineFilesSetting * This,
                        __RPC__out DWORD *pdwScope);
        HRESULT ( STDMETHODCALLTYPE *SetPreference )(
            __RPC__in IOfflineFilesSetting * This,
                       __RPC__in const VARIANT *pvarValue,
                       DWORD dwScope);
        HRESULT ( STDMETHODCALLTYPE *DeletePreference )(
            __RPC__in IOfflineFilesSetting * This,
                       DWORD dwScope);
        HRESULT ( STDMETHODCALLTYPE *GetPolicy )(
            __RPC__in IOfflineFilesSetting * This,
                        __RPC__out VARIANT *pvarValue,
                       DWORD dwScope);
        HRESULT ( STDMETHODCALLTYPE *GetPolicyScope )(
            __RPC__in IOfflineFilesSetting * This,
                        __RPC__out DWORD *pdwScope);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IOfflineFilesSetting * This,
                        __RPC__out VARIANT *pvarValue,
                        __RPC__out BOOL *pbSetByPolicy);
        END_INTERFACE
    } IOfflineFilesSettingVtbl;
    interface IOfflineFilesSetting
    {
        CONST_VTBL struct IOfflineFilesSettingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,ppszName) )
    ( (This)->lpVtbl -> GetValueType(This,pType) )
    ( (This)->lpVtbl -> GetPreference(This,pvarValue,dwScope) )
    ( (This)->lpVtbl -> GetPreferenceScope(This,pdwScope) )
    ( (This)->lpVtbl -> SetPreference(This,pvarValue,dwScope) )
    ( (This)->lpVtbl -> DeletePreference(This,dwScope) )
    ( (This)->lpVtbl -> GetPolicy(This,pvarValue,dwScope) )
    ( (This)->lpVtbl -> GetPolicyScope(This,pdwScope) )
    ( (This)->lpVtbl -> GetValue(This,pvarValue,pbSetByPolicy) )
EXTERN_C const IID IID_IEnumOfflineFilesSettings;
    typedef struct IEnumOfflineFilesSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOfflineFilesSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOfflineFilesSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOfflineFilesSettings * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumOfflineFilesSettings * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IOfflineFilesSetting **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOfflineFilesSettings * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOfflineFilesSettings * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOfflineFilesSettings * This,
                        __RPC__deref_out_opt IEnumOfflineFilesSettings **ppenum);
        END_INTERFACE
    } IEnumOfflineFilesSettingsVtbl;
    interface IEnumOfflineFilesSettings
    {
        CONST_VTBL struct IEnumOfflineFilesSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IOfflineFilesCache;
    typedef struct IOfflineFilesCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesCache * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesCache * This);
        HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_opt HWND hwndParent,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       BOOL bAsync,
                       DWORD dwSyncControl,
                               __RPC__in_opt IOfflineFilesSyncConflictHandler *pISyncConflictHandler,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress,
                               __RPC__in_opt GUID *pSyncId);
        HRESULT ( STDMETHODCALLTYPE *DeleteItems )(
            __RPC__in IOfflineFilesCache * This,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       DWORD dwFlags,
                       BOOL bAsync,
                               __RPC__in_opt IOfflineFilesSimpleProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *DeleteItemsForUser )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_string LPCWSTR pszUser,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       DWORD dwFlags,
                       BOOL bAsync,
                               __RPC__in_opt IOfflineFilesSimpleProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *Pin )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_opt HWND hwndParent,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       BOOL bDeep,
                       BOOL bAsync,
                       DWORD dwPinControlFlags,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *Unpin )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_opt HWND hwndParent,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       BOOL bDeep,
                       BOOL bAsync,
                       DWORD dwPinControlFlags,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionStatus )(
            __RPC__in IOfflineFilesCache * This,
                        __RPC__out BOOL *pbEncrypted,
                        __RPC__out BOOL *pbPartial);
        HRESULT ( STDMETHODCALLTYPE *Encrypt )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_opt HWND hwndParent,
                       BOOL bEncrypt,
                       DWORD dwEncryptionControlFlags,
                       BOOL bAsync,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *FindItem )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_string LPCWSTR pszPath,
                       DWORD dwQueryFlags,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *FindItemEx )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_string LPCWSTR pszPath,
                               __RPC__in_opt IOfflineFilesItemFilter *pIncludeFileFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pIncludeDirFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pExcludeFileFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pExcludeDirFilter,
                       DWORD dwQueryFlags,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *RenameItem )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_string LPCWSTR pszPathOriginal,
                               __RPC__in_string LPCWSTR pszPathNew,
                       BOOL bReplaceIfExists);
        HRESULT ( STDMETHODCALLTYPE *GetLocation )(
            __RPC__in IOfflineFilesCache * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetDiskSpaceInformation )(
            __RPC__in IOfflineFilesCache * This,
                        __RPC__out ULONGLONG *pcbVolumeTotal,
                        __RPC__out ULONGLONG *pcbLimit,
                        __RPC__out ULONGLONG *pcbUsed,
                        __RPC__out ULONGLONG *pcbUnpinnedLimit,
                        __RPC__out ULONGLONG *pcbUnpinnedUsed);
        HRESULT ( STDMETHODCALLTYPE *SetDiskSpaceLimits )(
            __RPC__in IOfflineFilesCache * This,
                       ULONGLONG cbLimit,
                       ULONGLONG cbUnpinnedLimit);
        HRESULT ( STDMETHODCALLTYPE *ProcessAdminPinPolicy )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_opt IOfflineFilesSyncProgress *pPinProgress,
                               __RPC__in_opt IOfflineFilesSyncProgress *pUnpinProgress);
        HRESULT ( STDMETHODCALLTYPE *GetSettingObject )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_string LPCWSTR pszSettingName,
                        __RPC__deref_out_opt IOfflineFilesSetting **ppSetting);
        HRESULT ( STDMETHODCALLTYPE *EnumSettingObjects )(
            __RPC__in IOfflineFilesCache * This,
                        __RPC__deref_out_opt IEnumOfflineFilesSettings **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *IsPathCacheable )(
            __RPC__in IOfflineFilesCache * This,
                               __RPC__in_string LPCWSTR pszPath,
                        __RPC__out BOOL *pbCacheable,
                        __RPC__out OFFLINEFILES_CACHING_MODE *pShareCachingMode);
        END_INTERFACE
    } IOfflineFilesCacheVtbl;
    interface IOfflineFilesCache
    {
        CONST_VTBL struct IOfflineFilesCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Synchronize(This,hwndParent,rgpszPaths,cPaths,bAsync,dwSyncControl,pISyncConflictHandler,pIProgress,pSyncId) )
    ( (This)->lpVtbl -> DeleteItems(This,rgpszPaths,cPaths,dwFlags,bAsync,pIProgress) )
    ( (This)->lpVtbl -> DeleteItemsForUser(This,pszUser,rgpszPaths,cPaths,dwFlags,bAsync,pIProgress) )
    ( (This)->lpVtbl -> Pin(This,hwndParent,rgpszPaths,cPaths,bDeep,bAsync,dwPinControlFlags,pIProgress) )
    ( (This)->lpVtbl -> Unpin(This,hwndParent,rgpszPaths,cPaths,bDeep,bAsync,dwPinControlFlags,pIProgress) )
    ( (This)->lpVtbl -> GetEncryptionStatus(This,pbEncrypted,pbPartial) )
    ( (This)->lpVtbl -> Encrypt(This,hwndParent,bEncrypt,dwEncryptionControlFlags,bAsync,pIProgress) )
    ( (This)->lpVtbl -> FindItem(This,pszPath,dwQueryFlags,ppItem) )
    ( (This)->lpVtbl -> FindItemEx(This,pszPath,pIncludeFileFilter,pIncludeDirFilter,pExcludeFileFilter,pExcludeDirFilter,dwQueryFlags,ppItem) )
    ( (This)->lpVtbl -> RenameItem(This,pszPathOriginal,pszPathNew,bReplaceIfExists) )
    ( (This)->lpVtbl -> GetLocation(This,ppszPath) )
    ( (This)->lpVtbl -> GetDiskSpaceInformation(This,pcbVolumeTotal,pcbLimit,pcbUsed,pcbUnpinnedLimit,pcbUnpinnedUsed) )
    ( (This)->lpVtbl -> SetDiskSpaceLimits(This,cbLimit,cbUnpinnedLimit) )
    ( (This)->lpVtbl -> ProcessAdminPinPolicy(This,pPinProgress,pUnpinProgress) )
    ( (This)->lpVtbl -> GetSettingObject(This,pszSettingName,ppSetting) )
    ( (This)->lpVtbl -> EnumSettingObjects(This,ppEnum) )
    ( (This)->lpVtbl -> IsPathCacheable(This,pszPath,pbCacheable,pShareCachingMode) )
EXTERN_C const IID IID_IOfflineFilesCache2;
    typedef struct IOfflineFilesCache2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOfflineFilesCache2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOfflineFilesCache2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOfflineFilesCache2 * This);
        HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_opt HWND hwndParent,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       BOOL bAsync,
                       DWORD dwSyncControl,
                               __RPC__in_opt IOfflineFilesSyncConflictHandler *pISyncConflictHandler,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress,
                               __RPC__in_opt GUID *pSyncId);
        HRESULT ( STDMETHODCALLTYPE *DeleteItems )(
            __RPC__in IOfflineFilesCache2 * This,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       DWORD dwFlags,
                       BOOL bAsync,
                               __RPC__in_opt IOfflineFilesSimpleProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *DeleteItemsForUser )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszUser,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       DWORD dwFlags,
                       BOOL bAsync,
                               __RPC__in_opt IOfflineFilesSimpleProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *Pin )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_opt HWND hwndParent,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       BOOL bDeep,
                       BOOL bAsync,
                       DWORD dwPinControlFlags,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *Unpin )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_opt HWND hwndParent,
                                        __RPC__in_ecount_full(cPaths) LPCWSTR *rgpszPaths,
                       ULONG cPaths,
                       BOOL bDeep,
                       BOOL bAsync,
                       DWORD dwPinControlFlags,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionStatus )(
            __RPC__in IOfflineFilesCache2 * This,
                        __RPC__out BOOL *pbEncrypted,
                        __RPC__out BOOL *pbPartial);
        HRESULT ( STDMETHODCALLTYPE *Encrypt )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_opt HWND hwndParent,
                       BOOL bEncrypt,
                       DWORD dwEncryptionControlFlags,
                       BOOL bAsync,
                               __RPC__in_opt IOfflineFilesSyncProgress *pIProgress);
        HRESULT ( STDMETHODCALLTYPE *FindItem )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                       DWORD dwQueryFlags,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *FindItemEx )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                               __RPC__in_opt IOfflineFilesItemFilter *pIncludeFileFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pIncludeDirFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pExcludeFileFilter,
                               __RPC__in_opt IOfflineFilesItemFilter *pExcludeDirFilter,
                       DWORD dwQueryFlags,
                        __RPC__deref_out_opt IOfflineFilesItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *RenameItem )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszPathOriginal,
                               __RPC__in_string LPCWSTR pszPathNew,
                       BOOL bReplaceIfExists);
        HRESULT ( STDMETHODCALLTYPE *GetLocation )(
            __RPC__in IOfflineFilesCache2 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszPath);
        HRESULT ( STDMETHODCALLTYPE *GetDiskSpaceInformation )(
            __RPC__in IOfflineFilesCache2 * This,
                        __RPC__out ULONGLONG *pcbVolumeTotal,
                        __RPC__out ULONGLONG *pcbLimit,
                        __RPC__out ULONGLONG *pcbUsed,
                        __RPC__out ULONGLONG *pcbUnpinnedLimit,
                        __RPC__out ULONGLONG *pcbUnpinnedUsed);
        HRESULT ( STDMETHODCALLTYPE *SetDiskSpaceLimits )(
            __RPC__in IOfflineFilesCache2 * This,
                       ULONGLONG cbLimit,
                       ULONGLONG cbUnpinnedLimit);
        HRESULT ( STDMETHODCALLTYPE *ProcessAdminPinPolicy )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_opt IOfflineFilesSyncProgress *pPinProgress,
                               __RPC__in_opt IOfflineFilesSyncProgress *pUnpinProgress);
        HRESULT ( STDMETHODCALLTYPE *GetSettingObject )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszSettingName,
                        __RPC__deref_out_opt IOfflineFilesSetting **ppSetting);
        HRESULT ( STDMETHODCALLTYPE *EnumSettingObjects )(
            __RPC__in IOfflineFilesCache2 * This,
                        __RPC__deref_out_opt IEnumOfflineFilesSettings **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *IsPathCacheable )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszPath,
                        __RPC__out BOOL *pbCacheable,
                        __RPC__out OFFLINEFILES_CACHING_MODE *pShareCachingMode);
        HRESULT ( STDMETHODCALLTYPE *RenameItemEx )(
            __RPC__in IOfflineFilesCache2 * This,
                               __RPC__in_string LPCWSTR pszPathOriginal,
                               __RPC__in_string LPCWSTR pszPathNew,
                       BOOL bReplaceIfExists);
        END_INTERFACE
    } IOfflineFilesCache2Vtbl;
    interface IOfflineFilesCache2
    {
        CONST_VTBL struct IOfflineFilesCache2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Synchronize(This,hwndParent,rgpszPaths,cPaths,bAsync,dwSyncControl,pISyncConflictHandler,pIProgress,pSyncId) )
    ( (This)->lpVtbl -> DeleteItems(This,rgpszPaths,cPaths,dwFlags,bAsync,pIProgress) )
    ( (This)->lpVtbl -> DeleteItemsForUser(This,pszUser,rgpszPaths,cPaths,dwFlags,bAsync,pIProgress) )
    ( (This)->lpVtbl -> Pin(This,hwndParent,rgpszPaths,cPaths,bDeep,bAsync,dwPinControlFlags,pIProgress) )
    ( (This)->lpVtbl -> Unpin(This,hwndParent,rgpszPaths,cPaths,bDeep,bAsync,dwPinControlFlags,pIProgress) )
    ( (This)->lpVtbl -> GetEncryptionStatus(This,pbEncrypted,pbPartial) )
    ( (This)->lpVtbl -> Encrypt(This,hwndParent,bEncrypt,dwEncryptionControlFlags,bAsync,pIProgress) )
    ( (This)->lpVtbl -> FindItem(This,pszPath,dwQueryFlags,ppItem) )
    ( (This)->lpVtbl -> FindItemEx(This,pszPath,pIncludeFileFilter,pIncludeDirFilter,pExcludeFileFilter,pExcludeDirFilter,dwQueryFlags,ppItem) )
    ( (This)->lpVtbl -> RenameItem(This,pszPathOriginal,pszPathNew,bReplaceIfExists) )
    ( (This)->lpVtbl -> GetLocation(This,ppszPath) )
    ( (This)->lpVtbl -> GetDiskSpaceInformation(This,pcbVolumeTotal,pcbLimit,pcbUsed,pcbUnpinnedLimit,pcbUnpinnedUsed) )
    ( (This)->lpVtbl -> SetDiskSpaceLimits(This,cbLimit,cbUnpinnedLimit) )
    ( (This)->lpVtbl -> ProcessAdminPinPolicy(This,pPinProgress,pUnpinProgress) )
    ( (This)->lpVtbl -> GetSettingObject(This,pszSettingName,ppSetting) )
    ( (This)->lpVtbl -> EnumSettingObjects(This,ppEnum) )
    ( (This)->lpVtbl -> IsPathCacheable(This,pszPath,pbCacheable,pShareCachingMode) )
    ( (This)->lpVtbl -> RenameItemEx(This,pszPathOriginal,pszPathNew,bReplaceIfExists) )
EXTERN_C const IID LIBID_OfflineFilesObjects;
EXTERN_C const CLSID CLSID_OfflineFilesSetting;
class DECLSPEC_UUID("FD3659E9-A920-4123-AD64-7FC76C7AACDF")
OfflineFilesSetting;
EXTERN_C const CLSID CLSID_OfflineFilesCache;
class DECLSPEC_UUID("48C6BE7C-3871-43cc-B46F-1449A1BB2FF3")
OfflineFilesCache;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_cscobj_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cscobj_0000_0036_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
