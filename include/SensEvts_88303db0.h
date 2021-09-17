#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface ISensNetwork ISensNetwork;
typedef interface ISensOnNow ISensOnNow;
typedef interface ISensLogon ISensLogon;
typedef interface ISensLogon2 ISensLogon2;
typedef class SENS SENS;
#include "wtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_sensevts_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sensevts_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("d597fad1-5b9f-11d1-8dd2-00aa004abd5e") struct SENS_QOCINFO
    {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwOutSpeed;
    DWORD dwInSpeed;
    } SENS_QOCINFO;
typedef SENS_QOCINFO *LPSENS_QOCINFO;
EXTERN_C const IID LIBID_SensEvents;
EXTERN_C const IID IID_ISensNetwork;
    typedef struct ISensNetworkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensNetwork * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensNetwork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensNetwork * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISensNetwork * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISensNetwork * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISensNetwork * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISensNetwork * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *ConnectionMade )(
            __RPC__in ISensNetwork * This,
                       __RPC__in BSTR bstrConnection,
                       ULONG ulType,
                       __RPC__in LPSENS_QOCINFO lpQOCInfo);
                   HRESULT ( STDMETHODCALLTYPE *ConnectionMadeNoQOCInfo )(
            __RPC__in ISensNetwork * This,
                       __RPC__in BSTR bstrConnection,
                       ULONG ulType);
                   HRESULT ( STDMETHODCALLTYPE *ConnectionLost )(
            __RPC__in ISensNetwork * This,
                       __RPC__in BSTR bstrConnection,
                       ULONG ulType);
                   HRESULT ( STDMETHODCALLTYPE *DestinationReachable )(
            __RPC__in ISensNetwork * This,
                       __RPC__in BSTR bstrDestination,
                       __RPC__in BSTR bstrConnection,
                       ULONG ulType,
                       __RPC__in LPSENS_QOCINFO lpQOCInfo);
                   HRESULT ( STDMETHODCALLTYPE *DestinationReachableNoQOCInfo )(
            __RPC__in ISensNetwork * This,
                       __RPC__in BSTR bstrDestination,
                       __RPC__in BSTR bstrConnection,
                       ULONG ulType);
        END_INTERFACE
    } ISensNetworkVtbl;
    interface ISensNetwork
    {
        CONST_VTBL struct ISensNetworkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ConnectionMade(This,bstrConnection,ulType,lpQOCInfo) )
    ( (This)->lpVtbl -> ConnectionMadeNoQOCInfo(This,bstrConnection,ulType) )
    ( (This)->lpVtbl -> ConnectionLost(This,bstrConnection,ulType) )
    ( (This)->lpVtbl -> DestinationReachable(This,bstrDestination,bstrConnection,ulType,lpQOCInfo) )
    ( (This)->lpVtbl -> DestinationReachableNoQOCInfo(This,bstrDestination,bstrConnection,ulType) )
EXTERN_C const IID IID_ISensOnNow;
    typedef struct ISensOnNowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensOnNow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensOnNow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensOnNow * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISensOnNow * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISensOnNow * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISensOnNow * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISensOnNow * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *OnACPower )(
            __RPC__in ISensOnNow * This);
                   HRESULT ( STDMETHODCALLTYPE *OnBatteryPower )(
            __RPC__in ISensOnNow * This,
                       DWORD dwBatteryLifePercent);
                   HRESULT ( STDMETHODCALLTYPE *BatteryLow )(
            __RPC__in ISensOnNow * This,
                       DWORD dwBatteryLifePercent);
        END_INTERFACE
    } ISensOnNowVtbl;
    interface ISensOnNow
    {
        CONST_VTBL struct ISensOnNowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnACPower(This) )
    ( (This)->lpVtbl -> OnBatteryPower(This,dwBatteryLifePercent) )
    ( (This)->lpVtbl -> BatteryLow(This,dwBatteryLifePercent) )
EXTERN_C const IID IID_ISensLogon;
    typedef struct ISensLogonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensLogon * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensLogon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensLogon * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISensLogon * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISensLogon * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISensLogon * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISensLogon * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Logon )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
                   HRESULT ( STDMETHODCALLTYPE *Logoff )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
                   HRESULT ( STDMETHODCALLTYPE *StartShell )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
                   HRESULT ( STDMETHODCALLTYPE *DisplayLock )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
                   HRESULT ( STDMETHODCALLTYPE *DisplayUnlock )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
                   HRESULT ( STDMETHODCALLTYPE *StartScreenSaver )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
                   HRESULT ( STDMETHODCALLTYPE *StopScreenSaver )(
            __RPC__in ISensLogon * This,
                       __RPC__in BSTR bstrUserName);
        END_INTERFACE
    } ISensLogonVtbl;
    interface ISensLogon
    {
        CONST_VTBL struct ISensLogonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Logon(This,bstrUserName) )
    ( (This)->lpVtbl -> Logoff(This,bstrUserName) )
    ( (This)->lpVtbl -> StartShell(This,bstrUserName) )
    ( (This)->lpVtbl -> DisplayLock(This,bstrUserName) )
    ( (This)->lpVtbl -> DisplayUnlock(This,bstrUserName) )
    ( (This)->lpVtbl -> StartScreenSaver(This,bstrUserName) )
    ( (This)->lpVtbl -> StopScreenSaver(This,bstrUserName) )
EXTERN_C const IID IID_ISensLogon2;
    typedef struct ISensLogon2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensLogon2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensLogon2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISensLogon2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISensLogon2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISensLogon2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Logon )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in BSTR bstrUserName,
                       DWORD dwSessionId);
                   HRESULT ( STDMETHODCALLTYPE *Logoff )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in BSTR bstrUserName,
                       DWORD dwSessionId);
                   HRESULT ( STDMETHODCALLTYPE *SessionDisconnect )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in BSTR bstrUserName,
                       DWORD dwSessionId);
                   HRESULT ( STDMETHODCALLTYPE *SessionReconnect )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in BSTR bstrUserName,
                       DWORD dwSessionId);
                   HRESULT ( STDMETHODCALLTYPE *PostShell )(
            __RPC__in ISensLogon2 * This,
                       __RPC__in BSTR bstrUserName,
                       DWORD dwSessionId);
        END_INTERFACE
    } ISensLogon2Vtbl;
    interface ISensLogon2
    {
        CONST_VTBL struct ISensLogon2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Logon(This,bstrUserName,dwSessionId) )
    ( (This)->lpVtbl -> Logoff(This,bstrUserName,dwSessionId) )
    ( (This)->lpVtbl -> SessionDisconnect(This,bstrUserName,dwSessionId) )
    ( (This)->lpVtbl -> SessionReconnect(This,bstrUserName,dwSessionId) )
    ( (This)->lpVtbl -> PostShell(This,bstrUserName,dwSessionId) )
EXTERN_C const CLSID CLSID_SENS;
class DECLSPEC_UUID("d597cafe-5b9f-11d1-8dd2-00aa004abd5e")
SENS;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_sensevts_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sensevts_0000_0001_v0_0_s_ifspec;
}
