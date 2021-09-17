#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioMediaType IAudioMediaType;
#include "oaidl.h"
#include "ocidl.h"
#include "mmreg.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _UNCOMPRESSEDAUDIOFORMAT
    {
    GUID guidFormatType;
    DWORD dwSamplesPerFrame;
    DWORD dwBytesPerSampleContainer;
    DWORD dwValidBitsPerSample;
    FLOAT fFramesPerSecond;
    DWORD dwChannelMask;
    } UNCOMPRESSEDAUDIOFORMAT;
extern RPC_IF_HANDLE __MIDL_itf_audiomediatype_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiomediatype_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioMediaType;
    typedef struct IAudioMediaTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioMediaType * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioMediaType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *IsCompressedFormat )(
            IAudioMediaType * This,
            _Out_ BOOL *pfCompressed);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            IAudioMediaType * This,
            _In_ IAudioMediaType *pIAudioType,
            _Out_ DWORD *pdwFlags);
        const WAVEFORMATEX *( STDMETHODCALLTYPE *GetAudioFormat )(
            IAudioMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetUncompressedAudioFormat )(
            IAudioMediaType * This,
            _Out_ UNCOMPRESSEDAUDIOFORMAT *pUncompressedAudioFormat);
        END_INTERFACE
    } IAudioMediaTypeVtbl;
    interface IAudioMediaType
    {
        CONST_VTBL struct IAudioMediaTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsCompressedFormat(This,pfCompressed) )
    ( (This)->lpVtbl -> IsEqual(This,pIAudioType,pdwFlags) )
    ( (This)->lpVtbl -> GetAudioFormat(This) )
    ( (This)->lpVtbl -> GetUncompressedAudioFormat(This,pUncompressedAudioFormat) )
STDAPI CreateAudioMediaType(
    const WAVEFORMATEX* pAudioFormat,
    UINT32 cbAudioFormatSize,
    IAudioMediaType** ppIAudioMediaType
    );
STDAPI CreateAudioMediaTypeFromUncompressedAudioFormat(
    const UNCOMPRESSEDAUDIOFORMAT* pUncompressedAudioFormat,
    IAudioMediaType** ppIAudioMediaType
    );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_audiomediatype_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiomediatype_0000_0001_v0_0_s_ifspec;
}
