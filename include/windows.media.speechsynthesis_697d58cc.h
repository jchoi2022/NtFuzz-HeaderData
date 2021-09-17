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
#include "Windows.Media.h"
#include "Windows.Media.Core.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3;
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation;
typedef interface __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;
typedef struct __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl;
interface __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;
typedef struct __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl;
interface __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;
typedef struct __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                       __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl;
interface __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarker __x_ABI_CWindows_CMedia_CIMediaMarker;
typedef interface __FIIterator_1_Windows__CMedia__CIMediaMarker __FIIterator_1_Windows__CMedia__CIMediaMarker;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CIMediaMarker;
typedef struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl;
interface __FIIterator_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CIMediaMarker __FIIterable_1_Windows__CMedia__CIMediaMarker;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CIMediaMarker;
typedef struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CIMediaMarker **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl;
interface __FIIterable_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CIMediaMarker __FIVectorView_1_Windows__CMedia__CIMediaMarker;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CIMediaMarker;
typedef struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                       __x_ABI_CWindows_CMedia_CIMediaMarker * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl;
interface __FIVectorView_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechAppendedSilence __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechAppendedSilence;
typedef enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechPunctuationSilence __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechPunctuationSilence;
typedef enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender;
enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechAppendedSilence
{
    SpeechAppendedSilence_Default = 0,
    SpeechAppendedSilence_Min = 1,
};
enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechPunctuationSilence
{
    SpeechPunctuationSilence_Default = 0,
    SpeechPunctuationSilence_Min = 1,
};
enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender
{
    VoiceGender_Male = 0,
    VoiceGender_Female = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic[] = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllVoices )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultVoice )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStaticVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllVoices(This,value) )
    ( (This)->lpVtbl->get_DefaultVoice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2[] = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetDefaultVoiceAsync )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * voice,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TrySetDefaultVoiceAsync(This,voice,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesisStream";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Markers )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CIMediaMarker * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStreamVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStreamVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Markers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizer[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SynthesizeTextToStreamAsync )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SynthesizeSsmlToStreamAsync )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                  __RPC__in HSTRING Ssml,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Voice )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Voice )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SynthesizeTextToStreamAsync(This,text,operation) )
    ( (This)->lpVtbl->SynthesizeSsmlToStreamAsync(This,Ssml,operation) )
    ( (This)->lpVtbl->put_Voice(This,value) )
    ( (This)->lpVtbl->get_Voice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer2";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Options(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IncludeWordBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeWordBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeSentenceBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeSentenceBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptionsVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IncludeWordBoundaryMetadata(This,value) )
    ( (This)->lpVtbl->put_IncludeWordBoundaryMetadata(This,value) )
    ( (This)->lpVtbl->get_IncludeSentenceBoundaryMetadata(This,value) )
    ( (This)->lpVtbl->put_IncludeSentenceBoundaryMetadata(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioVolume )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioVolume )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpeakingRate )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpeakingRate )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioPitch )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioPitch )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioVolume(This,value) )
    ( (This)->lpVtbl->put_AudioVolume(This,value) )
    ( (This)->lpVtbl->get_SpeakingRate(This,value) )
    ( (This)->lpVtbl->put_SpeakingRate(This,value) )
    ( (This)->lpVtbl->get_AudioPitch(This,value) )
    ( (This)->lpVtbl->put_AudioPitch(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions3";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppendedSilence )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechAppendedSilence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppendedSilence )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                  __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechAppendedSilence value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PunctuationSilence )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechPunctuationSilence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PunctuationSilence )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3 * This,
                  __x_ABI_CWindows_CMedia_CSpeechSynthesis_CSpeechPunctuationSilence value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3Vtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppendedSilence(This,value) )
    ( (This)->lpVtbl->put_AppendedSilence(This,value) )
    ( (This)->lpVtbl->get_PunctuationSilence(This,value) )
    ( (This)->lpVtbl->put_PunctuationSilence(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IVoiceInformation[] = L"Windows.Media.SpeechSynthesis.IVoiceInformation";
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gender )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformationVtbl;
interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Gender(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesisStream[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesisStream";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesizer[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_VoiceInformation[] = L"Windows.Media.SpeechSynthesis.VoiceInformation";
       
       
#pragma clang diagnostic pop
