#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IRendezvousSession IRendezvousSession;
typedef interface DRendezvousSessionEvents DRendezvousSessionEvents;
typedef interface IRendezvousApplication IRendezvousApplication;
typedef class RendezvousApplication RendezvousApplication;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_rendezvoussession_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rendezvoussession_0000_0000_v0_0_s_ifspec;
typedef
enum __MIDL___MIDL_itf_rendezvoussession_0000_0000_0001
    {
        RSS_UNKNOWN = 0,
        RSS_READY = ( RSS_UNKNOWN + 1 ) ,
        RSS_INVITATION = ( RSS_READY + 1 ) ,
        RSS_ACCEPTED = ( RSS_INVITATION + 1 ) ,
        RSS_CONNECTED = ( RSS_ACCEPTED + 1 ) ,
        RSS_CANCELLED = ( RSS_CONNECTED + 1 ) ,
        RSS_DECLINED = ( RSS_CANCELLED + 1 ) ,
        RSS_TERMINATED = ( RSS_DECLINED + 1 )
    } RENDEZVOUS_SESSION_STATE;
typedef
enum __MIDL___MIDL_itf_rendezvoussession_0000_0000_0002
    {
        RSF_NONE = 0,
        RSF_INVITER = 0x1,
        RSF_INVITEE = 0x2,
        RSF_ORIGINAL_INVITER = 0x4,
        RSF_REMOTE_LEGACYSESSION = 0x8,
        RSF_REMOTE_WIN7SESSION = 0x10
    } RENDEZVOUS_SESSION_FLAGS;
EXTERN_C const IID LIBID_RendezvousSessionLib;
EXTERN_C const IID IID_IRendezvousSession;
    typedef struct IRendezvousSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRendezvousSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRendezvousSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRendezvousSession * This);
                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRendezvousSession * This,
                                __RPC__out RENDEZVOUS_SESSION_STATE *pSessionState);
                        HRESULT ( STDMETHODCALLTYPE *get_RemoteUser )(
            __RPC__in IRendezvousSession * This,
                                __RPC__deref_out_opt BSTR *bstrUserName);
                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IRendezvousSession * This,
                                __RPC__out LONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *SendContextData )(
            __RPC__in IRendezvousSession * This,
                       __RPC__in BSTR bstrData);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IRendezvousSession * This,
                       HRESULT hr,
                       __RPC__in BSTR bstrAppData);
        END_INTERFACE
    } IRendezvousSessionVtbl;
    interface IRendezvousSession
    {
        CONST_VTBL struct IRendezvousSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_State(This,pSessionState) )
    ( (This)->lpVtbl -> get_RemoteUser(This,bstrUserName) )
    ( (This)->lpVtbl -> get_Flags(This,pFlags) )
    ( (This)->lpVtbl -> SendContextData(This,bstrData) )
    ( (This)->lpVtbl -> Terminate(This,hr,bstrAppData) )
EXTERN_C const IID DIID_DRendezvousSessionEvents;
    typedef struct DRendezvousSessionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DRendezvousSessionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DRendezvousSessionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DRendezvousSessionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DRendezvousSessionEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DRendezvousSessionEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DRendezvousSessionEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DRendezvousSessionEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DRendezvousSessionEventsVtbl;
    interface DRendezvousSessionEvents
    {
        CONST_VTBL struct DRendezvousSessionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IRendezvousApplication;
    typedef struct IRendezvousApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRendezvousApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRendezvousApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRendezvousApplication * This);
        HRESULT ( STDMETHODCALLTYPE *SetRendezvousSession )(
            __RPC__in IRendezvousApplication * This,
                       __RPC__in_opt IUnknown *pRendezvousSession);
        END_INTERFACE
    } IRendezvousApplicationVtbl;
    interface IRendezvousApplication
    {
        CONST_VTBL struct IRendezvousApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRendezvousSession(This,pRendezvousSession) )
EXTERN_C const CLSID CLSID_RendezvousApplication;
class DECLSPEC_UUID("0B7E019A-B5DE-47fa-8966-9082F82FB192")
RendezvousApplication;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rendezvoussession_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rendezvoussession_0000_0001_v0_0_s_ifspec;
}
