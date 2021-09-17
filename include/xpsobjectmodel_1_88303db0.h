#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXpsOMObjectFactory1 IXpsOMObjectFactory1;
typedef interface IXpsOMPackage1 IXpsOMPackage1;
typedef interface IXpsOMPage1 IXpsOMPage1;
typedef interface IXpsDocumentPackageTarget IXpsDocumentPackageTarget;
typedef interface IXpsOMRemoteDictionaryResource1 IXpsOMRemoteDictionaryResource1;
#include "oaidl.h"
#include "ocidl.h"
#include "XpsObjectModel.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_1_0000_0000_0001
    {
        XPS_DOCUMENT_TYPE_UNSPECIFIED = 1,
        XPS_DOCUMENT_TYPE_XPS = ( XPS_DOCUMENT_TYPE_UNSPECIFIED + 1 ) ,
        XPS_DOCUMENT_TYPE_OPENXPS = ( XPS_DOCUMENT_TYPE_XPS + 1 )
    } XPS_DOCUMENT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_1_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsOMObjectFactory1;
    typedef struct IXpsOMObjectFactory1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMObjectFactory1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMObjectFactory1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMObjectFactory1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePackage )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageFromFile )(
            IXpsOMObjectFactory1 * This,
                               LPCWSTR filename,
                       BOOL reuseObjects,
                                IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageFromStream )(
            IXpsOMObjectFactory1 * This,
                       IStream *stream,
                       BOOL reuseObjects,
                                IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *CreateStoryFragmentsResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMStoryFragmentsResource **storyFragmentsResource);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentStructureResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMDocumentStructureResource **documentStructureResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSignatureBlockResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMSignatureBlockResource **signatureBlockResource);
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteDictionaryResource )(
            IXpsOMObjectFactory1 * This,
                       IXpsOMDictionary *dictionary,
                       IOpcPartUri *partUri,
                                IXpsOMRemoteDictionaryResource **remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteDictionaryResourceFromStream )(
            IXpsOMObjectFactory1 * This,
                       IStream *dictionaryMarkupStream,
                       IOpcPartUri *dictionaryPartUri,
                       IXpsOMPartResources *resources,
                                IXpsOMRemoteDictionaryResource **dictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *CreatePartResources )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMPartResources **partResources);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentSequence )(
            IXpsOMObjectFactory1 * This,
                       IOpcPartUri *partUri,
                                IXpsOMDocumentSequence **documentSequence);
        HRESULT ( STDMETHODCALLTYPE *CreateDocument )(
            IXpsOMObjectFactory1 * This,
                       IOpcPartUri *partUri,
                                IXpsOMDocument **document);
        HRESULT ( STDMETHODCALLTYPE *CreatePageReference )(
            IXpsOMObjectFactory1 * This,
                       const XPS_SIZE *advisoryPageDimensions,
                                IXpsOMPageReference **pageReference);
        HRESULT ( STDMETHODCALLTYPE *CreatePage )(
            IXpsOMObjectFactory1 * This,
                       const XPS_SIZE *pageDimensions,
                               LPCWSTR language,
                       IOpcPartUri *partUri,
                                IXpsOMPage **page);
        HRESULT ( STDMETHODCALLTYPE *CreatePageFromStream )(
            IXpsOMObjectFactory1 * This,
                       IStream *pageMarkupStream,
                       IOpcPartUri *partUri,
                       IXpsOMPartResources *resources,
                       BOOL reuseObjects,
                                IXpsOMPage **page);
        HRESULT ( STDMETHODCALLTYPE *CreateCanvas )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMCanvas **canvas);
        HRESULT ( STDMETHODCALLTYPE *CreateGlyphs )(
            IXpsOMObjectFactory1 * This,
                       IXpsOMFontResource *fontResource,
                                IXpsOMGlyphs **glyphs);
        HRESULT ( STDMETHODCALLTYPE *CreatePath )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMPath **path);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometry )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMGeometry **geometry);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryFigure )(
            IXpsOMObjectFactory1 * This,
                       const XPS_POINT *startPoint,
                                IXpsOMGeometryFigure **figure);
        HRESULT ( STDMETHODCALLTYPE *CreateMatrixTransform )(
            IXpsOMObjectFactory1 * This,
                       const XPS_MATRIX *matrix,
                                IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *CreateSolidColorBrush )(
            IXpsOMObjectFactory1 * This,
                       const XPS_COLOR *color,
                       IXpsOMColorProfileResource *colorProfile,
                                IXpsOMSolidColorBrush **solidColorBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateColorProfileResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMColorProfileResource **colorProfileResource);
        HRESULT ( STDMETHODCALLTYPE *CreateImageBrush )(
            IXpsOMObjectFactory1 * This,
                       IXpsOMImageResource *image,
                       const XPS_RECT *viewBox,
                       const XPS_RECT *viewPort,
                                IXpsOMImageBrush **imageBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateVisualBrush )(
            IXpsOMObjectFactory1 * This,
                       const XPS_RECT *viewBox,
                       const XPS_RECT *viewPort,
                                IXpsOMVisualBrush **visualBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateImageResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       XPS_IMAGE_TYPE contentType,
                       IOpcPartUri *partUri,
                                IXpsOMImageResource **imageResource);
        HRESULT ( STDMETHODCALLTYPE *CreatePrintTicketResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMPrintTicketResource **printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *CreateFontResource )(
            IXpsOMObjectFactory1 * This,
                       IStream *acquiredStream,
                       XPS_FONT_EMBEDDING fontEmbedding,
                       IOpcPartUri *partUri,
                       BOOL isObfSourceStream,
                                IXpsOMFontResource **fontResource);
        HRESULT ( STDMETHODCALLTYPE *CreateGradientStop )(
            IXpsOMObjectFactory1 * This,
                       const XPS_COLOR *color,
                       IXpsOMColorProfileResource *colorProfile,
                       FLOAT offset,
                                IXpsOMGradientStop **gradientStop);
        HRESULT ( STDMETHODCALLTYPE *CreateLinearGradientBrush )(
            IXpsOMObjectFactory1 * This,
                       IXpsOMGradientStop *gradStop1,
                       IXpsOMGradientStop *gradStop2,
                       const XPS_POINT *startPoint,
                       const XPS_POINT *endPoint,
                                IXpsOMLinearGradientBrush **linearGradientBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateRadialGradientBrush )(
            IXpsOMObjectFactory1 * This,
                       IXpsOMGradientStop *gradStop1,
                       IXpsOMGradientStop *gradStop2,
                       const XPS_POINT *centerPoint,
                       const XPS_POINT *gradientOrigin,
                       const XPS_SIZE *radiiSizes,
                                IXpsOMRadialGradientBrush **radialGradientBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateCoreProperties )(
            IXpsOMObjectFactory1 * This,
                       IOpcPartUri *partUri,
                                IXpsOMCoreProperties **coreProperties);
        HRESULT ( STDMETHODCALLTYPE *CreateDictionary )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMDictionary **dictionary);
        HRESULT ( STDMETHODCALLTYPE *CreatePartUriCollection )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMPartUriCollection **partUriCollection);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriterOnFile )(
            IXpsOMObjectFactory1 * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes,
                       BOOL optimizeMarkupSize,
                       XPS_INTERLEAVING interleaving,
                       IOpcPartUri *documentSequencePartName,
                       IXpsOMCoreProperties *coreProperties,
                       IXpsOMImageResource *packageThumbnail,
                       IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       IOpcPartUri *discardControlPartName,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriterOnStream )(
            IXpsOMObjectFactory1 * This,
                       ISequentialStream *outputStream,
                       BOOL optimizeMarkupSize,
                       XPS_INTERLEAVING interleaving,
                       IOpcPartUri *documentSequencePartName,
                       IXpsOMCoreProperties *coreProperties,
                       IXpsOMImageResource *packageThumbnail,
                       IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       IOpcPartUri *discardControlPartName,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePartUri )(
            IXpsOMObjectFactory1 * This,
                               LPCWSTR uri,
                                IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyStreamOnFile )(
            IXpsOMObjectFactory1 * This,
                               LPCWSTR filename,
                                IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentTypeFromFile )(
            IXpsOMObjectFactory1 * This,
                       LPCWSTR filename,
                                XPS_DOCUMENT_TYPE *documentType);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentTypeFromStream )(
            IXpsOMObjectFactory1 * This,
                       IStream *xpsDocumentStream,
                                XPS_DOCUMENT_TYPE *documentType);
        HRESULT ( STDMETHODCALLTYPE *ConvertHDPhotoToJpegXR )(
            IXpsOMObjectFactory1 * This,
                            IXpsOMImageResource *imageResource);
        HRESULT ( STDMETHODCALLTYPE *ConvertJpegXRToHDPhoto )(
            IXpsOMObjectFactory1 * This,
                            IXpsOMImageResource *imageResource);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriterOnFile1 )(
            IXpsOMObjectFactory1 * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes,
                       BOOL optimizeMarkupSize,
                       XPS_INTERLEAVING interleaving,
                       IOpcPartUri *documentSequencePartName,
                       IXpsOMCoreProperties *coreProperties,
                       IXpsOMImageResource *packageThumbnail,
                       IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       IOpcPartUri *discardControlPartName,
                       XPS_DOCUMENT_TYPE documentType,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriterOnStream1 )(
            IXpsOMObjectFactory1 * This,
                       ISequentialStream *outputStream,
                       BOOL optimizeMarkupSize,
                       XPS_INTERLEAVING interleaving,
                       IOpcPartUri *documentSequencePartName,
                       IXpsOMCoreProperties *coreProperties,
                       IXpsOMImageResource *packageThumbnail,
                       IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       IOpcPartUri *discardControlPartName,
                       XPS_DOCUMENT_TYPE documentType,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePackage1 )(
            IXpsOMObjectFactory1 * This,
                                IXpsOMPackage1 **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageFromStream1 )(
            IXpsOMObjectFactory1 * This,
                       IStream *stream,
                       BOOL reuseObjects,
                                IXpsOMPackage1 **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageFromFile1 )(
            IXpsOMObjectFactory1 * This,
                               LPCWSTR filename,
                       BOOL reuseObjects,
                                IXpsOMPackage1 **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePage1 )(
            IXpsOMObjectFactory1 * This,
                       const XPS_SIZE *pageDimensions,
                               LPCWSTR language,
                       IOpcPartUri *partUri,
                                IXpsOMPage1 **page);
        HRESULT ( STDMETHODCALLTYPE *CreatePageFromStream1 )(
            IXpsOMObjectFactory1 * This,
                       IStream *pageMarkupStream,
                       IOpcPartUri *partUri,
                       IXpsOMPartResources *resources,
                       BOOL reuseObjects,
                                IXpsOMPage1 **page);
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteDictionaryResourceFromStream1 )(
            IXpsOMObjectFactory1 * This,
                       IStream *dictionaryMarkupStream,
                       IOpcPartUri *partUri,
                       IXpsOMPartResources *resources,
                                IXpsOMRemoteDictionaryResource **dictionaryResource);
        END_INTERFACE
    } IXpsOMObjectFactory1Vtbl;
    interface IXpsOMObjectFactory1
    {
        CONST_VTBL struct IXpsOMObjectFactory1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePackage(This,package) )
    ( (This)->lpVtbl -> CreatePackageFromFile(This,filename,reuseObjects,package) )
    ( (This)->lpVtbl -> CreatePackageFromStream(This,stream,reuseObjects,package) )
    ( (This)->lpVtbl -> CreateStoryFragmentsResource(This,acquiredStream,partUri,storyFragmentsResource) )
    ( (This)->lpVtbl -> CreateDocumentStructureResource(This,acquiredStream,partUri,documentStructureResource) )
    ( (This)->lpVtbl -> CreateSignatureBlockResource(This,acquiredStream,partUri,signatureBlockResource) )
    ( (This)->lpVtbl -> CreateRemoteDictionaryResource(This,dictionary,partUri,remoteDictionaryResource) )
    ( (This)->lpVtbl -> CreateRemoteDictionaryResourceFromStream(This,dictionaryMarkupStream,dictionaryPartUri,resources,dictionaryResource) )
    ( (This)->lpVtbl -> CreatePartResources(This,partResources) )
    ( (This)->lpVtbl -> CreateDocumentSequence(This,partUri,documentSequence) )
    ( (This)->lpVtbl -> CreateDocument(This,partUri,document) )
    ( (This)->lpVtbl -> CreatePageReference(This,advisoryPageDimensions,pageReference) )
    ( (This)->lpVtbl -> CreatePage(This,pageDimensions,language,partUri,page) )
    ( (This)->lpVtbl -> CreatePageFromStream(This,pageMarkupStream,partUri,resources,reuseObjects,page) )
    ( (This)->lpVtbl -> CreateCanvas(This,canvas) )
    ( (This)->lpVtbl -> CreateGlyphs(This,fontResource,glyphs) )
    ( (This)->lpVtbl -> CreatePath(This,path) )
    ( (This)->lpVtbl -> CreateGeometry(This,geometry) )
    ( (This)->lpVtbl -> CreateGeometryFigure(This,startPoint,figure) )
    ( (This)->lpVtbl -> CreateMatrixTransform(This,matrix,transform) )
    ( (This)->lpVtbl -> CreateSolidColorBrush(This,color,colorProfile,solidColorBrush) )
    ( (This)->lpVtbl -> CreateColorProfileResource(This,acquiredStream,partUri,colorProfileResource) )
    ( (This)->lpVtbl -> CreateImageBrush(This,image,viewBox,viewPort,imageBrush) )
    ( (This)->lpVtbl -> CreateVisualBrush(This,viewBox,viewPort,visualBrush) )
    ( (This)->lpVtbl -> CreateImageResource(This,acquiredStream,contentType,partUri,imageResource) )
    ( (This)->lpVtbl -> CreatePrintTicketResource(This,acquiredStream,partUri,printTicketResource) )
    ( (This)->lpVtbl -> CreateFontResource(This,acquiredStream,fontEmbedding,partUri,isObfSourceStream,fontResource) )
    ( (This)->lpVtbl -> CreateGradientStop(This,color,colorProfile,offset,gradientStop) )
    ( (This)->lpVtbl -> CreateLinearGradientBrush(This,gradStop1,gradStop2,startPoint,endPoint,linearGradientBrush) )
    ( (This)->lpVtbl -> CreateRadialGradientBrush(This,gradStop1,gradStop2,centerPoint,gradientOrigin,radiiSizes,radialGradientBrush) )
    ( (This)->lpVtbl -> CreateCoreProperties(This,partUri,coreProperties) )
    ( (This)->lpVtbl -> CreateDictionary(This,dictionary) )
    ( (This)->lpVtbl -> CreatePartUriCollection(This,partUriCollection) )
    ( (This)->lpVtbl -> CreatePackageWriterOnFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter) )
    ( (This)->lpVtbl -> CreatePackageWriterOnStream(This,outputStream,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter) )
    ( (This)->lpVtbl -> CreatePartUri(This,uri,partUri) )
    ( (This)->lpVtbl -> CreateReadOnlyStreamOnFile(This,filename,stream) )
    ( (This)->lpVtbl -> GetDocumentTypeFromFile(This,filename,documentType) )
    ( (This)->lpVtbl -> GetDocumentTypeFromStream(This,xpsDocumentStream,documentType) )
    ( (This)->lpVtbl -> ConvertHDPhotoToJpegXR(This,imageResource) )
    ( (This)->lpVtbl -> ConvertJpegXRToHDPhoto(This,imageResource) )
    ( (This)->lpVtbl -> CreatePackageWriterOnFile1(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,documentType,packageWriter) )
    ( (This)->lpVtbl -> CreatePackageWriterOnStream1(This,outputStream,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,documentType,packageWriter) )
    ( (This)->lpVtbl -> CreatePackage1(This,package) )
    ( (This)->lpVtbl -> CreatePackageFromStream1(This,stream,reuseObjects,package) )
    ( (This)->lpVtbl -> CreatePackageFromFile1(This,filename,reuseObjects,package) )
    ( (This)->lpVtbl -> CreatePage1(This,pageDimensions,language,partUri,page) )
    ( (This)->lpVtbl -> CreatePageFromStream1(This,pageMarkupStream,partUri,resources,reuseObjects,page) )
    ( (This)->lpVtbl -> CreateRemoteDictionaryResourceFromStream1(This,dictionaryMarkupStream,partUri,resources,dictionaryResource) )
EXTERN_C const IID IID_IXpsOMPackage1;
    typedef struct IXpsOMPackage1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMPackage1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMPackage1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMPackage1 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetDocumentSequence )(
            IXpsOMPackage1 * This,
                                IXpsOMDocumentSequence **documentSequence);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentSequence )(
            IXpsOMPackage1 * This,
                       IXpsOMDocumentSequence *documentSequence);
        HRESULT ( STDMETHODCALLTYPE *GetCoreProperties )(
            IXpsOMPackage1 * This,
                                IXpsOMCoreProperties **coreProperties);
        HRESULT ( STDMETHODCALLTYPE *SetCoreProperties )(
            IXpsOMPackage1 * This,
                       IXpsOMCoreProperties *coreProperties);
        HRESULT ( STDMETHODCALLTYPE *GetDiscardControlPartName )(
            IXpsOMPackage1 * This,
                                IOpcPartUri **discardControlPartUri);
        HRESULT ( STDMETHODCALLTYPE *SetDiscardControlPartName )(
            IXpsOMPackage1 * This,
                       IOpcPartUri *discardControlPartUri);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailResource )(
            IXpsOMPackage1 * This,
                                IXpsOMImageResource **imageResource);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailResource )(
            IXpsOMPackage1 * This,
                       IXpsOMImageResource *imageResource);
        HRESULT ( STDMETHODCALLTYPE *WriteToFile )(
            IXpsOMPackage1 * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes,
                       BOOL optimizeMarkupSize);
        HRESULT ( STDMETHODCALLTYPE *WriteToStream )(
            IXpsOMPackage1 * This,
                       ISequentialStream *stream,
                       BOOL optimizeMarkupSize);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentType )(
            IXpsOMPackage1 * This,
                                XPS_DOCUMENT_TYPE *documentType);
        HRESULT ( STDMETHODCALLTYPE *WriteToFile1 )(
            IXpsOMPackage1 * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes,
                       BOOL optimizeMarkupSize,
                       XPS_DOCUMENT_TYPE documentType);
        HRESULT ( STDMETHODCALLTYPE *WriteToStream1 )(
            IXpsOMPackage1 * This,
                       ISequentialStream *outputStream,
                       BOOL optimizeMarkupSize,
                       XPS_DOCUMENT_TYPE documentType);
        END_INTERFACE
    } IXpsOMPackage1Vtbl;
    interface IXpsOMPackage1
    {
        CONST_VTBL struct IXpsOMPackage1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentSequence(This,documentSequence) )
    ( (This)->lpVtbl -> SetDocumentSequence(This,documentSequence) )
    ( (This)->lpVtbl -> GetCoreProperties(This,coreProperties) )
    ( (This)->lpVtbl -> SetCoreProperties(This,coreProperties) )
    ( (This)->lpVtbl -> GetDiscardControlPartName(This,discardControlPartUri) )
    ( (This)->lpVtbl -> SetDiscardControlPartName(This,discardControlPartUri) )
    ( (This)->lpVtbl -> GetThumbnailResource(This,imageResource) )
    ( (This)->lpVtbl -> SetThumbnailResource(This,imageResource) )
    ( (This)->lpVtbl -> WriteToFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize) )
    ( (This)->lpVtbl -> WriteToStream(This,stream,optimizeMarkupSize) )
    ( (This)->lpVtbl -> GetDocumentType(This,documentType) )
    ( (This)->lpVtbl -> WriteToFile1(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize,documentType) )
    ( (This)->lpVtbl -> WriteToStream1(This,outputStream,optimizeMarkupSize,documentType) )
EXTERN_C const IID IID_IXpsOMPage1;
    typedef struct IXpsOMPage1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMPage1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMPage1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMPage1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            IXpsOMPage1 * This,
                                IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            IXpsOMPage1 * This,
                       IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            IXpsOMPage1 * This,
                                IXpsOMPageReference **pageReference);
        HRESULT ( STDMETHODCALLTYPE *GetVisuals )(
            IXpsOMPage1 * This,
                                IXpsOMVisualCollection **visuals);
        HRESULT ( STDMETHODCALLTYPE *GetPageDimensions )(
            IXpsOMPage1 * This,
                                XPS_SIZE *pageDimensions);
        HRESULT ( STDMETHODCALLTYPE *SetPageDimensions )(
            IXpsOMPage1 * This,
                       const XPS_SIZE *pageDimensions);
        HRESULT ( STDMETHODCALLTYPE *GetContentBox )(
            IXpsOMPage1 * This,
                                XPS_RECT *contentBox);
        HRESULT ( STDMETHODCALLTYPE *SetContentBox )(
            IXpsOMPage1 * This,
                       const XPS_RECT *contentBox);
        HRESULT ( STDMETHODCALLTYPE *GetBleedBox )(
            IXpsOMPage1 * This,
                                XPS_RECT *bleedBox);
        HRESULT ( STDMETHODCALLTYPE *SetBleedBox )(
            IXpsOMPage1 * This,
                       const XPS_RECT *bleedBox);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            IXpsOMPage1 * This,
                                        LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            IXpsOMPage1 * This,
                               LPCWSTR language);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IXpsOMPage1 * This,
                                        LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IXpsOMPage1 * This,
                               LPCWSTR name);
        HRESULT ( STDMETHODCALLTYPE *GetIsHyperlinkTarget )(
            IXpsOMPage1 * This,
                                BOOL *isHyperlinkTarget);
        HRESULT ( STDMETHODCALLTYPE *SetIsHyperlinkTarget )(
            IXpsOMPage1 * This,
                       BOOL isHyperlinkTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDictionary )(
            IXpsOMPage1 * This,
                                IXpsOMDictionary **resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryLocal )(
            IXpsOMPage1 * This,
                                IXpsOMDictionary **resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *SetDictionaryLocal )(
            IXpsOMPage1 * This,
                       IXpsOMDictionary *resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryResource )(
            IXpsOMPage1 * This,
                                IXpsOMRemoteDictionaryResource **remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *SetDictionaryResource )(
            IXpsOMPage1 * This,
                       IXpsOMRemoteDictionaryResource *remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            IXpsOMPage1 * This,
                       ISequentialStream *stream,
                       BOOL optimizeMarkupSize);
        HRESULT ( STDMETHODCALLTYPE *GenerateUnusedLookupKey )(
            IXpsOMPage1 * This,
                       XPS_OBJECT_TYPE type,
                                        LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IXpsOMPage1 * This,
                                IXpsOMPage **page);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentType )(
            IXpsOMPage1 * This,
                                XPS_DOCUMENT_TYPE *documentType);
        HRESULT ( STDMETHODCALLTYPE *Write1 )(
            IXpsOMPage1 * This,
                       ISequentialStream *stream,
                       BOOL optimizeMarkupSize,
                       XPS_DOCUMENT_TYPE documentType);
        END_INTERFACE
    } IXpsOMPage1Vtbl;
    interface IXpsOMPage1
    {
        CONST_VTBL struct IXpsOMPage1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,pageReference) )
    ( (This)->lpVtbl -> GetVisuals(This,visuals) )
    ( (This)->lpVtbl -> GetPageDimensions(This,pageDimensions) )
    ( (This)->lpVtbl -> SetPageDimensions(This,pageDimensions) )
    ( (This)->lpVtbl -> GetContentBox(This,contentBox) )
    ( (This)->lpVtbl -> SetContentBox(This,contentBox) )
    ( (This)->lpVtbl -> GetBleedBox(This,bleedBox) )
    ( (This)->lpVtbl -> SetBleedBox(This,bleedBox) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> SetName(This,name) )
    ( (This)->lpVtbl -> GetIsHyperlinkTarget(This,isHyperlinkTarget) )
    ( (This)->lpVtbl -> SetIsHyperlinkTarget(This,isHyperlinkTarget) )
    ( (This)->lpVtbl -> GetDictionary(This,resourceDictionary) )
    ( (This)->lpVtbl -> GetDictionaryLocal(This,resourceDictionary) )
    ( (This)->lpVtbl -> SetDictionaryLocal(This,resourceDictionary) )
    ( (This)->lpVtbl -> GetDictionaryResource(This,remoteDictionaryResource) )
    ( (This)->lpVtbl -> SetDictionaryResource(This,remoteDictionaryResource) )
    ( (This)->lpVtbl -> Write(This,stream,optimizeMarkupSize) )
    ( (This)->lpVtbl -> GenerateUnusedLookupKey(This,type,key) )
    ( (This)->lpVtbl -> Clone(This,page) )
    ( (This)->lpVtbl -> GetDocumentType(This,documentType) )
    ( (This)->lpVtbl -> Write1(This,stream,optimizeMarkupSize,documentType) )
EXTERN_C const IID IID_IXpsDocumentPackageTarget;
    typedef struct IXpsDocumentPackageTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsDocumentPackageTarget * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsDocumentPackageTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsDocumentPackageTarget * This);
        HRESULT ( STDMETHODCALLTYPE *GetXpsOMPackageWriter )(
            IXpsDocumentPackageTarget * This,
                       IOpcPartUri *documentSequencePartName,
                       IOpcPartUri *discardControlPartName,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *GetXpsOMFactory )(
            IXpsDocumentPackageTarget * This,
                                IXpsOMObjectFactory **xpsFactory);
        HRESULT ( STDMETHODCALLTYPE *GetXpsType )(
            IXpsDocumentPackageTarget * This,
                                XPS_DOCUMENT_TYPE *documentType);
        END_INTERFACE
    } IXpsDocumentPackageTargetVtbl;
    interface IXpsDocumentPackageTarget
    {
        CONST_VTBL struct IXpsDocumentPackageTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetXpsOMPackageWriter(This,documentSequencePartName,discardControlPartName,packageWriter) )
    ( (This)->lpVtbl -> GetXpsOMFactory(This,xpsFactory) )
    ( (This)->lpVtbl -> GetXpsType(This,documentType) )
EXTERN_C const IID IID_IXpsOMRemoteDictionaryResource1;
    typedef struct IXpsOMRemoteDictionaryResource1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMRemoteDictionaryResource1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMRemoteDictionaryResource1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMRemoteDictionaryResource1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            IXpsOMRemoteDictionaryResource1 * This,
                                IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            IXpsOMRemoteDictionaryResource1 * This,
                       IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetDictionary )(
            IXpsOMRemoteDictionaryResource1 * This,
                                IXpsOMDictionary **dictionary);
        HRESULT ( STDMETHODCALLTYPE *SetDictionary )(
            IXpsOMRemoteDictionaryResource1 * This,
                       IXpsOMDictionary *dictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentType )(
            IXpsOMRemoteDictionaryResource1 * This,
                                XPS_DOCUMENT_TYPE *documentType);
        HRESULT ( STDMETHODCALLTYPE *Write1 )(
            IXpsOMRemoteDictionaryResource1 * This,
                       ISequentialStream *stream,
                       XPS_DOCUMENT_TYPE documentType);
        END_INTERFACE
    } IXpsOMRemoteDictionaryResource1Vtbl;
    interface IXpsOMRemoteDictionaryResource1
    {
        CONST_VTBL struct IXpsOMRemoteDictionaryResource1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetDictionary(This,dictionary) )
    ( (This)->lpVtbl -> SetDictionary(This,dictionary) )
    ( (This)->lpVtbl -> GetDocumentType(This,documentType) )
    ( (This)->lpVtbl -> Write1(This,stream,documentType) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_1_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_1_0000_0005_v0_0_s_ifspec;
}
