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
#include "Windows.Graphics.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensor __x_ABI_CWindows_CAI_CMachineLearning_CITensor;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorString __x_ABI_CWindows_CAI_CMachineLearning_CITensorString;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics;
typedef interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2;
typedef interface __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor;
typedef struct __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl;
interface __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor;
typedef struct __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl;
interface __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor;
typedef struct __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                       __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl;
interface __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel;
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel;
typedef struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModel **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * This, __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelVtbl;
interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult;
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult;
typedef struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * This, __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResultVtbl;
interface __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResultVtbl *lpVtbl;
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
typedef interface __FIVectorView_1___z__zint64 __FIVectorView_1___z__zint64;
EXTERN_C const IID IID___FIVectorView_1___z__zint64;
typedef struct __FIVectorView_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1___z__zint64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1___z__zint64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1___z__zint64 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1___z__zint64 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1___z__zint64 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1___z__zint64 * This,
                                                    unsigned int index,
                                                             __RPC__out __int64 *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1___z__zint64 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1___z__zint64 * This,
                       __int64 item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1___z__zint64 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __int64 *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1___z__zint64Vtbl;
interface __FIVectorView_1___z__zint64
{
    CONST_VTBL struct __FIVectorView_1___z__zint64Vtbl *lpVtbl;
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
typedef interface __FIIterator_1_boolean __FIIterator_1_boolean;
EXTERN_C const IID IID___FIIterator_1_boolean;
typedef struct __FIIterator_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_boolean * This, __RPC__out boolean *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_boolean * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_boolean * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_boolean * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) boolean *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_booleanVtbl;
interface __FIIterator_1_boolean
{
    CONST_VTBL struct __FIIterator_1_booleanVtbl *lpVtbl;
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
typedef interface __FIIterable_1_boolean __FIIterable_1_boolean;
EXTERN_C const IID IID___FIIterable_1_boolean;
typedef struct __FIIterable_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_boolean * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_boolean * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_boolean * This, __RPC__deref_out_opt __FIIterator_1_boolean **first);
    END_INTERFACE
} __FIIterable_1_booleanVtbl;
interface __FIIterable_1_boolean
{
    CONST_VTBL struct __FIIterable_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_boolean __FIVectorView_1_boolean;
EXTERN_C const IID IID___FIVectorView_1_boolean;
typedef struct __FIVectorView_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_boolean * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_boolean * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_boolean * This,
                                                    unsigned int index,
                                                             __RPC__out boolean *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_boolean * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_boolean * This,
                       boolean item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_boolean * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) boolean *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_booleanVtbl;
interface __FIVectorView_1_boolean
{
    CONST_VTBL struct __FIVectorView_1_booleanVtbl *lpVtbl;
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
typedef interface __FIIterator_1_double __FIIterator_1_double;
EXTERN_C const IID IID___FIIterator_1_double;
typedef struct __FIIterator_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_double * This, __RPC__out double *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_double * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) double *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_doubleVtbl;
interface __FIIterator_1_double
{
    CONST_VTBL struct __FIIterator_1_doubleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_double __FIIterable_1_double;
EXTERN_C const IID IID___FIIterable_1_double;
typedef struct __FIIterable_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_double * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_double * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt __FIIterator_1_double **first);
    END_INTERFACE
} __FIIterable_1_doubleVtbl;
interface __FIIterable_1_double
{
    CONST_VTBL struct __FIIterable_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_double __FIVectorView_1_double;
EXTERN_C const IID IID___FIVectorView_1_double;
typedef struct __FIVectorView_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_double * This,
                                                    unsigned int index,
                                                             __RPC__out double *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_double * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_double * This,
                       double item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_double * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) double *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_doubleVtbl;
interface __FIVectorView_1_double
{
    CONST_VTBL struct __FIVectorView_1_doubleVtbl *lpVtbl;
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
typedef interface __FIIterator_1_float __FIIterator_1_float;
EXTERN_C const IID IID___FIIterator_1_float;
typedef struct __FIIterator_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_float * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_float * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_float * This, __RPC__out float *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_float * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_float * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_float * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) float *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_floatVtbl;
interface __FIIterator_1_float
{
    CONST_VTBL struct __FIIterator_1_floatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_float __FIIterable_1_float;
EXTERN_C const IID IID___FIIterable_1_float;
typedef struct __FIIterable_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_float * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_float * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_float * This, __RPC__deref_out_opt __FIIterator_1_float **first);
    END_INTERFACE
} __FIIterable_1_floatVtbl;
interface __FIIterable_1_float
{
    CONST_VTBL struct __FIIterable_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_float __FIVectorView_1_float;
EXTERN_C const IID IID___FIVectorView_1_float;
typedef struct __FIVectorView_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_float * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_float * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_float * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_float * This,
                                                    unsigned int index,
                                                             __RPC__out float *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_float * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_float * This,
                       float item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_float * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) float *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_floatVtbl;
interface __FIVectorView_1_float
{
    CONST_VTBL struct __FIVectorView_1_floatVtbl *lpVtbl;
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
typedef interface __FIIterator_1_short __FIIterator_1_short;
EXTERN_C const IID IID___FIIterator_1_short;
typedef struct __FIIterator_1_shortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_short * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_short * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_short * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_short * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_short * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_short * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_short * This, __RPC__out short *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_short * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_short * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_short * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) short *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_shortVtbl;
interface __FIIterator_1_short
{
    CONST_VTBL struct __FIIterator_1_shortVtbl *lpVtbl;
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
typedef interface __FIIterable_1_short __FIIterable_1_short;
EXTERN_C const IID IID___FIIterable_1_short;
typedef struct __FIIterable_1_shortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_short * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_short * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_short * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_short * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_short * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_short * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_short * This, __RPC__deref_out_opt __FIIterator_1_short **first);
    END_INTERFACE
} __FIIterable_1_shortVtbl;
interface __FIIterable_1_short
{
    CONST_VTBL struct __FIIterable_1_shortVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_short __FIVectorView_1_short;
EXTERN_C const IID IID___FIVectorView_1_short;
typedef struct __FIVectorView_1_shortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_short * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_short * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_short * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_short * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_short * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_short * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_short * This,
                                                    unsigned int index,
                                                             __RPC__out short *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_short * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_short * This,
                       short item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_short * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) short *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_shortVtbl;
interface __FIVectorView_1_short
{
    CONST_VTBL struct __FIVectorView_1_shortVtbl *lpVtbl;
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
typedef interface __FIIterator_1_int __FIIterator_1_int;
EXTERN_C const IID IID___FIIterator_1_int;
typedef struct __FIIterator_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_int * This, __RPC__out int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_int * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_intVtbl;
interface __FIIterator_1_int
{
    CONST_VTBL struct __FIIterator_1_intVtbl *lpVtbl;
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
typedef interface __FIIterable_1_int __FIIterable_1_int;
EXTERN_C const IID IID___FIIterable_1_int;
typedef struct __FIIterable_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_int * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_int * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt __FIIterator_1_int **first);
    END_INTERFACE
} __FIIterable_1_intVtbl;
interface __FIIterable_1_int
{
    CONST_VTBL struct __FIIterable_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_int __FIVectorView_1_int;
EXTERN_C const IID IID___FIVectorView_1_int;
typedef struct __FIVectorView_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_int * This,
                                                    unsigned int index,
                                                             __RPC__out int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_int * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_int * This,
                       int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_int * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_intVtbl;
interface __FIVectorView_1_int
{
    CONST_VTBL struct __FIVectorView_1_intVtbl *lpVtbl;
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
typedef interface __FIIterator_1_byte __FIIterator_1_byte;
EXTERN_C const IID IID___FIIterator_1_byte;
typedef struct __FIIterator_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_byte * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_byte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_byte * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_byte * This, __RPC__out byte *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_byte * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_byte * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_byte * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) byte *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_byteVtbl;
interface __FIIterator_1_byte
{
    CONST_VTBL struct __FIIterator_1_byteVtbl *lpVtbl;
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
typedef interface __FIIterable_1_byte __FIIterable_1_byte;
EXTERN_C const IID IID___FIIterable_1_byte;
typedef struct __FIIterable_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_byte * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_byte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_byte * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_byte * This, __RPC__deref_out_opt __FIIterator_1_byte **first);
    END_INTERFACE
} __FIIterable_1_byteVtbl;
interface __FIIterable_1_byte
{
    CONST_VTBL struct __FIIterable_1_byteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_byte __FIVectorView_1_byte;
EXTERN_C const IID IID___FIVectorView_1_byte;
typedef struct __FIVectorView_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_byte * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_byte * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_byte * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_byte * This,
                                                    unsigned int index,
                                                             __RPC__out byte *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_byte * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_byte * This,
                       byte item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_byte * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) byte *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_byteVtbl;
interface __FIVectorView_1_byte
{
    CONST_VTBL struct __FIVectorView_1_byteVtbl *lpVtbl;
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
typedef interface __FIIterator_1_UINT16 __FIIterator_1_UINT16;
EXTERN_C const IID IID___FIIterator_1_UINT16;
typedef struct __FIIterator_1_UINT16Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT16 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT16 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT16 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT16 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT16 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT16 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT16 * This, __RPC__out unsigned short *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT16 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT16 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT16 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned short *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT16Vtbl;
interface __FIIterator_1_UINT16
{
    CONST_VTBL struct __FIIterator_1_UINT16Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT16 __FIIterable_1_UINT16;
EXTERN_C const IID IID___FIIterable_1_UINT16;
typedef struct __FIIterable_1_UINT16Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT16 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT16 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT16 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT16 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT16 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT16 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT16 * This, __RPC__deref_out_opt __FIIterator_1_UINT16 **first);
    END_INTERFACE
} __FIIterable_1_UINT16Vtbl;
interface __FIIterable_1_UINT16
{
    CONST_VTBL struct __FIIterable_1_UINT16Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT16 __FIVectorView_1_UINT16;
EXTERN_C const IID IID___FIVectorView_1_UINT16;
typedef struct __FIVectorView_1_UINT16Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT16 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT16 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT16 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT16 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT16 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT16 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT16 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned short *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT16 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT16 * This,
                       unsigned short item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT16 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned short *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT16Vtbl;
interface __FIVectorView_1_UINT16
{
    CONST_VTBL struct __FIVectorView_1_UINT16Vtbl *lpVtbl;
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
typedef interface __FIIterator_1_UINT64 __FIIterator_1_UINT64;
EXTERN_C const IID IID___FIIterator_1_UINT64;
typedef struct __FIIterator_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT64 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT64 * This, __RPC__out unsigned __int64 *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT64 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT64 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT64 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned __int64 *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT64Vtbl;
interface __FIIterator_1_UINT64
{
    CONST_VTBL struct __FIIterator_1_UINT64Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT64 __FIIterable_1_UINT64;
EXTERN_C const IID IID___FIIterable_1_UINT64;
typedef struct __FIIterable_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT64 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT64 * This, __RPC__deref_out_opt __FIIterator_1_UINT64 **first);
    END_INTERFACE
} __FIIterable_1_UINT64Vtbl;
interface __FIIterable_1_UINT64
{
    CONST_VTBL struct __FIIterable_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT64 __FIVectorView_1_UINT64;
EXTERN_C const IID IID___FIVectorView_1_UINT64;
typedef struct __FIVectorView_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT64 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT64 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT64 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT64 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned __int64 *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT64 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT64 * This,
                       unsigned __int64 item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT64 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned __int64 *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT64Vtbl;
interface __FIVectorView_1_UINT64
{
    CONST_VTBL struct __FIVectorView_1_UINT64Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId __x_ABI_CWindows_CGraphics_CDisplayAdapterId;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelDeviceKind __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelDeviceKind;
typedef enum __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelFeatureKind __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelFeatureKind;
typedef enum __x_ABI_CWindows_CAI_CMachineLearning_CTensorKind __x_ABI_CWindows_CAI_CMachineLearning_CTensorKind;
enum __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelDeviceKind
{
    LearningModelDeviceKind_Default = 0,
    LearningModelDeviceKind_Cpu = 1,
    LearningModelDeviceKind_DirectX = 2,
    LearningModelDeviceKind_DirectXHighPerformance = 3,
    LearningModelDeviceKind_DirectXMinPower = 4,
};
enum __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelFeatureKind
{
    LearningModelFeatureKind_Tensor = 0,
    LearningModelFeatureKind_Sequence = 1,
    LearningModelFeatureKind_Map = 2,
    LearningModelFeatureKind_Image = 3,
};
enum __x_ABI_CWindows_CAI_CMachineLearning_CTensorKind
{
    TensorKind_Undefined = 0,
    TensorKind_Float = 1,
    TensorKind_UInt8 = 2,
    TensorKind_Int8 = 3,
    TensorKind_UInt16 = 4,
    TensorKind_Int16 = 5,
    TensorKind_Int32 = 6,
    TensorKind_Int64 = 7,
    TensorKind_String = 8,
    TensorKind_Boolean = 9,
    TensorKind_Float16 = 10,
    TensorKind_Double = 11,
    TensorKind_UInt32 = 12,
    TensorKind_UInt64 = 13,
    TensorKind_Complex64 = 14,
    TensorKind_Complex128 = 15,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_IImageFeatureDescriptor[] = L"Windows.AI.MachineLearning.IImageFeatureDescriptor";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptorVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_IImageFeatureValue[] = L"Windows.AI.MachineLearning.IImageFeatureValue";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoFrame )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_IImageFeatureValueStatics[] = L"Windows.AI.MachineLearning.IImageFeatureValueStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromVideoFrame )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * image,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValue * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromVideoFrame(This,image,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CIImageFeatureValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModel[] = L"Windows.AI.MachineLearning.ILearningModel";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Domain )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Metadata )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputFeatures )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputFeatures )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CAI__CMachineLearning__CILearningModelFeatureDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Author(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Domain(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->get_Metadata(This,value) )
    ( (This)->lpVtbl->get_InputFeatures(This,value) )
    ( (This)->lpVtbl->get_OutputFeatures(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelBinding[] = L"Windows.AI.MachineLearning.ILearningModelBinding";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Bind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt IInspectable * value
        );
                    HRESULT ( STDMETHODCALLTYPE *BindWithProperties )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt IInspectable * value,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Bind(This,name,value) )
    ( (This)->lpVtbl->BindWithProperties(This,name,value,props) )
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelBindingFactory[] = L"Windows.AI.MachineLearning.ILearningModelBindingFactory";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromSession )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * session,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactoryVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromSession(This,session,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBindingFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelDevice[] = L"Windows.AI.MachineLearning.ILearningModelDevice";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdapterId )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplayAdapterId * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direct3D11Device )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdapterId(This,value) )
    ( (This)->lpVtbl->get_Direct3D11Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelDeviceFactory[] = L"Windows.AI.MachineLearning.ILearningModelDeviceFactory";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory * This,
                  __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelDeviceKind deviceKind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactoryVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,deviceKind,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelDeviceStatics[] = L"Windows.AI.MachineLearning.ILearningModelDeviceStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromDirect3D11Device )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromDirect3D11Device(This,device,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelEvaluationResult[] = L"Windows.AI.MachineLearning.ILearningModelEvaluationResult";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorStatus )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Outputs )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResultVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
    ( (This)->lpVtbl->get_ErrorStatus(This,value) )
    ( (This)->lpVtbl->get_Succeeded(This,value) )
    ( (This)->lpVtbl->get_Outputs(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor[] = L"Windows.AI.MachineLearning.ILearningModelFeatureDescriptor";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelFeatureKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequired )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptorVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_IsRequired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelFeatureValue[] = L"Windows.AI.MachineLearning.ILearningModelFeatureValue";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CLearningModelFeatureKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValueVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelOperatorProvider[] = L"Windows.AI.MachineLearning.ILearningModelOperatorProvider";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProviderVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelSession[] = L"Windows.AI.MachineLearning.ILearningModelSession";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Model )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EvaluationProperties )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *EvaluateAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * bindings,
                  __RPC__in HSTRING correlationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *EvaluateFeaturesAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                  __RPC__in_opt __FIMap_2_HSTRING_IInspectable * features,
                  __RPC__in HSTRING correlationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModelEvaluationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Evaluate )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelBinding * bindings,
                  __RPC__in HSTRING correlationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *EvaluateFeatures )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * This,
                  __RPC__in_opt __FIMap_2_HSTRING_IInspectable * features,
                  __RPC__in HSTRING correlationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelEvaluationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Model(This,value) )
    ( (This)->lpVtbl->get_Device(This,value) )
    ( (This)->lpVtbl->get_EvaluationProperties(This,value) )
    ( (This)->lpVtbl->EvaluateAsync(This,bindings,correlationId,operation) )
    ( (This)->lpVtbl->EvaluateFeaturesAsync(This,features,correlationId,operation) )
    ( (This)->lpVtbl->Evaluate(This,bindings,correlationId,result) )
    ( (This)->lpVtbl->EvaluateFeatures(This,features,correlationId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelSessionFactory[] = L"Windows.AI.MachineLearning.ILearningModelSessionFactory";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromModel )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * model,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromModelOnDevice )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * model,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * deviceToRunOn,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactoryVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromModel(This,model,value) )
    ( (This)->lpVtbl->CreateFromModelOnDevice(This,model,deviceToRunOn,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelSessionFactory2[] = L"Windows.AI.MachineLearning.ILearningModelSessionFactory2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromModelOnDeviceWithSessionOptions )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * model,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelDevice * deviceToRunOn,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * learningModelSessionOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromModelOnDeviceWithSessionOptions(This,model,deviceToRunOn,learningModelSessionOptions,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelSessionOptions[] = L"Windows.AI.MachineLearning.ILearningModelSessionOptions";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BatchSizeOverride )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BatchSizeOverride )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptionsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BatchSizeOverride(This,value) )
    ( (This)->lpVtbl->put_BatchSizeOverride(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelSessionOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ILearningModelStatics[] = L"Windows.AI.MachineLearning.ILearningModelStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LoadFromStorageFileAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * modelFile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStreamAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * modelStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromFilePath )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in HSTRING filePath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStream )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * modelStream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStorageFileWithOperatorProviderAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * modelFile,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * operatorProvider,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStreamWithOperatorProviderAsync )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * modelStream,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * operatorProvider,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CAI__CMachineLearning__CLearningModel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromFilePathWithOperatorProvider )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in HSTRING filePath,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * operatorProvider,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFromStreamWithOperatorProvider )(
        __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * modelStream,
                  __RPC__in_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelOperatorProvider * operatorProvider,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadFromStorageFileAsync(This,modelFile,operation) )
    ( (This)->lpVtbl->LoadFromStreamAsync(This,modelStream,operation) )
    ( (This)->lpVtbl->LoadFromFilePath(This,filePath,result) )
    ( (This)->lpVtbl->LoadFromStream(This,modelStream,result) )
    ( (This)->lpVtbl->LoadFromStorageFileWithOperatorProviderAsync(This,modelFile,operatorProvider,operation) )
    ( (This)->lpVtbl->LoadFromStreamWithOperatorProviderAsync(This,modelStream,operatorProvider,operation) )
    ( (This)->lpVtbl->LoadFromFilePathWithOperatorProvider(This,filePath,operatorProvider,result) )
    ( (This)->lpVtbl->LoadFromStreamWithOperatorProvider(This,modelStream,operatorProvider,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CILearningModelStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_IMapFeatureDescriptor[] = L"Windows.AI.MachineLearning.IMapFeatureDescriptor";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CTensorKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValueDescriptor )(
        __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptorVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyKind(This,value) )
    ( (This)->lpVtbl->get_ValueDescriptor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CIMapFeatureDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ISequenceFeatureDescriptor[] = L"Windows.AI.MachineLearning.ISequenceFeatureDescriptor";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ElementDescriptor )(
        __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CILearningModelFeatureDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptorVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ElementDescriptor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CISequenceFeatureDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensor[] = L"Windows.AI.MachineLearning.ITensor";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TensorKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CTensorKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensor * This,
                           __RPC__deref_out_opt __FIVectorView_1___z__zint64 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensor
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TensorKind(This,value) )
    ( (This)->lpVtbl->get_Shape(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorBoolean[] = L"Windows.AI.MachineLearning.ITensorBoolean";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * This,
                           __RPC__deref_out_opt __FIVectorView_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorBooleanStatics[] = L"Windows.AI.MachineLearning.ITensorBooleanStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) boolean * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_boolean * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorBooleanStatics2[] = L"Windows.AI.MachineLearning.ITensorBooleanStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) boolean * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorBoolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorBooleanStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorDouble[] = L"Windows.AI.MachineLearning.ITensorDouble";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * This,
                           __RPC__deref_out_opt __FIVectorView_1_double * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorDoubleStatics[] = L"Windows.AI.MachineLearning.ITensorDoubleStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) DOUBLE * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_double * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorDoubleStatics2[] = L"Windows.AI.MachineLearning.ITensorDoubleStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) DOUBLE * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorDouble * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorDoubleStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFeatureDescriptor[] = L"Windows.AI.MachineLearning.ITensorFeatureDescriptor";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TensorKind )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CAI_CMachineLearning_CTensorKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor * This,
                           __RPC__deref_out_opt __FIVectorView_1___z__zint64 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptorVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TensorKind(This,value) )
    ( (This)->lpVtbl->get_Shape(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFeatureDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFloat[] = L"Windows.AI.MachineLearning.ITensorFloat";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * This,
                           __RPC__deref_out_opt __FIVectorView_1_float * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFloat16Bit[] = L"Windows.AI.MachineLearning.ITensorFloat16Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_float * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFloat16BitStatics[] = L"Windows.AI.MachineLearning.ITensorFloat16BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) FLOAT * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_float * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFloat16BitStatics2[] = L"Windows.AI.MachineLearning.ITensorFloat16BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) FLOAT * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat16BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFloatStatics[] = L"Windows.AI.MachineLearning.ITensorFloatStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) FLOAT * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_float * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorFloatStatics2[] = L"Windows.AI.MachineLearning.ITensorFloatStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) FLOAT * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloat * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorFloatStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt16Bit[] = L"Windows.AI.MachineLearning.ITensorInt16Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_short * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt16BitStatics[] = L"Windows.AI.MachineLearning.ITensorInt16BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) INT16 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_short * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt16BitStatics2[] = L"Windows.AI.MachineLearning.ITensorInt16BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) INT16 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt16BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt32Bit[] = L"Windows.AI.MachineLearning.ITensorInt32Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_int * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt32BitStatics[] = L"Windows.AI.MachineLearning.ITensorInt32BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) INT32 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_int * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt32BitStatics2[] = L"Windows.AI.MachineLearning.ITensorInt32BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) INT32 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt32BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt64Bit[] = L"Windows.AI.MachineLearning.ITensorInt64Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1___z__zint64 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt64BitStatics[] = L"Windows.AI.MachineLearning.ITensorInt64BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) INT64 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1___z__zint64 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt64BitStatics2[] = L"Windows.AI.MachineLearning.ITensorInt64BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) INT64 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt64BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt8Bit[] = L"Windows.AI.MachineLearning.ITensorInt8Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_byte * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt8BitStatics[] = L"Windows.AI.MachineLearning.ITensorInt8BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) BYTE * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_byte * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorInt8BitStatics2[] = L"Windows.AI.MachineLearning.ITensorInt8BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) BYTE * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorInt8BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorString[] = L"Windows.AI.MachineLearning.ITensorString";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorString
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorString;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorStringStatics[] = L"Windows.AI.MachineLearning.ITensorStringStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) HSTRING * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_HSTRING * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorStringStatics2[] = L"Windows.AI.MachineLearning.ITensorStringStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) HSTRING * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorString * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorStringStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt16Bit[] = L"Windows.AI.MachineLearning.ITensorUInt16Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT16 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt16BitStatics[] = L"Windows.AI.MachineLearning.ITensorUInt16BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) UINT16 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_UINT16 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt16BitStatics2[] = L"Windows.AI.MachineLearning.ITensorUInt16BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) UINT16 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt16BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt32Bit[] = L"Windows.AI.MachineLearning.ITensorUInt32Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt32BitStatics[] = L"Windows.AI.MachineLearning.ITensorUInt32BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) UINT32 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_UINT32 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt32BitStatics2[] = L"Windows.AI.MachineLearning.ITensorUInt32BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) UINT32 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt32BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt64Bit[] = L"Windows.AI.MachineLearning.ITensorUInt64Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT64 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt64BitStatics[] = L"Windows.AI.MachineLearning.ITensorUInt64BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) UINT64 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_UINT64 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt64BitStatics2[] = L"Windows.AI.MachineLearning.ITensorUInt64BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) UINT64 * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt64BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt8Bit[] = L"Windows.AI.MachineLearning.ITensorUInt8Bit";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsVectorView )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * This,
                           __RPC__deref_out_opt __FIVectorView_1_byte * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsVectorView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt8BitStatics[] = L"Windows.AI.MachineLearning.ITensorUInt8BitStatics";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *Create2 )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) BYTE * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIterable )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics * This,
                  __RPC__in_opt __FIIterable_1___z__zint64 * shape,
                  __RPC__in_opt __FIIterable_1_byte * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStaticsVtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,result) )
    ( (This)->lpVtbl->Create2(This,shape,result) )
    ( (This)->lpVtbl->CreateFromArray(This,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromIterable(This,shape,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_MachineLearning_ITensorUInt8BitStatics2[] = L"Windows.AI.MachineLearning.ITensorUInt8BitStatics2";
typedef struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromShapeArrayAndDataArray )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  UINT32 __dataSize,
                                       __RPC__in_ecount_full(__dataSize) BYTE * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2 * This,
                  UINT32 __shapeSize,
                                        __RPC__in_ecount_full(__shapeSize) INT64 * shape,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8Bit * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2Vtbl;
interface __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromShapeArrayAndDataArray(This,__shapeSize,shape,__dataSize,data,result) )
    ( (This)->lpVtbl->CreateFromBuffer(This,__shapeSize,shape,buffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CAI_CMachineLearning_CITensorUInt8BitStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_ImageFeatureDescriptor[] = L"Windows.AI.MachineLearning.ImageFeatureDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_ImageFeatureValue[] = L"Windows.AI.MachineLearning.ImageFeatureValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_LearningModel[] = L"Windows.AI.MachineLearning.LearningModel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_LearningModelBinding[] = L"Windows.AI.MachineLearning.LearningModelBinding";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_LearningModelDevice[] = L"Windows.AI.MachineLearning.LearningModelDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_LearningModelEvaluationResult[] = L"Windows.AI.MachineLearning.LearningModelEvaluationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_LearningModelSession[] = L"Windows.AI.MachineLearning.LearningModelSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_LearningModelSessionOptions[] = L"Windows.AI.MachineLearning.LearningModelSessionOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_MapFeatureDescriptor[] = L"Windows.AI.MachineLearning.MapFeatureDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_SequenceFeatureDescriptor[] = L"Windows.AI.MachineLearning.SequenceFeatureDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorBoolean[] = L"Windows.AI.MachineLearning.TensorBoolean";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorDouble[] = L"Windows.AI.MachineLearning.TensorDouble";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorFeatureDescriptor[] = L"Windows.AI.MachineLearning.TensorFeatureDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorFloat[] = L"Windows.AI.MachineLearning.TensorFloat";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorFloat16Bit[] = L"Windows.AI.MachineLearning.TensorFloat16Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorInt16Bit[] = L"Windows.AI.MachineLearning.TensorInt16Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorInt32Bit[] = L"Windows.AI.MachineLearning.TensorInt32Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorInt64Bit[] = L"Windows.AI.MachineLearning.TensorInt64Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorInt8Bit[] = L"Windows.AI.MachineLearning.TensorInt8Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorString[] = L"Windows.AI.MachineLearning.TensorString";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorUInt16Bit[] = L"Windows.AI.MachineLearning.TensorUInt16Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorUInt32Bit[] = L"Windows.AI.MachineLearning.TensorUInt32Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorUInt64Bit[] = L"Windows.AI.MachineLearning.TensorUInt64Bit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_MachineLearning_TensorUInt8Bit[] = L"Windows.AI.MachineLearning.TensorUInt8Bit";
       
       
#pragma clang diagnostic pop
