#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IVMRImagePresenter9 IVMRImagePresenter9;
typedef interface IVMRSurfaceAllocator9 IVMRSurfaceAllocator9;
typedef interface IVMRSurfaceAllocatorEx9 IVMRSurfaceAllocatorEx9;
typedef interface IVMRSurfaceAllocatorNotify9 IVMRSurfaceAllocatorNotify9;
typedef interface IVMRWindowlessControl9 IVMRWindowlessControl9;
typedef interface IVMRMixerControl9 IVMRMixerControl9;
typedef interface IVMRMixerBitmap9 IVMRMixerBitmap9;
typedef interface IVMRSurface9 IVMRSurface9;
typedef interface IVMRImagePresenterConfig9 IVMRImagePresenterConfig9;
typedef interface IVMRVideoStreamControl9 IVMRVideoStreamControl9;
typedef interface IVMRFilterConfig9 IVMRFilterConfig9;
typedef interface IVMRAspectRatioControl9 IVMRAspectRatioControl9;
typedef interface IVMRMonitorConfig9 IVMRMonitorConfig9;
typedef interface IVMRDeinterlaceControl9 IVMRDeinterlaceControl9;
typedef interface IVMRImageCompositor9 IVMRImageCompositor9;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef DWORD IDirect3DDevice9;
typedef DWORD IDirect3DSurface9;
typedef DWORD D3DFORMAT;
typedef DWORD D3DCOLOR;
typedef DWORD D3DPOOL;
typedef LONGLONG REFERENCE_TIME;
typedef DWORD *HMONITOR;
typedef struct __MIDL___MIDL_itf_vmr9_0000_0000_0001
    {
    DWORD dw1;
    DWORD dw2;
    } AM_MEDIA_TYPE;
#endif
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0000_0002
    {
        VMR9Sample_SyncPoint = 0x1,
        VMR9Sample_Preroll = 0x2,
        VMR9Sample_Discontinuity = 0x4,
        VMR9Sample_TimeValid = 0x8,
        VMR9Sample_SrcDstRectsValid = 0x10
    } VMR9PresentationFlags;
typedef struct _VMR9PresentationInfo
    {
    DWORD dwFlags;
    IDirect3DSurface9 *lpSurf;
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    SIZE szAspectRatio;
    RECT rcSrc;
    RECT rcDst;
    DWORD dwReserved1;
    DWORD dwReserved2;
    } VMR9PresentationInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRImagePresenter9;
    typedef struct IVMRImagePresenter9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImagePresenter9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImagePresenter9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImagePresenter9 * This);
        HRESULT ( STDMETHODCALLTYPE *StartPresenting )(
            IVMRImagePresenter9 * This,
                       DWORD_PTR dwUserID);
        HRESULT ( STDMETHODCALLTYPE *StopPresenting )(
            IVMRImagePresenter9 * This,
                       DWORD_PTR dwUserID);
        HRESULT ( STDMETHODCALLTYPE *PresentImage )(
            IVMRImagePresenter9 * This,
                       DWORD_PTR dwUserID,
                       VMR9PresentationInfo *lpPresInfo);
        END_INTERFACE
    } IVMRImagePresenter9Vtbl;
    interface IVMRImagePresenter9
    {
        CONST_VTBL struct IVMRImagePresenter9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartPresenting(This,dwUserID) )
    ( (This)->lpVtbl -> StopPresenting(This,dwUserID) )
    ( (This)->lpVtbl -> PresentImage(This,dwUserID,lpPresInfo) )
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0001_0001
    {
        VMR9AllocFlag_3DRenderTarget = 0x1,
        VMR9AllocFlag_DXVATarget = 0x2,
        VMR9AllocFlag_TextureSurface = 0x4,
        VMR9AllocFlag_OffscreenSurface = 0x8,
        VMR9AllocFlag_RGBDynamicSwitch = 0x10,
        VMR9AllocFlag_UsageReserved = 0xe0,
        VMR9AllocFlag_UsageMask = 0xff
    } VMR9SurfaceAllocationFlags;
typedef struct _VMR9AllocationInfo
    {
    DWORD dwFlags;
    DWORD dwWidth;
    DWORD dwHeight;
    D3DFORMAT Format;
    D3DPOOL Pool;
    DWORD MinBuffers;
    SIZE szAspectRatio;
    SIZE szNativeSize;
    } VMR9AllocationInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRSurfaceAllocator9;
    typedef struct IVMRSurfaceAllocator9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurfaceAllocator9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurfaceAllocator9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurfaceAllocator9 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeDevice )(
            IVMRSurfaceAllocator9 * This,
                       DWORD_PTR dwUserID,
                       VMR9AllocationInfo *lpAllocInfo,
                            DWORD *lpNumBuffers);
        HRESULT ( STDMETHODCALLTYPE *TerminateDevice )(
            IVMRSurfaceAllocator9 * This,
                       DWORD_PTR dwID);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            IVMRSurfaceAllocator9 * This,
                       DWORD_PTR dwUserID,
                       DWORD SurfaceIndex,
                       DWORD SurfaceFlags,
                        IDirect3DSurface9 **lplpSurface);
        HRESULT ( STDMETHODCALLTYPE *AdviseNotify )(
            IVMRSurfaceAllocator9 * This,
                       IVMRSurfaceAllocatorNotify9 *lpIVMRSurfAllocNotify);
        END_INTERFACE
    } IVMRSurfaceAllocator9Vtbl;
    interface IVMRSurfaceAllocator9
    {
        CONST_VTBL struct IVMRSurfaceAllocator9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeDevice(This,dwUserID,lpAllocInfo,lpNumBuffers) )
    ( (This)->lpVtbl -> TerminateDevice(This,dwID) )
    ( (This)->lpVtbl -> GetSurface(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface) )
    ( (This)->lpVtbl -> AdviseNotify(This,lpIVMRSurfAllocNotify) )
EXTERN_C const IID IID_IVMRSurfaceAllocatorEx9;
    typedef struct IVMRSurfaceAllocatorEx9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurfaceAllocatorEx9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurfaceAllocatorEx9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurfaceAllocatorEx9 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeDevice )(
            IVMRSurfaceAllocatorEx9 * This,
                       DWORD_PTR dwUserID,
                       VMR9AllocationInfo *lpAllocInfo,
                            DWORD *lpNumBuffers);
        HRESULT ( STDMETHODCALLTYPE *TerminateDevice )(
            IVMRSurfaceAllocatorEx9 * This,
                       DWORD_PTR dwID);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            IVMRSurfaceAllocatorEx9 * This,
                       DWORD_PTR dwUserID,
                       DWORD SurfaceIndex,
                       DWORD SurfaceFlags,
                        IDirect3DSurface9 **lplpSurface);
        HRESULT ( STDMETHODCALLTYPE *AdviseNotify )(
            IVMRSurfaceAllocatorEx9 * This,
                       IVMRSurfaceAllocatorNotify9 *lpIVMRSurfAllocNotify);
        HRESULT ( STDMETHODCALLTYPE *GetSurfaceEx )(
            IVMRSurfaceAllocatorEx9 * This,
                       DWORD_PTR dwUserID,
                       DWORD SurfaceIndex,
                       DWORD SurfaceFlags,
                        IDirect3DSurface9 **lplpSurface,
                        RECT *lprcDst);
        END_INTERFACE
    } IVMRSurfaceAllocatorEx9Vtbl;
    interface IVMRSurfaceAllocatorEx9
    {
        CONST_VTBL struct IVMRSurfaceAllocatorEx9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeDevice(This,dwUserID,lpAllocInfo,lpNumBuffers) )
    ( (This)->lpVtbl -> TerminateDevice(This,dwID) )
    ( (This)->lpVtbl -> GetSurface(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface) )
    ( (This)->lpVtbl -> AdviseNotify(This,lpIVMRSurfAllocNotify) )
    ( (This)->lpVtbl -> GetSurfaceEx(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface,lprcDst) )
EXTERN_C const IID IID_IVMRSurfaceAllocatorNotify9;
    typedef struct IVMRSurfaceAllocatorNotify9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurfaceAllocatorNotify9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurfaceAllocatorNotify9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurfaceAllocatorNotify9 * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSurfaceAllocator )(
            IVMRSurfaceAllocatorNotify9 * This,
                       DWORD_PTR dwUserID,
                       IVMRSurfaceAllocator9 *lpIVRMSurfaceAllocator);
        HRESULT ( STDMETHODCALLTYPE *SetD3DDevice )(
            IVMRSurfaceAllocatorNotify9 * This,
                       IDirect3DDevice9 *lpD3DDevice,
                       HMONITOR hMonitor);
        HRESULT ( STDMETHODCALLTYPE *ChangeD3DDevice )(
            IVMRSurfaceAllocatorNotify9 * This,
                       IDirect3DDevice9 *lpD3DDevice,
                       HMONITOR hMonitor);
        HRESULT ( STDMETHODCALLTYPE *AllocateSurfaceHelper )(
            IVMRSurfaceAllocatorNotify9 * This,
                       VMR9AllocationInfo *lpAllocInfo,
                            DWORD *lpNumBuffers,
                        IDirect3DSurface9 **lplpSurface);
        HRESULT ( STDMETHODCALLTYPE *NotifyEvent )(
            IVMRSurfaceAllocatorNotify9 * This,
                       LONG EventCode,
                       LONG_PTR Param1,
                       LONG_PTR Param2);
        END_INTERFACE
    } IVMRSurfaceAllocatorNotify9Vtbl;
    interface IVMRSurfaceAllocatorNotify9
    {
        CONST_VTBL struct IVMRSurfaceAllocatorNotify9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSurfaceAllocator(This,dwUserID,lpIVRMSurfaceAllocator) )
    ( (This)->lpVtbl -> SetD3DDevice(This,lpD3DDevice,hMonitor) )
    ( (This)->lpVtbl -> ChangeD3DDevice(This,lpD3DDevice,hMonitor) )
    ( (This)->lpVtbl -> AllocateSurfaceHelper(This,lpAllocInfo,lpNumBuffers,lplpSurface) )
    ( (This)->lpVtbl -> NotifyEvent(This,EventCode,Param1,Param2) )
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0004_0001
    {
        VMR9ARMode_None = 0,
        VMR9ARMode_LetterBox = ( VMR9ARMode_None + 1 )
    } VMR9AspectRatioMode;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRWindowlessControl9;
    typedef struct IVMRWindowlessControl9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRWindowlessControl9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRWindowlessControl9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRWindowlessControl9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            IVMRWindowlessControl9 * This,
                        LONG *lpWidth,
                        LONG *lpHeight,
                        LONG *lpARWidth,
                        LONG *lpARHeight);
        HRESULT ( STDMETHODCALLTYPE *GetMinIdealVideoSize )(
            IVMRWindowlessControl9 * This,
                        LONG *lpWidth,
                        LONG *lpHeight);
        HRESULT ( STDMETHODCALLTYPE *GetMaxIdealVideoSize )(
            IVMRWindowlessControl9 * This,
                        LONG *lpWidth,
                        LONG *lpHeight);
        HRESULT ( STDMETHODCALLTYPE *SetVideoPosition )(
            IVMRWindowlessControl9 * This,
                       const LPRECT lpSRCRect,
                       const LPRECT lpDSTRect);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPosition )(
            IVMRWindowlessControl9 * This,
                        LPRECT lpSRCRect,
                        LPRECT lpDSTRect);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
            IVMRWindowlessControl9 * This,
                        DWORD *lpAspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
            IVMRWindowlessControl9 * This,
                       DWORD AspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *SetVideoClippingWindow )(
            IVMRWindowlessControl9 * This,
                       HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *RepaintVideo )(
            IVMRWindowlessControl9 * This,
                       HWND hwnd,
                       HDC hdc);
        HRESULT ( STDMETHODCALLTYPE *DisplayModeChanged )(
            IVMRWindowlessControl9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )(
            IVMRWindowlessControl9 * This,
                        BYTE **lpDib);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IVMRWindowlessControl9 * This,
                       COLORREF Clr);
        HRESULT ( STDMETHODCALLTYPE *GetBorderColor )(
            IVMRWindowlessControl9 * This,
                        COLORREF *lpClr);
        END_INTERFACE
    } IVMRWindowlessControl9Vtbl;
    interface IVMRWindowlessControl9
    {
        CONST_VTBL struct IVMRWindowlessControl9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNativeVideoSize(This,lpWidth,lpHeight,lpARWidth,lpARHeight) )
    ( (This)->lpVtbl -> GetMinIdealVideoSize(This,lpWidth,lpHeight) )
    ( (This)->lpVtbl -> GetMaxIdealVideoSize(This,lpWidth,lpHeight) )
    ( (This)->lpVtbl -> SetVideoPosition(This,lpSRCRect,lpDSTRect) )
    ( (This)->lpVtbl -> GetVideoPosition(This,lpSRCRect,lpDSTRect) )
    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpAspectRatioMode) )
    ( (This)->lpVtbl -> SetAspectRatioMode(This,AspectRatioMode) )
    ( (This)->lpVtbl -> SetVideoClippingWindow(This,hwnd) )
    ( (This)->lpVtbl -> RepaintVideo(This,hwnd,hdc) )
    ( (This)->lpVtbl -> DisplayModeChanged(This) )
    ( (This)->lpVtbl -> GetCurrentImage(This,lpDib) )
    ( (This)->lpVtbl -> SetBorderColor(This,Clr) )
    ( (This)->lpVtbl -> GetBorderColor(This,lpClr) )
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0005_0001
    {
        MixerPref9_NoDecimation = 0x1,
        MixerPref9_DecimateOutput = 0x2,
        MixerPref9_ARAdjustXorY = 0x4,
        MixerPref9_NonSquareMixing = 0x8,
        MixerPref9_DecimateMask = 0xf,
        MixerPref9_BiLinearFiltering = 0x10,
        MixerPref9_PointFiltering = 0x20,
        MixerPref9_AnisotropicFiltering = 0x40,
        MixerPref9_PyramidalQuadFiltering = 0x80,
        MixerPref9_GaussianQuadFiltering = 0x100,
        MixerPref9_FilteringReserved = 0xe00,
        MixerPref9_FilteringMask = 0xff0,
        MixerPref9_RenderTargetRGB = 0x1000,
        MixerPref9_RenderTargetYUV = 0x2000,
        MixerPref9_RenderTargetReserved = 0xfc000,
        MixerPref9_RenderTargetMask = 0xff000,
        MixerPref9_DynamicSwitchToBOB = 0x100000,
        MixerPref9_DynamicDecimateBy2 = 0x200000,
        MixerPref9_DynamicReserved = 0xc00000,
        MixerPref9_DynamicMask = 0xf00000
    } VMR9MixerPrefs;
typedef struct _VMR9NormalizedRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } VMR9NormalizedRect;
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0005_0002
    {
        ProcAmpControl9_Brightness = 0x1,
        ProcAmpControl9_Contrast = 0x2,
        ProcAmpControl9_Hue = 0x4,
        ProcAmpControl9_Saturation = 0x8,
        ProcAmpControl9_Mask = 0xf
    } VMR9ProcAmpControlFlags;
typedef struct _VMR9ProcAmpControl
    {
    DWORD dwSize;
    DWORD dwFlags;
    float Brightness;
    float Contrast;
    float Hue;
    float Saturation;
    } VMR9ProcAmpControl;
typedef struct _VMR9ProcAmpControlRange
    {
    DWORD dwSize;
    VMR9ProcAmpControlFlags dwProperty;
    float MinValue;
    float MaxValue;
    float DefaultValue;
    float StepSize;
    } VMR9ProcAmpControlRange;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRMixerControl9;
    typedef struct IVMRMixerControl9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRMixerControl9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRMixerControl9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRMixerControl9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAlpha )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                       float Alpha);
        HRESULT ( STDMETHODCALLTYPE *GetAlpha )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                        float *pAlpha);
        HRESULT ( STDMETHODCALLTYPE *SetZOrder )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                       DWORD dwZ);
        HRESULT ( STDMETHODCALLTYPE *GetZOrder )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                        DWORD *pZ);
        HRESULT ( STDMETHODCALLTYPE *SetOutputRect )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                       const VMR9NormalizedRect *pRect);
        HRESULT ( STDMETHODCALLTYPE *GetOutputRect )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                        VMR9NormalizedRect *pRect);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundClr )(
            IVMRMixerControl9 * This,
                       COLORREF ClrBkg);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundClr )(
            IVMRMixerControl9 * This,
                       COLORREF *lpClrBkg);
        HRESULT ( STDMETHODCALLTYPE *SetMixingPrefs )(
            IVMRMixerControl9 * This,
                       DWORD dwMixerPrefs);
        HRESULT ( STDMETHODCALLTYPE *GetMixingPrefs )(
            IVMRMixerControl9 * This,
                        DWORD *pdwMixerPrefs);
        HRESULT ( STDMETHODCALLTYPE *SetProcAmpControl )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                       VMR9ProcAmpControl *lpClrControl);
        HRESULT ( STDMETHODCALLTYPE *GetProcAmpControl )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                            VMR9ProcAmpControl *lpClrControl);
        HRESULT ( STDMETHODCALLTYPE *GetProcAmpControlRange )(
            IVMRMixerControl9 * This,
                       DWORD dwStreamID,
                            VMR9ProcAmpControlRange *lpClrControl);
        END_INTERFACE
    } IVMRMixerControl9Vtbl;
    interface IVMRMixerControl9
    {
        CONST_VTBL struct IVMRMixerControl9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAlpha(This,dwStreamID,Alpha) )
    ( (This)->lpVtbl -> GetAlpha(This,dwStreamID,pAlpha) )
    ( (This)->lpVtbl -> SetZOrder(This,dwStreamID,dwZ) )
    ( (This)->lpVtbl -> GetZOrder(This,dwStreamID,pZ) )
    ( (This)->lpVtbl -> SetOutputRect(This,dwStreamID,pRect) )
    ( (This)->lpVtbl -> GetOutputRect(This,dwStreamID,pRect) )
    ( (This)->lpVtbl -> SetBackgroundClr(This,ClrBkg) )
    ( (This)->lpVtbl -> GetBackgroundClr(This,lpClrBkg) )
    ( (This)->lpVtbl -> SetMixingPrefs(This,dwMixerPrefs) )
    ( (This)->lpVtbl -> GetMixingPrefs(This,pdwMixerPrefs) )
    ( (This)->lpVtbl -> SetProcAmpControl(This,dwStreamID,lpClrControl) )
    ( (This)->lpVtbl -> GetProcAmpControl(This,dwStreamID,lpClrControl) )
    ( (This)->lpVtbl -> GetProcAmpControlRange(This,dwStreamID,lpClrControl) )
typedef struct _VMR9AlphaBitmap
    {
    DWORD dwFlags;
    HDC hdc;
    IDirect3DSurface9 *pDDS;
    RECT rSrc;
    VMR9NormalizedRect rDest;
    FLOAT fAlpha;
    COLORREF clrSrcKey;
    DWORD dwFilterMode;
    } VMR9AlphaBitmap;
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0006_0001
    {
        VMR9AlphaBitmap_Disable = 0x1,
        VMR9AlphaBitmap_hDC = 0x2,
        VMR9AlphaBitmap_EntireDDS = 0x4,
        VMR9AlphaBitmap_SrcColorKey = 0x8,
        VMR9AlphaBitmap_SrcRect = 0x10,
        VMR9AlphaBitmap_FilterMode = 0x20
    } VMR9AlphaBitmapFlags;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRMixerBitmap9;
    typedef struct IVMRMixerBitmap9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRMixerBitmap9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRMixerBitmap9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRMixerBitmap9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAlphaBitmap )(
            IVMRMixerBitmap9 * This,
                       const VMR9AlphaBitmap *pBmpParms);
        HRESULT ( STDMETHODCALLTYPE *UpdateAlphaBitmapParameters )(
            IVMRMixerBitmap9 * This,
                       const VMR9AlphaBitmap *pBmpParms);
        HRESULT ( STDMETHODCALLTYPE *GetAlphaBitmapParameters )(
            IVMRMixerBitmap9 * This,
                        VMR9AlphaBitmap *pBmpParms);
        END_INTERFACE
    } IVMRMixerBitmap9Vtbl;
    interface IVMRMixerBitmap9
    {
        CONST_VTBL struct IVMRMixerBitmap9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAlphaBitmap(This,pBmpParms) )
    ( (This)->lpVtbl -> UpdateAlphaBitmapParameters(This,pBmpParms) )
    ( (This)->lpVtbl -> GetAlphaBitmapParameters(This,pBmpParms) )
EXTERN_C const IID IID_IVMRSurface9;
    typedef struct IVMRSurface9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurface9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurface9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurface9 * This);
        HRESULT ( STDMETHODCALLTYPE *IsSurfaceLocked )(
            IVMRSurface9 * This);
        HRESULT ( STDMETHODCALLTYPE *LockSurface )(
            IVMRSurface9 * This,
                        BYTE **lpSurface);
        HRESULT ( STDMETHODCALLTYPE *UnlockSurface )(
            IVMRSurface9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            IVMRSurface9 * This,
                        IDirect3DSurface9 **lplpSurface);
        END_INTERFACE
    } IVMRSurface9Vtbl;
    interface IVMRSurface9
    {
        CONST_VTBL struct IVMRSurface9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSurfaceLocked(This) )
    ( (This)->lpVtbl -> LockSurface(This,lpSurface) )
    ( (This)->lpVtbl -> UnlockSurface(This) )
    ( (This)->lpVtbl -> GetSurface(This,lplpSurface) )
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0008_0001
    {
        RenderPrefs9_DoNotRenderBorder = 0x1,
        RenderPrefs9_Mask = 0x1
    } VMR9RenderPrefs;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRImagePresenterConfig9;
    typedef struct IVMRImagePresenterConfig9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImagePresenterConfig9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImagePresenterConfig9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImagePresenterConfig9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
            IVMRImagePresenterConfig9 * This,
                       DWORD dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
            IVMRImagePresenterConfig9 * This,
                        DWORD *dwRenderFlags);
        END_INTERFACE
    } IVMRImagePresenterConfig9Vtbl;
    interface IVMRImagePresenterConfig9
    {
        CONST_VTBL struct IVMRImagePresenterConfig9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> GetRenderingPrefs(This,dwRenderFlags) )
EXTERN_C const IID IID_IVMRVideoStreamControl9;
    typedef struct IVMRVideoStreamControl9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRVideoStreamControl9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRVideoStreamControl9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRVideoStreamControl9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetStreamActiveState )(
            IVMRVideoStreamControl9 * This,
                       BOOL fActive);
        HRESULT ( STDMETHODCALLTYPE *GetStreamActiveState )(
            IVMRVideoStreamControl9 * This,
                        BOOL *lpfActive);
        END_INTERFACE
    } IVMRVideoStreamControl9Vtbl;
    interface IVMRVideoStreamControl9
    {
        CONST_VTBL struct IVMRVideoStreamControl9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetStreamActiveState(This,fActive) )
    ( (This)->lpVtbl -> GetStreamActiveState(This,lpfActive) )
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0010_0001
    {
        VMR9Mode_Windowed = 0x1,
        VMR9Mode_Windowless = 0x2,
        VMR9Mode_Renderless = 0x4,
        VMR9Mode_Mask = 0x7
    } VMR9Mode;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRFilterConfig9;
    typedef struct IVMRFilterConfig9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRFilterConfig9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRFilterConfig9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRFilterConfig9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetImageCompositor )(
            IVMRFilterConfig9 * This,
                       IVMRImageCompositor9 *lpVMRImgCompositor);
        HRESULT ( STDMETHODCALLTYPE *SetNumberOfStreams )(
            IVMRFilterConfig9 * This,
                       DWORD dwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
            IVMRFilterConfig9 * This,
                        DWORD *pdwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
            IVMRFilterConfig9 * This,
                       DWORD dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
            IVMRFilterConfig9 * This,
                        DWORD *pdwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingMode )(
            IVMRFilterConfig9 * This,
                       DWORD Mode);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingMode )(
            IVMRFilterConfig9 * This,
                        DWORD *pMode);
        END_INTERFACE
    } IVMRFilterConfig9Vtbl;
    interface IVMRFilterConfig9
    {
        CONST_VTBL struct IVMRFilterConfig9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetImageCompositor(This,lpVMRImgCompositor) )
    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) )
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) )
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> GetRenderingPrefs(This,pdwRenderFlags) )
    ( (This)->lpVtbl -> SetRenderingMode(This,Mode) )
    ( (This)->lpVtbl -> GetRenderingMode(This,pMode) )
EXTERN_C const IID IID_IVMRAspectRatioControl9;
    typedef struct IVMRAspectRatioControl9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRAspectRatioControl9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRAspectRatioControl9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRAspectRatioControl9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
            IVMRAspectRatioControl9 * This,
                        LPDWORD lpdwARMode);
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
            IVMRAspectRatioControl9 * This,
                       DWORD dwARMode);
        END_INTERFACE
    } IVMRAspectRatioControl9Vtbl;
    interface IVMRAspectRatioControl9
    {
        CONST_VTBL struct IVMRAspectRatioControl9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpdwARMode) )
    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwARMode) )
typedef struct _VMR9MonitorInfo
    {
    UINT uDevID;
    RECT rcMonitor;
    HMONITOR hMon;
    DWORD dwFlags;
    wchar_t szDevice[ 32 ];
    wchar_t szDescription[ 512 ];
    LARGE_INTEGER liDriverVersion;
    DWORD dwVendorId;
    DWORD dwDeviceId;
    DWORD dwSubSysId;
    DWORD dwRevision;
    } VMR9MonitorInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRMonitorConfig9;
    typedef struct IVMRMonitorConfig9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRMonitorConfig9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRMonitorConfig9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRMonitorConfig9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetMonitor )(
            IVMRMonitorConfig9 * This,
                       UINT uDev);
        HRESULT ( STDMETHODCALLTYPE *GetMonitor )(
            IVMRMonitorConfig9 * This,
                        UINT *puDev);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultMonitor )(
            IVMRMonitorConfig9 * This,
                       UINT uDev);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMonitor )(
            IVMRMonitorConfig9 * This,
                        UINT *puDev);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableMonitors )(
            IVMRMonitorConfig9 * This,
                                 VMR9MonitorInfo *pInfo,
                       DWORD dwMaxInfoArraySize,
                        DWORD *pdwNumDevices);
        END_INTERFACE
    } IVMRMonitorConfig9Vtbl;
    interface IVMRMonitorConfig9
    {
        CONST_VTBL struct IVMRMonitorConfig9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMonitor(This,uDev) )
    ( (This)->lpVtbl -> GetMonitor(This,puDev) )
    ( (This)->lpVtbl -> SetDefaultMonitor(This,uDev) )
    ( (This)->lpVtbl -> GetDefaultMonitor(This,puDev) )
    ( (This)->lpVtbl -> GetAvailableMonitors(This,pInfo,dwMaxInfoArraySize,pdwNumDevices) )
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0013_0001
    {
        DeinterlacePref9_NextBest = 0x1,
        DeinterlacePref9_BOB = 0x2,
        DeinterlacePref9_Weave = 0x4,
        DeinterlacePref9_Mask = 0x7
    } VMR9DeinterlacePrefs;
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0013_0002
    {
        DeinterlaceTech9_Unknown = 0,
        DeinterlaceTech9_BOBLineReplicate = 0x1,
        DeinterlaceTech9_BOBVerticalStretch = 0x2,
        DeinterlaceTech9_MedianFiltering = 0x4,
        DeinterlaceTech9_EdgeFiltering = 0x10,
        DeinterlaceTech9_FieldAdaptive = 0x20,
        DeinterlaceTech9_PixelAdaptive = 0x40,
        DeinterlaceTech9_MotionVectorSteered = 0x80
    } VMR9DeinterlaceTech;
typedef struct _VMR9Frequency
    {
    DWORD dwNumerator;
    DWORD dwDenominator;
    } VMR9Frequency;
typedef
enum _VMR9_SampleFormat
    {
        VMR9_SampleReserved = 1,
        VMR9_SampleProgressiveFrame = 2,
        VMR9_SampleFieldInterleavedEvenFirst = 3,
        VMR9_SampleFieldInterleavedOddFirst = 4,
        VMR9_SampleFieldSingleEven = 5,
        VMR9_SampleFieldSingleOdd = 6
    } VMR9_SampleFormat;
typedef struct _VMR9VideoDesc
    {
    DWORD dwSize;
    DWORD dwSampleWidth;
    DWORD dwSampleHeight;
    VMR9_SampleFormat SampleFormat;
    DWORD dwFourCC;
    VMR9Frequency InputSampleFreq;
    VMR9Frequency OutputFrameFreq;
    } VMR9VideoDesc;
typedef struct _VMR9DeinterlaceCaps
    {
    DWORD dwSize;
    DWORD dwNumPreviousOutputFrames;
    DWORD dwNumForwardRefSamples;
    DWORD dwNumBackwardRefSamples;
    VMR9DeinterlaceTech DeinterlaceTechnology;
    } VMR9DeinterlaceCaps;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRDeinterlaceControl9;
    typedef struct IVMRDeinterlaceControl9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRDeinterlaceControl9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRDeinterlaceControl9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRDeinterlaceControl9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfDeinterlaceModes )(
            IVMRDeinterlaceControl9 * This,
                       VMR9VideoDesc *lpVideoDescription,
                            LPDWORD lpdwNumDeinterlaceModes,
                        LPGUID lpDeinterlaceModes);
        HRESULT ( STDMETHODCALLTYPE *GetDeinterlaceModeCaps )(
            IVMRDeinterlaceControl9 * This,
                       LPGUID lpDeinterlaceMode,
                       VMR9VideoDesc *lpVideoDescription,
                        VMR9DeinterlaceCaps *lpDeinterlaceCaps);
        HRESULT ( STDMETHODCALLTYPE *GetDeinterlaceMode )(
            IVMRDeinterlaceControl9 * This,
                       DWORD dwStreamID,
                        LPGUID lpDeinterlaceMode);
        HRESULT ( STDMETHODCALLTYPE *SetDeinterlaceMode )(
            IVMRDeinterlaceControl9 * This,
                       DWORD dwStreamID,
                       LPGUID lpDeinterlaceMode);
        HRESULT ( STDMETHODCALLTYPE *GetDeinterlacePrefs )(
            IVMRDeinterlaceControl9 * This,
                        LPDWORD lpdwDeinterlacePrefs);
        HRESULT ( STDMETHODCALLTYPE *SetDeinterlacePrefs )(
            IVMRDeinterlaceControl9 * This,
                       DWORD dwDeinterlacePrefs);
        HRESULT ( STDMETHODCALLTYPE *GetActualDeinterlaceMode )(
            IVMRDeinterlaceControl9 * This,
                       DWORD dwStreamID,
                        LPGUID lpDeinterlaceMode);
        END_INTERFACE
    } IVMRDeinterlaceControl9Vtbl;
    interface IVMRDeinterlaceControl9
    {
        CONST_VTBL struct IVMRDeinterlaceControl9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfDeinterlaceModes(This,lpVideoDescription,lpdwNumDeinterlaceModes,lpDeinterlaceModes) )
    ( (This)->lpVtbl -> GetDeinterlaceModeCaps(This,lpDeinterlaceMode,lpVideoDescription,lpDeinterlaceCaps) )
    ( (This)->lpVtbl -> GetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
    ( (This)->lpVtbl -> SetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
    ( (This)->lpVtbl -> GetDeinterlacePrefs(This,lpdwDeinterlacePrefs) )
    ( (This)->lpVtbl -> SetDeinterlacePrefs(This,dwDeinterlacePrefs) )
    ( (This)->lpVtbl -> GetActualDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
typedef struct _VMR9VideoStreamInfo
    {
    IDirect3DSurface9 *pddsVideoSurface;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwStrmID;
    FLOAT fAlpha;
    VMR9NormalizedRect rNormal;
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    VMR9_SampleFormat SampleFormat;
    } VMR9VideoStreamInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRImageCompositor9;
    typedef struct IVMRImageCompositor9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImageCompositor9 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImageCompositor9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImageCompositor9 * This);
        HRESULT ( STDMETHODCALLTYPE *InitCompositionDevice )(
            IVMRImageCompositor9 * This,
                       IUnknown *pD3DDevice);
        HRESULT ( STDMETHODCALLTYPE *TermCompositionDevice )(
            IVMRImageCompositor9 * This,
                       IUnknown *pD3DDevice);
        HRESULT ( STDMETHODCALLTYPE *SetStreamMediaType )(
            IVMRImageCompositor9 * This,
                       DWORD dwStrmID,
                       AM_MEDIA_TYPE *pmt,
                       BOOL fTexture);
        HRESULT ( STDMETHODCALLTYPE *CompositeImage )(
            IVMRImageCompositor9 * This,
                       IUnknown *pD3DDevice,
                       IDirect3DSurface9 *pddsRenderTarget,
                       AM_MEDIA_TYPE *pmtRenderTarget,
                       REFERENCE_TIME rtStart,
                       REFERENCE_TIME rtEnd,
                       D3DCOLOR dwClrBkGnd,
                       VMR9VideoStreamInfo *pVideoStreamInfo,
                       UINT cStreams);
        END_INTERFACE
    } IVMRImageCompositor9Vtbl;
    interface IVMRImageCompositor9
    {
        CONST_VTBL struct IVMRImageCompositor9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitCompositionDevice(This,pD3DDevice) )
    ( (This)->lpVtbl -> TermCompositionDevice(This,pD3DDevice) )
    ( (This)->lpVtbl -> SetStreamMediaType(This,dwStrmID,pmt,fTexture) )
    ( (This)->lpVtbl -> CompositeImage(This,pD3DDevice,pddsRenderTarget,pmtRenderTarget,rtStart,rtEnd,dwClrBkGnd,pVideoStreamInfo,cStreams) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0015_v0_0_s_ifspec;
}
