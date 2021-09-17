#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IReplica IReplica;
typedef interface Filter Filter;
typedef interface Filters Filters;
typedef interface IJetEngine IJetEngine;
typedef class Replica Replica;
typedef class JetEngine JetEngine;
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_adojet_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adojet_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("D2D139DF-B6CA-11d1-9F31-00C04FC29D52")
enum ReplicaTypeEnum
    {
        jrRepTypeNotReplicable = 0,
        jrRepTypeDesignMaster = 0x1,
        jrRepTypeFull = 0x2,
        jrRepTypePartial = 0x3
    } ReplicaTypeEnum;
typedef DECLSPEC_UUID("6877D21A-B6CE-11d1-9F31-00C04FC29D52")
enum VisibilityEnum
    {
        jrRepVisibilityGlobal = 0x1,
        jrRepVisibilityLocal = 0x2,
        jrRepVisibilityAnon = 0x4
    } VisibilityEnum;
typedef DECLSPEC_UUID("B42FBFF6-B6CF-11d1-9F31-00C04FC29D52")
enum UpdatabilityEnum
    {
        jrRepUpdFull = 0,
        jrRepUpdReadOnly = 0x2
    } UpdatabilityEnum;
typedef DECLSPEC_UUID("60C05416-B6D0-11d1-9F31-00C04FC29D52")
enum SyncTypeEnum
    {
        jrSyncTypeExport = 0x1,
        jrSyncTypeImport = 0x2,
        jrSyncTypeImpExp = 0x3
    } SyncTypeEnum;
typedef DECLSPEC_UUID("5EBA3970-061E-11d2-BB77-00C04FAE22DA")
enum SyncModeEnum
    {
        jrSyncModeIndirect = 0x1,
        jrSyncModeDirect = 0x2,
        jrSyncModeInternet = 0x3
    } SyncModeEnum;
typedef DECLSPEC_UUID("72769F94-BF78-11d1-AC4D-00C04FC29F8F")
enum FilterTypeEnum
    {
        jrFilterTypeTable = 0x1,
        jrFilterTypeRelationship = 0x2
    } FilterTypeEnum;
EXTERN_C const IID LIBID_JRO;
EXTERN_C const IID IID_IReplica;
    typedef struct IReplicaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IReplica * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IReplica * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IReplica * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IReplica * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IReplica * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IReplica * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IReplica * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *putref_ActiveConnection )(
            __RPC__in IReplica * This,
                       __RPC__in_opt IDispatch *pconn);
                                     HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in IReplica * This,
                       VARIANT vConn);
                                     HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in IReplica * This,
                                __RPC__deref_out_opt IDispatch **ppconn);
                                     HRESULT ( STDMETHODCALLTYPE *get_ConflictFunction )(
            __RPC__in IReplica * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *put_ConflictFunction )(
            __RPC__in IReplica * This,
                       __RPC__in BSTR bstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_ConflictTables )(
            __RPC__in IReplica * This,
                                __RPC__deref_out_opt _Recordset **pprset);
                                     HRESULT ( STDMETHODCALLTYPE *get_DesignMasterId )(
            __RPC__in IReplica * This,
                                __RPC__out VARIANT *pvar);
                                     HRESULT ( STDMETHODCALLTYPE *put_DesignMasterId )(
            __RPC__in IReplica * This,
                       VARIANT var);
                                     HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IReplica * This,
                                __RPC__out long *pl);
                                     HRESULT ( STDMETHODCALLTYPE *get_ReplicaId )(
            __RPC__in IReplica * This,
                                __RPC__out VARIANT *pvar);
                                     HRESULT ( STDMETHODCALLTYPE *get_ReplicaType )(
            __RPC__in IReplica * This,
                                __RPC__out ReplicaTypeEnum *pl);
                                     HRESULT ( STDMETHODCALLTYPE *get_RetentionPeriod )(
            __RPC__in IReplica * This,
                                __RPC__out long *pl);
                                     HRESULT ( STDMETHODCALLTYPE *put_RetentionPeriod )(
            __RPC__in IReplica * This,
                       long l);
                                     HRESULT ( STDMETHODCALLTYPE *get_Visibility )(
            __RPC__in IReplica * This,
                                __RPC__out VisibilityEnum *pl);
                            HRESULT ( STDMETHODCALLTYPE *CreateReplica )(
            __RPC__in IReplica * This,
                       __RPC__in BSTR replicaName,
                       __RPC__in BSTR description,
                                     ReplicaTypeEnum replicaType,
                                     VisibilityEnum visibility,
                                     long priority,
                                     UpdatabilityEnum updatability);
                            HRESULT ( STDMETHODCALLTYPE *GetObjectReplicability )(
            __RPC__in IReplica * This,
                       __RPC__in BSTR objectName,
                       __RPC__in BSTR objectType,
                                __RPC__out VARIANT_BOOL *replicability);
                            HRESULT ( STDMETHODCALLTYPE *SetObjectReplicability )(
            __RPC__in IReplica * This,
                       __RPC__in BSTR objectName,
                       __RPC__in BSTR objectType,
                       VARIANT_BOOL replicability);
                            HRESULT ( STDMETHODCALLTYPE *MakeReplicable )(
            __RPC__in IReplica * This,
                                     __RPC__in BSTR connectionString,
                                     VARIANT_BOOL columnTracking);
                            HRESULT ( STDMETHODCALLTYPE *PopulatePartial )(
            __RPC__in IReplica * This,
                       __RPC__in BSTR FullReplica);
                            HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in IReplica * This,
                       __RPC__in BSTR target,
                                     SyncTypeEnum syncType,
                                     SyncModeEnum syncMode);
                                     HRESULT ( STDMETHODCALLTYPE *get_Filters )(
            __RPC__in IReplica * This,
                                __RPC__deref_out_opt Filters **ppFilters);
        END_INTERFACE
    } IReplicaVtbl;
    interface IReplica
    {
        CONST_VTBL struct IReplicaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,ppconn) )
    ( (This)->lpVtbl -> get_ConflictFunction(This,pbstr) )
    ( (This)->lpVtbl -> put_ConflictFunction(This,bstr) )
    ( (This)->lpVtbl -> get_ConflictTables(This,pprset) )
    ( (This)->lpVtbl -> get_DesignMasterId(This,pvar) )
    ( (This)->lpVtbl -> put_DesignMasterId(This,var) )
    ( (This)->lpVtbl -> get_Priority(This,pl) )
    ( (This)->lpVtbl -> get_ReplicaId(This,pvar) )
    ( (This)->lpVtbl -> get_ReplicaType(This,pl) )
    ( (This)->lpVtbl -> get_RetentionPeriod(This,pl) )
    ( (This)->lpVtbl -> put_RetentionPeriod(This,l) )
    ( (This)->lpVtbl -> get_Visibility(This,pl) )
    ( (This)->lpVtbl -> CreateReplica(This,replicaName,description,replicaType,visibility,priority,updatability) )
    ( (This)->lpVtbl -> GetObjectReplicability(This,objectName,objectType,replicability) )
    ( (This)->lpVtbl -> SetObjectReplicability(This,objectName,objectType,replicability) )
    ( (This)->lpVtbl -> MakeReplicable(This,connectionString,columnTracking) )
    ( (This)->lpVtbl -> PopulatePartial(This,FullReplica) )
    ( (This)->lpVtbl -> Synchronize(This,target,syncType,syncMode) )
    ( (This)->lpVtbl -> get_Filters(This,ppFilters) )
EXTERN_C const IID IID_Filter;
    typedef struct FilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Filter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Filter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Filter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Filter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Filter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Filter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Filter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_TableName )(
            __RPC__in Filter * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_FilterType )(
            __RPC__in Filter * This,
                                __RPC__out FilterTypeEnum *ptype);
                                     HRESULT ( STDMETHODCALLTYPE *get_FilterCriteria )(
            __RPC__in Filter * This,
                                __RPC__deref_out_opt BSTR *pbstr);
        END_INTERFACE
    } FilterVtbl;
    interface Filter
    {
        CONST_VTBL struct FilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TableName(This,pbstr) )
    ( (This)->lpVtbl -> get_FilterType(This,ptype) )
    ( (This)->lpVtbl -> get_FilterCriteria(This,pbstr) )
EXTERN_C const IID IID_Filters;
    typedef struct FiltersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Filters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Filters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Filters * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Filters * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Filters * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Filters * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Filters * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Filters * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Filters * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Filters * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Filters * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Filter **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in Filters * This,
                       __RPC__in BSTR tableName,
                       FilterTypeEnum filterType,
                       __RPC__in BSTR filterCriteria);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in Filters * This,
                       VARIANT Index);
        END_INTERFACE
    } FiltersVtbl;
    interface Filters
    {
        CONST_VTBL struct FiltersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
    ( (This)->lpVtbl -> Append(This,tableName,filterType,filterCriteria) )
    ( (This)->lpVtbl -> Delete(This,Index) )
EXTERN_C const IID IID_IJetEngine;
    typedef struct IJetEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IJetEngine * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IJetEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IJetEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IJetEngine * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IJetEngine * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IJetEngine * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IJetEngine * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *CompactDatabase )(
            __RPC__in IJetEngine * This,
                       __RPC__in BSTR SourceConnection,
                       __RPC__in BSTR Destconnection);
                            HRESULT ( STDMETHODCALLTYPE *RefreshCache )(
            __RPC__in IJetEngine * This,
                       __RPC__in _Connection *Connection);
        END_INTERFACE
    } IJetEngineVtbl;
    interface IJetEngine
    {
        CONST_VTBL struct IJetEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CompactDatabase(This,SourceConnection,Destconnection) )
    ( (This)->lpVtbl -> RefreshCache(This,Connection) )
EXTERN_C const CLSID CLSID_Replica;
class DECLSPEC_UUID("D2D139E3-B6CA-11d1-9F31-00C04FC29D52")
Replica;
EXTERN_C const CLSID CLSID_JetEngine;
class DECLSPEC_UUID("DE88C160-FF2C-11D1-BB6F-00C04FAE22DA")
JetEngine;
}
