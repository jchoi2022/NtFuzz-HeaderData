#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITfSpeechUIServer ITfSpeechUIServer;
#include "oaidl.h"
#include "ocidl.h"
#include "msctf.h"
extern "C"{
#include <windows.h>
#include <winapifamily.h>
extern "C" {
}
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_SpeechUIServer;
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfSpeechUIServer;
    typedef struct ITfSpeechUIServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSpeechUIServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSpeechUIServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSpeechUIServer * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITfSpeechUIServer * This);
        HRESULT ( STDMETHODCALLTYPE *ShowUI )(
            __RPC__in ITfSpeechUIServer * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *UpdateBalloon )(
            __RPC__in ITfSpeechUIServer * This,
                       TfLBBalloonStyle style,
                                __RPC__in_ecount_full(cch) const WCHAR *pch,
                       ULONG cch);
        END_INTERFACE
    } ITfSpeechUIServerVtbl;
    interface ITfSpeechUIServer
    {
        CONST_VTBL struct ITfSpeechUIServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> ShowUI(This,fShow) )
    ( (This)->lpVtbl -> UpdateBalloon(This,style,pch,cch) )
DEFINE_GUID(IID_ITfSpeechUIServer, 0x90e9a944, 0x9244, 0x489f, 0xa7, 0x8f, 0xde, 0x67, 0xaf, 0xc0, 0x13, 0xa7 );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0001_v0_0_s_ifspec;
}
