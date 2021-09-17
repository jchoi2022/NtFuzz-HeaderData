#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <ddraw.h>
typedef LONGLONG REFERENCE_TIME;
DECLARE_INTERFACE_(IDirectDrawVideo, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, _Outptr_ LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetSwitches)(THIS_ _Out_ DWORD *pSwitches) PURE;
    STDMETHOD(SetSwitches)(THIS_ DWORD Switches) PURE;
    STDMETHOD(GetCaps)(THIS_ _Out_ DDCAPS *pCaps) PURE;
    STDMETHOD(GetEmulatedCaps)(THIS_ _Out_ DDCAPS *pCaps) PURE;
    STDMETHOD(GetSurfaceDesc)(THIS_ _Inout_ DDSURFACEDESC *pSurfaceDesc) PURE;
    STDMETHOD(GetFourCCCodes)(THIS_ _Out_ DWORD *pCount,_Out_ DWORD *pCodes) PURE;
    STDMETHOD(SetDirectDraw)(THIS_ LPDIRECTDRAW pDirectDraw) PURE;
    STDMETHOD(GetDirectDraw)(THIS_ _Outptr_ LPDIRECTDRAW *ppDirectDraw) PURE;
    STDMETHOD(GetSurfaceType)(THIS_ _Out_ DWORD *pSurfaceType) PURE;
    STDMETHOD(SetDefault)(THIS) PURE;
    STDMETHOD(UseScanLine)(THIS_ long UseScanLine) PURE;
    STDMETHOD(CanUseScanLine)(THIS_ _Out_ long *UseScanLine) PURE;
    STDMETHOD(UseOverlayStretch)(THIS_ long UseOverlayStretch) PURE;
    STDMETHOD(CanUseOverlayStretch)(THIS_ _Out_ long *UseOverlayStretch) PURE;
    STDMETHOD(UseWhenFullScreen)(THIS_ long UseWhenFullScreen) PURE;
    STDMETHOD(WillUseFullScreen)(THIS_ _Out_ long *UseWhenFullScreen) PURE;
};
DECLARE_INTERFACE_(IQualProp, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, _Outptr_ LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(get_FramesDroppedInRenderer)(THIS_ _Out_ int *pcFrames) PURE;
    STDMETHOD(get_FramesDrawn)(THIS_ _Out_ int *pcFramesDrawn) PURE;
    STDMETHOD(get_AvgFrameRate)(THIS_ _Out_ int *piAvgFrameRate) PURE;
    STDMETHOD(get_Jitter)(THIS_ _Out_ int *iJitter) PURE;
    STDMETHOD(get_AvgSyncOffset)(THIS_ _Out_ int *piAvg) PURE;
    STDMETHOD(get_DevSyncOffset)(THIS_ _Out_ int *piDev) PURE;
};
DECLARE_INTERFACE_(IFullScreenVideo, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, _Outptr_ LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(CountModes)(THIS_ _Out_ long *pModes) PURE;
    STDMETHOD(GetModeInfo)(THIS_ long Mode,_Out_ long *pWidth,_Out_ long *pHeight,_Out_ long *pDepth) PURE;
    STDMETHOD(GetCurrentMode)(THIS_ _Out_ long *pMode) PURE;
    STDMETHOD(IsModeAvailable)(THIS_ long Mode) PURE;
    STDMETHOD(IsModeEnabled)(THIS_ long Mode) PURE;
    STDMETHOD(SetEnabled)(THIS_ long Mode,long bEnabled) PURE;
    STDMETHOD(GetClipFactor)(THIS_ _Out_ long *pClipFactor) PURE;
    STDMETHOD(SetClipFactor)(THIS_ long ClipFactor) PURE;
    STDMETHOD(SetMessageDrain)(THIS_ HWND hwnd) PURE;
    STDMETHOD(GetMessageDrain)(THIS_ _Out_ HWND *hwnd) PURE;
    STDMETHOD(SetMonitor)(THIS_ long Monitor) PURE;
    STDMETHOD(GetMonitor)(THIS_ _Out_ long *Monitor) PURE;
    STDMETHOD(HideOnDeactivate)(THIS_ long Hide) PURE;
    STDMETHOD(IsHideOnDeactivate)(THIS) PURE;
    STDMETHOD(SetCaption)(THIS_ _In_ BSTR strCaption) PURE;
    STDMETHOD(GetCaption)(THIS_ _Outptr_ BSTR *pstrCaption) PURE;
    STDMETHOD(SetDefault)(THIS) PURE;
};
DECLARE_INTERFACE_(IFullScreenVideoEx, IFullScreenVideo)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, _Outptr_ LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(CountModes)(THIS_ _Out_ long *pModes) PURE;
    STDMETHOD(GetModeInfo)(THIS_ long Mode,_Out_ long *pWidth,_Out_ long *pHeight,_Out_ long *pDepth) PURE;
    STDMETHOD(GetCurrentMode)(THIS_ _Out_ long *pMode) PURE;
    STDMETHOD(IsModeAvailable)(THIS_ long Mode) PURE;
    STDMETHOD(IsModeEnabled)(THIS_ long Mode) PURE;
    STDMETHOD(SetEnabled)(THIS_ long Mode,long bEnabled) PURE;
    STDMETHOD(GetClipFactor)(THIS_ _Out_ long *pClipFactor) PURE;
    STDMETHOD(SetClipFactor)(THIS_ long ClipFactor) PURE;
    STDMETHOD(SetMessageDrain)(THIS_ HWND hwnd) PURE;
    STDMETHOD(GetMessageDrain)(THIS_ _Out_ HWND *hwnd) PURE;
    STDMETHOD(SetMonitor)(THIS_ long Monitor) PURE;
    STDMETHOD(GetMonitor)(THIS_ _Out_ long *Monitor) PURE;
    STDMETHOD(HideOnDeactivate)(THIS_ long Hide) PURE;
    STDMETHOD(IsHideOnDeactivate)(THIS) PURE;
    STDMETHOD(SetCaption)(THIS_ _In_ BSTR strCaption) PURE;
    STDMETHOD(GetCaption)(THIS_ _Outptr_ BSTR *pstrCaption) PURE;
    STDMETHOD(SetDefault)(THIS) PURE;
    STDMETHOD(SetAcceleratorTable)(THIS_ HWND hwnd,HACCEL hAccel) PURE;
    STDMETHOD(GetAcceleratorTable)(THIS_ _Out_ HWND *phwnd,HACCEL *phAccel) PURE;
    STDMETHOD(KeepPixelAspectRatio)(THIS_ long KeepAspect) PURE;
    STDMETHOD(IsKeepPixelAspectRatio)(THIS_ _Out_ long *pKeepAspect) PURE;
};
DECLARE_INTERFACE_(IBaseVideoMixer, IUnknown)
{
    STDMETHOD(SetLeadPin)(THIS_ int iPin) PURE;
    STDMETHOD(GetLeadPin)(THIS_ _Out_ int *piPin) PURE;
    STDMETHOD(GetInputPinCount)(THIS_ _Out_ int *piPinCount) PURE;
    STDMETHOD(IsUsingClock)(THIS_ _Out_ int *pbValue) PURE;
    STDMETHOD(SetUsingClock)(THIS_ int bValue) PURE;
    STDMETHOD(GetClockPeriod)(THIS_ _Out_ int *pbValue) PURE;
    STDMETHOD(SetClockPeriod)(THIS_ int bValue) PURE;
};
typedef struct tag_TRUECOLORINFO {
    DWORD dwBitMasks[iMASK_COLORS];
    RGBQUAD bmiColors[iPALETTE_COLORS];
} TRUECOLORINFO;
typedef struct tagVIDEOINFOHEADER {
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    REFERENCE_TIME AvgTimePerFrame;
    BITMAPINFOHEADER bmiHeader;
} VIDEOINFOHEADER;
     + (pbmi)->bmiHeader.biSize))
     + (pbmi)->bmiHeader.biSize))
     + (pbmi)->bmiHeader.biSize))
typedef struct tagVIDEOINFO {
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    REFERENCE_TIME AvgTimePerFrame;
    BITMAPINFOHEADER bmiHeader;
    union {
        RGBQUAD bmiColors[iPALETTE_COLORS];
        DWORD dwBitMasks[iMASK_COLORS];
        TRUECOLORINFO TrueColorInfo;
    };
} VIDEOINFO;
__inline HRESULT SAFE_DIBWIDTHBYTES(_In_ const BITMAPINFOHEADER *pbi, _Out_ DWORD *pcbWidth)
{
    DWORD dw;
    HRESULT hr;
    if (pbi->biWidth < 0 || pbi->biBitCount <= 0) {
        return E_INVALIDARG;
    }
    hr = DWordMult((DWORD)pbi->biWidth, (DWORD)pbi->biBitCount, &dw);
    if (FAILED(hr)) {
        return hr;
    }
    dw = (dw & 7) ? dw / 8 + 1: dw / 8;
    if (dw & 3) {
        dw += 4 - (dw & 3);
    }
    *pcbWidth = dw;
    return S_OK;
}
__inline HRESULT SAFE_DIBSIZE(_In_ const BITMAPINFOHEADER *pbi, _Out_ DWORD *pcbSize)
{
    DWORD dw;
    DWORD dwWidthBytes;
    HRESULT hr;
    if (pbi->biHeight == 0x80000000) {
        return E_INVALIDARG;
    }
    hr = SAFE_DIBWIDTHBYTES(pbi, &dwWidthBytes);
    if (FAILED(hr)) {
        return hr;
    }
    dw = abs(pbi->biHeight);
    hr = DWordMult(dw, dwWidthBytes, &dw);
    if (FAILED(hr)) {
        return hr;
    }
    *pcbSize = dw;
    return S_OK;
}
    (((pbmi1)->dwBitMasks[iRED] == (pbmi2)->dwBitMasks[iRED]) && \
     ((pbmi1)->dwBitMasks[iGREEN] == (pbmi2)->dwBitMasks[iGREEN]) && \
     ((pbmi1)->dwBitMasks[iBLUE] == (pbmi2)->dwBitMasks[iBLUE]))
#if 0
   (pbmi)->bmiHeader.biSize,SIZE_MASKS)))
   sizeof(BITMAPINFOHEADER)))
   (pbmi)->bmiHeader.biSize,SIZE_PALETTE))
#endif
typedef struct tagMPEG1VIDEOINFO {
    VIDEOINFOHEADER hdr;
    DWORD dwStartTimeCode;
    DWORD cbSequenceHeader;
    BYTE bSequenceHeader[1];
} MPEG1VIDEOINFO;
typedef struct tagAnalogVideoInfo {
    RECT rcSource;
    RECT rcTarget;
    DWORD dwActiveWidth;
    DWORD dwActiveHeight;
    REFERENCE_TIME AvgTimePerFrame;
} ANALOGVIDEOINFO;
typedef enum {
 AM_PROPERTY_FRAMESTEP_STEP = 0x01,
 AM_PROPERTY_FRAMESTEP_CANCEL = 0x02,
        AM_PROPERTY_FRAMESTEP_CANSTEP = 0x03,
        AM_PROPERTY_FRAMESTEP_CANSTEPMULTIPLE = 0x04
} AM_PROPERTY_FRAMESTEP;
typedef struct _AM_FRAMESTEP_STEP
{
    DWORD dwFramesToStep;
} AM_FRAMESTEP_STEP;
}
#endif
#pragma endregion
