#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISurfacePresenterFlipBuffer ISurfacePresenterFlipBuffer;
typedef interface ISurfacePresenterFlip ISurfacePresenterFlip;
typedef interface ISurfacePresenterFlip2 ISurfacePresenterFlip2;
typedef interface IViewObjectPresentFlipSite IViewObjectPresentFlipSite;
typedef interface IViewObjectPresentFlipSite2 IViewObjectPresentFlipSite2;
typedef interface IViewObjectPresentFlip IViewObjectPresentFlip;
typedef interface IViewObjectPresentFlip2 IViewObjectPresentFlip2;
typedef interface IActiveXUIHandlerSite2 IActiveXUIHandlerSite2;
typedef interface ICaretPositionProvider ICaretPositionProvider;
typedef interface ITridentTouchInput ITridentTouchInput;
typedef interface ITridentTouchInputSite ITridentTouchInputSite;
typedef interface IMediaActivityNotifySite IMediaActivityNotifySite;
typedef interface IAudioSessionSite IAudioSessionSite;
typedef interface IPrintTaskRequestHandler IPrintTaskRequestHandler;
typedef interface IPrintTaskRequestFactory IPrintTaskRequestFactory;
typedef interface IScrollableContextMenu IScrollableContextMenu;
typedef interface IScrollableContextMenu2 IScrollableContextMenu2;
typedef interface IActiveXUIHandlerSite IActiveXUIHandlerSite;
typedef interface IActiveXUIHandlerSite3 IActiveXUIHandlerSite3;
#include "ocidl.h"
#include "inspectable.h"
#include "mshtml.h"
#include "dxgi.h"
extern "C"{
       
extern RPC_IF_HANDLE __MIDL_itf_ie12plugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ie12plugin_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISurfacePresenterFlipBuffer;
    typedef struct ISurfacePresenterFlipBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISurfacePresenterFlipBuffer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISurfacePresenterFlipBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISurfacePresenterFlipBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *BeginDraw )(
            __RPC__in ISurfacePresenterFlipBuffer * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *EndDraw )(
            __RPC__in ISurfacePresenterFlipBuffer * This);
        END_INTERFACE
    } ISurfacePresenterFlipBufferVtbl;
    interface ISurfacePresenterFlipBuffer
    {
        CONST_VTBL struct ISurfacePresenterFlipBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginDraw(This,riid,ppBuffer) )
    ( (This)->lpVtbl -> EndDraw(This) )
EXTERN_C const IID IID_ISurfacePresenterFlip;
    typedef struct ISurfacePresenterFlipVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISurfacePresenterFlip * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISurfacePresenterFlip * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISurfacePresenterFlip * This);
        HRESULT ( STDMETHODCALLTYPE *Present )(
            __RPC__in ISurfacePresenterFlip * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            __RPC__in ISurfacePresenterFlip * This,
                       UINT backBufferIndex,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppBuffer);
        END_INTERFACE
    } ISurfacePresenterFlipVtbl;
    interface ISurfacePresenterFlip
    {
        CONST_VTBL struct ISurfacePresenterFlipVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Present(This) )
    ( (This)->lpVtbl -> GetBuffer(This,backBufferIndex,riid,ppBuffer) )
EXTERN_C const IID IID_ISurfacePresenterFlip2;
    typedef struct ISurfacePresenterFlip2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISurfacePresenterFlip2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISurfacePresenterFlip2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISurfacePresenterFlip2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            __RPC__in ISurfacePresenterFlip2 * This,
                       DXGI_MODE_ROTATION dxgiRotation);
        END_INTERFACE
    } ISurfacePresenterFlip2Vtbl;
    interface ISurfacePresenterFlip2
    {
        CONST_VTBL struct ISurfacePresenterFlip2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRotation(This,dxgiRotation) )
EXTERN_C const IID IID_IViewObjectPresentFlipSite;
    typedef struct IViewObjectPresentFlipSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObjectPresentFlipSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObjectPresentFlipSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObjectPresentFlipSite * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSurfacePresenterFlip )(
            __RPC__in IViewObjectPresentFlipSite * This,
                       __RPC__in_opt IUnknown *pDevice,
                       UINT width,
                       UINT height,
                       UINT backBufferCount,
                       DXGI_FORMAT format,
                       VIEW_OBJECT_ALPHA_MODE mode,
                                __RPC__deref_out_opt ISurfacePresenterFlip **ppSPFlip);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceLuid )(
            __RPC__in IViewObjectPresentFlipSite * This,
                                __RPC__out LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *EnterFullScreen )(
            __RPC__in IViewObjectPresentFlipSite * This);
        HRESULT ( STDMETHODCALLTYPE *ExitFullScreen )(
            __RPC__in IViewObjectPresentFlipSite * This);
        HRESULT ( STDMETHODCALLTYPE *IsFullScreen )(
            __RPC__in IViewObjectPresentFlipSite * This,
                                __RPC__out BOOL *pfFullScreen);
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRect )(
            __RPC__in IViewObjectPresentFlipSite * This,
                        __RPC__out RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *GetMetrics )(
            __RPC__in IViewObjectPresentFlipSite * This,
                        __RPC__out POINT *pPos,
                        __RPC__out SIZE *pSize,
                        __RPC__out float *pScaleX,
                        __RPC__out float *pScaleY);
        HRESULT ( STDMETHODCALLTYPE *GetFullScreenSize )(
            __RPC__in IViewObjectPresentFlipSite * This,
                        __RPC__out SIZE *pSize);
        END_INTERFACE
    } IViewObjectPresentFlipSiteVtbl;
    interface IViewObjectPresentFlipSite
    {
        CONST_VTBL struct IViewObjectPresentFlipSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSurfacePresenterFlip(This,pDevice,width,height,backBufferCount,format,mode,ppSPFlip) )
    ( (This)->lpVtbl -> GetDeviceLuid(This,pLuid) )
    ( (This)->lpVtbl -> EnterFullScreen(This) )
    ( (This)->lpVtbl -> ExitFullScreen(This) )
    ( (This)->lpVtbl -> IsFullScreen(This,pfFullScreen) )
    ( (This)->lpVtbl -> GetBoundingRect(This,pRect) )
    ( (This)->lpVtbl -> GetMetrics(This,pPos,pSize,pScaleX,pScaleY) )
    ( (This)->lpVtbl -> GetFullScreenSize(This,pSize) )
EXTERN_C const IID IID_IViewObjectPresentFlipSite2;
    typedef struct IViewObjectPresentFlipSite2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObjectPresentFlipSite2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObjectPresentFlipSite2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObjectPresentFlipSite2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRotationForCurrentOutput )(
            __RPC__in IViewObjectPresentFlipSite2 * This,
                        __RPC__out DXGI_MODE_ROTATION *pDxgiRotation);
        END_INTERFACE
    } IViewObjectPresentFlipSite2Vtbl;
    interface IViewObjectPresentFlipSite2
    {
        CONST_VTBL struct IViewObjectPresentFlipSite2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRotationForCurrentOutput(This,pDxgiRotation) )
EXTERN_C const IID IID_IViewObjectPresentFlip;
    typedef struct IViewObjectPresentFlipVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObjectPresentFlip * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObjectPresentFlip * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObjectPresentFlip * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyRender )(
            __RPC__in IViewObjectPresentFlip * This,
            BOOL fRecreatePresenter);
        HRESULT ( STDMETHODCALLTYPE *RenderObjectToBitmap )(
            __RPC__in IViewObjectPresentFlip * This,
                       __RPC__in_opt IUnknown *pBitmap);
        HRESULT ( STDMETHODCALLTYPE *RenderObjectToSharedBuffer )(
            __RPC__in IViewObjectPresentFlip * This,
                       __RPC__in_opt ISurfacePresenterFlipBuffer *pBuffer);
        END_INTERFACE
    } IViewObjectPresentFlipVtbl;
    interface IViewObjectPresentFlip
    {
        CONST_VTBL struct IViewObjectPresentFlipVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyRender(This,fRecreatePresenter) )
    ( (This)->lpVtbl -> RenderObjectToBitmap(This,pBitmap) )
    ( (This)->lpVtbl -> RenderObjectToSharedBuffer(This,pBuffer) )
EXTERN_C const IID IID_IViewObjectPresentFlip2;
    typedef struct IViewObjectPresentFlip2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObjectPresentFlip2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObjectPresentFlip2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObjectPresentFlip2 * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyLeavingView )(
            __RPC__in IViewObjectPresentFlip2 * This);
        END_INTERFACE
    } IViewObjectPresentFlip2Vtbl;
    interface IViewObjectPresentFlip2
    {
        CONST_VTBL struct IViewObjectPresentFlip2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyLeavingView(This) )
EXTERN_C const IID IID_IActiveXUIHandlerSite2;
    typedef struct IActiveXUIHandlerSite2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveXUIHandlerSite2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveXUIHandlerSite2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveXUIHandlerSite2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddSuspensionExemption )(
            __RPC__in IActiveXUIHandlerSite2 * This,
                                __RPC__out ULONGLONG *pullCookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveSuspensionExemption )(
            __RPC__in IActiveXUIHandlerSite2 * This,
                       ULONGLONG ullCookie);
        END_INTERFACE
    } IActiveXUIHandlerSite2Vtbl;
    interface IActiveXUIHandlerSite2
    {
        CONST_VTBL struct IActiveXUIHandlerSite2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddSuspensionExemption(This,pullCookie) )
    ( (This)->lpVtbl -> RemoveSuspensionExemption(This,ullCookie) )
EXTERN_C const IID IID_ICaretPositionProvider;
    typedef struct ICaretPositionProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICaretPositionProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICaretPositionProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICaretPositionProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetCaretPosition )(
            __RPC__in ICaretPositionProvider * This,
                        __RPC__out POINT *pptCaret,
                        __RPC__out float *pflHeight);
        END_INTERFACE
    } ICaretPositionProviderVtbl;
    interface ICaretPositionProvider
    {
        CONST_VTBL struct ICaretPositionProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCaretPosition(This,pptCaret,pflHeight) )
EXTERN_C const IID IID_ITridentTouchInput;
    typedef struct ITridentTouchInputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITridentTouchInput * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITridentTouchInput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITridentTouchInput * This);
        HRESULT ( STDMETHODCALLTYPE *OnPointerMessage )(
            __RPC__in ITridentTouchInput * This,
                       UINT msg,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out BOOL *pfAllowManipulations);
        END_INTERFACE
    } ITridentTouchInputVtbl;
    interface ITridentTouchInput
    {
        CONST_VTBL struct ITridentTouchInputVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPointerMessage(This,msg,wParam,lParam,pfAllowManipulations) )
EXTERN_C const IID IID_ITridentTouchInputSite;
    typedef struct ITridentTouchInputSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITridentTouchInputSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITridentTouchInputSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITridentTouchInputSite * This);
        HRESULT ( STDMETHODCALLTYPE *SetManipulationMode )(
            __RPC__in ITridentTouchInputSite * This,
                       styleMsTouchAction msTouchAction);
        HRESULT ( STDMETHODCALLTYPE *ZoomToPoint )(
            __RPC__in ITridentTouchInputSite * This,
                       LONG x,
                       LONG y);
        END_INTERFACE
    } ITridentTouchInputSiteVtbl;
    interface ITridentTouchInputSite
    {
        CONST_VTBL struct ITridentTouchInputSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetManipulationMode(This,msTouchAction) )
    ( (This)->lpVtbl -> ZoomToPoint(This,x,y) )
typedef
enum MediaActivityNotifyType
    {
        MediaPlayback = 0,
        MediaRecording = ( MediaPlayback + 1 ) ,
        MediaCasting = ( MediaRecording + 1 )
    } MEDIA_ACTIVITY_NOTIFY_TYPE;
EXTERN_C const IID IID_IMediaActivityNotifySite;
    typedef struct IMediaActivityNotifySiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaActivityNotifySite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaActivityNotifySite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaActivityNotifySite * This);
        HRESULT ( STDMETHODCALLTYPE *OnMediaActivityStarted )(
            __RPC__in IMediaActivityNotifySite * This,
                       MEDIA_ACTIVITY_NOTIFY_TYPE mediaActivityType);
        HRESULT ( STDMETHODCALLTYPE *OnMediaActivityStopped )(
            __RPC__in IMediaActivityNotifySite * This,
                       MEDIA_ACTIVITY_NOTIFY_TYPE mediaActivityType);
        END_INTERFACE
    } IMediaActivityNotifySiteVtbl;
    interface IMediaActivityNotifySite
    {
        CONST_VTBL struct IMediaActivityNotifySiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnMediaActivityStarted(This,mediaActivityType) )
    ( (This)->lpVtbl -> OnMediaActivityStopped(This,mediaActivityType) )
EXTERN_C const IID IID_IAudioSessionSite;
    typedef struct IAudioSessionSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioSessionSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioSessionSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioSessionSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetAudioSessionGuid )(
            __RPC__in IAudioSessionSite * This,
                                __RPC__out GUID *audioSessionGuid);
        HRESULT ( STDMETHODCALLTYPE *OnAudioStreamCreated )(
            __RPC__in IAudioSessionSite * This,
                               __RPC__in_string LPCWSTR endpointID);
        HRESULT ( STDMETHODCALLTYPE *OnAudioStreamDestroyed )(
            __RPC__in IAudioSessionSite * This,
                               __RPC__in_string LPCWSTR endpointID);
        END_INTERFACE
    } IAudioSessionSiteVtbl;
    interface IAudioSessionSite
    {
        CONST_VTBL struct IAudioSessionSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAudioSessionGuid(This,audioSessionGuid) )
    ( (This)->lpVtbl -> OnAudioStreamCreated(This,endpointID) )
    ( (This)->lpVtbl -> OnAudioStreamDestroyed(This,endpointID) )
EXTERN_C const IID IID_IPrintTaskRequestHandler;
    typedef struct IPrintTaskRequestHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintTaskRequestHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintTaskRequestHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintTaskRequestHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandlePrintTaskRequest )(
            IPrintTaskRequestHandler * This,
                       IInspectable *pPrintTaskRequest);
        END_INTERFACE
    } IPrintTaskRequestHandlerVtbl;
    interface IPrintTaskRequestHandler
    {
        CONST_VTBL struct IPrintTaskRequestHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandlePrintTaskRequest(This,pPrintTaskRequest) )
EXTERN_C const IID IID_IPrintTaskRequestFactory;
    typedef struct IPrintTaskRequestFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintTaskRequestFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintTaskRequestFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintTaskRequestFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePrintTaskRequest )(
            __RPC__in IPrintTaskRequestFactory * This,
                       __RPC__in_opt IPrintTaskRequestHandler *pPrintTaskRequestHandler);
        END_INTERFACE
    } IPrintTaskRequestFactoryVtbl;
    interface IPrintTaskRequestFactory
    {
        CONST_VTBL struct IPrintTaskRequestFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePrintTaskRequest(This,pPrintTaskRequestHandler) )
EXTERN_C const IID IID_IScrollableContextMenu;
    typedef struct IScrollableContextMenuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScrollableContextMenu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScrollableContextMenu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScrollableContextMenu * This);
        HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IScrollableContextMenu * This,
                               __RPC__in_string LPCWSTR itemText,
                       DWORD cmdID);
        HRESULT ( STDMETHODCALLTYPE *ShowModal )(
            __RPC__in IScrollableContextMenu * This,
                       int x,
                       int y,
                        __RPC__out DWORD *cmdID);
        END_INTERFACE
    } IScrollableContextMenuVtbl;
    interface IScrollableContextMenu
    {
        CONST_VTBL struct IScrollableContextMenuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,itemText,cmdID) )
    ( (This)->lpVtbl -> ShowModal(This,x,y,cmdID) )
typedef
enum tagSCROLLABLECONTEXTMENU_PLACEMENT
    {
        SCMP_TOP = 0,
        SCMP_BOTTOM = 1,
        SCMP_LEFT = 2,
        SCMP_RIGHT = 3,
        SCMP_FULL = 4
    } SCROLLABLECONTEXTMENU_PLACEMENT;
EXTERN_C const IID IID_IScrollableContextMenu2;
    typedef struct IScrollableContextMenu2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScrollableContextMenu2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScrollableContextMenu2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScrollableContextMenu2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IScrollableContextMenu2 * This,
                               __RPC__in_string LPCWSTR itemText,
                       DWORD cmdID);
        HRESULT ( STDMETHODCALLTYPE *ShowModal )(
            __RPC__in IScrollableContextMenu2 * This,
                       int x,
                       int y,
                        __RPC__out DWORD *cmdID);
        HRESULT ( STDMETHODCALLTYPE *AddSeparator )(
            __RPC__in IScrollableContextMenu2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPlacement )(
            __RPC__in IScrollableContextMenu2 * This,
                       SCROLLABLECONTEXTMENU_PLACEMENT scmp);
        END_INTERFACE
    } IScrollableContextMenu2Vtbl;
    interface IScrollableContextMenu2
    {
        CONST_VTBL struct IScrollableContextMenu2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,itemText,cmdID) )
    ( (This)->lpVtbl -> ShowModal(This,x,y,cmdID) )
    ( (This)->lpVtbl -> AddSeparator(This) )
    ( (This)->lpVtbl -> SetPlacement(This,scmp) )
EXTERN_C const IID IID_IActiveXUIHandlerSite;
    typedef struct IActiveXUIHandlerSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveXUIHandlerSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveXUIHandlerSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveXUIHandlerSite * This);
        HRESULT ( STDMETHODCALLTYPE *CreateScrollableContextMenu )(
            __RPC__in IActiveXUIHandlerSite * This,
                                __RPC__deref_out_opt IScrollableContextMenu **scrollableContextMenu);
        HRESULT ( STDMETHODCALLTYPE *PickFileAndGetResult )(
            __RPC__in IActiveXUIHandlerSite * This,
                       __RPC__in_opt IUnknown *filePicker,
                       BOOL allowMultipleSelections,
                                __RPC__deref_out_opt IUnknown **result);
        END_INTERFACE
    } IActiveXUIHandlerSiteVtbl;
    interface IActiveXUIHandlerSite
    {
        CONST_VTBL struct IActiveXUIHandlerSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateScrollableContextMenu(This,scrollableContextMenu) )
    ( (This)->lpVtbl -> PickFileAndGetResult(This,filePicker,allowMultipleSelections,result) )
EXTERN_C const IID IID_IActiveXUIHandlerSite3;
    typedef struct IActiveXUIHandlerSite3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveXUIHandlerSite3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveXUIHandlerSite3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveXUIHandlerSite3 * This);
        HRESULT ( STDMETHODCALLTYPE *MessageBoxW )(
            __RPC__in IActiveXUIHandlerSite3 * This,
                               __RPC__in_opt HWND hwnd,
                               __RPC__in_opt LPCWSTR text,
                               __RPC__in_opt LPCWSTR caption,
                       UINT type,
                        __RPC__out INT *result);
        END_INTERFACE
    } IActiveXUIHandlerSite3Vtbl;
    interface IActiveXUIHandlerSite3
    {
        CONST_VTBL struct IActiveXUIHandlerSite3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MessageBoxW(This,hwnd,text,caption,type,result) )
extern RPC_IF_HANDLE __MIDL_itf_ie12plugin_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ie12plugin_0000_0019_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
