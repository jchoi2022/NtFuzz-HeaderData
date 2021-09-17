#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEVRVideoStreamControl IEVRVideoStreamControl;
typedef interface IMFVideoProcessor IMFVideoProcessor;
typedef interface IMFVideoMixerBitmap IMFVideoMixerBitmap;
#include "unknwn.h"
#include "mfobjects.h"
#include "mftransform.h"
#include "evr.h"
#include "dxva2api.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEVRVideoStreamControl;
    typedef struct IEVRVideoStreamControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEVRVideoStreamControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEVRVideoStreamControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEVRVideoStreamControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetStreamActiveState )(
            IEVRVideoStreamControl * This,
                       BOOL fActive);
        HRESULT ( STDMETHODCALLTYPE *GetStreamActiveState )(
            IEVRVideoStreamControl * This,
            _Out_ BOOL *lpfActive);
        END_INTERFACE
    } IEVRVideoStreamControlVtbl;
    interface IEVRVideoStreamControl
    {
        CONST_VTBL struct IEVRVideoStreamControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetStreamActiveState(This,fActive) )
    ( (This)->lpVtbl -> GetStreamActiveState(This,lpfActive) )
EXTERN_C const IID IID_IMFVideoProcessor;
    typedef struct IMFVideoProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFVideoProcessor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFVideoProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFVideoProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableVideoProcessorModes )(
            __RPC__in IMFVideoProcessor * This,
                            __RPC__inout UINT *lpdwNumProcessingModes,
                                          __RPC__deref_out_ecount_full_opt(*lpdwNumProcessingModes) GUID **ppVideoProcessingModes);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCaps )(
            __RPC__in IMFVideoProcessor * This,
                       __RPC__in LPGUID lpVideoProcessorMode,
                        __RPC__out DXVA2_VideoProcessorCaps *lpVideoProcessorCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorMode )(
            __RPC__in IMFVideoProcessor * This,
                        __RPC__out LPGUID lpMode);
        HRESULT ( STDMETHODCALLTYPE *SetVideoProcessorMode )(
            __RPC__in IMFVideoProcessor * This,
                       __RPC__in LPGUID lpMode);
        HRESULT ( STDMETHODCALLTYPE *GetProcAmpRange )(
            __RPC__in IMFVideoProcessor * This,
            DWORD dwProperty,
                        __RPC__out DXVA2_ValueRange *pPropRange);
        HRESULT ( STDMETHODCALLTYPE *GetProcAmpValues )(
            __RPC__in IMFVideoProcessor * This,
            DWORD dwFlags,
                        __RPC__out DXVA2_ProcAmpValues *Values);
        HRESULT ( STDMETHODCALLTYPE *SetProcAmpValues )(
            __RPC__in IMFVideoProcessor * This,
            DWORD dwFlags,
                       __RPC__in DXVA2_ProcAmpValues *pValues);
        HRESULT ( STDMETHODCALLTYPE *GetFilteringRange )(
            __RPC__in IMFVideoProcessor * This,
            DWORD dwProperty,
                        __RPC__out DXVA2_ValueRange *pPropRange);
        HRESULT ( STDMETHODCALLTYPE *GetFilteringValue )(
            __RPC__in IMFVideoProcessor * This,
            DWORD dwProperty,
                        __RPC__out DXVA2_Fixed32 *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetFilteringValue )(
            __RPC__in IMFVideoProcessor * This,
            DWORD dwProperty,
                       __RPC__in DXVA2_Fixed32 *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            __RPC__in IMFVideoProcessor * This,
                        __RPC__out COLORREF *lpClrBkg);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )(
            __RPC__in IMFVideoProcessor * This,
            COLORREF ClrBkg);
        END_INTERFACE
    } IMFVideoProcessorVtbl;
    interface IMFVideoProcessor
    {
        CONST_VTBL struct IMFVideoProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAvailableVideoProcessorModes(This,lpdwNumProcessingModes,ppVideoProcessingModes) )
    ( (This)->lpVtbl -> GetVideoProcessorCaps(This,lpVideoProcessorMode,lpVideoProcessorCaps) )
    ( (This)->lpVtbl -> GetVideoProcessorMode(This,lpMode) )
    ( (This)->lpVtbl -> SetVideoProcessorMode(This,lpMode) )
    ( (This)->lpVtbl -> GetProcAmpRange(This,dwProperty,pPropRange) )
    ( (This)->lpVtbl -> GetProcAmpValues(This,dwFlags,Values) )
    ( (This)->lpVtbl -> SetProcAmpValues(This,dwFlags,pValues) )
    ( (This)->lpVtbl -> GetFilteringRange(This,dwProperty,pPropRange) )
    ( (This)->lpVtbl -> GetFilteringValue(This,dwProperty,pValue) )
    ( (This)->lpVtbl -> SetFilteringValue(This,dwProperty,pValue) )
    ( (This)->lpVtbl -> GetBackgroundColor(This,lpClrBkg) )
    ( (This)->lpVtbl -> SetBackgroundColor(This,ClrBkg) )
typedef struct MFVideoAlphaBitmapParams
    {
    DWORD dwFlags;
    COLORREF clrSrcKey;
    RECT rcSrc;
    MFVideoNormalizedRect nrcDest;
    FLOAT fAlpha;
    DWORD dwFilterMode;
    } MFVideoAlphaBitmapParams;
typedef struct MFVideoAlphaBitmap
    {
    BOOL GetBitmapFromDC;
    union
        {
        HDC hdc;
        IDirect3DSurface9 *pDDS;
        } bitmap;
    MFVideoAlphaBitmapParams params;
    } MFVideoAlphaBitmap;
typedef
enum __MIDL___MIDL_itf_evr9_0000_0002_0002
    {
        MFVideoAlphaBitmap_EntireDDS = 0x1,
        MFVideoAlphaBitmap_SrcColorKey = 0x2,
        MFVideoAlphaBitmap_SrcRect = 0x4,
        MFVideoAlphaBitmap_DestRect = 0x8,
        MFVideoAlphaBitmap_FilterMode = 0x10,
        MFVideoAlphaBitmap_Alpha = 0x20,
        MFVideoAlphaBitmap_BitMask = 0x3f
    } MFVideoAlphaBitmapFlags;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoMixerBitmap;
    typedef struct IMFVideoMixerBitmapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoMixerBitmap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoMixerBitmap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoMixerBitmap * This);
        HRESULT ( STDMETHODCALLTYPE *SetAlphaBitmap )(
            IMFVideoMixerBitmap * This,
                       const MFVideoAlphaBitmap *pBmpParms);
        HRESULT ( STDMETHODCALLTYPE *ClearAlphaBitmap )(
            IMFVideoMixerBitmap * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateAlphaBitmapParameters )(
            IMFVideoMixerBitmap * This,
                       const MFVideoAlphaBitmapParams *pBmpParms);
        HRESULT ( STDMETHODCALLTYPE *GetAlphaBitmapParameters )(
            IMFVideoMixerBitmap * This,
            _Out_ MFVideoAlphaBitmapParams *pBmpParms);
        END_INTERFACE
    } IMFVideoMixerBitmapVtbl;
    interface IMFVideoMixerBitmap
    {
        CONST_VTBL struct IMFVideoMixerBitmapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAlphaBitmap(This,pBmpParms) )
    ( (This)->lpVtbl -> ClearAlphaBitmap(This) )
    ( (This)->lpVtbl -> UpdateAlphaBitmapParameters(This,pBmpParms) )
    ( (This)->lpVtbl -> GetAlphaBitmapParameters(This,pBmpParms) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0003_v0_0_s_ifspec;
}
