#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IImageList IImageList;
typedef interface IImageList2 IImageList2;
typedef class ImageList ImageList;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD RGBQUAD;
typedef IUnknown *HIMAGELIST;
typedef struct _IMAGELIST* HIMAGELIST;
typedef struct _IMAGELISTDRAWPARAMS
    {
    DWORD cbSize;
    HIMAGELIST himl;
    int i;
    HDC hdcDst;
    int x;
    int y;
    int cx;
    int cy;
    int xBitmap;
    int yBitmap;
    COLORREF rgbBk;
    COLORREF rgbFg;
    UINT fStyle;
    DWORD dwRop;
    DWORD fState;
    DWORD Frame;
    COLORREF crEffect;
    } IMAGELISTDRAWPARAMS;
typedef IMAGELISTDRAWPARAMS *LPIMAGELISTDRAWPARAMS;
typedef struct tagIMAGEINFO
    {
    HBITMAP hbmImage;
    HBITMAP hbmMask;
    int Unused1;
    int Unused2;
    RECT rcImage;
    } IMAGEINFO;
typedef IMAGEINFO *LPIMAGEINFO;
WINCOMMCTRLAPI HRESULT WINAPI ImageList_CoCreateInstance(
         _In_ REFCLSID rclsid,
     _In_opt_ const IUnknown *punkOuter,
         _In_ REFIID riid,
  _Outptr_ void **ppv);
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IImageList;
    typedef struct IImageListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IImageList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IImageList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IImageList * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            IImageList * This,
            _In_ HBITMAP hbmImage,
            _In_opt_ HBITMAP hbmMask,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *ReplaceIcon )(
            IImageList * This,
            int i,
            _In_ HICON hicon,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *SetOverlayImage )(
            IImageList * This,
            int iImage,
            int iOverlay);
        HRESULT ( STDMETHODCALLTYPE *Replace )(
            IImageList * This,
            int i,
            _In_ HBITMAP hbmImage,
            _In_opt_ HBITMAP hbmMask);
        HRESULT ( STDMETHODCALLTYPE *AddMasked )(
            IImageList * This,
            _In_ HBITMAP hbmImage,
            COLORREF crMask,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *Draw )(
            IImageList * This,
            _In_ IMAGELISTDRAWPARAMS *pimldp);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IImageList * This,
            int i);
        HRESULT ( STDMETHODCALLTYPE *GetIcon )(
            IImageList * This,
            int i,
            UINT flags,
            _Out_ HICON *picon);
        HRESULT ( STDMETHODCALLTYPE *GetImageInfo )(
            IImageList * This,
            int i,
            _Out_ IMAGEINFO *pImageInfo);
        HRESULT ( STDMETHODCALLTYPE *Copy )(
            IImageList * This,
            int iDst,
            _In_ IUnknown *punkSrc,
            int iSrc,
            UINT uFlags);
        HRESULT ( STDMETHODCALLTYPE *Merge )(
            IImageList * This,
            int i1,
            _In_ IUnknown *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IImageList * This,
            REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetImageRect )(
            IImageList * This,
            int i,
            _Out_ RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetIconSize )(
            IImageList * This,
            _Out_ int *cx,
            _Out_ int *cy);
        HRESULT ( STDMETHODCALLTYPE *SetIconSize )(
            IImageList * This,
            int cx,
            int cy);
        HRESULT ( STDMETHODCALLTYPE *GetImageCount )(
            IImageList * This,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *SetImageCount )(
            IImageList * This,
            UINT uNewCount);
        HRESULT ( STDMETHODCALLTYPE *SetBkColor )(
            IImageList * This,
            COLORREF clrBk,
            _Out_ COLORREF *pclr);
        HRESULT ( STDMETHODCALLTYPE *GetBkColor )(
            IImageList * This,
            _Out_ COLORREF *pclr);
        HRESULT ( STDMETHODCALLTYPE *BeginDrag )(
            IImageList * This,
            int iTrack,
            int dxHotspot,
            int dyHotspot);
        HRESULT ( STDMETHODCALLTYPE *EndDrag )(
            IImageList * This);
        HRESULT ( STDMETHODCALLTYPE *DragEnter )(
            IImageList * This,
            _In_opt_ HWND hwndLock,
            int x,
            int y);
        HRESULT ( STDMETHODCALLTYPE *DragLeave )(
            IImageList * This,
            _In_opt_ HWND hwndLock);
        HRESULT ( STDMETHODCALLTYPE *DragMove )(
            IImageList * This,
            int x,
            int y);
        HRESULT ( STDMETHODCALLTYPE *SetDragCursorImage )(
            IImageList * This,
            _In_ IUnknown *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot);
        HRESULT ( STDMETHODCALLTYPE *DragShowNolock )(
            IImageList * This,
            BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetDragImage )(
            IImageList * This,
            _Out_opt_ POINT *ppt,
            _Out_opt_ POINT *pptHotspot,
            REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetItemFlags )(
            IImageList * This,
            int i,
            _Out_ DWORD *dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOverlayImage )(
            IImageList * This,
            int iOverlay,
            _Out_ int *piIndex);
        END_INTERFACE
    } IImageListVtbl;
    interface IImageList
    {
        CONST_VTBL struct IImageListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,hbmImage,hbmMask,pi) )
    ( (This)->lpVtbl -> ReplaceIcon(This,i,hicon,pi) )
    ( (This)->lpVtbl -> SetOverlayImage(This,iImage,iOverlay) )
    ( (This)->lpVtbl -> Replace(This,i,hbmImage,hbmMask) )
    ( (This)->lpVtbl -> AddMasked(This,hbmImage,crMask,pi) )
    ( (This)->lpVtbl -> Draw(This,pimldp) )
    ( (This)->lpVtbl -> Remove(This,i) )
    ( (This)->lpVtbl -> GetIcon(This,i,flags,picon) )
    ( (This)->lpVtbl -> GetImageInfo(This,i,pImageInfo) )
    ( (This)->lpVtbl -> Copy(This,iDst,punkSrc,iSrc,uFlags) )
    ( (This)->lpVtbl -> Merge(This,i1,punk2,i2,dx,dy,riid,ppv) )
    ( (This)->lpVtbl -> Clone(This,riid,ppv) )
    ( (This)->lpVtbl -> GetImageRect(This,i,prc) )
    ( (This)->lpVtbl -> GetIconSize(This,cx,cy) )
    ( (This)->lpVtbl -> SetIconSize(This,cx,cy) )
    ( (This)->lpVtbl -> GetImageCount(This,pi) )
    ( (This)->lpVtbl -> SetImageCount(This,uNewCount) )
    ( (This)->lpVtbl -> SetBkColor(This,clrBk,pclr) )
    ( (This)->lpVtbl -> GetBkColor(This,pclr) )
    ( (This)->lpVtbl -> BeginDrag(This,iTrack,dxHotspot,dyHotspot) )
    ( (This)->lpVtbl -> EndDrag(This) )
    ( (This)->lpVtbl -> DragEnter(This,hwndLock,x,y) )
    ( (This)->lpVtbl -> DragLeave(This,hwndLock) )
    ( (This)->lpVtbl -> DragMove(This,x,y) )
    ( (This)->lpVtbl -> SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) )
    ( (This)->lpVtbl -> DragShowNolock(This,fShow) )
    ( (This)->lpVtbl -> GetDragImage(This,ppt,pptHotspot,riid,ppv) )
    ( (This)->lpVtbl -> GetItemFlags(This,i,dwFlags) )
    ( (This)->lpVtbl -> GetOverlayImage(This,iOverlay,piIndex) )
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0001_v0_0_s_ifspec;
typedef struct tagIMAGELISTSTATS
    {
    DWORD cbSize;
    int cAlloc;
    int cUsed;
    int cStandby;
    } IMAGELISTSTATS;
EXTERN_C const IID IID_IImageList2;
    typedef struct IImageList2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IImageList2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IImageList2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IImageList2 * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            IImageList2 * This,
            _In_ HBITMAP hbmImage,
            _In_opt_ HBITMAP hbmMask,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *ReplaceIcon )(
            IImageList2 * This,
            int i,
            _In_ HICON hicon,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *SetOverlayImage )(
            IImageList2 * This,
            int iImage,
            int iOverlay);
        HRESULT ( STDMETHODCALLTYPE *Replace )(
            IImageList2 * This,
            int i,
            _In_ HBITMAP hbmImage,
            _In_opt_ HBITMAP hbmMask);
        HRESULT ( STDMETHODCALLTYPE *AddMasked )(
            IImageList2 * This,
            _In_ HBITMAP hbmImage,
            COLORREF crMask,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *Draw )(
            IImageList2 * This,
            _In_ IMAGELISTDRAWPARAMS *pimldp);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IImageList2 * This,
            int i);
        HRESULT ( STDMETHODCALLTYPE *GetIcon )(
            IImageList2 * This,
            int i,
            UINT flags,
            _Out_ HICON *picon);
        HRESULT ( STDMETHODCALLTYPE *GetImageInfo )(
            IImageList2 * This,
            int i,
            _Out_ IMAGEINFO *pImageInfo);
        HRESULT ( STDMETHODCALLTYPE *Copy )(
            IImageList2 * This,
            int iDst,
            _In_ IUnknown *punkSrc,
            int iSrc,
            UINT uFlags);
        HRESULT ( STDMETHODCALLTYPE *Merge )(
            IImageList2 * This,
            int i1,
            _In_ IUnknown *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IImageList2 * This,
            REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetImageRect )(
            IImageList2 * This,
            int i,
            _Out_ RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetIconSize )(
            IImageList2 * This,
            _Out_ int *cx,
            _Out_ int *cy);
        HRESULT ( STDMETHODCALLTYPE *SetIconSize )(
            IImageList2 * This,
            int cx,
            int cy);
        HRESULT ( STDMETHODCALLTYPE *GetImageCount )(
            IImageList2 * This,
            _Out_ int *pi);
        HRESULT ( STDMETHODCALLTYPE *SetImageCount )(
            IImageList2 * This,
            UINT uNewCount);
        HRESULT ( STDMETHODCALLTYPE *SetBkColor )(
            IImageList2 * This,
            COLORREF clrBk,
            _Out_ COLORREF *pclr);
        HRESULT ( STDMETHODCALLTYPE *GetBkColor )(
            IImageList2 * This,
            _Out_ COLORREF *pclr);
        HRESULT ( STDMETHODCALLTYPE *BeginDrag )(
            IImageList2 * This,
            int iTrack,
            int dxHotspot,
            int dyHotspot);
        HRESULT ( STDMETHODCALLTYPE *EndDrag )(
            IImageList2 * This);
        HRESULT ( STDMETHODCALLTYPE *DragEnter )(
            IImageList2 * This,
            _In_opt_ HWND hwndLock,
            int x,
            int y);
        HRESULT ( STDMETHODCALLTYPE *DragLeave )(
            IImageList2 * This,
            _In_opt_ HWND hwndLock);
        HRESULT ( STDMETHODCALLTYPE *DragMove )(
            IImageList2 * This,
            int x,
            int y);
        HRESULT ( STDMETHODCALLTYPE *SetDragCursorImage )(
            IImageList2 * This,
            _In_ IUnknown *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot);
        HRESULT ( STDMETHODCALLTYPE *DragShowNolock )(
            IImageList2 * This,
            BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetDragImage )(
            IImageList2 * This,
            _Out_opt_ POINT *ppt,
            _Out_opt_ POINT *pptHotspot,
            REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetItemFlags )(
            IImageList2 * This,
            int i,
            _Out_ DWORD *dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOverlayImage )(
            IImageList2 * This,
            int iOverlay,
            _Out_ int *piIndex);
        HRESULT ( STDMETHODCALLTYPE *Resize )(
            IImageList2 * This,
            int cxNewIconSize,
            int cyNewIconSize);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalSize )(
            IImageList2 * This,
                       int iImage,
                       DWORD dwFlags,
            _Out_ int *pcx,
            _Out_ int *pcy);
        HRESULT ( STDMETHODCALLTYPE *SetOriginalSize )(
            IImageList2 * This,
                       int iImage,
                       int cx,
                       int cy);
        HRESULT ( STDMETHODCALLTYPE *SetCallback )(
            IImageList2 * This,
            _In_opt_ IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *GetCallback )(
            IImageList2 * This,
                       REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ForceImagePresent )(
            IImageList2 * This,
                       int iImage,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DiscardImages )(
            IImageList2 * This,
                       int iFirstImage,
                       int iLastImage,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *PreloadImages )(
            IImageList2 * This,
            _In_ IMAGELISTDRAWPARAMS *pimldp);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IImageList2 * This,
            _Inout_ IMAGELISTSTATS *pils);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IImageList2 * This,
                       int cx,
                       int cy,
                       UINT flags,
                       int cInitial,
                       int cGrow);
        HRESULT ( STDMETHODCALLTYPE *Replace2 )(
            IImageList2 * This,
                       int i,
            _In_ HBITMAP hbmImage,
            _In_opt_ HBITMAP hbmMask,
            _In_opt_ IUnknown *punk,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ReplaceFromImageList )(
            IImageList2 * This,
                       int i,
            _In_ IImageList *pil,
                       int iSrc,
            _In_opt_ IUnknown *punk,
                       DWORD dwFlags);
        END_INTERFACE
    } IImageList2Vtbl;
    interface IImageList2
    {
        CONST_VTBL struct IImageList2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,hbmImage,hbmMask,pi) )
    ( (This)->lpVtbl -> ReplaceIcon(This,i,hicon,pi) )
    ( (This)->lpVtbl -> SetOverlayImage(This,iImage,iOverlay) )
    ( (This)->lpVtbl -> Replace(This,i,hbmImage,hbmMask) )
    ( (This)->lpVtbl -> AddMasked(This,hbmImage,crMask,pi) )
    ( (This)->lpVtbl -> Draw(This,pimldp) )
    ( (This)->lpVtbl -> Remove(This,i) )
    ( (This)->lpVtbl -> GetIcon(This,i,flags,picon) )
    ( (This)->lpVtbl -> GetImageInfo(This,i,pImageInfo) )
    ( (This)->lpVtbl -> Copy(This,iDst,punkSrc,iSrc,uFlags) )
    ( (This)->lpVtbl -> Merge(This,i1,punk2,i2,dx,dy,riid,ppv) )
    ( (This)->lpVtbl -> Clone(This,riid,ppv) )
    ( (This)->lpVtbl -> GetImageRect(This,i,prc) )
    ( (This)->lpVtbl -> GetIconSize(This,cx,cy) )
    ( (This)->lpVtbl -> SetIconSize(This,cx,cy) )
    ( (This)->lpVtbl -> GetImageCount(This,pi) )
    ( (This)->lpVtbl -> SetImageCount(This,uNewCount) )
    ( (This)->lpVtbl -> SetBkColor(This,clrBk,pclr) )
    ( (This)->lpVtbl -> GetBkColor(This,pclr) )
    ( (This)->lpVtbl -> BeginDrag(This,iTrack,dxHotspot,dyHotspot) )
    ( (This)->lpVtbl -> EndDrag(This) )
    ( (This)->lpVtbl -> DragEnter(This,hwndLock,x,y) )
    ( (This)->lpVtbl -> DragLeave(This,hwndLock) )
    ( (This)->lpVtbl -> DragMove(This,x,y) )
    ( (This)->lpVtbl -> SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) )
    ( (This)->lpVtbl -> DragShowNolock(This,fShow) )
    ( (This)->lpVtbl -> GetDragImage(This,ppt,pptHotspot,riid,ppv) )
    ( (This)->lpVtbl -> GetItemFlags(This,i,dwFlags) )
    ( (This)->lpVtbl -> GetOverlayImage(This,iOverlay,piIndex) )
    ( (This)->lpVtbl -> Resize(This,cxNewIconSize,cyNewIconSize) )
    ( (This)->lpVtbl -> GetOriginalSize(This,iImage,dwFlags,pcx,pcy) )
    ( (This)->lpVtbl -> SetOriginalSize(This,iImage,cx,cy) )
    ( (This)->lpVtbl -> SetCallback(This,punk) )
    ( (This)->lpVtbl -> GetCallback(This,riid,ppv) )
    ( (This)->lpVtbl -> ForceImagePresent(This,iImage,dwFlags) )
    ( (This)->lpVtbl -> DiscardImages(This,iFirstImage,iLastImage,dwFlags) )
    ( (This)->lpVtbl -> PreloadImages(This,pimldp) )
    ( (This)->lpVtbl -> GetStatistics(This,pils) )
    ( (This)->lpVtbl -> Initialize(This,cx,cy,flags,cInitial,cGrow) )
    ( (This)->lpVtbl -> Replace2(This,i,hbmImage,hbmMask,punk,dwFlags) )
    ( (This)->lpVtbl -> ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags) )
EXTERN_C const IID LIBID_CommonControlObjects;
EXTERN_C const CLSID CLSID_ImageList;
class DECLSPEC_UUID("7C476BA2-02B1-48f4-8048-B24619DDC058")
ImageList;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0003_v0_0_s_ifspec;
}
