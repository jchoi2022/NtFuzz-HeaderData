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
#include "Windows.Graphics.Printing.h"
#include "Windows.UI.Xaml.h"
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType;
enum __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType
{
    PreviewPageCountType_Final = 0,
    PreviewPageCountType_Intermediate = 1,
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IAddPagesEventArgs[] = L"Windows.UI.Xaml.Printing.IAddPagesEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrintTaskOptions )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrintTaskOptions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs[] = L"Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PageNumber )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PageNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPaginateEventArgs[] = L"Windows.UI.Xaml.Printing.IPaginateEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrintTaskOptions )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPreviewPageNumber )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrintTaskOptions(This,value) )
    ( (This)->lpVtbl->get_CurrentPreviewPageNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocument[] = L"Windows.UI.Xaml.Printing.IPrintDocument";
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DocumentSource )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Paginate )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Paginate )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GetPreviewPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GetPreviewPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AddPages )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AddPages )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *AddPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * pageVisual
        );
    HRESULT ( STDMETHODCALLTYPE *AddPagesComplete )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreviewPageCount )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  INT32 count,
                  __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType type
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreviewPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
                  INT32 pageNumber,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * pageVisual
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidatePreview )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DocumentSource(This,value) )
    ( (This)->lpVtbl->add_Paginate(This,handler,token) )
    ( (This)->lpVtbl->remove_Paginate(This,token) )
    ( (This)->lpVtbl->add_GetPreviewPage(This,handler,token) )
    ( (This)->lpVtbl->remove_GetPreviewPage(This,token) )
    ( (This)->lpVtbl->add_AddPages(This,handler,token) )
    ( (This)->lpVtbl->remove_AddPages(This,token) )
    ( (This)->lpVtbl->AddPage(This,pageVisual) )
    ( (This)->lpVtbl->AddPagesComplete(This) )
    ( (This)->lpVtbl->SetPreviewPageCount(This,count,type) )
    ( (This)->lpVtbl->SetPreviewPage(This,pageNumber,pageVisual) )
    ( (This)->lpVtbl->InvalidatePreview(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocumentFactory[] = L"Windows.UI.Xaml.Printing.IPrintDocumentFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocumentStatics[] = L"Windows.UI.Xaml.Printing.IPrintDocumentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DocumentSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DocumentSourceProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_AddPagesEventArgs[] = L"Windows.UI.Xaml.Printing.AddPagesEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs[] = L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_PaginateEventArgs[] = L"Windows.UI.Xaml.Printing.PaginateEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_PrintDocument[] = L"Windows.UI.Xaml.Printing.PrintDocument";
       
       
#pragma clang diagnostic pop
