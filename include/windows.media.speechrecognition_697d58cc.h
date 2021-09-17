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
#include "Windows.Globalization.h"
#include "Windows.Phone.h"
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
typedef struct __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl;
interface __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
typedef struct __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl;
interface __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
typedef struct __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl;
interface __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
typedef struct __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl;
interface __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet;
typedef struct __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl;
interface __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSetVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
typedef struct __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                       __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl;
interface __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
typedef struct __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                       __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl;
interface __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint;
typedef struct __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This, __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl;
interface __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraintVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * This, __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * This, __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING___FIVectorView_1_HSTRING __FIMapView_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __FIVectorView_1_HSTRING * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIMapView_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;
typedef interface __FIIterator_1_Windows__CGlobalization__CLanguage __FIIterator_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterator_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGlobalization__CLanguage __FIIterable_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CLanguage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterable_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGlobalization__CLanguage __FIVectorView_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CLanguage;
typedef struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       __x_ABI_CWindows_CGlobalization_CILanguage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIVectorView_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechContinuousRecognitionMode __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechContinuousRecognitionMode;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionAudioProblem __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionAudioProblem;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConfidence __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConfidence;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintProbability __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintProbability;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintType __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintType;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionResultStatus __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionResultStatus;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionScenario __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionScenario;
typedef enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognizerState __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognizerState;
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechContinuousRecognitionMode
{
    SpeechContinuousRecognitionMode_Default = 0,
    SpeechContinuousRecognitionMode_PauseOnRecognition = 1,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionAudioProblem
{
    SpeechRecognitionAudioProblem_None = 0,
    SpeechRecognitionAudioProblem_TooNoisy = 1,
    SpeechRecognitionAudioProblem_NoSignal = 2,
    SpeechRecognitionAudioProblem_TooLoud = 3,
    SpeechRecognitionAudioProblem_TooQuiet = 4,
    SpeechRecognitionAudioProblem_TooFast = 5,
    SpeechRecognitionAudioProblem_TooSlow = 6,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConfidence
{
    SpeechRecognitionConfidence_High = 0,
    SpeechRecognitionConfidence_Medium = 1,
    SpeechRecognitionConfidence_Low = 2,
    SpeechRecognitionConfidence_Rejected = 3,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintProbability
{
    SpeechRecognitionConstraintProbability_Default = 0,
    SpeechRecognitionConstraintProbability_Min = 1,
    SpeechRecognitionConstraintProbability_Max = 2,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintType
{
    SpeechRecognitionConstraintType_Topic = 0,
    SpeechRecognitionConstraintType_List = 1,
    SpeechRecognitionConstraintType_Grammar = 2,
    SpeechRecognitionConstraintType_VoiceCommandDefinition = 3,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionResultStatus
{
    SpeechRecognitionResultStatus_Success = 0,
    SpeechRecognitionResultStatus_TopicLanguageNotSupported = 1,
    SpeechRecognitionResultStatus_GrammarLanguageMismatch = 2,
    SpeechRecognitionResultStatus_GrammarCompilationFailure = 3,
    SpeechRecognitionResultStatus_AudioQualityFailure = 4,
    SpeechRecognitionResultStatus_UserCanceled = 5,
    SpeechRecognitionResultStatus_Unknown = 6,
    SpeechRecognitionResultStatus_TimeoutExceeded = 7,
    SpeechRecognitionResultStatus_PauseLimitExceeded = 8,
    SpeechRecognitionResultStatus_NetworkFailure = 9,
    SpeechRecognitionResultStatus_MicrophoneUnavailable = 10,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionScenario
{
    SpeechRecognitionScenario_WebSearch = 0,
    SpeechRecognitionScenario_Dictation = 1,
    SpeechRecognitionScenario_FormFilling = 2,
};
enum __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognizerState
{
    SpeechRecognizerState_Idle = 0,
    SpeechRecognizerState_Capturing = 1,
    SpeechRecognizerState_Processing = 2,
    SpeechRecognizerState_SoundStarted = 3,
    SpeechRecognizerState_SoundEnded = 4,
    SpeechRecognizerState_SpeechDetected = 5,
    SpeechRecognizerState_Paused = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionCompletedEventArgs[] = L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionCompletedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionResultStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionResultGeneratedEventArgs[] = L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionResultGeneratedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Result(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionResultGeneratedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession[] = L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionSession";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutoStopSilenceTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoStopSilenceTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *StartWithModeAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                  __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechContinuousRecognitionMode mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CancelAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PauseAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionCompletedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                  EventRegistrationToken value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ResultGenerated )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionSession_Windows__CMedia__CSpeechRecognition__CSpeechContinuousRecognitionResultGeneratedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResultGenerated )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * This,
                  EventRegistrationToken value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSessionVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutoStopSilenceTimeout(This,value) )
    ( (This)->lpVtbl->put_AutoStopSilenceTimeout(This,value) )
    ( (This)->lpVtbl->StartAsync(This,value) )
    ( (This)->lpVtbl->StartWithModeAsync(This,mode,value) )
    ( (This)->lpVtbl->StopAsync(This,value) )
    ( (This)->lpVtbl->CancelAsync(This,value) )
    ( (This)->lpVtbl->PauseAsync(This,value) )
    ( (This)->lpVtbl->Resume(This) )
    ( (This)->lpVtbl->add_Completed(This,value,returnValue) )
    ( (This)->lpVtbl->remove_Completed(This,value) )
    ( (This)->lpVtbl->add_ResultGenerated(This,value,returnValue) )
    ( (This)->lpVtbl->remove_ResultGenerated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionCompilationResult[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionCompilationResult";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionResultStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResultVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionCompilationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionConstraint";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Probability )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintProbability * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Probability )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * This,
                  __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConstraintProbability value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraintVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraintVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Probability(This,value) )
    ( (This)->lpVtbl->put_Probability(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraint[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionGrammarFileConstraint";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GrammarFile )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GrammarFile(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionGrammarFileConstraintFactory";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * * constraint
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTag )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING tag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraint * * constraint
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,file,constraint) )
    ( (This)->lpVtbl->CreateWithTag(This,file,tag,constraint) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionGrammarFileConstraintFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesis[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionHypothesis";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesisGeneratedEventArgs[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionHypothesisGeneratedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Hypothesis )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesis * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Hypothesis(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionHypothesisGeneratedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraint[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionListConstraint";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Commands(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionListConstraintFactory";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * commands,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * * constraint
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTag )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * commands,
                  __RPC__in HSTRING tag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraint * * constraint
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,commands,constraint) )
    ( (This)->lpVtbl->CreateWithTag(This,commands,tag,constraint) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionListConstraintFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionQualityDegradingEventArgs[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionQualityDegradingEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Problem )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionAudioProblem * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Problem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionQualityDegradingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionResult[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionResult";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionResultStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Confidence )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionConfidence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SemanticInterpretation )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAlternates )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                  UINT32 maxAlternates,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * * alternates
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Constraint )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionConstraint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RulePath )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawConfidence )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResultVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->get_Confidence(This,value) )
    ( (This)->lpVtbl->get_SemanticInterpretation(This,value) )
    ( (This)->lpVtbl->GetAlternates(This,maxAlternates,alternates) )
    ( (This)->lpVtbl->get_Constraint(This,value) )
    ( (This)->lpVtbl->get_RulePath(This,value) )
    ( (This)->lpVtbl->get_RawConfidence(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionResult2";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PhraseStartTime )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhraseDuration )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PhraseStartTime(This,value) )
    ( (This)->lpVtbl->get_PhraseDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionSemanticInterpretation[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionSemanticInterpretation";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretationVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionSemanticInterpretation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionTopicConstraint";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Scenario )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionScenario * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TopicHint )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Scenario(This,value) )
    ( (This)->lpVtbl->get_TopicHint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionTopicConstraintFactory";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This,
                  __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionScenario scenario,
                  __RPC__in HSTRING topicHint,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * * constraint
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTag )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory * This,
                  __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognitionScenario scenario,
                  __RPC__in HSTRING topicHint,
                  __RPC__in HSTRING tag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraint * * constraint
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,scenario,topicHint,constraint) )
    ( (This)->lpVtbl->CreateWithTag(This,scenario,topicHint,tag,constraint) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionTopicConstraintFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognitionVoiceCommandDefinitionConstraint[] = L"Windows.Media.SpeechRecognition.ISpeechRecognitionVoiceCommandDefinitionConstraint";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraintVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraintVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraintVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionVoiceCommandDefinitionConstraint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizer[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizer";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentLanguage )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * language
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Constraints )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CSpeechRecognition__CISpeechRecognitionConstraint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timeouts )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UIOptions )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CompileConstraintsAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionCompilationResult * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RecognizeAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RecognizeWithUIAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionResult * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RecognitionQualityDegrading )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionQualityDegradingEventArgs * speechRecognitionQualityDegradingHandler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RecognitionQualityDegrading )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognizerStateChangedEventArgs * stateChangedHandler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentLanguage(This,language) )
    ( (This)->lpVtbl->get_Constraints(This,value) )
    ( (This)->lpVtbl->get_Timeouts(This,value) )
    ( (This)->lpVtbl->get_UIOptions(This,value) )
    ( (This)->lpVtbl->CompileConstraintsAsync(This,asyncOperation) )
    ( (This)->lpVtbl->RecognizeAsync(This,asyncOperation) )
    ( (This)->lpVtbl->RecognizeWithUIAsync(This,asyncOperation) )
    ( (This)->lpVtbl->add_RecognitionQualityDegrading(This,speechRecognitionQualityDegradingHandler,cookie) )
    ( (This)->lpVtbl->remove_RecognitionQualityDegrading(This,cookie) )
    ( (This)->lpVtbl->add_StateChanged(This,stateChangedHandler,cookie) )
    ( (This)->lpVtbl->remove_StateChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizer2[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizer2";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContinuousRecognitionSession )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechContinuousRecognitionSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognizerState * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopRecognitionAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HypothesisGenerated )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSpeechRecognition__CSpeechRecognizer_Windows__CMedia__CSpeechRecognition__CSpeechRecognitionHypothesisGeneratedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HypothesisGenerated )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2 * This,
                  EventRegistrationToken value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContinuousRecognitionSession(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->StopRecognitionAsync(This,value) )
    ( (This)->lpVtbl->add_HypothesisGenerated(This,value,returnValue) )
    ( (This)->lpVtbl->remove_HypothesisGenerated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizerFactory[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizerFactory";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CILanguage * language,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizer * * recognizer
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,language,recognizer) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizerStateChangedEventArgs[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizerStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechRecognition_CSpeechRecognizerState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizerStatics";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SystemSpeechLanguage )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * language
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedTopicLanguages )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage * * languages
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedGrammarLanguages )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage * * languages
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SystemSpeechLanguage(This,language) )
    ( (This)->lpVtbl->get_SupportedTopicLanguages(This,languages) )
    ( (This)->lpVtbl->get_SupportedGrammarLanguages(This,languages) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics2[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizerStatics2";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetSystemSpeechLanguageAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CILanguage * speechLanguage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TrySetSystemSpeechLanguageAsync(This,speechLanguage,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizerTimeouts";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeoutsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InitialSilenceTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialSilenceTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndSilenceTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndSilenceTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BabbleTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BabbleTimeout )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeoutsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeoutsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InitialSilenceTimeout(This,value) )
    ( (This)->lpVtbl->put_InitialSilenceTimeout(This,value) )
    ( (This)->lpVtbl->get_EndSilenceTimeout(This,value) )
    ( (This)->lpVtbl->put_EndSilenceTimeout(This,value) )
    ( (This)->lpVtbl->get_BabbleTimeout(This,value) )
    ( (This)->lpVtbl->put_BabbleTimeout(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerTimeouts;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions[] = L"Windows.Media.SpeechRecognition.ISpeechRecognizerUIOptions";
typedef struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExampleText )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExampleText )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudiblePrompt )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudiblePrompt )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadBackEnabled )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsReadBackEnabled )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowConfirmation )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowConfirmation )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptionsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExampleText(This,value) )
    ( (This)->lpVtbl->put_ExampleText(This,value) )
    ( (This)->lpVtbl->get_AudiblePrompt(This,value) )
    ( (This)->lpVtbl->put_AudiblePrompt(This,value) )
    ( (This)->lpVtbl->get_IsReadBackEnabled(This,value) )
    ( (This)->lpVtbl->put_IsReadBackEnabled(This,value) )
    ( (This)->lpVtbl->get_ShowConfirmation(This,value) )
    ( (This)->lpVtbl->put_ShowConfirmation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognizerUIOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_IVoiceCommandManager[] = L"Windows.Media.SpeechRecognition.IVoiceCommandManager";
typedef struct
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager instead of Windows.Media.SpeechRecognition.VoiceComandManager. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager instead of Windows.Media.SpeechRecognition.VoiceComandManager. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *InstallCommandSetsFromStorageFileAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * installAction
        );
    DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager instead of Windows.Media.SpeechRecognition.VoiceComandManager. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_InstalledCommandSets )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CSpeechRecognition__CVoiceCommandSet * * voiceCommandSets
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManagerVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager instead of Windows.Media.SpeechRecognition.VoiceComandManager. For more info, see MSDN.")
    ( (This)->lpVtbl->InstallCommandSetsFromStorageFileAsync(This,file,installAction) )
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager instead of Windows.Media.SpeechRecognition.VoiceComandManager. For more info, see MSDN.")
    ( (This)->lpVtbl->get_InstalledCommandSets(This,voiceCommandSets) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechRecognition_IVoiceCommandSet[] = L"Windows.Media.SpeechRecognition.IVoiceCommandSet";
typedef struct
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetPhraseListAsync )(
        __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet * This,
                  __RPC__in HSTRING phraseListName,
                  __RPC__in_opt __FIIterable_1_HSTRING * phraseList,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * updateAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSetVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Language(This,value) )
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Name(This,value) )
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
    ( (This)->lpVtbl->SetPhraseListAsync(This,phraseListName,phraseList,updateAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechRecognition_CIVoiceCommandSet;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechContinuousRecognitionCompletedEventArgs[] = L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechContinuousRecognitionResultGeneratedEventArgs[] = L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionResultGeneratedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechContinuousRecognitionSession[] = L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionCompilationResult[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionCompilationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionGrammarFileConstraint[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionGrammarFileConstraint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionHypothesis[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionHypothesis";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionHypothesisGeneratedEventArgs[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionHypothesisGeneratedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionListConstraint[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionListConstraint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionQualityDegradingEventArgs[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionQualityDegradingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionResult[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionSemanticInterpretation[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionSemanticInterpretation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionTopicConstraint[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionTopicConstraint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognitionVoiceCommandDefinitionConstraint[] = L"Windows.Media.SpeechRecognition.SpeechRecognitionVoiceCommandDefinitionConstraint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognizer[] = L"Windows.Media.SpeechRecognition.SpeechRecognizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognizerStateChangedEventArgs[] = L"Windows.Media.SpeechRecognition.SpeechRecognizerStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognizerTimeouts[] = L"Windows.Media.SpeechRecognition.SpeechRecognizerTimeouts";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_SpeechRecognizerUIOptions[] = L"Windows.Media.SpeechRecognition.SpeechRecognizerUIOptions";
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager instead of Windows.Media.SpeechRecognition.VoiceComandManager. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_VoiceCommandManager[] = L"Windows.Media.SpeechRecognition.VoiceCommandManager";
DEPRECATED("Use Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition instead of Windows.Media.SpeechRecognition.VoiceComandSet. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechRecognition_VoiceCommandSet[] = L"Windows.Media.SpeechRecognition.VoiceCommandSet";
       
       
#pragma clang diagnostic pop
