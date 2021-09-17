#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITransactionResourceAsync ITransactionResourceAsync;
typedef interface ITransactionLastResourceAsync ITransactionLastResourceAsync;
typedef interface ITransactionResource ITransactionResource;
typedef interface ITransactionEnlistmentAsync ITransactionEnlistmentAsync;
typedef interface ITransactionLastEnlistmentAsync ITransactionLastEnlistmentAsync;
typedef interface ITransactionExportFactory ITransactionExportFactory;
typedef interface ITransactionImportWhereabouts ITransactionImportWhereabouts;
typedef interface ITransactionExport ITransactionExport;
typedef interface ITransactionImport ITransactionImport;
typedef interface ITipTransaction ITipTransaction;
typedef interface ITipHelper ITipHelper;
typedef interface ITipPullSink ITipPullSink;
typedef interface IDtcNetworkAccessConfig IDtcNetworkAccessConfig;
typedef interface IDtcNetworkAccessConfig2 IDtcNetworkAccessConfig2;
typedef interface IDtcNetworkAccessConfig3 IDtcNetworkAccessConfig3;
#include "transact.h"
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITransactionResourceAsync;
    typedef struct ITransactionResourceAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionResourceAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionResourceAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionResourceAsync * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareRequest )(
            __RPC__in ITransactionResourceAsync * This,
                       BOOL fRetaining,
                       DWORD grfRM,
                       BOOL fWantMoniker,
                       BOOL fSinglePhase);
        HRESULT ( STDMETHODCALLTYPE *CommitRequest )(
            __RPC__in ITransactionResourceAsync * This,
                       DWORD grfRM,
                               __RPC__in_opt XACTUOW *pNewUOW);
        HRESULT ( STDMETHODCALLTYPE *AbortRequest )(
            __RPC__in ITransactionResourceAsync * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                               __RPC__in_opt XACTUOW *pNewUOW);
        HRESULT ( STDMETHODCALLTYPE *TMDown )(
            __RPC__in ITransactionResourceAsync * This);
        END_INTERFACE
    } ITransactionResourceAsyncVtbl;
    interface ITransactionResourceAsync
    {
        CONST_VTBL struct ITransactionResourceAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PrepareRequest(This,fRetaining,grfRM,fWantMoniker,fSinglePhase) )
    ( (This)->lpVtbl -> CommitRequest(This,grfRM,pNewUOW) )
    ( (This)->lpVtbl -> AbortRequest(This,pboidReason,fRetaining,pNewUOW) )
    ( (This)->lpVtbl -> TMDown(This) )
EXTERN_C const IID IID_ITransactionLastResourceAsync;
    typedef struct ITransactionLastResourceAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionLastResourceAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionLastResourceAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionLastResourceAsync * This);
        HRESULT ( STDMETHODCALLTYPE *DelegateCommit )(
            __RPC__in ITransactionLastResourceAsync * This,
                       DWORD grfRM);
        HRESULT ( STDMETHODCALLTYPE *ForgetRequest )(
            __RPC__in ITransactionLastResourceAsync * This,
                       __RPC__in XACTUOW *pNewUOW);
        END_INTERFACE
    } ITransactionLastResourceAsyncVtbl;
    interface ITransactionLastResourceAsync
    {
        CONST_VTBL struct ITransactionLastResourceAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DelegateCommit(This,grfRM) )
    ( (This)->lpVtbl -> ForgetRequest(This,pNewUOW) )
EXTERN_C const IID IID_ITransactionResource;
    typedef struct ITransactionResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionResource * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareRequest )(
            __RPC__in ITransactionResource * This,
                       BOOL fRetaining,
                       DWORD grfRM,
                       BOOL fWantMoniker,
                       BOOL fSinglePhase);
        HRESULT ( STDMETHODCALLTYPE *CommitRequest )(
            __RPC__in ITransactionResource * This,
                       DWORD grfRM,
                               __RPC__in_opt XACTUOW *pNewUOW);
        HRESULT ( STDMETHODCALLTYPE *AbortRequest )(
            __RPC__in ITransactionResource * This,
                               __RPC__in_opt BOID *pboidReason,
                       BOOL fRetaining,
                               __RPC__in_opt XACTUOW *pNewUOW);
        HRESULT ( STDMETHODCALLTYPE *TMDown )(
            __RPC__in ITransactionResource * This);
        END_INTERFACE
    } ITransactionResourceVtbl;
    interface ITransactionResource
    {
        CONST_VTBL struct ITransactionResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PrepareRequest(This,fRetaining,grfRM,fWantMoniker,fSinglePhase) )
    ( (This)->lpVtbl -> CommitRequest(This,grfRM,pNewUOW) )
    ( (This)->lpVtbl -> AbortRequest(This,pboidReason,fRetaining,pNewUOW) )
    ( (This)->lpVtbl -> TMDown(This) )
EXTERN_C const IID IID_ITransactionEnlistmentAsync;
    typedef struct ITransactionEnlistmentAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionEnlistmentAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionEnlistmentAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionEnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareRequestDone )(
            __RPC__in ITransactionEnlistmentAsync * This,
                       HRESULT hr,
                               __RPC__in_opt IMoniker *pmk,
                               __RPC__in_opt BOID *pboidReason);
        HRESULT ( STDMETHODCALLTYPE *CommitRequestDone )(
            __RPC__in ITransactionEnlistmentAsync * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *AbortRequestDone )(
            __RPC__in ITransactionEnlistmentAsync * This,
                       HRESULT hr);
        END_INTERFACE
    } ITransactionEnlistmentAsyncVtbl;
    interface ITransactionEnlistmentAsync
    {
        CONST_VTBL struct ITransactionEnlistmentAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PrepareRequestDone(This,hr,pmk,pboidReason) )
    ( (This)->lpVtbl -> CommitRequestDone(This,hr) )
    ( (This)->lpVtbl -> AbortRequestDone(This,hr) )
EXTERN_C const IID IID_ITransactionLastEnlistmentAsync;
    typedef struct ITransactionLastEnlistmentAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionLastEnlistmentAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionLastEnlistmentAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionLastEnlistmentAsync * This);
        HRESULT ( STDMETHODCALLTYPE *TransactionOutcome )(
            __RPC__in ITransactionLastEnlistmentAsync * This,
                       XACTSTAT XactStat,
                               __RPC__in_opt BOID *pboidReason);
        END_INTERFACE
    } ITransactionLastEnlistmentAsyncVtbl;
    interface ITransactionLastEnlistmentAsync
    {
        CONST_VTBL struct ITransactionLastEnlistmentAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransactionOutcome(This,XactStat,pboidReason) )
EXTERN_C const IID IID_ITransactionExportFactory;
    typedef struct ITransactionExportFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionExportFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionExportFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionExportFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteClassId )(
            __RPC__in ITransactionExportFactory * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in ITransactionExportFactory * This,
                       ULONG cbWhereabouts,
                                __RPC__in_ecount_full(cbWhereabouts) byte *rgbWhereabouts,
                        __RPC__deref_out_opt ITransactionExport **ppExport);
        END_INTERFACE
    } ITransactionExportFactoryVtbl;
    interface ITransactionExportFactory
    {
        CONST_VTBL struct ITransactionExportFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRemoteClassId(This,pclsid) )
    ( (This)->lpVtbl -> Create(This,cbWhereabouts,rgbWhereabouts,ppExport) )
EXTERN_C const IID IID_ITransactionImportWhereabouts;
    typedef struct ITransactionImportWhereaboutsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionImportWhereabouts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionImportWhereabouts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionImportWhereabouts * This);
        HRESULT ( STDMETHODCALLTYPE *GetWhereaboutsSize )(
            __RPC__in ITransactionImportWhereabouts * This,
                        __RPC__out ULONG *pcbWhereabouts);
                      HRESULT ( STDMETHODCALLTYPE *GetWhereabouts )(
            ITransactionImportWhereabouts * This,
                       ULONG cbWhereabouts,
                                 byte *rgbWhereabouts,
                        ULONG *pcbUsed);
        END_INTERFACE
    } ITransactionImportWhereaboutsVtbl;
    interface ITransactionImportWhereabouts
    {
        CONST_VTBL struct ITransactionImportWhereaboutsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWhereaboutsSize(This,pcbWhereabouts) )
    ( (This)->lpVtbl -> GetWhereabouts(This,cbWhereabouts,rgbWhereabouts,pcbUsed) )
                HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_RemoteGetWhereabouts_Proxy(
    __RPC__in ITransactionImportWhereabouts * This,
                __RPC__out ULONG *pcbUsed,
               ULONG cbWhereabouts,
                                    __RPC__out_ecount_part(cbWhereabouts, *pcbUsed) byte *rgbWhereabouts);
void __RPC_STUB ITransactionImportWhereabouts_RemoteGetWhereabouts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ITransactionExport;
    typedef struct ITransactionExportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionExport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionExport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionExport * This);
        HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in ITransactionExport * This,
                       __RPC__in_opt IUnknown *punkTransaction,
                        __RPC__out ULONG *pcbTransactionCookie);
                      HRESULT ( STDMETHODCALLTYPE *GetTransactionCookie )(
            ITransactionExport * This,
                       IUnknown *punkTransaction,
                       ULONG cbTransactionCookie,
                                 byte *rgbTransactionCookie,
                        ULONG *pcbUsed);
        END_INTERFACE
    } ITransactionExportVtbl;
    interface ITransactionExport
    {
        CONST_VTBL struct ITransactionExportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Export(This,punkTransaction,pcbTransactionCookie) )
    ( (This)->lpVtbl -> GetTransactionCookie(This,punkTransaction,cbTransactionCookie,rgbTransactionCookie,pcbUsed) )
                HRESULT STDMETHODCALLTYPE ITransactionExport_RemoteGetTransactionCookie_Proxy(
    __RPC__in ITransactionExport * This,
               __RPC__in_opt IUnknown *punkTransaction,
                __RPC__out ULONG *pcbUsed,
               ULONG cbTransactionCookie,
                                    __RPC__out_ecount_part(cbTransactionCookie, *pcbUsed) byte *rgbTransactionCookie);
void __RPC_STUB ITransactionExport_RemoteGetTransactionCookie_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ITransactionImport;
    typedef struct ITransactionImportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransactionImport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransactionImport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransactionImport * This);
        HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in ITransactionImport * This,
                       ULONG cbTransactionCookie,
                                __RPC__in_ecount_full(cbTransactionCookie) byte *rgbTransactionCookie,
                       __RPC__in IID *piid,
                                __RPC__deref_out_opt void **ppvTransaction);
        END_INTERFACE
    } ITransactionImportVtbl;
    interface ITransactionImport
    {
        CONST_VTBL struct ITransactionImportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Import(This,cbTransactionCookie,rgbTransactionCookie,piid,ppvTransaction) )
EXTERN_C const IID IID_ITipTransaction;
    typedef struct ITipTransactionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITipTransaction * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITipTransaction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITipTransaction * This);
        HRESULT ( STDMETHODCALLTYPE *Push )(
            __RPC__in ITipTransaction * This,
                       __RPC__in char *i_pszRemoteTmUrl,
                        __RPC__deref_out_opt LPSTR *o_ppszRemoteTxUrl);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionUrl )(
            __RPC__in ITipTransaction * This,
                        __RPC__deref_out_opt LPSTR *o_ppszLocalTxUrl);
        END_INTERFACE
    } ITipTransactionVtbl;
    interface ITipTransaction
    {
        CONST_VTBL struct ITipTransactionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Push(This,i_pszRemoteTmUrl,o_ppszRemoteTxUrl) )
    ( (This)->lpVtbl -> GetTransactionUrl(This,o_ppszLocalTxUrl) )
EXTERN_C const IID IID_ITipHelper;
    typedef struct ITipHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITipHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITipHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITipHelper * This);
        HRESULT ( STDMETHODCALLTYPE *Pull )(
            __RPC__in ITipHelper * This,
                       __RPC__in char *i_pszTxUrl,
                        __RPC__deref_out_opt ITransaction **o_ppITransaction);
        HRESULT ( STDMETHODCALLTYPE *PullAsync )(
            __RPC__in ITipHelper * This,
                       __RPC__in char *i_pszTxUrl,
                       __RPC__in_opt ITipPullSink *i_pTipPullSink,
                        __RPC__deref_out_opt ITransaction **o_ppITransaction);
        HRESULT ( STDMETHODCALLTYPE *GetLocalTmUrl )(
            __RPC__in ITipHelper * This,
                        __RPC__deref_out_opt char **o_ppszLocalTmUrl);
        END_INTERFACE
    } ITipHelperVtbl;
    interface ITipHelper
    {
        CONST_VTBL struct ITipHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Pull(This,i_pszTxUrl,o_ppITransaction) )
    ( (This)->lpVtbl -> PullAsync(This,i_pszTxUrl,i_pTipPullSink,o_ppITransaction) )
    ( (This)->lpVtbl -> GetLocalTmUrl(This,o_ppszLocalTmUrl) )
EXTERN_C const IID IID_ITipPullSink;
    typedef struct ITipPullSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITipPullSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITipPullSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITipPullSink * This);
        HRESULT ( STDMETHODCALLTYPE *PullComplete )(
            __RPC__in ITipPullSink * This,
                       HRESULT i_hrPull);
        END_INTERFACE
    } ITipPullSinkVtbl;
    interface ITipPullSink
    {
        CONST_VTBL struct ITipPullSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PullComplete(This,i_hrPull) )
EXTERN_C const IID IID_IDtcNetworkAccessConfig;
    typedef struct IDtcNetworkAccessConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcNetworkAccessConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcNetworkAccessConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetAnyNetworkAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                        __RPC__out BOOL *pbAnyNetworkAccess);
        HRESULT ( STDMETHODCALLTYPE *SetAnyNetworkAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       BOOL bAnyNetworkAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkAdministrationAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                        __RPC__out BOOL *pbNetworkAdministrationAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkAdministrationAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       BOOL bNetworkAdministrationAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkTransactionAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                        __RPC__out BOOL *pbNetworkTransactionAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkTransactionAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       BOOL bNetworkTransactionAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkClientAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                        __RPC__out BOOL *pbNetworkClientAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkClientAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       BOOL bNetworkClientAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkTIPAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                        __RPC__out BOOL *pbNetworkTIPAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkTIPAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       BOOL bNetworkTIPAccess);
        HRESULT ( STDMETHODCALLTYPE *GetXAAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                        __RPC__out BOOL *pbXAAccess);
        HRESULT ( STDMETHODCALLTYPE *SetXAAccess )(
            __RPC__in IDtcNetworkAccessConfig * This,
                       BOOL bXAAccess);
        HRESULT ( STDMETHODCALLTYPE *RestartDtcService )(
            __RPC__in IDtcNetworkAccessConfig * This);
        END_INTERFACE
    } IDtcNetworkAccessConfigVtbl;
    interface IDtcNetworkAccessConfig
    {
        CONST_VTBL struct IDtcNetworkAccessConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAnyNetworkAccess(This,pbAnyNetworkAccess) )
    ( (This)->lpVtbl -> SetAnyNetworkAccess(This,bAnyNetworkAccess) )
    ( (This)->lpVtbl -> GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess) )
    ( (This)->lpVtbl -> SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess) )
    ( (This)->lpVtbl -> GetNetworkTransactionAccess(This,pbNetworkTransactionAccess) )
    ( (This)->lpVtbl -> SetNetworkTransactionAccess(This,bNetworkTransactionAccess) )
    ( (This)->lpVtbl -> GetNetworkClientAccess(This,pbNetworkClientAccess) )
    ( (This)->lpVtbl -> SetNetworkClientAccess(This,bNetworkClientAccess) )
    ( (This)->lpVtbl -> GetNetworkTIPAccess(This,pbNetworkTIPAccess) )
    ( (This)->lpVtbl -> SetNetworkTIPAccess(This,bNetworkTIPAccess) )
    ( (This)->lpVtbl -> GetXAAccess(This,pbXAAccess) )
    ( (This)->lpVtbl -> SetXAAccess(This,bXAAccess) )
    ( (This)->lpVtbl -> RestartDtcService(This) )
typedef
enum AUTHENTICATION_LEVEL
    {
        NO_AUTHENTICATION_REQUIRED = 0,
        INCOMING_AUTHENTICATION_REQUIRED = 1,
        MUTUAL_AUTHENTICATION_REQUIRED = 2
    } AUTHENTICATION_LEVEL;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IDtcNetworkAccessConfig2;
    typedef struct IDtcNetworkAccessConfig2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcNetworkAccessConfig2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcNetworkAccessConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAnyNetworkAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbAnyNetworkAccess);
        HRESULT ( STDMETHODCALLTYPE *SetAnyNetworkAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bAnyNetworkAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkAdministrationAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbNetworkAdministrationAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkAdministrationAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bNetworkAdministrationAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkTransactionAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbNetworkTransactionAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkTransactionAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bNetworkTransactionAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkClientAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbNetworkClientAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkClientAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bNetworkClientAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkTIPAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbNetworkTIPAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkTIPAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bNetworkTIPAccess);
        HRESULT ( STDMETHODCALLTYPE *GetXAAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbXAAccess);
        HRESULT ( STDMETHODCALLTYPE *SetXAAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bXAAccess);
        HRESULT ( STDMETHODCALLTYPE *RestartDtcService )(
            __RPC__in IDtcNetworkAccessConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkInboundAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbInbound);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkOutboundAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out BOOL *pbOutbound);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkInboundAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bInbound);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkOutboundAccess )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       BOOL bOutbound);
        HRESULT ( STDMETHODCALLTYPE *GetAuthenticationLevel )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                        __RPC__out AUTHENTICATION_LEVEL *pAuthLevel);
        HRESULT ( STDMETHODCALLTYPE *SetAuthenticationLevel )(
            __RPC__in IDtcNetworkAccessConfig2 * This,
                       AUTHENTICATION_LEVEL AuthLevel);
        END_INTERFACE
    } IDtcNetworkAccessConfig2Vtbl;
    interface IDtcNetworkAccessConfig2
    {
        CONST_VTBL struct IDtcNetworkAccessConfig2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAnyNetworkAccess(This,pbAnyNetworkAccess) )
    ( (This)->lpVtbl -> SetAnyNetworkAccess(This,bAnyNetworkAccess) )
    ( (This)->lpVtbl -> GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess) )
    ( (This)->lpVtbl -> SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess) )
    ( (This)->lpVtbl -> GetNetworkTransactionAccess(This,pbNetworkTransactionAccess) )
    ( (This)->lpVtbl -> SetNetworkTransactionAccess(This,bNetworkTransactionAccess) )
    ( (This)->lpVtbl -> GetNetworkClientAccess(This,pbNetworkClientAccess) )
    ( (This)->lpVtbl -> SetNetworkClientAccess(This,bNetworkClientAccess) )
    ( (This)->lpVtbl -> GetNetworkTIPAccess(This,pbNetworkTIPAccess) )
    ( (This)->lpVtbl -> SetNetworkTIPAccess(This,bNetworkTIPAccess) )
    ( (This)->lpVtbl -> GetXAAccess(This,pbXAAccess) )
    ( (This)->lpVtbl -> SetXAAccess(This,bXAAccess) )
    ( (This)->lpVtbl -> RestartDtcService(This) )
    ( (This)->lpVtbl -> GetNetworkInboundAccess(This,pbInbound) )
    ( (This)->lpVtbl -> GetNetworkOutboundAccess(This,pbOutbound) )
    ( (This)->lpVtbl -> SetNetworkInboundAccess(This,bInbound) )
    ( (This)->lpVtbl -> SetNetworkOutboundAccess(This,bOutbound) )
    ( (This)->lpVtbl -> GetAuthenticationLevel(This,pAuthLevel) )
    ( (This)->lpVtbl -> SetAuthenticationLevel(This,AuthLevel) )
EXTERN_C const IID IID_IDtcNetworkAccessConfig3;
    typedef struct IDtcNetworkAccessConfig3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDtcNetworkAccessConfig3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDtcNetworkAccessConfig3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAnyNetworkAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbAnyNetworkAccess);
        HRESULT ( STDMETHODCALLTYPE *SetAnyNetworkAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bAnyNetworkAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkAdministrationAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbNetworkAdministrationAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkAdministrationAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bNetworkAdministrationAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkTransactionAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbNetworkTransactionAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkTransactionAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bNetworkTransactionAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkClientAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbNetworkClientAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkClientAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bNetworkClientAccess);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkTIPAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbNetworkTIPAccess);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkTIPAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bNetworkTIPAccess);
        HRESULT ( STDMETHODCALLTYPE *GetXAAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbXAAccess);
        HRESULT ( STDMETHODCALLTYPE *SetXAAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bXAAccess);
        HRESULT ( STDMETHODCALLTYPE *RestartDtcService )(
            __RPC__in IDtcNetworkAccessConfig3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkInboundAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbInbound);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkOutboundAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbOutbound);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkInboundAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bInbound);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkOutboundAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bOutbound);
        HRESULT ( STDMETHODCALLTYPE *GetAuthenticationLevel )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out AUTHENTICATION_LEVEL *pAuthLevel);
        HRESULT ( STDMETHODCALLTYPE *SetAuthenticationLevel )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       AUTHENTICATION_LEVEL AuthLevel);
        HRESULT ( STDMETHODCALLTYPE *GetLUAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                        __RPC__out BOOL *pbLUAccess);
        HRESULT ( STDMETHODCALLTYPE *SetLUAccess )(
            __RPC__in IDtcNetworkAccessConfig3 * This,
                       BOOL bLUAccess);
        END_INTERFACE
    } IDtcNetworkAccessConfig3Vtbl;
    interface IDtcNetworkAccessConfig3
    {
        CONST_VTBL struct IDtcNetworkAccessConfig3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAnyNetworkAccess(This,pbAnyNetworkAccess) )
    ( (This)->lpVtbl -> SetAnyNetworkAccess(This,bAnyNetworkAccess) )
    ( (This)->lpVtbl -> GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess) )
    ( (This)->lpVtbl -> SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess) )
    ( (This)->lpVtbl -> GetNetworkTransactionAccess(This,pbNetworkTransactionAccess) )
    ( (This)->lpVtbl -> SetNetworkTransactionAccess(This,bNetworkTransactionAccess) )
    ( (This)->lpVtbl -> GetNetworkClientAccess(This,pbNetworkClientAccess) )
    ( (This)->lpVtbl -> SetNetworkClientAccess(This,bNetworkClientAccess) )
    ( (This)->lpVtbl -> GetNetworkTIPAccess(This,pbNetworkTIPAccess) )
    ( (This)->lpVtbl -> SetNetworkTIPAccess(This,bNetworkTIPAccess) )
    ( (This)->lpVtbl -> GetXAAccess(This,pbXAAccess) )
    ( (This)->lpVtbl -> SetXAAccess(This,bXAAccess) )
    ( (This)->lpVtbl -> RestartDtcService(This) )
    ( (This)->lpVtbl -> GetNetworkInboundAccess(This,pbInbound) )
    ( (This)->lpVtbl -> GetNetworkOutboundAccess(This,pbOutbound) )
    ( (This)->lpVtbl -> SetNetworkInboundAccess(This,bInbound) )
    ( (This)->lpVtbl -> SetNetworkOutboundAccess(This,bOutbound) )
    ( (This)->lpVtbl -> GetAuthenticationLevel(This,pAuthLevel) )
    ( (This)->lpVtbl -> SetAuthenticationLevel(This,AuthLevel) )
    ( (This)->lpVtbl -> GetLUAccess(This,pbLUAccess) )
    ( (This)->lpVtbl -> SetLUAccess(This,bLUAccess) )
DEFINE_GUID(IID_ITransactionResourceAsync, 0x69E971F0, 0x23CE, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITransactionLastResourceAsync, 0xC82BD532, 0x5B30, 0x11D3, 0x8A, 0x91, 0x00, 0xC0, 0x4F, 0x79, 0xEB, 0x6D);
DEFINE_GUID(IID_ITransactionResource, 0xEE5FF7B3, 0x4572, 0x11d0, 0x94, 0x52, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_ITransactionEnlistmentAsync, 0x0fb15081, 0xaf41, 0x11ce, 0xbd, 0x2b, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionLastEnlistmentAsync, 0xC82BD533, 0x5B30, 0x11D3, 0x8A, 0x91, 0x00, 0xC0, 0x4F, 0x79, 0xEB, 0x6D);
DEFINE_GUID(IID_ITransactionExportFactory, 0xE1CF9B53, 0x8745, 0x11ce, 0xA9, 0xBA, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06);
DEFINE_GUID(IID_ITransactionImportWhereabouts, 0x0141fda4, 0x8fc0, 0x11ce, 0xbd, 0x18, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionExport, 0x0141fda5, 0x8fc0, 0x11ce, 0xbd, 0x18, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionImport, 0xE1CF9B5A, 0x8745, 0x11ce, 0xA9, 0xBA, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06);
DEFINE_GUID(IID_ITipTransaction, 0x17cf72d0, 0xbac5, 0x11d1, 0xb1, 0xbf, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITipHelper, 0x17cf72d1, 0xbac5, 0x11d1, 0xb1, 0xbf, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITipPullSink, 0x17cf72d2, 0xbac5, 0x11d1, 0xb1, 0xbf, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_IDtcNetworkAccessConfig, 0x9797c15d, 0xa428, 0x4291, 0x87, 0xb6, 0x9, 0x95, 0x3, 0x1a, 0x67, 0x8d);
DEFINE_GUID(IID_IDtcNetworkAccessConfig2, 0xa7aa013b, 0xeb7d, 0x4f42, 0xb4, 0x1c, 0xb2, 0xde, 0xc0, 0x9a, 0xe0, 0x34);
#pragma deprecated (ITipTransaction)
#pragma deprecated (ITipHelper)
#pragma deprecated (ITipPullSink)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0015_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_GetWhereabouts_Proxy(
    ITransactionImportWhereabouts * This,
               ULONG cbWhereabouts,
                         byte *rgbWhereabouts,
                ULONG *pcbUsed);
                HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_GetWhereabouts_Stub(
    __RPC__in ITransactionImportWhereabouts * This,
                __RPC__out ULONG *pcbUsed,
               ULONG cbWhereabouts,
                                    __RPC__out_ecount_part(cbWhereabouts, *pcbUsed) byte *rgbWhereabouts);
              HRESULT STDMETHODCALLTYPE ITransactionExport_GetTransactionCookie_Proxy(
    ITransactionExport * This,
               IUnknown *punkTransaction,
               ULONG cbTransactionCookie,
                         byte *rgbTransactionCookie,
                ULONG *pcbUsed);
                HRESULT STDMETHODCALLTYPE ITransactionExport_GetTransactionCookie_Stub(
    __RPC__in ITransactionExport * This,
               __RPC__in_opt IUnknown *punkTransaction,
                __RPC__out ULONG *pcbUsed,
               ULONG cbTransactionCookie,
                                    __RPC__out_ecount_part(cbTransactionCookie, *pcbUsed) byte *rgbTransactionCookie);
}
