#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFDLNASinkInit IMFDLNASinkInit;
#include "mfobjects.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfmp2dlna_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmp2dlna_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFDLNASinkInit;
    typedef struct IMFDLNASinkInitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFDLNASinkInit * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFDLNASinkInit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFDLNASinkInit * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IMFDLNASinkInit * This,
            IMFByteStream *pByteStream,
            BOOL fPal);
        END_INTERFACE
    } IMFDLNASinkInitVtbl;
    interface IMFDLNASinkInit
    {
        CONST_VTBL struct IMFDLNASinkInitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pByteStream,fPal) )
EXTERN_GUID( CLSID_MPEG2DLNASink, 0xfa5fe7c5, 0x6a1d, 0x4b11, 0xb4, 0x1f, 0xf9, 0x59, 0xd6, 0xc7, 0x65, 0x00 );
EXTERN_GUID( MF_MP2DLNA_USE_MMCSS, 0x54f3e2ee, 0xa2a2, 0x497d, 0x98, 0x34, 0x97, 0x3a, 0xfd, 0xe5, 0x21, 0xeb );
EXTERN_GUID( MF_MP2DLNA_VIDEO_BIT_RATE, 0xe88548de, 0x73b4, 0x42d7, 0x9c, 0x75, 0xad, 0xfa, 0xa, 0x2a, 0x6e, 0x4c );
EXTERN_GUID( MF_MP2DLNA_AUDIO_BIT_RATE, 0x2d1c070e, 0x2b5f, 0x4ab3, 0xa7, 0xe6, 0x8d, 0x94, 0x3b, 0xa8, 0xd0, 0x0a);
EXTERN_GUID( MF_MP2DLNA_ENCODE_QUALITY, 0xb52379d7, 0x1d46, 0x4fb6, 0xa3, 0x17, 0xa4, 0xa5, 0xf6, 0x09, 0x59, 0xf8);
EXTERN_GUID( MF_MP2DLNA_STATISTICS, 0x75e488a3, 0xd5ad, 0x4898, 0x85, 0xe0, 0xbc, 0xce, 0x24, 0xa7, 0x22, 0xd7 );
typedef struct _MFMPEG2DLNASINKSTATS
{
   DWORDLONG cBytesWritten;
   BOOL fPAL;
   DWORD fccVideo;
   DWORD dwVideoWidth;
   DWORD dwVideoHeight;
   DWORDLONG cVideoFramesReceived;
   DWORDLONG cVideoFramesEncoded;
   DWORDLONG cVideoFramesSkipped;
   DWORDLONG cBlackVideoFramesEncoded;
   DWORDLONG cVideoFramesDuplicated;
   DWORD cAudioSamplesPerSec;
   DWORD cAudioChannels;
   DWORDLONG cAudioBytesReceived;
   DWORDLONG cAudioFramesEncoded;
} MFMPEG2DLNASINKSTATS;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfmp2dlna_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmp2dlna_0000_0001_v0_0_s_ifspec;
}
