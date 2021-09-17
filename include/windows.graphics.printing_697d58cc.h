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
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3;
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting__CPrintPageRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                       __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintPageRange **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRangeVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion;
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription;
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding
{
    PrintBinding_Default = 0,
    PrintBinding_NotAvailable = 1,
    PrintBinding_PrinterCustom = 2,
    PrintBinding_None = 3,
    PrintBinding_Bale = 4,
    PrintBinding_BindBottom = 5,
    PrintBinding_BindLeft = 6,
    PrintBinding_BindRight = 7,
    PrintBinding_BindTop = 8,
    PrintBinding_Booklet = 9,
    PrintBinding_EdgeStitchBottom = 10,
    PrintBinding_EdgeStitchLeft = 11,
    PrintBinding_EdgeStitchRight = 12,
    PrintBinding_EdgeStitchTop = 13,
    PrintBinding_Fold = 14,
    PrintBinding_JogOffset = 15,
    PrintBinding_Trim = 16,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering
{
    PrintBordering_Default = 0,
    PrintBordering_NotAvailable = 1,
    PrintBordering_PrinterCustom = 2,
    PrintBordering_Bordered = 3,
    PrintBordering_Borderless = 4,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation
{
    PrintCollation_Default = 0,
    PrintCollation_NotAvailable = 1,
    PrintCollation_PrinterCustom = 2,
    PrintCollation_Collated = 3,
    PrintCollation_Uncollated = 4,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode
{
    PrintColorMode_Default = 0,
    PrintColorMode_NotAvailable = 1,
    PrintColorMode_PrinterCustom = 2,
    PrintColorMode_Color = 3,
    PrintColorMode_Grayscale = 4,
    PrintColorMode_Monochrome = 5,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex
{
    PrintDuplex_Default = 0,
    PrintDuplex_NotAvailable = 1,
    PrintDuplex_PrinterCustom = 2,
    PrintDuplex_OneSided = 3,
    PrintDuplex_TwoSidedShortEdge = 4,
    PrintDuplex_TwoSidedLongEdge = 5,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch
{
    PrintHolePunch_Default = 0,
    PrintHolePunch_NotAvailable = 1,
    PrintHolePunch_PrinterCustom = 2,
    PrintHolePunch_None = 3,
    PrintHolePunch_LeftEdge = 4,
    PrintHolePunch_RightEdge = 5,
    PrintHolePunch_TopEdge = 6,
    PrintHolePunch_BottomEdge = 7,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize
{
    PrintMediaSize_Default = 0,
    PrintMediaSize_NotAvailable = 1,
    PrintMediaSize_PrinterCustom = 2,
    PrintMediaSize_BusinessCard = 3,
    PrintMediaSize_CreditCard = 4,
    PrintMediaSize_IsoA0 = 5,
    PrintMediaSize_IsoA1 = 6,
    PrintMediaSize_IsoA10 = 7,
    PrintMediaSize_IsoA2 = 8,
    PrintMediaSize_IsoA3 = 9,
    PrintMediaSize_IsoA3Extra = 10,
    PrintMediaSize_IsoA3Rotated = 11,
    PrintMediaSize_IsoA4 = 12,
    PrintMediaSize_IsoA4Extra = 13,
    PrintMediaSize_IsoA4Rotated = 14,
    PrintMediaSize_IsoA5 = 15,
    PrintMediaSize_IsoA5Extra = 16,
    PrintMediaSize_IsoA5Rotated = 17,
    PrintMediaSize_IsoA6 = 18,
    PrintMediaSize_IsoA6Rotated = 19,
    PrintMediaSize_IsoA7 = 20,
    PrintMediaSize_IsoA8 = 21,
    PrintMediaSize_IsoA9 = 22,
    PrintMediaSize_IsoB0 = 23,
    PrintMediaSize_IsoB1 = 24,
    PrintMediaSize_IsoB10 = 25,
    PrintMediaSize_IsoB2 = 26,
    PrintMediaSize_IsoB3 = 27,
    PrintMediaSize_IsoB4 = 28,
    PrintMediaSize_IsoB4Envelope = 29,
    PrintMediaSize_IsoB5Envelope = 30,
    PrintMediaSize_IsoB5Extra = 31,
    PrintMediaSize_IsoB7 = 32,
    PrintMediaSize_IsoB8 = 33,
    PrintMediaSize_IsoB9 = 34,
    PrintMediaSize_IsoC0 = 35,
    PrintMediaSize_IsoC1 = 36,
    PrintMediaSize_IsoC10 = 37,
    PrintMediaSize_IsoC2 = 38,
    PrintMediaSize_IsoC3 = 39,
    PrintMediaSize_IsoC3Envelope = 40,
    PrintMediaSize_IsoC4 = 41,
    PrintMediaSize_IsoC4Envelope = 42,
    PrintMediaSize_IsoC5 = 43,
    PrintMediaSize_IsoC5Envelope = 44,
    PrintMediaSize_IsoC6 = 45,
    PrintMediaSize_IsoC6C5Envelope = 46,
    PrintMediaSize_IsoC6Envelope = 47,
    PrintMediaSize_IsoC7 = 48,
    PrintMediaSize_IsoC8 = 49,
    PrintMediaSize_IsoC9 = 50,
    PrintMediaSize_IsoDLEnvelope = 51,
    PrintMediaSize_IsoDLEnvelopeRotated = 52,
    PrintMediaSize_IsoSRA3 = 53,
    PrintMediaSize_Japan2LPhoto = 54,
    PrintMediaSize_JapanChou3Envelope = 55,
    PrintMediaSize_JapanChou3EnvelopeRotated = 56,
    PrintMediaSize_JapanChou4Envelope = 57,
    PrintMediaSize_JapanChou4EnvelopeRotated = 58,
    PrintMediaSize_JapanDoubleHagakiPostcard = 59,
    PrintMediaSize_JapanDoubleHagakiPostcardRotated = 60,
    PrintMediaSize_JapanHagakiPostcard = 61,
    PrintMediaSize_JapanHagakiPostcardRotated = 62,
    PrintMediaSize_JapanKaku2Envelope = 63,
    PrintMediaSize_JapanKaku2EnvelopeRotated = 64,
    PrintMediaSize_JapanKaku3Envelope = 65,
    PrintMediaSize_JapanKaku3EnvelopeRotated = 66,
    PrintMediaSize_JapanLPhoto = 67,
    PrintMediaSize_JapanQuadrupleHagakiPostcard = 68,
    PrintMediaSize_JapanYou1Envelope = 69,
    PrintMediaSize_JapanYou2Envelope = 70,
    PrintMediaSize_JapanYou3Envelope = 71,
    PrintMediaSize_JapanYou4Envelope = 72,
    PrintMediaSize_JapanYou4EnvelopeRotated = 73,
    PrintMediaSize_JapanYou6Envelope = 74,
    PrintMediaSize_JapanYou6EnvelopeRotated = 75,
    PrintMediaSize_JisB0 = 76,
    PrintMediaSize_JisB1 = 77,
    PrintMediaSize_JisB10 = 78,
    PrintMediaSize_JisB2 = 79,
    PrintMediaSize_JisB3 = 80,
    PrintMediaSize_JisB4 = 81,
    PrintMediaSize_JisB4Rotated = 82,
    PrintMediaSize_JisB5 = 83,
    PrintMediaSize_JisB5Rotated = 84,
    PrintMediaSize_JisB6 = 85,
    PrintMediaSize_JisB6Rotated = 86,
    PrintMediaSize_JisB7 = 87,
    PrintMediaSize_JisB8 = 88,
    PrintMediaSize_JisB9 = 89,
    PrintMediaSize_NorthAmerica10x11 = 90,
    PrintMediaSize_NorthAmerica10x12 = 91,
    PrintMediaSize_NorthAmerica10x14 = 92,
    PrintMediaSize_NorthAmerica11x17 = 93,
    PrintMediaSize_NorthAmerica14x17 = 94,
    PrintMediaSize_NorthAmerica4x6 = 95,
    PrintMediaSize_NorthAmerica4x8 = 96,
    PrintMediaSize_NorthAmerica5x7 = 97,
    PrintMediaSize_NorthAmerica8x10 = 98,
    PrintMediaSize_NorthAmerica9x11 = 99,
    PrintMediaSize_NorthAmericaArchitectureASheet = 100,
    PrintMediaSize_NorthAmericaArchitectureBSheet = 101,
    PrintMediaSize_NorthAmericaArchitectureCSheet = 102,
    PrintMediaSize_NorthAmericaArchitectureDSheet = 103,
    PrintMediaSize_NorthAmericaArchitectureESheet = 104,
    PrintMediaSize_NorthAmericaCSheet = 105,
    PrintMediaSize_NorthAmericaDSheet = 106,
    PrintMediaSize_NorthAmericaESheet = 107,
    PrintMediaSize_NorthAmericaExecutive = 108,
    PrintMediaSize_NorthAmericaGermanLegalFanfold = 109,
    PrintMediaSize_NorthAmericaGermanStandardFanfold = 110,
    PrintMediaSize_NorthAmericaLegal = 111,
    PrintMediaSize_NorthAmericaLegalExtra = 112,
    PrintMediaSize_NorthAmericaLetter = 113,
    PrintMediaSize_NorthAmericaLetterExtra = 114,
    PrintMediaSize_NorthAmericaLetterPlus = 115,
    PrintMediaSize_NorthAmericaLetterRotated = 116,
    PrintMediaSize_NorthAmericaMonarchEnvelope = 117,
    PrintMediaSize_NorthAmericaNote = 118,
    PrintMediaSize_NorthAmericaNumber10Envelope = 119,
    PrintMediaSize_NorthAmericaNumber10EnvelopeRotated = 120,
    PrintMediaSize_NorthAmericaNumber11Envelope = 121,
    PrintMediaSize_NorthAmericaNumber12Envelope = 122,
    PrintMediaSize_NorthAmericaNumber14Envelope = 123,
    PrintMediaSize_NorthAmericaNumber9Envelope = 124,
    PrintMediaSize_NorthAmericaPersonalEnvelope = 125,
    PrintMediaSize_NorthAmericaQuarto = 126,
    PrintMediaSize_NorthAmericaStatement = 127,
    PrintMediaSize_NorthAmericaSuperA = 128,
    PrintMediaSize_NorthAmericaSuperB = 129,
    PrintMediaSize_NorthAmericaTabloid = 130,
    PrintMediaSize_NorthAmericaTabloidExtra = 131,
    PrintMediaSize_OtherMetricA3Plus = 132,
    PrintMediaSize_OtherMetricA4Plus = 133,
    PrintMediaSize_OtherMetricFolio = 134,
    PrintMediaSize_OtherMetricInviteEnvelope = 135,
    PrintMediaSize_OtherMetricItalianEnvelope = 136,
    PrintMediaSize_Prc10Envelope = 137,
    PrintMediaSize_Prc10EnvelopeRotated = 138,
    PrintMediaSize_Prc16K = 139,
    PrintMediaSize_Prc16KRotated = 140,
    PrintMediaSize_Prc1Envelope = 141,
    PrintMediaSize_Prc1EnvelopeRotated = 142,
    PrintMediaSize_Prc2Envelope = 143,
    PrintMediaSize_Prc2EnvelopeRotated = 144,
    PrintMediaSize_Prc32K = 145,
    PrintMediaSize_Prc32KBig = 146,
    PrintMediaSize_Prc32KRotated = 147,
    PrintMediaSize_Prc3Envelope = 148,
    PrintMediaSize_Prc3EnvelopeRotated = 149,
    PrintMediaSize_Prc4Envelope = 150,
    PrintMediaSize_Prc4EnvelopeRotated = 151,
    PrintMediaSize_Prc5Envelope = 152,
    PrintMediaSize_Prc5EnvelopeRotated = 153,
    PrintMediaSize_Prc6Envelope = 154,
    PrintMediaSize_Prc6EnvelopeRotated = 155,
    PrintMediaSize_Prc7Envelope = 156,
    PrintMediaSize_Prc7EnvelopeRotated = 157,
    PrintMediaSize_Prc8Envelope = 158,
    PrintMediaSize_Prc8EnvelopeRotated = 159,
    PrintMediaSize_Prc9Envelope = 160,
    PrintMediaSize_Prc9EnvelopeRotated = 161,
    PrintMediaSize_Roll04Inch = 162,
    PrintMediaSize_Roll06Inch = 163,
    PrintMediaSize_Roll08Inch = 164,
    PrintMediaSize_Roll12Inch = 165,
    PrintMediaSize_Roll15Inch = 166,
    PrintMediaSize_Roll18Inch = 167,
    PrintMediaSize_Roll22Inch = 168,
    PrintMediaSize_Roll24Inch = 169,
    PrintMediaSize_Roll30Inch = 170,
    PrintMediaSize_Roll36Inch = 171,
    PrintMediaSize_Roll54Inch = 172,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType
{
    PrintMediaType_Default = 0,
    PrintMediaType_NotAvailable = 1,
    PrintMediaType_PrinterCustom = 2,
    PrintMediaType_AutoSelect = 3,
    PrintMediaType_Archival = 4,
    PrintMediaType_BackPrintFilm = 5,
    PrintMediaType_Bond = 6,
    PrintMediaType_CardStock = 7,
    PrintMediaType_Continuous = 8,
    PrintMediaType_EnvelopePlain = 9,
    PrintMediaType_EnvelopeWindow = 10,
    PrintMediaType_Fabric = 11,
    PrintMediaType_HighResolution = 12,
    PrintMediaType_Label = 13,
    PrintMediaType_MultiLayerForm = 14,
    PrintMediaType_MultiPartForm = 15,
    PrintMediaType_Photographic = 16,
    PrintMediaType_PhotographicFilm = 17,
    PrintMediaType_PhotographicGlossy = 18,
    PrintMediaType_PhotographicHighGloss = 19,
    PrintMediaType_PhotographicMatte = 20,
    PrintMediaType_PhotographicSatin = 21,
    PrintMediaType_PhotographicSemiGloss = 22,
    PrintMediaType_Plain = 23,
    PrintMediaType_Screen = 24,
    PrintMediaType_ScreenPaged = 25,
    PrintMediaType_Stationery = 26,
    PrintMediaType_TabStockFull = 27,
    PrintMediaType_TabStockPreCut = 28,
    PrintMediaType_Transparency = 29,
    PrintMediaType_TShirtTransfer = 30,
    PrintMediaType_None = 31,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation
{
    PrintOrientation_Default = 0,
    PrintOrientation_NotAvailable = 1,
    PrintOrientation_PrinterCustom = 2,
    PrintOrientation_Portrait = 3,
    PrintOrientation_PortraitFlipped = 4,
    PrintOrientation_Landscape = 5,
    PrintOrientation_LandscapeFlipped = 6,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality
{
    PrintQuality_Default = 0,
    PrintQuality_NotAvailable = 1,
    PrintQuality_PrinterCustom = 2,
    PrintQuality_Automatic = 3,
    PrintQuality_Draft = 4,
    PrintQuality_Fax = 5,
    PrintQuality_High = 6,
    PrintQuality_Normal = 7,
    PrintQuality_Photographic = 8,
    PrintQuality_Text = 9,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple
{
    PrintStaple_Default = 0,
    PrintStaple_NotAvailable = 1,
    PrintStaple_PrinterCustom = 2,
    PrintStaple_None = 3,
    PrintStaple_StapleTopLeft = 4,
    PrintStaple_StapleTopRight = 5,
    PrintStaple_StapleBottomLeft = 6,
    PrintStaple_StapleBottomRight = 7,
    PrintStaple_StapleDualLeft = 8,
    PrintStaple_StapleDualRight = 9,
    PrintStaple_StapleDualTop = 10,
    PrintStaple_StapleDualBottom = 11,
    PrintStaple_SaddleStitch = 12,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion
{
    PrintTaskCompletion_Abandoned = 0,
    PrintTaskCompletion_Canceled = 1,
    PrintTaskCompletion_Failed = 2,
    PrintTaskCompletion_Submitted = 3,
};
struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription
{
    __x_ABI_CWindows_CFoundation_CSize PageSize;
    __x_ABI_CWindows_CFoundation_CRect ImageableRect;
    UINT32 DpiX;
    UINT32 DpiY;
};
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandlerVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintDocumentSource[] = L"Windows.Graphics.Printing.IPrintDocumentSource";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSourceVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManager[] = L"Windows.Graphics.Printing.IPrintManager";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PrintTaskRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PrintTaskRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PrintTaskRequested(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_PrintTaskRequested(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManagerStatic[] = L"Windows.Graphics.Printing.IPrintManagerStatic";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * * printingManager
        );
    HRESULT ( STDMETHODCALLTYPE *ShowPrintUIAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStaticVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,printingManager) )
    ( (This)->lpVtbl->ShowPrintUIAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManagerStatic2[] = L"Windows.Graphics.Printing.IPrintManagerStatic2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintPageInfo[] = L"Windows.Graphics.Printing.IPrintPageInfo";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DpiX )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DpiX )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DpiY )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DpiY )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfoVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_MediaSize(This,value) )
    ( (This)->lpVtbl->get_MediaSize(This,value) )
    ( (This)->lpVtbl->put_PageSize(This,value) )
    ( (This)->lpVtbl->get_PageSize(This,value) )
    ( (This)->lpVtbl->put_DpiX(This,value) )
    ( (This)->lpVtbl->get_DpiX(This,value) )
    ( (This)->lpVtbl->put_DpiY(This,value) )
    ( (This)->lpVtbl->get_DpiY(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintPageRange[] = L"Windows.Graphics.Printing.IPrintPageRange";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FirstPageNumber )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastPageNumber )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FirstPageNumber(This,value) )
    ( (This)->lpVtbl->get_LastPageNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintPageRangeFactory[] = L"Windows.Graphics.Printing.IPrintPageRangeFactory";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This,
                  INT32 firstPage,
                  INT32 lastPage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSinglePage )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory * This,
                  INT32 page,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRange * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,firstPage,lastPage,result) )
    ( (This)->lpVtbl->CreateWithSinglePage(This,page,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintPageRangeOptions[] = L"Windows.Graphics.Printing.IPrintPageRangeOptions";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AllowAllPages )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowAllPages )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowCurrentPage )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowCurrentPage )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowCustomSetOfPages )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowCustomSetOfPages )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptionsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AllowAllPages(This,value) )
    ( (This)->lpVtbl->get_AllowAllPages(This,value) )
    ( (This)->lpVtbl->put_AllowCurrentPage(This,value) )
    ( (This)->lpVtbl->get_AllowCurrentPage(This,value) )
    ( (This)->lpVtbl->put_AllowCustomSetOfPages(This,value) )
    ( (This)->lpVtbl->get_AllowCustomSetOfPages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTask[] = L"Windows.Graphics.Printing.IPrintTask";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Previewing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Previewing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Submitting )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Submitting )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Progressing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Progressing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->get_Options(This,value) )
    ( (This)->lpVtbl->add_Previewing(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Previewing(This,eventCookie) )
    ( (This)->lpVtbl->add_Submitting(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Submitting(This,eventCookie) )
    ( (This)->lpVtbl->add_Progressing(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Progressing(This,eventCookie) )
    ( (This)->lpVtbl->add_Completed(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Completed(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTask2[] = L"Windows.Graphics.Printing.IPrintTask2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsPreviewEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPreviewEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsPreviewEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPreviewEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskCompletedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Completion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptions[] = L"Windows.Graphics.Printing.IPrintTaskOptions";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Bordering )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bordering )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPagePrintTicket )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * printPageInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * printTicket
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Bordering(This,value) )
    ( (This)->lpVtbl->get_Bordering(This,value) )
    ( (This)->lpVtbl->GetPagePrintTicket(This,printPageInfo,printTicket) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptions2[] = L"Windows.Graphics.Printing.IPrintTaskOptions2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PageRangeOptions )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageRangeOptions * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomPageRanges )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting__CPrintPageRange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PageRangeOptions(This,value) )
    ( (This)->lpVtbl->get_CustomPageRanges(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCore[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCore";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPageDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
                  UINT32 jobPageNumber,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription * description
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPageDescription(This,jobPageNumber,description) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCorePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrintQuality )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrintQuality )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorMode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorMode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duplex )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duplex )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Collation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Collation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Staple )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Staple )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HolePunch )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HolePunch )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Binding )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Binding )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumberOfCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCorePropertiesVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCorePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_MediaSize(This,value) )
    ( (This)->lpVtbl->get_MediaSize(This,value) )
    ( (This)->lpVtbl->put_MediaType(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->put_PrintQuality(This,value) )
    ( (This)->lpVtbl->get_PrintQuality(This,value) )
    ( (This)->lpVtbl->put_ColorMode(This,value) )
    ( (This)->lpVtbl->get_ColorMode(This,value) )
    ( (This)->lpVtbl->put_Duplex(This,value) )
    ( (This)->lpVtbl->get_Duplex(This,value) )
    ( (This)->lpVtbl->put_Collation(This,value) )
    ( (This)->lpVtbl->get_Collation(This,value) )
    ( (This)->lpVtbl->put_Staple(This,value) )
    ( (This)->lpVtbl->get_Staple(This,value) )
    ( (This)->lpVtbl->put_HolePunch(This,value) )
    ( (This)->lpVtbl->get_HolePunch(This,value) )
    ( (This)->lpVtbl->put_Binding(This,value) )
    ( (This)->lpVtbl->get_Binding(This,value) )
    ( (This)->lpVtbl->get_MinCopies(This,value) )
    ( (This)->lpVtbl->get_MaxCopies(This,value) )
    ( (This)->lpVtbl->put_NumberOfCopies(This,value) )
    ( (This)->lpVtbl->get_NumberOfCopies(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayedOptions )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfigurationVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayedOptions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskProgressingEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DocumentPageCount )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DocumentPageCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequest[] = L"Windows.Graphics.Printing.IPrintTaskRequest";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePrintTask )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
                  __RPC__in HSTRING title,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * * task
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
    ( (This)->lpVtbl->CreatePrintTask(This,title,handler,task) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequestedDeferral[] = L"Windows.Graphics.Printing.IPrintTaskRequestedDeferral";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferralVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskRequestedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * source
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
    ( (This)->lpVtbl->SetSource(This,source) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral[] = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferralVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport[] = L"Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsPrinterTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPrinterTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Is3DManufacturingTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Is3DManufacturingTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupportVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsPrinterTargetEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPrinterTargetEnabled(This,value) )
    ( (This)->lpVtbl->put_Is3DManufacturingTargetEnabled(This,value) )
    ( (This)->lpVtbl->get_Is3DManufacturingTargetEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrintQuality )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorMode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duplex )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Collation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Staple )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HolePunch )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Binding )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Copies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NUp )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputBin )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStaticVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaSize(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_PrintQuality(This,value) )
    ( (This)->lpVtbl->get_ColorMode(This,value) )
    ( (This)->lpVtbl->get_Duplex(This,value) )
    ( (This)->lpVtbl->get_Collation(This,value) )
    ( (This)->lpVtbl->get_Staple(This,value) )
    ( (This)->lpVtbl->get_HolePunch(This,value) )
    ( (This)->lpVtbl->get_Binding(This,value) )
    ( (This)->lpVtbl->get_Copies(This,value) )
    ( (This)->lpVtbl->get_NUp(This,value) )
    ( (This)->lpVtbl->get_InputBin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bordering )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bordering(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic3[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic3";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CustomPageRanges )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CustomPageRanges(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic3;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintManager[] = L"Windows.Graphics.Printing.PrintManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintPageInfo[] = L"Windows.Graphics.Printing.PrintPageInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintPageRange[] = L"Windows.Graphics.Printing.PrintPageRange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintPageRangeOptions[] = L"Windows.Graphics.Printing.PrintPageRangeOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTask[] = L"Windows.Graphics.Printing.PrintTask";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskCompletedEventArgs[] = L"Windows.Graphics.Printing.PrintTaskCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskOptions[] = L"Windows.Graphics.Printing.PrintTaskOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskProgressingEventArgs[] = L"Windows.Graphics.Printing.PrintTaskProgressingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequest[] = L"Windows.Graphics.Printing.PrintTaskRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequestedDeferral[] = L"Windows.Graphics.Printing.PrintTaskRequestedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequestedEventArgs[] = L"Windows.Graphics.Printing.PrintTaskRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing.PrintTaskSourceRequestedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral[] = L"Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_StandardPrintTaskOptions[] = L"Windows.Graphics.Printing.StandardPrintTaskOptions";
       
       
#pragma clang diagnostic pop
