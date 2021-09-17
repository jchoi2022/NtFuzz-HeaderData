#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFSharingEngineClassFactory IMFSharingEngineClassFactory;
typedef interface IMFMediaSharingEngine IMFMediaSharingEngine;
typedef interface IMFMediaSharingEngineClassFactory IMFMediaSharingEngineClassFactory;
typedef interface IMFImageSharingEngine IMFImageSharingEngine;
typedef interface IMFImageSharingEngineClassFactory IMFImageSharingEngineClassFactory;
typedef interface IPlayToControl IPlayToControl;
typedef interface IPlayToControlWithCapabilities IPlayToControlWithCapabilities;
typedef interface IPlayToSourceClassFactory IPlayToSourceClassFactory;
#include "MFMediaEngine.h"
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct DEVICE_INFO
    {
    BSTR pFriendlyDeviceName;
    BSTR pUniqueDeviceName;
    BSTR pManufacturerName;
    BSTR pModelName;
    BSTR pIconURL;
    } DEVICE_INFO;
typedef
enum MF_SHARING_ENGINE_EVENT
    {
        MF_SHARING_ENGINE_EVENT_DISCONNECT = 2000,
        MF_SHARING_ENGINE_EVENT_LOCALRENDERINGSTARTED = 2001,
        MF_SHARING_ENGINE_EVENT_LOCALRENDERINGENDED = 2002,
        MF_SHARING_ENGINE_EVENT_STOPPED = 2003,
        MF_SHARING_ENGINE_EVENT_ERROR = 2501
    } MF_SHARING_ENGINE_EVENT;
typedef
enum MF_MEDIA_SHARING_ENGINE_EVENT
    {
        MF_MEDIA_SHARING_ENGINE_EVENT_DISCONNECT = 2000
    } MF_MEDIA_SHARING_ENGINE_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSharingEngineClassFactory;
    typedef struct IMFSharingEngineClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSharingEngineClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSharingEngineClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSharingEngineClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IMFSharingEngineClassFactory * This,
            _In_ DWORD dwFlags,
            _In_opt_ IMFAttributes *pAttr,
            _COM_Outptr_ IUnknown **ppEngine);
        END_INTERFACE
    } IMFSharingEngineClassFactoryVtbl;
    interface IMFSharingEngineClassFactory
    {
        CONST_VTBL struct IMFSharingEngineClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,dwFlags,pAttr,ppEngine) )
EXTERN_C const IID IID_IMFMediaSharingEngine;
    typedef struct IMFMediaSharingEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaSharingEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaSharingEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            IMFMediaSharingEngine * This,
            _Outptr_ IMFMediaError **ppError);
        HRESULT ( STDMETHODCALLTYPE *SetErrorCode )(
            IMFMediaSharingEngine * This,
            _In_ MF_MEDIA_ENGINE_ERR error);
        HRESULT ( STDMETHODCALLTYPE *SetSourceElements )(
            IMFMediaSharingEngine * This,
            _In_ IMFMediaEngineSrcElements *pSrcElements);
        HRESULT ( STDMETHODCALLTYPE *SetSource )(
            IMFMediaSharingEngine * This,
            _In_ BSTR pUrl);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSource )(
            IMFMediaSharingEngine * This,
            _Out_ BSTR *ppUrl);
        USHORT ( STDMETHODCALLTYPE *GetNetworkState )(
            IMFMediaSharingEngine * This);
        MF_MEDIA_ENGINE_PRELOAD ( STDMETHODCALLTYPE *GetPreload )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetPreload )(
            IMFMediaSharingEngine * This,
            _In_ MF_MEDIA_ENGINE_PRELOAD Preload);
        HRESULT ( STDMETHODCALLTYPE *GetBuffered )(
            IMFMediaSharingEngine * This,
            _Outptr_ IMFMediaTimeRange **ppBuffered);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *CanPlayType )(
            IMFMediaSharingEngine * This,
            _In_ BSTR type,
            _Out_ MF_MEDIA_ENGINE_CANPLAY *pAnswer);
        USHORT ( STDMETHODCALLTYPE *GetReadyState )(
            IMFMediaSharingEngine * This);
        BOOL ( STDMETHODCALLTYPE *IsSeeking )(
            IMFMediaSharingEngine * This);
        double ( STDMETHODCALLTYPE *GetCurrentTime )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentTime )(
            IMFMediaSharingEngine * This,
            _In_ double seekTime);
        double ( STDMETHODCALLTYPE *GetStartTime )(
            IMFMediaSharingEngine * This);
        double ( STDMETHODCALLTYPE *GetDuration )(
            IMFMediaSharingEngine * This);
        BOOL ( STDMETHODCALLTYPE *IsPaused )(
            IMFMediaSharingEngine * This);
        double ( STDMETHODCALLTYPE *GetDefaultPlaybackRate )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultPlaybackRate )(
            IMFMediaSharingEngine * This,
            _In_ double Rate);
        double ( STDMETHODCALLTYPE *GetPlaybackRate )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetPlaybackRate )(
            IMFMediaSharingEngine * This,
            _In_ double Rate);
        HRESULT ( STDMETHODCALLTYPE *GetPlayed )(
            IMFMediaSharingEngine * This,
            _Outptr_ IMFMediaTimeRange **ppPlayed);
        HRESULT ( STDMETHODCALLTYPE *GetSeekable )(
            IMFMediaSharingEngine * This,
            _Outptr_ IMFMediaTimeRange **ppSeekable);
        BOOL ( STDMETHODCALLTYPE *IsEnded )(
            IMFMediaSharingEngine * This);
        BOOL ( STDMETHODCALLTYPE *GetAutoPlay )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetAutoPlay )(
            IMFMediaSharingEngine * This,
            _In_ BOOL AutoPlay);
        BOOL ( STDMETHODCALLTYPE *GetLoop )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetLoop )(
            IMFMediaSharingEngine * This,
            _In_ BOOL Loop);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMFMediaSharingEngine * This);
        BOOL ( STDMETHODCALLTYPE *GetMuted )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetMuted )(
            IMFMediaSharingEngine * This,
            _In_ BOOL Muted);
        double ( STDMETHODCALLTYPE *GetVolume )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetVolume )(
            IMFMediaSharingEngine * This,
            _In_ double Volume);
        BOOL ( STDMETHODCALLTYPE *HasVideo )(
            IMFMediaSharingEngine * This);
        BOOL ( STDMETHODCALLTYPE *HasAudio )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            IMFMediaSharingEngine * This,
            _Out_opt_ DWORD *cx,
            _Out_opt_ DWORD *cy);
        HRESULT ( STDMETHODCALLTYPE *GetVideoAspectRatio )(
            IMFMediaSharingEngine * This,
            _Out_opt_ DWORD *cx,
            _Out_opt_ DWORD *cy);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *TransferVideoFrame )(
            IMFMediaSharingEngine * This,
            _In_ IUnknown *pDstSurf,
            _In_opt_ const MFVideoNormalizedRect *pSrc,
            _In_ const RECT *pDst,
            _In_opt_ const MFARGB *pBorderClr);
        HRESULT ( STDMETHODCALLTYPE *OnVideoStreamTick )(
            IMFMediaSharingEngine * This,
            _Out_ LONGLONG *pPts);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IMFMediaSharingEngine * This,
            _Out_ DEVICE_INFO *pDevice);
        END_INTERFACE
    } IMFMediaSharingEngineVtbl;
    interface IMFMediaSharingEngine
    {
        CONST_VTBL struct IMFMediaSharingEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetError(This,ppError) )
    ( (This)->lpVtbl -> SetErrorCode(This,error) )
    ( (This)->lpVtbl -> SetSourceElements(This,pSrcElements) )
    ( (This)->lpVtbl -> SetSource(This,pUrl) )
    ( (This)->lpVtbl -> GetCurrentSource(This,ppUrl) )
    ( (This)->lpVtbl -> GetNetworkState(This) )
    ( (This)->lpVtbl -> GetPreload(This) )
    ( (This)->lpVtbl -> SetPreload(This,Preload) )
    ( (This)->lpVtbl -> GetBuffered(This,ppBuffered) )
    ( (This)->lpVtbl -> Load(This) )
    ( (This)->lpVtbl -> CanPlayType(This,type,pAnswer) )
    ( (This)->lpVtbl -> GetReadyState(This) )
    ( (This)->lpVtbl -> IsSeeking(This) )
    ( (This)->lpVtbl -> GetCurrentTime(This) )
    ( (This)->lpVtbl -> SetCurrentTime(This,seekTime) )
    ( (This)->lpVtbl -> GetStartTime(This) )
    ( (This)->lpVtbl -> GetDuration(This) )
    ( (This)->lpVtbl -> IsPaused(This) )
    ( (This)->lpVtbl -> GetDefaultPlaybackRate(This) )
    ( (This)->lpVtbl -> SetDefaultPlaybackRate(This,Rate) )
    ( (This)->lpVtbl -> GetPlaybackRate(This) )
    ( (This)->lpVtbl -> SetPlaybackRate(This,Rate) )
    ( (This)->lpVtbl -> GetPlayed(This,ppPlayed) )
    ( (This)->lpVtbl -> GetSeekable(This,ppSeekable) )
    ( (This)->lpVtbl -> IsEnded(This) )
    ( (This)->lpVtbl -> GetAutoPlay(This) )
    ( (This)->lpVtbl -> SetAutoPlay(This,AutoPlay) )
    ( (This)->lpVtbl -> GetLoop(This) )
    ( (This)->lpVtbl -> SetLoop(This,Loop) )
    ( (This)->lpVtbl -> Play(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> GetMuted(This) )
    ( (This)->lpVtbl -> SetMuted(This,Muted) )
    ( (This)->lpVtbl -> GetVolume(This) )
    ( (This)->lpVtbl -> SetVolume(This,Volume) )
    ( (This)->lpVtbl -> HasVideo(This) )
    ( (This)->lpVtbl -> HasAudio(This) )
    ( (This)->lpVtbl -> GetNativeVideoSize(This,cx,cy) )
    ( (This)->lpVtbl -> GetVideoAspectRatio(This,cx,cy) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> TransferVideoFrame(This,pDstSurf,pSrc,pDst,pBorderClr) )
    ( (This)->lpVtbl -> OnVideoStreamTick(This,pPts) )
    ( (This)->lpVtbl -> GetDevice(This,pDevice) )
EXTERN_GUID(MF_MEDIA_SHARING_ENGINE_DEVICE_NAME,
0x771e05d1, 0x862f, 0x4299, 0x95, 0xac, 0xae, 0x81, 0xfd, 0x14, 0xf3, 0xe7);
EXTERN_GUID(MF_MEDIA_SHARING_ENGINE_DEVICE,
0xb461c58a, 0x7a08, 0x4b98, 0x99, 0xa8, 0x70, 0xfd, 0x5f, 0x3b, 0xad, 0xfd);
DEFINE_GUID(MF_MEDIA_SHARING_ENGINE_INITIAL_SEEK_TIME,
0x6f3497f5, 0xd528, 0x4a4f, 0x8d, 0xd7, 0xdb, 0x36, 0x65, 0x7e, 0xc4, 0xc9);
DEFINE_GUID(MF_SHUTDOWN_RENDERER_ON_ENGINE_SHUTDOWN,
0xc112d94d, 0x6b9c, 0x48f8, 0xb6, 0xf9, 0x79, 0x50, 0xff, 0x9a, 0xb7, 0x1e);
DEFINE_GUID(MF_PREFERRED_SOURCE_URI,
0x5fc85488, 0x436a, 0x4db8, 0x90, 0xaf, 0x4d, 0xb4, 0x2, 0xae, 0x5c, 0x57);
DEFINE_GUID(MF_SHARING_ENGINE_SHAREDRENDERER,
0xefa446a0, 0x73e7, 0x404e, 0x8a, 0xe2, 0xfe, 0xf6, 0x0a, 0xf5, 0xa3, 0x2b);
DEFINE_GUID(MF_SHARING_ENGINE_CALLBACK,
0x57dc1e95, 0xd252, 0x43fa, 0x9b, 0xbc, 0x18, 0x0, 0x70, 0xee, 0xfe, 0x6d);
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSharingEngineClassFactory;
    typedef struct IMFMediaSharingEngineClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaSharingEngineClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaSharingEngineClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaSharingEngineClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IMFMediaSharingEngineClassFactory * This,
            _In_ DWORD dwFlags,
            _In_ IMFAttributes *pAttr,
            _Outptr_ IMFMediaSharingEngine **ppEngine);
        END_INTERFACE
    } IMFMediaSharingEngineClassFactoryVtbl;
    interface IMFMediaSharingEngineClassFactory
    {
        CONST_VTBL struct IMFMediaSharingEngineClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,dwFlags,pAttr,ppEngine) )
EXTERN_GUID(CLSID_MFMediaSharingEngineClassFactory, 0xf8e307fb, 0x6d45, 0x4ad3, 0x99, 0x93, 0x66, 0xcd, 0x5a, 0x52, 0x96, 0x59);
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFImageSharingEngine;
    typedef struct IMFImageSharingEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFImageSharingEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFImageSharingEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFImageSharingEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetSource )(
            IMFImageSharingEngine * This,
            _In_ IUnknown *pStream);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IMFImageSharingEngine * This,
            _Out_ DEVICE_INFO *pDevice);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFImageSharingEngine * This);
        END_INTERFACE
    } IMFImageSharingEngineVtbl;
    interface IMFImageSharingEngine
    {
        CONST_VTBL struct IMFImageSharingEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSource(This,pStream) )
    ( (This)->lpVtbl -> GetDevice(This,pDevice) )
    ( (This)->lpVtbl -> Shutdown(This) )
EXTERN_C const IID IID_IMFImageSharingEngineClassFactory;
    typedef struct IMFImageSharingEngineClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFImageSharingEngineClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFImageSharingEngineClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFImageSharingEngineClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromUDN )(
            IMFImageSharingEngineClassFactory * This,
            _In_ BSTR pUniqueDeviceName,
            _Outptr_ IMFImageSharingEngine **ppEngine);
        END_INTERFACE
    } IMFImageSharingEngineClassFactoryVtbl;
    interface IMFImageSharingEngineClassFactory
    {
        CONST_VTBL struct IMFImageSharingEngineClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstanceFromUDN(This,pUniqueDeviceName,ppEngine) )
EXTERN_GUID(CLSID_MFImageSharingEngineClassFactory, 0xb22c3339, 0x87f3, 0x4059, 0xa0, 0xc5, 0x3, 0x7a, 0xa9, 0x70, 0x7e, 0xaf);
typedef
enum PLAYTO_SOURCE_CREATEFLAGS
    {
        PLAYTO_SOURCE_NONE = 0,
        PLAYTO_SOURCE_IMAGE = 0x1,
        PLAYTO_SOURCE_AUDIO = 0x2,
        PLAYTO_SOURCE_VIDEO = 0x4,
        PLAYTO_SOURCE_PROTECTED = 0x8
    } PLAYTO_SOURCE_CREATEFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PLAYTO_SOURCE_CREATEFLAGS)
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IPlayToControl;
    typedef struct IPlayToControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPlayToControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPlayToControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPlayToControl * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IPlayToControl * This,
                       __RPC__in_opt IMFSharingEngineClassFactory *pFactory);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IPlayToControl * This);
        END_INTERFACE
    } IPlayToControlVtbl;
    interface IPlayToControl
    {
        CONST_VTBL struct IPlayToControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This,pFactory) )
    ( (This)->lpVtbl -> Disconnect(This) )
EXTERN_C const IID IID_IPlayToControlWithCapabilities;
    typedef struct IPlayToControlWithCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPlayToControlWithCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPlayToControlWithCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPlayToControlWithCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IPlayToControlWithCapabilities * This,
                       __RPC__in_opt IMFSharingEngineClassFactory *pFactory);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IPlayToControlWithCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IPlayToControlWithCapabilities * This,
                        __RPC__out PLAYTO_SOURCE_CREATEFLAGS *pCapabilities);
        END_INTERFACE
    } IPlayToControlWithCapabilitiesVtbl;
    interface IPlayToControlWithCapabilities
    {
        CONST_VTBL struct IPlayToControlWithCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This,pFactory) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
EXTERN_C const IID IID_IPlayToSourceClassFactory;
    typedef struct IPlayToSourceClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPlayToSourceClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPlayToSourceClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPlayToSourceClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IPlayToSourceClassFactory * This,
            _In_ DWORD dwFlags,
            _In_ IPlayToControl *pControl,
            _Outptr_ IInspectable **ppSource);
        END_INTERFACE
    } IPlayToSourceClassFactoryVtbl;
    interface IPlayToSourceClassFactory
    {
        CONST_VTBL struct IPlayToSourceClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,dwFlags,pControl,ppSource) )
EXTERN_GUID(CLSID_PlayToSourceClassFactory, 0xDA17539A, 0x3DC3, 0x42C1, 0xA7, 0x49, 0xA1, 0x83, 0xB5, 0x1F, 0x08, 0x5E);
EXTERN_GUID(GUID_PlayToService, 0xf6a8ff9d, 0x9e14, 0x41c9, 0xbf, 0x0f, 0x12, 0x0a, 0x2b, 0x3c, 0xe1, 0x20);
EXTERN_GUID(GUID_NativeDeviceService, 0xef71e53c, 0x52f4, 0x43c5, 0xb8, 0x6a, 0xad, 0x6c, 0xb2, 0x16, 0xa6, 0x1e);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfsharingengine_0000_0008_v0_0_s_ifspec;
}
