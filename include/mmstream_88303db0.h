#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMultiMediaStream IMultiMediaStream;
typedef interface IMediaStream IMediaStream;
typedef interface IStreamSample IStreamSample;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(MSPID_PrimaryVideo,
0xa35ff56a, 0x9fda, 0x11d0, 0x8f, 0xdf, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
DEFINE_GUID(MSPID_PrimaryAudio,
0xa35ff56b, 0x9fda, 0x11d0, 0x8f, 0xdf, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
typedef LONGLONG STREAM_TIME;
typedef GUID MSPID;
typedef REFGUID REFMSPID;
typedef
enum __MIDL___MIDL_itf_mmstream_0000_0000_0001
    {
        STREAMTYPE_READ = 0,
        STREAMTYPE_WRITE = 1,
        STREAMTYPE_TRANSFORM = 2
    } STREAM_TYPE;
typedef
enum __MIDL___MIDL_itf_mmstream_0000_0000_0002
    {
        STREAMSTATE_STOP = 0,
        STREAMSTATE_RUN = 1
    } STREAM_STATE;
typedef
enum __MIDL___MIDL_itf_mmstream_0000_0000_0003
    {
        COMPSTAT_NOUPDATEOK = 0x1,
        COMPSTAT_WAIT = 0x2,
        COMPSTAT_ABORT = 0x4
    } COMPLETION_STATUS_FLAGS;
enum __MIDL___MIDL_itf_mmstream_0000_0000_0004
    {
        MMSSF_HASCLOCK = 0x1,
        MMSSF_SUPPORTSEEK = 0x2,
        MMSSF_ASYNCHRONOUS = 0x4
    } ;
enum __MIDL___MIDL_itf_mmstream_0000_0000_0005
    {
        SSUPDATE_ASYNC = 0x1,
        SSUPDATE_CONTINUOUS = 0x2
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mmstream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmstream_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMultiMediaStream;
    typedef struct IMultiMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMultiMediaStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMultiMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMultiMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            IMultiMediaStream * This,
                        DWORD *pdwFlags,
                        STREAM_TYPE *pStreamType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            IMultiMediaStream * This,
                       REFMSPID idPurpose,
                        IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *EnumMediaStreams )(
            IMultiMediaStream * This,
                       long Index,
                        IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IMultiMediaStream * This,
                        STREAM_STATE *pCurrentState);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            IMultiMediaStream * This,
                       STREAM_STATE NewState);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IMultiMediaStream * This,
                        STREAM_TIME *pCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IMultiMediaStream * This,
                        STREAM_TIME *pDuration);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IMultiMediaStream * This,
                       STREAM_TIME SeekTime);
        HRESULT ( STDMETHODCALLTYPE *GetEndOfStreamEventHandle )(
            IMultiMediaStream * This,
                        HANDLE *phEOS);
        END_INTERFACE
    } IMultiMediaStreamVtbl;
    interface IMultiMediaStream
    {
        CONST_VTBL struct IMultiMediaStreamVtbl *lpVtbl;
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
EXTERN_C const IID IID_IMediaStream;
    typedef struct IMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )(
            __RPC__in IMediaStream * This,
                        __RPC__deref_out_opt IMultiMediaStream **ppMultiMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            __RPC__in IMediaStream * This,
                        __RPC__out MSPID *pPurposeId,
                        __RPC__out STREAM_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *SetSameFormat )(
            __RPC__in IMediaStream * This,
                       __RPC__in_opt IMediaStream *pStreamThatHasDesiredFormat,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            __RPC__in IMediaStream * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IStreamSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )(
            __RPC__in IMediaStream * This,
                       __RPC__in_opt IStreamSample *pExistingSample,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IStreamSample **ppNewSample);
        HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )(
            __RPC__in IMediaStream * This,
            DWORD dwFlags);
        END_INTERFACE
    } IMediaStreamVtbl;
    interface IMediaStream
    {
        CONST_VTBL struct IMediaStreamVtbl *lpVtbl;
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
EXTERN_C const IID IID_IStreamSample;
    typedef struct IStreamSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStreamSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStreamSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStreamSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            IStreamSample * This,
                       IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetSampleTimes )(
            IStreamSample * This,
                        STREAM_TIME *pStartTime,
                        STREAM_TIME *pEndTime,
                        STREAM_TIME *pCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *SetSampleTimes )(
            IStreamSample * This,
                       const STREAM_TIME *pStartTime,
                       const STREAM_TIME *pEndTime);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IStreamSample * This,
                       DWORD dwFlags,
                       HANDLE hEvent,
                       PAPCFUNC pfnAPC,
                       DWORD_PTR dwAPCData);
        HRESULT ( STDMETHODCALLTYPE *CompletionStatus )(
            IStreamSample * This,
                       DWORD dwFlags,
                       DWORD dwMilliseconds);
        END_INTERFACE
    } IStreamSampleVtbl;
    interface IStreamSample
    {
        CONST_VTBL struct IStreamSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) )
    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) )
    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) )
    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) )
    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mmstream_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmstream_0000_0003_v0_0_s_ifspec;
}
