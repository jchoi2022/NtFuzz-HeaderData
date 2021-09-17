#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWTSPlugin IWTSPlugin;
typedef interface IWTSListener IWTSListener;
typedef interface IWTSListenerCallback IWTSListenerCallback;
typedef interface IWTSVirtualChannelCallback IWTSVirtualChannelCallback;
typedef interface IWTSVirtualChannelManager IWTSVirtualChannelManager;
typedef interface IWTSVirtualChannel IWTSVirtualChannel;
typedef interface IWTSPluginServiceProvider IWTSPluginServiceProvider;
typedef interface IWTSBitmapRenderer IWTSBitmapRenderer;
typedef interface IWTSBitmapRendererCallback IWTSBitmapRendererCallback;
typedef interface IWTSBitmapRenderService IWTSBitmapRenderService;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C __declspec(selectany) const IID IID_IWTSPlugin = {0xA1230201, 0x1439, 0x4e62, { 0xa4, 0x14, 0x19, 0x0d, 0x0a, 0xc3, 0xd4, 0x0e}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSPlugin;
    typedef struct IWTSPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSPlugin * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWTSPlugin * This,
                       __RPC__in_opt IWTSVirtualChannelManager *pChannelMgr);
                           HRESULT ( STDMETHODCALLTYPE *Connected )(
            __RPC__in IWTSPlugin * This);
                           HRESULT ( STDMETHODCALLTYPE *Disconnected )(
            __RPC__in IWTSPlugin * This,
            DWORD dwDisconnectCode);
                           HRESULT ( STDMETHODCALLTYPE *Terminated )(
            __RPC__in IWTSPlugin * This);
        END_INTERFACE
    } IWTSPluginVtbl;
    interface IWTSPlugin
    {
        CONST_VTBL struct IWTSPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pChannelMgr) )
    ( (This)->lpVtbl -> Connected(This) )
    ( (This)->lpVtbl -> Disconnected(This,dwDisconnectCode) )
    ( (This)->lpVtbl -> Terminated(This) )
EXTERN_C __declspec(selectany) const IID IID_IWTSListener = {0xA1230206, 0x9a39, 0x4d58, {0x86, 0x74, 0xcd, 0xb4, 0xdf, 0xf4, 0xe7, 0x3b}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSListener;
    typedef struct IWTSListenerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSListener * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSListener * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSListener * This);
                           HRESULT ( STDMETHODCALLTYPE *GetConfiguration )(
            __RPC__in IWTSListener * This,
                        __RPC__deref_out_opt IPropertyBag **ppPropertyBag);
        END_INTERFACE
    } IWTSListenerVtbl;
    interface IWTSListener
    {
        CONST_VTBL struct IWTSListenerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConfiguration(This,ppPropertyBag) )
EXTERN_C __declspec(selectany) const IID IID_IWTSListenerCallback = {0xA1230203, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSListenerCallback;
    typedef struct IWTSListenerCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSListenerCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSListenerCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSListenerCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *OnNewChannelConnection )(
            __RPC__in IWTSListenerCallback * This,
                       __RPC__in_opt IWTSVirtualChannel *pChannel,
                             __RPC__in_opt BSTR data,
                        __RPC__out BOOL *pbAccept,
                        __RPC__deref_out_opt IWTSVirtualChannelCallback **ppCallback);
        END_INTERFACE
    } IWTSListenerCallbackVtbl;
    interface IWTSListenerCallback
    {
        CONST_VTBL struct IWTSListenerCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback) )
EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannelCallback = {0xA1230204, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSVirtualChannelCallback;
    typedef struct IWTSVirtualChannelCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSVirtualChannelCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSVirtualChannelCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSVirtualChannelCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *OnDataReceived )(
            __RPC__in IWTSVirtualChannelCallback * This,
                       ULONG cbSize,
                                __RPC__in_ecount_full(cbSize) BYTE *pBuffer);
                           HRESULT ( STDMETHODCALLTYPE *OnClose )(
            __RPC__in IWTSVirtualChannelCallback * This);
        END_INTERFACE
    } IWTSVirtualChannelCallbackVtbl;
    interface IWTSVirtualChannelCallback
    {
        CONST_VTBL struct IWTSVirtualChannelCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDataReceived(This,cbSize,pBuffer) )
    ( (This)->lpVtbl -> OnClose(This) )
EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannelManager = {0xA1230205,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSVirtualChannelManager;
    typedef struct IWTSVirtualChannelManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSVirtualChannelManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSVirtualChannelManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSVirtualChannelManager * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateListener )(
            __RPC__in IWTSVirtualChannelManager * This,
                               __RPC__in_string const char *pszChannelName,
                       ULONG uFlags,
                       __RPC__in_opt IWTSListenerCallback *pListenerCallback,
                        __RPC__deref_out_opt IWTSListener **ppListener);
        END_INTERFACE
    } IWTSVirtualChannelManagerVtbl;
    interface IWTSVirtualChannelManager
    {
        CONST_VTBL struct IWTSVirtualChannelManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener) )
EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannel = { 0xA1230207, 0xd6a7, 0x11d8, { 0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98} };
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSVirtualChannel;
    typedef struct IWTSVirtualChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSVirtualChannel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSVirtualChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSVirtualChannel * This);
                           HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IWTSVirtualChannel * This,
                       ULONG cbSize,
                                __RPC__in_ecount_full(cbSize) BYTE *pBuffer,
                       __RPC__in_opt IUnknown *pReserved);
                           HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IWTSVirtualChannel * This);
        END_INTERFACE
    } IWTSVirtualChannelVtbl;
    interface IWTSVirtualChannel
    {
        CONST_VTBL struct IWTSVirtualChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Write(This,cbSize,pBuffer,pReserved) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_GUID( RDCLIENT_BITMAP_RENDER_SERVICE, 0xe4cc08cb, 0x942e, 0x4b19, 0x85, 0x4, 0xbd, 0x5a, 0x89, 0xa7, 0x47, 0xf5);
EXTERN_C __declspec(selectany) const IID IID_IWTSPluginServiceProvider = { 0xd3e07363, 0x87c, 0x476c, { 0x86, 0xa7, 0xdb, 0xb1, 0x5f, 0x46, 0xdd, 0xb4 } };
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSPluginServiceProvider;
    typedef struct IWTSPluginServiceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSPluginServiceProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSPluginServiceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSPluginServiceProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *GetService )(
            __RPC__in IWTSPluginServiceProvider * This,
                       GUID ServiceId,
                        __RPC__deref_out_opt IUnknown **ppunkObject);
        END_INTERFACE
    } IWTSPluginServiceProviderVtbl;
    interface IWTSPluginServiceProvider
    {
        CONST_VTBL struct IWTSPluginServiceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetService(This,ServiceId,ppunkObject) )
typedef struct __BITMAP_RENDERER_STATISTICS
    {
    DWORD dwFramesDelivered;
    DWORD dwFramesDropped;
    } BITMAP_RENDERER_STATISTICS;
typedef struct __BITMAP_RENDERER_STATISTICS *PBITMAP_RENDERER_STATISTICS;
EXTERN_C __declspec(selectany) const IID IID_IWTSBitmapRenderer = { 0x5b7acc97, 0xf3c9, 0x46f7, { 0x8c, 0x5b, 0xfa, 0x68, 0x5d, 0x34, 0x41, 0xb1 } };
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSBitmapRenderer;
    typedef struct IWTSBitmapRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSBitmapRenderer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSBitmapRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSBitmapRenderer * This);
                           HRESULT ( STDMETHODCALLTYPE *Render )(
            __RPC__in IWTSBitmapRenderer * This,
                       GUID imageFormat,
                       DWORD dwWidth,
                       DWORD dwHeight,
                       LONG cbStride,
                       DWORD cbImageBuffer,
                                __RPC__in_ecount_full(cbImageBuffer) BYTE *pImageBuffer);
                           HRESULT ( STDMETHODCALLTYPE *GetRendererStatistics )(
            __RPC__in IWTSBitmapRenderer * This,
                        __RPC__out BITMAP_RENDERER_STATISTICS *pStatistics);
                           HRESULT ( STDMETHODCALLTYPE *RemoveMapping )(
            __RPC__in IWTSBitmapRenderer * This);
        END_INTERFACE
    } IWTSBitmapRendererVtbl;
    interface IWTSBitmapRenderer
    {
        CONST_VTBL struct IWTSBitmapRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Render(This,imageFormat,dwWidth,dwHeight,cbStride,cbImageBuffer,pImageBuffer) )
    ( (This)->lpVtbl -> GetRendererStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> RemoveMapping(This) )
EXTERN_C __declspec(selectany) const IID IID_IWTSBitmapRendererCallback = { 0xd782928e, 0xfe4e, 0x4e77, { 0xae, 0x90, 0x9c, 0xd0, 0xb3, 0xe3, 0xb3, 0x53 } };
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSBitmapRendererCallback;
    typedef struct IWTSBitmapRendererCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSBitmapRendererCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSBitmapRendererCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSBitmapRendererCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *OnTargetSizeChanged )(
            __RPC__in IWTSBitmapRendererCallback * This,
                       RECT rcNewSize);
        END_INTERFACE
    } IWTSBitmapRendererCallbackVtbl;
    interface IWTSBitmapRendererCallback
    {
        CONST_VTBL struct IWTSBitmapRendererCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTargetSizeChanged(This,rcNewSize) )
EXTERN_C __declspec(selectany) const IID IID_IWTSBitmapRenderService = { 0xea326091, 0x5fe, 0x40c1, { 0xb4, 0x9c, 0x3d, 0x2e, 0xf4, 0x62, 0x6a, 0xe } };
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IWTSBitmapRenderService;
    typedef struct IWTSBitmapRenderServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSBitmapRenderService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSBitmapRenderService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSBitmapRenderService * This);
                           HRESULT ( STDMETHODCALLTYPE *GetMappedRenderer )(
            __RPC__in IWTSBitmapRenderService * This,
                       UINT64 mappingId,
                       __RPC__in_opt IWTSBitmapRendererCallback *pMappedRendererCallback,
                        __RPC__deref_out_opt IWTSBitmapRenderer **ppMappedRenderer);
        END_INTERFACE
    } IWTSBitmapRenderServiceVtbl;
    interface IWTSBitmapRenderService
    {
        CONST_VTBL struct IWTSBitmapRenderServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMappedRenderer(This,mappingId,pMappedRendererCallback,ppMappedRenderer) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
