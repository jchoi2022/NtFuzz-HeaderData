#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICoreWindowInterop ICoreWindowInterop;
typedef interface ICoreInputInterop ICoreInputInterop;
typedef interface ICoreWindowComponentInterop ICoreWindowComponentInterop;
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICoreWindowInterop;
    typedef struct ICoreWindowInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICoreWindowInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICoreWindowInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICoreWindowInterop * This);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowHandle )(
            __RPC__in ICoreWindowInterop * This,
                                __RPC__deref_out_opt HWND *hwnd);
                        HRESULT ( STDMETHODCALLTYPE *put_MessageHandled )(
            __RPC__in ICoreWindowInterop * This,
                       boolean value);
        END_INTERFACE
    } ICoreWindowInteropVtbl;
    interface ICoreWindowInterop
    {
        CONST_VTBL struct ICoreWindowInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_WindowHandle(This,hwnd) )
    ( (This)->lpVtbl -> put_MessageHandled(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ICoreInputInterop;
    typedef struct ICoreInputInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICoreInputInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICoreInputInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICoreInputInterop * This);
        HRESULT ( STDMETHODCALLTYPE *SetInputSource )(
            __RPC__in ICoreInputInterop * This,
                       __RPC__in_opt IUnknown *value);
                        HRESULT ( STDMETHODCALLTYPE *put_MessageHandled )(
            __RPC__in ICoreInputInterop * This,
                       boolean value);
        END_INTERFACE
    } ICoreInputInteropVtbl;
    interface ICoreInputInterop
    {
        CONST_VTBL struct ICoreInputInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInputSource(This,value) )
    ( (This)->lpVtbl -> put_MessageHandled(This,value) )
HRESULT _cdecl CreateControlInput(
    _In_ REFIID riid,
    _COM_Outptr_ void **ppv);
HRESULT _cdecl CreateControlInputEx(
    _In_ IUnknown *pCoreWindow,
    _In_ REFIID riid,
    _COM_Outptr_ void **ppv);
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ICoreWindowComponentInterop;
    typedef struct ICoreWindowComponentInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICoreWindowComponentInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICoreWindowComponentInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICoreWindowComponentInterop * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureComponentInput )(
            __RPC__in ICoreWindowComponentInterop * This,
                       UINT32 hostViewInstanceId,
                       __RPC__in HWND hwndHost,
                       __RPC__in_opt IUnknown *inputSourceVisual);
        HRESULT ( STDMETHODCALLTYPE *GetViewInstanceId )(
            __RPC__in ICoreWindowComponentInterop * This,
                        __RPC__out UINT32 *componentViewInstanceId);
        END_INTERFACE
    } ICoreWindowComponentInteropVtbl;
    interface ICoreWindowComponentInterop
    {
        CONST_VTBL struct ICoreWindowComponentInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureComponentInput(This,hostViewInstanceId,hwndHost,inputSourceVisual) )
    ( (This)->lpVtbl -> GetViewInstanceId(This,componentViewInstanceId) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corewindow_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
