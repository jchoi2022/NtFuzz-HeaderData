#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPrintSchemaElement IPrintSchemaElement;
typedef interface IPrintSchemaDisplayableElement IPrintSchemaDisplayableElement;
typedef interface IPrintSchemaOption IPrintSchemaOption;
typedef interface IPrintSchemaPageMediaSizeOption IPrintSchemaPageMediaSizeOption;
typedef interface IPrintSchemaNUpOption IPrintSchemaNUpOption;
typedef interface IPrintSchemaOptionCollection IPrintSchemaOptionCollection;
typedef interface IPrintSchemaFeature IPrintSchemaFeature;
typedef interface IPrintSchemaPageImageableSize IPrintSchemaPageImageableSize;
typedef interface IPrintSchemaParameterDefinition IPrintSchemaParameterDefinition;
typedef interface IPrintSchemaParameterInitializer IPrintSchemaParameterInitializer;
typedef interface IPrintSchemaCapabilities IPrintSchemaCapabilities;
typedef interface IPrintSchemaCapabilities2 IPrintSchemaCapabilities2;
typedef interface IPrintSchemaAsyncOperation IPrintSchemaAsyncOperation;
typedef interface IPrintSchemaTicket IPrintSchemaTicket;
typedef interface IPrintSchemaTicket2 IPrintSchemaTicket2;
typedef interface IPrintSchemaAsyncOperationEvent IPrintSchemaAsyncOperationEvent;
typedef interface IPrinterScriptableSequentialStream IPrinterScriptableSequentialStream;
typedef interface IPrinterScriptableStream IPrinterScriptableStream;
typedef interface IPrinterPropertyBag IPrinterPropertyBag;
typedef interface IPrinterScriptablePropertyBag IPrinterScriptablePropertyBag;
typedef interface IPrinterScriptablePropertyBag2 IPrinterScriptablePropertyBag2;
typedef interface IPrinterQueue IPrinterQueue;
typedef interface IPrintJob IPrintJob;
typedef interface IPrintJobCollection IPrintJobCollection;
typedef interface IPrinterQueueViewEvent IPrinterQueueViewEvent;
typedef interface IPrinterQueueView IPrinterQueueView;
typedef interface IPrinterQueueEvent IPrinterQueueEvent;
typedef interface IPrinterBidiSetRequestCallback IPrinterBidiSetRequestCallback;
typedef interface IPrinterExtensionAsyncOperation IPrinterExtensionAsyncOperation;
typedef interface IPrinterQueue2 IPrinterQueue2;
typedef interface IPrinterExtensionContext IPrinterExtensionContext;
typedef interface IPrinterExtensionRequest IPrinterExtensionRequest;
typedef interface IPrinterExtensionEventArgs IPrinterExtensionEventArgs;
typedef interface IPrinterExtensionContextCollection IPrinterExtensionContextCollection;
typedef interface IPrinterExtensionEvent IPrinterExtensionEvent;
typedef interface IPrinterExtensionManager IPrinterExtensionManager;
typedef interface IPrinterScriptContext IPrinterScriptContext;
typedef class PrinterQueue PrinterQueue;
typedef class PrinterQueueView PrinterQueueView;
typedef class PrintSchemaAsyncOperation PrintSchemaAsyncOperation;
typedef class PrinterExtensionManager PrinterExtensionManager;
#include "oaidl.h"
extern "C"{
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Application Family
#pragma endregion
#pragma region Desktop Family
#pragma endregion
#pragma region Application Family
#pragma endregion
#pragma region Desktop Family
#pragma endregion
#pragma region Application Family
#pragma endregion
#pragma region Desktop Family
#pragma endregion
#pragma region Application Family
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaElement;
    typedef struct IPrintSchemaElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaElement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaElement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaElement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaElement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaElement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaElement * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaElement * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaElement * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
        END_INTERFACE
    } IPrintSchemaElementVtbl;
    interface IPrintSchemaElement
    {
        CONST_VTBL struct IPrintSchemaElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
EXTERN_C const IID IID_IPrintSchemaDisplayableElement;
    typedef struct IPrintSchemaDisplayableElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaDisplayableElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaDisplayableElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaDisplayableElement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPrintSchemaDisplayableElement * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
        END_INTERFACE
    } IPrintSchemaDisplayableElementVtbl;
    interface IPrintSchemaDisplayableElement
    {
        CONST_VTBL struct IPrintSchemaDisplayableElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
typedef
enum tagPrintSchemaConstrainedSetting
    {
        PrintSchemaConstrainedSetting_None = 0,
        PrintSchemaConstrainedSetting_PrintTicket = ( PrintSchemaConstrainedSetting_None + 1 ) ,
        PrintSchemaConstrainedSetting_Admin = ( PrintSchemaConstrainedSetting_PrintTicket + 1 ) ,
        PrintSchemaConstrainedSetting_Device = ( PrintSchemaConstrainedSetting_Admin + 1 )
    } PrintSchemaConstrainedSetting;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaOption;
    typedef struct IPrintSchemaOptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaOption * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaOption * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaOption * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaOption * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaOption * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaOption * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaOption * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaOption * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaOption * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaOption * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPrintSchemaOption * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_Selected )(
            __RPC__in IPrintSchemaOption * This,
                                __RPC__out BOOL *pbIsSelected);
                            HRESULT ( STDMETHODCALLTYPE *get_Constrained )(
            __RPC__in IPrintSchemaOption * This,
                                __RPC__out PrintSchemaConstrainedSetting *pSetting);
                   HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IPrintSchemaOption * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IUnknown **ppXmlValueNode);
        END_INTERFACE
    } IPrintSchemaOptionVtbl;
    interface IPrintSchemaOption
    {
        CONST_VTBL struct IPrintSchemaOptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> get_Selected(This,pbIsSelected) )
    ( (This)->lpVtbl -> get_Constrained(This,pSetting) )
    ( (This)->lpVtbl -> GetPropertyValue(This,bstrName,bstrNamespaceUri,ppXmlValueNode) )
EXTERN_C const IID IID_IPrintSchemaPageMediaSizeOption;
    typedef struct IPrintSchemaPageMediaSizeOptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaPageMediaSizeOption * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_Selected )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__out BOOL *pbIsSelected);
                            HRESULT ( STDMETHODCALLTYPE *get_Constrained )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__out PrintSchemaConstrainedSetting *pSetting);
                   HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IUnknown **ppXmlValueNode);
                            HRESULT ( STDMETHODCALLTYPE *get_WidthInMicrons )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__out ULONG *pulWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_HeightInMicrons )(
            __RPC__in IPrintSchemaPageMediaSizeOption * This,
                                __RPC__out ULONG *pulHeight);
        END_INTERFACE
    } IPrintSchemaPageMediaSizeOptionVtbl;
    interface IPrintSchemaPageMediaSizeOption
    {
        CONST_VTBL struct IPrintSchemaPageMediaSizeOptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> get_Selected(This,pbIsSelected) )
    ( (This)->lpVtbl -> get_Constrained(This,pSetting) )
    ( (This)->lpVtbl -> GetPropertyValue(This,bstrName,bstrNamespaceUri,ppXmlValueNode) )
    ( (This)->lpVtbl -> get_WidthInMicrons(This,pulWidth) )
    ( (This)->lpVtbl -> get_HeightInMicrons(This,pulHeight) )
EXTERN_C const IID IID_IPrintSchemaNUpOption;
    typedef struct IPrintSchemaNUpOptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaNUpOption * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaNUpOption * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaNUpOption * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaNUpOption * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaNUpOption * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaNUpOption * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaNUpOption * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_Selected )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__out BOOL *pbIsSelected);
                            HRESULT ( STDMETHODCALLTYPE *get_Constrained )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__out PrintSchemaConstrainedSetting *pSetting);
                   HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IPrintSchemaNUpOption * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IUnknown **ppXmlValueNode);
                            HRESULT ( STDMETHODCALLTYPE *get_PagesPerSheet )(
            __RPC__in IPrintSchemaNUpOption * This,
                                __RPC__out ULONG *pulPagesPerSheet);
        END_INTERFACE
    } IPrintSchemaNUpOptionVtbl;
    interface IPrintSchemaNUpOption
    {
        CONST_VTBL struct IPrintSchemaNUpOptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> get_Selected(This,pbIsSelected) )
    ( (This)->lpVtbl -> get_Constrained(This,pSetting) )
    ( (This)->lpVtbl -> GetPropertyValue(This,bstrName,bstrNamespaceUri,ppXmlValueNode) )
    ( (This)->lpVtbl -> get_PagesPerSheet(This,pulPagesPerSheet) )
typedef
enum tagPrintSchemaSelectionType
    {
        PrintSchemaSelectionType_PickOne = 0,
        PrintSchemaSelectionType_PickMany = ( PrintSchemaSelectionType_PickOne + 1 )
    } PrintSchemaSelectionType;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaOptionCollection;
    typedef struct IPrintSchemaOptionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaOptionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaOptionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaOptionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaOptionCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaOptionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaOptionCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaOptionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IPrintSchemaOptionCollection * This,
                                __RPC__out ULONG *pulCount);
                   HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPrintSchemaOptionCollection * This,
                       ULONG ulIndex,
                                __RPC__deref_out_opt IPrintSchemaOption **ppOption);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IPrintSchemaOptionCollection * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
        END_INTERFACE
    } IPrintSchemaOptionCollectionVtbl;
    interface IPrintSchemaOptionCollection
    {
        CONST_VTBL struct IPrintSchemaOptionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pulCount) )
    ( (This)->lpVtbl -> GetAt(This,ulIndex,ppOption) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
EXTERN_C const IID IID_IPrintSchemaFeature;
    typedef struct IPrintSchemaFeatureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaFeature * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaFeature * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaFeature * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaFeature * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaFeature * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaFeature * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaFeature * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_SelectedOption )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__deref_out_opt IPrintSchemaOption **ppOption);
                            HRESULT ( STDMETHODCALLTYPE *put_SelectedOption )(
            __RPC__in IPrintSchemaFeature * This,
                       __RPC__in_opt IPrintSchemaOption *pOption);
                            HRESULT ( STDMETHODCALLTYPE *get_SelectionType )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__out PrintSchemaSelectionType *pSelectionType);
                   HRESULT ( STDMETHODCALLTYPE *GetOption )(
            __RPC__in IPrintSchemaFeature * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaOption **ppOption);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayUI )(
            __RPC__in IPrintSchemaFeature * This,
                                __RPC__out BOOL *pbShow);
        END_INTERFACE
    } IPrintSchemaFeatureVtbl;
    interface IPrintSchemaFeature
    {
        CONST_VTBL struct IPrintSchemaFeatureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> get_SelectedOption(This,ppOption) )
    ( (This)->lpVtbl -> put_SelectedOption(This,pOption) )
    ( (This)->lpVtbl -> get_SelectionType(This,pSelectionType) )
    ( (This)->lpVtbl -> GetOption(This,bstrName,bstrNamespaceUri,ppOption) )
    ( (This)->lpVtbl -> get_DisplayUI(This,pbShow) )
EXTERN_C const IID IID_IPrintSchemaPageImageableSize;
    typedef struct IPrintSchemaPageImageableSizeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaPageImageableSize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaPageImageableSize * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaPageImageableSize * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_ImageableSizeWidthInMicrons )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__out ULONG *pulImageableSizeWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_ImageableSizeHeightInMicrons )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__out ULONG *pulImageableSizeHeight);
                            HRESULT ( STDMETHODCALLTYPE *get_OriginWidthInMicrons )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__out ULONG *pulOriginWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_OriginHeightInMicrons )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__out ULONG *pulOriginHeight);
                            HRESULT ( STDMETHODCALLTYPE *get_ExtentWidthInMicrons )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__out ULONG *pulExtentWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_ExtentHeightInMicrons )(
            __RPC__in IPrintSchemaPageImageableSize * This,
                                __RPC__out ULONG *pulExtentHeight);
        END_INTERFACE
    } IPrintSchemaPageImageableSizeVtbl;
    interface IPrintSchemaPageImageableSize
    {
        CONST_VTBL struct IPrintSchemaPageImageableSizeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_ImageableSizeWidthInMicrons(This,pulImageableSizeWidth) )
    ( (This)->lpVtbl -> get_ImageableSizeHeightInMicrons(This,pulImageableSizeHeight) )
    ( (This)->lpVtbl -> get_OriginWidthInMicrons(This,pulOriginWidth) )
    ( (This)->lpVtbl -> get_OriginHeightInMicrons(This,pulOriginHeight) )
    ( (This)->lpVtbl -> get_ExtentWidthInMicrons(This,pulExtentWidth) )
    ( (This)->lpVtbl -> get_ExtentHeightInMicrons(This,pulExtentHeight) )
typedef
enum tagPrintSchemaParameterDataType
    {
        PrintSchemaParameterDataType_Integer = 0,
        PrintSchemaParameterDataType_NumericString = ( PrintSchemaParameterDataType_Integer + 1 ) ,
        PrintSchemaParameterDataType_String = ( PrintSchemaParameterDataType_NumericString + 1 )
    } PrintSchemaParameterDataType;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaParameterDefinition;
    typedef struct IPrintSchemaParameterDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaParameterDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaParameterDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaParameterDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_UserInputRequired )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__out BOOL *pbIsRequired);
                            HRESULT ( STDMETHODCALLTYPE *get_UnitType )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrUnitType);
                            HRESULT ( STDMETHODCALLTYPE *get_DataType )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__out PrintSchemaParameterDataType *pDataType);
                            HRESULT ( STDMETHODCALLTYPE *get_RangeMin )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__out INT *pRangeMin);
                            HRESULT ( STDMETHODCALLTYPE *get_RangeMax )(
            __RPC__in IPrintSchemaParameterDefinition * This,
                                __RPC__out INT *pRangeMax);
        END_INTERFACE
    } IPrintSchemaParameterDefinitionVtbl;
    interface IPrintSchemaParameterDefinition
    {
        CONST_VTBL struct IPrintSchemaParameterDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> get_UserInputRequired(This,pbIsRequired) )
    ( (This)->lpVtbl -> get_UnitType(This,pbstrUnitType) )
    ( (This)->lpVtbl -> get_DataType(This,pDataType) )
    ( (This)->lpVtbl -> get_RangeMin(This,pRangeMin) )
    ( (This)->lpVtbl -> get_RangeMax(This,pRangeMax) )
EXTERN_C const IID IID_IPrintSchemaParameterInitializer;
    typedef struct IPrintSchemaParameterInitializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaParameterInitializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaParameterInitializer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaParameterInitializer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                            HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                                __RPC__out VARIANT *pVar);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IPrintSchemaParameterInitializer * This,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } IPrintSchemaParameterInitializerVtbl;
    interface IPrintSchemaParameterInitializer
    {
        CONST_VTBL struct IPrintSchemaParameterInitializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> get_Value(This,pVar) )
    ( (This)->lpVtbl -> put_Value(This,pVar) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaCapabilities;
    typedef struct IPrintSchemaCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaCapabilities * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaCapabilities * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaCapabilities * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaCapabilities * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaCapabilities * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaCapabilities * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaCapabilities * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                   HRESULT ( STDMETHODCALLTYPE *GetFeatureByKeyName )(
            __RPC__in IPrintSchemaCapabilities * This,
                       __RPC__in BSTR bstrKeyName,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                   HRESULT ( STDMETHODCALLTYPE *GetFeature )(
            __RPC__in IPrintSchemaCapabilities * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                            HRESULT ( STDMETHODCALLTYPE *get_PageImageableSize )(
            __RPC__in IPrintSchemaCapabilities * This,
                                __RPC__deref_out_opt IPrintSchemaPageImageableSize **ppPageImageableSize);
                            HRESULT ( STDMETHODCALLTYPE *get_JobCopiesAllDocumentsMinValue )(
            __RPC__in IPrintSchemaCapabilities * This,
                                __RPC__out ULONG *pulJobCopiesAllDocumentsMinValue);
                            HRESULT ( STDMETHODCALLTYPE *get_JobCopiesAllDocumentsMaxValue )(
            __RPC__in IPrintSchemaCapabilities * This,
                                __RPC__out ULONG *pulJobCopiesAllDocumentsMaxValue);
                   HRESULT ( STDMETHODCALLTYPE *GetSelectedOptionInPrintTicket )(
            __RPC__in IPrintSchemaCapabilities * This,
                       __RPC__in_opt IPrintSchemaFeature *pFeature,
                                __RPC__deref_out_opt IPrintSchemaOption **ppOption);
                   HRESULT ( STDMETHODCALLTYPE *GetOptions )(
            __RPC__in IPrintSchemaCapabilities * This,
                       __RPC__in_opt IPrintSchemaFeature *pFeature,
                                __RPC__deref_out_opt IPrintSchemaOptionCollection **ppOptionCollection);
        END_INTERFACE
    } IPrintSchemaCapabilitiesVtbl;
    interface IPrintSchemaCapabilities
    {
        CONST_VTBL struct IPrintSchemaCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> GetFeatureByKeyName(This,bstrKeyName,ppFeature) )
    ( (This)->lpVtbl -> GetFeature(This,bstrName,bstrNamespaceUri,ppFeature) )
    ( (This)->lpVtbl -> get_PageImageableSize(This,ppPageImageableSize) )
    ( (This)->lpVtbl -> get_JobCopiesAllDocumentsMinValue(This,pulJobCopiesAllDocumentsMinValue) )
    ( (This)->lpVtbl -> get_JobCopiesAllDocumentsMaxValue(This,pulJobCopiesAllDocumentsMaxValue) )
    ( (This)->lpVtbl -> GetSelectedOptionInPrintTicket(This,pFeature,ppOption) )
    ( (This)->lpVtbl -> GetOptions(This,pFeature,ppOptionCollection) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaCapabilities2;
    typedef struct IPrintSchemaCapabilities2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaCapabilities2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaCapabilities2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaCapabilities2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                   HRESULT ( STDMETHODCALLTYPE *GetFeatureByKeyName )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in BSTR bstrKeyName,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                   HRESULT ( STDMETHODCALLTYPE *GetFeature )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                            HRESULT ( STDMETHODCALLTYPE *get_PageImageableSize )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                                __RPC__deref_out_opt IPrintSchemaPageImageableSize **ppPageImageableSize);
                            HRESULT ( STDMETHODCALLTYPE *get_JobCopiesAllDocumentsMinValue )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                                __RPC__out ULONG *pulJobCopiesAllDocumentsMinValue);
                            HRESULT ( STDMETHODCALLTYPE *get_JobCopiesAllDocumentsMaxValue )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                                __RPC__out ULONG *pulJobCopiesAllDocumentsMaxValue);
                   HRESULT ( STDMETHODCALLTYPE *GetSelectedOptionInPrintTicket )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in_opt IPrintSchemaFeature *pFeature,
                                __RPC__deref_out_opt IPrintSchemaOption **ppOption);
                   HRESULT ( STDMETHODCALLTYPE *GetOptions )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in_opt IPrintSchemaFeature *pFeature,
                                __RPC__deref_out_opt IPrintSchemaOptionCollection **ppOptionCollection);
                   HRESULT ( STDMETHODCALLTYPE *GetParameterDefinition )(
            __RPC__in IPrintSchemaCapabilities2 * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaParameterDefinition **ppParameterDefinition);
        END_INTERFACE
    } IPrintSchemaCapabilities2Vtbl;
    interface IPrintSchemaCapabilities2
    {
        CONST_VTBL struct IPrintSchemaCapabilities2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> GetFeatureByKeyName(This,bstrKeyName,ppFeature) )
    ( (This)->lpVtbl -> GetFeature(This,bstrName,bstrNamespaceUri,ppFeature) )
    ( (This)->lpVtbl -> get_PageImageableSize(This,ppPageImageableSize) )
    ( (This)->lpVtbl -> get_JobCopiesAllDocumentsMinValue(This,pulJobCopiesAllDocumentsMinValue) )
    ( (This)->lpVtbl -> get_JobCopiesAllDocumentsMaxValue(This,pulJobCopiesAllDocumentsMaxValue) )
    ( (This)->lpVtbl -> GetSelectedOptionInPrintTicket(This,pFeature,ppOption) )
    ( (This)->lpVtbl -> GetOptions(This,pFeature,ppOptionCollection) )
    ( (This)->lpVtbl -> GetParameterDefinition(This,bstrName,bstrNamespaceUri,ppParameterDefinition) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaAsyncOperation;
    typedef struct IPrintSchemaAsyncOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaAsyncOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaAsyncOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaAsyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaAsyncOperation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaAsyncOperation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaAsyncOperation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaAsyncOperation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IPrintSchemaAsyncOperation * This);
                   HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPrintSchemaAsyncOperation * This);
        END_INTERFACE
    } IPrintSchemaAsyncOperationVtbl;
    interface IPrintSchemaAsyncOperation
    {
        CONST_VTBL struct IPrintSchemaAsyncOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IPrintSchemaTicket;
    typedef struct IPrintSchemaTicketVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaTicket * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaTicket * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaTicket * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaTicket * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaTicket * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaTicket * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaTicket * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaTicket * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaTicket * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaTicket * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                   HRESULT ( STDMETHODCALLTYPE *GetFeatureByKeyName )(
            __RPC__in IPrintSchemaTicket * This,
                       __RPC__in BSTR bstrKeyName,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                   HRESULT ( STDMETHODCALLTYPE *GetFeature )(
            __RPC__in IPrintSchemaTicket * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                   HRESULT ( STDMETHODCALLTYPE *ValidateAsync )(
            __RPC__in IPrintSchemaTicket * This,
                        __RPC__deref_out_opt IPrintSchemaAsyncOperation **ppAsyncOperation);
                   HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
            __RPC__in IPrintSchemaTicket * This,
                       __RPC__in_opt IPrintSchemaTicket *pPrintTicketCommit,
                        __RPC__deref_out_opt IPrintSchemaAsyncOperation **ppAsyncOperation);
                   HRESULT ( STDMETHODCALLTYPE *NotifyXmlChanged )(
            __RPC__in IPrintSchemaTicket * This);
                   HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IPrintSchemaTicket * This,
                                __RPC__deref_out_opt IPrintSchemaCapabilities **ppCapabilities);
                            HRESULT ( STDMETHODCALLTYPE *get_JobCopiesAllDocuments )(
            __RPC__in IPrintSchemaTicket * This,
                                __RPC__out ULONG *pulJobCopiesAllDocuments);
                            HRESULT ( STDMETHODCALLTYPE *put_JobCopiesAllDocuments )(
            __RPC__in IPrintSchemaTicket * This,
                       ULONG ulJobCopiesAllDocuments);
        END_INTERFACE
    } IPrintSchemaTicketVtbl;
    interface IPrintSchemaTicket
    {
        CONST_VTBL struct IPrintSchemaTicketVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> GetFeatureByKeyName(This,bstrKeyName,ppFeature) )
    ( (This)->lpVtbl -> GetFeature(This,bstrName,bstrNamespaceUri,ppFeature) )
    ( (This)->lpVtbl -> ValidateAsync(This,ppAsyncOperation) )
    ( (This)->lpVtbl -> CommitAsync(This,pPrintTicketCommit,ppAsyncOperation) )
    ( (This)->lpVtbl -> NotifyXmlChanged(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,ppCapabilities) )
    ( (This)->lpVtbl -> get_JobCopiesAllDocuments(This,pulJobCopiesAllDocuments) )
    ( (This)->lpVtbl -> put_JobCopiesAllDocuments(This,ulJobCopiesAllDocuments) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaTicket2;
    typedef struct IPrintSchemaTicket2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaTicket2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaTicket2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaTicket2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaTicket2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaTicket2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaTicket2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaTicket2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
            __RPC__in IPrintSchemaTicket2 * This,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPrintSchemaTicket2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
            __RPC__in IPrintSchemaTicket2 * This,
                                __RPC__deref_out_opt BSTR *pbstrNamespaceUri);
                   HRESULT ( STDMETHODCALLTYPE *GetFeatureByKeyName )(
            __RPC__in IPrintSchemaTicket2 * This,
                       __RPC__in BSTR bstrKeyName,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                   HRESULT ( STDMETHODCALLTYPE *GetFeature )(
            __RPC__in IPrintSchemaTicket2 * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaFeature **ppFeature);
                   HRESULT ( STDMETHODCALLTYPE *ValidateAsync )(
            __RPC__in IPrintSchemaTicket2 * This,
                        __RPC__deref_out_opt IPrintSchemaAsyncOperation **ppAsyncOperation);
                   HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
            __RPC__in IPrintSchemaTicket2 * This,
                       __RPC__in_opt IPrintSchemaTicket *pPrintTicketCommit,
                        __RPC__deref_out_opt IPrintSchemaAsyncOperation **ppAsyncOperation);
                   HRESULT ( STDMETHODCALLTYPE *NotifyXmlChanged )(
            __RPC__in IPrintSchemaTicket2 * This);
                   HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IPrintSchemaTicket2 * This,
                                __RPC__deref_out_opt IPrintSchemaCapabilities **ppCapabilities);
                            HRESULT ( STDMETHODCALLTYPE *get_JobCopiesAllDocuments )(
            __RPC__in IPrintSchemaTicket2 * This,
                                __RPC__out ULONG *pulJobCopiesAllDocuments);
                            HRESULT ( STDMETHODCALLTYPE *put_JobCopiesAllDocuments )(
            __RPC__in IPrintSchemaTicket2 * This,
                       ULONG ulJobCopiesAllDocuments);
                   HRESULT ( STDMETHODCALLTYPE *GetParameterInitializer )(
            __RPC__in IPrintSchemaTicket2 * This,
                       __RPC__in BSTR bstrName,
                                     __RPC__in BSTR bstrNamespaceUri,
                                __RPC__deref_out_opt IPrintSchemaParameterInitializer **ppParameterInitializer);
        END_INTERFACE
    } IPrintSchemaTicket2Vtbl;
    interface IPrintSchemaTicket2
    {
        CONST_VTBL struct IPrintSchemaTicket2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XmlNode(This,ppXmlNode) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_NamespaceUri(This,pbstrNamespaceUri) )
    ( (This)->lpVtbl -> GetFeatureByKeyName(This,bstrKeyName,ppFeature) )
    ( (This)->lpVtbl -> GetFeature(This,bstrName,bstrNamespaceUri,ppFeature) )
    ( (This)->lpVtbl -> ValidateAsync(This,ppAsyncOperation) )
    ( (This)->lpVtbl -> CommitAsync(This,pPrintTicketCommit,ppAsyncOperation) )
    ( (This)->lpVtbl -> NotifyXmlChanged(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,ppCapabilities) )
    ( (This)->lpVtbl -> get_JobCopiesAllDocuments(This,pulJobCopiesAllDocuments) )
    ( (This)->lpVtbl -> put_JobCopiesAllDocuments(This,ulJobCopiesAllDocuments) )
    ( (This)->lpVtbl -> GetParameterInitializer(This,bstrName,bstrNamespaceUri,ppParameterInitializer) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintSchemaAsyncOperationEvent;
    typedef struct IPrintSchemaAsyncOperationEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintSchemaAsyncOperationEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Completed )(
            __RPC__in IPrintSchemaAsyncOperationEvent * This,
                       __RPC__in_opt IPrintSchemaTicket *pTicket,
                       HRESULT hrOperation);
        END_INTERFACE
    } IPrintSchemaAsyncOperationEventVtbl;
    interface IPrintSchemaAsyncOperationEvent
    {
        CONST_VTBL struct IPrintSchemaAsyncOperationEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Completed(This,pTicket,hrOperation) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterScriptableSequentialStream;
    typedef struct IPrinterScriptableSequentialStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterScriptableSequentialStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterScriptableSequentialStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterScriptableSequentialStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrinterScriptableSequentialStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrinterScriptableSequentialStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrinterScriptableSequentialStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterScriptableSequentialStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IPrinterScriptableSequentialStream * This,
                       LONG cbRead,
                                __RPC__deref_out_opt IDispatch **ppArray);
                   HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IPrinterScriptableSequentialStream * This,
                       __RPC__in_opt IDispatch *pArray,
                                __RPC__out LONG *pcbWritten);
        END_INTERFACE
    } IPrinterScriptableSequentialStreamVtbl;
    interface IPrinterScriptableSequentialStream
    {
        CONST_VTBL struct IPrinterScriptableSequentialStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Read(This,cbRead,ppArray) )
    ( (This)->lpVtbl -> Write(This,pArray,pcbWritten) )
EXTERN_C const IID IID_IPrinterScriptableStream;
    typedef struct IPrinterScriptableStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterScriptableStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterScriptableStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterScriptableStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrinterScriptableStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrinterScriptableStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrinterScriptableStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterScriptableStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IPrinterScriptableStream * This,
                       LONG cbRead,
                                __RPC__deref_out_opt IDispatch **ppArray);
                   HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IPrinterScriptableStream * This,
                       __RPC__in_opt IDispatch *pArray,
                                __RPC__out LONG *pcbWritten);
                   HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IPrinterScriptableStream * This);
                   HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IPrinterScriptableStream * This,
                       LONG lOffset,
                       STREAM_SEEK streamSeek,
                                __RPC__out LONG *plPosition);
                   HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IPrinterScriptableStream * This,
                       LONG lSize);
        END_INTERFACE
    } IPrinterScriptableStreamVtbl;
    interface IPrinterScriptableStream
    {
        CONST_VTBL struct IPrinterScriptableStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Read(This,cbRead,ppArray) )
    ( (This)->lpVtbl -> Write(This,pArray,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> Seek(This,lOffset,streamSeek,plPosition) )
    ( (This)->lpVtbl -> SetSize(This,lSize) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterPropertyBag;
    typedef struct IPrinterPropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterPropertyBag * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterPropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterPropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterPropertyBag * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterPropertyBag * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterPropertyBag * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterPropertyBag * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetBool )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                                BOOL *pbValue);
                   HRESULT ( STDMETHODCALLTYPE *SetBool )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                       BOOL bValue);
                   HRESULT ( STDMETHODCALLTYPE *GetInt32 )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                                LONG *pnValue);
                   HRESULT ( STDMETHODCALLTYPE *SetInt32 )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                       LONG nValue);
                   HRESULT ( STDMETHODCALLTYPE *GetString )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                                BSTR *pbstrValue);
                   HRESULT ( STDMETHODCALLTYPE *SetString )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                       BSTR bstrValue);
                   HRESULT ( STDMETHODCALLTYPE *GetBytes )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                        DWORD *pcbValue,
                                          BYTE **ppValue);
                   HRESULT ( STDMETHODCALLTYPE *SetBytes )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                       DWORD cbValue,
                                BYTE *pValue);
                   HRESULT ( STDMETHODCALLTYPE *GetReadStream )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                                IStream **ppValue);
                   HRESULT ( STDMETHODCALLTYPE *GetWriteStream )(
            IPrinterPropertyBag * This,
                       BSTR bstrName,
                                IStream **ppValue);
        END_INTERFACE
    } IPrinterPropertyBagVtbl;
    interface IPrinterPropertyBag
    {
        CONST_VTBL struct IPrinterPropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetBool(This,bstrName,pbValue) )
    ( (This)->lpVtbl -> SetBool(This,bstrName,bValue) )
    ( (This)->lpVtbl -> GetInt32(This,bstrName,pnValue) )
    ( (This)->lpVtbl -> SetInt32(This,bstrName,nValue) )
    ( (This)->lpVtbl -> GetString(This,bstrName,pbstrValue) )
    ( (This)->lpVtbl -> SetString(This,bstrName,bstrValue) )
    ( (This)->lpVtbl -> GetBytes(This,bstrName,pcbValue,ppValue) )
    ( (This)->lpVtbl -> SetBytes(This,bstrName,cbValue,pValue) )
    ( (This)->lpVtbl -> GetReadStream(This,bstrName,ppValue) )
    ( (This)->lpVtbl -> GetWriteStream(This,bstrName,ppValue) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterScriptablePropertyBag;
    typedef struct IPrinterScriptablePropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterScriptablePropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterScriptablePropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterScriptablePropertyBag * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetBool )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out BOOL *pbValue);
                   HRESULT ( STDMETHODCALLTYPE *SetBool )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                       BOOL bValue);
                   HRESULT ( STDMETHODCALLTYPE *GetInt32 )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out LONG *pnValue);
                   HRESULT ( STDMETHODCALLTYPE *SetInt32 )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                       LONG nValue);
                   HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                   HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrValue);
                   HRESULT ( STDMETHODCALLTYPE *GetBytes )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IDispatch **ppArray);
                   HRESULT ( STDMETHODCALLTYPE *SetBytes )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in_opt IDispatch *pArray);
                   HRESULT ( STDMETHODCALLTYPE *GetReadStream )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IPrinterScriptableStream **ppStream);
                   HRESULT ( STDMETHODCALLTYPE *GetWriteStream )(
            __RPC__in IPrinterScriptablePropertyBag * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IPrinterScriptableStream **ppStream);
        END_INTERFACE
    } IPrinterScriptablePropertyBagVtbl;
    interface IPrinterScriptablePropertyBag
    {
        CONST_VTBL struct IPrinterScriptablePropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetBool(This,bstrName,pbValue) )
    ( (This)->lpVtbl -> SetBool(This,bstrName,bValue) )
    ( (This)->lpVtbl -> GetInt32(This,bstrName,pnValue) )
    ( (This)->lpVtbl -> SetInt32(This,bstrName,nValue) )
    ( (This)->lpVtbl -> GetString(This,bstrName,pbstrValue) )
    ( (This)->lpVtbl -> SetString(This,bstrName,bstrValue) )
    ( (This)->lpVtbl -> GetBytes(This,bstrName,ppArray) )
    ( (This)->lpVtbl -> SetBytes(This,bstrName,pArray) )
    ( (This)->lpVtbl -> GetReadStream(This,bstrName,ppStream) )
    ( (This)->lpVtbl -> GetWriteStream(This,bstrName,ppStream) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterScriptablePropertyBag2;
    typedef struct IPrinterScriptablePropertyBag2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterScriptablePropertyBag2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterScriptablePropertyBag2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterScriptablePropertyBag2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetBool )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out BOOL *pbValue);
                   HRESULT ( STDMETHODCALLTYPE *SetBool )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                       BOOL bValue);
                   HRESULT ( STDMETHODCALLTYPE *GetInt32 )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out LONG *pnValue);
                   HRESULT ( STDMETHODCALLTYPE *SetInt32 )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                       LONG nValue);
                   HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                   HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrValue);
                   HRESULT ( STDMETHODCALLTYPE *GetBytes )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IDispatch **ppArray);
                   HRESULT ( STDMETHODCALLTYPE *SetBytes )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in_opt IDispatch *pArray);
                   HRESULT ( STDMETHODCALLTYPE *GetReadStream )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IPrinterScriptableStream **ppStream);
                   HRESULT ( STDMETHODCALLTYPE *GetWriteStream )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IPrinterScriptableStream **ppStream);
                   HRESULT ( STDMETHODCALLTYPE *GetReadStreamAsXML )(
            __RPC__in IPrinterScriptablePropertyBag2 * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IUnknown **ppXmlNode);
        END_INTERFACE
    } IPrinterScriptablePropertyBag2Vtbl;
    interface IPrinterScriptablePropertyBag2
    {
        CONST_VTBL struct IPrinterScriptablePropertyBag2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetBool(This,bstrName,pbValue) )
    ( (This)->lpVtbl -> SetBool(This,bstrName,bValue) )
    ( (This)->lpVtbl -> GetInt32(This,bstrName,pnValue) )
    ( (This)->lpVtbl -> SetInt32(This,bstrName,nValue) )
    ( (This)->lpVtbl -> GetString(This,bstrName,pbstrValue) )
    ( (This)->lpVtbl -> SetString(This,bstrName,bstrValue) )
    ( (This)->lpVtbl -> GetBytes(This,bstrName,ppArray) )
    ( (This)->lpVtbl -> SetBytes(This,bstrName,pArray) )
    ( (This)->lpVtbl -> GetReadStream(This,bstrName,ppStream) )
    ( (This)->lpVtbl -> GetWriteStream(This,bstrName,ppStream) )
    ( (This)->lpVtbl -> GetReadStreamAsXML(This,bstrName,ppXmlNode) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterQueue;
    typedef struct IPrinterQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterQueue * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterQueue * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterQueue * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            IPrinterQueue * This,
                                HANDLE *phPrinter);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IPrinterQueue * This,
                                BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *SendBidiQuery )(
            IPrinterQueue * This,
                       BSTR bstrBidiQuery);
                   HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            IPrinterQueue * This,
                                IPrinterPropertyBag **ppPropertyBag);
        END_INTERFACE
    } IPrinterQueueVtbl;
    interface IPrinterQueue
    {
        CONST_VTBL struct IPrinterQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Handle(This,phPrinter) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> SendBidiQuery(This,bstrBidiQuery) )
    ( (This)->lpVtbl -> GetProperties(This,ppPropertyBag) )
typedef
enum tagPrintJobStatus
    {
        PrintJobStatus_Paused = 0x1,
        PrintJobStatus_Error = 0x2,
        PrintJobStatus_Deleting = 0x4,
        PrintJobStatus_Spooling = 0x8,
        PrintJobStatus_Printing = 0x10,
        PrintJobStatus_Offline = 0x20,
        PrintJobStatus_PaperOut = 0x40,
        PrintJobStatus_Printed = 0x80,
        PrintJobStatus_Deleted = 0x100,
        PrintJobStatus_BlockedDeviceQueue = 0x200,
        PrintJobStatus_UserIntervention = 0x400,
        PrintJobStatus_Restarted = 0x800,
        PrintJobStatus_Complete = 0x1000,
        PrintJobStatus_Retained = 0x2000
    } PrintJobStatus;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintJob;
    typedef struct IPrintJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintJob * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintJob * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IPrintJob * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IPrintJob * This,
                                ULONG *pulID);
                        HRESULT ( STDMETHODCALLTYPE *get_PrintedPages )(
            IPrintJob * This,
                                ULONG *pulPages);
                        HRESULT ( STDMETHODCALLTYPE *get_TotalPages )(
            IPrintJob * This,
                                ULONG *pulPages);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            IPrintJob * This,
                                PrintJobStatus *pStatus);
                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionTime )(
            IPrintJob * This,
                                DATE *pSubmissionTime);
        HRESULT ( STDMETHODCALLTYPE *RequestCancel )(
            IPrintJob * This);
        END_INTERFACE
    } IPrintJobVtbl;
    interface IPrintJob
    {
        CONST_VTBL struct IPrintJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Id(This,pulID) )
    ( (This)->lpVtbl -> get_PrintedPages(This,pulPages) )
    ( (This)->lpVtbl -> get_TotalPages(This,pulPages) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_SubmissionTime(This,pSubmissionTime) )
    ( (This)->lpVtbl -> RequestCancel(This) )
EXTERN_C const IID IID_IPrintJobCollection;
    typedef struct IPrintJobCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrintJobCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrintJobCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrintJobCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrintJobCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrintJobCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrintJobCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintJobCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            IPrintJobCollection * This,
                                ULONG *pulCount);
                   HRESULT ( STDMETHODCALLTYPE *GetAt )(
            IPrintJobCollection * This,
                       ULONG ulIndex,
                                IPrintJob **ppJob);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            IPrintJobCollection * This,
                                IUnknown **ppUnk);
        END_INTERFACE
    } IPrintJobCollectionVtbl;
    interface IPrintJobCollection
    {
        CONST_VTBL struct IPrintJobCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pulCount) )
    ( (This)->lpVtbl -> GetAt(This,ulIndex,ppJob) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
EXTERN_C const IID IID_IPrinterQueueViewEvent;
    typedef struct IPrinterQueueViewEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterQueueViewEvent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterQueueViewEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterQueueViewEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterQueueViewEvent * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterQueueViewEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterQueueViewEvent * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterQueueViewEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *OnChanged )(
            IPrinterQueueViewEvent * This,
                       IPrintJobCollection *pCollection,
                       ULONG ulViewOffset,
                       ULONG ulViewSize,
                       ULONG ulCountJobsInPrintQueue);
        END_INTERFACE
    } IPrinterQueueViewEventVtbl;
    interface IPrinterQueueViewEvent
    {
        CONST_VTBL struct IPrinterQueueViewEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnChanged(This,pCollection,ulViewOffset,ulViewSize,ulCountJobsInPrintQueue) )
EXTERN_C const IID IID_IPrinterQueueView;
    typedef struct IPrinterQueueViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterQueueView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterQueueView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterQueueView * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterQueueView * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterQueueView * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterQueueView * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterQueueView * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *SetViewRange )(
            IPrinterQueueView * This,
                       ULONG ulViewOffset,
                       ULONG ulViewSize);
        END_INTERFACE
    } IPrinterQueueViewVtbl;
    interface IPrinterQueueView
    {
        CONST_VTBL struct IPrinterQueueViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetViewRange(This,ulViewOffset,ulViewSize) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterQueueEvent;
    typedef struct IPrinterQueueEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterQueueEvent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterQueueEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterQueueEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterQueueEvent * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterQueueEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterQueueEvent * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterQueueEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *OnBidiResponseReceived )(
            IPrinterQueueEvent * This,
                       BSTR bstrResponse,
                       HRESULT hrStatus);
        END_INTERFACE
    } IPrinterQueueEventVtbl;
    interface IPrinterQueueEvent
    {
        CONST_VTBL struct IPrinterQueueEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnBidiResponseReceived(This,bstrResponse,hrStatus) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterBidiSetRequestCallback;
    typedef struct IPrinterBidiSetRequestCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterBidiSetRequestCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterBidiSetRequestCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterBidiSetRequestCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Completed )(
            IPrinterBidiSetRequestCallback * This,
                       BSTR bstrResponse,
                       HRESULT hrStatus);
        END_INTERFACE
    } IPrinterBidiSetRequestCallbackVtbl;
    interface IPrinterBidiSetRequestCallback
    {
        CONST_VTBL struct IPrinterBidiSetRequestCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Completed(This,bstrResponse,hrStatus) )
EXTERN_C const IID IID_IPrinterExtensionAsyncOperation;
    typedef struct IPrinterExtensionAsyncOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterExtensionAsyncOperation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterExtensionAsyncOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterExtensionAsyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IPrinterExtensionAsyncOperation * This);
        END_INTERFACE
    } IPrinterExtensionAsyncOperationVtbl;
    interface IPrinterExtensionAsyncOperation
    {
        CONST_VTBL struct IPrinterExtensionAsyncOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IPrinterQueue2;
    typedef struct IPrinterQueue2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterQueue2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterQueue2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterQueue2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterQueue2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterQueue2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterQueue2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterQueue2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            IPrinterQueue2 * This,
                                HANDLE *phPrinter);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IPrinterQueue2 * This,
                                BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *SendBidiQuery )(
            IPrinterQueue2 * This,
                       BSTR bstrBidiQuery);
                   HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            IPrinterQueue2 * This,
                                IPrinterPropertyBag **ppPropertyBag);
                   HRESULT ( STDMETHODCALLTYPE *SendBidiSetRequestAsync )(
            IPrinterQueue2 * This,
                       BSTR bstrBidiRequest,
                       IPrinterBidiSetRequestCallback *pCallback,
                                IPrinterExtensionAsyncOperation **ppAsyncOperation);
                   HRESULT ( STDMETHODCALLTYPE *GetPrinterQueueView )(
            IPrinterQueue2 * This,
                       ULONG ulViewOffset,
                       ULONG ulViewSize,
                                IPrinterQueueView **ppJobView);
        END_INTERFACE
    } IPrinterQueue2Vtbl;
    interface IPrinterQueue2
    {
        CONST_VTBL struct IPrinterQueue2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Handle(This,phPrinter) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> SendBidiQuery(This,bstrBidiQuery) )
    ( (This)->lpVtbl -> GetProperties(This,ppPropertyBag) )
    ( (This)->lpVtbl -> SendBidiSetRequestAsync(This,bstrBidiRequest,pCallback,ppAsyncOperation) )
    ( (This)->lpVtbl -> GetPrinterQueueView(This,ulViewOffset,ulViewSize,ppJobView) )
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterExtensionContext;
    typedef struct IPrinterExtensionContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterExtensionContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterExtensionContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterExtensionContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterExtensionContext * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterExtensionContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterExtensionContext * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterExtensionContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_PrinterQueue )(
            IPrinterExtensionContext * This,
                                IPrinterQueue **ppQueue);
                            HRESULT ( STDMETHODCALLTYPE *get_PrintSchemaTicket )(
            IPrinterExtensionContext * This,
                                IPrintSchemaTicket **ppTicket);
                            HRESULT ( STDMETHODCALLTYPE *get_DriverProperties )(
            IPrinterExtensionContext * This,
                                IPrinterPropertyBag **ppPropertyBag);
                            HRESULT ( STDMETHODCALLTYPE *get_UserProperties )(
            IPrinterExtensionContext * This,
                                IPrinterPropertyBag **ppPropertyBag);
        END_INTERFACE
    } IPrinterExtensionContextVtbl;
    interface IPrinterExtensionContext
    {
        CONST_VTBL struct IPrinterExtensionContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PrinterQueue(This,ppQueue) )
    ( (This)->lpVtbl -> get_PrintSchemaTicket(This,ppTicket) )
    ( (This)->lpVtbl -> get_DriverProperties(This,ppPropertyBag) )
    ( (This)->lpVtbl -> get_UserProperties(This,ppPropertyBag) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrinterExtensionRequest;
    typedef struct IPrinterExtensionRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterExtensionRequest * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterExtensionRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterExtensionRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterExtensionRequest * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterExtensionRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterExtensionRequest * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterExtensionRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IPrinterExtensionRequest * This,
                       HRESULT hrStatus,
                       BSTR bstrLogMessage);
                   HRESULT ( STDMETHODCALLTYPE *Complete )(
            IPrinterExtensionRequest * This);
        END_INTERFACE
    } IPrinterExtensionRequestVtbl;
    interface IPrinterExtensionRequest
    {
        CONST_VTBL struct IPrinterExtensionRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Cancel(This,hrStatus,bstrLogMessage) )
    ( (This)->lpVtbl -> Complete(This) )
EXTERN_C const IID IID_IPrinterExtensionEventArgs;
    typedef struct IPrinterExtensionEventArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterExtensionEventArgs * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterExtensionEventArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterExtensionEventArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterExtensionEventArgs * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterExtensionEventArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterExtensionEventArgs * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterExtensionEventArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_PrinterQueue )(
            IPrinterExtensionEventArgs * This,
                                IPrinterQueue **ppQueue);
                            HRESULT ( STDMETHODCALLTYPE *get_PrintSchemaTicket )(
            IPrinterExtensionEventArgs * This,
                                IPrintSchemaTicket **ppTicket);
                            HRESULT ( STDMETHODCALLTYPE *get_DriverProperties )(
            IPrinterExtensionEventArgs * This,
                                IPrinterPropertyBag **ppPropertyBag);
                            HRESULT ( STDMETHODCALLTYPE *get_UserProperties )(
            IPrinterExtensionEventArgs * This,
                                IPrinterPropertyBag **ppPropertyBag);
                            HRESULT ( STDMETHODCALLTYPE *get_BidiNotification )(
            IPrinterExtensionEventArgs * This,
                                BSTR *pbstrBidiNotification);
                            HRESULT ( STDMETHODCALLTYPE *get_ReasonId )(
            IPrinterExtensionEventArgs * This,
                                GUID *pReasonId);
                            HRESULT ( STDMETHODCALLTYPE *get_Request )(
            IPrinterExtensionEventArgs * This,
                                IPrinterExtensionRequest **ppRequest);
                            HRESULT ( STDMETHODCALLTYPE *get_SourceApplication )(
            IPrinterExtensionEventArgs * This,
                                BSTR *pbstrApplication);
                            HRESULT ( STDMETHODCALLTYPE *get_DetailedReasonId )(
            IPrinterExtensionEventArgs * This,
                                GUID *pDetailedReasonId);
                            HRESULT ( STDMETHODCALLTYPE *get_WindowModal )(
            IPrinterExtensionEventArgs * This,
                                BOOL *pbModal);
                            HRESULT ( STDMETHODCALLTYPE *get_WindowParent )(
            IPrinterExtensionEventArgs * This,
                                HANDLE *phwndParent);
        END_INTERFACE
    } IPrinterExtensionEventArgsVtbl;
    interface IPrinterExtensionEventArgs
    {
        CONST_VTBL struct IPrinterExtensionEventArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PrinterQueue(This,ppQueue) )
    ( (This)->lpVtbl -> get_PrintSchemaTicket(This,ppTicket) )
    ( (This)->lpVtbl -> get_DriverProperties(This,ppPropertyBag) )
    ( (This)->lpVtbl -> get_UserProperties(This,ppPropertyBag) )
    ( (This)->lpVtbl -> get_BidiNotification(This,pbstrBidiNotification) )
    ( (This)->lpVtbl -> get_ReasonId(This,pReasonId) )
    ( (This)->lpVtbl -> get_Request(This,ppRequest) )
    ( (This)->lpVtbl -> get_SourceApplication(This,pbstrApplication) )
    ( (This)->lpVtbl -> get_DetailedReasonId(This,pDetailedReasonId) )
    ( (This)->lpVtbl -> get_WindowModal(This,pbModal) )
    ( (This)->lpVtbl -> get_WindowParent(This,phwndParent) )
EXTERN_C const IID IID_IPrinterExtensionContextCollection;
    typedef struct IPrinterExtensionContextCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterExtensionContextCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterExtensionContextCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterExtensionContextCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrinterExtensionContextCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrinterExtensionContextCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrinterExtensionContextCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterExtensionContextCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IPrinterExtensionContextCollection * This,
                                __RPC__out ULONG *pulCount);
                   HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPrinterExtensionContextCollection * This,
                       ULONG ulIndex,
                                __RPC__deref_out_opt IPrinterExtensionContext **ppContext);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IPrinterExtensionContextCollection * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
        END_INTERFACE
    } IPrinterExtensionContextCollectionVtbl;
    interface IPrinterExtensionContextCollection
    {
        CONST_VTBL struct IPrinterExtensionContextCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pulCount) )
    ( (This)->lpVtbl -> GetAt(This,ulIndex,ppContext) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
EXTERN_C const IID IID_IPrinterExtensionEvent;
    typedef struct IPrinterExtensionEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrinterExtensionEvent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrinterExtensionEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrinterExtensionEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrinterExtensionEvent * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrinterExtensionEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrinterExtensionEvent * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterExtensionEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *OnDriverEvent )(
            IPrinterExtensionEvent * This,
                       IPrinterExtensionEventArgs *pEventArgs);
                   HRESULT ( STDMETHODCALLTYPE *OnPrinterQueuesEnumerated )(
            IPrinterExtensionEvent * This,
                       IPrinterExtensionContextCollection *pContextCollection);
        END_INTERFACE
    } IPrinterExtensionEventVtbl;
    interface IPrinterExtensionEvent
    {
        CONST_VTBL struct IPrinterExtensionEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnDriverEvent(This,pEventArgs) )
    ( (This)->lpVtbl -> OnPrinterQueuesEnumerated(This,pContextCollection) )
EXTERN_C const IID IID_IPrinterExtensionManager;
    typedef struct IPrinterExtensionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterExtensionManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterExtensionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterExtensionManager * This);
        HRESULT ( STDMETHODCALLTYPE *EnableEvents )(
            __RPC__in IPrinterExtensionManager * This,
                       GUID printerDriverId);
        HRESULT ( STDMETHODCALLTYPE *DisableEvents )(
            __RPC__in IPrinterExtensionManager * This);
        END_INTERFACE
    } IPrinterExtensionManagerVtbl;
    interface IPrinterExtensionManager
    {
        CONST_VTBL struct IPrinterExtensionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableEvents(This,printerDriverId) )
    ( (This)->lpVtbl -> DisableEvents(This) )
EXTERN_C const IID IID_IPrinterScriptContext;
    typedef struct IPrinterScriptContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrinterScriptContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrinterScriptContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrinterScriptContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrinterScriptContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrinterScriptContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrinterScriptContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrinterScriptContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_DriverProperties )(
            __RPC__in IPrinterScriptContext * This,
                                __RPC__deref_out_opt IPrinterScriptablePropertyBag **ppPropertyBag);
                            HRESULT ( STDMETHODCALLTYPE *get_QueueProperties )(
            __RPC__in IPrinterScriptContext * This,
                                __RPC__deref_out_opt IPrinterScriptablePropertyBag **ppPropertyBag);
                            HRESULT ( STDMETHODCALLTYPE *get_UserProperties )(
            __RPC__in IPrinterScriptContext * This,
                                __RPC__deref_out_opt IPrinterScriptablePropertyBag **ppPropertyBag);
        END_INTERFACE
    } IPrinterScriptContextVtbl;
    interface IPrinterScriptContext
    {
        CONST_VTBL struct IPrinterScriptContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DriverProperties(This,ppPropertyBag) )
    ( (This)->lpVtbl -> get_QueueProperties(This,ppPropertyBag) )
    ( (This)->lpVtbl -> get_UserProperties(This,ppPropertyBag) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0037_v0_0_s_ifspec;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_PrinterExtensionLib;
EXTERN_C const CLSID CLSID_PrinterQueue;
class DECLSPEC_UUID("EB54C230-798C-4C9E-B461-29FAD04039B1")
PrinterQueue;
EXTERN_C const CLSID CLSID_PrinterQueueView;
class DECLSPEC_UUID("EB54C231-798C-4C9E-B461-29FAD04039B1")
PrinterQueueView;
EXTERN_C const CLSID CLSID_PrintSchemaAsyncOperation;
class DECLSPEC_UUID("43b2f83d-10f2-48ab-831b-55fdbdbd34a4")
PrintSchemaAsyncOperation;
EXTERN_C const CLSID CLSID_PrinterExtensionManager;
class DECLSPEC_UUID("331B60DA-9E90-4DD0-9C84-EAC4E659B61F")
PrinterExtensionManager;
DEFINE_GUID(PRINTER_EXTENSION_DETAILEDREASON_PRINTER_STATUS, 0x5d5a1704, 0xdfd1, 0x4181, 0x8e, 0xee, 0x81, 0x5c, 0x86, 0xed, 0xad, 0x31);
DEFINE_GUID(PRINTER_EXTENSION_REASON_PRINT_PREFERENCES, 0xec8f261f, 0x267c, 0x469f, 0xb5, 0xd6, 0x39, 0x33, 0x02, 0x3c, 0x29, 0xcc);
DEFINE_GUID(PRINTER_EXTENSION_REASON_DRIVER_EVENT, 0x23bb1328, 0x63de, 0x4293, 0x91, 0x5b, 0xa6, 0xa2, 0x3d, 0x92, 0x9a, 0xcb);
DEFINE_GUID(FMTID_PrinterPropertyBag, 0x75f9adca, 0x097d, 0x45c3, 0xa6, 0xe4, 0xba, 0xb2, 0x9e, 0x27, 0x6f, 0x3e);
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_printdriver_0000_0038_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
