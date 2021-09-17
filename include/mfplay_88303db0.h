#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFPMediaPlayer IMFPMediaPlayer;
typedef interface IMFPMediaItem IMFPMediaItem;
typedef interface IMFPMediaPlayerCallback IMFPMediaPlayerCallback;
#include "unknwn.h"
#include "propsys.h"
#include "mfidl.h"
#include "evr.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
interface IMFMediaEvent;
interface IMFNetCredential;
typedef UINT32 MFP_CREATION_OPTIONS;
typedef
enum _MFP_CREATION_OPTIONS
    {
        MFP_OPTION_NONE = 0,
        MFP_OPTION_FREE_THREADED_CALLBACK = 0x1,
        MFP_OPTION_NO_MMCSS = 0x2,
        MFP_OPTION_NO_REMOTE_DESKTOP_OPTIMIZATION = 0x4
    } _MFP_CREATION_OPTIONS;
typedef
enum MFP_MEDIAPLAYER_STATE
    {
        MFP_MEDIAPLAYER_STATE_EMPTY = 0,
        MFP_MEDIAPLAYER_STATE_STOPPED = 0x1,
        MFP_MEDIAPLAYER_STATE_PLAYING = 0x2,
        MFP_MEDIAPLAYER_STATE_PAUSED = 0x3,
        MFP_MEDIAPLAYER_STATE_SHUTDOWN = 0x4
    } MFP_MEDIAPLAYER_STATE;
typedef UINT32 MFP_MEDIAITEM_CHARACTERISTICS;
typedef
enum _MFP_MEDIAITEM_CHARACTERISTICS
    {
        MFP_MEDIAITEM_IS_LIVE = 0x1,
        MFP_MEDIAITEM_CAN_SEEK = 0x2,
        MFP_MEDIAITEM_CAN_PAUSE = 0x4,
        MFP_MEDIAITEM_HAS_SLOW_SEEK = 0x8
    } _MFP_MEDIAITEM_CHARACTERISTICS;
typedef UINT32 MFP_CREDENTIAL_FLAGS;
typedef
enum _MFP_CREDENTIAL_FLAGS
    {
        MFP_CREDENTIAL_PROMPT = 0x1,
        MFP_CREDENTIAL_SAVE = 0x2,
        MFP_CREDENTIAL_DO_NOT_CACHE = 0x4,
        MFP_CREDENTIAL_CLEAR_TEXT = 0x8,
        MFP_CREDENTIAL_PROXY = 0x10,
        MFP_CREDENTIAL_LOGGED_ON_USER = 0x20
    } _MFP_CREDENTIAL_FLAGS;
STDAPI MFPCreateMediaPlayer(
            _In_opt_ LPCWSTR pwszURL,
            _In_ BOOL fStartPlayback,
            _In_opt_ MFP_CREATION_OPTIONS creationOptions,
            _In_opt_ IMFPMediaPlayerCallback * pCallback,
            _In_opt_ HWND hWnd,
            _Out_opt_ IMFPMediaPlayer ** ppMediaPlayer );
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPMediaPlayer;
    typedef struct IMFPMediaPlayerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPMediaPlayer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPMediaPlayer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *FrameStep )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            IMFPMediaPlayer * This,
            _In_ REFGUID guidPositionType,
            _In_ const PROPVARIANT *pvPositionValue);
        HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            IMFPMediaPlayer * This,
            _In_ REFGUID guidPositionType,
            _Out_ PROPVARIANT *pvPositionValue);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IMFPMediaPlayer * This,
            _In_ REFGUID guidPositionType,
            _Out_ PROPVARIANT *pvDurationValue);
        HRESULT ( STDMETHODCALLTYPE *SetRate )(
            IMFPMediaPlayer * This,
            _In_ float flRate);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            IMFPMediaPlayer * This,
            _Out_ float *pflRate);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedRates )(
            IMFPMediaPlayer * This,
            _In_ BOOL fForwardDirection,
            _Out_ float *pflSlowestRate,
            _Out_ float *pflFastestRate);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IMFPMediaPlayer * This,
            _Out_ MFP_MEDIAPLAYER_STATE *peState);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaItemFromURL )(
            IMFPMediaPlayer * This,
            _In_ LPCWSTR pwszURL,
            _In_ BOOL fSync,
            _In_ DWORD_PTR dwUserData,
            _Out_opt_ IMFPMediaItem **ppMediaItem);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaItemFromObject )(
            IMFPMediaPlayer * This,
            _In_ IUnknown *pIUnknownObj,
            _In_ BOOL fSync,
            _In_ DWORD_PTR dwUserData,
            _Out_opt_ IMFPMediaItem **ppMediaItem);
        HRESULT ( STDMETHODCALLTYPE *SetMediaItem )(
            IMFPMediaPlayer * This,
            _In_ IMFPMediaItem *pIMFPMediaItem);
        HRESULT ( STDMETHODCALLTYPE *ClearMediaItem )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaItem )(
            IMFPMediaPlayer * This,
            _Out_ IMFPMediaItem **ppIMFPMediaItem);
        HRESULT ( STDMETHODCALLTYPE *GetVolume )(
            IMFPMediaPlayer * This,
            _Out_ float *pflVolume);
        HRESULT ( STDMETHODCALLTYPE *SetVolume )(
            IMFPMediaPlayer * This,
            _In_ float flVolume);
        HRESULT ( STDMETHODCALLTYPE *GetBalance )(
            IMFPMediaPlayer * This,
            _Out_ float *pflBalance);
        HRESULT ( STDMETHODCALLTYPE *SetBalance )(
            IMFPMediaPlayer * This,
            _In_ float flBalance);
        HRESULT ( STDMETHODCALLTYPE *GetMute )(
            IMFPMediaPlayer * This,
            _Out_ BOOL *pfMute);
        HRESULT ( STDMETHODCALLTYPE *SetMute )(
            IMFPMediaPlayer * This,
            _In_ BOOL fMute);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            IMFPMediaPlayer * This,
            _Out_opt_ SIZE *pszVideo,
            _Out_opt_ SIZE *pszARVideo);
        HRESULT ( STDMETHODCALLTYPE *GetIdealVideoSize )(
            IMFPMediaPlayer * This,
            _Out_opt_ SIZE *pszMin,
            _Out_opt_ SIZE *pszMax);
        HRESULT ( STDMETHODCALLTYPE *SetVideoSourceRect )(
            IMFPMediaPlayer * This,
            _In_ const MFVideoNormalizedRect *pnrcSource);
        HRESULT ( STDMETHODCALLTYPE *GetVideoSourceRect )(
            IMFPMediaPlayer * This,
            _Out_ MFVideoNormalizedRect *pnrcSource);
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
            IMFPMediaPlayer * This,
            _In_ DWORD dwAspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
            IMFPMediaPlayer * This,
            _Out_ DWORD *pdwAspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *GetVideoWindow )(
            IMFPMediaPlayer * This,
            _Out_ HWND *phwndVideo);
        HRESULT ( STDMETHODCALLTYPE *UpdateVideo )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IMFPMediaPlayer * This,
            _In_ COLORREF Clr);
        HRESULT ( STDMETHODCALLTYPE *GetBorderColor )(
            IMFPMediaPlayer * This,
            _Out_ COLORREF *pClr);
        HRESULT ( STDMETHODCALLTYPE *InsertEffect )(
            IMFPMediaPlayer * This,
            _In_ IUnknown *pEffect,
            _In_ BOOL fOptional);
        HRESULT ( STDMETHODCALLTYPE *RemoveEffect )(
            IMFPMediaPlayer * This,
            _In_ IUnknown *pEffect);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEffects )(
            IMFPMediaPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFPMediaPlayer * This);
        END_INTERFACE
    } IMFPMediaPlayerVtbl;
    interface IMFPMediaPlayer
    {
        CONST_VTBL struct IMFPMediaPlayerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Play(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> FrameStep(This) )
    ( (This)->lpVtbl -> SetPosition(This,guidPositionType,pvPositionValue) )
    ( (This)->lpVtbl -> GetPosition(This,guidPositionType,pvPositionValue) )
    ( (This)->lpVtbl -> GetDuration(This,guidPositionType,pvDurationValue) )
    ( (This)->lpVtbl -> SetRate(This,flRate) )
    ( (This)->lpVtbl -> GetRate(This,pflRate) )
    ( (This)->lpVtbl -> GetSupportedRates(This,fForwardDirection,pflSlowestRate,pflFastestRate) )
    ( (This)->lpVtbl -> GetState(This,peState) )
    ( (This)->lpVtbl -> CreateMediaItemFromURL(This,pwszURL,fSync,dwUserData,ppMediaItem) )
    ( (This)->lpVtbl -> CreateMediaItemFromObject(This,pIUnknownObj,fSync,dwUserData,ppMediaItem) )
    ( (This)->lpVtbl -> SetMediaItem(This,pIMFPMediaItem) )
    ( (This)->lpVtbl -> ClearMediaItem(This) )
    ( (This)->lpVtbl -> GetMediaItem(This,ppIMFPMediaItem) )
    ( (This)->lpVtbl -> GetVolume(This,pflVolume) )
    ( (This)->lpVtbl -> SetVolume(This,flVolume) )
    ( (This)->lpVtbl -> GetBalance(This,pflBalance) )
    ( (This)->lpVtbl -> SetBalance(This,flBalance) )
    ( (This)->lpVtbl -> GetMute(This,pfMute) )
    ( (This)->lpVtbl -> SetMute(This,fMute) )
    ( (This)->lpVtbl -> GetNativeVideoSize(This,pszVideo,pszARVideo) )
    ( (This)->lpVtbl -> GetIdealVideoSize(This,pszMin,pszMax) )
    ( (This)->lpVtbl -> SetVideoSourceRect(This,pnrcSource) )
    ( (This)->lpVtbl -> GetVideoSourceRect(This,pnrcSource) )
    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwAspectRatioMode) )
    ( (This)->lpVtbl -> GetAspectRatioMode(This,pdwAspectRatioMode) )
    ( (This)->lpVtbl -> GetVideoWindow(This,phwndVideo) )
    ( (This)->lpVtbl -> UpdateVideo(This) )
    ( (This)->lpVtbl -> SetBorderColor(This,Clr) )
    ( (This)->lpVtbl -> GetBorderColor(This,pClr) )
    ( (This)->lpVtbl -> InsertEffect(This,pEffect,fOptional) )
    ( (This)->lpVtbl -> RemoveEffect(This,pEffect) )
    ( (This)->lpVtbl -> RemoveAllEffects(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
EXTERN_GUID( MFP_POSITIONTYPE_100NS, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 );
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPMediaItem;
    typedef struct IMFPMediaItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPMediaItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPMediaItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPMediaItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaPlayer )(
            IMFPMediaItem * This,
            _Out_ IMFPMediaPlayer **ppMediaPlayer);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IMFPMediaItem * This,
            _Out_ LPWSTR *ppwszURL);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            IMFPMediaItem * This,
            _Out_ IUnknown **ppIUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetUserData )(
            IMFPMediaItem * This,
            _Out_ DWORD_PTR *pdwUserData);
        HRESULT ( STDMETHODCALLTYPE *SetUserData )(
            IMFPMediaItem * This,
            _In_ DWORD_PTR dwUserData);
        HRESULT ( STDMETHODCALLTYPE *GetStartStopPosition )(
            IMFPMediaItem * This,
            _Out_opt_ GUID *pguidStartPositionType,
            _Out_opt_ PROPVARIANT *pvStartValue,
            _Out_opt_ GUID *pguidStopPositionType,
            _Out_opt_ PROPVARIANT *pvStopValue);
        HRESULT ( STDMETHODCALLTYPE *SetStartStopPosition )(
            IMFPMediaItem * This,
            _In_opt_ const GUID *pguidStartPositionType,
            _In_opt_ const PROPVARIANT *pvStartValue,
            _In_opt_ const GUID *pguidStopPositionType,
            _In_opt_ const PROPVARIANT *pvStopValue);
        HRESULT ( STDMETHODCALLTYPE *HasVideo )(
            IMFPMediaItem * This,
            _Out_opt_ BOOL *pfHasVideo,
            _Out_opt_ BOOL *pfSelected);
        HRESULT ( STDMETHODCALLTYPE *HasAudio )(
            IMFPMediaItem * This,
            _Out_opt_ BOOL *pfHasAudio,
            _Out_opt_ BOOL *pfSelected);
        HRESULT ( STDMETHODCALLTYPE *IsProtected )(
            IMFPMediaItem * This,
            _Out_ BOOL *pfProtected);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IMFPMediaItem * This,
            _In_ REFGUID guidPositionType,
            _Out_ PROPVARIANT *pvDurationValue);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
            IMFPMediaItem * This,
            _Out_ DWORD *pdwStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelection )(
            IMFPMediaItem * This,
            _In_ DWORD dwStreamIndex,
            _Out_ BOOL *pfEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSelection )(
            IMFPMediaItem * This,
            _In_ DWORD dwStreamIndex,
            _In_ BOOL fEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAttribute )(
            IMFPMediaItem * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidMFAttribute,
            _Out_ PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationAttribute )(
            IMFPMediaItem * This,
            _In_ REFGUID guidMFAttribute,
            _Out_ PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            IMFPMediaItem * This,
            _Out_ MFP_MEDIAITEM_CHARACTERISTICS *pCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSink )(
            IMFPMediaItem * This,
            _In_ DWORD dwStreamIndex,
            _In_opt_ IUnknown *pMediaSink);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            IMFPMediaItem * This,
            _Out_ IPropertyStore **ppMetadataStore);
        END_INTERFACE
    } IMFPMediaItemVtbl;
    interface IMFPMediaItem
    {
        CONST_VTBL struct IMFPMediaItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMediaPlayer(This,ppMediaPlayer) )
    ( (This)->lpVtbl -> GetURL(This,ppwszURL) )
    ( (This)->lpVtbl -> GetObject(This,ppIUnknown) )
    ( (This)->lpVtbl -> GetUserData(This,pdwUserData) )
    ( (This)->lpVtbl -> SetUserData(This,dwUserData) )
    ( (This)->lpVtbl -> GetStartStopPosition(This,pguidStartPositionType,pvStartValue,pguidStopPositionType,pvStopValue) )
    ( (This)->lpVtbl -> SetStartStopPosition(This,pguidStartPositionType,pvStartValue,pguidStopPositionType,pvStopValue) )
    ( (This)->lpVtbl -> HasVideo(This,pfHasVideo,pfSelected) )
    ( (This)->lpVtbl -> HasAudio(This,pfHasAudio,pfSelected) )
    ( (This)->lpVtbl -> IsProtected(This,pfProtected) )
    ( (This)->lpVtbl -> GetDuration(This,guidPositionType,pvDurationValue) )
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwStreamCount) )
    ( (This)->lpVtbl -> GetStreamSelection(This,dwStreamIndex,pfEnabled) )
    ( (This)->lpVtbl -> SetStreamSelection(This,dwStreamIndex,fEnabled) )
    ( (This)->lpVtbl -> GetStreamAttribute(This,dwStreamIndex,guidMFAttribute,pvValue) )
    ( (This)->lpVtbl -> GetPresentationAttribute(This,guidMFAttribute,pvValue) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pCharacteristics) )
    ( (This)->lpVtbl -> SetStreamSink(This,dwStreamIndex,pMediaSink) )
    ( (This)->lpVtbl -> GetMetadata(This,ppMetadataStore) )
typedef
enum MFP_EVENT_TYPE
    {
        MFP_EVENT_TYPE_PLAY = 0,
        MFP_EVENT_TYPE_PAUSE = 1,
        MFP_EVENT_TYPE_STOP = 2,
        MFP_EVENT_TYPE_POSITION_SET = 3,
        MFP_EVENT_TYPE_RATE_SET = 4,
        MFP_EVENT_TYPE_MEDIAITEM_CREATED = 5,
        MFP_EVENT_TYPE_MEDIAITEM_SET = 6,
        MFP_EVENT_TYPE_FRAME_STEP = 7,
        MFP_EVENT_TYPE_MEDIAITEM_CLEARED = 8,
        MFP_EVENT_TYPE_MF = 9,
        MFP_EVENT_TYPE_ERROR = 10,
        MFP_EVENT_TYPE_PLAYBACK_ENDED = 11,
        MFP_EVENT_TYPE_ACQUIRE_USER_CREDENTIAL = 12
    } MFP_EVENT_TYPE;
typedef struct MFP_EVENT_HEADER
    {
    MFP_EVENT_TYPE eEventType;
    HRESULT hrEvent;
    IMFPMediaPlayer *pMediaPlayer;
    MFP_MEDIAPLAYER_STATE eState;
    IPropertyStore *pPropertyStore;
    } MFP_EVENT_HEADER;
typedef struct MFP_PLAY_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_PLAY_EVENT;
typedef struct MFP_PAUSE_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_PAUSE_EVENT;
typedef struct MFP_STOP_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_STOP_EVENT;
typedef struct MFP_POSITION_SET_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_POSITION_SET_EVENT;
typedef struct MFP_RATE_SET_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    float flRate;
    } MFP_RATE_SET_EVENT;
typedef struct MFP_MEDIAITEM_CREATED_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    DWORD_PTR dwUserData;
    } MFP_MEDIAITEM_CREATED_EVENT;
typedef struct MFP_MEDIAITEM_SET_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_MEDIAITEM_SET_EVENT;
typedef struct MFP_FRAME_STEP_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_FRAME_STEP_EVENT;
typedef struct MFP_MEDIAITEM_CLEARED_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_MEDIAITEM_CLEARED_EVENT;
typedef struct MFP_MF_EVENT
    {
    MFP_EVENT_HEADER header;
    MediaEventType MFEventType;
    IMFMediaEvent *pMFMediaEvent;
    IMFPMediaItem *pMediaItem;
    } MFP_MF_EVENT;
typedef struct MFP_ERROR_EVENT
    {
    MFP_EVENT_HEADER header;
    } MFP_ERROR_EVENT;
typedef struct MFP_PLAYBACK_ENDED_EVENT
    {
    MFP_EVENT_HEADER header;
    IMFPMediaItem *pMediaItem;
    } MFP_PLAYBACK_ENDED_EVENT;
typedef struct MFP_ACQUIRE_USER_CREDENTIAL_EVENT
    {
    MFP_EVENT_HEADER header;
    DWORD_PTR dwUserData;
    BOOL fProceedWithAuthentication;
    HRESULT hrAuthenticationStatus;
    LPCWSTR pwszURL;
    LPCWSTR pwszSite;
    LPCWSTR pwszRealm;
    LPCWSTR pwszPackage;
    LONG nRetries;
    MFP_CREDENTIAL_FLAGS flags;
    IMFNetCredential *pCredential;
    } MFP_ACQUIRE_USER_CREDENTIAL_EVENT;
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFP_PKEY_StreamIndex = { { 0xa7cf9740, 0xe8d9, 0x4a87, { 0xbd, 0x8e, 0x29, 0x67, 0x0, 0x1f, 0xd3, 0xad } }, 0x00 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFP_PKEY_StreamRenderingResults = { { 0xa7cf9740, 0xe8d9, 0x4a87, { 0xbd, 0x8e, 0x29, 0x67, 0x0, 0x1f, 0xd3, 0xad } }, 0x01 };
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPMediaPlayerCallback;
    typedef struct IMFPMediaPlayerCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPMediaPlayerCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPMediaPlayerCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPMediaPlayerCallback * This);
        void ( STDMETHODCALLTYPE *OnMediaPlayerEvent )(
            IMFPMediaPlayerCallback * This,
            _In_ MFP_EVENT_HEADER *pEventHeader);
        END_INTERFACE
    } IMFPMediaPlayerCallbackVtbl;
    interface IMFPMediaPlayerCallback
    {
        CONST_VTBL struct IMFPMediaPlayerCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnMediaPlayerEvent(This,pEventHeader) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfplay_0000_0003_v0_0_s_ifspec;
}
