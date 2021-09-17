#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPrintPreviewDxgiPackageTarget IPrintPreviewDxgiPackageTarget;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi.h"
extern "C"{
typedef
enum PageCountType
    {
        FinalPageCount = 0,
        IntermediatePageCount = ( FinalPageCount + 1 )
    } PageCountType;
extern RPC_IF_HANDLE __MIDL_itf_printpreview_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printpreview_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintPreviewDxgiPackageTarget;
    typedef struct IPrintPreviewDxgiPackageTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintPreviewDxgiPackageTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintPreviewDxgiPackageTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintPreviewDxgiPackageTarget * This);
        HRESULT ( STDMETHODCALLTYPE *SetJobPageCount )(
            __RPC__in IPrintPreviewDxgiPackageTarget * This,
                       PageCountType countType,
                       UINT32 count);
        HRESULT ( STDMETHODCALLTYPE *DrawPage )(
            __RPC__in IPrintPreviewDxgiPackageTarget * This,
                       UINT32 jobPageNumber,
                       __RPC__in_opt IDXGISurface *pageImage,
                       FLOAT dpiX,
                       FLOAT dpiY);
        HRESULT ( STDMETHODCALLTYPE *InvalidatePreview )(
            __RPC__in IPrintPreviewDxgiPackageTarget * This);
        END_INTERFACE
    } IPrintPreviewDxgiPackageTargetVtbl;
    interface IPrintPreviewDxgiPackageTarget
    {
        CONST_VTBL struct IPrintPreviewDxgiPackageTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetJobPageCount(This,countType,count) )
    ( (This)->lpVtbl -> DrawPage(This,jobPageNumber,pageImage,dpiX,dpiY) )
    ( (This)->lpVtbl -> InvalidatePreview(This) )
extern RPC_IF_HANDLE __MIDL_itf_printpreview_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printpreview_0000_0001_v0_0_s_ifspec;
}
