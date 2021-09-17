#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISecurityIdentityColl ISecurityIdentityColl;
typedef interface ISecurityCallersColl ISecurityCallersColl;
typedef interface ISecurityCallContext ISecurityCallContext;
typedef interface IGetSecurityCallContext IGetSecurityCallContext;
typedef interface SecurityProperty SecurityProperty;
typedef interface ContextInfo ContextInfo;
typedef interface ContextInfo2 ContextInfo2;
typedef interface ObjectContext ObjectContext;
typedef interface ITransactionContextEx ITransactionContextEx;
typedef interface ITransactionContext ITransactionContext;
typedef interface ICreateWithTransactionEx ICreateWithTransactionEx;
typedef interface ICreateWithLocalTransaction ICreateWithLocalTransaction;
typedef interface ICreateWithTipTransactionEx ICreateWithTipTransactionEx;
typedef interface IComLTxEvents IComLTxEvents;
typedef interface IComUserEvent IComUserEvent;
typedef interface IComThreadEvents IComThreadEvents;
typedef interface IComAppEvents IComAppEvents;
typedef interface IComInstanceEvents IComInstanceEvents;
typedef interface IComTransactionEvents IComTransactionEvents;
typedef interface IComMethodEvents IComMethodEvents;
typedef interface IComObjectEvents IComObjectEvents;
typedef interface IComResourceEvents IComResourceEvents;
typedef interface IComSecurityEvents IComSecurityEvents;
typedef interface IComObjectPoolEvents IComObjectPoolEvents;
typedef interface IComObjectPoolEvents2 IComObjectPoolEvents2;
typedef interface IComObjectConstructionEvents IComObjectConstructionEvents;
typedef interface IComActivityEvents IComActivityEvents;
typedef interface IComIdentityEvents IComIdentityEvents;
typedef interface IComQCEvents IComQCEvents;
typedef interface IComExceptionEvents IComExceptionEvents;
typedef interface ILBEvents ILBEvents;
typedef interface IComCRMEvents IComCRMEvents;
typedef interface IComMethod2Events IComMethod2Events;
typedef interface IComTrackingInfoEvents IComTrackingInfoEvents;
typedef interface IComTrackingInfoCollection IComTrackingInfoCollection;
typedef interface IComTrackingInfoObject IComTrackingInfoObject;
typedef interface IComTrackingInfoProperties IComTrackingInfoProperties;
typedef interface IComApp2Events IComApp2Events;
typedef interface IComTransaction2Events IComTransaction2Events;
typedef interface IComInstance2Events IComInstance2Events;
typedef interface IComObjectPool2Events IComObjectPool2Events;
typedef interface IComObjectConstruction2Events IComObjectConstruction2Events;
typedef interface ISystemAppEventData ISystemAppEventData;
typedef interface IMtsEvents IMtsEvents;
typedef interface IMtsEventInfo IMtsEventInfo;
typedef interface IMTSLocator IMTSLocator;
typedef interface IMtsGrp IMtsGrp;
typedef interface IMessageMover IMessageMover;
typedef interface IEventServerTrace IEventServerTrace;
typedef interface IGetAppTrackerData IGetAppTrackerData;
typedef interface IDispenserManager IDispenserManager;
typedef interface IHolder IHolder;
typedef interface IDispenserDriver IDispenserDriver;
typedef interface ITransactionProxy ITransactionProxy;
typedef interface IContextSecurityPerimeter IContextSecurityPerimeter;
typedef interface ITxProxyHolder ITxProxyHolder;
typedef interface IObjectContext IObjectContext;
typedef interface IObjectControl IObjectControl;
typedef interface IEnumNames IEnumNames;
typedef interface ISecurityProperty ISecurityProperty;
typedef interface ObjectControl ObjectControl;
typedef interface ISharedProperty ISharedProperty;
typedef interface ISharedPropertyGroup ISharedPropertyGroup;
typedef interface ISharedPropertyGroupManager ISharedPropertyGroupManager;
typedef interface IObjectConstruct IObjectConstruct;
typedef interface IObjectConstructString IObjectConstructString;
typedef interface IObjectContextActivity IObjectContextActivity;
typedef interface IObjectContextInfo IObjectContextInfo;
typedef interface IObjectContextInfo2 IObjectContextInfo2;
typedef interface ITransactionStatus ITransactionStatus;
typedef interface IObjectContextTip IObjectContextTip;
typedef interface IPlaybackControl IPlaybackControl;
typedef interface IGetContextProperties IGetContextProperties;
typedef interface IContextState IContextState;
typedef interface IPoolManager IPoolManager;
typedef interface ISelectCOMLBServer ISelectCOMLBServer;
typedef interface ICOMLBArguments ICOMLBArguments;
typedef interface ICrmLogControl ICrmLogControl;
typedef interface ICrmCompensatorVariants ICrmCompensatorVariants;
typedef interface ICrmCompensator ICrmCompensator;
typedef interface ICrmMonitorLogRecords ICrmMonitorLogRecords;
typedef interface ICrmMonitorClerks ICrmMonitorClerks;
typedef interface ICrmMonitor ICrmMonitor;
typedef interface ICrmFormatLogRecords ICrmFormatLogRecords;
typedef interface IServiceIISIntrinsicsConfig IServiceIISIntrinsicsConfig;
typedef interface IServiceComTIIntrinsicsConfig IServiceComTIIntrinsicsConfig;
typedef interface IServiceSxsConfig IServiceSxsConfig;
typedef interface ICheckSxsConfig ICheckSxsConfig;
typedef interface IServiceInheritanceConfig IServiceInheritanceConfig;
typedef interface IServiceThreadPoolConfig IServiceThreadPoolConfig;
typedef interface IServiceTransactionConfigBase IServiceTransactionConfigBase;
typedef interface IServiceTransactionConfig IServiceTransactionConfig;
typedef interface IServiceSysTxnConfig IServiceSysTxnConfig;
typedef interface IServiceSynchronizationConfig IServiceSynchronizationConfig;
typedef interface IServiceTrackerConfig IServiceTrackerConfig;
typedef interface IServicePartitionConfig IServicePartitionConfig;
typedef interface IServiceCall IServiceCall;
typedef interface IAsyncErrorNotify IAsyncErrorNotify;
typedef interface IServiceActivity IServiceActivity;
typedef interface IThreadPoolKnobs IThreadPoolKnobs;
typedef interface IComStaThreadPoolKnobs IComStaThreadPoolKnobs;
typedef interface IComMtaThreadPoolKnobs IComMtaThreadPoolKnobs;
typedef interface IComStaThreadPoolKnobs2 IComStaThreadPoolKnobs2;
typedef interface IProcessInitializer IProcessInitializer;
typedef interface IServicePoolConfig IServicePoolConfig;
typedef interface IServicePool IServicePool;
typedef interface IManagedPooledObj IManagedPooledObj;
typedef interface IManagedPoolAction IManagedPoolAction;
typedef interface IManagedObjectInfo IManagedObjectInfo;
typedef interface IAppDomainHelper IAppDomainHelper;
typedef interface IAssemblyLocator IAssemblyLocator;
typedef interface IManagedActivationEvents IManagedActivationEvents;
typedef interface ISendMethodEvents ISendMethodEvents;
typedef interface ITransactionResourcePool ITransactionResourcePool;
typedef interface IMTSCall IMTSCall;
typedef interface IContextProperties IContextProperties;
typedef interface IObjPool IObjPool;
typedef interface ITransactionProperty ITransactionProperty;
typedef interface IMTSActivity IMTSActivity;
typedef class SecurityIdentity SecurityIdentity;
typedef class SecurityCallers SecurityCallers;
typedef class SecurityCallContext SecurityCallContext;
typedef class GetSecurityCallContextAppObject GetSecurityCallContextAppObject;
typedef class Dummy30040732 Dummy30040732;
typedef class TransactionContext TransactionContext;
typedef class TransactionContextEx TransactionContextEx;
typedef class ByotServerEx ByotServerEx;
typedef class CServiceConfig CServiceConfig;
typedef class ServicePool ServicePool;
typedef class ServicePoolConfig ServicePoolConfig;
typedef class SharedProperty SharedProperty;
typedef class SharedPropertyGroup SharedPropertyGroup;
typedef class SharedPropertyGroupManager SharedPropertyGroupManager;
typedef class COMEvents COMEvents;
typedef class CoMTSLocator CoMTSLocator;
typedef class MtsGrp MtsGrp;
typedef class ComServiceEvents ComServiceEvents;
typedef class ComSystemAppEventData ComSystemAppEventData;
typedef class CRMClerk CRMClerk;
typedef class CRMRecoveryClerk CRMRecoveryClerk;
typedef class LBEvents LBEvents;
typedef class MessageMover MessageMover;
typedef class DispenserManager DispenserManager;
typedef class PoolMgr PoolMgr;
typedef class EventServer EventServer;
typedef class TrackerServer TrackerServer;
typedef class AppDomainHelper AppDomainHelper;
typedef class ClrAssemblyLocator ClrAssemblyLocator;
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"
#include "comadmin.h"
#include "transact.h"
#include "txdtc.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <objbase.h>
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISecurityIdentityColl;
    typedef struct ISecurityIdentityCollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISecurityIdentityColl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISecurityIdentityColl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISecurityIdentityColl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISecurityIdentityColl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISecurityIdentityColl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISecurityIdentityColl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISecurityIdentityColl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISecurityIdentityColl * This,
                                __RPC__out long *plCount);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISecurityIdentityColl * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pItem);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISecurityIdentityColl * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
        END_INTERFACE
    } ISecurityIdentityCollVtbl;
    interface ISecurityIdentityColl
    {
        CONST_VTBL struct ISecurityIdentityCollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Item(This,name,pItem) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
EXTERN_C const IID IID_ISecurityCallersColl;
    typedef struct ISecurityCallersCollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISecurityCallersColl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISecurityCallersColl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISecurityCallersColl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISecurityCallersColl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISecurityCallersColl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISecurityCallersColl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISecurityCallersColl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISecurityCallersColl * This,
                                __RPC__out long *plCount);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISecurityCallersColl * This,
                       long lIndex,
                                __RPC__deref_out_opt ISecurityIdentityColl **pObj);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISecurityCallersColl * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
        END_INTERFACE
    } ISecurityCallersCollVtbl;
    interface ISecurityCallersColl
    {
        CONST_VTBL struct ISecurityCallersCollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pObj) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
EXTERN_C const IID IID_ISecurityCallContext;
    typedef struct ISecurityCallContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISecurityCallContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISecurityCallContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISecurityCallContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISecurityCallContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISecurityCallContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISecurityCallContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISecurityCallContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISecurityCallContext * This,
                                __RPC__out long *plCount);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ISecurityCallContext * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pItem);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISecurityCallContext * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
                                            HRESULT ( STDMETHODCALLTYPE *IsCallerInRole )(
            __RPC__in ISecurityCallContext * This,
            __RPC__in BSTR bstrRole,
                                __RPC__out VARIANT_BOOL *pfInRole);
                                            HRESULT ( STDMETHODCALLTYPE *IsSecurityEnabled )(
            __RPC__in ISecurityCallContext * This,
                                __RPC__out VARIANT_BOOL *pfIsEnabled);
                                            HRESULT ( STDMETHODCALLTYPE *IsUserInRole )(
            __RPC__in ISecurityCallContext * This,
                       __RPC__in VARIANT *pUser,
                       __RPC__in BSTR bstrRole,
                                __RPC__out VARIANT_BOOL *pfInRole);
        END_INTERFACE
    } ISecurityCallContextVtbl;
    interface ISecurityCallContext
    {
        CONST_VTBL struct ISecurityCallContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Item(This,name,pItem) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> IsCallerInRole(This,bstrRole,pfInRole) )
    ( (This)->lpVtbl -> IsSecurityEnabled(This,pfIsEnabled) )
    ( (This)->lpVtbl -> IsUserInRole(This,pUser,bstrRole,pfInRole) )
EXTERN_C const IID IID_IGetSecurityCallContext;
    typedef struct IGetSecurityCallContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetSecurityCallContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetSecurityCallContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetSecurityCallContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IGetSecurityCallContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IGetSecurityCallContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IGetSecurityCallContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IGetSecurityCallContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GetSecurityCallContext )(
            __RPC__in IGetSecurityCallContext * This,
                                __RPC__deref_out_opt ISecurityCallContext **ppObject);
        END_INTERFACE
    } IGetSecurityCallContextVtbl;
    interface IGetSecurityCallContext
    {
        CONST_VTBL struct IGetSecurityCallContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetSecurityCallContext(This,ppObject) )
EXTERN_C const IID IID_SecurityProperty;
    typedef struct SecurityPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in SecurityProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in SecurityProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in SecurityProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in SecurityProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in SecurityProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in SecurityProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            SecurityProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GetDirectCallerName )(
            __RPC__in SecurityProperty * This,
                                __RPC__deref_out_opt BSTR *bstrUserName);
                                            HRESULT ( STDMETHODCALLTYPE *GetDirectCreatorName )(
            __RPC__in SecurityProperty * This,
                                __RPC__deref_out_opt BSTR *bstrUserName);
                                            HRESULT ( STDMETHODCALLTYPE *GetOriginalCallerName )(
            __RPC__in SecurityProperty * This,
                                __RPC__deref_out_opt BSTR *bstrUserName);
                                            HRESULT ( STDMETHODCALLTYPE *GetOriginalCreatorName )(
            __RPC__in SecurityProperty * This,
                                __RPC__deref_out_opt BSTR *bstrUserName);
        END_INTERFACE
    } SecurityPropertyVtbl;
    interface SecurityProperty
    {
        CONST_VTBL struct SecurityPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDirectCallerName(This,bstrUserName) )
    ( (This)->lpVtbl -> GetDirectCreatorName(This,bstrUserName) )
    ( (This)->lpVtbl -> GetOriginalCallerName(This,bstrUserName) )
    ( (This)->lpVtbl -> GetOriginalCreatorName(This,bstrUserName) )
EXTERN_C const IID IID_ContextInfo;
    typedef struct ContextInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ContextInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ContextInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ContextInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ContextInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ContextInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ContextInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ContextInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsInTransaction )(
            __RPC__in ContextInfo * This,
                                __RPC__out VARIANT_BOOL *pbIsInTx);
                               HRESULT ( STDMETHODCALLTYPE *GetTransaction )(
            __RPC__in ContextInfo * This,
                                __RPC__deref_out_opt IUnknown **ppTx);
                               HRESULT ( STDMETHODCALLTYPE *GetTransactionId )(
            __RPC__in ContextInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrTxId);
                               HRESULT ( STDMETHODCALLTYPE *GetActivityId )(
            __RPC__in ContextInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrActivityId);
                               HRESULT ( STDMETHODCALLTYPE *GetContextId )(
            __RPC__in ContextInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrCtxId);
        END_INTERFACE
    } ContextInfoVtbl;
    interface ContextInfo
    {
        CONST_VTBL struct ContextInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsInTransaction(This,pbIsInTx) )
    ( (This)->lpVtbl -> GetTransaction(This,ppTx) )
    ( (This)->lpVtbl -> GetTransactionId(This,pbstrTxId) )
    ( (This)->lpVtbl -> GetActivityId(This,pbstrActivityId) )
    ( (This)->lpVtbl -> GetContextId(This,pbstrCtxId) )
EXTERN_C const IID IID_ContextInfo2;
    typedef struct ContextInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ContextInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ContextInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ContextInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ContextInfo2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ContextInfo2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ContextInfo2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ContextInfo2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsInTransaction )(
            __RPC__in ContextInfo2 * This,
                                __RPC__out VARIANT_BOOL *pbIsInTx);
                               HRESULT ( STDMETHODCALLTYPE *GetTransaction )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt IUnknown **ppTx);
                               HRESULT ( STDMETHODCALLTYPE *GetTransactionId )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrTxId);
                               HRESULT ( STDMETHODCALLTYPE *GetActivityId )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrActivityId);
                               HRESULT ( STDMETHODCALLTYPE *GetContextId )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCtxId);
                               HRESULT ( STDMETHODCALLTYPE *GetPartitionId )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt BSTR *__MIDL__ContextInfo20000);
                               HRESULT ( STDMETHODCALLTYPE *GetApplicationId )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt BSTR *__MIDL__ContextInfo20001);
                               HRESULT ( STDMETHODCALLTYPE *GetApplicationInstanceId )(
            __RPC__in ContextInfo2 * This,
                                __RPC__deref_out_opt BSTR *__MIDL__ContextInfo20002);
        END_INTERFACE
    } ContextInfo2Vtbl;
    interface ContextInfo2
    {
        CONST_VTBL struct ContextInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsInTransaction(This,pbIsInTx) )
    ( (This)->lpVtbl -> GetTransaction(This,ppTx) )
    ( (This)->lpVtbl -> GetTransactionId(This,pbstrTxId) )
    ( (This)->lpVtbl -> GetActivityId(This,pbstrActivityId) )
    ( (This)->lpVtbl -> GetContextId(This,pbstrCtxId) )
    ( (This)->lpVtbl -> GetPartitionId(This,__MIDL__ContextInfo20000) )
    ( (This)->lpVtbl -> GetApplicationId(This,__MIDL__ContextInfo20001) )
    ( (This)->lpVtbl -> GetApplicationInstanceId(This,__MIDL__ContextInfo20002) )
EXTERN_C const IID IID_ObjectContext;
    typedef struct ObjectContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ObjectContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ObjectContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ObjectContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ObjectContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ObjectContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ObjectContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ObjectContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ObjectContext * This,
                       __RPC__in BSTR bstrProgID,
                                __RPC__out VARIANT *pObject);
                                            HRESULT ( STDMETHODCALLTYPE *SetComplete )(
            __RPC__in ObjectContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *SetAbort )(
            __RPC__in ObjectContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *EnableCommit )(
            __RPC__in ObjectContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *DisableCommit )(
            __RPC__in ObjectContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *IsInTransaction )(
            __RPC__in ObjectContext * This,
                                __RPC__out VARIANT_BOOL *pbIsInTx);
                                            HRESULT ( STDMETHODCALLTYPE *IsSecurityEnabled )(
            __RPC__in ObjectContext * This,
                                __RPC__out VARIANT_BOOL *pbIsEnabled);
                                            HRESULT ( STDMETHODCALLTYPE *IsCallerInRole )(
            __RPC__in ObjectContext * This,
            __RPC__in BSTR bstrRole,
                                __RPC__out VARIANT_BOOL *pbInRole);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ObjectContext * This,
                                __RPC__out long *plCount);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ObjectContext * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pItem);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ObjectContext * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in ObjectContext * This,
                                __RPC__deref_out_opt SecurityProperty **ppSecurityProperty);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContextInfo )(
            __RPC__in ObjectContext * This,
                                __RPC__deref_out_opt ContextInfo **ppContextInfo);
        END_INTERFACE
    } ObjectContextVtbl;
    interface ObjectContext
    {
        CONST_VTBL struct ObjectContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateInstance(This,bstrProgID,pObject) )
    ( (This)->lpVtbl -> SetComplete(This) )
    ( (This)->lpVtbl -> SetAbort(This) )
    ( (This)->lpVtbl -> EnableCommit(This) )
    ( (This)->lpVtbl -> DisableCommit(This) )
    ( (This)->lpVtbl -> IsInTransaction(This,pbIsInTx) )
    ( (This)->lpVtbl -> IsSecurityEnabled(This,pbIsEnabled) )
    ( (This)->lpVtbl -> IsCallerInRole(This,bstrRole,pbInRole) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Item(This,name,pItem) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> get_Security(This,ppSecurityProperty) )
    ( (This)->lpVtbl -> get_ContextInfo(This,ppContextInfo) )
EXTERN_C const IID IID_ITransactionContextEx;
    typedef struct ITransactionContextExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionContextEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionContextEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionContextEx * This);
                                        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ITransactionContextEx * This,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pObject);
                                        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ITransactionContextEx * This);
                                        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in ITransactionContextEx * This);
        END_INTERFACE
    } ITransactionContextExVtbl;
    interface ITransactionContextEx
    {
        CONST_VTBL struct ITransactionContextExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,rclsid,riid,pObject) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> Abort(This) )
EXTERN_C const IID IID_ITransactionContext;
    typedef struct ITransactionContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITransactionContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITransactionContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITransactionContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITransactionContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ITransactionContext * This,
                       __RPC__in BSTR pszProgId,
                                __RPC__out VARIANT *pObject);
                                            HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ITransactionContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in ITransactionContext * This);
        END_INTERFACE
    } ITransactionContextVtbl;
    interface ITransactionContext
    {
        CONST_VTBL struct ITransactionContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateInstance(This,pszProgId,pObject) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> Abort(This) )
EXTERN_C const IID IID_ICreateWithTransactionEx;
    typedef struct ICreateWithTransactionExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICreateWithTransactionEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICreateWithTransactionEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICreateWithTransactionEx * This);
                                        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ICreateWithTransactionEx * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pObject);
        END_INTERFACE
    } ICreateWithTransactionExVtbl;
    interface ICreateWithTransactionEx
    {
        CONST_VTBL struct ICreateWithTransactionExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,pTransaction,rclsid,riid,pObject) )
EXTERN_C const IID IID_ICreateWithLocalTransaction;
    typedef struct ICreateWithLocalTransactionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateWithLocalTransaction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateWithLocalTransaction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateWithLocalTransaction * This);
                                        HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithSysTx )(
            ICreateWithLocalTransaction * This,
                       IUnknown *pTransaction,
                       REFCLSID rclsid,
                       REFIID riid,
                                        void **pObject);
        END_INTERFACE
    } ICreateWithLocalTransactionVtbl;
    interface ICreateWithLocalTransaction
    {
        CONST_VTBL struct ICreateWithLocalTransactionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstanceWithSysTx(This,pTransaction,rclsid,riid,pObject) )
EXTERN_C const IID IID_ICreateWithTipTransactionEx;
    typedef struct ICreateWithTipTransactionExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICreateWithTipTransactionEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICreateWithTipTransactionEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICreateWithTipTransactionEx * This);
                                        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ICreateWithTipTransactionEx * This,
                       __RPC__in BSTR bstrTipUrl,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pObject);
        END_INTERFACE
    } ICreateWithTipTransactionExVtbl;
    interface ICreateWithTipTransactionEx
    {
        CONST_VTBL struct ICreateWithTipTransactionExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,bstrTipUrl,rclsid,riid,pObject) )
#pragma deprecated (ICreateWithTipTransactionEx)
typedef unsigned __int64 MTS_OBJID;
typedef unsigned __int64 MTS_RESID;
typedef unsigned __int64 ULONG64;
typedef struct __MIDL___MIDL_itf_autosvcs_0000_0013_0001
    {
    DWORD cbSize;
    DWORD dwPid;
    LONGLONG lTime;
    LONG lMicroTime;
    LONGLONG perfCount;
    GUID guidApp;
    LPOLESTR sMachineName;
    } COMSVCSEVENTINFO;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IComLTxEvents;
    typedef struct IComLTxEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComLTxEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComLTxEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComLTxEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnLtxTransactionStart )(
            __RPC__in IComLTxEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            GUID guidLtx,
            GUID tsid,
            BOOL fRoot,
            int nIsolationLevel);
        HRESULT ( STDMETHODCALLTYPE *OnLtxTransactionPrepare )(
            __RPC__in IComLTxEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            GUID guidLtx,
            BOOL fVote);
        HRESULT ( STDMETHODCALLTYPE *OnLtxTransactionAbort )(
            __RPC__in IComLTxEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            GUID guidLtx);
        HRESULT ( STDMETHODCALLTYPE *OnLtxTransactionCommit )(
            __RPC__in IComLTxEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            GUID guidLtx);
        HRESULT ( STDMETHODCALLTYPE *OnLtxTransactionPromote )(
            __RPC__in IComLTxEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            GUID guidLtx,
            GUID txnId);
        END_INTERFACE
    } IComLTxEventsVtbl;
    interface IComLTxEvents
    {
        CONST_VTBL struct IComLTxEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLtxTransactionStart(This,pInfo,guidLtx,tsid,fRoot,nIsolationLevel) )
    ( (This)->lpVtbl -> OnLtxTransactionPrepare(This,pInfo,guidLtx,fVote) )
    ( (This)->lpVtbl -> OnLtxTransactionAbort(This,pInfo,guidLtx) )
    ( (This)->lpVtbl -> OnLtxTransactionCommit(This,pInfo,guidLtx) )
    ( (This)->lpVtbl -> OnLtxTransactionPromote(This,pInfo,guidLtx,txnId) )
EXTERN_C const IID IID_IComUserEvent;
    typedef struct IComUserEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComUserEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComUserEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComUserEvent * This);
        HRESULT ( STDMETHODCALLTYPE *OnUserEvent )(
            __RPC__in IComUserEvent * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in VARIANT *pvarEvent);
        END_INTERFACE
    } IComUserEventVtbl;
    interface IComUserEvent
    {
        CONST_VTBL struct IComUserEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUserEvent(This,pInfo,pvarEvent) )
EXTERN_C const IID IID_IComThreadEvents;
    typedef struct IComThreadEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComThreadEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComThreadEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnThreadStart )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       DWORD dwThread,
                       DWORD dwTheadCnt);
        HRESULT ( STDMETHODCALLTYPE *OnThreadTerminate )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       DWORD dwThread,
                       DWORD dwTheadCnt);
        HRESULT ( STDMETHODCALLTYPE *OnThreadBindToApartment )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 AptID,
                       DWORD dwActCnt,
                       DWORD dwLowCnt);
        HRESULT ( STDMETHODCALLTYPE *OnThreadUnBind )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 AptID,
                       DWORD dwActCnt);
        HRESULT ( STDMETHODCALLTYPE *OnThreadWorkEnque )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 MsgWorkID,
                       DWORD QueueLen);
        HRESULT ( STDMETHODCALLTYPE *OnThreadWorkPrivate )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 MsgWorkID);
        HRESULT ( STDMETHODCALLTYPE *OnThreadWorkPublic )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 MsgWorkID,
                       DWORD QueueLen);
        HRESULT ( STDMETHODCALLTYPE *OnThreadWorkRedirect )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 MsgWorkID,
                       DWORD QueueLen,
                       ULONG64 ThreadNum);
        HRESULT ( STDMETHODCALLTYPE *OnThreadWorkReject )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ThreadID,
                       ULONG64 MsgWorkID,
                       DWORD QueueLen);
        HRESULT ( STDMETHODCALLTYPE *OnThreadAssignApartment )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity,
                       ULONG64 AptID);
        HRESULT ( STDMETHODCALLTYPE *OnThreadUnassignApartment )(
            __RPC__in IComThreadEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 AptID);
        END_INTERFACE
    } IComThreadEventsVtbl;
    interface IComThreadEvents
    {
        CONST_VTBL struct IComThreadEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnThreadStart(This,pInfo,ThreadID,dwThread,dwTheadCnt) )
    ( (This)->lpVtbl -> OnThreadTerminate(This,pInfo,ThreadID,dwThread,dwTheadCnt) )
    ( (This)->lpVtbl -> OnThreadBindToApartment(This,pInfo,ThreadID,AptID,dwActCnt,dwLowCnt) )
    ( (This)->lpVtbl -> OnThreadUnBind(This,pInfo,ThreadID,AptID,dwActCnt) )
    ( (This)->lpVtbl -> OnThreadWorkEnque(This,pInfo,ThreadID,MsgWorkID,QueueLen) )
    ( (This)->lpVtbl -> OnThreadWorkPrivate(This,pInfo,ThreadID,MsgWorkID) )
    ( (This)->lpVtbl -> OnThreadWorkPublic(This,pInfo,ThreadID,MsgWorkID,QueueLen) )
    ( (This)->lpVtbl -> OnThreadWorkRedirect(This,pInfo,ThreadID,MsgWorkID,QueueLen,ThreadNum) )
    ( (This)->lpVtbl -> OnThreadWorkReject(This,pInfo,ThreadID,MsgWorkID,QueueLen) )
    ( (This)->lpVtbl -> OnThreadAssignApartment(This,pInfo,guidActivity,AptID) )
    ( (This)->lpVtbl -> OnThreadUnassignApartment(This,pInfo,AptID) )
EXTERN_C const IID IID_IComAppEvents;
    typedef struct IComAppEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComAppEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComAppEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComAppEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnAppActivation )(
            __RPC__in IComAppEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnAppShutdown )(
            __RPC__in IComAppEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnAppForceShutdown )(
            __RPC__in IComAppEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        END_INTERFACE
    } IComAppEventsVtbl;
    interface IComAppEvents
    {
        CONST_VTBL struct IComAppEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnAppActivation(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnAppShutdown(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnAppForceShutdown(This,pInfo,guidApp) )
EXTERN_C const IID IID_IComInstanceEvents;
    typedef struct IComInstanceEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComInstanceEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComInstanceEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComInstanceEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjectCreate )(
            __RPC__in IComInstanceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID tsid,
                       ULONG64 CtxtID,
                       ULONG64 ObjectID);
        HRESULT ( STDMETHODCALLTYPE *OnObjectDestroy )(
            __RPC__in IComInstanceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID);
        END_INTERFACE
    } IComInstanceEventsVtbl;
    interface IComInstanceEvents
    {
        CONST_VTBL struct IComInstanceEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjectCreate(This,pInfo,guidActivity,clsid,tsid,CtxtID,ObjectID) )
    ( (This)->lpVtbl -> OnObjectDestroy(This,pInfo,CtxtID) )
EXTERN_C const IID IID_IComTransactionEvents;
    typedef struct IComTransactionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComTransactionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComTransactionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComTransactionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionStart )(
            __RPC__in IComTransactionEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx,
                       __RPC__in REFGUID tsid,
                       BOOL fRoot);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionPrepare )(
            __RPC__in IComTransactionEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx,
                       BOOL fVoteYes);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionAbort )(
            __RPC__in IComTransactionEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionCommit )(
            __RPC__in IComTransactionEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx);
        END_INTERFACE
    } IComTransactionEventsVtbl;
    interface IComTransactionEvents
    {
        CONST_VTBL struct IComTransactionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTransactionStart(This,pInfo,guidTx,tsid,fRoot) )
    ( (This)->lpVtbl -> OnTransactionPrepare(This,pInfo,guidTx,fVoteYes) )
    ( (This)->lpVtbl -> OnTransactionAbort(This,pInfo,guidTx) )
    ( (This)->lpVtbl -> OnTransactionCommit(This,pInfo,guidTx) )
EXTERN_C const IID IID_IComMethodEvents;
    typedef struct IComMethodEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComMethodEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComMethodEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComMethodEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnMethodCall )(
            __RPC__in IComMethodEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 oid,
                       __RPC__in REFCLSID guidCid,
                       __RPC__in REFIID guidRid,
                       ULONG iMeth);
        HRESULT ( STDMETHODCALLTYPE *OnMethodReturn )(
            __RPC__in IComMethodEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 oid,
                       __RPC__in REFCLSID guidCid,
                       __RPC__in REFIID guidRid,
                       ULONG iMeth,
                       HRESULT hresult);
        HRESULT ( STDMETHODCALLTYPE *OnMethodException )(
            __RPC__in IComMethodEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 oid,
                       __RPC__in REFCLSID guidCid,
                       __RPC__in REFIID guidRid,
                       ULONG iMeth);
        END_INTERFACE
    } IComMethodEventsVtbl;
    interface IComMethodEvents
    {
        CONST_VTBL struct IComMethodEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnMethodCall(This,pInfo,oid,guidCid,guidRid,iMeth) )
    ( (This)->lpVtbl -> OnMethodReturn(This,pInfo,oid,guidCid,guidRid,iMeth,hresult) )
    ( (This)->lpVtbl -> OnMethodException(This,pInfo,oid,guidCid,guidRid,iMeth) )
EXTERN_C const IID IID_IComObjectEvents;
    typedef struct IComObjectEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComObjectEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComObjectEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjectActivate )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID,
                       ULONG64 ObjectID);
        HRESULT ( STDMETHODCALLTYPE *OnObjectDeactivate )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID,
                       ULONG64 ObjectID);
        HRESULT ( STDMETHODCALLTYPE *OnDisableCommit )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID);
        HRESULT ( STDMETHODCALLTYPE *OnEnableCommit )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID);
        HRESULT ( STDMETHODCALLTYPE *OnSetComplete )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID);
        HRESULT ( STDMETHODCALLTYPE *OnSetAbort )(
            __RPC__in IComObjectEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID);
        END_INTERFACE
    } IComObjectEventsVtbl;
    interface IComObjectEvents
    {
        CONST_VTBL struct IComObjectEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjectActivate(This,pInfo,CtxtID,ObjectID) )
    ( (This)->lpVtbl -> OnObjectDeactivate(This,pInfo,CtxtID,ObjectID) )
    ( (This)->lpVtbl -> OnDisableCommit(This,pInfo,CtxtID) )
    ( (This)->lpVtbl -> OnEnableCommit(This,pInfo,CtxtID) )
    ( (This)->lpVtbl -> OnSetComplete(This,pInfo,CtxtID) )
    ( (This)->lpVtbl -> OnSetAbort(This,pInfo,CtxtID) )
EXTERN_C const IID IID_IComResourceEvents;
    typedef struct IComResourceEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComResourceEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComResourceEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComResourceEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnResourceCreate )(
            __RPC__in IComResourceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ObjectID,
                       __RPC__in LPCOLESTR pszType,
                       ULONG64 resId,
                       BOOL enlisted);
        HRESULT ( STDMETHODCALLTYPE *OnResourceAllocate )(
            __RPC__in IComResourceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ObjectID,
                       __RPC__in LPCOLESTR pszType,
                       ULONG64 resId,
                       BOOL enlisted,
                       DWORD NumRated,
                       DWORD Rating);
        HRESULT ( STDMETHODCALLTYPE *OnResourceRecycle )(
            __RPC__in IComResourceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ObjectID,
                       __RPC__in LPCOLESTR pszType,
                       ULONG64 resId);
        HRESULT ( STDMETHODCALLTYPE *OnResourceDestroy )(
            __RPC__in IComResourceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ObjectID,
                       HRESULT hr,
                       __RPC__in LPCOLESTR pszType,
                       ULONG64 resId);
        HRESULT ( STDMETHODCALLTYPE *OnResourceTrack )(
            __RPC__in IComResourceEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ObjectID,
                       __RPC__in LPCOLESTR pszType,
                       ULONG64 resId,
                       BOOL enlisted);
        END_INTERFACE
    } IComResourceEventsVtbl;
    interface IComResourceEvents
    {
        CONST_VTBL struct IComResourceEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnResourceCreate(This,pInfo,ObjectID,pszType,resId,enlisted) )
    ( (This)->lpVtbl -> OnResourceAllocate(This,pInfo,ObjectID,pszType,resId,enlisted,NumRated,Rating) )
    ( (This)->lpVtbl -> OnResourceRecycle(This,pInfo,ObjectID,pszType,resId) )
    ( (This)->lpVtbl -> OnResourceDestroy(This,pInfo,ObjectID,hr,pszType,resId) )
    ( (This)->lpVtbl -> OnResourceTrack(This,pInfo,ObjectID,pszType,resId,enlisted) )
EXTERN_C const IID IID_IComSecurityEvents;
    typedef struct IComSecurityEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComSecurityEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComSecurityEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComSecurityEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnAuthenticate )(
            __RPC__in IComSecurityEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidActivity,
            ULONG64 ObjectID,
            __RPC__in REFGUID guidIID,
            ULONG iMeth,
            ULONG cbByteOrig,
                                __RPC__in_ecount_full(cbByteOrig) BYTE *pSidOriginalUser,
            ULONG cbByteCur,
                                __RPC__in_ecount_full(cbByteCur) BYTE *pSidCurrentUser,
            BOOL bCurrentUserInpersonatingInProc);
        HRESULT ( STDMETHODCALLTYPE *OnAuthenticateFail )(
            __RPC__in IComSecurityEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidActivity,
            ULONG64 ObjectID,
            __RPC__in REFGUID guidIID,
            ULONG iMeth,
            ULONG cbByteOrig,
                                __RPC__in_ecount_full(cbByteOrig) BYTE *pSidOriginalUser,
            ULONG cbByteCur,
                                __RPC__in_ecount_full(cbByteCur) BYTE *pSidCurrentUser,
            BOOL bCurrentUserInpersonatingInProc);
        END_INTERFACE
    } IComSecurityEventsVtbl;
    interface IComSecurityEvents
    {
        CONST_VTBL struct IComSecurityEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnAuthenticate(This,pInfo,guidActivity,ObjectID,guidIID,iMeth,cbByteOrig,pSidOriginalUser,cbByteCur,pSidCurrentUser,bCurrentUserInpersonatingInProc) )
    ( (This)->lpVtbl -> OnAuthenticateFail(This,pInfo,guidActivity,ObjectID,guidIID,iMeth,cbByteOrig,pSidOriginalUser,cbByteCur,pSidCurrentUser,bCurrentUserInpersonatingInProc) )
EXTERN_C const IID IID_IComObjectPoolEvents;
    typedef struct IComObjectPoolEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComObjectPoolEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComObjectPoolEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComObjectPoolEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolPutObject )(
            __RPC__in IComObjectPoolEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidObject,
            int nReason,
            DWORD dwAvailable,
            ULONG64 oid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolGetObject )(
            __RPC__in IComObjectPoolEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidActivity,
            __RPC__in REFGUID guidObject,
            DWORD dwAvailable,
            ULONG64 oid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolRecycleToTx )(
            __RPC__in IComObjectPoolEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidActivity,
            __RPC__in REFGUID guidObject,
            __RPC__in REFGUID guidTx,
            ULONG64 objid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolGetFromTx )(
            __RPC__in IComObjectPoolEvents * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidActivity,
            __RPC__in REFGUID guidObject,
            __RPC__in REFGUID guidTx,
            ULONG64 objid);
        END_INTERFACE
    } IComObjectPoolEventsVtbl;
    interface IComObjectPoolEvents
    {
        CONST_VTBL struct IComObjectPoolEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjPoolPutObject(This,pInfo,guidObject,nReason,dwAvailable,oid) )
    ( (This)->lpVtbl -> OnObjPoolGetObject(This,pInfo,guidActivity,guidObject,dwAvailable,oid) )
    ( (This)->lpVtbl -> OnObjPoolRecycleToTx(This,pInfo,guidActivity,guidObject,guidTx,objid) )
    ( (This)->lpVtbl -> OnObjPoolGetFromTx(This,pInfo,guidActivity,guidObject,guidTx,objid) )
EXTERN_C const IID IID_IComObjectPoolEvents2;
    typedef struct IComObjectPoolEvents2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComObjectPoolEvents2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComObjectPoolEvents2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComObjectPoolEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolCreateObject )(
            __RPC__in IComObjectPoolEvents2 * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidObject,
            DWORD dwObjsCreated,
            ULONG64 oid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolDestroyObject )(
            __RPC__in IComObjectPoolEvents2 * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidObject,
            DWORD dwObjsCreated,
            ULONG64 oid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolCreateDecision )(
            __RPC__in IComObjectPoolEvents2 * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            DWORD dwThreadsWaiting,
            DWORD dwAvail,
            DWORD dwCreated,
            DWORD dwMin,
            DWORD dwMax);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolTimeout )(
            __RPC__in IComObjectPoolEvents2 * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidObject,
            __RPC__in REFGUID guidActivity,
            DWORD dwTimeout);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolCreatePool )(
            __RPC__in IComObjectPoolEvents2 * This,
            __RPC__in COMSVCSEVENTINFO *pInfo,
            __RPC__in REFGUID guidObject,
            DWORD dwMin,
            DWORD dwMax,
            DWORD dwTimeout);
        END_INTERFACE
    } IComObjectPoolEvents2Vtbl;
    interface IComObjectPoolEvents2
    {
        CONST_VTBL struct IComObjectPoolEvents2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjPoolCreateObject(This,pInfo,guidObject,dwObjsCreated,oid) )
    ( (This)->lpVtbl -> OnObjPoolDestroyObject(This,pInfo,guidObject,dwObjsCreated,oid) )
    ( (This)->lpVtbl -> OnObjPoolCreateDecision(This,pInfo,dwThreadsWaiting,dwAvail,dwCreated,dwMin,dwMax) )
    ( (This)->lpVtbl -> OnObjPoolTimeout(This,pInfo,guidObject,guidActivity,dwTimeout) )
    ( (This)->lpVtbl -> OnObjPoolCreatePool(This,pInfo,guidObject,dwMin,dwMax,dwTimeout) )
EXTERN_C const IID IID_IComObjectConstructionEvents;
    typedef struct IComObjectConstructionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComObjectConstructionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComObjectConstructionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComObjectConstructionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjectConstruct )(
            __RPC__in IComObjectConstructionEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidObject,
                       __RPC__in LPCOLESTR sConstructString,
                       ULONG64 oid);
        END_INTERFACE
    } IComObjectConstructionEventsVtbl;
    interface IComObjectConstructionEvents
    {
        CONST_VTBL struct IComObjectConstructionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjectConstruct(This,pInfo,guidObject,sConstructString,oid) )
EXTERN_C const IID IID_IComActivityEvents;
    typedef struct IComActivityEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComActivityEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComActivityEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnActivityCreate )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity);
        HRESULT ( STDMETHODCALLTYPE *OnActivityDestroy )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity);
        HRESULT ( STDMETHODCALLTYPE *OnActivityEnter )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidCurrent,
                       __RPC__in REFGUID guidEntered,
                       DWORD dwThread);
        HRESULT ( STDMETHODCALLTYPE *OnActivityTimeout )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidCurrent,
                       __RPC__in REFGUID guidEntered,
                       DWORD dwThread,
                       DWORD dwTimeout);
        HRESULT ( STDMETHODCALLTYPE *OnActivityReenter )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidCurrent,
                       DWORD dwThread,
                       DWORD dwCallDepth);
        HRESULT ( STDMETHODCALLTYPE *OnActivityLeave )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidCurrent,
                       __RPC__in REFGUID guidLeft);
        HRESULT ( STDMETHODCALLTYPE *OnActivityLeaveSame )(
            __RPC__in IComActivityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidCurrent,
                       DWORD dwCallDepth);
        END_INTERFACE
    } IComActivityEventsVtbl;
    interface IComActivityEvents
    {
        CONST_VTBL struct IComActivityEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnActivityCreate(This,pInfo,guidActivity) )
    ( (This)->lpVtbl -> OnActivityDestroy(This,pInfo,guidActivity) )
    ( (This)->lpVtbl -> OnActivityEnter(This,pInfo,guidCurrent,guidEntered,dwThread) )
    ( (This)->lpVtbl -> OnActivityTimeout(This,pInfo,guidCurrent,guidEntered,dwThread,dwTimeout) )
    ( (This)->lpVtbl -> OnActivityReenter(This,pInfo,guidCurrent,dwThread,dwCallDepth) )
    ( (This)->lpVtbl -> OnActivityLeave(This,pInfo,guidCurrent,guidLeft) )
    ( (This)->lpVtbl -> OnActivityLeaveSame(This,pInfo,guidCurrent,dwCallDepth) )
EXTERN_C const IID IID_IComIdentityEvents;
    typedef struct IComIdentityEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComIdentityEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComIdentityEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComIdentityEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnIISRequestInfo )(
            __RPC__in IComIdentityEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 ObjId,
                       __RPC__in LPCOLESTR pszClientIP,
                       __RPC__in LPCOLESTR pszServerIP,
                       __RPC__in LPCOLESTR pszURL);
        END_INTERFACE
    } IComIdentityEventsVtbl;
    interface IComIdentityEvents
    {
        CONST_VTBL struct IComIdentityEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnIISRequestInfo(This,pInfo,ObjId,pszClientIP,pszServerIP,pszURL) )
EXTERN_C const IID IID_IComQCEvents;
    typedef struct IComQCEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComQCEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComQCEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComQCEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnQCRecord )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 objid,
                       __RPC__in_ecount_full(60) WCHAR szQueue[ 60 ],
                       __RPC__in REFGUID guidMsgId,
                       __RPC__in REFGUID guidWorkFlowId,
                       HRESULT msmqhr);
        HRESULT ( STDMETHODCALLTYPE *OnQCQueueOpen )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in_ecount_full(60) WCHAR szQueue[ 60 ],
                       ULONG64 QueueID,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *OnQCReceive )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 QueueID,
                       __RPC__in REFGUID guidMsgId,
                       __RPC__in REFGUID guidWorkFlowId,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *OnQCReceiveFail )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 QueueID,
                       HRESULT msmqhr);
        HRESULT ( STDMETHODCALLTYPE *OnQCMoveToReTryQueue )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidMsgId,
                       __RPC__in REFGUID guidWorkFlowId,
                       ULONG RetryIndex);
        HRESULT ( STDMETHODCALLTYPE *OnQCMoveToDeadQueue )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidMsgId,
                       __RPC__in REFGUID guidWorkFlowId);
        HRESULT ( STDMETHODCALLTYPE *OnQCPlayback )(
            __RPC__in IComQCEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 objid,
                       __RPC__in REFGUID guidMsgId,
                       __RPC__in REFGUID guidWorkFlowId,
                       HRESULT hr);
        END_INTERFACE
    } IComQCEventsVtbl;
    interface IComQCEvents
    {
        CONST_VTBL struct IComQCEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnQCRecord(This,pInfo,objid,szQueue,guidMsgId,guidWorkFlowId,msmqhr) )
    ( (This)->lpVtbl -> OnQCQueueOpen(This,pInfo,szQueue,QueueID,hr) )
    ( (This)->lpVtbl -> OnQCReceive(This,pInfo,QueueID,guidMsgId,guidWorkFlowId,hr) )
    ( (This)->lpVtbl -> OnQCReceiveFail(This,pInfo,QueueID,msmqhr) )
    ( (This)->lpVtbl -> OnQCMoveToReTryQueue(This,pInfo,guidMsgId,guidWorkFlowId,RetryIndex) )
    ( (This)->lpVtbl -> OnQCMoveToDeadQueue(This,pInfo,guidMsgId,guidWorkFlowId) )
    ( (This)->lpVtbl -> OnQCPlayback(This,pInfo,objid,guidMsgId,guidWorkFlowId,hr) )
EXTERN_C const IID IID_IComExceptionEvents;
    typedef struct IComExceptionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComExceptionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComExceptionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComExceptionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnExceptionUser )(
            __RPC__in IComExceptionEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG code,
                       ULONG64 address,
                       __RPC__in LPCOLESTR pszStackTrace);
        END_INTERFACE
    } IComExceptionEventsVtbl;
    interface IComExceptionEvents
    {
        CONST_VTBL struct IComExceptionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnExceptionUser(This,pInfo,code,address,pszStackTrace) )
EXTERN_C const IID IID_ILBEvents;
    typedef struct ILBEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILBEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILBEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILBEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *TargetUp )(
            __RPC__in ILBEvents * This,
            __RPC__in BSTR bstrServerName,
            __RPC__in BSTR bstrClsidEng);
                               HRESULT ( STDMETHODCALLTYPE *TargetDown )(
            __RPC__in ILBEvents * This,
            __RPC__in BSTR bstrServerName,
            __RPC__in BSTR bstrClsidEng);
                               HRESULT ( STDMETHODCALLTYPE *EngineDefined )(
            __RPC__in ILBEvents * This,
            __RPC__in BSTR bstrPropName,
            __RPC__in VARIANT *varPropValue,
            __RPC__in BSTR bstrClsidEng);
        END_INTERFACE
    } ILBEventsVtbl;
    interface ILBEvents
    {
        CONST_VTBL struct ILBEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TargetUp(This,bstrServerName,bstrClsidEng) )
    ( (This)->lpVtbl -> TargetDown(This,bstrServerName,bstrClsidEng) )
    ( (This)->lpVtbl -> EngineDefined(This,bstrPropName,varPropValue,bstrClsidEng) )
EXTERN_C const IID IID_IComCRMEvents;
    typedef struct IComCRMEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComCRMEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComCRMEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnCRMRecoveryStart )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnCRMRecoveryDone )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnCRMCheckpoint )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnCRMBegin )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID,
                       GUID guidActivity,
                       GUID guidTx,
                       __RPC__in_ecount_full(64) WCHAR szProgIdCompensator[ 64 ],
                       __RPC__in_ecount_full(64) WCHAR szDescription[ 64 ]);
        HRESULT ( STDMETHODCALLTYPE *OnCRMPrepare )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMCommit )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMAbort )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMIndoubt )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMDone )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMRelease )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMAnalyze )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID,
                       DWORD dwCrmRecordType,
                       DWORD dwRecordSize);
        HRESULT ( STDMETHODCALLTYPE *OnCRMWrite )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID,
                       BOOL fVariants,
                       DWORD dwRecordSize);
        HRESULT ( STDMETHODCALLTYPE *OnCRMForget )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMForce )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID);
        HRESULT ( STDMETHODCALLTYPE *OnCRMDeliver )(
            __RPC__in IComCRMEvents * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidClerkCLSID,
                       BOOL fVariants,
                       DWORD dwRecordSize);
        END_INTERFACE
    } IComCRMEventsVtbl;
    interface IComCRMEvents
    {
        CONST_VTBL struct IComCRMEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCRMRecoveryStart(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnCRMRecoveryDone(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnCRMCheckpoint(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnCRMBegin(This,pInfo,guidClerkCLSID,guidActivity,guidTx,szProgIdCompensator,szDescription) )
    ( (This)->lpVtbl -> OnCRMPrepare(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMCommit(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMAbort(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMIndoubt(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMDone(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMRelease(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMAnalyze(This,pInfo,guidClerkCLSID,dwCrmRecordType,dwRecordSize) )
    ( (This)->lpVtbl -> OnCRMWrite(This,pInfo,guidClerkCLSID,fVariants,dwRecordSize) )
    ( (This)->lpVtbl -> OnCRMForget(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMForce(This,pInfo,guidClerkCLSID) )
    ( (This)->lpVtbl -> OnCRMDeliver(This,pInfo,guidClerkCLSID,fVariants,dwRecordSize) )
EXTERN_C const IID IID_IComMethod2Events;
    typedef struct IComMethod2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComMethod2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComMethod2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComMethod2Events * This);
        HRESULT ( STDMETHODCALLTYPE *OnMethodCall2 )(
            __RPC__in IComMethod2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 oid,
                       __RPC__in REFCLSID guidCid,
                       __RPC__in REFIID guidRid,
                       DWORD dwThread,
                       ULONG iMeth);
        HRESULT ( STDMETHODCALLTYPE *OnMethodReturn2 )(
            __RPC__in IComMethod2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 oid,
                       __RPC__in REFCLSID guidCid,
                       __RPC__in REFIID guidRid,
                       DWORD dwThread,
                       ULONG iMeth,
                       HRESULT hresult);
        HRESULT ( STDMETHODCALLTYPE *OnMethodException2 )(
            __RPC__in IComMethod2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 oid,
                       __RPC__in REFCLSID guidCid,
                       __RPC__in REFIID guidRid,
                       DWORD dwThread,
                       ULONG iMeth);
        END_INTERFACE
    } IComMethod2EventsVtbl;
    interface IComMethod2Events
    {
        CONST_VTBL struct IComMethod2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnMethodCall2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth) )
    ( (This)->lpVtbl -> OnMethodReturn2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth,hresult) )
    ( (This)->lpVtbl -> OnMethodException2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth) )
EXTERN_C const IID IID_IComTrackingInfoEvents;
    typedef struct IComTrackingInfoEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComTrackingInfoEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComTrackingInfoEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComTrackingInfoEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnNewTrackingInfo )(
            __RPC__in IComTrackingInfoEvents * This,
                       __RPC__in_opt IUnknown *pToplevelCollection);
        END_INTERFACE
    } IComTrackingInfoEventsVtbl;
    interface IComTrackingInfoEvents
    {
        CONST_VTBL struct IComTrackingInfoEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNewTrackingInfo(This,pToplevelCollection) )
typedef
enum __MIDL___MIDL_itf_autosvcs_0000_0034_0001
    {
        TRKCOLL_PROCESSES = 0,
        TRKCOLL_APPLICATIONS = ( TRKCOLL_PROCESSES + 1 ) ,
        TRKCOLL_COMPONENTS = ( TRKCOLL_APPLICATIONS + 1 )
    } TRACKING_COLL_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_IComTrackingInfoCollection;
    typedef struct IComTrackingInfoCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComTrackingInfoCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComTrackingInfoCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComTrackingInfoCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Type )(
            __RPC__in IComTrackingInfoCollection * This,
                        __RPC__out TRACKING_COLL_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *Count )(
            __RPC__in IComTrackingInfoCollection * This,
                        __RPC__out ULONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IComTrackingInfoCollection * This,
                       ULONG ulIndex,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IComTrackingInfoCollectionVtbl;
    interface IComTrackingInfoCollection
    {
        CONST_VTBL struct IComTrackingInfoCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Type(This,pType) )
    ( (This)->lpVtbl -> Count(This,pCount) )
    ( (This)->lpVtbl -> Item(This,ulIndex,riid,ppv) )
EXTERN_C const IID IID_IComTrackingInfoObject;
    typedef struct IComTrackingInfoObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComTrackingInfoObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComTrackingInfoObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComTrackingInfoObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IComTrackingInfoObject * This,
                       __RPC__in LPOLESTR szPropertyName,
                        __RPC__out VARIANT *pvarOut);
        END_INTERFACE
    } IComTrackingInfoObjectVtbl;
    interface IComTrackingInfoObject
    {
        CONST_VTBL struct IComTrackingInfoObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetValue(This,szPropertyName,pvarOut) )
EXTERN_C const IID IID_IComTrackingInfoProperties;
    typedef struct IComTrackingInfoPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComTrackingInfoProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComTrackingInfoProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComTrackingInfoProperties * This);
        HRESULT ( STDMETHODCALLTYPE *PropCount )(
            __RPC__in IComTrackingInfoProperties * This,
                        __RPC__out ULONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetPropName )(
            __RPC__in IComTrackingInfoProperties * This,
                       ULONG ulIndex,
                                __RPC__deref_out_opt_string LPOLESTR *ppszPropName);
        END_INTERFACE
    } IComTrackingInfoPropertiesVtbl;
    interface IComTrackingInfoProperties
    {
        CONST_VTBL struct IComTrackingInfoPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PropCount(This,pCount) )
    ( (This)->lpVtbl -> GetPropName(This,ulIndex,ppszPropName) )
EXTERN_C const IID IID_IComApp2Events;
    typedef struct IComApp2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComApp2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComApp2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComApp2Events * This);
        HRESULT ( STDMETHODCALLTYPE *OnAppActivation2 )(
            __RPC__in IComApp2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp,
                       GUID guidProcess);
        HRESULT ( STDMETHODCALLTYPE *OnAppShutdown2 )(
            __RPC__in IComApp2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnAppForceShutdown2 )(
            __RPC__in IComApp2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp);
        HRESULT ( STDMETHODCALLTYPE *OnAppPaused2 )(
            __RPC__in IComApp2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp,
                       BOOL bPaused);
        HRESULT ( STDMETHODCALLTYPE *OnAppRecycle2 )(
            __RPC__in IComApp2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       GUID guidApp,
                       GUID guidProcess,
                       long lReason);
        END_INTERFACE
    } IComApp2EventsVtbl;
    interface IComApp2Events
    {
        CONST_VTBL struct IComApp2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnAppActivation2(This,pInfo,guidApp,guidProcess) )
    ( (This)->lpVtbl -> OnAppShutdown2(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnAppForceShutdown2(This,pInfo,guidApp) )
    ( (This)->lpVtbl -> OnAppPaused2(This,pInfo,guidApp,bPaused) )
    ( (This)->lpVtbl -> OnAppRecycle2(This,pInfo,guidApp,guidProcess,lReason) )
EXTERN_C const IID IID_IComTransaction2Events;
    typedef struct IComTransaction2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComTransaction2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComTransaction2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComTransaction2Events * This);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionStart2 )(
            __RPC__in IComTransaction2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx,
                       __RPC__in REFGUID tsid,
                       BOOL fRoot,
                       int nIsolationLevel);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionPrepare2 )(
            __RPC__in IComTransaction2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx,
                       BOOL fVoteYes);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionAbort2 )(
            __RPC__in IComTransaction2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx);
        HRESULT ( STDMETHODCALLTYPE *OnTransactionCommit2 )(
            __RPC__in IComTransaction2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidTx);
        END_INTERFACE
    } IComTransaction2EventsVtbl;
    interface IComTransaction2Events
    {
        CONST_VTBL struct IComTransaction2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTransactionStart2(This,pInfo,guidTx,tsid,fRoot,nIsolationLevel) )
    ( (This)->lpVtbl -> OnTransactionPrepare2(This,pInfo,guidTx,fVoteYes) )
    ( (This)->lpVtbl -> OnTransactionAbort2(This,pInfo,guidTx) )
    ( (This)->lpVtbl -> OnTransactionCommit2(This,pInfo,guidTx) )
EXTERN_C const IID IID_IComInstance2Events;
    typedef struct IComInstance2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComInstance2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComInstance2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComInstance2Events * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjectCreate2 )(
            __RPC__in IComInstance2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID tsid,
                       ULONG64 CtxtID,
                       ULONG64 ObjectID,
                       __RPC__in REFGUID guidPartition);
        HRESULT ( STDMETHODCALLTYPE *OnObjectDestroy2 )(
            __RPC__in IComInstance2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       ULONG64 CtxtID);
        END_INTERFACE
    } IComInstance2EventsVtbl;
    interface IComInstance2Events
    {
        CONST_VTBL struct IComInstance2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjectCreate2(This,pInfo,guidActivity,clsid,tsid,CtxtID,ObjectID,guidPartition) )
    ( (This)->lpVtbl -> OnObjectDestroy2(This,pInfo,CtxtID) )
EXTERN_C const IID IID_IComObjectPool2Events;
    typedef struct IComObjectPool2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComObjectPool2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComObjectPool2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComObjectPool2Events * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolPutObject2 )(
            __RPC__in IComObjectPool2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidObject,
                       int nReason,
                       DWORD dwAvailable,
                       ULONG64 oid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolGetObject2 )(
            __RPC__in IComObjectPool2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity,
                       __RPC__in REFGUID guidObject,
                       DWORD dwAvailable,
                       ULONG64 oid,
                       __RPC__in REFGUID guidPartition);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolRecycleToTx2 )(
            __RPC__in IComObjectPool2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity,
                       __RPC__in REFGUID guidObject,
                       __RPC__in REFGUID guidTx,
                       ULONG64 objid);
        HRESULT ( STDMETHODCALLTYPE *OnObjPoolGetFromTx2 )(
            __RPC__in IComObjectPool2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidActivity,
                       __RPC__in REFGUID guidObject,
                       __RPC__in REFGUID guidTx,
                       ULONG64 objid,
                       __RPC__in REFGUID guidPartition);
        END_INTERFACE
    } IComObjectPool2EventsVtbl;
    interface IComObjectPool2Events
    {
        CONST_VTBL struct IComObjectPool2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjPoolPutObject2(This,pInfo,guidObject,nReason,dwAvailable,oid) )
    ( (This)->lpVtbl -> OnObjPoolGetObject2(This,pInfo,guidActivity,guidObject,dwAvailable,oid,guidPartition) )
    ( (This)->lpVtbl -> OnObjPoolRecycleToTx2(This,pInfo,guidActivity,guidObject,guidTx,objid) )
    ( (This)->lpVtbl -> OnObjPoolGetFromTx2(This,pInfo,guidActivity,guidObject,guidTx,objid,guidPartition) )
EXTERN_C const IID IID_IComObjectConstruction2Events;
    typedef struct IComObjectConstruction2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComObjectConstruction2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComObjectConstruction2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComObjectConstruction2Events * This);
        HRESULT ( STDMETHODCALLTYPE *OnObjectConstruct2 )(
            __RPC__in IComObjectConstruction2Events * This,
                       __RPC__in COMSVCSEVENTINFO *pInfo,
                       __RPC__in REFGUID guidObject,
                       __RPC__in LPCOLESTR sConstructString,
                       ULONG64 oid,
                       __RPC__in REFGUID guidPartition);
        END_INTERFACE
    } IComObjectConstruction2EventsVtbl;
    interface IComObjectConstruction2Events
    {
        CONST_VTBL struct IComObjectConstruction2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnObjectConstruct2(This,pInfo,guidObject,sConstructString,oid,guidPartition) )
EXTERN_C const IID IID_ISystemAppEventData;
    typedef struct ISystemAppEventDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISystemAppEventData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISystemAppEventData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISystemAppEventData * This);
        HRESULT ( STDMETHODCALLTYPE *Startup )(
            __RPC__in ISystemAppEventData * This);
        HRESULT ( STDMETHODCALLTYPE *OnDataChanged )(
            __RPC__in ISystemAppEventData * This,
                       DWORD dwPID,
                       DWORD dwMask,
                       DWORD dwNumberSinks,
                       __RPC__in BSTR bstrDwMethodMask,
                       DWORD dwReason,
                       ULONG64 u64TraceHandle);
        END_INTERFACE
    } ISystemAppEventDataVtbl;
    interface ISystemAppEventData
    {
        CONST_VTBL struct ISystemAppEventDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Startup(This) )
    ( (This)->lpVtbl -> OnDataChanged(This,dwPID,dwMask,dwNumberSinks,bstrDwMethodMask,dwReason,u64TraceHandle) )
EXTERN_C const IID IID_IMtsEvents;
    typedef struct IMtsEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMtsEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMtsEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMtsEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMtsEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMtsEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMtsEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMtsEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PackageName )(
            __RPC__in IMtsEvents * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PackageGuid )(
            __RPC__in IMtsEvents * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *PostEvent )(
            __RPC__in IMtsEvents * This,
                       __RPC__in VARIANT *vEvent);
                                        HRESULT ( STDMETHODCALLTYPE *get_FireEvents )(
            __RPC__in IMtsEvents * This,
                                __RPC__out VARIANT_BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetProcessID )(
            __RPC__in IMtsEvents * This,
                                __RPC__out long *id);
        END_INTERFACE
    } IMtsEventsVtbl;
    interface IMtsEvents
    {
        CONST_VTBL struct IMtsEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PackageName(This,pVal) )
    ( (This)->lpVtbl -> get_PackageGuid(This,pVal) )
    ( (This)->lpVtbl -> PostEvent(This,vEvent) )
    ( (This)->lpVtbl -> get_FireEvents(This,pVal) )
    ( (This)->lpVtbl -> GetProcessID(This,id) )
EXTERN_C const IID IID_IMtsEventInfo;
    typedef struct IMtsEventInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMtsEventInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMtsEventInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMtsEventInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMtsEventInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMtsEventInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMtsEventInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMtsEventInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Names )(
            __RPC__in IMtsEventInfo * This,
                                __RPC__deref_out_opt IUnknown **pUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IMtsEventInfo * This,
                                __RPC__deref_out_opt BSTR *sDisplayName);
                                    HRESULT ( STDMETHODCALLTYPE *get_EventID )(
            __RPC__in IMtsEventInfo * This,
                                __RPC__deref_out_opt BSTR *sGuidEventID);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMtsEventInfo * This,
                                __RPC__out long *lCount);
                                    HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IMtsEventInfo * This,
                       __RPC__in BSTR sKey,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } IMtsEventInfoVtbl;
    interface IMtsEventInfo
    {
        CONST_VTBL struct IMtsEventInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Names(This,pUnk) )
    ( (This)->lpVtbl -> get_DisplayName(This,sDisplayName) )
    ( (This)->lpVtbl -> get_EventID(This,sGuidEventID) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get_Value(This,sKey,pVal) )
EXTERN_C const IID IID_IMTSLocator;
    typedef struct IMTSLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMTSLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMTSLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMTSLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMTSLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMTSLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMTSLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMTSLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetEventDispatcher )(
            __RPC__in IMTSLocator * This,
                                __RPC__deref_out_opt IUnknown **pUnk);
        END_INTERFACE
    } IMTSLocatorVtbl;
    interface IMTSLocator
    {
        CONST_VTBL struct IMTSLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetEventDispatcher(This,pUnk) )
EXTERN_C const IID IID_IMtsGrp;
    typedef struct IMtsGrpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMtsGrp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMtsGrp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMtsGrp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMtsGrp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMtsGrp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMtsGrp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMtsGrp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMtsGrp * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IMtsGrp * This,
                       long lIndex,
                        __RPC__deref_out_opt IUnknown **ppUnkDispatcher);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMtsGrp * This);
        END_INTERFACE
    } IMtsGrpVtbl;
    interface IMtsGrp
    {
        CONST_VTBL struct IMtsGrpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> Item(This,lIndex,ppUnkDispatcher) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID_IMessageMover;
    typedef struct IMessageMoverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMessageMover * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMessageMover * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMessageMover * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMessageMover * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMessageMover * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMessageMover * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMessageMover * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_SourcePath )(
            __RPC__in IMessageMover * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_SourcePath )(
            __RPC__in IMessageMover * This,
                       __RPC__in BSTR newVal);
                            HRESULT ( STDMETHODCALLTYPE *get_DestPath )(
            __RPC__in IMessageMover * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DestPath )(
            __RPC__in IMessageMover * This,
                       __RPC__in BSTR newVal);
                            HRESULT ( STDMETHODCALLTYPE *get_CommitBatchSize )(
            __RPC__in IMessageMover * This,
                                __RPC__out long *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_CommitBatchSize )(
            __RPC__in IMessageMover * This,
                       long newVal);
                   HRESULT ( STDMETHODCALLTYPE *MoveMessages )(
            __RPC__in IMessageMover * This,
                                __RPC__out long *plMessagesMoved);
        END_INTERFACE
    } IMessageMoverVtbl;
    interface IMessageMover
    {
        CONST_VTBL struct IMessageMoverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SourcePath(This,pVal) )
    ( (This)->lpVtbl -> put_SourcePath(This,newVal) )
    ( (This)->lpVtbl -> get_DestPath(This,pVal) )
    ( (This)->lpVtbl -> put_DestPath(This,newVal) )
    ( (This)->lpVtbl -> get_CommitBatchSize(This,pVal) )
    ( (This)->lpVtbl -> put_CommitBatchSize(This,newVal) )
    ( (This)->lpVtbl -> MoveMessages(This,plMessagesMoved) )
EXTERN_C const IID IID_IEventServerTrace;
    typedef struct IEventServerTraceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventServerTrace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventServerTrace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventServerTrace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventServerTrace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventServerTrace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventServerTrace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventServerTrace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *StartTraceGuid )(
            __RPC__in IEventServerTrace * This,
                       __RPC__in BSTR bstrguidEvent,
                       __RPC__in BSTR bstrguidFilter,
                       LONG lPidFilter);
                               HRESULT ( STDMETHODCALLTYPE *StopTraceGuid )(
            __RPC__in IEventServerTrace * This,
                       __RPC__in BSTR bstrguidEvent,
                       __RPC__in BSTR bstrguidFilter,
                       LONG lPidFilter);
                               HRESULT ( STDMETHODCALLTYPE *EnumTraceGuid )(
            __RPC__in IEventServerTrace * This,
                        __RPC__out LONG *plCntGuids,
                        __RPC__deref_out_opt BSTR *pbstrGuidList);
        END_INTERFACE
    } IEventServerTraceVtbl;
    interface IEventServerTrace
    {
        CONST_VTBL struct IEventServerTraceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StartTraceGuid(This,bstrguidEvent,bstrguidFilter,lPidFilter) )
    ( (This)->lpVtbl -> StopTraceGuid(This,bstrguidEvent,bstrguidFilter,lPidFilter) )
    ( (This)->lpVtbl -> EnumTraceGuid(This,plCntGuids,pbstrGuidList) )
typedef struct _RECYCLE_INFO
    {
    GUID guidCombaseProcessIdentifier;
    LONGLONG ProcessStartTime;
    DWORD dwRecycleLifetimeLimit;
    DWORD dwRecycleMemoryLimit;
    DWORD dwRecycleExpirationTimeout;
    } RECYCLE_INFO;
typedef
enum tagDUMPTYPE
    {
        DUMPTYPE_FULL = 0,
        DUMPTYPE_MINI = ( DUMPTYPE_FULL + 1 ) ,
        DUMPTYPE_NONE = ( DUMPTYPE_MINI + 1 )
    } DUMPTYPE;
typedef struct _HANG_INFO
    {
    BOOL fAppHangMonitorEnabled;
    BOOL fTerminateOnHang;
    DUMPTYPE DumpType;
    DWORD dwHangTimeout;
    DWORD dwDumpCount;
    DWORD dwInfoMsgCount;
    } HANG_INFO;
typedef
enum tagCOMPLUS_APPTYPE
    {
        APPTYPE_UNKNOWN = 0xffffffff,
        APPTYPE_SERVER = 1,
        APPTYPE_LIBRARY = 0,
        APPTYPE_SWC = 2
    } COMPLUS_APPTYPE;
typedef struct CAppStatistics
    {
    DWORD m_cTotalCalls;
    DWORD m_cTotalInstances;
    DWORD m_cTotalClasses;
    DWORD m_cCallsPerSecond;
    } APPSTATISTICS;
typedef struct CAppData
    {
    DWORD m_idApp;
    WCHAR m_szAppGuid[ 40 ];
    DWORD m_dwAppProcessId;
    APPSTATISTICS m_AppStatistics;
    } APPDATA;
typedef struct CCLSIDData
    {
    CLSID m_clsid;
    DWORD m_cReferences;
    DWORD m_cBound;
    DWORD m_cPooled;
    DWORD m_cInCall;
    DWORD m_dwRespTime;
    DWORD m_cCallsCompleted;
    DWORD m_cCallsFailed;
    } CLSIDDATA;
typedef struct CCLSIDData2
    {
    CLSID m_clsid;
    GUID m_appid;
    GUID m_partid;
                   WCHAR *m_pwszAppName;
                   WCHAR *m_pwszCtxName;
    COMPLUS_APPTYPE m_eAppType;
    DWORD m_cReferences;
    DWORD m_cBound;
    DWORD m_cPooled;
    DWORD m_cInCall;
    DWORD m_dwRespTime;
    DWORD m_cCallsCompleted;
    DWORD m_cCallsFailed;
    } CLSIDDATA2;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0049_v0_0_s_ifspec;
typedef
enum _GetAppTrackerDataFlags
    {
        GATD_INCLUDE_PROCESS_EXE_NAME = 0x1,
        GATD_INCLUDE_LIBRARY_APPS = 0x2,
        GATD_INCLUDE_SWC = 0x4,
        GATD_INCLUDE_CLASS_NAME = 0x8,
        GATD_INCLUDE_APPLICATION_NAME = 0x10
    } GetAppTrackerDataFlags;
typedef struct _ApplicationProcessSummary
    {
    GUID PartitionIdPrimaryApplication;
    GUID ApplicationIdPrimaryApplication;
    GUID ApplicationInstanceId;
    DWORD ProcessId;
    COMPLUS_APPTYPE Type;
                           LPWSTR ProcessExeName;
    BOOL IsService;
    BOOL IsPaused;
    BOOL IsRecycled;
    } ApplicationProcessSummary;
typedef struct _ApplicationProcessStatistics
    {
    ULONG NumCallsOutstanding;
    ULONG NumTrackedComponents;
    ULONG NumComponentInstances;
    ULONG AvgCallsPerSecond;
    ULONG Reserved1;
    ULONG Reserved2;
    ULONG Reserved3;
    ULONG Reserved4;
    } ApplicationProcessStatistics;
typedef struct _ApplicationProcessRecycleInfo
    {
    BOOL IsRecyclable;
    BOOL IsRecycled;
    FILETIME TimeRecycled;
    FILETIME TimeToTerminate;
    long RecycleReasonCode;
    BOOL IsPendingRecycle;
    BOOL HasAutomaticLifetimeRecycling;
    FILETIME TimeForAutomaticRecycling;
    ULONG MemoryLimitInKB;
    ULONG MemoryUsageInKBLastCheck;
    ULONG ActivationLimit;
    ULONG NumActivationsLastReported;
    ULONG CallLimit;
    ULONG NumCallsLastReported;
    } ApplicationProcessRecycleInfo;
typedef struct _ApplicationSummary
    {
    GUID ApplicationInstanceId;
    GUID PartitionId;
    GUID ApplicationId;
    COMPLUS_APPTYPE Type;
                           LPWSTR ApplicationName;
    ULONG NumTrackedComponents;
    ULONG NumComponentInstances;
    } ApplicationSummary;
typedef struct _ComponentSummary
    {
    GUID ApplicationInstanceId;
    GUID PartitionId;
    GUID ApplicationId;
    CLSID Clsid;
                           LPWSTR ClassName;
                           LPWSTR ApplicationName;
    } ComponentSummary;
typedef struct _ComponentStatistics
    {
    ULONG NumInstances;
    ULONG NumBoundReferences;
    ULONG NumPooledObjects;
    ULONG NumObjectsInCall;
    ULONG AvgResponseTimeInMs;
    ULONG NumCallsCompletedRecent;
    ULONG NumCallsFailedRecent;
    ULONG NumCallsCompletedTotal;
    ULONG NumCallsFailedTotal;
    ULONG Reserved1;
    ULONG Reserved2;
    ULONG Reserved3;
    ULONG Reserved4;
    } ComponentStatistics;
typedef struct _ComponentHangMonitorInfo
    {
    BOOL IsMonitored;
    BOOL TerminateOnHang;
    ULONG AvgCallThresholdInMs;
    } ComponentHangMonitorInfo;
EXTERN_C const IID IID_IGetAppTrackerData;
    typedef struct IGetAppTrackerDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetAppTrackerData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetAppTrackerData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetAppTrackerData * This);
                           HRESULT ( STDMETHODCALLTYPE *GetApplicationProcesses )(
            __RPC__in IGetAppTrackerData * This,
                       __RPC__in REFGUID PartitionId,
                       __RPC__in REFGUID ApplicationId,
                       DWORD Flags,
                        __RPC__out ULONG *NumApplicationProcesses,
                                          __RPC__deref_out_ecount_full_opt(*NumApplicationProcesses) ApplicationProcessSummary **ApplicationProcesses);
                                  HRESULT ( STDMETHODCALLTYPE *GetApplicationProcessDetails )(
            IGetAppTrackerData * This,
                       REFGUID ApplicationInstanceId,
                       DWORD ProcessId,
                       DWORD Flags,
            _Out_opt_ ApplicationProcessSummary *Summary,
            _Out_opt_ ApplicationProcessStatistics *Statistics,
            _Out_opt_ ApplicationProcessRecycleInfo *RecycleInfo,
            _Out_opt_ BOOL *AnyComponentsHangMonitored);
                           HRESULT ( STDMETHODCALLTYPE *GetApplicationsInProcess )(
            __RPC__in IGetAppTrackerData * This,
                       __RPC__in REFGUID ApplicationInstanceId,
                       DWORD ProcessId,
                       __RPC__in REFGUID PartitionId,
                       DWORD Flags,
                        __RPC__out ULONG *NumApplicationsInProcess,
                                          __RPC__deref_out_ecount_full_opt(*NumApplicationsInProcess) ApplicationSummary **Applications);
                           HRESULT ( STDMETHODCALLTYPE *GetComponentsInProcess )(
            __RPC__in IGetAppTrackerData * This,
                       __RPC__in REFGUID ApplicationInstanceId,
                       DWORD ProcessId,
                       __RPC__in REFGUID PartitionId,
                       __RPC__in REFGUID ApplicationId,
                       DWORD Flags,
                        __RPC__out ULONG *NumComponentsInProcess,
                                          __RPC__deref_out_ecount_full_opt(*NumComponentsInProcess) ComponentSummary **Components);
                                  HRESULT ( STDMETHODCALLTYPE *GetComponentDetails )(
            IGetAppTrackerData * This,
                       REFGUID ApplicationInstanceId,
                       DWORD ProcessId,
                       REFCLSID Clsid,
                       DWORD Flags,
            _Out_opt_ ComponentSummary *Summary,
            _Out_opt_ ComponentStatistics *Statistics,
            _Out_opt_ ComponentHangMonitorInfo *HangMonitorInfo);
                           HRESULT ( STDMETHODCALLTYPE *GetTrackerDataAsCollectionObject )(
            __RPC__in IGetAppTrackerData * This,
                        __RPC__deref_out_opt IUnknown **TopLevelCollection);
                           HRESULT ( STDMETHODCALLTYPE *GetSuggestedPollingInterval )(
            __RPC__in IGetAppTrackerData * This,
                        __RPC__out DWORD *PollingIntervalInSeconds);
        END_INTERFACE
    } IGetAppTrackerDataVtbl;
    interface IGetAppTrackerData
    {
        CONST_VTBL struct IGetAppTrackerDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetApplicationProcesses(This,PartitionId,ApplicationId,Flags,NumApplicationProcesses,ApplicationProcesses) )
    ( (This)->lpVtbl -> GetApplicationProcessDetails(This,ApplicationInstanceId,ProcessId,Flags,Summary,Statistics,RecycleInfo,AnyComponentsHangMonitored) )
    ( (This)->lpVtbl -> GetApplicationsInProcess(This,ApplicationInstanceId,ProcessId,PartitionId,Flags,NumApplicationsInProcess,Applications) )
    ( (This)->lpVtbl -> GetComponentsInProcess(This,ApplicationInstanceId,ProcessId,PartitionId,ApplicationId,Flags,NumComponentsInProcess,Components) )
    ( (This)->lpVtbl -> GetComponentDetails(This,ApplicationInstanceId,ProcessId,Clsid,Flags,Summary,Statistics,HangMonitorInfo) )
    ( (This)->lpVtbl -> GetTrackerDataAsCollectionObject(This,TopLevelCollection) )
    ( (This)->lpVtbl -> GetSuggestedPollingInterval(This,PollingIntervalInSeconds) )
                HRESULT STDMETHODCALLTYPE IGetAppTrackerData_RemoteGetApplicationProcessDetails_Proxy(
    __RPC__in IGetAppTrackerData * This,
               __RPC__in REFGUID ApplicationInstanceId,
               DWORD ProcessId,
               DWORD Flags,
                            __RPC__inout_opt ApplicationProcessSummary *Summary,
                            __RPC__inout_opt ApplicationProcessStatistics *Statistics,
                            __RPC__inout_opt ApplicationProcessRecycleInfo *RecycleInfo,
                            __RPC__inout_opt BOOL *AnyComponentsHangMonitored);
void __RPC_STUB IGetAppTrackerData_RemoteGetApplicationProcessDetails_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IGetAppTrackerData_RemoteGetComponentDetails_Proxy(
    __RPC__in IGetAppTrackerData * This,
               __RPC__in REFGUID ApplicationInstanceId,
               DWORD ProcessId,
               __RPC__in REFCLSID Clsid,
               DWORD Flags,
                            __RPC__inout_opt ComponentSummary *Summary,
                            __RPC__inout_opt ComponentStatistics *Statistics,
                            __RPC__inout_opt ComponentHangMonitorInfo *HangMonitorInfo);
void __RPC_STUB IGetAppTrackerData_RemoteGetComponentDetails_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef DWORD_PTR RESTYPID;
typedef DWORD_PTR RESID;
typedef LPOLESTR SRESID;
typedef LPCOLESTR constSRESID;
typedef DWORD RESOURCERATING;
typedef long TIMEINSECS;
typedef DWORD_PTR INSTID;
typedef DWORD_PTR TRANSID;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0050_v0_0_s_ifspec;
EXTERN_C const IID IID_IDispenserManager;
    typedef struct IDispenserManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDispenserManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDispenserManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDispenserManager * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterDispenser )(
            IDispenserManager * This,
                       IDispenserDriver *__MIDL__IDispenserManager0000,
                       LPCOLESTR szDispenserName,
                        IHolder **__MIDL__IDispenserManager0001);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            IDispenserManager * This,
                        INSTID *__MIDL__IDispenserManager0002,
                        TRANSID *__MIDL__IDispenserManager0003);
        END_INTERFACE
    } IDispenserManagerVtbl;
    interface IDispenserManager
    {
        CONST_VTBL struct IDispenserManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterDispenser(This,__MIDL__IDispenserManager0000,szDispenserName,__MIDL__IDispenserManager0001) )
    ( (This)->lpVtbl -> GetContext(This,__MIDL__IDispenserManager0002,__MIDL__IDispenserManager0003) )
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0051_v0_0_s_ifspec;
EXTERN_C const IID IID_IHolder;
    typedef struct IHolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHolder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IHolder * This);
        HRESULT ( STDMETHODCALLTYPE *AllocResource )(
            IHolder * This,
                       const RESTYPID __MIDL__IHolder0000,
                        RESID *__MIDL__IHolder0001);
        HRESULT ( STDMETHODCALLTYPE *FreeResource )(
            IHolder * This,
                       const RESID __MIDL__IHolder0002);
        HRESULT ( STDMETHODCALLTYPE *TrackResource )(
            IHolder * This,
                       const RESID __MIDL__IHolder0003);
        HRESULT ( STDMETHODCALLTYPE *TrackResourceS )(
            IHolder * This,
                       constSRESID __MIDL__IHolder0004);
        HRESULT ( STDMETHODCALLTYPE *UntrackResource )(
            IHolder * This,
                       const RESID __MIDL__IHolder0005,
                       const BOOL __MIDL__IHolder0006);
        HRESULT ( STDMETHODCALLTYPE *UntrackResourceS )(
            IHolder * This,
                       constSRESID __MIDL__IHolder0007,
                       const BOOL __MIDL__IHolder0008);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IHolder * This);
        HRESULT ( STDMETHODCALLTYPE *RequestDestroyResource )(
            IHolder * This,
                       const RESID __MIDL__IHolder0009);
        END_INTERFACE
    } IHolderVtbl;
    interface IHolder
    {
        CONST_VTBL struct IHolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllocResource(This,__MIDL__IHolder0000,__MIDL__IHolder0001) )
    ( (This)->lpVtbl -> FreeResource(This,__MIDL__IHolder0002) )
    ( (This)->lpVtbl -> TrackResource(This,__MIDL__IHolder0003) )
    ( (This)->lpVtbl -> TrackResourceS(This,__MIDL__IHolder0004) )
    ( (This)->lpVtbl -> UntrackResource(This,__MIDL__IHolder0005,__MIDL__IHolder0006) )
    ( (This)->lpVtbl -> UntrackResourceS(This,__MIDL__IHolder0007,__MIDL__IHolder0008) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> RequestDestroyResource(This,__MIDL__IHolder0009) )
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0052_v0_0_s_ifspec;
EXTERN_C const IID IID_IDispenserDriver;
    typedef struct IDispenserDriverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDispenserDriver * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDispenserDriver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDispenserDriver * This);
        HRESULT ( STDMETHODCALLTYPE *CreateResource )(
            IDispenserDriver * This,
                       const RESTYPID ResTypId,
                        RESID *pResId,
                        TIMEINSECS *pSecsFreeBeforeDestroy);
        HRESULT ( STDMETHODCALLTYPE *RateResource )(
            IDispenserDriver * This,
                       const RESTYPID ResTypId,
                       const RESID ResId,
                       const BOOL fRequiresTransactionEnlistment,
                        RESOURCERATING *pRating);
        HRESULT ( STDMETHODCALLTYPE *EnlistResource )(
            IDispenserDriver * This,
                       const RESID ResId,
                       const TRANSID TransId);
        HRESULT ( STDMETHODCALLTYPE *ResetResource )(
            IDispenserDriver * This,
                       const RESID ResId);
        HRESULT ( STDMETHODCALLTYPE *DestroyResource )(
            IDispenserDriver * This,
                       const RESID ResId);
        HRESULT ( STDMETHODCALLTYPE *DestroyResourceS )(
            IDispenserDriver * This,
                       constSRESID ResId);
        END_INTERFACE
    } IDispenserDriverVtbl;
    interface IDispenserDriver
    {
        CONST_VTBL struct IDispenserDriverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateResource(This,ResTypId,pResId,pSecsFreeBeforeDestroy) )
    ( (This)->lpVtbl -> RateResource(This,ResTypId,ResId,fRequiresTransactionEnlistment,pRating) )
    ( (This)->lpVtbl -> EnlistResource(This,ResId,TransId) )
    ( (This)->lpVtbl -> ResetResource(This,ResId) )
    ( (This)->lpVtbl -> DestroyResource(This,ResId) )
    ( (This)->lpVtbl -> DestroyResourceS(This,ResId) )
EXTERN_C const CLSID CLSID_MTSPackage;
EXTERN_C const GUID GUID_DefaultAppPartition;
EXTERN_C const GUID GUID_FinalizerCID;
EXTERN_C const GUID IID_IEnterActivityWithNoLock;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0053_v0_0_s_ifspec;
EXTERN_C const IID IID_ITransactionProxy;
    typedef struct ITransactionProxyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITransactionProxy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITransactionProxy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITransactionProxy * This);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ITransactionProxy * This,
                       GUID guid);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            ITransactionProxy * This);
        HRESULT ( STDMETHODCALLTYPE *Promote )(
            ITransactionProxy * This,
                        ITransaction **pTransaction);
        HRESULT ( STDMETHODCALLTYPE *CreateVoter )(
            ITransactionProxy * This,
                       ITransactionVoterNotifyAsync2 *pTxAsync,
                        ITransactionVoterBallotAsync2 **ppBallot);
        HRESULT ( STDMETHODCALLTYPE *GetIsolationLevel )(
            ITransactionProxy * This,
                                ISOLEVEL *__MIDL__ITransactionProxy0000);
        HRESULT ( STDMETHODCALLTYPE *GetIdentifier )(
            ITransactionProxy * This,
                                GUID *pbstrIdentifier);
        HRESULT ( STDMETHODCALLTYPE *IsReusable )(
            ITransactionProxy * This,
                        BOOL *pfIsReusable);
        END_INTERFACE
    } ITransactionProxyVtbl;
    interface ITransactionProxy
    {
        CONST_VTBL struct ITransactionProxyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Commit(This,guid) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> Promote(This,pTransaction) )
    ( (This)->lpVtbl -> CreateVoter(This,pTxAsync,ppBallot) )
    ( (This)->lpVtbl -> GetIsolationLevel(This,__MIDL__ITransactionProxy0000) )
    ( (This)->lpVtbl -> GetIdentifier(This,pbstrIdentifier) )
    ( (This)->lpVtbl -> IsReusable(This,pfIsReusable) )
EXTERN_C const IID IID_IContextSecurityPerimeter;
    typedef struct IContextSecurityPerimeterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IContextSecurityPerimeter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IContextSecurityPerimeter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IContextSecurityPerimeter * This);
        HRESULT ( STDMETHODCALLTYPE *GetPerimeterFlag )(
            IContextSecurityPerimeter * This,
                        BOOL *pFlag);
        HRESULT ( STDMETHODCALLTYPE *SetPerimeterFlag )(
            IContextSecurityPerimeter * This,
                       BOOL fFlag);
        END_INTERFACE
    } IContextSecurityPerimeterVtbl;
    interface IContextSecurityPerimeter
    {
        CONST_VTBL struct IContextSecurityPerimeterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPerimeterFlag(This,pFlag) )
    ( (This)->lpVtbl -> SetPerimeterFlag(This,fFlag) )
EXTERN_C const IID IID_ITxProxyHolder;
    typedef struct ITxProxyHolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITxProxyHolder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITxProxyHolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITxProxyHolder * This);
        void ( STDMETHODCALLTYPE *GetIdentifier )(
            ITxProxyHolder * This,
                        GUID *pGuidLtx);
        END_INTERFACE
    } ITxProxyHolderVtbl;
    interface ITxProxyHolder
    {
        CONST_VTBL struct ITxProxyHolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdentifier(This,pGuidLtx) )
EXTERN_C const IID IID_IObjectContext;
    typedef struct IObjectContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectContext * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IObjectContext * This,
                       REFCLSID rclsid,
                       REFIID riid,
                                        LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetComplete )(
            IObjectContext * This);
        HRESULT ( STDMETHODCALLTYPE *SetAbort )(
            IObjectContext * This);
        HRESULT ( STDMETHODCALLTYPE *EnableCommit )(
            IObjectContext * This);
        HRESULT ( STDMETHODCALLTYPE *DisableCommit )(
            IObjectContext * This);
        BOOL ( STDMETHODCALLTYPE *IsInTransaction )(
            IObjectContext * This);
        BOOL ( STDMETHODCALLTYPE *IsSecurityEnabled )(
            IObjectContext * This);
        HRESULT ( STDMETHODCALLTYPE *IsCallerInRole )(
            IObjectContext * This,
                       BSTR bstrRole,
                                BOOL *pfIsInRole);
        END_INTERFACE
    } IObjectContextVtbl;
    interface IObjectContext
    {
        CONST_VTBL struct IObjectContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,rclsid,riid,ppv) )
    ( (This)->lpVtbl -> SetComplete(This) )
    ( (This)->lpVtbl -> SetAbort(This) )
    ( (This)->lpVtbl -> EnableCommit(This) )
    ( (This)->lpVtbl -> DisableCommit(This) )
    ( (This)->lpVtbl -> IsInTransaction(This) )
    ( (This)->lpVtbl -> IsSecurityEnabled(This) )
    ( (This)->lpVtbl -> IsCallerInRole(This,bstrRole,pfIsInRole) )
EXTERN_C const IID IID_IObjectControl;
    typedef struct IObjectControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectControl * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            IObjectControl * This);
        void ( STDMETHODCALLTYPE *Deactivate )(
            IObjectControl * This);
        BOOL ( STDMETHODCALLTYPE *CanBePooled )(
            IObjectControl * This);
        END_INTERFACE
    } IObjectControlVtbl;
    interface IObjectControl
    {
        CONST_VTBL struct IObjectControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> CanBePooled(This) )
EXTERN_C const IID IID_IEnumNames;
    typedef struct IEnumNamesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumNames * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumNames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumNames * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumNames * This,
                       unsigned long celt,
                                 BSTR *rgname,
                                unsigned long *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumNames * This,
                       unsigned long celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumNames * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumNames * This,
                                IEnumNames **ppenum);
        END_INTERFACE
    } IEnumNamesVtbl;
    interface IEnumNames
    {
        CONST_VTBL struct IEnumNamesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgname,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_ISecurityProperty;
    typedef struct ISecurityPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISecurityProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISecurityProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISecurityProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetDirectCreatorSID )(
            ISecurityProperty * This,
            PSID *pSID);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalCreatorSID )(
            ISecurityProperty * This,
            PSID *pSID);
        HRESULT ( STDMETHODCALLTYPE *GetDirectCallerSID )(
            ISecurityProperty * This,
            PSID *pSID);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalCallerSID )(
            ISecurityProperty * This,
            PSID *pSID);
        HRESULT ( STDMETHODCALLTYPE *ReleaseSID )(
            ISecurityProperty * This,
            PSID pSID);
        END_INTERFACE
    } ISecurityPropertyVtbl;
    interface ISecurityProperty
    {
        CONST_VTBL struct ISecurityPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDirectCreatorSID(This,pSID) )
    ( (This)->lpVtbl -> GetOriginalCreatorSID(This,pSID) )
    ( (This)->lpVtbl -> GetDirectCallerSID(This,pSID) )
    ( (This)->lpVtbl -> GetOriginalCallerSID(This,pSID) )
    ( (This)->lpVtbl -> ReleaseSID(This,pSID) )
EXTERN_C const IID IID_ObjectControl;
    typedef struct ObjectControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ObjectControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ObjectControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ObjectControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *Activate )(
            ObjectControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            ObjectControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *CanBePooled )(
            ObjectControl * This,
                                VARIANT_BOOL *pbPoolable);
        END_INTERFACE
    } ObjectControlVtbl;
    interface ObjectControl
    {
        CONST_VTBL struct ObjectControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> CanBePooled(This,pbPoolable) )
EXTERN_C const IID IID_ISharedProperty;
    typedef struct ISharedPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISharedProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISharedProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISharedProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISharedProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISharedProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISharedProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISharedProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ISharedProperty * This,
                                __RPC__out VARIANT *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ISharedProperty * This,
                       VARIANT val);
        END_INTERFACE
    } ISharedPropertyVtbl;
    interface ISharedProperty
    {
        CONST_VTBL struct ISharedPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,pVal) )
    ( (This)->lpVtbl -> put_Value(This,val) )
EXTERN_C const IID IID_ISharedPropertyGroup;
    typedef struct ISharedPropertyGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISharedPropertyGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISharedPropertyGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISharedPropertyGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISharedPropertyGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISharedPropertyGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISharedPropertyGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISharedPropertyGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *CreatePropertyByPosition )(
            __RPC__in ISharedPropertyGroup * This,
                       int Index,
                        __RPC__out VARIANT_BOOL *fExists,
                                __RPC__deref_out_opt ISharedProperty **ppProp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PropertyByPosition )(
            __RPC__in ISharedPropertyGroup * This,
                       int Index,
                                __RPC__deref_out_opt ISharedProperty **ppProperty);
                                            HRESULT ( STDMETHODCALLTYPE *CreateProperty )(
            __RPC__in ISharedPropertyGroup * This,
                       __RPC__in BSTR Name,
                        __RPC__out VARIANT_BOOL *fExists,
                                __RPC__deref_out_opt ISharedProperty **ppProp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in ISharedPropertyGroup * This,
                       __RPC__in BSTR Name,
                                __RPC__deref_out_opt ISharedProperty **ppProperty);
        END_INTERFACE
    } ISharedPropertyGroupVtbl;
    interface ISharedPropertyGroup
    {
        CONST_VTBL struct ISharedPropertyGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreatePropertyByPosition(This,Index,fExists,ppProp) )
    ( (This)->lpVtbl -> get_PropertyByPosition(This,Index,ppProperty) )
    ( (This)->lpVtbl -> CreateProperty(This,Name,fExists,ppProp) )
    ( (This)->lpVtbl -> get_Property(This,Name,ppProperty) )
EXTERN_C const IID IID_ISharedPropertyGroupManager;
    typedef struct ISharedPropertyGroupManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISharedPropertyGroupManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISharedPropertyGroupManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISharedPropertyGroupManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISharedPropertyGroupManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISharedPropertyGroupManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISharedPropertyGroupManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISharedPropertyGroupManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *CreatePropertyGroup )(
            __RPC__in ISharedPropertyGroupManager * This,
                       __RPC__in BSTR Name,
                            __RPC__inout LONG *dwIsoMode,
                            __RPC__inout LONG *dwRelMode,
                        __RPC__out VARIANT_BOOL *fExists,
                                __RPC__deref_out_opt ISharedPropertyGroup **ppGroup);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Group )(
            __RPC__in ISharedPropertyGroupManager * This,
                       __RPC__in BSTR Name,
                                __RPC__deref_out_opt ISharedPropertyGroup **ppGroup);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISharedPropertyGroupManager * This,
                                __RPC__deref_out_opt IUnknown **retval);
        END_INTERFACE
    } ISharedPropertyGroupManagerVtbl;
    interface ISharedPropertyGroupManager
    {
        CONST_VTBL struct ISharedPropertyGroupManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreatePropertyGroup(This,Name,dwIsoMode,dwRelMode,fExists,ppGroup) )
    ( (This)->lpVtbl -> get_Group(This,Name,ppGroup) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
EXTERN_C const IID IID_IObjectConstruct;
    typedef struct IObjectConstructVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectConstruct * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectConstruct * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectConstruct * This);
        HRESULT ( STDMETHODCALLTYPE *Construct )(
            IObjectConstruct * This,
                       IDispatch *pCtorObj);
        END_INTERFACE
    } IObjectConstructVtbl;
    interface IObjectConstruct
    {
        CONST_VTBL struct IObjectConstructVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Construct(This,pCtorObj) )
EXTERN_C const IID IID_IObjectConstructString;
    typedef struct IObjectConstructStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectConstructString * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectConstructString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectConstructString * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IObjectConstructString * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IObjectConstructString * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IObjectConstructString * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IObjectConstructString * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConstructString )(
            IObjectConstructString * This,
                                BSTR *pVal);
        END_INTERFACE
    } IObjectConstructStringVtbl;
    interface IObjectConstructString
    {
        CONST_VTBL struct IObjectConstructStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ConstructString(This,pVal) )
EXTERN_C const IID IID_IObjectContextActivity;
    typedef struct IObjectContextActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectContextActivity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectContextActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectContextActivity * This);
        HRESULT ( STDMETHODCALLTYPE *GetActivityId )(
            IObjectContextActivity * This,
                        GUID *pGUID);
        END_INTERFACE
    } IObjectContextActivityVtbl;
    interface IObjectContextActivity
    {
        CONST_VTBL struct IObjectContextActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetActivityId(This,pGUID) )
EXTERN_C const IID IID_IObjectContextInfo;
    typedef struct IObjectContextInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectContextInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectContextInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectContextInfo * This);
        BOOL ( STDMETHODCALLTYPE *IsInTransaction )(
            IObjectContextInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTransaction )(
            IObjectContextInfo * This,
            IUnknown **pptrans);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionId )(
            IObjectContextInfo * This,
                        GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetActivityId )(
            IObjectContextInfo * This,
                        GUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetContextId )(
            IObjectContextInfo * This,
                        GUID *pGuid);
        END_INTERFACE
    } IObjectContextInfoVtbl;
    interface IObjectContextInfo
    {
        CONST_VTBL struct IObjectContextInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsInTransaction(This) )
    ( (This)->lpVtbl -> GetTransaction(This,pptrans) )
    ( (This)->lpVtbl -> GetTransactionId(This,pGuid) )
    ( (This)->lpVtbl -> GetActivityId(This,pGUID) )
    ( (This)->lpVtbl -> GetContextId(This,pGuid) )
EXTERN_C const IID IID_IObjectContextInfo2;
    typedef struct IObjectContextInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectContextInfo2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectContextInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectContextInfo2 * This);
        BOOL ( STDMETHODCALLTYPE *IsInTransaction )(
            IObjectContextInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTransaction )(
            IObjectContextInfo2 * This,
            IUnknown **pptrans);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionId )(
            IObjectContextInfo2 * This,
                        GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetActivityId )(
            IObjectContextInfo2 * This,
                        GUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetContextId )(
            IObjectContextInfo2 * This,
                        GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetPartitionId )(
            IObjectContextInfo2 * This,
                        GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetApplicationId )(
            IObjectContextInfo2 * This,
                        GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetApplicationInstanceId )(
            IObjectContextInfo2 * This,
                        GUID *pGuid);
        END_INTERFACE
    } IObjectContextInfo2Vtbl;
    interface IObjectContextInfo2
    {
        CONST_VTBL struct IObjectContextInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsInTransaction(This) )
    ( (This)->lpVtbl -> GetTransaction(This,pptrans) )
    ( (This)->lpVtbl -> GetTransactionId(This,pGuid) )
    ( (This)->lpVtbl -> GetActivityId(This,pGUID) )
    ( (This)->lpVtbl -> GetContextId(This,pGuid) )
    ( (This)->lpVtbl -> GetPartitionId(This,pGuid) )
    ( (This)->lpVtbl -> GetApplicationId(This,pGuid) )
    ( (This)->lpVtbl -> GetApplicationInstanceId(This,pGuid) )
EXTERN_C const IID IID_ITransactionStatus;
    typedef struct ITransactionStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITransactionStatus * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITransactionStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITransactionStatus * This);
        HRESULT ( STDMETHODCALLTYPE *SetTransactionStatus )(
            ITransactionStatus * This,
            HRESULT hrStatus);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionStatus )(
            ITransactionStatus * This,
            HRESULT *pHrStatus);
        END_INTERFACE
    } ITransactionStatusVtbl;
    interface ITransactionStatus
    {
        CONST_VTBL struct ITransactionStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTransactionStatus(This,hrStatus) )
    ( (This)->lpVtbl -> GetTransactionStatus(This,pHrStatus) )
EXTERN_C const IID IID_IObjectContextTip;
    typedef struct IObjectContextTipVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjectContextTip * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjectContextTip * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjectContextTip * This);
        HRESULT ( STDMETHODCALLTYPE *GetTipUrl )(
            IObjectContextTip * This,
                                BSTR *pTipUrl);
        END_INTERFACE
    } IObjectContextTipVtbl;
    interface IObjectContextTip
    {
        CONST_VTBL struct IObjectContextTipVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTipUrl(This,pTipUrl) )
EXTERN_C const IID IID_IPlaybackControl;
    typedef struct IPlaybackControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPlaybackControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPlaybackControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPlaybackControl * This);
        HRESULT ( STDMETHODCALLTYPE *FinalClientRetry )(
            __RPC__in IPlaybackControl * This);
        HRESULT ( STDMETHODCALLTYPE *FinalServerRetry )(
            __RPC__in IPlaybackControl * This);
        END_INTERFACE
    } IPlaybackControlVtbl;
    interface IPlaybackControl
    {
        CONST_VTBL struct IPlaybackControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FinalClientRetry(This) )
    ( (This)->lpVtbl -> FinalServerRetry(This) )
EXTERN_C const IID IID_IGetContextProperties;
    typedef struct IGetContextPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGetContextProperties * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGetContextProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGetContextProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Count )(
            IGetContextProperties * This,
                                long *plCount);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IGetContextProperties * This,
                       BSTR name,
                                VARIANT *pProperty);
        HRESULT ( STDMETHODCALLTYPE *EnumNames )(
            IGetContextProperties * This,
                                IEnumNames **ppenum);
        END_INTERFACE
    } IGetContextPropertiesVtbl;
    interface IGetContextProperties
    {
        CONST_VTBL struct IGetContextPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Count(This,plCount) )
    ( (This)->lpVtbl -> GetProperty(This,name,pProperty) )
    ( (This)->lpVtbl -> EnumNames(This,ppenum) )
typedef
enum tagTransactionVote
    {
        TxCommit = 0,
        TxAbort = ( TxCommit + 1 )
    } TransactionVote;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0073_v0_0_s_ifspec;
EXTERN_C const IID IID_IContextState;
    typedef struct IContextStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IContextState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IContextState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IContextState * This);
        HRESULT ( STDMETHODCALLTYPE *SetDeactivateOnReturn )(
            IContextState * This,
            VARIANT_BOOL bDeactivate);
        HRESULT ( STDMETHODCALLTYPE *GetDeactivateOnReturn )(
            IContextState * This,
                        VARIANT_BOOL *pbDeactivate);
        HRESULT ( STDMETHODCALLTYPE *SetMyTransactionVote )(
            IContextState * This,
            TransactionVote txVote);
        HRESULT ( STDMETHODCALLTYPE *GetMyTransactionVote )(
            IContextState * This,
                        TransactionVote *ptxVote);
        END_INTERFACE
    } IContextStateVtbl;
    interface IContextState
    {
        CONST_VTBL struct IContextStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDeactivateOnReturn(This,bDeactivate) )
    ( (This)->lpVtbl -> GetDeactivateOnReturn(This,pbDeactivate) )
    ( (This)->lpVtbl -> SetMyTransactionVote(This,txVote) )
    ( (This)->lpVtbl -> GetMyTransactionVote(This,ptxVote) )
EXTERN_C const IID IID_IPoolManager;
    typedef struct IPoolManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPoolManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPoolManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPoolManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPoolManager * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPoolManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPoolManager * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPoolManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *ShutdownPool )(
            IPoolManager * This,
                       BSTR CLSIDOrProgID);
        END_INTERFACE
    } IPoolManagerVtbl;
    interface IPoolManager
    {
        CONST_VTBL struct IPoolManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ShutdownPool(This,CLSIDOrProgID) )
EXTERN_C const IID IID_ISelectCOMLBServer;
    typedef struct ISelectCOMLBServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISelectCOMLBServer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISelectCOMLBServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISelectCOMLBServer * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ISelectCOMLBServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetLBServer )(
            ISelectCOMLBServer * This,
                       IUnknown *pUnk);
        END_INTERFACE
    } ISelectCOMLBServerVtbl;
    interface ISelectCOMLBServer
    {
        CONST_VTBL struct ISelectCOMLBServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This) )
    ( (This)->lpVtbl -> GetLBServer(This,pUnk) )
EXTERN_C const IID IID_ICOMLBArguments;
    typedef struct ICOMLBArgumentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICOMLBArguments * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICOMLBArguments * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICOMLBArguments * This);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            ICOMLBArguments * This,
                        CLSID *pCLSID);
        HRESULT ( STDMETHODCALLTYPE *SetCLSID )(
            ICOMLBArguments * This,
                       CLSID *pCLSID);
        HRESULT ( STDMETHODCALLTYPE *GetMachineName )(
            ICOMLBArguments * This,
                       ULONG cchSvr,
            _Out_writes_(cchSvr) WCHAR szServerName[ ]);
        HRESULT ( STDMETHODCALLTYPE *SetMachineName )(
            ICOMLBArguments * This,
                       ULONG cchSvr,
            _In_reads_(cchSvr) WCHAR szServerName[ ]);
        END_INTERFACE
    } ICOMLBArgumentsVtbl;
    interface ICOMLBArguments
    {
        CONST_VTBL struct ICOMLBArgumentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCLSID(This,pCLSID) )
    ( (This)->lpVtbl -> SetCLSID(This,pCLSID) )
    ( (This)->lpVtbl -> GetMachineName(This,cchSvr,szServerName) )
    ( (This)->lpVtbl -> SetMachineName(This,cchSvr,szServerName) )
EXTERN_C HRESULT __stdcall CoCreateActivity(IUnknown* pIUnknown, REFIID riid, void** ppObj );
EXTERN_C HRESULT __stdcall CoEnterServiceDomain(IUnknown* pConfigObject);
EXTERN_C void __stdcall CoLeaveServiceDomain(IUnknown *pUnkStatus);
EXTERN_C HRESULT __stdcall GetManagedExtensions(DWORD* dwExts);
extern void* __cdecl SafeRef(REFIID rid, IUnknown* pUnk);
extern HRESULT __cdecl RecycleSurrogate(long lReasonCode);
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0077_v0_0_s_ifspec;
EXTERN_C const IID IID_ICrmLogControl;
    typedef struct ICrmLogControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmLogControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmLogControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmLogControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransactionUOW )(
            __RPC__in ICrmLogControl * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *RegisterCompensator )(
            __RPC__in ICrmLogControl * This,
                       __RPC__in LPCWSTR lpcwstrProgIdCompensator,
                       __RPC__in LPCWSTR lpcwstrDescription,
                       LONG lCrmRegFlags);
                               HRESULT ( STDMETHODCALLTYPE *WriteLogRecordVariants )(
            __RPC__in ICrmLogControl * This,
                       __RPC__in VARIANT *pLogRecord);
                               HRESULT ( STDMETHODCALLTYPE *ForceLog )(
            __RPC__in ICrmLogControl * This);
                               HRESULT ( STDMETHODCALLTYPE *ForgetLogRecord )(
            __RPC__in ICrmLogControl * This);
                               HRESULT ( STDMETHODCALLTYPE *ForceTransactionToAbort )(
            __RPC__in ICrmLogControl * This);
        HRESULT ( STDMETHODCALLTYPE *WriteLogRecord )(
            __RPC__in ICrmLogControl * This,
                                __RPC__in_ecount_full(cBlob) BLOB rgBlob[ ],
                       ULONG cBlob);
        END_INTERFACE
    } ICrmLogControlVtbl;
    interface ICrmLogControl
    {
        CONST_VTBL struct ICrmLogControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TransactionUOW(This,pVal) )
    ( (This)->lpVtbl -> RegisterCompensator(This,lpcwstrProgIdCompensator,lpcwstrDescription,lCrmRegFlags) )
    ( (This)->lpVtbl -> WriteLogRecordVariants(This,pLogRecord) )
    ( (This)->lpVtbl -> ForceLog(This) )
    ( (This)->lpVtbl -> ForgetLogRecord(This) )
    ( (This)->lpVtbl -> ForceTransactionToAbort(This) )
    ( (This)->lpVtbl -> WriteLogRecord(This,rgBlob,cBlob) )
EXTERN_C const IID IID_ICrmCompensatorVariants;
    typedef struct ICrmCompensatorVariantsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmCompensatorVariants * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmCompensatorVariants * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmCompensatorVariants * This);
                               HRESULT ( STDMETHODCALLTYPE *SetLogControlVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                       __RPC__in_opt ICrmLogControl *pLogControl);
                               HRESULT ( STDMETHODCALLTYPE *BeginPrepareVariants )(
            __RPC__in ICrmCompensatorVariants * This);
                               HRESULT ( STDMETHODCALLTYPE *PrepareRecordVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                       __RPC__in VARIANT *pLogRecord,
                                __RPC__out VARIANT_BOOL *pbForget);
                               HRESULT ( STDMETHODCALLTYPE *EndPrepareVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                                __RPC__out VARIANT_BOOL *pbOkToPrepare);
                               HRESULT ( STDMETHODCALLTYPE *BeginCommitVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                       VARIANT_BOOL bRecovery);
                               HRESULT ( STDMETHODCALLTYPE *CommitRecordVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                       __RPC__in VARIANT *pLogRecord,
                                __RPC__out VARIANT_BOOL *pbForget);
                               HRESULT ( STDMETHODCALLTYPE *EndCommitVariants )(
            __RPC__in ICrmCompensatorVariants * This);
                               HRESULT ( STDMETHODCALLTYPE *BeginAbortVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                       VARIANT_BOOL bRecovery);
                               HRESULT ( STDMETHODCALLTYPE *AbortRecordVariants )(
            __RPC__in ICrmCompensatorVariants * This,
                       __RPC__in VARIANT *pLogRecord,
                                __RPC__out VARIANT_BOOL *pbForget);
                               HRESULT ( STDMETHODCALLTYPE *EndAbortVariants )(
            __RPC__in ICrmCompensatorVariants * This);
        END_INTERFACE
    } ICrmCompensatorVariantsVtbl;
    interface ICrmCompensatorVariants
    {
        CONST_VTBL struct ICrmCompensatorVariantsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetLogControlVariants(This,pLogControl) )
    ( (This)->lpVtbl -> BeginPrepareVariants(This) )
    ( (This)->lpVtbl -> PrepareRecordVariants(This,pLogRecord,pbForget) )
    ( (This)->lpVtbl -> EndPrepareVariants(This,pbOkToPrepare) )
    ( (This)->lpVtbl -> BeginCommitVariants(This,bRecovery) )
    ( (This)->lpVtbl -> CommitRecordVariants(This,pLogRecord,pbForget) )
    ( (This)->lpVtbl -> EndCommitVariants(This) )
    ( (This)->lpVtbl -> BeginAbortVariants(This,bRecovery) )
    ( (This)->lpVtbl -> AbortRecordVariants(This,pLogRecord,pbForget) )
    ( (This)->lpVtbl -> EndAbortVariants(This) )
typedef struct tagCrmLogRecordRead
    {
    DWORD dwCrmFlags;
    DWORD dwSequenceNumber;
    BLOB blobUserData;
    } CrmLogRecordRead;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0079_v0_0_s_ifspec;
EXTERN_C const IID IID_ICrmCompensator;
    typedef struct ICrmCompensatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmCompensator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmCompensator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmCompensator * This);
        HRESULT ( STDMETHODCALLTYPE *SetLogControl )(
            __RPC__in ICrmCompensator * This,
                       __RPC__in_opt ICrmLogControl *pLogControl);
        HRESULT ( STDMETHODCALLTYPE *BeginPrepare )(
            __RPC__in ICrmCompensator * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareRecord )(
            __RPC__in ICrmCompensator * This,
                       CrmLogRecordRead crmLogRec,
                                __RPC__out BOOL *pfForget);
        HRESULT ( STDMETHODCALLTYPE *EndPrepare )(
            __RPC__in ICrmCompensator * This,
                                __RPC__out BOOL *pfOkToPrepare);
        HRESULT ( STDMETHODCALLTYPE *BeginCommit )(
            __RPC__in ICrmCompensator * This,
                       BOOL fRecovery);
        HRESULT ( STDMETHODCALLTYPE *CommitRecord )(
            __RPC__in ICrmCompensator * This,
                       CrmLogRecordRead crmLogRec,
                                __RPC__out BOOL *pfForget);
        HRESULT ( STDMETHODCALLTYPE *EndCommit )(
            __RPC__in ICrmCompensator * This);
        HRESULT ( STDMETHODCALLTYPE *BeginAbort )(
            __RPC__in ICrmCompensator * This,
                       BOOL fRecovery);
        HRESULT ( STDMETHODCALLTYPE *AbortRecord )(
            __RPC__in ICrmCompensator * This,
                       CrmLogRecordRead crmLogRec,
                                __RPC__out BOOL *pfForget);
        HRESULT ( STDMETHODCALLTYPE *EndAbort )(
            __RPC__in ICrmCompensator * This);
        END_INTERFACE
    } ICrmCompensatorVtbl;
    interface ICrmCompensator
    {
        CONST_VTBL struct ICrmCompensatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetLogControl(This,pLogControl) )
    ( (This)->lpVtbl -> BeginPrepare(This) )
    ( (This)->lpVtbl -> PrepareRecord(This,crmLogRec,pfForget) )
    ( (This)->lpVtbl -> EndPrepare(This,pfOkToPrepare) )
    ( (This)->lpVtbl -> BeginCommit(This,fRecovery) )
    ( (This)->lpVtbl -> CommitRecord(This,crmLogRec,pfForget) )
    ( (This)->lpVtbl -> EndCommit(This) )
    ( (This)->lpVtbl -> BeginAbort(This,fRecovery) )
    ( (This)->lpVtbl -> AbortRecord(This,crmLogRec,pfForget) )
    ( (This)->lpVtbl -> EndAbort(This) )
typedef
enum tagCrmTransactionState
    {
        TxState_Active = 0,
        TxState_Committed = ( TxState_Active + 1 ) ,
        TxState_Aborted = ( TxState_Committed + 1 ) ,
        TxState_Indoubt = ( TxState_Aborted + 1 )
    } CrmTransactionState;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0080_v0_0_s_ifspec;
EXTERN_C const IID IID_ICrmMonitorLogRecords;
    typedef struct ICrmMonitorLogRecordsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmMonitorLogRecords * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmMonitorLogRecords * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmMonitorLogRecords * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICrmMonitorLogRecords * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransactionState )(
            __RPC__in ICrmMonitorLogRecords * This,
                                __RPC__out CrmTransactionState *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StructuredRecords )(
            __RPC__in ICrmMonitorLogRecords * This,
                                __RPC__out VARIANT_BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetLogRecord )(
            __RPC__in ICrmMonitorLogRecords * This,
                       DWORD dwIndex,
                            __RPC__inout CrmLogRecordRead *pCrmLogRec);
                               HRESULT ( STDMETHODCALLTYPE *GetLogRecordVariants )(
            __RPC__in ICrmMonitorLogRecords * This,
                       VARIANT IndexNumber,
                                __RPC__out LPVARIANT pLogRecord);
        END_INTERFACE
    } ICrmMonitorLogRecordsVtbl;
    interface ICrmMonitorLogRecords
    {
        CONST_VTBL struct ICrmMonitorLogRecordsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_TransactionState(This,pVal) )
    ( (This)->lpVtbl -> get_StructuredRecords(This,pVal) )
    ( (This)->lpVtbl -> GetLogRecord(This,dwIndex,pCrmLogRec) )
    ( (This)->lpVtbl -> GetLogRecordVariants(This,IndexNumber,pLogRecord) )
EXTERN_C const IID IID_ICrmMonitorClerks;
    typedef struct ICrmMonitorClerksVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmMonitorClerks * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmMonitorClerks * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmMonitorClerks * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICrmMonitorClerks * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICrmMonitorClerks * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICrmMonitorClerks * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICrmMonitorClerks * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ICrmMonitorClerks * This,
                       VARIANT Index,
                                __RPC__out LPVARIANT pItem);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICrmMonitorClerks * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICrmMonitorClerks * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *ProgIdCompensator )(
            __RPC__in ICrmMonitorClerks * This,
                       VARIANT Index,
                                __RPC__out LPVARIANT pItem);
                               HRESULT ( STDMETHODCALLTYPE *Description )(
            __RPC__in ICrmMonitorClerks * This,
                       VARIANT Index,
                                __RPC__out LPVARIANT pItem);
                               HRESULT ( STDMETHODCALLTYPE *TransactionUOW )(
            __RPC__in ICrmMonitorClerks * This,
                       VARIANT Index,
                                __RPC__out LPVARIANT pItem);
                               HRESULT ( STDMETHODCALLTYPE *ActivityId )(
            __RPC__in ICrmMonitorClerks * This,
                       VARIANT Index,
                                __RPC__out LPVARIANT pItem);
        END_INTERFACE
    } ICrmMonitorClerksVtbl;
    interface ICrmMonitorClerks
    {
        CONST_VTBL struct ICrmMonitorClerksVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Item(This,Index,pItem) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> ProgIdCompensator(This,Index,pItem) )
    ( (This)->lpVtbl -> Description(This,Index,pItem) )
    ( (This)->lpVtbl -> TransactionUOW(This,Index,pItem) )
    ( (This)->lpVtbl -> ActivityId(This,Index,pItem) )
EXTERN_C const IID IID_ICrmMonitor;
    typedef struct ICrmMonitorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmMonitor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmMonitor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmMonitor * This);
                               HRESULT ( STDMETHODCALLTYPE *GetClerks )(
            __RPC__in ICrmMonitor * This,
                                __RPC__deref_out_opt ICrmMonitorClerks **pClerks);
                               HRESULT ( STDMETHODCALLTYPE *HoldClerk )(
            __RPC__in ICrmMonitor * This,
                       VARIANT Index,
                                __RPC__out LPVARIANT pItem);
        END_INTERFACE
    } ICrmMonitorVtbl;
    interface ICrmMonitor
    {
        CONST_VTBL struct ICrmMonitorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClerks(This,pClerks) )
    ( (This)->lpVtbl -> HoldClerk(This,Index,pItem) )
EXTERN_C const IID IID_ICrmFormatLogRecords;
    typedef struct ICrmFormatLogRecordsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICrmFormatLogRecords * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICrmFormatLogRecords * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICrmFormatLogRecords * This);
                               HRESULT ( STDMETHODCALLTYPE *GetColumnCount )(
            __RPC__in ICrmFormatLogRecords * This,
                        __RPC__out long *plColumnCount);
                               HRESULT ( STDMETHODCALLTYPE *GetColumnHeaders )(
            __RPC__in ICrmFormatLogRecords * This,
                        __RPC__out LPVARIANT pHeaders);
                               HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            __RPC__in ICrmFormatLogRecords * This,
                       CrmLogRecordRead CrmLogRec,
                        __RPC__out LPVARIANT pFormattedLogRecord);
                               HRESULT ( STDMETHODCALLTYPE *GetColumnVariants )(
            __RPC__in ICrmFormatLogRecords * This,
                       VARIANT LogRecord,
                        __RPC__out LPVARIANT pFormattedLogRecord);
        END_INTERFACE
    } ICrmFormatLogRecordsVtbl;
    interface ICrmFormatLogRecords
    {
        CONST_VTBL struct ICrmFormatLogRecordsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetColumnCount(This,plColumnCount) )
    ( (This)->lpVtbl -> GetColumnHeaders(This,pHeaders) )
    ( (This)->lpVtbl -> GetColumn(This,CrmLogRec,pFormattedLogRecord) )
    ( (This)->lpVtbl -> GetColumnVariants(This,LogRecord,pFormattedLogRecord) )
typedef
enum tagCSC_InheritanceConfig
    {
        CSC_Inherit = 0,
        CSC_Ignore = ( CSC_Inherit + 1 )
    } CSC_InheritanceConfig;
typedef
enum tagCSC_ThreadPool
    {
        CSC_ThreadPoolNone = 0,
        CSC_ThreadPoolInherit = ( CSC_ThreadPoolNone + 1 ) ,
        CSC_STAThreadPool = ( CSC_ThreadPoolInherit + 1 ) ,
        CSC_MTAThreadPool = ( CSC_STAThreadPool + 1 )
    } CSC_ThreadPool;
typedef
enum tagCSC_Binding
    {
        CSC_NoBinding = 0,
        CSC_BindToPoolThread = ( CSC_NoBinding + 1 )
    } CSC_Binding;
typedef
enum tagCSC_TransactionConfig
    {
        CSC_NoTransaction = 0,
        CSC_IfContainerIsTransactional = ( CSC_NoTransaction + 1 ) ,
        CSC_CreateTransactionIfNecessary = ( CSC_IfContainerIsTransactional + 1 ) ,
        CSC_NewTransaction = ( CSC_CreateTransactionIfNecessary + 1 )
    } CSC_TransactionConfig;
typedef
enum tagCSC_SynchronizationConfig
    {
        CSC_NoSynchronization = 0,
        CSC_IfContainerIsSynchronized = ( CSC_NoSynchronization + 1 ) ,
        CSC_NewSynchronizationIfNecessary = ( CSC_IfContainerIsSynchronized + 1 ) ,
        CSC_NewSynchronization = ( CSC_NewSynchronizationIfNecessary + 1 )
    } CSC_SynchronizationConfig;
typedef
enum tagCSC_TrackerConfig
    {
        CSC_DontUseTracker = 0,
        CSC_UseTracker = ( CSC_DontUseTracker + 1 )
    } CSC_TrackerConfig;
typedef
enum tagCSC_PartitionConfig
    {
        CSC_NoPartition = 0,
        CSC_InheritPartition = ( CSC_NoPartition + 1 ) ,
        CSC_NewPartition = ( CSC_InheritPartition + 1 )
    } CSC_PartitionConfig;
typedef
enum tagCSC_IISIntrinsicsConfig
    {
        CSC_NoIISIntrinsics = 0,
        CSC_InheritIISIntrinsics = ( CSC_NoIISIntrinsics + 1 )
    } CSC_IISIntrinsicsConfig;
typedef
enum tagCSC_COMTIIntrinsicsConfig
    {
        CSC_NoCOMTIIntrinsics = 0,
        CSC_InheritCOMTIIntrinsics = ( CSC_NoCOMTIIntrinsics + 1 )
    } CSC_COMTIIntrinsicsConfig;
typedef
enum tagCSC_SxsConfig
    {
        CSC_NoSxs = 0,
        CSC_InheritSxs = ( CSC_NoSxs + 1 ) ,
        CSC_NewSxs = ( CSC_InheritSxs + 1 )
    } CSC_SxsConfig;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0084_v0_0_s_ifspec;
EXTERN_C const IID IID_IServiceIISIntrinsicsConfig;
    typedef struct IServiceIISIntrinsicsConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceIISIntrinsicsConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceIISIntrinsicsConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceIISIntrinsicsConfig * This);
        HRESULT ( STDMETHODCALLTYPE *IISIntrinsicsConfig )(
            __RPC__in IServiceIISIntrinsicsConfig * This,
                       CSC_IISIntrinsicsConfig iisIntrinsicsConfig);
        END_INTERFACE
    } IServiceIISIntrinsicsConfigVtbl;
    interface IServiceIISIntrinsicsConfig
    {
        CONST_VTBL struct IServiceIISIntrinsicsConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IISIntrinsicsConfig(This,iisIntrinsicsConfig) )
EXTERN_C const IID IID_IServiceComTIIntrinsicsConfig;
    typedef struct IServiceComTIIntrinsicsConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceComTIIntrinsicsConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceComTIIntrinsicsConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceComTIIntrinsicsConfig * This);
        HRESULT ( STDMETHODCALLTYPE *ComTIIntrinsicsConfig )(
            __RPC__in IServiceComTIIntrinsicsConfig * This,
                       CSC_COMTIIntrinsicsConfig comtiIntrinsicsConfig);
        END_INTERFACE
    } IServiceComTIIntrinsicsConfigVtbl;
    interface IServiceComTIIntrinsicsConfig
    {
        CONST_VTBL struct IServiceComTIIntrinsicsConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ComTIIntrinsicsConfig(This,comtiIntrinsicsConfig) )
EXTERN_C const IID IID_IServiceSxsConfig;
    typedef struct IServiceSxsConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceSxsConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceSxsConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceSxsConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SxsConfig )(
            __RPC__in IServiceSxsConfig * This,
                       CSC_SxsConfig scsConfig);
        HRESULT ( STDMETHODCALLTYPE *SxsName )(
            __RPC__in IServiceSxsConfig * This,
                               __RPC__in_string LPCWSTR szSxsName);
        HRESULT ( STDMETHODCALLTYPE *SxsDirectory )(
            __RPC__in IServiceSxsConfig * This,
                               __RPC__in_string LPCWSTR szSxsDirectory);
        END_INTERFACE
    } IServiceSxsConfigVtbl;
    interface IServiceSxsConfig
    {
        CONST_VTBL struct IServiceSxsConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SxsConfig(This,scsConfig) )
    ( (This)->lpVtbl -> SxsName(This,szSxsName) )
    ( (This)->lpVtbl -> SxsDirectory(This,szSxsDirectory) )
EXTERN_C const IID IID_ICheckSxsConfig;
    typedef struct ICheckSxsConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICheckSxsConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICheckSxsConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICheckSxsConfig * This);
        HRESULT ( STDMETHODCALLTYPE *IsSameSxsConfig )(
            ICheckSxsConfig * This,
                               LPCWSTR wszSxsName,
                               LPCWSTR wszSxsDirectory,
                               LPCWSTR wszSxsAppName);
        END_INTERFACE
    } ICheckSxsConfigVtbl;
    interface ICheckSxsConfig
    {
        CONST_VTBL struct ICheckSxsConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSameSxsConfig(This,wszSxsName,wszSxsDirectory,wszSxsAppName) )
EXTERN_C const IID IID_IServiceInheritanceConfig;
    typedef struct IServiceInheritanceConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceInheritanceConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceInheritanceConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceInheritanceConfig * This);
        HRESULT ( STDMETHODCALLTYPE *ContainingContextTreatment )(
            __RPC__in IServiceInheritanceConfig * This,
                       CSC_InheritanceConfig inheritanceConfig);
        END_INTERFACE
    } IServiceInheritanceConfigVtbl;
    interface IServiceInheritanceConfig
    {
        CONST_VTBL struct IServiceInheritanceConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ContainingContextTreatment(This,inheritanceConfig) )
EXTERN_C const IID IID_IServiceThreadPoolConfig;
    typedef struct IServiceThreadPoolConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceThreadPoolConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceThreadPoolConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceThreadPoolConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SelectThreadPool )(
            __RPC__in IServiceThreadPoolConfig * This,
                       CSC_ThreadPool threadPool);
        HRESULT ( STDMETHODCALLTYPE *SetBindingInfo )(
            __RPC__in IServiceThreadPoolConfig * This,
                       CSC_Binding binding);
        END_INTERFACE
    } IServiceThreadPoolConfigVtbl;
    interface IServiceThreadPoolConfig
    {
        CONST_VTBL struct IServiceThreadPoolConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SelectThreadPool(This,threadPool) )
    ( (This)->lpVtbl -> SetBindingInfo(This,binding) )
EXTERN_C const IID IID_IServiceTransactionConfigBase;
    typedef struct IServiceTransactionConfigBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceTransactionConfigBase * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceTransactionConfigBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceTransactionConfigBase * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureTransaction )(
            __RPC__in IServiceTransactionConfigBase * This,
                       CSC_TransactionConfig transactionConfig);
        HRESULT ( STDMETHODCALLTYPE *IsolationLevel )(
            __RPC__in IServiceTransactionConfigBase * This,
                       COMAdminTxIsolationLevelOptions option);
        HRESULT ( STDMETHODCALLTYPE *TransactionTimeout )(
            __RPC__in IServiceTransactionConfigBase * This,
                       ULONG ulTimeoutSec);
        HRESULT ( STDMETHODCALLTYPE *BringYourOwnTransaction )(
            __RPC__in IServiceTransactionConfigBase * This,
                               __RPC__in_string LPCWSTR szTipURL);
        HRESULT ( STDMETHODCALLTYPE *NewTransactionDescription )(
            __RPC__in IServiceTransactionConfigBase * This,
                               __RPC__in_string LPCWSTR szTxDesc);
        END_INTERFACE
    } IServiceTransactionConfigBaseVtbl;
    interface IServiceTransactionConfigBase
    {
        CONST_VTBL struct IServiceTransactionConfigBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureTransaction(This,transactionConfig) )
    ( (This)->lpVtbl -> IsolationLevel(This,option) )
    ( (This)->lpVtbl -> TransactionTimeout(This,ulTimeoutSec) )
    ( (This)->lpVtbl -> BringYourOwnTransaction(This,szTipURL) )
    ( (This)->lpVtbl -> NewTransactionDescription(This,szTxDesc) )
EXTERN_C const IID IID_IServiceTransactionConfig;
    typedef struct IServiceTransactionConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceTransactionConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceTransactionConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceTransactionConfig * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureTransaction )(
            __RPC__in IServiceTransactionConfig * This,
                       CSC_TransactionConfig transactionConfig);
        HRESULT ( STDMETHODCALLTYPE *IsolationLevel )(
            __RPC__in IServiceTransactionConfig * This,
                       COMAdminTxIsolationLevelOptions option);
        HRESULT ( STDMETHODCALLTYPE *TransactionTimeout )(
            __RPC__in IServiceTransactionConfig * This,
                       ULONG ulTimeoutSec);
        HRESULT ( STDMETHODCALLTYPE *BringYourOwnTransaction )(
            __RPC__in IServiceTransactionConfig * This,
                               __RPC__in_string LPCWSTR szTipURL);
        HRESULT ( STDMETHODCALLTYPE *NewTransactionDescription )(
            __RPC__in IServiceTransactionConfig * This,
                               __RPC__in_string LPCWSTR szTxDesc);
        HRESULT ( STDMETHODCALLTYPE *ConfigureBYOT )(
            __RPC__in IServiceTransactionConfig * This,
                       __RPC__in_opt ITransaction *pITxByot);
        END_INTERFACE
    } IServiceTransactionConfigVtbl;
    interface IServiceTransactionConfig
    {
        CONST_VTBL struct IServiceTransactionConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureTransaction(This,transactionConfig) )
    ( (This)->lpVtbl -> IsolationLevel(This,option) )
    ( (This)->lpVtbl -> TransactionTimeout(This,ulTimeoutSec) )
    ( (This)->lpVtbl -> BringYourOwnTransaction(This,szTipURL) )
    ( (This)->lpVtbl -> NewTransactionDescription(This,szTxDesc) )
    ( (This)->lpVtbl -> ConfigureBYOT(This,pITxByot) )
EXTERN_C const IID IID_IServiceSysTxnConfig;
    typedef struct IServiceSysTxnConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IServiceSysTxnConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IServiceSysTxnConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IServiceSysTxnConfig * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureTransaction )(
            IServiceSysTxnConfig * This,
                       CSC_TransactionConfig transactionConfig);
        HRESULT ( STDMETHODCALLTYPE *IsolationLevel )(
            IServiceSysTxnConfig * This,
                       COMAdminTxIsolationLevelOptions option);
        HRESULT ( STDMETHODCALLTYPE *TransactionTimeout )(
            IServiceSysTxnConfig * This,
                       ULONG ulTimeoutSec);
        HRESULT ( STDMETHODCALLTYPE *BringYourOwnTransaction )(
            IServiceSysTxnConfig * This,
                               LPCWSTR szTipURL);
        HRESULT ( STDMETHODCALLTYPE *NewTransactionDescription )(
            IServiceSysTxnConfig * This,
                               LPCWSTR szTxDesc);
        HRESULT ( STDMETHODCALLTYPE *ConfigureBYOT )(
            IServiceSysTxnConfig * This,
                       ITransaction *pITxByot);
        HRESULT ( STDMETHODCALLTYPE *ConfigureBYOTSysTxn )(
            IServiceSysTxnConfig * This,
                       ITransactionProxy *pTxProxy);
        END_INTERFACE
    } IServiceSysTxnConfigVtbl;
    interface IServiceSysTxnConfig
    {
        CONST_VTBL struct IServiceSysTxnConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureTransaction(This,transactionConfig) )
    ( (This)->lpVtbl -> IsolationLevel(This,option) )
    ( (This)->lpVtbl -> TransactionTimeout(This,ulTimeoutSec) )
    ( (This)->lpVtbl -> BringYourOwnTransaction(This,szTipURL) )
    ( (This)->lpVtbl -> NewTransactionDescription(This,szTxDesc) )
    ( (This)->lpVtbl -> ConfigureBYOT(This,pITxByot) )
    ( (This)->lpVtbl -> ConfigureBYOTSysTxn(This,pTxProxy) )
EXTERN_C const IID IID_IServiceSynchronizationConfig;
    typedef struct IServiceSynchronizationConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceSynchronizationConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceSynchronizationConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceSynchronizationConfig * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureSynchronization )(
            __RPC__in IServiceSynchronizationConfig * This,
                       CSC_SynchronizationConfig synchConfig);
        END_INTERFACE
    } IServiceSynchronizationConfigVtbl;
    interface IServiceSynchronizationConfig
    {
        CONST_VTBL struct IServiceSynchronizationConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureSynchronization(This,synchConfig) )
EXTERN_C const IID IID_IServiceTrackerConfig;
    typedef struct IServiceTrackerConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceTrackerConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceTrackerConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceTrackerConfig * This);
        HRESULT ( STDMETHODCALLTYPE *TrackerConfig )(
            __RPC__in IServiceTrackerConfig * This,
                       CSC_TrackerConfig trackerConfig,
                               __RPC__in_string LPCWSTR szTrackerAppName,
                               __RPC__in_string LPCWSTR szTrackerCtxName);
        END_INTERFACE
    } IServiceTrackerConfigVtbl;
    interface IServiceTrackerConfig
    {
        CONST_VTBL struct IServiceTrackerConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TrackerConfig(This,trackerConfig,szTrackerAppName,szTrackerCtxName) )
EXTERN_C const IID IID_IServicePartitionConfig;
    typedef struct IServicePartitionConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServicePartitionConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServicePartitionConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServicePartitionConfig * This);
        HRESULT ( STDMETHODCALLTYPE *PartitionConfig )(
            __RPC__in IServicePartitionConfig * This,
                       CSC_PartitionConfig partitionConfig);
        HRESULT ( STDMETHODCALLTYPE *PartitionID )(
            __RPC__in IServicePartitionConfig * This,
                       __RPC__in REFGUID guidPartitionID);
        END_INTERFACE
    } IServicePartitionConfigVtbl;
    interface IServicePartitionConfig
    {
        CONST_VTBL struct IServicePartitionConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PartitionConfig(This,partitionConfig) )
    ( (This)->lpVtbl -> PartitionID(This,guidPartitionID) )
EXTERN_C const IID IID_IServiceCall;
    typedef struct IServiceCallVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceCall * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceCall * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceCall * This);
        HRESULT ( STDMETHODCALLTYPE *OnCall )(
            __RPC__in IServiceCall * This);
        END_INTERFACE
    } IServiceCallVtbl;
    interface IServiceCall
    {
        CONST_VTBL struct IServiceCallVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCall(This) )
EXTERN_C const IID IID_IAsyncErrorNotify;
    typedef struct IAsyncErrorNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAsyncErrorNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAsyncErrorNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAsyncErrorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in IAsyncErrorNotify * This,
            HRESULT hr);
        END_INTERFACE
    } IAsyncErrorNotifyVtbl;
    interface IAsyncErrorNotify
    {
        CONST_VTBL struct IAsyncErrorNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hr) )
EXTERN_C const IID IID_IServiceActivity;
    typedef struct IServiceActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceActivity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceActivity * This);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCall )(
            __RPC__in IServiceActivity * This,
                       __RPC__in_opt IServiceCall *pIServiceCall);
        HRESULT ( STDMETHODCALLTYPE *AsynchronousCall )(
            __RPC__in IServiceActivity * This,
                       __RPC__in_opt IServiceCall *pIServiceCall);
        HRESULT ( STDMETHODCALLTYPE *BindToCurrentThread )(
            __RPC__in IServiceActivity * This);
        HRESULT ( STDMETHODCALLTYPE *UnbindFromThread )(
            __RPC__in IServiceActivity * This);
        END_INTERFACE
    } IServiceActivityVtbl;
    interface IServiceActivity
    {
        CONST_VTBL struct IServiceActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SynchronousCall(This,pIServiceCall) )
    ( (This)->lpVtbl -> AsynchronousCall(This,pIServiceCall) )
    ( (This)->lpVtbl -> BindToCurrentThread(This) )
    ( (This)->lpVtbl -> UnbindFromThread(This) )
EXTERN_C const IID IID_IThreadPoolKnobs;
    typedef struct IThreadPoolKnobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IThreadPoolKnobs * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IThreadPoolKnobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IThreadPoolKnobs * This);
        HRESULT ( STDMETHODCALLTYPE *GetMaxThreads )(
            IThreadPoolKnobs * This,
            long *plcMaxThreads);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreads )(
            IThreadPoolKnobs * This,
            long *plcCurrentThreads);
        HRESULT ( STDMETHODCALLTYPE *SetMaxThreads )(
            IThreadPoolKnobs * This,
            long lcMaxThreads);
        HRESULT ( STDMETHODCALLTYPE *GetDeleteDelay )(
            IThreadPoolKnobs * This,
            long *pmsecDeleteDelay);
        HRESULT ( STDMETHODCALLTYPE *SetDeleteDelay )(
            IThreadPoolKnobs * This,
            long msecDeleteDelay);
        HRESULT ( STDMETHODCALLTYPE *GetMaxQueuedRequests )(
            IThreadPoolKnobs * This,
            long *plcMaxQueuedRequests);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentQueuedRequests )(
            IThreadPoolKnobs * This,
            long *plcCurrentQueuedRequests);
        HRESULT ( STDMETHODCALLTYPE *SetMaxQueuedRequests )(
            IThreadPoolKnobs * This,
            long lcMaxQueuedRequests);
        HRESULT ( STDMETHODCALLTYPE *SetMinThreads )(
            IThreadPoolKnobs * This,
            long lcMinThreads);
        HRESULT ( STDMETHODCALLTYPE *SetQueueDepth )(
            IThreadPoolKnobs * This,
            long lcQueueDepth);
        END_INTERFACE
    } IThreadPoolKnobsVtbl;
    interface IThreadPoolKnobs
    {
        CONST_VTBL struct IThreadPoolKnobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaxThreads(This,plcMaxThreads) )
    ( (This)->lpVtbl -> GetCurrentThreads(This,plcCurrentThreads) )
    ( (This)->lpVtbl -> SetMaxThreads(This,lcMaxThreads) )
    ( (This)->lpVtbl -> GetDeleteDelay(This,pmsecDeleteDelay) )
    ( (This)->lpVtbl -> SetDeleteDelay(This,msecDeleteDelay) )
    ( (This)->lpVtbl -> GetMaxQueuedRequests(This,plcMaxQueuedRequests) )
    ( (This)->lpVtbl -> GetCurrentQueuedRequests(This,plcCurrentQueuedRequests) )
    ( (This)->lpVtbl -> SetMaxQueuedRequests(This,lcMaxQueuedRequests) )
    ( (This)->lpVtbl -> SetMinThreads(This,lcMinThreads) )
    ( (This)->lpVtbl -> SetQueueDepth(This,lcQueueDepth) )
EXTERN_C const IID IID_IComStaThreadPoolKnobs;
    typedef struct IComStaThreadPoolKnobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComStaThreadPoolKnobs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComStaThreadPoolKnobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComStaThreadPoolKnobs * This);
        HRESULT ( STDMETHODCALLTYPE *SetMinThreadCount )(
            __RPC__in IComStaThreadPoolKnobs * This,
            DWORD minThreads);
        HRESULT ( STDMETHODCALLTYPE *GetMinThreadCount )(
            __RPC__in IComStaThreadPoolKnobs * This,
                        __RPC__out DWORD *minThreads);
        HRESULT ( STDMETHODCALLTYPE *SetMaxThreadCount )(
            __RPC__in IComStaThreadPoolKnobs * This,
            DWORD maxThreads);
        HRESULT ( STDMETHODCALLTYPE *GetMaxThreadCount )(
            __RPC__in IComStaThreadPoolKnobs * This,
                        __RPC__out DWORD *maxThreads);
        HRESULT ( STDMETHODCALLTYPE *SetActivityPerThread )(
            __RPC__in IComStaThreadPoolKnobs * This,
            DWORD activitiesPerThread);
        HRESULT ( STDMETHODCALLTYPE *GetActivityPerThread )(
            __RPC__in IComStaThreadPoolKnobs * This,
                        __RPC__out DWORD *activitiesPerThread);
        HRESULT ( STDMETHODCALLTYPE *SetActivityRatio )(
            __RPC__in IComStaThreadPoolKnobs * This,
            DOUBLE activityRatio);
        HRESULT ( STDMETHODCALLTYPE *GetActivityRatio )(
            __RPC__in IComStaThreadPoolKnobs * This,
                        __RPC__out DOUBLE *activityRatio);
        HRESULT ( STDMETHODCALLTYPE *GetThreadCount )(
            __RPC__in IComStaThreadPoolKnobs * This,
                        __RPC__out DWORD *pdwThreads);
        HRESULT ( STDMETHODCALLTYPE *GetQueueDepth )(
            __RPC__in IComStaThreadPoolKnobs * This,
                        __RPC__out DWORD *pdwQDepth);
        HRESULT ( STDMETHODCALLTYPE *SetQueueDepth )(
            __RPC__in IComStaThreadPoolKnobs * This,
                       long dwQDepth);
        END_INTERFACE
    } IComStaThreadPoolKnobsVtbl;
    interface IComStaThreadPoolKnobs
    {
        CONST_VTBL struct IComStaThreadPoolKnobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMinThreadCount(This,minThreads) )
    ( (This)->lpVtbl -> GetMinThreadCount(This,minThreads) )
    ( (This)->lpVtbl -> SetMaxThreadCount(This,maxThreads) )
    ( (This)->lpVtbl -> GetMaxThreadCount(This,maxThreads) )
    ( (This)->lpVtbl -> SetActivityPerThread(This,activitiesPerThread) )
    ( (This)->lpVtbl -> GetActivityPerThread(This,activitiesPerThread) )
    ( (This)->lpVtbl -> SetActivityRatio(This,activityRatio) )
    ( (This)->lpVtbl -> GetActivityRatio(This,activityRatio) )
    ( (This)->lpVtbl -> GetThreadCount(This,pdwThreads) )
    ( (This)->lpVtbl -> GetQueueDepth(This,pdwQDepth) )
    ( (This)->lpVtbl -> SetQueueDepth(This,dwQDepth) )
EXTERN_C const IID IID_IComMtaThreadPoolKnobs;
    typedef struct IComMtaThreadPoolKnobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComMtaThreadPoolKnobs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComMtaThreadPoolKnobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComMtaThreadPoolKnobs * This);
        HRESULT ( STDMETHODCALLTYPE *MTASetMaxThreadCount )(
            __RPC__in IComMtaThreadPoolKnobs * This,
            DWORD dwMaxThreads);
        HRESULT ( STDMETHODCALLTYPE *MTAGetMaxThreadCount )(
            __RPC__in IComMtaThreadPoolKnobs * This,
                        __RPC__out DWORD *pdwMaxThreads);
        HRESULT ( STDMETHODCALLTYPE *MTASetThrottleValue )(
            __RPC__in IComMtaThreadPoolKnobs * This,
            DWORD dwThrottle);
        HRESULT ( STDMETHODCALLTYPE *MTAGetThrottleValue )(
            __RPC__in IComMtaThreadPoolKnobs * This,
                        __RPC__out DWORD *pdwThrottle);
        END_INTERFACE
    } IComMtaThreadPoolKnobsVtbl;
    interface IComMtaThreadPoolKnobs
    {
        CONST_VTBL struct IComMtaThreadPoolKnobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MTASetMaxThreadCount(This,dwMaxThreads) )
    ( (This)->lpVtbl -> MTAGetMaxThreadCount(This,pdwMaxThreads) )
    ( (This)->lpVtbl -> MTASetThrottleValue(This,dwThrottle) )
    ( (This)->lpVtbl -> MTAGetThrottleValue(This,pdwThrottle) )
EXTERN_C const IID IID_IComStaThreadPoolKnobs2;
    typedef struct IComStaThreadPoolKnobs2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComStaThreadPoolKnobs2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComStaThreadPoolKnobs2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetMinThreadCount )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            DWORD minThreads);
        HRESULT ( STDMETHODCALLTYPE *GetMinThreadCount )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *minThreads);
        HRESULT ( STDMETHODCALLTYPE *SetMaxThreadCount )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            DWORD maxThreads);
        HRESULT ( STDMETHODCALLTYPE *GetMaxThreadCount )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *maxThreads);
        HRESULT ( STDMETHODCALLTYPE *SetActivityPerThread )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            DWORD activitiesPerThread);
        HRESULT ( STDMETHODCALLTYPE *GetActivityPerThread )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *activitiesPerThread);
        HRESULT ( STDMETHODCALLTYPE *SetActivityRatio )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            DOUBLE activityRatio);
        HRESULT ( STDMETHODCALLTYPE *GetActivityRatio )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DOUBLE *activityRatio);
        HRESULT ( STDMETHODCALLTYPE *GetThreadCount )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *pdwThreads);
        HRESULT ( STDMETHODCALLTYPE *GetQueueDepth )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *pdwQDepth);
        HRESULT ( STDMETHODCALLTYPE *SetQueueDepth )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                       long dwQDepth);
        HRESULT ( STDMETHODCALLTYPE *GetMaxCPULoad )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *pdwLoad);
        HRESULT ( STDMETHODCALLTYPE *SetMaxCPULoad )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            long pdwLoad);
        HRESULT ( STDMETHODCALLTYPE *GetCPUMetricEnabled )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out BOOL *pbMetricEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetCPUMetricEnabled )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            BOOL bMetricEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetCreateThreadsAggressively )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out BOOL *pbMetricEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetCreateThreadsAggressively )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            BOOL bMetricEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetMaxCSR )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *pdwCSR);
        HRESULT ( STDMETHODCALLTYPE *SetMaxCSR )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            long dwCSR);
        HRESULT ( STDMETHODCALLTYPE *GetWaitTimeForThreadCleanup )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
                        __RPC__out DWORD *pdwThreadCleanupWaitTime);
        HRESULT ( STDMETHODCALLTYPE *SetWaitTimeForThreadCleanup )(
            __RPC__in IComStaThreadPoolKnobs2 * This,
            long dwThreadCleanupWaitTime);
        END_INTERFACE
    } IComStaThreadPoolKnobs2Vtbl;
    interface IComStaThreadPoolKnobs2
    {
        CONST_VTBL struct IComStaThreadPoolKnobs2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMinThreadCount(This,minThreads) )
    ( (This)->lpVtbl -> GetMinThreadCount(This,minThreads) )
    ( (This)->lpVtbl -> SetMaxThreadCount(This,maxThreads) )
    ( (This)->lpVtbl -> GetMaxThreadCount(This,maxThreads) )
    ( (This)->lpVtbl -> SetActivityPerThread(This,activitiesPerThread) )
    ( (This)->lpVtbl -> GetActivityPerThread(This,activitiesPerThread) )
    ( (This)->lpVtbl -> SetActivityRatio(This,activityRatio) )
    ( (This)->lpVtbl -> GetActivityRatio(This,activityRatio) )
    ( (This)->lpVtbl -> GetThreadCount(This,pdwThreads) )
    ( (This)->lpVtbl -> GetQueueDepth(This,pdwQDepth) )
    ( (This)->lpVtbl -> SetQueueDepth(This,dwQDepth) )
    ( (This)->lpVtbl -> GetMaxCPULoad(This,pdwLoad) )
    ( (This)->lpVtbl -> SetMaxCPULoad(This,pdwLoad) )
    ( (This)->lpVtbl -> GetCPUMetricEnabled(This,pbMetricEnabled) )
    ( (This)->lpVtbl -> SetCPUMetricEnabled(This,bMetricEnabled) )
    ( (This)->lpVtbl -> GetCreateThreadsAggressively(This,pbMetricEnabled) )
    ( (This)->lpVtbl -> SetCreateThreadsAggressively(This,bMetricEnabled) )
    ( (This)->lpVtbl -> GetMaxCSR(This,pdwCSR) )
    ( (This)->lpVtbl -> SetMaxCSR(This,dwCSR) )
    ( (This)->lpVtbl -> GetWaitTimeForThreadCleanup(This,pdwThreadCleanupWaitTime) )
    ( (This)->lpVtbl -> SetWaitTimeForThreadCleanup(This,dwThreadCleanupWaitTime) )
EXTERN_C const IID IID_IProcessInitializer;
    typedef struct IProcessInitializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProcessInitializer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProcessInitializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProcessInitializer * This);
        HRESULT ( STDMETHODCALLTYPE *Startup )(
            __RPC__in IProcessInitializer * This,
                       __RPC__in_opt IUnknown *punkProcessControl);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IProcessInitializer * This);
        END_INTERFACE
    } IProcessInitializerVtbl;
    interface IProcessInitializer
    {
        CONST_VTBL struct IProcessInitializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Startup(This,punkProcessControl) )
    ( (This)->lpVtbl -> Shutdown(This) )
EXTERN_C const IID IID_IServicePoolConfig;
    typedef struct IServicePoolConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IServicePoolConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IServicePoolConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IServicePoolConfig * This);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxPoolSize )(
            IServicePoolConfig * This,
                       DWORD dwMaxPool);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxPoolSize )(
            IServicePoolConfig * This,
                                DWORD *pdwMaxPool);
                        HRESULT ( STDMETHODCALLTYPE *put_MinPoolSize )(
            IServicePoolConfig * This,
                       DWORD dwMinPool);
                        HRESULT ( STDMETHODCALLTYPE *get_MinPoolSize )(
            IServicePoolConfig * This,
                                DWORD *pdwMinPool);
                        HRESULT ( STDMETHODCALLTYPE *put_CreationTimeout )(
            IServicePoolConfig * This,
                       DWORD dwCreationTimeout);
                        HRESULT ( STDMETHODCALLTYPE *get_CreationTimeout )(
            IServicePoolConfig * This,
                                DWORD *pdwCreationTimeout);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionAffinity )(
            IServicePoolConfig * This,
                       BOOL fTxAffinity);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionAffinity )(
            IServicePoolConfig * This,
                                BOOL *pfTxAffinity);
                        HRESULT ( STDMETHODCALLTYPE *put_ClassFactory )(
            IServicePoolConfig * This,
                       IClassFactory *pFactory);
                        HRESULT ( STDMETHODCALLTYPE *get_ClassFactory )(
            IServicePoolConfig * This,
                                IClassFactory **pFactory);
        END_INTERFACE
    } IServicePoolConfigVtbl;
    interface IServicePoolConfig
    {
        CONST_VTBL struct IServicePoolConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_MaxPoolSize(This,dwMaxPool) )
    ( (This)->lpVtbl -> get_MaxPoolSize(This,pdwMaxPool) )
    ( (This)->lpVtbl -> put_MinPoolSize(This,dwMinPool) )
    ( (This)->lpVtbl -> get_MinPoolSize(This,pdwMinPool) )
    ( (This)->lpVtbl -> put_CreationTimeout(This,dwCreationTimeout) )
    ( (This)->lpVtbl -> get_CreationTimeout(This,pdwCreationTimeout) )
    ( (This)->lpVtbl -> put_TransactionAffinity(This,fTxAffinity) )
    ( (This)->lpVtbl -> get_TransactionAffinity(This,pfTxAffinity) )
    ( (This)->lpVtbl -> put_ClassFactory(This,pFactory) )
    ( (This)->lpVtbl -> get_ClassFactory(This,pFactory) )
EXTERN_C const IID IID_IServicePool;
    typedef struct IServicePoolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IServicePool * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IServicePool * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IServicePool * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IServicePool * This,
                       IUnknown *pPoolConfig);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            IServicePool * This,
            REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IServicePool * This);
        END_INTERFACE
    } IServicePoolVtbl;
    interface IServicePool
    {
        CONST_VTBL struct IServicePoolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pPoolConfig) )
    ( (This)->lpVtbl -> GetObject(This,riid,ppv) )
    ( (This)->lpVtbl -> Shutdown(This) )
EXTERN_C const IID IID_IManagedPooledObj;
    typedef struct IManagedPooledObjVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IManagedPooledObj * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IManagedPooledObj * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IManagedPooledObj * This);
        HRESULT ( STDMETHODCALLTYPE *SetHeld )(
            IManagedPooledObj * This,
                       BOOL m_bHeld);
        END_INTERFACE
    } IManagedPooledObjVtbl;
    interface IManagedPooledObj
    {
        CONST_VTBL struct IManagedPooledObjVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHeld(This,m_bHeld) )
EXTERN_C const IID IID_IManagedPoolAction;
    typedef struct IManagedPoolActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IManagedPoolAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IManagedPoolAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IManagedPoolAction * This);
        HRESULT ( STDMETHODCALLTYPE *LastRelease )(
            IManagedPoolAction * This);
        END_INTERFACE
    } IManagedPoolActionVtbl;
    interface IManagedPoolAction
    {
        CONST_VTBL struct IManagedPoolActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LastRelease(This) )
EXTERN_C const IID IID_IManagedObjectInfo;
    typedef struct IManagedObjectInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IManagedObjectInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IManagedObjectInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IManagedObjectInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetIUnknown )(
            IManagedObjectInfo * This,
                        IUnknown **pUnk);
        HRESULT ( STDMETHODCALLTYPE *GetIObjectControl )(
            IManagedObjectInfo * This,
                        IObjectControl **pCtrl);
        HRESULT ( STDMETHODCALLTYPE *SetInPool )(
            IManagedObjectInfo * This,
                       BOOL bInPool,
                       IManagedPooledObj *pPooledObj);
        HRESULT ( STDMETHODCALLTYPE *SetWrapperStrength )(
            IManagedObjectInfo * This,
                       BOOL bStrong);
        END_INTERFACE
    } IManagedObjectInfoVtbl;
    interface IManagedObjectInfo
    {
        CONST_VTBL struct IManagedObjectInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIUnknown(This,pUnk) )
    ( (This)->lpVtbl -> GetIObjectControl(This,pCtrl) )
    ( (This)->lpVtbl -> SetInPool(This,bInPool,pPooledObj) )
    ( (This)->lpVtbl -> SetWrapperStrength(This,bStrong) )
EXTERN_C const IID IID_IAppDomainHelper;
    typedef struct IAppDomainHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAppDomainHelper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAppDomainHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAppDomainHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IAppDomainHelper * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IAppDomainHelper * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IAppDomainHelper * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAppDomainHelper * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IAppDomainHelper * This,
                       IUnknown *pUnkAD,
                       HRESULT ( STDMETHODCALLTYPE __MIDL__IAppDomainHelper0000 )(
                void *pv),
                       void *pPool);
        HRESULT ( STDMETHODCALLTYPE *DoCallback )(
            IAppDomainHelper * This,
                       IUnknown *pUnkAD,
                       HRESULT ( STDMETHODCALLTYPE __MIDL__IAppDomainHelper0001 )(
                void *pv),
                       void *pPool);
        END_INTERFACE
    } IAppDomainHelperVtbl;
    interface IAppDomainHelper
    {
        CONST_VTBL struct IAppDomainHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pUnkAD,__MIDL__IAppDomainHelper0000,pPool) )
    ( (This)->lpVtbl -> DoCallback(This,pUnkAD,__MIDL__IAppDomainHelper0001,pPool) )
EXTERN_C const IID IID_IAssemblyLocator;
    typedef struct IAssemblyLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAssemblyLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAssemblyLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAssemblyLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAssemblyLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAssemblyLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAssemblyLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAssemblyLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetModules )(
            __RPC__in IAssemblyLocator * This,
                       __RPC__in BSTR applicationDir,
                       __RPC__in BSTR applicationName,
                       __RPC__in BSTR assemblyName,
                                __RPC__deref_out_opt SAFEARRAY * *pModules);
        END_INTERFACE
    } IAssemblyLocatorVtbl;
    interface IAssemblyLocator
    {
        CONST_VTBL struct IAssemblyLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetModules(This,applicationDir,applicationName,assemblyName,pModules) )
EXTERN_C const IID IID_IManagedActivationEvents;
    typedef struct IManagedActivationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IManagedActivationEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IManagedActivationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IManagedActivationEvents * This);
        HRESULT ( STDMETHODCALLTYPE *CreateManagedStub )(
            IManagedActivationEvents * This,
                       IManagedObjectInfo *pInfo,
                       BOOL fDist);
        HRESULT ( STDMETHODCALLTYPE *DestroyManagedStub )(
            IManagedActivationEvents * This,
                       IManagedObjectInfo *pInfo);
        END_INTERFACE
    } IManagedActivationEventsVtbl;
    interface IManagedActivationEvents
    {
        CONST_VTBL struct IManagedActivationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateManagedStub(This,pInfo,fDist) )
    ( (This)->lpVtbl -> DestroyManagedStub(This,pInfo) )
EXTERN_C const IID IID_ISendMethodEvents;
    typedef struct ISendMethodEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISendMethodEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISendMethodEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISendMethodEvents * This);
        HRESULT ( STDMETHODCALLTYPE *SendMethodCall )(
            ISendMethodEvents * This,
                       const void *pIdentity,
                       REFIID riid,
                       DWORD dwMeth);
        HRESULT ( STDMETHODCALLTYPE *SendMethodReturn )(
            ISendMethodEvents * This,
                       const void *pIdentity,
                       REFIID riid,
                       DWORD dwMeth,
                       HRESULT hrCall,
                       HRESULT hrServer);
        END_INTERFACE
    } ISendMethodEventsVtbl;
    interface ISendMethodEvents
    {
        CONST_VTBL struct ISendMethodEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendMethodCall(This,pIdentity,riid,dwMeth) )
    ( (This)->lpVtbl -> SendMethodReturn(This,pIdentity,riid,dwMeth,hrCall,hrServer) )
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0113_v0_0_s_ifspec;
EXTERN_C const IID IID_ITransactionResourcePool;
    typedef struct ITransactionResourcePoolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITransactionResourcePool * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITransactionResourcePool * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITransactionResourcePool * This);
        HRESULT ( STDMETHODCALLTYPE *PutResource )(
            ITransactionResourcePool * This,
                       IObjPool *pPool,
                       IUnknown *pUnk);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            ITransactionResourcePool * This,
                       IObjPool *pPool,
                        IUnknown **ppUnk);
        END_INTERFACE
    } ITransactionResourcePoolVtbl;
    interface ITransactionResourcePool
    {
        CONST_VTBL struct ITransactionResourcePoolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutResource(This,pPool,pUnk) )
    ( (This)->lpVtbl -> GetResource(This,pPool,ppUnk) )
EXTERN_C HRESULT __stdcall MTSCreateActivity ( REFIID riid, void** ppobj );
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0114_v0_0_s_ifspec;
EXTERN_C const IID IID_IMTSCall;
    typedef struct IMTSCallVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMTSCall * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMTSCall * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMTSCall * This);
        HRESULT ( STDMETHODCALLTYPE *OnCall )(
            IMTSCall * This);
        END_INTERFACE
    } IMTSCallVtbl;
    interface IMTSCall
    {
        CONST_VTBL struct IMTSCallVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCall(This) )
EXTERN_C const IID IID_IContextProperties;
    typedef struct IContextPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IContextProperties * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IContextProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IContextProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Count )(
            IContextProperties * This,
                                long *plCount);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IContextProperties * This,
                       BSTR name,
                                VARIANT *pProperty);
        HRESULT ( STDMETHODCALLTYPE *EnumNames )(
            IContextProperties * This,
                                IEnumNames **ppenum);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IContextProperties * This,
                       BSTR name,
                       VARIANT property);
        HRESULT ( STDMETHODCALLTYPE *RemoveProperty )(
            IContextProperties * This,
                       BSTR name);
        END_INTERFACE
    } IContextPropertiesVtbl;
    interface IContextProperties
    {
        CONST_VTBL struct IContextPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Count(This,plCount) )
    ( (This)->lpVtbl -> GetProperty(This,name,pProperty) )
    ( (This)->lpVtbl -> EnumNames(This,ppenum) )
    ( (This)->lpVtbl -> SetProperty(This,name,property) )
    ( (This)->lpVtbl -> RemoveProperty(This,name) )
EXTERN_C const IID IID_IObjPool;
    typedef struct IObjPoolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IObjPool * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IObjPool * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IObjPool * This);
        void ( STDMETHODCALLTYPE *Reserved1 )(
            IObjPool * This);
        void ( STDMETHODCALLTYPE *Reserved2 )(
            IObjPool * This);
        void ( STDMETHODCALLTYPE *Reserved3 )(
            IObjPool * This);
        void ( STDMETHODCALLTYPE *Reserved4 )(
            IObjPool * This);
        void ( STDMETHODCALLTYPE *PutEndTx )(
            IObjPool * This,
            IUnknown *pObj);
        void ( STDMETHODCALLTYPE *Reserved5 )(
            IObjPool * This);
        void ( STDMETHODCALLTYPE *Reserved6 )(
            IObjPool * This);
        END_INTERFACE
    } IObjPoolVtbl;
    interface IObjPool
    {
        CONST_VTBL struct IObjPoolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reserved1(This) )
    ( (This)->lpVtbl -> Reserved2(This) )
    ( (This)->lpVtbl -> Reserved3(This) )
    ( (This)->lpVtbl -> Reserved4(This) )
    ( (This)->lpVtbl -> PutEndTx(This,pObj) )
    ( (This)->lpVtbl -> Reserved5(This) )
    ( (This)->lpVtbl -> Reserved6(This) )
EXTERN_C const IID IID_ITransactionProperty;
    typedef struct ITransactionPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITransactionProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITransactionProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved1 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved2 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved3 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved4 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved5 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved6 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved7 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved8 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved9 )(
            ITransactionProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionResourcePool )(
            ITransactionProperty * This,
                        ITransactionResourcePool **ppTxPool);
        void ( STDMETHODCALLTYPE *Reserved10 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved11 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved12 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved13 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved14 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved15 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved16 )(
            ITransactionProperty * This);
        void ( STDMETHODCALLTYPE *Reserved17 )(
            ITransactionProperty * This);
        END_INTERFACE
    } ITransactionPropertyVtbl;
    interface ITransactionProperty
    {
        CONST_VTBL struct ITransactionPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reserved1(This) )
    ( (This)->lpVtbl -> Reserved2(This) )
    ( (This)->lpVtbl -> Reserved3(This) )
    ( (This)->lpVtbl -> Reserved4(This) )
    ( (This)->lpVtbl -> Reserved5(This) )
    ( (This)->lpVtbl -> Reserved6(This) )
    ( (This)->lpVtbl -> Reserved7(This) )
    ( (This)->lpVtbl -> Reserved8(This) )
    ( (This)->lpVtbl -> Reserved9(This) )
    ( (This)->lpVtbl -> GetTransactionResourcePool(This,ppTxPool) )
    ( (This)->lpVtbl -> Reserved10(This) )
    ( (This)->lpVtbl -> Reserved11(This) )
    ( (This)->lpVtbl -> Reserved12(This) )
    ( (This)->lpVtbl -> Reserved13(This) )
    ( (This)->lpVtbl -> Reserved14(This) )
    ( (This)->lpVtbl -> Reserved15(This) )
    ( (This)->lpVtbl -> Reserved16(This) )
    ( (This)->lpVtbl -> Reserved17(This) )
EXTERN_C const IID IID_IMTSActivity;
    typedef struct IMTSActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMTSActivity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMTSActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMTSActivity * This);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCall )(
            IMTSActivity * This,
                       IMTSCall *pCall);
        HRESULT ( STDMETHODCALLTYPE *AsyncCall )(
            IMTSActivity * This,
                       IMTSCall *pCall);
        void ( STDMETHODCALLTYPE *Reserved1 )(
            IMTSActivity * This);
        HRESULT ( STDMETHODCALLTYPE *BindToCurrentThread )(
            IMTSActivity * This);
        HRESULT ( STDMETHODCALLTYPE *UnbindFromThread )(
            IMTSActivity * This);
        END_INTERFACE
    } IMTSActivityVtbl;
    interface IMTSActivity
    {
        CONST_VTBL struct IMTSActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SynchronousCall(This,pCall) )
    ( (This)->lpVtbl -> AsyncCall(This,pCall) )
    ( (This)->lpVtbl -> Reserved1(This) )
    ( (This)->lpVtbl -> BindToCurrentThread(This) )
    ( (This)->lpVtbl -> UnbindFromThread(This) )
typedef
enum __MIDL___MIDL_itf_autosvcs_0001_0150_0001
    {
        mtsErrCtxAborted = 0x8004e002,
        mtsErrCtxAborting = 0x8004e003,
        mtsErrCtxNoContext = 0x8004e004,
        mtsErrCtxNotRegistered = 0x8004e005,
        mtsErrCtxSynchTimeout = 0x8004e006,
        mtsErrCtxOldReference = 0x8004e007,
        mtsErrCtxRoleNotFound = 0x8004e00c,
        mtsErrCtxNoSecurity = 0x8004e00d,
        mtsErrCtxWrongThread = 0x8004e00e,
        mtsErrCtxTMNotAvailable = 0x8004e00f,
        comQCErrApplicationNotQueued = 0x80110600,
        comQCErrNoQueueableInterfaces = 0x80110601,
        comQCErrQueuingServiceNotAvailable = 0x80110602,
        comQCErrQueueTransactMismatch = 0x80110603,
        comqcErrRecorderMarshalled = 0x80110604,
        comqcErrOutParam = 0x80110605,
        comqcErrRecorderNotTrusted = 0x80110606,
        comqcErrPSLoad = 0x80110607,
        comqcErrMarshaledObjSameTxn = 0x80110608,
        comqcErrInvalidMessage = 0x80110650,
        comqcErrMsmqSidUnavailable = 0x80110651,
        comqcErrWrongMsgExtension = 0x80110652,
        comqcErrMsmqServiceUnavailable = 0x80110653,
        comqcErrMsgNotAuthenticated = 0x80110654,
        comqcErrMsmqConnectorUsed = 0x80110655,
        comqcErrBadMarshaledObject = 0x80110656
    } Error_Constants;
typedef
enum __MIDL___MIDL_itf_autosvcs_0001_0159_0001
    {
        LockSetGet = 0,
        LockMethod = ( LockSetGet + 1 )
    } LockModes;
typedef
enum __MIDL___MIDL_itf_autosvcs_0001_0159_0002
    {
        Standard = 0,
        Process = ( Standard + 1 )
    } ReleaseModes;
typedef
enum tagCRMFLAGS
    {
        CRMFLAG_FORGETTARGET = 0x1,
        CRMFLAG_WRITTENDURINGPREPARE = 0x2,
        CRMFLAG_WRITTENDURINGCOMMIT = 0x4,
        CRMFLAG_WRITTENDURINGABORT = 0x8,
        CRMFLAG_WRITTENDURINGRECOVERY = 0x10,
        CRMFLAG_WRITTENDURINGREPLAY = 0x20,
        CRMFLAG_REPLAYINPROGRESS = 0x40
    } CRMFLAGS;
typedef
enum tagCRMREGFLAGS
    {
        CRMREGFLAG_PREPAREPHASE = 0x1,
        CRMREGFLAG_COMMITPHASE = 0x2,
        CRMREGFLAG_ABORTPHASE = 0x4,
        CRMREGFLAG_ALLPHASES = 0x7,
        CRMREGFLAG_FAILIFINDOUBTSREMAIN = 0x10
    } CRMREGFLAGS;
EXTERN_C const IID LIBID_COMSVCSLib;
EXTERN_C const CLSID CLSID_SecurityIdentity;
class DECLSPEC_UUID("ecabb0a5-7f19-11d2-978e-0000f8757e2a")
SecurityIdentity;
EXTERN_C const CLSID CLSID_SecurityCallers;
class DECLSPEC_UUID("ecabb0a6-7f19-11d2-978e-0000f8757e2a")
SecurityCallers;
EXTERN_C const CLSID CLSID_SecurityCallContext;
class DECLSPEC_UUID("ecabb0a7-7f19-11d2-978e-0000f8757e2a")
SecurityCallContext;
EXTERN_C const CLSID CLSID_GetSecurityCallContextAppObject;
class DECLSPEC_UUID("ecabb0a8-7f19-11d2-978e-0000f8757e2a")
GetSecurityCallContextAppObject;
EXTERN_C const CLSID CLSID_Dummy30040732;
class DECLSPEC_UUID("ecabb0a9-7f19-11d2-978e-0000f8757e2a")
Dummy30040732;
EXTERN_C const CLSID CLSID_TransactionContext;
class DECLSPEC_UUID("7999FC25-D3C6-11CF-ACAB-00A024A55AEF")
TransactionContext;
EXTERN_C const CLSID CLSID_TransactionContextEx;
class DECLSPEC_UUID("5cb66670-d3d4-11cf-acab-00a024a55aef")
TransactionContextEx;
EXTERN_C const CLSID CLSID_ByotServerEx;
class DECLSPEC_UUID("ecabb0aa-7f19-11d2-978e-0000f8757e2a")
ByotServerEx;
EXTERN_C const CLSID CLSID_CServiceConfig;
class DECLSPEC_UUID("ecabb0c8-7f19-11d2-978e-0000f8757e2a")
CServiceConfig;
EXTERN_C const CLSID CLSID_ServicePool;
class DECLSPEC_UUID("ecabb0c9-7f19-11d2-978e-0000f8757e2a")
ServicePool;
EXTERN_C const CLSID CLSID_ServicePoolConfig;
class DECLSPEC_UUID("ecabb0ca-7f19-11d2-978e-0000f8757e2a")
ServicePoolConfig;
EXTERN_C const CLSID CLSID_SharedProperty;
class DECLSPEC_UUID("2A005C05-A5DE-11CF-9E66-00AA00A3F464")
SharedProperty;
EXTERN_C const CLSID CLSID_SharedPropertyGroup;
class DECLSPEC_UUID("2A005C0B-A5DE-11CF-9E66-00AA00A3F464")
SharedPropertyGroup;
EXTERN_C const CLSID CLSID_SharedPropertyGroupManager;
class DECLSPEC_UUID("2A005C11-A5DE-11CF-9E66-00AA00A3F464")
SharedPropertyGroupManager;
EXTERN_C const CLSID CLSID_COMEvents;
class DECLSPEC_UUID("ecabb0ab-7f19-11d2-978e-0000f8757e2a")
COMEvents;
EXTERN_C const CLSID CLSID_CoMTSLocator;
class DECLSPEC_UUID("ecabb0ac-7f19-11d2-978e-0000f8757e2a")
CoMTSLocator;
EXTERN_C const CLSID CLSID_MtsGrp;
class DECLSPEC_UUID("4B2E958D-0393-11D1-B1AB-00AA00BA3258")
MtsGrp;
EXTERN_C const CLSID CLSID_ComServiceEvents;
class DECLSPEC_UUID("ecabb0c3-7f19-11d2-978e-0000f8757e2a")
ComServiceEvents;
EXTERN_C const CLSID CLSID_ComSystemAppEventData;
class DECLSPEC_UUID("ecabb0c6-7f19-11d2-978e-0000f8757e2a")
ComSystemAppEventData;
EXTERN_C const CLSID CLSID_CRMClerk;
class DECLSPEC_UUID("ecabb0bd-7f19-11d2-978e-0000f8757e2a")
CRMClerk;
EXTERN_C const CLSID CLSID_CRMRecoveryClerk;
class DECLSPEC_UUID("ecabb0be-7f19-11d2-978e-0000f8757e2a")
CRMRecoveryClerk;
EXTERN_C const CLSID CLSID_LBEvents;
class DECLSPEC_UUID("ecabb0c1-7f19-11d2-978e-0000f8757e2a")
LBEvents;
EXTERN_C const CLSID CLSID_MessageMover;
class DECLSPEC_UUID("ecabb0bf-7f19-11d2-978e-0000f8757e2a")
MessageMover;
EXTERN_C const CLSID CLSID_DispenserManager;
class DECLSPEC_UUID("ecabb0c0-7f19-11d2-978e-0000f8757e2a")
DispenserManager;
EXTERN_C const CLSID CLSID_PoolMgr;
class DECLSPEC_UUID("ecabafb5-7f19-11d2-978e-0000f8757e2a")
PoolMgr;
EXTERN_C const CLSID CLSID_EventServer;
class DECLSPEC_UUID("ecabafbc-7f19-11d2-978e-0000f8757e2a")
EventServer;
EXTERN_C const CLSID CLSID_TrackerServer;
class DECLSPEC_UUID("ecabafb9-7f19-11d2-978e-0000f8757e2a")
TrackerServer;
EXTERN_C const CLSID CLSID_AppDomainHelper;
class DECLSPEC_UUID("ef24f689-14f8-4d92-b4af-d7b1f0e70fd4")
AppDomainHelper;
EXTERN_C const CLSID CLSID_ClrAssemblyLocator;
class DECLSPEC_UUID("458aa3b5-265a-4b75-bc05-9bea4630cf18")
ClrAssemblyLocator;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0120_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
                          HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetApplicationProcessDetails_Proxy(
    IGetAppTrackerData * This,
               REFGUID ApplicationInstanceId,
               DWORD ProcessId,
               DWORD Flags,
    _Out_opt_ ApplicationProcessSummary *Summary,
    _Out_opt_ ApplicationProcessStatistics *Statistics,
    _Out_opt_ ApplicationProcessRecycleInfo *RecycleInfo,
    _Out_opt_ BOOL *AnyComponentsHangMonitored);
                HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetApplicationProcessDetails_Stub(
    __RPC__in IGetAppTrackerData * This,
               __RPC__in REFGUID ApplicationInstanceId,
               DWORD ProcessId,
               DWORD Flags,
                            __RPC__inout_opt ApplicationProcessSummary *Summary,
                            __RPC__inout_opt ApplicationProcessStatistics *Statistics,
                            __RPC__inout_opt ApplicationProcessRecycleInfo *RecycleInfo,
                            __RPC__inout_opt BOOL *AnyComponentsHangMonitored);
                          HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetComponentDetails_Proxy(
    IGetAppTrackerData * This,
               REFGUID ApplicationInstanceId,
               DWORD ProcessId,
               REFCLSID Clsid,
               DWORD Flags,
    _Out_opt_ ComponentSummary *Summary,
    _Out_opt_ ComponentStatistics *Statistics,
    _Out_opt_ ComponentHangMonitorInfo *HangMonitorInfo);
                HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetComponentDetails_Stub(
    __RPC__in IGetAppTrackerData * This,
               __RPC__in REFGUID ApplicationInstanceId,
               DWORD ProcessId,
               __RPC__in REFCLSID Clsid,
               DWORD Flags,
                            __RPC__inout_opt ComponentSummary *Summary,
                            __RPC__inout_opt ComponentStatistics *Statistics,
                            __RPC__inout_opt ComponentHangMonitorInfo *HangMonitorInfo);
}
