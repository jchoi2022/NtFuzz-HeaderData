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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlText __x_ABI_CWindows_CData_CXml_CDom_CIXmlText;
typedef interface __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode;
typedef struct __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl;
interface __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode;
typedef struct __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl;
interface __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode;
typedef struct __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                       __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl;
interface __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument;
typedef interface __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument;
typedef struct __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl;
interface __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CData_CXml_CDom_CNodeType __x_ABI_CWindows_CData_CXml_CDom_CNodeType;
enum __x_ABI_CWindows_CData_CXml_CDom_CNodeType
{
    NodeType_Invalid = 0,
    NodeType_ElementNode = 1,
    NodeType_AttributeNode = 2,
    NodeType_TextNode = 3,
    NodeType_DataSectionNode = 4,
    NodeType_EntityReferenceNode = 5,
    NodeType_EntityNode = 6,
    NodeType_ProcessingInstructionNode = 7,
    NodeType_CommentNode = 8,
    NodeType_DocumentNode = 9,
    NodeType_DocumentTypeNode = 10,
    NodeType_DocumentFragmentNode = 11,
    NodeType_NotationNode = 12,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IDtdEntity[] = L"Windows.Data.Xml.Dom.IDtdEntity";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PublicId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NotationName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntityVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PublicId(This,value) )
    ( (This)->lpVtbl->get_SystemId(This,value) )
    ( (This)->lpVtbl->get_NotationName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IDtdNotation[] = L"Windows.Data.Xml.Dom.IDtdNotation";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PublicId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotationVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PublicId(This,value) )
    ( (This)->lpVtbl->get_SystemId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlAttribute[] = L"Windows.Data.Xml.Dom.IXmlAttribute";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Specified )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttributeVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttributeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Specified(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlCDataSection[] = L"Windows.Data.Xml.Dom.IXmlCDataSection";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSectionVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlCharacterData[] = L"Windows.Data.Xml.Dom.IXmlCharacterData";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SubstringData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                  UINT32 offset,
                  UINT32 count,
                           __RPC__deref_out_opt HSTRING * data
        );
    HRESULT ( STDMETHODCALLTYPE *AppendData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                  __RPC__in HSTRING data
        );
    HRESULT ( STDMETHODCALLTYPE *InsertData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                  UINT32 offset,
                  __RPC__in HSTRING data
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                  UINT32 offset,
                  UINT32 count
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
                  UINT32 offset,
                  UINT32 count,
                  __RPC__in HSTRING data
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterDataVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->SubstringData(This,offset,count,data) )
    ( (This)->lpVtbl->AppendData(This,data) )
    ( (This)->lpVtbl->InsertData(This,offset,data) )
    ( (This)->lpVtbl->DeleteData(This,offset,count) )
    ( (This)->lpVtbl->ReplaceData(This,offset,count,data) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlComment[] = L"Windows.Data.Xml.Dom.IXmlComment";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCommentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlCommentVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCommentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlComment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocument[] = L"Windows.Data.Xml.Dom.IXmlDocument";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Doctype )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Implementation )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentElement )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateElement )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING tagName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * newElement
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDocumentFragment )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * * newDocumentFragment
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTextNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * * newTextNode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateComment )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * * newComment
        );
    HRESULT ( STDMETHODCALLTYPE *CreateProcessingInstruction )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING target,
                  __RPC__in HSTRING data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * * newProcessingInstruction
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * newAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEntityReference )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * * newEntityReference
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementsByTagName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING tagName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * elements
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCDataSection )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * * newCDataSection
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentUri )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING qualifiedName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * newAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *CreateElementNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING qualifiedName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * newElement
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementById )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in HSTRING elementId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * element
        );
    HRESULT ( STDMETHODCALLTYPE *ImportNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * node,
                  boolean deep,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * newNode
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Doctype(This,value) )
    ( (This)->lpVtbl->get_Implementation(This,value) )
    ( (This)->lpVtbl->get_DocumentElement(This,value) )
    ( (This)->lpVtbl->CreateElement(This,tagName,newElement) )
    ( (This)->lpVtbl->CreateDocumentFragment(This,newDocumentFragment) )
    ( (This)->lpVtbl->CreateTextNode(This,data,newTextNode) )
    ( (This)->lpVtbl->CreateComment(This,data,newComment) )
    ( (This)->lpVtbl->CreateProcessingInstruction(This,target,data,newProcessingInstruction) )
    ( (This)->lpVtbl->CreateAttribute(This,name,newAttribute) )
    ( (This)->lpVtbl->CreateEntityReference(This,name,newEntityReference) )
    ( (This)->lpVtbl->GetElementsByTagName(This,tagName,elements) )
    ( (This)->lpVtbl->CreateCDataSection(This,data,newCDataSection) )
    ( (This)->lpVtbl->get_DocumentUri(This,value) )
    ( (This)->lpVtbl->CreateAttributeNS(This,namespaceUri,qualifiedName,newAttribute) )
    ( (This)->lpVtbl->CreateElementNS(This,namespaceUri,qualifiedName,newElement) )
    ( (This)->lpVtbl->GetElementById(This,elementId,element) )
    ( (This)->lpVtbl->ImportNode(This,node,deep,newNode) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentFragment[] = L"Windows.Data.Xml.Dom.IXmlDocumentFragment";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragmentVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentIO[] = L"Windows.Data.Xml.Dom.IXmlDocumentIO";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIOVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LoadXml )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
                  __RPC__in HSTRING xml
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadXmlWithSettings )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
                  __RPC__in HSTRING xml,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToFileAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIOVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIOVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadXml(This,xml) )
    ( (This)->lpVtbl->LoadXmlWithSettings(This,xml,loadSettings) )
    ( (This)->lpVtbl->SaveToFileAsync(This,file,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentIO2[] = L"Windows.Data.Xml.Dom.IXmlDocumentIO2";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LoadXmlFromBuffer )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadXmlFromBufferWithSettings )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2Vtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadXmlFromBuffer(This,buffer) )
    ( (This)->lpVtbl->LoadXmlFromBufferWithSettings(This,buffer,loadSettings) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentStatics[] = L"Windows.Data.Xml.Dom.IXmlDocumentStatics";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LoadFromUriAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromUriWithSettingsAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromFileAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromFileWithSettingsAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStaticsVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadFromUriAsync(This,uri,asyncInfo) )
    ( (This)->lpVtbl->LoadFromUriWithSettingsAsync(This,uri,loadSettings,asyncInfo) )
    ( (This)->lpVtbl->LoadFromFileAsync(This,file,asyncInfo) )
    ( (This)->lpVtbl->LoadFromFileWithSettingsAsync(This,file,loadSettings,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentType[] = L"Windows.Data.Xml.Dom.IXmlDocumentType";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Entities )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Notations )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentTypeVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentTypeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Entities(This,value) )
    ( (This)->lpVtbl->get_Notations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDomImplementation[] = L"Windows.Data.Xml.Dom.IXmlDomImplementation";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *HasFeature )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
                  __RPC__in HSTRING feature,
                  __RPC__in_opt IInspectable * version,
                           __RPC__out boolean * featureSupported
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementationVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->HasFeature(This,feature,version,featureSupported) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlElement[] = L"Windows.Data.Xml.Dom.IXmlElement";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TagName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in HSTRING attributeName,
                           __RPC__deref_out_opt HSTRING * attributeValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in HSTRING attributeName,
                  __RPC__in HSTRING attributeValue
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in HSTRING attributeName
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in HSTRING attributeName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * attributeNode
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttributeNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * newAttribute,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * previousAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAttributeNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * attributeNode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * removedAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementsByTagName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in HSTRING tagName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * elements
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING qualifiedName,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING localName,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING localName
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttributeNodeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * newAttribute,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * previousAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeNodeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING localName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * previousAttribute
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlElementVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TagName(This,value) )
    ( (This)->lpVtbl->GetAttribute(This,attributeName,attributeValue) )
    ( (This)->lpVtbl->SetAttribute(This,attributeName,attributeValue) )
    ( (This)->lpVtbl->RemoveAttribute(This,attributeName) )
    ( (This)->lpVtbl->GetAttributeNode(This,attributeName,attributeNode) )
    ( (This)->lpVtbl->SetAttributeNode(This,newAttribute,previousAttribute) )
    ( (This)->lpVtbl->RemoveAttributeNode(This,attributeNode,removedAttribute) )
    ( (This)->lpVtbl->GetElementsByTagName(This,tagName,elements) )
    ( (This)->lpVtbl->SetAttributeNS(This,namespaceUri,qualifiedName,value) )
    ( (This)->lpVtbl->GetAttributeNS(This,namespaceUri,localName,value) )
    ( (This)->lpVtbl->RemoveAttributeNS(This,namespaceUri,localName) )
    ( (This)->lpVtbl->SetAttributeNodeNS(This,newAttribute,previousAttribute) )
    ( (This)->lpVtbl->GetAttributeNodeNS(This,namespaceUri,localName,previousAttribute) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlEntityReference[] = L"Windows.Data.Xml.Dom.IXmlEntityReference";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReferenceVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReferenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlLoadSettings[] = L"Windows.Data.Xml.Dom.IXmlLoadSettings";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxElementDepth )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxElementDepth )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProhibitDtd )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProhibitDtd )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolveExternals )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResolveExternals )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValidateOnParse )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ValidateOnParse )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementContentWhiteSpace )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ElementContentWhiteSpace )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettingsVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxElementDepth(This,value) )
    ( (This)->lpVtbl->put_MaxElementDepth(This,value) )
    ( (This)->lpVtbl->get_ProhibitDtd(This,value) )
    ( (This)->lpVtbl->put_ProhibitDtd(This,value) )
    ( (This)->lpVtbl->get_ResolveExternals(This,value) )
    ( (This)->lpVtbl->put_ResolveExternals(This,value) )
    ( (This)->lpVtbl->get_ValidateOnParse(This,value) )
    ( (This)->lpVtbl->put_ValidateOnParse(This,value) )
    ( (This)->lpVtbl->get_ElementContentWhiteSpace(This,value) )
    ( (This)->lpVtbl->put_ElementContentWhiteSpace(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNamedNodeMap[] = L"Windows.Data.Xml.Dom.IXmlNamedNodeMap";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Item )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  UINT32 index,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedItem )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *SetNamedItem )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * node,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveNamedItem )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedItemNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveNamedItemNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  __RPC__in_opt IInspectable * namespaceUri,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    HRESULT ( STDMETHODCALLTYPE *SetNamedItemNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * node,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMapVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->Item(This,index,node) )
    ( (This)->lpVtbl->GetNamedItem(This,name,node) )
    ( (This)->lpVtbl->SetNamedItem(This,node,previousNode) )
    ( (This)->lpVtbl->RemoveNamedItem(This,name,previousNode) )
    ( (This)->lpVtbl->GetNamedItemNS(This,namespaceUri,name,node) )
    ( (This)->lpVtbl->RemoveNamedItemNS(This,namespaceUri,name,previousNode) )
    ( (This)->lpVtbl->SetNamedItemNS(This,node,previousNode) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNode[] = L"Windows.Data.Xml.Dom.IXmlNode";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NodeValue )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NodeValue )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NodeType )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CNodeType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NodeName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParentNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChildNodes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextSibling )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * * value
        );
    HRESULT ( STDMETHODCALLTYPE *HasChildNodes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OwnerDocument )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertBefore )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * newChild,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * referenceChild,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * insertedChild
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * newChild,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * referenceChild,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousChild
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * childNode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * removedChild
        );
    HRESULT ( STDMETHODCALLTYPE *AppendChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * newChild,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * appendedChild
        );
    HRESULT ( STDMETHODCALLTYPE *CloneNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  boolean deep,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * newNode
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Prefix )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Normalize )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Prefix )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NodeValue(This,value) )
    ( (This)->lpVtbl->put_NodeValue(This,value) )
    ( (This)->lpVtbl->get_NodeType(This,value) )
    ( (This)->lpVtbl->get_NodeName(This,value) )
    ( (This)->lpVtbl->get_ParentNode(This,value) )
    ( (This)->lpVtbl->get_ChildNodes(This,value) )
    ( (This)->lpVtbl->get_FirstChild(This,value) )
    ( (This)->lpVtbl->get_LastChild(This,value) )
    ( (This)->lpVtbl->get_PreviousSibling(This,value) )
    ( (This)->lpVtbl->get_NextSibling(This,value) )
    ( (This)->lpVtbl->get_Attributes(This,value) )
    ( (This)->lpVtbl->HasChildNodes(This,value) )
    ( (This)->lpVtbl->get_OwnerDocument(This,value) )
    ( (This)->lpVtbl->InsertBefore(This,newChild,referenceChild,insertedChild) )
    ( (This)->lpVtbl->ReplaceChild(This,newChild,referenceChild,previousChild) )
    ( (This)->lpVtbl->RemoveChild(This,childNode,removedChild) )
    ( (This)->lpVtbl->AppendChild(This,newChild,appendedChild) )
    ( (This)->lpVtbl->CloneNode(This,deep,newNode) )
    ( (This)->lpVtbl->get_NamespaceUri(This,value) )
    ( (This)->lpVtbl->get_LocalName(This,value) )
    ( (This)->lpVtbl->get_Prefix(This,value) )
    ( (This)->lpVtbl->Normalize(This) )
    ( (This)->lpVtbl->put_Prefix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeList[] = L"Windows.Data.Xml.Dom.IXmlNodeList";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Item )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
                  UINT32 index,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeListVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->Item(This,index,node) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeSelector[] = L"Windows.Data.Xml.Dom.IXmlNodeSelector";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SelectSingleNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                  __RPC__in HSTRING xpath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNodes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                  __RPC__in HSTRING xpath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * nodelist
        );
    HRESULT ( STDMETHODCALLTYPE *SelectSingleNodeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                  __RPC__in HSTRING xpath,
                  __RPC__in_opt IInspectable * namespaces,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNodesNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
                  __RPC__in HSTRING xpath,
                  __RPC__in_opt IInspectable * namespaces,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * nodelist
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelectorVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SelectSingleNode(This,xpath,node) )
    ( (This)->lpVtbl->SelectNodes(This,xpath,nodelist) )
    ( (This)->lpVtbl->SelectSingleNodeNS(This,xpath,namespaces,node) )
    ( (This)->lpVtbl->SelectNodesNS(This,xpath,namespaces,nodelist) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeSerializer[] = L"Windows.Data.Xml.Dom.IXmlNodeSerializer";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetXml )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
                           __RPC__deref_out_opt HSTRING * outerXml
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InnerText )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InnerText )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializerVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetXml(This,outerXml) )
    ( (This)->lpVtbl->get_InnerText(This,value) )
    ( (This)->lpVtbl->put_InnerText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlProcessingInstruction[] = L"Windows.Data.Xml.Dom.IXmlProcessingInstruction";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstructionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstructionVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstructionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Target(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlText[] = L"Windows.Data.Xml.Dom.IXmlText";
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SplitText )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
                  UINT32 offset,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * * secondPart
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlTextVtbl;
interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlText
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlTextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SplitText(This,offset,secondPart) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlText;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_DtdEntity[] = L"Windows.Data.Xml.Dom.DtdEntity";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_DtdNotation[] = L"Windows.Data.Xml.Dom.DtdNotation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlAttribute[] = L"Windows.Data.Xml.Dom.XmlAttribute";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlCDataSection[] = L"Windows.Data.Xml.Dom.XmlCDataSection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlComment[] = L"Windows.Data.Xml.Dom.XmlComment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocument[] = L"Windows.Data.Xml.Dom.XmlDocument";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocumentFragment[] = L"Windows.Data.Xml.Dom.XmlDocumentFragment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocumentType[] = L"Windows.Data.Xml.Dom.XmlDocumentType";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDomImplementation[] = L"Windows.Data.Xml.Dom.XmlDomImplementation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlElement[] = L"Windows.Data.Xml.Dom.XmlElement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlEntityReference[] = L"Windows.Data.Xml.Dom.XmlEntityReference";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlLoadSettings[] = L"Windows.Data.Xml.Dom.XmlLoadSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlNamedNodeMap[] = L"Windows.Data.Xml.Dom.XmlNamedNodeMap";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlNodeList[] = L"Windows.Data.Xml.Dom.XmlNodeList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlProcessingInstruction[] = L"Windows.Data.Xml.Dom.XmlProcessingInstruction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlText[] = L"Windows.Data.Xml.Dom.XmlText";
       
       
#pragma clang diagnostic pop
