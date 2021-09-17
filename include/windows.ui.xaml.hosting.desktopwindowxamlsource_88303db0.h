#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDesktopWindowXamlSourceNative IDesktopWindowXamlSourceNative;
typedef interface IDesktopWindowXamlSourceNative2 IDesktopWindowXamlSourceNative2;
#include "oaidl.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDesktopWindowXamlSourceNative;
    typedef struct IDesktopWindowXamlSourceNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDesktopWindowXamlSourceNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDesktopWindowXamlSourceNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDesktopWindowXamlSourceNative * This);
        HRESULT ( STDMETHODCALLTYPE *AttachToWindow )(
            IDesktopWindowXamlSourceNative * This,
            _In_ HWND parentWnd);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowHandle )(
            IDesktopWindowXamlSourceNative * This,
                                HWND *hWnd);
        END_INTERFACE
    } IDesktopWindowXamlSourceNativeVtbl;
    interface IDesktopWindowXamlSourceNative
    {
        CONST_VTBL struct IDesktopWindowXamlSourceNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AttachToWindow(This,parentWnd) )
    ( (This)->lpVtbl -> get_WindowHandle(This,hWnd) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDesktopWindowXamlSourceNative2;
    typedef struct IDesktopWindowXamlSourceNative2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDesktopWindowXamlSourceNative2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDesktopWindowXamlSourceNative2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDesktopWindowXamlSourceNative2 * This);
        HRESULT ( STDMETHODCALLTYPE *AttachToWindow )(
            IDesktopWindowXamlSourceNative2 * This,
            _In_ HWND parentWnd);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowHandle )(
            IDesktopWindowXamlSourceNative2 * This,
                                HWND *hWnd);
        HRESULT ( STDMETHODCALLTYPE *PreTranslateMessage )(
            IDesktopWindowXamlSourceNative2 * This,
            _In_ const MSG *message,
                                BOOL *result);
        END_INTERFACE
    } IDesktopWindowXamlSourceNative2Vtbl;
    interface IDesktopWindowXamlSourceNative2
    {
        CONST_VTBL struct IDesktopWindowXamlSourceNative2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AttachToWindow(This,parentWnd) )
    ( (This)->lpVtbl -> get_WindowHandle(This,hWnd) )
    ( (This)->lpVtbl -> PreTranslateMessage(This,message,result) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0002_v0_0_s_ifspec;
}
