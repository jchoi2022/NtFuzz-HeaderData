#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDebugApplicationNode100 IDebugApplicationNode100;
typedef interface IWebAppDiagnosticsSetup IWebAppDiagnosticsSetup;
typedef interface IRemoteDebugApplication110 IRemoteDebugApplication110;
typedef interface IDebugApplication11032 IDebugApplication11032;
typedef interface IDebugApplication11064 IDebugApplication11064;
typedef interface IWebAppDiagnosticsObjectInitialization IWebAppDiagnosticsObjectInitialization;
typedef interface IActiveScriptWinRTErrorDebug IActiveScriptWinRTErrorDebug;
typedef interface IActiveScriptErrorDebug110 IActiveScriptErrorDebug110;
typedef interface IDebugApplicationThreadEvents110 IDebugApplicationThreadEvents110;
typedef interface IDebugApplicationThread11032 IDebugApplicationThread11032;
typedef interface IDebugApplicationThread11064 IDebugApplicationThread11064;
typedef interface IRemoteDebugCriticalErrorEvent110 IRemoteDebugCriticalErrorEvent110;
typedef interface IScriptInvocationContext IScriptInvocationContext;
typedef interface IDebugStackFrame110 IDebugStackFrame110;
typedef interface IRemoteDebugInfoEvent110 IRemoteDebugInfoEvent110;
#include "activdbg.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
typedef
enum tagAPPLICATION_NODE_EVENT_FILTER
    {
        FILTER_EXCLUDE_NOTHING = 0,
        FILTER_EXCLUDE_ANONYMOUS_CODE = 0x1,
        FILTER_EXCLUDE_EVAL_CODE = 0x2
    } APPLICATION_NODE_EVENT_FILTER;
typedef struct tagTEXT_DOCUMENT_ARRAY
    {
    DWORD dwCount;
                    IDebugDocumentText **Members;
    } TEXT_DOCUMENT_ARRAY;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugApplicationNode100;
    typedef struct IDebugApplicationNode100Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugApplicationNode100 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugApplicationNode100 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugApplicationNode100 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFilterForEventSink )(
            __RPC__in IDebugApplicationNode100 * This,
                       DWORD dwCookie,
                       APPLICATION_NODE_EVENT_FILTER filter);
        HRESULT ( STDMETHODCALLTYPE *GetExcludedDocuments )(
            __RPC__in IDebugApplicationNode100 * This,
                       APPLICATION_NODE_EVENT_FILTER filter,
                        __RPC__out TEXT_DOCUMENT_ARRAY *pDocuments);
        HRESULT ( STDMETHODCALLTYPE *QueryIsChildNode )(
            __RPC__in IDebugApplicationNode100 * This,
                       __RPC__in_opt IDebugDocument *pSearchKey);
        END_INTERFACE
    } IDebugApplicationNode100Vtbl;
    interface IDebugApplicationNode100
    {
        CONST_VTBL struct IDebugApplicationNode100Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFilterForEventSink(This,dwCookie,filter) )
    ( (This)->lpVtbl -> GetExcludedDocuments(This,filter,pDocuments) )
    ( (This)->lpVtbl -> QueryIsChildNode(This,pSearchKey) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWebAppDiagnosticsSetup;
    typedef struct IWebAppDiagnosticsSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebAppDiagnosticsSetup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebAppDiagnosticsSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebAppDiagnosticsSetup * This);
        HRESULT ( STDMETHODCALLTYPE *DiagnosticsSupported )(
            __RPC__in IWebAppDiagnosticsSetup * This,
                                __RPC__out VARIANT_BOOL *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectWithSiteAtWebApp )(
            __RPC__in IWebAppDiagnosticsSetup * This,
                       __RPC__in REFCLSID rclsid,
                       DWORD dwClsContext,
                       __RPC__in REFIID riid,
                       DWORD_PTR hPassToObject);
        END_INTERFACE
    } IWebAppDiagnosticsSetupVtbl;
    interface IWebAppDiagnosticsSetup
    {
        CONST_VTBL struct IWebAppDiagnosticsSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DiagnosticsSupported(This,pRetVal) )
    ( (This)->lpVtbl -> CreateObjectWithSiteAtWebApp(This,rclsid,dwClsContext,riid,hPassToObject) )
enum SCRIPT_DEBUGGER_OPTIONS
    {
        SDO_NONE = 0,
        SDO_ENABLE_FIRST_CHANCE_EXCEPTIONS = 0x1,
        SDO_ENABLE_WEB_WORKER_SUPPORT = 0x2,
        SDO_ENABLE_NONUSER_CODE_SUPPORT = 0x4,
        SDO_ENABLE_LIBRARY_STACK_FRAME = 0x8
    } ;
DEFINE_ENUM_FLAG_OPERATORS(SCRIPT_DEBUGGER_OPTIONS)
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IRemoteDebugApplication110;
    typedef struct IRemoteDebugApplication110Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDebugApplication110 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDebugApplication110 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDebugApplication110 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDebuggerOptions )(
            __RPC__in IRemoteDebugApplication110 * This,
                       enum SCRIPT_DEBUGGER_OPTIONS mask,
                       enum SCRIPT_DEBUGGER_OPTIONS value);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentDebuggerOptions )(
            __RPC__in IRemoteDebugApplication110 * This,
                        __RPC__out enum SCRIPT_DEBUGGER_OPTIONS *pCurrentOptions);
        HRESULT ( STDMETHODCALLTYPE *GetMainThread )(
            __RPC__in IRemoteDebugApplication110 * This,
                        __RPC__deref_out_opt IRemoteDebugApplicationThread **ppThread);
        END_INTERFACE
    } IRemoteDebugApplication110Vtbl;
    interface IRemoteDebugApplication110
    {
        CONST_VTBL struct IRemoteDebugApplication110Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDebuggerOptions(This,mask,value) )
    ( (This)->lpVtbl -> GetCurrentDebuggerOptions(This,pCurrentOptions) )
    ( (This)->lpVtbl -> GetMainThread(This,ppThread) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugApplication11032;
    typedef struct IDebugApplication11032Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplication11032 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplication11032 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplication11032 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDebuggerOptions )(
            IDebugApplication11032 * This,
                       enum SCRIPT_DEBUGGER_OPTIONS mask,
                       enum SCRIPT_DEBUGGER_OPTIONS value);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentDebuggerOptions )(
            IDebugApplication11032 * This,
                        enum SCRIPT_DEBUGGER_OPTIONS *pCurrentOptions);
        HRESULT ( STDMETHODCALLTYPE *GetMainThread )(
            IDebugApplication11032 * This,
                        IRemoteDebugApplicationThread **ppThread);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallInMainThread )(
            IDebugApplication11032 * This,
                       IDebugThreadCall32 *pptc,
                       DWORD_PTR dwParam1,
                       DWORD_PTR dwParam2,
                       DWORD_PTR dwParam3);
        HRESULT ( STDMETHODCALLTYPE *AsynchronousCallInMainThread )(
            IDebugApplication11032 * This,
                       IDebugThreadCall32 *pptc,
                       DWORD_PTR dwParam1,
                       DWORD_PTR dwParam2,
                       DWORD_PTR dwParam3);
        HRESULT ( STDMETHODCALLTYPE *CallableWaitForHandles )(
            IDebugApplication11032 * This,
                       DWORD handleCount,
                                const HANDLE *pHandles,
                        DWORD *pIndex);
        END_INTERFACE
    } IDebugApplication11032Vtbl;
    interface IDebugApplication11032
    {
        CONST_VTBL struct IDebugApplication11032Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDebuggerOptions(This,mask,value) )
    ( (This)->lpVtbl -> GetCurrentDebuggerOptions(This,pCurrentOptions) )
    ( (This)->lpVtbl -> GetMainThread(This,ppThread) )
    ( (This)->lpVtbl -> SynchronousCallInMainThread(This,pptc,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> AsynchronousCallInMainThread(This,pptc,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> CallableWaitForHandles(This,handleCount,pHandles,pIndex) )
EXTERN_C const IID IID_IDebugApplication11064;
    typedef struct IDebugApplication11064Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplication11064 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplication11064 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplication11064 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDebuggerOptions )(
            IDebugApplication11064 * This,
                       enum SCRIPT_DEBUGGER_OPTIONS mask,
                       enum SCRIPT_DEBUGGER_OPTIONS value);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentDebuggerOptions )(
            IDebugApplication11064 * This,
                        enum SCRIPT_DEBUGGER_OPTIONS *pCurrentOptions);
        HRESULT ( STDMETHODCALLTYPE *GetMainThread )(
            IDebugApplication11064 * This,
                        IRemoteDebugApplicationThread **ppThread);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallInMainThread )(
            IDebugApplication11064 * This,
                       IDebugThreadCall64 *pptc,
                       DWORD_PTR dwParam1,
                       DWORD_PTR dwParam2,
                       DWORD_PTR dwParam3);
        HRESULT ( STDMETHODCALLTYPE *AsynchronousCallInMainThread )(
            IDebugApplication11064 * This,
                       IDebugThreadCall64 *pptc,
                       DWORD_PTR dwParam1,
                       DWORD_PTR dwParam2,
                       DWORD_PTR dwParam3);
        HRESULT ( STDMETHODCALLTYPE *CallableWaitForHandles )(
            IDebugApplication11064 * This,
                       DWORD handleCount,
                                const HANDLE *pHandles,
                        DWORD *pIndex);
        END_INTERFACE
    } IDebugApplication11064Vtbl;
    interface IDebugApplication11064
    {
        CONST_VTBL struct IDebugApplication11064Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDebuggerOptions(This,mask,value) )
    ( (This)->lpVtbl -> GetCurrentDebuggerOptions(This,pCurrentOptions) )
    ( (This)->lpVtbl -> GetMainThread(This,ppThread) )
    ( (This)->lpVtbl -> SynchronousCallInMainThread(This,pptc,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> AsynchronousCallInMainThread(This,pptc,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> CallableWaitForHandles(This,handleCount,pHandles,pIndex) )
EXTERN_C const IID IID_IWebAppDiagnosticsObjectInitialization;
    typedef struct IWebAppDiagnosticsObjectInitializationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebAppDiagnosticsObjectInitialization * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebAppDiagnosticsObjectInitialization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebAppDiagnosticsObjectInitialization * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IWebAppDiagnosticsObjectInitialization * This,
            _In_ HANDLE_PTR hPassedHandle,
            _In_ IUnknown *pDebugApplication);
        END_INTERFACE
    } IWebAppDiagnosticsObjectInitializationVtbl;
    interface IWebAppDiagnosticsObjectInitialization
    {
        CONST_VTBL struct IWebAppDiagnosticsObjectInitializationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hPassedHandle,pDebugApplication) )
EXTERN_C const IID IID_IActiveScriptWinRTErrorDebug;
    typedef struct IActiveScriptWinRTErrorDebugVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptWinRTErrorDebug * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptWinRTErrorDebug * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptWinRTErrorDebug * This);
                      HRESULT ( STDMETHODCALLTYPE *GetExceptionInfo )(
            IActiveScriptWinRTErrorDebug * This,
                        EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )(
            __RPC__in IActiveScriptWinRTErrorDebug * This,
                        __RPC__out DWORD *pdwSourceContext,
                        __RPC__out ULONG *pulLineNumber,
                        __RPC__out LONG *plCharacterPosition);
        HRESULT ( STDMETHODCALLTYPE *GetSourceLineText )(
            __RPC__in IActiveScriptWinRTErrorDebug * This,
                        __RPC__deref_out_opt BSTR *pbstrSourceLine);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictedErrorString )(
            __RPC__in IActiveScriptWinRTErrorDebug * This,
                        __RPC__deref_out_opt BSTR *errorString);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictedErrorReference )(
            __RPC__in IActiveScriptWinRTErrorDebug * This,
                        __RPC__deref_out_opt BSTR *referenceString);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitySid )(
            __RPC__in IActiveScriptWinRTErrorDebug * This,
                        __RPC__deref_out_opt BSTR *capabilitySid);
        END_INTERFACE
    } IActiveScriptWinRTErrorDebugVtbl;
    interface IActiveScriptWinRTErrorDebug
    {
        CONST_VTBL struct IActiveScriptWinRTErrorDebugVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
    ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
    ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
    ( (This)->lpVtbl -> GetRestrictedErrorString(This,errorString) )
    ( (This)->lpVtbl -> GetRestrictedErrorReference(This,referenceString) )
    ( (This)->lpVtbl -> GetCapabilitySid(This,capabilitySid) )
typedef
enum tagSCRIPT_ERROR_DEBUG_EXCEPTION_THROWN_KIND
    {
        ETK_FIRST_CHANCE = 0,
        ETK_USER_UNHANDLED = 0x1,
        ETK_UNHANDLED = 0x2
    } SCRIPT_ERROR_DEBUG_EXCEPTION_THROWN_KIND;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptErrorDebug110;
    typedef struct IActiveScriptErrorDebug110Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptErrorDebug110 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptErrorDebug110 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptErrorDebug110 * This);
        HRESULT ( STDMETHODCALLTYPE *GetExceptionThrownKind )(
            __RPC__in IActiveScriptErrorDebug110 * This,
                        __RPC__out SCRIPT_ERROR_DEBUG_EXCEPTION_THROWN_KIND *pExceptionKind);
        END_INTERFACE
    } IActiveScriptErrorDebug110Vtbl;
    interface IActiveScriptErrorDebug110
    {
        CONST_VTBL struct IActiveScriptErrorDebug110Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetExceptionThrownKind(This,pExceptionKind) )
EXTERN_C const IID IID_IDebugApplicationThreadEvents110;
    typedef struct IDebugApplicationThreadEvents110Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplicationThreadEvents110 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplicationThreadEvents110 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplicationThreadEvents110 * This);
        HRESULT ( STDMETHODCALLTYPE *OnSuspendForBreakPoint )(
            IDebugApplicationThreadEvents110 * This);
        HRESULT ( STDMETHODCALLTYPE *OnResumeFromBreakPoint )(
            IDebugApplicationThreadEvents110 * This);
        HRESULT ( STDMETHODCALLTYPE *OnThreadRequestComplete )(
            IDebugApplicationThreadEvents110 * This);
        HRESULT ( STDMETHODCALLTYPE *OnBeginThreadRequest )(
            IDebugApplicationThreadEvents110 * This);
        END_INTERFACE
    } IDebugApplicationThreadEvents110Vtbl;
    interface IDebugApplicationThreadEvents110
    {
        CONST_VTBL struct IDebugApplicationThreadEvents110Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSuspendForBreakPoint(This) )
    ( (This)->lpVtbl -> OnResumeFromBreakPoint(This) )
    ( (This)->lpVtbl -> OnThreadRequestComplete(This) )
    ( (This)->lpVtbl -> OnBeginThreadRequest(This) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugApplicationThread11032;
    typedef struct IDebugApplicationThread11032Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplicationThread11032 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplicationThread11032 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplicationThread11032 * This);
        HRESULT ( STDMETHODCALLTYPE *GetActiveThreadRequestCount )(
            IDebugApplicationThread11032 * This,
            _Out_ UINT *puiThreadRequests);
        HRESULT ( STDMETHODCALLTYPE *IsSuspendedForBreakPoint )(
            IDebugApplicationThread11032 * This,
            _Out_ BOOL *pfIsSuspended);
        HRESULT ( STDMETHODCALLTYPE *IsThreadCallable )(
            IDebugApplicationThread11032 * This,
            _Out_ BOOL *pfIsCallable);
        HRESULT ( STDMETHODCALLTYPE *AsynchronousCallIntoThread )(
            IDebugApplicationThread11032 * This,
                       IDebugThreadCall32 *pptc,
                       DWORD_PTR dwParam1,
                       DWORD_PTR dwParam2,
                       DWORD_PTR dwParam3);
        END_INTERFACE
    } IDebugApplicationThread11032Vtbl;
    interface IDebugApplicationThread11032
    {
        CONST_VTBL struct IDebugApplicationThread11032Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetActiveThreadRequestCount(This,puiThreadRequests) )
    ( (This)->lpVtbl -> IsSuspendedForBreakPoint(This,pfIsSuspended) )
    ( (This)->lpVtbl -> IsThreadCallable(This,pfIsCallable) )
    ( (This)->lpVtbl -> AsynchronousCallIntoThread(This,pptc,dwParam1,dwParam2,dwParam3) )
EXTERN_C const IID IID_IDebugApplicationThread11064;
    typedef struct IDebugApplicationThread11064Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplicationThread11064 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplicationThread11064 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplicationThread11064 * This);
        HRESULT ( STDMETHODCALLTYPE *GetActiveThreadRequestCount )(
            IDebugApplicationThread11064 * This,
            _Out_ UINT *puiThreadRequests);
        HRESULT ( STDMETHODCALLTYPE *IsSuspendedForBreakPoint )(
            IDebugApplicationThread11064 * This,
            _Out_ BOOL *pfIsSuspended);
        HRESULT ( STDMETHODCALLTYPE *IsThreadCallable )(
            IDebugApplicationThread11064 * This,
            _Out_ BOOL *pfIsCallable);
        HRESULT ( STDMETHODCALLTYPE *AsynchronousCallIntoThread )(
            IDebugApplicationThread11064 * This,
                       IDebugThreadCall64 *pptc,
                       DWORD_PTR dwParam1,
                       DWORD_PTR dwParam2,
                       DWORD_PTR dwParam3);
        END_INTERFACE
    } IDebugApplicationThread11064Vtbl;
    interface IDebugApplicationThread11064
    {
        CONST_VTBL struct IDebugApplicationThread11064Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetActiveThreadRequestCount(This,puiThreadRequests) )
    ( (This)->lpVtbl -> IsSuspendedForBreakPoint(This,pfIsSuspended) )
    ( (This)->lpVtbl -> IsThreadCallable(This,pfIsCallable) )
    ( (This)->lpVtbl -> AsynchronousCallIntoThread(This,pptc,dwParam1,dwParam2,dwParam3) )
EXTERN_C const IID IID_IRemoteDebugCriticalErrorEvent110;
    typedef struct IRemoteDebugCriticalErrorEvent110Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDebugCriticalErrorEvent110 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDebugCriticalErrorEvent110 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDebugCriticalErrorEvent110 * This);
        HRESULT ( STDMETHODCALLTYPE *GetErrorInfo )(
            __RPC__in IRemoteDebugCriticalErrorEvent110 * This,
                        __RPC__deref_out_opt BSTR *pbstrSource,
                        __RPC__out int *pMessageId,
                        __RPC__deref_out_opt BSTR *pbstrMessage,
                        __RPC__deref_out_opt IDebugDocumentContext **ppLocation);
        END_INTERFACE
    } IRemoteDebugCriticalErrorEvent110Vtbl;
    interface IRemoteDebugCriticalErrorEvent110
    {
        CONST_VTBL struct IRemoteDebugCriticalErrorEvent110Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetErrorInfo(This,pbstrSource,pMessageId,pbstrMessage,ppLocation) )
typedef
enum tagSCRIPT_INVOCATION_CONTEXT_TYPE
    {
        SICT_Event = 0,
        SICT_SetTimeout = ( SICT_Event + 1 ) ,
        SICT_SetInterval = ( SICT_SetTimeout + 1 ) ,
        SICT_SetImmediate = ( SICT_SetInterval + 1 ) ,
        SICT_RequestAnimationFrame = ( SICT_SetImmediate + 1 ) ,
        SICT_ToString = ( SICT_RequestAnimationFrame + 1 ) ,
        SICT_MutationObserverCheckpoint = ( SICT_ToString + 1 ) ,
        SICT_WWAExecUnsafeLocalFunction = ( SICT_MutationObserverCheckpoint + 1 ) ,
        SICT_WWAExecAtPriority = ( SICT_WWAExecUnsafeLocalFunction + 1 )
    } SCRIPT_INVOCATION_CONTEXT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IScriptInvocationContext;
    typedef struct IScriptInvocationContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScriptInvocationContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScriptInvocationContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScriptInvocationContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetContextType )(
            __RPC__in IScriptInvocationContext * This,
                        __RPC__out SCRIPT_INVOCATION_CONTEXT_TYPE *pInvocationContextType);
        HRESULT ( STDMETHODCALLTYPE *GetContextDescription )(
            __RPC__in IScriptInvocationContext * This,
                        __RPC__deref_out_opt BSTR *pDescription);
        HRESULT ( STDMETHODCALLTYPE *GetContextObject )(
            __RPC__in IScriptInvocationContext * This,
                        __RPC__deref_out_opt IUnknown **ppContextObject);
        END_INTERFACE
    } IScriptInvocationContextVtbl;
    interface IScriptInvocationContext
    {
        CONST_VTBL struct IScriptInvocationContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContextType(This,pInvocationContextType) )
    ( (This)->lpVtbl -> GetContextDescription(This,pDescription) )
    ( (This)->lpVtbl -> GetContextObject(This,ppContextObject) )
typedef
enum tagDEBUG_STACKFRAME_TYPE
    {
        DST_SCRIPT_FRAME = 0,
        DST_INTERNAL_FRAME = ( DST_SCRIPT_FRAME + 1 ) ,
        DST_INVOCATION_FRAME = ( DST_INTERNAL_FRAME + 1 )
    } DEBUG_STACKFRAME_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugStackFrame110;
    typedef struct IDebugStackFrame110Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugStackFrame110 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugStackFrame110 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugStackFrame110 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodeContext )(
            __RPC__in IDebugStackFrame110 * This,
                        __RPC__deref_out_opt IDebugCodeContext **ppcc);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionString )(
            __RPC__in IDebugStackFrame110 * This,
                       BOOL fLong,
                        __RPC__deref_out_opt BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageString )(
            __RPC__in IDebugStackFrame110 * This,
                       BOOL fLong,
                        __RPC__deref_out_opt BSTR *pbstrLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetThread )(
            __RPC__in IDebugStackFrame110 * This,
                        __RPC__deref_out_opt IDebugApplicationThread **ppat);
        HRESULT ( STDMETHODCALLTYPE *GetDebugProperty )(
            __RPC__in IDebugStackFrame110 * This,
                        __RPC__deref_out_opt IDebugProperty **ppDebugProp);
        HRESULT ( STDMETHODCALLTYPE *GetStackFrameType )(
            __RPC__in IDebugStackFrame110 * This,
                        __RPC__out DEBUG_STACKFRAME_TYPE *pStackFrameKind);
        HRESULT ( STDMETHODCALLTYPE *GetScriptInvocationContext )(
            __RPC__in IDebugStackFrame110 * This,
                        __RPC__deref_out_opt IScriptInvocationContext **ppInvocationContext);
        END_INTERFACE
    } IDebugStackFrame110Vtbl;
    interface IDebugStackFrame110
    {
        CONST_VTBL struct IDebugStackFrame110Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodeContext(This,ppcc) )
    ( (This)->lpVtbl -> GetDescriptionString(This,fLong,pbstrDescription) )
    ( (This)->lpVtbl -> GetLanguageString(This,fLong,pbstrLanguage) )
    ( (This)->lpVtbl -> GetThread(This,ppat) )
    ( (This)->lpVtbl -> GetDebugProperty(This,ppDebugProp) )
    ( (This)->lpVtbl -> GetStackFrameType(This,pStackFrameKind) )
    ( (This)->lpVtbl -> GetScriptInvocationContext(This,ppInvocationContext) )
typedef
enum tagDEBUG_EVENT_INFO_TYPE
    {
        DEIT_GENERAL = 0,
        DEIT_ASMJS_IN_DEBUGGING = ( DEIT_GENERAL + 1 ) ,
        DEIT_ASMJS_SUCCEEDED = ( DEIT_ASMJS_IN_DEBUGGING + 1 ) ,
        DEIT_ASMJS_FAILED = ( DEIT_ASMJS_SUCCEEDED + 1 )
    } DEBUG_EVENT_INFO_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IRemoteDebugInfoEvent110;
    typedef struct IRemoteDebugInfoEvent110Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDebugInfoEvent110 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDebugInfoEvent110 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDebugInfoEvent110 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventInfo )(
            __RPC__in IRemoteDebugInfoEvent110 * This,
                        __RPC__out DEBUG_EVENT_INFO_TYPE *pMessageType,
                        __RPC__deref_out_opt BSTR *pbstrMessage,
                        __RPC__deref_out_opt BSTR *pbstrUrl,
                        __RPC__deref_out_opt IDebugDocumentContext **ppLocation);
        END_INTERFACE
    } IRemoteDebugInfoEvent110Vtbl;
    interface IRemoteDebugInfoEvent110
    {
        CONST_VTBL struct IRemoteDebugInfoEvent110Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventInfo(This,pMessageType,pbstrMessage,pbstrUrl,ppLocation) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg100_0000_0015_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
