#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXATransLookup IXATransLookup;
typedef interface IXATransLookup2 IXATransLookup2;
typedef interface IResourceManagerSink IResourceManagerSink;
typedef interface IResourceManager IResourceManager;
typedef interface ILastResourceManager ILastResourceManager;
typedef interface IResourceManager2 IResourceManager2;
typedef interface IResourceManagerRejoinable IResourceManagerRejoinable;
typedef interface IXAConfig IXAConfig;
typedef interface IRMHelper IRMHelper;
typedef interface IXAObtainRMInfo IXAObtainRMInfo;
typedef interface IResourceManagerFactory IResourceManagerFactory;
typedef interface IResourceManagerFactory2 IResourceManagerFactory2;
typedef interface IPrepareInfo IPrepareInfo;
typedef interface IPrepareInfo2 IPrepareInfo2;
typedef interface IGetDispenser IGetDispenser;
typedef interface ITransactionVoterBallotAsync2 ITransactionVoterBallotAsync2;
typedef interface ITransactionVoterNotifyAsync2 ITransactionVoterNotifyAsync2;
typedef interface ITransactionVoterFactory2 ITransactionVoterFactory2;
typedef interface ITransactionPhase0EnlistmentAsync ITransactionPhase0EnlistmentAsync;
typedef interface ITransactionPhase0NotifyAsync ITransactionPhase0NotifyAsync;
typedef interface ITransactionPhase0Factory ITransactionPhase0Factory;
typedef interface ITransactionTransmitter ITransactionTransmitter;
typedef interface ITransactionTransmitterFactory ITransactionTransmitterFactory;
typedef interface ITransactionReceiver ITransactionReceiver;
typedef interface ITransactionReceiverFactory ITransactionReceiverFactory;
typedef interface IDtcLuConfigure IDtcLuConfigure;
typedef interface IDtcLuRecovery IDtcLuRecovery;
typedef interface IDtcLuRecoveryFactory IDtcLuRecoveryFactory;
typedef interface IDtcLuRecoveryInitiatedByDtcTransWork IDtcLuRecoveryInitiatedByDtcTransWork;
typedef interface IDtcLuRecoveryInitiatedByDtcStatusWork IDtcLuRecoveryInitiatedByDtcStatusWork;
typedef interface IDtcLuRecoveryInitiatedByDtc IDtcLuRecoveryInitiatedByDtc;
typedef interface IDtcLuRecoveryInitiatedByLuWork IDtcLuRecoveryInitiatedByLuWork;
typedef interface IDtcLuRecoveryInitiatedByLu IDtcLuRecoveryInitiatedByLu;
typedef interface IDtcLuRmEnlistment IDtcLuRmEnlistment;
typedef interface IDtcLuRmEnlistmentSink IDtcLuRmEnlistmentSink;
typedef interface IDtcLuRmEnlistmentFactory IDtcLuRmEnlistmentFactory;
typedef interface IDtcLuSubordinateDtc IDtcLuSubordinateDtc;
typedef interface IDtcLuSubordinateDtcSink IDtcLuSubordinateDtcSink;
typedef interface IDtcLuSubordinateDtcFactory IDtcLuSubordinateDtcFactory;
#include "txcoord.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum XACT_DTC_CONSTANTS
    {
        XACT_E_CONNECTION_REQUEST_DENIED = 0x8004d100L,
        XACT_E_TOOMANY_ENLISTMENTS = 0x8004d101L,
        XACT_E_DUPLICATE_GUID = 0x8004d102L,
        XACT_E_NOTSINGLEPHASE = 0x8004d103L,
        XACT_E_RECOVERYALREADYDONE = 0x8004d104L,
        XACT_E_PROTOCOL = 0x8004d105L,
        XACT_E_RM_FAILURE = 0x8004d106L,
        XACT_E_RECOVERY_FAILED = 0x8004d107L,
        XACT_E_LU_NOT_FOUND = 0x8004d108L,
        XACT_E_DUPLICATE_LU = 0x8004d109L,
        XACT_E_LU_NOT_CONNECTED = 0x8004d10aL,
        XACT_E_DUPLICATE_TRANSID = 0x8004d10bL,
        XACT_E_LU_BUSY = 0x8004d10cL,
        XACT_E_LU_NO_RECOVERY_PROCESS = 0x8004d10dL,
        XACT_E_LU_DOWN = 0x8004d10eL,
        XACT_E_LU_RECOVERING = 0x8004d10fL,
        XACT_E_LU_RECOVERY_MISMATCH = 0x8004d110L,
        XACT_E_RM_UNAVAILABLE = 0x8004d111L,
        XACT_E_LRMRECOVERYALREADYDONE = 0x8004d112L,
        XACT_E_NOLASTRESOURCEINTERFACE = 0x8004d113L,
        XACT_S_NONOTIFY = 0x4d100L,
        XACT_OK_NONOTIFY = 0x4d101L,
        dwUSER_MS_SQLSERVER = 0xffff
    } XACT_DTC_CONSTANTS;
typedef struct xid_t
    {
    long formatID;
    long gtrid_length;
    long bqual_length;
    char data[ 128 ];
    } XID;
typedef struct xa_switch_t
    {
    char name[ 32 ];
    long flags;
    long version;
    int ( __cdecl *xa_open_entry )(
        char *__MIDL____MIDL_itf_txdtc_0000_00000000,
        int __MIDL____MIDL_itf_txdtc_0000_00000001,
        long __MIDL____MIDL_itf_txdtc_0000_00000002);
    int ( __cdecl *xa_close_entry )(
        char *__MIDL____MIDL_itf_txdtc_0000_00000004,
        int __MIDL____MIDL_itf_txdtc_0000_00000005,
        long __MIDL____MIDL_itf_txdtc_0000_00000006);
    int ( __cdecl *xa_start_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000008,
        int __MIDL____MIDL_itf_txdtc_0000_00000009,
        long __MIDL____MIDL_itf_txdtc_0000_00000010);
    int ( __cdecl *xa_end_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000012,
        int __MIDL____MIDL_itf_txdtc_0000_00000013,
        long __MIDL____MIDL_itf_txdtc_0000_00000014);
    int ( __cdecl *xa_rollback_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000016,
        int __MIDL____MIDL_itf_txdtc_0000_00000017,
        long __MIDL____MIDL_itf_txdtc_0000_00000018);
    int ( __cdecl *xa_prepare_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000020,
        int __MIDL____MIDL_itf_txdtc_0000_00000021,
        long __MIDL____MIDL_itf_txdtc_0000_00000022);
    int ( __cdecl *xa_commit_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000024,
        int __MIDL____MIDL_itf_txdtc_0000_00000025,
        long __MIDL____MIDL_itf_txdtc_0000_00000026);
    int ( __cdecl *xa_recover_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000028,
        long __MIDL____MIDL_itf_txdtc_0000_00000029,
        int __MIDL____MIDL_itf_txdtc_0000_00000030,
        long __MIDL____MIDL_itf_txdtc_0000_00000031);
    int ( __cdecl *xa_forget_entry )(
        XID *__MIDL____MIDL_itf_txdtc_0000_00000033,
        int __MIDL____MIDL_itf_txdtc_0000_00000034,
        long __MIDL____MIDL_itf_txdtc_0000_00000035);
    int ( __cdecl *xa_complete_entry )(
        int *__MIDL____MIDL_itf_txdtc_0000_00000037,
        int *__MIDL____MIDL_itf_txdtc_0000_00000038,
        int __MIDL____MIDL_itf_txdtc_0000_00000039,
        long __MIDL____MIDL_itf_txdtc_0000_00000040);
    } xa_switch_t;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXATransLookup;
    typedef struct IXATransLookupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXATransLookup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXATransLookup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXATransLookup * This);
        HRESULT ( STDMETHODCALLTYPE *Lookup )(
            __RPC__in IXATransLookup * This,
                        __RPC__deref_out_opt ITransaction **ppTransaction);
        END_INTERFACE
    } IXATransLookupVtbl;
    interface IXATransLookup
    {
        CONST_VTBL struct IXATransLookupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lookup(This,ppTransaction) )
EXTERN_C const IID IID_IXATransLookup2;
    typedef struct IXATransLookup2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXATransLookup2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXATransLookup2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXATransLookup2 * This);
        HRESULT ( STDMETHODCALLTYPE *Lookup )(
            __RPC__in IXATransLookup2 * This,
                       __RPC__in XID *pXID,
                        __RPC__deref_out_opt ITransaction **ppTransaction);
        END_INTERFACE
    } IXATransLookup2Vtbl;
    interface IXATransLookup2
    {
        CONST_VTBL struct IXATransLookup2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lookup(This,pXID,ppTransaction) )
EXTERN_C const IID IID_IResourceManagerSink;
    typedef struct IResourceManagerSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResourceManagerSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResourceManagerSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResourceManagerSink * This);
        HRESULT ( STDMETHODCALLTYPE *TMDown )(
            __RPC__in IResourceManagerSink * This);
        END_INTERFACE
    } IResourceManagerSinkVtbl;
    interface IResourceManagerSink
    {
        CONST_VTBL struct IResourceManagerSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TMDown(This) )
EXTERN_C const IID IID_IResourceManager;
    typedef struct IResourceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResourceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResourceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResourceManager * This);
        HRESULT ( STDMETHODCALLTYPE *Enlist )(
            __RPC__in IResourceManager * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in_opt ITransactionResourceAsync *pRes,
                        __RPC__out XACTUOW *pUOW,
                        __RPC__out LONG *pisoLevel,
                        __RPC__deref_out_opt ITransactionEnlistmentAsync **ppEnlist);
        HRESULT ( STDMETHODCALLTYPE *Reenlist )(
            __RPC__in IResourceManager * This,
                                __RPC__in_ecount_full(cbPrepInfo) byte *pPrepInfo,
                       ULONG cbPrepInfo,
                       DWORD lTimeout,
                        __RPC__out XACTSTAT *pXactStat);
        HRESULT ( STDMETHODCALLTYPE *ReenlistmentComplete )(
            __RPC__in IResourceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetDistributedTransactionManager )(
            __RPC__in IResourceManager * This,
                       __RPC__in REFIID iid,
                                __RPC__deref_out_opt void **ppvObject);
        END_INTERFACE
    } IResourceManagerVtbl;
    interface IResourceManager
    {
        CONST_VTBL struct IResourceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist) )
    ( (This)->lpVtbl -> Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat) )
    ( (This)->lpVtbl -> ReenlistmentComplete(This) )
    ( (This)->lpVtbl -> GetDistributedTransactionManager(This,iid,ppvObject) )
EXTERN_C const IID IID_ILastResourceManager;
    typedef struct ILastResourceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILastResourceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILastResourceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILastResourceManager * This);
        HRESULT ( STDMETHODCALLTYPE *TransactionCommitted )(
            __RPC__in ILastResourceManager * This,
                                __RPC__in_ecount_full(cbPrepInfo) byte *pPrepInfo,
                       ULONG cbPrepInfo);
        HRESULT ( STDMETHODCALLTYPE *RecoveryDone )(
            __RPC__in ILastResourceManager * This);
        END_INTERFACE
    } ILastResourceManagerVtbl;
    interface ILastResourceManager
    {
        CONST_VTBL struct ILastResourceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransactionCommitted(This,pPrepInfo,cbPrepInfo) )
    ( (This)->lpVtbl -> RecoveryDone(This) )
EXTERN_C const IID IID_IResourceManager2;
    typedef struct IResourceManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResourceManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResourceManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResourceManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *Enlist )(
            __RPC__in IResourceManager2 * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in_opt ITransactionResourceAsync *pRes,
                        __RPC__out XACTUOW *pUOW,
                        __RPC__out LONG *pisoLevel,
                        __RPC__deref_out_opt ITransactionEnlistmentAsync **ppEnlist);
        HRESULT ( STDMETHODCALLTYPE *Reenlist )(
            __RPC__in IResourceManager2 * This,
                                __RPC__in_ecount_full(cbPrepInfo) byte *pPrepInfo,
                       ULONG cbPrepInfo,
                       DWORD lTimeout,
                        __RPC__out XACTSTAT *pXactStat);
        HRESULT ( STDMETHODCALLTYPE *ReenlistmentComplete )(
            __RPC__in IResourceManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDistributedTransactionManager )(
            __RPC__in IResourceManager2 * This,
                       __RPC__in REFIID iid,
                                __RPC__deref_out_opt void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *Enlist2 )(
            __RPC__in IResourceManager2 * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in_opt ITransactionResourceAsync *pResAsync,
                        __RPC__out XACTUOW *pUOW,
                        __RPC__out LONG *pisoLevel,
                        __RPC__out XID *pXid,
                        __RPC__deref_out_opt ITransactionEnlistmentAsync **ppEnlist);
        HRESULT ( STDMETHODCALLTYPE *Reenlist2 )(
            __RPC__in IResourceManager2 * This,
                       __RPC__in XID *pXid,
                       DWORD dwTimeout,
                        __RPC__out XACTSTAT *pXactStat);
        END_INTERFACE
    } IResourceManager2Vtbl;
    interface IResourceManager2
    {
        CONST_VTBL struct IResourceManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist) )
    ( (This)->lpVtbl -> Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat) )
    ( (This)->lpVtbl -> ReenlistmentComplete(This) )
    ( (This)->lpVtbl -> GetDistributedTransactionManager(This,iid,ppvObject) )
    ( (This)->lpVtbl -> Enlist2(This,pTransaction,pResAsync,pUOW,pisoLevel,pXid,ppEnlist) )
    ( (This)->lpVtbl -> Reenlist2(This,pXid,dwTimeout,pXactStat) )
EXTERN_C const IID IID_IResourceManagerRejoinable;
    typedef struct IResourceManagerRejoinableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResourceManagerRejoinable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResourceManagerRejoinable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResourceManagerRejoinable * This);
        HRESULT ( STDMETHODCALLTYPE *Enlist )(
            __RPC__in IResourceManagerRejoinable * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in_opt ITransactionResourceAsync *pRes,
                        __RPC__out XACTUOW *pUOW,
                        __RPC__out LONG *pisoLevel,
                        __RPC__deref_out_opt ITransactionEnlistmentAsync **ppEnlist);
        HRESULT ( STDMETHODCALLTYPE *Reenlist )(
            __RPC__in IResourceManagerRejoinable * This,
                                __RPC__in_ecount_full(cbPrepInfo) byte *pPrepInfo,
                       ULONG cbPrepInfo,
                       DWORD lTimeout,
                        __RPC__out XACTSTAT *pXactStat);
        HRESULT ( STDMETHODCALLTYPE *ReenlistmentComplete )(
            __RPC__in IResourceManagerRejoinable * This);
        HRESULT ( STDMETHODCALLTYPE *GetDistributedTransactionManager )(
            __RPC__in IResourceManagerRejoinable * This,
                       __RPC__in REFIID iid,
                                __RPC__deref_out_opt void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *Enlist2 )(
            __RPC__in IResourceManagerRejoinable * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in_opt ITransactionResourceAsync *pResAsync,
                        __RPC__out XACTUOW *pUOW,
                        __RPC__out LONG *pisoLevel,
                        __RPC__out XID *pXid,
                        __RPC__deref_out_opt ITransactionEnlistmentAsync **ppEnlist);
        HRESULT ( STDMETHODCALLTYPE *Reenlist2 )(
            __RPC__in IResourceManagerRejoinable * This,
                       __RPC__in XID *pXid,
                       DWORD dwTimeout,
                        __RPC__out XACTSTAT *pXactStat);
        HRESULT ( STDMETHODCALLTYPE *Rejoin )(
            __RPC__in IResourceManagerRejoinable * This,
                                __RPC__in_ecount_full(cbPrepInfo) byte *pPrepInfo,
                       ULONG cbPrepInfo,
                       DWORD lTimeout,
                        __RPC__out XACTSTAT *pXactStat);
        END_INTERFACE
    } IResourceManagerRejoinableVtbl;
    interface IResourceManagerRejoinable
    {
        CONST_VTBL struct IResourceManagerRejoinableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist) )
    ( (This)->lpVtbl -> Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat) )
    ( (This)->lpVtbl -> ReenlistmentComplete(This) )
    ( (This)->lpVtbl -> GetDistributedTransactionManager(This,iid,ppvObject) )
    ( (This)->lpVtbl -> Enlist2(This,pTransaction,pResAsync,pUOW,pisoLevel,pXid,ppEnlist) )
    ( (This)->lpVtbl -> Reenlist2(This,pXid,dwTimeout,pXactStat) )
    ( (This)->lpVtbl -> Rejoin(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat) )
EXTERN_C const IID IID_IXAConfig;
    typedef struct IXAConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXAConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXAConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXAConfig * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IXAConfig * This,
                       GUID clsidHelperDll);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IXAConfig * This);
        END_INTERFACE
    } IXAConfigVtbl;
    interface IXAConfig
    {
        CONST_VTBL struct IXAConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,clsidHelperDll) )
    ( (This)->lpVtbl -> Terminate(This) )
EXTERN_C const IID IID_IRMHelper;
    typedef struct IRMHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRMHelper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRMHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRMHelper * This);
        HRESULT ( STDMETHODCALLTYPE *RMCount )(
            IRMHelper * This,
                       DWORD dwcTotalNumberOfRMs);
        HRESULT ( STDMETHODCALLTYPE *RMInfo )(
            IRMHelper * This,
                       xa_switch_t *pXa_Switch,
                       BOOL fCDeclCallingConv,
            _Null_terminated_ char *pszOpenString,
            _Null_terminated_ char *pszCloseString,
                       GUID guidRMRecovery);
        END_INTERFACE
    } IRMHelperVtbl;
    interface IRMHelper
    {
        CONST_VTBL struct IRMHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RMCount(This,dwcTotalNumberOfRMs) )
    ( (This)->lpVtbl -> RMInfo(This,pXa_Switch,fCDeclCallingConv,pszOpenString,pszCloseString,guidRMRecovery) )
EXTERN_C const IID IID_IXAObtainRMInfo;
    typedef struct IXAObtainRMInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXAObtainRMInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXAObtainRMInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXAObtainRMInfo * This);
        HRESULT ( STDMETHODCALLTYPE *ObtainRMInfo )(
            __RPC__in IXAObtainRMInfo * This,
                       __RPC__in_opt IRMHelper *pIRMHelper);
        END_INTERFACE
    } IXAObtainRMInfoVtbl;
    interface IXAObtainRMInfo
    {
        CONST_VTBL struct IXAObtainRMInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ObtainRMInfo(This,pIRMHelper) )
EXTERN_C const IID IID_IResourceManagerFactory;
    typedef struct IResourceManagerFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResourceManagerFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResourceManagerFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResourceManagerFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IResourceManagerFactory * This,
                       __RPC__in GUID *pguidRM,
                               __RPC__in_string CHAR *pszRMName,
                       __RPC__in_opt IResourceManagerSink *pIResMgrSink,
                        __RPC__deref_out_opt IResourceManager **ppResMgr);
        END_INTERFACE
    } IResourceManagerFactoryVtbl;
    interface IResourceManagerFactory
    {
        CONST_VTBL struct IResourceManagerFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pguidRM,pszRMName,pIResMgrSink,ppResMgr) )
EXTERN_C const IID IID_IResourceManagerFactory2;
    typedef struct IResourceManagerFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResourceManagerFactory2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResourceManagerFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResourceManagerFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IResourceManagerFactory2 * This,
                       __RPC__in GUID *pguidRM,
                               __RPC__in_string CHAR *pszRMName,
                       __RPC__in_opt IResourceManagerSink *pIResMgrSink,
                        __RPC__deref_out_opt IResourceManager **ppResMgr);
        HRESULT ( STDMETHODCALLTYPE *CreateEx )(
            __RPC__in IResourceManagerFactory2 * This,
                       __RPC__in GUID *pguidRM,
                               __RPC__in_string CHAR *pszRMName,
                       __RPC__in_opt IResourceManagerSink *pIResMgrSink,
                       __RPC__in REFIID riidRequested,
                                __RPC__deref_out_opt void **ppvResMgr);
        END_INTERFACE
    } IResourceManagerFactory2Vtbl;
    interface IResourceManagerFactory2
    {
        CONST_VTBL struct IResourceManagerFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pguidRM,pszRMName,pIResMgrSink,ppResMgr) )
    ( (This)->lpVtbl -> CreateEx(This,pguidRM,pszRMName,pIResMgrSink,riidRequested,ppvResMgr) )
EXTERN_C const IID IID_IPrepareInfo;
    typedef struct IPrepareInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrepareInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrepareInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrepareInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrepareInfoSize )(
            IPrepareInfo * This,
                        ULONG *pcbPrepInfo);
        HRESULT ( STDMETHODCALLTYPE *GetPrepareInfo )(
            IPrepareInfo * This,
                        byte *pPrepInfo);
        END_INTERFACE
    } IPrepareInfoVtbl;
    interface IPrepareInfo
    {
        CONST_VTBL struct IPrepareInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrepareInfoSize(This,pcbPrepInfo) )
    ( (This)->lpVtbl -> GetPrepareInfo(This,pPrepInfo) )
EXTERN_C const IID IID_IPrepareInfo2;
    typedef struct IPrepareInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrepareInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrepareInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrepareInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrepareInfoSize )(
            __RPC__in IPrepareInfo2 * This,
                        __RPC__out ULONG *pcbPrepInfo);
        HRESULT ( STDMETHODCALLTYPE *GetPrepareInfo )(
            __RPC__in IPrepareInfo2 * This,
                       ULONG cbPrepareInfo,
                                 __RPC__out_ecount_full(cbPrepareInfo) byte *pPrepInfo);
        END_INTERFACE
    } IPrepareInfo2Vtbl;
    interface IPrepareInfo2
    {
        CONST_VTBL struct IPrepareInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrepareInfoSize(This,pcbPrepInfo) )
    ( (This)->lpVtbl -> GetPrepareInfo(This,cbPrepareInfo,pPrepInfo) )
EXTERN_C const IID IID_IGetDispenser;
    typedef struct IGetDispenserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetDispenser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetDispenser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetDispenser * This);
        HRESULT ( STDMETHODCALLTYPE *GetDispenser )(
            __RPC__in IGetDispenser * This,
                       __RPC__in REFIID iid,
                                __RPC__deref_out_opt void **ppvObject);
        END_INTERFACE
    } IGetDispenserVtbl;
    interface IGetDispenser
    {
        CONST_VTBL struct IGetDispenserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDispenser(This,iid,ppvObject) )
EXTERN_C const IID IID_ITransactionVoterBallotAsync2;
    typedef struct ITransactionVoterBallotAsync2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionVoterBallotAsync2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionVoterBallotAsync2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionVoterBallotAsync2 * This);
        HRESULT ( STDMETHODCALLTYPE *VoteRequestDone )(
            __RPC__in ITransactionVoterBallotAsync2 * This,
                       HRESULT hr,
                               __RPC__in_opt BOID *pboidReason);
        END_INTERFACE
    } ITransactionVoterBallotAsync2Vtbl;
    interface ITransactionVoterBallotAsync2
    {
        CONST_VTBL struct ITransactionVoterBallotAsync2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> VoteRequestDone(This,hr,pboidReason) )
EXTERN_C const IID IID_ITransactionVoterNotifyAsync2;
    typedef struct ITransactionVoterNotifyAsync2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionVoterNotifyAsync2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionVoterNotifyAsync2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionVoterNotifyAsync2 * This);
        HRESULT ( STDMETHODCALLTYPE *Committed )(
            __RPC__in ITransactionVoterNotifyAsync2 * This,
                       BOOL fRetaining,
                               __RPC__in_opt XACTUOW *pNewUOW,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *Aborted )(
            __RPC__in ITransactionVoterNotifyAsync2 * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                               __RPC__in_opt XACTUOW *pNewUOW,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *HeuristicDecision )(
            __RPC__in ITransactionVoterNotifyAsync2 * This,
                       DWORD dwDecision,
                               __RPC__in_opt BOID *pboidReason,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *Indoubt )(
            __RPC__in ITransactionVoterNotifyAsync2 * This);
        HRESULT ( STDMETHODCALLTYPE *VoteRequest )(
            __RPC__in ITransactionVoterNotifyAsync2 * This);
        END_INTERFACE
    } ITransactionVoterNotifyAsync2Vtbl;
    interface ITransactionVoterNotifyAsync2
    {
        CONST_VTBL struct ITransactionVoterNotifyAsync2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Committed(This,fRetaining,pNewUOW,hr) )
    ( (This)->lpVtbl -> Aborted(This,pboidReason,fRetaining,pNewUOW,hr) )
    ( (This)->lpVtbl -> HeuristicDecision(This,dwDecision,pboidReason,hr) )
    ( (This)->lpVtbl -> Indoubt(This) )
    ( (This)->lpVtbl -> VoteRequest(This) )
EXTERN_C const IID IID_ITransactionVoterFactory2;
    typedef struct ITransactionVoterFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionVoterFactory2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionVoterFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionVoterFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in ITransactionVoterFactory2 * This,
                       __RPC__in_opt ITransaction *pTransaction,
                       __RPC__in_opt ITransactionVoterNotifyAsync2 *pVoterNotify,
                        __RPC__deref_out_opt ITransactionVoterBallotAsync2 **ppVoterBallot);
        END_INTERFACE
    } ITransactionVoterFactory2Vtbl;
    interface ITransactionVoterFactory2
    {
        CONST_VTBL struct ITransactionVoterFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pTransaction,pVoterNotify,ppVoterBallot) )
EXTERN_C const IID IID_ITransactionPhase0EnlistmentAsync;
    typedef struct ITransactionPhase0EnlistmentAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForEnlistment )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *Phase0Done )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *Unenlist )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *GetTransaction )(
            __RPC__in ITransactionPhase0EnlistmentAsync * This,
                        __RPC__deref_out_opt ITransaction **ppITransaction);
        END_INTERFACE
    } ITransactionPhase0EnlistmentAsyncVtbl;
    interface ITransactionPhase0EnlistmentAsync
    {
        CONST_VTBL struct ITransactionPhase0EnlistmentAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> WaitForEnlistment(This) )
    ( (This)->lpVtbl -> Phase0Done(This) )
    ( (This)->lpVtbl -> Unenlist(This) )
    ( (This)->lpVtbl -> GetTransaction(This,ppITransaction) )
EXTERN_C const IID IID_ITransactionPhase0NotifyAsync;
    typedef struct ITransactionPhase0NotifyAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionPhase0NotifyAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionPhase0NotifyAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionPhase0NotifyAsync * This);
        HRESULT ( STDMETHODCALLTYPE *Phase0Request )(
            __RPC__in ITransactionPhase0NotifyAsync * This,
            BOOL fAbortingHint);
        HRESULT ( STDMETHODCALLTYPE *EnlistCompleted )(
            __RPC__in ITransactionPhase0NotifyAsync * This,
                       HRESULT status);
        END_INTERFACE
    } ITransactionPhase0NotifyAsyncVtbl;
    interface ITransactionPhase0NotifyAsync
    {
        CONST_VTBL struct ITransactionPhase0NotifyAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Phase0Request(This,fAbortingHint) )
    ( (This)->lpVtbl -> EnlistCompleted(This,status) )
EXTERN_C const IID IID_ITransactionPhase0Factory;
    typedef struct ITransactionPhase0FactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionPhase0Factory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionPhase0Factory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionPhase0Factory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in ITransactionPhase0Factory * This,
                       __RPC__in_opt ITransactionPhase0NotifyAsync *pPhase0Notify,
                        __RPC__deref_out_opt ITransactionPhase0EnlistmentAsync **ppPhase0Enlistment);
        END_INTERFACE
    } ITransactionPhase0FactoryVtbl;
    interface ITransactionPhase0Factory
    {
        CONST_VTBL struct ITransactionPhase0FactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pPhase0Notify,ppPhase0Enlistment) )
EXTERN_C const IID IID_ITransactionTransmitter;
    typedef struct ITransactionTransmitterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionTransmitter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionTransmitter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionTransmitter * This);
        HRESULT ( STDMETHODCALLTYPE *Set )(
            __RPC__in ITransactionTransmitter * This,
                       __RPC__in_opt ITransaction *pTransaction);
        HRESULT ( STDMETHODCALLTYPE *GetPropagationTokenSize )(
            __RPC__in ITransactionTransmitter * This,
                        __RPC__out ULONG *pcbToken);
        HRESULT ( STDMETHODCALLTYPE *MarshalPropagationToken )(
            __RPC__in ITransactionTransmitter * This,
                       ULONG cbToken,
                                 __RPC__out_ecount_full(cbToken) byte *rgbToken,
                        __RPC__out ULONG *pcbUsed);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalReturnToken )(
            __RPC__in ITransactionTransmitter * This,
                       ULONG cbReturnToken,
                                __RPC__in_ecount_full(cbReturnToken) byte *rgbReturnToken);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITransactionTransmitter * This);
        END_INTERFACE
    } ITransactionTransmitterVtbl;
    interface ITransactionTransmitter
    {
        CONST_VTBL struct ITransactionTransmitterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Set(This,pTransaction) )
    ( (This)->lpVtbl -> GetPropagationTokenSize(This,pcbToken) )
    ( (This)->lpVtbl -> MarshalPropagationToken(This,cbToken,rgbToken,pcbUsed) )
    ( (This)->lpVtbl -> UnmarshalReturnToken(This,cbReturnToken,rgbReturnToken) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_ITransactionTransmitterFactory;
    typedef struct ITransactionTransmitterFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionTransmitterFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionTransmitterFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionTransmitterFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in ITransactionTransmitterFactory * This,
                        __RPC__deref_out_opt ITransactionTransmitter **ppTransmitter);
        END_INTERFACE
    } ITransactionTransmitterFactoryVtbl;
    interface ITransactionTransmitterFactory
    {
        CONST_VTBL struct ITransactionTransmitterFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,ppTransmitter) )
EXTERN_C const IID IID_ITransactionReceiver;
    typedef struct ITransactionReceiverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionReceiver * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionReceiver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionReceiver * This);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalPropagationToken )(
            __RPC__in ITransactionReceiver * This,
                       ULONG cbToken,
                                __RPC__in_ecount_full(cbToken) byte *rgbToken,
                        __RPC__deref_out_opt ITransaction **ppTransaction);
        HRESULT ( STDMETHODCALLTYPE *GetReturnTokenSize )(
            __RPC__in ITransactionReceiver * This,
                        __RPC__out ULONG *pcbReturnToken);
        HRESULT ( STDMETHODCALLTYPE *MarshalReturnToken )(
            __RPC__in ITransactionReceiver * This,
                       ULONG cbReturnToken,
                                 __RPC__out_ecount_full(cbReturnToken) byte *rgbReturnToken,
                        __RPC__out ULONG *pcbUsed);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITransactionReceiver * This);
        END_INTERFACE
    } ITransactionReceiverVtbl;
    interface ITransactionReceiver
    {
        CONST_VTBL struct ITransactionReceiverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UnmarshalPropagationToken(This,cbToken,rgbToken,ppTransaction) )
    ( (This)->lpVtbl -> GetReturnTokenSize(This,pcbReturnToken) )
    ( (This)->lpVtbl -> MarshalReturnToken(This,cbReturnToken,rgbReturnToken,pcbUsed) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_ITransactionReceiverFactory;
    typedef struct ITransactionReceiverFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionReceiverFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionReceiverFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionReceiverFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in ITransactionReceiverFactory * This,
                        __RPC__deref_out_opt ITransactionReceiver **ppReceiver);
        END_INTERFACE
    } ITransactionReceiverFactoryVtbl;
    interface ITransactionReceiverFactory
    {
        CONST_VTBL struct ITransactionReceiverFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,ppReceiver) )
typedef struct _ProxyConfigParams
    {
    WORD wcThreadsMax;
    } PROXY_CONFIG_PARAMS;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_IDtcLuConfigure;
    typedef struct IDtcLuConfigureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuConfigure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuConfigure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuConfigure * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IDtcLuConfigure * This,
                                __RPC__in_ecount_full(cbLuPair) byte *pucLuPair,
                       DWORD cbLuPair);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IDtcLuConfigure * This,
                                __RPC__in_ecount_full(cbLuPair) byte *pucLuPair,
                       DWORD cbLuPair);
        END_INTERFACE
    } IDtcLuConfigureVtbl;
    interface IDtcLuConfigure
    {
        CONST_VTBL struct IDtcLuConfigureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,pucLuPair,cbLuPair) )
    ( (This)->lpVtbl -> Delete(This,pucLuPair,cbLuPair) )
EXTERN_C const IID IID_IDtcLuRecovery;
    typedef struct IDtcLuRecoveryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuRecovery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuRecovery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuRecovery * This);
        END_INTERFACE
    } IDtcLuRecoveryVtbl;
    interface IDtcLuRecovery
    {
        CONST_VTBL struct IDtcLuRecoveryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IDtcLuRecoveryFactory;
    typedef struct IDtcLuRecoveryFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuRecoveryFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuRecoveryFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuRecoveryFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IDtcLuRecoveryFactory * This,
                                __RPC__in_ecount_full(cbLuPair) byte *pucLuPair,
                       DWORD cbLuPair,
                        __RPC__deref_out_opt IDtcLuRecovery **ppRecovery);
        END_INTERFACE
    } IDtcLuRecoveryFactoryVtbl;
    interface IDtcLuRecoveryFactory
    {
        CONST_VTBL struct IDtcLuRecoveryFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pucLuPair,cbLuPair,ppRecovery) )
typedef
enum _DtcLu_LocalRecovery_Work
    {
        DTCINITIATEDRECOVERYWORK_CHECKLUSTATUS = 1,
        DTCINITIATEDRECOVERYWORK_TRANS = ( DTCINITIATEDRECOVERYWORK_CHECKLUSTATUS + 1 ) ,
        DTCINITIATEDRECOVERYWORK_TMDOWN = ( DTCINITIATEDRECOVERYWORK_TRANS + 1 )
    } DTCINITIATEDRECOVERYWORK;
typedef
enum _DtcLu_Xln
    {
        DTCLUXLN_COLD = 1,
        DTCLUXLN_WARM = ( DTCLUXLN_COLD + 1 )
    } DTCLUXLN;
typedef
enum _DtcLu_Xln_Confirmation
    {
        DTCLUXLNCONFIRMATION_CONFIRM = 1,
        DTCLUXLNCONFIRMATION_LOGNAMEMISMATCH = ( DTCLUXLNCONFIRMATION_CONFIRM + 1 ) ,
        DTCLUXLNCONFIRMATION_COLDWARMMISMATCH = ( DTCLUXLNCONFIRMATION_LOGNAMEMISMATCH + 1 ) ,
        DTCLUXLNCONFIRMATION_OBSOLETE = ( DTCLUXLNCONFIRMATION_COLDWARMMISMATCH + 1 )
    } DTCLUXLNCONFIRMATION;
typedef
enum _DtcLu_Xln_Response
    {
        DTCLUXLNRESPONSE_OK_SENDOURXLNBACK = 1,
        DTCLUXLNRESPONSE_OK_SENDCONFIRMATION = ( DTCLUXLNRESPONSE_OK_SENDOURXLNBACK + 1 ) ,
        DTCLUXLNRESPONSE_LOGNAMEMISMATCH = ( DTCLUXLNRESPONSE_OK_SENDCONFIRMATION + 1 ) ,
        DTCLUXLNRESPONSE_COLDWARMMISMATCH = ( DTCLUXLNRESPONSE_LOGNAMEMISMATCH + 1 )
    } DTCLUXLNRESPONSE;
typedef
enum _DtcLu_Xln_Error
    {
        DTCLUXLNERROR_PROTOCOL = 1,
        DTCLUXLNERROR_LOGNAMEMISMATCH = ( DTCLUXLNERROR_PROTOCOL + 1 ) ,
        DTCLUXLNERROR_COLDWARMMISMATCH = ( DTCLUXLNERROR_LOGNAMEMISMATCH + 1 )
    } DTCLUXLNERROR;
typedef
enum _DtcLu_CompareState
    {
        DTCLUCOMPARESTATE_COMMITTED = 1,
        DTCLUCOMPARESTATE_HEURISTICCOMMITTED = ( DTCLUCOMPARESTATE_COMMITTED + 1 ) ,
        DTCLUCOMPARESTATE_HEURISTICMIXED = ( DTCLUCOMPARESTATE_HEURISTICCOMMITTED + 1 ) ,
        DTCLUCOMPARESTATE_HEURISTICRESET = ( DTCLUCOMPARESTATE_HEURISTICMIXED + 1 ) ,
        DTCLUCOMPARESTATE_INDOUBT = ( DTCLUCOMPARESTATE_HEURISTICRESET + 1 ) ,
        DTCLUCOMPARESTATE_RESET = ( DTCLUCOMPARESTATE_INDOUBT + 1 )
    } DTCLUCOMPARESTATE;
typedef
enum _DtcLu_CompareStates_Confirmation
    {
        DTCLUCOMPARESTATESCONFIRMATION_CONFIRM = 1,
        DTCLUCOMPARESTATESCONFIRMATION_PROTOCOL = ( DTCLUCOMPARESTATESCONFIRMATION_CONFIRM + 1 )
    } DTCLUCOMPARESTATESCONFIRMATION;
typedef
enum _DtcLu_CompareStates_Error
    {
        DTCLUCOMPARESTATESERROR_PROTOCOL = 1
    } DTCLUCOMPARESTATESERROR;
typedef
enum _DtcLu_CompareStates_Response
    {
        DTCLUCOMPARESTATESRESPONSE_OK = 1,
        DTCLUCOMPARESTATESRESPONSE_PROTOCOL = ( DTCLUCOMPARESTATESRESPONSE_OK + 1 )
    } DTCLUCOMPARESTATESRESPONSE;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IDtcLuRecoveryInitiatedByDtcTransWork;
    typedef struct IDtcLuRecoveryInitiatedByDtcTransWorkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This);
        HRESULT ( STDMETHODCALLTYPE *GetLogNameSizes )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                        DWORD *pcbOurLogName,
                        DWORD *pcbRemoteLogName);
        HRESULT ( STDMETHODCALLTYPE *GetOurXln )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                        DTCLUXLN *pXln,
                            unsigned char *pOurLogName,
                            unsigned char *pRemoteLogName,
                        DWORD *pdwProtocol);
        HRESULT ( STDMETHODCALLTYPE *HandleConfirmationFromOurXln )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       DTCLUXLNCONFIRMATION Confirmation);
        HRESULT ( STDMETHODCALLTYPE *HandleTheirXlnResponse )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       DTCLUXLN Xln,
                       unsigned char *pRemoteLogName,
                       DWORD cbRemoteLogName,
                       DWORD dwProtocol,
                        DTCLUXLNCONFIRMATION *pConfirmation);
        HRESULT ( STDMETHODCALLTYPE *HandleErrorFromOurXln )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       DTCLUXLNERROR Error);
        HRESULT ( STDMETHODCALLTYPE *CheckForCompareStates )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                        BOOL *fCompareStates);
        HRESULT ( STDMETHODCALLTYPE *GetOurTransIdSize )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                            DWORD *pcbOurTransId);
        HRESULT ( STDMETHODCALLTYPE *GetOurCompareStates )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                            unsigned char *pOurTransId,
                        DTCLUCOMPARESTATE *pCompareState);
        HRESULT ( STDMETHODCALLTYPE *HandleTheirCompareStatesResponse )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       DTCLUCOMPARESTATE CompareState,
                        DTCLUCOMPARESTATESCONFIRMATION *pConfirmation);
        HRESULT ( STDMETHODCALLTYPE *HandleErrorFromOurCompareStates )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       DTCLUCOMPARESTATESERROR Error);
        HRESULT ( STDMETHODCALLTYPE *ConversationLost )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This);
        HRESULT ( STDMETHODCALLTYPE *GetRecoverySeqNum )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                        LONG *plRecoverySeqNum);
        HRESULT ( STDMETHODCALLTYPE *ObsoleteRecoverySeqNum )(
            IDtcLuRecoveryInitiatedByDtcTransWork * This,
                       LONG lNewRecoverySeqNum);
        END_INTERFACE
    } IDtcLuRecoveryInitiatedByDtcTransWorkVtbl;
    interface IDtcLuRecoveryInitiatedByDtcTransWork
    {
        CONST_VTBL struct IDtcLuRecoveryInitiatedByDtcTransWorkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLogNameSizes(This,pcbOurLogName,pcbRemoteLogName) )
    ( (This)->lpVtbl -> GetOurXln(This,pXln,pOurLogName,pRemoteLogName,pdwProtocol) )
    ( (This)->lpVtbl -> HandleConfirmationFromOurXln(This,Confirmation) )
    ( (This)->lpVtbl -> HandleTheirXlnResponse(This,Xln,pRemoteLogName,cbRemoteLogName,dwProtocol,pConfirmation) )
    ( (This)->lpVtbl -> HandleErrorFromOurXln(This,Error) )
    ( (This)->lpVtbl -> CheckForCompareStates(This,fCompareStates) )
    ( (This)->lpVtbl -> GetOurTransIdSize(This,pcbOurTransId) )
    ( (This)->lpVtbl -> GetOurCompareStates(This,pOurTransId,pCompareState) )
    ( (This)->lpVtbl -> HandleTheirCompareStatesResponse(This,CompareState,pConfirmation) )
    ( (This)->lpVtbl -> HandleErrorFromOurCompareStates(This,Error) )
    ( (This)->lpVtbl -> ConversationLost(This) )
    ( (This)->lpVtbl -> GetRecoverySeqNum(This,plRecoverySeqNum) )
    ( (This)->lpVtbl -> ObsoleteRecoverySeqNum(This,lNewRecoverySeqNum) )
EXTERN_C const IID IID_IDtcLuRecoveryInitiatedByDtcStatusWork;
    typedef struct IDtcLuRecoveryInitiatedByDtcStatusWorkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuRecoveryInitiatedByDtcStatusWork * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuRecoveryInitiatedByDtcStatusWork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuRecoveryInitiatedByDtcStatusWork * This);
        HRESULT ( STDMETHODCALLTYPE *HandleCheckLuStatus )(
            __RPC__in IDtcLuRecoveryInitiatedByDtcStatusWork * This,
                       LONG lRecoverySeqNum);
        END_INTERFACE
    } IDtcLuRecoveryInitiatedByDtcStatusWorkVtbl;
    interface IDtcLuRecoveryInitiatedByDtcStatusWork
    {
        CONST_VTBL struct IDtcLuRecoveryInitiatedByDtcStatusWorkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleCheckLuStatus(This,lRecoverySeqNum) )
EXTERN_C const IID IID_IDtcLuRecoveryInitiatedByDtc;
    typedef struct IDtcLuRecoveryInitiatedByDtcVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcLuRecoveryInitiatedByDtc * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcLuRecoveryInitiatedByDtc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcLuRecoveryInitiatedByDtc * This);
        HRESULT ( STDMETHODCALLTYPE *GetWork )(
            IDtcLuRecoveryInitiatedByDtc * This,
                            DTCINITIATEDRECOVERYWORK *pWork,
                            void **ppv);
        END_INTERFACE
    } IDtcLuRecoveryInitiatedByDtcVtbl;
    interface IDtcLuRecoveryInitiatedByDtc
    {
        CONST_VTBL struct IDtcLuRecoveryInitiatedByDtcVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWork(This,pWork,ppv) )
EXTERN_C const IID IID_IDtcLuRecoveryInitiatedByLuWork;
    typedef struct IDtcLuRecoveryInitiatedByLuWorkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcLuRecoveryInitiatedByLuWork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcLuRecoveryInitiatedByLuWork * This);
        HRESULT ( STDMETHODCALLTYPE *HandleTheirXln )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                       LONG lRecoverySeqNum,
                       DTCLUXLN Xln,
                       unsigned char *pRemoteLogName,
                       DWORD cbRemoteLogName,
                       unsigned char *pOurLogName,
                       DWORD cbOurLogName,
                       DWORD dwProtocol,
                        DTCLUXLNRESPONSE *pResponse);
        HRESULT ( STDMETHODCALLTYPE *GetOurLogNameSize )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                            DWORD *pcbOurLogName);
        HRESULT ( STDMETHODCALLTYPE *GetOurXln )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                        DTCLUXLN *pXln,
                            unsigned char *pOurLogName,
                        DWORD *pdwProtocol);
        HRESULT ( STDMETHODCALLTYPE *HandleConfirmationOfOurXln )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                       DTCLUXLNCONFIRMATION Confirmation);
        HRESULT ( STDMETHODCALLTYPE *HandleTheirCompareStates )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                            unsigned char *pRemoteTransId,
                       DWORD cbRemoteTransId,
                       DTCLUCOMPARESTATE CompareState,
                        DTCLUCOMPARESTATESRESPONSE *pResponse,
                        DTCLUCOMPARESTATE *pCompareState);
        HRESULT ( STDMETHODCALLTYPE *HandleConfirmationOfOurCompareStates )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                       DTCLUCOMPARESTATESCONFIRMATION Confirmation);
        HRESULT ( STDMETHODCALLTYPE *HandleErrorFromOurCompareStates )(
            IDtcLuRecoveryInitiatedByLuWork * This,
                       DTCLUCOMPARESTATESERROR Error);
        HRESULT ( STDMETHODCALLTYPE *ConversationLost )(
            IDtcLuRecoveryInitiatedByLuWork * This);
        END_INTERFACE
    } IDtcLuRecoveryInitiatedByLuWorkVtbl;
    interface IDtcLuRecoveryInitiatedByLuWork
    {
        CONST_VTBL struct IDtcLuRecoveryInitiatedByLuWorkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleTheirXln(This,lRecoverySeqNum,Xln,pRemoteLogName,cbRemoteLogName,pOurLogName,cbOurLogName,dwProtocol,pResponse) )
    ( (This)->lpVtbl -> GetOurLogNameSize(This,pcbOurLogName) )
    ( (This)->lpVtbl -> GetOurXln(This,pXln,pOurLogName,pdwProtocol) )
    ( (This)->lpVtbl -> HandleConfirmationOfOurXln(This,Confirmation) )
    ( (This)->lpVtbl -> HandleTheirCompareStates(This,pRemoteTransId,cbRemoteTransId,CompareState,pResponse,pCompareState) )
    ( (This)->lpVtbl -> HandleConfirmationOfOurCompareStates(This,Confirmation) )
    ( (This)->lpVtbl -> HandleErrorFromOurCompareStates(This,Error) )
    ( (This)->lpVtbl -> ConversationLost(This) )
EXTERN_C const IID IID_IDtcLuRecoveryInitiatedByLu;
    typedef struct IDtcLuRecoveryInitiatedByLuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuRecoveryInitiatedByLu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuRecoveryInitiatedByLu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuRecoveryInitiatedByLu * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectToHandleWorkFromLu )(
            __RPC__in IDtcLuRecoveryInitiatedByLu * This,
                        __RPC__deref_out_opt IDtcLuRecoveryInitiatedByLuWork **ppWork);
        END_INTERFACE
    } IDtcLuRecoveryInitiatedByLuVtbl;
    interface IDtcLuRecoveryInitiatedByLu
    {
        CONST_VTBL struct IDtcLuRecoveryInitiatedByLuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetObjectToHandleWorkFromLu(This,ppWork) )
EXTERN_C const IID IID_IDtcLuRmEnlistment;
    typedef struct IDtcLuRmEnlistmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuRmEnlistment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuRmEnlistment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuRmEnlistment * This);
        HRESULT ( STDMETHODCALLTYPE *Unplug )(
            __RPC__in IDtcLuRmEnlistment * This,
                       BOOL fConversationLost);
        HRESULT ( STDMETHODCALLTYPE *BackedOut )(
            __RPC__in IDtcLuRmEnlistment * This);
        HRESULT ( STDMETHODCALLTYPE *BackOut )(
            __RPC__in IDtcLuRmEnlistment * This);
        HRESULT ( STDMETHODCALLTYPE *Committed )(
            __RPC__in IDtcLuRmEnlistment * This);
        HRESULT ( STDMETHODCALLTYPE *Forget )(
            __RPC__in IDtcLuRmEnlistment * This);
        HRESULT ( STDMETHODCALLTYPE *RequestCommit )(
            __RPC__in IDtcLuRmEnlistment * This);
        END_INTERFACE
    } IDtcLuRmEnlistmentVtbl;
    interface IDtcLuRmEnlistment
    {
        CONST_VTBL struct IDtcLuRmEnlistmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Unplug(This,fConversationLost) )
    ( (This)->lpVtbl -> BackedOut(This) )
    ( (This)->lpVtbl -> BackOut(This) )
    ( (This)->lpVtbl -> Committed(This) )
    ( (This)->lpVtbl -> Forget(This) )
    ( (This)->lpVtbl -> RequestCommit(This) )
EXTERN_C const IID IID_IDtcLuRmEnlistmentSink;
    typedef struct IDtcLuRmEnlistmentSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuRmEnlistmentSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *AckUnplug )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *TmDown )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *SessionLost )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *BackedOut )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *BackOut )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *Committed )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *Forget )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        HRESULT ( STDMETHODCALLTYPE *RequestCommit )(
            __RPC__in IDtcLuRmEnlistmentSink * This);
        END_INTERFACE
    } IDtcLuRmEnlistmentSinkVtbl;
    interface IDtcLuRmEnlistmentSink
    {
        CONST_VTBL struct IDtcLuRmEnlistmentSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AckUnplug(This) )
    ( (This)->lpVtbl -> TmDown(This) )
    ( (This)->lpVtbl -> SessionLost(This) )
    ( (This)->lpVtbl -> BackedOut(This) )
    ( (This)->lpVtbl -> BackOut(This) )
    ( (This)->lpVtbl -> Committed(This) )
    ( (This)->lpVtbl -> Forget(This) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RequestCommit(This) )
EXTERN_C const IID IID_IDtcLuRmEnlistmentFactory;
    typedef struct IDtcLuRmEnlistmentFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcLuRmEnlistmentFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcLuRmEnlistmentFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcLuRmEnlistmentFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            IDtcLuRmEnlistmentFactory * This,
                       unsigned char *pucLuPair,
                       DWORD cbLuPair,
                       ITransaction *pITransaction,
                       unsigned char *pTransId,
                       DWORD cbTransId,
                       IDtcLuRmEnlistmentSink *pRmEnlistmentSink,
                            IDtcLuRmEnlistment **ppRmEnlistment);
        END_INTERFACE
    } IDtcLuRmEnlistmentFactoryVtbl;
    interface IDtcLuRmEnlistmentFactory
    {
        CONST_VTBL struct IDtcLuRmEnlistmentFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pucLuPair,cbLuPair,pITransaction,pTransId,cbTransId,pRmEnlistmentSink,ppRmEnlistment) )
EXTERN_C const IID IID_IDtcLuSubordinateDtc;
    typedef struct IDtcLuSubordinateDtcVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcLuSubordinateDtc * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcLuSubordinateDtc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcLuSubordinateDtc * This);
        HRESULT ( STDMETHODCALLTYPE *Unplug )(
            __RPC__in IDtcLuSubordinateDtc * This,
                       BOOL fConversationLost);
        HRESULT ( STDMETHODCALLTYPE *BackedOut )(
            __RPC__in IDtcLuSubordinateDtc * This);
        HRESULT ( STDMETHODCALLTYPE *BackOut )(
            __RPC__in IDtcLuSubordinateDtc * This);
        HRESULT ( STDMETHODCALLTYPE *Committed )(
            __RPC__in IDtcLuSubordinateDtc * This);
        HRESULT ( STDMETHODCALLTYPE *Forget )(
            __RPC__in IDtcLuSubordinateDtc * This);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            __RPC__in IDtcLuSubordinateDtc * This);
        HRESULT ( STDMETHODCALLTYPE *RequestCommit )(
            __RPC__in IDtcLuSubordinateDtc * This);
        END_INTERFACE
    } IDtcLuSubordinateDtcVtbl;
    interface IDtcLuSubordinateDtc
    {
        CONST_VTBL struct IDtcLuSubordinateDtcVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Unplug(This,fConversationLost) )
    ( (This)->lpVtbl -> BackedOut(This) )
    ( (This)->lpVtbl -> BackOut(This) )
    ( (This)->lpVtbl -> Committed(This) )
    ( (This)->lpVtbl -> Forget(This) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RequestCommit(This) )
EXTERN_C const IID IID_IDtcLuSubordinateDtcSink;
    typedef struct IDtcLuSubordinateDtcSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcLuSubordinateDtcSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcLuSubordinateDtcSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *AckUnplug )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *TmDown )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *SessionLost )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *BackedOut )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *BackOut )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *Committed )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *Forget )(
            IDtcLuSubordinateDtcSink * This);
        HRESULT ( STDMETHODCALLTYPE *RequestCommit )(
            IDtcLuSubordinateDtcSink * This);
        END_INTERFACE
    } IDtcLuSubordinateDtcSinkVtbl;
    interface IDtcLuSubordinateDtcSink
    {
        CONST_VTBL struct IDtcLuSubordinateDtcSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AckUnplug(This) )
    ( (This)->lpVtbl -> TmDown(This) )
    ( (This)->lpVtbl -> SessionLost(This) )
    ( (This)->lpVtbl -> BackedOut(This) )
    ( (This)->lpVtbl -> BackOut(This) )
    ( (This)->lpVtbl -> Committed(This) )
    ( (This)->lpVtbl -> Forget(This) )
    ( (This)->lpVtbl -> RequestCommit(This) )
EXTERN_C const IID IID_IDtcLuSubordinateDtcFactory;
    typedef struct IDtcLuSubordinateDtcFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDtcLuSubordinateDtcFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDtcLuSubordinateDtcFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDtcLuSubordinateDtcFactory * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            IDtcLuSubordinateDtcFactory * This,
                       unsigned char *pucLuPair,
                       DWORD cbLuPair,
                       IUnknown *punkTransactionOuter,
                       ISOLEVEL isoLevel,
                       ULONG isoFlags,
                       ITransactionOptions *pOptions,
                        ITransaction **ppTransaction,
                       unsigned char *pTransId,
                       DWORD cbTransId,
                       IDtcLuSubordinateDtcSink *pSubordinateDtcSink,
                            IDtcLuSubordinateDtc **ppSubordinateDtc);
        END_INTERFACE
    } IDtcLuSubordinateDtcFactoryVtbl;
    interface IDtcLuSubordinateDtcFactory
    {
        CONST_VTBL struct IDtcLuSubordinateDtcFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,pucLuPair,cbLuPair,punkTransactionOuter,isoLevel,isoFlags,pOptions,ppTransaction,pTransId,cbTransId,pSubordinateDtcSink,ppSubordinateDtc) )
DEFINE_GUID(IID_IXATransLookup, 0xF3B1F131, 0xEEDA, 0x11ce, 0xAE, 0xD4, 0x00, 0xAA, 0x00, 0x51, 0xE2, 0xC4);
DEFINE_GUID(IID_IXATransLookup2,0xbf193c85, 0xd1a, 0x4290, 0xb8, 0x8f, 0xd2, 0xcb, 0x88, 0x73, 0xd1, 0xe7);
DEFINE_GUID(IID_IResourceManagerSink, 0x0D563181, 0xDEFB, 0x11ce, 0xAE, 0xD1, 0x00, 0xAA, 0x00, 0x51, 0xE2, 0xC4);
DEFINE_GUID(IID_IResourceManager, 0x13741d21, 0x87eb, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_IResourceManagerRejoinable, 0x6f6de620, 0xb5df, 0x4f3e, 0x9c, 0xfa, 0xc8, 0xae, 0xbd, 0x05, 0x17, 0x2b);
DEFINE_GUID(IID_IResourceManager2, 0xd136c69a, 0xf749, 0x11d1, 0x8f, 0x47, 0x0, 0xc0, 0x4f, 0x8e, 0xe5, 0x7d);
DEFINE_GUID(IID_ILastResourceManager, 0x4d964ad4, 0x5b33, 0x11d3, 0x8a, 0x91, 0x00, 0xc0, 0x4f, 0x79, 0xeb, 0x6d);
DEFINE_GUID(IID_IXAConfig, 0xC8A6E3A1, 0x9A8C, 0x11cf, 0xA3, 0x08, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IRMHelper, 0xE793F6D1, 0xF53D, 0x11cf, 0xA6, 0x0D, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXAObtainRMInfo, 0xE793F6D2, 0xF53D, 0x11cf, 0xA6, 0x0D, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXAResourceManager, 0x4131E751, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXAResourceManagerFactory, 0x4131E750, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXATransaction, 0x4131E752, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IResourceManagerFactory, 0x13741d20, 0x87eb, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_IResourceManagerFactory2, 0x6b369c21, 0xfbd2, 0x11d1, 0x8f, 0x47, 0x0, 0xc0, 0x4f, 0x8e, 0xe5, 0x7d);
DEFINE_GUID(IID_IPrepareInfo, 0x80c7bfd0, 0x87ee, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_IPrepareInfo2, 0x5FAB2547, 0x9779, 0x11d1, 0xB8, 0x86, 0x00, 0xC0, 0x4F, 0xB9, 0x61, 0x8A);
DEFINE_GUID(IID_IGetDispenser, 0xc23cc370, 0x87ef, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_ITransactionVoterNotifyAsync2, 0x5433376b, 0x414d, 0x11d3, 0xb2, 0x6, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITransactionVoterBallotAsync2, 0x5433376c, 0x414d, 0x11d3, 0xb2, 0x6, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITransactionVoterFactory2, 0x5433376a, 0x414d, 0x11d3, 0xb2, 0x6, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITransactionPhase0EnlistmentAsync, 0x82DC88E1, 0xA954, 0x11d1, 0x8F, 0x88, 0x00, 0x60, 0x08, 0x95, 0xE7, 0xD5);
DEFINE_GUID(IID_ITransactionPhase0NotifyAsync, 0xEF081809, 0x0C76, 0x11d2, 0x87, 0xA6, 0x00, 0xC0, 0x4F, 0x99, 0x0F, 0x34);
DEFINE_GUID(IID_ITransactionPhase0Factory, 0x82DC88E0, 0xA954, 0x11d1, 0x8F, 0x88, 0x00, 0x60, 0x08, 0x95, 0xE7, 0xD5);
DEFINE_GUID(IID_ITransactionTransmitter, 0x59313E01, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_ITransactionTransmitterFactory, 0x59313E00, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_ITransactionReceiver, 0x59313E03, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_ITransactionReceiverFactory, 0x59313E02, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_IDtcLuConfigure, 0x4131E760, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecovery, 0xac2b8ad2, 0xd6f0, 0x11d0, 0xb3, 0x86, 0x0, 0xa0, 0xc9, 0x8, 0x33, 0x65);
DEFINE_GUID(IID_IDtcLuRecoveryFactory, 0x4131E762, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByDtcTransWork, 0x4131E765, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByDtcStatusWork, 0x4131E766, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByDtc, 0x4131E764, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByLuWork, 0xac2b8ad1, 0xd6f0, 0x11d0, 0xb3, 0x86, 0x0, 0xa0, 0xc9, 0x8, 0x33, 0x65);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByLu, 0x4131E768, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRmEnlistment, 0x4131E769, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRmEnlistmentSink, 0x4131E770, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRmEnlistmentFactory, 0x4131E771, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuSubordinateDtc, 0x4131E773, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuSubordinateDtcSink, 0x4131E774, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuSubordinateDtcFactory, 0x4131E775, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
#pragma deprecated (IXAConfig)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0039_v0_0_s_ifspec;
}
