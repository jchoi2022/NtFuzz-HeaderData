#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFMediaError IMFMediaError;
typedef interface IMFMediaTimeRange IMFMediaTimeRange;
typedef interface IMFMediaEngineNotify IMFMediaEngineNotify;
typedef interface IMFMediaEngineSrcElements IMFMediaEngineSrcElements;
typedef interface IMFMediaEngine IMFMediaEngine;
typedef interface IMFMediaEngineEx IMFMediaEngineEx;
typedef interface IMFMediaEngineAudioEndpointId IMFMediaEngineAudioEndpointId;
typedef interface IMFMediaEngineExtension IMFMediaEngineExtension;
typedef interface IMFMediaEngineProtectedContent IMFMediaEngineProtectedContent;
typedef interface IAudioSourceProvider IAudioSourceProvider;
typedef interface IMFMediaEngineWebSupport IMFMediaEngineWebSupport;
typedef interface IMFMediaSourceExtensionNotify IMFMediaSourceExtensionNotify;
typedef interface IMFBufferListNotify IMFBufferListNotify;
typedef interface IMFSourceBufferNotify IMFSourceBufferNotify;
typedef interface IMFSourceBuffer IMFSourceBuffer;
typedef interface IMFSourceBufferAppendMode IMFSourceBufferAppendMode;
typedef interface IMFSourceBufferList IMFSourceBufferList;
typedef interface IMFMediaSourceExtension IMFMediaSourceExtension;
typedef interface IMFMediaSourceExtensionLiveSeekableRange IMFMediaSourceExtensionLiveSeekableRange;
typedef interface IMFMediaEngineEME IMFMediaEngineEME;
typedef interface IMFMediaEngineSrcElementsEx IMFMediaEngineSrcElementsEx;
typedef interface IMFMediaEngineNeedKeyNotify IMFMediaEngineNeedKeyNotify;
typedef interface IMFMediaKeys IMFMediaKeys;
typedef interface IMFMediaKeySession IMFMediaKeySession;
typedef interface IMFMediaKeySessionNotify IMFMediaKeySessionNotify;
typedef interface IMFCdmSuspendNotify IMFCdmSuspendNotify;
typedef interface IMFHDCPStatus IMFHDCPStatus;
typedef interface IMFMediaEngineOPMInfo IMFMediaEngineOPMInfo;
typedef interface IMFMediaEngineClassFactory IMFMediaEngineClassFactory;
typedef interface IMFMediaEngineClassFactoryEx IMFMediaEngineClassFactoryEx;
typedef interface IMFMediaEngineClassFactory2 IMFMediaEngineClassFactory2;
typedef interface IMFExtendedDRMTypeSupport IMFExtendedDRMTypeSupport;
typedef interface IMFMediaEngineSupportsSourceTransfer IMFMediaEngineSupportsSourceTransfer;
typedef interface IMFMediaEngineTransferSource IMFMediaEngineTransferSource;
typedef interface IMFTimedText IMFTimedText;
typedef interface IMFTimedTextNotify IMFTimedTextNotify;
typedef interface IMFTimedTextTrack IMFTimedTextTrack;
typedef interface IMFTimedTextTrackList IMFTimedTextTrackList;
typedef interface IMFTimedTextCue IMFTimedTextCue;
typedef interface IMFTimedTextFormattedText IMFTimedTextFormattedText;
typedef interface IMFTimedTextStyle IMFTimedTextStyle;
typedef interface IMFTimedTextRegion IMFTimedTextRegion;
typedef interface IMFTimedTextBinary IMFTimedTextBinary;
typedef interface IMFTimedTextCueList IMFTimedTextCueList;
typedef interface IMFMediaEngineEMENotify IMFMediaEngineEMENotify;
typedef interface IMFMediaKeySessionNotify2 IMFMediaKeySessionNotify2;
typedef interface IMFMediaKeySystemAccess IMFMediaKeySystemAccess;
typedef interface IMFMediaEngineClassFactory3 IMFMediaEngineClassFactory3;
typedef interface IMFMediaKeys2 IMFMediaKeys2;
typedef interface IMFMediaKeySession2 IMFMediaKeySession2;
#include "unknwn.h"
#include "mfidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum MF_MEDIA_ENGINE_ERR
    {
        MF_MEDIA_ENGINE_ERR_NOERROR = 0,
        MF_MEDIA_ENGINE_ERR_ABORTED = 1,
        MF_MEDIA_ENGINE_ERR_NETWORK = 2,
        MF_MEDIA_ENGINE_ERR_DECODE = 3,
        MF_MEDIA_ENGINE_ERR_SRC_NOT_SUPPORTED = 4,
        MF_MEDIA_ENGINE_ERR_ENCRYPTED = 5
    } MF_MEDIA_ENGINE_ERR;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaError;
    typedef struct IMFMediaErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaError * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaError * This);
        USHORT ( STDMETHODCALLTYPE *GetErrorCode )(
            IMFMediaError * This);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedErrorCode )(
            IMFMediaError * This);
        HRESULT ( STDMETHODCALLTYPE *SetErrorCode )(
            IMFMediaError * This,
            _In_ MF_MEDIA_ENGINE_ERR error);
        HRESULT ( STDMETHODCALLTYPE *SetExtendedErrorCode )(
            IMFMediaError * This,
            _In_ HRESULT error);
        END_INTERFACE
    } IMFMediaErrorVtbl;
    interface IMFMediaError
    {
        CONST_VTBL struct IMFMediaErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetErrorCode(This) )
    ( (This)->lpVtbl -> GetExtendedErrorCode(This) )
    ( (This)->lpVtbl -> SetErrorCode(This,error) )
    ( (This)->lpVtbl -> SetExtendedErrorCode(This,error) )
EXTERN_C const IID IID_IMFMediaTimeRange;
    typedef struct IMFMediaTimeRangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaTimeRange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaTimeRange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaTimeRange * This);
        DWORD ( STDMETHODCALLTYPE *GetLength )(
            IMFMediaTimeRange * This);
        HRESULT ( STDMETHODCALLTYPE *GetStart )(
            IMFMediaTimeRange * This,
            _In_ DWORD index,
            _Out_ double *pStart);
        HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            IMFMediaTimeRange * This,
            _In_ DWORD index,
            _Out_ double *pEnd);
        BOOL ( STDMETHODCALLTYPE *ContainsTime )(
            IMFMediaTimeRange * This,
            _In_ double time);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            IMFMediaTimeRange * This,
            _In_ double startTime,
            _In_ double endTime);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            IMFMediaTimeRange * This);
        END_INTERFACE
    } IMFMediaTimeRangeVtbl;
    interface IMFMediaTimeRange
    {
        CONST_VTBL struct IMFMediaTimeRangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This) )
    ( (This)->lpVtbl -> GetStart(This,index,pStart) )
    ( (This)->lpVtbl -> GetEnd(This,index,pEnd) )
    ( (This)->lpVtbl -> ContainsTime(This,time) )
    ( (This)->lpVtbl -> AddRange(This,startTime,endTime) )
    ( (This)->lpVtbl -> Clear(This) )
typedef
enum MF_MEDIA_ENGINE_EVENT
    {
        MF_MEDIA_ENGINE_EVENT_LOADSTART = 1,
        MF_MEDIA_ENGINE_EVENT_PROGRESS = 2,
        MF_MEDIA_ENGINE_EVENT_SUSPEND = 3,
        MF_MEDIA_ENGINE_EVENT_ABORT = 4,
        MF_MEDIA_ENGINE_EVENT_ERROR = 5,
        MF_MEDIA_ENGINE_EVENT_EMPTIED = 6,
        MF_MEDIA_ENGINE_EVENT_STALLED = 7,
        MF_MEDIA_ENGINE_EVENT_PLAY = 8,
        MF_MEDIA_ENGINE_EVENT_PAUSE = 9,
        MF_MEDIA_ENGINE_EVENT_LOADEDMETADATA = 10,
        MF_MEDIA_ENGINE_EVENT_LOADEDDATA = 11,
        MF_MEDIA_ENGINE_EVENT_WAITING = 12,
        MF_MEDIA_ENGINE_EVENT_PLAYING = 13,
        MF_MEDIA_ENGINE_EVENT_CANPLAY = 14,
        MF_MEDIA_ENGINE_EVENT_CANPLAYTHROUGH = 15,
        MF_MEDIA_ENGINE_EVENT_SEEKING = 16,
        MF_MEDIA_ENGINE_EVENT_SEEKED = 17,
        MF_MEDIA_ENGINE_EVENT_TIMEUPDATE = 18,
        MF_MEDIA_ENGINE_EVENT_ENDED = 19,
        MF_MEDIA_ENGINE_EVENT_RATECHANGE = 20,
        MF_MEDIA_ENGINE_EVENT_DURATIONCHANGE = 21,
        MF_MEDIA_ENGINE_EVENT_VOLUMECHANGE = 22,
        MF_MEDIA_ENGINE_EVENT_FORMATCHANGE = 1000,
        MF_MEDIA_ENGINE_EVENT_PURGEQUEUEDEVENTS = 1001,
        MF_MEDIA_ENGINE_EVENT_TIMELINE_MARKER = 1002,
        MF_MEDIA_ENGINE_EVENT_BALANCECHANGE = 1003,
        MF_MEDIA_ENGINE_EVENT_DOWNLOADCOMPLETE = 1004,
        MF_MEDIA_ENGINE_EVENT_BUFFERINGSTARTED = 1005,
        MF_MEDIA_ENGINE_EVENT_BUFFERINGENDED = 1006,
        MF_MEDIA_ENGINE_EVENT_FRAMESTEPCOMPLETED = 1007,
        MF_MEDIA_ENGINE_EVENT_NOTIFYSTABLESTATE = 1008,
        MF_MEDIA_ENGINE_EVENT_FIRSTFRAMEREADY = 1009,
        MF_MEDIA_ENGINE_EVENT_TRACKSCHANGE = 1010,
        MF_MEDIA_ENGINE_EVENT_OPMINFO = 1011,
        MF_MEDIA_ENGINE_EVENT_RESOURCELOST = 1012,
        MF_MEDIA_ENGINE_EVENT_DELAYLOADEVENT_CHANGED = 1013,
        MF_MEDIA_ENGINE_EVENT_STREAMRENDERINGERROR = 1014,
        MF_MEDIA_ENGINE_EVENT_SUPPORTEDRATES_CHANGED = 1015,
        MF_MEDIA_ENGINE_EVENT_AUDIOENDPOINTCHANGE = 1016
    } MF_MEDIA_ENGINE_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineNotify;
    typedef struct IMFMediaEngineNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineNotify * This);
        HRESULT ( STDMETHODCALLTYPE *EventNotify )(
            IMFMediaEngineNotify * This,
            _In_ DWORD event,
            _In_ DWORD_PTR param1,
            _In_ DWORD param2);
        END_INTERFACE
    } IMFMediaEngineNotifyVtbl;
    interface IMFMediaEngineNotify
    {
        CONST_VTBL struct IMFMediaEngineNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EventNotify(This,event,param1,param2) )
EXTERN_C const IID IID_IMFMediaEngineSrcElements;
    typedef struct IMFMediaEngineSrcElementsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineSrcElements * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineSrcElements * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineSrcElements * This);
        DWORD ( STDMETHODCALLTYPE *GetLength )(
            IMFMediaEngineSrcElements * This);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IMFMediaEngineSrcElements * This,
            _In_ DWORD index,
            _Out_ BSTR *pURL);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IMFMediaEngineSrcElements * This,
            _In_ DWORD index,
            _Out_ BSTR *pType);
        HRESULT ( STDMETHODCALLTYPE *GetMedia )(
            IMFMediaEngineSrcElements * This,
            _In_ DWORD index,
            _Out_ BSTR *pMedia);
        HRESULT ( STDMETHODCALLTYPE *AddElement )(
            IMFMediaEngineSrcElements * This,
            _In_opt_ BSTR pURL,
            _In_opt_ BSTR pType,
            _In_opt_ BSTR pMedia);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllElements )(
            IMFMediaEngineSrcElements * This);
        END_INTERFACE
    } IMFMediaEngineSrcElementsVtbl;
    interface IMFMediaEngineSrcElements
    {
        CONST_VTBL struct IMFMediaEngineSrcElementsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This) )
    ( (This)->lpVtbl -> GetURL(This,index,pURL) )
    ( (This)->lpVtbl -> GetType(This,index,pType) )
    ( (This)->lpVtbl -> GetMedia(This,index,pMedia) )
    ( (This)->lpVtbl -> AddElement(This,pURL,pType,pMedia) )
    ( (This)->lpVtbl -> RemoveAllElements(This) )
typedef
enum MF_MEDIA_ENGINE_NETWORK
    {
        MF_MEDIA_ENGINE_NETWORK_EMPTY = 0,
        MF_MEDIA_ENGINE_NETWORK_IDLE = 1,
        MF_MEDIA_ENGINE_NETWORK_LOADING = 2,
        MF_MEDIA_ENGINE_NETWORK_NO_SOURCE = 3
    } MF_MEDIA_ENGINE_NETWORK;
typedef
enum MF_MEDIA_ENGINE_READY
    {
        MF_MEDIA_ENGINE_READY_HAVE_NOTHING = 0,
        MF_MEDIA_ENGINE_READY_HAVE_METADATA = 1,
        MF_MEDIA_ENGINE_READY_HAVE_CURRENT_DATA = 2,
        MF_MEDIA_ENGINE_READY_HAVE_FUTURE_DATA = 3,
        MF_MEDIA_ENGINE_READY_HAVE_ENOUGH_DATA = 4
    } MF_MEDIA_ENGINE_READY;
typedef
enum MF_MEDIA_ENGINE_CANPLAY
    {
        MF_MEDIA_ENGINE_CANPLAY_NOT_SUPPORTED = 0,
        MF_MEDIA_ENGINE_CANPLAY_MAYBE = 1,
        MF_MEDIA_ENGINE_CANPLAY_PROBABLY = 2
    } MF_MEDIA_ENGINE_CANPLAY;
typedef
enum MF_MEDIA_ENGINE_PRELOAD
    {
        MF_MEDIA_ENGINE_PRELOAD_MISSING = 0,
        MF_MEDIA_ENGINE_PRELOAD_EMPTY = 1,
        MF_MEDIA_ENGINE_PRELOAD_NONE = 2,
        MF_MEDIA_ENGINE_PRELOAD_METADATA = 3,
        MF_MEDIA_ENGINE_PRELOAD_AUTOMATIC = 4
    } MF_MEDIA_ENGINE_PRELOAD;
typedef struct MFVideoNormalizedRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } MFVideoNormalizedRect;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngine;
    typedef struct IMFMediaEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            IMFMediaEngine * This,
            _Outptr_ IMFMediaError **ppError);
        HRESULT ( STDMETHODCALLTYPE *SetErrorCode )(
            IMFMediaEngine * This,
            _In_ MF_MEDIA_ENGINE_ERR error);
        HRESULT ( STDMETHODCALLTYPE *SetSourceElements )(
            IMFMediaEngine * This,
            _In_ IMFMediaEngineSrcElements *pSrcElements);
        HRESULT ( STDMETHODCALLTYPE *SetSource )(
            IMFMediaEngine * This,
            _In_ BSTR pUrl);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSource )(
            IMFMediaEngine * This,
            _Out_ BSTR *ppUrl);
        USHORT ( STDMETHODCALLTYPE *GetNetworkState )(
            IMFMediaEngine * This);
        MF_MEDIA_ENGINE_PRELOAD ( STDMETHODCALLTYPE *GetPreload )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetPreload )(
            IMFMediaEngine * This,
            _In_ MF_MEDIA_ENGINE_PRELOAD Preload);
        HRESULT ( STDMETHODCALLTYPE *GetBuffered )(
            IMFMediaEngine * This,
            _Outptr_ IMFMediaTimeRange **ppBuffered);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *CanPlayType )(
            IMFMediaEngine * This,
            _In_ BSTR type,
            _Out_ MF_MEDIA_ENGINE_CANPLAY *pAnswer);
        USHORT ( STDMETHODCALLTYPE *GetReadyState )(
            IMFMediaEngine * This);
        BOOL ( STDMETHODCALLTYPE *IsSeeking )(
            IMFMediaEngine * This);
        double ( STDMETHODCALLTYPE *GetCurrentTime )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentTime )(
            IMFMediaEngine * This,
            _In_ double seekTime);
        double ( STDMETHODCALLTYPE *GetStartTime )(
            IMFMediaEngine * This);
        double ( STDMETHODCALLTYPE *GetDuration )(
            IMFMediaEngine * This);
        BOOL ( STDMETHODCALLTYPE *IsPaused )(
            IMFMediaEngine * This);
        double ( STDMETHODCALLTYPE *GetDefaultPlaybackRate )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultPlaybackRate )(
            IMFMediaEngine * This,
            _In_ double Rate);
        double ( STDMETHODCALLTYPE *GetPlaybackRate )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetPlaybackRate )(
            IMFMediaEngine * This,
            _In_ double Rate);
        HRESULT ( STDMETHODCALLTYPE *GetPlayed )(
            IMFMediaEngine * This,
            _Outptr_ IMFMediaTimeRange **ppPlayed);
        HRESULT ( STDMETHODCALLTYPE *GetSeekable )(
            IMFMediaEngine * This,
            _Outptr_ IMFMediaTimeRange **ppSeekable);
        BOOL ( STDMETHODCALLTYPE *IsEnded )(
            IMFMediaEngine * This);
        BOOL ( STDMETHODCALLTYPE *GetAutoPlay )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetAutoPlay )(
            IMFMediaEngine * This,
            _In_ BOOL AutoPlay);
        BOOL ( STDMETHODCALLTYPE *GetLoop )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetLoop )(
            IMFMediaEngine * This,
            _In_ BOOL Loop);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMFMediaEngine * This);
        BOOL ( STDMETHODCALLTYPE *GetMuted )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetMuted )(
            IMFMediaEngine * This,
            _In_ BOOL Muted);
        double ( STDMETHODCALLTYPE *GetVolume )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *SetVolume )(
            IMFMediaEngine * This,
            _In_ double Volume);
        BOOL ( STDMETHODCALLTYPE *HasVideo )(
            IMFMediaEngine * This);
        BOOL ( STDMETHODCALLTYPE *HasAudio )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            IMFMediaEngine * This,
            _Out_opt_ DWORD *cx,
            _Out_opt_ DWORD *cy);
        HRESULT ( STDMETHODCALLTYPE *GetVideoAspectRatio )(
            IMFMediaEngine * This,
            _Out_opt_ DWORD *cx,
            _Out_opt_ DWORD *cy);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaEngine * This);
        HRESULT ( STDMETHODCALLTYPE *TransferVideoFrame )(
            IMFMediaEngine * This,
            _In_ IUnknown *pDstSurf,
            _In_opt_ const MFVideoNormalizedRect *pSrc,
            _In_ const RECT *pDst,
            _In_opt_ const MFARGB *pBorderClr);
        HRESULT ( STDMETHODCALLTYPE *OnVideoStreamTick )(
            IMFMediaEngine * This,
            _Out_ LONGLONG *pPts);
        END_INTERFACE
    } IMFMediaEngineVtbl;
    interface IMFMediaEngine
    {
        CONST_VTBL struct IMFMediaEngineVtbl *lpVtbl;
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
typedef
enum MF_MEDIA_ENGINE_S3D_PACKING_MODE
    {
        MF_MEDIA_ENGINE_S3D_PACKING_MODE_NONE = 0,
        MF_MEDIA_ENGINE_S3D_PACKING_MODE_SIDE_BY_SIDE = 1,
        MF_MEDIA_ENGINE_S3D_PACKING_MODE_TOP_BOTTOM = 2
    } MF_MEDIA_ENGINE_S3D_PACKING_MODE;
typedef
enum MF_MEDIA_ENGINE_STATISTIC
    {
        MF_MEDIA_ENGINE_STATISTIC_FRAMES_RENDERED = 0,
        MF_MEDIA_ENGINE_STATISTIC_FRAMES_DROPPED = 1,
        MF_MEDIA_ENGINE_STATISTIC_BYTES_DOWNLOADED = 2,
        MF_MEDIA_ENGINE_STATISTIC_BUFFER_PROGRESS = 3,
        MF_MEDIA_ENGINE_STATISTIC_FRAMES_PER_SECOND = 4,
        MF_MEDIA_ENGINE_STATISTIC_PLAYBACK_JITTER = 5,
        MF_MEDIA_ENGINE_STATISTIC_FRAMES_CORRUPTED = 6,
        MF_MEDIA_ENGINE_STATISTIC_TOTAL_FRAME_DELAY = 7
    } MF_MEDIA_ENGINE_STATISTIC;
typedef
enum MF_MEDIA_ENGINE_SEEK_MODE
    {
        MF_MEDIA_ENGINE_SEEK_MODE_NORMAL = 0,
        MF_MEDIA_ENGINE_SEEK_MODE_APPROXIMATE = 1
    } MF_MEDIA_ENGINE_SEEK_MODE;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineEx;
    typedef struct IMFMediaEngineExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            IMFMediaEngineEx * This,
            _Outptr_ IMFMediaError **ppError);
        HRESULT ( STDMETHODCALLTYPE *SetErrorCode )(
            IMFMediaEngineEx * This,
            _In_ MF_MEDIA_ENGINE_ERR error);
        HRESULT ( STDMETHODCALLTYPE *SetSourceElements )(
            IMFMediaEngineEx * This,
            _In_ IMFMediaEngineSrcElements *pSrcElements);
        HRESULT ( STDMETHODCALLTYPE *SetSource )(
            IMFMediaEngineEx * This,
            _In_ BSTR pUrl);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSource )(
            IMFMediaEngineEx * This,
            _Out_ BSTR *ppUrl);
        USHORT ( STDMETHODCALLTYPE *GetNetworkState )(
            IMFMediaEngineEx * This);
        MF_MEDIA_ENGINE_PRELOAD ( STDMETHODCALLTYPE *GetPreload )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetPreload )(
            IMFMediaEngineEx * This,
            _In_ MF_MEDIA_ENGINE_PRELOAD Preload);
        HRESULT ( STDMETHODCALLTYPE *GetBuffered )(
            IMFMediaEngineEx * This,
            _Outptr_ IMFMediaTimeRange **ppBuffered);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *CanPlayType )(
            IMFMediaEngineEx * This,
            _In_ BSTR type,
            _Out_ MF_MEDIA_ENGINE_CANPLAY *pAnswer);
        USHORT ( STDMETHODCALLTYPE *GetReadyState )(
            IMFMediaEngineEx * This);
        BOOL ( STDMETHODCALLTYPE *IsSeeking )(
            IMFMediaEngineEx * This);
        double ( STDMETHODCALLTYPE *GetCurrentTime )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentTime )(
            IMFMediaEngineEx * This,
            _In_ double seekTime);
        double ( STDMETHODCALLTYPE *GetStartTime )(
            IMFMediaEngineEx * This);
        double ( STDMETHODCALLTYPE *GetDuration )(
            IMFMediaEngineEx * This);
        BOOL ( STDMETHODCALLTYPE *IsPaused )(
            IMFMediaEngineEx * This);
        double ( STDMETHODCALLTYPE *GetDefaultPlaybackRate )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultPlaybackRate )(
            IMFMediaEngineEx * This,
            _In_ double Rate);
        double ( STDMETHODCALLTYPE *GetPlaybackRate )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetPlaybackRate )(
            IMFMediaEngineEx * This,
            _In_ double Rate);
        HRESULT ( STDMETHODCALLTYPE *GetPlayed )(
            IMFMediaEngineEx * This,
            _Outptr_ IMFMediaTimeRange **ppPlayed);
        HRESULT ( STDMETHODCALLTYPE *GetSeekable )(
            IMFMediaEngineEx * This,
            _Outptr_ IMFMediaTimeRange **ppSeekable);
        BOOL ( STDMETHODCALLTYPE *IsEnded )(
            IMFMediaEngineEx * This);
        BOOL ( STDMETHODCALLTYPE *GetAutoPlay )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetAutoPlay )(
            IMFMediaEngineEx * This,
            _In_ BOOL AutoPlay);
        BOOL ( STDMETHODCALLTYPE *GetLoop )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetLoop )(
            IMFMediaEngineEx * This,
            _In_ BOOL Loop);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMFMediaEngineEx * This);
        BOOL ( STDMETHODCALLTYPE *GetMuted )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetMuted )(
            IMFMediaEngineEx * This,
            _In_ BOOL Muted);
        double ( STDMETHODCALLTYPE *GetVolume )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetVolume )(
            IMFMediaEngineEx * This,
            _In_ double Volume);
        BOOL ( STDMETHODCALLTYPE *HasVideo )(
            IMFMediaEngineEx * This);
        BOOL ( STDMETHODCALLTYPE *HasAudio )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            IMFMediaEngineEx * This,
            _Out_opt_ DWORD *cx,
            _Out_opt_ DWORD *cy);
        HRESULT ( STDMETHODCALLTYPE *GetVideoAspectRatio )(
            IMFMediaEngineEx * This,
            _Out_opt_ DWORD *cx,
            _Out_opt_ DWORD *cy);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *TransferVideoFrame )(
            IMFMediaEngineEx * This,
            _In_ IUnknown *pDstSurf,
            _In_opt_ const MFVideoNormalizedRect *pSrc,
            _In_ const RECT *pDst,
            _In_opt_ const MFARGB *pBorderClr);
        HRESULT ( STDMETHODCALLTYPE *OnVideoStreamTick )(
            IMFMediaEngineEx * This,
            _Out_ LONGLONG *pPts);
        HRESULT ( STDMETHODCALLTYPE *SetSourceFromByteStream )(
            IMFMediaEngineEx * This,
            _In_ IMFByteStream *pByteStream,
            _In_ BSTR pURL);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IMFMediaEngineEx * This,
            _In_ MF_MEDIA_ENGINE_STATISTIC StatisticID,
            _Out_ PROPVARIANT *pStatistic);
        HRESULT ( STDMETHODCALLTYPE *UpdateVideoStream )(
            IMFMediaEngineEx * This,
            _In_opt_ const MFVideoNormalizedRect *pSrc,
            _In_opt_ const RECT *pDst,
            _In_opt_ const MFARGB *pBorderClr);
        double ( STDMETHODCALLTYPE *GetBalance )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetBalance )(
            IMFMediaEngineEx * This,
            _In_ double balance);
        BOOL ( STDMETHODCALLTYPE *IsPlaybackRateSupported )(
            IMFMediaEngineEx * This,
            _In_ double rate);
        HRESULT ( STDMETHODCALLTYPE *FrameStep )(
            IMFMediaEngineEx * This,
            _In_ BOOL Forward);
        HRESULT ( STDMETHODCALLTYPE *GetResourceCharacteristics )(
            IMFMediaEngineEx * This,
            _Out_ DWORD *pCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationAttribute )(
            IMFMediaEngineEx * This,
            _In_ REFGUID guidMFAttribute,
            _Out_ PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
            IMFMediaEngineEx * This,
            _Out_ DWORD *pdwStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAttribute )(
            IMFMediaEngineEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidMFAttribute,
            _Out_ PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelection )(
            IMFMediaEngineEx * This,
            _In_ DWORD dwStreamIndex,
            _Out_ BOOL *pEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSelection )(
            IMFMediaEngineEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ BOOL Enabled);
        HRESULT ( STDMETHODCALLTYPE *ApplyStreamSelections )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *IsProtected )(
            IMFMediaEngineEx * This,
            _Out_ BOOL *pProtected);
        HRESULT ( STDMETHODCALLTYPE *InsertVideoEffect )(
            IMFMediaEngineEx * This,
            _In_ IUnknown *pEffect,
            _In_ BOOL fOptional);
        HRESULT ( STDMETHODCALLTYPE *InsertAudioEffect )(
            IMFMediaEngineEx * This,
            _In_ IUnknown *pEffect,
            _In_ BOOL fOptional);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEffects )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetTimelineMarkerTimer )(
            IMFMediaEngineEx * This,
            _In_ double timeToFire);
        HRESULT ( STDMETHODCALLTYPE *GetTimelineMarkerTimer )(
            IMFMediaEngineEx * This,
            _Out_ double *pTimeToFire);
        HRESULT ( STDMETHODCALLTYPE *CancelTimelineMarkerTimer )(
            IMFMediaEngineEx * This);
        BOOL ( STDMETHODCALLTYPE *IsStereo3D )(
            IMFMediaEngineEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetStereo3DFramePackingMode )(
            IMFMediaEngineEx * This,
            _Out_ MF_MEDIA_ENGINE_S3D_PACKING_MODE *packMode);
        HRESULT ( STDMETHODCALLTYPE *SetStereo3DFramePackingMode )(
            IMFMediaEngineEx * This,
            _In_ MF_MEDIA_ENGINE_S3D_PACKING_MODE packMode);
        HRESULT ( STDMETHODCALLTYPE *GetStereo3DRenderMode )(
            IMFMediaEngineEx * This,
            _Out_ MF3DVideoOutputType *outputType);
        HRESULT ( STDMETHODCALLTYPE *SetStereo3DRenderMode )(
            IMFMediaEngineEx * This,
            _In_ MF3DVideoOutputType outputType);
        HRESULT ( STDMETHODCALLTYPE *EnableWindowlessSwapchainMode )(
            IMFMediaEngineEx * This,
            _In_ BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *GetVideoSwapchainHandle )(
            IMFMediaEngineEx * This,
            _Out_ HANDLE *phSwapchain);
        HRESULT ( STDMETHODCALLTYPE *EnableHorizontalMirrorMode )(
            IMFMediaEngineEx * This,
            _In_ BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *GetAudioStreamCategory )(
            IMFMediaEngineEx * This,
            _Out_ UINT32 *pCategory);
        HRESULT ( STDMETHODCALLTYPE *SetAudioStreamCategory )(
            IMFMediaEngineEx * This,
            _In_ UINT32 category);
        HRESULT ( STDMETHODCALLTYPE *GetAudioEndpointRole )(
            IMFMediaEngineEx * This,
            _Out_ UINT32 *pRole);
        HRESULT ( STDMETHODCALLTYPE *SetAudioEndpointRole )(
            IMFMediaEngineEx * This,
            _In_ UINT32 role);
        HRESULT ( STDMETHODCALLTYPE *GetRealTimeMode )(
            IMFMediaEngineEx * This,
            _Out_ BOOL *pfEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetRealTimeMode )(
            IMFMediaEngineEx * This,
            _In_ BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentTimeEx )(
            IMFMediaEngineEx * This,
            _In_ double seekTime,
            _In_ MF_MEDIA_ENGINE_SEEK_MODE seekMode);
        HRESULT ( STDMETHODCALLTYPE *EnableTimeUpdateTimer )(
            IMFMediaEngineEx * This,
            _In_ BOOL fEnableTimer);
        END_INTERFACE
    } IMFMediaEngineExVtbl;
    interface IMFMediaEngineEx
    {
        CONST_VTBL struct IMFMediaEngineExVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> SetSourceFromByteStream(This,pByteStream,pURL) )
    ( (This)->lpVtbl -> GetStatistics(This,StatisticID,pStatistic) )
    ( (This)->lpVtbl -> UpdateVideoStream(This,pSrc,pDst,pBorderClr) )
    ( (This)->lpVtbl -> GetBalance(This) )
    ( (This)->lpVtbl -> SetBalance(This,balance) )
    ( (This)->lpVtbl -> IsPlaybackRateSupported(This,rate) )
    ( (This)->lpVtbl -> FrameStep(This,Forward) )
    ( (This)->lpVtbl -> GetResourceCharacteristics(This,pCharacteristics) )
    ( (This)->lpVtbl -> GetPresentationAttribute(This,guidMFAttribute,pvValue) )
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwStreamCount) )
    ( (This)->lpVtbl -> GetStreamAttribute(This,dwStreamIndex,guidMFAttribute,pvValue) )
    ( (This)->lpVtbl -> GetStreamSelection(This,dwStreamIndex,pEnabled) )
    ( (This)->lpVtbl -> SetStreamSelection(This,dwStreamIndex,Enabled) )
    ( (This)->lpVtbl -> ApplyStreamSelections(This) )
    ( (This)->lpVtbl -> IsProtected(This,pProtected) )
    ( (This)->lpVtbl -> InsertVideoEffect(This,pEffect,fOptional) )
    ( (This)->lpVtbl -> InsertAudioEffect(This,pEffect,fOptional) )
    ( (This)->lpVtbl -> RemoveAllEffects(This) )
    ( (This)->lpVtbl -> SetTimelineMarkerTimer(This,timeToFire) )
    ( (This)->lpVtbl -> GetTimelineMarkerTimer(This,pTimeToFire) )
    ( (This)->lpVtbl -> CancelTimelineMarkerTimer(This) )
    ( (This)->lpVtbl -> IsStereo3D(This) )
    ( (This)->lpVtbl -> GetStereo3DFramePackingMode(This,packMode) )
    ( (This)->lpVtbl -> SetStereo3DFramePackingMode(This,packMode) )
    ( (This)->lpVtbl -> GetStereo3DRenderMode(This,outputType) )
    ( (This)->lpVtbl -> SetStereo3DRenderMode(This,outputType) )
    ( (This)->lpVtbl -> EnableWindowlessSwapchainMode(This,fEnable) )
    ( (This)->lpVtbl -> GetVideoSwapchainHandle(This,phSwapchain) )
    ( (This)->lpVtbl -> EnableHorizontalMirrorMode(This,fEnable) )
    ( (This)->lpVtbl -> GetAudioStreamCategory(This,pCategory) )
    ( (This)->lpVtbl -> SetAudioStreamCategory(This,category) )
    ( (This)->lpVtbl -> GetAudioEndpointRole(This,pRole) )
    ( (This)->lpVtbl -> SetAudioEndpointRole(This,role) )
    ( (This)->lpVtbl -> GetRealTimeMode(This,pfEnabled) )
    ( (This)->lpVtbl -> SetRealTimeMode(This,fEnable) )
    ( (This)->lpVtbl -> SetCurrentTimeEx(This,seekTime,seekMode) )
    ( (This)->lpVtbl -> EnableTimeUpdateTimer(This,fEnableTimer) )
EXTERN_C const IID IID_IMFMediaEngineAudioEndpointId;
    typedef struct IMFMediaEngineAudioEndpointIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineAudioEndpointId * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineAudioEndpointId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineAudioEndpointId * This);
        HRESULT ( STDMETHODCALLTYPE *SetAudioEndpointId )(
            IMFMediaEngineAudioEndpointId * This,
            _In_opt_ LPCWSTR pszEndpointId);
        HRESULT ( STDMETHODCALLTYPE *GetAudioEndpointId )(
            IMFMediaEngineAudioEndpointId * This,
            _Outptr_ LPWSTR *ppszEndpointId);
        END_INTERFACE
    } IMFMediaEngineAudioEndpointIdVtbl;
    interface IMFMediaEngineAudioEndpointId
    {
        CONST_VTBL struct IMFMediaEngineAudioEndpointIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAudioEndpointId(This,pszEndpointId) )
    ( (This)->lpVtbl -> GetAudioEndpointId(This,ppszEndpointId) )
typedef
enum MF_MEDIA_ENGINE_EXTENSION_TYPE
    {
        MF_MEDIA_ENGINE_EXTENSION_TYPE_MEDIASOURCE = 0,
        MF_MEDIA_ENGINE_EXTENSION_TYPE_BYTESTREAM = 1
    } MF_MEDIA_ENGINE_EXTENSION_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineExtension;
    typedef struct IMFMediaEngineExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineExtension * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineExtension * This);
        HRESULT ( STDMETHODCALLTYPE *CanPlayType )(
            IMFMediaEngineExtension * This,
            _In_ BOOL AudioOnly,
            _In_ BSTR MimeType,
            _Out_ MF_MEDIA_ENGINE_CANPLAY *pAnswer);
        HRESULT ( STDMETHODCALLTYPE *BeginCreateObject )(
            IMFMediaEngineExtension * This,
            _In_ BSTR bstrURL,
            _In_opt_ IMFByteStream *pByteStream,
            _In_ MF_OBJECT_TYPE type,
            _Outptr_ IUnknown **ppIUnknownCancelCookie,
            _In_ IMFAsyncCallback *pCallback,
            _In_opt_ IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *CancelObjectCreation )(
            IMFMediaEngineExtension * This,
            _In_ IUnknown *pIUnknownCancelCookie);
        HRESULT ( STDMETHODCALLTYPE *EndCreateObject )(
            IMFMediaEngineExtension * This,
            _In_ IMFAsyncResult *pResult,
            _Outptr_ IUnknown **ppObject);
        END_INTERFACE
    } IMFMediaEngineExtensionVtbl;
    interface IMFMediaEngineExtension
    {
        CONST_VTBL struct IMFMediaEngineExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CanPlayType(This,AudioOnly,MimeType,pAnswer) )
    ( (This)->lpVtbl -> BeginCreateObject(This,bstrURL,pByteStream,type,ppIUnknownCancelCookie,pCallback,punkState) )
    ( (This)->lpVtbl -> CancelObjectCreation(This,pIUnknownCancelCookie) )
    ( (This)->lpVtbl -> EndCreateObject(This,pResult,ppObject) )
enum MF_MEDIA_ENGINE_FRAME_PROTECTION_FLAGS
    {
        MF_MEDIA_ENGINE_FRAME_PROTECTION_FLAG_PROTECTED = 0x1,
        MF_MEDIA_ENGINE_FRAME_PROTECTION_FLAG_REQUIRES_SURFACE_PROTECTION = 0x2,
        MF_MEDIA_ENGINE_FRAME_PROTECTION_FLAG_REQUIRES_ANTI_SCREEN_SCRAPE_PROTECTION = 0x4
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineProtectedContent;
    typedef struct IMFMediaEngineProtectedContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineProtectedContent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineProtectedContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineProtectedContent * This);
        HRESULT ( STDMETHODCALLTYPE *ShareResources )(
            IMFMediaEngineProtectedContent * This,
            _In_ IUnknown *pUnkDeviceContext);
        HRESULT ( STDMETHODCALLTYPE *GetRequiredProtections )(
            IMFMediaEngineProtectedContent * This,
            _Out_ DWORD *pFrameProtectionFlags);
        HRESULT ( STDMETHODCALLTYPE *SetOPMWindow )(
            IMFMediaEngineProtectedContent * This,
            _In_ HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *TransferVideoFrame )(
            IMFMediaEngineProtectedContent * This,
            _In_ IUnknown *pDstSurf,
            _In_opt_ const MFVideoNormalizedRect *pSrc,
            _In_ const RECT *pDst,
            _In_opt_ const MFARGB *pBorderClr,
            _Out_ DWORD *pFrameProtectionFlags);
        HRESULT ( STDMETHODCALLTYPE *SetContentProtectionManager )(
            IMFMediaEngineProtectedContent * This,
            _In_opt_ IMFContentProtectionManager *pCPM);
        HRESULT ( STDMETHODCALLTYPE *SetApplicationCertificate )(
            IMFMediaEngineProtectedContent * This,
            _In_reads_bytes_(cbBlob) const BYTE *pbBlob,
            _In_ DWORD cbBlob);
        END_INTERFACE
    } IMFMediaEngineProtectedContentVtbl;
    interface IMFMediaEngineProtectedContent
    {
        CONST_VTBL struct IMFMediaEngineProtectedContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShareResources(This,pUnkDeviceContext) )
    ( (This)->lpVtbl -> GetRequiredProtections(This,pFrameProtectionFlags) )
    ( (This)->lpVtbl -> SetOPMWindow(This,hwnd) )
    ( (This)->lpVtbl -> TransferVideoFrame(This,pDstSurf,pSrc,pDst,pBorderClr,pFrameProtectionFlags) )
    ( (This)->lpVtbl -> SetContentProtectionManager(This,pCPM) )
    ( (This)->lpVtbl -> SetApplicationCertificate(This,pbBlob,cbBlob) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioSourceProvider;
    typedef struct IAudioSourceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSourceProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSourceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSourceProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ProvideInput )(
            IAudioSourceProvider * This,
            _In_ DWORD dwSampleCount,
            _Inout_ DWORD *pdwChannelCount,
            _Out_writes_opt_(dwSampleCount * (*pdwChannelCount)) float *pInterleavedAudioData);
        END_INTERFACE
    } IAudioSourceProviderVtbl;
    interface IAudioSourceProvider
    {
        CONST_VTBL struct IAudioSourceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProvideInput(This,dwSampleCount,pdwChannelCount,pInterleavedAudioData) )
EXTERN_C const IID IID_IMFMediaEngineWebSupport;
    typedef struct IMFMediaEngineWebSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineWebSupport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineWebSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineWebSupport * This);
        BOOL ( STDMETHODCALLTYPE *ShouldDelayTheLoadEvent )(
            IMFMediaEngineWebSupport * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectWebAudio )(
            IMFMediaEngineWebSupport * This,
            _In_ DWORD dwSampleRate,
            _COM_Outptr_ IAudioSourceProvider **ppSourceProvider);
        HRESULT ( STDMETHODCALLTYPE *DisconnectWebAudio )(
            IMFMediaEngineWebSupport * This);
        END_INTERFACE
    } IMFMediaEngineWebSupportVtbl;
    interface IMFMediaEngineWebSupport
    {
        CONST_VTBL struct IMFMediaEngineWebSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShouldDelayTheLoadEvent(This) )
    ( (This)->lpVtbl -> ConnectWebAudio(This,dwSampleRate,ppSourceProvider) )
    ( (This)->lpVtbl -> DisconnectWebAudio(This) )
EXTERN_GUID(MF_MSE_CALLBACK,
0x9063a7c0, 0x42c5, 0x4ffd, 0xa8, 0xa8, 0x6f, 0xcf, 0x9e, 0xa3, 0xd0, 0x0c);
EXTERN_GUID(MF_MSE_ACTIVELIST_CALLBACK,
0x949bda0f, 0x4549, 0x46d5, 0xad, 0x7f, 0xb8, 0x46, 0xe1, 0xab, 0x16, 0x52);
EXTERN_GUID(MF_MSE_BUFFERLIST_CALLBACK,
0x42e669b0, 0xd60e, 0x4afb, 0xa8, 0x5b, 0xd8, 0xe5, 0xfe, 0x6b, 0xda, 0xb5);
EXTERN_GUID(MF_MSE_VP9_SUPPORT,
0x92d78429, 0xd88b, 0x4ff0, 0x83, 0x22, 0x80, 0x3e, 0xfa, 0x6e, 0x96, 0x26);
EXTERN_GUID(MF_MSE_OPUS_SUPPORT,
0x4d224cc1, 0x8cc4, 0x48a3, 0xa7, 0xa7, 0xe4, 0xc1, 0x6c, 0xe6, 0x38, 0x8a);
typedef
enum MF_MSE_VP9_SUPPORT_TYPE
    {
        MF_MSE_VP9_SUPPORT_DEFAULT = 0,
        MF_MSE_VP9_SUPPORT_ON = 1,
        MF_MSE_VP9_SUPPORT_OFF = 2
    } MF_MSE_VP9_SUPPORT_TYPE;
typedef
enum MF_MSE_OPUS_SUPPORT_TYPE
    {
        MF_MSE_OPUS_SUPPORT_ON = 0,
        MF_MSE_OPUS_SUPPORT_OFF = 1
    } MF_MSE_OPUS_SUPPORT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSourceExtensionNotify;
    typedef struct IMFMediaSourceExtensionNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaSourceExtensionNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaSourceExtensionNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaSourceExtensionNotify * This);
        void ( STDMETHODCALLTYPE *OnSourceOpen )(
            IMFMediaSourceExtensionNotify * This);
        void ( STDMETHODCALLTYPE *OnSourceEnded )(
            IMFMediaSourceExtensionNotify * This);
        void ( STDMETHODCALLTYPE *OnSourceClose )(
            IMFMediaSourceExtensionNotify * This);
        END_INTERFACE
    } IMFMediaSourceExtensionNotifyVtbl;
    interface IMFMediaSourceExtensionNotify
    {
        CONST_VTBL struct IMFMediaSourceExtensionNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSourceOpen(This) )
    ( (This)->lpVtbl -> OnSourceEnded(This) )
    ( (This)->lpVtbl -> OnSourceClose(This) )
EXTERN_C const IID IID_IMFBufferListNotify;
    typedef struct IMFBufferListNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFBufferListNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFBufferListNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFBufferListNotify * This);
        void ( STDMETHODCALLTYPE *OnAddSourceBuffer )(
            IMFBufferListNotify * This);
        void ( STDMETHODCALLTYPE *OnRemoveSourceBuffer )(
            IMFBufferListNotify * This);
        END_INTERFACE
    } IMFBufferListNotifyVtbl;
    interface IMFBufferListNotify
    {
        CONST_VTBL struct IMFBufferListNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnAddSourceBuffer(This) )
    ( (This)->lpVtbl -> OnRemoveSourceBuffer(This) )
EXTERN_C const IID IID_IMFSourceBufferNotify;
    typedef struct IMFSourceBufferNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceBufferNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceBufferNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceBufferNotify * This);
        void ( STDMETHODCALLTYPE *OnUpdateStart )(
            IMFSourceBufferNotify * This);
        void ( STDMETHODCALLTYPE *OnAbort )(
            IMFSourceBufferNotify * This);
        void ( STDMETHODCALLTYPE *OnError )(
            IMFSourceBufferNotify * This,
            _In_ HRESULT hr);
        void ( STDMETHODCALLTYPE *OnUpdate )(
            IMFSourceBufferNotify * This);
        void ( STDMETHODCALLTYPE *OnUpdateEnd )(
            IMFSourceBufferNotify * This);
        END_INTERFACE
    } IMFSourceBufferNotifyVtbl;
    interface IMFSourceBufferNotify
    {
        CONST_VTBL struct IMFSourceBufferNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdateStart(This) )
    ( (This)->lpVtbl -> OnAbort(This) )
    ( (This)->lpVtbl -> OnError(This,hr) )
    ( (This)->lpVtbl -> OnUpdate(This) )
    ( (This)->lpVtbl -> OnUpdateEnd(This) )
EXTERN_C const IID IID_IMFSourceBuffer;
    typedef struct IMFSourceBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceBuffer * This);
        BOOL ( STDMETHODCALLTYPE *GetUpdating )(
            IMFSourceBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffered )(
            IMFSourceBuffer * This,
            _Outptr_ IMFMediaTimeRange **ppBuffered);
        double ( STDMETHODCALLTYPE *GetTimeStampOffset )(
            IMFSourceBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *SetTimeStampOffset )(
            IMFSourceBuffer * This,
            _In_ double offset);
        double ( STDMETHODCALLTYPE *GetAppendWindowStart )(
            IMFSourceBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *SetAppendWindowStart )(
            IMFSourceBuffer * This,
            _In_ double time);
        double ( STDMETHODCALLTYPE *GetAppendWindowEnd )(
            IMFSourceBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *SetAppendWindowEnd )(
            IMFSourceBuffer * This,
            _In_ double time);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            IMFSourceBuffer * This,
            _In_reads_bytes_(len) const BYTE *pData,
            _In_ DWORD len);
        HRESULT ( STDMETHODCALLTYPE *AppendByteStream )(
            IMFSourceBuffer * This,
            _In_ IMFByteStream *pStream,
            _In_opt_ DWORDLONG *pMaxLen);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IMFSourceBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IMFSourceBuffer * This,
            _In_ double start,
            _In_ double end);
        END_INTERFACE
    } IMFSourceBufferVtbl;
    interface IMFSourceBuffer
    {
        CONST_VTBL struct IMFSourceBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUpdating(This) )
    ( (This)->lpVtbl -> GetBuffered(This,ppBuffered) )
    ( (This)->lpVtbl -> GetTimeStampOffset(This) )
    ( (This)->lpVtbl -> SetTimeStampOffset(This,offset) )
    ( (This)->lpVtbl -> GetAppendWindowStart(This) )
    ( (This)->lpVtbl -> SetAppendWindowStart(This,time) )
    ( (This)->lpVtbl -> GetAppendWindowEnd(This) )
    ( (This)->lpVtbl -> SetAppendWindowEnd(This,time) )
    ( (This)->lpVtbl -> Append(This,pData,len) )
    ( (This)->lpVtbl -> AppendByteStream(This,pStream,pMaxLen) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> Remove(This,start,end) )
typedef
enum MF_MSE_APPEND_MODE
    {
        MF_MSE_APPEND_MODE_SEGMENTS = 0,
        MF_MSE_APPEND_MODE_SEQUENCE = 1
    } MF_MSE_APPEND_MODE;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceBufferAppendMode;
    typedef struct IMFSourceBufferAppendModeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceBufferAppendMode * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceBufferAppendMode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceBufferAppendMode * This);
        MF_MSE_APPEND_MODE ( STDMETHODCALLTYPE *GetAppendMode )(
            IMFSourceBufferAppendMode * This);
        HRESULT ( STDMETHODCALLTYPE *SetAppendMode )(
            IMFSourceBufferAppendMode * This,
            _In_ MF_MSE_APPEND_MODE mode);
        END_INTERFACE
    } IMFSourceBufferAppendModeVtbl;
    interface IMFSourceBufferAppendMode
    {
        CONST_VTBL struct IMFSourceBufferAppendModeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAppendMode(This) )
    ( (This)->lpVtbl -> SetAppendMode(This,mode) )
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceBufferList;
    typedef struct IMFSourceBufferListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceBufferList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceBufferList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceBufferList * This);
        DWORD ( STDMETHODCALLTYPE *GetLength )(
            IMFSourceBufferList * This);
        IMFSourceBuffer *( STDMETHODCALLTYPE *GetSourceBuffer )(
            IMFSourceBufferList * This,
            _In_ DWORD index);
        END_INTERFACE
    } IMFSourceBufferListVtbl;
    interface IMFSourceBufferList
    {
        CONST_VTBL struct IMFSourceBufferListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This) )
    ( (This)->lpVtbl -> GetSourceBuffer(This,index) )
typedef
enum MF_MSE_READY
    {
        MF_MSE_READY_CLOSED = 1,
        MF_MSE_READY_OPEN = 2,
        MF_MSE_READY_ENDED = 3
    } MF_MSE_READY;
typedef
enum MF_MSE_ERROR
    {
        MF_MSE_ERROR_NOERROR = 0,
        MF_MSE_ERROR_NETWORK = 1,
        MF_MSE_ERROR_DECODE = 2,
        MF_MSE_ERROR_UNKNOWN_ERROR = 3
    } MF_MSE_ERROR;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSourceExtension;
    typedef struct IMFMediaSourceExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaSourceExtension * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaSourceExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaSourceExtension * This);
        IMFSourceBufferList *( STDMETHODCALLTYPE *GetSourceBuffers )(
            IMFMediaSourceExtension * This);
        IMFSourceBufferList *( STDMETHODCALLTYPE *GetActiveSourceBuffers )(
            IMFMediaSourceExtension * This);
        MF_MSE_READY ( STDMETHODCALLTYPE *GetReadyState )(
            IMFMediaSourceExtension * This);
        double ( STDMETHODCALLTYPE *GetDuration )(
            IMFMediaSourceExtension * This);
        HRESULT ( STDMETHODCALLTYPE *SetDuration )(
            IMFMediaSourceExtension * This,
            _In_ double duration);
        HRESULT ( STDMETHODCALLTYPE *AddSourceBuffer )(
            IMFMediaSourceExtension * This,
            _In_ BSTR type,
            _In_ IMFSourceBufferNotify *pNotify,
            _Outptr_ IMFSourceBuffer **ppSourceBuffer);
        HRESULT ( STDMETHODCALLTYPE *RemoveSourceBuffer )(
            IMFMediaSourceExtension * This,
            _In_ IMFSourceBuffer *pSourceBuffer);
        HRESULT ( STDMETHODCALLTYPE *SetEndOfStream )(
            IMFMediaSourceExtension * This,
            _In_ MF_MSE_ERROR error);
        BOOL ( STDMETHODCALLTYPE *IsTypeSupported )(
            IMFMediaSourceExtension * This,
            _In_ BSTR type);
        IMFSourceBuffer *( STDMETHODCALLTYPE *GetSourceBuffer )(
            IMFMediaSourceExtension * This,
            _In_ DWORD dwStreamIndex);
        END_INTERFACE
    } IMFMediaSourceExtensionVtbl;
    interface IMFMediaSourceExtension
    {
        CONST_VTBL struct IMFMediaSourceExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSourceBuffers(This) )
    ( (This)->lpVtbl -> GetActiveSourceBuffers(This) )
    ( (This)->lpVtbl -> GetReadyState(This) )
    ( (This)->lpVtbl -> GetDuration(This) )
    ( (This)->lpVtbl -> SetDuration(This,duration) )
    ( (This)->lpVtbl -> AddSourceBuffer(This,type,pNotify,ppSourceBuffer) )
    ( (This)->lpVtbl -> RemoveSourceBuffer(This,pSourceBuffer) )
    ( (This)->lpVtbl -> SetEndOfStream(This,error) )
    ( (This)->lpVtbl -> IsTypeSupported(This,type) )
    ( (This)->lpVtbl -> GetSourceBuffer(This,dwStreamIndex) )
EXTERN_C const IID IID_IMFMediaSourceExtensionLiveSeekableRange;
    typedef struct IMFMediaSourceExtensionLiveSeekableRangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaSourceExtensionLiveSeekableRange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaSourceExtensionLiveSeekableRange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaSourceExtensionLiveSeekableRange * This);
        HRESULT ( STDMETHODCALLTYPE *SetLiveSeekableRange )(
            IMFMediaSourceExtensionLiveSeekableRange * This,
            _In_ double start,
            _In_ double end);
        HRESULT ( STDMETHODCALLTYPE *ClearLiveSeekableRange )(
            IMFMediaSourceExtensionLiveSeekableRange * This);
        END_INTERFACE
    } IMFMediaSourceExtensionLiveSeekableRangeVtbl;
    interface IMFMediaSourceExtensionLiveSeekableRange
    {
        CONST_VTBL struct IMFMediaSourceExtensionLiveSeekableRangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetLiveSeekableRange(This,start,end) )
    ( (This)->lpVtbl -> ClearLiveSeekableRange(This) )
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineEME;
    typedef struct IMFMediaEngineEMEVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineEME * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineEME * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineEME * This);
        HRESULT ( STDMETHODCALLTYPE *get_Keys )(
            IMFMediaEngineEME * This,
            _COM_Outptr_result_maybenull_ IMFMediaKeys **keys);
        HRESULT ( STDMETHODCALLTYPE *SetMediaKeys )(
            IMFMediaEngineEME * This,
            _In_opt_ IMFMediaKeys *keys);
        END_INTERFACE
    } IMFMediaEngineEMEVtbl;
    interface IMFMediaEngineEME
    {
        CONST_VTBL struct IMFMediaEngineEMEVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Keys(This,keys) )
    ( (This)->lpVtbl -> SetMediaKeys(This,keys) )
EXTERN_C const IID IID_IMFMediaEngineSrcElementsEx;
    typedef struct IMFMediaEngineSrcElementsExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineSrcElementsEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineSrcElementsEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineSrcElementsEx * This);
        DWORD ( STDMETHODCALLTYPE *GetLength )(
            IMFMediaEngineSrcElementsEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IMFMediaEngineSrcElementsEx * This,
            _In_ DWORD index,
            _Out_ BSTR *pURL);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IMFMediaEngineSrcElementsEx * This,
            _In_ DWORD index,
            _Out_ BSTR *pType);
        HRESULT ( STDMETHODCALLTYPE *GetMedia )(
            IMFMediaEngineSrcElementsEx * This,
            _In_ DWORD index,
            _Out_ BSTR *pMedia);
        HRESULT ( STDMETHODCALLTYPE *AddElement )(
            IMFMediaEngineSrcElementsEx * This,
            _In_opt_ BSTR pURL,
            _In_opt_ BSTR pType,
            _In_opt_ BSTR pMedia);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllElements )(
            IMFMediaEngineSrcElementsEx * This);
        HRESULT ( STDMETHODCALLTYPE *AddElementEx )(
            IMFMediaEngineSrcElementsEx * This,
            _In_opt_ BSTR pURL,
            _In_opt_ BSTR pType,
            _In_opt_ BSTR pMedia,
            _In_opt_ BSTR keySystem);
        HRESULT ( STDMETHODCALLTYPE *GetKeySystem )(
            IMFMediaEngineSrcElementsEx * This,
            _In_ DWORD index,
            _Outptr_result_maybenull_ BSTR *pType);
        END_INTERFACE
    } IMFMediaEngineSrcElementsExVtbl;
    interface IMFMediaEngineSrcElementsEx
    {
        CONST_VTBL struct IMFMediaEngineSrcElementsExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This) )
    ( (This)->lpVtbl -> GetURL(This,index,pURL) )
    ( (This)->lpVtbl -> GetType(This,index,pType) )
    ( (This)->lpVtbl -> GetMedia(This,index,pMedia) )
    ( (This)->lpVtbl -> AddElement(This,pURL,pType,pMedia) )
    ( (This)->lpVtbl -> RemoveAllElements(This) )
    ( (This)->lpVtbl -> AddElementEx(This,pURL,pType,pMedia,keySystem) )
    ( (This)->lpVtbl -> GetKeySystem(This,index,pType) )
EXTERN_GUID(MF_MEDIA_ENGINE_NEEDKEY_CALLBACK,
0x7ea80843, 0xb6e4, 0x432c, 0x8e, 0xa4, 0x78, 0x48, 0xff, 0xe4, 0x22, 0x0e);
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineNeedKeyNotify;
    typedef struct IMFMediaEngineNeedKeyNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineNeedKeyNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineNeedKeyNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineNeedKeyNotify * This);
        void ( STDMETHODCALLTYPE *NeedKey )(
            IMFMediaEngineNeedKeyNotify * This,
            _In_reads_bytes_opt_(cb) const BYTE *initData,
            _In_ DWORD cb);
        END_INTERFACE
    } IMFMediaEngineNeedKeyNotifyVtbl;
    interface IMFMediaEngineNeedKeyNotify
    {
        CONST_VTBL struct IMFMediaEngineNeedKeyNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NeedKey(This,initData,cb) )
EXTERN_C const IID IID_IMFMediaKeys;
    typedef struct IMFMediaKeysVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeys * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeys * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeys * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            IMFMediaKeys * This,
            _In_opt_ BSTR mimeType,
            _In_reads_bytes_opt_(cb) const BYTE *initData,
            _In_opt_ DWORD cb,
            _In_reads_bytes_opt_(cbCustomData) const BYTE *customData,
            _In_ DWORD cbCustomData,
            _In_ IMFMediaKeySessionNotify *notify,
            _COM_Outptr_ IMFMediaKeySession **ppSession);
        HRESULT ( STDMETHODCALLTYPE *get_KeySystem )(
            IMFMediaKeys * This,
            _COM_Outptr_ BSTR *keySystem);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaKeys * This);
        HRESULT ( STDMETHODCALLTYPE *GetSuspendNotify )(
            IMFMediaKeys * This,
            _COM_Outptr_ IMFCdmSuspendNotify **notify);
        END_INTERFACE
    } IMFMediaKeysVtbl;
    interface IMFMediaKeys
    {
        CONST_VTBL struct IMFMediaKeysVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSession(This,mimeType,initData,cb,customData,cbCustomData,notify,ppSession) )
    ( (This)->lpVtbl -> get_KeySystem(This,keySystem) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetSuspendNotify(This,notify) )
typedef
enum _MF_MEDIA_ENGINE_KEYERR
    {
        MF_MEDIAENGINE_KEYERR_UNKNOWN = 1,
        MF_MEDIAENGINE_KEYERR_CLIENT = 2,
        MF_MEDIAENGINE_KEYERR_SERVICE = 3,
        MF_MEDIAENGINE_KEYERR_OUTPUT = 4,
        MF_MEDIAENGINE_KEYERR_HARDWARECHANGE = 5,
        MF_MEDIAENGINE_KEYERR_DOMAIN = 6
    } MF_MEDIA_ENGINE_KEYERR;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaKeySession;
    typedef struct IMFMediaKeySessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeySession * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeySession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeySession * This);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            IMFMediaKeySession * This,
            _Out_ USHORT *code,
            _Out_ DWORD *systemCode);
        HRESULT ( STDMETHODCALLTYPE *get_KeySystem )(
            IMFMediaKeySession * This,
            _COM_Outptr_ BSTR *keySystem);
        HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
            IMFMediaKeySession * This,
            _COM_Outptr_ BSTR *sessionId);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IMFMediaKeySession * This,
            _In_reads_bytes_(cb) const BYTE *key,
            _In_ DWORD cb);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IMFMediaKeySession * This);
        END_INTERFACE
    } IMFMediaKeySessionVtbl;
    interface IMFMediaKeySession
    {
        CONST_VTBL struct IMFMediaKeySessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetError(This,code,systemCode) )
    ( (This)->lpVtbl -> get_KeySystem(This,keySystem) )
    ( (This)->lpVtbl -> get_SessionId(This,sessionId) )
    ( (This)->lpVtbl -> Update(This,key,cb) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IMFMediaKeySessionNotify;
    typedef struct IMFMediaKeySessionNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeySessionNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeySessionNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeySessionNotify * This);
        void ( STDMETHODCALLTYPE *KeyMessage )(
            IMFMediaKeySessionNotify * This,
            _In_opt_ BSTR destinationURL,
            _In_reads_bytes_(cb) const BYTE *message,
            _In_ DWORD cb);
        void ( STDMETHODCALLTYPE *KeyAdded )(
            IMFMediaKeySessionNotify * This);
        void ( STDMETHODCALLTYPE *KeyError )(
            IMFMediaKeySessionNotify * This,
            _In_ USHORT code,
            _In_ DWORD systemCode);
        END_INTERFACE
    } IMFMediaKeySessionNotifyVtbl;
    interface IMFMediaKeySessionNotify
    {
        CONST_VTBL struct IMFMediaKeySessionNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> KeyMessage(This,destinationURL,message,cb) )
    ( (This)->lpVtbl -> KeyAdded(This) )
    ( (This)->lpVtbl -> KeyError(This,code,systemCode) )
EXTERN_C const IID IID_IMFCdmSuspendNotify;
    typedef struct IMFCdmSuspendNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFCdmSuspendNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFCdmSuspendNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFCdmSuspendNotify * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IMFCdmSuspendNotify * This);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IMFCdmSuspendNotify * This);
        END_INTERFACE
    } IMFCdmSuspendNotifyVtbl;
    interface IMFCdmSuspendNotify
    {
        CONST_VTBL struct IMFCdmSuspendNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This) )
    ( (This)->lpVtbl -> End(This) )
typedef
enum _MF_HDCP_STATUS
    {
        MF_HDCP_STATUS_ON = 0,
        MF_HDCP_STATUS_OFF = 1,
        MF_HDCP_STATUS_ON_WITH_TYPE_ENFORCEMENT = 2
    } MF_HDCP_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFHDCPStatus;
    typedef struct IMFHDCPStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFHDCPStatus * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFHDCPStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFHDCPStatus * This);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            IMFHDCPStatus * This,
            _Inout_ MF_HDCP_STATUS *pStatus,
            _Inout_ BOOL *pfStatus);
        HRESULT ( STDMETHODCALLTYPE *Set )(
            IMFHDCPStatus * This,
            _In_ MF_HDCP_STATUS status);
        END_INTERFACE
    } IMFHDCPStatusVtbl;
    interface IMFHDCPStatus
    {
        CONST_VTBL struct IMFHDCPStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Query(This,pStatus,pfStatus) )
    ( (This)->lpVtbl -> Set(This,status) )
typedef
enum MF_MEDIA_ENGINE_OPM_STATUS
    {
        MF_MEDIA_ENGINE_OPM_NOT_REQUESTED = 0,
        MF_MEDIA_ENGINE_OPM_ESTABLISHED = 1,
        MF_MEDIA_ENGINE_OPM_FAILED_VM = 2,
        MF_MEDIA_ENGINE_OPM_FAILED_BDA = 3,
        MF_MEDIA_ENGINE_OPM_FAILED_UNSIGNED_DRIVER = 4,
        MF_MEDIA_ENGINE_OPM_FAILED = 5
    } MF_MEDIA_ENGINE_OPM_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineOPMInfo;
    typedef struct IMFMediaEngineOPMInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineOPMInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineOPMInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineOPMInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetOPMInfo )(
            IMFMediaEngineOPMInfo * This,
            _Out_ MF_MEDIA_ENGINE_OPM_STATUS *pStatus,
            _Out_ BOOL *pConstricted);
        END_INTERFACE
    } IMFMediaEngineOPMInfoVtbl;
    interface IMFMediaEngineOPMInfo
    {
        CONST_VTBL struct IMFMediaEngineOPMInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOPMInfo(This,pStatus,pConstricted) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID(MF_MEDIA_ENGINE_CALLBACK,
0xc60381b8,0x83a4,0x41f8,0xa3,0xd0,0xde,0x05,0x07,0x68,0x49,0xa9);
EXTERN_GUID(MF_MEDIA_ENGINE_DXGI_MANAGER,
0x065702da,0x1094,0x486d,0x86,0x17,0xee,0x7c,0xc4,0xee,0x46,0x48);
EXTERN_GUID(MF_MEDIA_ENGINE_EXTENSION,
0x3109fd46,0x060d,0x4b62,0x8d,0xcf,0xfa,0xff,0x81,0x13,0x18,0xd2);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID(MF_MEDIA_ENGINE_PLAYBACK_HWND,
0xd988879b,0x67c9,0x4d92,0xba,0xa7,0x6e,0xad,0xd4,0x46,0x03,0x9d);
EXTERN_GUID(MF_MEDIA_ENGINE_OPM_HWND,
0xa0be8ee7, 0x0572, 0x4f2c, 0xa8, 0x01, 0x2a, 0x15, 0x1b, 0xd3, 0xe7, 0x26);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID(MF_MEDIA_ENGINE_PLAYBACK_VISUAL,
0x6debd26f,0x6ab9,0x4d7e,0xb0,0xee,0xc6,0x1a,0x73,0xff,0xad,0x15);
EXTERN_GUID(MF_MEDIA_ENGINE_COREWINDOW,
0xfccae4dc, 0x0b7f, 0x41c2, 0x9f, 0x96, 0x46, 0x59, 0x94, 0x8a, 0xcd, 0xdc);
EXTERN_GUID(MF_MEDIA_ENGINE_VIDEO_OUTPUT_FORMAT,
0x5066893c,0x8cf9,0x42bc,0x8b,0x8a,0x47,0x22,0x12,0xe5,0x27,0x26);
EXTERN_GUID(MF_MEDIA_ENGINE_CONTENT_PROTECTION_FLAGS,
0xe0350223, 0x5aaf, 0x4d76, 0xa7, 0xc3, 0x06, 0xde, 0x70, 0x89, 0x4d, 0xb4);
EXTERN_GUID(MF_MEDIA_ENGINE_CONTENT_PROTECTION_MANAGER,
0xfdd6dfaa, 0xbd85, 0x4af3, 0x9e, 0x0f, 0xa0, 0x1d, 0x53, 0x9d, 0x87, 0x6a);
EXTERN_GUID(MF_MEDIA_ENGINE_AUDIO_ENDPOINT_ROLE,
0xd2cb93d1, 0x116a, 0x44f2, 0x93, 0x85, 0xf7, 0xd0, 0xfd, 0xa2, 0xfb, 0x46);
EXTERN_GUID(MF_MEDIA_ENGINE_AUDIO_CATEGORY,
0xc8d4c51d, 0x350e, 0x41f2, 0xba, 0x46, 0xfa, 0xeb, 0xbb, 0x08, 0x57, 0xf6);
EXTERN_GUID(MF_MEDIA_ENGINE_STREAM_CONTAINS_ALPHA_CHANNEL,
0x5cbfaf44, 0xd2b2, 0x4cfb, 0x80, 0xa7, 0xd4, 0x29, 0xc7, 0x4c, 0x78, 0x9d);
EXTERN_GUID(MF_MEDIA_ENGINE_BROWSER_COMPATIBILITY_MODE,
0x4e0212e2, 0xe18f, 0x41e1, 0x95, 0xe5, 0xc0, 0xe7, 0xe9, 0x23, 0x5b, 0xc3);
EXTERN_GUID(MF_MEDIA_ENGINE_BROWSER_COMPATIBILITY_MODE_IE9,
0x052c2d39, 0x40c0, 0x4188, 0xab, 0x86, 0xf8, 0x28, 0x27, 0x3b, 0x75, 0x22);
EXTERN_GUID(MF_MEDIA_ENGINE_BROWSER_COMPATIBILITY_MODE_IE10,
0x11a47afd, 0x6589, 0x4124, 0xb3, 0x12, 0x61, 0x58, 0xec, 0x51, 0x7f, 0xc3);
EXTERN_GUID(MF_MEDIA_ENGINE_BROWSER_COMPATIBILITY_MODE_IE11,
0x1cf1315f, 0xce3f, 0x4035, 0x93, 0x91, 0x16, 0x14, 0x2f, 0x77, 0x51, 0x89);
EXTERN_GUID(MF_MEDIA_ENGINE_BROWSER_COMPATIBILITY_MODE_IE_EDGE,
0xa6f3e465, 0x3aca, 0x442c, 0xa3, 0xf0, 0xad, 0x6d, 0xda, 0xd8, 0x39, 0xae);
EXTERN_GUID(MF_MEDIA_ENGINE_COMPATIBILITY_MODE,
0x3ef26ad4, 0xdc54, 0x45de, 0xb9, 0xaf, 0x76, 0xc8, 0xc6, 0x6b, 0xfa, 0x8e);
EXTERN_GUID(MF_MEDIA_ENGINE_COMPATIBILITY_MODE_WWA_EDGE,
0x15b29098, 0x9f01, 0x4e4d, 0xb6, 0x5a, 0xc0, 0x6c, 0x6c, 0x89, 0xda, 0x2a);
EXTERN_GUID(MF_MEDIA_ENGINE_COMPATIBILITY_MODE_WIN10,
0x5b25e089, 0x6ca7, 0x4139, 0xa2, 0xcb, 0xfc, 0xaa, 0xb3, 0x95, 0x52, 0xa3);
EXTERN_GUID(MF_MEDIA_ENGINE_SOURCE_RESOLVER_CONFIG_STORE,
0x0ac0c497, 0xb3c4, 0x48c9, 0x9c, 0xde, 0xbb, 0x8c, 0xa2, 0x44, 0x2c, 0xa3);
EXTERN_GUID(MF_MEDIA_ENGINE_TRACK_ID,
0x65bea312, 0x4043, 0x4815, 0x8e, 0xab, 0x44, 0xdc, 0xe2, 0xef, 0x8f, 0x2a);
EXTERN_GUID(MF_MEDIA_ENGINE_TELEMETRY_APPLICATION_ID,
0x1e7b273b, 0xa7e4, 0x402a, 0x8f, 0x51, 0xc4, 0x8e, 0x88, 0xa2, 0xca, 0xbc);
EXTERN_GUID(MF_MEDIA_ENGINE_SYNCHRONOUS_CLOSE,
0xc3c2e12f, 0x7e0e, 0x4e43, 0xb9, 0x1c, 0xdc, 0x99, 0x2c, 0xcd, 0xfa, 0x5e);
EXTERN_GUID(MF_MEDIA_ENGINE_MEDIA_PLAYER_MODE,
0x3ddd8d45, 0x5aa1, 0x4112, 0x82, 0xe5, 0x36, 0xf6, 0xa2, 0x19, 0x7e, 0x6e);
typedef
enum MF_MEDIA_ENGINE_CREATEFLAGS
    {
        MF_MEDIA_ENGINE_AUDIOONLY = 0x1,
        MF_MEDIA_ENGINE_WAITFORSTABLE_STATE = 0x2,
        MF_MEDIA_ENGINE_FORCEMUTE = 0x4,
        MF_MEDIA_ENGINE_REAL_TIME_MODE = 0x8,
        MF_MEDIA_ENGINE_DISABLE_LOCAL_PLUGINS = 0x10,
        MF_MEDIA_ENGINE_CREATEFLAGS_MASK = 0x1f
    } MF_MEDIA_ENGINE_CREATEFLAGS;
typedef
enum MF_MEDIA_ENGINE_PROTECTION_FLAGS
    {
        MF_MEDIA_ENGINE_ENABLE_PROTECTED_CONTENT = 1,
        MF_MEDIA_ENGINE_USE_PMP_FOR_ALL_CONTENT = 2,
        MF_MEDIA_ENGINE_USE_UNPROTECTED_PMP = 4
    } MF_MEDIA_ENGINE_PROTECTION_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineClassFactory;
    typedef struct IMFMediaEngineClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IMFMediaEngineClassFactory * This,
            _In_ DWORD dwFlags,
            _In_ IMFAttributes *pAttr,
            _Outptr_ IMFMediaEngine **ppPlayer);
        HRESULT ( STDMETHODCALLTYPE *CreateTimeRange )(
            IMFMediaEngineClassFactory * This,
            _Outptr_ IMFMediaTimeRange **ppTimeRange);
        HRESULT ( STDMETHODCALLTYPE *CreateError )(
            IMFMediaEngineClassFactory * This,
            _Outptr_ IMFMediaError **ppError);
        END_INTERFACE
    } IMFMediaEngineClassFactoryVtbl;
    interface IMFMediaEngineClassFactory
    {
        CONST_VTBL struct IMFMediaEngineClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,dwFlags,pAttr,ppPlayer) )
    ( (This)->lpVtbl -> CreateTimeRange(This,ppTimeRange) )
    ( (This)->lpVtbl -> CreateError(This,ppError) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineClassFactoryEx;
    typedef struct IMFMediaEngineClassFactoryExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineClassFactoryEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineClassFactoryEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineClassFactoryEx * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IMFMediaEngineClassFactoryEx * This,
            _In_ DWORD dwFlags,
            _In_ IMFAttributes *pAttr,
            _Outptr_ IMFMediaEngine **ppPlayer);
        HRESULT ( STDMETHODCALLTYPE *CreateTimeRange )(
            IMFMediaEngineClassFactoryEx * This,
            _Outptr_ IMFMediaTimeRange **ppTimeRange);
        HRESULT ( STDMETHODCALLTYPE *CreateError )(
            IMFMediaEngineClassFactoryEx * This,
            _Outptr_ IMFMediaError **ppError);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaSourceExtension )(
            IMFMediaEngineClassFactoryEx * This,
            _In_ DWORD dwFlags,
            _In_ IMFAttributes *pAttr,
            _COM_Outptr_ IMFMediaSourceExtension **ppMSE);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaKeys )(
            IMFMediaEngineClassFactoryEx * This,
            _In_ BSTR keySystem,
            _In_opt_ BSTR cdmStorePath,
            _COM_Outptr_ IMFMediaKeys **ppKeys);
        HRESULT ( STDMETHODCALLTYPE *IsTypeSupported )(
            IMFMediaEngineClassFactoryEx * This,
            _In_opt_ BSTR type,
            _In_ BSTR keySystem,
            _Out_ BOOL *isSupported);
        END_INTERFACE
    } IMFMediaEngineClassFactoryExVtbl;
    interface IMFMediaEngineClassFactoryEx
    {
        CONST_VTBL struct IMFMediaEngineClassFactoryExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,dwFlags,pAttr,ppPlayer) )
    ( (This)->lpVtbl -> CreateTimeRange(This,ppTimeRange) )
    ( (This)->lpVtbl -> CreateError(This,ppError) )
    ( (This)->lpVtbl -> CreateMediaSourceExtension(This,dwFlags,pAttr,ppMSE) )
    ( (This)->lpVtbl -> CreateMediaKeys(This,keySystem,cdmStorePath,ppKeys) )
    ( (This)->lpVtbl -> IsTypeSupported(This,type,keySystem,isSupported) )
EXTERN_C const IID IID_IMFMediaEngineClassFactory2;
    typedef struct IMFMediaEngineClassFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineClassFactory2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineClassFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineClassFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaKeys2 )(
            IMFMediaEngineClassFactory2 * This,
            _In_ BSTR keySystem,
            _In_ BSTR defaultCdmStorePath,
            _In_opt_ BSTR inprivateCdmStorePath,
            _COM_Outptr_ IMFMediaKeys **ppKeys);
        END_INTERFACE
    } IMFMediaEngineClassFactory2Vtbl;
    interface IMFMediaEngineClassFactory2
    {
        CONST_VTBL struct IMFMediaEngineClassFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateMediaKeys2(This,keySystem,defaultCdmStorePath,inprivateCdmStorePath,ppKeys) )
EXTERN_C const IID IID_IMFExtendedDRMTypeSupport;
    typedef struct IMFExtendedDRMTypeSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFExtendedDRMTypeSupport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFExtendedDRMTypeSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFExtendedDRMTypeSupport * This);
        HRESULT ( STDMETHODCALLTYPE *IsTypeSupportedEx )(
            IMFExtendedDRMTypeSupport * This,
            _In_opt_ BSTR type,
            _In_ BSTR keySystem,
            _Out_ MF_MEDIA_ENGINE_CANPLAY *pAnswer);
        END_INTERFACE
    } IMFExtendedDRMTypeSupportVtbl;
    interface IMFExtendedDRMTypeSupport
    {
        CONST_VTBL struct IMFExtendedDRMTypeSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsTypeSupportedEx(This,type,keySystem,pAnswer) )
EXTERN_C const IID IID_IMFMediaEngineSupportsSourceTransfer;
    typedef struct IMFMediaEngineSupportsSourceTransferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineSupportsSourceTransfer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineSupportsSourceTransfer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineSupportsSourceTransfer * This);
        HRESULT ( STDMETHODCALLTYPE *ShouldTransferSource )(
            IMFMediaEngineSupportsSourceTransfer * This,
            _Out_ BOOL *pfShouldTransfer);
        HRESULT ( STDMETHODCALLTYPE *DetachMediaSource )(
            IMFMediaEngineSupportsSourceTransfer * This,
            _COM_Outptr_ IMFByteStream **ppByteStream,
            _COM_Outptr_ IMFMediaSource **ppMediaSource,
            _COM_Outptr_ IMFMediaSourceExtension **ppMSE);
        HRESULT ( STDMETHODCALLTYPE *AttachMediaSource )(
            IMFMediaEngineSupportsSourceTransfer * This,
            _In_opt_ IMFByteStream *pByteStream,
            _In_ IMFMediaSource *pMediaSource,
            _In_opt_ IMFMediaSourceExtension *pMSE);
        END_INTERFACE
    } IMFMediaEngineSupportsSourceTransferVtbl;
    interface IMFMediaEngineSupportsSourceTransfer
    {
        CONST_VTBL struct IMFMediaEngineSupportsSourceTransferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShouldTransferSource(This,pfShouldTransfer) )
    ( (This)->lpVtbl -> DetachMediaSource(This,ppByteStream,ppMediaSource,ppMSE) )
    ( (This)->lpVtbl -> AttachMediaSource(This,pByteStream,pMediaSource,pMSE) )
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineTransferSource;
    typedef struct IMFMediaEngineTransferSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineTransferSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineTransferSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineTransferSource * This);
        HRESULT ( STDMETHODCALLTYPE *TransferSourceToMediaEngine )(
            IMFMediaEngineTransferSource * This,
            _In_ IMFMediaEngine *destination);
        END_INTERFACE
    } IMFMediaEngineTransferSourceVtbl;
    interface IMFMediaEngineTransferSource
    {
        CONST_VTBL struct IMFMediaEngineTransferSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransferSourceToMediaEngine(This,destination) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID(CLSID_MFMediaEngineClassFactory,
0xb44392da, 0x499b, 0x446b, 0xa4, 0xcb, 0x0, 0x5f, 0xea, 0xd0, 0xe6, 0xd5);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MF_MEDIA_ENGINE_TIMEDTEXT, 0x805ea411, 0x92e0, 0x4e59, 0x9b, 0x6e, 0x5c, 0x7d, 0x79, 0x15, 0xe6, 0x4f);
typedef
enum MF_TIMED_TEXT_TRACK_KIND
    {
        MF_TIMED_TEXT_TRACK_KIND_UNKNOWN = 0,
        MF_TIMED_TEXT_TRACK_KIND_SUBTITLES = 1,
        MF_TIMED_TEXT_TRACK_KIND_CAPTIONS = 2,
        MF_TIMED_TEXT_TRACK_KIND_METADATA = 3
    } MF_TIMED_TEXT_TRACK_KIND;
typedef
enum MF_TIMED_TEXT_UNIT_TYPE
    {
        MF_TIMED_TEXT_UNIT_TYPE_PIXELS = 0,
        MF_TIMED_TEXT_UNIT_TYPE_PERCENTAGE = 1
    } MF_TIMED_TEXT_UNIT_TYPE;
typedef
enum MF_TIMED_TEXT_FONT_STYLE
    {
        MF_TIMED_TEXT_FONT_STYLE_NORMAL = 0,
        MF_TIMED_TEXT_FONT_STYLE_OBLIQUE = 1,
        MF_TIMED_TEXT_FONT_STYLE_ITALIC = 2
    } MF_TIMED_TEXT_FONT_STYLE;
typedef
enum MF_TIMED_TEXT_ALIGNMENT
    {
        MF_TIMED_TEXT_ALIGNMENT_START = 0,
        MF_TIMED_TEXT_ALIGNMENT_END = 1,
        MF_TIMED_TEXT_ALIGNMENT_CENTER = 2
    } MF_TIMED_TEXT_ALIGNMENT;
typedef
enum MF_TIMED_TEXT_DISPLAY_ALIGNMENT
    {
        MF_TIMED_TEXT_DISPLAY_ALIGNMENT_BEFORE = 0,
        MF_TIMED_TEXT_DISPLAY_ALIGNMENT_AFTER = 1,
        MF_TIMED_TEXT_DISPLAY_ALIGNMENT_CENTER = 2
    } MF_TIMED_TEXT_DISPLAY_ALIGNMENT;
typedef
enum MF_TIMED_TEXT_DECORATION
    {
        MF_TIMED_TEXT_DECORATION_NONE = 0,
        MF_TIMED_TEXT_DECORATION_UNDERLINE = 1,
        MF_TIMED_TEXT_DECORATION_LINE_THROUGH = 2,
        MF_TIMED_TEXT_DECORATION_OVERLINE = 4
    } MF_TIMED_TEXT_DECORATION;
typedef
enum MF_TIMED_TEXT_WRITING_MODE
    {
        MF_TIMED_TEXT_WRITING_MODE_LRTB = 0,
        MF_TIMED_TEXT_WRITING_MODE_RLTB = 1,
        MF_TIMED_TEXT_WRITING_MODE_TBRL = 2,
        MF_TIMED_TEXT_WRITING_MODE_TBLR = 3,
        MF_TIMED_TEXT_WRITING_MODE_LR = 4,
        MF_TIMED_TEXT_WRITING_MODE_RL = 5,
        MF_TIMED_TEXT_WRITING_MODE_TB = 6
    } MF_TIMED_TEXT_WRITING_MODE;
typedef
enum MF_TIMED_TEXT_SCROLL_MODE
    {
        MF_TIMED_TEXT_SCROLL_MODE_POP_ON = 0,
        MF_TIMED_TEXT_SCROLL_MODE_ROLL_UP = 1
    } MF_TIMED_TEXT_SCROLL_MODE;
typedef
enum MF_TIMED_TEXT_ERROR_CODE
    {
        MF_TIMED_TEXT_ERROR_CODE_NOERROR = 0,
        MF_TIMED_TEXT_ERROR_CODE_FATAL = 1,
        MF_TIMED_TEXT_ERROR_CODE_DATA_FORMAT = 2,
        MF_TIMED_TEXT_ERROR_CODE_NETWORK = 3,
        MF_TIMED_TEXT_ERROR_CODE_INTERNAL = 4
    } MF_TIMED_TEXT_ERROR_CODE;
typedef
enum MF_TIMED_TEXT_CUE_EVENT
    {
        MF_TIMED_TEXT_CUE_EVENT_ACTIVE = 0,
        MF_TIMED_TEXT_CUE_EVENT_INACTIVE = ( MF_TIMED_TEXT_CUE_EVENT_ACTIVE + 1 ) ,
        MF_TIMED_TEXT_CUE_EVENT_CLEAR = ( MF_TIMED_TEXT_CUE_EVENT_INACTIVE + 1 )
    } MF_TIMED_TEXT_CUE_EVENT;
typedef
enum MF_TIMED_TEXT_TRACK_READY_STATE
    {
        MF_TIMED_TEXT_TRACK_READY_STATE_NONE = 0,
        MF_TIMED_TEXT_TRACK_READY_STATE_LOADING = ( MF_TIMED_TEXT_TRACK_READY_STATE_NONE + 1 ) ,
        MF_TIMED_TEXT_TRACK_READY_STATE_LOADED = ( MF_TIMED_TEXT_TRACK_READY_STATE_LOADING + 1 ) ,
        MF_TIMED_TEXT_TRACK_READY_STATE_ERROR = ( MF_TIMED_TEXT_TRACK_READY_STATE_LOADED + 1 )
    } MF_TIMED_TEXT_TRACK_READY_STATE;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTimedText;
    typedef struct IMFTimedTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedText * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedText * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotifications )(
            IMFTimedText * This,
            _In_opt_ IMFTimedTextNotify *notify);
        HRESULT ( STDMETHODCALLTYPE *SelectTrack )(
            IMFTimedText * This,
            _In_ DWORD trackId,
            _In_ BOOL selected);
        HRESULT ( STDMETHODCALLTYPE *AddDataSource )(
            IMFTimedText * This,
            _In_ IMFByteStream *byteStream,
            _In_opt_ LPCWSTR label,
            _In_opt_ LPCWSTR language,
            _In_ MF_TIMED_TEXT_TRACK_KIND kind,
            _In_ BOOL isDefault,
            _Out_ DWORD *trackId);
        HRESULT ( STDMETHODCALLTYPE *AddDataSourceFromUrl )(
            IMFTimedText * This,
            _In_ LPCWSTR url,
            _In_opt_ LPCWSTR label,
            _In_opt_ LPCWSTR language,
            _In_ MF_TIMED_TEXT_TRACK_KIND kind,
            _In_ BOOL isDefault,
            _Out_ DWORD *trackId);
        HRESULT ( STDMETHODCALLTYPE *AddTrack )(
            IMFTimedText * This,
            _In_opt_ LPCWSTR label,
            _In_opt_ LPCWSTR language,
            _In_ MF_TIMED_TEXT_TRACK_KIND kind,
            _COM_Outptr_ IMFTimedTextTrack **track);
        HRESULT ( STDMETHODCALLTYPE *RemoveTrack )(
            IMFTimedText * This,
            _In_ IMFTimedTextTrack *track);
        HRESULT ( STDMETHODCALLTYPE *GetCueTimeOffset )(
            IMFTimedText * This,
            _Out_ double *offset);
        HRESULT ( STDMETHODCALLTYPE *SetCueTimeOffset )(
            IMFTimedText * This,
            _In_ double offset);
        HRESULT ( STDMETHODCALLTYPE *GetTracks )(
            IMFTimedText * This,
            _COM_Outptr_ IMFTimedTextTrackList **tracks);
        HRESULT ( STDMETHODCALLTYPE *GetActiveTracks )(
            IMFTimedText * This,
            _COM_Outptr_ IMFTimedTextTrackList **activeTracks);
        HRESULT ( STDMETHODCALLTYPE *GetTextTracks )(
            IMFTimedText * This,
            _COM_Outptr_ IMFTimedTextTrackList **textTracks);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataTracks )(
            IMFTimedText * This,
            _COM_Outptr_ IMFTimedTextTrackList **metadataTracks);
        HRESULT ( STDMETHODCALLTYPE *SetInBandEnabled )(
            IMFTimedText * This,
            _In_ BOOL enabled);
        BOOL ( STDMETHODCALLTYPE *IsInBandEnabled )(
            IMFTimedText * This);
        END_INTERFACE
    } IMFTimedTextVtbl;
    interface IMFTimedText
    {
        CONST_VTBL struct IMFTimedTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterNotifications(This,notify) )
    ( (This)->lpVtbl -> SelectTrack(This,trackId,selected) )
    ( (This)->lpVtbl -> AddDataSource(This,byteStream,label,language,kind,isDefault,trackId) )
    ( (This)->lpVtbl -> AddDataSourceFromUrl(This,url,label,language,kind,isDefault,trackId) )
    ( (This)->lpVtbl -> AddTrack(This,label,language,kind,track) )
    ( (This)->lpVtbl -> RemoveTrack(This,track) )
    ( (This)->lpVtbl -> GetCueTimeOffset(This,offset) )
    ( (This)->lpVtbl -> SetCueTimeOffset(This,offset) )
    ( (This)->lpVtbl -> GetTracks(This,tracks) )
    ( (This)->lpVtbl -> GetActiveTracks(This,activeTracks) )
    ( (This)->lpVtbl -> GetTextTracks(This,textTracks) )
    ( (This)->lpVtbl -> GetMetadataTracks(This,metadataTracks) )
    ( (This)->lpVtbl -> SetInBandEnabled(This,enabled) )
    ( (This)->lpVtbl -> IsInBandEnabled(This) )
EXTERN_C const IID IID_IMFTimedTextNotify;
    typedef struct IMFTimedTextNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextNotify * This);
        void ( STDMETHODCALLTYPE *TrackAdded )(
            IMFTimedTextNotify * This,
            _In_ DWORD trackId);
        void ( STDMETHODCALLTYPE *TrackRemoved )(
            IMFTimedTextNotify * This,
            _In_ DWORD trackId);
        void ( STDMETHODCALLTYPE *TrackSelected )(
            IMFTimedTextNotify * This,
            _In_ DWORD trackId,
            _In_ BOOL selected);
        void ( STDMETHODCALLTYPE *TrackReadyStateChanged )(
            IMFTimedTextNotify * This,
            _In_ DWORD trackId);
        void ( STDMETHODCALLTYPE *Error )(
            IMFTimedTextNotify * This,
            _In_ MF_TIMED_TEXT_ERROR_CODE errorCode,
            _In_ HRESULT extendedErrorCode,
            _In_ DWORD sourceTrackId);
        void ( STDMETHODCALLTYPE *Cue )(
            IMFTimedTextNotify * This,
            _In_ MF_TIMED_TEXT_CUE_EVENT cueEvent,
            _In_ double currentTime,
            _In_opt_ IMFTimedTextCue *cue);
        void ( STDMETHODCALLTYPE *Reset )(
            IMFTimedTextNotify * This);
        END_INTERFACE
    } IMFTimedTextNotifyVtbl;
    interface IMFTimedTextNotify
    {
        CONST_VTBL struct IMFTimedTextNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TrackAdded(This,trackId) )
    ( (This)->lpVtbl -> TrackRemoved(This,trackId) )
    ( (This)->lpVtbl -> TrackSelected(This,trackId,selected) )
    ( (This)->lpVtbl -> TrackReadyStateChanged(This,trackId) )
    ( (This)->lpVtbl -> Error(This,errorCode,extendedErrorCode,sourceTrackId) )
    ( (This)->lpVtbl -> Cue(This,cueEvent,currentTime,cue) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_IMFTimedTextTrack;
    typedef struct IMFTimedTextTrackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextTrack * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextTrack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextTrack * This);
        DWORD ( STDMETHODCALLTYPE *GetId )(
            IMFTimedTextTrack * This);
        HRESULT ( STDMETHODCALLTYPE *GetLabel )(
            IMFTimedTextTrack * This,
            _Outptr_ LPWSTR *label);
        HRESULT ( STDMETHODCALLTYPE *SetLabel )(
            IMFTimedTextTrack * This,
            _In_ LPCWSTR label);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            IMFTimedTextTrack * This,
            _Outptr_ LPWSTR *language);
        MF_TIMED_TEXT_TRACK_KIND ( STDMETHODCALLTYPE *GetTrackKind )(
            IMFTimedTextTrack * This);
        BOOL ( STDMETHODCALLTYPE *IsInBand )(
            IMFTimedTextTrack * This);
        HRESULT ( STDMETHODCALLTYPE *GetInBandMetadataTrackDispatchType )(
            IMFTimedTextTrack * This,
            _Outptr_ LPWSTR *dispatchType);
        BOOL ( STDMETHODCALLTYPE *IsActive )(
            IMFTimedTextTrack * This);
        MF_TIMED_TEXT_ERROR_CODE ( STDMETHODCALLTYPE *GetErrorCode )(
            IMFTimedTextTrack * This);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedErrorCode )(
            IMFTimedTextTrack * This);
        HRESULT ( STDMETHODCALLTYPE *GetDataFormat )(
            IMFTimedTextTrack * This,
            _Out_ GUID *format);
        MF_TIMED_TEXT_TRACK_READY_STATE ( STDMETHODCALLTYPE *GetReadyState )(
            IMFTimedTextTrack * This);
        HRESULT ( STDMETHODCALLTYPE *GetCueList )(
            IMFTimedTextTrack * This,
            _COM_Outptr_ IMFTimedTextCueList **cues);
        END_INTERFACE
    } IMFTimedTextTrackVtbl;
    interface IMFTimedTextTrack
    {
        CONST_VTBL struct IMFTimedTextTrackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This) )
    ( (This)->lpVtbl -> GetLabel(This,label) )
    ( (This)->lpVtbl -> SetLabel(This,label) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> GetTrackKind(This) )
    ( (This)->lpVtbl -> IsInBand(This) )
    ( (This)->lpVtbl -> GetInBandMetadataTrackDispatchType(This,dispatchType) )
    ( (This)->lpVtbl -> IsActive(This) )
    ( (This)->lpVtbl -> GetErrorCode(This) )
    ( (This)->lpVtbl -> GetExtendedErrorCode(This) )
    ( (This)->lpVtbl -> GetDataFormat(This,format) )
    ( (This)->lpVtbl -> GetReadyState(This) )
    ( (This)->lpVtbl -> GetCueList(This,cues) )
EXTERN_C const IID IID_IMFTimedTextTrackList;
    typedef struct IMFTimedTextTrackListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextTrackList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextTrackList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextTrackList * This);
        DWORD ( STDMETHODCALLTYPE *GetLength )(
            IMFTimedTextTrackList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTrack )(
            IMFTimedTextTrackList * This,
            _In_ DWORD index,
            _COM_Outptr_ IMFTimedTextTrack **track);
        HRESULT ( STDMETHODCALLTYPE *GetTrackById )(
            IMFTimedTextTrackList * This,
            _In_ DWORD trackId,
            _COM_Outptr_ IMFTimedTextTrack **track);
        END_INTERFACE
    } IMFTimedTextTrackListVtbl;
    interface IMFTimedTextTrackList
    {
        CONST_VTBL struct IMFTimedTextTrackListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This) )
    ( (This)->lpVtbl -> GetTrack(This,index,track) )
    ( (This)->lpVtbl -> GetTrackById(This,trackId,track) )
EXTERN_C const IID IID_IMFTimedTextCue;
    typedef struct IMFTimedTextCueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextCue * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextCue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextCue * This);
        DWORD ( STDMETHODCALLTYPE *GetId )(
            IMFTimedTextCue * This);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalId )(
            IMFTimedTextCue * This,
            _Outptr_ LPWSTR *originalId);
        MF_TIMED_TEXT_TRACK_KIND ( STDMETHODCALLTYPE *GetCueKind )(
            IMFTimedTextCue * This);
        double ( STDMETHODCALLTYPE *GetStartTime )(
            IMFTimedTextCue * This);
        double ( STDMETHODCALLTYPE *GetDuration )(
            IMFTimedTextCue * This);
        DWORD ( STDMETHODCALLTYPE *GetTrackId )(
            IMFTimedTextCue * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMFTimedTextCue * This,
            _COM_Outptr_result_maybenull_ IMFTimedTextBinary **data);
        HRESULT ( STDMETHODCALLTYPE *GetRegion )(
            IMFTimedTextCue * This,
            _COM_Outptr_result_maybenull_ IMFTimedTextRegion **region);
        HRESULT ( STDMETHODCALLTYPE *GetStyle )(
            IMFTimedTextCue * This,
            _COM_Outptr_result_maybenull_ IMFTimedTextStyle **style);
        DWORD ( STDMETHODCALLTYPE *GetLineCount )(
            IMFTimedTextCue * This);
        HRESULT ( STDMETHODCALLTYPE *GetLine )(
            IMFTimedTextCue * This,
            _In_ DWORD index,
            _COM_Outptr_ IMFTimedTextFormattedText **line);
        END_INTERFACE
    } IMFTimedTextCueVtbl;
    interface IMFTimedTextCue
    {
        CONST_VTBL struct IMFTimedTextCueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This) )
    ( (This)->lpVtbl -> GetOriginalId(This,originalId) )
    ( (This)->lpVtbl -> GetCueKind(This) )
    ( (This)->lpVtbl -> GetStartTime(This) )
    ( (This)->lpVtbl -> GetDuration(This) )
    ( (This)->lpVtbl -> GetTrackId(This) )
    ( (This)->lpVtbl -> GetData(This,data) )
    ( (This)->lpVtbl -> GetRegion(This,region) )
    ( (This)->lpVtbl -> GetStyle(This,style) )
    ( (This)->lpVtbl -> GetLineCount(This) )
    ( (This)->lpVtbl -> GetLine(This,index,line) )
EXTERN_C const IID IID_IMFTimedTextFormattedText;
    typedef struct IMFTimedTextFormattedTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextFormattedText * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextFormattedText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextFormattedText * This);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            IMFTimedTextFormattedText * This,
            _Outptr_result_maybenull_ LPWSTR *text);
        DWORD ( STDMETHODCALLTYPE *GetSubformattingCount )(
            IMFTimedTextFormattedText * This);
        HRESULT ( STDMETHODCALLTYPE *GetSubformatting )(
            IMFTimedTextFormattedText * This,
            _In_ DWORD index,
            _Out_ DWORD *firstChar,
            _Out_ DWORD *charLength,
            _COM_Outptr_result_maybenull_ IMFTimedTextStyle **style);
        END_INTERFACE
    } IMFTimedTextFormattedTextVtbl;
    interface IMFTimedTextFormattedText
    {
        CONST_VTBL struct IMFTimedTextFormattedTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetText(This,text) )
    ( (This)->lpVtbl -> GetSubformattingCount(This) )
    ( (This)->lpVtbl -> GetSubformatting(This,index,firstChar,charLength,style) )
EXTERN_C const IID IID_IMFTimedTextStyle;
    typedef struct IMFTimedTextStyleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextStyle * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextStyle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextStyle * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IMFTimedTextStyle * This,
            _Outptr_ LPWSTR *name);
        BOOL ( STDMETHODCALLTYPE *IsExternal )(
            IMFTimedTextStyle * This);
        HRESULT ( STDMETHODCALLTYPE *GetFontFamily )(
            IMFTimedTextStyle * This,
            _Outptr_ LPWSTR *fontFamily);
        HRESULT ( STDMETHODCALLTYPE *GetFontSize )(
            IMFTimedTextStyle * This,
            _Out_ double *fontSize,
            _Out_ MF_TIMED_TEXT_UNIT_TYPE *unitType);
        HRESULT ( STDMETHODCALLTYPE *GetColor )(
            IMFTimedTextStyle * This,
            _Out_ MFARGB *color);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            IMFTimedTextStyle * This,
            _Out_ MFARGB *bgColor);
        HRESULT ( STDMETHODCALLTYPE *GetShowBackgroundAlways )(
            IMFTimedTextStyle * This,
            _Out_ BOOL *showBackgroundAlways);
        HRESULT ( STDMETHODCALLTYPE *GetFontStyle )(
            IMFTimedTextStyle * This,
            _Out_ MF_TIMED_TEXT_FONT_STYLE *fontStyle);
        HRESULT ( STDMETHODCALLTYPE *GetBold )(
            IMFTimedTextStyle * This,
            _Out_ BOOL *bold);
        HRESULT ( STDMETHODCALLTYPE *GetRightToLeft )(
            IMFTimedTextStyle * This,
            _Out_ BOOL *rightToLeft);
        HRESULT ( STDMETHODCALLTYPE *GetTextAlignment )(
            IMFTimedTextStyle * This,
            _Out_ MF_TIMED_TEXT_ALIGNMENT *textAlign);
        HRESULT ( STDMETHODCALLTYPE *GetTextDecoration )(
            IMFTimedTextStyle * This,
            _Out_ DWORD *textDecoration);
        HRESULT ( STDMETHODCALLTYPE *GetTextOutline )(
            IMFTimedTextStyle * This,
            _Out_ MFARGB *color,
            _Out_ double *thickness,
            _Out_ double *blurRadius,
            _Out_ MF_TIMED_TEXT_UNIT_TYPE *unitType);
        END_INTERFACE
    } IMFTimedTextStyleVtbl;
    interface IMFTimedTextStyle
    {
        CONST_VTBL struct IMFTimedTextStyleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> IsExternal(This) )
    ( (This)->lpVtbl -> GetFontFamily(This,fontFamily) )
    ( (This)->lpVtbl -> GetFontSize(This,fontSize,unitType) )
    ( (This)->lpVtbl -> GetColor(This,color) )
    ( (This)->lpVtbl -> GetBackgroundColor(This,bgColor) )
    ( (This)->lpVtbl -> GetShowBackgroundAlways(This,showBackgroundAlways) )
    ( (This)->lpVtbl -> GetFontStyle(This,fontStyle) )
    ( (This)->lpVtbl -> GetBold(This,bold) )
    ( (This)->lpVtbl -> GetRightToLeft(This,rightToLeft) )
    ( (This)->lpVtbl -> GetTextAlignment(This,textAlign) )
    ( (This)->lpVtbl -> GetTextDecoration(This,textDecoration) )
    ( (This)->lpVtbl -> GetTextOutline(This,color,thickness,blurRadius,unitType) )
EXTERN_C const IID IID_IMFTimedTextRegion;
    typedef struct IMFTimedTextRegionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextRegion * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextRegion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextRegion * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IMFTimedTextRegion * This,
            _Outptr_ LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            IMFTimedTextRegion * This,
            _Out_ double *pX,
            _Out_ double *pY,
            _Out_ MF_TIMED_TEXT_UNIT_TYPE *unitType);
        HRESULT ( STDMETHODCALLTYPE *GetExtent )(
            IMFTimedTextRegion * This,
            _Out_ double *pWidth,
            _Out_ double *pHeight,
            _Out_ MF_TIMED_TEXT_UNIT_TYPE *unitType);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            IMFTimedTextRegion * This,
            _Out_ MFARGB *bgColor);
        HRESULT ( STDMETHODCALLTYPE *GetWritingMode )(
            IMFTimedTextRegion * This,
            _Out_ MF_TIMED_TEXT_WRITING_MODE *writingMode);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayAlignment )(
            IMFTimedTextRegion * This,
            _Out_ MF_TIMED_TEXT_DISPLAY_ALIGNMENT *displayAlign);
        HRESULT ( STDMETHODCALLTYPE *GetLineHeight )(
            IMFTimedTextRegion * This,
            _Out_ double *pLineHeight,
            _Out_ MF_TIMED_TEXT_UNIT_TYPE *unitType);
        HRESULT ( STDMETHODCALLTYPE *GetClipOverflow )(
            IMFTimedTextRegion * This,
            _Out_ BOOL *clipOverflow);
        HRESULT ( STDMETHODCALLTYPE *GetPadding )(
            IMFTimedTextRegion * This,
            _Out_ double *before,
            _Out_ double *start,
            _Out_ double *after,
            _Out_ double *end,
            _Out_ MF_TIMED_TEXT_UNIT_TYPE *unitType);
        HRESULT ( STDMETHODCALLTYPE *GetWrap )(
            IMFTimedTextRegion * This,
            _Out_ BOOL *wrap);
        HRESULT ( STDMETHODCALLTYPE *GetZIndex )(
            IMFTimedTextRegion * This,
            _Out_ INT32 *zIndex);
        HRESULT ( STDMETHODCALLTYPE *GetScrollMode )(
            IMFTimedTextRegion * This,
            _Out_ MF_TIMED_TEXT_SCROLL_MODE *scrollMode);
        END_INTERFACE
    } IMFTimedTextRegionVtbl;
    interface IMFTimedTextRegion
    {
        CONST_VTBL struct IMFTimedTextRegionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetPosition(This,pX,pY,unitType) )
    ( (This)->lpVtbl -> GetExtent(This,pWidth,pHeight,unitType) )
    ( (This)->lpVtbl -> GetBackgroundColor(This,bgColor) )
    ( (This)->lpVtbl -> GetWritingMode(This,writingMode) )
    ( (This)->lpVtbl -> GetDisplayAlignment(This,displayAlign) )
    ( (This)->lpVtbl -> GetLineHeight(This,pLineHeight,unitType) )
    ( (This)->lpVtbl -> GetClipOverflow(This,clipOverflow) )
    ( (This)->lpVtbl -> GetPadding(This,before,start,after,end,unitType) )
    ( (This)->lpVtbl -> GetWrap(This,wrap) )
    ( (This)->lpVtbl -> GetZIndex(This,zIndex) )
    ( (This)->lpVtbl -> GetScrollMode(This,scrollMode) )
EXTERN_C const IID IID_IMFTimedTextBinary;
    typedef struct IMFTimedTextBinaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextBinary * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextBinary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextBinary * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMFTimedTextBinary * This,
            _Outptr_result_bytebuffer_(*length) const BYTE **data,
            _Out_ DWORD *length);
        END_INTERFACE
    } IMFTimedTextBinaryVtbl;
    interface IMFTimedTextBinary
    {
        CONST_VTBL struct IMFTimedTextBinaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetData(This,data,length) )
EXTERN_C const IID IID_IMFTimedTextCueList;
    typedef struct IMFTimedTextCueListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimedTextCueList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimedTextCueList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimedTextCueList * This);
        DWORD ( STDMETHODCALLTYPE *GetLength )(
            IMFTimedTextCueList * This);
        HRESULT ( STDMETHODCALLTYPE *GetCueByIndex )(
            IMFTimedTextCueList * This,
            _In_ DWORD index,
            _COM_Outptr_ IMFTimedTextCue **cue);
        HRESULT ( STDMETHODCALLTYPE *GetCueById )(
            IMFTimedTextCueList * This,
            _In_ DWORD id,
            _COM_Outptr_ IMFTimedTextCue **cue);
        HRESULT ( STDMETHODCALLTYPE *GetCueByOriginalId )(
            IMFTimedTextCueList * This,
            _In_ LPCWSTR originalId,
            _COM_Outptr_ IMFTimedTextCue **cue);
        HRESULT ( STDMETHODCALLTYPE *AddTextCue )(
            IMFTimedTextCueList * This,
            _In_ double start,
            _In_ double duration,
            _In_ LPCWSTR text,
            _COM_Outptr_opt_ IMFTimedTextCue **cue);
        HRESULT ( STDMETHODCALLTYPE *AddDataCue )(
            IMFTimedTextCueList * This,
            _In_ double start,
            _In_ double duration,
            _In_reads_bytes_(dataSize) const BYTE *data,
            _In_ DWORD dataSize,
            _COM_Outptr_opt_ IMFTimedTextCue **cue);
        HRESULT ( STDMETHODCALLTYPE *RemoveCue )(
            IMFTimedTextCueList * This,
            _In_ IMFTimedTextCue *cue);
        END_INTERFACE
    } IMFTimedTextCueListVtbl;
    interface IMFTimedTextCueList
    {
        CONST_VTBL struct IMFTimedTextCueListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This) )
    ( (This)->lpVtbl -> GetCueByIndex(This,index,cue) )
    ( (This)->lpVtbl -> GetCueById(This,id,cue) )
    ( (This)->lpVtbl -> GetCueByOriginalId(This,originalId,cue) )
    ( (This)->lpVtbl -> AddTextCue(This,start,duration,text,cue) )
    ( (This)->lpVtbl -> AddDataCue(This,start,duration,data,dataSize,cue) )
    ( (This)->lpVtbl -> RemoveCue(This,cue) )
#endif
#pragma endregion
EXTERN_GUID(MF_MEDIA_ENGINE_CONTINUE_ON_CODEC_ERROR,
0xdbcdb7f9,0x48e4,0x4295,0xb7,0x0d,0xd5,0x18,0x23,0x4e,0xeb,0x38);
typedef
enum MF_MEDIA_ENGINE_STREAMTYPE_FAILED
    {
        MF_MEDIA_ENGINE_STREAMTYPE_FAILED_UNKNOWN = 0,
        MF_MEDIA_ENGINE_STREAMTYPE_FAILED_AUDIO = 1,
        MF_MEDIA_ENGINE_STREAMTYPE_FAILED_VIDEO = 2
    } MF_MEDIA_ENGINE_STREAMTYPE_FAILED;
#pragma region EME2
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID(MF_MEDIA_ENGINE_EME_CALLBACK,
0x494553a7, 0xa481, 0x4cb7, 0xbe, 0xc5, 0x38, 0x09, 0x03, 0x51, 0x37, 0x31);
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0044_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEngineEMENotify;
    typedef struct IMFMediaEngineEMENotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineEMENotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineEMENotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineEMENotify * This);
        void ( STDMETHODCALLTYPE *Encrypted )(
            IMFMediaEngineEMENotify * This,
            _In_reads_bytes_opt_(cb) const BYTE *pbInitData,
            _In_ DWORD cb,
            _In_ BSTR bstrInitDataType);
        void ( STDMETHODCALLTYPE *WaitingForKey )(
            IMFMediaEngineEMENotify * This);
        END_INTERFACE
    } IMFMediaEngineEMENotifyVtbl;
    interface IMFMediaEngineEMENotify
    {
        CONST_VTBL struct IMFMediaEngineEMENotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Encrypted(This,pbInitData,cb,bstrInitDataType) )
    ( (This)->lpVtbl -> WaitingForKey(This) )
typedef
enum MF_MEDIAKEYS_REQUIREMENT
    {
        MF_MEDIAKEYS_REQUIREMENT_REQUIRED = 1,
        MF_MEDIAKEYS_REQUIREMENT_OPTIONAL = 2,
        MF_MEDIAKEYS_REQUIREMENT_NOT_ALLOWED = 3
    } MF_MEDIAKEYS_REQUIREMENT;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0045_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaKeySessionNotify2;
    typedef struct IMFMediaKeySessionNotify2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeySessionNotify2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeySessionNotify2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeySessionNotify2 * This);
        void ( STDMETHODCALLTYPE *KeyMessage )(
            IMFMediaKeySessionNotify2 * This,
            _In_opt_ BSTR destinationURL,
            _In_reads_bytes_(cb) const BYTE *message,
            _In_ DWORD cb);
        void ( STDMETHODCALLTYPE *KeyAdded )(
            IMFMediaKeySessionNotify2 * This);
        void ( STDMETHODCALLTYPE *KeyError )(
            IMFMediaKeySessionNotify2 * This,
            _In_ USHORT code,
            _In_ DWORD systemCode);
        void ( STDMETHODCALLTYPE *KeyMessage2 )(
            IMFMediaKeySessionNotify2 * This,
            _In_ MF_MEDIAKEYSESSION_MESSAGETYPE eMessageType,
            _In_opt_ BSTR destinationURL,
            _In_reads_bytes_(cbMessage) const BYTE *pbMessage,
            _In_ DWORD cbMessage);
        void ( STDMETHODCALLTYPE *KeyStatusChange )(
            IMFMediaKeySessionNotify2 * This);
        END_INTERFACE
    } IMFMediaKeySessionNotify2Vtbl;
    interface IMFMediaKeySessionNotify2
    {
        CONST_VTBL struct IMFMediaKeySessionNotify2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> KeyMessage(This,destinationURL,message,cb) )
    ( (This)->lpVtbl -> KeyAdded(This) )
    ( (This)->lpVtbl -> KeyError(This,code,systemCode) )
    ( (This)->lpVtbl -> KeyMessage2(This,eMessageType,destinationURL,pbMessage,cbMessage) )
    ( (This)->lpVtbl -> KeyStatusChange(This) )
EXTERN_C const IID IID_IMFMediaKeySystemAccess;
    typedef struct IMFMediaKeySystemAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeySystemAccess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeySystemAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeySystemAccess * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaKeys )(
            IMFMediaKeySystemAccess * This,
            _In_opt_ IPropertyStore *pCdmCustomConfig,
            _COM_Outptr_ IMFMediaKeys2 **ppKeys);
        HRESULT ( STDMETHODCALLTYPE *get_SupportedConfiguration )(
            IMFMediaKeySystemAccess * This,
            _COM_Outptr_ IPropertyStore **ppSupportedConfiguration);
        HRESULT ( STDMETHODCALLTYPE *get_KeySystem )(
            IMFMediaKeySystemAccess * This,
            _Out_ BSTR *pKeySystem);
        END_INTERFACE
    } IMFMediaKeySystemAccessVtbl;
    interface IMFMediaKeySystemAccess
    {
        CONST_VTBL struct IMFMediaKeySystemAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateMediaKeys(This,pCdmCustomConfig,ppKeys) )
    ( (This)->lpVtbl -> get_SupportedConfiguration(This,ppSupportedConfiguration) )
    ( (This)->lpVtbl -> get_KeySystem(This,pKeySystem) )
EXTERN_C const IID IID_IMFMediaEngineClassFactory3;
    typedef struct IMFMediaEngineClassFactory3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEngineClassFactory3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEngineClassFactory3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEngineClassFactory3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaKeySystemAccess )(
            IMFMediaEngineClassFactory3 * This,
            _In_ BSTR keySystem,
            _In_count_(uSize) IPropertyStore **ppSupportedConfigurationsArray,
            _In_ UINT uSize,
            _COM_Outptr_ IMFMediaKeySystemAccess **ppKeyAccess);
        END_INTERFACE
    } IMFMediaEngineClassFactory3Vtbl;
    interface IMFMediaEngineClassFactory3
    {
        CONST_VTBL struct IMFMediaEngineClassFactory3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateMediaKeySystemAccess(This,keySystem,ppSupportedConfigurationsArray,uSize,ppKeyAccess) )
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_INITDATATYPES = { { 0x497d231b, 0x4eb9, 0x4df0, { 0xb4, 0x74, 0xb9, 0xaf, 0xeb, 0x0a, 0xdf, 0x38 } }, PID_FIRST_USABLE+0x00000001 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_DISTINCTIVEID = { { 0x7dc9c4a5, 0x12be, 0x497e, { 0x8b, 0xff, 0x9b, 0x60, 0xb2, 0xdc, 0x58, 0x45 } }, PID_FIRST_USABLE+0x00000002 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_PERSISTEDSTATE = { { 0x5d4df6ae, 0x9af1, 0x4e3d, { 0x95, 0x5b, 0x0e, 0x4b, 0xd2, 0x2f, 0xed, 0xf0 } }, PID_FIRST_USABLE+0x00000003 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_AUDIOCAPABILITIES = { { 0x980fbb84, 0x297d, 0x4ea7, { 0x89, 0x5f, 0xbc, 0xf2, 0x8a, 0x46, 0x28, 0x81 } }, PID_FIRST_USABLE+0x00000004 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_VIDEOCAPABILITIES = { { 0xb172f83d, 0x30dd, 0x4c10, { 0x80, 0x06, 0xed, 0x53, 0xda, 0x4d, 0x3b, 0xdb } }, PID_FIRST_USABLE+0x00000005 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_LABEL = { { 0x9eae270e, 0xb2d7, 0x4817, { 0xb8, 0x8f, 0x54, 0x00, 0x99, 0xf2, 0xef, 0x4e } }, PID_FIRST_USABLE+0x00000006 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_SESSIONTYPES = { { 0x7623384f, 0x00f5, 0x4376, { 0x86, 0x98, 0x34, 0x58, 0xdb, 0x03, 0x0e, 0xd5 } }, PID_FIRST_USABLE+0x00000007 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_ROBUSTNESS = { { 0x9d3d2b9e, 0x7023, 0x4944, { 0xa8, 0xf5, 0xec, 0xca, 0x52, 0xa4, 0x69, 0x90 } }, PID_FIRST_USABLE+0x00000001 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_CONTENTTYPE = { { 0x289fb1fc, 0xd9c4, 0x4cc7, { 0xb2, 0xbe, 0x97, 0x2b, 0x0e, 0x9b, 0x28, 0x3a } }, PID_FIRST_USABLE+0x00000002 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_CDM_INPRIVATESTOREPATH = { { 0xec305fd9, 0x039f, 0x4ac8, { 0x98, 0xda, 0xe7, 0x92, 0x1e, 0x00, 0x6a, 0x90 } }, PID_FIRST_USABLE+0x00000001 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MF_EME_CDM_STOREPATH = { { 0xf795841e, 0x99f9, 0x44d7, { 0xaf, 0xc0, 0xd3, 0x09, 0xc0, 0x4c, 0x94, 0xab } }, PID_FIRST_USABLE+0x00000002 };
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0048_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaKeys2;
    typedef struct IMFMediaKeys2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeys2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeys2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeys2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            IMFMediaKeys2 * This,
            _In_opt_ BSTR mimeType,
            _In_reads_bytes_opt_(cb) const BYTE *initData,
            _In_opt_ DWORD cb,
            _In_reads_bytes_opt_(cbCustomData) const BYTE *customData,
            _In_ DWORD cbCustomData,
            _In_ IMFMediaKeySessionNotify *notify,
            _COM_Outptr_ IMFMediaKeySession **ppSession);
        HRESULT ( STDMETHODCALLTYPE *get_KeySystem )(
            IMFMediaKeys2 * This,
            _COM_Outptr_ BSTR *keySystem);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaKeys2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSuspendNotify )(
            IMFMediaKeys2 * This,
            _COM_Outptr_ IMFCdmSuspendNotify **notify);
        HRESULT ( STDMETHODCALLTYPE *CreateSession2 )(
            IMFMediaKeys2 * This,
            _In_ MF_MEDIAKEYSESSION_TYPE eSessionType,
            _In_ IMFMediaKeySessionNotify2 *pMFMediaKeySessionNotify2,
            _COM_Outptr_ IMFMediaKeySession2 **ppSession);
        HRESULT ( STDMETHODCALLTYPE *SetServerCertificate )(
            IMFMediaKeys2 * This,
            _In_reads_bytes_opt_(cb) const BYTE *pbServerCertificate,
            _In_ DWORD cb);
        HRESULT ( STDMETHODCALLTYPE *GetDOMException )(
            IMFMediaKeys2 * This,
            _In_ HRESULT systemCode,
            _Out_ HRESULT *code);
        END_INTERFACE
    } IMFMediaKeys2Vtbl;
    interface IMFMediaKeys2
    {
        CONST_VTBL struct IMFMediaKeys2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSession(This,mimeType,initData,cb,customData,cbCustomData,notify,ppSession) )
    ( (This)->lpVtbl -> get_KeySystem(This,keySystem) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetSuspendNotify(This,notify) )
    ( (This)->lpVtbl -> CreateSession2(This,eSessionType,pMFMediaKeySessionNotify2,ppSession) )
    ( (This)->lpVtbl -> SetServerCertificate(This,pbServerCertificate,cb) )
    ( (This)->lpVtbl -> GetDOMException(This,systemCode,code) )
EXTERN_C const IID IID_IMFMediaKeySession2;
    typedef struct IMFMediaKeySession2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaKeySession2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaKeySession2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaKeySession2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            IMFMediaKeySession2 * This,
            _Out_ USHORT *code,
            _Out_ DWORD *systemCode);
        HRESULT ( STDMETHODCALLTYPE *get_KeySystem )(
            IMFMediaKeySession2 * This,
            _COM_Outptr_ BSTR *keySystem);
        HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
            IMFMediaKeySession2 * This,
            _COM_Outptr_ BSTR *sessionId);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IMFMediaKeySession2 * This,
            _In_reads_bytes_(cb) const BYTE *key,
            _In_ DWORD cb);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IMFMediaKeySession2 * This);
        HRESULT ( STDMETHODCALLTYPE *get_KeyStatuses )(
            IMFMediaKeySession2 * This,
            _Outptr_result_buffer_(*puSize) MFMediaKeyStatus **pKeyStatusesArray,
            _Out_ UINT *puSize);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IMFMediaKeySession2 * This,
            _In_ BSTR bstrSessionId,
            _Out_ BOOL *pfLoaded);
        HRESULT ( STDMETHODCALLTYPE *GenerateRequest )(
            IMFMediaKeySession2 * This,
            _In_ BSTR initDataType,
            _In_reads_bytes_(cb) const BYTE *pbInitData,
            _In_ DWORD cb);
        HRESULT ( STDMETHODCALLTYPE *get_Expiration )(
            IMFMediaKeySession2 * This,
            _Out_ double *dblExpiration);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IMFMediaKeySession2 * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaKeySession2 * This);
        END_INTERFACE
    } IMFMediaKeySession2Vtbl;
    interface IMFMediaKeySession2
    {
        CONST_VTBL struct IMFMediaKeySession2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetError(This,code,systemCode) )
    ( (This)->lpVtbl -> get_KeySystem(This,keySystem) )
    ( (This)->lpVtbl -> get_SessionId(This,sessionId) )
    ( (This)->lpVtbl -> Update(This,key,cb) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> get_KeyStatuses(This,pKeyStatusesArray,puSize) )
    ( (This)->lpVtbl -> Load(This,bstrSessionId,pfLoaded) )
    ( (This)->lpVtbl -> GenerateRequest(This,initDataType,pbInitData,cb) )
    ( (This)->lpVtbl -> get_Expiration(This,dblExpiration) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediaengine_0000_0050_v0_0_s_ifspec;
}
