#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPrintPreviewPageCollection IPrintPreviewPageCollection;
typedef interface IPrintDocumentPageSource IPrintDocumentPageSource;
#include "oaidl.h"
#include "ocidl.h"
#include "Inspectable.h"
#include "DocumentTarget.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_documentsource_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_documentsource_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintPreviewPageCollection;
    typedef struct IPrintPreviewPageCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintPreviewPageCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintPreviewPageCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintPreviewPageCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Paginate )(
            __RPC__in IPrintPreviewPageCollection * This,
                       UINT32 currentJobPage,
                       __RPC__in_opt IInspectable *printTaskOptions);
        HRESULT ( STDMETHODCALLTYPE *MakePage )(
            __RPC__in IPrintPreviewPageCollection * This,
                       UINT32 desiredJobPage,
                       FLOAT width,
                       FLOAT height);
        END_INTERFACE
    } IPrintPreviewPageCollectionVtbl;
    interface IPrintPreviewPageCollection
    {
        CONST_VTBL struct IPrintPreviewPageCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Paginate(This,currentJobPage,printTaskOptions) )
    ( (This)->lpVtbl -> MakePage(This,desiredJobPage,width,height) )
EXTERN_C const IID IID_IPrintDocumentPageSource;
    typedef struct IPrintDocumentPageSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintDocumentPageSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintDocumentPageSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintDocumentPageSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPreviewPageCollection )(
            __RPC__in IPrintDocumentPageSource * This,
                       __RPC__in_opt IPrintDocumentPackageTarget *docPackageTarget,
                        __RPC__deref_out_opt IPrintPreviewPageCollection **docPageCollection);
        HRESULT ( STDMETHODCALLTYPE *MakeDocument )(
            __RPC__in IPrintDocumentPageSource * This,
                       __RPC__in_opt IInspectable *printTaskOptions,
                       __RPC__in_opt IPrintDocumentPackageTarget *docPackageTarget);
        END_INTERFACE
    } IPrintDocumentPageSourceVtbl;
    interface IPrintDocumentPageSource
    {
        CONST_VTBL struct IPrintDocumentPageSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPreviewPageCollection(This,docPackageTarget,docPageCollection) )
    ( (This)->lpVtbl -> MakeDocument(This,printTaskOptions,docPackageTarget) )
EXTERN_C const IID LIBID_PrintDocumentSource;
extern RPC_IF_HANDLE __MIDL_itf_documentsource_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_documentsource_0000_0003_v0_0_s_ifspec;
}
