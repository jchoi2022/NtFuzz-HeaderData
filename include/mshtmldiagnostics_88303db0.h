#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDiagnosticsScriptEngineSite IDiagnosticsScriptEngineSite;
typedef interface IDiagnosticsScriptEngine IDiagnosticsScriptEngine;
typedef interface IDiagnosticsScriptEngineProvider IDiagnosticsScriptEngineProvider;
#include "ActivScp.h"
extern "C"{
#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mshtmldiagnostics_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmldiagnostics_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiagnosticsScriptEngineSite;
    typedef struct IDiagnosticsScriptEngineSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDiagnosticsScriptEngineSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDiagnosticsScriptEngineSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDiagnosticsScriptEngineSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnMessage )(
            IDiagnosticsScriptEngineSite * This,
            _In_reads_(ulDataCount) LPCWSTR *pszData,
                       ULONG ulDataCount);
        HRESULT ( STDMETHODCALLTYPE *OnScriptError )(
            IDiagnosticsScriptEngineSite * This,
            _In_ IActiveScriptError *pScriptError);
        END_INTERFACE
    } IDiagnosticsScriptEngineSiteVtbl;
    interface IDiagnosticsScriptEngineSite
    {
        CONST_VTBL struct IDiagnosticsScriptEngineSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnMessage(This,pszData,ulDataCount) )
    ( (This)->lpVtbl -> OnScriptError(This,pScriptError) )
EXTERN_C const IID IID_IDiagnosticsScriptEngine;
    typedef struct IDiagnosticsScriptEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDiagnosticsScriptEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDiagnosticsScriptEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDiagnosticsScriptEngine * This);
        HRESULT ( STDMETHODCALLTYPE *EvaluateScript )(
            IDiagnosticsScriptEngine * This,
            _In_ LPCWSTR pszScript,
            _In_ LPCWSTR pszScriptName);
        HRESULT ( STDMETHODCALLTYPE *FireScriptMessageEvent )(
            IDiagnosticsScriptEngine * This,
            _In_reads_(ulPropertyCount) LPCWSTR *pszNames,
            _In_reads_(ulPropertyCount) LPCWSTR *pszValues,
            ULONG ulPropertyCount);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            IDiagnosticsScriptEngine * This);
        END_INTERFACE
    } IDiagnosticsScriptEngineVtbl;
    interface IDiagnosticsScriptEngine
    {
        CONST_VTBL struct IDiagnosticsScriptEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EvaluateScript(This,pszScript,pszScriptName) )
    ( (This)->lpVtbl -> FireScriptMessageEvent(This,pszNames,pszValues,ulPropertyCount) )
    ( (This)->lpVtbl -> Detach(This) )
EXTERN_C const IID IID_IDiagnosticsScriptEngineProvider;
    typedef struct IDiagnosticsScriptEngineProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDiagnosticsScriptEngineProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDiagnosticsScriptEngineProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDiagnosticsScriptEngineProvider * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDiagnosticsScriptEngine )(
            IDiagnosticsScriptEngineProvider * This,
            _In_opt_ IDiagnosticsScriptEngineSite *pScriptSite,
                       BOOL fDebuggingEnabled,
                       ULONG ulProcessId,
            _Out_ IDiagnosticsScriptEngine **ppEngine);
        END_INTERFACE
    } IDiagnosticsScriptEngineProviderVtbl;
    interface IDiagnosticsScriptEngineProvider
    {
        CONST_VTBL struct IDiagnosticsScriptEngineProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateDiagnosticsScriptEngine(This,pScriptSite,fDebuggingEnabled,ulProcessId,ppEngine) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_mshtmldiagnostics_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmldiagnostics_0000_0003_v0_0_s_ifspec;
}
