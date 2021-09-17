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
#include "Windows.UI.Input.Inking.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory;
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNodeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult;
typedef interface __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult;
typedef struct __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResultVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResultVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIIterator_1_Windows__CFoundation__CPoint __FIIterator_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CPoint;
typedef struct __FIIterator_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CPointVtbl;
interface __FIIterator_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CPoint __FIIterable_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CPoint;
typedef struct __FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CPointVtbl;
interface __FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CFoundation__CPoint __FIVectorView_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CPoint;
typedef struct __FIVectorView_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                       struct __x_ABI_CWindows_CFoundation_CPoint item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CPointVtbl;
interface __FIVectorView_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;
EXTERN_C const IID IID___FIIterator_1_UINT32;
typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out unsigned int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;
interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;
EXTERN_C const IID IID___FIIterable_1_UINT32;
typedef struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt __FIIterator_1_UINT32 **first);
    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;
interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIVectorView_1_UINT32;
typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;
interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisDrawingKind __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisDrawingKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisNodeKind __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisNodeKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStatus __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStatus;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStrokeKind __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStrokeKind;
enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisDrawingKind
{
    InkAnalysisDrawingKind_Drawing = 0,
    InkAnalysisDrawingKind_Circle = 1,
    InkAnalysisDrawingKind_Ellipse = 2,
    InkAnalysisDrawingKind_Triangle = 3,
    InkAnalysisDrawingKind_IsoscelesTriangle = 4,
    InkAnalysisDrawingKind_EquilateralTriangle = 5,
    InkAnalysisDrawingKind_RightTriangle = 6,
    InkAnalysisDrawingKind_Quadrilateral = 7,
    InkAnalysisDrawingKind_Rectangle = 8,
    InkAnalysisDrawingKind_Square = 9,
    InkAnalysisDrawingKind_Diamond = 10,
    InkAnalysisDrawingKind_Trapezoid = 11,
    InkAnalysisDrawingKind_Parallelogram = 12,
    InkAnalysisDrawingKind_Pentagon = 13,
    InkAnalysisDrawingKind_Hexagon = 14,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisNodeKind
{
    InkAnalysisNodeKind_UnclassifiedInk = 0,
    InkAnalysisNodeKind_Root = 1,
    InkAnalysisNodeKind_WritingRegion = 2,
    InkAnalysisNodeKind_Paragraph = 3,
    InkAnalysisNodeKind_Line = 4,
    InkAnalysisNodeKind_InkWord = 5,
    InkAnalysisNodeKind_InkBullet = 6,
    InkAnalysisNodeKind_InkDrawing = 7,
    InkAnalysisNodeKind_ListItem = 8,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStatus
{
    InkAnalysisStatus_Updated = 0,
    InkAnalysisStatus_Unchanged = 1,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStrokeKind
{
    InkAnalysisStrokeKind_Auto = 0,
    InkAnalysisStrokeKind_Writing = 1,
    InkAnalysisStrokeKind_Drawing = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkBullet[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkBullet";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBulletVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBulletVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBulletVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkBullet;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkDrawing[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkDrawing";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DrawingKind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisDrawingKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Points )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CPoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawingVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DrawingKind(This,value) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->get_Points(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkDrawing;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkWord[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkWord";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWordVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextAlternates )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWordVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWordVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
    ( (This)->lpVtbl->get_TextAlternates(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisInkWord;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisLine[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisLine";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndentLevel )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLineVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
    ( (This)->lpVtbl->get_IndentLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisLine;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisListItem[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisListItem";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItemVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisListItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisNode[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisNode";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisNodeKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotatedBoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokeIds )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * strokeIds
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNodeVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_BoundingRect(This,value) )
    ( (This)->lpVtbl->get_RotatedBoundingRect(This,value) )
    ( (This)->lpVtbl->get_Children(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->GetStrokeIds(This,strokeIds) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisParagraph[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisParagraph";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraphVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraphVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraphVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisParagraph;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisResult[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisResult";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResultVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisRoot[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisRoot";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRootVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindNodes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisNodeKind nodeKind,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CAnalysis__CIInkAnalysisNode * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRootVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRootVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
    ( (This)->lpVtbl->FindNodes(This,nodeKind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalysisWritingRegion[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisWritingRegion";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecognizedText )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegionVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecognizedText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisWritingRegion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalyzer[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalyzer";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnalysisRoot )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalysisRoot * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAnalyzing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddDataForStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *AddDataForStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * strokes
        );
    HRESULT ( STDMETHODCALLTYPE *ClearDataForAllStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveDataForStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                  UINT32 strokeId
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveDataForStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                  __RPC__in_opt __FIIterable_1_UINT32 * strokeIds
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceDataForStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *SetStrokeDataKind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                  UINT32 strokeId,
                  __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CInkAnalysisStrokeKind strokeKind
        );
    HRESULT ( STDMETHODCALLTYPE *AnalyzeAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CInput__CInking__CAnalysis__CInkAnalysisResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnalysisRoot(This,value) )
    ( (This)->lpVtbl->get_IsAnalyzing(This,value) )
    ( (This)->lpVtbl->AddDataForStroke(This,stroke) )
    ( (This)->lpVtbl->AddDataForStrokes(This,strokes) )
    ( (This)->lpVtbl->ClearDataForAllStrokes(This) )
    ( (This)->lpVtbl->RemoveDataForStroke(This,strokeId) )
    ( (This)->lpVtbl->RemoveDataForStrokes(This,strokeIds) )
    ( (This)->lpVtbl->ReplaceDataForStroke(This,stroke) )
    ( (This)->lpVtbl->SetStrokeDataKind(This,strokeId,strokeKind) )
    ( (This)->lpVtbl->AnalyzeAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Analysis_IInkAnalyzerFactory[] = L"Windows.UI.Input.Inking.Analysis.IInkAnalyzerFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAnalyzer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAnalyzer(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CAnalysis_CIInkAnalyzerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisInkBullet[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkBullet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisInkDrawing[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkDrawing";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisInkWord[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkWord";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisLine[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisLine";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisListItem[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisListItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisNode[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisParagraph[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisParagraph";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisResult[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisRoot[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisRoot";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalysisWritingRegion[] = L"Windows.UI.Input.Inking.Analysis.InkAnalysisWritingRegion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Analysis_InkAnalyzer[] = L"Windows.UI.Input.Inking.Analysis.InkAnalyzer";
       
       
#pragma clang diagnostic pop
