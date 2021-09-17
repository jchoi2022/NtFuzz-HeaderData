#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPPluginUI IWMPPluginUI;
#include "oaidl.h"
#include "wmp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
__inline BOOL WMPNotifyPluginAddRemove()
{
    return( ::PostMessage( HWND_BROADCAST, ::RegisterWindowMessageA( "WMPlayer_PluginAddRemove" ), 0, 0 ) );
}
extern RPC_IF_HANDLE __MIDL_itf_wmpplugpri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpplugpri_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPPluginUI;
    typedef struct IWMPPluginUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPluginUI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPluginUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPluginUI * This);
        HRESULT ( STDMETHODCALLTYPE *SetCore )(
            IWMPPluginUI * This,
                       IWMPCore *pCore);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            IWMPPluginUI * This,
                       HWND hwndParent,
                        HWND *phwndWindow);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            IWMPPluginUI * This);
        HRESULT ( STDMETHODCALLTYPE *DisplayPropertyPage )(
            IWMPPluginUI * This,
                       HWND hwndParent);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IWMPPluginUI * This,
                       const WCHAR *pwszName,
                        VARIANT *pvarProperty);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IWMPPluginUI * This,
                       const WCHAR *pwszName,
                       const VARIANT *pvarProperty);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            IWMPPluginUI * This,
                       LPMSG lpmsg);
        END_INTERFACE
    } IWMPPluginUIVtbl;
    interface IWMPPluginUI
    {
        CONST_VTBL struct IWMPPluginUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCore(This,pCore) )
    ( (This)->lpVtbl -> Create(This,hwndParent,phwndWindow) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> DisplayPropertyPage(This,hwndParent) )
    ( (This)->lpVtbl -> GetProperty(This,pwszName,pvarProperty) )
    ( (This)->lpVtbl -> SetProperty(This,pwszName,pvarProperty) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,lpmsg) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmpplugpri_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpplugpri_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( unsigned long *, unsigned long , HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( unsigned long *, unsigned char *, HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * );
void __RPC_USER HWND_UserFree( unsigned long *, HWND * );
unsigned long __RPC_USER VARIANT_UserSize( unsigned long *, unsigned long , VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( unsigned long *, unsigned char *, VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * );
void __RPC_USER VARIANT_UserFree( unsigned long *, VARIANT * );
}
