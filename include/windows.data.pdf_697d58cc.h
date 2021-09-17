#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument __x_ABI_CWindows_CData_CPdf_CIPdfDocument;
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPage __x_ABI_CWindows_CData_CPdf_CIPdfPage;
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument;
typedef interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;
typedef struct __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, __RPC__out __x_ABI_CWindows_CData_CPdf_CIPdfDocument * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl;
interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CData_CPdf_CPdfPageRotation __x_ABI_CWindows_CData_CPdf_CPdfPageRotation;
enum __x_ABI_CWindows_CData_CPdf_CPdfPageRotation
{
    PdfPageRotation_Normal = 0,
    PdfPageRotation_Rotate90 = 1,
    PdfPageRotation_Rotate180 = 2,
    PdfPageRotation_Rotate270 = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocument[] = L"Windows.Data.Pdf.IPdfDocument";
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPage )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
                  UINT32 pageIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfPage * * pdfPage
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPasswordProtected )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl;
interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPage(This,pageIndex,pdfPage) )
    ( (This)->lpVtbl->get_PageCount(This,value) )
    ( (This)->lpVtbl->get_IsPasswordProtected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocument;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocumentStatics[] = L"Windows.Data.Pdf.IPdfDocumentStatics";
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LoadFromFileAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromFileWithPasswordAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING password,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStreamAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * inputStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStreamWithPasswordAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * inputStream,
                  __RPC__in HSTRING password,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl;
interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadFromFileAsync(This,file,asyncInfo) )
    ( (This)->lpVtbl->LoadFromFileWithPasswordAsync(This,file,password,asyncInfo) )
    ( (This)->lpVtbl->LoadFromStreamAsync(This,inputStream,asyncInfo) )
    ( (This)->lpVtbl->LoadFromStreamWithPasswordAsync(This,inputStream,password,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPage[] = L"Windows.Data.Pdf.IPdfPage";
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RenderToStreamAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * outputStream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderWithOptionsToStreamAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * outputStream,
                  __RPC__in_opt __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *PreparePageAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Index )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dimensions )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                           __RPC__out __x_ABI_CWindows_CData_CPdf_CPdfPageRotation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredZoom )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl;
interface __x_ABI_CWindows_CData_CPdf_CIPdfPage
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RenderToStreamAsync(This,outputStream,asyncInfo) )
    ( (This)->lpVtbl->RenderWithOptionsToStreamAsync(This,outputStream,options,asyncInfo) )
    ( (This)->lpVtbl->PreparePageAsync(This,asyncInfo) )
    ( (This)->lpVtbl->get_Index(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->get_Dimensions(This,value) )
    ( (This)->lpVtbl->get_Rotation(This,value) )
    ( (This)->lpVtbl->get_PreferredZoom(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageDimensions[] = L"Windows.Data.Pdf.IPdfPageDimensions";
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CropBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BleedBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ArtBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl;
interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaBox(This,value) )
    ( (This)->lpVtbl->get_CropBox(This,value) )
    ( (This)->lpVtbl->get_BleedBox(This,value) )
    ( (This)->lpVtbl->get_TrimBox(This,value) )
    ( (This)->lpVtbl->get_ArtBox(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageRenderOptions[] = L"Windows.Data.Pdf.IPdfPageRenderOptions";
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceRect )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceRect )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIgnoringHighContrast )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsIgnoringHighContrast )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapEncoderId )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BitmapEncoderId )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl;
interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceRect(This,value) )
    ( (This)->lpVtbl->put_SourceRect(This,value) )
    ( (This)->lpVtbl->get_DestinationWidth(This,value) )
    ( (This)->lpVtbl->put_DestinationWidth(This,value) )
    ( (This)->lpVtbl->get_DestinationHeight(This,value) )
    ( (This)->lpVtbl->put_DestinationHeight(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_IsIgnoringHighContrast(This,value) )
    ( (This)->lpVtbl->put_IsIgnoringHighContrast(This,value) )
    ( (This)->lpVtbl->get_BitmapEncoderId(This,value) )
    ( (This)->lpVtbl->put_BitmapEncoderId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfDocument[] = L"Windows.Data.Pdf.PdfDocument";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPage[] = L"Windows.Data.Pdf.PdfPage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageDimensions[] = L"Windows.Data.Pdf.PdfPageDimensions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageRenderOptions[] = L"Windows.Data.Pdf.PdfPageRenderOptions";
       
       
#pragma clang diagnostic pop
