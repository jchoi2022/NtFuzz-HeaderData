#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWebApplicationScriptEvents IWebApplicationScriptEvents;
typedef interface IWebApplicationNavigationEvents IWebApplicationNavigationEvents;
typedef interface IWebApplicationUIEvents IWebApplicationUIEvents;
typedef interface IWebApplicationUpdateEvents IWebApplicationUpdateEvents;
typedef interface IWebApplicationHost IWebApplicationHost;
typedef interface IWebApplicationActivation IWebApplicationActivation;
typedef interface IWebApplicationAuthoringMode IWebApplicationAuthoringMode;
#include "oaidl.h"
#include "ocidl.h"
#include "Mshtml.h"
#include "activscp.h"
extern "C"{
       
#pragma comment(lib,"uuid.lib")
#include <urlmon.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_webapplication_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webapplication_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWebApplicationScriptEvents;
    typedef struct IWebApplicationScriptEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebApplicationScriptEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebApplicationScriptEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebApplicationScriptEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *BeforeScriptExecute )(
            IWebApplicationScriptEvents * This,
                       IHTMLWindow2 *htmlWindow);
                           HRESULT ( STDMETHODCALLTYPE *ScriptError )(
            IWebApplicationScriptEvents * This,
            _In_opt_ IHTMLWindow2 *htmlWindow,
                       IActiveScriptError *scriptError,
                               LPCWSTR url,
                       BOOL errorHandled);
        END_INTERFACE
    } IWebApplicationScriptEventsVtbl;
    interface IWebApplicationScriptEvents
    {
        CONST_VTBL struct IWebApplicationScriptEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeforeScriptExecute(This,htmlWindow) )
    ( (This)->lpVtbl -> ScriptError(This,htmlWindow,scriptError,url,errorHandled) )
EXTERN_C const IID IID_IWebApplicationNavigationEvents;
    typedef struct IWebApplicationNavigationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebApplicationNavigationEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebApplicationNavigationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebApplicationNavigationEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *BeforeNavigate )(
            IWebApplicationNavigationEvents * This,
                       IHTMLWindow2 *htmlWindow,
                               LPCWSTR url,
                       DWORD navigationFlags,
            _In_opt_ LPCWSTR targetFrameName);
                           HRESULT ( STDMETHODCALLTYPE *NavigateComplete )(
            IWebApplicationNavigationEvents * This,
                       IHTMLWindow2 *htmlWindow,
                               LPCWSTR url);
                           HRESULT ( STDMETHODCALLTYPE *NavigateError )(
            IWebApplicationNavigationEvents * This,
                       IHTMLWindow2 *htmlWindow,
                               LPCWSTR url,
            _In_opt_ LPCWSTR targetFrameName,
                       DWORD statusCode);
                           HRESULT ( STDMETHODCALLTYPE *DocumentComplete )(
            IWebApplicationNavigationEvents * This,
                       IHTMLWindow2 *htmlWindow,
                               LPCWSTR url);
                           HRESULT ( STDMETHODCALLTYPE *DownloadBegin )(
            IWebApplicationNavigationEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *DownloadComplete )(
            IWebApplicationNavigationEvents * This);
        END_INTERFACE
    } IWebApplicationNavigationEventsVtbl;
    interface IWebApplicationNavigationEvents
    {
        CONST_VTBL struct IWebApplicationNavigationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeforeNavigate(This,htmlWindow,url,navigationFlags,targetFrameName) )
    ( (This)->lpVtbl -> NavigateComplete(This,htmlWindow,url) )
    ( (This)->lpVtbl -> NavigateError(This,htmlWindow,url,targetFrameName,statusCode) )
    ( (This)->lpVtbl -> DocumentComplete(This,htmlWindow,url) )
    ( (This)->lpVtbl -> DownloadBegin(This) )
    ( (This)->lpVtbl -> DownloadComplete(This) )
EXTERN_C const IID IID_IWebApplicationUIEvents;
    typedef struct IWebApplicationUIEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebApplicationUIEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebApplicationUIEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebApplicationUIEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *SecurityProblem )(
            IWebApplicationUIEvents * This,
                       DWORD securityProblem,
                        HRESULT *result);
        END_INTERFACE
    } IWebApplicationUIEventsVtbl;
    interface IWebApplicationUIEvents
    {
        CONST_VTBL struct IWebApplicationUIEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SecurityProblem(This,securityProblem,result) )
EXTERN_C const IID IID_IWebApplicationUpdateEvents;
    typedef struct IWebApplicationUpdateEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebApplicationUpdateEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebApplicationUpdateEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebApplicationUpdateEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *OnPaint )(
            IWebApplicationUpdateEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *OnCssChanged )(
            IWebApplicationUpdateEvents * This);
        END_INTERFACE
    } IWebApplicationUpdateEventsVtbl;
    interface IWebApplicationUpdateEvents
    {
        CONST_VTBL struct IWebApplicationUpdateEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPaint(This) )
    ( (This)->lpVtbl -> OnCssChanged(This) )
EXTERN_C const IID IID_IWebApplicationHost;
    typedef struct IWebApplicationHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebApplicationHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebApplicationHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebApplicationHost * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_HWND )(
            IWebApplicationHost * This,
                                HWND *hwnd);
                                    HRESULT ( STDMETHODCALLTYPE *get_Document )(
            IWebApplicationHost * This,
                                IHTMLDocument2 **htmlDocument);
                           HRESULT ( STDMETHODCALLTYPE *Refresh )(
            IWebApplicationHost * This);
                           HRESULT ( STDMETHODCALLTYPE *Advise )(
            IWebApplicationHost * This,
                       REFIID interfaceId,
                       IUnknown *callback,
                        DWORD *cookie);
                           HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IWebApplicationHost * This,
                       DWORD cookie);
        END_INTERFACE
    } IWebApplicationHostVtbl;
    interface IWebApplicationHost
    {
        CONST_VTBL struct IWebApplicationHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_HWND(This,hwnd) )
    ( (This)->lpVtbl -> get_Document(This,htmlDocument) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Advise(This,interfaceId,callback,cookie) )
    ( (This)->lpVtbl -> Unadvise(This,cookie) )
EXTERN_C const IID IID_IWebApplicationActivation;
    typedef struct IWebApplicationActivationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebApplicationActivation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebApplicationActivation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebApplicationActivation * This);
                           HRESULT ( STDMETHODCALLTYPE *CancelPendingActivation )(
            IWebApplicationActivation * This);
        END_INTERFACE
    } IWebApplicationActivationVtbl;
    interface IWebApplicationActivation
    {
        CONST_VTBL struct IWebApplicationActivationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CancelPendingActivation(This) )
extern RPC_IF_HANDLE __MIDL_itf_webapplication_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webapplication_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IWebApplicationAuthoringMode;
    typedef struct IWebApplicationAuthoringModeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebApplicationAuthoringMode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebApplicationAuthoringMode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebApplicationAuthoringMode * This);
                      HRESULT ( STDMETHODCALLTYPE *QueryService )(
            IWebApplicationAuthoringMode * This,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Outptr_ void **ppvObject);
                                    HRESULT ( STDMETHODCALLTYPE *get_AuthoringClientBinary )(
            __RPC__in IWebApplicationAuthoringMode * This,
                                __RPC__deref_out_opt BSTR *designModeDllPath);
        END_INTERFACE
    } IWebApplicationAuthoringModeVtbl;
    interface IWebApplicationAuthoringMode
    {
        CONST_VTBL struct IWebApplicationAuthoringModeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> get_AuthoringClientBinary(This,designModeDllPath) )
typedef HRESULT (*RegisterAuthoringClientFunctionType)(_In_ IWebApplicationAuthoringMode* authoringModeObject, _In_ IWebApplicationHost* host);
typedef HRESULT (* UnregisterAuthoringClientFunctionType)(_In_ IWebApplicationHost* host);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_webapplication_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webapplication_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
