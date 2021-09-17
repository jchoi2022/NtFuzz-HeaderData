#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPrintWorkflowXpsReceiver IPrintWorkflowXpsReceiver;
typedef interface IPrintWorkflowObjectModelSourceFileContentNative IPrintWorkflowObjectModelSourceFileContentNative;
typedef interface IPrintWorkflowXpsObjectModelTargetPackageNative IPrintWorkflowXpsObjectModelTargetPackageNative;
typedef interface IPrintWorkflowConfigurationNative IPrintWorkflowConfigurationNative;
#include "oaidl.h"
#include "ocidl.h"
#include "PrinterExtension.h"
#include "xpsobjectmodel_1.h"
extern "C"{
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Eprinting2Eworkflow2Enative_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Eprinting2Eworkflow2Enative_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintWorkflowXpsReceiver;
    typedef struct IPrintWorkflowXpsReceiverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintWorkflowXpsReceiver * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintWorkflowXpsReceiver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintWorkflowXpsReceiver * This);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentSequencePrintTicket )(
            __RPC__in IPrintWorkflowXpsReceiver * This,
                       __RPC__in_opt IStream *documentSequencePrintTicket);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentSequenceUri )(
            __RPC__in IPrintWorkflowXpsReceiver * This,
                       __RPC__in PCWSTR documentSequenceUri);
        HRESULT ( STDMETHODCALLTYPE *AddDocumentData )(
            __RPC__in IPrintWorkflowXpsReceiver * This,
                       UINT32 documentId,
                       __RPC__in_opt IStream *documentPrintTicket,
                       __RPC__in PCWSTR documentUri);
        HRESULT ( STDMETHODCALLTYPE *AddPage )(
            __RPC__in IPrintWorkflowXpsReceiver * This,
                       UINT32 documentId,
                       UINT32 pageId,
                       __RPC__in_opt IXpsOMPageReference *pageReference,
                       __RPC__in PCWSTR pageUri);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IPrintWorkflowXpsReceiver * This);
        END_INTERFACE
    } IPrintWorkflowXpsReceiverVtbl;
    interface IPrintWorkflowXpsReceiver
    {
        CONST_VTBL struct IPrintWorkflowXpsReceiverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDocumentSequencePrintTicket(This,documentSequencePrintTicket) )
    ( (This)->lpVtbl -> SetDocumentSequenceUri(This,documentSequenceUri) )
    ( (This)->lpVtbl -> AddDocumentData(This,documentId,documentPrintTicket,documentUri) )
    ( (This)->lpVtbl -> AddPage(This,documentId,pageId,pageReference,pageUri) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IPrintWorkflowObjectModelSourceFileContentNative;
    typedef struct IPrintWorkflowObjectModelSourceFileContentNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintWorkflowObjectModelSourceFileContentNative * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintWorkflowObjectModelSourceFileContentNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintWorkflowObjectModelSourceFileContentNative * This);
        HRESULT ( STDMETHODCALLTYPE *StartXpsOMGeneration )(
            __RPC__in IPrintWorkflowObjectModelSourceFileContentNative * This,
                       __RPC__in_opt IPrintWorkflowXpsReceiver *receiver);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectFactory )(
            __RPC__in IPrintWorkflowObjectModelSourceFileContentNative * This,
                                __RPC__deref_out_opt IXpsOMObjectFactory1 **value);
        END_INTERFACE
    } IPrintWorkflowObjectModelSourceFileContentNativeVtbl;
    interface IPrintWorkflowObjectModelSourceFileContentNative
    {
        CONST_VTBL struct IPrintWorkflowObjectModelSourceFileContentNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartXpsOMGeneration(This,receiver) )
    ( (This)->lpVtbl -> get_ObjectFactory(This,value) )
EXTERN_C const IID IID_IPrintWorkflowXpsObjectModelTargetPackageNative;
    typedef struct IPrintWorkflowXpsObjectModelTargetPackageNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintWorkflowXpsObjectModelTargetPackageNative * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintWorkflowXpsObjectModelTargetPackageNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintWorkflowXpsObjectModelTargetPackageNative * This);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentPackageTarget )(
            __RPC__in IPrintWorkflowXpsObjectModelTargetPackageNative * This,
                                __RPC__deref_out_opt IXpsDocumentPackageTarget **value);
        END_INTERFACE
    } IPrintWorkflowXpsObjectModelTargetPackageNativeVtbl;
    interface IPrintWorkflowXpsObjectModelTargetPackageNative
    {
        CONST_VTBL struct IPrintWorkflowXpsObjectModelTargetPackageNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_DocumentPackageTarget(This,value) )
EXTERN_C const IID IID_IPrintWorkflowConfigurationNative;
    typedef struct IPrintWorkflowConfigurationNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintWorkflowConfigurationNative * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintWorkflowConfigurationNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintWorkflowConfigurationNative * This);
                        HRESULT ( STDMETHODCALLTYPE *get_PrinterQueue )(
            __RPC__in IPrintWorkflowConfigurationNative * This,
                                __RPC__deref_out_opt IPrinterQueue **value);
                        HRESULT ( STDMETHODCALLTYPE *get_DriverProperties )(
            __RPC__in IPrintWorkflowConfigurationNative * This,
                                __RPC__deref_out_opt IPrinterPropertyBag **value);
                        HRESULT ( STDMETHODCALLTYPE *get_UserProperties )(
            __RPC__in IPrintWorkflowConfigurationNative * This,
                                __RPC__deref_out_opt IPrinterPropertyBag **value);
        END_INTERFACE
    } IPrintWorkflowConfigurationNativeVtbl;
    interface IPrintWorkflowConfigurationNative
    {
        CONST_VTBL struct IPrintWorkflowConfigurationNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PrinterQueue(This,value) )
    ( (This)->lpVtbl -> get_DriverProperties(This,value) )
    ( (This)->lpVtbl -> get_UserProperties(This,value) )
}
