#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPlayerTimestampHook IWMPlayerTimestampHook;
typedef interface IWMCodecAMVideoAccelerator IWMCodecAMVideoAccelerator;
typedef interface IWMCodecVideoAccelerator IWMCodecVideoAccelerator;
#include "mediaobj.h"
#include "videoacc.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( IID_IWMPlayerTimestampHook, 0x28580dda, 0xd98e, 0x48d0, 0xb7, 0xae, 0x69, 0xe4, 0x73, 0xa0, 0x28, 0x25);
EXTERN_GUID( IID_IWMCodecVideoAccelerator, 0x990641b0, 0x739f, 0x4e94, 0xa8, 0x08, 0x98, 0x88, 0xda, 0x8f, 0x75, 0xaf);
EXTERN_GUID( IID_IWMCodecAMVideoAccelerator, 0xd98ee251, 0x34e0, 0x4a2d, 0x93, 0x12, 0x9b, 0x4c, 0x78, 0x8d, 0x9f, 0xa1);
extern RPC_IF_HANDLE __MIDL_itf_wmdxva_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdxva_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPlayerTimestampHook;
    typedef struct IWMPlayerTimestampHookVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPlayerTimestampHook * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPlayerTimestampHook * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPlayerTimestampHook * This);
        HRESULT ( STDMETHODCALLTYPE *MapTimestamp )(
            IWMPlayerTimestampHook * This,
                       REFERENCE_TIME rtIn,
                        REFERENCE_TIME *prtOut);
        END_INTERFACE
    } IWMPlayerTimestampHookVtbl;
    interface IWMPlayerTimestampHook
    {
        CONST_VTBL struct IWMPlayerTimestampHookVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapTimestamp(This,rtIn,prtOut) )
EXTERN_C const IID IID_IWMCodecAMVideoAccelerator;
    typedef struct IWMCodecAMVideoAcceleratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecAMVideoAccelerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecAMVideoAccelerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecAMVideoAccelerator * This);
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratorInterface )(
            IWMCodecAMVideoAccelerator * This,
                       IAMVideoAccelerator *pIAMVA);
        HRESULT ( STDMETHODCALLTYPE *NegotiateConnection )(
            IWMCodecAMVideoAccelerator * This,
                       DMO_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetPlayerNotify )(
            IWMCodecAMVideoAccelerator * This,
                       IWMPlayerTimestampHook *pHook);
        END_INTERFACE
    } IWMCodecAMVideoAcceleratorVtbl;
    interface IWMCodecAMVideoAccelerator
    {
        CONST_VTBL struct IWMCodecAMVideoAcceleratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAcceleratorInterface(This,pIAMVA) )
    ( (This)->lpVtbl -> NegotiateConnection(This,pMediaType) )
    ( (This)->lpVtbl -> SetPlayerNotify(This,pHook) )
EXTERN_C const IID IID_IWMCodecVideoAccelerator;
    typedef struct IWMCodecVideoAcceleratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecVideoAccelerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecVideoAccelerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecVideoAccelerator * This);
        HRESULT ( STDMETHODCALLTYPE *NegotiateConnection )(
            IWMCodecVideoAccelerator * This,
                       IAMVideoAccelerator *pIAMVA,
                       DMO_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetPlayerNotify )(
            IWMCodecVideoAccelerator * This,
                       IWMPlayerTimestampHook *pHook);
        END_INTERFACE
    } IWMCodecVideoAcceleratorVtbl;
    interface IWMCodecVideoAccelerator
    {
        CONST_VTBL struct IWMCodecVideoAcceleratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NegotiateConnection(This,pIAMVA,pMediaType) )
    ( (This)->lpVtbl -> SetPlayerNotify(This,pHook) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmdxva_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdxva_0000_0003_v0_0_s_ifspec;
}
