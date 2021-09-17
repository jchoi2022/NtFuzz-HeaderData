#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IClockVectorElement IClockVectorElement;
typedef interface IFeedClockVectorElement IFeedClockVectorElement;
typedef interface IClockVector IClockVector;
typedef interface IFeedClockVector IFeedClockVector;
typedef interface IEnumClockVector IEnumClockVector;
typedef interface IEnumFeedClockVector IEnumFeedClockVector;
typedef interface ICoreFragment ICoreFragment;
typedef interface ICoreFragmentInspector ICoreFragmentInspector;
typedef interface IRangeException IRangeException;
typedef interface IEnumRangeExceptions IEnumRangeExceptions;
typedef interface ISingleItemException ISingleItemException;
typedef interface IEnumSingleItemExceptions IEnumSingleItemExceptions;
typedef interface IChangeUnitException IChangeUnitException;
typedef interface IEnumChangeUnitExceptions IEnumChangeUnitExceptions;
typedef interface IReplicaKeyMap IReplicaKeyMap;
typedef interface IConstructReplicaKeyMap IConstructReplicaKeyMap;
typedef interface ISyncKnowledge ISyncKnowledge;
typedef interface IForgottenKnowledge IForgottenKnowledge;
typedef interface ISyncKnowledge2 ISyncKnowledge2;
typedef interface IRecoverableErrorData IRecoverableErrorData;
typedef interface IRecoverableError IRecoverableError;
typedef interface IChangeConflict IChangeConflict;
typedef interface IConstraintConflict IConstraintConflict;
typedef interface ISyncCallback ISyncCallback;
typedef interface ISyncCallback2 ISyncCallback2;
typedef interface ISyncConstraintCallback ISyncConstraintCallback;
typedef interface ISyncProvider ISyncProvider;
typedef interface ISyncSessionState ISyncSessionState;
typedef interface ISyncSessionExtendedErrorInfo ISyncSessionExtendedErrorInfo;
typedef interface ISyncSessionState2 ISyncSessionState2;
typedef interface ISyncFilterInfo ISyncFilterInfo;
typedef interface ISyncFilterInfo2 ISyncFilterInfo2;
typedef interface IChangeUnitListFilterInfo IChangeUnitListFilterInfo;
typedef interface ISyncFilter ISyncFilter;
typedef interface ISyncFilterDeserializer ISyncFilterDeserializer;
typedef interface ICustomFilterInfo ICustomFilterInfo;
typedef interface ICombinedFilterInfo ICombinedFilterInfo;
typedef interface IEnumSyncChanges IEnumSyncChanges;
typedef interface ISyncChangeBuilder ISyncChangeBuilder;
typedef interface IFilterTrackingSyncChangeBuilder IFilterTrackingSyncChangeBuilder;
typedef interface ISyncChangeBatchBase ISyncChangeBatchBase;
typedef interface ISyncChangeBatch ISyncChangeBatch;
typedef interface ISyncFullEnumerationChangeBatch ISyncFullEnumerationChangeBatch;
typedef interface ISyncChangeBatchWithPrerequisite ISyncChangeBatchWithPrerequisite;
typedef interface ISyncChangeBatchBase2 ISyncChangeBatchBase2;
typedef interface ISyncChangeBatchAdvanced ISyncChangeBatchAdvanced;
typedef interface ISyncChangeBatch2 ISyncChangeBatch2;
typedef interface ISyncFullEnumerationChangeBatch2 ISyncFullEnumerationChangeBatch2;
typedef interface IKnowledgeSyncProvider IKnowledgeSyncProvider;
typedef interface ISyncChangeUnit ISyncChangeUnit;
typedef interface IEnumSyncChangeUnits IEnumSyncChangeUnits;
typedef interface ISyncChange ISyncChange;
typedef interface ISyncChangeWithPrerequisite ISyncChangeWithPrerequisite;
typedef interface ISyncFullEnumerationChange ISyncFullEnumerationChange;
typedef interface ISyncMergeTombstoneChange ISyncMergeTombstoneChange;
typedef interface IEnumItemIds IEnumItemIds;
typedef interface IFilterKeyMap IFilterKeyMap;
typedef interface ISyncChangeWithFilterKeyMap ISyncChangeWithFilterKeyMap;
typedef interface ISyncChangeBatchWithFilterKeyMap ISyncChangeBatchWithFilterKeyMap;
typedef interface IDataRetrieverCallback IDataRetrieverCallback;
typedef interface ILoadChangeContext ILoadChangeContext;
typedef interface ISynchronousDataRetriever ISynchronousDataRetriever;
typedef interface IAsynchronousDataRetriever IAsynchronousDataRetriever;
typedef interface IFilterRequestCallback IFilterRequestCallback;
typedef interface IRequestFilteredSync IRequestFilteredSync;
typedef interface ISupportFilteredSync ISupportFilteredSync;
typedef interface IFilterTrackingRequestCallback IFilterTrackingRequestCallback;
typedef interface IFilterTrackingProvider IFilterTrackingProvider;
typedef interface ISupportLastWriteTime ISupportLastWriteTime;
typedef interface IProviderConverter IProviderConverter;
typedef interface ISyncDataConverter ISyncDataConverter;
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning ( disable : 28718 )
typedef struct _ID_PARAMETER_PAIR
    {
    BOOL fIsVariable;
    USHORT cbIdSize;
    } ID_PARAMETER_PAIR;
typedef struct _ID_PARAMETERS
    {
    DWORD dwSize;
    ID_PARAMETER_PAIR replicaId;
    ID_PARAMETER_PAIR itemId;
    ID_PARAMETER_PAIR changeUnitId;
    } ID_PARAMETERS;
typedef struct _SYNC_SESSION_STATISTICS
    {
    DWORD dwChangesApplied;
    DWORD dwChangesFailed;
    } SYNC_SESSION_STATISTICS;
typedef struct _SYNC_VERSION
    {
    DWORD dwLastUpdatingReplicaKey;
    ULONGLONG ullTickCount;
    } SYNC_VERSION;
typedef struct _SYNC_RANGE
    {
    BYTE *pbClosedLowerBound;
    BYTE *pbClosedUpperBound;
    } SYNC_RANGE;
typedef struct _SYNC_TIME
    {
    DWORD dwDate;
    DWORD dwTime;
    } SYNC_TIME;
typedef struct _SYNC_FILTER_CHANGE
    {
    BOOL fMoveIn;
    SYNC_VERSION moveVersion;
    } SYNC_FILTER_CHANGE;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0001
    {
        SPR_SOURCE = 0,
        SPR_DESTINATION = ( SPR_SOURCE + 1 )
    } SYNC_PROVIDER_ROLE;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0002
    {
        CRP_NONE = 0,
        CRP_DESTINATION_PROVIDER_WINS = ( CRP_NONE + 1 ) ,
        CRP_SOURCE_PROVIDER_WINS = ( CRP_DESTINATION_PROVIDER_WINS + 1 ) ,
        CRP_LAST = ( CRP_SOURCE_PROVIDER_WINS + 1 )
    } CONFLICT_RESOLUTION_POLICY;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0003
    {
        SPS_CHANGE_DETECTION = 0,
        SPS_CHANGE_ENUMERATION = ( SPS_CHANGE_DETECTION + 1 ) ,
        SPS_CHANGE_APPLICATION = ( SPS_CHANGE_ENUMERATION + 1 )
    } SYNC_PROGRESS_STAGE;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0004
    {
        SFEA_FULL_ENUMERATION = 0,
        SFEA_PARTIAL_SYNC = ( SFEA_FULL_ENUMERATION + 1 ) ,
        SFEA_ABORT = ( SFEA_PARTIAL_SYNC + 1 )
    } SYNC_FULL_ENUMERATION_ACTION;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0005
    {
        SRA_DEFER = 0,
        SRA_ACCEPT_DESTINATION_PROVIDER = ( SRA_DEFER + 1 ) ,
        SRA_ACCEPT_SOURCE_PROVIDER = ( SRA_ACCEPT_DESTINATION_PROVIDER + 1 ) ,
        SRA_MERGE = ( SRA_ACCEPT_SOURCE_PROVIDER + 1 ) ,
        SRA_TRANSFER_AND_DEFER = ( SRA_MERGE + 1 ) ,
        SRA_LAST = ( SRA_TRANSFER_AND_DEFER + 1 )
    } SYNC_RESOLVE_ACTION;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0006
    {
        SYNC_STATISTICS_RANGE_COUNT = 0
    } SYNC_STATISTICS;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0007
    {
        SYNC_SERIALIZATION_VERSION_V1 = 1,
        SYNC_SERIALIZATION_VERSION_V2 = 4,
        SYNC_SERIALIZATION_VERSION_V3 = 5
    } SYNC_SERIALIZATION_VERSION;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0008
    {
        FT_CURRENT_ITEMS_ONLY = 0,
        FT_CURRENT_ITEMS_AND_VERSIONS_FOR_MOVED_OUT_ITEMS = ( FT_CURRENT_ITEMS_ONLY + 1 )
    } FILTERING_TYPE;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0009
    {
        SCRA_DEFER = 0,
        SCRA_ACCEPT_DESTINATION_PROVIDER = ( SCRA_DEFER + 1 ) ,
        SCRA_ACCEPT_SOURCE_PROVIDER = ( SCRA_ACCEPT_DESTINATION_PROVIDER + 1 ) ,
        SCRA_TRANSFER_AND_DEFER = ( SCRA_ACCEPT_SOURCE_PROVIDER + 1 ) ,
        SCRA_MERGE = ( SCRA_TRANSFER_AND_DEFER + 1 ) ,
        SCRA_RENAME_SOURCE = ( SCRA_MERGE + 1 ) ,
        SCRA_RENAME_DESTINATION = ( SCRA_RENAME_SOURCE + 1 )
    } SYNC_CONSTRAINT_RESOLVE_ACTION;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0010
    {
        CCR_OTHER = 0,
        CCR_COLLISION = ( CCR_OTHER + 1 ) ,
        CCR_NOPARENT = ( CCR_COLLISION + 1 ) ,
        CCR_IDENTITY = ( CCR_NOPARENT + 1 )
    } CONSTRAINT_CONFLICT_REASON;
typedef
enum __MIDL___MIDL_itf_winsync_0000_0000_0011
    {
        KCCR_COOKIE_KNOWLEDGE_EQUAL = 0,
        KCCR_COOKIE_KNOWLEDGE_CONTAINED = ( KCCR_COOKIE_KNOWLEDGE_EQUAL + 1 ) ,
        KCCR_COOKIE_KNOWLEDGE_CONTAINS = ( KCCR_COOKIE_KNOWLEDGE_CONTAINED + 1 ) ,
        KCCR_COOKIE_KNOWLEDGE_NOT_COMPARABLE = ( KCCR_COOKIE_KNOWLEDGE_CONTAINS + 1 )
    } KNOWLEDGE_COOKIE_COMPARISON_RESULT;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IClockVectorElement;
    typedef struct IClockVectorElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClockVectorElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClockVectorElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClockVectorElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetReplicaKey )(
            IClockVectorElement * This,
                        DWORD *pdwReplicaKey);
        HRESULT ( STDMETHODCALLTYPE *GetTickCount )(
            IClockVectorElement * This,
                        ULONGLONG *pullTickCount);
        END_INTERFACE
    } IClockVectorElementVtbl;
    interface IClockVectorElement
    {
        CONST_VTBL struct IClockVectorElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetReplicaKey(This,pdwReplicaKey) )
    ( (This)->lpVtbl -> GetTickCount(This,pullTickCount) )
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IFeedClockVectorElement;
    typedef struct IFeedClockVectorElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFeedClockVectorElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFeedClockVectorElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFeedClockVectorElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetReplicaKey )(
            IFeedClockVectorElement * This,
                        DWORD *pdwReplicaKey);
        HRESULT ( STDMETHODCALLTYPE *GetTickCount )(
            IFeedClockVectorElement * This,
                        ULONGLONG *pullTickCount);
        HRESULT ( STDMETHODCALLTYPE *GetSyncTime )(
            IFeedClockVectorElement * This,
                        SYNC_TIME *pSyncTime);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IFeedClockVectorElement * This,
                        BYTE *pbFlags);
        END_INTERFACE
    } IFeedClockVectorElementVtbl;
    interface IFeedClockVectorElement
    {
        CONST_VTBL struct IFeedClockVectorElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetReplicaKey(This,pdwReplicaKey) )
    ( (This)->lpVtbl -> GetTickCount(This,pullTickCount) )
    ( (This)->lpVtbl -> GetSyncTime(This,pSyncTime) )
    ( (This)->lpVtbl -> GetFlags(This,pbFlags) )
EXTERN_C const IID IID_IClockVector;
    typedef struct IClockVectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClockVector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClockVector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClockVector * This);
        HRESULT ( STDMETHODCALLTYPE *GetClockVectorElements )(
            IClockVector * This,
                       REFIID riid,
                                void **ppiEnumClockVector);
        HRESULT ( STDMETHODCALLTYPE *GetClockVectorElementCount )(
            IClockVector * This,
                        DWORD *pdwCount);
        END_INTERFACE
    } IClockVectorVtbl;
    interface IClockVector
    {
        CONST_VTBL struct IClockVectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClockVectorElements(This,riid,ppiEnumClockVector) )
    ( (This)->lpVtbl -> GetClockVectorElementCount(This,pdwCount) )
EXTERN_C const IID IID_IFeedClockVector;
    typedef struct IFeedClockVectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFeedClockVector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFeedClockVector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFeedClockVector * This);
        HRESULT ( STDMETHODCALLTYPE *GetClockVectorElements )(
            IFeedClockVector * This,
                       REFIID riid,
                                void **ppiEnumClockVector);
        HRESULT ( STDMETHODCALLTYPE *GetClockVectorElementCount )(
            IFeedClockVector * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateCount )(
            IFeedClockVector * This,
                        DWORD *pdwUpdateCount);
        HRESULT ( STDMETHODCALLTYPE *IsNoConflictsSpecified )(
            IFeedClockVector * This,
                        BOOL *pfIsNoConflictsSpecified);
        END_INTERFACE
    } IFeedClockVectorVtbl;
    interface IFeedClockVector
    {
        CONST_VTBL struct IFeedClockVectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClockVectorElements(This,riid,ppiEnumClockVector) )
    ( (This)->lpVtbl -> GetClockVectorElementCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetUpdateCount(This,pdwUpdateCount) )
    ( (This)->lpVtbl -> IsNoConflictsSpecified(This,pfIsNoConflictsSpecified) )
EXTERN_C const IID IID_IEnumClockVector;
    typedef struct IEnumClockVectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumClockVector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumClockVector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumClockVector * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumClockVector * This,
                              ULONG cClockVectorElements,
                                            IClockVectorElement **ppiClockVectorElements,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumClockVector * This,
                       ULONG cSyncVersions);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumClockVector * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumClockVector * This,
                        IEnumClockVector **ppiEnum);
        END_INTERFACE
    } IEnumClockVectorVtbl;
    interface IEnumClockVector
    {
        CONST_VTBL struct IEnumClockVectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cClockVectorElements,ppiClockVectorElements,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cSyncVersions) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppiEnum) )
EXTERN_C const IID IID_IEnumFeedClockVector;
    typedef struct IEnumFeedClockVectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumFeedClockVector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumFeedClockVector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumFeedClockVector * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumFeedClockVector * This,
                       ULONG cClockVectorElements,
                                            IFeedClockVectorElement **ppiClockVectorElements,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumFeedClockVector * This,
                       ULONG cSyncVersions);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumFeedClockVector * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumFeedClockVector * This,
                        IEnumFeedClockVector **ppiEnum);
        END_INTERFACE
    } IEnumFeedClockVectorVtbl;
    interface IEnumFeedClockVector
    {
        CONST_VTBL struct IEnumFeedClockVectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cClockVectorElements,ppiClockVectorElements,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cSyncVersions) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppiEnum) )
EXTERN_C const IID IID_ICoreFragment;
    typedef struct ICoreFragmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICoreFragment * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICoreFragment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICoreFragment * This);
        HRESULT ( STDMETHODCALLTYPE *NextColumn )(
            ICoreFragment * This,
                                             BYTE *pChangeUnitId,
                            DWORD *pChangeUnitIdSize);
        HRESULT ( STDMETHODCALLTYPE *NextRange )(
            ICoreFragment * This,
                                             BYTE *pItemId,
                            DWORD *pItemIdSize,
                        IClockVector **piClockVector);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ICoreFragment * This);
        HRESULT ( STDMETHODCALLTYPE *GetColumnCount )(
            ICoreFragment * This,
                        DWORD *pColumnCount);
        HRESULT ( STDMETHODCALLTYPE *GetRangeCount )(
            ICoreFragment * This,
                        DWORD *pRangeCount);
        END_INTERFACE
    } ICoreFragmentVtbl;
    interface ICoreFragment
    {
        CONST_VTBL struct ICoreFragmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NextColumn(This,pChangeUnitId,pChangeUnitIdSize) )
    ( (This)->lpVtbl -> NextRange(This,pItemId,pItemIdSize,piClockVector) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetColumnCount(This,pColumnCount) )
    ( (This)->lpVtbl -> GetRangeCount(This,pRangeCount) )
EXTERN_C const IID IID_ICoreFragmentInspector;
    typedef struct ICoreFragmentInspectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICoreFragmentInspector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICoreFragmentInspector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICoreFragmentInspector * This);
        HRESULT ( STDMETHODCALLTYPE *NextCoreFragments )(
            ICoreFragmentInspector * This,
                       ULONG requestedCount,
                                            ICoreFragment **ppiCoreFragments,
                            ULONG *pFetchedCount);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ICoreFragmentInspector * This);
        END_INTERFACE
    } ICoreFragmentInspectorVtbl;
    interface ICoreFragmentInspector
    {
        CONST_VTBL struct ICoreFragmentInspectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NextCoreFragments(This,requestedCount,ppiCoreFragments,pFetchedCount) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_IRangeException;
    typedef struct IRangeExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRangeException * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRangeException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRangeException * This);
        HRESULT ( STDMETHODCALLTYPE *GetClosedRangeStart )(
            IRangeException * This,
                                             BYTE *pbClosedRangeStart,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetClosedRangeEnd )(
            IRangeException * This,
                                             BYTE *pbClosedRangeEnd,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetClockVector )(
            IRangeException * This,
                       REFIID riid,
                                void **ppUnk);
        END_INTERFACE
    } IRangeExceptionVtbl;
    interface IRangeException
    {
        CONST_VTBL struct IRangeExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClosedRangeStart(This,pbClosedRangeStart,pcbIdSize) )
    ( (This)->lpVtbl -> GetClosedRangeEnd(This,pbClosedRangeEnd,pcbIdSize) )
    ( (This)->lpVtbl -> GetClockVector(This,riid,ppUnk) )
EXTERN_C const IID IID_IEnumRangeExceptions;
    typedef struct IEnumRangeExceptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumRangeExceptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumRangeExceptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumRangeExceptions * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumRangeExceptions * This,
                              ULONG cExceptions,
                                            IRangeException **ppRangeException,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumRangeExceptions * This,
                       ULONG cExceptions);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumRangeExceptions * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumRangeExceptions * This,
                        IEnumRangeExceptions **ppEnum);
        END_INTERFACE
    } IEnumRangeExceptionsVtbl;
    interface IEnumRangeExceptions
    {
        CONST_VTBL struct IEnumRangeExceptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cExceptions,ppRangeException,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cExceptions) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ISingleItemException;
    typedef struct ISingleItemExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISingleItemException * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISingleItemException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISingleItemException * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemId )(
            ISingleItemException * This,
                                             BYTE *pbItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetClockVector )(
            ISingleItemException * This,
                       REFIID riid,
                                void **ppUnk);
        END_INTERFACE
    } ISingleItemExceptionVtbl;
    interface ISingleItemException
    {
        CONST_VTBL struct ISingleItemExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemId(This,pbItemId,pcbIdSize) )
    ( (This)->lpVtbl -> GetClockVector(This,riid,ppUnk) )
EXTERN_C const IID IID_IEnumSingleItemExceptions;
    typedef struct IEnumSingleItemExceptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumSingleItemExceptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumSingleItemExceptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumSingleItemExceptions * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSingleItemExceptions * This,
                              ULONG cExceptions,
                                            ISingleItemException **ppSingleItemException,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumSingleItemExceptions * This,
                       ULONG cExceptions);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumSingleItemExceptions * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumSingleItemExceptions * This,
                        IEnumSingleItemExceptions **ppEnum);
        END_INTERFACE
    } IEnumSingleItemExceptionsVtbl;
    interface IEnumSingleItemExceptions
    {
        CONST_VTBL struct IEnumSingleItemExceptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cExceptions,ppSingleItemException,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cExceptions) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IChangeUnitException;
    typedef struct IChangeUnitExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IChangeUnitException * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IChangeUnitException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IChangeUnitException * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemId )(
            IChangeUnitException * This,
                                             BYTE *pbItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitId )(
            IChangeUnitException * This,
                                             BYTE *pbChangeUnitId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetClockVector )(
            IChangeUnitException * This,
                       REFIID riid,
                                void **ppUnk);
        END_INTERFACE
    } IChangeUnitExceptionVtbl;
    interface IChangeUnitException
    {
        CONST_VTBL struct IChangeUnitExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemId(This,pbItemId,pcbIdSize) )
    ( (This)->lpVtbl -> GetChangeUnitId(This,pbChangeUnitId,pcbIdSize) )
    ( (This)->lpVtbl -> GetClockVector(This,riid,ppUnk) )
EXTERN_C const IID IID_IEnumChangeUnitExceptions;
    typedef struct IEnumChangeUnitExceptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumChangeUnitExceptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumChangeUnitExceptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumChangeUnitExceptions * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumChangeUnitExceptions * This,
                              ULONG cExceptions,
                                            IChangeUnitException **ppChangeUnitException,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumChangeUnitExceptions * This,
                       ULONG cExceptions);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumChangeUnitExceptions * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumChangeUnitExceptions * This,
                        IEnumChangeUnitExceptions **ppEnum);
        END_INTERFACE
    } IEnumChangeUnitExceptionsVtbl;
    interface IEnumChangeUnitExceptions
    {
        CONST_VTBL struct IEnumChangeUnitExceptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cExceptions,ppChangeUnitException,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cExceptions) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IReplicaKeyMap;
    typedef struct IReplicaKeyMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReplicaKeyMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReplicaKeyMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReplicaKeyMap * This);
        HRESULT ( STDMETHODCALLTYPE *LookupReplicaKey )(
            IReplicaKeyMap * This,
                       const BYTE *pbReplicaId,
                        DWORD *pdwReplicaKey);
        HRESULT ( STDMETHODCALLTYPE *LookupReplicaId )(
            IReplicaKeyMap * This,
                       DWORD dwReplicaKey,
                                             BYTE *pbReplicaId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IReplicaKeyMap * This,
                                             BYTE *pbReplicaKeyMap,
                            DWORD *pcbReplicaKeyMap);
        END_INTERFACE
    } IReplicaKeyMapVtbl;
    interface IReplicaKeyMap
    {
        CONST_VTBL struct IReplicaKeyMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LookupReplicaKey(This,pbReplicaId,pdwReplicaKey) )
    ( (This)->lpVtbl -> LookupReplicaId(This,dwReplicaKey,pbReplicaId,pcbIdSize) )
    ( (This)->lpVtbl -> Serialize(This,pbReplicaKeyMap,pcbReplicaKeyMap) )
EXTERN_C const IID IID_IConstructReplicaKeyMap;
    typedef struct IConstructReplicaKeyMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConstructReplicaKeyMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConstructReplicaKeyMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConstructReplicaKeyMap * This);
        HRESULT ( STDMETHODCALLTYPE *FindOrAddReplica )(
            IConstructReplicaKeyMap * This,
                       const BYTE *pbReplicaId,
                        DWORD *pdwReplicaKey);
        END_INTERFACE
    } IConstructReplicaKeyMapVtbl;
    interface IConstructReplicaKeyMap
    {
        CONST_VTBL struct IConstructReplicaKeyMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindOrAddReplica(This,pbReplicaId,pdwReplicaKey) )
EXTERN_C const IID IID_ISyncKnowledge;
    typedef struct ISyncKnowledgeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncKnowledge * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncKnowledge * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncKnowledge * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerReplicaId )(
            ISyncKnowledge * This,
                                             BYTE *pbReplicaId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncKnowledge * This,
                       BOOL fSerializeReplicaKeyMap,
                                             BYTE *pbKnowledge,
                            DWORD *pcbKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLocalTickCount )(
            ISyncKnowledge * This,
                       ULONGLONG ullTickCount);
        HRESULT ( STDMETHODCALLTYPE *ContainsChange )(
            ISyncKnowledge * This,
                       const BYTE *pbVersionOwnerReplicaId,
                       const BYTE *pgidItemId,
                       const SYNC_VERSION *pSyncVersion);
        HRESULT ( STDMETHODCALLTYPE *ContainsChangeUnit )(
            ISyncKnowledge * This,
                       const BYTE *pbVersionOwnerReplicaId,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                       const SYNC_VERSION *pSyncVersion);
        HRESULT ( STDMETHODCALLTYPE *GetScopeVector )(
            ISyncKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetReplicaKeyMap )(
            ISyncKnowledge * This,
                        IReplicaKeyMap **ppReplicaKeyMap);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISyncKnowledge * This,
                        ISyncKnowledge **ppClonedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *ConvertVersion )(
            ISyncKnowledge * This,
                       ISyncKnowledge *pKnowledgeIn,
                       const BYTE *pbCurrentOwnerId,
                       const SYNC_VERSION *pVersionIn,
                               BYTE *pbNewOwnerId,
                            DWORD *pcbIdSize,
                        SYNC_VERSION *pVersionOut);
        HRESULT ( STDMETHODCALLTYPE *MapRemoteToLocal )(
            ISyncKnowledge * This,
                       ISyncKnowledge *pRemoteKnowledge,
                        ISyncKnowledge **ppMappedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *Union )(
            ISyncKnowledge * This,
                       ISyncKnowledge *pKnowledge);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoItem )(
            ISyncKnowledge * This,
                       const BYTE *pbItemId,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoChangeUnit )(
            ISyncKnowledge * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoRange )(
            ISyncKnowledge * This,
                       const SYNC_RANGE *psrngSyncRange,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ExcludeItem )(
            ISyncKnowledge * This,
                       const BYTE *pbItemId);
        HRESULT ( STDMETHODCALLTYPE *ExcludeChangeUnit )(
            ISyncKnowledge * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId);
        HRESULT ( STDMETHODCALLTYPE *ContainsKnowledge )(
            ISyncKnowledge * This,
                       ISyncKnowledge *pKnowledge);
        HRESULT ( STDMETHODCALLTYPE *FindMinTickCountForReplica )(
            ISyncKnowledge * This,
                       const BYTE *pbReplicaId,
                        ULONGLONG *pullReplicaTickCount);
        HRESULT ( STDMETHODCALLTYPE *GetRangeExceptions )(
            ISyncKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetSingleItemExceptions )(
            ISyncKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitExceptions )(
            ISyncKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *FindClockVectorForItem )(
            ISyncKnowledge * This,
                       const BYTE *pbItemId,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *FindClockVectorForChangeUnit )(
            ISyncKnowledge * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            ISyncKnowledge * This,
                        DWORD *pdwVersion);
        END_INTERFACE
    } ISyncKnowledgeVtbl;
    interface ISyncKnowledge
    {
        CONST_VTBL struct ISyncKnowledgeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
    ( (This)->lpVtbl -> Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) )
    ( (This)->lpVtbl -> SetLocalTickCount(This,ullTickCount) )
    ( (This)->lpVtbl -> ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) )
    ( (This)->lpVtbl -> ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) )
    ( (This)->lpVtbl -> GetScopeVector(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetReplicaKeyMap(This,ppReplicaKeyMap) )
    ( (This)->lpVtbl -> Clone(This,ppClonedKnowledge) )
    ( (This)->lpVtbl -> ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) )
    ( (This)->lpVtbl -> MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) )
    ( (This)->lpVtbl -> Union(This,pKnowledge) )
    ( (This)->lpVtbl -> ProjectOntoItem(This,pbItemId,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ExcludeItem(This,pbItemId) )
    ( (This)->lpVtbl -> ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) )
    ( (This)->lpVtbl -> ContainsKnowledge(This,pKnowledge) )
    ( (This)->lpVtbl -> FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) )
    ( (This)->lpVtbl -> GetRangeExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetSingleItemExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetChangeUnitExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> FindClockVectorForItem(This,pbItemId,riid,ppUnk) )
    ( (This)->lpVtbl -> FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
EXTERN_C const IID IID_IForgottenKnowledge;
    typedef struct IForgottenKnowledgeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IForgottenKnowledge * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IForgottenKnowledge * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IForgottenKnowledge * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerReplicaId )(
            IForgottenKnowledge * This,
                                             BYTE *pbReplicaId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IForgottenKnowledge * This,
                       BOOL fSerializeReplicaKeyMap,
                                             BYTE *pbKnowledge,
                            DWORD *pcbKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLocalTickCount )(
            IForgottenKnowledge * This,
                       ULONGLONG ullTickCount);
        HRESULT ( STDMETHODCALLTYPE *ContainsChange )(
            IForgottenKnowledge * This,
                       const BYTE *pbVersionOwnerReplicaId,
                       const BYTE *pgidItemId,
                       const SYNC_VERSION *pSyncVersion);
        HRESULT ( STDMETHODCALLTYPE *ContainsChangeUnit )(
            IForgottenKnowledge * This,
                       const BYTE *pbVersionOwnerReplicaId,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                       const SYNC_VERSION *pSyncVersion);
        HRESULT ( STDMETHODCALLTYPE *GetScopeVector )(
            IForgottenKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetReplicaKeyMap )(
            IForgottenKnowledge * This,
                        IReplicaKeyMap **ppReplicaKeyMap);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IForgottenKnowledge * This,
                        ISyncKnowledge **ppClonedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *ConvertVersion )(
            IForgottenKnowledge * This,
                       ISyncKnowledge *pKnowledgeIn,
                       const BYTE *pbCurrentOwnerId,
                       const SYNC_VERSION *pVersionIn,
                               BYTE *pbNewOwnerId,
                            DWORD *pcbIdSize,
                        SYNC_VERSION *pVersionOut);
        HRESULT ( STDMETHODCALLTYPE *MapRemoteToLocal )(
            IForgottenKnowledge * This,
                       ISyncKnowledge *pRemoteKnowledge,
                        ISyncKnowledge **ppMappedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *Union )(
            IForgottenKnowledge * This,
                       ISyncKnowledge *pKnowledge);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoItem )(
            IForgottenKnowledge * This,
                       const BYTE *pbItemId,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoChangeUnit )(
            IForgottenKnowledge * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoRange )(
            IForgottenKnowledge * This,
                       const SYNC_RANGE *psrngSyncRange,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ExcludeItem )(
            IForgottenKnowledge * This,
                       const BYTE *pbItemId);
        HRESULT ( STDMETHODCALLTYPE *ExcludeChangeUnit )(
            IForgottenKnowledge * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId);
        HRESULT ( STDMETHODCALLTYPE *ContainsKnowledge )(
            IForgottenKnowledge * This,
                       ISyncKnowledge *pKnowledge);
        HRESULT ( STDMETHODCALLTYPE *FindMinTickCountForReplica )(
            IForgottenKnowledge * This,
                       const BYTE *pbReplicaId,
                        ULONGLONG *pullReplicaTickCount);
        HRESULT ( STDMETHODCALLTYPE *GetRangeExceptions )(
            IForgottenKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetSingleItemExceptions )(
            IForgottenKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitExceptions )(
            IForgottenKnowledge * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *FindClockVectorForItem )(
            IForgottenKnowledge * This,
                       const BYTE *pbItemId,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *FindClockVectorForChangeUnit )(
            IForgottenKnowledge * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            IForgottenKnowledge * This,
                        DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *ForgetToVersion )(
            IForgottenKnowledge * This,
                       ISyncKnowledge *pKnowledge,
                       const SYNC_VERSION *pVersion);
        END_INTERFACE
    } IForgottenKnowledgeVtbl;
    interface IForgottenKnowledge
    {
        CONST_VTBL struct IForgottenKnowledgeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
    ( (This)->lpVtbl -> Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) )
    ( (This)->lpVtbl -> SetLocalTickCount(This,ullTickCount) )
    ( (This)->lpVtbl -> ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) )
    ( (This)->lpVtbl -> ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) )
    ( (This)->lpVtbl -> GetScopeVector(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetReplicaKeyMap(This,ppReplicaKeyMap) )
    ( (This)->lpVtbl -> Clone(This,ppClonedKnowledge) )
    ( (This)->lpVtbl -> ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) )
    ( (This)->lpVtbl -> MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) )
    ( (This)->lpVtbl -> Union(This,pKnowledge) )
    ( (This)->lpVtbl -> ProjectOntoItem(This,pbItemId,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ExcludeItem(This,pbItemId) )
    ( (This)->lpVtbl -> ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) )
    ( (This)->lpVtbl -> ContainsKnowledge(This,pKnowledge) )
    ( (This)->lpVtbl -> FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) )
    ( (This)->lpVtbl -> GetRangeExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetSingleItemExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetChangeUnitExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> FindClockVectorForItem(This,pbItemId,riid,ppUnk) )
    ( (This)->lpVtbl -> FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> ForgetToVersion(This,pKnowledge,pVersion) )
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncKnowledge2;
    typedef struct ISyncKnowledge2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncKnowledge2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncKnowledge2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncKnowledge2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerReplicaId )(
            ISyncKnowledge2 * This,
                                             BYTE *pbReplicaId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncKnowledge2 * This,
                       BOOL fSerializeReplicaKeyMap,
                                             BYTE *pbKnowledge,
                            DWORD *pcbKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLocalTickCount )(
            ISyncKnowledge2 * This,
                       ULONGLONG ullTickCount);
        HRESULT ( STDMETHODCALLTYPE *ContainsChange )(
            ISyncKnowledge2 * This,
                       const BYTE *pbVersionOwnerReplicaId,
                       const BYTE *pgidItemId,
                       const SYNC_VERSION *pSyncVersion);
        HRESULT ( STDMETHODCALLTYPE *ContainsChangeUnit )(
            ISyncKnowledge2 * This,
                       const BYTE *pbVersionOwnerReplicaId,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                       const SYNC_VERSION *pSyncVersion);
        HRESULT ( STDMETHODCALLTYPE *GetScopeVector )(
            ISyncKnowledge2 * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetReplicaKeyMap )(
            ISyncKnowledge2 * This,
                        IReplicaKeyMap **ppReplicaKeyMap);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISyncKnowledge2 * This,
                        ISyncKnowledge **ppClonedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *ConvertVersion )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pKnowledgeIn,
                       const BYTE *pbCurrentOwnerId,
                       const SYNC_VERSION *pVersionIn,
                               BYTE *pbNewOwnerId,
                            DWORD *pcbIdSize,
                        SYNC_VERSION *pVersionOut);
        HRESULT ( STDMETHODCALLTYPE *MapRemoteToLocal )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pRemoteKnowledge,
                        ISyncKnowledge **ppMappedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *Union )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pKnowledge);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoItem )(
            ISyncKnowledge2 * This,
                       const BYTE *pbItemId,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoChangeUnit )(
            ISyncKnowledge2 * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoRange )(
            ISyncKnowledge2 * This,
                       const SYNC_RANGE *psrngSyncRange,
                        ISyncKnowledge **ppKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *ExcludeItem )(
            ISyncKnowledge2 * This,
                       const BYTE *pbItemId);
        HRESULT ( STDMETHODCALLTYPE *ExcludeChangeUnit )(
            ISyncKnowledge2 * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId);
        HRESULT ( STDMETHODCALLTYPE *ContainsKnowledge )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pKnowledge);
        HRESULT ( STDMETHODCALLTYPE *FindMinTickCountForReplica )(
            ISyncKnowledge2 * This,
                       const BYTE *pbReplicaId,
                        ULONGLONG *pullReplicaTickCount);
        HRESULT ( STDMETHODCALLTYPE *GetRangeExceptions )(
            ISyncKnowledge2 * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetSingleItemExceptions )(
            ISyncKnowledge2 * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitExceptions )(
            ISyncKnowledge2 * This,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *FindClockVectorForItem )(
            ISyncKnowledge2 * This,
                       const BYTE *pbItemId,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *FindClockVectorForChangeUnit )(
            ISyncKnowledge2 * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                       REFIID riid,
                                void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            ISyncKnowledge2 * This,
                        DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetIdParameters )(
            ISyncKnowledge2 * This,
                        ID_PARAMETERS *pIdParameters);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoColumnSet )(
            ISyncKnowledge2 * This,
                       const BYTE **ppColumns,
                       DWORD count,
                        ISyncKnowledge2 **ppiKnowledgeOut);
        HRESULT ( STDMETHODCALLTYPE *SerializeWithOptions )(
            ISyncKnowledge2 * This,
                       SYNC_SERIALIZATION_VERSION targetFormatVersion,
                       DWORD dwFlags,
                                             BYTE *pbBuffer,
                            DWORD *pdwSerializedSize);
        HRESULT ( STDMETHODCALLTYPE *GetLowestUncontainedId )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge2 *piSyncKnowledge,
                                             BYTE *pbItemId,
                            DWORD *pcbItemIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetInspector )(
            ISyncKnowledge2 * This,
                       REFIID riid,
                                void **ppiInspector);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumSupportedVersion )(
            ISyncKnowledge2 * This,
                        SYNC_SERIALIZATION_VERSION *pVersion);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            ISyncKnowledge2 * This,
                       SYNC_STATISTICS which,
                        DWORD *pValue);
        HRESULT ( STDMETHODCALLTYPE *ContainsKnowledgeForItem )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pKnowledge,
                       const BYTE *pbItemId);
        HRESULT ( STDMETHODCALLTYPE *ContainsKnowledgeForChangeUnit )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pKnowledge,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId);
        HRESULT ( STDMETHODCALLTYPE *ProjectOntoKnowledgeWithPrerequisite )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pPrerequisiteKnowledge,
                       ISyncKnowledge *pTemplateKnowledge,
                        ISyncKnowledge **ppProjectedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *Complement )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pSyncKnowledge,
                        ISyncKnowledge **ppComplementedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *IntersectsWithKnowledge )(
            ISyncKnowledge2 * This,
                       ISyncKnowledge *pSyncKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetKnowledgeCookie )(
            ISyncKnowledge2 * This,
                        IUnknown **ppKnowledgeCookie);
        HRESULT ( STDMETHODCALLTYPE *CompareToKnowledgeCookie )(
            ISyncKnowledge2 * This,
                       IUnknown *pKnowledgeCookie,
                        KNOWLEDGE_COOKIE_COMPARISON_RESULT *pResult);
        END_INTERFACE
    } ISyncKnowledge2Vtbl;
    interface ISyncKnowledge2
    {
        CONST_VTBL struct ISyncKnowledge2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
    ( (This)->lpVtbl -> Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) )
    ( (This)->lpVtbl -> SetLocalTickCount(This,ullTickCount) )
    ( (This)->lpVtbl -> ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) )
    ( (This)->lpVtbl -> ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) )
    ( (This)->lpVtbl -> GetScopeVector(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetReplicaKeyMap(This,ppReplicaKeyMap) )
    ( (This)->lpVtbl -> Clone(This,ppClonedKnowledge) )
    ( (This)->lpVtbl -> ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) )
    ( (This)->lpVtbl -> MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) )
    ( (This)->lpVtbl -> Union(This,pKnowledge) )
    ( (This)->lpVtbl -> ProjectOntoItem(This,pbItemId,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) )
    ( (This)->lpVtbl -> ExcludeItem(This,pbItemId) )
    ( (This)->lpVtbl -> ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) )
    ( (This)->lpVtbl -> ContainsKnowledge(This,pKnowledge) )
    ( (This)->lpVtbl -> FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) )
    ( (This)->lpVtbl -> GetRangeExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetSingleItemExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> GetChangeUnitExceptions(This,riid,ppUnk) )
    ( (This)->lpVtbl -> FindClockVectorForItem(This,pbItemId,riid,ppUnk) )
    ( (This)->lpVtbl -> FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
    ( (This)->lpVtbl -> ProjectOntoColumnSet(This,ppColumns,count,ppiKnowledgeOut) )
    ( (This)->lpVtbl -> SerializeWithOptions(This,targetFormatVersion,dwFlags,pbBuffer,pdwSerializedSize) )
    ( (This)->lpVtbl -> GetLowestUncontainedId(This,piSyncKnowledge,pbItemId,pcbItemIdSize) )
    ( (This)->lpVtbl -> GetInspector(This,riid,ppiInspector) )
    ( (This)->lpVtbl -> GetMinimumSupportedVersion(This,pVersion) )
    ( (This)->lpVtbl -> GetStatistics(This,which,pValue) )
    ( (This)->lpVtbl -> ContainsKnowledgeForItem(This,pKnowledge,pbItemId) )
    ( (This)->lpVtbl -> ContainsKnowledgeForChangeUnit(This,pKnowledge,pbItemId,pbChangeUnitId) )
    ( (This)->lpVtbl -> ProjectOntoKnowledgeWithPrerequisite(This,pPrerequisiteKnowledge,pTemplateKnowledge,ppProjectedKnowledge) )
    ( (This)->lpVtbl -> Complement(This,pSyncKnowledge,ppComplementedKnowledge) )
    ( (This)->lpVtbl -> IntersectsWithKnowledge(This,pSyncKnowledge) )
    ( (This)->lpVtbl -> GetKnowledgeCookie(This,ppKnowledgeCookie) )
    ( (This)->lpVtbl -> CompareToKnowledgeCookie(This,pKnowledgeCookie,pResult) )
EXTERN_C const IID IID_IRecoverableErrorData;
    typedef struct IRecoverableErrorDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRecoverableErrorData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRecoverableErrorData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRecoverableErrorData * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IRecoverableErrorData * This,
                               LPCWSTR pcszItemDisplayName,
                               LPCWSTR pcszErrorDescription);
        HRESULT ( STDMETHODCALLTYPE *GetItemDisplayName )(
            IRecoverableErrorData * This,
                                                     LPWSTR pszItemDisplayName,
                            DWORD *pcchItemDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )(
            IRecoverableErrorData * This,
                                                     LPWSTR pszErrorDescription,
                            DWORD *pcchErrorDescription);
        END_INTERFACE
    } IRecoverableErrorDataVtbl;
    interface IRecoverableErrorData
    {
        CONST_VTBL struct IRecoverableErrorDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pcszItemDisplayName,pcszErrorDescription) )
    ( (This)->lpVtbl -> GetItemDisplayName(This,pszItemDisplayName,pcchItemDisplayName) )
    ( (This)->lpVtbl -> GetErrorDescription(This,pszErrorDescription,pcchErrorDescription) )
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IRecoverableError;
    typedef struct IRecoverableErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRecoverableError * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRecoverableError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRecoverableError * This);
        HRESULT ( STDMETHODCALLTYPE *GetStage )(
            IRecoverableError * This,
                        SYNC_PROGRESS_STAGE *pStage);
        HRESULT ( STDMETHODCALLTYPE *GetProvider )(
            IRecoverableError * This,
                        SYNC_PROVIDER_ROLE *pProviderRole);
        HRESULT ( STDMETHODCALLTYPE *GetChangeWithRecoverableError )(
            IRecoverableError * This,
                        ISyncChange **ppChangeWithRecoverableError);
        HRESULT ( STDMETHODCALLTYPE *GetRecoverableErrorDataForChange )(
            IRecoverableError * This,
                        HRESULT *phrError,
                        IRecoverableErrorData **ppErrorData);
        HRESULT ( STDMETHODCALLTYPE *GetRecoverableErrorDataForChangeUnit )(
            IRecoverableError * This,
                       ISyncChangeUnit *pChangeUnit,
                        HRESULT *phrError,
                        IRecoverableErrorData **ppErrorData);
        END_INTERFACE
    } IRecoverableErrorVtbl;
    interface IRecoverableError
    {
        CONST_VTBL struct IRecoverableErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStage(This,pStage) )
    ( (This)->lpVtbl -> GetProvider(This,pProviderRole) )
    ( (This)->lpVtbl -> GetChangeWithRecoverableError(This,ppChangeWithRecoverableError) )
    ( (This)->lpVtbl -> GetRecoverableErrorDataForChange(This,phrError,ppErrorData) )
    ( (This)->lpVtbl -> GetRecoverableErrorDataForChangeUnit(This,pChangeUnit,phrError,ppErrorData) )
EXTERN_C const IID IID_IChangeConflict;
    typedef struct IChangeConflictVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IChangeConflict * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IChangeConflict * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IChangeConflict * This);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationProviderConflictingChange )(
            IChangeConflict * This,
                        ISyncChange **ppConflictingChange);
        HRESULT ( STDMETHODCALLTYPE *GetSourceProviderConflictingChange )(
            IChangeConflict * This,
                        ISyncChange **ppConflictingChange);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationProviderConflictingData )(
            IChangeConflict * This,
                        IUnknown **ppConflictingData);
        HRESULT ( STDMETHODCALLTYPE *GetSourceProviderConflictingData )(
            IChangeConflict * This,
                        IUnknown **ppConflictingData);
        HRESULT ( STDMETHODCALLTYPE *GetResolveActionForChange )(
            IChangeConflict * This,
                        SYNC_RESOLVE_ACTION *pResolveAction);
        HRESULT ( STDMETHODCALLTYPE *SetResolveActionForChange )(
            IChangeConflict * This,
                       SYNC_RESOLVE_ACTION resolveAction);
        HRESULT ( STDMETHODCALLTYPE *GetResolveActionForChangeUnit )(
            IChangeConflict * This,
                       ISyncChangeUnit *pChangeUnit,
                        SYNC_RESOLVE_ACTION *pResolveAction);
        HRESULT ( STDMETHODCALLTYPE *SetResolveActionForChangeUnit )(
            IChangeConflict * This,
                       ISyncChangeUnit *pChangeUnit,
                       SYNC_RESOLVE_ACTION resolveAction);
        END_INTERFACE
    } IChangeConflictVtbl;
    interface IChangeConflict
    {
        CONST_VTBL struct IChangeConflictVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDestinationProviderConflictingChange(This,ppConflictingChange) )
    ( (This)->lpVtbl -> GetSourceProviderConflictingChange(This,ppConflictingChange) )
    ( (This)->lpVtbl -> GetDestinationProviderConflictingData(This,ppConflictingData) )
    ( (This)->lpVtbl -> GetSourceProviderConflictingData(This,ppConflictingData) )
    ( (This)->lpVtbl -> GetResolveActionForChange(This,pResolveAction) )
    ( (This)->lpVtbl -> SetResolveActionForChange(This,resolveAction) )
    ( (This)->lpVtbl -> GetResolveActionForChangeUnit(This,pChangeUnit,pResolveAction) )
    ( (This)->lpVtbl -> SetResolveActionForChangeUnit(This,pChangeUnit,resolveAction) )
EXTERN_C const IID IID_IConstraintConflict;
    typedef struct IConstraintConflictVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConstraintConflict * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConstraintConflict * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConstraintConflict * This);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationProviderConflictingChange )(
            IConstraintConflict * This,
                        ISyncChange **ppConflictingChange);
        HRESULT ( STDMETHODCALLTYPE *GetSourceProviderConflictingChange )(
            IConstraintConflict * This,
                        ISyncChange **ppConflictingChange);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationProviderOriginalChange )(
            IConstraintConflict * This,
                        ISyncChange **ppOriginalChange);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationProviderConflictingData )(
            IConstraintConflict * This,
                        IUnknown **ppConflictingData);
        HRESULT ( STDMETHODCALLTYPE *GetSourceProviderConflictingData )(
            IConstraintConflict * This,
                        IUnknown **ppConflictingData);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationProviderOriginalData )(
            IConstraintConflict * This,
                        IUnknown **ppOriginalData);
        HRESULT ( STDMETHODCALLTYPE *GetConstraintResolveActionForChange )(
            IConstraintConflict * This,
                        SYNC_CONSTRAINT_RESOLVE_ACTION *pConstraintResolveAction);
        HRESULT ( STDMETHODCALLTYPE *SetConstraintResolveActionForChange )(
            IConstraintConflict * This,
                       SYNC_CONSTRAINT_RESOLVE_ACTION constraintResolveAction);
        HRESULT ( STDMETHODCALLTYPE *GetConstraintResolveActionForChangeUnit )(
            IConstraintConflict * This,
                       ISyncChangeUnit *pChangeUnit,
                        SYNC_CONSTRAINT_RESOLVE_ACTION *pConstraintResolveAction);
        HRESULT ( STDMETHODCALLTYPE *SetConstraintResolveActionForChangeUnit )(
            IConstraintConflict * This,
                       ISyncChangeUnit *pChangeUnit,
                       SYNC_CONSTRAINT_RESOLVE_ACTION constraintResolveAction);
        HRESULT ( STDMETHODCALLTYPE *GetConstraintConflictReason )(
            IConstraintConflict * This,
                        CONSTRAINT_CONFLICT_REASON *pConstraintConflictReason);
        HRESULT ( STDMETHODCALLTYPE *IsTemporary )(
            IConstraintConflict * This);
        END_INTERFACE
    } IConstraintConflictVtbl;
    interface IConstraintConflict
    {
        CONST_VTBL struct IConstraintConflictVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDestinationProviderConflictingChange(This,ppConflictingChange) )
    ( (This)->lpVtbl -> GetSourceProviderConflictingChange(This,ppConflictingChange) )
    ( (This)->lpVtbl -> GetDestinationProviderOriginalChange(This,ppOriginalChange) )
    ( (This)->lpVtbl -> GetDestinationProviderConflictingData(This,ppConflictingData) )
    ( (This)->lpVtbl -> GetSourceProviderConflictingData(This,ppConflictingData) )
    ( (This)->lpVtbl -> GetDestinationProviderOriginalData(This,ppOriginalData) )
    ( (This)->lpVtbl -> GetConstraintResolveActionForChange(This,pConstraintResolveAction) )
    ( (This)->lpVtbl -> SetConstraintResolveActionForChange(This,constraintResolveAction) )
    ( (This)->lpVtbl -> GetConstraintResolveActionForChangeUnit(This,pChangeUnit,pConstraintResolveAction) )
    ( (This)->lpVtbl -> SetConstraintResolveActionForChangeUnit(This,pChangeUnit,constraintResolveAction) )
    ( (This)->lpVtbl -> GetConstraintConflictReason(This,pConstraintConflictReason) )
    ( (This)->lpVtbl -> IsTemporary(This) )
EXTERN_C const IID IID_ISyncCallback;
    typedef struct ISyncCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            ISyncCallback * This,
                       SYNC_PROVIDER_ROLE provider,
                       SYNC_PROGRESS_STAGE syncStage,
                       DWORD dwCompletedWork,
                       DWORD dwTotalWork);
        HRESULT ( STDMETHODCALLTYPE *OnChange )(
            ISyncCallback * This,
                       ISyncChange *pSyncChange);
        HRESULT ( STDMETHODCALLTYPE *OnConflict )(
            ISyncCallback * This,
                       IChangeConflict *pConflict);
        HRESULT ( STDMETHODCALLTYPE *OnFullEnumerationNeeded )(
            ISyncCallback * This,
                        SYNC_FULL_ENUMERATION_ACTION *pFullEnumerationAction);
        HRESULT ( STDMETHODCALLTYPE *OnRecoverableError )(
            ISyncCallback * This,
                       IRecoverableError *pRecoverableError);
        END_INTERFACE
    } ISyncCallbackVtbl;
    interface ISyncCallback
    {
        CONST_VTBL struct ISyncCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
    ( (This)->lpVtbl -> OnChange(This,pSyncChange) )
    ( (This)->lpVtbl -> OnConflict(This,pConflict) )
    ( (This)->lpVtbl -> OnFullEnumerationNeeded(This,pFullEnumerationAction) )
    ( (This)->lpVtbl -> OnRecoverableError(This,pRecoverableError) )
EXTERN_C const IID IID_ISyncCallback2;
    typedef struct ISyncCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncCallback2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            ISyncCallback2 * This,
                       SYNC_PROVIDER_ROLE provider,
                       SYNC_PROGRESS_STAGE syncStage,
                       DWORD dwCompletedWork,
                       DWORD dwTotalWork);
        HRESULT ( STDMETHODCALLTYPE *OnChange )(
            ISyncCallback2 * This,
                       ISyncChange *pSyncChange);
        HRESULT ( STDMETHODCALLTYPE *OnConflict )(
            ISyncCallback2 * This,
                       IChangeConflict *pConflict);
        HRESULT ( STDMETHODCALLTYPE *OnFullEnumerationNeeded )(
            ISyncCallback2 * This,
                        SYNC_FULL_ENUMERATION_ACTION *pFullEnumerationAction);
        HRESULT ( STDMETHODCALLTYPE *OnRecoverableError )(
            ISyncCallback2 * This,
                       IRecoverableError *pRecoverableError);
        HRESULT ( STDMETHODCALLTYPE *OnChangeApplied )(
            ISyncCallback2 * This,
                       DWORD dwChangesApplied,
                       DWORD dwChangesFailed);
        HRESULT ( STDMETHODCALLTYPE *OnChangeFailed )(
            ISyncCallback2 * This,
                       DWORD dwChangesApplied,
                       DWORD dwChangesFailed);
        END_INTERFACE
    } ISyncCallback2Vtbl;
    interface ISyncCallback2
    {
        CONST_VTBL struct ISyncCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
    ( (This)->lpVtbl -> OnChange(This,pSyncChange) )
    ( (This)->lpVtbl -> OnConflict(This,pConflict) )
    ( (This)->lpVtbl -> OnFullEnumerationNeeded(This,pFullEnumerationAction) )
    ( (This)->lpVtbl -> OnRecoverableError(This,pRecoverableError) )
    ( (This)->lpVtbl -> OnChangeApplied(This,dwChangesApplied,dwChangesFailed) )
    ( (This)->lpVtbl -> OnChangeFailed(This,dwChangesApplied,dwChangesFailed) )
EXTERN_C const IID IID_ISyncConstraintCallback;
    typedef struct ISyncConstraintCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncConstraintCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncConstraintCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncConstraintCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnConstraintConflict )(
            ISyncConstraintCallback * This,
                       IConstraintConflict *pConflict);
        END_INTERFACE
    } ISyncConstraintCallbackVtbl;
    interface ISyncConstraintCallback
    {
        CONST_VTBL struct ISyncConstraintCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConstraintConflict(This,pConflict) )
EXTERN_C const IID IID_ISyncProvider;
    typedef struct ISyncProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdParameters )(
            ISyncProvider * This,
                        ID_PARAMETERS *pIdParameters);
        END_INTERFACE
    } ISyncProviderVtbl;
    interface ISyncProvider
    {
        CONST_VTBL struct ISyncProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
EXTERN_C const IID IID_ISyncSessionState;
    typedef struct ISyncSessionStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncSessionState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncSessionState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncSessionState * This);
        HRESULT ( STDMETHODCALLTYPE *IsCanceled )(
            ISyncSessionState * This,
                        BOOL *pfIsCanceled);
        HRESULT ( STDMETHODCALLTYPE *GetInfoForChangeApplication )(
            ISyncSessionState * This,
                                             BYTE *pbChangeApplierInfo,
                            DWORD *pcbChangeApplierInfo);
        HRESULT ( STDMETHODCALLTYPE *LoadInfoFromChangeApplication )(
            ISyncSessionState * This,
                                const BYTE *pbChangeApplierInfo,
                       DWORD cbChangeApplierInfo);
        HRESULT ( STDMETHODCALLTYPE *GetForgottenKnowledgeRecoveryRangeStart )(
            ISyncSessionState * This,
                                             BYTE *pbRangeStart,
                            DWORD *pcbRangeStart);
        HRESULT ( STDMETHODCALLTYPE *GetForgottenKnowledgeRecoveryRangeEnd )(
            ISyncSessionState * This,
                                             BYTE *pbRangeEnd,
                            DWORD *pcbRangeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetForgottenKnowledgeRecoveryRange )(
            ISyncSessionState * This,
                       const SYNC_RANGE *pRange);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            ISyncSessionState * This,
                       SYNC_PROVIDER_ROLE provider,
                       SYNC_PROGRESS_STAGE syncStage,
                       DWORD dwCompletedWork,
                       DWORD dwTotalWork);
        END_INTERFACE
    } ISyncSessionStateVtbl;
    interface ISyncSessionState
    {
        CONST_VTBL struct ISyncSessionStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsCanceled(This,pfIsCanceled) )
    ( (This)->lpVtbl -> GetInfoForChangeApplication(This,pbChangeApplierInfo,pcbChangeApplierInfo) )
    ( (This)->lpVtbl -> LoadInfoFromChangeApplication(This,pbChangeApplierInfo,cbChangeApplierInfo) )
    ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeStart(This,pbRangeStart,pcbRangeStart) )
    ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeEnd(This,pbRangeEnd,pcbRangeEnd) )
    ( (This)->lpVtbl -> SetForgottenKnowledgeRecoveryRange(This,pRange) )
    ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
EXTERN_C const IID IID_ISyncSessionExtendedErrorInfo;
    typedef struct ISyncSessionExtendedErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncSessionExtendedErrorInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncSessionExtendedErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncSessionExtendedErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderWithError )(
            ISyncSessionExtendedErrorInfo * This,
                                ISyncProvider **ppProviderWithError);
        END_INTERFACE
    } ISyncSessionExtendedErrorInfoVtbl;
    interface ISyncSessionExtendedErrorInfo
    {
        CONST_VTBL struct ISyncSessionExtendedErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSyncProviderWithError(This,ppProviderWithError) )
EXTERN_C const IID IID_ISyncSessionState2;
    typedef struct ISyncSessionState2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncSessionState2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncSessionState2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncSessionState2 * This);
        HRESULT ( STDMETHODCALLTYPE *IsCanceled )(
            ISyncSessionState2 * This,
                        BOOL *pfIsCanceled);
        HRESULT ( STDMETHODCALLTYPE *GetInfoForChangeApplication )(
            ISyncSessionState2 * This,
                                             BYTE *pbChangeApplierInfo,
                            DWORD *pcbChangeApplierInfo);
        HRESULT ( STDMETHODCALLTYPE *LoadInfoFromChangeApplication )(
            ISyncSessionState2 * This,
                                const BYTE *pbChangeApplierInfo,
                       DWORD cbChangeApplierInfo);
        HRESULT ( STDMETHODCALLTYPE *GetForgottenKnowledgeRecoveryRangeStart )(
            ISyncSessionState2 * This,
                                             BYTE *pbRangeStart,
                            DWORD *pcbRangeStart);
        HRESULT ( STDMETHODCALLTYPE *GetForgottenKnowledgeRecoveryRangeEnd )(
            ISyncSessionState2 * This,
                                             BYTE *pbRangeEnd,
                            DWORD *pcbRangeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetForgottenKnowledgeRecoveryRange )(
            ISyncSessionState2 * This,
                       const SYNC_RANGE *pRange);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            ISyncSessionState2 * This,
                       SYNC_PROVIDER_ROLE provider,
                       SYNC_PROGRESS_STAGE syncStage,
                       DWORD dwCompletedWork,
                       DWORD dwTotalWork);
        HRESULT ( STDMETHODCALLTYPE *SetProviderWithError )(
            ISyncSessionState2 * This,
                       BOOL fSelf);
        HRESULT ( STDMETHODCALLTYPE *GetSessionErrorStatus )(
            ISyncSessionState2 * This,
                                HRESULT *phrSessionError);
        END_INTERFACE
    } ISyncSessionState2Vtbl;
    interface ISyncSessionState2
    {
        CONST_VTBL struct ISyncSessionState2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsCanceled(This,pfIsCanceled) )
    ( (This)->lpVtbl -> GetInfoForChangeApplication(This,pbChangeApplierInfo,pcbChangeApplierInfo) )
    ( (This)->lpVtbl -> LoadInfoFromChangeApplication(This,pbChangeApplierInfo,cbChangeApplierInfo) )
    ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeStart(This,pbRangeStart,pcbRangeStart) )
    ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeEnd(This,pbRangeEnd,pcbRangeEnd) )
    ( (This)->lpVtbl -> SetForgottenKnowledgeRecoveryRange(This,pRange) )
    ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
    ( (This)->lpVtbl -> SetProviderWithError(This,fSelf) )
    ( (This)->lpVtbl -> GetSessionErrorStatus(This,phrSessionError) )
EXTERN_C const IID IID_ISyncFilterInfo;
    typedef struct ISyncFilterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFilterInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFilterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFilterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncFilterInfo * This,
                                             BYTE *pbBuffer,
                            DWORD *pcbBuffer);
        END_INTERFACE
    } ISyncFilterInfoVtbl;
    interface ISyncFilterInfo
    {
        CONST_VTBL struct ISyncFilterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncFilterInfo2;
    typedef struct ISyncFilterInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFilterInfo2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFilterInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFilterInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncFilterInfo2 * This,
                                             BYTE *pbBuffer,
                            DWORD *pcbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            ISyncFilterInfo2 * This,
                        DWORD *pdwFlags);
        END_INTERFACE
    } ISyncFilterInfo2Vtbl;
    interface ISyncFilterInfo2
    {
        CONST_VTBL struct ISyncFilterInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
EXTERN_C const IID IID_IChangeUnitListFilterInfo;
    typedef struct IChangeUnitListFilterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IChangeUnitListFilterInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IChangeUnitListFilterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IChangeUnitListFilterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IChangeUnitListFilterInfo * This,
                                             BYTE *pbBuffer,
                            DWORD *pcbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IChangeUnitListFilterInfo * This,
                                const BYTE *const *ppbChangeUnitIds,
                       DWORD dwChangeUnitCount);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitIdCount )(
            IChangeUnitListFilterInfo * This,
                                DWORD *pdwChangeUnitIdCount);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitId )(
            IChangeUnitListFilterInfo * This,
                       DWORD dwChangeUnitIdIndex,
                                             BYTE *pbChangeUnitId,
                            DWORD *pcbIdSize);
        END_INTERFACE
    } IChangeUnitListFilterInfoVtbl;
    interface IChangeUnitListFilterInfo
    {
        CONST_VTBL struct IChangeUnitListFilterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,ppbChangeUnitIds,dwChangeUnitCount) )
    ( (This)->lpVtbl -> GetChangeUnitIdCount(This,pdwChangeUnitIdCount) )
    ( (This)->lpVtbl -> GetChangeUnitId(This,dwChangeUnitIdIndex,pbChangeUnitId,pcbIdSize) )
EXTERN_C const IID IID_ISyncFilter;
    typedef struct ISyncFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFilter * This);
        HRESULT ( STDMETHODCALLTYPE *IsIdentical )(
            ISyncFilter * This,
                       ISyncFilter *pSyncFilter);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncFilter * This,
                                             BYTE *pbSyncFilter,
                            DWORD *pcbSyncFilter);
        END_INTERFACE
    } ISyncFilterVtbl;
    interface ISyncFilter
    {
        CONST_VTBL struct ISyncFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsIdentical(This,pSyncFilter) )
    ( (This)->lpVtbl -> Serialize(This,pbSyncFilter,pcbSyncFilter) )
EXTERN_C const IID IID_ISyncFilterDeserializer;
    typedef struct ISyncFilterDeserializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFilterDeserializer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFilterDeserializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFilterDeserializer * This);
        HRESULT ( STDMETHODCALLTYPE *DeserializeSyncFilter )(
            ISyncFilterDeserializer * This,
                                const BYTE *pbSyncFilter,
                       DWORD dwCbSyncFilter,
                        ISyncFilter **ppISyncFilter);
        END_INTERFACE
    } ISyncFilterDeserializerVtbl;
    interface ISyncFilterDeserializer
    {
        CONST_VTBL struct ISyncFilterDeserializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeserializeSyncFilter(This,pbSyncFilter,dwCbSyncFilter,ppISyncFilter) )
EXTERN_C const IID IID_ICustomFilterInfo;
    typedef struct ICustomFilterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICustomFilterInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICustomFilterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICustomFilterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ICustomFilterInfo * This,
                                             BYTE *pbBuffer,
                            DWORD *pcbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetSyncFilter )(
            ICustomFilterInfo * This,
                        ISyncFilter **pISyncFilter);
        END_INTERFACE
    } ICustomFilterInfoVtbl;
    interface ICustomFilterInfo
    {
        CONST_VTBL struct ICustomFilterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
    ( (This)->lpVtbl -> GetSyncFilter(This,pISyncFilter) )
typedef
enum __MIDL___MIDL_itf_winsync_0000_0036_0001
    {
        FCT_INTERSECTION = 0
    } FILTER_COMBINATION_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0036_v0_0_s_ifspec;
EXTERN_C const IID IID_ICombinedFilterInfo;
    typedef struct ICombinedFilterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICombinedFilterInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICombinedFilterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICombinedFilterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ICombinedFilterInfo * This,
                                             BYTE *pbBuffer,
                            DWORD *pcbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetFilterCount )(
            ICombinedFilterInfo * This,
                        DWORD *pdwFilterCount);
        HRESULT ( STDMETHODCALLTYPE *GetFilterInfo )(
            ICombinedFilterInfo * This,
                       DWORD dwFilterIndex,
                        ISyncFilterInfo **ppIFilterInfo);
        HRESULT ( STDMETHODCALLTYPE *GetFilterCombinationType )(
            ICombinedFilterInfo * This,
                        FILTER_COMBINATION_TYPE *pFilterCombinationType);
        END_INTERFACE
    } ICombinedFilterInfoVtbl;
    interface ICombinedFilterInfo
    {
        CONST_VTBL struct ICombinedFilterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
    ( (This)->lpVtbl -> GetFilterCount(This,pdwFilterCount) )
    ( (This)->lpVtbl -> GetFilterInfo(This,dwFilterIndex,ppIFilterInfo) )
    ( (This)->lpVtbl -> GetFilterCombinationType(This,pFilterCombinationType) )
EXTERN_C const IID IID_IEnumSyncChanges;
    typedef struct IEnumSyncChangesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumSyncChanges * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumSyncChanges * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumSyncChanges * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSyncChanges * This,
                              ULONG cChanges,
                                            ISyncChange **ppChange,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumSyncChanges * This,
                       ULONG cChanges);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumSyncChanges * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumSyncChanges * This,
                        IEnumSyncChanges **ppEnum);
        END_INTERFACE
    } IEnumSyncChangesVtbl;
    interface IEnumSyncChanges
    {
        CONST_VTBL struct IEnumSyncChangesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cChanges,ppChange,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cChanges) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ISyncChangeBuilder;
    typedef struct ISyncChangeBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *AddChangeUnitMetadata )(
            ISyncChangeBuilder * This,
                       const BYTE *pbChangeUnitId,
                       const SYNC_VERSION *pChangeUnitVersion);
        END_INTERFACE
    } ISyncChangeBuilderVtbl;
    interface ISyncChangeBuilder
    {
        CONST_VTBL struct ISyncChangeBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddChangeUnitMetadata(This,pbChangeUnitId,pChangeUnitVersion) )
EXTERN_C const IID IID_IFilterTrackingSyncChangeBuilder;
    typedef struct IFilterTrackingSyncChangeBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterTrackingSyncChangeBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterTrackingSyncChangeBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterTrackingSyncChangeBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *AddFilterChange )(
            IFilterTrackingSyncChangeBuilder * This,
                       DWORD dwFilterKey,
                       const SYNC_FILTER_CHANGE *pFilterChange);
        HRESULT ( STDMETHODCALLTYPE *SetAllChangeUnitsPresentFlag )(
            IFilterTrackingSyncChangeBuilder * This);
        END_INTERFACE
    } IFilterTrackingSyncChangeBuilderVtbl;
    interface IFilterTrackingSyncChangeBuilder
    {
        CONST_VTBL struct IFilterTrackingSyncChangeBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFilterChange(This,dwFilterKey,pFilterChange) )
    ( (This)->lpVtbl -> SetAllChangeUnitsPresentFlag(This) )
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncChangeBatchBase;
    typedef struct ISyncChangeBatchBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatchBase * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatchBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatchBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncChangeBatchBase * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncChangeBatchBase * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncChangeBatchBase * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncChangeBatchBase * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncChangeBatchBase * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncChangeBatchBase * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncChangeBatchBase * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncChangeBatchBase * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncChangeBatchBase * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncChangeBatchBase * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncChangeBatchBase * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncChangeBatchBase * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncChangeBatchBase * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncChangeBatchBase * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        END_INTERFACE
    } ISyncChangeBatchBaseVtbl;
    interface ISyncChangeBatchBase
    {
        CONST_VTBL struct ISyncChangeBatchBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
EXTERN_C const IID IID_ISyncChangeBatch;
    typedef struct ISyncChangeBatchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatch * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatch * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncChangeBatch * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncChangeBatch * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncChangeBatch * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncChangeBatch * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncChangeBatch * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncChangeBatch * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncChangeBatch * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncChangeBatch * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncChangeBatch * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncChangeBatch * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncChangeBatch * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncChangeBatch * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncChangeBatch * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncChangeBatch * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *BeginUnorderedGroup )(
            ISyncChangeBatch * This);
        HRESULT ( STDMETHODCALLTYPE *EndUnorderedGroup )(
            ISyncChangeBatch * This,
                       ISyncKnowledge *pMadeWithKnowledge,
                       BOOL fAllChangesForKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddLoggedConflict )(
            ISyncChangeBatch * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                       ISyncKnowledge *pConflictKnowledge,
                        ISyncChangeBuilder **ppChangeBuilder);
        END_INTERFACE
    } ISyncChangeBatchVtbl;
    interface ISyncChangeBatch
    {
        CONST_VTBL struct ISyncChangeBatchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
    ( (This)->lpVtbl -> BeginUnorderedGroup(This) )
    ( (This)->lpVtbl -> EndUnorderedGroup(This,pMadeWithKnowledge,fAllChangesForKnowledge) )
    ( (This)->lpVtbl -> AddLoggedConflict(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,pConflictKnowledge,ppChangeBuilder) )
EXTERN_C const IID IID_ISyncFullEnumerationChangeBatch;
    typedef struct ISyncFullEnumerationChangeBatchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFullEnumerationChangeBatch * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFullEnumerationChangeBatch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFullEnumerationChangeBatch * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncFullEnumerationChangeBatch * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncFullEnumerationChangeBatch * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncFullEnumerationChangeBatch * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncFullEnumerationChangeBatch * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncFullEnumerationChangeBatch * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncFullEnumerationChangeBatch * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncFullEnumerationChangeBatch * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncFullEnumerationChangeBatch * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncFullEnumerationChangeBatch * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncFullEnumerationChangeBatch * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncFullEnumerationChangeBatch * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncFullEnumerationChangeBatch * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncFullEnumerationChangeBatch * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncFullEnumerationChangeBatch * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledgeAfterRecoveryComplete )(
            ISyncFullEnumerationChangeBatch * This,
                        ISyncKnowledge **ppLearnedKnowledgeAfterRecoveryComplete);
        HRESULT ( STDMETHODCALLTYPE *GetClosedLowerBoundItemId )(
            ISyncFullEnumerationChangeBatch * This,
                                             BYTE *pbClosedLowerBoundItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetClosedUpperBoundItemId )(
            ISyncFullEnumerationChangeBatch * This,
                                             BYTE *pbClosedUpperBoundItemId,
                            DWORD *pcbIdSize);
        END_INTERFACE
    } ISyncFullEnumerationChangeBatchVtbl;
    interface ISyncFullEnumerationChangeBatch
    {
        CONST_VTBL struct ISyncFullEnumerationChangeBatchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
    ( (This)->lpVtbl -> GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledgeAfterRecoveryComplete) )
    ( (This)->lpVtbl -> GetClosedLowerBoundItemId(This,pbClosedLowerBoundItemId,pcbIdSize) )
    ( (This)->lpVtbl -> GetClosedUpperBoundItemId(This,pbClosedUpperBoundItemId,pcbIdSize) )
EXTERN_C const IID IID_ISyncChangeBatchWithPrerequisite;
    typedef struct ISyncChangeBatchWithPrerequisiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatchWithPrerequisite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatchWithPrerequisite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatchWithPrerequisite * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncChangeBatchWithPrerequisite * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncChangeBatchWithPrerequisite * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncChangeBatchWithPrerequisite * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncChangeBatchWithPrerequisite * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncChangeBatchWithPrerequisite * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncChangeBatchWithPrerequisite * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncChangeBatchWithPrerequisite * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncChangeBatchWithPrerequisite * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncChangeBatchWithPrerequisite * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncChangeBatchWithPrerequisite * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncChangeBatchWithPrerequisite * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncChangeBatchWithPrerequisite * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncChangeBatchWithPrerequisite * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncChangeBatchWithPrerequisite * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *SetPrerequisiteKnowledge )(
            ISyncChangeBatchWithPrerequisite * This,
                       ISyncKnowledge *pPrerequisiteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledgeWithPrerequisite )(
            ISyncChangeBatchWithPrerequisite * This,
                       ISyncKnowledge *pDestinationKnowledge,
                        ISyncKnowledge **ppLearnedWithPrerequisiteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedForgottenKnowledge )(
            ISyncChangeBatchWithPrerequisite * This,
                        IForgottenKnowledge **ppLearnedForgottenKnowledge);
        END_INTERFACE
    } ISyncChangeBatchWithPrerequisiteVtbl;
    interface ISyncChangeBatchWithPrerequisite
    {
        CONST_VTBL struct ISyncChangeBatchWithPrerequisiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
    ( (This)->lpVtbl -> SetPrerequisiteKnowledge(This,pPrerequisiteKnowledge) )
    ( (This)->lpVtbl -> GetLearnedKnowledgeWithPrerequisite(This,pDestinationKnowledge,ppLearnedWithPrerequisiteKnowledge) )
    ( (This)->lpVtbl -> GetLearnedForgottenKnowledge(This,ppLearnedForgottenKnowledge) )
EXTERN_C const IID IID_ISyncChangeBatchBase2;
    typedef struct ISyncChangeBatchBase2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatchBase2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatchBase2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatchBase2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncChangeBatchBase2 * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncChangeBatchBase2 * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncChangeBatchBase2 * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncChangeBatchBase2 * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncChangeBatchBase2 * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncChangeBatchBase2 * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncChangeBatchBase2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncChangeBatchBase2 * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncChangeBatchBase2 * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncChangeBatchBase2 * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncChangeBatchBase2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncChangeBatchBase2 * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncChangeBatchBase2 * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncChangeBatchBase2 * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *SerializeWithOptions )(
            ISyncChangeBatchBase2 * This,
                       SYNC_SERIALIZATION_VERSION targetFormatVersion,
                       DWORD dwFlags,
                                             BYTE *pbBuffer,
                            DWORD *pdwSerializedSize);
        END_INTERFACE
    } ISyncChangeBatchBase2Vtbl;
    interface ISyncChangeBatchBase2
    {
        CONST_VTBL struct ISyncChangeBatchBase2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
    ( (This)->lpVtbl -> SerializeWithOptions(This,targetFormatVersion,dwFlags,pbBuffer,pdwSerializedSize) )
EXTERN_C const IID IID_ISyncChangeBatchAdvanced;
    typedef struct ISyncChangeBatchAdvancedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatchAdvanced * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatchAdvanced * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatchAdvanced * This);
        HRESULT ( STDMETHODCALLTYPE *GetFilterInfo )(
            ISyncChangeBatchAdvanced * This,
                        ISyncFilterInfo **ppFilterInfo);
        HRESULT ( STDMETHODCALLTYPE *ConvertFullEnumerationChangeBatchToRegularChangeBatch )(
            ISyncChangeBatchAdvanced * This,
                        ISyncChangeBatch **ppChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *GetUpperBoundItemId )(
            ISyncChangeBatchAdvanced * This,
                                             BYTE *pbItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetBatchLevelKnowledgeShouldBeApplied )(
            ISyncChangeBatchAdvanced * This,
                        BOOL *pfBatchKnowledgeShouldBeApplied);
        END_INTERFACE
    } ISyncChangeBatchAdvancedVtbl;
    interface ISyncChangeBatchAdvanced
    {
        CONST_VTBL struct ISyncChangeBatchAdvancedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFilterInfo(This,ppFilterInfo) )
    ( (This)->lpVtbl -> ConvertFullEnumerationChangeBatchToRegularChangeBatch(This,ppChangeBatch) )
    ( (This)->lpVtbl -> GetUpperBoundItemId(This,pbItemId,pcbIdSize) )
    ( (This)->lpVtbl -> GetBatchLevelKnowledgeShouldBeApplied(This,pfBatchKnowledgeShouldBeApplied) )
EXTERN_C const IID IID_ISyncChangeBatch2;
    typedef struct ISyncChangeBatch2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatch2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatch2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatch2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncChangeBatch2 * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncChangeBatch2 * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncChangeBatch2 * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncChangeBatch2 * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncChangeBatch2 * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncChangeBatch2 * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncChangeBatch2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncChangeBatch2 * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncChangeBatch2 * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncChangeBatch2 * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncChangeBatch2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncChangeBatch2 * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncChangeBatch2 * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncChangeBatch2 * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *BeginUnorderedGroup )(
            ISyncChangeBatch2 * This);
        HRESULT ( STDMETHODCALLTYPE *EndUnorderedGroup )(
            ISyncChangeBatch2 * This,
                       ISyncKnowledge *pMadeWithKnowledge,
                       BOOL fAllChangesForKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddLoggedConflict )(
            ISyncChangeBatch2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                       ISyncKnowledge *pConflictKnowledge,
                        ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *AddMergeTombstoneMetadataToGroup )(
            ISyncChangeBatch2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbWinnerItemId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *AddMergeTombstoneLoggedConflict )(
            ISyncChangeBatch2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbWinnerItemId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwWorkForChange,
                       ISyncKnowledge *pConflictKnowledge,
                                    ISyncChangeBuilder **ppChangeBuilder);
        END_INTERFACE
    } ISyncChangeBatch2Vtbl;
    interface ISyncChangeBatch2
    {
        CONST_VTBL struct ISyncChangeBatch2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
    ( (This)->lpVtbl -> BeginUnorderedGroup(This) )
    ( (This)->lpVtbl -> EndUnorderedGroup(This,pMadeWithKnowledge,fAllChangesForKnowledge) )
    ( (This)->lpVtbl -> AddLoggedConflict(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,pConflictKnowledge,ppChangeBuilder) )
    ( (This)->lpVtbl -> AddMergeTombstoneMetadataToGroup(This,pbOwnerReplicaId,pbWinnerItemId,pbItemId,pChangeVersion,pCreationVersion,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> AddMergeTombstoneLoggedConflict(This,pbOwnerReplicaId,pbWinnerItemId,pbItemId,pChangeVersion,pCreationVersion,dwWorkForChange,pConflictKnowledge,ppChangeBuilder) )
EXTERN_C const IID IID_ISyncFullEnumerationChangeBatch2;
    typedef struct ISyncFullEnumerationChangeBatch2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFullEnumerationChangeBatch2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFullEnumerationChangeBatch2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFullEnumerationChangeBatch2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeEnumerator )(
            ISyncFullEnumerationChangeBatch2 * This,
                        IEnumSyncChanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIsLastBatch )(
            ISyncFullEnumerationChangeBatch2 * This,
                        BOOL *pfLastBatch);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimateForBatch )(
            ISyncFullEnumerationChangeBatch2 * This,
                        DWORD *pdwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *GetRemainingWorkEstimateForSession )(
            ISyncFullEnumerationChangeBatch2 * This,
                        DWORD *pdwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *BeginOrderedGroup )(
            ISyncFullEnumerationChangeBatch2 * This,
                       const BYTE *pbLowerBound);
        HRESULT ( STDMETHODCALLTYPE *EndOrderedGroup )(
            ISyncFullEnumerationChangeBatch2 * This,
                       const BYTE *pbUpperBound,
                       ISyncKnowledge *pMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *AddItemMetadataToGroup )(
            ISyncFullEnumerationChangeBatch2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwFlags,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncFullEnumerationChangeBatch2 * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncFullEnumerationChangeBatch2 * This,
                        ISyncKnowledge **ppPrerequisteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetSourceForgottenKnowledge )(
            ISyncFullEnumerationChangeBatch2 * This,
                        IForgottenKnowledge **ppSourceForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetLastBatch )(
            ISyncFullEnumerationChangeBatch2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimateForBatch )(
            ISyncFullEnumerationChangeBatch2 * This,
                       DWORD dwWorkForBatch);
        HRESULT ( STDMETHODCALLTYPE *SetRemainingWorkEstimateForSession )(
            ISyncFullEnumerationChangeBatch2 * This,
                       DWORD dwRemainingWorkForSession);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISyncFullEnumerationChangeBatch2 * This,
                                             BYTE *pbChangeBatch,
                            DWORD *pcbChangeBatch);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledgeAfterRecoveryComplete )(
            ISyncFullEnumerationChangeBatch2 * This,
                        ISyncKnowledge **ppLearnedKnowledgeAfterRecoveryComplete);
        HRESULT ( STDMETHODCALLTYPE *GetClosedLowerBoundItemId )(
            ISyncFullEnumerationChangeBatch2 * This,
                                             BYTE *pbClosedLowerBoundItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetClosedUpperBoundItemId )(
            ISyncFullEnumerationChangeBatch2 * This,
                                             BYTE *pbClosedUpperBoundItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *AddMergeTombstoneMetadataToGroup )(
            ISyncFullEnumerationChangeBatch2 * This,
                       const BYTE *pbOwnerReplicaId,
                       const BYTE *pbWinnerItemId,
                       const BYTE *pbItemId,
                       const SYNC_VERSION *pChangeVersion,
                       const SYNC_VERSION *pCreationVersion,
                       DWORD dwWorkForChange,
                                    ISyncChangeBuilder **ppChangeBuilder);
        END_INTERFACE
    } ISyncFullEnumerationChangeBatch2Vtbl;
    interface ISyncFullEnumerationChangeBatch2
    {
        CONST_VTBL struct ISyncFullEnumerationChangeBatch2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
    ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
    ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
    ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
    ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
    ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
    ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
    ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
    ( (This)->lpVtbl -> SetLastBatch(This) )
    ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
    ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
    ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
    ( (This)->lpVtbl -> GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledgeAfterRecoveryComplete) )
    ( (This)->lpVtbl -> GetClosedLowerBoundItemId(This,pbClosedLowerBoundItemId,pcbIdSize) )
    ( (This)->lpVtbl -> GetClosedUpperBoundItemId(This,pbClosedUpperBoundItemId,pcbIdSize) )
    ( (This)->lpVtbl -> AddMergeTombstoneMetadataToGroup(This,pbOwnerReplicaId,pbWinnerItemId,pbItemId,pChangeVersion,pCreationVersion,dwWorkForChange,ppChangeBuilder) )
EXTERN_C const IID IID_IKnowledgeSyncProvider;
    typedef struct IKnowledgeSyncProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKnowledgeSyncProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKnowledgeSyncProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKnowledgeSyncProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdParameters )(
            IKnowledgeSyncProvider * This,
                        ID_PARAMETERS *pIdParameters);
        HRESULT ( STDMETHODCALLTYPE *BeginSession )(
            IKnowledgeSyncProvider * This,
                       SYNC_PROVIDER_ROLE role,
                       ISyncSessionState *pSessionState);
        HRESULT ( STDMETHODCALLTYPE *GetSyncBatchParameters )(
            IKnowledgeSyncProvider * This,
                        ISyncKnowledge **ppSyncKnowledge,
                        DWORD *pdwRequestedBatchSize);
        HRESULT ( STDMETHODCALLTYPE *GetChangeBatch )(
            IKnowledgeSyncProvider * This,
                       DWORD dwBatchSize,
                       ISyncKnowledge *pSyncKnowledge,
                        ISyncChangeBatch **ppSyncChangeBatch,
                        IUnknown **ppUnkDataRetriever);
        HRESULT ( STDMETHODCALLTYPE *GetFullEnumerationChangeBatch )(
            IKnowledgeSyncProvider * This,
                       DWORD dwBatchSize,
                       const BYTE *pbLowerEnumerationBound,
                       ISyncKnowledge *pSyncKnowledge,
                        ISyncFullEnumerationChangeBatch **ppSyncChangeBatch,
                        IUnknown **ppUnkDataRetriever);
        HRESULT ( STDMETHODCALLTYPE *ProcessChangeBatch )(
            IKnowledgeSyncProvider * This,
                       CONFLICT_RESOLUTION_POLICY resolutionPolicy,
                       ISyncChangeBatch *pSourceChangeBatch,
                       IUnknown *pUnkDataRetriever,
                       ISyncCallback *pCallback,
                            SYNC_SESSION_STATISTICS *pSyncSessionStatistics);
        HRESULT ( STDMETHODCALLTYPE *ProcessFullEnumerationChangeBatch )(
            IKnowledgeSyncProvider * This,
                       CONFLICT_RESOLUTION_POLICY resolutionPolicy,
                       ISyncFullEnumerationChangeBatch *pSourceChangeBatch,
                       IUnknown *pUnkDataRetriever,
                       ISyncCallback *pCallback,
                            SYNC_SESSION_STATISTICS *pSyncSessionStatistics);
        HRESULT ( STDMETHODCALLTYPE *EndSession )(
            IKnowledgeSyncProvider * This,
                       ISyncSessionState *pSessionState);
        END_INTERFACE
    } IKnowledgeSyncProviderVtbl;
    interface IKnowledgeSyncProvider
    {
        CONST_VTBL struct IKnowledgeSyncProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
    ( (This)->lpVtbl -> BeginSession(This,role,pSessionState) )
    ( (This)->lpVtbl -> GetSyncBatchParameters(This,ppSyncKnowledge,pdwRequestedBatchSize) )
    ( (This)->lpVtbl -> GetChangeBatch(This,dwBatchSize,pSyncKnowledge,ppSyncChangeBatch,ppUnkDataRetriever) )
    ( (This)->lpVtbl -> GetFullEnumerationChangeBatch(This,dwBatchSize,pbLowerEnumerationBound,pSyncKnowledge,ppSyncChangeBatch,ppUnkDataRetriever) )
    ( (This)->lpVtbl -> ProcessChangeBatch(This,resolutionPolicy,pSourceChangeBatch,pUnkDataRetriever,pCallback,pSyncSessionStatistics) )
    ( (This)->lpVtbl -> ProcessFullEnumerationChangeBatch(This,resolutionPolicy,pSourceChangeBatch,pUnkDataRetriever,pCallback,pSyncSessionStatistics) )
    ( (This)->lpVtbl -> EndSession(This,pSessionState) )
EXTERN_C const IID IID_ISyncChangeUnit;
    typedef struct ISyncChangeUnitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeUnit * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeUnit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeUnit * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemChange )(
            ISyncChangeUnit * This,
                        ISyncChange **ppSyncChange);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitId )(
            ISyncChangeUnit * This,
                                             BYTE *pbChangeUnitId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitVersion )(
            ISyncChangeUnit * This,
                       const BYTE *pbCurrentReplicaId,
                        SYNC_VERSION *pVersion);
        END_INTERFACE
    } ISyncChangeUnitVtbl;
    interface ISyncChangeUnit
    {
        CONST_VTBL struct ISyncChangeUnitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemChange(This,ppSyncChange) )
    ( (This)->lpVtbl -> GetChangeUnitId(This,pbChangeUnitId,pcbIdSize) )
    ( (This)->lpVtbl -> GetChangeUnitVersion(This,pbCurrentReplicaId,pVersion) )
EXTERN_C const IID IID_IEnumSyncChangeUnits;
    typedef struct IEnumSyncChangeUnitsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumSyncChangeUnits * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumSyncChangeUnits * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumSyncChangeUnits * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSyncChangeUnits * This,
                              ULONG cChanges,
                                            ISyncChangeUnit **ppChangeUnit,
                                    ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumSyncChangeUnits * This,
                       ULONG cChanges);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumSyncChangeUnits * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumSyncChangeUnits * This,
                        IEnumSyncChangeUnits **ppEnum);
        END_INTERFACE
    } IEnumSyncChangeUnitsVtbl;
    interface IEnumSyncChangeUnits
    {
        CONST_VTBL struct IEnumSyncChangeUnitsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cChanges,ppChangeUnit,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cChanges) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ISyncChange;
    typedef struct ISyncChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChange * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerReplicaId )(
            ISyncChange * This,
                                             BYTE *pbReplicaId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetRootItemId )(
            ISyncChange * This,
                                             BYTE *pbRootItemId,
                            DWORD *pcbIdSize);
        HRESULT ( STDMETHODCALLTYPE *GetChangeVersion )(
            ISyncChange * This,
                       const BYTE *pbCurrentReplicaId,
                        SYNC_VERSION *pVersion);
        HRESULT ( STDMETHODCALLTYPE *GetCreationVersion )(
            ISyncChange * This,
                       const BYTE *pbCurrentReplicaId,
                        SYNC_VERSION *pVersion);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            ISyncChange * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetWorkEstimate )(
            ISyncChange * This,
                        DWORD *pdwWork);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnits )(
            ISyncChange * This,
                        IEnumSyncChangeUnits **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetMadeWithKnowledge )(
            ISyncChange * This,
                        ISyncKnowledge **ppMadeWithKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledge )(
            ISyncChange * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *SetWorkEstimate )(
            ISyncChange * This,
                       DWORD dwWork);
        END_INTERFACE
    } ISyncChangeVtbl;
    interface ISyncChange
    {
        CONST_VTBL struct ISyncChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
    ( (This)->lpVtbl -> GetRootItemId(This,pbRootItemId,pcbIdSize) )
    ( (This)->lpVtbl -> GetChangeVersion(This,pbCurrentReplicaId,pVersion) )
    ( (This)->lpVtbl -> GetCreationVersion(This,pbCurrentReplicaId,pVersion) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> GetWorkEstimate(This,pdwWork) )
    ( (This)->lpVtbl -> GetChangeUnits(This,ppEnum) )
    ( (This)->lpVtbl -> GetMadeWithKnowledge(This,ppMadeWithKnowledge) )
    ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> SetWorkEstimate(This,dwWork) )
EXTERN_C const IID IID_ISyncChangeWithPrerequisite;
    typedef struct ISyncChangeWithPrerequisiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeWithPrerequisite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeWithPrerequisite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeWithPrerequisite * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisiteKnowledge )(
            ISyncChangeWithPrerequisite * This,
                        ISyncKnowledge **ppPrerequisiteKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledgeWithPrerequisite )(
            ISyncChangeWithPrerequisite * This,
                       ISyncKnowledge *pDestinationKnowledge,
                        ISyncKnowledge **ppLearnedKnowledgeWithPrerequisite);
        END_INTERFACE
    } ISyncChangeWithPrerequisiteVtbl;
    interface ISyncChangeWithPrerequisite
    {
        CONST_VTBL struct ISyncChangeWithPrerequisiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisiteKnowledge) )
    ( (This)->lpVtbl -> GetLearnedKnowledgeWithPrerequisite(This,pDestinationKnowledge,ppLearnedKnowledgeWithPrerequisite) )
EXTERN_C const IID IID_ISyncFullEnumerationChange;
    typedef struct ISyncFullEnumerationChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncFullEnumerationChange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncFullEnumerationChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncFullEnumerationChange * This);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedKnowledgeAfterRecoveryComplete )(
            ISyncFullEnumerationChange * This,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedForgottenKnowledge )(
            ISyncFullEnumerationChange * This,
                        IForgottenKnowledge **ppLearnedForgottenKnowledge);
        END_INTERFACE
    } ISyncFullEnumerationChangeVtbl;
    interface ISyncFullEnumerationChange
    {
        CONST_VTBL struct ISyncFullEnumerationChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetLearnedForgottenKnowledge(This,ppLearnedForgottenKnowledge) )
EXTERN_C const IID IID_ISyncMergeTombstoneChange;
    typedef struct ISyncMergeTombstoneChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncMergeTombstoneChange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncMergeTombstoneChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncMergeTombstoneChange * This);
        HRESULT ( STDMETHODCALLTYPE *GetWinnerItemId )(
            ISyncMergeTombstoneChange * This,
                                             BYTE *pbWinnerItemId,
                            DWORD *pcbIdSize);
        END_INTERFACE
    } ISyncMergeTombstoneChangeVtbl;
    interface ISyncMergeTombstoneChange
    {
        CONST_VTBL struct ISyncMergeTombstoneChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWinnerItemId(This,pbWinnerItemId,pcbIdSize) )
EXTERN_C const IID IID_IEnumItemIds;
    typedef struct IEnumItemIdsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumItemIds * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumItemIds * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumItemIds * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumItemIds * This,
                                             BYTE *pbItemId,
                            DWORD *pcbItemIdSize);
        END_INTERFACE
    } IEnumItemIdsVtbl;
    interface IEnumItemIds
    {
        CONST_VTBL struct IEnumItemIdsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,pbItemId,pcbItemIdSize) )
EXTERN_C const IID IID_IFilterKeyMap;
    typedef struct IFilterKeyMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterKeyMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterKeyMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterKeyMap * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IFilterKeyMap * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            IFilterKeyMap * This,
                       ISyncFilter *pISyncFilter,
                        DWORD *pdwFilterKey);
        HRESULT ( STDMETHODCALLTYPE *GetFilter )(
            IFilterKeyMap * This,
                       DWORD dwFilterKey,
                        ISyncFilter **ppISyncFilter);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            IFilterKeyMap * This,
                                             BYTE *pbFilterKeyMap,
                            DWORD *pcbFilterKeyMap);
        END_INTERFACE
    } IFilterKeyMapVtbl;
    interface IFilterKeyMap
    {
        CONST_VTBL struct IFilterKeyMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pdwCount) )
    ( (This)->lpVtbl -> AddFilter(This,pISyncFilter,pdwFilterKey) )
    ( (This)->lpVtbl -> GetFilter(This,dwFilterKey,ppISyncFilter) )
    ( (This)->lpVtbl -> Serialize(This,pbFilterKeyMap,pcbFilterKeyMap) )
EXTERN_C const IID IID_ISyncChangeWithFilterKeyMap;
    typedef struct ISyncChangeWithFilterKeyMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeWithFilterKeyMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeWithFilterKeyMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeWithFilterKeyMap * This);
        HRESULT ( STDMETHODCALLTYPE *GetFilterCount )(
            ISyncChangeWithFilterKeyMap * This,
                        DWORD *pdwFilterCount);
        HRESULT ( STDMETHODCALLTYPE *GetFilterChange )(
            ISyncChangeWithFilterKeyMap * This,
                       DWORD dwFilterKey,
                        SYNC_FILTER_CHANGE *pFilterChange);
        HRESULT ( STDMETHODCALLTYPE *GetAllChangeUnitsPresentFlag )(
            ISyncChangeWithFilterKeyMap * This,
                        BOOL *pfAllChangeUnitsPresent);
        HRESULT ( STDMETHODCALLTYPE *GetFilterForgottenKnowledge )(
            ISyncChangeWithFilterKeyMap * This,
                       DWORD dwFilterKey,
                        ISyncKnowledge **ppIFilterForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetFilteredReplicaLearnedKnowledge )(
            ISyncChangeWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                        ISyncKnowledge **ppLearnedKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedFilterForgottenKnowledge )(
            ISyncChangeWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                       DWORD dwFilterKey,
                        ISyncKnowledge **ppLearnedFilterForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetFilteredReplicaLearnedForgottenKnowledge )(
            ISyncChangeWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                        ISyncKnowledge **ppLearnedForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetFilteredReplicaLearnedForgottenKnowledgeAfterRecoveryComplete )(
            ISyncChangeWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                        ISyncKnowledge **ppLearnedForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedFilterForgottenKnowledgeAfterRecoveryComplete )(
            ISyncChangeWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                       DWORD dwFilterKey,
                        ISyncKnowledge **ppLearnedFilterForgottenKnowledge);
        END_INTERFACE
    } ISyncChangeWithFilterKeyMapVtbl;
    interface ISyncChangeWithFilterKeyMap
    {
        CONST_VTBL struct ISyncChangeWithFilterKeyMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFilterCount(This,pdwFilterCount) )
    ( (This)->lpVtbl -> GetFilterChange(This,dwFilterKey,pFilterChange) )
    ( (This)->lpVtbl -> GetAllChangeUnitsPresentFlag(This,pfAllChangeUnitsPresent) )
    ( (This)->lpVtbl -> GetFilterForgottenKnowledge(This,dwFilterKey,ppIFilterForgottenKnowledge) )
    ( (This)->lpVtbl -> GetFilteredReplicaLearnedKnowledge(This,pDestinationKnowledge,pNewMoveins,ppLearnedKnowledge) )
    ( (This)->lpVtbl -> GetLearnedFilterForgottenKnowledge(This,pDestinationKnowledge,pNewMoveins,dwFilterKey,ppLearnedFilterForgottenKnowledge) )
    ( (This)->lpVtbl -> GetFilteredReplicaLearnedForgottenKnowledge(This,pDestinationKnowledge,pNewMoveins,ppLearnedForgottenKnowledge) )
    ( (This)->lpVtbl -> GetFilteredReplicaLearnedForgottenKnowledgeAfterRecoveryComplete(This,pDestinationKnowledge,pNewMoveins,ppLearnedForgottenKnowledge) )
    ( (This)->lpVtbl -> GetLearnedFilterForgottenKnowledgeAfterRecoveryComplete(This,pDestinationKnowledge,pNewMoveins,dwFilterKey,ppLearnedFilterForgottenKnowledge) )
EXTERN_C const IID IID_ISyncChangeBatchWithFilterKeyMap;
    typedef struct ISyncChangeBatchWithFilterKeyMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncChangeBatchWithFilterKeyMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncChangeBatchWithFilterKeyMap * This);
        HRESULT ( STDMETHODCALLTYPE *GetFilterKeyMap )(
            ISyncChangeBatchWithFilterKeyMap * This,
                        IFilterKeyMap **ppIFilterKeyMap);
        HRESULT ( STDMETHODCALLTYPE *SetFilterKeyMap )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       IFilterKeyMap *pIFilterKeyMap);
        HRESULT ( STDMETHODCALLTYPE *SetFilterForgottenKnowledge )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       DWORD dwFilterKey,
                       ISyncKnowledge *pFilterForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetFilteredReplicaLearnedKnowledge )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                        ISyncKnowledge **ppLearnedForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedFilterForgottenKnowledge )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                       DWORD dwFilterKey,
                        ISyncKnowledge **ppLearnedFilterForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetFilteredReplicaLearnedForgottenKnowledge )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                        ISyncKnowledge **ppLearnedForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetFilteredReplicaLearnedForgottenKnowledgeAfterRecoveryComplete )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                        ISyncKnowledge **ppLearnedForgottenKnowledge);
        HRESULT ( STDMETHODCALLTYPE *GetLearnedFilterForgottenKnowledgeAfterRecoveryComplete )(
            ISyncChangeBatchWithFilterKeyMap * This,
                       ISyncKnowledge *pDestinationKnowledge,
                       IEnumItemIds *pNewMoveins,
                       DWORD dwFilterKey,
                        ISyncKnowledge **ppLearnedFilterForgottenKnowledge);
        END_INTERFACE
    } ISyncChangeBatchWithFilterKeyMapVtbl;
    interface ISyncChangeBatchWithFilterKeyMap
    {
        CONST_VTBL struct ISyncChangeBatchWithFilterKeyMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFilterKeyMap(This,ppIFilterKeyMap) )
    ( (This)->lpVtbl -> SetFilterKeyMap(This,pIFilterKeyMap) )
    ( (This)->lpVtbl -> SetFilterForgottenKnowledge(This,dwFilterKey,pFilterForgottenKnowledge) )
    ( (This)->lpVtbl -> GetFilteredReplicaLearnedKnowledge(This,pDestinationKnowledge,pNewMoveins,ppLearnedForgottenKnowledge) )
    ( (This)->lpVtbl -> GetLearnedFilterForgottenKnowledge(This,pDestinationKnowledge,pNewMoveins,dwFilterKey,ppLearnedFilterForgottenKnowledge) )
    ( (This)->lpVtbl -> GetFilteredReplicaLearnedForgottenKnowledge(This,pDestinationKnowledge,pNewMoveins,ppLearnedForgottenKnowledge) )
    ( (This)->lpVtbl -> GetFilteredReplicaLearnedForgottenKnowledgeAfterRecoveryComplete(This,pDestinationKnowledge,pNewMoveins,ppLearnedForgottenKnowledge) )
    ( (This)->lpVtbl -> GetLearnedFilterForgottenKnowledgeAfterRecoveryComplete(This,pDestinationKnowledge,pNewMoveins,dwFilterKey,ppLearnedFilterForgottenKnowledge) )
EXTERN_C const IID IID_IDataRetrieverCallback;
    typedef struct IDataRetrieverCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDataRetrieverCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDataRetrieverCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDataRetrieverCallback * This);
        HRESULT ( STDMETHODCALLTYPE *LoadChangeDataComplete )(
            IDataRetrieverCallback * This,
                       IUnknown *pUnkData);
        HRESULT ( STDMETHODCALLTYPE *LoadChangeDataError )(
            IDataRetrieverCallback * This,
                       HRESULT hrError);
        END_INTERFACE
    } IDataRetrieverCallbackVtbl;
    interface IDataRetrieverCallback
    {
        CONST_VTBL struct IDataRetrieverCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadChangeDataComplete(This,pUnkData) )
    ( (This)->lpVtbl -> LoadChangeDataError(This,hrError) )
EXTERN_C const IID IID_ILoadChangeContext;
    typedef struct ILoadChangeContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ILoadChangeContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ILoadChangeContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ILoadChangeContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetSyncChange )(
            ILoadChangeContext * This,
                        ISyncChange **ppSyncChange);
        HRESULT ( STDMETHODCALLTYPE *SetRecoverableErrorOnChange )(
            ILoadChangeContext * This,
                       HRESULT hrError,
                               IRecoverableErrorData *pErrorData);
        HRESULT ( STDMETHODCALLTYPE *SetRecoverableErrorOnChangeUnit )(
            ILoadChangeContext * This,
                       HRESULT hrError,
                       ISyncChangeUnit *pChangeUnit,
                               IRecoverableErrorData *pErrorData);
        END_INTERFACE
    } ILoadChangeContextVtbl;
    interface ILoadChangeContext
    {
        CONST_VTBL struct ILoadChangeContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSyncChange(This,ppSyncChange) )
    ( (This)->lpVtbl -> SetRecoverableErrorOnChange(This,hrError,pErrorData) )
    ( (This)->lpVtbl -> SetRecoverableErrorOnChangeUnit(This,hrError,pChangeUnit,pErrorData) )
EXTERN_C const IID IID_ISynchronousDataRetriever;
    typedef struct ISynchronousDataRetrieverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISynchronousDataRetriever * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISynchronousDataRetriever * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISynchronousDataRetriever * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdParameters )(
            ISynchronousDataRetriever * This,
                        ID_PARAMETERS *pIdParameters);
        HRESULT ( STDMETHODCALLTYPE *LoadChangeData )(
            ISynchronousDataRetriever * This,
                       ILoadChangeContext *pLoadChangeContext,
                        IUnknown **ppUnkData);
        END_INTERFACE
    } ISynchronousDataRetrieverVtbl;
    interface ISynchronousDataRetriever
    {
        CONST_VTBL struct ISynchronousDataRetrieverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
    ( (This)->lpVtbl -> LoadChangeData(This,pLoadChangeContext,ppUnkData) )
EXTERN_C const IID IID_IAsynchronousDataRetriever;
    typedef struct IAsynchronousDataRetrieverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAsynchronousDataRetriever * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAsynchronousDataRetriever * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAsynchronousDataRetriever * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdParameters )(
            IAsynchronousDataRetriever * This,
                        ID_PARAMETERS *pIdParameters);
        HRESULT ( STDMETHODCALLTYPE *RegisterCallback )(
            IAsynchronousDataRetriever * This,
                       IDataRetrieverCallback *pDataRetrieverCallback);
        HRESULT ( STDMETHODCALLTYPE *RevokeCallback )(
            IAsynchronousDataRetriever * This,
                       IDataRetrieverCallback *pDataRetrieverCallback);
        HRESULT ( STDMETHODCALLTYPE *LoadChangeData )(
            IAsynchronousDataRetriever * This,
                       ILoadChangeContext *pLoadChangeContext);
        END_INTERFACE
    } IAsynchronousDataRetrieverVtbl;
    interface IAsynchronousDataRetriever
    {
        CONST_VTBL struct IAsynchronousDataRetrieverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
    ( (This)->lpVtbl -> RegisterCallback(This,pDataRetrieverCallback) )
    ( (This)->lpVtbl -> RevokeCallback(This,pDataRetrieverCallback) )
    ( (This)->lpVtbl -> LoadChangeData(This,pLoadChangeContext) )
EXTERN_C const IID IID_IFilterRequestCallback;
    typedef struct IFilterRequestCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFilterRequestCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFilterRequestCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFilterRequestCallback * This);
        HRESULT ( STDMETHODCALLTYPE *RequestFilter )(
            __RPC__in IFilterRequestCallback * This,
                       __RPC__in_opt IUnknown *pFilter,
                       FILTERING_TYPE filteringType);
        END_INTERFACE
    } IFilterRequestCallbackVtbl;
    interface IFilterRequestCallback
    {
        CONST_VTBL struct IFilterRequestCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestFilter(This,pFilter,filteringType) )
EXTERN_C const IID IID_IRequestFilteredSync;
    typedef struct IRequestFilteredSyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRequestFilteredSync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRequestFilteredSync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRequestFilteredSync * This);
        HRESULT ( STDMETHODCALLTYPE *SpecifyFilter )(
            __RPC__in IRequestFilteredSync * This,
                       __RPC__in_opt IFilterRequestCallback *pCallback);
        END_INTERFACE
    } IRequestFilteredSyncVtbl;
    interface IRequestFilteredSync
    {
        CONST_VTBL struct IRequestFilteredSyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SpecifyFilter(This,pCallback) )
EXTERN_C const IID IID_ISupportFilteredSync;
    typedef struct ISupportFilteredSyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISupportFilteredSync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISupportFilteredSync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISupportFilteredSync * This);
        HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            __RPC__in ISupportFilteredSync * This,
                       __RPC__in_opt IUnknown *pFilter,
                       FILTERING_TYPE filteringType);
        END_INTERFACE
    } ISupportFilteredSyncVtbl;
    interface ISupportFilteredSync
    {
        CONST_VTBL struct ISupportFilteredSyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFilter(This,pFilter,filteringType) )
EXTERN_C const IID IID_IFilterTrackingRequestCallback;
    typedef struct IFilterTrackingRequestCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFilterTrackingRequestCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFilterTrackingRequestCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFilterTrackingRequestCallback * This);
        HRESULT ( STDMETHODCALLTYPE *RequestTrackedFilter )(
            __RPC__in IFilterTrackingRequestCallback * This,
                       __RPC__in_opt ISyncFilter *pFilter);
        END_INTERFACE
    } IFilterTrackingRequestCallbackVtbl;
    interface IFilterTrackingRequestCallback
    {
        CONST_VTBL struct IFilterTrackingRequestCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestTrackedFilter(This,pFilter) )
EXTERN_C const IID IID_IFilterTrackingProvider;
    typedef struct IFilterTrackingProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFilterTrackingProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFilterTrackingProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFilterTrackingProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SpecifyTrackedFilters )(
            __RPC__in IFilterTrackingProvider * This,
                       __RPC__in_opt IFilterTrackingRequestCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *AddTrackedFilter )(
            __RPC__in IFilterTrackingProvider * This,
                       __RPC__in_opt ISyncFilter *pFilter);
        END_INTERFACE
    } IFilterTrackingProviderVtbl;
    interface IFilterTrackingProvider
    {
        CONST_VTBL struct IFilterTrackingProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SpecifyTrackedFilters(This,pCallback) )
    ( (This)->lpVtbl -> AddTrackedFilter(This,pFilter) )
EXTERN_C const IID IID_ISupportLastWriteTime;
    typedef struct ISupportLastWriteTimeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISupportLastWriteTime * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISupportLastWriteTime * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISupportLastWriteTime * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemChangeTime )(
            ISupportLastWriteTime * This,
                       const BYTE *pbItemId,
                        ULONGLONG *pullTimestamp);
        HRESULT ( STDMETHODCALLTYPE *GetChangeUnitChangeTime )(
            ISupportLastWriteTime * This,
                       const BYTE *pbItemId,
                       const BYTE *pbChangeUnitId,
                        ULONGLONG *pullTimestamp);
        END_INTERFACE
    } ISupportLastWriteTimeVtbl;
    interface ISupportLastWriteTime
    {
        CONST_VTBL struct ISupportLastWriteTimeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemChangeTime(This,pbItemId,pullTimestamp) )
    ( (This)->lpVtbl -> GetChangeUnitChangeTime(This,pbItemId,pbChangeUnitId,pullTimestamp) )
EXTERN_C const IID IID_IProviderConverter;
    typedef struct IProviderConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProviderConverter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProviderConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProviderConverter * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IProviderConverter * This,
                       ISyncProvider *pISyncProvider);
        END_INTERFACE
    } IProviderConverterVtbl;
    interface IProviderConverter
    {
        CONST_VTBL struct IProviderConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pISyncProvider) )
EXTERN_C const IID IID_ISyncDataConverter;
    typedef struct ISyncDataConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISyncDataConverter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISyncDataConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISyncDataConverter * This);
        HRESULT ( STDMETHODCALLTYPE *ConvertDataRetrieverFromProviderFormat )(
            ISyncDataConverter * This,
                       IUnknown *pUnkDataRetrieverIn,
                       IEnumSyncChanges *pEnumSyncChanges,
                        IUnknown **ppUnkDataOut);
        HRESULT ( STDMETHODCALLTYPE *ConvertDataRetrieverToProviderFormat )(
            ISyncDataConverter * This,
                       IUnknown *pUnkDataRetrieverIn,
                       IEnumSyncChanges *pEnumSyncChanges,
                        IUnknown **ppUnkDataOut);
        HRESULT ( STDMETHODCALLTYPE *ConvertDataFromProviderFormat )(
            ISyncDataConverter * This,
                       ILoadChangeContext *pDataContext,
                       IUnknown *pUnkDataIn,
                        IUnknown **ppUnkDataOut);
        HRESULT ( STDMETHODCALLTYPE *ConvertDataToProviderFormat )(
            ISyncDataConverter * This,
                       ILoadChangeContext *pDataContext,
                       IUnknown *pUnkDataOut,
                        IUnknown **ppUnkDataout);
        END_INTERFACE
    } ISyncDataConverterVtbl;
    interface ISyncDataConverter
    {
        CONST_VTBL struct ISyncDataConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConvertDataRetrieverFromProviderFormat(This,pUnkDataRetrieverIn,pEnumSyncChanges,ppUnkDataOut) )
    ( (This)->lpVtbl -> ConvertDataRetrieverToProviderFormat(This,pUnkDataRetrieverIn,pEnumSyncChanges,ppUnkDataOut) )
    ( (This)->lpVtbl -> ConvertDataFromProviderFormat(This,pDataContext,pUnkDataIn,ppUnkDataOut) )
    ( (This)->lpVtbl -> ConvertDataToProviderFormat(This,pDataContext,pUnkDataOut,ppUnkDataout) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0071_v0_0_s_ifspec;
}
