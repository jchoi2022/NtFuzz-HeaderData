#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioMediaStream IAudioMediaStream;
typedef interface IAudioStreamSample IAudioStreamSample;
typedef interface IMemoryData IMemoryData;
typedef interface IAudioData IAudioData;
#include "unknwn.h"
#include "mmstream.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef struct tWAVEFORMATEX WAVEFORMATEX;
#endif
extern RPC_IF_HANDLE __MIDL_itf_austream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_austream_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioMediaStream;
    typedef struct IAudioMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioMediaStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )(
            IAudioMediaStream * This,
                        IMultiMediaStream **ppMultiMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetInformation )(
            IAudioMediaStream * This,
                        MSPID *pPurposeId,
                        STREAM_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *SetSameFormat )(
            IAudioMediaStream * This,
                       IMediaStream *pStreamThatHasDesiredFormat,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            IAudioMediaStream * This,
                       DWORD dwFlags,
                        IStreamSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )(
            IAudioMediaStream * This,
                       IStreamSample *pExistingSample,
                       DWORD dwFlags,
                        IStreamSample **ppNewSample);
        HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )(
            IAudioMediaStream * This,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            IAudioMediaStream * This,
                        WAVEFORMATEX *pWaveFormatCurrent);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            IAudioMediaStream * This,
                       const WAVEFORMATEX *lpWaveFormat);
        HRESULT ( STDMETHODCALLTYPE *CreateSample )(
            IAudioMediaStream * This,
                       IAudioData *pAudioData,
                       DWORD dwFlags,
                        IAudioStreamSample **ppSample);
        END_INTERFACE
    } IAudioMediaStreamVtbl;
    interface IAudioMediaStream
    {
        CONST_VTBL struct IAudioMediaStreamVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetFormat(This,pWaveFormatCurrent) )
    ( (This)->lpVtbl -> SetFormat(This,lpWaveFormat) )
    ( (This)->lpVtbl -> CreateSample(This,pAudioData,dwFlags,ppSample) )
EXTERN_C const IID IID_IAudioStreamSample;
    typedef struct IAudioStreamSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioStreamSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioStreamSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioStreamSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
            IAudioStreamSample * This,
                       IMediaStream **ppMediaStream);
        HRESULT ( STDMETHODCALLTYPE *GetSampleTimes )(
            IAudioStreamSample * This,
                        STREAM_TIME *pStartTime,
                        STREAM_TIME *pEndTime,
                        STREAM_TIME *pCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *SetSampleTimes )(
            IAudioStreamSample * This,
                       const STREAM_TIME *pStartTime,
                       const STREAM_TIME *pEndTime);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IAudioStreamSample * This,
                       DWORD dwFlags,
                       HANDLE hEvent,
                       PAPCFUNC pfnAPC,
                       DWORD_PTR dwAPCData);
        HRESULT ( STDMETHODCALLTYPE *CompletionStatus )(
            IAudioStreamSample * This,
                       DWORD dwFlags,
                       DWORD dwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *GetAudioData )(
            IAudioStreamSample * This,
                        IAudioData **ppAudio);
        END_INTERFACE
    } IAudioStreamSampleVtbl;
    interface IAudioStreamSample
    {
        CONST_VTBL struct IAudioStreamSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) )
    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) )
    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) )
    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) )
    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) )
    ( (This)->lpVtbl -> GetAudioData(This,ppAudio) )
EXTERN_C const IID IID_IMemoryData;
    typedef struct IMemoryDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMemoryData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMemoryData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMemoryData * This);
        HRESULT ( STDMETHODCALLTYPE *SetBuffer )(
            IMemoryData * This,
                       DWORD cbSize,
                       BYTE *pbData,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IMemoryData * This,
                        DWORD *pdwLength,
                        BYTE **ppbData,
                        DWORD *pcbActualData);
        HRESULT ( STDMETHODCALLTYPE *SetActual )(
            IMemoryData * This,
                       DWORD cbDataValid);
        END_INTERFACE
    } IMemoryDataVtbl;
    interface IMemoryData
    {
        CONST_VTBL struct IMemoryDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBuffer(This,cbSize,pbData,dwFlags) )
    ( (This)->lpVtbl -> GetInfo(This,pdwLength,ppbData,pcbActualData) )
    ( (This)->lpVtbl -> SetActual(This,cbDataValid) )
EXTERN_C const IID IID_IAudioData;
    typedef struct IAudioDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioData * This);
        HRESULT ( STDMETHODCALLTYPE *SetBuffer )(
            IAudioData * This,
                       DWORD cbSize,
                       BYTE *pbData,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IAudioData * This,
                        DWORD *pdwLength,
                        BYTE **ppbData,
                        DWORD *pcbActualData);
        HRESULT ( STDMETHODCALLTYPE *SetActual )(
            IAudioData * This,
                       DWORD cbDataValid);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            IAudioData * This,
                        WAVEFORMATEX *pWaveFormatCurrent);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            IAudioData * This,
                       const WAVEFORMATEX *lpWaveFormat);
        END_INTERFACE
    } IAudioDataVtbl;
    interface IAudioData
    {
        CONST_VTBL struct IAudioDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBuffer(This,cbSize,pbData,dwFlags) )
    ( (This)->lpVtbl -> GetInfo(This,pdwLength,ppbData,pcbActualData) )
    ( (This)->lpVtbl -> SetActual(This,cbDataValid) )
    ( (This)->lpVtbl -> GetFormat(This,pWaveFormatCurrent) )
    ( (This)->lpVtbl -> SetFormat(This,lpWaveFormat) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_austream_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_austream_0000_0004_v0_0_s_ifspec;
}
