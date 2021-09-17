#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISpTokenUI ISpTokenUI;
typedef interface ISpObjectTokenEnumBuilder ISpObjectTokenEnumBuilder;
typedef interface ISpErrorLog ISpErrorLog;
typedef interface ISpGrammarCompiler ISpGrammarCompiler;
typedef interface ISpGramCompBackend ISpGramCompBackend;
typedef interface ISpITNProcessor ISpITNProcessor;
typedef interface ISpPhraseBuilder ISpPhraseBuilder;
typedef interface ISpThreadControl ISpThreadControl;
typedef interface ISpTaskManager ISpTaskManager;
typedef interface ISpTTSEngineSite ISpTTSEngineSite;
typedef interface ISpTTSEngine ISpTTSEngine;
typedef interface ISpCFGInterpreterSite ISpCFGInterpreterSite;
typedef interface ISpCFGInterpreter ISpCFGInterpreter;
typedef interface ISpSREngineSite ISpSREngineSite;
typedef interface ISpSREngineSite2 ISpSREngineSite2;
typedef interface ISpSREngine ISpSREngine;
typedef interface ISpSREngine2 ISpSREngine2;
typedef interface ISpSRAlternates ISpSRAlternates;
typedef interface ISpSRAlternates2 ISpSRAlternates2;
typedef interface _ISpPrivateEngineCall _ISpPrivateEngineCall;
typedef interface ISpPrivateEngineCallEx ISpPrivateEngineCallEx;
typedef class SpDataKey SpDataKey;
typedef class SpObjectTokenEnum SpObjectTokenEnum;
typedef class SpPhraseBuilder SpPhraseBuilder;
typedef class SpITNProcessor SpITNProcessor;
typedef class SpGrammarCompiler SpGrammarCompiler;
typedef class SpW3CGrammarCompiler SpW3CGrammarCompiler;
typedef class SpGramCompBackend SpGramCompBackend;
#include "oaidl.h"
#include "ocidl.h"
#include "sapi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpTokenUI;
    typedef struct ISpTokenUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpTokenUI * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpTokenUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpTokenUI * This);
                      HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            ISpTokenUI * This,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                       IUnknown *punkObject,
                        BOOL *pfSupported);
                      HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            ISpTokenUI * This,
                       HWND hwndParent,
            _In_opt_ LPCWSTR pszTitle,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                       ISpObjectToken *pToken,
                       IUnknown *punkObject);
        END_INTERFACE
    } ISpTokenUIVtbl;
    interface ISpTokenUI
    {
        CONST_VTBL struct ISpTokenUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) )
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,pToken,punkObject) )
EXTERN_C const IID IID_ISpObjectTokenEnumBuilder;
    typedef struct ISpObjectTokenEnumBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpObjectTokenEnumBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpObjectTokenEnumBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpObjectTokenEnumBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            ISpObjectTokenEnumBuilder * This,
                       ULONG celt,
                                            ISpObjectToken **pelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            ISpObjectTokenEnumBuilder * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ISpObjectTokenEnumBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISpObjectTokenEnumBuilder * This,
                        IEnumSpObjectTokens **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            ISpObjectTokenEnumBuilder * This,
                       ULONG Index,
                        ISpObjectToken **ppToken);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            ISpObjectTokenEnumBuilder * This,
                        ULONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *SetAttribs )(
            ISpObjectTokenEnumBuilder * This,
            _In_opt_ LPCWSTR pszReqAttribs,
            _In_opt_ LPCWSTR pszOptAttribs);
        HRESULT ( STDMETHODCALLTYPE *AddTokens )(
            ISpObjectTokenEnumBuilder * This,
                       ULONG cTokens,
                       ISpObjectToken **pToken);
        HRESULT ( STDMETHODCALLTYPE *AddTokensFromDataKey )(
            ISpObjectTokenEnumBuilder * This,
                       ISpDataKey *pDataKey,
                       LPCWSTR pszSubKey,
                       LPCWSTR pszCategoryId);
        HRESULT ( STDMETHODCALLTYPE *AddTokensFromTokenEnum )(
            ISpObjectTokenEnumBuilder * This,
                       IEnumSpObjectTokens *pTokenEnum);
        HRESULT ( STDMETHODCALLTYPE *Sort )(
            ISpObjectTokenEnumBuilder * This,
                       LPCWSTR pszTokenIdToListFirst);
        END_INTERFACE
    } ISpObjectTokenEnumBuilderVtbl;
    interface ISpObjectTokenEnumBuilder
    {
        CONST_VTBL struct ISpObjectTokenEnumBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Item(This,Index,ppToken) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> SetAttribs(This,pszReqAttribs,pszOptAttribs) )
    ( (This)->lpVtbl -> AddTokens(This,cTokens,pToken) )
    ( (This)->lpVtbl -> AddTokensFromDataKey(This,pDataKey,pszSubKey,pszCategoryId) )
    ( (This)->lpVtbl -> AddTokensFromTokenEnum(This,pTokenEnum) )
    ( (This)->lpVtbl -> Sort(This,pszTokenIdToListFirst) )
#if 0
typedef void *SPWORDHANDLE;
typedef void *SPRULEHANDLE;
typedef void *SPGRAMMARHANDLE;
typedef void *SPRECOCONTEXTHANDLE;
typedef void *SPPHRASERULEHANDLE;
typedef void *SPPHRASEPROPERTYHANDLE;
typedef void *SPTRANSITIONID;
#else
DECLARE_HANDLE(SPWORDHANDLE);
DECLARE_HANDLE(SPRULEHANDLE);
DECLARE_HANDLE(SPGRAMMARHANDLE);
DECLARE_HANDLE(SPRECOCONTEXTHANDLE);
DECLARE_HANDLE(SPPHRASERULEHANDLE);
DECLARE_HANDLE(SPPHRASEPROPERTYHANDLE);
DECLARE_HANDLE(SPTRANSITIONID);
#endif
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpErrorLog;
    typedef struct ISpErrorLogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpErrorLog * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpErrorLog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpErrorLog * This);
        HRESULT ( STDMETHODCALLTYPE *AddError )(
            ISpErrorLog * This,
                       const long lLineNumber,
                       HRESULT hr,
                       LPCWSTR pszDescription,
            _In_opt_ LPCWSTR pszHelpFile,
                       DWORD dwHelpContext);
        END_INTERFACE
    } ISpErrorLogVtbl;
    interface ISpErrorLog
    {
        CONST_VTBL struct ISpErrorLogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddError(This,lLineNumber,hr,pszDescription,pszHelpFile,dwHelpContext) )
EXTERN_C const IID IID_ISpGrammarCompiler;
    typedef struct ISpGrammarCompilerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpGrammarCompiler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpGrammarCompiler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpGrammarCompiler * This);
        HRESULT ( STDMETHODCALLTYPE *CompileStream )(
            ISpGrammarCompiler * This,
                       IStream *pSource,
                        IStream *pDest,
            _In_opt_ IStream *pHeader,
            _In_opt_ IUnknown *pReserved,
            _In_opt_ ISpErrorLog *pErrorLog,
                       DWORD dwFlags);
        END_INTERFACE
    } ISpGrammarCompilerVtbl;
    interface ISpGrammarCompiler
    {
        CONST_VTBL struct ISpGrammarCompilerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompileStream(This,pSource,pDest,pHeader,pReserved,pErrorLog,dwFlags) )
EXTERN_C const IID IID_ISpGramCompBackend;
    typedef struct ISpGramCompBackendVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpGramCompBackend * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpGramCompBackend * This);
        HRESULT ( STDMETHODCALLTYPE *ResetGrammar )(
            __RPC__in ISpGramCompBackend * This,
                       WORD NewLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetRule )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in LPCWSTR pszRuleName,
                       DWORD dwRuleId,
                       DWORD dwAttributes,
                       BOOL fCreateIfNotExist,
                        __RPC__deref_out_opt SPSTATEHANDLE *phInitialState);
        HRESULT ( STDMETHODCALLTYPE *ClearRule )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in SPSTATEHANDLE hState);
        HRESULT ( STDMETHODCALLTYPE *CreateNewState )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in SPSTATEHANDLE hState,
                        __RPC__deref_out_opt SPSTATEHANDLE *phState);
        HRESULT ( STDMETHODCALLTYPE *AddWordTransition )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in SPSTATEHANDLE hFromState,
                       __RPC__in SPSTATEHANDLE hToState,
            _In_opt_ LPCWSTR psz,
            _In_opt_ LPCWSTR pszSeparators,
                       SPGRAMMARWORDTYPE eWordType,
                       float Weight,
                       __RPC__in const SPPROPERTYINFO *pPropInfo);
        HRESULT ( STDMETHODCALLTYPE *AddRuleTransition )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in SPSTATEHANDLE hFromState,
                       __RPC__in SPSTATEHANDLE hToState,
                       __RPC__in SPSTATEHANDLE hRule,
                       float Weight,
                       __RPC__in const SPPROPERTYINFO *pPropInfo);
        HRESULT ( STDMETHODCALLTYPE *AddResource )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in SPSTATEHANDLE hRuleState,
                       __RPC__in LPCWSTR pszResourceName,
            _In_opt_ LPCWSTR pszResourceValue);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISpGramCompBackend * This,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetSaveObjects )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in_opt IStream *pStream,
                       __RPC__in_opt ISpErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *InitFromBinaryGrammar )(
            __RPC__in ISpGramCompBackend * This,
                       __RPC__in const SPBINARYGRAMMAR *pBinaryData);
        END_INTERFACE
    } ISpGramCompBackendVtbl;
    interface ISpGramCompBackend
    {
        CONST_VTBL struct ISpGramCompBackendVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResetGrammar(This,NewLanguage) )
    ( (This)->lpVtbl -> GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) )
    ( (This)->lpVtbl -> ClearRule(This,hState) )
    ( (This)->lpVtbl -> CreateNewState(This,hState,phState) )
    ( (This)->lpVtbl -> AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) )
    ( (This)->lpVtbl -> AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) )
    ( (This)->lpVtbl -> AddResource(This,hRuleState,pszResourceName,pszResourceValue) )
    ( (This)->lpVtbl -> Commit(This,dwReserved) )
    ( (This)->lpVtbl -> SetSaveObjects(This,pStream,pErrorLog) )
    ( (This)->lpVtbl -> InitFromBinaryGrammar(This,pBinaryData) )
EXTERN_C const IID IID_ISpITNProcessor;
    typedef struct ISpITNProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpITNProcessor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpITNProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpITNProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *LoadITNGrammar )(
            ISpITNProcessor * This,
            _In_ LPWSTR pszCLSID);
        HRESULT ( STDMETHODCALLTYPE *ITNPhrase )(
            ISpITNProcessor * This,
                       ISpPhraseBuilder *pPhrase);
        END_INTERFACE
    } ISpITNProcessorVtbl;
    interface ISpITNProcessor
    {
        CONST_VTBL struct ISpITNProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadITNGrammar(This,pszCLSID) )
    ( (This)->lpVtbl -> ITNPhrase(This,pPhrase) )
EXTERN_C const IID IID_ISpPhraseBuilder;
    typedef struct ISpPhraseBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpPhraseBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpPhraseBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpPhraseBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )(
            ISpPhraseBuilder * This,
            _Outptr_ SPPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )(
            ISpPhraseBuilder * This,
            _Outptr_ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            ISpPhraseBuilder * This,
                       ULONG ulStart,
                       ULONG ulCount,
                       BOOL fUseTextReplacements,
            _Outptr_ LPWSTR *ppszCoMemText,
            _Out_writes_opt_(1) BYTE *pbDisplayAttributes);
        HRESULT ( STDMETHODCALLTYPE *Discard )(
            ISpPhraseBuilder * This,
                       DWORD dwValueTypes);
        HRESULT ( STDMETHODCALLTYPE *InitFromPhrase )(
            ISpPhraseBuilder * This,
                       const SPPHRASE *pPhrase);
        HRESULT ( STDMETHODCALLTYPE *InitFromSerializedPhrase )(
            ISpPhraseBuilder * This,
                       const SPSERIALIZEDPHRASE *pPhrase);
        HRESULT ( STDMETHODCALLTYPE *AddElements )(
            ISpPhraseBuilder * This,
                       ULONG cElements,
                       const SPPHRASEELEMENT *pElement);
        HRESULT ( STDMETHODCALLTYPE *AddRules )(
            ISpPhraseBuilder * This,
                       const SPPHRASERULEHANDLE hParent,
                       const SPPHRASERULE *pRule,
                        SPPHRASERULEHANDLE *phNewRule);
        HRESULT ( STDMETHODCALLTYPE *AddProperties )(
            ISpPhraseBuilder * This,
                       const SPPHRASEPROPERTYHANDLE hParent,
                       const SPPHRASEPROPERTY *pProperty,
                        SPPHRASEPROPERTYHANDLE *phNewProperty);
        HRESULT ( STDMETHODCALLTYPE *AddReplacements )(
            ISpPhraseBuilder * This,
                       ULONG cReplacements,
                       const SPPHRASEREPLACEMENT *pReplacements);
        END_INTERFACE
    } ISpPhraseBuilderVtbl;
    interface ISpPhraseBuilder
    {
        CONST_VTBL struct ISpPhraseBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) )
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) )
    ( (This)->lpVtbl -> InitFromPhrase(This,pPhrase) )
    ( (This)->lpVtbl -> InitFromSerializedPhrase(This,pPhrase) )
    ( (This)->lpVtbl -> AddElements(This,cElements,pElement) )
    ( (This)->lpVtbl -> AddRules(This,hParent,pRule,phNewRule) )
    ( (This)->lpVtbl -> AddProperties(This,hParent,pProperty,phNewProperty) )
    ( (This)->lpVtbl -> AddReplacements(This,cReplacements,pReplacements) )
typedef void *ISpTask;
typedef void *ISpThreadTask;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpThreadControl;
    typedef struct ISpThreadControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpThreadControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpThreadControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpThreadControl * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            ISpThreadControl * This);
        HRESULT ( STDMETHODCALLTYPE *StartThread )(
            ISpThreadControl * This,
                       DWORD dwFlags,
                        HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *WaitForThreadDone )(
            ISpThreadControl * This,
                       BOOL fForceStop,
                        HRESULT *phrThreadResult,
                       ULONG msTimeOut);
        HRESULT ( STDMETHODCALLTYPE *TerminateThread )(
            ISpThreadControl * This);
        HANDLE ( STDMETHODCALLTYPE *ThreadHandle )(
            ISpThreadControl * This);
        DWORD ( STDMETHODCALLTYPE *ThreadId )(
            ISpThreadControl * This);
        HANDLE ( STDMETHODCALLTYPE *NotifyEvent )(
            ISpThreadControl * This);
        HWND ( STDMETHODCALLTYPE *WindowHandle )(
            ISpThreadControl * This);
        HANDLE ( STDMETHODCALLTYPE *ThreadCompleteEvent )(
            ISpThreadControl * This);
        HANDLE ( STDMETHODCALLTYPE *ExitThreadEvent )(
            ISpThreadControl * This);
        END_INTERFACE
    } ISpThreadControlVtbl;
    interface ISpThreadControl
    {
        CONST_VTBL struct ISpThreadControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This) )
    ( (This)->lpVtbl -> StartThread(This,dwFlags,phwnd) )
    ( (This)->lpVtbl -> WaitForThreadDone(This,fForceStop,phrThreadResult,msTimeOut) )
    ( (This)->lpVtbl -> TerminateThread(This) )
    ( (This)->lpVtbl -> ThreadHandle(This) )
    ( (This)->lpVtbl -> ThreadId(This) )
    ( (This)->lpVtbl -> NotifyEvent(This) )
    ( (This)->lpVtbl -> WindowHandle(This) )
    ( (This)->lpVtbl -> ThreadCompleteEvent(This) )
    ( (This)->lpVtbl -> ExitThreadEvent(This) )
typedef struct SPTMTHREADINFO
    {
    long lPoolSize;
    long lPriority;
    ULONG ulConcurrencyLimit;
    ULONG ulMaxQuickAllocThreads;
    } SPTMTHREADINFO;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpTaskManager;
    typedef struct ISpTaskManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpTaskManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpTaskManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpTaskManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetThreadPoolInfo )(
            ISpTaskManager * This,
                       const SPTMTHREADINFO *pPoolInfo);
        HRESULT ( STDMETHODCALLTYPE *GetThreadPoolInfo )(
            ISpTaskManager * This,
                        SPTMTHREADINFO *pPoolInfo);
        HRESULT ( STDMETHODCALLTYPE *QueueTask )(
            ISpTaskManager * This,
                       ISpTask *pTask,
                       void *pvTaskData,
                       HANDLE hCompEvent,
                            DWORD *pdwGroupId,
                        DWORD *pTaskID);
        HRESULT ( STDMETHODCALLTYPE *CreateReoccurringTask )(
            ISpTaskManager * This,
                       ISpTask *pTask,
                       void *pvTaskData,
                       HANDLE hCompEvent,
                        ISpNotifySink **ppTaskCtrl);
        HRESULT ( STDMETHODCALLTYPE *CreateThreadControl )(
            ISpTaskManager * This,
                       ISpThreadTask *pTask,
                       void *pvTaskData,
                       long nPriority,
            _Outptr_ ISpThreadControl **ppTaskCtrl);
        HRESULT ( STDMETHODCALLTYPE *TerminateTask )(
            ISpTaskManager * This,
                       DWORD dwTaskId,
                       ULONG ulWaitPeriod);
        HRESULT ( STDMETHODCALLTYPE *TerminateTaskGroup )(
            ISpTaskManager * This,
                       DWORD dwGroupId,
                       ULONG ulWaitPeriod);
        END_INTERFACE
    } ISpTaskManagerVtbl;
    interface ISpTaskManager
    {
        CONST_VTBL struct ISpTaskManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetThreadPoolInfo(This,pPoolInfo) )
    ( (This)->lpVtbl -> GetThreadPoolInfo(This,pPoolInfo) )
    ( (This)->lpVtbl -> QueueTask(This,pTask,pvTaskData,hCompEvent,pdwGroupId,pTaskID) )
    ( (This)->lpVtbl -> CreateReoccurringTask(This,pTask,pvTaskData,hCompEvent,ppTaskCtrl) )
    ( (This)->lpVtbl -> CreateThreadControl(This,pTask,pvTaskData,nPriority,ppTaskCtrl) )
    ( (This)->lpVtbl -> TerminateTask(This,dwTaskId,ulWaitPeriod) )
    ( (This)->lpVtbl -> TerminateTaskGroup(This,dwGroupId,ulWaitPeriod) )
typedef
enum SPVSKIPTYPE
    {
        SPVST_SENTENCE = ( 1L << 0 )
    } SPVSKIPTYPE;
typedef
enum SPVESACTIONS
    {
        SPVES_CONTINUE = 0,
        SPVES_ABORT = ( 1L << 0 ) ,
        SPVES_SKIP = ( 1L << 1 ) ,
        SPVES_RATE = ( 1L << 2 ) ,
        SPVES_VOLUME = ( 1L << 3 )
    } SPVESACTIONS;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpTTSEngineSite;
    typedef struct ISpTTSEngineSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpTTSEngineSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpTTSEngineSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpTTSEngineSite * This);
        HRESULT ( STDMETHODCALLTYPE *AddEvents )(
            ISpTTSEngineSite * This,
                       const SPEVENT *pEventArray,
                       ULONG ulCount);
        HRESULT ( STDMETHODCALLTYPE *GetEventInterest )(
            ISpTTSEngineSite * This,
                        ULONGLONG *pullEventInterest);
        DWORD ( STDMETHODCALLTYPE *GetActions )(
            ISpTTSEngineSite * This);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            ISpTTSEngineSite * This,
                       const void *pBuff,
                       ULONG cb,
                        ULONG *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            ISpTTSEngineSite * This,
                        long *pRateAdjust);
        HRESULT ( STDMETHODCALLTYPE *GetVolume )(
            ISpTTSEngineSite * This,
                        USHORT *pusVolume);
        HRESULT ( STDMETHODCALLTYPE *GetSkipInfo )(
            ISpTTSEngineSite * This,
                        SPVSKIPTYPE *peType,
                        long *plNumItems);
        HRESULT ( STDMETHODCALLTYPE *CompleteSkip )(
            ISpTTSEngineSite * This,
                       long ulNumSkipped);
        END_INTERFACE
    } ISpTTSEngineSiteVtbl;
    interface ISpTTSEngineSite
    {
        CONST_VTBL struct ISpTTSEngineSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddEvents(This,pEventArray,ulCount) )
    ( (This)->lpVtbl -> GetEventInterest(This,pullEventInterest) )
    ( (This)->lpVtbl -> GetActions(This) )
    ( (This)->lpVtbl -> Write(This,pBuff,cb,pcbWritten) )
    ( (This)->lpVtbl -> GetRate(This,pRateAdjust) )
    ( (This)->lpVtbl -> GetVolume(This,pusVolume) )
    ( (This)->lpVtbl -> GetSkipInfo(This,peType,plNumItems) )
    ( (This)->lpVtbl -> CompleteSkip(This,ulNumSkipped) )
typedef struct SPVTEXTFRAG
    {
    struct SPVTEXTFRAG *pNext;
    SPVSTATE State;
    LPCWSTR pTextStart;
    ULONG ulTextLen;
    ULONG ulTextSrcOffset;
    } SPVTEXTFRAG;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpTTSEngine;
    typedef struct ISpTTSEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpTTSEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpTTSEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpTTSEngine * This);
        HRESULT ( STDMETHODCALLTYPE *Speak )(
            ISpTTSEngine * This,
                       DWORD dwSpeakFlags,
                       REFGUID rguidFormatId,
                       const WAVEFORMATEX *pWaveFormatEx,
                       const SPVTEXTFRAG *pTextFragList,
                       ISpTTSEngineSite *pOutputSite);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormat )(
            ISpTTSEngine * This,
                       const GUID *pTargetFmtId,
                       const WAVEFORMATEX *pTargetWaveFormatEx,
                        GUID *pOutputFormatId,
            _Outptr_ WAVEFORMATEX **ppCoMemOutputWaveFormatEx);
        END_INTERFACE
    } ISpTTSEngineVtbl;
    interface ISpTTSEngine
    {
        CONST_VTBL struct ISpTTSEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Speak(This,dwSpeakFlags,rguidFormatId,pWaveFormatEx,pTextFragList,pOutputSite) )
    ( (This)->lpVtbl -> GetOutputFormat(This,pTargetFmtId,pTargetWaveFormatEx,pOutputFormatId,ppCoMemOutputWaveFormatEx) )
typedef struct SPWORDENTRY
    {
    SPWORDHANDLE hWord;
    WORD LangID;
    WCHAR *pszDisplayText;
    WCHAR *pszLexicalForm;
    SPPHONEID *aPhoneId;
    void *pvClientContext;
    } SPWORDENTRY;
typedef struct SPRULEENTRY
    {
    SPRULEHANDLE hRule;
    SPSTATEHANDLE hInitialState;
    DWORD Attributes;
    void *pvClientRuleContext;
    void *pvClientGrammarContext;
    } SPRULEENTRY;
typedef
enum SPTRANSITIONTYPE
    {
        SPTRANSEPSILON = 0,
        SPTRANSWORD = ( SPTRANSEPSILON + 1 ) ,
        SPTRANSRULE = ( SPTRANSWORD + 1 ) ,
        SPTRANSTEXTBUF = ( SPTRANSRULE + 1 ) ,
        SPTRANSWILDCARD = ( SPTRANSTEXTBUF + 1 ) ,
        SPTRANSDICTATION = ( SPTRANSWILDCARD + 1 )
    } SPTRANSITIONTYPE;
typedef struct SPTRANSITIONENTRY
    {
    SPTRANSITIONID ID;
    SPSTATEHANDLE hNextState;
    BYTE Type;
    char RequiredConfidence;
    struct
        {
        DWORD fHasProperty;
        } ;
    float Weight;
    union
        {
        struct
            {
            SPSTATEHANDLE hRuleInitialState;
            SPRULEHANDLE hRule;
            void *pvClientRuleContext;
            } ;
        struct
            {
            SPWORDHANDLE hWord;
            void *pvClientWordContext;
            } ;
        struct
            {
            void *pvGrammarCookie;
            } ;
        } ;
    } SPTRANSITIONENTRY;
typedef struct SPTRANSITIONPROPERTY
    {
    LPCWSTR pszName;
    ULONG ulId;
    LPCWSTR pszValue;
    VARIANT vValue;
    } SPTRANSITIONPROPERTY;
typedef struct SPSTATEINFO
    {
    ULONG cAllocatedEntries;
    SPTRANSITIONENTRY *pTransitions;
    ULONG cEpsilons;
    ULONG cRules;
    ULONG cWords;
    ULONG cSpecialTransitions;
    } SPSTATEINFO;
typedef struct SPPATHENTRY
    {
    SPTRANSITIONID hTransition;
    SPPHRASEELEMENT elem;
    } SPPATHENTRY;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpCFGInterpreterSite;
    typedef struct ISpCFGInterpreterSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpCFGInterpreterSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpCFGInterpreterSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpCFGInterpreterSite * This);
        HRESULT ( STDMETHODCALLTYPE *AddTextReplacement )(
            ISpCFGInterpreterSite * This,
                       SPPHRASEREPLACEMENT *pReplace);
        HRESULT ( STDMETHODCALLTYPE *AddProperty )(
            ISpCFGInterpreterSite * This,
                       const SPPHRASEPROPERTY *pProperty);
        HRESULT ( STDMETHODCALLTYPE *GetResourceValue )(
            ISpCFGInterpreterSite * This,
                       LPCWSTR pszResourceName,
            _Outptr_ LPWSTR *ppCoMemResource);
        END_INTERFACE
    } ISpCFGInterpreterSiteVtbl;
    interface ISpCFGInterpreterSite
    {
        CONST_VTBL struct ISpCFGInterpreterSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddTextReplacement(This,pReplace) )
    ( (This)->lpVtbl -> AddProperty(This,pProperty) )
    ( (This)->lpVtbl -> GetResourceValue(This,pszResourceName,ppCoMemResource) )
EXTERN_C const IID IID_ISpCFGInterpreter;
    typedef struct ISpCFGInterpreterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpCFGInterpreter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpCFGInterpreter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpCFGInterpreter * This);
        HRESULT ( STDMETHODCALLTYPE *InitGrammar )(
            ISpCFGInterpreter * This,
                       LPCWSTR pszGrammarName,
                       const void **pvGrammarData);
        HRESULT ( STDMETHODCALLTYPE *Interpret )(
            ISpCFGInterpreter * This,
                       ISpPhraseBuilder *pPhrase,
                       const ULONG ulFirstElement,
                       const ULONG ulCountOfElements,
                       ISpCFGInterpreterSite *pSite);
        END_INTERFACE
    } ISpCFGInterpreterVtbl;
    interface ISpCFGInterpreter
    {
        CONST_VTBL struct ISpCFGInterpreterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitGrammar(This,pszGrammarName,pvGrammarData) )
    ( (This)->lpVtbl -> Interpret(This,pPhrase,ulFirstElement,ulCountOfElements,pSite) )
typedef
enum SPCFGNOTIFY
    {
        SPCFGN_ADD = 0,
        SPCFGN_REMOVE = ( SPCFGN_ADD + 1 ) ,
        SPCFGN_INVALIDATE = ( SPCFGN_REMOVE + 1 ) ,
        SPCFGN_ACTIVATE = ( SPCFGN_INVALIDATE + 1 ) ,
        SPCFGN_DEACTIVATE = ( SPCFGN_ACTIVATE + 1 )
    } SPCFGNOTIFY;
typedef
enum SPRESULTTYPE
    {
        SPRT_CFG = 0,
        SPRT_SLM = 1,
        SPRT_PROPRIETARY = 2,
        SPRT_FALSE_RECOGNITION = ( 1L << 2 ) ,
        SPRT_TYPE_MASK = 3,
        SPRT_EMULATED = ( 1L << 3 ) ,
        SPRT_EXTENDABLE_PARSE = ( 1L << 4 )
    } SPRESULTTYPE;
typedef struct tagSPPHRASEALT
    {
    ISpPhraseBuilder *pPhrase;
    ULONG ulStartElementInParent;
    ULONG cElementsInParent;
    ULONG cElementsInAlternate;
    void *pvAltExtra;
    ULONG cbAltExtra;
    } SPPHRASEALT;
typedef struct SPRECORESULTINFO
    {
    ULONG cbSize;
    SPRESULTTYPE eResultType;
    BOOL fHypothesis;
    BOOL fProprietaryAutoPause;
    ULONGLONG ullStreamPosStart;
    ULONGLONG ullStreamPosEnd;
    SPGRAMMARHANDLE hGrammar;
    ULONG ulSizeEngineData;
    void *pvEngineData;
    ISpPhraseBuilder *pPhrase;
    SPPHRASEALT *aPhraseAlts;
    ULONG ulNumAlts;
    } SPRECORESULTINFO;
#if 0
typedef struct SPRECORESULTINFOEX
    {
    ULONG cbSize;
    SPRESULTTYPE eResultType;
    BOOL fHypothesis;
    BOOL fProprietaryAutoPause;
    ULONGLONG ullStreamPosStart;
    ULONGLONG ullStreamPosEnd;
    SPGRAMMARHANDLE hGrammar;
    ULONG ulSizeEngineData;
    void *pvEngineData;
    ISpPhraseBuilder *pPhrase;
    SPPHRASEALT *aPhraseAlts;
    ULONG ulNumAlts;
    ULONGLONG ullStreamTimeStart;
    ULONGLONG ullStreamTimeEnd;
    } SPRECORESULTINFOEX;
#else
typedef struct SPRECORESULTINFOEX : public SPRECORESULTINFO
{
    ULONGLONG ullStreamTimeStart;
    ULONGLONG ullStreamTimeEnd;
} SPRECORESULTINFOEX;
#endif
typedef
enum SPWORDINFOOPT
    {
        SPWIO_NONE = 0,
        SPWIO_WANT_TEXT = 1
    } SPWORDINFOOPT;
typedef
enum SPRULEINFOOPT
    {
        SPRIO_NONE = 0
    } SPRULEINFOOPT;
typedef struct SPPARSEINFO
    {
    ULONG cbSize;
    SPRULEHANDLE hRule;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSize;
    ULONG cTransitions;
    SPPATHENTRY *pPath;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    BOOL fHypothesis;
    } SPPARSEINFO;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpSREngineSite;
    typedef struct ISpSREngineSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpSREngineSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpSREngineSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpSREngineSite * This);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpSREngineSite * This,
                       void *pv,
                       ULONG cb,
                        ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *DataAvailable )(
            ISpSREngineSite * This,
                        ULONG *pcb);
        HRESULT ( STDMETHODCALLTYPE *SetBufferNotifySize )(
            ISpSREngineSite * This,
                       ULONG cbSize);
        HRESULT ( STDMETHODCALLTYPE *ParseFromTransitions )(
            ISpSREngineSite * This,
                       const SPPARSEINFO *pParseInfo,
                        ISpPhraseBuilder **ppNewPhrase);
        HRESULT ( STDMETHODCALLTYPE *Recognition )(
            ISpSREngineSite * This,
                       const SPRECORESULTINFO *pResultInfo);
        HRESULT ( STDMETHODCALLTYPE *AddEvent )(
            ISpSREngineSite * This,
                       const SPEVENT *pEvent,
                       SPRECOCONTEXTHANDLE hSAPIRecoContext);
        HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            ISpSREngineSite * This,
                       ULONGLONG ullProcessedThruPos);
        HRESULT ( STDMETHODCALLTYPE *GetWordInfo )(
            ISpSREngineSite * This,
                            SPWORDENTRY *pWordEntry,
                       SPWORDINFOOPT Options);
        HRESULT ( STDMETHODCALLTYPE *SetWordClientContext )(
            ISpSREngineSite * This,
                       SPWORDHANDLE hWord,
                       void *pvClientContext);
        HRESULT ( STDMETHODCALLTYPE *GetRuleInfo )(
            ISpSREngineSite * This,
                            SPRULEENTRY *pRuleEntry,
                       SPRULEINFOOPT Options);
        HRESULT ( STDMETHODCALLTYPE *SetRuleClientContext )(
            ISpSREngineSite * This,
                       SPRULEHANDLE hRule,
                       void *pvClientContext);
        HRESULT ( STDMETHODCALLTYPE *GetStateInfo )(
            ISpSREngineSite * This,
                       SPSTATEHANDLE hState,
                        SPSTATEINFO *pStateInfo);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            ISpSREngineSite * This,
                       SPRULEHANDLE hRule,
                       LPCWSTR pszResourceName,
            _Outptr_ LPWSTR *ppCoMemResource);
        HRESULT ( STDMETHODCALLTYPE *GetTransitionProperty )(
            ISpSREngineSite * This,
                       SPTRANSITIONID ID,
            _Outptr_ SPTRANSITIONPROPERTY **ppCoMemProperty);
        HRESULT ( STDMETHODCALLTYPE *IsAlternate )(
            ISpSREngineSite * This,
                       SPRULEHANDLE hRule,
                       SPRULEHANDLE hAltRule);
        HRESULT ( STDMETHODCALLTYPE *GetMaxAlternates )(
            ISpSREngineSite * This,
                       SPRULEHANDLE hRule,
                        ULONG *pulNumAlts);
        HRESULT ( STDMETHODCALLTYPE *GetContextMaxAlternates )(
            ISpSREngineSite * This,
                       SPRECOCONTEXTHANDLE hContext,
                        ULONG *pulNumAlts);
        HRESULT ( STDMETHODCALLTYPE *UpdateRecoPos )(
            ISpSREngineSite * This,
                       ULONGLONG ullCurrentRecoPos);
        END_INTERFACE
    } ISpSREngineSiteVtbl;
    interface ISpSREngineSite
    {
        CONST_VTBL struct ISpSREngineSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> DataAvailable(This,pcb) )
    ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) )
    ( (This)->lpVtbl -> ParseFromTransitions(This,pParseInfo,ppNewPhrase) )
    ( (This)->lpVtbl -> Recognition(This,pResultInfo) )
    ( (This)->lpVtbl -> AddEvent(This,pEvent,hSAPIRecoContext) )
    ( (This)->lpVtbl -> Synchronize(This,ullProcessedThruPos) )
    ( (This)->lpVtbl -> GetWordInfo(This,pWordEntry,Options) )
    ( (This)->lpVtbl -> SetWordClientContext(This,hWord,pvClientContext) )
    ( (This)->lpVtbl -> GetRuleInfo(This,pRuleEntry,Options) )
    ( (This)->lpVtbl -> SetRuleClientContext(This,hRule,pvClientContext) )
    ( (This)->lpVtbl -> GetStateInfo(This,hState,pStateInfo) )
    ( (This)->lpVtbl -> GetResource(This,hRule,pszResourceName,ppCoMemResource) )
    ( (This)->lpVtbl -> GetTransitionProperty(This,ID,ppCoMemProperty) )
    ( (This)->lpVtbl -> IsAlternate(This,hRule,hAltRule) )
    ( (This)->lpVtbl -> GetMaxAlternates(This,hRule,pulNumAlts) )
    ( (This)->lpVtbl -> GetContextMaxAlternates(This,hContext,pulNumAlts) )
    ( (This)->lpVtbl -> UpdateRecoPos(This,ullCurrentRecoPos) )
EXTERN_C const IID IID_ISpSREngineSite2;
    typedef struct ISpSREngineSite2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpSREngineSite2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpSREngineSite2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpSREngineSite2 * This);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpSREngineSite2 * This,
                       void *pv,
                       ULONG cb,
                        ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *DataAvailable )(
            ISpSREngineSite2 * This,
                        ULONG *pcb);
        HRESULT ( STDMETHODCALLTYPE *SetBufferNotifySize )(
            ISpSREngineSite2 * This,
                       ULONG cbSize);
        HRESULT ( STDMETHODCALLTYPE *ParseFromTransitions )(
            ISpSREngineSite2 * This,
                       const SPPARSEINFO *pParseInfo,
                        ISpPhraseBuilder **ppNewPhrase);
        HRESULT ( STDMETHODCALLTYPE *Recognition )(
            ISpSREngineSite2 * This,
                       const SPRECORESULTINFO *pResultInfo);
        HRESULT ( STDMETHODCALLTYPE *AddEvent )(
            ISpSREngineSite2 * This,
                       const SPEVENT *pEvent,
                       SPRECOCONTEXTHANDLE hSAPIRecoContext);
        HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            ISpSREngineSite2 * This,
                       ULONGLONG ullProcessedThruPos);
        HRESULT ( STDMETHODCALLTYPE *GetWordInfo )(
            ISpSREngineSite2 * This,
                            SPWORDENTRY *pWordEntry,
                       SPWORDINFOOPT Options);
        HRESULT ( STDMETHODCALLTYPE *SetWordClientContext )(
            ISpSREngineSite2 * This,
                       SPWORDHANDLE hWord,
                       void *pvClientContext);
        HRESULT ( STDMETHODCALLTYPE *GetRuleInfo )(
            ISpSREngineSite2 * This,
                            SPRULEENTRY *pRuleEntry,
                       SPRULEINFOOPT Options);
        HRESULT ( STDMETHODCALLTYPE *SetRuleClientContext )(
            ISpSREngineSite2 * This,
                       SPRULEHANDLE hRule,
                       void *pvClientContext);
        HRESULT ( STDMETHODCALLTYPE *GetStateInfo )(
            ISpSREngineSite2 * This,
                       SPSTATEHANDLE hState,
                        SPSTATEINFO *pStateInfo);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            ISpSREngineSite2 * This,
                       SPRULEHANDLE hRule,
                       LPCWSTR pszResourceName,
            _Outptr_ LPWSTR *ppCoMemResource);
        HRESULT ( STDMETHODCALLTYPE *GetTransitionProperty )(
            ISpSREngineSite2 * This,
                       SPTRANSITIONID ID,
            _Outptr_ SPTRANSITIONPROPERTY **ppCoMemProperty);
        HRESULT ( STDMETHODCALLTYPE *IsAlternate )(
            ISpSREngineSite2 * This,
                       SPRULEHANDLE hRule,
                       SPRULEHANDLE hAltRule);
        HRESULT ( STDMETHODCALLTYPE *GetMaxAlternates )(
            ISpSREngineSite2 * This,
                       SPRULEHANDLE hRule,
                        ULONG *pulNumAlts);
        HRESULT ( STDMETHODCALLTYPE *GetContextMaxAlternates )(
            ISpSREngineSite2 * This,
                       SPRECOCONTEXTHANDLE hContext,
                        ULONG *pulNumAlts);
        HRESULT ( STDMETHODCALLTYPE *UpdateRecoPos )(
            ISpSREngineSite2 * This,
                       ULONGLONG ullCurrentRecoPos);
        HRESULT ( STDMETHODCALLTYPE *AddEventEx )(
            ISpSREngineSite2 * This,
                       const SPEVENTEX *pEvent,
                       SPRECOCONTEXTHANDLE hSAPIRecoContext);
        HRESULT ( STDMETHODCALLTYPE *UpdateRecoPosEx )(
            ISpSREngineSite2 * This,
                       ULONGLONG ullCurrentRecoPos,
                       ULONGLONG ullCurrentRecoTime);
        HRESULT ( STDMETHODCALLTYPE *GetRuleTransition )(
            ISpSREngineSite2 * This,
                       ULONG ulGrammarID,
                       ULONG RuleIndex,
                        SPTRANSITIONENTRY *pTrans);
        HRESULT ( STDMETHODCALLTYPE *RecognitionEx )(
            ISpSREngineSite2 * This,
                       const SPRECORESULTINFOEX *pResultInfo);
        END_INTERFACE
    } ISpSREngineSite2Vtbl;
    interface ISpSREngineSite2
    {
        CONST_VTBL struct ISpSREngineSite2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> DataAvailable(This,pcb) )
    ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) )
    ( (This)->lpVtbl -> ParseFromTransitions(This,pParseInfo,ppNewPhrase) )
    ( (This)->lpVtbl -> Recognition(This,pResultInfo) )
    ( (This)->lpVtbl -> AddEvent(This,pEvent,hSAPIRecoContext) )
    ( (This)->lpVtbl -> Synchronize(This,ullProcessedThruPos) )
    ( (This)->lpVtbl -> GetWordInfo(This,pWordEntry,Options) )
    ( (This)->lpVtbl -> SetWordClientContext(This,hWord,pvClientContext) )
    ( (This)->lpVtbl -> GetRuleInfo(This,pRuleEntry,Options) )
    ( (This)->lpVtbl -> SetRuleClientContext(This,hRule,pvClientContext) )
    ( (This)->lpVtbl -> GetStateInfo(This,hState,pStateInfo) )
    ( (This)->lpVtbl -> GetResource(This,hRule,pszResourceName,ppCoMemResource) )
    ( (This)->lpVtbl -> GetTransitionProperty(This,ID,ppCoMemProperty) )
    ( (This)->lpVtbl -> IsAlternate(This,hRule,hAltRule) )
    ( (This)->lpVtbl -> GetMaxAlternates(This,hRule,pulNumAlts) )
    ( (This)->lpVtbl -> GetContextMaxAlternates(This,hContext,pulNumAlts) )
    ( (This)->lpVtbl -> UpdateRecoPos(This,ullCurrentRecoPos) )
    ( (This)->lpVtbl -> AddEventEx(This,pEvent,hSAPIRecoContext) )
    ( (This)->lpVtbl -> UpdateRecoPosEx(This,ullCurrentRecoPos,ullCurrentRecoTime) )
    ( (This)->lpVtbl -> GetRuleTransition(This,ulGrammarID,RuleIndex,pTrans) )
    ( (This)->lpVtbl -> RecognitionEx(This,pResultInfo) )
typedef
enum SPPROPSRC
    {
        SPPROPSRC_RECO_INST = 0,
        SPPROPSRC_RECO_CTX = ( SPPROPSRC_RECO_INST + 1 ) ,
        SPPROPSRC_RECO_GRAMMAR = ( SPPROPSRC_RECO_CTX + 1 )
    } SPPROPSRC;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpSREngine;
    typedef struct ISpSREngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpSREngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpSREngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpSREngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetSite )(
            ISpSREngine * This,
                       ISpSREngineSite *pSite);
        HRESULT ( STDMETHODCALLTYPE *GetInputAudioFormat )(
            ISpSREngine * This,
                       const GUID *pguidSourceFormatId,
                       const WAVEFORMATEX *pSourceWaveFormatEx,
                        GUID *pguidDesiredFormatId,
            _Outptr_ WAVEFORMATEX **ppCoMemDesiredWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *RecognizeStream )(
            ISpSREngine * This,
                       REFGUID rguidFmtId,
                       const WAVEFORMATEX *pWaveFormatEx,
                       HANDLE hRequestSync,
                       HANDLE hDataAvailable,
                       HANDLE hExit,
                       BOOL fNewAudioStream,
                       BOOL fRealTimeAudio,
                       ISpObjectToken *pAudioObjectToken);
        HRESULT ( STDMETHODCALLTYPE *SetRecoProfile )(
            ISpSREngine * This,
                       ISpObjectToken *pProfile);
        HRESULT ( STDMETHODCALLTYPE *OnCreateGrammar )(
            ISpSREngine * This,
                       void *pvEngineRecoContext,
                       SPGRAMMARHANDLE hSAPIGrammar,
            _Outptr_ void **ppvEngineGrammarContext);
        HRESULT ( STDMETHODCALLTYPE *OnDeleteGrammar )(
            ISpSREngine * This,
                       void *pvEngineGrammar);
        HRESULT ( STDMETHODCALLTYPE *LoadProprietaryGrammar )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                       REFGUID rguidParam,
                               LPCWSTR pszStringParam,
                       const void *pvDataParam,
                       ULONG ulDataSize,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *UnloadProprietaryGrammar )(
            ISpSREngine * This,
                       void *pvEngineGrammar);
        HRESULT ( STDMETHODCALLTYPE *SetProprietaryRuleState )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                               LPCWSTR pszName,
                       void *pReserved,
                       SPRULESTATE NewState,
                        ULONG *pcRulesChanged);
        HRESULT ( STDMETHODCALLTYPE *SetProprietaryRuleIdState )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                       DWORD dwRuleId,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *LoadSLM )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                               LPCWSTR pszTopicName);
        HRESULT ( STDMETHODCALLTYPE *UnloadSLM )(
            ISpSREngine * This,
                       void *pvEngineGrammar);
        HRESULT ( STDMETHODCALLTYPE *SetSLMState )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *SetWordSequenceData )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
            _In_reads_(cchText) const WCHAR *pText,
                       ULONG cchText,
                       const SPTEXTSELECTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *SetTextSelection )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                       const SPTEXTSELECTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *IsPronounceable )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                               LPCWSTR pszWord,
                        SPWORDPRONOUNCEABLE *pWordPronounceable);
        HRESULT ( STDMETHODCALLTYPE *OnCreateRecoContext )(
            ISpSREngine * This,
                       SPRECOCONTEXTHANDLE hSAPIRecoContext,
                        void **ppvEngineContext);
        HRESULT ( STDMETHODCALLTYPE *OnDeleteRecoContext )(
            ISpSREngine * This,
                       void *pvEngineContext);
        HRESULT ( STDMETHODCALLTYPE *PrivateCall )(
            ISpSREngine * This,
                       void *pvEngineContext,
                            PVOID pCallFrame,
                       ULONG ulCallFrameSize);
        HRESULT ( STDMETHODCALLTYPE *SetAdaptationData )(
            ISpSREngine * This,
                       void *pvEngineContext,
            _In_reads_(cch) const WCHAR *pAdaptationData,
                       const ULONG cch);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyNum )(
            ISpSREngine * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       const WCHAR *pName,
                       LONG lValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNum )(
            ISpSREngine * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       const WCHAR *pName,
                        LONG *lValue);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyString )(
            ISpSREngine * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       LPCWSTR pName,
                       LPCWSTR pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyString )(
            ISpSREngine * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       LPCWSTR pName,
            _Outptr_ LPWSTR *ppCoMemValue);
        HRESULT ( STDMETHODCALLTYPE *SetGrammarState )(
            ISpSREngine * This,
                       void *pvEngineGrammar,
                       SPGRAMMARSTATE eGrammarState);
        HRESULT ( STDMETHODCALLTYPE *WordNotify )(
            ISpSREngine * This,
                       SPCFGNOTIFY Action,
                       ULONG cWords,
                       const SPWORDENTRY *pWords);
        HRESULT ( STDMETHODCALLTYPE *RuleNotify )(
            ISpSREngine * This,
                       SPCFGNOTIFY Action,
                       ULONG cRules,
                       const SPRULEENTRY *pRules);
        HRESULT ( STDMETHODCALLTYPE *PrivateCallEx )(
            ISpSREngine * This,
                       void *pvEngineContext,
                       const void *pInCallFrame,
                       ULONG ulInCallFrameSize,
                        void **ppvCoMemResponse,
                        ULONG *pulResponseSize);
        HRESULT ( STDMETHODCALLTYPE *SetContextState )(
            ISpSREngine * This,
                       void *pvEngineContext,
                       SPCONTEXTSTATE eContextState);
        END_INTERFACE
    } ISpSREngineVtbl;
    interface ISpSREngine
    {
        CONST_VTBL struct ISpSREngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSite(This,pSite) )
    ( (This)->lpVtbl -> GetInputAudioFormat(This,pguidSourceFormatId,pSourceWaveFormatEx,pguidDesiredFormatId,ppCoMemDesiredWaveFormatEx) )
    ( (This)->lpVtbl -> RecognizeStream(This,rguidFmtId,pWaveFormatEx,hRequestSync,hDataAvailable,hExit,fNewAudioStream,fRealTimeAudio,pAudioObjectToken) )
    ( (This)->lpVtbl -> SetRecoProfile(This,pProfile) )
    ( (This)->lpVtbl -> OnCreateGrammar(This,pvEngineRecoContext,hSAPIGrammar,ppvEngineGrammarContext) )
    ( (This)->lpVtbl -> OnDeleteGrammar(This,pvEngineGrammar) )
    ( (This)->lpVtbl -> LoadProprietaryGrammar(This,pvEngineGrammar,rguidParam,pszStringParam,pvDataParam,ulDataSize,Options) )
    ( (This)->lpVtbl -> UnloadProprietaryGrammar(This,pvEngineGrammar) )
    ( (This)->lpVtbl -> SetProprietaryRuleState(This,pvEngineGrammar,pszName,pReserved,NewState,pcRulesChanged) )
    ( (This)->lpVtbl -> SetProprietaryRuleIdState(This,pvEngineGrammar,dwRuleId,NewState) )
    ( (This)->lpVtbl -> LoadSLM(This,pvEngineGrammar,pszTopicName) )
    ( (This)->lpVtbl -> UnloadSLM(This,pvEngineGrammar) )
    ( (This)->lpVtbl -> SetSLMState(This,pvEngineGrammar,NewState) )
    ( (This)->lpVtbl -> SetWordSequenceData(This,pvEngineGrammar,pText,cchText,pInfo) )
    ( (This)->lpVtbl -> SetTextSelection(This,pvEngineGrammar,pInfo) )
    ( (This)->lpVtbl -> IsPronounceable(This,pvEngineGrammar,pszWord,pWordPronounceable) )
    ( (This)->lpVtbl -> OnCreateRecoContext(This,hSAPIRecoContext,ppvEngineContext) )
    ( (This)->lpVtbl -> OnDeleteRecoContext(This,pvEngineContext) )
    ( (This)->lpVtbl -> PrivateCall(This,pvEngineContext,pCallFrame,ulCallFrameSize) )
    ( (This)->lpVtbl -> SetAdaptationData(This,pvEngineContext,pAdaptationData,cch) )
    ( (This)->lpVtbl -> SetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) )
    ( (This)->lpVtbl -> GetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) )
    ( (This)->lpVtbl -> SetPropertyString(This,eSrc,pvSrcObj,pName,pValue) )
    ( (This)->lpVtbl -> GetPropertyString(This,eSrc,pvSrcObj,pName,ppCoMemValue) )
    ( (This)->lpVtbl -> SetGrammarState(This,pvEngineGrammar,eGrammarState) )
    ( (This)->lpVtbl -> WordNotify(This,Action,cWords,pWords) )
    ( (This)->lpVtbl -> RuleNotify(This,Action,cRules,pRules) )
    ( (This)->lpVtbl -> PrivateCallEx(This,pvEngineContext,pInCallFrame,ulInCallFrameSize,ppvCoMemResponse,pulResponseSize) )
    ( (This)->lpVtbl -> SetContextState(This,pvEngineContext,eContextState) )
EXTERN_C const IID IID_ISpSREngine2;
    typedef struct ISpSREngine2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpSREngine2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpSREngine2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpSREngine2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetSite )(
            ISpSREngine2 * This,
                       ISpSREngineSite *pSite);
        HRESULT ( STDMETHODCALLTYPE *GetInputAudioFormat )(
            ISpSREngine2 * This,
                       const GUID *pguidSourceFormatId,
                       const WAVEFORMATEX *pSourceWaveFormatEx,
                        GUID *pguidDesiredFormatId,
            _Outptr_ WAVEFORMATEX **ppCoMemDesiredWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *RecognizeStream )(
            ISpSREngine2 * This,
                       REFGUID rguidFmtId,
                       const WAVEFORMATEX *pWaveFormatEx,
                       HANDLE hRequestSync,
                       HANDLE hDataAvailable,
                       HANDLE hExit,
                       BOOL fNewAudioStream,
                       BOOL fRealTimeAudio,
                       ISpObjectToken *pAudioObjectToken);
        HRESULT ( STDMETHODCALLTYPE *SetRecoProfile )(
            ISpSREngine2 * This,
                       ISpObjectToken *pProfile);
        HRESULT ( STDMETHODCALLTYPE *OnCreateGrammar )(
            ISpSREngine2 * This,
                       void *pvEngineRecoContext,
                       SPGRAMMARHANDLE hSAPIGrammar,
            _Outptr_ void **ppvEngineGrammarContext);
        HRESULT ( STDMETHODCALLTYPE *OnDeleteGrammar )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar);
        HRESULT ( STDMETHODCALLTYPE *LoadProprietaryGrammar )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       REFGUID rguidParam,
                               LPCWSTR pszStringParam,
                       const void *pvDataParam,
                       ULONG ulDataSize,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *UnloadProprietaryGrammar )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar);
        HRESULT ( STDMETHODCALLTYPE *SetProprietaryRuleState )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                               LPCWSTR pszName,
                       void *pReserved,
                       SPRULESTATE NewState,
                        ULONG *pcRulesChanged);
        HRESULT ( STDMETHODCALLTYPE *SetProprietaryRuleIdState )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       DWORD dwRuleId,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *LoadSLM )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                               LPCWSTR pszTopicName);
        HRESULT ( STDMETHODCALLTYPE *UnloadSLM )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar);
        HRESULT ( STDMETHODCALLTYPE *SetSLMState )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *SetWordSequenceData )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
            _In_reads_(cchText) const WCHAR *pText,
                       ULONG cchText,
                       const SPTEXTSELECTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *SetTextSelection )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       const SPTEXTSELECTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *IsPronounceable )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                               LPCWSTR pszWord,
                        SPWORDPRONOUNCEABLE *pWordPronounceable);
        HRESULT ( STDMETHODCALLTYPE *OnCreateRecoContext )(
            ISpSREngine2 * This,
                       SPRECOCONTEXTHANDLE hSAPIRecoContext,
                        void **ppvEngineContext);
        HRESULT ( STDMETHODCALLTYPE *OnDeleteRecoContext )(
            ISpSREngine2 * This,
                       void *pvEngineContext);
        HRESULT ( STDMETHODCALLTYPE *PrivateCall )(
            ISpSREngine2 * This,
                       void *pvEngineContext,
                            PVOID pCallFrame,
                       ULONG ulCallFrameSize);
        HRESULT ( STDMETHODCALLTYPE *SetAdaptationData )(
            ISpSREngine2 * This,
                       void *pvEngineContext,
            _In_reads_(cch) const WCHAR *pAdaptationData,
                       const ULONG cch);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyNum )(
            ISpSREngine2 * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       const WCHAR *pName,
                       LONG lValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNum )(
            ISpSREngine2 * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       const WCHAR *pName,
                        LONG *lValue);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyString )(
            ISpSREngine2 * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       LPCWSTR pName,
                       LPCWSTR pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyString )(
            ISpSREngine2 * This,
                       SPPROPSRC eSrc,
                       void *pvSrcObj,
                       LPCWSTR pName,
            _Outptr_ LPWSTR *ppCoMemValue);
        HRESULT ( STDMETHODCALLTYPE *SetGrammarState )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       SPGRAMMARSTATE eGrammarState);
        HRESULT ( STDMETHODCALLTYPE *WordNotify )(
            ISpSREngine2 * This,
                       SPCFGNOTIFY Action,
                       ULONG cWords,
                       const SPWORDENTRY *pWords);
        HRESULT ( STDMETHODCALLTYPE *RuleNotify )(
            ISpSREngine2 * This,
                       SPCFGNOTIFY Action,
                       ULONG cRules,
                       const SPRULEENTRY *pRules);
        HRESULT ( STDMETHODCALLTYPE *PrivateCallEx )(
            ISpSREngine2 * This,
                       void *pvEngineContext,
                       const void *pInCallFrame,
                       ULONG ulInCallFrameSize,
                        void **ppvCoMemResponse,
                        ULONG *pulResponseSize);
        HRESULT ( STDMETHODCALLTYPE *SetContextState )(
            ISpSREngine2 * This,
                       void *pvEngineContext,
                       SPCONTEXTSTATE eContextState);
        HRESULT ( STDMETHODCALLTYPE *PrivateCallImmediate )(
            ISpSREngine2 * This,
                       void *pvEngineContext,
                       const void *pInCallFrame,
                       ULONG ulInCallFrameSize,
            _Outptr_ void **ppvCoMemResponse,
                        ULONG *pulResponseSize);
        HRESULT ( STDMETHODCALLTYPE *SetAdaptationData2 )(
            ISpSREngine2 * This,
                       void *pvEngineContext,
            _In_reads_(cch) const WCHAR *pAdaptationData,
                       const ULONG cch,
                       LPCWSTR pTopicName,
                       SPADAPTATIONSETTINGS eSettings,
                       SPADAPTATIONRELEVANCE eRelevance);
        HRESULT ( STDMETHODCALLTYPE *SetGrammarPrefix )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
            _In_opt_ LPCWSTR pszPrefix,
                       BOOL fIsPrefixRequired);
        HRESULT ( STDMETHODCALLTYPE *SetRulePriority )(
            ISpSREngine2 * This,
                       SPRULEHANDLE hRule,
                       void *pvClientRuleContext,
                       int nRulePriority);
        HRESULT ( STDMETHODCALLTYPE *EmulateRecognition )(
            ISpSREngine2 * This,
                       ISpPhrase *pPhrase,
                       DWORD dwCompareFlags);
        HRESULT ( STDMETHODCALLTYPE *SetSLMWeight )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       float flWeight);
        HRESULT ( STDMETHODCALLTYPE *SetRuleWeight )(
            ISpSREngine2 * This,
                       SPRULEHANDLE hRule,
                       void *pvClientRuleContext,
                       float flWeight);
        HRESULT ( STDMETHODCALLTYPE *SetTrainingState )(
            ISpSREngine2 * This,
                       BOOL fDoingTraining,
                       BOOL fAdaptFromTrainingData);
        HRESULT ( STDMETHODCALLTYPE *ResetAcousticModelAdaptation )(
            ISpSREngine2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnLoadCFG )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       const SPBINARYGRAMMAR *pGrammarData,
                       ULONG ulGrammarID);
        HRESULT ( STDMETHODCALLTYPE *OnUnloadCFG )(
            ISpSREngine2 * This,
                       void *pvEngineGrammar,
                       ULONG ulGrammarID);
        END_INTERFACE
    } ISpSREngine2Vtbl;
    interface ISpSREngine2
    {
        CONST_VTBL struct ISpSREngine2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSite(This,pSite) )
    ( (This)->lpVtbl -> GetInputAudioFormat(This,pguidSourceFormatId,pSourceWaveFormatEx,pguidDesiredFormatId,ppCoMemDesiredWaveFormatEx) )
    ( (This)->lpVtbl -> RecognizeStream(This,rguidFmtId,pWaveFormatEx,hRequestSync,hDataAvailable,hExit,fNewAudioStream,fRealTimeAudio,pAudioObjectToken) )
    ( (This)->lpVtbl -> SetRecoProfile(This,pProfile) )
    ( (This)->lpVtbl -> OnCreateGrammar(This,pvEngineRecoContext,hSAPIGrammar,ppvEngineGrammarContext) )
    ( (This)->lpVtbl -> OnDeleteGrammar(This,pvEngineGrammar) )
    ( (This)->lpVtbl -> LoadProprietaryGrammar(This,pvEngineGrammar,rguidParam,pszStringParam,pvDataParam,ulDataSize,Options) )
    ( (This)->lpVtbl -> UnloadProprietaryGrammar(This,pvEngineGrammar) )
    ( (This)->lpVtbl -> SetProprietaryRuleState(This,pvEngineGrammar,pszName,pReserved,NewState,pcRulesChanged) )
    ( (This)->lpVtbl -> SetProprietaryRuleIdState(This,pvEngineGrammar,dwRuleId,NewState) )
    ( (This)->lpVtbl -> LoadSLM(This,pvEngineGrammar,pszTopicName) )
    ( (This)->lpVtbl -> UnloadSLM(This,pvEngineGrammar) )
    ( (This)->lpVtbl -> SetSLMState(This,pvEngineGrammar,NewState) )
    ( (This)->lpVtbl -> SetWordSequenceData(This,pvEngineGrammar,pText,cchText,pInfo) )
    ( (This)->lpVtbl -> SetTextSelection(This,pvEngineGrammar,pInfo) )
    ( (This)->lpVtbl -> IsPronounceable(This,pvEngineGrammar,pszWord,pWordPronounceable) )
    ( (This)->lpVtbl -> OnCreateRecoContext(This,hSAPIRecoContext,ppvEngineContext) )
    ( (This)->lpVtbl -> OnDeleteRecoContext(This,pvEngineContext) )
    ( (This)->lpVtbl -> PrivateCall(This,pvEngineContext,pCallFrame,ulCallFrameSize) )
    ( (This)->lpVtbl -> SetAdaptationData(This,pvEngineContext,pAdaptationData,cch) )
    ( (This)->lpVtbl -> SetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) )
    ( (This)->lpVtbl -> GetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) )
    ( (This)->lpVtbl -> SetPropertyString(This,eSrc,pvSrcObj,pName,pValue) )
    ( (This)->lpVtbl -> GetPropertyString(This,eSrc,pvSrcObj,pName,ppCoMemValue) )
    ( (This)->lpVtbl -> SetGrammarState(This,pvEngineGrammar,eGrammarState) )
    ( (This)->lpVtbl -> WordNotify(This,Action,cWords,pWords) )
    ( (This)->lpVtbl -> RuleNotify(This,Action,cRules,pRules) )
    ( (This)->lpVtbl -> PrivateCallEx(This,pvEngineContext,pInCallFrame,ulInCallFrameSize,ppvCoMemResponse,pulResponseSize) )
    ( (This)->lpVtbl -> SetContextState(This,pvEngineContext,eContextState) )
    ( (This)->lpVtbl -> PrivateCallImmediate(This,pvEngineContext,pInCallFrame,ulInCallFrameSize,ppvCoMemResponse,pulResponseSize) )
    ( (This)->lpVtbl -> SetAdaptationData2(This,pvEngineContext,pAdaptationData,cch,pTopicName,eSettings,eRelevance) )
    ( (This)->lpVtbl -> SetGrammarPrefix(This,pvEngineGrammar,pszPrefix,fIsPrefixRequired) )
    ( (This)->lpVtbl -> SetRulePriority(This,hRule,pvClientRuleContext,nRulePriority) )
    ( (This)->lpVtbl -> EmulateRecognition(This,pPhrase,dwCompareFlags) )
    ( (This)->lpVtbl -> SetSLMWeight(This,pvEngineGrammar,flWeight) )
    ( (This)->lpVtbl -> SetRuleWeight(This,hRule,pvClientRuleContext,flWeight) )
    ( (This)->lpVtbl -> SetTrainingState(This,fDoingTraining,fAdaptFromTrainingData) )
    ( (This)->lpVtbl -> ResetAcousticModelAdaptation(This) )
    ( (This)->lpVtbl -> OnLoadCFG(This,pvEngineGrammar,pGrammarData,ulGrammarID) )
    ( (This)->lpVtbl -> OnUnloadCFG(This,pvEngineGrammar,ulGrammarID) )
typedef struct tagSPPHRASEALTREQUEST
    {
    ULONG ulStartElement;
    ULONG cElements;
    ULONG ulRequestAltCount;
    void *pvResultExtra;
    ULONG cbResultExtra;
    ISpPhrase *pPhrase;
    ISpRecoContext *pRecoContext;
    } SPPHRASEALTREQUEST;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpSRAlternates;
    typedef struct ISpSRAlternatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpSRAlternates * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpSRAlternates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpSRAlternates * This);
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )(
            ISpSRAlternates * This,
                       SPPHRASEALTREQUEST *pAltRequest,
                        SPPHRASEALT **ppAlts,
                        ULONG *pcAlts);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpSRAlternates * This,
                       SPPHRASEALTREQUEST *pAltRequest,
                       SPPHRASEALT *pAlt,
                        void **ppvResultExtra,
                        ULONG *pcbResultExtra);
        END_INTERFACE
    } ISpSRAlternatesVtbl;
    interface ISpSRAlternates
    {
        CONST_VTBL struct ISpSRAlternatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAlternates(This,pAltRequest,ppAlts,pcAlts) )
    ( (This)->lpVtbl -> Commit(This,pAltRequest,pAlt,ppvResultExtra,pcbResultExtra) )
EXTERN_C const IID IID_ISpSRAlternates2;
    typedef struct ISpSRAlternates2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpSRAlternates2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpSRAlternates2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpSRAlternates2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )(
            ISpSRAlternates2 * This,
                       SPPHRASEALTREQUEST *pAltRequest,
                        SPPHRASEALT **ppAlts,
                        ULONG *pcAlts);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpSRAlternates2 * This,
                       SPPHRASEALTREQUEST *pAltRequest,
                       SPPHRASEALT *pAlt,
                        void **ppvResultExtra,
                        ULONG *pcbResultExtra);
        HRESULT ( STDMETHODCALLTYPE *CommitText )(
            ISpSRAlternates2 * This,
                       SPPHRASEALTREQUEST *pAltRequest,
            _In_opt_ LPCWSTR pcszNewText,
                       SPCOMMITFLAGS commitFlags);
        END_INTERFACE
    } ISpSRAlternates2Vtbl;
    interface ISpSRAlternates2
    {
        CONST_VTBL struct ISpSRAlternates2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAlternates(This,pAltRequest,ppAlts,pcAlts) )
    ( (This)->lpVtbl -> Commit(This,pAltRequest,pAlt,ppvResultExtra,pcbResultExtra) )
    ( (This)->lpVtbl -> CommitText(This,pAltRequest,pcszNewText,commitFlags) )
EXTERN_C const IID IID__ISpPrivateEngineCall;
    typedef struct _ISpPrivateEngineCallVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            _ISpPrivateEngineCall * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            _ISpPrivateEngineCall * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            _ISpPrivateEngineCall * This);
        HRESULT ( STDMETHODCALLTYPE *CallEngine )(
            _ISpPrivateEngineCall * This,
            _Inout_updates_bytes_(ulCallFrameSize) void *pCallFrame,
                       ULONG ulCallFrameSize);
        HRESULT ( STDMETHODCALLTYPE *CallEngineEx )(
            _ISpPrivateEngineCall * This,
            _In_reads_bytes_(ulInFrameSize) const void *pInFrame,
                       ULONG ulInFrameSize,
            _Outptr_result_buffer_maybenull_(*pulOutFrameSize) void **ppCoMemOutFrame,
            _Out_writes_(1) ULONG *pulOutFrameSize);
        END_INTERFACE
    } _ISpPrivateEngineCallVtbl;
    interface _ISpPrivateEngineCall
    {
        CONST_VTBL struct _ISpPrivateEngineCallVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CallEngine(This,pCallFrame,ulCallFrameSize) )
    ( (This)->lpVtbl -> CallEngineEx(This,pInFrame,ulInFrameSize,ppCoMemOutFrame,pulOutFrameSize) )
EXTERN_C const IID IID_ISpPrivateEngineCallEx;
    typedef struct ISpPrivateEngineCallExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpPrivateEngineCallEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpPrivateEngineCallEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpPrivateEngineCallEx * This);
        HRESULT ( STDMETHODCALLTYPE *CallEngineSynchronize )(
            ISpPrivateEngineCallEx * This,
            _In_reads_bytes_(ulInFrameSize) const void *pInFrame,
                       ULONG ulInFrameSize,
            _Outptr_result_bytebuffer_(*pulOutFrameSize) void **ppCoMemOutFrame,
            _Out_writes_(1) ULONG *pulOutFrameSize);
        HRESULT ( STDMETHODCALLTYPE *CallEngineImmediate )(
            ISpPrivateEngineCallEx * This,
            _In_reads_bytes_(ulInFrameSize) const void *pInFrame,
                       ULONG ulInFrameSize,
            _Outptr_result_bytebuffer_(*pulOutFrameSize) void **ppCoMemOutFrame,
            _Out_writes_(1) ULONG *pulOutFrameSize);
        END_INTERFACE
    } ISpPrivateEngineCallExVtbl;
    interface ISpPrivateEngineCallEx
    {
        CONST_VTBL struct ISpPrivateEngineCallExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CallEngineSynchronize(This,pInFrame,ulInFrameSize,ppCoMemOutFrame,pulOutFrameSize) )
    ( (This)->lpVtbl -> CallEngineImmediate(This,pInFrame,ulInFrameSize,ppCoMemOutFrame,pulOutFrameSize) )
EXTERN_C const IID LIBID_SpeechDDKLib;
EXTERN_C const CLSID CLSID_SpDataKey;
class DECLSPEC_UUID("D9F6EE60-58C9-458B-88E1-2F908FD7F87C")
SpDataKey;
EXTERN_C const CLSID CLSID_SpObjectTokenEnum;
class DECLSPEC_UUID("3918D75F-0ACB-41F2-B733-92AA15BCECF6")
SpObjectTokenEnum;
EXTERN_C const CLSID CLSID_SpPhraseBuilder;
class DECLSPEC_UUID("777B6BBD-2FF2-11D3-88FE-00C04F8EF9B5")
SpPhraseBuilder;
EXTERN_C const CLSID CLSID_SpITNProcessor;
class DECLSPEC_UUID("12D73610-A1C9-11D3-BC90-00C04F72DF9F")
SpITNProcessor;
EXTERN_C const CLSID CLSID_SpGrammarCompiler;
class DECLSPEC_UUID("B1E29D59-A675-11D2-8302-00C04F8EE6C0")
SpGrammarCompiler;
EXTERN_C const CLSID CLSID_SpW3CGrammarCompiler;
class DECLSPEC_UUID("D2C13906-51EF-454E-BC67-A52475FF074C")
SpW3CGrammarCompiler;
EXTERN_C const CLSID CLSID_SpGramCompBackend;
class DECLSPEC_UUID("DA93E903-C843-11D2-A084-00C04F8EF9B5")
SpGramCompBackend;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk_0000_0022_v0_0_s_ifspec;
}
