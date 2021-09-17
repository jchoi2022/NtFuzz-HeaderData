#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAMMultiMediaStream IAMMultiMediaStream;
typedef interface IAMMediaStream IAMMediaStream;
typedef interface IMediaStreamFilter IMediaStreamFilter;
typedef interface IDirectDrawMediaSampleAllocator IDirectDrawMediaSampleAllocator;
typedef interface IDirectDrawMediaSample IDirectDrawMediaSample;
typedef interface IAMMediaTypeStream IAMMediaTypeStream;
typedef interface IAMMediaTypeSample IAMMediaTypeSample;
#include "unknwn.h"
#include "mmstream.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ddraw.h>
#include <mmsystem.h>
#include <mmstream.h>
#include <ddstream.h>
#include <austream.h>
enum __MIDL___MIDL_itf_amstream_0000_0000_0001
    {
        AMMSF_NOGRAPHTHREAD = 0x1
    } ;
enum __MIDL___MIDL_itf_amstream_0000_0000_0002
    {
        AMMSF_ADDDEFAULTRENDERER = 0x1,
        AMMSF_CREATEPEER = 0x2,
        AMMSF_STOPIFNOSAMPLES = 0x4,
        AMMSF_NOSTALL = 0x8
    } ;
enum __MIDL___MIDL_itf_amstream_0000_0000_0003
    {
        AMMSF_RENDERTYPEMASK = 0x3,
        AMMSF_RENDERTOEXISTING = 0,
        AMMSF_RENDERALLSTREAMS = 0x1,
        AMMSF_NORENDER = 0x2,
        AMMSF_NOCLOCK = 0x4,
        AMMSF_RUN = 0x8
    } ;
typedef
enum __MIDL___MIDL_itf_amstream_0000_0000_0004
    {
        Disabled = 0,
        ReadData = 1,
        RenderData = 2
    } OUTPUT_STATE;
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMMultiMediaStream;
    typedef struct IAMMultiMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMMultiMediaStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMMultiMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMMultiMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__out DWORD *pdwFlags,
                        __RPC__out STREAM_TYPE *pStreamType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            __RPC__in IAMMultiMediaStream * This,
                       __RPC__in REFMSPID idPurpose,
                        __RPC__deref_out_opt IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *EnumMediaStreams )(
            __RPC__in IAMMultiMediaStream * This,
                       long Index,
                        __RPC__deref_out_opt IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__out STREAM_STATE *pCurrentState);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            __RPC__in IAMMultiMediaStream * This,
                       STREAM_STATE NewState);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__out STREAM_TIME *pCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__out STREAM_TIME *pDuration);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IAMMultiMediaStream * This,
                       STREAM_TIME SeekTime);
        HRESULT ( STDMETHODCALLTYPE *GetEndOfStreamEventHandle )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__deref_out_opt HANDLE *phEOS);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAMMultiMediaStream * This,
                       STREAM_TYPE StreamType,
                       DWORD dwFlags,
                       __RPC__in_opt IGraphBuilder *pFilterGraph);
        HRESULT ( STDMETHODCALLTYPE *GetFilterGraph )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__deref_out_opt IGraphBuilder **ppGraphBuilder);
        HRESULT ( STDMETHODCALLTYPE *GetFilter )(
            __RPC__in IAMMultiMediaStream * This,
                        __RPC__deref_out_opt IMediaStreamFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *AddMediaStream )(
            __RPC__in IAMMultiMediaStream * This,
                       __RPC__in_opt IUnknown *pStreamObject,
                       __RPC__in const MSPID *PurposeId,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMediaStream **ppNewStream);
        HRESULT ( STDMETHODCALLTYPE *OpenFile )(
            __RPC__in IAMMultiMediaStream * This,
                       __RPC__in LPCWSTR pszFileName,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OpenMoniker )(
            __RPC__in IAMMultiMediaStream * This,
                       __RPC__in_opt IBindCtx *pCtx,
                       __RPC__in_opt IMoniker *pMoniker,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            __RPC__in IAMMultiMediaStream * This,
                       DWORD dwFlags);
        END_INTERFACE
    } IAMMultiMediaStreamVtbl;
    interface IAMMultiMediaStream
    {
        CONST_VTBL struct IAMMultiMediaStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInformation(This,pdwFlags,pStreamType) )
    ( (This)->lpVtbl -> GetMediaStream(This,idPurpose,ppMediaStream) )
    ( (This)->lpVtbl -> EnumMediaStreams(This,Index,ppMediaStream) )
    ( (This)->lpVtbl -> GetState(This,pCurrentState) )
    ( (This)->lpVtbl -> SetState(This,NewState) )
    ( (This)->lpVtbl -> GetTime(This,pCurrentTime) )
    ( (This)->lpVtbl -> GetDuration(This,pDuration) )
    ( (This)->lpVtbl -> Seek(This,SeekTime) )
    ( (This)->lpVtbl -> GetEndOfStreamEventHandle(This,phEOS) )
    ( (This)->lpVtbl -> Initialize(This,StreamType,dwFlags,pFilterGraph) )
    ( (This)->lpVtbl -> GetFilterGraph(This,ppGraphBuilder) )
    ( (This)->lpVtbl -> GetFilter(This,ppFilter) )
    ( (This)->lpVtbl -> AddMediaStream(This,pStreamObject,PurposeId,dwFlags,ppNewStream) )
    ( (This)->lpVtbl -> OpenFile(This,pszFileName,dwFlags) )
    ( (This)->lpVtbl -> OpenMoniker(This,pCtx,pMoniker,dwFlags) )
    ( (This)->lpVtbl -> Render(This,dwFlags) )
EXTERN_C const IID IID_IAMMediaStream;
    typedef struct IAMMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )(
            __RPC__in IAMMediaStream * This,
                        __RPC__deref_out_opt IMultiMediaStream **ppMultiMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            __RPC__in IAMMediaStream * This,
                        __RPC__out MSPID *pPurposeId,
                        __RPC__out STREAM_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *SetSameFormat )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in_opt IMediaStream *pStreamThatHasDesiredFormat,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            __RPC__in IAMMediaStream * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IStreamSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in_opt IStreamSample *pExistingSample,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IStreamSample **ppNewSample);
        HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )(
            __RPC__in IAMMediaStream * This,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in_opt IUnknown *pSourceObject,
                       DWORD dwFlags,
                       __RPC__in REFMSPID PurposeId,
                       const STREAM_TYPE StreamType);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            __RPC__in IAMMediaStream * This,
                       FILTER_STATE State);
        HRESULT ( STDMETHODCALLTYPE *JoinAMMultiMediaStream )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in_opt IAMMultiMediaStream *pAMMultiMediaStream);
        HRESULT ( STDMETHODCALLTYPE *JoinFilter )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in_opt IMediaStreamFilter *pMediaStreamFilter);
        HRESULT ( STDMETHODCALLTYPE *JoinFilterGraph )(
            __RPC__in IAMMediaStream * This,
                       __RPC__in_opt IFilterGraph *pFilterGraph);
        END_INTERFACE
    } IAMMediaStreamVtbl;
    interface IAMMediaStream
    {
        CONST_VTBL struct IAMMediaStreamVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> Initialize(This,pSourceObject,dwFlags,PurposeId,StreamType) )
    ( (This)->lpVtbl -> SetState(This,State) )
    ( (This)->lpVtbl -> JoinAMMultiMediaStream(This,pAMMultiMediaStream) )
    ( (This)->lpVtbl -> JoinFilter(This,pMediaStreamFilter) )
    ( (This)->lpVtbl -> JoinFilterGraph(This,pFilterGraph) )
EXTERN_C const IID IID_IMediaStreamFilter;
    typedef struct IMediaStreamFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaStreamFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaStreamFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaStreamFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            IMediaStreamFilter * This,
                        CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IMediaStreamFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMediaStreamFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            IMediaStreamFilter * This,
            REFERENCE_TIME tStart);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IMediaStreamFilter * This,
                       DWORD dwMilliSecsTimeout,
            _Out_ FILTER_STATE *State);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSource )(
            IMediaStreamFilter * This,
            _In_opt_ IReferenceClock *pClock);
        HRESULT ( STDMETHODCALLTYPE *GetSyncSource )(
            IMediaStreamFilter * This,
            _Outptr_result_maybenull_ IReferenceClock **pClock);
        HRESULT ( STDMETHODCALLTYPE *EnumPins )(
            IMediaStreamFilter * This,
            _Out_ IEnumPins **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindPin )(
            IMediaStreamFilter * This,
                               LPCWSTR Id,
            _Out_ IPin **ppPin);
        HRESULT ( STDMETHODCALLTYPE *QueryFilterInfo )(
            IMediaStreamFilter * This,
            _Out_ FILTER_INFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *JoinFilterGraph )(
            IMediaStreamFilter * This,
            _In_opt_ IFilterGraph *pGraph,
            _In_opt_ LPCWSTR pName);
        HRESULT ( STDMETHODCALLTYPE *QueryVendorInfo )(
            IMediaStreamFilter * This,
            _Out_ LPWSTR *pVendorInfo);
        HRESULT ( STDMETHODCALLTYPE *AddMediaStream )(
            IMediaStreamFilter * This,
                       IAMMediaStream *pAMMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            IMediaStreamFilter * This,
                       REFMSPID idPurpose,
                        IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *EnumMediaStreams )(
            IMediaStreamFilter * This,
                       long Index,
                        IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *SupportSeeking )(
            IMediaStreamFilter * This,
                       BOOL bRenderer);
        HRESULT ( STDMETHODCALLTYPE *ReferenceTimeToStreamTime )(
            IMediaStreamFilter * This,
                            REFERENCE_TIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentStreamTime )(
            IMediaStreamFilter * This,
                        REFERENCE_TIME *pCurrentStreamTime);
        HRESULT ( STDMETHODCALLTYPE *WaitUntil )(
            IMediaStreamFilter * This,
                       REFERENCE_TIME WaitStreamTime);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMediaStreamFilter * This,
                       BOOL bCancelEOS);
        HRESULT ( STDMETHODCALLTYPE *EndOfStream )(
            IMediaStreamFilter * This);
        END_INTERFACE
    } IMediaStreamFilterVtbl;
    interface IMediaStreamFilter
    {
        CONST_VTBL struct IMediaStreamFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Run(This,tStart) )
    ( (This)->lpVtbl -> GetState(This,dwMilliSecsTimeout,State) )
    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
    ( (This)->lpVtbl -> GetSyncSource(This,pClock) )
    ( (This)->lpVtbl -> EnumPins(This,ppEnum) )
    ( (This)->lpVtbl -> FindPin(This,Id,ppPin) )
    ( (This)->lpVtbl -> QueryFilterInfo(This,pInfo) )
    ( (This)->lpVtbl -> JoinFilterGraph(This,pGraph,pName) )
    ( (This)->lpVtbl -> QueryVendorInfo(This,pVendorInfo) )
    ( (This)->lpVtbl -> AddMediaStream(This,pAMMediaStream) )
    ( (This)->lpVtbl -> GetMediaStream(This,idPurpose,ppMediaStream) )
    ( (This)->lpVtbl -> EnumMediaStreams(This,Index,ppMediaStream) )
    ( (This)->lpVtbl -> SupportSeeking(This,bRenderer) )
    ( (This)->lpVtbl -> ReferenceTimeToStreamTime(This,pTime) )
    ( (This)->lpVtbl -> GetCurrentStreamTime(This,pCurrentStreamTime) )
    ( (This)->lpVtbl -> WaitUntil(This,WaitStreamTime) )
    ( (This)->lpVtbl -> Flush(This,bCancelEOS) )
    ( (This)->lpVtbl -> EndOfStream(This) )
EXTERN_C const IID IID_IDirectDrawMediaSampleAllocator;
    typedef struct IDirectDrawMediaSampleAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectDrawMediaSampleAllocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectDrawMediaSampleAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectDrawMediaSampleAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetDirectDraw )(
            IDirectDrawMediaSampleAllocator * This,
            IDirectDraw **ppDirectDraw);
        END_INTERFACE
    } IDirectDrawMediaSampleAllocatorVtbl;
    interface IDirectDrawMediaSampleAllocator
    {
        CONST_VTBL struct IDirectDrawMediaSampleAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDirectDraw(This,ppDirectDraw) )
EXTERN_C const IID IID_IDirectDrawMediaSample;
    typedef struct IDirectDrawMediaSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectDrawMediaSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectDrawMediaSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectDrawMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetSurfaceAndReleaseLock )(
            IDirectDrawMediaSample * This,
                        IDirectDrawSurface **ppDirectDrawSurface,
                        RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *LockMediaSamplePointer )(
            IDirectDrawMediaSample * This);
        END_INTERFACE
    } IDirectDrawMediaSampleVtbl;
    interface IDirectDrawMediaSample
    {
        CONST_VTBL struct IDirectDrawMediaSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSurfaceAndReleaseLock(This,ppDirectDrawSurface,pRect) )
    ( (This)->lpVtbl -> LockMediaSamplePointer(This) )
EXTERN_C const IID IID_IAMMediaTypeStream;
    typedef struct IAMMediaTypeStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMMediaTypeStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMMediaTypeStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMMediaTypeStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )(
            IAMMediaTypeStream * This,
                        IMultiMediaStream **ppMultiMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            IAMMediaTypeStream * This,
                        MSPID *pPurposeId,
                        STREAM_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *SetSameFormat )(
            IAMMediaTypeStream * This,
                       IMediaStream *pStreamThatHasDesiredFormat,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            IAMMediaTypeStream * This,
                       DWORD dwFlags,
                        IStreamSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )(
            IAMMediaTypeStream * This,
                       IStreamSample *pExistingSample,
                       DWORD dwFlags,
                        IStreamSample **ppNewSample);
        HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )(
            IAMMediaTypeStream * This,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            IAMMediaTypeStream * This,
                        AM_MEDIA_TYPE *pMediaType,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            IAMMediaTypeStream * This,
                       AM_MEDIA_TYPE *pMediaType,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CreateSample )(
            IAMMediaTypeStream * This,
                       long lSampleSize,
                       BYTE *pbBuffer,
                       DWORD dwFlags,
                       IUnknown *pUnkOuter,
                        IAMMediaTypeSample **ppAMMediaTypeSample);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAllocatorRequirements )(
            IAMMediaTypeStream * This,
                        ALLOCATOR_PROPERTIES *pProps);
        HRESULT ( STDMETHODCALLTYPE *SetStreamAllocatorRequirements )(
            IAMMediaTypeStream * This,
                       ALLOCATOR_PROPERTIES *pProps);
        END_INTERFACE
    } IAMMediaTypeStreamVtbl;
    interface IAMMediaTypeStream
    {
        CONST_VTBL struct IAMMediaTypeStreamVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetFormat(This,pMediaType,dwFlags) )
    ( (This)->lpVtbl -> SetFormat(This,pMediaType,dwFlags) )
    ( (This)->lpVtbl -> CreateSample(This,lSampleSize,pbBuffer,dwFlags,pUnkOuter,ppAMMediaTypeSample) )
    ( (This)->lpVtbl -> GetStreamAllocatorRequirements(This,pProps) )
    ( (This)->lpVtbl -> SetStreamAllocatorRequirements(This,pProps) )
EXTERN_C const IID IID_IAMMediaTypeSample;
    typedef struct IAMMediaTypeSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMMediaTypeSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMMediaTypeSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMMediaTypeSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            IAMMediaTypeSample * This,
                       IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetSampleTimes )(
            IAMMediaTypeSample * This,
                        STREAM_TIME *pStartTime,
                        STREAM_TIME *pEndTime,
                        STREAM_TIME *pCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *SetSampleTimes )(
            IAMMediaTypeSample * This,
                       const STREAM_TIME *pStartTime,
                       const STREAM_TIME *pEndTime);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IAMMediaTypeSample * This,
                       DWORD dwFlags,
                       HANDLE hEvent,
                       PAPCFUNC pfnAPC,
                       DWORD_PTR dwAPCData);
        HRESULT ( STDMETHODCALLTYPE *CompletionStatus )(
            IAMMediaTypeSample * This,
                       DWORD dwFlags,
                       DWORD dwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *SetPointer )(
            IAMMediaTypeSample * This,
                                BYTE *pBuffer,
                       long lSize);
        HRESULT ( STDMETHODCALLTYPE *GetPointer )(
            IAMMediaTypeSample * This,
                        BYTE **ppBuffer);
        long ( STDMETHODCALLTYPE *GetSize )(
            IAMMediaTypeSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IAMMediaTypeSample * This,
                        REFERENCE_TIME *pTimeStart,
                        REFERENCE_TIME *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetTime )(
            IAMMediaTypeSample * This,
                       REFERENCE_TIME *pTimeStart,
                       REFERENCE_TIME *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *IsSyncPoint )(
            IAMMediaTypeSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetSyncPoint )(
            IAMMediaTypeSample * This,
            BOOL bIsSyncPoint);
        HRESULT ( STDMETHODCALLTYPE *IsPreroll )(
            IAMMediaTypeSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetPreroll )(
            IAMMediaTypeSample * This,
            BOOL bIsPreroll);
        long ( STDMETHODCALLTYPE *GetActualDataLength )(
            IAMMediaTypeSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetActualDataLength )(
            IAMMediaTypeSample * This,
            long __MIDL__IAMMediaTypeSample0000);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IAMMediaTypeSample * This,
                        AM_MEDIA_TYPE **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IAMMediaTypeSample * This,
                       AM_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *IsDiscontinuity )(
            IAMMediaTypeSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetDiscontinuity )(
            IAMMediaTypeSample * This,
            BOOL bDiscontinuity);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTime )(
            IAMMediaTypeSample * This,
                        LONGLONG *pTimeStart,
                        LONGLONG *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetMediaTime )(
            IAMMediaTypeSample * This,
                       LONGLONG *pTimeStart,
                       LONGLONG *pTimeEnd);
        END_INTERFACE
    } IAMMediaTypeSampleVtbl;
    interface IAMMediaTypeSample
    {
        CONST_VTBL struct IAMMediaTypeSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) )
    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) )
    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) )
    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) )
    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) )
    ( (This)->lpVtbl -> SetPointer(This,pBuffer,lSize) )
    ( (This)->lpVtbl -> GetPointer(This,ppBuffer) )
    ( (This)->lpVtbl -> GetSize(This) )
    ( (This)->lpVtbl -> GetTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> SetTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> IsSyncPoint(This) )
    ( (This)->lpVtbl -> SetSyncPoint(This,bIsSyncPoint) )
    ( (This)->lpVtbl -> IsPreroll(This) )
    ( (This)->lpVtbl -> SetPreroll(This,bIsPreroll) )
    ( (This)->lpVtbl -> GetActualDataLength(This) )
    ( (This)->lpVtbl -> SetActualDataLength(This,__MIDL__IAMMediaTypeSample0000) )
    ( (This)->lpVtbl -> GetMediaType(This,ppMediaType) )
    ( (This)->lpVtbl -> SetMediaType(This,pMediaType) )
    ( (This)->lpVtbl -> IsDiscontinuity(This) )
    ( (This)->lpVtbl -> SetDiscontinuity(This,bDiscontinuity) )
    ( (This)->lpVtbl -> GetMediaTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> SetMediaTime(This,pTimeStart,pTimeEnd) )
DEFINE_GUID(CLSID_AMMultiMediaStream,
0x49c47ce5, 0x9ba4, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMDirectDrawStream,
0x49c47ce4, 0x9ba4, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMAudioStream,
0x8496e040, 0xaf4c, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMAudioData,
0xf2468580, 0xaf8a, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMMediaTypeStream,
0xcf0f2f7c, 0xf7bf, 0x11d0, 0x90, 0xd, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0007_v0_0_s_ifspec;
}
