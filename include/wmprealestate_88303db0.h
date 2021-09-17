#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPNodeRealEstate IWMPNodeRealEstate;
typedef interface IWMPNodeRealEstateHost IWMPNodeRealEstateHost;
typedef interface IWMPNodeWindowed IWMPNodeWindowed;
typedef interface IWMPNodeWindowedHost IWMPNodeWindowedHost;
typedef interface IWMPWindowMessageSink IWMPWindowMessageSink;
typedef interface IWMPNodeWindowless IWMPNodeWindowless;
typedef interface IWMPNodeWindowlessHost IWMPNodeWindowlessHost;
typedef interface IWMPVideoRenderConfig IWMPVideoRenderConfig;
typedef interface IWMPAudioRenderConfig IWMPAudioRenderConfig;
typedef interface IWMPRenderConfig IWMPRenderConfig;
#include "unknwn.h"
#include "ocidl.h"
#include "mfidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPNodeRealEstate;
    typedef struct IWMPNodeRealEstateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNodeRealEstate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNodeRealEstate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNodeRealEstate * This);
        HRESULT ( STDMETHODCALLTYPE *GetDesiredSize )(
            IWMPNodeRealEstate * This,
                        LPSIZE pSize);
        HRESULT ( STDMETHODCALLTYPE *SetRects )(
            IWMPNodeRealEstate * This,
                       const RECT *pSrc,
                       const RECT *pDest,
                       const RECT *pClip);
        HRESULT ( STDMETHODCALLTYPE *GetRects )(
            IWMPNodeRealEstate * This,
                        RECT *pSrc,
                        RECT *pDest,
                        RECT *pClip);
        HRESULT ( STDMETHODCALLTYPE *SetWindowless )(
            IWMPNodeRealEstate * This,
                       BOOL fWindowless);
        HRESULT ( STDMETHODCALLTYPE *GetWindowless )(
            IWMPNodeRealEstate * This,
                        BOOL *pfWindowless);
        HRESULT ( STDMETHODCALLTYPE *SetFullScreen )(
            IWMPNodeRealEstate * This,
                       BOOL fFullScreen);
        HRESULT ( STDMETHODCALLTYPE *GetFullScreen )(
            IWMPNodeRealEstate * This,
                        BOOL *pfFullScreen);
        END_INTERFACE
    } IWMPNodeRealEstateVtbl;
    interface IWMPNodeRealEstate
    {
        CONST_VTBL struct IWMPNodeRealEstateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDesiredSize(This,pSize) )
    ( (This)->lpVtbl -> SetRects(This,pSrc,pDest,pClip) )
    ( (This)->lpVtbl -> GetRects(This,pSrc,pDest,pClip) )
    ( (This)->lpVtbl -> SetWindowless(This,fWindowless) )
    ( (This)->lpVtbl -> GetWindowless(This,pfWindowless) )
    ( (This)->lpVtbl -> SetFullScreen(This,fFullScreen) )
    ( (This)->lpVtbl -> GetFullScreen(This,pfFullScreen) )
EXTERN_C const IID IID_IWMPNodeRealEstateHost;
    typedef struct IWMPNodeRealEstateHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNodeRealEstateHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNodeRealEstateHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNodeRealEstateHost * This);
        HRESULT ( STDMETHODCALLTYPE *OnDesiredSizeChange )(
            IWMPNodeRealEstateHost * This,
                       LPSIZE pSize);
        HRESULT ( STDMETHODCALLTYPE *OnFullScreenTransition )(
            IWMPNodeRealEstateHost * This,
                       BOOL fFullScreen);
        END_INTERFACE
    } IWMPNodeRealEstateHostVtbl;
    interface IWMPNodeRealEstateHost
    {
        CONST_VTBL struct IWMPNodeRealEstateHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDesiredSizeChange(This,pSize) )
    ( (This)->lpVtbl -> OnFullScreenTransition(This,fFullScreen) )
typedef LONG_PTR OLE_HWND;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPNodeWindowed;
    typedef struct IWMPNodeWindowedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNodeWindowed * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNodeWindowed * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNodeWindowed * This);
        HRESULT ( STDMETHODCALLTYPE *SetOwnerWindow )(
            IWMPNodeWindowed * This,
                       OLE_HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerWindow )(
            IWMPNodeWindowed * This,
                        OLE_HWND *phwnd);
        END_INTERFACE
    } IWMPNodeWindowedVtbl;
    interface IWMPNodeWindowed
    {
        CONST_VTBL struct IWMPNodeWindowedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOwnerWindow(This,hwnd) )
    ( (This)->lpVtbl -> GetOwnerWindow(This,phwnd) )
EXTERN_C const IID IID_IWMPNodeWindowedHost;
    typedef struct IWMPNodeWindowedHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNodeWindowedHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNodeWindowedHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNodeWindowedHost * This);
        HRESULT ( STDMETHODCALLTYPE *OnWindowMessageFromRenderer )(
            IWMPNodeWindowedHost * This,
                       UINT uMsg,
                       WPARAM wparam,
                       LPARAM lparam,
                        LRESULT *plRet,
                        BOOL *pfHandled);
        END_INTERFACE
    } IWMPNodeWindowedHostVtbl;
    interface IWMPNodeWindowedHost
    {
        CONST_VTBL struct IWMPNodeWindowedHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWindowMessageFromRenderer(This,uMsg,wparam,lparam,plRet,pfHandled) )
EXTERN_C const IID IID_IWMPWindowMessageSink;
    typedef struct IWMPWindowMessageSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPWindowMessageSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPWindowMessageSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPWindowMessageSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnWindowMessage )(
            IWMPWindowMessageSink * This,
            UINT uMsg,
            WPARAM wparam,
            LPARAM lparam,
            LRESULT *plRet,
            BOOL *pfHandled);
        END_INTERFACE
    } IWMPWindowMessageSinkVtbl;
    interface IWMPWindowMessageSink
    {
        CONST_VTBL struct IWMPWindowMessageSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWindowMessage(This,uMsg,wparam,lparam,plRet,pfHandled) )
typedef LONG_PTR OLE_HDC;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPNodeWindowless;
    typedef struct IWMPNodeWindowlessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNodeWindowless * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNodeWindowless * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNodeWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *OnWindowMessage )(
            IWMPNodeWindowless * This,
            UINT uMsg,
            WPARAM wparam,
            LPARAM lparam,
            LRESULT *plRet,
            BOOL *pfHandled);
        HRESULT ( STDMETHODCALLTYPE *OnDraw )(
            IWMPNodeWindowless * This,
                       OLE_HDC hdc,
                       const RECT *prcDraw);
        END_INTERFACE
    } IWMPNodeWindowlessVtbl;
    interface IWMPNodeWindowless
    {
        CONST_VTBL struct IWMPNodeWindowlessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWindowMessage(This,uMsg,wparam,lparam,plRet,pfHandled) )
    ( (This)->lpVtbl -> OnDraw(This,hdc,prcDraw) )
EXTERN_C const IID IID_IWMPNodeWindowlessHost;
    typedef struct IWMPNodeWindowlessHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNodeWindowlessHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNodeWindowlessHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNodeWindowlessHost * This);
        HRESULT ( STDMETHODCALLTYPE *InvalidateRect )(
            IWMPNodeWindowlessHost * This,
                       const RECT *prc,
                       BOOL fErase);
        END_INTERFACE
    } IWMPNodeWindowlessHostVtbl;
    interface IWMPNodeWindowlessHost
    {
        CONST_VTBL struct IWMPNodeWindowlessHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InvalidateRect(This,prc,fErase) )
EXTERN_C const IID IID_IWMPVideoRenderConfig;
    typedef struct IWMPVideoRenderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPVideoRenderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPVideoRenderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPVideoRenderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *put_presenterActivate )(
            IWMPVideoRenderConfig * This,
                       IMFActivate *pActivate);
        END_INTERFACE
    } IWMPVideoRenderConfigVtbl;
    interface IWMPVideoRenderConfig
    {
        CONST_VTBL struct IWMPVideoRenderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_presenterActivate(This,pActivate) )
EXTERN_C const IID IID_IWMPAudioRenderConfig;
    typedef struct IWMPAudioRenderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPAudioRenderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPAudioRenderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPAudioRenderConfig * This);
                        HRESULT ( STDMETHODCALLTYPE *get_audioOutputDevice )(
            IWMPAudioRenderConfig * This,
                                BSTR *pbstrOutputDevice);
                        HRESULT ( STDMETHODCALLTYPE *put_audioOutputDevice )(
            IWMPAudioRenderConfig * This,
                               BSTR bstrOutputDevice);
        END_INTERFACE
    } IWMPAudioRenderConfigVtbl;
    interface IWMPAudioRenderConfig
    {
        CONST_VTBL struct IWMPAudioRenderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_audioOutputDevice(This,pbstrOutputDevice) )
    ( (This)->lpVtbl -> put_audioOutputDevice(This,bstrOutputDevice) )
EXTERN_C const IID IID_IWMPRenderConfig;
    typedef struct IWMPRenderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPRenderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPRenderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPRenderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *put_inProcOnly )(
            IWMPRenderConfig * This,
                       BOOL fInProc);
        HRESULT ( STDMETHODCALLTYPE *get_inProcOnly )(
            IWMPRenderConfig * This,
                        BOOL *pfInProc);
        END_INTERFACE
    } IWMPRenderConfigVtbl;
    interface IWMPRenderConfig
    {
        CONST_VTBL struct IWMPRenderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_inProcOnly(This,fInProc) )
    ( (This)->lpVtbl -> get_inProcOnly(This,pfInProc) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );
}
