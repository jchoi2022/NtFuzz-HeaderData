#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWiaVideo IWiaVideo;
typedef class WiaVideo WiaVideo;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_wiavideo_xp_0000_0000_0001
    {
        WIAVIDEO_NO_VIDEO = 1,
        WIAVIDEO_CREATING_VIDEO = 2,
        WIAVIDEO_VIDEO_CREATED = 3,
        WIAVIDEO_VIDEO_PLAYING = 4,
        WIAVIDEO_VIDEO_PAUSED = 5,
        WIAVIDEO_DESTROYING_VIDEO = 6
    } WIAVIDEO_STATE;
extern RPC_IF_HANDLE __MIDL_itf_wiavideo_xp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wiavideo_xp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWiaVideo;
    typedef struct IWiaVideoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaVideo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaVideo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaVideo * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreviewVisible )(
            __RPC__in IWiaVideo * This,
                                __RPC__out BOOL *pbPreviewVisible);
                                        HRESULT ( STDMETHODCALLTYPE *put_PreviewVisible )(
            __RPC__in IWiaVideo * This,
                       BOOL bPreviewVisible);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImagesDirectory )(
            __RPC__in IWiaVideo * This,
                                __RPC__deref_out_opt BSTR *pbstrImageDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *put_ImagesDirectory )(
            __RPC__in IWiaVideo * This,
                       __RPC__in BSTR bstrImageDirectory);
                               HRESULT ( STDMETHODCALLTYPE *CreateVideoByWiaDevID )(
            __RPC__in IWiaVideo * This,
                       __RPC__in BSTR bstrWiaDeviceID,
                       __RPC__in HWND hwndParent,
                       BOOL bStretchToFitParent,
                       BOOL bAutoBeginPlayback);
                               HRESULT ( STDMETHODCALLTYPE *CreateVideoByDevNum )(
            __RPC__in IWiaVideo * This,
                       UINT uiDeviceNumber,
                       __RPC__in HWND hwndParent,
                       BOOL bStretchToFitParent,
                       BOOL bAutoBeginPlayback);
                               HRESULT ( STDMETHODCALLTYPE *CreateVideoByName )(
            __RPC__in IWiaVideo * This,
                       __RPC__in BSTR bstrFriendlyName,
                       __RPC__in HWND hwndParent,
                       BOOL bStretchToFitParent,
                       BOOL bAutoBeginPlayback);
                               HRESULT ( STDMETHODCALLTYPE *DestroyVideo )(
            __RPC__in IWiaVideo * This);
                               HRESULT ( STDMETHODCALLTYPE *Play )(
            __RPC__in IWiaVideo * This);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IWiaVideo * This);
                               HRESULT ( STDMETHODCALLTYPE *TakePicture )(
            __RPC__in IWiaVideo * This,
                        __RPC__deref_out_opt BSTR *pbstrNewImageFilename);
                               HRESULT ( STDMETHODCALLTYPE *ResizeVideo )(
            __RPC__in IWiaVideo * This,
                       BOOL bStretchToFitParent);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrentState )(
            __RPC__in IWiaVideo * This,
                                __RPC__out WIAVIDEO_STATE *pState);
        END_INTERFACE
    } IWiaVideoVtbl;
    interface IWiaVideo
    {
        CONST_VTBL struct IWiaVideoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PreviewVisible(This,pbPreviewVisible) )
    ( (This)->lpVtbl -> put_PreviewVisible(This,bPreviewVisible) )
    ( (This)->lpVtbl -> get_ImagesDirectory(This,pbstrImageDirectory) )
    ( (This)->lpVtbl -> put_ImagesDirectory(This,bstrImageDirectory) )
    ( (This)->lpVtbl -> CreateVideoByWiaDevID(This,bstrWiaDeviceID,hwndParent,bStretchToFitParent,bAutoBeginPlayback) )
    ( (This)->lpVtbl -> CreateVideoByDevNum(This,uiDeviceNumber,hwndParent,bStretchToFitParent,bAutoBeginPlayback) )
    ( (This)->lpVtbl -> CreateVideoByName(This,bstrFriendlyName,hwndParent,bStretchToFitParent,bAutoBeginPlayback) )
    ( (This)->lpVtbl -> DestroyVideo(This) )
    ( (This)->lpVtbl -> Play(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> TakePicture(This,pbstrNewImageFilename) )
    ( (This)->lpVtbl -> ResizeVideo(This,bStretchToFitParent) )
    ( (This)->lpVtbl -> GetCurrentState(This,pState) )
EXTERN_C const IID LIBID_WIAVIDEOLib;
EXTERN_C const CLSID CLSID_WiaVideo;
class DECLSPEC_UUID("3908C3CD-4478-4536-AF2F-10C25D4EF89A")
WiaVideo;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wiavideo_xp_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wiavideo_xp_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
