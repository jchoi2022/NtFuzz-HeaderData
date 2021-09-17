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
#include "Windows.Devices.h"
#include "Windows.Devices.Gpio.Provider.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioController __x_ABI_CWindows_CDevices_CGpio_CIGpioController;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPin __x_ABI_CWindows_CDevices_CGpio_CIGpioPin;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs;
struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord;
typedef interface __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord;
typedef struct __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__out struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;
interface __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord;
typedef struct __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;
interface __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CGpio__CGpioController __FIIterator_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIIterator_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGpio__CGpioController __FIIterable_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIIterable_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGpio__CGpioController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord;
typedef struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                       struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;
interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                       __x_ABI_CWindows_CDevices_CGpio_CIGpioController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord;
typedef struct __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;
interface __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, __RPC__out __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode;
typedef struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount;
typedef struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord;
enum __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity
{
    GpioChangePolarity_Falling = 0,
    GpioChangePolarity_Rising = 1,
    GpioChangePolarity_Both = 2,
};
enum __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus
{
    GpioOpenStatus_PinOpened = 0,
    GpioOpenStatus_PinUnavailable = 1,
    GpioOpenStatus_SharingViolation = 2,
    GpioOpenStatus_MuxingConflict = 3,
    GpioOpenStatus_UnknownError = 4,
};
enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode
{
    GpioPinDriveMode_Input = 0,
    GpioPinDriveMode_Output = 1,
    GpioPinDriveMode_InputPullUp = 2,
    GpioPinDriveMode_InputPullDown = 3,
    GpioPinDriveMode_OutputOpenDrain = 4,
    GpioPinDriveMode_OutputOpenDrainPullUp = 5,
    GpioPinDriveMode_OutputOpenSource = 6,
    GpioPinDriveMode_OutputOpenSourcePullDown = 7,
};
enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge
{
    GpioPinEdge_FallingEdge = 0,
    GpioPinEdge_RisingEdge = 1,
};
enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue
{
    GpioPinValue_Low = 0,
    GpioPinValue_High = 1,
};
enum __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode
{
    GpioSharingMode_Exclusive = 0,
    GpioSharingMode_SharedReadOnly = 1,
};
struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount
{
    UINT64 Count;
    __x_ABI_CWindows_CFoundation_CTimeSpan RelativeTime;
};
struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord
{
    __x_ABI_CWindows_CFoundation_CTimeSpan RelativeTime;
    __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge Edge;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeCounter[] = L"Windows.Devices.Gpio.IGpioChangeCounter";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStarted )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Polarity(This,value) )
    ( (This)->lpVtbl->get_Polarity(This,value) )
    ( (This)->lpVtbl->get_IsStarted(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->Read(This,value) )
    ( (This)->lpVtbl->Reset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeCounterFactory[] = L"Windows.Devices.Gpio.IGpioChangeCounterFactory";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * pin,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,pin,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeReader[] = L"Windows.Devices.Gpio.IGpioChangeReader";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Capacity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverflowed )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStarted )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord * value
        );
    HRESULT ( STDMETHODCALLTYPE *PeekNextItem )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAllItems )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * * value
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForItemsAsync )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
                  INT32 count,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Capacity(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->get_IsEmpty(This,value) )
    ( (This)->lpVtbl->get_IsOverflowed(This,value) )
    ( (This)->lpVtbl->put_Polarity(This,value) )
    ( (This)->lpVtbl->get_Polarity(This,value) )
    ( (This)->lpVtbl->get_IsStarted(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->GetNextItem(This,value) )
    ( (This)->lpVtbl->PeekNextItem(This,value) )
    ( (This)->lpVtbl->GetAllItems(This,value) )
    ( (This)->lpVtbl->WaitForItemsAsync(This,count,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeReaderFactory[] = L"Windows.Devices.Gpio.IGpioChangeReaderFactory";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * pin,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithCapacity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * pin,
                  INT32 minCapacity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,pin,value) )
    ( (This)->lpVtbl->CreateWithCapacity(This,pin,minCapacity,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioController[] = L"Windows.Devices.Gpio.IGpioController";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                           __RPC__out INT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *OpenPin )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                  INT32 pinNumber,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * * pin
        );
                    HRESULT ( STDMETHODCALLTYPE *OpenPinWithSharingMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                  INT32 pinNumber,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode sharingMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * * pin
        );
    HRESULT ( STDMETHODCALLTYPE *TryOpenPin )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
                  INT32 pinNumber,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode sharingMode,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * * pin,
                   __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus * openStatus,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinCount(This,value) )
    ( (This)->lpVtbl->OpenPin(This,pinNumber,pin) )
    ( (This)->lpVtbl->OpenPinWithSharingMode(This,pinNumber,sharingMode,pin) )
    ( (This)->lpVtbl->TryOpenPin(This,pinNumber,sharingMode,pin,openStatus,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioControllerStatics[] = L"Windows.Devices.Gpio.IGpioControllerStatics";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioControllerStatics2[] = L"Windows.Devices.Gpio.IGpioControllerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * provider,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioPin[] = L"Windows.Devices.Gpio.IGpioPin";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinNumber )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsDriveModeSupported )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode driveMode,
                           __RPC__out boolean * supported
        );
    HRESULT ( STDMETHODCALLTYPE *GetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                  __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue value
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioPinVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPin
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ValueChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ValueChanged(This,token) )
    ( (This)->lpVtbl->get_DebounceTimeout(This,value) )
    ( (This)->lpVtbl->put_DebounceTimeout(This,value) )
    ( (This)->lpVtbl->get_PinNumber(This,value) )
    ( (This)->lpVtbl->get_SharingMode(This,value) )
    ( (This)->lpVtbl->IsDriveModeSupported(This,driveMode,supported) )
    ( (This)->lpVtbl->GetDriveMode(This,value) )
    ( (This)->lpVtbl->SetDriveMode(This,value) )
    ( (This)->lpVtbl->Write(This,value) )
    ( (This)->lpVtbl->Read(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioPin;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs[] = L"Windows.Devices.Gpio.IGpioPinValueChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Edge )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Edge(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioChangeCounter[] = L"Windows.Devices.Gpio.GpioChangeCounter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioChangeReader[] = L"Windows.Devices.Gpio.GpioChangeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioController[] = L"Windows.Devices.Gpio.GpioController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioPin[] = L"Windows.Devices.Gpio.GpioPin";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioPinValueChangedEventArgs[] = L"Windows.Devices.Gpio.GpioPinValueChangedEventArgs";
       
       
#pragma clang diagnostic pop
