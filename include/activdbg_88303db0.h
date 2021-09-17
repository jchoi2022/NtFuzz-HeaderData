#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IActiveScriptDebug32 IActiveScriptDebug32;
typedef interface IActiveScriptDebug64 IActiveScriptDebug64;
typedef interface IActiveScriptSiteDebug32 IActiveScriptSiteDebug32;
typedef interface IActiveScriptSiteDebug64 IActiveScriptSiteDebug64;
typedef interface IActiveScriptSiteDebugEx IActiveScriptSiteDebugEx;
typedef interface IActiveScriptErrorDebug IActiveScriptErrorDebug;
typedef interface IDebugCodeContext IDebugCodeContext;
typedef interface IDebugExpression IDebugExpression;
typedef interface IDebugExpressionContext IDebugExpressionContext;
typedef interface IDebugExpressionCallBack IDebugExpressionCallBack;
typedef interface IDebugStackFrame IDebugStackFrame;
typedef interface IDebugStackFrameSniffer IDebugStackFrameSniffer;
typedef interface IDebugStackFrameSnifferEx32 IDebugStackFrameSnifferEx32;
typedef interface IDebugStackFrameSnifferEx64 IDebugStackFrameSnifferEx64;
typedef interface IDebugSyncOperation IDebugSyncOperation;
typedef interface IDebugAsyncOperation IDebugAsyncOperation;
typedef interface IDebugAsyncOperationCallBack IDebugAsyncOperationCallBack;
typedef interface IEnumDebugCodeContexts IEnumDebugCodeContexts;
typedef interface IEnumDebugStackFrames IEnumDebugStackFrames;
typedef interface IEnumDebugStackFrames64 IEnumDebugStackFrames64;
typedef interface IDebugDocumentInfo IDebugDocumentInfo;
typedef interface IDebugDocumentProvider IDebugDocumentProvider;
typedef interface IDebugDocument IDebugDocument;
typedef interface IDebugDocumentText IDebugDocumentText;
typedef interface IDebugDocumentTextEvents IDebugDocumentTextEvents;
typedef interface IDebugDocumentTextAuthor IDebugDocumentTextAuthor;
typedef interface IDebugDocumentTextExternalAuthor IDebugDocumentTextExternalAuthor;
typedef interface IDebugDocumentHelper32 IDebugDocumentHelper32;
typedef interface IDebugDocumentHelper64 IDebugDocumentHelper64;
typedef interface IDebugDocumentHost IDebugDocumentHost;
typedef interface IDebugDocumentContext IDebugDocumentContext;
typedef interface IDebugSessionProvider IDebugSessionProvider;
typedef interface IApplicationDebugger IApplicationDebugger;
typedef interface IApplicationDebuggerUI IApplicationDebuggerUI;
typedef interface IMachineDebugManager IMachineDebugManager;
typedef interface IMachineDebugManagerCookie IMachineDebugManagerCookie;
typedef interface IMachineDebugManagerEvents IMachineDebugManagerEvents;
typedef interface IProcessDebugManager32 IProcessDebugManager32;
typedef interface IProcessDebugManager64 IProcessDebugManager64;
typedef interface IRemoteDebugApplication IRemoteDebugApplication;
typedef interface IDebugApplication32 IDebugApplication32;
typedef interface IDebugApplication64 IDebugApplication64;
typedef interface IRemoteDebugApplicationEvents IRemoteDebugApplicationEvents;
typedef interface IDebugApplicationNode IDebugApplicationNode;
typedef interface IDebugApplicationNodeEvents IDebugApplicationNodeEvents;
typedef interface AsyncIDebugApplicationNodeEvents AsyncIDebugApplicationNodeEvents;
typedef interface IDebugThreadCall32 IDebugThreadCall32;
typedef interface IDebugThreadCall64 IDebugThreadCall64;
typedef interface IRemoteDebugApplicationThread IRemoteDebugApplicationThread;
typedef interface IDebugApplicationThread IDebugApplicationThread;
typedef interface IDebugApplicationThread64 IDebugApplicationThread64;
typedef interface IDebugCookie IDebugCookie;
typedef interface IEnumDebugApplicationNodes IEnumDebugApplicationNodes;
typedef interface IEnumRemoteDebugApplications IEnumRemoteDebugApplications;
typedef interface IEnumRemoteDebugApplicationThreads IEnumRemoteDebugApplicationThreads;
typedef interface IDebugFormatter IDebugFormatter;
typedef interface ISimpleConnectionPoint ISimpleConnectionPoint;
typedef interface IDebugHelper IDebugHelper;
typedef interface IEnumDebugExpressionContexts IEnumDebugExpressionContexts;
typedef interface IProvideExpressionContexts IProvideExpressionContexts;
typedef class ProcessDebugManager ProcessDebugManager;
typedef class DebugHelper DebugHelper;
typedef class CDebugDocumentHelper CDebugDocumentHelper;
typedef class MachineDebugManager_RETAIL MachineDebugManager_RETAIL;
typedef class MachineDebugManager_DEBUG MachineDebugManager_DEBUG;
typedef class DefaultDebugSessionProvider DefaultDebugSessionProvider;
#include "ocidl.h"
#include "activscp.h"
#include "dbgprop.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
typedef
enum tagBREAKPOINT_STATE
    {
        BREAKPOINT_DELETED = 0,
        BREAKPOINT_DISABLED = 1,
        BREAKPOINT_ENABLED = 2
    } BREAKPOINT_STATE;
typedef DWORD APPBREAKFLAGS;
typedef
enum tagBREAKREASON
    {
        BREAKREASON_STEP = 0,
        BREAKREASON_BREAKPOINT = ( BREAKREASON_STEP + 1 ) ,
        BREAKREASON_DEBUGGER_BLOCK = ( BREAKREASON_BREAKPOINT + 1 ) ,
        BREAKREASON_HOST_INITIATED = ( BREAKREASON_DEBUGGER_BLOCK + 1 ) ,
        BREAKREASON_LANGUAGE_INITIATED = ( BREAKREASON_HOST_INITIATED + 1 ) ,
        BREAKREASON_DEBUGGER_HALT = ( BREAKREASON_LANGUAGE_INITIATED + 1 ) ,
        BREAKREASON_ERROR = ( BREAKREASON_DEBUGGER_HALT + 1 ) ,
        BREAKREASON_JIT = ( BREAKREASON_ERROR + 1 ) ,
        BREAKREASON_MUTATION_BREAKPOINT = ( BREAKREASON_JIT + 1 )
    } BREAKREASON;
typedef
enum tagBREAKRESUME_ACTION
    {
        BREAKRESUMEACTION_ABORT = 0,
        BREAKRESUMEACTION_CONTINUE = ( BREAKRESUMEACTION_ABORT + 1 ) ,
        BREAKRESUMEACTION_STEP_INTO = ( BREAKRESUMEACTION_CONTINUE + 1 ) ,
        BREAKRESUMEACTION_STEP_OVER = ( BREAKRESUMEACTION_STEP_INTO + 1 ) ,
        BREAKRESUMEACTION_STEP_OUT = ( BREAKRESUMEACTION_STEP_OVER + 1 ) ,
        BREAKRESUMEACTION_IGNORE = ( BREAKRESUMEACTION_STEP_OUT + 1 ) ,
        BREAKRESUMEACTION_STEP_DOCUMENT = ( BREAKRESUMEACTION_IGNORE + 1 )
    } BREAKRESUMEACTION;
typedef
enum tagERRORRESUMEACTION
    {
        ERRORRESUMEACTION_ReexecuteErrorStatement = 0,
        ERRORRESUMEACTION_AbortCallAndReturnErrorToCaller = ( ERRORRESUMEACTION_ReexecuteErrorStatement + 1 ) ,
        ERRORRESUMEACTION_SkipErrorStatement = ( ERRORRESUMEACTION_AbortCallAndReturnErrorToCaller + 1 )
    } ERRORRESUMEACTION;
typedef
enum tagDOCUMENTNAMETYPE
    {
        DOCUMENTNAMETYPE_APPNODE = 0,
        DOCUMENTNAMETYPE_TITLE = ( DOCUMENTNAMETYPE_APPNODE + 1 ) ,
        DOCUMENTNAMETYPE_FILE_TAIL = ( DOCUMENTNAMETYPE_TITLE + 1 ) ,
        DOCUMENTNAMETYPE_URL = ( DOCUMENTNAMETYPE_FILE_TAIL + 1 ) ,
        DOCUMENTNAMETYPE_UNIQUE_TITLE = ( DOCUMENTNAMETYPE_URL + 1 ) ,
        DOCUMENTNAMETYPE_SOURCE_MAP_URL = ( DOCUMENTNAMETYPE_UNIQUE_TITLE + 1 )
    } DOCUMENTNAMETYPE;
typedef WORD SOURCE_TEXT_ATTR;
typedef DWORD TEXT_DOC_ATTR;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptDebug32;
    typedef struct IActiveScriptDebug32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptDebug32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptDebug32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptDebug32 * This);
        HRESULT ( STDMETHODCALLTYPE *GetScriptTextAttributes )(
            __RPC__in IActiveScriptDebug32 * This,
                                __RPC__in_ecount_full(uNumCodeChars) LPCOLESTR pstrCode,
                       ULONG uNumCodeChars,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(uNumCodeChars) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *GetScriptletTextAttributes )(
            __RPC__in IActiveScriptDebug32 * This,
                                __RPC__in_ecount_full(uNumCodeChars) LPCOLESTR pstrCode,
                       ULONG uNumCodeChars,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(uNumCodeChars) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *EnumCodeContextsOfPosition )(
            __RPC__in IActiveScriptDebug32 * This,
                       DWORD dwSourceContext,
                       ULONG uCharacterOffset,
                       ULONG uNumChars,
                        __RPC__deref_out_opt IEnumDebugCodeContexts **ppescc);
        END_INTERFACE
    } IActiveScriptDebug32Vtbl;
    interface IActiveScriptDebug32
    {
        CONST_VTBL struct IActiveScriptDebug32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> GetScriptletTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> EnumCodeContextsOfPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppescc) )
EXTERN_C const IID IID_IActiveScriptDebug64;
    typedef struct IActiveScriptDebug64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptDebug64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptDebug64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptDebug64 * This);
        HRESULT ( STDMETHODCALLTYPE *GetScriptTextAttributes )(
            __RPC__in IActiveScriptDebug64 * This,
                                __RPC__in_ecount_full(uNumCodeChars) LPCOLESTR pstrCode,
                       ULONG uNumCodeChars,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(uNumCodeChars) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *GetScriptletTextAttributes )(
            __RPC__in IActiveScriptDebug64 * This,
                                __RPC__in_ecount_full(uNumCodeChars) LPCOLESTR pstrCode,
                       ULONG uNumCodeChars,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(uNumCodeChars) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *EnumCodeContextsOfPosition )(
            __RPC__in IActiveScriptDebug64 * This,
                       DWORDLONG dwSourceContext,
                       ULONG uCharacterOffset,
                       ULONG uNumChars,
                        __RPC__deref_out_opt IEnumDebugCodeContexts **ppescc);
        END_INTERFACE
    } IActiveScriptDebug64Vtbl;
    interface IActiveScriptDebug64
    {
        CONST_VTBL struct IActiveScriptDebug64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> GetScriptletTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> EnumCodeContextsOfPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppescc) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptSiteDebug32;
    typedef struct IActiveScriptSiteDebug32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActiveScriptSiteDebug32 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActiveScriptSiteDebug32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActiveScriptSiteDebug32 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentContextFromPosition )(
            IActiveScriptSiteDebug32 * This,
                       DWORD dwSourceContext,
                       ULONG uCharacterOffset,
                       ULONG uNumChars,
                        IDebugDocumentContext **ppsc);
        HRESULT ( STDMETHODCALLTYPE *GetApplication )(
            IActiveScriptSiteDebug32 * This,
                        IDebugApplication32 **ppda);
        HRESULT ( STDMETHODCALLTYPE *GetRootApplicationNode )(
            IActiveScriptSiteDebug32 * This,
                        IDebugApplicationNode **ppdanRoot);
        HRESULT ( STDMETHODCALLTYPE *OnScriptErrorDebug )(
            IActiveScriptSiteDebug32 * This,
                       IActiveScriptErrorDebug *pErrorDebug,
                        BOOL *pfEnterDebugger,
                        BOOL *pfCallOnScriptErrorWhenContinuing);
        END_INTERFACE
    } IActiveScriptSiteDebug32Vtbl;
    interface IActiveScriptSiteDebug32
    {
        CONST_VTBL struct IActiveScriptSiteDebug32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentContextFromPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppsc) )
    ( (This)->lpVtbl -> GetApplication(This,ppda) )
    ( (This)->lpVtbl -> GetRootApplicationNode(This,ppdanRoot) )
    ( (This)->lpVtbl -> OnScriptErrorDebug(This,pErrorDebug,pfEnterDebugger,pfCallOnScriptErrorWhenContinuing) )
EXTERN_C const IID IID_IActiveScriptSiteDebug64;
    typedef struct IActiveScriptSiteDebug64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActiveScriptSiteDebug64 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActiveScriptSiteDebug64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActiveScriptSiteDebug64 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentContextFromPosition )(
            IActiveScriptSiteDebug64 * This,
                       DWORDLONG dwSourceContext,
                       ULONG uCharacterOffset,
                       ULONG uNumChars,
                        IDebugDocumentContext **ppsc);
        HRESULT ( STDMETHODCALLTYPE *GetApplication )(
            IActiveScriptSiteDebug64 * This,
                        IDebugApplication64 **ppda);
        HRESULT ( STDMETHODCALLTYPE *GetRootApplicationNode )(
            IActiveScriptSiteDebug64 * This,
                        IDebugApplicationNode **ppdanRoot);
        HRESULT ( STDMETHODCALLTYPE *OnScriptErrorDebug )(
            IActiveScriptSiteDebug64 * This,
                       IActiveScriptErrorDebug *pErrorDebug,
                        BOOL *pfEnterDebugger,
                        BOOL *pfCallOnScriptErrorWhenContinuing);
        END_INTERFACE
    } IActiveScriptSiteDebug64Vtbl;
    interface IActiveScriptSiteDebug64
    {
        CONST_VTBL struct IActiveScriptSiteDebug64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentContextFromPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppsc) )
    ( (This)->lpVtbl -> GetApplication(This,ppda) )
    ( (This)->lpVtbl -> GetRootApplicationNode(This,ppdanRoot) )
    ( (This)->lpVtbl -> OnScriptErrorDebug(This,pErrorDebug,pfEnterDebugger,pfCallOnScriptErrorWhenContinuing) )
EXTERN_C const IID IID_IActiveScriptSiteDebugEx;
    typedef struct IActiveScriptSiteDebugExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActiveScriptSiteDebugEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActiveScriptSiteDebugEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActiveScriptSiteDebugEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnCanNotJITScriptErrorDebug )(
            IActiveScriptSiteDebugEx * This,
                       IActiveScriptErrorDebug *pErrorDebug,
                        BOOL *pfCallOnScriptErrorWhenContinuing);
        END_INTERFACE
    } IActiveScriptSiteDebugExVtbl;
    interface IActiveScriptSiteDebugEx
    {
        CONST_VTBL struct IActiveScriptSiteDebugExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCanNotJITScriptErrorDebug(This,pErrorDebug,pfCallOnScriptErrorWhenContinuing) )
EXTERN_C const IID IID_IActiveScriptErrorDebug;
    typedef struct IActiveScriptErrorDebugVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptErrorDebug * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptErrorDebug * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptErrorDebug * This);
                      HRESULT ( STDMETHODCALLTYPE *GetExceptionInfo )(
            IActiveScriptErrorDebug * This,
                        EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )(
            __RPC__in IActiveScriptErrorDebug * This,
                        __RPC__out DWORD *pdwSourceContext,
                        __RPC__out ULONG *pulLineNumber,
                        __RPC__out LONG *plCharacterPosition);
        HRESULT ( STDMETHODCALLTYPE *GetSourceLineText )(
            __RPC__in IActiveScriptErrorDebug * This,
                        __RPC__deref_out_opt BSTR *pbstrSourceLine);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentContext )(
            __RPC__in IActiveScriptErrorDebug * This,
                        __RPC__deref_out_opt IDebugDocumentContext **ppssc);
        HRESULT ( STDMETHODCALLTYPE *GetStackFrame )(
            __RPC__in IActiveScriptErrorDebug * This,
                        __RPC__deref_out_opt IDebugStackFrame **ppdsf);
        END_INTERFACE
    } IActiveScriptErrorDebugVtbl;
    interface IActiveScriptErrorDebug
    {
        CONST_VTBL struct IActiveScriptErrorDebugVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
    ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
    ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
    ( (This)->lpVtbl -> GetDocumentContext(This,ppssc) )
    ( (This)->lpVtbl -> GetStackFrame(This,ppdsf) )
EXTERN_C const IID IID_IDebugCodeContext;
    typedef struct IDebugCodeContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugCodeContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugCodeContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugCodeContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentContext )(
            __RPC__in IDebugCodeContext * This,
                        __RPC__deref_out_opt IDebugDocumentContext **ppsc);
        HRESULT ( STDMETHODCALLTYPE *SetBreakPoint )(
            __RPC__in IDebugCodeContext * This,
                       BREAKPOINT_STATE bps);
        END_INTERFACE
    } IDebugCodeContextVtbl;
    interface IDebugCodeContext
    {
        CONST_VTBL struct IDebugCodeContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentContext(This,ppsc) )
    ( (This)->lpVtbl -> SetBreakPoint(This,bps) )
EXTERN_C const IID IID_IDebugExpression;
    typedef struct IDebugExpressionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugExpression * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugExpression * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugExpression * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IDebugExpression * This,
                       __RPC__in_opt IDebugExpressionCallBack *pdecb);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IDebugExpression * This);
        HRESULT ( STDMETHODCALLTYPE *QueryIsComplete )(
            __RPC__in IDebugExpression * This);
        HRESULT ( STDMETHODCALLTYPE *GetResultAsString )(
            __RPC__in IDebugExpression * This,
                        __RPC__out HRESULT *phrResult,
                        __RPC__deref_out_opt BSTR *pbstrResult);
        HRESULT ( STDMETHODCALLTYPE *GetResultAsDebugProperty )(
            __RPC__in IDebugExpression * This,
                        __RPC__out HRESULT *phrResult,
                        __RPC__deref_out_opt IDebugProperty **ppdp);
        END_INTERFACE
    } IDebugExpressionVtbl;
    interface IDebugExpression
    {
        CONST_VTBL struct IDebugExpressionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,pdecb) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> QueryIsComplete(This) )
    ( (This)->lpVtbl -> GetResultAsString(This,phrResult,pbstrResult) )
    ( (This)->lpVtbl -> GetResultAsDebugProperty(This,phrResult,ppdp) )
EXTERN_C const IID IID_IDebugExpressionContext;
    typedef struct IDebugExpressionContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugExpressionContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugExpressionContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugExpressionContext * This);
        HRESULT ( STDMETHODCALLTYPE *ParseLanguageText )(
            __RPC__in IDebugExpressionContext * This,
                       __RPC__in LPCOLESTR pstrCode,
                       UINT nRadix,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDebugExpression **ppe);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageInfo )(
            __RPC__in IDebugExpressionContext * This,
                        __RPC__deref_out_opt BSTR *pbstrLanguageName,
                        __RPC__out GUID *pLanguageID);
        END_INTERFACE
    } IDebugExpressionContextVtbl;
    interface IDebugExpressionContext
    {
        CONST_VTBL struct IDebugExpressionContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseLanguageText(This,pstrCode,nRadix,pstrDelimiter,dwFlags,ppe) )
    ( (This)->lpVtbl -> GetLanguageInfo(This,pbstrLanguageName,pLanguageID) )
EXTERN_C const IID IID_IDebugExpressionCallBack;
    typedef struct IDebugExpressionCallBackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugExpressionCallBack * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugExpressionCallBack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugExpressionCallBack * This);
        HRESULT ( STDMETHODCALLTYPE *onComplete )(
            __RPC__in IDebugExpressionCallBack * This);
        END_INTERFACE
    } IDebugExpressionCallBackVtbl;
    interface IDebugExpressionCallBack
    {
        CONST_VTBL struct IDebugExpressionCallBackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> onComplete(This) )
EXTERN_C const IID IID_IDebugStackFrame;
    typedef struct IDebugStackFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugStackFrame * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugStackFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugStackFrame * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodeContext )(
            __RPC__in IDebugStackFrame * This,
                        __RPC__deref_out_opt IDebugCodeContext **ppcc);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionString )(
            __RPC__in IDebugStackFrame * This,
                       BOOL fLong,
                        __RPC__deref_out_opt BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageString )(
            __RPC__in IDebugStackFrame * This,
                       BOOL fLong,
                        __RPC__deref_out_opt BSTR *pbstrLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetThread )(
            __RPC__in IDebugStackFrame * This,
                        __RPC__deref_out_opt IDebugApplicationThread **ppat);
        HRESULT ( STDMETHODCALLTYPE *GetDebugProperty )(
            __RPC__in IDebugStackFrame * This,
                        __RPC__deref_out_opt IDebugProperty **ppDebugProp);
        END_INTERFACE
    } IDebugStackFrameVtbl;
    interface IDebugStackFrame
    {
        CONST_VTBL struct IDebugStackFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodeContext(This,ppcc) )
    ( (This)->lpVtbl -> GetDescriptionString(This,fLong,pbstrDescription) )
    ( (This)->lpVtbl -> GetLanguageString(This,fLong,pbstrLanguage) )
    ( (This)->lpVtbl -> GetThread(This,ppat) )
    ( (This)->lpVtbl -> GetDebugProperty(This,ppDebugProp) )
EXTERN_C const IID IID_IDebugStackFrameSniffer;
    typedef struct IDebugStackFrameSnifferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugStackFrameSniffer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugStackFrameSniffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugStackFrameSniffer * This);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFrames )(
            __RPC__in IDebugStackFrameSniffer * This,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
        END_INTERFACE
    } IDebugStackFrameSnifferVtbl;
    interface IDebugStackFrameSniffer
    {
        CONST_VTBL struct IDebugStackFrameSnifferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugStackFrameSnifferEx32;
    typedef struct IDebugStackFrameSnifferEx32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugStackFrameSnifferEx32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugStackFrameSnifferEx32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugStackFrameSnifferEx32 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFrames )(
            __RPC__in IDebugStackFrameSnifferEx32 * This,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFramesEx32 )(
            __RPC__in IDebugStackFrameSnifferEx32 * This,
                       DWORD dwSpMin,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
        END_INTERFACE
    } IDebugStackFrameSnifferEx32Vtbl;
    interface IDebugStackFrameSnifferEx32
    {
        CONST_VTBL struct IDebugStackFrameSnifferEx32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
    ( (This)->lpVtbl -> EnumStackFramesEx32(This,dwSpMin,ppedsf) )
EXTERN_C const IID IID_IDebugStackFrameSnifferEx64;
    typedef struct IDebugStackFrameSnifferEx64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugStackFrameSnifferEx64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugStackFrameSnifferEx64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugStackFrameSnifferEx64 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFrames )(
            __RPC__in IDebugStackFrameSnifferEx64 * This,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFramesEx64 )(
            __RPC__in IDebugStackFrameSnifferEx64 * This,
                       DWORDLONG dwSpMin,
                        __RPC__deref_out_opt IEnumDebugStackFrames64 **ppedsf);
        END_INTERFACE
    } IDebugStackFrameSnifferEx64Vtbl;
    interface IDebugStackFrameSnifferEx64
    {
        CONST_VTBL struct IDebugStackFrameSnifferEx64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
    ( (This)->lpVtbl -> EnumStackFramesEx64(This,dwSpMin,ppedsf) )
EXTERN_C const IID IID_IDebugSyncOperation;
    typedef struct IDebugSyncOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugSyncOperation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugSyncOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugSyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTargetThread )(
            IDebugSyncOperation * This,
                        IDebugApplicationThread **ppatTarget);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            IDebugSyncOperation * This,
                        IUnknown **ppunkResult);
        HRESULT ( STDMETHODCALLTYPE *InProgressAbort )(
            IDebugSyncOperation * This);
        END_INTERFACE
    } IDebugSyncOperationVtbl;
    interface IDebugSyncOperation
    {
        CONST_VTBL struct IDebugSyncOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTargetThread(This,ppatTarget) )
    ( (This)->lpVtbl -> Execute(This,ppunkResult) )
    ( (This)->lpVtbl -> InProgressAbort(This) )
EXTERN_C const IID IID_IDebugAsyncOperation;
    typedef struct IDebugAsyncOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugAsyncOperation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugAsyncOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugAsyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetSyncDebugOperation )(
            IDebugAsyncOperation * This,
                        IDebugSyncOperation **ppsdo);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IDebugAsyncOperation * This,
            IDebugAsyncOperationCallBack *padocb);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IDebugAsyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *QueryIsComplete )(
            IDebugAsyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetResult )(
            IDebugAsyncOperation * This,
                        HRESULT *phrResult,
                        IUnknown **ppunkResult);
        END_INTERFACE
    } IDebugAsyncOperationVtbl;
    interface IDebugAsyncOperation
    {
        CONST_VTBL struct IDebugAsyncOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSyncDebugOperation(This,ppsdo) )
    ( (This)->lpVtbl -> Start(This,padocb) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> QueryIsComplete(This) )
    ( (This)->lpVtbl -> GetResult(This,phrResult,ppunkResult) )
EXTERN_C const IID IID_IDebugAsyncOperationCallBack;
    typedef struct IDebugAsyncOperationCallBackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugAsyncOperationCallBack * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugAsyncOperationCallBack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugAsyncOperationCallBack * This);
        HRESULT ( STDMETHODCALLTYPE *onComplete )(
            IDebugAsyncOperationCallBack * This);
        END_INTERFACE
    } IDebugAsyncOperationCallBackVtbl;
    interface IDebugAsyncOperationCallBack
    {
        CONST_VTBL struct IDebugAsyncOperationCallBackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> onComplete(This) )
EXTERN_C const IID IID_IEnumDebugCodeContexts;
    typedef struct IEnumDebugCodeContextsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugCodeContexts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugCodeContexts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugCodeContexts * This);
                      HRESULT ( __stdcall *Next )(
            IEnumDebugCodeContexts * This,
                       ULONG celt,
                        IDebugCodeContext **pscc,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugCodeContexts * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugCodeContexts * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugCodeContexts * This,
                        __RPC__deref_out_opt IEnumDebugCodeContexts **ppescc);
        END_INTERFACE
    } IEnumDebugCodeContextsVtbl;
    interface IEnumDebugCodeContexts
    {
        CONST_VTBL struct IEnumDebugCodeContextsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pscc,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppescc) )
                HRESULT __stdcall IEnumDebugCodeContexts_RemoteNext_Proxy(
    __RPC__in IEnumDebugCodeContexts * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IDebugCodeContext **pscc,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumDebugCodeContexts_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef struct tagDebugStackFrameDescriptor
    {
    IDebugStackFrame *pdsf;
    DWORD dwMin;
    DWORD dwLim;
    BOOL fFinal;
    IUnknown *punkFinal;
    } DebugStackFrameDescriptor;
typedef struct tagDebugStackFrameDescriptor64
    {
    IDebugStackFrame *pdsf;
    DWORDLONG dwMin;
    DWORDLONG dwLim;
    BOOL fFinal;
    IUnknown *punkFinal;
    } DebugStackFrameDescriptor64;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumDebugStackFrames;
    typedef struct IEnumDebugStackFramesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugStackFrames * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugStackFrames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugStackFrames * This);
                      HRESULT ( __stdcall *Next )(
            IEnumDebugStackFrames * This,
                       ULONG celt,
                        DebugStackFrameDescriptor *prgdsfd,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugStackFrames * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugStackFrames * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugStackFrames * This,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
        END_INTERFACE
    } IEnumDebugStackFramesVtbl;
    interface IEnumDebugStackFrames
    {
        CONST_VTBL struct IEnumDebugStackFramesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,prgdsfd,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppedsf) )
                HRESULT __stdcall IEnumDebugStackFrames_RemoteNext_Proxy(
    __RPC__in IEnumDebugStackFrames * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) DebugStackFrameDescriptor *prgdsfd,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumDebugStackFrames_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumDebugStackFrames64;
    typedef struct IEnumDebugStackFrames64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugStackFrames64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugStackFrames64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugStackFrames64 * This);
                      HRESULT ( __stdcall *Next )(
            IEnumDebugStackFrames64 * This,
                       ULONG celt,
                        DebugStackFrameDescriptor *prgdsfd,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugStackFrames64 * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugStackFrames64 * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugStackFrames64 * This,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
                      HRESULT ( __stdcall *Next64 )(
            IEnumDebugStackFrames64 * This,
                       ULONG celt,
                        DebugStackFrameDescriptor64 *prgdsfd,
                        ULONG *pceltFetched);
        END_INTERFACE
    } IEnumDebugStackFrames64Vtbl;
    interface IEnumDebugStackFrames64
    {
        CONST_VTBL struct IEnumDebugStackFrames64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,prgdsfd,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppedsf) )
    ( (This)->lpVtbl -> Next64(This,celt,prgdsfd,pceltFetched) )
                HRESULT __stdcall IEnumDebugStackFrames64_RemoteNext64_Proxy(
    __RPC__in IEnumDebugStackFrames64 * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) DebugStackFrameDescriptor64 *prgdsfd,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumDebugStackFrames64_RemoteNext64_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IDebugDocumentInfo;
    typedef struct IDebugDocumentInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugDocumentInfo * This,
                       DOCUMENTNAMETYPE dnt,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentClassId )(
            __RPC__in IDebugDocumentInfo * This,
                        __RPC__out CLSID *pclsidDocument);
        END_INTERFACE
    } IDebugDocumentInfoVtbl;
    interface IDebugDocumentInfo
    {
        CONST_VTBL struct IDebugDocumentInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
EXTERN_C const IID IID_IDebugDocumentProvider;
    typedef struct IDebugDocumentProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugDocumentProvider * This,
                       DOCUMENTNAMETYPE dnt,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentClassId )(
            __RPC__in IDebugDocumentProvider * This,
                        __RPC__out CLSID *pclsidDocument);
        HRESULT ( STDMETHODCALLTYPE *GetDocument )(
            __RPC__in IDebugDocumentProvider * This,
                        __RPC__deref_out_opt IDebugDocument **ppssd);
        END_INTERFACE
    } IDebugDocumentProviderVtbl;
    interface IDebugDocumentProvider
    {
        CONST_VTBL struct IDebugDocumentProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
    ( (This)->lpVtbl -> GetDocument(This,ppssd) )
EXTERN_C const IID IID_IDebugDocument;
    typedef struct IDebugDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocument * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugDocument * This,
                       DOCUMENTNAMETYPE dnt,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentClassId )(
            __RPC__in IDebugDocument * This,
                        __RPC__out CLSID *pclsidDocument);
        END_INTERFACE
    } IDebugDocumentVtbl;
    interface IDebugDocument
    {
        CONST_VTBL struct IDebugDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentText;
    typedef struct IDebugDocumentTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentText * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentText * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugDocumentText * This,
                       DOCUMENTNAMETYPE dnt,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentClassId )(
            __RPC__in IDebugDocumentText * This,
                        __RPC__out CLSID *pclsidDocument);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentAttributes )(
            __RPC__in IDebugDocumentText * This,
                        __RPC__out TEXT_DOC_ATTR *ptextdocattr);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IDebugDocumentText * This,
                        __RPC__out ULONG *pcNumLines,
                        __RPC__out ULONG *pcNumChars);
        HRESULT ( STDMETHODCALLTYPE *GetPositionOfLine )(
            __RPC__in IDebugDocumentText * This,
                       ULONG cLineNumber,
                        __RPC__out ULONG *pcCharacterPosition);
        HRESULT ( STDMETHODCALLTYPE *GetLineOfPosition )(
            __RPC__in IDebugDocumentText * This,
                       ULONG cCharacterPosition,
                        __RPC__out ULONG *pcLineNumber,
                        __RPC__out ULONG *pcCharacterOffsetInLine);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IDebugDocumentText * This,
                       ULONG cCharacterPosition,
                                                __RPC__inout_ecount_part(cMaxChars, *pcNumChars) WCHAR *pcharText,
                                                      __RPC__inout_ecount_part_opt(cMaxChars, *pcNumChars) SOURCE_TEXT_ATTR *pstaTextAttr,
                            __RPC__inout ULONG *pcNumChars,
                       ULONG cMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetPositionOfContext )(
            __RPC__in IDebugDocumentText * This,
                       __RPC__in_opt IDebugDocumentContext *psc,
                        __RPC__out ULONG *pcCharacterPosition,
                        __RPC__out ULONG *cNumChars);
        HRESULT ( STDMETHODCALLTYPE *GetContextOfPosition )(
            __RPC__in IDebugDocumentText * This,
                       ULONG cCharacterPosition,
                       ULONG cNumChars,
                        __RPC__deref_out_opt IDebugDocumentContext **ppsc);
        END_INTERFACE
    } IDebugDocumentTextVtbl;
    interface IDebugDocumentText
    {
        CONST_VTBL struct IDebugDocumentTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
    ( (This)->lpVtbl -> GetDocumentAttributes(This,ptextdocattr) )
    ( (This)->lpVtbl -> GetSize(This,pcNumLines,pcNumChars) )
    ( (This)->lpVtbl -> GetPositionOfLine(This,cLineNumber,pcCharacterPosition) )
    ( (This)->lpVtbl -> GetLineOfPosition(This,cCharacterPosition,pcLineNumber,pcCharacterOffsetInLine) )
    ( (This)->lpVtbl -> GetText(This,cCharacterPosition,pcharText,pstaTextAttr,pcNumChars,cMaxChars) )
    ( (This)->lpVtbl -> GetPositionOfContext(This,psc,pcCharacterPosition,cNumChars) )
    ( (This)->lpVtbl -> GetContextOfPosition(This,cCharacterPosition,cNumChars,ppsc) )
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentTextEvents;
    typedef struct IDebugDocumentTextEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentTextEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentTextEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentTextEvents * This);
        HRESULT ( STDMETHODCALLTYPE *onDestroy )(
            __RPC__in IDebugDocumentTextEvents * This);
        HRESULT ( STDMETHODCALLTYPE *onInsertText )(
            __RPC__in IDebugDocumentTextEvents * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToInsert);
        HRESULT ( STDMETHODCALLTYPE *onRemoveText )(
            __RPC__in IDebugDocumentTextEvents * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToRemove);
        HRESULT ( STDMETHODCALLTYPE *onReplaceText )(
            __RPC__in IDebugDocumentTextEvents * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToReplace);
        HRESULT ( STDMETHODCALLTYPE *onUpdateTextAttributes )(
            __RPC__in IDebugDocumentTextEvents * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToUpdate);
        HRESULT ( STDMETHODCALLTYPE *onUpdateDocumentAttributes )(
            __RPC__in IDebugDocumentTextEvents * This,
                       TEXT_DOC_ATTR textdocattr);
        END_INTERFACE
    } IDebugDocumentTextEventsVtbl;
    interface IDebugDocumentTextEvents
    {
        CONST_VTBL struct IDebugDocumentTextEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> onDestroy(This) )
    ( (This)->lpVtbl -> onInsertText(This,cCharacterPosition,cNumToInsert) )
    ( (This)->lpVtbl -> onRemoveText(This,cCharacterPosition,cNumToRemove) )
    ( (This)->lpVtbl -> onReplaceText(This,cCharacterPosition,cNumToReplace) )
    ( (This)->lpVtbl -> onUpdateTextAttributes(This,cCharacterPosition,cNumToUpdate) )
    ( (This)->lpVtbl -> onUpdateDocumentAttributes(This,textdocattr) )
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentTextAuthor;
    typedef struct IDebugDocumentTextAuthorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentTextAuthor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentTextAuthor * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       DOCUMENTNAMETYPE dnt,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentClassId )(
            __RPC__in IDebugDocumentTextAuthor * This,
                        __RPC__out CLSID *pclsidDocument);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentAttributes )(
            __RPC__in IDebugDocumentTextAuthor * This,
                        __RPC__out TEXT_DOC_ATTR *ptextdocattr);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IDebugDocumentTextAuthor * This,
                        __RPC__out ULONG *pcNumLines,
                        __RPC__out ULONG *pcNumChars);
        HRESULT ( STDMETHODCALLTYPE *GetPositionOfLine )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cLineNumber,
                        __RPC__out ULONG *pcCharacterPosition);
        HRESULT ( STDMETHODCALLTYPE *GetLineOfPosition )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cCharacterPosition,
                        __RPC__out ULONG *pcLineNumber,
                        __RPC__out ULONG *pcCharacterOffsetInLine);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cCharacterPosition,
                                                __RPC__inout_ecount_part(cMaxChars, *pcNumChars) WCHAR *pcharText,
                                                      __RPC__inout_ecount_part_opt(cMaxChars, *pcNumChars) SOURCE_TEXT_ATTR *pstaTextAttr,
                            __RPC__inout ULONG *pcNumChars,
                       ULONG cMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetPositionOfContext )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       __RPC__in_opt IDebugDocumentContext *psc,
                        __RPC__out ULONG *pcCharacterPosition,
                        __RPC__out ULONG *cNumChars);
        HRESULT ( STDMETHODCALLTYPE *GetContextOfPosition )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cCharacterPosition,
                       ULONG cNumChars,
                        __RPC__deref_out_opt IDebugDocumentContext **ppsc);
        HRESULT ( STDMETHODCALLTYPE *InsertText )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToInsert,
                                __RPC__in_ecount_full(cNumToInsert) OLECHAR pcharText[ ]);
        HRESULT ( STDMETHODCALLTYPE *RemoveText )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToRemove);
        HRESULT ( STDMETHODCALLTYPE *ReplaceText )(
            __RPC__in IDebugDocumentTextAuthor * This,
                       ULONG cCharacterPosition,
                       ULONG cNumToReplace,
                                __RPC__in_ecount_full(cNumToReplace) OLECHAR pcharText[ ]);
        END_INTERFACE
    } IDebugDocumentTextAuthorVtbl;
    interface IDebugDocumentTextAuthor
    {
        CONST_VTBL struct IDebugDocumentTextAuthorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
    ( (This)->lpVtbl -> GetDocumentAttributes(This,ptextdocattr) )
    ( (This)->lpVtbl -> GetSize(This,pcNumLines,pcNumChars) )
    ( (This)->lpVtbl -> GetPositionOfLine(This,cLineNumber,pcCharacterPosition) )
    ( (This)->lpVtbl -> GetLineOfPosition(This,cCharacterPosition,pcLineNumber,pcCharacterOffsetInLine) )
    ( (This)->lpVtbl -> GetText(This,cCharacterPosition,pcharText,pstaTextAttr,pcNumChars,cMaxChars) )
    ( (This)->lpVtbl -> GetPositionOfContext(This,psc,pcCharacterPosition,cNumChars) )
    ( (This)->lpVtbl -> GetContextOfPosition(This,cCharacterPosition,cNumChars,ppsc) )
    ( (This)->lpVtbl -> InsertText(This,cCharacterPosition,cNumToInsert,pcharText) )
    ( (This)->lpVtbl -> RemoveText(This,cCharacterPosition,cNumToRemove) )
    ( (This)->lpVtbl -> ReplaceText(This,cCharacterPosition,cNumToReplace,pcharText) )
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentTextExternalAuthor;
    typedef struct IDebugDocumentTextExternalAuthorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentTextExternalAuthor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentTextExternalAuthor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentTextExternalAuthor * This);
        HRESULT ( STDMETHODCALLTYPE *GetPathName )(
            __RPC__in IDebugDocumentTextExternalAuthor * This,
                        __RPC__deref_out_opt BSTR *pbstrLongName,
                        __RPC__out BOOL *pfIsOriginalFile);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IDebugDocumentTextExternalAuthor * This,
                        __RPC__deref_out_opt BSTR *pbstrShortName);
        HRESULT ( STDMETHODCALLTYPE *NotifyChanged )(
            __RPC__in IDebugDocumentTextExternalAuthor * This);
        END_INTERFACE
    } IDebugDocumentTextExternalAuthorVtbl;
    interface IDebugDocumentTextExternalAuthor
    {
        CONST_VTBL struct IDebugDocumentTextExternalAuthorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPathName(This,pbstrLongName,pfIsOriginalFile) )
    ( (This)->lpVtbl -> GetFileName(This,pbstrShortName) )
    ( (This)->lpVtbl -> NotifyChanged(This) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentHelper32;
    typedef struct IDebugDocumentHelper32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentHelper32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentHelper32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentHelper32 * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IDebugDocumentHelper32 * This,
                       __RPC__in_opt IDebugApplication32 *pda,
                               __RPC__in_string LPCOLESTR pszShortName,
                               __RPC__in_string LPCOLESTR pszLongName,
                       TEXT_DOC_ATTR docAttr);
        HRESULT ( STDMETHODCALLTYPE *Attach )(
            __RPC__in IDebugDocumentHelper32 * This,
                       __RPC__in_opt IDebugDocumentHelper32 *pddhParent);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            __RPC__in IDebugDocumentHelper32 * This);
        HRESULT ( STDMETHODCALLTYPE *AddUnicodeText )(
            __RPC__in IDebugDocumentHelper32 * This,
                               __RPC__in_string LPCOLESTR pszText);
        HRESULT ( STDMETHODCALLTYPE *AddDBCSText )(
            __RPC__in IDebugDocumentHelper32 * This,
                               __RPC__in_string LPCSTR pszText);
        HRESULT ( STDMETHODCALLTYPE *SetDebugDocumentHost )(
            __RPC__in IDebugDocumentHelper32 * This,
                       __RPC__in_opt IDebugDocumentHost *pddh);
        HRESULT ( STDMETHODCALLTYPE *AddDeferredText )(
            __RPC__in IDebugDocumentHelper32 * This,
                       ULONG cChars,
                       DWORD dwTextStartCookie);
        HRESULT ( STDMETHODCALLTYPE *DefineScriptBlock )(
            __RPC__in IDebugDocumentHelper32 * This,
                       ULONG ulCharOffset,
                       ULONG cChars,
                       __RPC__in_opt IActiveScript *pas,
                       BOOL fScriptlet,
                        __RPC__out DWORD *pdwSourceContext);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultTextAttr )(
            __RPC__in IDebugDocumentHelper32 * This,
            SOURCE_TEXT_ATTR staTextAttr);
        HRESULT ( STDMETHODCALLTYPE *SetTextAttributes )(
            __RPC__in IDebugDocumentHelper32 * This,
                       ULONG ulCharOffset,
                       ULONG cChars,
                                           __RPC__in_ecount_part(cChars, cChars) SOURCE_TEXT_ATTR *pstaTextAttr);
        HRESULT ( STDMETHODCALLTYPE *SetLongName )(
            __RPC__in IDebugDocumentHelper32 * This,
                               __RPC__in_string LPCOLESTR pszLongName);
        HRESULT ( STDMETHODCALLTYPE *SetShortName )(
            __RPC__in IDebugDocumentHelper32 * This,
                               __RPC__in_string LPCOLESTR pszShortName);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentAttr )(
            __RPC__in IDebugDocumentHelper32 * This,
                       TEXT_DOC_ATTR pszAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetDebugApplicationNode )(
            __RPC__in IDebugDocumentHelper32 * This,
                        __RPC__deref_out_opt IDebugApplicationNode **ppdan);
        HRESULT ( STDMETHODCALLTYPE *GetScriptBlockInfo )(
            __RPC__in IDebugDocumentHelper32 * This,
                       DWORD dwSourceContext,
                        __RPC__deref_out_opt IActiveScript **ppasd,
                        __RPC__out ULONG *piCharPos,
                        __RPC__out ULONG *pcChars);
        HRESULT ( STDMETHODCALLTYPE *CreateDebugDocumentContext )(
            __RPC__in IDebugDocumentHelper32 * This,
                       ULONG iCharPos,
                       ULONG cChars,
                        __RPC__deref_out_opt IDebugDocumentContext **ppddc);
        HRESULT ( STDMETHODCALLTYPE *BringDocumentToTop )(
            __RPC__in IDebugDocumentHelper32 * This);
        HRESULT ( STDMETHODCALLTYPE *BringDocumentContextToTop )(
            __RPC__in IDebugDocumentHelper32 * This,
            __RPC__in_opt IDebugDocumentContext *pddc);
        END_INTERFACE
    } IDebugDocumentHelper32Vtbl;
    interface IDebugDocumentHelper32
    {
        CONST_VTBL struct IDebugDocumentHelper32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pda,pszShortName,pszLongName,docAttr) )
    ( (This)->lpVtbl -> Attach(This,pddhParent) )
    ( (This)->lpVtbl -> Detach(This) )
    ( (This)->lpVtbl -> AddUnicodeText(This,pszText) )
    ( (This)->lpVtbl -> AddDBCSText(This,pszText) )
    ( (This)->lpVtbl -> SetDebugDocumentHost(This,pddh) )
    ( (This)->lpVtbl -> AddDeferredText(This,cChars,dwTextStartCookie) )
    ( (This)->lpVtbl -> DefineScriptBlock(This,ulCharOffset,cChars,pas,fScriptlet,pdwSourceContext) )
    ( (This)->lpVtbl -> SetDefaultTextAttr(This,staTextAttr) )
    ( (This)->lpVtbl -> SetTextAttributes(This,ulCharOffset,cChars,pstaTextAttr) )
    ( (This)->lpVtbl -> SetLongName(This,pszLongName) )
    ( (This)->lpVtbl -> SetShortName(This,pszShortName) )
    ( (This)->lpVtbl -> SetDocumentAttr(This,pszAttributes) )
    ( (This)->lpVtbl -> GetDebugApplicationNode(This,ppdan) )
    ( (This)->lpVtbl -> GetScriptBlockInfo(This,dwSourceContext,ppasd,piCharPos,pcChars) )
    ( (This)->lpVtbl -> CreateDebugDocumentContext(This,iCharPos,cChars,ppddc) )
    ( (This)->lpVtbl -> BringDocumentToTop(This) )
    ( (This)->lpVtbl -> BringDocumentContextToTop(This,pddc) )
EXTERN_C const IID IID_IDebugDocumentHelper64;
    typedef struct IDebugDocumentHelper64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentHelper64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentHelper64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentHelper64 * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IDebugDocumentHelper64 * This,
                       __RPC__in_opt IDebugApplication64 *pda,
                               __RPC__in_string LPCOLESTR pszShortName,
                               __RPC__in_string LPCOLESTR pszLongName,
                       TEXT_DOC_ATTR docAttr);
        HRESULT ( STDMETHODCALLTYPE *Attach )(
            __RPC__in IDebugDocumentHelper64 * This,
                       __RPC__in_opt IDebugDocumentHelper64 *pddhParent);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            __RPC__in IDebugDocumentHelper64 * This);
        HRESULT ( STDMETHODCALLTYPE *AddUnicodeText )(
            __RPC__in IDebugDocumentHelper64 * This,
                               __RPC__in_string LPCOLESTR pszText);
        HRESULT ( STDMETHODCALLTYPE *AddDBCSText )(
            __RPC__in IDebugDocumentHelper64 * This,
                               __RPC__in_string LPCSTR pszText);
        HRESULT ( STDMETHODCALLTYPE *SetDebugDocumentHost )(
            __RPC__in IDebugDocumentHelper64 * This,
                       __RPC__in_opt IDebugDocumentHost *pddh);
        HRESULT ( STDMETHODCALLTYPE *AddDeferredText )(
            __RPC__in IDebugDocumentHelper64 * This,
                       ULONG cChars,
                       DWORD dwTextStartCookie);
        HRESULT ( STDMETHODCALLTYPE *DefineScriptBlock )(
            __RPC__in IDebugDocumentHelper64 * This,
                       ULONG ulCharOffset,
                       ULONG cChars,
                       __RPC__in_opt IActiveScript *pas,
                       BOOL fScriptlet,
                        __RPC__out DWORDLONG *pdwSourceContext);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultTextAttr )(
            __RPC__in IDebugDocumentHelper64 * This,
            SOURCE_TEXT_ATTR staTextAttr);
        HRESULT ( STDMETHODCALLTYPE *SetTextAttributes )(
            __RPC__in IDebugDocumentHelper64 * This,
                       ULONG ulCharOffset,
                       ULONG cChars,
                                           __RPC__in_ecount_part(cChars, cChars) SOURCE_TEXT_ATTR *pstaTextAttr);
        HRESULT ( STDMETHODCALLTYPE *SetLongName )(
            __RPC__in IDebugDocumentHelper64 * This,
                               __RPC__in_string LPCOLESTR pszLongName);
        HRESULT ( STDMETHODCALLTYPE *SetShortName )(
            __RPC__in IDebugDocumentHelper64 * This,
                               __RPC__in_string LPCOLESTR pszShortName);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentAttr )(
            __RPC__in IDebugDocumentHelper64 * This,
                       TEXT_DOC_ATTR pszAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetDebugApplicationNode )(
            __RPC__in IDebugDocumentHelper64 * This,
                        __RPC__deref_out_opt IDebugApplicationNode **ppdan);
        HRESULT ( STDMETHODCALLTYPE *GetScriptBlockInfo )(
            __RPC__in IDebugDocumentHelper64 * This,
                       DWORDLONG dwSourceContext,
                        __RPC__deref_out_opt IActiveScript **ppasd,
                        __RPC__out ULONG *piCharPos,
                        __RPC__out ULONG *pcChars);
        HRESULT ( STDMETHODCALLTYPE *CreateDebugDocumentContext )(
            __RPC__in IDebugDocumentHelper64 * This,
                       ULONG iCharPos,
                       ULONG cChars,
                        __RPC__deref_out_opt IDebugDocumentContext **ppddc);
        HRESULT ( STDMETHODCALLTYPE *BringDocumentToTop )(
            __RPC__in IDebugDocumentHelper64 * This);
        HRESULT ( STDMETHODCALLTYPE *BringDocumentContextToTop )(
            __RPC__in IDebugDocumentHelper64 * This,
            __RPC__in_opt IDebugDocumentContext *pddc);
        END_INTERFACE
    } IDebugDocumentHelper64Vtbl;
    interface IDebugDocumentHelper64
    {
        CONST_VTBL struct IDebugDocumentHelper64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pda,pszShortName,pszLongName,docAttr) )
    ( (This)->lpVtbl -> Attach(This,pddhParent) )
    ( (This)->lpVtbl -> Detach(This) )
    ( (This)->lpVtbl -> AddUnicodeText(This,pszText) )
    ( (This)->lpVtbl -> AddDBCSText(This,pszText) )
    ( (This)->lpVtbl -> SetDebugDocumentHost(This,pddh) )
    ( (This)->lpVtbl -> AddDeferredText(This,cChars,dwTextStartCookie) )
    ( (This)->lpVtbl -> DefineScriptBlock(This,ulCharOffset,cChars,pas,fScriptlet,pdwSourceContext) )
    ( (This)->lpVtbl -> SetDefaultTextAttr(This,staTextAttr) )
    ( (This)->lpVtbl -> SetTextAttributes(This,ulCharOffset,cChars,pstaTextAttr) )
    ( (This)->lpVtbl -> SetLongName(This,pszLongName) )
    ( (This)->lpVtbl -> SetShortName(This,pszShortName) )
    ( (This)->lpVtbl -> SetDocumentAttr(This,pszAttributes) )
    ( (This)->lpVtbl -> GetDebugApplicationNode(This,ppdan) )
    ( (This)->lpVtbl -> GetScriptBlockInfo(This,dwSourceContext,ppasd,piCharPos,pcChars) )
    ( (This)->lpVtbl -> CreateDebugDocumentContext(This,iCharPos,cChars,ppddc) )
    ( (This)->lpVtbl -> BringDocumentToTop(This) )
    ( (This)->lpVtbl -> BringDocumentContextToTop(This,pddc) )
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentHost;
    typedef struct IDebugDocumentHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentHost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentHost * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeferredText )(
            __RPC__in IDebugDocumentHost * This,
                       DWORD dwTextStartCookie,
                                                __RPC__inout_ecount_part(cMaxChars, *pcNumChars) WCHAR *pcharText,
                                                __RPC__inout_ecount_part(cMaxChars, *pcNumChars) SOURCE_TEXT_ATTR *pstaTextAttr,
                            __RPC__inout ULONG *pcNumChars,
                       ULONG cMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetScriptTextAttributes )(
            __RPC__in IDebugDocumentHost * This,
                                __RPC__in_ecount_full(uNumCodeChars) LPCOLESTR pstrCode,
                       ULONG uNumCodeChars,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(uNumCodeChars) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *OnCreateDocumentContext )(
            __RPC__in IDebugDocumentHost * This,
                        __RPC__deref_out_opt IUnknown **ppunkOuter);
        HRESULT ( STDMETHODCALLTYPE *GetPathName )(
            __RPC__in IDebugDocumentHost * This,
                        __RPC__deref_out_opt BSTR *pbstrLongName,
                        __RPC__out BOOL *pfIsOriginalFile);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IDebugDocumentHost * This,
                        __RPC__deref_out_opt BSTR *pbstrShortName);
        HRESULT ( STDMETHODCALLTYPE *NotifyChanged )(
            __RPC__in IDebugDocumentHost * This);
        END_INTERFACE
    } IDebugDocumentHostVtbl;
    interface IDebugDocumentHost
    {
        CONST_VTBL struct IDebugDocumentHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeferredText(This,dwTextStartCookie,pcharText,pstaTextAttr,pcNumChars,cMaxChars) )
    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> OnCreateDocumentContext(This,ppunkOuter) )
    ( (This)->lpVtbl -> GetPathName(This,pbstrLongName,pfIsOriginalFile) )
    ( (This)->lpVtbl -> GetFileName(This,pbstrShortName) )
    ( (This)->lpVtbl -> NotifyChanged(This) )
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugDocumentContext;
    typedef struct IDebugDocumentContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugDocumentContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugDocumentContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugDocumentContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocument )(
            __RPC__in IDebugDocumentContext * This,
                        __RPC__deref_out_opt IDebugDocument **ppsd);
        HRESULT ( STDMETHODCALLTYPE *EnumCodeContexts )(
            __RPC__in IDebugDocumentContext * This,
                        __RPC__deref_out_opt IEnumDebugCodeContexts **ppescc);
        END_INTERFACE
    } IDebugDocumentContextVtbl;
    interface IDebugDocumentContext
    {
        CONST_VTBL struct IDebugDocumentContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocument(This,ppsd) )
    ( (This)->lpVtbl -> EnumCodeContexts(This,ppescc) )
EXTERN_C const IID IID_IDebugSessionProvider;
    typedef struct IDebugSessionProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugSessionProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugSessionProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugSessionProvider * This);
        HRESULT ( STDMETHODCALLTYPE *StartDebugSession )(
            __RPC__in IDebugSessionProvider * This,
                       __RPC__in_opt IRemoteDebugApplication *pda);
        END_INTERFACE
    } IDebugSessionProviderVtbl;
    interface IDebugSessionProvider
    {
        CONST_VTBL struct IDebugSessionProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartDebugSession(This,pda) )
EXTERN_C const IID IID_IApplicationDebugger;
    typedef struct IApplicationDebuggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApplicationDebugger * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApplicationDebugger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApplicationDebugger * This);
        HRESULT ( STDMETHODCALLTYPE *QueryAlive )(
            __RPC__in IApplicationDebugger * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceAtDebugger )(
            __RPC__in IApplicationDebugger * This,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       DWORD dwClsContext,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *onDebugOutput )(
            __RPC__in IApplicationDebugger * This,
                       __RPC__in LPCOLESTR pstr);
        HRESULT ( STDMETHODCALLTYPE *onHandleBreakPoint )(
            __RPC__in IApplicationDebugger * This,
                       __RPC__in_opt IRemoteDebugApplicationThread *prpt,
                       BREAKREASON br,
                       __RPC__in_opt IActiveScriptErrorDebug *pError);
        HRESULT ( STDMETHODCALLTYPE *onClose )(
            __RPC__in IApplicationDebugger * This);
        HRESULT ( STDMETHODCALLTYPE *onDebuggerEvent )(
            __RPC__in IApplicationDebugger * This,
                       __RPC__in REFIID riid,
                       __RPC__in_opt IUnknown *punk);
        END_INTERFACE
    } IApplicationDebuggerVtbl;
    interface IApplicationDebugger
    {
        CONST_VTBL struct IApplicationDebuggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryAlive(This) )
    ( (This)->lpVtbl -> CreateInstanceAtDebugger(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
    ( (This)->lpVtbl -> onDebugOutput(This,pstr) )
    ( (This)->lpVtbl -> onHandleBreakPoint(This,prpt,br,pError) )
    ( (This)->lpVtbl -> onClose(This) )
    ( (This)->lpVtbl -> onDebuggerEvent(This,riid,punk) )
EXTERN_C const IID IID_IApplicationDebuggerUI;
    typedef struct IApplicationDebuggerUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApplicationDebuggerUI * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApplicationDebuggerUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApplicationDebuggerUI * This);
        HRESULT ( STDMETHODCALLTYPE *BringDocumentToTop )(
            __RPC__in IApplicationDebuggerUI * This,
                       __RPC__in_opt IDebugDocumentText *pddt);
        HRESULT ( STDMETHODCALLTYPE *BringDocumentContextToTop )(
            __RPC__in IApplicationDebuggerUI * This,
                       __RPC__in_opt IDebugDocumentContext *pddc);
        END_INTERFACE
    } IApplicationDebuggerUIVtbl;
    interface IApplicationDebuggerUI
    {
        CONST_VTBL struct IApplicationDebuggerUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BringDocumentToTop(This,pddt) )
    ( (This)->lpVtbl -> BringDocumentContextToTop(This,pddc) )
EXTERN_C const CLSID CLSID_MachineDebugManager;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_IMachineDebugManager;
    typedef struct IMachineDebugManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMachineDebugManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMachineDebugManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMachineDebugManager * This);
        HRESULT ( STDMETHODCALLTYPE *AddApplication )(
            __RPC__in IMachineDebugManager * This,
                       __RPC__in_opt IRemoteDebugApplication *pda,
                        __RPC__out DWORD *pdwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveApplication )(
            __RPC__in IMachineDebugManager * This,
                       DWORD dwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *EnumApplications )(
            __RPC__in IMachineDebugManager * This,
                        __RPC__deref_out_opt IEnumRemoteDebugApplications **ppeda);
        END_INTERFACE
    } IMachineDebugManagerVtbl;
    interface IMachineDebugManager
    {
        CONST_VTBL struct IMachineDebugManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddApplication(This,pda,pdwAppCookie) )
    ( (This)->lpVtbl -> RemoveApplication(This,dwAppCookie) )
    ( (This)->lpVtbl -> EnumApplications(This,ppeda) )
EXTERN_C const IID IID_IMachineDebugManagerCookie;
    typedef struct IMachineDebugManagerCookieVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMachineDebugManagerCookie * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMachineDebugManagerCookie * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMachineDebugManagerCookie * This);
        HRESULT ( STDMETHODCALLTYPE *AddApplication )(
            __RPC__in IMachineDebugManagerCookie * This,
                       __RPC__in_opt IRemoteDebugApplication *pda,
                       DWORD dwDebugAppCookie,
                        __RPC__out DWORD *pdwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveApplication )(
            __RPC__in IMachineDebugManagerCookie * This,
                       DWORD dwDebugAppCookie,
                       DWORD dwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *EnumApplications )(
            __RPC__in IMachineDebugManagerCookie * This,
                        __RPC__deref_out_opt IEnumRemoteDebugApplications **ppeda);
        END_INTERFACE
    } IMachineDebugManagerCookieVtbl;
    interface IMachineDebugManagerCookie
    {
        CONST_VTBL struct IMachineDebugManagerCookieVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddApplication(This,pda,dwDebugAppCookie,pdwAppCookie) )
    ( (This)->lpVtbl -> RemoveApplication(This,dwDebugAppCookie,dwAppCookie) )
    ( (This)->lpVtbl -> EnumApplications(This,ppeda) )
EXTERN_C const IID IID_IMachineDebugManagerEvents;
    typedef struct IMachineDebugManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMachineDebugManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMachineDebugManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMachineDebugManagerEvents * This);
        HRESULT ( STDMETHODCALLTYPE *onAddApplication )(
            __RPC__in IMachineDebugManagerEvents * This,
                       __RPC__in_opt IRemoteDebugApplication *pda,
                       DWORD dwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *onRemoveApplication )(
            __RPC__in IMachineDebugManagerEvents * This,
                       __RPC__in_opt IRemoteDebugApplication *pda,
                       DWORD dwAppCookie);
        END_INTERFACE
    } IMachineDebugManagerEventsVtbl;
    interface IMachineDebugManagerEvents
    {
        CONST_VTBL struct IMachineDebugManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> onAddApplication(This,pda,dwAppCookie) )
    ( (This)->lpVtbl -> onRemoveApplication(This,pda,dwAppCookie) )
EXTERN_C const CLSID CLSID_ProcessDebugManager;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_IProcessDebugManager32;
    typedef struct IProcessDebugManager32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProcessDebugManager32 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProcessDebugManager32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProcessDebugManager32 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication )(
            IProcessDebugManager32 * This,
                        IDebugApplication32 **ppda);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultApplication )(
            IProcessDebugManager32 * This,
                        IDebugApplication32 **ppda);
        HRESULT ( STDMETHODCALLTYPE *AddApplication )(
            IProcessDebugManager32 * This,
                       IDebugApplication32 *pda,
                        DWORD *pdwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveApplication )(
            IProcessDebugManager32 * This,
                       DWORD dwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateDebugDocumentHelper )(
            IProcessDebugManager32 * This,
                       IUnknown *punkOuter,
                        IDebugDocumentHelper32 **pddh);
        END_INTERFACE
    } IProcessDebugManager32Vtbl;
    interface IProcessDebugManager32
    {
        CONST_VTBL struct IProcessDebugManager32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateApplication(This,ppda) )
    ( (This)->lpVtbl -> GetDefaultApplication(This,ppda) )
    ( (This)->lpVtbl -> AddApplication(This,pda,pdwAppCookie) )
    ( (This)->lpVtbl -> RemoveApplication(This,dwAppCookie) )
    ( (This)->lpVtbl -> CreateDebugDocumentHelper(This,punkOuter,pddh) )
EXTERN_C const IID IID_IProcessDebugManager64;
    typedef struct IProcessDebugManager64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProcessDebugManager64 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProcessDebugManager64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProcessDebugManager64 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication )(
            IProcessDebugManager64 * This,
                        IDebugApplication64 **ppda);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultApplication )(
            IProcessDebugManager64 * This,
                        IDebugApplication64 **ppda);
        HRESULT ( STDMETHODCALLTYPE *AddApplication )(
            IProcessDebugManager64 * This,
                       IDebugApplication64 *pda,
                        DWORD *pdwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveApplication )(
            IProcessDebugManager64 * This,
                       DWORD dwAppCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateDebugDocumentHelper )(
            IProcessDebugManager64 * This,
                       IUnknown *punkOuter,
                        IDebugDocumentHelper64 **pddh);
        END_INTERFACE
    } IProcessDebugManager64Vtbl;
    interface IProcessDebugManager64
    {
        CONST_VTBL struct IProcessDebugManager64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateApplication(This,ppda) )
    ( (This)->lpVtbl -> GetDefaultApplication(This,ppda) )
    ( (This)->lpVtbl -> AddApplication(This,pda,pdwAppCookie) )
    ( (This)->lpVtbl -> RemoveApplication(This,dwAppCookie) )
    ( (This)->lpVtbl -> CreateDebugDocumentHelper(This,punkOuter,pddh) )
EXTERN_C const IID IID_IRemoteDebugApplication;
    typedef struct IRemoteDebugApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDebugApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDebugApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDebugApplication * This);
        HRESULT ( STDMETHODCALLTYPE *ResumeFromBreakPoint )(
            __RPC__in IRemoteDebugApplication * This,
                       __RPC__in_opt IRemoteDebugApplicationThread *prptFocus,
                       BREAKRESUMEACTION bra,
                       ERRORRESUMEACTION era);
        HRESULT ( STDMETHODCALLTYPE *CauseBreak )(
            __RPC__in IRemoteDebugApplication * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectDebugger )(
            __RPC__in IRemoteDebugApplication * This,
                       __RPC__in_opt IApplicationDebugger *pad);
        HRESULT ( STDMETHODCALLTYPE *DisconnectDebugger )(
            __RPC__in IRemoteDebugApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetDebugger )(
            __RPC__in IRemoteDebugApplication * This,
                        __RPC__deref_out_opt IApplicationDebugger **pad);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceAtApplication )(
            __RPC__in IRemoteDebugApplication * This,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       DWORD dwClsContext,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *QueryAlive )(
            __RPC__in IRemoteDebugApplication * This);
        HRESULT ( STDMETHODCALLTYPE *EnumThreads )(
            __RPC__in IRemoteDebugApplication * This,
                        __RPC__deref_out_opt IEnumRemoteDebugApplicationThreads **pperdat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IRemoteDebugApplication * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetRootNode )(
            __RPC__in IRemoteDebugApplication * This,
                        __RPC__deref_out_opt IDebugApplicationNode **ppdanRoot);
        HRESULT ( STDMETHODCALLTYPE *EnumGlobalExpressionContexts )(
            __RPC__in IRemoteDebugApplication * This,
                        __RPC__deref_out_opt IEnumDebugExpressionContexts **ppedec);
        END_INTERFACE
    } IRemoteDebugApplicationVtbl;
    interface IRemoteDebugApplication
    {
        CONST_VTBL struct IRemoteDebugApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResumeFromBreakPoint(This,prptFocus,bra,era) )
    ( (This)->lpVtbl -> CauseBreak(This) )
    ( (This)->lpVtbl -> ConnectDebugger(This,pad) )
    ( (This)->lpVtbl -> DisconnectDebugger(This) )
    ( (This)->lpVtbl -> GetDebugger(This,pad) )
    ( (This)->lpVtbl -> CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
    ( (This)->lpVtbl -> QueryAlive(This) )
    ( (This)->lpVtbl -> EnumThreads(This,pperdat) )
    ( (This)->lpVtbl -> GetName(This,pbstrName) )
    ( (This)->lpVtbl -> GetRootNode(This,ppdanRoot) )
    ( (This)->lpVtbl -> EnumGlobalExpressionContexts(This,ppedec) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugApplication32;
    typedef struct IDebugApplication32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplication32 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplication32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *ResumeFromBreakPoint )(
            IDebugApplication32 * This,
                       IRemoteDebugApplicationThread *prptFocus,
                       BREAKRESUMEACTION bra,
                       ERRORRESUMEACTION era);
        HRESULT ( STDMETHODCALLTYPE *CauseBreak )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectDebugger )(
            IDebugApplication32 * This,
                       IApplicationDebugger *pad);
        HRESULT ( STDMETHODCALLTYPE *DisconnectDebugger )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDebugger )(
            IDebugApplication32 * This,
                        IApplicationDebugger **pad);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceAtApplication )(
            IDebugApplication32 * This,
                       REFCLSID rclsid,
                       IUnknown *pUnkOuter,
                       DWORD dwClsContext,
                       REFIID riid,
                                IUnknown **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *QueryAlive )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumThreads )(
            IDebugApplication32 * This,
                        IEnumRemoteDebugApplicationThreads **pperdat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IDebugApplication32 * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetRootNode )(
            IDebugApplication32 * This,
                        IDebugApplicationNode **ppdanRoot);
        HRESULT ( STDMETHODCALLTYPE *EnumGlobalExpressionContexts )(
            IDebugApplication32 * This,
                        IEnumDebugExpressionContexts **ppedec);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IDebugApplication32 * This,
                       LPCOLESTR pstrName);
        HRESULT ( STDMETHODCALLTYPE *StepOutComplete )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *DebugOutput )(
            IDebugApplication32 * This,
                       LPCOLESTR pstr);
        HRESULT ( STDMETHODCALLTYPE *StartDebugSession )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *HandleBreakPoint )(
            IDebugApplication32 * This,
                       BREAKREASON br,
                        BREAKRESUMEACTION *pbra);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *GetBreakFlags )(
            IDebugApplication32 * This,
                        APPBREAKFLAGS *pabf,
                        IRemoteDebugApplicationThread **pprdatSteppingThread);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThread )(
            IDebugApplication32 * This,
                        IDebugApplicationThread **pat);
        HRESULT ( STDMETHODCALLTYPE *CreateAsyncDebugOperation )(
            IDebugApplication32 * This,
                       IDebugSyncOperation *psdo,
                        IDebugAsyncOperation **ppado);
        HRESULT ( STDMETHODCALLTYPE *AddStackFrameSniffer )(
            IDebugApplication32 * This,
                       IDebugStackFrameSniffer *pdsfs,
                        DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveStackFrameSniffer )(
            IDebugApplication32 * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *QueryCurrentThreadIsDebuggerThread )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallInDebuggerThread )(
            IDebugApplication32 * This,
                       IDebugThreadCall32 *pptc,
                       DWORD dwParam1,
                       DWORD dwParam2,
                       DWORD dwParam3);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationNode )(
            IDebugApplication32 * This,
                        IDebugApplicationNode **ppdanNew);
        HRESULT ( STDMETHODCALLTYPE *FireDebuggerEvent )(
            IDebugApplication32 * This,
                       REFGUID riid,
                       IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *HandleRuntimeError )(
            IDebugApplication32 * This,
                       IActiveScriptErrorDebug *pErrorDebug,
                       IActiveScriptSite *pScriptSite,
                        BREAKRESUMEACTION *pbra,
                        ERRORRESUMEACTION *perra,
                        BOOL *pfCallOnScriptError);
        BOOL ( STDMETHODCALLTYPE *FCanJitDebug )(
            IDebugApplication32 * This);
        BOOL ( STDMETHODCALLTYPE *FIsAutoJitDebugEnabled )(
            IDebugApplication32 * This);
        HRESULT ( STDMETHODCALLTYPE *AddGlobalExpressionContextProvider )(
            IDebugApplication32 * This,
                       IProvideExpressionContexts *pdsfs,
                        DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveGlobalExpressionContextProvider )(
            IDebugApplication32 * This,
                       DWORD dwCookie);
        END_INTERFACE
    } IDebugApplication32Vtbl;
    interface IDebugApplication32
    {
        CONST_VTBL struct IDebugApplication32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResumeFromBreakPoint(This,prptFocus,bra,era) )
    ( (This)->lpVtbl -> CauseBreak(This) )
    ( (This)->lpVtbl -> ConnectDebugger(This,pad) )
    ( (This)->lpVtbl -> DisconnectDebugger(This) )
    ( (This)->lpVtbl -> GetDebugger(This,pad) )
    ( (This)->lpVtbl -> CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
    ( (This)->lpVtbl -> QueryAlive(This) )
    ( (This)->lpVtbl -> EnumThreads(This,pperdat) )
    ( (This)->lpVtbl -> GetName(This,pbstrName) )
    ( (This)->lpVtbl -> GetRootNode(This,ppdanRoot) )
    ( (This)->lpVtbl -> EnumGlobalExpressionContexts(This,ppedec) )
    ( (This)->lpVtbl -> SetName(This,pstrName) )
    ( (This)->lpVtbl -> StepOutComplete(This) )
    ( (This)->lpVtbl -> DebugOutput(This,pstr) )
    ( (This)->lpVtbl -> StartDebugSession(This) )
    ( (This)->lpVtbl -> HandleBreakPoint(This,br,pbra) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetBreakFlags(This,pabf,pprdatSteppingThread) )
    ( (This)->lpVtbl -> GetCurrentThread(This,pat) )
    ( (This)->lpVtbl -> CreateAsyncDebugOperation(This,psdo,ppado) )
    ( (This)->lpVtbl -> AddStackFrameSniffer(This,pdsfs,pdwCookie) )
    ( (This)->lpVtbl -> RemoveStackFrameSniffer(This,dwCookie) )
    ( (This)->lpVtbl -> QueryCurrentThreadIsDebuggerThread(This) )
    ( (This)->lpVtbl -> SynchronousCallInDebuggerThread(This,pptc,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> CreateApplicationNode(This,ppdanNew) )
    ( (This)->lpVtbl -> FireDebuggerEvent(This,riid,punk) )
    ( (This)->lpVtbl -> HandleRuntimeError(This,pErrorDebug,pScriptSite,pbra,perra,pfCallOnScriptError) )
    ( (This)->lpVtbl -> FCanJitDebug(This) )
    ( (This)->lpVtbl -> FIsAutoJitDebugEnabled(This) )
    ( (This)->lpVtbl -> AddGlobalExpressionContextProvider(This,pdsfs,pdwCookie) )
    ( (This)->lpVtbl -> RemoveGlobalExpressionContextProvider(This,dwCookie) )
EXTERN_C const IID IID_IDebugApplication64;
    typedef struct IDebugApplication64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplication64 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplication64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *ResumeFromBreakPoint )(
            IDebugApplication64 * This,
                       IRemoteDebugApplicationThread *prptFocus,
                       BREAKRESUMEACTION bra,
                       ERRORRESUMEACTION era);
        HRESULT ( STDMETHODCALLTYPE *CauseBreak )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectDebugger )(
            IDebugApplication64 * This,
                       IApplicationDebugger *pad);
        HRESULT ( STDMETHODCALLTYPE *DisconnectDebugger )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDebugger )(
            IDebugApplication64 * This,
                        IApplicationDebugger **pad);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceAtApplication )(
            IDebugApplication64 * This,
                       REFCLSID rclsid,
                       IUnknown *pUnkOuter,
                       DWORD dwClsContext,
                       REFIID riid,
                                IUnknown **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *QueryAlive )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumThreads )(
            IDebugApplication64 * This,
                        IEnumRemoteDebugApplicationThreads **pperdat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IDebugApplication64 * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetRootNode )(
            IDebugApplication64 * This,
                        IDebugApplicationNode **ppdanRoot);
        HRESULT ( STDMETHODCALLTYPE *EnumGlobalExpressionContexts )(
            IDebugApplication64 * This,
                        IEnumDebugExpressionContexts **ppedec);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IDebugApplication64 * This,
                       LPCOLESTR pstrName);
        HRESULT ( STDMETHODCALLTYPE *StepOutComplete )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *DebugOutput )(
            IDebugApplication64 * This,
                       LPCOLESTR pstr);
        HRESULT ( STDMETHODCALLTYPE *StartDebugSession )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *HandleBreakPoint )(
            IDebugApplication64 * This,
                       BREAKREASON br,
                        BREAKRESUMEACTION *pbra);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *GetBreakFlags )(
            IDebugApplication64 * This,
                        APPBREAKFLAGS *pabf,
                        IRemoteDebugApplicationThread **pprdatSteppingThread);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThread )(
            IDebugApplication64 * This,
                        IDebugApplicationThread **pat);
        HRESULT ( STDMETHODCALLTYPE *CreateAsyncDebugOperation )(
            IDebugApplication64 * This,
                       IDebugSyncOperation *psdo,
                        IDebugAsyncOperation **ppado);
        HRESULT ( STDMETHODCALLTYPE *AddStackFrameSniffer )(
            IDebugApplication64 * This,
                       IDebugStackFrameSniffer *pdsfs,
                        DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveStackFrameSniffer )(
            IDebugApplication64 * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *QueryCurrentThreadIsDebuggerThread )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallInDebuggerThread )(
            IDebugApplication64 * This,
                       IDebugThreadCall64 *pptc,
                       DWORDLONG dwParam1,
                       DWORDLONG dwParam2,
                       DWORDLONG dwParam3);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationNode )(
            IDebugApplication64 * This,
                        IDebugApplicationNode **ppdanNew);
        HRESULT ( STDMETHODCALLTYPE *FireDebuggerEvent )(
            IDebugApplication64 * This,
                       REFGUID riid,
                       IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *HandleRuntimeError )(
            IDebugApplication64 * This,
                       IActiveScriptErrorDebug *pErrorDebug,
                       IActiveScriptSite *pScriptSite,
                        BREAKRESUMEACTION *pbra,
                        ERRORRESUMEACTION *perra,
                        BOOL *pfCallOnScriptError);
        BOOL ( STDMETHODCALLTYPE *FCanJitDebug )(
            IDebugApplication64 * This);
        BOOL ( STDMETHODCALLTYPE *FIsAutoJitDebugEnabled )(
            IDebugApplication64 * This);
        HRESULT ( STDMETHODCALLTYPE *AddGlobalExpressionContextProvider )(
            IDebugApplication64 * This,
                       IProvideExpressionContexts *pdsfs,
                        DWORDLONG *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveGlobalExpressionContextProvider )(
            IDebugApplication64 * This,
                       DWORDLONG dwCookie);
        END_INTERFACE
    } IDebugApplication64Vtbl;
    interface IDebugApplication64
    {
        CONST_VTBL struct IDebugApplication64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResumeFromBreakPoint(This,prptFocus,bra,era) )
    ( (This)->lpVtbl -> CauseBreak(This) )
    ( (This)->lpVtbl -> ConnectDebugger(This,pad) )
    ( (This)->lpVtbl -> DisconnectDebugger(This) )
    ( (This)->lpVtbl -> GetDebugger(This,pad) )
    ( (This)->lpVtbl -> CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
    ( (This)->lpVtbl -> QueryAlive(This) )
    ( (This)->lpVtbl -> EnumThreads(This,pperdat) )
    ( (This)->lpVtbl -> GetName(This,pbstrName) )
    ( (This)->lpVtbl -> GetRootNode(This,ppdanRoot) )
    ( (This)->lpVtbl -> EnumGlobalExpressionContexts(This,ppedec) )
    ( (This)->lpVtbl -> SetName(This,pstrName) )
    ( (This)->lpVtbl -> StepOutComplete(This) )
    ( (This)->lpVtbl -> DebugOutput(This,pstr) )
    ( (This)->lpVtbl -> StartDebugSession(This) )
    ( (This)->lpVtbl -> HandleBreakPoint(This,br,pbra) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetBreakFlags(This,pabf,pprdatSteppingThread) )
    ( (This)->lpVtbl -> GetCurrentThread(This,pat) )
    ( (This)->lpVtbl -> CreateAsyncDebugOperation(This,psdo,ppado) )
    ( (This)->lpVtbl -> AddStackFrameSniffer(This,pdsfs,pdwCookie) )
    ( (This)->lpVtbl -> RemoveStackFrameSniffer(This,dwCookie) )
    ( (This)->lpVtbl -> QueryCurrentThreadIsDebuggerThread(This) )
    ( (This)->lpVtbl -> SynchronousCallInDebuggerThread(This,pptc,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> CreateApplicationNode(This,ppdanNew) )
    ( (This)->lpVtbl -> FireDebuggerEvent(This,riid,punk) )
    ( (This)->lpVtbl -> HandleRuntimeError(This,pErrorDebug,pScriptSite,pbra,perra,pfCallOnScriptError) )
    ( (This)->lpVtbl -> FCanJitDebug(This) )
    ( (This)->lpVtbl -> FIsAutoJitDebugEnabled(This) )
    ( (This)->lpVtbl -> AddGlobalExpressionContextProvider(This,pdsfs,pdwCookie) )
    ( (This)->lpVtbl -> RemoveGlobalExpressionContextProvider(This,dwCookie) )
EXTERN_C const IID IID_IRemoteDebugApplicationEvents;
    typedef struct IRemoteDebugApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDebugApplicationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDebugApplicationEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnConnectDebugger )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in_opt IApplicationDebugger *pad);
        HRESULT ( STDMETHODCALLTYPE *OnDisconnectDebugger )(
            __RPC__in IRemoteDebugApplicationEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnSetName )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in LPCOLESTR pstrName);
        HRESULT ( STDMETHODCALLTYPE *OnDebugOutput )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in LPCOLESTR pstr);
        HRESULT ( STDMETHODCALLTYPE *OnClose )(
            __RPC__in IRemoteDebugApplicationEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnEnterBreakPoint )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in_opt IRemoteDebugApplicationThread *prdat);
        HRESULT ( STDMETHODCALLTYPE *OnLeaveBreakPoint )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in_opt IRemoteDebugApplicationThread *prdat);
        HRESULT ( STDMETHODCALLTYPE *OnCreateThread )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in_opt IRemoteDebugApplicationThread *prdat);
        HRESULT ( STDMETHODCALLTYPE *OnDestroyThread )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       __RPC__in_opt IRemoteDebugApplicationThread *prdat);
        HRESULT ( STDMETHODCALLTYPE *OnBreakFlagChange )(
            __RPC__in IRemoteDebugApplicationEvents * This,
                       APPBREAKFLAGS abf,
                       __RPC__in_opt IRemoteDebugApplicationThread *prdatSteppingThread);
        END_INTERFACE
    } IRemoteDebugApplicationEventsVtbl;
    interface IRemoteDebugApplicationEvents
    {
        CONST_VTBL struct IRemoteDebugApplicationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnectDebugger(This,pad) )
    ( (This)->lpVtbl -> OnDisconnectDebugger(This) )
    ( (This)->lpVtbl -> OnSetName(This,pstrName) )
    ( (This)->lpVtbl -> OnDebugOutput(This,pstr) )
    ( (This)->lpVtbl -> OnClose(This) )
    ( (This)->lpVtbl -> OnEnterBreakPoint(This,prdat) )
    ( (This)->lpVtbl -> OnLeaveBreakPoint(This,prdat) )
    ( (This)->lpVtbl -> OnCreateThread(This,prdat) )
    ( (This)->lpVtbl -> OnDestroyThread(This,prdat) )
    ( (This)->lpVtbl -> OnBreakFlagChange(This,abf,prdatSteppingThread) )
EXTERN_C const IID IID_IDebugApplicationNode;
    typedef struct IDebugApplicationNodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugApplicationNode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugApplicationNode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugApplicationNode * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugApplicationNode * This,
                       DOCUMENTNAMETYPE dnt,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentClassId )(
            __RPC__in IDebugApplicationNode * This,
                        __RPC__out CLSID *pclsidDocument);
        HRESULT ( STDMETHODCALLTYPE *GetDocument )(
            __RPC__in IDebugApplicationNode * This,
                        __RPC__deref_out_opt IDebugDocument **ppssd);
        HRESULT ( STDMETHODCALLTYPE *EnumChildren )(
            __RPC__in IDebugApplicationNode * This,
                        __RPC__deref_out_opt IEnumDebugApplicationNodes **pperddp);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IDebugApplicationNode * This,
                        __RPC__deref_out_opt IDebugApplicationNode **pprddp);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentProvider )(
            __RPC__in IDebugApplicationNode * This,
                       __RPC__in_opt IDebugDocumentProvider *pddp);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IDebugApplicationNode * This);
        HRESULT ( STDMETHODCALLTYPE *Attach )(
            __RPC__in IDebugApplicationNode * This,
                       __RPC__in_opt IDebugApplicationNode *pdanParent);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            __RPC__in IDebugApplicationNode * This);
        END_INTERFACE
    } IDebugApplicationNodeVtbl;
    interface IDebugApplicationNode
    {
        CONST_VTBL struct IDebugApplicationNodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
    ( (This)->lpVtbl -> GetDocument(This,ppssd) )
    ( (This)->lpVtbl -> EnumChildren(This,pperddp) )
    ( (This)->lpVtbl -> GetParent(This,pprddp) )
    ( (This)->lpVtbl -> SetDocumentProvider(This,pddp) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Attach(This,pdanParent) )
    ( (This)->lpVtbl -> Detach(This) )
EXTERN_C const IID IID_IDebugApplicationNodeEvents;
    typedef struct IDebugApplicationNodeEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugApplicationNodeEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugApplicationNodeEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *onAddChild )(
            __RPC__in IDebugApplicationNodeEvents * This,
                       __RPC__in_opt IDebugApplicationNode *prddpChild);
        HRESULT ( STDMETHODCALLTYPE *onRemoveChild )(
            __RPC__in IDebugApplicationNodeEvents * This,
                       __RPC__in_opt IDebugApplicationNode *prddpChild);
        HRESULT ( STDMETHODCALLTYPE *onDetach )(
            __RPC__in IDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *onAttach )(
            __RPC__in IDebugApplicationNodeEvents * This,
                       __RPC__in_opt IDebugApplicationNode *prddpParent);
        END_INTERFACE
    } IDebugApplicationNodeEventsVtbl;
    interface IDebugApplicationNodeEvents
    {
        CONST_VTBL struct IDebugApplicationNodeEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> onAddChild(This,prddpChild) )
    ( (This)->lpVtbl -> onRemoveChild(This,prddpChild) )
    ( (This)->lpVtbl -> onDetach(This) )
    ( (This)->lpVtbl -> onAttach(This,prddpParent) )
EXTERN_C const IID IID_AsyncIDebugApplicationNodeEvents;
    typedef struct AsyncIDebugApplicationNodeEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_onAddChild )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This,
                       __RPC__in_opt IDebugApplicationNode *prddpChild);
        HRESULT ( STDMETHODCALLTYPE *Finish_onAddChild )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_onRemoveChild )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This,
                       __RPC__in_opt IDebugApplicationNode *prddpChild);
        HRESULT ( STDMETHODCALLTYPE *Finish_onRemoveChild )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_onDetach )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_onDetach )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_onAttach )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This,
                       __RPC__in_opt IDebugApplicationNode *prddpParent);
        HRESULT ( STDMETHODCALLTYPE *Finish_onAttach )(
            __RPC__in AsyncIDebugApplicationNodeEvents * This);
        END_INTERFACE
    } AsyncIDebugApplicationNodeEventsVtbl;
    interface AsyncIDebugApplicationNodeEvents
    {
        CONST_VTBL struct AsyncIDebugApplicationNodeEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_onAddChild(This,prddpChild) )
    ( (This)->lpVtbl -> Finish_onAddChild(This) )
    ( (This)->lpVtbl -> Begin_onRemoveChild(This,prddpChild) )
    ( (This)->lpVtbl -> Finish_onRemoveChild(This) )
    ( (This)->lpVtbl -> Begin_onDetach(This) )
    ( (This)->lpVtbl -> Finish_onDetach(This) )
    ( (This)->lpVtbl -> Begin_onAttach(This,prddpParent) )
    ( (This)->lpVtbl -> Finish_onAttach(This) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0045_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugThreadCall32;
    typedef struct IDebugThreadCall32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugThreadCall32 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugThreadCall32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugThreadCall32 * This);
        HRESULT ( STDMETHODCALLTYPE *ThreadCallHandler )(
            IDebugThreadCall32 * This,
                       DWORD dwParam1,
                       DWORD dwParam2,
                       DWORD dwParam3);
        END_INTERFACE
    } IDebugThreadCall32Vtbl;
    interface IDebugThreadCall32
    {
        CONST_VTBL struct IDebugThreadCall32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ThreadCallHandler(This,dwParam1,dwParam2,dwParam3) )
EXTERN_C const IID IID_IDebugThreadCall64;
    typedef struct IDebugThreadCall64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugThreadCall64 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugThreadCall64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugThreadCall64 * This);
        HRESULT ( STDMETHODCALLTYPE *ThreadCallHandler )(
            IDebugThreadCall64 * This,
                       DWORDLONG dwParam1,
                       DWORDLONG dwParam2,
                       DWORDLONG dwParam3);
        END_INTERFACE
    } IDebugThreadCall64Vtbl;
    interface IDebugThreadCall64
    {
        CONST_VTBL struct IDebugThreadCall64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ThreadCallHandler(This,dwParam1,dwParam2,dwParam3) )
typedef DWORD THREAD_STATE;
EXTERN_C const IID IID_IRemoteDebugApplicationThread;
    typedef struct IRemoteDebugApplicationThreadVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDebugApplicationThread * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDebugApplicationThread * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDebugApplicationThread * This);
        HRESULT ( STDMETHODCALLTYPE *GetSystemThreadId )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__out DWORD *dwThreadId);
        HRESULT ( STDMETHODCALLTYPE *GetApplication )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__deref_out_opt IRemoteDebugApplication **pprda);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFrames )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__deref_out_opt IEnumDebugStackFrames **ppedsf);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__deref_out_opt BSTR *pbstrDescription,
                        __RPC__deref_out_opt BSTR *pbstrState);
        HRESULT ( STDMETHODCALLTYPE *SetNextStatement )(
            __RPC__in IRemoteDebugApplicationThread * This,
                       __RPC__in_opt IDebugStackFrame *pStackFrame,
                       __RPC__in_opt IDebugCodeContext *pCodeContext);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__out DWORD *pState);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetSuspendCount )(
            __RPC__in IRemoteDebugApplicationThread * This,
                        __RPC__out DWORD *pdwCount);
        END_INTERFACE
    } IRemoteDebugApplicationThreadVtbl;
    interface IRemoteDebugApplicationThread
    {
        CONST_VTBL struct IRemoteDebugApplicationThreadVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSystemThreadId(This,dwThreadId) )
    ( (This)->lpVtbl -> GetApplication(This,pprda) )
    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription,pbstrState) )
    ( (This)->lpVtbl -> SetNextStatement(This,pStackFrame,pCodeContext) )
    ( (This)->lpVtbl -> GetState(This,pState) )
    ( (This)->lpVtbl -> Suspend(This,pdwCount) )
    ( (This)->lpVtbl -> Resume(This,pdwCount) )
    ( (This)->lpVtbl -> GetSuspendCount(This,pdwCount) )
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0048_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugApplicationThread;
    typedef struct IDebugApplicationThreadVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplicationThread * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplicationThread * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplicationThread * This);
        HRESULT ( STDMETHODCALLTYPE *GetSystemThreadId )(
            IDebugApplicationThread * This,
                        DWORD *dwThreadId);
        HRESULT ( STDMETHODCALLTYPE *GetApplication )(
            IDebugApplicationThread * This,
                        IRemoteDebugApplication **pprda);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFrames )(
            IDebugApplicationThread * This,
                        IEnumDebugStackFrames **ppedsf);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IDebugApplicationThread * This,
                        BSTR *pbstrDescription,
                        BSTR *pbstrState);
        HRESULT ( STDMETHODCALLTYPE *SetNextStatement )(
            IDebugApplicationThread * This,
                       IDebugStackFrame *pStackFrame,
                       IDebugCodeContext *pCodeContext);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IDebugApplicationThread * This,
                        DWORD *pState);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            IDebugApplicationThread * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IDebugApplicationThread * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetSuspendCount )(
            IDebugApplicationThread * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallIntoThread32 )(
            IDebugApplicationThread * This,
                       IDebugThreadCall32 *pstcb,
                       DWORD dwParam1,
                       DWORD dwParam2,
                       DWORD dwParam3);
        HRESULT ( STDMETHODCALLTYPE *QueryIsCurrentThread )(
            IDebugApplicationThread * This);
        HRESULT ( STDMETHODCALLTYPE *QueryIsDebuggerThread )(
            IDebugApplicationThread * This);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IDebugApplicationThread * This,
                       LPCOLESTR pstrDescription);
        HRESULT ( STDMETHODCALLTYPE *SetStateString )(
            IDebugApplicationThread * This,
                       LPCOLESTR pstrState);
        END_INTERFACE
    } IDebugApplicationThreadVtbl;
    interface IDebugApplicationThread
    {
        CONST_VTBL struct IDebugApplicationThreadVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSystemThreadId(This,dwThreadId) )
    ( (This)->lpVtbl -> GetApplication(This,pprda) )
    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription,pbstrState) )
    ( (This)->lpVtbl -> SetNextStatement(This,pStackFrame,pCodeContext) )
    ( (This)->lpVtbl -> GetState(This,pState) )
    ( (This)->lpVtbl -> Suspend(This,pdwCount) )
    ( (This)->lpVtbl -> Resume(This,pdwCount) )
    ( (This)->lpVtbl -> GetSuspendCount(This,pdwCount) )
    ( (This)->lpVtbl -> SynchronousCallIntoThread32(This,pstcb,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> QueryIsCurrentThread(This) )
    ( (This)->lpVtbl -> QueryIsDebuggerThread(This) )
    ( (This)->lpVtbl -> SetDescription(This,pstrDescription) )
    ( (This)->lpVtbl -> SetStateString(This,pstrState) )
EXTERN_C const IID IID_IDebugApplicationThread64;
    typedef struct IDebugApplicationThread64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugApplicationThread64 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugApplicationThread64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugApplicationThread64 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSystemThreadId )(
            IDebugApplicationThread64 * This,
                        DWORD *dwThreadId);
        HRESULT ( STDMETHODCALLTYPE *GetApplication )(
            IDebugApplicationThread64 * This,
                        IRemoteDebugApplication **pprda);
        HRESULT ( STDMETHODCALLTYPE *EnumStackFrames )(
            IDebugApplicationThread64 * This,
                        IEnumDebugStackFrames **ppedsf);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IDebugApplicationThread64 * This,
                        BSTR *pbstrDescription,
                        BSTR *pbstrState);
        HRESULT ( STDMETHODCALLTYPE *SetNextStatement )(
            IDebugApplicationThread64 * This,
                       IDebugStackFrame *pStackFrame,
                       IDebugCodeContext *pCodeContext);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IDebugApplicationThread64 * This,
                        DWORD *pState);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            IDebugApplicationThread64 * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IDebugApplicationThread64 * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetSuspendCount )(
            IDebugApplicationThread64 * This,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallIntoThread32 )(
            IDebugApplicationThread64 * This,
                       IDebugThreadCall32 *pstcb,
                       DWORD dwParam1,
                       DWORD dwParam2,
                       DWORD dwParam3);
        HRESULT ( STDMETHODCALLTYPE *QueryIsCurrentThread )(
            IDebugApplicationThread64 * This);
        HRESULT ( STDMETHODCALLTYPE *QueryIsDebuggerThread )(
            IDebugApplicationThread64 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IDebugApplicationThread64 * This,
                       LPCOLESTR pstrDescription);
        HRESULT ( STDMETHODCALLTYPE *SetStateString )(
            IDebugApplicationThread64 * This,
                       LPCOLESTR pstrState);
        HRESULT ( STDMETHODCALLTYPE *SynchronousCallIntoThread64 )(
            IDebugApplicationThread64 * This,
                       IDebugThreadCall64 *pstcb,
                       DWORDLONG dwParam1,
                       DWORDLONG dwParam2,
                       DWORDLONG dwParam3);
        END_INTERFACE
    } IDebugApplicationThread64Vtbl;
    interface IDebugApplicationThread64
    {
        CONST_VTBL struct IDebugApplicationThread64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSystemThreadId(This,dwThreadId) )
    ( (This)->lpVtbl -> GetApplication(This,pprda) )
    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription,pbstrState) )
    ( (This)->lpVtbl -> SetNextStatement(This,pStackFrame,pCodeContext) )
    ( (This)->lpVtbl -> GetState(This,pState) )
    ( (This)->lpVtbl -> Suspend(This,pdwCount) )
    ( (This)->lpVtbl -> Resume(This,pdwCount) )
    ( (This)->lpVtbl -> GetSuspendCount(This,pdwCount) )
    ( (This)->lpVtbl -> SynchronousCallIntoThread32(This,pstcb,dwParam1,dwParam2,dwParam3) )
    ( (This)->lpVtbl -> QueryIsCurrentThread(This) )
    ( (This)->lpVtbl -> QueryIsDebuggerThread(This) )
    ( (This)->lpVtbl -> SetDescription(This,pstrDescription) )
    ( (This)->lpVtbl -> SetStateString(This,pstrState) )
    ( (This)->lpVtbl -> SynchronousCallIntoThread64(This,pstcb,dwParam1,dwParam2,dwParam3) )
EXTERN_C const IID IID_IDebugCookie;
    typedef struct IDebugCookieVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugCookie * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugCookie * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugCookie * This);
        HRESULT ( STDMETHODCALLTYPE *SetDebugCookie )(
            IDebugCookie * This,
                       DWORD dwDebugAppCookie);
        END_INTERFACE
    } IDebugCookieVtbl;
    interface IDebugCookie
    {
        CONST_VTBL struct IDebugCookieVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDebugCookie(This,dwDebugAppCookie) )
EXTERN_C const IID IID_IEnumDebugApplicationNodes;
    typedef struct IEnumDebugApplicationNodesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugApplicationNodes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugApplicationNodes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugApplicationNodes * This);
                      HRESULT ( __stdcall *Next )(
            IEnumDebugApplicationNodes * This,
                       ULONG celt,
                        IDebugApplicationNode **pprddp,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugApplicationNodes * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugApplicationNodes * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugApplicationNodes * This,
                        __RPC__deref_out_opt IEnumDebugApplicationNodes **pperddp);
        END_INTERFACE
    } IEnumDebugApplicationNodesVtbl;
    interface IEnumDebugApplicationNodes
    {
        CONST_VTBL struct IEnumDebugApplicationNodesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pprddp,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,pperddp) )
                HRESULT __stdcall IEnumDebugApplicationNodes_RemoteNext_Proxy(
    __RPC__in IEnumDebugApplicationNodes * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IDebugApplicationNode **pprddp,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumDebugApplicationNodes_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumRemoteDebugApplications;
    typedef struct IEnumRemoteDebugApplicationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumRemoteDebugApplications * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumRemoteDebugApplications * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumRemoteDebugApplications * This);
                      HRESULT ( __stdcall *Next )(
            IEnumRemoteDebugApplications * This,
                       ULONG celt,
                        IRemoteDebugApplication **ppda,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumRemoteDebugApplications * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumRemoteDebugApplications * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumRemoteDebugApplications * This,
                        __RPC__deref_out_opt IEnumRemoteDebugApplications **ppessd);
        END_INTERFACE
    } IEnumRemoteDebugApplicationsVtbl;
    interface IEnumRemoteDebugApplications
    {
        CONST_VTBL struct IEnumRemoteDebugApplicationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppda,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppessd) )
                HRESULT __stdcall IEnumRemoteDebugApplications_RemoteNext_Proxy(
    __RPC__in IEnumRemoteDebugApplications * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IRemoteDebugApplication **ppda,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumRemoteDebugApplications_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumRemoteDebugApplicationThreads;
    typedef struct IEnumRemoteDebugApplicationThreadsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumRemoteDebugApplicationThreads * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumRemoteDebugApplicationThreads * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumRemoteDebugApplicationThreads * This);
                      HRESULT ( __stdcall *Next )(
            IEnumRemoteDebugApplicationThreads * This,
                       ULONG celt,
                        IRemoteDebugApplicationThread **pprdat,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumRemoteDebugApplicationThreads * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumRemoteDebugApplicationThreads * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumRemoteDebugApplicationThreads * This,
                        __RPC__deref_out_opt IEnumRemoteDebugApplicationThreads **pperdat);
        END_INTERFACE
    } IEnumRemoteDebugApplicationThreadsVtbl;
    interface IEnumRemoteDebugApplicationThreads
    {
        CONST_VTBL struct IEnumRemoteDebugApplicationThreadsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pprdat,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,pperdat) )
                HRESULT __stdcall IEnumRemoteDebugApplicationThreads_RemoteNext_Proxy(
    __RPC__in IEnumRemoteDebugApplicationThreads * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IRemoteDebugApplicationThread **ppdat,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumRemoteDebugApplicationThreads_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IDebugFormatter;
    typedef struct IDebugFormatterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugFormatter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugFormatter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugFormatter * This);
        HRESULT ( STDMETHODCALLTYPE *GetStringForVariant )(
            IDebugFormatter * This,
                       VARIANT *pvar,
                       ULONG nRadix,
                        BSTR *pbstrValue);
        HRESULT ( STDMETHODCALLTYPE *GetVariantForString )(
            IDebugFormatter * This,
                       LPCOLESTR pwstrValue,
                        VARIANT *pvar);
        HRESULT ( STDMETHODCALLTYPE *GetStringForVarType )(
            IDebugFormatter * This,
                       VARTYPE vt,
                       TYPEDESC *ptdescArrayType,
                        BSTR *pbstr);
        END_INTERFACE
    } IDebugFormatterVtbl;
    interface IDebugFormatter
    {
        CONST_VTBL struct IDebugFormatterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStringForVariant(This,pvar,nRadix,pbstrValue) )
    ( (This)->lpVtbl -> GetVariantForString(This,pwstrValue,pvar) )
    ( (This)->lpVtbl -> GetStringForVarType(This,vt,ptdescArrayType,pbstr) )
EXTERN_C const IID IID_ISimpleConnectionPoint;
    typedef struct ISimpleConnectionPointVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimpleConnectionPoint * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimpleConnectionPoint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimpleConnectionPoint * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventCount )(
            ISimpleConnectionPoint * This,
                        ULONG *pulCount);
        HRESULT ( STDMETHODCALLTYPE *DescribeEvents )(
            ISimpleConnectionPoint * This,
                       ULONG iEvent,
                       ULONG cEvents,
                                            DISPID *prgid,
                                            BSTR *prgbstr,
                        ULONG *pcEventsFetched);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            ISimpleConnectionPoint * This,
                       IDispatch *pdisp,
                        DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            ISimpleConnectionPoint * This,
                       DWORD dwCookie);
        END_INTERFACE
    } ISimpleConnectionPointVtbl;
    interface ISimpleConnectionPoint
    {
        CONST_VTBL struct ISimpleConnectionPointVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventCount(This,pulCount) )
    ( (This)->lpVtbl -> DescribeEvents(This,iEvent,cEvents,prgid,prgbstr,pcEventsFetched) )
    ( (This)->lpVtbl -> Advise(This,pdisp,pdwCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
EXTERN_C const CLSID CLSID_DebugHelper;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0056_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugHelper;
    typedef struct IDebugHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDebugHelper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDebugHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDebugHelper * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyBrowser )(
            IDebugHelper * This,
                       VARIANT *pvar,
                       LPCOLESTR bstrName,
                       IDebugApplicationThread *pdat,
                        IDebugProperty **ppdob);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyBrowserEx )(
            IDebugHelper * This,
                       VARIANT *pvar,
                       LPCOLESTR bstrName,
                       IDebugApplicationThread *pdat,
                       IDebugFormatter *pdf,
                        IDebugProperty **ppdob);
        HRESULT ( STDMETHODCALLTYPE *CreateSimpleConnectionPoint )(
            IDebugHelper * This,
                       IDispatch *pdisp,
                        ISimpleConnectionPoint **ppscp);
        END_INTERFACE
    } IDebugHelperVtbl;
    interface IDebugHelper
    {
        CONST_VTBL struct IDebugHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePropertyBrowser(This,pvar,bstrName,pdat,ppdob) )
    ( (This)->lpVtbl -> CreatePropertyBrowserEx(This,pvar,bstrName,pdat,pdf,ppdob) )
    ( (This)->lpVtbl -> CreateSimpleConnectionPoint(This,pdisp,ppscp) )
EXTERN_C const IID IID_IEnumDebugExpressionContexts;
    typedef struct IEnumDebugExpressionContextsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugExpressionContexts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugExpressionContexts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugExpressionContexts * This);
                      HRESULT ( __stdcall *Next )(
            IEnumDebugExpressionContexts * This,
                       ULONG celt,
                        IDebugExpressionContext **ppdec,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugExpressionContexts * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugExpressionContexts * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugExpressionContexts * This,
                        __RPC__deref_out_opt IEnumDebugExpressionContexts **ppedec);
        END_INTERFACE
    } IEnumDebugExpressionContextsVtbl;
    interface IEnumDebugExpressionContexts
    {
        CONST_VTBL struct IEnumDebugExpressionContextsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppdec,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppedec) )
                HRESULT __stdcall IEnumDebugExpressionContexts_RemoteNext_Proxy(
    __RPC__in IEnumDebugExpressionContexts * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IDebugExpressionContext **pprgdec,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumDebugExpressionContexts_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IProvideExpressionContexts;
    typedef struct IProvideExpressionContextsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideExpressionContexts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideExpressionContexts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideExpressionContexts * This);
        HRESULT ( STDMETHODCALLTYPE *EnumExpressionContexts )(
            __RPC__in IProvideExpressionContexts * This,
                        __RPC__deref_out_opt IEnumDebugExpressionContexts **ppedec);
        END_INTERFACE
    } IProvideExpressionContextsVtbl;
    interface IProvideExpressionContexts
    {
        CONST_VTBL struct IProvideExpressionContextsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumExpressionContexts(This,ppedec) )
EXTERN_C const CLSID CLSID_CDebugDocumentHelper;
EXTERN_C const IID LIBID_ProcessDebugManagerLib;
EXTERN_C const CLSID CLSID_ProcessDebugManager;
class DECLSPEC_UUID("78a51822-51f4-11d0-8f20-00805f2cd064")
ProcessDebugManager;
EXTERN_C const CLSID CLSID_DebugHelper;
class DECLSPEC_UUID("0BFCC060-8C1D-11d0-ACCD-00AA0060275C")
DebugHelper;
EXTERN_C const CLSID CLSID_CDebugDocumentHelper;
class DECLSPEC_UUID("83B8BCA6-687C-11D0-A405-00AA0060275C")
CDebugDocumentHelper;
EXTERN_C const CLSID CLSID_MachineDebugManager_RETAIL;
class DECLSPEC_UUID("0C0A3666-30C9-11D0-8F20-00805F2CD064")
MachineDebugManager_RETAIL;
EXTERN_C const CLSID CLSID_MachineDebugManager_DEBUG;
class DECLSPEC_UUID("49769CEC-3A55-4bb0-B697-88FEDE77E8EA")
MachineDebugManager_DEBUG;
EXTERN_C const CLSID CLSID_DefaultDebugSessionProvider;
class DECLSPEC_UUID("834128a2-51f4-11d0-8f20-00805f2cd064")
DefaultDebugSessionProvider;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0060_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
              HRESULT __stdcall IEnumDebugCodeContexts_Next_Proxy(
    IEnumDebugCodeContexts * This,
               ULONG celt,
                IDebugCodeContext **pscc,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumDebugCodeContexts_Next_Stub(
    __RPC__in IEnumDebugCodeContexts * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IDebugCodeContext **pscc,
                __RPC__out ULONG *pceltFetched);
              HRESULT __stdcall IEnumDebugStackFrames_Next_Proxy(
    IEnumDebugStackFrames * This,
               ULONG celt,
                DebugStackFrameDescriptor *prgdsfd,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumDebugStackFrames_Next_Stub(
    __RPC__in IEnumDebugStackFrames * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) DebugStackFrameDescriptor *prgdsfd,
                __RPC__out ULONG *pceltFetched);
              HRESULT __stdcall IEnumDebugStackFrames64_Next64_Proxy(
    IEnumDebugStackFrames64 * This,
               ULONG celt,
                DebugStackFrameDescriptor64 *prgdsfd,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumDebugStackFrames64_Next64_Stub(
    __RPC__in IEnumDebugStackFrames64 * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) DebugStackFrameDescriptor64 *prgdsfd,
                __RPC__out ULONG *pceltFetched);
              HRESULT __stdcall IEnumDebugApplicationNodes_Next_Proxy(
    IEnumDebugApplicationNodes * This,
               ULONG celt,
                IDebugApplicationNode **pprddp,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumDebugApplicationNodes_Next_Stub(
    __RPC__in IEnumDebugApplicationNodes * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IDebugApplicationNode **pprddp,
                __RPC__out ULONG *pceltFetched);
              HRESULT __stdcall IEnumRemoteDebugApplications_Next_Proxy(
    IEnumRemoteDebugApplications * This,
               ULONG celt,
                IRemoteDebugApplication **ppda,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumRemoteDebugApplications_Next_Stub(
    __RPC__in IEnumRemoteDebugApplications * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IRemoteDebugApplication **ppda,
                __RPC__out ULONG *pceltFetched);
              HRESULT __stdcall IEnumRemoteDebugApplicationThreads_Next_Proxy(
    IEnumRemoteDebugApplicationThreads * This,
               ULONG celt,
                IRemoteDebugApplicationThread **pprdat,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumRemoteDebugApplicationThreads_Next_Stub(
    __RPC__in IEnumRemoteDebugApplicationThreads * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IRemoteDebugApplicationThread **ppdat,
                __RPC__out ULONG *pceltFetched);
              HRESULT __stdcall IEnumDebugExpressionContexts_Next_Proxy(
    IEnumDebugExpressionContexts * This,
               ULONG celt,
                IDebugExpressionContext **ppdec,
                ULONG *pceltFetched);
                HRESULT __stdcall IEnumDebugExpressionContexts_Next_Stub(
    __RPC__in IEnumDebugExpressionContexts * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IDebugExpressionContext **pprgdec,
                __RPC__out ULONG *pceltFetched);
}
