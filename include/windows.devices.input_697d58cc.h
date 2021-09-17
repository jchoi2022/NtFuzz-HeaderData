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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseDevice __x_ABI_CWindows_CDevices_CInput_CIMouseDevice;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPenDevice __x_ABI_CWindows_CDevices_CInput_CIPenDevice;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice __x_ABI_CWindows_CDevices_CInput_CIPointerDevice;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities;
typedef interface __FIIterator_1_Windows__CDevices__CInput__CPointerDevice __FIIterator_1_Windows__CDevices__CInput__CPointerDevice;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CInput__CPointerDevice;
typedef struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceVtbl;
interface __FIIterator_1_Windows__CDevices__CInput__CPointerDevice
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CInput__CPointerDevice __FIIterable_1_Windows__CDevices__CInput__CPointerDevice;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CInput__CPointerDevice;
typedef struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CInput__CPointerDevice **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceVtbl;
interface __FIIterable_1_Windows__CDevices__CInput__CPointerDevice
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage;
typedef interface __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage;
typedef struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__out struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl;
interface __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage;
typedef struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl;
interface __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CInput__CPointerDevice;
typedef struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                       __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceVtbl;
interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage;
typedef struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                       struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl;
interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;
typedef struct __x_ABI_CWindows_CDevices_CInput_CMouseDelta __x_ABI_CWindows_CDevices_CInput_CMouseDelta;
typedef struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage;
enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType
{
    PointerDeviceType_Touch = 0,
    PointerDeviceType_Pen = 1,
    PointerDeviceType_Mouse = 2,
};
struct __x_ABI_CWindows_CDevices_CInput_CMouseDelta
{
    INT32 X;
    INT32 Y;
};
struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage
{
    UINT32 UsagePage;
    UINT32 Usage;
    INT32 MinLogical;
    INT32 MaxLogical;
    INT32 MinPhysical;
    INT32 MaxPhysical;
    UINT32 Unit;
    FLOAT PhysicalMultiplier;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IKeyboardCapabilities[] = L"Windows.Devices.Input.IKeyboardCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyboardPresent )(
        __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyboardPresent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseCapabilities[] = L"Windows.Devices.Input.IMouseCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MousePresent )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalWheelPresent )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalWheelPresent )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SwapButtons )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfButtons )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MousePresent(This,value) )
    ( (This)->lpVtbl->get_VerticalWheelPresent(This,value) )
    ( (This)->lpVtbl->get_HorizontalWheelPresent(This,value) )
    ( (This)->lpVtbl->get_SwapButtons(This,value) )
    ( (This)->lpVtbl->get_NumberOfButtons(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseDevice[] = L"Windows.Devices.Input.IMouseDevice";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MouseMoved )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MouseMoved )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIMouseDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MouseMoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_MouseMoved(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseDeviceStatics[] = L"Windows.Devices.Input.IMouseDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * * mouseDevice
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,mouseDevice) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseEventArgs[] = L"Windows.Devices.Input.IMouseEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MouseDelta )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CMouseDelta * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MouseDelta(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPenDevice[] = L"Windows.Devices.Input.IPenDevice";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPenDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PenId )(
        __x_ABI_CWindows_CDevices_CInput_CIPenDevice * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIPenDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIPenDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPenDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PenId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPenDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPenDeviceStatics[] = L"Windows.Devices.Input.IPenDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFromPointerId )(
        __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics * This,
                  UINT32 pointerId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIPenDevice * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPenDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFromPointerId(This,pointerId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPenDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDevice[] = L"Windows.Devices.Input.IPointerDevice";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIntegrated )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxContacts )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceRect )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScreenRect )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedUsages )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_IsIntegrated(This,value) )
    ( (This)->lpVtbl->get_MaxContacts(This,value) )
    ( (This)->lpVtbl->get_PhysicalDeviceRect(This,value) )
    ( (This)->lpVtbl->get_ScreenRect(This,value) )
    ( (This)->lpVtbl->get_SupportedUsages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDevice2[] = L"Windows.Devices.Input.IPointerDevice2";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPointersWithZDistance )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2Vtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPointersWithZDistance(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDevice2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDeviceStatics[] = L"Windows.Devices.Input.IPointerDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPointerDevice )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
                  UINT32 pointerId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * * pointerDevice
        );
    HRESULT ( STDMETHODCALLTYPE *GetPointerDevices )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * * pointerDevices
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPointerDevice(This,pointerId,pointerDevice) )
    ( (This)->lpVtbl->GetPointerDevices(This,pointerDevices) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_ITouchCapabilities[] = L"Windows.Devices.Input.ITouchCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CInput_CITouchCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TouchPresent )(
        __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contacts )(
        __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CITouchCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CITouchCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TouchPresent(This,value) )
    ( (This)->lpVtbl->get_Contacts(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CITouchCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_KeyboardCapabilities[] = L"Windows.Devices.Input.KeyboardCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseCapabilities[] = L"Windows.Devices.Input.MouseCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseDevice[] = L"Windows.Devices.Input.MouseDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseEventArgs[] = L"Windows.Devices.Input.MouseEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_PenDevice[] = L"Windows.Devices.Input.PenDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_PointerDevice[] = L"Windows.Devices.Input.PointerDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_TouchCapabilities[] = L"Windows.Devices.Input.TouchCapabilities";
       
       
#pragma clang diagnostic pop
