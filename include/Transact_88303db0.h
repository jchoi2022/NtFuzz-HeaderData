#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITransaction ITransaction;
typedef interface ITransactionCloner ITransactionCloner;
typedef interface ITransaction2 ITransaction2;
typedef interface ITransactionDispenser ITransactionDispenser;
typedef interface ITransactionOptions ITransactionOptions;
typedef interface ITransactionOutcomeEvents ITransactionOutcomeEvents;
typedef interface ITmNodeName ITmNodeName;
typedef interface IKernelTransaction IKernelTransaction;
#include "unknwn.h"
extern "C"{
#include "winerror.h"
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0000_v0_0_s_ifspec;
typedef struct BOID
    {
    byte rgb[ 16 ];
    } BOID;
typedef
enum TX_MISC_CONSTANTS
    {
        MAX_TRAN_DESC = 40
    } TX_MISC_CONSTANTS;
typedef BOID XACTUOW;
typedef LONG ISOLEVEL;
typedef
enum ISOLATIONLEVEL
    {
        ISOLATIONLEVEL_UNSPECIFIED = 0xffffffff,
        ISOLATIONLEVEL_CHAOS = 0x10,
        ISOLATIONLEVEL_READUNCOMMITTED = 0x100,
        ISOLATIONLEVEL_BROWSE = 0x100,
        ISOLATIONLEVEL_CURSORSTABILITY = 0x1000,
        ISOLATIONLEVEL_READCOMMITTED = 0x1000,
        ISOLATIONLEVEL_REPEATABLEREAD = 0x10000,
        ISOLATIONLEVEL_SERIALIZABLE = 0x100000,
        ISOLATIONLEVEL_ISOLATED = 0x100000
    } ISOLATIONLEVEL;
typedef struct XACTTRANSINFO
    {
    XACTUOW uow;
    ISOLEVEL isoLevel;
    ULONG isoFlags;
    DWORD grfTCSupported;
    DWORD grfRMSupported;
    DWORD grfTCSupportedRetaining;
    DWORD grfRMSupportedRetaining;
    } XACTTRANSINFO;
typedef struct XACTSTATS
    {
    ULONG cOpen;
    ULONG cCommitting;
    ULONG cCommitted;
    ULONG cAborting;
    ULONG cAborted;
    ULONG cInDoubt;
    ULONG cHeuristicDecision;
    FILETIME timeTransactionsUp;
    } XACTSTATS;
typedef
enum ISOFLAG
    {
        ISOFLAG_RETAIN_COMMIT_DC = 1,
        ISOFLAG_RETAIN_COMMIT = 2,
        ISOFLAG_RETAIN_COMMIT_NO = 3,
        ISOFLAG_RETAIN_ABORT_DC = 4,
        ISOFLAG_RETAIN_ABORT = 8,
        ISOFLAG_RETAIN_ABORT_NO = 12,
        ISOFLAG_RETAIN_DONTCARE = ( ISOFLAG_RETAIN_COMMIT_DC | ISOFLAG_RETAIN_ABORT_DC ) ,
        ISOFLAG_RETAIN_BOTH = ( ISOFLAG_RETAIN_COMMIT | ISOFLAG_RETAIN_ABORT ) ,
        ISOFLAG_RETAIN_NONE = ( ISOFLAG_RETAIN_COMMIT_NO | ISOFLAG_RETAIN_ABORT_NO ) ,
        ISOFLAG_OPTIMISTIC = 16,
        ISOFLAG_READONLY = 32
    } ISOFLAG;
typedef
enum XACTTC
    {
        XACTTC_NONE = 0,
        XACTTC_SYNC_PHASEONE = 1,
        XACTTC_SYNC_PHASETWO = 2,
        XACTTC_SYNC = 2,
        XACTTC_ASYNC_PHASEONE = 4,
        XACTTC_ASYNC = 4
    } XACTTC;
typedef
enum XACTRM
    {
        XACTRM_OPTIMISTICLASTWINS = 1,
        XACTRM_NOREADONLYPREPARES = 2
    } XACTRM;
typedef
enum XACTCONST
    {
        XACTCONST_TIMEOUTINFINITE = 0
    } XACTCONST;
typedef
enum XACTHEURISTIC
    {
        XACTHEURISTIC_ABORT = 1,
        XACTHEURISTIC_COMMIT = 2,
        XACTHEURISTIC_DAMAGE = 3,
        XACTHEURISTIC_DANGER = 4
    } XACTHEURISTIC;
typedef
enum XACTSTAT
    {
        XACTSTAT_NONE = 0,
        XACTSTAT_OPENNORMAL = 0x1,
        XACTSTAT_OPENREFUSED = 0x2,
        XACTSTAT_PREPARING = 0x4,
        XACTSTAT_PREPARED = 0x8,
        XACTSTAT_PREPARERETAINING = 0x10,
        XACTSTAT_PREPARERETAINED = 0x20,
        XACTSTAT_COMMITTING = 0x40,
        XACTSTAT_COMMITRETAINING = 0x80,
        XACTSTAT_ABORTING = 0x100,
        XACTSTAT_ABORTED = 0x200,
        XACTSTAT_COMMITTED = 0x400,
        XACTSTAT_HEURISTIC_ABORT = 0x800,
        XACTSTAT_HEURISTIC_COMMIT = 0x1000,
        XACTSTAT_HEURISTIC_DAMAGE = 0x2000,
        XACTSTAT_HEURISTIC_DANGER = 0x4000,
        XACTSTAT_FORCED_ABORT = 0x8000,
        XACTSTAT_FORCED_COMMIT = 0x10000,
        XACTSTAT_INDOUBT = 0x20000,
        XACTSTAT_CLOSED = 0x40000,
        XACTSTAT_OPEN = 0x3,
        XACTSTAT_NOTPREPARED = 0x7ffc3,
        XACTSTAT_ALL = 0x7ffff
    } XACTSTAT;
typedef struct XACTOPT
    {
    ULONG ulTimeout;
    char szDescription[ 40 ];
    } XACTOPT;
extern RPC_IF_HANDLE BasicTransactionTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE BasicTransactionTypes_v0_0_s_ifspec;
EXTERN_C const IID IID_ITransaction;
    typedef struct ITransactionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransaction * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransaction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransaction * This);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ITransaction * This,
                       BOOL fRetaining,
                       DWORD grfTC,
                       DWORD grfRM);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in ITransaction * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                       BOOL fAsync);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionInfo )(
            __RPC__in ITransaction * This,
                        __RPC__out XACTTRANSINFO *pinfo);
        END_INTERFACE
    } ITransactionVtbl;
    interface ITransaction
    {
        CONST_VTBL struct ITransactionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
    ( (This)->lpVtbl -> Abort(This,pboidReason,fRetaining,fAsync) )
    ( (This)->lpVtbl -> GetTransactionInfo(This,pinfo) )
EXTERN_C const IID IID_ITransactionCloner;
    typedef struct ITransactionClonerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionCloner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionCloner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionCloner * This);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ITransactionCloner * This,
                       BOOL fRetaining,
                       DWORD grfTC,
                       DWORD grfRM);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in ITransactionCloner * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                       BOOL fAsync);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionInfo )(
            __RPC__in ITransactionCloner * This,
                        __RPC__out XACTTRANSINFO *pinfo);
        HRESULT ( STDMETHODCALLTYPE *CloneWithCommitDisabled )(
            __RPC__in ITransactionCloner * This,
                        __RPC__deref_out_opt ITransaction **ppITransaction);
        END_INTERFACE
    } ITransactionClonerVtbl;
    interface ITransactionCloner
    {
        CONST_VTBL struct ITransactionClonerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
    ( (This)->lpVtbl -> Abort(This,pboidReason,fRetaining,fAsync) )
    ( (This)->lpVtbl -> GetTransactionInfo(This,pinfo) )
    ( (This)->lpVtbl -> CloneWithCommitDisabled(This,ppITransaction) )
EXTERN_C const IID IID_ITransaction2;
    typedef struct ITransaction2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransaction2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransaction2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransaction2 * This);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ITransaction2 * This,
                       BOOL fRetaining,
                       DWORD grfTC,
                       DWORD grfRM);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in ITransaction2 * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                       BOOL fAsync);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionInfo )(
            __RPC__in ITransaction2 * This,
                        __RPC__out XACTTRANSINFO *pinfo);
        HRESULT ( STDMETHODCALLTYPE *CloneWithCommitDisabled )(
            __RPC__in ITransaction2 * This,
                        __RPC__deref_out_opt ITransaction **ppITransaction);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionInfo2 )(
            __RPC__in ITransaction2 * This,
                        __RPC__out XACTTRANSINFO *pinfo);
        END_INTERFACE
    } ITransaction2Vtbl;
    interface ITransaction2
    {
        CONST_VTBL struct ITransaction2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
    ( (This)->lpVtbl -> Abort(This,pboidReason,fRetaining,fAsync) )
    ( (This)->lpVtbl -> GetTransactionInfo(This,pinfo) )
    ( (This)->lpVtbl -> CloneWithCommitDisabled(This,ppITransaction) )
    ( (This)->lpVtbl -> GetTransactionInfo2(This,pinfo) )
EXTERN_C const IID IID_ITransactionDispenser;
    typedef struct ITransactionDispenserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionDispenser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionDispenser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionDispenser * This);
        HRESULT ( STDMETHODCALLTYPE *GetOptionsObject )(
            __RPC__in ITransactionDispenser * This,
                        __RPC__deref_out_opt ITransactionOptions **ppOptions);
        HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in ITransactionDispenser * This,
                               __RPC__in_opt IUnknown *punkOuter,
                       ISOLEVEL isoLevel,
                       ULONG isoFlags,
                               __RPC__in_opt ITransactionOptions *pOptions,
                        __RPC__deref_out_opt ITransaction **ppTransaction);
        END_INTERFACE
    } ITransactionDispenserVtbl;
    interface ITransactionDispenser
    {
        CONST_VTBL struct ITransactionDispenserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOptionsObject(This,ppOptions) )
    ( (This)->lpVtbl -> BeginTransaction(This,punkOuter,isoLevel,isoFlags,pOptions,ppTransaction) )
EXTERN_C const IID IID_ITransactionOptions;
    typedef struct ITransactionOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionOptions * This);
        HRESULT ( STDMETHODCALLTYPE *SetOptions )(
            __RPC__in ITransactionOptions * This,
                       __RPC__in XACTOPT *pOptions);
        HRESULT ( STDMETHODCALLTYPE *GetOptions )(
            __RPC__in ITransactionOptions * This,
                            __RPC__inout XACTOPT *pOptions);
        END_INTERFACE
    } ITransactionOptionsVtbl;
    interface ITransactionOptions
    {
        CONST_VTBL struct ITransactionOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOptions(This,pOptions) )
    ( (This)->lpVtbl -> GetOptions(This,pOptions) )
EXTERN_C const IID IID_ITransactionOutcomeEvents;
    typedef struct ITransactionOutcomeEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionOutcomeEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionOutcomeEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionOutcomeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Committed )(
            __RPC__in ITransactionOutcomeEvents * This,
                       BOOL fRetaining,
                               __RPC__in_opt XACTUOW *pNewUOW,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *Aborted )(
            __RPC__in ITransactionOutcomeEvents * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                               __RPC__in_opt XACTUOW *pNewUOW,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *HeuristicDecision )(
            __RPC__in ITransactionOutcomeEvents * This,
                       DWORD dwDecision,
                               __RPC__in_opt BOID *pboidReason,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *Indoubt )(
            __RPC__in ITransactionOutcomeEvents * This);
        END_INTERFACE
    } ITransactionOutcomeEventsVtbl;
    interface ITransactionOutcomeEvents
    {
        CONST_VTBL struct ITransactionOutcomeEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Committed(This,fRetaining,pNewUOW,hr) )
    ( (This)->lpVtbl -> Aborted(This,pboidReason,fRetaining,pNewUOW,hr) )
    ( (This)->lpVtbl -> HeuristicDecision(This,dwDecision,pboidReason,hr) )
    ( (This)->lpVtbl -> Indoubt(This) )
EXTERN_C const IID IID_ITmNodeName;
    typedef struct ITmNodeNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITmNodeName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITmNodeName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITmNodeName * This);
        HRESULT ( STDMETHODCALLTYPE *GetNodeNameSize )(
            __RPC__in ITmNodeName * This,
                        __RPC__out ULONG *pcbNodeNameSize);
        HRESULT ( STDMETHODCALLTYPE *GetNodeName )(
            __RPC__in ITmNodeName * This,
                       ULONG cbNodeNameBufferSize,
                            __RPC__inout LPWSTR pNodeNameBuffer);
        END_INTERFACE
    } ITmNodeNameVtbl;
    interface ITmNodeName
    {
        CONST_VTBL struct ITmNodeNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNodeNameSize(This,pcbNodeNameSize) )
    ( (This)->lpVtbl -> GetNodeName(This,cbNodeNameBufferSize,pNodeNameBuffer) )
EXTERN_C const IID IID_IKernelTransaction;
    typedef struct IKernelTransactionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKernelTransaction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKernelTransaction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKernelTransaction * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandle )(
            IKernelTransaction * This,
                        HANDLE *pHandle);
        END_INTERFACE
    } IKernelTransactionVtbl;
    interface IKernelTransaction
    {
        CONST_VTBL struct IKernelTransactionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHandle(This,pHandle) )
DEFINE_GUID(IID_ITransaction, 0x0fb15084, 0xaf41, 0x11ce, 0xbd, 0x2b, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionCloner, 0x02656950, 0x2152, 0x11d0, 0x94, 0x4C, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_ITransaction2, 0x34021548, 0x0065, 0x11d3, 0xba, 0xc1, 0x00, 0xc0, 0x4f, 0x79, 0x7b, 0xe2);
DEFINE_GUID(IID_ITransactionDispenser, 0x3A6AD9E1, 0x23B9, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITransactionOptions, 0x3A6AD9E0, 0x23B9, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITransactionOutcomeEvents, 0x3A6AD9E2, 0x23B9, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITmNodeName, 0x30274F88, 0x6EE4, 0x474e, 0x9B, 0x95, 0x78, 0x07, 0xBC, 0x9E, 0xF8, 0xCF);
DEFINE_GUID(IID_IKernelTransaction, 0x79427a2b, 0xf895, 0x40e0, 0xbe, 0x79, 0xb5, 0x7d, 0xc8, 0x2e, 0xd2, 0x31);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0009_v0_0_s_ifspec;
}
