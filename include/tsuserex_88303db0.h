#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef class TSUserExInterfaces TSUserExInterfaces;
typedef interface IADsTSUserEx IADsTSUserEx;
typedef class ADsTSUserEx ADsTSUserEx;
#include "oaidl.h"
#include "ocidl.h"
#include "mmc.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tsuserex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsuserex_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_TSUSEREXLib;
EXTERN_C const CLSID CLSID_TSUserExInterfaces;
class DECLSPEC_UUID("0910dd01-df8c-11d1-ae27-00c04fa35813")
TSUserExInterfaces;
EXTERN_C const IID IID_IADsTSUserEx;
    typedef struct IADsTSUserExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsTSUserEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsTSUserEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsTSUserEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsTSUserEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsTSUserEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_TerminalServicesProfilePath )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_TerminalServicesProfilePath )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in BSTR pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_TerminalServicesHomeDirectory )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_TerminalServicesHomeDirectory )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in BSTR pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_TerminalServicesHomeDrive )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_TerminalServicesHomeDrive )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in BSTR pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowLogon )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowLogon )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_EnableRemoteControl )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_EnableRemoteControl )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxDisconnectionTime )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxDisconnectionTime )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxConnectionTime )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxConnectionTime )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxIdleTime )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxIdleTime )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ReconnectionAction )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *put_ReconnectionAction )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_BrokenConnectionAction )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *put_BrokenConnectionAction )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ConnectClientDrivesAtLogon )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *put_ConnectClientDrivesAtLogon )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ConnectClientPrintersAtLogon )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_ConnectClientPrintersAtLogon )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultToMainPrinter )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__out LONG *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultToMainPrinter )(
            __RPC__in IADsTSUserEx * This,
                       LONG NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_TerminalServicesWorkDirectory )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_TerminalServicesWorkDirectory )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in BSTR pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_TerminalServicesInitialProgram )(
            __RPC__in IADsTSUserEx * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_TerminalServicesInitialProgram )(
            __RPC__in IADsTSUserEx * This,
                       __RPC__in BSTR pNewVal);
        END_INTERFACE
    } IADsTSUserExVtbl;
    interface IADsTSUserEx
    {
        CONST_VTBL struct IADsTSUserExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TerminalServicesProfilePath(This,pVal) )
    ( (This)->lpVtbl -> put_TerminalServicesProfilePath(This,pNewVal) )
    ( (This)->lpVtbl -> get_TerminalServicesHomeDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_TerminalServicesHomeDirectory(This,pNewVal) )
    ( (This)->lpVtbl -> get_TerminalServicesHomeDrive(This,pVal) )
    ( (This)->lpVtbl -> put_TerminalServicesHomeDrive(This,pNewVal) )
    ( (This)->lpVtbl -> get_AllowLogon(This,pVal) )
    ( (This)->lpVtbl -> put_AllowLogon(This,NewVal) )
    ( (This)->lpVtbl -> get_EnableRemoteControl(This,pVal) )
    ( (This)->lpVtbl -> put_EnableRemoteControl(This,NewVal) )
    ( (This)->lpVtbl -> get_MaxDisconnectionTime(This,pVal) )
    ( (This)->lpVtbl -> put_MaxDisconnectionTime(This,NewVal) )
    ( (This)->lpVtbl -> get_MaxConnectionTime(This,pVal) )
    ( (This)->lpVtbl -> put_MaxConnectionTime(This,NewVal) )
    ( (This)->lpVtbl -> get_MaxIdleTime(This,pVal) )
    ( (This)->lpVtbl -> put_MaxIdleTime(This,NewVal) )
    ( (This)->lpVtbl -> get_ReconnectionAction(This,pNewVal) )
    ( (This)->lpVtbl -> put_ReconnectionAction(This,NewVal) )
    ( (This)->lpVtbl -> get_BrokenConnectionAction(This,pNewVal) )
    ( (This)->lpVtbl -> put_BrokenConnectionAction(This,NewVal) )
    ( (This)->lpVtbl -> get_ConnectClientDrivesAtLogon(This,pNewVal) )
    ( (This)->lpVtbl -> put_ConnectClientDrivesAtLogon(This,NewVal) )
    ( (This)->lpVtbl -> get_ConnectClientPrintersAtLogon(This,pVal) )
    ( (This)->lpVtbl -> put_ConnectClientPrintersAtLogon(This,NewVal) )
    ( (This)->lpVtbl -> get_DefaultToMainPrinter(This,pVal) )
    ( (This)->lpVtbl -> put_DefaultToMainPrinter(This,NewVal) )
    ( (This)->lpVtbl -> get_TerminalServicesWorkDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_TerminalServicesWorkDirectory(This,pNewVal) )
    ( (This)->lpVtbl -> get_TerminalServicesInitialProgram(This,pVal) )
    ( (This)->lpVtbl -> put_TerminalServicesInitialProgram(This,pNewVal) )
EXTERN_C const CLSID CLSID_ADsTSUserEx;
class DECLSPEC_UUID("E2E9CAE6-1E7B-4B8E-BABD-E9BF6292AC29")
ADsTSUserEx;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tsuserex_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsuserex_0000_0001_v0_0_s_ifspec;
}
