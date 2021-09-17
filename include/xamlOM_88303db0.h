#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IVisualTreeServiceCallback IVisualTreeServiceCallback;
typedef interface IVisualTreeServiceCallback2 IVisualTreeServiceCallback2;
typedef interface IVisualTreeService IVisualTreeService;
typedef interface IXamlDiagnostics IXamlDiagnostics;
typedef interface IBitmapData IBitmapData;
typedef interface IVisualTreeService2 IVisualTreeService2;
typedef interface IVisualTreeService3 IVisualTreeService3;
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"
#include "dxgi1_2.h"
extern "C"{
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
_Check_return_ HRESULT InitializeXamlDiagnostic(_In_ LPCWSTR endPointName, _In_ DWORD pid, _In_ LPCWSTR wszDllXamlDiagnostics, _In_ LPCWSTR wszTAPDllName, _In_ CLSID tapClsid);
_Check_return_ HRESULT InitializeXamlDiagnosticsEx(_In_ LPCWSTR endPointName, _In_ DWORD pid, _In_ LPCWSTR wszDllXamlDiagnostics, _In_ LPCWSTR wszTAPDllName, _In_ CLSID tapClsid, _In_ LPCWSTR wszInitializationData);
typedef MIDL_uhyper InstanceHandle;
typedef
enum VisualMutationType
    {
        Add = 0,
        Remove = ( Add + 1 )
    } VisualMutationType;
typedef
enum BaseValueSource
    {
        BaseValueSourceUnknown = 0,
        BaseValueSourceDefault = ( BaseValueSourceUnknown + 1 ) ,
        BaseValueSourceBuiltInStyle = ( BaseValueSourceDefault + 1 ) ,
        BaseValueSourceStyle = ( BaseValueSourceBuiltInStyle + 1 ) ,
        BaseValueSourceLocal = ( BaseValueSourceStyle + 1 ) ,
        Inherited = ( BaseValueSourceLocal + 1 ) ,
        DefaultStyleTrigger = ( Inherited + 1 ) ,
        TemplateTrigger = ( DefaultStyleTrigger + 1 ) ,
        StyleTrigger = ( TemplateTrigger + 1 ) ,
        ImplicitStyleReference = ( StyleTrigger + 1 ) ,
        ParentTemplate = ( ImplicitStyleReference + 1 ) ,
        ParentTemplateTrigger = ( ParentTemplate + 1 ) ,
        Animation = ( ParentTemplateTrigger + 1 ) ,
        Coercion = ( Animation + 1 ) ,
        BaseValueSourceVisualState = ( Coercion + 1 )
    } BaseValueSource;
typedef struct SourceInfo
    {
    BSTR FileName;
    unsigned int LineNumber;
    unsigned int ColumnNumber;
    unsigned int CharPosition;
    BSTR Hash;
    } SourceInfo;
typedef struct ParentChildRelation
    {
    InstanceHandle Parent;
    InstanceHandle Child;
    unsigned int ChildIndex;
    } ParentChildRelation;
typedef struct VisualElement
    {
    InstanceHandle Handle;
    SourceInfo SrcInfo;
    BSTR Type;
    BSTR Name;
    unsigned int NumChildren;
    } VisualElement;
typedef struct PropertyChainSource
    {
    InstanceHandle Handle;
    BSTR TargetType;
    BSTR Name;
    BaseValueSource Source;
    SourceInfo SrcInfo;
    } PropertyChainSource;
typedef
enum MetadataBit
    {
        None = 0,
        IsValueHandle = 0x1,
        IsPropertyReadOnly = 0x2,
        IsValueCollection = 0x4,
        IsValueCollectionReadOnly = 0x8,
        IsValueBindingExpression = 0x10,
        IsValueNull = 0x20,
        IsValueHandleAndEvaluatedValue = 0x40
    } MetadataBit;
typedef struct PropertyChainValue
    {
    unsigned int Index;
    BSTR Type;
    BSTR DeclaringType;
    BSTR ValueType;
    BSTR ItemType;
    BSTR Value;
    BOOL Overridden;
    hyper MetadataBits;
    BSTR PropertyName;
    unsigned int PropertyChainIndex;
    } PropertyChainValue;
typedef struct EnumType
    {
    BSTR Name;
    SAFEARRAY * ValueInts;
    SAFEARRAY * ValueStrings;
    } EnumType;
typedef struct CollectionElementValue
    {
    unsigned int Index;
    BSTR ValueType;
    BSTR Value;
    hyper MetadataBits;
    } CollectionElementValue;
typedef
enum RenderTargetBitmapOptions
    {
        RenderTarget = 0,
        RenderTargetAndChildren = ( RenderTarget + 1 )
    } RenderTargetBitmapOptions;
typedef struct BitmapDescription
    {
    unsigned int Width;
    unsigned int Height;
    DXGI_FORMAT Format;
    DXGI_ALPHA_MODE AlphaMode;
    } BitmapDescription;
typedef
enum ResourceType
    {
        ResourceTypeStatic = 0,
        ResourceTypeTheme = ( ResourceTypeStatic + 1 )
    } ResourceType;
typedef
enum VisualElementState
    {
        ErrorResolved = 0,
        ErrorResourceNotFound = ( ErrorResolved + 1 ) ,
        ErrorInvalidResource = ( ErrorResourceNotFound + 1 )
    } VisualElementState;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IVisualTreeServiceCallback;
    typedef struct IVisualTreeServiceCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVisualTreeServiceCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVisualTreeServiceCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVisualTreeServiceCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnVisualTreeChange )(
            __RPC__in IVisualTreeServiceCallback * This,
                       ParentChildRelation relation,
                       VisualElement element,
                       VisualMutationType mutationType);
        END_INTERFACE
    } IVisualTreeServiceCallbackVtbl;
    interface IVisualTreeServiceCallback
    {
        CONST_VTBL struct IVisualTreeServiceCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnVisualTreeChange(This,relation,element,mutationType) )
EXTERN_C const IID IID_IVisualTreeServiceCallback2;
    typedef struct IVisualTreeServiceCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVisualTreeServiceCallback2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVisualTreeServiceCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVisualTreeServiceCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnVisualTreeChange )(
            __RPC__in IVisualTreeServiceCallback2 * This,
                       ParentChildRelation relation,
                       VisualElement element,
                       VisualMutationType mutationType);
        HRESULT ( STDMETHODCALLTYPE *OnElementStateChanged )(
            __RPC__in IVisualTreeServiceCallback2 * This,
                       InstanceHandle element,
                       VisualElementState elementState,
                       __RPC__in LPCWSTR context);
        END_INTERFACE
    } IVisualTreeServiceCallback2Vtbl;
    interface IVisualTreeServiceCallback2
    {
        CONST_VTBL struct IVisualTreeServiceCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnVisualTreeChange(This,relation,element,mutationType) )
    ( (This)->lpVtbl -> OnElementStateChanged(This,element,elementState,context) )
EXTERN_C const IID IID_IVisualTreeService;
    typedef struct IVisualTreeServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVisualTreeService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVisualTreeService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVisualTreeService * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseVisualTreeChange )(
            __RPC__in IVisualTreeService * This,
                       __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *UnadviseVisualTreeChange )(
            __RPC__in IVisualTreeService * This,
                       __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *GetEnums )(
            __RPC__in IVisualTreeService * This,
                        __RPC__out unsigned int *pCount,
                                          __RPC__deref_out_ecount_full_opt(*pCount) EnumType **ppEnums);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IVisualTreeService * This,
                       __RPC__in BSTR typeName,
                       __RPC__in BSTR value,
                                __RPC__out InstanceHandle *pInstanceHandle);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValuesChain )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle instanceHandle,
                        __RPC__out unsigned int *pSourceCount,
                                          __RPC__deref_out_ecount_full_opt(*pSourceCount) PropertyChainSource **ppPropertySources,
                        __RPC__out unsigned int *pPropertyCount,
                                          __RPC__deref_out_ecount_full_opt(*pPropertyCount) PropertyChainValue **ppPropertyValues);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle instanceHandle,
                       InstanceHandle value,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *ClearProperty )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle instanceHandle,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCollectionCount )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle instanceHandle,
                        __RPC__out unsigned int *pCollectionSize);
        HRESULT ( STDMETHODCALLTYPE *GetCollectionElements )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle instanceHandle,
                       unsigned int startIndex,
                            __RPC__inout unsigned int *pElementCount,
                                          __RPC__deref_out_ecount_full_opt(*pElementCount) CollectionElementValue **ppElementValues);
        HRESULT ( STDMETHODCALLTYPE *AddChild )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle parent,
                       InstanceHandle child,
                       unsigned int index);
        HRESULT ( STDMETHODCALLTYPE *RemoveChild )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle parent,
                       unsigned int index);
        HRESULT ( STDMETHODCALLTYPE *ClearChildren )(
            __RPC__in IVisualTreeService * This,
                       InstanceHandle parent);
        END_INTERFACE
    } IVisualTreeServiceVtbl;
    interface IVisualTreeService
    {
        CONST_VTBL struct IVisualTreeServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseVisualTreeChange(This,pCallback) )
    ( (This)->lpVtbl -> UnadviseVisualTreeChange(This,pCallback) )
    ( (This)->lpVtbl -> GetEnums(This,pCount,ppEnums) )
    ( (This)->lpVtbl -> CreateInstance(This,typeName,value,pInstanceHandle) )
    ( (This)->lpVtbl -> GetPropertyValuesChain(This,instanceHandle,pSourceCount,ppPropertySources,pPropertyCount,ppPropertyValues) )
    ( (This)->lpVtbl -> SetProperty(This,instanceHandle,value,propertyIndex) )
    ( (This)->lpVtbl -> ClearProperty(This,instanceHandle,propertyIndex) )
    ( (This)->lpVtbl -> GetCollectionCount(This,instanceHandle,pCollectionSize) )
    ( (This)->lpVtbl -> GetCollectionElements(This,instanceHandle,startIndex,pElementCount,ppElementValues) )
    ( (This)->lpVtbl -> AddChild(This,parent,child,index) )
    ( (This)->lpVtbl -> RemoveChild(This,parent,index) )
    ( (This)->lpVtbl -> ClearChildren(This,parent) )
EXTERN_C const IID IID_IXamlDiagnostics;
    typedef struct IXamlDiagnosticsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXamlDiagnostics * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXamlDiagnostics * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXamlDiagnostics * This);
        HRESULT ( STDMETHODCALLTYPE *GetDispatcher )(
            __RPC__in IXamlDiagnostics * This,
                                __RPC__deref_out_opt IInspectable **ppDispatcher);
        HRESULT ( STDMETHODCALLTYPE *GetUiLayer )(
            __RPC__in IXamlDiagnostics * This,
                                __RPC__deref_out_opt IInspectable **ppLayer);
        HRESULT ( STDMETHODCALLTYPE *GetApplication )(
            __RPC__in IXamlDiagnostics * This,
                                __RPC__deref_out_opt IInspectable **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *GetIInspectableFromHandle )(
            __RPC__in IXamlDiagnostics * This,
                       InstanceHandle instanceHandle,
                                __RPC__deref_out_opt IInspectable **ppInstance);
        HRESULT ( STDMETHODCALLTYPE *GetHandleFromIInspectable )(
            __RPC__in IXamlDiagnostics * This,
                       __RPC__in_opt IInspectable *pInstance,
                                __RPC__out InstanceHandle *pHandle);
        HRESULT ( STDMETHODCALLTYPE *HitTest )(
            __RPC__in IXamlDiagnostics * This,
                       RECT rect,
                        __RPC__out unsigned int *pCount,
                                          __RPC__deref_out_ecount_full_opt(*pCount) InstanceHandle **ppInstanceHandles);
        HRESULT ( STDMETHODCALLTYPE *RegisterInstance )(
            __RPC__in IXamlDiagnostics * This,
                       __RPC__in_opt IInspectable *pInstance,
                                __RPC__out InstanceHandle *pInstanceHandle);
        HRESULT ( STDMETHODCALLTYPE *GetInitializationData )(
            __RPC__in IXamlDiagnostics * This,
                                __RPC__deref_out_opt BSTR *pInitializationData);
        END_INTERFACE
    } IXamlDiagnosticsVtbl;
    interface IXamlDiagnostics
    {
        CONST_VTBL struct IXamlDiagnosticsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDispatcher(This,ppDispatcher) )
    ( (This)->lpVtbl -> GetUiLayer(This,ppLayer) )
    ( (This)->lpVtbl -> GetApplication(This,ppApplication) )
    ( (This)->lpVtbl -> GetIInspectableFromHandle(This,instanceHandle,ppInstance) )
    ( (This)->lpVtbl -> GetHandleFromIInspectable(This,pInstance,pHandle) )
    ( (This)->lpVtbl -> HitTest(This,rect,pCount,ppInstanceHandles) )
    ( (This)->lpVtbl -> RegisterInstance(This,pInstance,pInstanceHandle) )
    ( (This)->lpVtbl -> GetInitializationData(This,pInitializationData) )
EXTERN_C const IID IID_IBitmapData;
    typedef struct IBitmapDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBitmapData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBitmapData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBitmapData * This);
        HRESULT ( STDMETHODCALLTYPE *CopyBytesTo )(
            __RPC__in IBitmapData * This,
                       unsigned int sourceOffsetInBytes,
                       unsigned int maxBytesToCopy,
                                 __RPC__out_ecount_full(maxBytesToCopy) byte *pvBytes,
                        __RPC__out unsigned int *numberOfBytesCopied);
        HRESULT ( STDMETHODCALLTYPE *GetStride )(
            __RPC__in IBitmapData * This,
                        __RPC__out unsigned int *pStride);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapDescription )(
            __RPC__in IBitmapData * This,
                        __RPC__out BitmapDescription *pBitmapDescription);
        HRESULT ( STDMETHODCALLTYPE *GetSourceBitmapDescription )(
            __RPC__in IBitmapData * This,
                        __RPC__out BitmapDescription *pBitmapDescription);
        END_INTERFACE
    } IBitmapDataVtbl;
    interface IBitmapData
    {
        CONST_VTBL struct IBitmapDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CopyBytesTo(This,sourceOffsetInBytes,maxBytesToCopy,pvBytes,numberOfBytesCopied) )
    ( (This)->lpVtbl -> GetStride(This,pStride) )
    ( (This)->lpVtbl -> GetBitmapDescription(This,pBitmapDescription) )
    ( (This)->lpVtbl -> GetSourceBitmapDescription(This,pBitmapDescription) )
EXTERN_C const IID IID_IVisualTreeService2;
    typedef struct IVisualTreeService2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVisualTreeService2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVisualTreeService2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVisualTreeService2 * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseVisualTreeChange )(
            __RPC__in IVisualTreeService2 * This,
                       __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *UnadviseVisualTreeChange )(
            __RPC__in IVisualTreeService2 * This,
                       __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *GetEnums )(
            __RPC__in IVisualTreeService2 * This,
                        __RPC__out unsigned int *pCount,
                                          __RPC__deref_out_ecount_full_opt(*pCount) EnumType **ppEnums);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IVisualTreeService2 * This,
                       __RPC__in BSTR typeName,
                       __RPC__in BSTR value,
                                __RPC__out InstanceHandle *pInstanceHandle);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValuesChain )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle instanceHandle,
                        __RPC__out unsigned int *pSourceCount,
                                          __RPC__deref_out_ecount_full_opt(*pSourceCount) PropertyChainSource **ppPropertySources,
                        __RPC__out unsigned int *pPropertyCount,
                                          __RPC__deref_out_ecount_full_opt(*pPropertyCount) PropertyChainValue **ppPropertyValues);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle instanceHandle,
                       InstanceHandle value,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *ClearProperty )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle instanceHandle,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCollectionCount )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle instanceHandle,
                        __RPC__out unsigned int *pCollectionSize);
        HRESULT ( STDMETHODCALLTYPE *GetCollectionElements )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle instanceHandle,
                       unsigned int startIndex,
                            __RPC__inout unsigned int *pElementCount,
                                          __RPC__deref_out_ecount_full_opt(*pElementCount) CollectionElementValue **ppElementValues);
        HRESULT ( STDMETHODCALLTYPE *AddChild )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle parent,
                       InstanceHandle child,
                       unsigned int index);
        HRESULT ( STDMETHODCALLTYPE *RemoveChild )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle parent,
                       unsigned int index);
        HRESULT ( STDMETHODCALLTYPE *ClearChildren )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle parent);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyIndex )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle object,
                       __RPC__in LPCWSTR propertyName,
                        __RPC__out unsigned int *pPropertyIndex);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle object,
                       unsigned int propertyIndex,
                        __RPC__out InstanceHandle *pValue);
        HRESULT ( STDMETHODCALLTYPE *ReplaceResource )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle resourceDictionary,
                       InstanceHandle key,
                       InstanceHandle newValue);
        HRESULT ( STDMETHODCALLTYPE *RenderTargetBitmap )(
            __RPC__in IVisualTreeService2 * This,
                       InstanceHandle handle,
                       RenderTargetBitmapOptions options,
                       unsigned int maxPixelWidth,
                       unsigned int maxPixelHeight,
                        __RPC__deref_out_opt IBitmapData **ppBitmapData);
        END_INTERFACE
    } IVisualTreeService2Vtbl;
    interface IVisualTreeService2
    {
        CONST_VTBL struct IVisualTreeService2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseVisualTreeChange(This,pCallback) )
    ( (This)->lpVtbl -> UnadviseVisualTreeChange(This,pCallback) )
    ( (This)->lpVtbl -> GetEnums(This,pCount,ppEnums) )
    ( (This)->lpVtbl -> CreateInstance(This,typeName,value,pInstanceHandle) )
    ( (This)->lpVtbl -> GetPropertyValuesChain(This,instanceHandle,pSourceCount,ppPropertySources,pPropertyCount,ppPropertyValues) )
    ( (This)->lpVtbl -> SetProperty(This,instanceHandle,value,propertyIndex) )
    ( (This)->lpVtbl -> ClearProperty(This,instanceHandle,propertyIndex) )
    ( (This)->lpVtbl -> GetCollectionCount(This,instanceHandle,pCollectionSize) )
    ( (This)->lpVtbl -> GetCollectionElements(This,instanceHandle,startIndex,pElementCount,ppElementValues) )
    ( (This)->lpVtbl -> AddChild(This,parent,child,index) )
    ( (This)->lpVtbl -> RemoveChild(This,parent,index) )
    ( (This)->lpVtbl -> ClearChildren(This,parent) )
    ( (This)->lpVtbl -> GetPropertyIndex(This,object,propertyName,pPropertyIndex) )
    ( (This)->lpVtbl -> GetProperty(This,object,propertyIndex,pValue) )
    ( (This)->lpVtbl -> ReplaceResource(This,resourceDictionary,key,newValue) )
    ( (This)->lpVtbl -> RenderTargetBitmap(This,handle,options,maxPixelWidth,maxPixelHeight,ppBitmapData) )
EXTERN_C const IID IID_IVisualTreeService3;
    typedef struct IVisualTreeService3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVisualTreeService3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVisualTreeService3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVisualTreeService3 * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseVisualTreeChange )(
            __RPC__in IVisualTreeService3 * This,
                       __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *UnadviseVisualTreeChange )(
            __RPC__in IVisualTreeService3 * This,
                       __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *GetEnums )(
            __RPC__in IVisualTreeService3 * This,
                        __RPC__out unsigned int *pCount,
                                          __RPC__deref_out_ecount_full_opt(*pCount) EnumType **ppEnums);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IVisualTreeService3 * This,
                       __RPC__in BSTR typeName,
                       __RPC__in BSTR value,
                                __RPC__out InstanceHandle *pInstanceHandle);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValuesChain )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle instanceHandle,
                        __RPC__out unsigned int *pSourceCount,
                                          __RPC__deref_out_ecount_full_opt(*pSourceCount) PropertyChainSource **ppPropertySources,
                        __RPC__out unsigned int *pPropertyCount,
                                          __RPC__deref_out_ecount_full_opt(*pPropertyCount) PropertyChainValue **ppPropertyValues);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle instanceHandle,
                       InstanceHandle value,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *ClearProperty )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle instanceHandle,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCollectionCount )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle instanceHandle,
                        __RPC__out unsigned int *pCollectionSize);
        HRESULT ( STDMETHODCALLTYPE *GetCollectionElements )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle instanceHandle,
                       unsigned int startIndex,
                            __RPC__inout unsigned int *pElementCount,
                                          __RPC__deref_out_ecount_full_opt(*pElementCount) CollectionElementValue **ppElementValues);
        HRESULT ( STDMETHODCALLTYPE *AddChild )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle parent,
                       InstanceHandle child,
                       unsigned int index);
        HRESULT ( STDMETHODCALLTYPE *RemoveChild )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle parent,
                       unsigned int index);
        HRESULT ( STDMETHODCALLTYPE *ClearChildren )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle parent);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyIndex )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle object,
                       __RPC__in LPCWSTR propertyName,
                        __RPC__out unsigned int *pPropertyIndex);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle object,
                       unsigned int propertyIndex,
                        __RPC__out InstanceHandle *pValue);
        HRESULT ( STDMETHODCALLTYPE *ReplaceResource )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle resourceDictionary,
                       InstanceHandle key,
                       InstanceHandle newValue);
        HRESULT ( STDMETHODCALLTYPE *RenderTargetBitmap )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle handle,
                       RenderTargetBitmapOptions options,
                       unsigned int maxPixelWidth,
                       unsigned int maxPixelHeight,
                        __RPC__deref_out_opt IBitmapData **ppBitmapData);
        HRESULT ( STDMETHODCALLTYPE *ResolveResource )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle resourceContext,
                       __RPC__in LPCWSTR resourceName,
                       ResourceType resourceType,
                       unsigned int propertyIndex);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryItem )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle dictionaryHandle,
                       __RPC__in LPCWSTR resourceName,
                       BOOL resourceIsImplicitStyle,
                        __RPC__out InstanceHandle *resourceHandle);
        HRESULT ( STDMETHODCALLTYPE *AddDictionaryItem )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle dictionaryHandle,
                       InstanceHandle resourceKey,
                       InstanceHandle resourceHandle);
        HRESULT ( STDMETHODCALLTYPE *RemoveDictionaryItem )(
            __RPC__in IVisualTreeService3 * This,
                       InstanceHandle dictionaryHandle,
                       InstanceHandle resourceKey);
        END_INTERFACE
    } IVisualTreeService3Vtbl;
    interface IVisualTreeService3
    {
        CONST_VTBL struct IVisualTreeService3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseVisualTreeChange(This,pCallback) )
    ( (This)->lpVtbl -> UnadviseVisualTreeChange(This,pCallback) )
    ( (This)->lpVtbl -> GetEnums(This,pCount,ppEnums) )
    ( (This)->lpVtbl -> CreateInstance(This,typeName,value,pInstanceHandle) )
    ( (This)->lpVtbl -> GetPropertyValuesChain(This,instanceHandle,pSourceCount,ppPropertySources,pPropertyCount,ppPropertyValues) )
    ( (This)->lpVtbl -> SetProperty(This,instanceHandle,value,propertyIndex) )
    ( (This)->lpVtbl -> ClearProperty(This,instanceHandle,propertyIndex) )
    ( (This)->lpVtbl -> GetCollectionCount(This,instanceHandle,pCollectionSize) )
    ( (This)->lpVtbl -> GetCollectionElements(This,instanceHandle,startIndex,pElementCount,ppElementValues) )
    ( (This)->lpVtbl -> AddChild(This,parent,child,index) )
    ( (This)->lpVtbl -> RemoveChild(This,parent,index) )
    ( (This)->lpVtbl -> ClearChildren(This,parent) )
    ( (This)->lpVtbl -> GetPropertyIndex(This,object,propertyName,pPropertyIndex) )
    ( (This)->lpVtbl -> GetProperty(This,object,propertyIndex,pValue) )
    ( (This)->lpVtbl -> ReplaceResource(This,resourceDictionary,key,newValue) )
    ( (This)->lpVtbl -> RenderTargetBitmap(This,handle,options,maxPixelWidth,maxPixelHeight,ppBitmapData) )
    ( (This)->lpVtbl -> ResolveResource(This,resourceContext,resourceName,resourceType,propertyIndex) )
    ( (This)->lpVtbl -> GetDictionaryItem(This,dictionaryHandle,resourceName,resourceIsImplicitStyle,resourceHandle) )
    ( (This)->lpVtbl -> AddDictionaryItem(This,dictionaryHandle,resourceKey,resourceHandle) )
    ( (This)->lpVtbl -> RemoveDictionaryItem(This,dictionaryHandle,resourceKey) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
