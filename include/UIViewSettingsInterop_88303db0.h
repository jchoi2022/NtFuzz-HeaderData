#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUIViewSettingsInterop IUIViewSettingsInterop;
typedef interface IClassicApplicationViewFactory IClassicApplicationViewFactory;
typedef interface IClassicApplicationView IClassicApplicationView;
typedef class ClassicApplicationViewFactory ClassicApplicationViewFactory;
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_uiviewsettingsinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiviewsettingsinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIViewSettingsInterop;
    typedef struct IUIViewSettingsInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIViewSettingsInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIViewSettingsInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIViewSettingsInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IUIViewSettingsInterop * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IUIViewSettingsInterop * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IUIViewSettingsInterop * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            __RPC__in IUIViewSettingsInterop * This,
                       __RPC__in HWND hwnd,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IUIViewSettingsInteropVtbl;
    interface IUIViewSettingsInterop
    {
        CONST_VTBL struct IUIViewSettingsInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetForWindow(This,hwnd,riid,ppv) )
#endif
#pragma endregion
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_uiviewsettingsinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiviewsettingsinterop_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IClassicApplicationViewFactory;
    typedef struct IClassicApplicationViewFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClassicApplicationViewFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClassicApplicationViewFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClassicApplicationViewFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            IClassicApplicationViewFactory * This,
                       HWND appWindow,
                       REFIID riid,
                                        void **result);
        END_INTERFACE
    } IClassicApplicationViewFactoryVtbl;
    interface IClassicApplicationViewFactory
    {
        CONST_VTBL struct IClassicApplicationViewFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetForWindow(This,appWindow,riid,result) )
EXTERN_C const IID IID_IClassicApplicationView;
    typedef struct IClassicApplicationViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClassicApplicationView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClassicApplicationView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClassicApplicationView * This);
        HRESULT ( STDMETHODCALLTYPE *GetTitleBar )(
            IClassicApplicationView * This,
                       REFIID riid,
                                        void **result);
        HRESULT ( STDMETHODCALLTYPE *GetActiveIcon )(
            IClassicApplicationView * This,
                                HICON *value);
        HRESULT ( STDMETHODCALLTYPE *SetActiveIcon )(
            IClassicApplicationView * This,
                       HICON value);
        END_INTERFACE
    } IClassicApplicationViewVtbl;
    interface IClassicApplicationView
    {
        CONST_VTBL struct IClassicApplicationViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTitleBar(This,riid,result) )
    ( (This)->lpVtbl -> GetActiveIcon(This,value) )
    ( (This)->lpVtbl -> SetActiveIcon(This,value) )
EXTERN_C const IID LIBID_UIViewSettingsInterop;
EXTERN_C const CLSID CLSID_ClassicApplicationViewFactory;
class DECLSPEC_UUID("4A765F48-1D55-49DE-9B20-19F09AD0D1A7")
ClassicApplicationViewFactory;
constexpr PCWSTR TitleBarBackgroundColor = L"TitleBar.BackgroundColor";
constexpr PCWSTR TitleBarForegroundColor = L"TitleBar.ForegroundColor";
constexpr PCWSTR TitleBarIcon = L"TitleBar.Icon";
#endif
extern RPC_IF_HANDLE __MIDL_itf_uiviewsettingsinterop_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiviewsettingsinterop_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
