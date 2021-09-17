#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IActiveScriptSite IActiveScriptSite;
typedef interface IActiveScriptError IActiveScriptError;
typedef interface IActiveScriptError64 IActiveScriptError64;
typedef interface IActiveScriptSiteWindow IActiveScriptSiteWindow;
typedef interface IActiveScriptSiteUIControl IActiveScriptSiteUIControl;
typedef interface IActiveScriptSiteInterruptPoll IActiveScriptSiteInterruptPoll;
typedef interface IActiveScript IActiveScript;
typedef interface IActiveScriptParse32 IActiveScriptParse32;
typedef interface IActiveScriptParse64 IActiveScriptParse64;
typedef interface IActiveScriptParseProcedureOld32 IActiveScriptParseProcedureOld32;
typedef interface IActiveScriptParseProcedureOld64 IActiveScriptParseProcedureOld64;
typedef interface IActiveScriptParseProcedure32 IActiveScriptParseProcedure32;
typedef interface IActiveScriptParseProcedure64 IActiveScriptParseProcedure64;
typedef interface IActiveScriptParseProcedure2_32 IActiveScriptParseProcedure2_32;
typedef interface IActiveScriptParseProcedure2_64 IActiveScriptParseProcedure2_64;
typedef interface IActiveScriptEncode IActiveScriptEncode;
typedef interface IActiveScriptHostEncode IActiveScriptHostEncode;
typedef interface IBindEventHandler IBindEventHandler;
typedef interface IActiveScriptStats IActiveScriptStats;
typedef interface IActiveScriptProperty IActiveScriptProperty;
typedef interface ITridentEventSink ITridentEventSink;
typedef interface IActiveScriptGarbageCollector IActiveScriptGarbageCollector;
typedef interface IActiveScriptSIPInfo IActiveScriptSIPInfo;
typedef interface IActiveScriptSiteTraceInfo IActiveScriptSiteTraceInfo;
typedef interface IActiveScriptTraceInfo IActiveScriptTraceInfo;
typedef interface IActiveScriptStringCompare IActiveScriptStringCompare;
#include "ocidl.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CATID_ActiveScript, 0xf0b7a1a1, 0x9847, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(CATID_ActiveScriptParse, 0xf0b7a1a2, 0x9847, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(CATID_ActiveScriptEncode, 0xf0b7a1a3, 0x9847, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScript, 0xbb1a2ae1, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptParse32, 0xbb1a2ae2, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptParse64, 0xc7ef7658, 0xe1ee, 0x480e, 0x97, 0xea, 0xd5, 0x2c, 0xb4, 0xd7, 0x6d, 0x17);
DEFINE_GUID(IID_IActiveScriptEncode, 0xbb1a2ae3, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptHostEncode, 0xbee9b76e, 0xcfe3, 0x11d1, 0xb7, 0x47, 0x00, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IActiveScriptParseProcedureOld32, 0x1cff0050, 0x6fdd, 0x11d0, 0x93, 0x28, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptParseProcedureOld64, 0x21f57128, 0x08c9, 0x4638, 0xba, 0x12, 0x22, 0xd1, 0x5d, 0x88, 0xdc, 0x5c);
DEFINE_GUID(IID_IActiveScriptParseProcedure32, 0xaa5b6a80, 0xb834, 0x11d0, 0x93, 0x2f, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptParseProcedure64, 0xc64713b6, 0xe029, 0x4cc5, 0x92, 0x00, 0x43, 0x8b, 0x72, 0x89, 0x0b, 0x6a);
DEFINE_GUID(IID_IActiveScriptParseProcedure2_32, 0x71ee5b20, 0xfb04, 0x11d1, 0xb3, 0xa8, 0x00, 0xa0, 0xc9, 0x11, 0xe8, 0xb2);
DEFINE_GUID(IID_IActiveScriptParseProcedure2_64, 0xfe7c4271, 0x210c, 0x448d, 0x9f, 0x54, 0x76, 0xda, 0xb7, 0x04, 0x7b, 0x28);
DEFINE_GUID(IID_IActiveScriptSite, 0xdb01a1e3, 0xa42b, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptSiteTraceInfo, 0x4b7272ae, 0x1955, 0x4bfe, 0x98, 0xb0, 0x78, 0x6, 0x21, 0x88, 0x85, 0x69);
DEFINE_GUID(IID_IActiveScriptSiteWindow, 0xd10f6761, 0x83e9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptSiteInterruptPoll, 0x539698a0, 0xcdca, 0x11cf, 0xa5, 0xeb, 0x00, 0xaa, 0x00, 0x47, 0xa0, 0x63);
DEFINE_GUID(IID_IActiveScriptSiteUIControl, 0xaedae97e, 0xd7ee, 0x4796, 0xb9, 0x60, 0x7f, 0x9, 0x2a, 0xe8, 0x44, 0xab);
DEFINE_GUID(IID_IActiveScriptError, 0xeae1ba61, 0xa4ed, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptError64, 0xb21fb2a1, 0x5b8f, 0x4963, 0x8c, 0x21, 0x21, 0x45, 0x0f, 0x84, 0xed, 0x7f);
DEFINE_GUID(IID_IBindEventHandler, 0x63cdbcb0, 0xc1b1, 0x11d0, 0x93, 0x36, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptStats, 0xb8da6310, 0xe19b, 0x11d0, 0x93, 0x3c, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptProperty, 0x4954E0D0, 0xFBC7, 0x11D1, 0x84, 0x10, 0x00, 0x60, 0x08, 0xC3, 0xFB, 0xFC);
DEFINE_GUID(IID_ITridentEventSink, 0x1dc9ca50, 0x6ef, 0x11d2, 0x84, 0x15, 0x00, 0x60, 0x08, 0xc3, 0xfb, 0xfc);
DEFINE_GUID(IID_IActiveScriptGarbageCollector, 0x6aa2c4a0, 0x2b53, 0x11d4, 0xa2, 0xa0, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(IID_IActiveScriptSIPInfo, 0x764651d0, 0x38de, 0x11d4, 0xa2, 0xa3, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(IID_IActiveScriptTraceInfo, 0xC35456E7, 0xBEBF, 0x4a1b, 0x86, 0xA9, 0x24, 0xD5, 0x6B, 0xE8, 0xB3, 0x69);
DEFINE_GUID(OID_VBSSIP, 0x1629f04e, 0x2799, 0x4db5, 0x8f, 0xe5, 0xac, 0xe1, 0x0f, 0x17, 0xeb, 0xab);
DEFINE_GUID(OID_JSSIP, 0x6c9e010, 0x38ce, 0x11d4, 0xa2, 0xa3, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(OID_WSFSIP, 0x1a610570, 0x38ce, 0x11d4, 0xa2, 0xa3, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(IID_IActiveScriptStringCompare, 0x58562769, 0xED52, 0x42f7, 0x84, 0x03, 0x49, 0x63, 0x51, 0x4E, 0x1F, 0x11);
                                         SCRIPTITEM_ISVISIBLE | \
                                         SCRIPTITEM_ISPERSISTENT | \
                                         SCRIPTITEM_GLOBALMEMBERS | \
                                         SCRIPTITEM_NOCODE | \
                                         SCRIPTITEM_CODEONLY)
                                         SCRIPTTEXT_ISVISIBLE | \
                                         SCRIPTTEXT_ISEXPRESSION | \
                                         SCRIPTTEXT_ISPERSISTENT | \
                                         SCRIPTTEXT_HOSTMANAGESSOURCE | \
                                         SCRIPTTEXT_ISXDOMAIN | \
                                         SCRIPTTEXT_ISNONUSERCODE)
                                         SCRIPTPROC_ISEXPRESSION | \
                                         SCRIPTPROC_IMPLICIT_THIS | \
                                         SCRIPTPROC_IMPLICIT_PARENTS | \
                                         SCRIPTPROC_ISXDOMAIN)
                                         SCRIPTINFO_ITYPEINFO)
                                         SCRIPTINTERRUPT_RAISEEXCEPTION)
typedef
enum tagSCRIPTLANGUAGEVERSION
    {
        SCRIPTLANGUAGEVERSION_DEFAULT = 0,
        SCRIPTLANGUAGEVERSION_5_7 = 1,
        SCRIPTLANGUAGEVERSION_5_8 = 2,
        SCRIPTLANGUAGEVERSION_MAX = 255
    } SCRIPTLANGUAGEVERSION;
typedef
enum tagSCRIPTSTATE
    {
        SCRIPTSTATE_UNINITIALIZED = 0,
        SCRIPTSTATE_INITIALIZED = 5,
        SCRIPTSTATE_STARTED = 1,
        SCRIPTSTATE_CONNECTED = 2,
        SCRIPTSTATE_DISCONNECTED = 3,
        SCRIPTSTATE_CLOSED = 4
    } SCRIPTSTATE;
typedef
enum tagSCRIPTTRACEINFO
    {
        SCRIPTTRACEINFO_SCRIPTSTART = 0,
        SCRIPTTRACEINFO_SCRIPTEND = 1,
        SCRIPTTRACEINFO_COMCALLSTART = 2,
        SCRIPTTRACEINFO_COMCALLEND = 3,
        SCRIPTTRACEINFO_CREATEOBJSTART = 4,
        SCRIPTTRACEINFO_CREATEOBJEND = 5,
        SCRIPTTRACEINFO_GETOBJSTART = 6,
        SCRIPTTRACEINFO_GETOBJEND = 7
    } SCRIPTTRACEINFO;
typedef
enum tagSCRIPTTHREADSTATE
    {
        SCRIPTTHREADSTATE_NOTINSCRIPT = 0,
        SCRIPTTHREADSTATE_RUNNING = 1
    } SCRIPTTHREADSTATE;
typedef
enum tagSCRIPTGCTYPE
    {
        SCRIPTGCTYPE_NORMAL = 0,
        SCRIPTGCTYPE_EXHAUSTIVE = 1
    } SCRIPTGCTYPE;
typedef
enum tagSCRIPTUICITEM
    {
        SCRIPTUICITEM_INPUTBOX = 1,
        SCRIPTUICITEM_MSGBOX = 2
    } SCRIPTUICITEM;
typedef
enum tagSCRIPTUICHANDLING
    {
        SCRIPTUICHANDLING_ALLOW = 0,
        SCRIPTUICHANDLING_NOUIERROR = 1,
        SCRIPTUICHANDLING_NOUIDEFAULT = 2
    } SCRIPTUICHANDLING;
typedef DWORD SCRIPTTHREADID;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptSite;
    typedef struct IActiveScriptSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetLCID )(
            __RPC__in IActiveScriptSite * This,
                        __RPC__out LCID *plcid);
        HRESULT ( STDMETHODCALLTYPE *GetItemInfo )(
            __RPC__in IActiveScriptSite * This,
                       __RPC__in LPCOLESTR pstrName,
                       DWORD dwReturnMask,
                        __RPC__deref_out_opt IUnknown **ppiunkItem,
                        __RPC__deref_out_opt ITypeInfo **ppti);
        HRESULT ( STDMETHODCALLTYPE *GetDocVersionString )(
            __RPC__in IActiveScriptSite * This,
                        __RPC__deref_out_opt BSTR *pbstrVersion);
        HRESULT ( STDMETHODCALLTYPE *OnScriptTerminate )(
            __RPC__in IActiveScriptSite * This,
                       __RPC__in const VARIANT *pvarResult,
                       __RPC__in const EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )(
            __RPC__in IActiveScriptSite * This,
                       SCRIPTSTATE ssScriptState);
        HRESULT ( STDMETHODCALLTYPE *OnScriptError )(
            __RPC__in IActiveScriptSite * This,
                       __RPC__in_opt IActiveScriptError *pscripterror);
        HRESULT ( STDMETHODCALLTYPE *OnEnterScript )(
            __RPC__in IActiveScriptSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnLeaveScript )(
            __RPC__in IActiveScriptSite * This);
        END_INTERFACE
    } IActiveScriptSiteVtbl;
    interface IActiveScriptSite
    {
        CONST_VTBL struct IActiveScriptSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLCID(This,plcid) )
    ( (This)->lpVtbl -> GetItemInfo(This,pstrName,dwReturnMask,ppiunkItem,ppti) )
    ( (This)->lpVtbl -> GetDocVersionString(This,pbstrVersion) )
    ( (This)->lpVtbl -> OnScriptTerminate(This,pvarResult,pexcepinfo) )
    ( (This)->lpVtbl -> OnStateChange(This,ssScriptState) )
    ( (This)->lpVtbl -> OnScriptError(This,pscripterror) )
    ( (This)->lpVtbl -> OnEnterScript(This) )
    ( (This)->lpVtbl -> OnLeaveScript(This) )
EXTERN_C const IID IID_IActiveScriptError;
    typedef struct IActiveScriptErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptError * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptError * This);
                      HRESULT ( STDMETHODCALLTYPE *GetExceptionInfo )(
            IActiveScriptError * This,
                        EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )(
            __RPC__in IActiveScriptError * This,
                        __RPC__out DWORD *pdwSourceContext,
                        __RPC__out ULONG *pulLineNumber,
                        __RPC__out LONG *plCharacterPosition);
        HRESULT ( STDMETHODCALLTYPE *GetSourceLineText )(
            __RPC__in IActiveScriptError * This,
                        __RPC__deref_out_opt BSTR *pbstrSourceLine);
        END_INTERFACE
    } IActiveScriptErrorVtbl;
    interface IActiveScriptError
    {
        CONST_VTBL struct IActiveScriptErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
    ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
    ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
                HRESULT STDMETHODCALLTYPE IActiveScriptError_RemoteGetExceptionInfo_Proxy(
    __RPC__in IActiveScriptError * This,
                __RPC__out EXCEPINFO *pexcepinfo);
void __RPC_STUB IActiveScriptError_RemoteGetExceptionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IActiveScriptError64;
    typedef struct IActiveScriptError64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptError64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptError64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptError64 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetExceptionInfo )(
            IActiveScriptError64 * This,
                        EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )(
            __RPC__in IActiveScriptError64 * This,
                        __RPC__out DWORD *pdwSourceContext,
                        __RPC__out ULONG *pulLineNumber,
                        __RPC__out LONG *plCharacterPosition);
        HRESULT ( STDMETHODCALLTYPE *GetSourceLineText )(
            __RPC__in IActiveScriptError64 * This,
                        __RPC__deref_out_opt BSTR *pbstrSourceLine);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition64 )(
            __RPC__in IActiveScriptError64 * This,
                        __RPC__out DWORDLONG *pdwSourceContext,
                        __RPC__out ULONG *pulLineNumber,
                        __RPC__out LONG *plCharacterPosition);
        END_INTERFACE
    } IActiveScriptError64Vtbl;
    interface IActiveScriptError64
    {
        CONST_VTBL struct IActiveScriptError64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
    ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
    ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
    ( (This)->lpVtbl -> GetSourcePosition64(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
EXTERN_C const IID IID_IActiveScriptSiteWindow;
    typedef struct IActiveScriptSiteWindowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptSiteWindow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptSiteWindow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptSiteWindow * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IActiveScriptSiteWindow * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            __RPC__in IActiveScriptSiteWindow * This,
                       BOOL fEnable);
        END_INTERFACE
    } IActiveScriptSiteWindowVtbl;
    interface IActiveScriptSiteWindow
    {
        CONST_VTBL struct IActiveScriptSiteWindowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
EXTERN_C const IID IID_IActiveScriptSiteUIControl;
    typedef struct IActiveScriptSiteUIControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptSiteUIControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptSiteUIControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptSiteUIControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetUIBehavior )(
            __RPC__in IActiveScriptSiteUIControl * This,
                       SCRIPTUICITEM UicItem,
                        __RPC__out SCRIPTUICHANDLING *pUicHandling);
        END_INTERFACE
    } IActiveScriptSiteUIControlVtbl;
    interface IActiveScriptSiteUIControl
    {
        CONST_VTBL struct IActiveScriptSiteUIControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUIBehavior(This,UicItem,pUicHandling) )
EXTERN_C const IID IID_IActiveScriptSiteInterruptPoll;
    typedef struct IActiveScriptSiteInterruptPollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptSiteInterruptPoll * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptSiteInterruptPoll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptSiteInterruptPoll * This);
        HRESULT ( STDMETHODCALLTYPE *QueryContinue )(
            __RPC__in IActiveScriptSiteInterruptPoll * This);
        END_INTERFACE
    } IActiveScriptSiteInterruptPollVtbl;
    interface IActiveScriptSiteInterruptPoll
    {
        CONST_VTBL struct IActiveScriptSiteInterruptPollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryContinue(This) )
EXTERN_C const IID IID_IActiveScript;
    typedef struct IActiveScriptVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScript * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScript * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScript * This);
        HRESULT ( STDMETHODCALLTYPE *SetScriptSite )(
            __RPC__in IActiveScript * This,
                       __RPC__in_opt IActiveScriptSite *pass);
        HRESULT ( STDMETHODCALLTYPE *GetScriptSite )(
            __RPC__in IActiveScript * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *SetScriptState )(
            __RPC__in IActiveScript * This,
                       SCRIPTSTATE ss);
        HRESULT ( STDMETHODCALLTYPE *GetScriptState )(
            __RPC__in IActiveScript * This,
                        __RPC__out SCRIPTSTATE *pssState);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IActiveScript * This);
        HRESULT ( STDMETHODCALLTYPE *AddNamedItem )(
            __RPC__in IActiveScript * This,
                       __RPC__in LPCOLESTR pstrName,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *AddTypeLib )(
            __RPC__in IActiveScript * This,
                       __RPC__in REFGUID rguidTypeLib,
                       DWORD dwMajor,
                       DWORD dwMinor,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetScriptDispatch )(
            __RPC__in IActiveScript * This,
                       __RPC__in LPCOLESTR pstrItemName,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentScriptThreadID )(
            __RPC__in IActiveScript * This,
                        __RPC__out SCRIPTTHREADID *pstidThread);
        HRESULT ( STDMETHODCALLTYPE *GetScriptThreadID )(
            __RPC__in IActiveScript * This,
                       DWORD dwWin32ThreadId,
                        __RPC__out SCRIPTTHREADID *pstidThread);
        HRESULT ( STDMETHODCALLTYPE *GetScriptThreadState )(
            __RPC__in IActiveScript * This,
                       SCRIPTTHREADID stidThread,
                        __RPC__out SCRIPTTHREADSTATE *pstsState);
        HRESULT ( STDMETHODCALLTYPE *InterruptScriptThread )(
            __RPC__in IActiveScript * This,
                       SCRIPTTHREADID stidThread,
                       __RPC__in const EXCEPINFO *pexcepinfo,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IActiveScript * This,
                        __RPC__deref_out_opt IActiveScript **ppscript);
        END_INTERFACE
    } IActiveScriptVtbl;
    interface IActiveScript
    {
        CONST_VTBL struct IActiveScriptVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetScriptSite(This,pass) )
    ( (This)->lpVtbl -> GetScriptSite(This,riid,ppvObject) )
    ( (This)->lpVtbl -> SetScriptState(This,ss) )
    ( (This)->lpVtbl -> GetScriptState(This,pssState) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> AddNamedItem(This,pstrName,dwFlags) )
    ( (This)->lpVtbl -> AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags) )
    ( (This)->lpVtbl -> GetScriptDispatch(This,pstrItemName,ppdisp) )
    ( (This)->lpVtbl -> GetCurrentScriptThreadID(This,pstidThread) )
    ( (This)->lpVtbl -> GetScriptThreadID(This,dwWin32ThreadId,pstidThread) )
    ( (This)->lpVtbl -> GetScriptThreadState(This,stidThread,pstsState) )
    ( (This)->lpVtbl -> InterruptScriptThread(This,stidThread,pexcepinfo,dwFlags) )
    ( (This)->lpVtbl -> Clone(This,ppscript) )
EXTERN_C const IID IID_IActiveScriptParse32;
    typedef struct IActiveScriptParse32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParse32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParse32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParse32 * This);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IActiveScriptParse32 * This);
        HRESULT ( STDMETHODCALLTYPE *AddScriptlet )(
            __RPC__in IActiveScriptParse32 * This,
                       __RPC__in LPCOLESTR pstrDefaultName,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in LPCOLESTR pstrSubItemName,
                       __RPC__in LPCOLESTR pstrEventName,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt BSTR *pbstrName,
                        __RPC__out EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *ParseScriptText )(
            __RPC__in IActiveScriptParse32 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__out VARIANT *pvarResult,
                        __RPC__out EXCEPINFO *pexcepinfo);
        END_INTERFACE
    } IActiveScriptParse32Vtbl;
    interface IActiveScriptParse32
    {
        CONST_VTBL struct IActiveScriptParse32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitNew(This) )
    ( (This)->lpVtbl -> AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo) )
    ( (This)->lpVtbl -> ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo) )
EXTERN_C const IID IID_IActiveScriptParse64;
    typedef struct IActiveScriptParse64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParse64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParse64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParse64 * This);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IActiveScriptParse64 * This);
        HRESULT ( STDMETHODCALLTYPE *AddScriptlet )(
            __RPC__in IActiveScriptParse64 * This,
                       __RPC__in LPCOLESTR pstrDefaultName,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in LPCOLESTR pstrSubItemName,
                       __RPC__in LPCOLESTR pstrEventName,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORDLONG dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt BSTR *pbstrName,
                        __RPC__out EXCEPINFO *pexcepinfo);
        HRESULT ( STDMETHODCALLTYPE *ParseScriptText )(
            __RPC__in IActiveScriptParse64 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORDLONG dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__out VARIANT *pvarResult,
                        __RPC__out EXCEPINFO *pexcepinfo);
        END_INTERFACE
    } IActiveScriptParse64Vtbl;
    interface IActiveScriptParse64
    {
        CONST_VTBL struct IActiveScriptParse64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitNew(This) )
    ( (This)->lpVtbl -> AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo) )
    ( (This)->lpVtbl -> ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo) )
typedef IActiveScriptParse *PIActiveScriptParse;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptParseProcedureOld32;
    typedef struct IActiveScriptParseProcedureOld32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParseProcedureOld32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParseProcedureOld32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParseProcedureOld32 * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptParseProcedureOld32 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrFormalParams,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        END_INTERFACE
    } IActiveScriptParseProcedureOld32Vtbl;
    interface IActiveScriptParseProcedureOld32
    {
        CONST_VTBL struct IActiveScriptParseProcedureOld32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
EXTERN_C const IID IID_IActiveScriptParseProcedureOld64;
    typedef struct IActiveScriptParseProcedureOld64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParseProcedureOld64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParseProcedureOld64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParseProcedureOld64 * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptParseProcedureOld64 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrFormalParams,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORDLONG dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        END_INTERFACE
    } IActiveScriptParseProcedureOld64Vtbl;
    interface IActiveScriptParseProcedureOld64
    {
        CONST_VTBL struct IActiveScriptParseProcedureOld64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
typedef IActiveScriptParseProcedureOld *PIActiveScriptParseProcedureOld;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptParseProcedure32;
    typedef struct IActiveScriptParseProcedure32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParseProcedure32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParseProcedure32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParseProcedure32 * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptParseProcedure32 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrFormalParams,
                       __RPC__in LPCOLESTR pstrProcedureName,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        END_INTERFACE
    } IActiveScriptParseProcedure32Vtbl;
    interface IActiveScriptParseProcedure32
    {
        CONST_VTBL struct IActiveScriptParseProcedure32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
EXTERN_C const IID IID_IActiveScriptParseProcedure64;
    typedef struct IActiveScriptParseProcedure64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParseProcedure64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParseProcedure64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParseProcedure64 * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptParseProcedure64 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrFormalParams,
                       __RPC__in LPCOLESTR pstrProcedureName,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORDLONG dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        END_INTERFACE
    } IActiveScriptParseProcedure64Vtbl;
    interface IActiveScriptParseProcedure64
    {
        CONST_VTBL struct IActiveScriptParseProcedure64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
typedef IActiveScriptParseProcedure *PIActiveScriptParseProcedure;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptParseProcedure2_32;
    typedef struct IActiveScriptParseProcedure2_32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParseProcedure2_32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParseProcedure2_32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParseProcedure2_32 * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptParseProcedure2_32 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrFormalParams,
                       __RPC__in LPCOLESTR pstrProcedureName,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORD dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        END_INTERFACE
    } IActiveScriptParseProcedure2_32Vtbl;
    interface IActiveScriptParseProcedure2_32
    {
        CONST_VTBL struct IActiveScriptParseProcedure2_32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
EXTERN_C const IID IID_IActiveScriptParseProcedure2_64;
    typedef struct IActiveScriptParseProcedure2_64Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptParseProcedure2_64 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptParseProcedure2_64 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptParseProcedure2_64 * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptParseProcedure2_64 * This,
                       __RPC__in LPCOLESTR pstrCode,
                       __RPC__in LPCOLESTR pstrFormalParams,
                       __RPC__in LPCOLESTR pstrProcedureName,
                       __RPC__in LPCOLESTR pstrItemName,
                       __RPC__in_opt IUnknown *punkContext,
                       __RPC__in LPCOLESTR pstrDelimiter,
                       DWORDLONG dwSourceContextCookie,
                       ULONG ulStartingLineNumber,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IDispatch **ppdisp);
        END_INTERFACE
    } IActiveScriptParseProcedure2_64Vtbl;
    interface IActiveScriptParseProcedure2_64
    {
        CONST_VTBL struct IActiveScriptParseProcedure2_64Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
typedef IActiveScriptParseProcedure2 *PIActiveScriptParseProcedure2;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptEncode;
    typedef struct IActiveScriptEncodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptEncode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptEncode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptEncode * This);
        HRESULT ( STDMETHODCALLTYPE *EncodeSection )(
            __RPC__in IActiveScriptEncode * This,
                       __RPC__in LPCOLESTR pchIn,
                       DWORD cchIn,
                            __RPC__inout LPOLESTR pchOut,
                       DWORD cchOut,
                            __RPC__inout DWORD *pcchRet);
        HRESULT ( STDMETHODCALLTYPE *DecodeScript )(
            __RPC__in IActiveScriptEncode * This,
                       __RPC__in LPCOLESTR pchIn,
                       DWORD cchIn,
                            __RPC__inout LPOLESTR pchOut,
                       DWORD cchOut,
                            __RPC__inout DWORD *pcchRet);
        HRESULT ( STDMETHODCALLTYPE *GetEncodeProgId )(
            __RPC__in IActiveScriptEncode * This,
                            __RPC__deref_inout_opt BSTR *pbstrOut);
        END_INTERFACE
    } IActiveScriptEncodeVtbl;
    interface IActiveScriptEncode
    {
        CONST_VTBL struct IActiveScriptEncodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EncodeSection(This,pchIn,cchIn,pchOut,cchOut,pcchRet) )
    ( (This)->lpVtbl -> DecodeScript(This,pchIn,cchIn,pchOut,cchOut,pcchRet) )
    ( (This)->lpVtbl -> GetEncodeProgId(This,pbstrOut) )
EXTERN_C const IID IID_IActiveScriptHostEncode;
    typedef struct IActiveScriptHostEncodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptHostEncode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptHostEncode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptHostEncode * This);
        HRESULT ( STDMETHODCALLTYPE *EncodeScriptHostFile )(
            __RPC__in IActiveScriptHostEncode * This,
                       __RPC__in BSTR bstrInFile,
                            __RPC__deref_inout_opt BSTR *pbstrOutFile,
                       unsigned long cFlags,
                       __RPC__in BSTR bstrDefaultLang);
        END_INTERFACE
    } IActiveScriptHostEncodeVtbl;
    interface IActiveScriptHostEncode
    {
        CONST_VTBL struct IActiveScriptHostEncodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EncodeScriptHostFile(This,bstrInFile,pbstrOutFile,cFlags,bstrDefaultLang) )
EXTERN_C const IID IID_IBindEventHandler;
    typedef struct IBindEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBindEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBindEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBindEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *BindHandler )(
            __RPC__in IBindEventHandler * This,
                       __RPC__in LPCOLESTR pstrEvent,
                       __RPC__in_opt IDispatch *pdisp);
        END_INTERFACE
    } IBindEventHandlerVtbl;
    interface IBindEventHandler
    {
        CONST_VTBL struct IBindEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BindHandler(This,pstrEvent,pdisp) )
EXTERN_C const IID IID_IActiveScriptStats;
    typedef struct IActiveScriptStatsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptStats * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptStats * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptStats * This);
        HRESULT ( STDMETHODCALLTYPE *GetStat )(
            __RPC__in IActiveScriptStats * This,
                       DWORD stid,
                        __RPC__out ULONG *pluHi,
                        __RPC__out ULONG *pluLo);
        HRESULT ( STDMETHODCALLTYPE *GetStatEx )(
            __RPC__in IActiveScriptStats * This,
                       __RPC__in REFGUID guid,
                        __RPC__out ULONG *pluHi,
                        __RPC__out ULONG *pluLo);
        HRESULT ( STDMETHODCALLTYPE *ResetStats )(
            __RPC__in IActiveScriptStats * This);
        END_INTERFACE
    } IActiveScriptStatsVtbl;
    interface IActiveScriptStats
    {
        CONST_VTBL struct IActiveScriptStatsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStat(This,stid,pluHi,pluLo) )
    ( (This)->lpVtbl -> GetStatEx(This,guid,pluHi,pluLo) )
    ( (This)->lpVtbl -> ResetStats(This) )
EXTERN_C const IID IID_IActiveScriptProperty;
    typedef struct IActiveScriptPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IActiveScriptProperty * This,
                       DWORD dwProperty,
                       __RPC__in VARIANT *pvarIndex,
                        __RPC__out VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IActiveScriptProperty * This,
                       DWORD dwProperty,
                       __RPC__in VARIANT *pvarIndex,
                       __RPC__in VARIANT *pvarValue);
        END_INTERFACE
    } IActiveScriptPropertyVtbl;
    interface IActiveScriptProperty
    {
        CONST_VTBL struct IActiveScriptPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperty(This,dwProperty,pvarIndex,pvarValue) )
    ( (This)->lpVtbl -> SetProperty(This,dwProperty,pvarIndex,pvarValue) )
EXTERN_C const IID IID_ITridentEventSink;
    typedef struct ITridentEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITridentEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITridentEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITridentEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *FireEvent )(
            __RPC__in ITridentEventSink * This,
                       __RPC__in LPCOLESTR pstrEvent,
                       __RPC__in DISPPARAMS *pdp,
                        __RPC__out VARIANT *pvarRes,
                        __RPC__out EXCEPINFO *pei);
        END_INTERFACE
    } ITridentEventSinkVtbl;
    interface ITridentEventSink
    {
        CONST_VTBL struct ITridentEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FireEvent(This,pstrEvent,pdp,pvarRes,pei) )
EXTERN_C const IID IID_IActiveScriptGarbageCollector;
    typedef struct IActiveScriptGarbageCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptGarbageCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptGarbageCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptGarbageCollector * This);
        HRESULT ( STDMETHODCALLTYPE *CollectGarbage )(
            __RPC__in IActiveScriptGarbageCollector * This,
            SCRIPTGCTYPE scriptgctype);
        END_INTERFACE
    } IActiveScriptGarbageCollectorVtbl;
    interface IActiveScriptGarbageCollector
    {
        CONST_VTBL struct IActiveScriptGarbageCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CollectGarbage(This,scriptgctype) )
EXTERN_C const IID IID_IActiveScriptSIPInfo;
    typedef struct IActiveScriptSIPInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptSIPInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptSIPInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptSIPInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetSIPOID )(
            __RPC__in IActiveScriptSIPInfo * This,
                        __RPC__out GUID *poid_sip);
        END_INTERFACE
    } IActiveScriptSIPInfoVtbl;
    interface IActiveScriptSIPInfo
    {
        CONST_VTBL struct IActiveScriptSIPInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSIPOID(This,poid_sip) )
EXTERN_C const IID IID_IActiveScriptSiteTraceInfo;
    typedef struct IActiveScriptSiteTraceInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptSiteTraceInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptSiteTraceInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptSiteTraceInfo * This);
        HRESULT ( STDMETHODCALLTYPE *SendScriptTraceInfo )(
            __RPC__in IActiveScriptSiteTraceInfo * This,
                       SCRIPTTRACEINFO stiEventType,
                       GUID guidContextID,
                       DWORD dwScriptContextCookie,
                       LONG lScriptStatementStart,
                       LONG lScriptStatementEnd,
                       DWORD64 dwReserved);
        END_INTERFACE
    } IActiveScriptSiteTraceInfoVtbl;
    interface IActiveScriptSiteTraceInfo
    {
        CONST_VTBL struct IActiveScriptSiteTraceInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendScriptTraceInfo(This,stiEventType,guidContextID,dwScriptContextCookie,lScriptStatementStart,lScriptStatementEnd,dwReserved) )
EXTERN_C const IID IID_IActiveScriptTraceInfo;
    typedef struct IActiveScriptTraceInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptTraceInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptTraceInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptTraceInfo * This);
        HRESULT ( STDMETHODCALLTYPE *StartScriptTracing )(
            __RPC__in IActiveScriptTraceInfo * This,
                       __RPC__in_opt IActiveScriptSiteTraceInfo *pSiteTraceInfo,
                       GUID guidContextID);
        HRESULT ( STDMETHODCALLTYPE *StopScriptTracing )(
            __RPC__in IActiveScriptTraceInfo * This);
        END_INTERFACE
    } IActiveScriptTraceInfoVtbl;
    interface IActiveScriptTraceInfo
    {
        CONST_VTBL struct IActiveScriptTraceInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartScriptTracing(This,pSiteTraceInfo,guidContextID) )
    ( (This)->lpVtbl -> StopScriptTracing(This) )
EXTERN_C const IID IID_IActiveScriptStringCompare;
    typedef struct IActiveScriptStringCompareVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptStringCompare * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptStringCompare * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptStringCompare * This);
        HRESULT ( STDMETHODCALLTYPE *StrComp )(
            __RPC__in IActiveScriptStringCompare * This,
                       __RPC__in BSTR bszStr1,
                       __RPC__in BSTR bszStr2,
                                __RPC__out LONG *iRet);
        END_INTERFACE
    } IActiveScriptStringCompareVtbl;
    interface IActiveScriptStringCompare
    {
        CONST_VTBL struct IActiveScriptStringCompareVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StrComp(This,bszStr1,bszStr2,iRet) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0026_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
              HRESULT STDMETHODCALLTYPE IActiveScriptError_GetExceptionInfo_Proxy(
    IActiveScriptError * This,
                EXCEPINFO *pexcepinfo);
                HRESULT STDMETHODCALLTYPE IActiveScriptError_GetExceptionInfo_Stub(
    __RPC__in IActiveScriptError * This,
                __RPC__out EXCEPINFO *pexcepinfo);
}
