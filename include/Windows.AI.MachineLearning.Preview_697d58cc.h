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
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview;
typedef interface __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview;
EXTERN_C const IID IID___FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview;
typedef struct __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreviewVtbl;
interface __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview
{
    CONST_VTBL struct __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreviewVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview;
EXTERN_C const IID IID___FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview;
typedef struct __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * This, __RPC__deref_out_opt __FIIterator_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview **first);
    END_INTERFACE
} __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreviewVtbl;
interface __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview
{
    CONST_VTBL struct __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreviewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview;
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreviewVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreviewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview;
typedef struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * This, __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreviewVtbl;
interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreviewVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview;
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreviewVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreviewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview;
typedef struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * This, __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreviewVtbl;
interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreviewVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
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
typedef interface __FIIterator_1___z__zint64 __FIIterator_1___z__zint64;
EXTERN_C const IID IID___FIIterator_1___z__zint64;
typedef struct __FIIterator_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___z__zint64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___z__zint64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___z__zint64 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___z__zint64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___z__zint64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___z__zint64 * This, __RPC__out __int64 *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___z__zint64 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___z__zint64 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___z__zint64 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __int64 *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___z__zint64Vtbl;
interface __FIIterator_1___z__zint64
{
    CONST_VTBL struct __FIIterator_1___z__zint64Vtbl *lpVtbl;
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
typedef interface __FIIterable_1___z__zint64 __FIIterable_1___z__zint64;
EXTERN_C const IID IID___FIIterable_1___z__zint64;
typedef struct __FIIterable_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___z__zint64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___z__zint64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___z__zint64 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___z__zint64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___z__zint64 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___z__zint64 * This, __RPC__deref_out_opt __FIIterator_1___z__zint64 **first);
    END_INTERFACE
} __FIIterable_1___z__zint64Vtbl;
interface __FIIterable_1___z__zint64
{
    CONST_VTBL struct __FIIterable_1___z__zint64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CFeatureElementKindPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CFeatureElementKindPreview;
typedef enum __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelDeviceKindPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelDeviceKindPreview;
typedef enum __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelFeatureKindPreview __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelFeatureKindPreview;
enum
DEPRECATED("Use TensorKind instead of FeatureElementKindPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CFeatureElementKindPreview
{
    FeatureElementKindPreview_Undefined = 0,
    FeatureElementKindPreview_Float = 1,
    FeatureElementKindPreview_UInt8 = 2,
    FeatureElementKindPreview_Int8 = 3,
    FeatureElementKindPreview_UInt16 = 4,
    FeatureElementKindPreview_Int16 = 5,
    FeatureElementKindPreview_Int32 = 6,
    FeatureElementKindPreview_Int64 = 7,
    FeatureElementKindPreview_String = 8,
    FeatureElementKindPreview_Boolean = 9,
    FeatureElementKindPreview_Float16 = 10,
    FeatureElementKindPreview_Double = 11,
    FeatureElementKindPreview_UInt32 = 12,
    FeatureElementKindPreview_UInt64 = 13,
    FeatureElementKindPreview_Complex64 = 14,
    FeatureElementKindPreview_Complex128 = 15,
};
enum
DEPRECATED("Use LearningModelDeviceKind instead of LearningModelDeviceKindPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelDeviceKindPreview
{
    LearningModelDeviceKindPreview_LearningDeviceAny = 0,
    LearningModelDeviceKindPreview_LearningDeviceCpu = 1,
    LearningModelDeviceKindPreview_LearningDeviceGpu = 2,
    LearningModelDeviceKindPreview_LearningDeviceNpu = 3,
    LearningModelDeviceKindPreview_LearningDeviceDsp = 4,
    LearningModelDeviceKindPreview_LearningDeviceFpga = 5,
};
enum
DEPRECATED("Use LearningModelFeatureKind instead of LearningModelFeatureKindPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelFeatureKindPreview
{
    LearningModelFeatureKindPreview_Undefined = 0,
    LearningModelFeatureKindPreview_Tensor = 1,
    LearningModelFeatureKindPreview_Sequence = 2,
    LearningModelFeatureKindPreview_Map = 3,
    LearningModelFeatureKindPreview_Image = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.IImageVariableDescriptorPreview";
typedef struct
DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
    DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )
DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Width(This,value) )
DEPRECATED("Use IImageFeatureDescriptor instead of IImageVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Height(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIImageVariableDescriptorPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview[] = L"Windows.AI.MachineLearning.Preview.IInferencingOptionsPreview";
typedef struct
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PreferredDeviceKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelDeviceKindPreview * value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_PreferredDeviceKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                  __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelDeviceKindPreview value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsTracingEnabled )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_IsTracingEnabled )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                  boolean value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                           __RPC__out INT32 * value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_MaxBatchSize )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                  INT32 value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_MinimizeMemoryAllocation )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_MinimizeMemoryAllocation )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                  boolean value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ReclaimMemoryAfterEvaluation )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_ReclaimMemoryAfterEvaluation )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_PreferredDeviceKind(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->put_PreferredDeviceKind(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_IsTracingEnabled(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->put_IsTracingEnabled(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->put_MaxBatchSize(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_MinimizeMemoryAllocation(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->put_MinimizeMemoryAllocation(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ReclaimMemoryAfterEvaluation(This,value) )
DEPRECATED("Use LearningModel instead of IInferencingOptionsPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->put_ReclaimMemoryAfterEvaluation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview[] = L"Windows.AI.MachineLearning.Preview.ILearningModelBindingPreview";
typedef struct
DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *Bind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt IInspectable * value
        );
    DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *BindWithProperties )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt IInspectable * value,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * metadata
        );
    DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->Bind(This,name,value) )
DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->BindWithProperties(This,name,value,metadata) )
DEPRECATED("Use ILearningModelBinding instead of ILearningModelBindingPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreviewFactory[] = L"Windows.AI.MachineLearning.Preview.ILearningModelBindingPreviewFactory";
typedef struct
DEPRECATED("Use ILearningModelBindingFactory instead of ILearningModelBindingPreviewFactory. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModelBindingFactory instead of ILearningModelBindingPreviewFactory. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateFromModel )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * model,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactoryVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModelBindingFactory instead of ILearningModelBindingPreviewFactory. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateFromModel(This,model,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreviewFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview[] = L"Windows.AI.MachineLearning.Preview.ILearningModelDescriptionPreview";
typedef struct
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Domain )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__out INT64 * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Metadata )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_InputFeatures )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_OutputFeatures )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * This,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CAI__CMachineLearning__CPreview__CILearningModelVariableDescriptorPreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Author(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Name(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Domain(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Description(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Version(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Metadata(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_InputFeatures(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelDescriptionPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_OutputFeatures(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelEvaluationResultPreview[] = L"Windows.AI.MachineLearning.Preview.ILearningModelEvaluationResultPreview";
typedef struct
DEPRECATED("Use ILearningModelEvaluationResult instead of ILearningModelEvaluationResultPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModelEvaluationResult instead of ILearningModelEvaluationResultPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This,
                           __RPC__deref_out_opt HSTRING * correlationId
        );
    DEPRECATED("Use ILearningModelEvaluationResult instead of ILearningModelEvaluationResultPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Outputs )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModelEvaluationResult instead of ILearningModelEvaluationResultPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_CorrelationId(This,correlationId) )
DEPRECATED("Use ILearningModelEvaluationResult instead of ILearningModelEvaluationResultPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Outputs(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelEvaluationResultPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelPreview[] = L"Windows.AI.MachineLearning.Preview.ILearningModelPreview";
typedef struct
DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *EvaluateAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelBindingPreview * binding,
                  __RPC__in HSTRING correlationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * * evalOperation
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *EvaluateFeaturesAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                  __RPC__in_opt __FIMap_2_HSTRING_IInspectable * features,
                  __RPC__in HSTRING correlationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelEvaluationResultPreview * * evalOperation
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelDescriptionPreview * * returnValue
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_InferencingOptions )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * * value
        );
    DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_InferencingOptions )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIInferencingOptionsPreview * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->EvaluateAsync(This,binding,correlationId,evalOperation) )
DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->EvaluateFeaturesAsync(This,features,correlationId,evalOperation) )
DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Description(This,returnValue) )
DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_InferencingOptions(This,value) )
DEPRECATED("Use ILearningModel instead of ILearningModelPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->put_InferencingOptions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelPreviewStatics[] = L"Windows.AI.MachineLearning.Preview.ILearningModelPreviewStatics";
typedef struct
DEPRECATED("Use ILearningModelStatics instead of ILearningModelPreviewStatics. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModelStatics instead of ILearningModelPreviewStatics. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *LoadModelFromStorageFileAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * modelFile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * * modelCreationOperation
        );
    DEPRECATED("Use ILearningModelStatics instead of ILearningModelPreviewStatics. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *LoadModelFromStreamAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * modelStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CPreview__CLearningModelPreview * * modelCreationOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModelStatics instead of ILearningModelPreviewStatics. For more info, see MSDN.")
    ( (This)->lpVtbl->LoadModelFromStorageFileAsync(This,modelFile,modelCreationOperation) )
DEPRECATED("Use ILearningModelStatics instead of ILearningModelPreviewStatics. For more info, see MSDN.")
    ( (This)->lpVtbl->LoadModelFromStreamAsync(This,modelStream,modelCreationOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.ILearningModelVariableDescriptorPreview";
typedef struct
DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ModelFeatureKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CLearningModelFeatureKindPreview * value
        );
    DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsRequired )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Name(This,value) )
DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Description(This,value) )
DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ModelFeatureKind(This,value) )
DEPRECATED("Use ILearningModelFeatureDescriptor instead of ILearningModelVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_IsRequired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.IMapVariableDescriptorPreview";
typedef struct
DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_KeyKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CFeatureElementKindPreview * value
        );
    DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ValidStringKeys )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                           __RPC__deref_out_opt __FIIterable_1_HSTRING * * value
        );
    DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ValidIntegerKeys )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                           __RPC__deref_out_opt __FIIterable_1___z__zint64 * * value
        );
    DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Fields )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_KeyKind(This,value) )
DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ValidStringKeys(This,value) )
DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ValidIntegerKeys(This,value) )
DEPRECATED("Use IMapFeatureDescriptor instead of IMapVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Fields(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CIMapVariableDescriptorPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ISequenceVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.ISequenceVariableDescriptorPreview";
typedef struct
DEPRECATED("Use ISequenceFeatureDescriptor instead of ISequenceVariableDescriptorPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ISequenceFeatureDescriptor instead of ISequenceVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ElementType )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CILearningModelVariableDescriptorPreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ISequenceFeatureDescriptor instead of ISequenceVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ElementType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CISequenceVariableDescriptorPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_Preview_ITensorVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.ITensorVariableDescriptorPreview";
typedef struct
DEPRECATED("Use ITensorFeatureDescriptor instead of ITensorVariableDescriptorPreview. For more info, see MSDN.")
__x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use ITensorFeatureDescriptor instead of ITensorVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DataType )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CFeatureElementKindPreview * value
        );
    DEPRECATED("Use ITensorFeatureDescriptor instead of ITensorVariableDescriptorPreview. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview * This,
                           __RPC__deref_out_opt __FIIterable_1___z__zint64 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreviewVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use ITensorFeatureDescriptor instead of ITensorVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_DataType(This,value) )
DEPRECATED("Use ITensorFeatureDescriptor instead of ITensorVariableDescriptorPreview. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Shape(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CPreview_CITensorVariableDescriptorPreview;
DEPRECATED("Use ImageFeatureDescriptor instead of ImageVariableDescriptorPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_ImageVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.ImageVariableDescriptorPreview";
DEPRECATED("Use LearningModelSession instead of InferencingOptionsPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_InferencingOptionsPreview[] = L"Windows.AI.MachineLearning.Preview.InferencingOptionsPreview";
DEPRECATED("Use LearningModelBinding instead of LearningModelBindingPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_LearningModelBindingPreview[] = L"Windows.AI.MachineLearning.Preview.LearningModelBindingPreview";
DEPRECATED("Use LearningModel instead of LearningModelDescriptionPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_LearningModelDescriptionPreview[] = L"Windows.AI.MachineLearning.Preview.LearningModelDescriptionPreview";
DEPRECATED("Use LearningModelEvaluationResult instead of LearningModelEvaluationResultPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_LearningModelEvaluationResultPreview[] = L"Windows.AI.MachineLearning.Preview.LearningModelEvaluationResultPreview";
DEPRECATED("Use LearningModel instead of LearningModelPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_LearningModelPreview[] = L"Windows.AI.MachineLearning.Preview.LearningModelPreview";
DEPRECATED("Use ILearningModelFeatureDescriptor instead of LearningModelVariableDescriptorPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_LearningModelVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.LearningModelVariableDescriptorPreview";
DEPRECATED("Use MapFeatureDescriptor instead of MapVariableDescriptorPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_MapVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.MapVariableDescriptorPreview";
DEPRECATED("Use SequenceFeatureDescriptor instead of SequenceVariableDescriptorPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_SequenceVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.SequenceVariableDescriptorPreview";
DEPRECATED("Use TensorFeatureDescriptor instead of TensorVariableDescriptorPreview. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_Preview_TensorVariableDescriptorPreview[] = L"Windows.AI.MachineLearning.Preview.TensorVariableDescriptorPreview";
       
       
#pragma clang diagnostic pop
