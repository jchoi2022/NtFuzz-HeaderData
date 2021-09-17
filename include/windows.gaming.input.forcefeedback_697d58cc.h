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
#include "Windows.Foundation.Numerics.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory;
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect;
typedef interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                       __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, __RPC__out enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind;
typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes;
typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState;
typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult;
typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind;
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind
{
    ConditionForceEffectKind_Spring = 0,
    ConditionForceEffectKind_Damper = 1,
    ConditionForceEffectKind_Inertia = 2,
    ConditionForceEffectKind_Friction = 3,
};
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes
{
    ForceFeedbackEffectAxes_None = 0,
    ForceFeedbackEffectAxes_X = 0x1,
    ForceFeedbackEffectAxes_Y = 0x2,
    ForceFeedbackEffectAxes_Z = 0x4,
};
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState
{
    ForceFeedbackEffectState_Stopped = 0,
    ForceFeedbackEffectState_Running = 1,
    ForceFeedbackEffectState_Paused = 2,
    ForceFeedbackEffectState_Faulted = 3,
};
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult
{
    ForceFeedbackLoadEffectResult_Succeeded = 0,
    ForceFeedbackLoadEffectResult_EffectStorageFull = 1,
    ForceFeedbackLoadEffectResult_EffectNotSupported = 2,
};
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind
{
    PeriodicForceEffectKind_SquareWave = 0,
    PeriodicForceEffectKind_SineWave = 1,
    PeriodicForceEffectKind_TriangleWave = 2,
    PeriodicForceEffectKind_SawtoothWaveUp = 3,
    PeriodicForceEffectKind_SawtoothWaveDown = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffect";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 direction,
                  FLOAT positiveCoefficient,
                  FLOAT negativeCoefficient,
                  FLOAT maxPositiveMagnitude,
                  FLOAT maxNegativeMagnitude,
                  FLOAT deadZone,
                  FLOAT bias
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->SetParameters(This,direction,positiveCoefficient,negativeCoefficient,maxPositiveMagnitude,maxNegativeMagnitude,deadZone,bias) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory[] = L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
                  __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind effectKind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactoryVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,effectKind,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IConstantForceEffect";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *SetParametersWithEnvelope )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
                  FLOAT attackGain,
                  FLOAT sustainGain,
                  FLOAT releaseGain,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startDelay,
                  __x_ABI_CWindows_CFoundation_CTimeSpan attackDuration,
                  __x_ABI_CWindows_CFoundation_CTimeSpan sustainDuration,
                  __x_ABI_CWindows_CFoundation_CTimeSpan releaseDuration,
                  UINT32 repeatCount
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffectVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetParameters(This,vector,duration) )
    ( (This)->lpVtbl->SetParametersWithEnvelope(This,vector,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect[] = L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffectVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Gain(This,value) )
    ( (This)->lpVtbl->put_Gain(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor[] = L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AreEffectsPaused )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MasterGain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MasterGain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedAxes )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadEffectAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * effect,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *PauseAllEffects )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeAllEffects )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
        );
    HRESULT ( STDMETHODCALLTYPE *StopAllEffects )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryDisableAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryEnableAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryResetAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryUnloadEffectAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * effect,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotorVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AreEffectsPaused(This,value) )
    ( (This)->lpVtbl->get_MasterGain(This,value) )
    ( (This)->lpVtbl->put_MasterGain(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_SupportedAxes(This,value) )
    ( (This)->lpVtbl->LoadEffectAsync(This,effect,asyncOperation) )
    ( (This)->lpVtbl->PauseAllEffects(This) )
    ( (This)->lpVtbl->ResumeAllEffects(This) )
    ( (This)->lpVtbl->StopAllEffects(This) )
    ( (This)->lpVtbl->TryDisableAsync(This,asyncOperation) )
    ( (This)->lpVtbl->TryEnableAsync(This,asyncOperation) )
    ( (This)->lpVtbl->TryResetAsync(This,asyncOperation) )
    ( (This)->lpVtbl->TryUnloadEffectAsync(This,effect,asyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
                  FLOAT frequency,
                  FLOAT phase,
                  FLOAT bias,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *SetParametersWithEnvelope )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
                  FLOAT frequency,
                  FLOAT phase,
                  FLOAT bias,
                  FLOAT attackGain,
                  FLOAT sustainGain,
                  FLOAT releaseGain,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startDelay,
                  __x_ABI_CWindows_CFoundation_CTimeSpan attackDuration,
                  __x_ABI_CWindows_CFoundation_CTimeSpan sustainDuration,
                  __x_ABI_CWindows_CFoundation_CTimeSpan releaseDuration,
                  UINT32 repeatCount
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->SetParameters(This,vector,frequency,phase,bias,duration) )
    ( (This)->lpVtbl->SetParametersWithEnvelope(This,vector,frequency,phase,bias,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory[] = L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
                  __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind effectKind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactoryVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,effectKind,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IRampForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IRampForceEffect";
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 startVector,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 endVector,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *SetParametersWithEnvelope )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 startVector,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 endVector,
                  FLOAT attackGain,
                  FLOAT sustainGain,
                  FLOAT releaseGain,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startDelay,
                  __x_ABI_CWindows_CFoundation_CTimeSpan attackDuration,
                  __x_ABI_CWindows_CFoundation_CTimeSpan sustainDuration,
                  __x_ABI_CWindows_CFoundation_CTimeSpan releaseDuration,
                  UINT32 repeatCount
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffectVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetParameters(This,startVector,endVector,duration) )
    ( (This)->lpVtbl->SetParametersWithEnvelope(This,startVector,endVector,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.ConstantForceEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor[] = L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_RampForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.RampForceEffect";
       
       
#pragma clang diagnostic pop
