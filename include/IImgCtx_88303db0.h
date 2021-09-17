#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef void (CALLBACK *PFNIMGCTXCALLBACK)(void *, void *);
}
DEFINE_GUID(IID_IImgCtx, 0x3050f3d7, 0x98b5, 0x11cf, 0xbb, 0x82, 0x00, 0xaa, 0x00, 0xbd, 0xce, 0x0b);
DECLARE_INTERFACE_(IImgCtx, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Load)(THIS_ LPCWSTR pszUrl, DWORD dwFlags) PURE;
    STDMETHOD(SelectChanges)(THIS_ ULONG ulChgOn, ULONG ulChgOff, BOOL fSignal) PURE;
    STDMETHOD(SetCallback)(THIS_ PFNIMGCTXCALLBACK pfn, void * pvPrivateData) PURE;
    STDMETHOD(Disconnect)(THIS) PURE;
    STDMETHOD(GetUpdateRects)(THIS_ struct tagRECT FAR* prc, struct tagRECT FAR* prcImg, long FAR* pcrc) PURE;
    STDMETHOD(GetStateInfo)(THIS_ ULONG FAR* pulState, struct tagSIZE FAR* psize, BOOL fClearChanges) PURE;
    STDMETHOD(GetPalette)(THIS_ HPALETTE FAR* phpal) PURE;
    STDMETHOD(Draw)(THIS_ HDC hdc, struct tagRECT FAR* prcBounds) PURE;
    STDMETHOD(Tile)(THIS_ HDC hdc, struct tagPOINT FAR* pptBackOrg, struct tagRECT FAR* prcClip, struct tagSIZE FAR* psize) PURE;
    STDMETHOD(StretchBlt)(THIS_ HDC hdc, int dstX, int dstY, int dstXE, int dstYE, int srcX, int srcY, int srcXE, int srcYE, DWORD dwROP) PURE;
};
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
        (This)->lpVtbl -> Load(This, pszUrl, dwFlags)
        (This)->lpVtbl -> Draw(This, hdc, prcBounds)
        (This)->lpVtbl -> Tile(This, hdc, pptBackOrg, prcClip, psize)
        (This)->lpVtbl -> GetUpdateRects(This, prc, prcImg, pcrc)
        (This)->lpVtbl -> GetStateInfo(This, pulState, psize, fClearChanges)
        (This)->lpVtbl -> GetPalette(This, phpal)
        (This)->lpVtbl -> SelectChanges(This, ulChgOn, ulChgOff, fSignal)
        (This)->lpVtbl -> SetCallback(This, pfnCallback, pvPrivateData)
    (This)->lpVtbl -> Disconnect(This)
    (This)->lpVtbl -> StretchBlt(This, hdc, dstX, dstY, dstXE, dstYE, srcX, srcY, srcXE, srcYE, dwROP)
DEFINE_GUID(CLSID_IImgCtx, 0x3050f3d6, 0x98b5, 0x11cf, 0xbb, 0x82, 0x00, 0xaa, 0x00, 0xbd, 0xce, 0x0b);
#endif
#pragma endregion
