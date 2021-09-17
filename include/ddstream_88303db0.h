#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDirectDrawMediaStream IDirectDrawMediaStream;
typedef interface IDirectDrawStreamSample IDirectDrawStreamSample;
#include "unknwn.h"
#include "mmstream.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef void *LPDDSURFACEDESC;
typedef struct tDDSURFACEDESC DDSURFACEDESC;
#endif
#include <ddraw.h>
enum __MIDL___MIDL_itf_ddstream_0000_0000_0001
    {
        DDSFF_PROGRESSIVERENDER = 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_ddstream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddstream_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectDrawMediaStream;
    typedef struct IDirectDrawMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectDrawMediaStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectDrawMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectDrawMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )(
            IDirectDrawMediaStream * This,
                        IMultiMediaStream **ppMultiMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            IDirectDrawMediaStream * This,
                        MSPID *pPurposeId,
                        STREAM_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *SetSameFormat )(
            IDirectDrawMediaStream * This,
                       IMediaStream *pStreamThatHasDesiredFormat,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            IDirectDrawMediaStream * This,
                       DWORD dwFlags,
                        IStreamSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )(
            IDirectDrawMediaStream * This,
                       IStreamSample *pExistingSample,
                       DWORD dwFlags,
                        IStreamSample **ppNewSample);
        HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )(
            IDirectDrawMediaStream * This,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            IDirectDrawMediaStream * This,
                        DDSURFACEDESC *pDDSDCurrent,
                        IDirectDrawPalette **ppDirectDrawPalette,
                        DDSURFACEDESC *pDDSDDesired,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            IDirectDrawMediaStream * This,
                       const DDSURFACEDESC *pDDSurfaceDesc,
                       IDirectDrawPalette *pDirectDrawPalette);
        HRESULT ( STDMETHODCALLTYPE *GetDirectDraw )(
            IDirectDrawMediaStream * This,
                        IDirectDraw **ppDirectDraw);
        HRESULT ( STDMETHODCALLTYPE *SetDirectDraw )(
            IDirectDrawMediaStream * This,
                       IDirectDraw *pDirectDraw);
        HRESULT ( STDMETHODCALLTYPE *CreateSample )(
            IDirectDrawMediaStream * This,
                       IDirectDrawSurface *pSurface,
                       const RECT *pRect,
                       DWORD dwFlags,
                        IDirectDrawStreamSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *GetTimePerFrame )(
            IDirectDrawMediaStream * This,
                        STREAM_TIME *pFrameTime);
        END_INTERFACE
    } IDirectDrawMediaStreamVtbl;
    interface IDirectDrawMediaStream
    {
        CONST_VTBL struct IDirectDrawMediaStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMultiMediaStream(This,ppMultiMediaStream) )
    ( (This)->lpVtbl -> GetInformation(This,pPurposeId,pType) )
    ( (This)->lpVtbl -> SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) )
    ( (This)->lpVtbl -> AllocateSample(This,dwFlags,ppSample) )
    ( (This)->lpVtbl -> CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) )
    ( (This)->lpVtbl -> SendEndOfStream(This,dwFlags) )
    ( (This)->lpVtbl -> GetFormat(This,pDDSDCurrent,ppDirectDrawPalette,pDDSDDesired,pdwFlags) )
    ( (This)->lpVtbl -> SetFormat(This,pDDSurfaceDesc,pDirectDrawPalette) )
    ( (This)->lpVtbl -> GetDirectDraw(This,ppDirectDraw) )
    ( (This)->lpVtbl -> SetDirectDraw(This,pDirectDraw) )
    ( (This)->lpVtbl -> CreateSample(This,pSurface,pRect,dwFlags,ppSample) )
    ( (This)->lpVtbl -> GetTimePerFrame(This,pFrameTime) )
EXTERN_C const IID IID_IDirectDrawStreamSample;
    typedef struct IDirectDrawStreamSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectDrawStreamSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectDrawStreamSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectDrawStreamSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            IDirectDrawStreamSample * This,
                       IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetSampleTimes )(
            IDirectDrawStreamSample * This,
                        STREAM_TIME *pStartTime,
                        STREAM_TIME *pEndTime,
                        STREAM_TIME *pCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *SetSampleTimes )(
            IDirectDrawStreamSample * This,
                       const STREAM_TIME *pStartTime,
                       const STREAM_TIME *pEndTime);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IDirectDrawStreamSample * This,
                       DWORD dwFlags,
                       HANDLE hEvent,
                       PAPCFUNC pfnAPC,
                       DWORD_PTR dwAPCData);
        HRESULT ( STDMETHODCALLTYPE *CompletionStatus )(
            IDirectDrawStreamSample * This,
                       DWORD dwFlags,
                       DWORD dwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            IDirectDrawStreamSample * This,
                        IDirectDrawSurface **ppDirectDrawSurface,
                        RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *SetRect )(
            IDirectDrawStreamSample * This,
                       const RECT *pRect);
        END_INTERFACE
    } IDirectDrawStreamSampleVtbl;
    interface IDirectDrawStreamSample
    {
        CONST_VTBL struct IDirectDrawStreamSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) )
    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) )
    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) )
    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) )
    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) )
    ( (This)->lpVtbl -> GetSurface(This,ppDirectDrawSurface,pRect) )
    ( (This)->lpVtbl -> SetRect(This,pRect) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ddstream_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddstream_0000_0002_v0_0_s_ifspec;
}
