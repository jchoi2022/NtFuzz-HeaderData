#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXpsOMPackageWriter3D IXpsOMPackageWriter3D;
typedef interface IXpsDocumentPackageTarget3D IXpsDocumentPackageTarget3D;
#include "oaidl.h"
#include "ocidl.h"
#include "XpsObjectModel_1.h"
extern "C"{
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_2_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsOMPackageWriter3D;
    typedef struct IXpsOMPackageWriter3DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMPackageWriter3D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMPackageWriter3D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMPackageWriter3D * This);
        HRESULT ( STDMETHODCALLTYPE *StartNewDocument )(
            IXpsOMPackageWriter3D * This,
                       IOpcPartUri *documentPartName,
                       IXpsOMPrintTicketResource *documentPrintTicket,
                       IXpsOMDocumentStructureResource *documentStructure,
                       IXpsOMSignatureBlockResourceCollection *signatureBlockResources,
                       IXpsOMPartUriCollection *restrictedFonts);
        HRESULT ( STDMETHODCALLTYPE *AddPage )(
            IXpsOMPackageWriter3D * This,
                       IXpsOMPage *page,
                       const XPS_SIZE *advisoryPageDimensions,
                       IXpsOMPartUriCollection *discardableResourceParts,
                       IXpsOMStoryFragmentsResource *storyFragments,
                       IXpsOMPrintTicketResource *pagePrintTicket,
                       IXpsOMImageResource *pageThumbnail);
        HRESULT ( STDMETHODCALLTYPE *AddResource )(
            IXpsOMPackageWriter3D * This,
                       IXpsOMResource *resource);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IXpsOMPackageWriter3D * This);
        HRESULT ( STDMETHODCALLTYPE *IsClosed )(
            IXpsOMPackageWriter3D * This,
                                BOOL *isClosed);
        HRESULT ( STDMETHODCALLTYPE *AddModelTexture )(
            IXpsOMPackageWriter3D * This,
                       IOpcPartUri *texturePartName,
                       IStream *textureData);
        HRESULT ( STDMETHODCALLTYPE *SetModelPrintTicket )(
            IXpsOMPackageWriter3D * This,
                       IOpcPartUri *printTicketPartName,
                       IStream *printTicketData);
        END_INTERFACE
    } IXpsOMPackageWriter3DVtbl;
    interface IXpsOMPackageWriter3D
    {
        CONST_VTBL struct IXpsOMPackageWriter3DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartNewDocument(This,documentPartName,documentPrintTicket,documentStructure,signatureBlockResources,restrictedFonts) )
    ( (This)->lpVtbl -> AddPage(This,page,advisoryPageDimensions,discardableResourceParts,storyFragments,pagePrintTicket,pageThumbnail) )
    ( (This)->lpVtbl -> AddResource(This,resource) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> IsClosed(This,isClosed) )
    ( (This)->lpVtbl -> AddModelTexture(This,texturePartName,textureData) )
    ( (This)->lpVtbl -> SetModelPrintTicket(This,printTicketPartName,printTicketData) )
EXTERN_C const IID IID_IXpsDocumentPackageTarget3D;
    typedef struct IXpsDocumentPackageTarget3DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsDocumentPackageTarget3D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsDocumentPackageTarget3D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsDocumentPackageTarget3D * This);
        HRESULT ( STDMETHODCALLTYPE *GetXpsOMPackageWriter3D )(
            IXpsDocumentPackageTarget3D * This,
                       IOpcPartUri *documentSequencePartName,
                       IOpcPartUri *discardControlPartName,
                       IOpcPartUri *modelPartName,
                       IStream *modelData,
                                IXpsOMPackageWriter3D **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *GetXpsOMFactory )(
            IXpsDocumentPackageTarget3D * This,
                                IXpsOMObjectFactory **xpsFactory);
        END_INTERFACE
    } IXpsDocumentPackageTarget3DVtbl;
    interface IXpsDocumentPackageTarget3D
    {
        CONST_VTBL struct IXpsDocumentPackageTarget3DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetXpsOMPackageWriter3D(This,documentSequencePartName,discardControlPartName,modelPartName,modelData,packageWriter) )
    ( (This)->lpVtbl -> GetXpsOMFactory(This,xpsFactory) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_2_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_2_0000_0002_v0_0_s_ifspec;
}
