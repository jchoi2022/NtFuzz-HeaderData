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
#include "Windows.Data.Xml.Dom.h"
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor[] = L"Windows.Data.Xml.Xsl.IXsltProcessor";
typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TransformToString )(
        __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * inputNode,
                           __RPC__deref_out_opt HSTRING * output
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl;
interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TransformToString(This,inputNode,output) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor2[] = L"Windows.Data.Xml.Xsl.IXsltProcessor2";
typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TransformToDocument )(
        __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * inputNode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * output
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl;
interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TransformToDocument(This,inputNode,output) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessorFactory[] = L"Windows.Data.Xml.Xsl.IXsltProcessorFactory";
typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * document,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * * xsltProcessor
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl;
interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,document,xsltProcessor) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Xsl_XsltProcessor[] = L"Windows.Data.Xml.Xsl.XsltProcessor";
       
       
#pragma clang diagnostic pop
