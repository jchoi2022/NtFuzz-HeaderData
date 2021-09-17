#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDialEventSink IDialEventSink;
typedef interface IDialEngine IDialEngine;
typedef interface IDialBranding IDialBranding;
#include "unknwn.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDialEventSink;
    typedef struct IDialEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDialEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDialEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDialEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            __RPC__in IDialEventSink * This,
                       DWORD dwEvent,
                       DWORD dwStatus);
        END_INTERFACE
    } IDialEventSinkVtbl;
    interface IDialEventSink
    {
        CONST_VTBL struct IDialEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEvent(This,dwEvent,dwStatus) )
EXTERN_C const IID IID_IDialEngine;
    typedef struct IDialEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDialEngine * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDialEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDialEngine * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IDialEngine * This,
                       __RPC__in LPCWSTR pwzConnectoid,
                       __RPC__in_opt IDialEventSink *pIDES);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IDialEngine * This,
                       __RPC__in LPCWSTR pwzProperty,
                       __RPC__in LPWSTR pwzValue,
                       DWORD dwBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IDialEngine * This,
                       __RPC__in LPCWSTR pwzProperty,
                       __RPC__in LPCWSTR pwzValue);
        HRESULT ( STDMETHODCALLTYPE *Dial )(
            __RPC__in IDialEngine * This);
        HRESULT ( STDMETHODCALLTYPE *HangUp )(
            __RPC__in IDialEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectedState )(
            __RPC__in IDialEngine * This,
                        __RPC__out DWORD *pdwState);
        HRESULT ( STDMETHODCALLTYPE *GetConnectHandle )(
            __RPC__in IDialEngine * This,
                        __RPC__out DWORD_PTR *pdwHandle);
        END_INTERFACE
    } IDialEngineVtbl;
    interface IDialEngine
    {
        CONST_VTBL struct IDialEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pwzConnectoid,pIDES) )
    ( (This)->lpVtbl -> GetProperty(This,pwzProperty,pwzValue,dwBufSize) )
    ( (This)->lpVtbl -> SetProperty(This,pwzProperty,pwzValue) )
    ( (This)->lpVtbl -> Dial(This) )
    ( (This)->lpVtbl -> HangUp(This) )
    ( (This)->lpVtbl -> GetConnectedState(This,pdwState) )
    ( (This)->lpVtbl -> GetConnectHandle(This,pdwHandle) )
EXTERN_C const IID IID_IDialBranding;
    typedef struct IDialBrandingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDialBranding * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDialBranding * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDialBranding * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IDialBranding * This,
                       __RPC__in LPCWSTR pwzConnectoid);
        HRESULT ( STDMETHODCALLTYPE *GetBitmap )(
            __RPC__in IDialBranding * This,
                       DWORD dwIndex,
                        __RPC__deref_out_opt HBITMAP *phBitmap);
        END_INTERFACE
    } IDialBrandingVtbl;
    interface IDialBranding
    {
        CONST_VTBL struct IDialBrandingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pwzConnectoid) )
    ( (This)->lpVtbl -> GetBitmap(This,dwIndex,phBitmap) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
}
