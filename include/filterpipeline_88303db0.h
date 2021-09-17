#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPrintReadStream IPrintReadStream;
typedef interface IPrintWriteStream IPrintWriteStream;
typedef interface IPrintWriteStreamFlush IPrintWriteStreamFlush;
typedef interface IInterFilterCommunicator IInterFilterCommunicator;
typedef interface IPrintPipelineManagerControl IPrintPipelineManagerControl;
typedef interface IPrintPipelinePropertyBag IPrintPipelinePropertyBag;
typedef interface IPrintPipelineProgressReport IPrintPipelineProgressReport;
typedef interface IPrintClassObjectFactory IPrintClassObjectFactory;
typedef interface IPrintPipelineFilter IPrintPipelineFilter;
typedef interface IXpsDocumentProvider IXpsDocumentProvider;
typedef interface IXpsDocumentConsumer IXpsDocumentConsumer;
typedef interface IXpsDocument IXpsDocument;
typedef interface IFixedDocumentSequence IFixedDocumentSequence;
typedef interface IFixedDocument IFixedDocument;
typedef interface IPartBase IPartBase;
typedef interface IFixedPage IFixedPage;
typedef interface IPartImage IPartImage;
typedef interface IPartFont IPartFont;
typedef interface IPartFont2 IPartFont2;
typedef interface IPartThumbnail IPartThumbnail;
typedef interface IPartPrintTicket IPartPrintTicket;
typedef interface IPartColorProfile IPartColorProfile;
typedef interface IPartResourceDictionary IPartResourceDictionary;
typedef interface IXpsPartIterator IXpsPartIterator;
typedef interface IPrintReadStreamFactory IPrintReadStreamFactory;
typedef interface IPartDiscardControl IPartDiscardControl;
#include "oaidl.h"
#include "imgerror.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_filterpipeline_0000_0000_0001
    {
        Compression_NotCompressed = 0,
        Compression_Normal = ( Compression_NotCompressed + 1 ) ,
        Compression_Small = ( Compression_Normal + 1 ) ,
        Compression_Fast = ( Compression_Small + 1 )
    } EXpsCompressionOptions;
typedef
enum __MIDL___MIDL_itf_filterpipeline_0000_0000_0002
    {
        Font_Normal = 0,
        Font_Obfusticate = ( Font_Normal + 1 )
    } EXpsFontOptions;
typedef
enum __MIDL___MIDL_itf_filterpipeline_0000_0000_0003
    {
        XpsJob_DocumentSequenceAdded = 0,
        XpsJob_FixedDocumentAdded = ( XpsJob_DocumentSequenceAdded + 1 ) ,
        XpsJob_FixedPageAdded = ( XpsJob_FixedDocumentAdded + 1 )
    } EXpsJobConsumption;
typedef
enum __MIDL___MIDL_itf_filterpipeline_0000_0000_0004
    {
        Xps_Restricted_Font_Installable = 0,
        Xps_Restricted_Font_NoEmbedding = 0x2,
        Xps_Restricted_Font_PreviewPrint = 0x4,
        Xps_Restricted_Font_Editable = 0x8
    } EXpsFontRestriction;
HRESULT
WINAPI
DrvPopulateFilterServices(
    _In_ IPrintPipelinePropertyBag *pPropertyBag
    );
extern RPC_IF_HANDLE __MIDL_itf_filterpipeline_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filterpipeline_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintReadStream;
    typedef struct IPrintReadStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintReadStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintReadStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintReadStream * This);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IPrintReadStream * This,
            _In_ LONGLONG dlibMove,
            _In_ DWORD dwOrigin,
            _Out_opt_ ULONGLONG *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *ReadBytes )(
            IPrintReadStream * This,
            _Out_writes_bytes_to_(cbRequested, *pcbRead) void *pvBuffer,
            _In_ ULONG cbRequested,
            _Out_ ULONG *pcbRead,
            _Out_ BOOL *pbEndOfFile);
        END_INTERFACE
    } IPrintReadStreamVtbl;
    interface IPrintReadStream
    {
        CONST_VTBL struct IPrintReadStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> ReadBytes(This,pvBuffer,cbRequested,pcbRead,pbEndOfFile) )
EXTERN_C const IID IID_IPrintWriteStream;
    typedef struct IPrintWriteStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintWriteStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintWriteStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintWriteStream * This);
        HRESULT ( STDMETHODCALLTYPE *WriteBytes )(
            IPrintWriteStream * This,
            _In_reads_bytes_(cbBuffer) const void *pvBuffer,
            _In_ ULONG cbBuffer,
            _Out_ ULONG *pcbWritten);
        void ( STDMETHODCALLTYPE *Close )(
            IPrintWriteStream * This);
        END_INTERFACE
    } IPrintWriteStreamVtbl;
    interface IPrintWriteStream
    {
        CONST_VTBL struct IPrintWriteStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WriteBytes(This,pvBuffer,cbBuffer,pcbWritten) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IPrintWriteStreamFlush;
    typedef struct IPrintWriteStreamFlushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintWriteStreamFlush * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintWriteStreamFlush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintWriteStreamFlush * This);
        HRESULT ( STDMETHODCALLTYPE *FlushData )(
            IPrintWriteStreamFlush * This);
        END_INTERFACE
    } IPrintWriteStreamFlushVtbl;
    interface IPrintWriteStreamFlush
    {
        CONST_VTBL struct IPrintWriteStreamFlushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FlushData(This) )
EXTERN_C const IID IID_IInterFilterCommunicator;
    typedef struct IInterFilterCommunicatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInterFilterCommunicator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInterFilterCommunicator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInterFilterCommunicator * This);
        HRESULT ( STDMETHODCALLTYPE *RequestReader )(
            IInterFilterCommunicator * This,
            _Out_ void **ppIReader);
        HRESULT ( STDMETHODCALLTYPE *RequestWriter )(
            IInterFilterCommunicator * This,
            _Out_ void **ppIWriter);
        END_INTERFACE
    } IInterFilterCommunicatorVtbl;
    interface IInterFilterCommunicator
    {
        CONST_VTBL struct IInterFilterCommunicatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestReader(This,ppIReader) )
    ( (This)->lpVtbl -> RequestWriter(This,ppIWriter) )
EXTERN_C const IID IID_IPrintPipelineManagerControl;
    typedef struct IPrintPipelineManagerControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintPipelineManagerControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintPipelineManagerControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintPipelineManagerControl * This);
        HRESULT ( STDMETHODCALLTYPE *RequestShutdown )(
            IPrintPipelineManagerControl * This,
            _In_ HRESULT hrReason,
            _In_ IImgErrorInfo *pReason);
        HRESULT ( STDMETHODCALLTYPE *FilterFinished )(
            IPrintPipelineManagerControl * This);
        END_INTERFACE
    } IPrintPipelineManagerControlVtbl;
    interface IPrintPipelineManagerControl
    {
        CONST_VTBL struct IPrintPipelineManagerControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestShutdown(This,hrReason,pReason) )
    ( (This)->lpVtbl -> FilterFinished(This) )
EXTERN_C const IID IID_IPrintPipelinePropertyBag;
    typedef struct IPrintPipelinePropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintPipelinePropertyBag * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintPipelinePropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintPipelinePropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *AddProperty )(
            IPrintPipelinePropertyBag * This,
            _In_z_ const wchar_t *pszName,
            _In_ const VARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IPrintPipelinePropertyBag * This,
            _In_z_ const wchar_t *pszName,
            _Out_ VARIANT *pVar);
        BOOL ( STDMETHODCALLTYPE *DeleteProperty )(
            IPrintPipelinePropertyBag * This,
            _In_z_ const wchar_t *pszName);
        END_INTERFACE
    } IPrintPipelinePropertyBagVtbl;
    interface IPrintPipelinePropertyBag
    {
        CONST_VTBL struct IPrintPipelinePropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddProperty(This,pszName,pVar) )
    ( (This)->lpVtbl -> GetProperty(This,pszName,pVar) )
    ( (This)->lpVtbl -> DeleteProperty(This,pszName) )
EXTERN_C const IID IID_IPrintPipelineProgressReport;
    typedef struct IPrintPipelineProgressReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintPipelineProgressReport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintPipelineProgressReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintPipelineProgressReport * This);
        HRESULT ( STDMETHODCALLTYPE *ReportProgress )(
            IPrintPipelineProgressReport * This,
            _In_ EXpsJobConsumption update);
        END_INTERFACE
    } IPrintPipelineProgressReportVtbl;
    interface IPrintPipelineProgressReport
    {
        CONST_VTBL struct IPrintPipelineProgressReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportProgress(This,update) )
EXTERN_C const IID IID_IPrintClassObjectFactory;
    typedef struct IPrintClassObjectFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintClassObjectFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintClassObjectFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintClassObjectFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrintClassObject )(
            IPrintClassObjectFactory * This,
            _In_z_ const wchar_t *pszPrinterName,
            _In_ REFIID riid,
            _Outptr_ void **ppNewObject);
        END_INTERFACE
    } IPrintClassObjectFactoryVtbl;
    interface IPrintClassObjectFactory
    {
        CONST_VTBL struct IPrintClassObjectFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrintClassObject(This,pszPrinterName,riid,ppNewObject) )
EXTERN_C const IID IID_IPrintPipelineFilter;
    typedef struct IPrintPipelineFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintPipelineFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintPipelineFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintPipelineFilter * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeFilter )(
            IPrintPipelineFilter * This,
            _In_ IInterFilterCommunicator *pINegotiation,
            _In_ IPrintPipelinePropertyBag *pIPropertyBag,
            _In_ IPrintPipelineManagerControl *pIPipelineControl);
        HRESULT ( STDMETHODCALLTYPE *ShutdownOperation )(
            IPrintPipelineFilter * This);
        HRESULT ( STDMETHODCALLTYPE *StartOperation )(
            IPrintPipelineFilter * This);
        END_INTERFACE
    } IPrintPipelineFilterVtbl;
    interface IPrintPipelineFilter
    {
        CONST_VTBL struct IPrintPipelineFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeFilter(This,pINegotiation,pIPropertyBag,pIPipelineControl) )
    ( (This)->lpVtbl -> ShutdownOperation(This) )
    ( (This)->lpVtbl -> StartOperation(This) )
EXTERN_C const IID IID_IXpsDocumentProvider;
    typedef struct IXpsDocumentProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsDocumentProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsDocumentProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsDocumentProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetXpsPart )(
            IXpsDocumentProvider * This,
            _Outptr_ IUnknown **ppIXpsPart);
        END_INTERFACE
    } IXpsDocumentProviderVtbl;
    interface IXpsDocumentProvider
    {
        CONST_VTBL struct IXpsDocumentProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetXpsPart(This,ppIXpsPart) )
EXTERN_C const IID IID_IXpsDocumentConsumer;
    typedef struct IXpsDocumentConsumerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsDocumentConsumer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsDocumentConsumer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsDocumentConsumer * This);
        HRESULT ( STDMETHODCALLTYPE *SendXpsUnknown )(
            IXpsDocumentConsumer * This,
            _In_ IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *SendXpsDocument )(
            IXpsDocumentConsumer * This,
            _In_ IXpsDocument *pIXpsDocument);
        HRESULT ( STDMETHODCALLTYPE *SendFixedDocumentSequence )(
            IXpsDocumentConsumer * This,
            _In_ IFixedDocumentSequence *pIFixedDocumentSequence);
        HRESULT ( STDMETHODCALLTYPE *SendFixedDocument )(
            IXpsDocumentConsumer * This,
            _In_ IFixedDocument *pIFixedDocument);
        HRESULT ( STDMETHODCALLTYPE *SendFixedPage )(
            IXpsDocumentConsumer * This,
            _In_ IFixedPage *pIFixedPage);
        HRESULT ( STDMETHODCALLTYPE *CloseSender )(
            IXpsDocumentConsumer * This);
        HRESULT ( STDMETHODCALLTYPE *GetNewEmptyPart )(
            IXpsDocumentConsumer * This,
            _In_z_ const wchar_t *uri,
            _In_ REFIID riid,
            _Outptr_ void **ppNewObject,
            _Outptr_ IPrintWriteStream **ppWriteStream);
        END_INTERFACE
    } IXpsDocumentConsumerVtbl;
    interface IXpsDocumentConsumer
    {
        CONST_VTBL struct IXpsDocumentConsumerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendXpsUnknown(This,pUnknown) )
    ( (This)->lpVtbl -> SendXpsDocument(This,pIXpsDocument) )
    ( (This)->lpVtbl -> SendFixedDocumentSequence(This,pIFixedDocumentSequence) )
    ( (This)->lpVtbl -> SendFixedDocument(This,pIFixedDocument) )
    ( (This)->lpVtbl -> SendFixedPage(This,pIFixedPage) )
    ( (This)->lpVtbl -> CloseSender(This) )
    ( (This)->lpVtbl -> GetNewEmptyPart(This,uri,riid,ppNewObject,ppWriteStream) )
EXTERN_C const IID IID_IXpsDocument;
    typedef struct IXpsDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsDocument * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            IXpsDocument * This,
            _Outptr_ IPartThumbnail **ppThumbnail);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnail )(
            IXpsDocument * This,
            _In_ IPartThumbnail *pThumbnail);
        END_INTERFACE
    } IXpsDocumentVtbl;
    interface IXpsDocument
    {
        CONST_VTBL struct IXpsDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetThumbnail(This,ppThumbnail) )
    ( (This)->lpVtbl -> SetThumbnail(This,pThumbnail) )
EXTERN_C const IID IID_IFixedDocumentSequence;
    typedef struct IFixedDocumentSequenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFixedDocumentSequence * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFixedDocumentSequence * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFixedDocumentSequence * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IFixedDocumentSequence * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetPrintTicket )(
            IFixedDocumentSequence * This,
            _Outptr_ IPartPrintTicket **ppPrintTicket);
        HRESULT ( STDMETHODCALLTYPE *SetPrintTicket )(
            IFixedDocumentSequence * This,
            _In_ IPartPrintTicket *pPrintTicket);
        END_INTERFACE
    } IFixedDocumentSequenceVtbl;
    interface IFixedDocumentSequence
    {
        CONST_VTBL struct IFixedDocumentSequenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetPrintTicket(This,ppPrintTicket) )
    ( (This)->lpVtbl -> SetPrintTicket(This,pPrintTicket) )
EXTERN_C const IID IID_IFixedDocument;
    typedef struct IFixedDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFixedDocument * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFixedDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFixedDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IFixedDocument * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetPrintTicket )(
            IFixedDocument * This,
            _Outptr_ IPartPrintTicket **ppPrintTicket);
        HRESULT ( STDMETHODCALLTYPE *SetPrintTicket )(
            IFixedDocument * This,
            _In_ IPartPrintTicket *pPrintTicket);
        END_INTERFACE
    } IFixedDocumentVtbl;
    interface IFixedDocument
    {
        CONST_VTBL struct IFixedDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetPrintTicket(This,ppPrintTicket) )
    ( (This)->lpVtbl -> SetPrintTicket(This,pPrintTicket) )
EXTERN_C const IID IID_IPartBase;
    typedef struct IPartBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartBase * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartBase * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartBase * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartBase * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartBase * This,
            _In_ EXpsCompressionOptions compression);
        END_INTERFACE
    } IPartBaseVtbl;
    interface IPartBase
    {
        CONST_VTBL struct IPartBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
EXTERN_C const IID IID_IFixedPage;
    typedef struct IFixedPageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFixedPage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFixedPage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFixedPage * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IFixedPage * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IFixedPage * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IFixedPage * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IFixedPage * This,
            _In_ EXpsCompressionOptions compression);
        HRESULT ( STDMETHODCALLTYPE *GetPrintTicket )(
            IFixedPage * This,
            _Outptr_ IPartPrintTicket **ppPrintTicket);
        HRESULT ( STDMETHODCALLTYPE *GetPagePart )(
            IFixedPage * This,
            _In_z_ const wchar_t *uri,
            _Outptr_ IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *GetWriteStream )(
            IFixedPage * This,
            _Outptr_ IPrintWriteStream **ppWriteStream);
        HRESULT ( STDMETHODCALLTYPE *SetPrintTicket )(
            IFixedPage * This,
            _In_ IPartPrintTicket *ppPrintTicket);
        HRESULT ( STDMETHODCALLTYPE *SetPagePart )(
            IFixedPage * This,
            _In_ IUnknown *pUnk);
        HRESULT ( STDMETHODCALLTYPE *DeleteResource )(
            IFixedPage * This,
            _In_z_ const wchar_t *uri);
        HRESULT ( STDMETHODCALLTYPE *GetXpsPartIterator )(
            IFixedPage * This,
            _Outptr_ IXpsPartIterator **pXpsPartIt);
        END_INTERFACE
    } IFixedPageVtbl;
    interface IFixedPage
    {
        CONST_VTBL struct IFixedPageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
    ( (This)->lpVtbl -> GetPrintTicket(This,ppPrintTicket) )
    ( (This)->lpVtbl -> GetPagePart(This,uri,ppUnk) )
    ( (This)->lpVtbl -> GetWriteStream(This,ppWriteStream) )
    ( (This)->lpVtbl -> SetPrintTicket(This,ppPrintTicket) )
    ( (This)->lpVtbl -> SetPagePart(This,pUnk) )
    ( (This)->lpVtbl -> DeleteResource(This,uri) )
    ( (This)->lpVtbl -> GetXpsPartIterator(This,pXpsPartIt) )
EXTERN_C const IID IID_IPartImage;
    typedef struct IPartImageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartImage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartImage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartImage * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartImage * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartImage * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartImage * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartImage * This,
            _In_ EXpsCompressionOptions compression);
        HRESULT ( STDMETHODCALLTYPE *GetImageProperties )(
            IPartImage * This,
            _Out_ BSTR *pContentType);
        HRESULT ( STDMETHODCALLTYPE *SetImageContent )(
            IPartImage * This,
            _In_z_ const wchar_t *pContentType);
        END_INTERFACE
    } IPartImageVtbl;
    interface IPartImage
    {
        CONST_VTBL struct IPartImageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
    ( (This)->lpVtbl -> GetImageProperties(This,pContentType) )
    ( (This)->lpVtbl -> SetImageContent(This,pContentType) )
EXTERN_C const IID IID_IPartFont;
    typedef struct IPartFontVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartFont * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartFont * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartFont * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartFont * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartFont * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartFont * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartFont * This,
            _In_ EXpsCompressionOptions compression);
        HRESULT ( STDMETHODCALLTYPE *GetFontProperties )(
            IPartFont * This,
            _Out_ BSTR *pContentType,
            _Out_ EXpsFontOptions *pFontOptions);
        HRESULT ( STDMETHODCALLTYPE *SetFontContent )(
            IPartFont * This,
            _In_z_ const wchar_t *pContentType);
        HRESULT ( STDMETHODCALLTYPE *SetFontOptions )(
            IPartFont * This,
            _In_ EXpsFontOptions options);
        END_INTERFACE
    } IPartFontVtbl;
    interface IPartFont
    {
        CONST_VTBL struct IPartFontVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
    ( (This)->lpVtbl -> GetFontProperties(This,pContentType,pFontOptions) )
    ( (This)->lpVtbl -> SetFontContent(This,pContentType) )
    ( (This)->lpVtbl -> SetFontOptions(This,options) )
EXTERN_C const IID IID_IPartFont2;
    typedef struct IPartFont2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartFont2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartFont2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartFont2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartFont2 * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartFont2 * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartFont2 * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartFont2 * This,
            _In_ EXpsCompressionOptions compression);
        HRESULT ( STDMETHODCALLTYPE *GetFontProperties )(
            IPartFont2 * This,
            _Out_ BSTR *pContentType,
            _Out_ EXpsFontOptions *pFontOptions);
        HRESULT ( STDMETHODCALLTYPE *SetFontContent )(
            IPartFont2 * This,
            _In_z_ const wchar_t *pContentType);
        HRESULT ( STDMETHODCALLTYPE *SetFontOptions )(
            IPartFont2 * This,
            _In_ EXpsFontOptions options);
        HRESULT ( STDMETHODCALLTYPE *GetFontRestriction )(
            IPartFont2 * This,
            _Out_ EXpsFontRestriction *pRestriction);
        END_INTERFACE
    } IPartFont2Vtbl;
    interface IPartFont2
    {
        CONST_VTBL struct IPartFont2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
    ( (This)->lpVtbl -> GetFontProperties(This,pContentType,pFontOptions) )
    ( (This)->lpVtbl -> SetFontContent(This,pContentType) )
    ( (This)->lpVtbl -> SetFontOptions(This,options) )
    ( (This)->lpVtbl -> GetFontRestriction(This,pRestriction) )
EXTERN_C const IID IID_IPartThumbnail;
    typedef struct IPartThumbnailVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartThumbnail * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartThumbnail * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartThumbnail * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartThumbnail * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartThumbnail * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartThumbnail * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartThumbnail * This,
            _In_ EXpsCompressionOptions compression);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailProperties )(
            IPartThumbnail * This,
            _Out_ BSTR *pContentType);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailContent )(
            IPartThumbnail * This,
            _In_z_ const wchar_t *pContentType);
        END_INTERFACE
    } IPartThumbnailVtbl;
    interface IPartThumbnail
    {
        CONST_VTBL struct IPartThumbnailVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
    ( (This)->lpVtbl -> GetThumbnailProperties(This,pContentType) )
    ( (This)->lpVtbl -> SetThumbnailContent(This,pContentType) )
EXTERN_C const IID IID_IPartPrintTicket;
    typedef struct IPartPrintTicketVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartPrintTicket * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartPrintTicket * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartPrintTicket * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartPrintTicket * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartPrintTicket * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartPrintTicket * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartPrintTicket * This,
            _In_ EXpsCompressionOptions compression);
        END_INTERFACE
    } IPartPrintTicketVtbl;
    interface IPartPrintTicket
    {
        CONST_VTBL struct IPartPrintTicketVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
EXTERN_C const IID IID_IPartColorProfile;
    typedef struct IPartColorProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartColorProfile * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartColorProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartColorProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartColorProfile * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartColorProfile * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartColorProfile * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartColorProfile * This,
            _In_ EXpsCompressionOptions compression);
        END_INTERFACE
    } IPartColorProfileVtbl;
    interface IPartColorProfile
    {
        CONST_VTBL struct IPartColorProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
EXTERN_C const IID IID_IPartResourceDictionary;
    typedef struct IPartResourceDictionaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartResourceDictionary * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartResourceDictionary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartResourceDictionary * This);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            IPartResourceDictionary * This,
            _Out_ BSTR *uri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPartResourceDictionary * This,
            _Outptr_ IPrintReadStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetPartCompression )(
            IPartResourceDictionary * This,
            _Out_ EXpsCompressionOptions *pCompression);
        HRESULT ( STDMETHODCALLTYPE *SetPartCompression )(
            IPartResourceDictionary * This,
            _In_ EXpsCompressionOptions compression);
        END_INTERFACE
    } IPartResourceDictionaryVtbl;
    interface IPartResourceDictionary
    {
        CONST_VTBL struct IPartResourceDictionaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUri(This,uri) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetPartCompression(This,pCompression) )
    ( (This)->lpVtbl -> SetPartCompression(This,compression) )
EXTERN_C const IID IID_IXpsPartIterator;
    typedef struct IXpsPartIteratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsPartIterator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsPartIterator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsPartIterator * This);
        void ( STDMETHODCALLTYPE *Reset )(
            IXpsPartIterator * This);
        HRESULT ( STDMETHODCALLTYPE *Current )(
            IXpsPartIterator * This,
            _Out_ BSTR *pUri,
            _Outptr_ IUnknown **ppXpsPart);
        BOOL ( STDMETHODCALLTYPE *IsDone )(
            IXpsPartIterator * This);
        void ( STDMETHODCALLTYPE *Next )(
            IXpsPartIterator * This);
        END_INTERFACE
    } IXpsPartIteratorVtbl;
    interface IXpsPartIterator
    {
        CONST_VTBL struct IXpsPartIteratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Current(This,pUri,ppXpsPart) )
    ( (This)->lpVtbl -> IsDone(This) )
    ( (This)->lpVtbl -> Next(This) )
EXTERN_C const IID IID_IPrintReadStreamFactory;
    typedef struct IPrintReadStreamFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintReadStreamFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintReadStreamFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintReadStreamFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IPrintReadStreamFactory * This,
            _Outptr_ IPrintReadStream **ppStream);
        END_INTERFACE
    } IPrintReadStreamFactoryVtbl;
    interface IPrintReadStreamFactory
    {
        CONST_VTBL struct IPrintReadStreamFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
EXTERN_C const IID IID_IPartDiscardControl;
    typedef struct IPartDiscardControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartDiscardControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartDiscardControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartDiscardControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetDiscardProperties )(
            IPartDiscardControl * This,
            _Out_ BSTR *uriSentinelPage,
            _Out_ BSTR *uriPartToDiscard);
        END_INTERFACE
    } IPartDiscardControlVtbl;
    interface IPartDiscardControl
    {
        CONST_VTBL struct IPartDiscardControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDiscardProperties(This,uriSentinelPage,uriPartToDiscard) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_filterpipeline_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filterpipeline_0000_0026_v0_0_s_ifspec;
}
