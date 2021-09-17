#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMixerOCXNotify IMixerOCXNotify;
typedef interface IMixerOCX IMixerOCX;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mixerocx_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mixerocx_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMixerOCXNotify;
    typedef struct IMixerOCXNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMixerOCXNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMixerOCXNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMixerOCXNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnInvalidateRect )(
            __RPC__in IMixerOCXNotify * This,
                       __RPC__in LPCRECT lpcRect);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in IMixerOCXNotify * This,
                       ULONG ulStatusFlags);
        HRESULT ( STDMETHODCALLTYPE *OnDataChange )(
            __RPC__in IMixerOCXNotify * This,
                       ULONG ulDataFlags);
        END_INTERFACE
    } IMixerOCXNotifyVtbl;
    interface IMixerOCXNotify
    {
        CONST_VTBL struct IMixerOCXNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnInvalidateRect(This,lpcRect) )
    ( (This)->lpVtbl -> OnStatusChange(This,ulStatusFlags) )
    ( (This)->lpVtbl -> OnDataChange(This,ulDataFlags) )
EXTERN_C const IID IID_IMixerOCX;
    typedef struct IMixerOCXVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMixerOCX * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMixerOCX * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMixerOCX * This);
        HRESULT ( STDMETHODCALLTYPE *OnDisplayChange )(
            __RPC__in IMixerOCX * This,
                       ULONG ulBitsPerPixel,
                       ULONG ulScreenWidth,
                       ULONG ulScreenHeight);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatio )(
            __RPC__in IMixerOCX * This,
                        __RPC__out LPDWORD pdwPictAspectRatioX,
                        __RPC__out LPDWORD pdwPictAspectRatioY);
        HRESULT ( STDMETHODCALLTYPE *GetVideoSize )(
            __RPC__in IMixerOCX * This,
                        __RPC__out LPDWORD pdwVideoWidth,
                        __RPC__out LPDWORD pdwVideoHeight);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMixerOCX * This,
                        __RPC__deref_out_opt LPDWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *OnDraw )(
            __RPC__in IMixerOCX * This,
                       __RPC__in HDC hdcDraw,
                       __RPC__in LPCRECT prcDraw);
        HRESULT ( STDMETHODCALLTYPE *SetDrawRegion )(
            __RPC__in IMixerOCX * This,
                       __RPC__in LPPOINT lpptTopLeftSC,
                       __RPC__in LPCRECT prcDrawCC,
                       __RPC__in LPCRECT lprcClip);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IMixerOCX * This,
                       __RPC__in_opt IMixerOCXNotify *pmdns);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            __RPC__in IMixerOCX * This);
        END_INTERFACE
    } IMixerOCXVtbl;
    interface IMixerOCX
    {
        CONST_VTBL struct IMixerOCXVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDisplayChange(This,ulBitsPerPixel,ulScreenWidth,ulScreenHeight) )
    ( (This)->lpVtbl -> GetAspectRatio(This,pdwPictAspectRatioX,pdwPictAspectRatioY) )
    ( (This)->lpVtbl -> GetVideoSize(This,pdwVideoWidth,pdwVideoHeight) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> OnDraw(This,hdcDraw,prcDraw) )
    ( (This)->lpVtbl -> SetDrawRegion(This,lpptTopLeftSC,prcDrawCC,lprcClip) )
    ( (This)->lpVtbl -> Advise(This,pmdns) )
    ( (This)->lpVtbl -> UnAdvise(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mixerocx_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mixerocx_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER HDC_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HDC_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree64( __RPC__in unsigned long *, __RPC__in HDC * );
}
