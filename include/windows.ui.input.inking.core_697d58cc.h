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
#include "Windows.UI.Composition.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.Inking.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIContainerVisual __x_ABI_CWindows_CUI_CComposition_CIContainerVisual;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition;
enum __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition
{
    CoreWetStrokeDisposition_Inking = 0,
    CoreWetStrokeDisposition_Completed = 1,
    CoreWetStrokeDisposition_Canceled = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke[] = L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AppendInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInkStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AppendInkPoints(This,inkPoints,result) )
    ( (This)->lpVtbl->CreateInkStroke(This,result) )
    ( (This)->lpVtbl->get_DrawingAttributes(This,value) )
    ( (This)->lpVtbl->get_PointTransform(This,value) )
    ( (This)->lpVtbl->get_BoundingRect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory[] = L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * drawingAttributes,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 pointTransform,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,drawingAttributes,pointTransform,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PointerEntering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerEntering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerHovering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerHovering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerExiting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerExiting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerPressing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerPressing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerMoving )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerMoving )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerReleasing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerReleasing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PointerEntering(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerEntering(This,cookie) )
    ( (This)->lpVtbl->add_PointerHovering(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerHovering(This,cookie) )
    ( (This)->lpVtbl->add_PointerExiting(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerExiting(This,cookie) )
    ( (This)->lpVtbl->add_PointerPressing(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerPressing(This,cookie) )
    ( (This)->lpVtbl->add_PointerMoving(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerMoving(This,cookie) )
    ( (This)->lpVtbl->add_PointerReleasing(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerReleasing(This,cookie) )
    ( (This)->lpVtbl->add_PointerLost(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerLost(This,cookie) )
    ( (This)->lpVtbl->get_InkPresenter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * * inkIndependentInputSource
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,inkPresenter,inkIndependentInputSource) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost[] = L"Windows.UI.Input.Inking.Core.ICoreInkPresenterHost";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RootVisual )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RootVisual )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHostVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHostVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InkPresenter(This,value) )
    ( (This)->lpVtbl->get_RootVisual(This,value) )
    ( (This)->lpVtbl->put_RootVisual(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Disposition )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Disposition )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewInkPoints(This,value) )
    ( (This)->lpVtbl->get_PointerId(This,value) )
    ( (This)->lpVtbl->get_Disposition(This,value) )
    ( (This)->lpVtbl->put_Disposition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_WetStrokeStarting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeStarting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WetStrokeContinuing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeContinuing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WetStrokeStopping )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeStopping )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WetStrokeCompleted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeCompleted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WetStrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_WetStrokeStarting(This,handler,cookie) )
    ( (This)->lpVtbl->remove_WetStrokeStarting(This,cookie) )
    ( (This)->lpVtbl->add_WetStrokeContinuing(This,handler,cookie) )
    ( (This)->lpVtbl->remove_WetStrokeContinuing(This,cookie) )
    ( (This)->lpVtbl->add_WetStrokeStopping(This,handler,cookie) )
    ( (This)->lpVtbl->remove_WetStrokeStopping(This,cookie) )
    ( (This)->lpVtbl->add_WetStrokeCompleted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_WetStrokeCompleted(This,cookie) )
    ( (This)->lpVtbl->add_WetStrokeCanceled(This,handler,cookie) )
    ( (This)->lpVtbl->remove_WetStrokeCanceled(This,cookie) )
    ( (This)->lpVtbl->get_InkPresenter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * * WetStrokeUpdateSource
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,inkPresenter,WetStrokeUpdateSource) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke[] = L"Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkPresenterHost[] = L"Windows.UI.Input.Inking.Core.CoreInkPresenterHost";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs[] = L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource[] = L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource";
       
       
#pragma clang diagnostic pop
