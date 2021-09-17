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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Interop.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                       __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation;
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition;
struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation
{
    UINT32 InputStreamIndex;
    UINT32 LineNumber;
    UINT32 LinePosition;
};
struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition
{
    HSTRING XmlNamespace;
    HSTRING Namespace;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IComponentConnector[] = L"Windows.UI.Xaml.Markup.IComponentConnector";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
                  INT32 connectionId,
                  __RPC__in_opt IInspectable * target
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnectorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Connect(This,connectionId,target) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IComponentConnector2[] = L"Windows.UI.Xaml.Markup.IComponentConnector2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetBindingConnector )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
                  INT32 connectionId,
                  __RPC__in_opt IInspectable * target,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetBindingConnector(This,connectionId,target,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IDataTemplateComponent[] = L"Windows.UI.Xaml.Markup.IDataTemplateComponent";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Recycle )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessBindings )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
                  __RPC__in_opt IInspectable * item,
                  INT32 itemIndex,
                  INT32 phase,
                   __RPC__out INT32 * nextPhase
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Recycle(This) )
    ( (This)->lpVtbl->ProcessBindings(This,item,itemIndex,phase,nextPhase) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtension[] = L"Windows.UI.Xaml.Markup.IMarkupExtension";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtensionFactory[] = L"Windows.UI.Xaml.Markup.IMarkupExtensionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtensionOverrides[] = L"Windows.UI.Xaml.Markup.IMarkupExtensionOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProvideValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProvideValue(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBinaryWriter[] = L"Windows.UI.Xaml.Markup.IXamlBinaryWriter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBinaryWriterStatics[] = L"Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
                  __RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * inputStreams,
                  __RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * outputStreams,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * xamlMetadataProvider,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Write(This,inputStreams,outputStreams,xamlMetadataProvider,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindScopeDiagnostics[] = L"Windows.UI.Xaml.Markup.IXamlBindScopeDiagnostics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnosticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Disable )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics * This,
                  INT32 lineNumber,
                  INT32 columnNumber
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnosticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnosticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Disable(This,lineNumber,columnNumber) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindScopeDiagnostics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindingHelper[] = L"Windows.UI.Xaml.Markup.IXamlBindingHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics[] = L"Windows.UI.Xaml.Markup.IXamlBindingHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataTemplateComponentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataTemplateComponent )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetDataTemplateComponent )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * value
        );
    HRESULT ( STDMETHODCALLTYPE *SuspendRendering )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * target
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeRendering )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * target
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
                  __RPC__in_opt IInspectable * value,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromString )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromBoolean )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromChar16 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  WCHAR value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromDateTime )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromDouble )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromInt32 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromUInt32 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromInt64 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  INT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromUInt64 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  UINT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromSingle )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromRect )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromSize )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromTimeSpan )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromByte )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  BYTE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromUri )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromObject )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
                  __RPC__in_opt IInspectable * dependencyObject,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataTemplateComponentProperty(This,value) )
    ( (This)->lpVtbl->GetDataTemplateComponent(This,element,result) )
    ( (This)->lpVtbl->SetDataTemplateComponent(This,element,value) )
    ( (This)->lpVtbl->SuspendRendering(This,target) )
    ( (This)->lpVtbl->ResumeRendering(This,target) )
    ( (This)->lpVtbl->ConvertValue(This,type,value,result) )
    ( (This)->lpVtbl->SetPropertyFromString(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromBoolean(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromChar16(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromDateTime(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromDouble(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromInt32(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromUInt32(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromInt64(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromUInt64(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromSingle(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromPoint(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromRect(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromSize(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromTimeSpan(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromByte(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromUri(This,dependencyObject,propertyToSet,value) )
    ( (This)->lpVtbl->SetPropertyFromObject(This,dependencyObject,propertyToSet,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMarkupHelper[] = L"Windows.UI.Xaml.Markup.IXamlMarkupHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMarkupHelperStatics[] = L"Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UnloadObject )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->UnloadObject(This,element) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMember[] = L"Windows.UI.Xaml.Markup.IXamlMember";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMemberVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAttachable )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDependencyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                  __RPC__in_opt IInspectable * instance,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
                  __RPC__in_opt IInspectable * instance,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMemberVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMemberVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAttachable(This,value) )
    ( (This)->lpVtbl->get_IsDependencyProperty(This,value) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_TargetType(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->GetValue(This,instance,result) )
    ( (This)->lpVtbl->SetValue(This,instance,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMetadataProvider[] = L"Windows.UI.Xaml.Markup.IXamlMetadataProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *GetXamlType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetXamlTypeByFullName )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
                  __RPC__in HSTRING fullName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetXmlnsDefinitions )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetXamlType(This,type,result) )
    ( (This)->lpVtbl->GetXamlTypeByFullName(This,fullName,result) )
    ( (This)->lpVtbl->GetXmlnsDefinitions(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlReader[] = L"Windows.UI.Xaml.Markup.IXamlReader";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlReaderStatics[] = L"Windows.UI.Xaml.Markup.IXamlReaderStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
                  __RPC__in HSTRING xaml,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *LoadWithInitialTemplateValidation )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
                  __RPC__in HSTRING xaml,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Load(This,xaml,result) )
    ( (This)->lpVtbl->LoadWithInitialTemplateValidation(This,xaml,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlType[] = L"Windows.UI.Xaml.Markup.IXamlType";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaseType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullName )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsArray )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCollection )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConstructible )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDictionary )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMarkupExtension )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBindable )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnderlyingType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    HRESULT ( STDMETHODCALLTYPE *ActivateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromString )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMember )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AddToVector )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                  __RPC__in_opt IInspectable * instance,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddToMap )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
                  __RPC__in_opt IInspectable * instance,
                  __RPC__in_opt IInspectable * key,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *RunInitializer )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlTypeVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlTypeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaseType(This,value) )
    ( (This)->lpVtbl->get_ContentProperty(This,value) )
    ( (This)->lpVtbl->get_FullName(This,value) )
    ( (This)->lpVtbl->get_IsArray(This,value) )
    ( (This)->lpVtbl->get_IsCollection(This,value) )
    ( (This)->lpVtbl->get_IsConstructible(This,value) )
    ( (This)->lpVtbl->get_IsDictionary(This,value) )
    ( (This)->lpVtbl->get_IsMarkupExtension(This,value) )
    ( (This)->lpVtbl->get_IsBindable(This,value) )
    ( (This)->lpVtbl->get_ItemType(This,value) )
    ( (This)->lpVtbl->get_KeyType(This,value) )
    ( (This)->lpVtbl->get_UnderlyingType(This,value) )
    ( (This)->lpVtbl->ActivateInstance(This,result) )
    ( (This)->lpVtbl->CreateFromString(This,value,result) )
    ( (This)->lpVtbl->GetMember(This,name,result) )
    ( (This)->lpVtbl->AddToVector(This,instance,value) )
    ( (This)->lpVtbl->AddToMap(This,instance,key,value) )
    ( (This)->lpVtbl->RunInitializer(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlType2[] = L"Windows.UI.Xaml.Markup.IXamlType2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BoxedType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BoxedType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_MarkupExtension[] = L"Windows.UI.Xaml.Markup.MarkupExtension";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlBinaryWriter[] = L"Windows.UI.Xaml.Markup.XamlBinaryWriter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlBindingHelper[] = L"Windows.UI.Xaml.Markup.XamlBindingHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlMarkupHelper[] = L"Windows.UI.Xaml.Markup.XamlMarkupHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlReader[] = L"Windows.UI.Xaml.Markup.XamlReader";
       
       
#pragma clang diagnostic pop
